using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using UnityEditor;
using UnityEngine;

#region 辅助代码

public enum MatchType
{
    Add,
    Remove,
    Get
}

public static class GUIStyles
{
    /// <summary>
    /// 有错误的foldout的外观
    /// </summary>
    public static GUIStyle ErrorFoldoutStyle;

    /// <summary>
    /// 没有错误的foldout的外观
    /// </summary>
    public static GUIStyle NormalFoldoutStyle;

    /// <summary>
    /// 有错误的Label的外观
    /// </summary>
    public static GUIStyle ErrorLabelStyle;

    /// <summary>
    /// 没有错误的Label的外观
    /// </summary>
    public static GUIStyle NormalLabelStyle;

    static GUIStyles()
    {
        // 使用HSV调整更精确地控制饱和度
        Color softRed = Color.HSVToRGB(0f, 0.75f, 0.9f); // 色相0=红色，饱和度60%，明度80%

        ErrorFoldoutStyle = new GUIStyle(EditorStyles.foldout);
        ErrorFoldoutStyle.normal.textColor = softRed;
        ErrorFoldoutStyle.onNormal.textColor = softRed;
        ErrorFoldoutStyle.hover.textColor = softRed;
        ErrorFoldoutStyle.onHover.textColor = softRed;
        ErrorFoldoutStyle.active.textColor = softRed;
        ErrorFoldoutStyle.onActive.textColor = softRed;
        ErrorFoldoutStyle.focused.textColor = softRed;
        ErrorFoldoutStyle.onFocused.textColor = softRed;

        NormalFoldoutStyle = new GUIStyle(EditorStyles.foldout);
        NormalFoldoutStyle.normal.textColor = Color.white;
        NormalFoldoutStyle.onNormal.textColor = Color.white;
        NormalFoldoutStyle.hover.textColor = Color.white;
        NormalFoldoutStyle.onHover.textColor = Color.white;
        NormalFoldoutStyle.active.textColor = Color.white;
        NormalFoldoutStyle.onActive.textColor = Color.white;
        NormalFoldoutStyle.focused.textColor = Color.white;
        NormalFoldoutStyle.onFocused.textColor = Color.white;

        ErrorLabelStyle = new GUIStyle(EditorStyles.label);
        ErrorLabelStyle.normal.textColor = softRed;
        ErrorLabelStyle.onNormal.textColor = softRed;
        ErrorLabelStyle.hover.textColor = softRed;
        ErrorLabelStyle.onHover.textColor = softRed;
        ErrorLabelStyle.active.textColor = softRed;
        ErrorLabelStyle.onActive.textColor = softRed;
        ErrorLabelStyle.focused.textColor = softRed;
        ErrorLabelStyle.onFocused.textColor = softRed;

        NormalLabelStyle = new GUIStyle(EditorStyles.label);
    }
}

public class EventGroupInfo
{
    public bool isFoldout;
    public bool HasError;

    public List<EventUsageInfo> Adds = new List<EventUsageInfo>();
    public List<EventUsageInfo> Removes = new List<EventUsageInfo>();
    public List<EventUsageInfo> Gets = new List<EventUsageInfo>();
}

public class EventUsageInfo
{
    public string scriptName;
    public int Line;
    public string AssetPath;

    public EventUsageInfo(string scriptName, string assetPath, int line)
    {
        this.scriptName = scriptName;
        AssetPath = assetPath;
        Line = line;
    }
}

#endregion




#region 新增的搜索相关枚举和类

/// <summary>
/// 搜索模式
/// </summary>
public enum SearchMode
{
    EventName,  // 搜索事件名称
    ScriptName, // 搜索脚本名称
    All         // 搜索全部
}

/// <summary>
/// 匹配类型
/// </summary>
public enum SearchMatchType
{
    EventName,  // 事件名称匹配
    ScriptName  // 脚本名称匹配
}

/// <summary>
/// 搜索匹配项
/// </summary>
[System.Serializable]
public class SearchMatch
{
    public SearchMatchType MatchType;
    public string EventName;
    public string ScriptName;
    public int Line;
    public MatchType? UsageType;
}

/// <summary>
/// 搜索结果
/// </summary>
[System.Serializable]
public class EventSearchResult
{
    public string EventName;
    public EventGroupInfo EventGroup;
    public List<SearchMatch> Matches = new List<SearchMatch>();
}

#endregion

public class EventViewer : EditorWindow
{
    [MenuItem("Tools Window/Event Center/事件查看器")]
    private static void Open() => EditorWindow.GetWindow<EventViewer>("事件查看器");

    private static string m_NotesText = "本窗口只能捕获静态字符串，动态字符串无法捕获其准确内容\n事件查看器会忽略被注释的代码与Editor文件夹内的代码。";

    
    // 新增：搜索相关字段
    [SerializeField] private string m_SearchText = "";
    [SerializeField] private SearchMode m_SearchMode = SearchMode.EventName;
    [SerializeField] private bool m_SearchCaseSensitive = false;
#pragma warning disable CS0414 // 字段已被赋值，但它的值从未被使用
    [SerializeField] private bool m_SearchInProgress = false;
#pragma warning restore CS0414 // 字段已被赋值，但它的值从未被使用
    [SerializeField] private int m_SearchResultCount = 0;
    [SerializeField] private List<EventSearchResult> m_SearchResults = new List<EventSearchResult>();
    
    // 新增：过滤相关字段
    [SerializeField] private bool m_ShowAddEvents = true;
    [SerializeField] private bool m_ShowRemoveEvents = true;
    [SerializeField] private bool m_ShowGetEvents = true;
    [SerializeField] private bool m_ShowErrorEventsOnly = false;
    [SerializeField] private bool m_ShowSearchFilters = false;
    
    #region 正则表达式

// 预编译的正则表达式
    private static readonly Regex m_AddRegex = new Regex(
        @"(?<!public\s|private\s|protected\s|internal\s)(?<!\bvoid\s)[\w.]*?AddEvent\s*(?:<.*?>)?\s*\(\s*([^,]+?)\s*(?:,|\))",
        RegexOptions.Compiled | RegexOptions.Singleline);

// 修复：使泛型参数可选
    private static readonly Regex m_GetRegex = new Regex(
        @"(?<!public\s|private\s|protected\s|internal\s)(?<!\bvoid\s)[\w.]*?GetEvent\s*(?:<.*?>)?\s*\(\s*([^,]+?)\s*(?:,|\))",
        RegexOptions.Compiled | RegexOptions.Singleline);

    private static readonly Regex m_RemoveRegex = new Regex(
        @"(?<![""'`])\.RemoveEvent\s*\(\s*([^)]+?)\s*\)",
        RegexOptions.Compiled | RegexOptions.Singleline);

// 接口检测正则表达式也预编译
    private static readonly Regex m_InterfaceRegex1 = new Regex(
        @"class\s+\w+\s*:\s*[^{]*IEventCenter\s*<\s*[^>]+\s*>",
        RegexOptions.Compiled | RegexOptions.Singleline);

    private static readonly Regex m_InterfaceRegex2 = new Regex(
        @"\bIEventCenter\s*<\s*[^>]+\s*>(?=\s*[,{])",
        RegexOptions.Compiled | RegexOptions.Singleline);

    private static readonly Regex m_InterfaceRegex3 = new Regex(
        @"class\s+(\w+)\s*:\s*(\w+\s*,\s*)*IEventCenter\s*<\s*[^>]+\s*>*(\s*,\s*\w+)*\s*\{?",
        RegexOptions.Compiled | RegexOptions.Singleline);

    #endregion

    
    
    
    
    private Vector2 m_ScrollPosition;
    
    // 新增：扫描路径相关字段
    [SerializeField] private string m_ScanPath = "Assets/HybridCLRGenerate";
    [SerializeField] private List<string> m_RecentScanPaths = new List<string>();
    [SerializeField] private int m_MaxRecentPaths = 5;
    [SerializeField] private bool m_ShowRecentPaths = false;
    [SerializeField] private bool m_AutoSavePath = true;
    [SerializeField] private bool m_RecursiveScan = true;
    
    private static List<string> m_ScriptPaths = new List<string>();
    private static readonly Dictionary<string, EventGroupInfo> m_Events = new Dictionary<string, EventGroupInfo>();
    private static HashSet<string> eventCenterClasses = new HashSet<string>();
    
    // 序列化键
    private const string SCAN_PATH_KEY = "EventViewer_ScanPath";
    private const string RECENT_PATHS_KEY = "EventViewer_RecentPaths";
    private const string AUTO_SAVE_KEY = "EventViewer_AutoSave";
    private const string RECURSIVE_KEY = "EventViewer_RecursiveScan";

    private void OnEnable()
    {
        LoadSettings();
        // 加载搜索相关设置
        LoadSearchSettings();
    }

    private void OnGUI()
    {
        DrawToolbar();
        
        EditorGUILayout.Space(5);
        DrawSeparatorWithShadow();
        EditorGUILayout.Space(5);
        
        DrawScanControls();
        
        EditorGUILayout.Space(5);
        DrawSeparatorWithShadow();
        EditorGUILayout.Space(5);
        
        // 新增：搜索功能区
        DrawSearchControls();
        
        EditorGUILayout.Space(5);
        DrawSeparatorWithShadow();
        EditorGUILayout.Space(5);
        
        // 修改：添加折叠/展开按钮
        DrawEventListControls();
        
        EditorGUILayout.HelpBox(m_NotesText, MessageType.Warning, true);
        
        // 修改：根据搜索结果显示不同内容
        if (!string.IsNullOrEmpty(m_SearchText) && m_SearchResults.Count > 0)
        {
            RenderSearchResults();
        }
        else if (!string.IsNullOrEmpty(m_SearchText))
        {
            RenderNoSearchResults();
        }
        else
        {
            RenderEventGroups();
        }
        
        if (GUILayout.Button("打开或关闭 所有列表", GUILayout.Height(24)))
        {
            ToggleAllFoldouts();
        }
        
        GUILayout.FlexibleSpace();
    }
    
    
    /// <summary>
    /// 加载搜索设置
    /// </summary>
    private void LoadSearchSettings()
    {
        m_SearchCaseSensitive = EditorPrefs.GetBool("EventViewer_SearchCaseSensitive", false);
        m_ShowAddEvents = EditorPrefs.GetBool("EventViewer_ShowAddEvents", true);
        m_ShowRemoveEvents = EditorPrefs.GetBool("EventViewer_ShowRemoveEvents", true);
        m_ShowGetEvents = EditorPrefs.GetBool("EventViewer_ShowGetEvents", true);
        m_ShowErrorEventsOnly = EditorPrefs.GetBool("EventViewer_ShowErrorEventsOnly", false);
    }
    
    /// <summary>
    /// 保存搜索设置
    /// </summary>
    private void SaveSearchSettings()
    {
        EditorPrefs.SetBool("EventViewer_SearchCaseSensitive", m_SearchCaseSensitive);
        EditorPrefs.SetBool("EventViewer_ShowAddEvents", m_ShowAddEvents);
        EditorPrefs.SetBool("EventViewer_ShowRemoveEvents", m_ShowRemoveEvents);
        EditorPrefs.SetBool("EventViewer_ShowGetEvents", m_ShowGetEvents);
        EditorPrefs.SetBool("EventViewer_ShowErrorEventsOnly", m_ShowErrorEventsOnly);
    }
    
     /// <summary>
    /// 绘制高级过滤选项
    /// </summary>
    private void DrawAdvancedFilters()
    {
        EditorGUI.indentLevel++;
        
        EditorGUILayout.BeginVertical(EditorStyles.helpBox);
        
        EditorGUILayout.LabelField("显示事件类型:", EditorStyles.miniBoldLabel);
        
        EditorGUILayout.BeginHorizontal();
        m_ShowAddEvents = EditorGUILayout.ToggleLeft("添加监听", m_ShowAddEvents, GUILayout.Width(80));
        m_ShowRemoveEvents = EditorGUILayout.ToggleLeft("移除监听", m_ShowRemoveEvents, GUILayout.Width(80));
        m_ShowGetEvents = EditorGUILayout.ToggleLeft("获取事件", m_ShowGetEvents, GUILayout.Width(80));
        EditorGUILayout.EndHorizontal();
        
        EditorGUILayout.Space(5);
        
        m_ShowErrorEventsOnly = EditorGUILayout.ToggleLeft("只显示有错误的事件", m_ShowErrorEventsOnly);
        
        EditorGUILayout.Space(5);
        
        EditorGUILayout.EndVertical();
        
        EditorGUI.indentLevel--;
    }
    
    /// <summary>
    /// 绘制事件列表控制按钮
    /// </summary>
    private void DrawEventListControls()
    {
        EditorGUILayout.BeginHorizontal();
        
        if (GUILayout.Button("展开所有", GUILayout.Height(24)))
        {
            ExpandAllFoldouts(true);
        }
        
        if (GUILayout.Button("折叠所有", GUILayout.Height(24)))
        {
            ExpandAllFoldouts(false);
        }
        
        GUILayout.FlexibleSpace();
        
        if (GUILayout.Button("导出结果", GUILayout.Height(24)))
        {
            ExportSearchResults();
        }
        
        EditorGUILayout.EndHorizontal();
    }
    
    /// <summary>
    /// 执行搜索
    /// </summary>
    private void PerformSearch()
    {
        if (string.IsNullOrEmpty(m_SearchText))
        {
            ClearSearchResults();
            return;
        }
        
        m_SearchResults.Clear();
        m_SearchInProgress = true;
        
        try
        {
            EditorUtility.DisplayProgressBar("搜索事件", "正在搜索匹配的事件...", 0.5f);
            
            // 准备搜索选项
            StringComparison comparison = m_SearchCaseSensitive ? 
                StringComparison.Ordinal : StringComparison.OrdinalIgnoreCase;
            
            // 遍历所有事件
            foreach (var kvp in m_Events)
            {
                string eventName = kvp.Key;
                EventGroupInfo group = kvp.Value;
                
                // 检查是否只显示错误事件
                if (m_ShowErrorEventsOnly && !group.HasError)
                {
                    continue;
                }
                
                // 根据搜索模式进行匹配
                bool matchFound = false;
                List<SearchMatch> matches = new List<SearchMatch>();
                
                // 搜索事件名称
                if (m_SearchMode == SearchMode.EventName || m_SearchMode == SearchMode.All)
                {
                    if (eventName.IndexOf(m_SearchText, comparison) >= 0)
                    {
                        matchFound = true;
                        matches.Add(new SearchMatch { MatchType = SearchMatchType.EventName, EventName = eventName });
                    }
                }
                
                // 搜索脚本名称
                if (m_SearchMode == SearchMode.ScriptName || m_SearchMode == SearchMode.All)
                {
                    // 检查添加监听
                    if (m_ShowAddEvents)
                    {
                        foreach (var add in group.Adds)
                        {
                            if (add.scriptName.IndexOf(m_SearchText, comparison) >= 0)
                            {
                                matchFound = true;
                                matches.Add(new SearchMatch 
                                { 
                                    MatchType = SearchMatchType.ScriptName, 
                                    EventName = eventName,
                                    ScriptName = add.scriptName,
                                    Line = add.Line,
                                    UsageType = MatchType.Add
                                });
                            }
                        }
                    }
                    
                    // 检查移除监听
                    if (m_ShowRemoveEvents)
                    {
                        foreach (var remove in group.Removes)
                        {
                            if (remove.scriptName.IndexOf(m_SearchText, comparison) >= 0)
                            {
                                matchFound = true;
                                matches.Add(new SearchMatch 
                                { 
                                    MatchType = SearchMatchType.ScriptName, 
                                    EventName = eventName,
                                    ScriptName = remove.scriptName,
                                    Line = remove.Line,
                                    UsageType = MatchType.Remove
                                });
                            }
                        }
                    }
                    
                    // 检查获取事件
                    if (m_ShowGetEvents)
                    {
                        foreach (var get in group.Gets)
                        {
                            if (get.scriptName.IndexOf(m_SearchText, comparison) >= 0)
                            {
                                matchFound = true;
                                matches.Add(new SearchMatch 
                                { 
                                    MatchType = SearchMatchType.ScriptName, 
                                    EventName = eventName,
                                    ScriptName = get.scriptName,
                                    Line = get.Line,
                                    UsageType = MatchType.Get
                                });
                            }
                        }
                    }
                }
                
                // 如果找到匹配，添加到结果列表
                if (matchFound)
                {
                    m_SearchResults.Add(new EventSearchResult
                    {
                        EventName = eventName,
                        EventGroup = group,
                        Matches = matches
                    });
                }
            }
            
            m_SearchResultCount = m_SearchResults.Count;
            
            EditorUtility.ClearProgressBar();
            
            // 自动展开所有匹配的事件
            foreach (var result in m_SearchResults)
            {
                result.EventGroup.isFoldout = true;
            }
        }
        catch (System.Exception e)
        {
            EditorUtility.ClearProgressBar();
            Debug.LogError($"搜索事件时出错: {e}");
        }
        finally
        {
            m_SearchInProgress = false;
            Repaint();
        }
    }
    
    /// <summary>
    /// 清除搜索结果
    /// </summary>
    private void ClearSearchResults()
    {
        m_SearchText = "";
        m_SearchResults.Clear();
        m_SearchResultCount = 0;
        Repaint();
    }
    
    /// <summary>
    /// 展开或折叠所有事件
    /// </summary>
    private void ExpandAllFoldouts(bool expand)
    {
        if (m_Events.Count == 0) return;
        
        foreach (var group in m_Events.Values)
        {
            group.isFoldout = expand;
        }
        
        Repaint();
    }
    
    /// <summary>
    /// 导出搜索结果
    /// </summary>
    private void ExportSearchResults()
    {
        string exportPath = EditorUtility.SaveFilePanel("导出搜索结果", "", "EventSearchResults.txt", "txt");
        if (!string.IsNullOrEmpty(exportPath))
        {
            try
            {
                using (StreamWriter writer = new StreamWriter(exportPath))
                {
                    writer.WriteLine($"事件搜索结果 - {DateTime.Now}");
                    writer.WriteLine($"搜索条件: {m_SearchText}");
                    writer.WriteLine($"搜索模式: {m_SearchMode}");
                    writer.WriteLine($"区分大小写: {m_SearchCaseSensitive}");
                    writer.WriteLine($"匹配数量: {m_SearchResults.Count}");
                    writer.WriteLine("=".PadRight(80, '='));
                    writer.WriteLine();
                    
                    foreach (var result in m_SearchResults)
                    {
                        writer.WriteLine($"事件: {result.EventName}");
                        writer.WriteLine($"错误状态: {(result.EventGroup.HasError ? "有错误(未注册)" : "正常")}");
                        writer.WriteLine($"匹配项: {result.Matches.Count} 个");
                        
                        foreach (var match in result.Matches)
                        {
                            string matchType = match.MatchType.ToString();
                            string usageType = match.UsageType.HasValue ? match.UsageType.ToString() : "N/A";
                            
                            writer.WriteLine($"  - 匹配类型: {matchType}");
                            if (matchType == SearchMatchType.ScriptName.ToString())
                            {
                                writer.WriteLine($"    脚本: {match.ScriptName} (第{match.Line}行)");
                                writer.WriteLine($"    使用类型: {usageType}");
                            }
                            writer.WriteLine();
                        }
                        
                        writer.WriteLine("---");
                    }
                    
                    writer.WriteLine("=".PadRight(80, '='));
                    writer.WriteLine($"导出完成于: {DateTime.Now}");
                }
                
                EditorUtility.DisplayDialog("导出成功", $"搜索结果已导出到:\n{exportPath}", "确定");
            }
            catch (System.Exception e)
            {
                EditorUtility.DisplayDialog("导出失败", $"导出过程中发生错误:\n{e.Message}", "确定");
            }
        }
    }
    
    /// <summary>
    /// 渲染搜索结果
    /// </summary>
    private void RenderSearchResults()
    {
        EditorGUILayout.LabelField($"搜索结果 ({m_SearchResults.Count} 个匹配)", EditorStyles.boldLabel);
        EditorGUILayout.Space(5);
        
        m_ScrollPosition = GUILayout.BeginScrollView(m_ScrollPosition);
        
        foreach (var result in m_SearchResults)
        {
            DrawEventGroup(result.EventName, result.EventGroup);
            DrawSeparatorWithShadow();
        }
        
        GUILayout.EndScrollView();
    }
    
    /// <summary>
    /// 渲染无搜索结果提示
    /// </summary>
    private void RenderNoSearchResults()
    {
        GUILayout.FlexibleSpace();
        
        EditorGUILayout.BeginVertical();
        GUILayout.FlexibleSpace();
        
        EditorGUILayout.HelpBox($"未找到包含 '{m_SearchText}' 的事件", MessageType.Info);
        
        GUILayout.FlexibleSpace();
        EditorGUILayout.EndVertical();
    }
    
    /// <summary>
    /// 渲染事件组
    /// </summary>
    private void RenderEventGroups()
    {
        if (m_Events.Count == 0)
        {
            EditorGUILayout.HelpBox("未找到任何事件，请点击扫描按钮", MessageType.Info);
            return;
        }

        DrawSeparatorWithShadow();
        
        // 统计信息
        GUILayout.BeginHorizontal();
        GUILayout.Label($"总计: {m_Events.Count} 个事件", EditorStyles.boldLabel);
        GUILayout.FlexibleSpace();
        int errorCount = m_Events.Count(g => g.Value.HasError);
        if (errorCount > 0)
        {
            GUILayout.Label($"错误: {errorCount} 个", GUIStyles.ErrorLabelStyle);
        }
        GUILayout.EndHorizontal();
        
        EditorGUILayout.Space(5);
        
        m_ScrollPosition = GUILayout.BeginScrollView(m_ScrollPosition);
        
        foreach (var (eventName, eventGroup) in m_Events)
        {
            // 应用高级过滤
            if (m_ShowErrorEventsOnly && !eventGroup.HasError)
            {
                continue;
            }
            
            DrawEventGroup(eventName, eventGroup);
            DrawSeparatorWithShadow();
        }
        
        GUILayout.EndScrollView();
    }
    
     /// <summary>
    /// 绘制搜索控制界面
    /// </summary>
    private void DrawSearchControls()
    {
        EditorGUILayout.LabelField("事件搜索", EditorStyles.boldLabel);
        
        // 搜索框
        EditorGUILayout.BeginHorizontal();
        GUILayout.Label("🔍", GUILayout.Width(20));
        
        // 监听回车键搜索
        if (Event.current.isKey && Event.current.keyCode == KeyCode.Return && 
            Event.current.type == EventType.KeyDown && GUI.GetNameOfFocusedControl() == "SearchField")
        {
            PerformSearch();
            Event.current.Use();
        }
        
        GUI.SetNextControlName("SearchField");
        string newSearchText = EditorGUILayout.TextField(m_SearchText, GUI.skin.textField);
        
        // 如果搜索文本发生变化，立即搜索
        if (newSearchText != m_SearchText)
        {
            m_SearchText = newSearchText;
            PerformSearch();
        }
        
        // 清除按钮
        if (!string.IsNullOrEmpty(m_SearchText))
        {
            if (GUILayout.Button("×", GUILayout.Width(30)))
            {
                m_SearchText = "";
                GUI.FocusControl(null);
                ClearSearchResults();
            }
        }
        
        EditorGUILayout.EndHorizontal();
        
        // 搜索选项
        EditorGUILayout.BeginHorizontal();
        m_SearchMode = (SearchMode)EditorGUILayout.EnumPopup(m_SearchMode, GUILayout.Width(120));
        m_SearchCaseSensitive = EditorGUILayout.ToggleLeft("区分大小写", m_SearchCaseSensitive, GUILayout.Width(100));
        
        GUILayout.FlexibleSpace();
        
        if (GUILayout.Button("高级过滤", GUILayout.Width(80)))
        {
            m_ShowSearchFilters = !m_ShowSearchFilters;
        }
        
        EditorGUILayout.EndHorizontal();
        
        // 高级过滤选项
        if (m_ShowSearchFilters)
        {
            DrawAdvancedFilters();
        }
        
        // 搜索结果统计
        if (!string.IsNullOrEmpty(m_SearchText) && m_SearchResults.Count > 0)
        {
            EditorGUILayout.Space(5);
            EditorGUILayout.BeginHorizontal();
            
            string resultText = $"找到 {m_SearchResults.Count} 个匹配项";
            if (m_Events.Count > 0)
            {
                resultText += $" (共 {m_Events.Count} 个事件)";
            }
            
            EditorGUILayout.HelpBox(resultText, MessageType.Info);
            
            GUILayout.FlexibleSpace();
            
            if (GUILayout.Button("清除结果", GUILayout.Width(80)))
            {
                ClearSearchResults();
            }
            
            EditorGUILayout.EndHorizontal();
        }
    }
    
    /// <summary>
    /// 绘制工具栏
    /// </summary>
    private void DrawToolbar()
    {
        GUILayout.BeginHorizontal(EditorStyles.toolbar);
        
        if (GUILayout.Button("文件", EditorStyles.toolbarDropDown, GUILayout.Width(50)))
        {
            GenericMenu menu = new GenericMenu();
            menu.AddItem(new GUIContent("保存当前路径"), false, SaveCurrentPath);
            menu.AddItem(new GUIContent("重置为默认路径"), false, ResetToDefaultPath);
            menu.AddSeparator("");
            menu.AddItem(new GUIContent("清除历史记录"), false, ClearRecentPaths);
            menu.AddSeparator("");
            menu.AddItem(new GUIContent("打开设置文件夹"), false, OpenSettingsFolder);
            menu.AddItem(new GUIContent("导出扫描结果"), false, ExportScanResults);
            menu.ShowAsContext();
        }
        
        if (GUILayout.Button("视图", EditorStyles.toolbarDropDown, GUILayout.Width(50)))
        {
            GenericMenu menu = new GenericMenu();
            menu.AddItem(new GUIContent("只显示有错误的事件"), false, ToggleErrorOnly);
            menu.AddItem(new GUIContent("显示调试信息"), false, ToggleDebugInfo);
            menu.ShowAsContext();
        }
        
        GUILayout.FlexibleSpace();
        
        if (GUILayout.Button("帮助", EditorStyles.toolbarButton, GUILayout.Width(50)))
        {
            Application.OpenURL("https://docs.unity3d.com/Manual");
        }
        
        GUILayout.EndHorizontal();
    }
    
    /// <summary>
    /// 绘制扫描控制界面
    /// </summary>
    private void DrawScanControls()
    {
        EditorGUILayout.LabelField("扫描设置", EditorStyles.boldLabel);
        
        // 扫描路径输入框
        GUILayout.BeginHorizontal();
        EditorGUILayout.LabelField("扫描路径:", GUILayout.Width(70));
        m_ScanPath = EditorGUILayout.TextField(m_ScanPath, GUILayout.ExpandWidth(true));
        
        if (GUILayout.Button("浏览", GUILayout.Width(60)))
        {
            BrowseForPath();
        }
        
        GUILayout.EndHorizontal();
        
        // 选项
        EditorGUILayout.BeginHorizontal();
        m_RecursiveScan = EditorGUILayout.ToggleLeft("递归扫描", m_RecursiveScan, GUILayout.Width(100));
        m_AutoSavePath = EditorGUILayout.ToggleLeft("自动保存路径", m_AutoSavePath, GUILayout.Width(120));
        GUILayout.EndHorizontal();
        
        // 历史路径
        EditorGUILayout.BeginHorizontal();
        m_ShowRecentPaths = EditorGUILayout.Foldout(m_ShowRecentPaths, "历史路径", true);
        GUILayout.EndHorizontal();
        
        if (m_ShowRecentPaths && m_RecentScanPaths.Count > 0)
        {
            EditorGUI.indentLevel++;
            for (int i = 0; i < m_RecentScanPaths.Count; i++)
            {
                string path = m_RecentScanPaths[i];
                GUILayout.BeginHorizontal();
                
                if (GUILayout.Button("✓", GUILayout.Width(20)))
                {
                    m_ScanPath = path;
                    SaveSettings();
                }
                
                GUILayout.Label(path, EditorStyles.miniLabel);
                
                GUILayout.FlexibleSpace();
                
                if (GUILayout.Button("×", GUILayout.Width(20)))
                {
                    m_RecentScanPaths.RemoveAt(i);
                    SaveSettings();
                }
                
                GUILayout.EndHorizontal();
            }
            EditorGUI.indentLevel--;
        }
        
        // 扫描按钮
        GUILayout.BeginHorizontal();
        
        if (GUILayout.Button("🔍 扫描项目中的事件", GUILayout.Height(30)))
        {
            PerformScan();
        }
        
        if (GUILayout.Button("🔄 重新扫描", GUILayout.Height(30)))
        {
            PerformScan(true);
        }
        
        if (GUILayout.Button("🗑️ 清除结果", GUILayout.Height(30)))
        {
            ClearScanResults();
        }
        
        GUILayout.EndHorizontal();
        
        // 快速路径按钮
        if (GUILayout.Button("📁 快速选择 Assets 文件夹", GUILayout.Height(25)))
        {
            m_ScanPath = "Assets";
            SaveSettings();
        }
    }
    
    /// <summary>
    /// 执行扫描
    /// </summary>
    private void PerformScan(bool forceRescan = false)
    {
        try
        {
            EditorUtility.DisplayProgressBar("事件扫描", "正在扫描项目事件...", 0.1f);
            
            if (forceRescan)
            {
                ClearPreviousScan();
            }
            
            // 验证路径
            if (!Directory.Exists(m_ScanPath) && !m_ScanPath.StartsWith("Assets"))
            {
                m_ScanPath = "Assets";
            }
            
            // 添加到历史记录
            AddToRecentPaths(m_ScanPath);
            
            // 保存设置
            if (m_AutoSavePath)
            {
                SaveSettings();
            }
            
            OnScanButtonClick(m_ScanPath);
            
            EditorUtility.ClearProgressBar();
            
        }
        catch (System.Exception e)
        {
            EditorUtility.ClearProgressBar();
            EditorUtility.DisplayDialog("扫描错误", $"扫描过程中发生错误:\n{e.Message}", "确定");
            Debug.LogError($"事件扫描错误: {e}");
        }
    }
    
    /// <summary>
    /// 浏览选择路径
    /// </summary>
    private void BrowseForPath()
    {
        string selectedPath = EditorUtility.OpenFolderPanel("选择扫描目录", m_ScanPath, "");
        
        if (!string.IsNullOrEmpty(selectedPath))
        {
            // 转换为相对路径
            if (selectedPath.StartsWith(Application.dataPath))
            {
                m_ScanPath = "Assets" + selectedPath.Substring(Application.dataPath.Length);
            }
            else
            {
                m_ScanPath = selectedPath;
            }
            
            if (m_AutoSavePath)
            {
                SaveSettings();
            }
        }
    }
    
    /// <summary>
    /// 添加到历史记录
    /// </summary>
    private void AddToRecentPaths(string path)
    {
        if (string.IsNullOrEmpty(path)) return;
        
        // 移除重复项
        m_RecentScanPaths.Remove(path);
        
        // 添加到开头
        m_RecentScanPaths.Insert(0, path);
        
        // 限制数量
        if (m_RecentScanPaths.Count > m_MaxRecentPaths)
        {
            m_RecentScanPaths.RemoveAt(m_RecentScanPaths.Count - 1);
        }
    }
    
    /// <summary>
    /// 保存设置
    /// </summary>
    private void SaveSettings()
    {
        EditorPrefs.SetString(SCAN_PATH_KEY, m_ScanPath);
        EditorPrefs.SetString(RECENT_PATHS_KEY, string.Join(";", m_RecentScanPaths));
        EditorPrefs.SetBool(AUTO_SAVE_KEY, m_AutoSavePath);
        EditorPrefs.SetBool(RECURSIVE_KEY, m_RecursiveScan);
    }
    
    /// <summary>
    /// 加载设置
    /// </summary>
    private void LoadSettings()
    {
        m_ScanPath = EditorPrefs.GetString(SCAN_PATH_KEY, "Assets/HybridCLRGenerate");
        m_AutoSavePath = EditorPrefs.GetBool(AUTO_SAVE_KEY, true);
        m_RecursiveScan = EditorPrefs.GetBool(RECURSIVE_KEY, true);
        
        string recentPathsStr = EditorPrefs.GetString(RECENT_PATHS_KEY, "");
        if (!string.IsNullOrEmpty(recentPathsStr))
        {
            m_RecentScanPaths = new List<string>(recentPathsStr.Split(';'));
        }
    }
    
    /// <summary>
    /// 保存当前路径
    /// </summary>
    private void SaveCurrentPath()
    {
        SaveSettings();
        EditorUtility.DisplayDialog("保存成功", "当前扫描路径已保存", "确定");
    }
    
    /// <summary>
    /// 重置为默认路径
    /// </summary>
    private void ResetToDefaultPath()
    {
        m_ScanPath = "Assets/HybridCLRGenerate";
        SaveSettings();
    }
    
    /// <summary>
    /// 清除历史记录
    /// </summary>
    private void ClearRecentPaths()
    {
        m_RecentScanPaths.Clear();
        SaveSettings();
    }
    
    /// <summary>
    /// 打开设置文件夹
    /// </summary>
    private void OpenSettingsFolder()
    {
        string settingsPath = Application.persistentDataPath;
        if (Directory.Exists(settingsPath))
        {
            EditorUtility.RevealInFinder(settingsPath);
        }
    }
    
    /// <summary>
    /// 导出扫描结果
    /// </summary>
    private void ExportScanResults()
    {
        string exportPath = EditorUtility.SaveFilePanel("导出扫描结果", "", "EventScanResults.txt", "txt");
        if (!string.IsNullOrEmpty(exportPath))
        {
            ExportResultsToFile(exportPath);
        }
    }
    
    /// <summary>
    /// 只显示有错误的事件
    /// </summary>
    private void ToggleErrorOnly()
    {
        // 这里可以实现只显示有错误事件的功能
        Debug.Log("切换只显示有错误事件");
    }
    
    /// <summary>
    /// 切换调试信息
    /// </summary>
    private void ToggleDebugInfo()
    {
        // 这里可以实现显示/隐藏调试信息的功能
        Debug.Log("切换调试信息显示");
    }
    
    /// <summary>
    /// 清除扫描结果
    /// </summary>
    private void ClearScanResults()
    {
        ClearPreviousScan();
        Repaint();
    }
    
    /// <summary>
    /// 切换所有折叠状态
    /// </summary>
    private void ToggleAllFoldouts()
    {
        if (m_Events.Count == 0) return;
        
        bool anyOpen = m_Events.Values.Any(g => g.isFoldout);
        bool newState = !anyOpen;
        
        foreach (var group in m_Events.Values)
        {
            group.isFoldout = newState;
        }
    }
    
    /// <summary>
    /// 导出结果到文件
    /// </summary>
    private void ExportResultsToFile(string filePath)
    {
        try
        {
            using (StreamWriter writer = new StreamWriter(filePath))
            {
                writer.WriteLine($"事件扫描结果 - {DateTime.Now}");
                writer.WriteLine($"扫描路径: {m_ScanPath}");
                writer.WriteLine($"事件总数: {m_Events.Count}");
                writer.WriteLine("=".PadRight(80, '='));
                writer.WriteLine();
                
                int eventCount = 1;
                foreach (var kvp in m_Events)
                {
                    writer.WriteLine($"{eventCount}. 事件: {kvp.Key}");
                    writer.WriteLine($"   错误状态: {(kvp.Value.HasError ? "有错误(未注册)" : "正常")}");
                    
                    if (kvp.Value.Adds.Count > 0)
                    {
                        writer.WriteLine($"   添加监听 ({kvp.Value.Adds.Count}处):");
                        foreach (var add in kvp.Value.Adds)
                        {
                            writer.WriteLine($"     - {add.scriptName} (第{add.Line}行)");
                        }
                    }
                    
                    if (kvp.Value.Gets.Count > 0)
                    {
                        writer.WriteLine($"   获取事件 ({kvp.Value.Gets.Count}处):");
                        foreach (var get in kvp.Value.Gets)
                        {
                            writer.WriteLine($"     - {get.scriptName} (第{get.Line}行)");
                        }
                    }
                    
                    if (kvp.Value.Removes.Count > 0)
                    {
                        writer.WriteLine($"   移除监听 ({kvp.Value.Removes.Count}处):");
                        foreach (var remove in kvp.Value.Removes)
                        {
                            writer.WriteLine($"     - {remove.scriptName} (第{remove.Line}行)");
                        }
                    }
                    
                    writer.WriteLine();
                    eventCount++;
                }
                
                writer.WriteLine("=".PadRight(80, '='));
                writer.WriteLine($"扫描完成于: {DateTime.Now}");
            }
            
            EditorUtility.DisplayDialog("导出成功", $"扫描结果已导出到:\n{filePath}", "确定");
        }
        catch (System.Exception e)
        {
            EditorUtility.DisplayDialog("导出失败", $"导出过程中发生错误:\n{e.Message}", "确定");
        }
    }
    

    private void DrawEventGroup(string scriptName, EventGroupInfo eventGroup)
    {
        string ErrorPrompt;
        GUIStyle style;
        if (eventGroup.HasError)
        {
            style = GUIStyles.ErrorFoldoutStyle;
            ErrorPrompt = "⚠ 事件未注册";
        }
        else
        {
            style = GUIStyles.NormalFoldoutStyle;
            ErrorPrompt = string.Empty;
        }

        // 计算总数
        int totalRefs = eventGroup.Adds.Count + eventGroup.Gets.Count + eventGroup.Removes.Count;
        string foldoutLabel = $"{scriptName} ({totalRefs}引用) {ErrorPrompt}";

        eventGroup.isFoldout = EditorGUILayout.Foldout(eventGroup.isFoldout, foldoutLabel, style);

        if (eventGroup.isFoldout)
        {
            EditorGUI.indentLevel++;
            DrawUsageBlock("添加监听", eventGroup.Adds, eventGroup);
            DrawUsageBlock("获取事件", eventGroup.Gets, eventGroup);
            DrawUsageBlock("移除监听", eventGroup.Removes, eventGroup);
            EditorGUI.indentLevel--;
        }
    }

    private void DrawSeparatorWithShadow(Color? shadowColor = null, Color? mainColor = null, int height = 3)
    {
        // 获取当前区域
        Rect rect = EditorGUILayout.GetControlRect(GUILayout.Height(height));

        // 设置默认颜色（适配Unity主题）
        Color defaultShadow = EditorGUIUtility.isProSkin
            ? new Color(1, 1, 1, 0.1f)
            : // 深色主题下的阴影
            new Color(0, 0, 0, 0.2f); // 浅色主题下的阴影

        Color defaultMain = EditorGUIUtility.isProSkin
            ? new Color(0.7f, 0.7f, 0.7f, 0.6f)
            : // 深色主题主色
            new Color(0.5f, 0.5f, 0.5f, 0.8f); // 浅色主题主色

        // 使用传入的颜色或默认颜色
        Color finalShadow = shadowColor ?? defaultShadow;
        Color finalMain = mainColor ?? defaultMain;

        // 绘制阴影效果
        EditorGUI.DrawRect(new Rect(rect.x, rect.y, rect.width, 1), finalShadow);
        EditorGUI.DrawRect(new Rect(rect.x, rect.y + 1, rect.width, height - 1), finalMain);
    }

    private static void DrawUsageBlock(string title, List<EventUsageInfo> usageInfos, EventGroupInfo eventGroupInfo)
    {
        if (usageInfos.Count == 0) return;

        var style = eventGroupInfo.HasError ? GUIStyles.ErrorLabelStyle : GUIStyles.NormalLabelStyle;
        GUILayout.Label($"[{title} ({usageInfos.Count}处)]", style);

        foreach (var item in usageInfos)
        {
            EditorGUILayout.BeginHorizontal();

            GUILayout.Label($"📄 {item.scriptName} (第{item.Line}行)", style);

            GUILayout.FlexibleSpace();

            if (GUILayout.Button("定位", GUILayout.Width(60)))
            {
                OnLocationButtonClick(item.AssetPath);
            }

            if (GUILayout.Button("打开", GUILayout.Width(60)))
            {
                OnOpenButtonClick(item, eventGroupInfo);
            }

            EditorGUILayout.EndHorizontal();
        }
    }

    private void OnScanButtonClick(string filePath)
    {
        ClearPreviousScan();
        ScanEventCenterClasses(filePath);
        LoadScriptPaths(filePath);
        ProcessAllScripts();
        CheckForErrors();
        Repaint();
    }

    private void ClearPreviousScan()
    {
        m_ScriptPaths.Clear();
        m_Events.Clear();
        eventCenterClasses.Clear();
    }

    private void LoadScriptPaths(string filePath)
    {
        string[] scriptGuids = AssetDatabase.FindAssets("t:Script", new[] { filePath });
        m_ScriptPaths.AddRange(
            scriptGuids.Select(AssetDatabase.GUIDToAssetPath)
                .Where(path => !path.Contains("/Editor/", StringComparison.Ordinal)) // 优化：使用Ordinal比较
        );
    }

    private void ProcessAllScripts()
    {
        // 优化：缓存计数避免重复计算
        int scriptCount = m_ScriptPaths.Count;
        for (int i = 0; i < scriptCount; i++)
        {
            ProcessScriptFile(m_ScriptPaths[i]);
        }
    }

    private static void ProcessScriptFile(string scriptPath)
    {
        string fullPath = Path.GetFullPath(scriptPath);
        if (!File.Exists(fullPath)) return;

        string code = File.ReadAllText(fullPath);
        string cleanCode = RemoveComments(code);
        string className = Path.GetFileNameWithoutExtension(scriptPath);

        if (eventCenterClasses.Contains(className)) return;

        ProcessMatch(cleanCode, scriptPath, MatchType.Add);
        ProcessMatch(cleanCode, scriptPath, MatchType.Get);
        ProcessMatch(cleanCode, scriptPath, MatchType.Remove);
    }

    private static void ProcessMatch(string code, string scriptPath, MatchType matchType)
    {
        var matches = GetMatchesForType(code, matchType);
        if (matches == null || matches.Count == 0) return;

        string className = Path.GetFileNameWithoutExtension(scriptPath);

        // 优化：提前检查接口实现
        if (CheckImplementsIEventCenter(code)) return;

        foreach (Match matched in matches)
        {
            if (!IsValidMatch(matched, code)) continue;

            ProcessSingleMatch(matched, className, scriptPath, matchType, code);
        }
    }

    private static MatchCollection GetMatchesForType(string code, MatchType matchType) => matchType switch
    {
        MatchType.Add => m_AddRegex.Matches(code),
        MatchType.Remove => m_RemoveRegex.Matches(code),
        MatchType.Get => m_GetRegex.Matches(code),
        _ => null
    };

    private static bool IsValidMatch(Match matched, string code)
    {
        if (matched.Groups.Count < 2 || !matched.Groups[1].Success) return false;

        // 优化：检查前文避免匹配方法定义
        int matchStart = matched.Index;
        int checkStart = Math.Max(0, matchStart - 50);
        string precedingText = code.Substring(checkStart, Math.Min(50, matchStart - checkStart));

        return !Regex.IsMatch(precedingText, @"(public|private|protected|internal)\s+[\w<>,\s]+$");
    }

    private static void ProcessSingleMatch(Match matched, string className, string scriptPath, MatchType matchType, string code)
    {
        string eventKey = matched.Groups[1].Value.Trim();
        int line = GetLineNumber(code, matched.Index); // 优化：基于匹配文本计算行号

        var usageInfo = new EventUsageInfo(className, scriptPath, line);

        if (!m_Events.TryGetValue(eventKey, out var eventGroup))
        {
            eventGroup = new EventGroupInfo();
            m_Events[eventKey] = eventGroup;
        }

        // 优化：使用switch表达式
        switch (matchType)
        {
            case MatchType.Add:
                m_Events[eventKey].Adds.Add(usageInfo);
                break;
            case MatchType.Remove:
                m_Events[eventKey].Removes.Add(usageInfo);
                break;
            case MatchType.Get:
                m_Events[eventKey].Gets.Add(usageInfo);
                break;
            default:
                break;
        }
    }

    // 优化：改进的接口检测方法
    private static bool CheckImplementsIEventCenter(string code) =>
        m_InterfaceRegex1.IsMatch(code) ||
        m_InterfaceRegex2.IsMatch(code) ||
        m_InterfaceRegex3.IsMatch(code);

    private static void CheckForErrors()
    {
        foreach (var Value in m_Events.Values)
        {
            if (Value.Adds.Count == 0)
            {
                Value.HasError = true;
            }
        }
    }

    private static int GetLineNumber(string fullCode, int matchIndex)
    {
        if (string.IsNullOrEmpty(fullCode) || matchIndex < 0 || matchIndex >= fullCode.Length)
            return 1;

        int line = 1;
        // 统计从文件开头到匹配位置的所有换行符
        for (int i = 0; i < matchIndex; i++)
        {
            if (fullCode[i] == '\n')
                line++;
        }

        return line;
    }


    private static void OnLocationButtonClick(string assetPath)
    {
        var script = AssetDatabase.LoadAssetAtPath<MonoScript>(assetPath);
        if (script != null)
        {
            Selection.activeObject = script;
            EditorGUIUtility.PingObject(script);
        }
        else
        {
            EditorUtility.DisplayDialog("错误", $"找不到脚本: {assetPath}", "确定");
        }
    }

    private static void OnOpenButtonClick(EventUsageInfo usageInfo, EventGroupInfo eventGroupInfo)
    {
       var script = AssetDatabase.LoadAssetAtPath<MonoScript>(usageInfo.AssetPath);
        if (script != null)
        {
            AssetDatabase.OpenAsset(script, usageInfo.Line);
        }
        else
        {
            EditorUtility.DisplayDialog("错误", $"找不到脚本: {usageInfo.AssetPath}", "确定");
        }
    }

    private static string RemoveComments(string code)
    {
        if (string.IsNullOrEmpty(code)) return code;

        var sb = new StringBuilder(code.Length);
        bool inBlockComment = false;
        bool inLineComment = false;
        bool inString = false;
        char lastChar = '\0';

        for (int i = 0; i < code.Length; i++)
        {
            char current = code[i];

            if (!inBlockComment && !inLineComment && !inString)
            {
                if (current == '"' && lastChar != '\\')
                {
                    inString = true;
                    sb.Append(current);
                }
                else if (current == '/' && i + 1 < code.Length)
                {
                    char next = code[i + 1];
                    if (next == '/')
                    {
                        inLineComment = true;
                        i++;
                        continue;
                    }
                    else if (next == '*')
                    {
                        inBlockComment = true;
                        i++;
                        continue;
                    }
                    else
                    {
                        sb.Append(current);
                    }
                }
                else
                {
                    sb.Append(current);
                }
            }
            else if (inLineComment)
            {
                if (current == '\n')
                {
                    inLineComment = false;
                    sb.Append(current);
                }
            }
            else if (inBlockComment)
            {
                if (current == '*' && i + 1 < code.Length && code[i + 1] == '/')
                {
                    inBlockComment = false;
                    i++;
                }
            }
            else if (inString)
            {
                sb.Append(current);
                if (current == '"' && lastChar != '\\')
                {
                    inString = false;
                }
            }

            lastChar = current;
        }

        return sb.ToString();
    }

    private static void ScanEventCenterClasses(string filePath)
    {
        string[] scriptGuids = AssetDatabase.FindAssets("t:Script", new[] { filePath });

        foreach (var guid in scriptGuids)
        {
            string path = AssetDatabase.GUIDToAssetPath(guid);
            if (path.Contains("/Editor/", StringComparison.Ordinal)) continue;

            string fullPath = Path.GetFullPath(path);
            if (!File.Exists(fullPath)) continue;

            string code = File.ReadAllText(fullPath);
            string cleanCode = RemoveComments(code);

            if (CheckImplementsIEventCenter(cleanCode))
            {
                string className = Path.GetFileNameWithoutExtension(path);
                eventCenterClasses.Add(className);
            }
        }
    }
}