using GameFramework;
using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(ReferencePoolComponent))]
internal sealed class ReferencePoolComponentInspector : Editor
{
    private readonly Dictionary<string, List<ReferencePoolInfo>> m_ReferencePoolInfos =
        new Dictionary<string, List<ReferencePoolInfo>>(StringComparer.Ordinal);

    private readonly HashSet<string> m_OpenedItems = new HashSet<string>();

    private SerializedProperty m_EnableStrictCheck = null;

    private bool m_ShowFullClassName = false;

    // 列宽常量，便于调整
    private const float ClassNameWidth = 200f;
    private const float NumberWidth = 60f;

    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();
        serializedObject.Update();

        ReferencePoolComponent t = (ReferencePoolComponent)target;
        
        // 2. 绘制 Enable Strict Check（由自定义控制）
        if (EditorApplication.isPlaying)
        {
            bool enableStrictCheck = EditorGUILayout.Toggle("Enable Strict Check", t.EnableStrictCheck);
            if (enableStrictCheck != t.EnableStrictCheck)
            {
                t.EnableStrictCheck = enableStrictCheck;
            }
        }
        // 3. 运行模式下显示引用池统计信息
        if (EditorApplication.isPlaying)
        {
            EditorGUILayout.LabelField("Reference Pool Count", ReferencePool.Count.ToString());
            m_ShowFullClassName = EditorGUILayout.Toggle("Show Full Class Name", m_ShowFullClassName);

            m_ReferencePoolInfos.Clear();
            ReferencePoolInfo[] referencePoolInfos = ReferencePool.GetAllReferencePoolInfos();
            foreach (ReferencePoolInfo referencePoolInfo in referencePoolInfos)
            {
                string assemblyName = referencePoolInfo.Type.Assembly.GetName().Name;
                List<ReferencePoolInfo> results = null;
                if (!m_ReferencePoolInfos.TryGetValue(assemblyName, out results))
                {
                    results = new List<ReferencePoolInfo>();
                    m_ReferencePoolInfos.Add(assemblyName, results);
                }
                results.Add(referencePoolInfo);
            }

            foreach (KeyValuePair<string, List<ReferencePoolInfo>> assemblyReferencePoolInfo in m_ReferencePoolInfos)
            {
                bool lastState = m_OpenedItems.Contains(assemblyReferencePoolInfo.Key);
                bool currentState = EditorGUILayout.Foldout(lastState, assemblyReferencePoolInfo.Key);
                if (currentState != lastState)
                {
                    if (currentState)
                        m_OpenedItems.Add(assemblyReferencePoolInfo.Key);
                    else
                        m_OpenedItems.Remove(assemblyReferencePoolInfo.Key);
                }

                if (currentState)
                {
                    EditorGUILayout.BeginVertical("box");
                    {
                        // 绘制表头（使用固定宽度水平布局）
                        DrawTableHeader();

                        // 排序数据行
                        assemblyReferencePoolInfo.Value.Sort(Comparison);

                        // 绘制数据行
                        foreach (ReferencePoolInfo referencePoolInfo in assemblyReferencePoolInfo.Value)
                        {
                            DrawReferencePoolInfoRow(referencePoolInfo);
                        }

                        // 导出按钮
                        if (GUILayout.Button("Export CSV Data"))
                        {
                            string exportFileName = EditorUtility.SaveFilePanel("Export CSV Data", string.Empty,
                                Utility.Text.Format("Reference Pool Data - {0}.csv", assemblyReferencePoolInfo.Key),
                                string.Empty);
                            if (!string.IsNullOrEmpty(exportFileName))
                            {
                                try
                                {
                                    int index = 0;
                                    string[] data = new string[assemblyReferencePoolInfo.Value.Count + 1];
                                    data[index++] = "Class Name,Full Class Name,Unused,Using,Acquire,Release,Add,Remove";
                                    foreach (ReferencePoolInfo info in assemblyReferencePoolInfo.Value)
                                    {
                                        data[index++] = Utility.Text.Format("{0},{1},{2},{3},{4},{5},{6},{7}",
                                            GetFriendlyTypeName(info.Type),  // 友好名称
                                            info.Type.AssemblyQualifiedName,
                                            info.UnusedReferenceCount.ToString(),
                                            info.UsingReferenceCount.ToString(),
                                            info.AcquireReferenceCount.ToString(),
                                            info.ReleaseReferenceCount.ToString(),
                                            info.AddReferenceCount.ToString(),
                                            info.RemoveReferenceCount.ToString());
                                    }
                                    File.WriteAllLines(exportFileName, data, Encoding.UTF8);
                                    Debug.Log(Utility.Text.Format("Export reference pool CSV data to '{0}' success.", exportFileName));
                                }
                                catch (Exception exception)
                                {
                                    Debug.LogError(Utility.Text.Format(
                                        "Export reference pool CSV data to '{0}' failure, exception is '{1}'.",
                                        exportFileName, exception.ToString()));
                                }
                            }
                        }
                    }
                    EditorGUILayout.EndVertical();
                    EditorGUILayout.Separator();
                }
            }
        }

        serializedObject.ApplyModifiedProperties();
        Repaint();
    }

    private void OnEnable()
    {
        m_EnableStrictCheck = serializedObject.FindProperty("m_EnableStrictCheck");
    }

    // 绘制表头
    private void DrawTableHeader()
    {
        EditorGUILayout.BeginHorizontal();
        string classNameLabel = m_ShowFullClassName ? "Full Class Name" : "Class Name";
        GUILayout.Label(classNameLabel, GUILayout.Width(ClassNameWidth));
        GUILayout.Label("Unused", GUILayout.Width(NumberWidth));
        GUILayout.Label("Using", GUILayout.Width(NumberWidth));
        GUILayout.Label("Acquire", GUILayout.Width(NumberWidth));
        GUILayout.Label("Release", GUILayout.Width(NumberWidth));
        GUILayout.Label("Add", GUILayout.Width(NumberWidth));
        GUILayout.Label("Remove", GUILayout.Width(NumberWidth));
        EditorGUILayout.EndHorizontal();
    }
    private void DrawReferencePoolInfoRow(ReferencePoolInfo referencePoolInfo)
    {
        EditorGUILayout.BeginHorizontal();
    
        // 使用友好名称
        string className = GetFriendlyTypeName(referencePoolInfo.Type); 
        GUILayout.Label(className, GUILayout.Width(ClassNameWidth));
        GUILayout.Label(referencePoolInfo.UnusedReferenceCount.ToString(), GUILayout.Width(NumberWidth));
        GUILayout.Label(referencePoolInfo.UsingReferenceCount.ToString(), GUILayout.Width(NumberWidth));
        GUILayout.Label(referencePoolInfo.AcquireReferenceCount.ToString(), GUILayout.Width(NumberWidth));
        GUILayout.Label(referencePoolInfo.ReleaseReferenceCount.ToString(), GUILayout.Width(NumberWidth));
        GUILayout.Label(referencePoolInfo.AddReferenceCount.ToString(), GUILayout.Width(NumberWidth));
        GUILayout.Label(referencePoolInfo.RemoveReferenceCount.ToString(), GUILayout.Width(NumberWidth));
        EditorGUILayout.EndHorizontal();
    }

    // 排序比较
    private int Comparison(ReferencePoolInfo a, ReferencePoolInfo b)
    {
        if (m_ShowFullClassName)
            return a.Type.FullName.CompareTo(b.Type.FullName);
        else
            return a.Type.Name.CompareTo(b.Type.Name);
    }
    // 获取类型的友好显示名称（支持泛型）
    private string GetFriendlyTypeName(Type type)
    {
        if (!type.IsGenericType)
        {
            return type.Name;
        }

        // 获取泛型类型名称（去掉 ` 和数字部分）
        string baseName = type.Name.Split('`')[0];
    
        // 获取所有泛型参数的类型
        Type[] genericArgs = type.GetGenericArguments();
        string[] argNames = new string[genericArgs.Length];
        for (int i = 0; i < genericArgs.Length; i++)
        {
            // 递归调用，以支持嵌套泛型，如 List<List<int>>
            argNames[i] = GetFriendlyTypeName(genericArgs[i]);
        }

        // 组合成 C# 风格的泛型名称
        return $"{baseName}<{string.Join(", ", argNames)}>";
    }
}