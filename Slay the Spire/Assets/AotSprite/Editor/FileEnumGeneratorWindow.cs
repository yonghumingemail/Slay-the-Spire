using UnityEditor;
using UnityEngine;
using System.IO;

namespace FileEnumGenerator.Editor
{
    /// <summary>
    /// 文件枚举生成器编辑器窗口
    /// </summary>
    public class FileEnumGeneratorWindow : EditorWindow
    {
        private FileToEnumConverter.GeneratorConfig config = new FileToEnumConverter.GeneratorConfig();
        private Vector2 scrollPosition;
        private string statusMessage = "";
        private MessageType statusType = MessageType.Info;
        private string[] lastWarnings = new string[0];

        [MenuItem("Tools/文件枚举生成器")]
        public static void ShowWindow()
        {
            var window = GetWindow<FileEnumGeneratorWindow>("文件枚举生成器");
            window.minSize = new Vector2(500, 600);
            window.Show();
        }

        private void OnGUI()
        {
            scrollPosition = EditorGUILayout.BeginScrollView(scrollPosition);
            
            DrawHeader();
            DrawConfigurationSection();
            DrawPreviewSection();
            DrawActionButtons();
            DrawStatusArea();
            
            EditorGUILayout.EndScrollView();
        }

        /// <summary>
        /// 绘制窗口头部
        /// </summary>
        private void DrawHeader()
        {
            EditorGUILayout.Space(10);
            EditorGUILayout.LabelField("文件枚举生成器", EditorStyles.boldLabel);
            EditorGUILayout.LabelField("将指定目录下的文件名转换为C#枚举类型", EditorStyles.wordWrappedLabel);
            EditorGUILayout.Space(10);
        }

        /// <summary>
        /// 绘制配置区域
        /// </summary>
        private void DrawConfigurationSection()
        {
            EditorGUILayout.LabelField("配置设置", EditorStyles.boldLabel);
            EditorGUILayout.Space(5);

            // 目录选择
            EditorGUILayout.BeginHorizontal();
            config.sourceDirectory = EditorGUILayout.TextField("源目录", config.sourceDirectory);
            if (GUILayout.Button("浏览", GUILayout.Width(60)))
            {
                string selectedPath = EditorUtility.OpenFolderPanel("选择源目录", 
                    config.sourceDirectory, "");
                if (!string.IsNullOrEmpty(selectedPath))
                {
                    config.sourceDirectory = selectedPath;
                }
            }
            EditorGUILayout.EndHorizontal();

            // 文件扩展名
            config.fileExtension = EditorGUILayout.TextField("文件扩展名过滤", config.fileExtension);
            EditorGUILayout.HelpBox("支持通配符，如: *.png, *.prefab, Character_*", MessageType.Info);

            config.includeSubdirectories = EditorGUILayout.Toggle("包含子目录", config.includeSubdirectories);

            EditorGUILayout.Space(10);

            // 输出设置
            config.enumName = EditorGUILayout.TextField("枚举名称", config.enumName);
            config.targetNamespace = EditorGUILayout.TextField("命名空间", config.targetNamespace);
            
            EditorGUILayout.BeginHorizontal();
            config.outputPath = EditorGUILayout.TextField("输出路径", config.outputPath);
            if (GUILayout.Button("浏览", GUILayout.Width(60)))
            {
                string selectedPath = EditorUtility.SaveFolderPanel("选择输出目录", 
                    config.outputPath, "");
                if (!string.IsNullOrEmpty(selectedPath))
                {
                    // 转换为相对路径
                    if (selectedPath.StartsWith(Application.dataPath))
                    {
                        config.outputPath = "Assets" + selectedPath.Substring(Application.dataPath.Length);
                    }
                    else
                    {
                        config.outputPath = selectedPath;
                    }
                }
            }
            EditorGUILayout.EndHorizontal();

            EditorGUILayout.Space(10);

            // 高级选项
            EditorGUILayout.LabelField("高级选项", EditorStyles.boldLabel);
            config.namingConvention = (FileToEnumConverter.NamingConvention)EditorGUILayout.EnumPopup("命名规范", config.namingConvention);
            config.conflictResolution = (FileToEnumConverter.ConflictResolution)EditorGUILayout.EnumPopup("冲突解决", config.conflictResolution);
        }

        /// <summary>
        /// 绘制预览区域
        /// </summary>
        private void DrawPreviewSection()
        {
            EditorGUILayout.Space(10);
            EditorGUILayout.LabelField("预览", EditorStyles.boldLabel);

            if (GUILayout.Button("扫描目录并预览", GUILayout.Height(25)))
            {
                PreviewGeneration();
            }
        }

        /// <summary>
        /// 绘制操作按钮
        /// </summary>
        private void DrawActionButtons()
        {
            EditorGUILayout.Space(20);

            EditorGUILayout.BeginHorizontal();
            
            if (GUILayout.Button("生成枚举", GUILayout.Height(30)))
            {
                GenerateEnum();
            }
            
            if (GUILayout.Button("重置设置", GUILayout.Height(30)))
            {
                ResetToDefaults();
            }
            
            EditorGUILayout.EndHorizontal();
        }

        /// <summary>
        /// 绘制状态信息区域
        /// </summary>
        private void DrawStatusArea()
        {
            if (!string.IsNullOrEmpty(statusMessage))
            {
                EditorGUILayout.Space(10);
                EditorGUILayout.HelpBox(statusMessage, statusType);
            }

            if (lastWarnings.Length > 0)
            {
                EditorGUILayout.Space(10);
                EditorGUILayout.LabelField("处理警告:", EditorStyles.boldLabel);
                
                foreach (string warning in lastWarnings)
                {
                    EditorGUILayout.HelpBox(warning, MessageType.Warning);
                }
            }
        }

        /// <summary>
        /// 预览生成结果
        /// </summary>
        private void PreviewGeneration()
        {
            if (FileToEnumConverter.GenerateFileEnum(config, out string generatedCode, out lastWarnings))
            {
                statusType = MessageType.Info;
                
                // 在控制台显示预览
                Debug.Log("生成的枚举代码:\n" + generatedCode);
            }
            else
            {
                statusMessage = lastWarnings.Length > 0 ? lastWarnings[0] : "预览失败";
                statusType = MessageType.Error;
            }
            
            Repaint();
        }

        /// <summary>
        /// 生成枚举文件
        /// </summary>
        private void GenerateEnum()
        {
            if (FileToEnumConverter.GenerateFileEnum(config, out string generatedCode, out lastWarnings))
            {
                // 确保输出目录存在
                string outputDir = Path.GetDirectoryName(Path.Combine(config.outputPath, config.enumName + ".cs"));
                if (!Directory.Exists(outputDir))
                {
                    Directory.CreateDirectory(outputDir);
                }

                // 写入文件
                string filePath = Path.Combine(config.outputPath, config.enumName + ".cs");
                File.WriteAllText(filePath, generatedCode, System.Text.Encoding.UTF8);
                
                // 刷新AssetDatabase
                AssetDatabase.Refresh();

                statusMessage = $"枚举生成成功！文件已保存到: {filePath}";
                statusType = MessageType.Info;

                // 高亮显示生成的文件
                UnityEngine.Object generatedFile = AssetDatabase.LoadAssetAtPath<UnityEngine.Object>(filePath);
                if (generatedFile != null)
                {
                    EditorGUIUtility.PingObject(generatedFile);
                }
            }
            else
            {
                statusMessage = lastWarnings.Length > 0 ? lastWarnings[0] : "枚举生成失败";
                statusType = MessageType.Error;
            }
            
            Repaint();
        }

        /// <summary>
        /// 重置为默认设置
        /// </summary>
        private void ResetToDefaults()
        {
            config = new FileToEnumConverter.GeneratorConfig();
            statusMessage = "设置已重置为默认值";
            statusType = MessageType.Info;
            lastWarnings = new string[0];
            Repaint();
        }
    }
}