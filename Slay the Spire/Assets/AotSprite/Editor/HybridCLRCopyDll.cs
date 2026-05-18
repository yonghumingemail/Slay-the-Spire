using System.Collections.Generic;
using UnityEditor;
using UnityEditor.Build;
using UnityEditor.Build.Reporting;
using System.IO;
using UnityEngine;

/// <summary>
/// 构建前自动将 HybridCLR 热更新 DLL 复制到 StreamingAssets 目录
/// </summary>
public class HybridCLRCopyDll : IPreprocessBuildWithReport
{
    // 设置执行顺序，数值越小越先执行
    public int callbackOrder => 0;

    public void OnPreprocessBuild(BuildReport report)
    {
        CopyHotUpdateDll(report.summary.platform);
        CopyAOTMetadataFiles("Assets/HybridCLRGenerate/HotUpdata/MataDataDll",report.summary.platform);
    }

    // 可选：在菜单中保留手动执行的入口，方便调试
    [MenuItem("HybridCLR/Copy HotUpdate.dll to StreamingAssets")]
    public static void ManualCopy()
    {
        CopyHotUpdateDll(EditorUserBuildSettings.activeBuildTarget);
        CopyAOTMetadataFiles("Assets/HybridCLRGenerate/HotUpdata/MataDataDll");
    }
    
    /// <summary>
    /// 复制 HotUpdate.dll 到 StreamingAssets，并添加 .bytes 后缀
    /// </summary>
    /// <param name="targetPlatform">当前构建目标平台</param>
    public static void CopyHotUpdateDll(BuildTarget targetPlatform = BuildTarget.StandaloneWindows64)
    {
        // 1. 根据平台确定源目录名称
        string platformFolder = GetPlatformFolderName(targetPlatform);
        if (string.IsNullOrEmpty(platformFolder))
        {
            Debug.LogError($"[HybridCLR] 不支持的平台: {targetPlatform}");
            return;
        }

        // 2. 构造源文件路径 (项目根目录下)
        string projectRoot = Directory.GetParent(Application.dataPath).FullName;
        string sourceFolder = Path.Combine(projectRoot, "HybridCLRData", "HotUpdateDlls", platformFolder);
        string sourceFile = Path.Combine(sourceFolder, "HotUpdate.dll");

        if (!File.Exists(sourceFile))
        {
            Debug.LogError($"[HybridCLR] 源文件不存在: {sourceFile}\n请先运行 HybridCLR/Generate/All 生成 DLL。");
            return;
        }

        // 3. 构造目标路径 (Assets/StreamingAssets/HotUpdate.dll.bytes)
        string streamingAssetsPath = Path.Combine(Application.dataPath, "StreamingAssets");
        if (!Directory.Exists(streamingAssetsPath))
        {
            Directory.CreateDirectory(streamingAssetsPath);
        }
        string destFile = Path.Combine(streamingAssetsPath, "HotUpdate.dll.bytes");

        // 4. 复制文件（覆盖已存在的）
        File.Copy(sourceFile, destFile, true);
        AssetDatabase.Refresh(); // 刷新资源数据库，确保 Unity 识别新文件

        Debug.Log($"[HybridCLR] 已将 {sourceFile} 复制到 {destFile}");
    }
    
    
     /// <summary>
    /// 根据提供的程序集名称列表，将对应的 AOT 补充元数据 DLL 从 HybridCLR 生成目录复制到目标文件夹。
    /// </summary>
    public static void CopyAOTMetadataFiles(string destinationFolder,
        BuildTarget targetPlatform= BuildTarget.StandaloneWindows64
        )
    {
        var assemblyNames = GetPatchedAOTAssemblyList();
        if (assemblyNames == null || assemblyNames.Count == 0)
        {
            Debug.LogWarning("[AOTMetadataCopy] 程序集名称列表为空，跳过复制。");
            return;
        }

        // 1. 获取源目录：项目根目录/HybridCLRData/AssembliesPostIl2CppStrip/{目标平台}/
        string projectRoot = Directory.GetParent(Application.dataPath).FullName;
        string platformFolder = GetPlatformFolderName(targetPlatform);
        if (string.IsNullOrEmpty(platformFolder))
        {
            Debug.LogError($"[AOTMetadataCopy] 不支持的平台: {targetPlatform}");
            return;
        }

        string sourceDir = Path.Combine(projectRoot, "HybridCLRData", "AssembliesPostIl2CppStrip", platformFolder);
        if (!Directory.Exists(sourceDir))
        {
            Debug.LogError($"[AOTMetadataCopy] 源目录不存在: {sourceDir}\n请先运行 HybridCLR/Generate/AOTDlls！");
            return;
        }

        // 2. 确保目标目录存在
        string fullDestDir = Path.Combine(projectRoot, destinationFolder);
        if (!Directory.Exists(fullDestDir))
        {
            Directory.CreateDirectory(fullDestDir);
        }

        // 3. 逐个复制
        int successCount = 0;
        foreach (string dllName in assemblyNames)
        {
            // 有些列表项可能已经包含 .dll 后缀，我们统一处理
            string fileName = Path.GetFileNameWithoutExtension(dllName);
            string sourceFile = Path.Combine(sourceDir, fileName + ".dll");
            string destFile = Path.Combine(fullDestDir, fileName + ".dll.bytes");

            if (!File.Exists(sourceFile))
            {
                Debug.LogWarning($"[AOTMetadataCopy] 未找到源文件: {sourceFile}，已跳过。");
                continue;
            }

            File.Copy(sourceFile, destFile, true);
            successCount++;
            Debug.Log($"[AOTMetadataCopy] 已复制: {fileName}.dll -> {destFile}");
        }

        AssetDatabase.Refresh();
        Debug.Log($"[AOTMetadataCopy] 完成，成功复制 {successCount}/{assemblyNames.Count} 个文件。");
    }

    private static string GetPlatformFolderName(BuildTarget target)
    {
        switch (target)
        {
            case BuildTarget.StandaloneWindows:
            case BuildTarget.StandaloneWindows64:
                return "StandaloneWindows64";
            case BuildTarget.StandaloneOSX:
                return "StandaloneMacOSX"; // 请根据实际 HybridCLR 生成目录名调整
            case BuildTarget.StandaloneLinux64:
                return "StandaloneLinux64";
            case BuildTarget.Android:
                return "Android";
            case BuildTarget.iOS:
                return "iOS";
            default:
                return null;
        }
    }


    private static List<string> GetPatchedAOTAssemblyList()
    {
        var type = System.Type.GetType("AOTGenericReferences");
        if (type == null)
        {
            foreach (var asm in System.AppDomain.CurrentDomain.GetAssemblies())
            {
                type = asm.GetType("AOTGenericReferences");
                if (type != null) break;
            }
        }

        if (type == null) return null;

        var field = type.GetField("PatchedAOTAssemblyList",
            System.Reflection.BindingFlags.Public | System.Reflection.BindingFlags.Static);
        if (field == null) return null;

        return field.GetValue(null) as List<string>;
    }
}