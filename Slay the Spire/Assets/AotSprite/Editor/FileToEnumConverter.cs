using System;
using System.IO;
using System.Linq;
using System.Text;
using System.Collections.Generic;
using UnityEngine;

namespace FileEnumGenerator
{
    /// <summary>
    /// 文件到枚举转换器核心类
    /// 负责扫描目录、验证文件名并生成枚举代码
    /// </summary>
    public static class FileToEnumConverter
    {
        [System.Serializable]
        public class GeneratorConfig
        {
            public string sourceDirectory = "Assets/Resources/";
            public string targetNamespace = "Game.Enums";
            public string enumName = "FileNames";
            public string outputPath = "Assets/Scripts/Generated/";
            public string fileExtension = "*.png";
            public bool includeSubdirectories = true;
            public NamingConvention namingConvention = NamingConvention.Original;
            public ConflictResolution conflictResolution = ConflictResolution.AppendNumber;
        }

        public enum NamingConvention
        {
            Original,      // 保持原文件名
            PascalCase,    // 帕斯卡命名法
            CamelCase,     // 驼峰命名法
            UpperCase,     // 全大写
            LowerCase      // 全小写
        }

        public enum ConflictResolution
        {
            Skip,          // 跳过重复项
            AppendNumber,  // 追加数字
            Overwrite      // 覆盖（不推荐）
        }

        /// <summary>
        /// 生成文件枚举
        /// </summary>
        public static bool GenerateFileEnum(GeneratorConfig config, out string generatedCode, out string[] warnings)
        {
            var warningList = new List<string>();
            generatedCode = string.Empty;

            try
            {
                // 验证输入参数
                if (!ValidateConfig(config, out string validationError))
                {
                    warnings = new[] { validationError };
                    return false;
                }

                // 扫描目录获取文件
                string[] files = ScanDirectoryForFiles(config);
                if (files.Length == 0)
                {
                    warnings = new[] { $"在目录 {config.sourceDirectory} 中未找到匹配 {config.fileExtension} 的文件" };
                    return false;
                }

                // 处理文件名并生成枚举
                var enumEntries = ProcessFileNames(files, config, warningList);
                generatedCode = GenerateEnumCode(enumEntries, config);

                warnings = warningList.ToArray();
                return true;
            }
            catch (Exception ex)
            {
                warnings = new[] { $"生成枚举时发生错误: {ex.Message}" };
                return false;
            }
        }

        /// <summary>
        /// 扫描目录获取文件列表
        /// </summary>
        private static string[] ScanDirectoryForFiles(GeneratorConfig config)
        {
            if (!Directory.Exists(config.sourceDirectory))
            {
                return new string[0];
            }

            SearchOption searchOption = config.includeSubdirectories ? 
                SearchOption.AllDirectories : SearchOption.TopDirectoryOnly;

            try
            {
                return Directory.GetFiles(config.sourceDirectory, config.fileExtension, searchOption)
                    .Where(file => !file.EndsWith(".meta")) // 排除meta文件
                    .ToArray();
            }
            catch (Exception ex)
            {
                Debug.LogError($"扫描目录时出错: {ex.Message}");
                return new string[0];
            }
        }

        /// <summary>
        /// 处理文件名，转换为有效的枚举项
        /// </summary>
        private static List<EnumEntry> ProcessFileNames(string[] filePaths, GeneratorConfig config, List<string> warnings)
        {
            var entries = new List<EnumEntry>();
            var nameSet = new HashSet<string>();
            var valueSet = new HashSet<int>();

            for (int i = 0; i < filePaths.Length; i++)
            {
                string filePath = filePaths[i];
                string fileName = Path.GetFileNameWithoutExtension(filePath);
                string relativePath = GetRelativePath(filePath, config.sourceDirectory);

                // 清洗和转换文件名
                string enumName = ConvertToValidIdentifier(fileName, config.namingConvention);
                int enumValue = i;

                // 处理命名冲突
                enumName = ResolveNamingConflict(enumName, nameSet, config.conflictResolution, warnings);

                entries.Add(new EnumEntry
                {
                    Name = enumName,
                    Value = enumValue,
                    FileName = fileName,
                    RelativePath = relativePath,
                    FullPath = filePath
                });

                nameSet.Add(enumName);
                valueSet.Add(enumValue);
            }

            return entries;
        }

        /// <summary>
        /// 将文件名转换为有效的C#标识符
        /// </summary>
        private static string ConvertToValidIdentifier(string fileName, NamingConvention convention)
        {
            // 移除无效字符，只保留字母、数字、下划线
            string cleanName = System.Text.RegularExpressions.Regex.Replace(fileName, @"[^\w]", "_");
            
            // 移除连续的下划线
            cleanName = System.Text.RegularExpressions.Regex.Replace(cleanName, @"_+", "_");
            cleanName = cleanName.Trim('_');

            // 应用命名规范
            return ApplyNamingConvention(cleanName, convention);
        }

        /// <summary>
        /// 应用命名规范
        /// </summary>
        private static string ApplyNamingConvention(string name, NamingConvention convention)
        {
            if (string.IsNullOrEmpty(name)) return "Empty";

            return convention switch
            {
                NamingConvention.PascalCase => ToPascalCase(name),
                NamingConvention.CamelCase => ToCamelCase(name),
                NamingConvention.UpperCase => name.ToUpperInvariant(),
                NamingConvention.LowerCase => name.ToLowerInvariant(),
                _ => name
            };
        }

        /// <summary>
        /// 转换为帕斯卡命名法
        /// </summary>
        private static string ToPascalCase(string input)
        {
            if (string.IsNullOrEmpty(input)) return input;

            // 分割单词并大写首字母
            string[] words = input.Split('_');
            for (int i = 0; i < words.Length; i++)
            {
                if (!string.IsNullOrEmpty(words[i]))
                {
                    words[i] = char.ToUpperInvariant(words[i][0]) + 
                              (words[i].Length > 1 ? words[i].Substring(1).ToLowerInvariant() : "");
                }
            }
            return string.Join("", words);
        }

        /// <summary>
        /// 转换为驼峰命名法
        /// </summary>
        private static string ToCamelCase(string input)
        {
            if (string.IsNullOrEmpty(input)) return input;

            string pascal = ToPascalCase(input);
            return char.ToLowerInvariant(pascal[0]) + (pascal.Length > 1 ? pascal.Substring(1) : "");
        }

        /// <summary>
        /// 处理命名冲突
        /// </summary>
        private static string ResolveNamingConflict(string name, HashSet<string> existingNames, 
            ConflictResolution resolution, List<string> warnings)
        {
            if (!existingNames.Contains(name))
                return name;

            switch (resolution)
            {
                case ConflictResolution.Skip:
                    warnings.Add($"跳过重复名称: {name}");
                    return null;

                case ConflictResolution.AppendNumber:
                    int counter = 1;
                    string newName;
                    do
                    {
                        newName = $"{name}_{counter++}";
                    } while (existingNames.Contains(newName));
                    
                    warnings.Add($"名称冲突: {name} 已重命名为 {newName}");
                    return newName;

                case ConflictResolution.Overwrite:
                default:
                    warnings.Add($"名称冲突: {name} 将被覆盖");
                    return name;
            }
        }

        /// <summary>
        /// 生成枚举代码
        /// </summary>
        private static string GenerateEnumCode(List<EnumEntry> entries, GeneratorConfig config)
        {
            StringBuilder sb = new StringBuilder();

            // 文件头注释
            sb.AppendLine("// ------------------------------------------------------------------------------");
            sb.AppendLine("// <auto-generated>");
            sb.AppendLine("//     此代码由文件枚举生成器自动生成");
            sb.AppendLine("//     生成时间: " + DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss"));
            sb.AppendLine("//     源目录: " + config.sourceDirectory);
            sb.AppendLine("//     文件过滤: " + config.fileExtension);
            sb.AppendLine("// </auto-generated>");
            sb.AppendLine("// ------------------------------------------------------------------------------");
            sb.AppendLine();
            sb.AppendLine("using System;");
            sb.AppendLine();

            // 命名空间
            if (!string.IsNullOrEmpty(config.targetNamespace))
            {
                sb.AppendLine($"namespace {config.targetNamespace}");
                sb.AppendLine("{");
            }

            // 枚举定义开始
            sb.AppendLine("    /// <summary>");
            sb.AppendLine("    /// 文件名称枚举");
            sb.AppendLine("    /// 自动从目录文件生成");
            sb.AppendLine("    /// </summary>");
            sb.AppendLine($"    public enum {config.enumName}");
            sb.AppendLine("    {");

            // 枚举项
            for (int i = 0; i < entries.Count; i++)
            {
                var entry = entries[i];
                if (entry.Name == null) continue; // 跳过的项

                sb.AppendLine("        /// <summary>");
                sb.AppendLine($"        /// 文件: {entry.FileName}");
                if (!string.IsNullOrEmpty(entry.RelativePath))
                {
                    sb.AppendLine($"        /// 路径: {entry.RelativePath}");
                }
                sb.AppendLine("        /// </summary>");
                sb.AppendLine($"        {entry.Name} = {entry.Value},");
                
                if (i < entries.Count - 1) sb.AppendLine();
            }

            // 枚举定义结束
            sb.AppendLine("    }");

            if (!string.IsNullOrEmpty(config.targetNamespace))
            {
                sb.AppendLine("}");
            }

            return sb.ToString();
        }

        /// <summary>
        /// 获取相对路径
        /// </summary>
        private static string GetRelativePath(string fullPath, string basePath)
        {
            Uri pathUri = new Uri(fullPath);
            Uri folderUri = new Uri(basePath);
            return Uri.UnescapeDataString(
                folderUri.MakeRelativeUri(pathUri).ToString().Replace('/', Path.DirectorySeparatorChar));
        }

        /// <summary>
        /// 验证配置参数
        /// </summary>
        private static bool ValidateConfig(GeneratorConfig config, out string error)
        {
            if (string.IsNullOrEmpty(config.sourceDirectory))
            {
                error = "源目录不能为空";
                return false;
            }

            if (string.IsNullOrEmpty(config.enumName))
            {
                error = "枚举名称不能为空";
                return false;
            }

            if (string.IsNullOrEmpty(config.outputPath))
            {
                error = "输出路径不能为空";
                return false;
            }

            // 验证枚举名称有效性
            if (!System.CodeDom.Compiler.CodeGenerator.IsValidLanguageIndependentIdentifier(config.enumName))
            {
                error = $"枚举名称 '{config.enumName}' 不是有效的标识符";
                return false;
            }

            error = null;
            return true;
        }
    }

    /// <summary>
    /// 枚举项数据类
    /// </summary>
    public class EnumEntry
    {
        public string Name;        // 枚举项名称
        public int Value;           // 枚举值
        public string FileName;     // 原始文件名
        public string RelativePath; // 相对路径
        public string FullPath;     // 完整路径
    }
}