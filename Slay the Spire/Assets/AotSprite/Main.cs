using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using Cysharp.Threading.Tasks;
using HybridCLR;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

public class Main : MonoBehaviour
{
    private async void Start()
    {
        try
        {
            // 1. 初始化 Addressables
            await Addressables.InitializeAsync();

            // 2. 补充 AOT 元数据（在加载 HotUpdate.dll 之前）
            var handle = Addressables.LoadAssetsAsync<TextAsset>(
                new List<string> { "MataDataDllText" }, 
                null, 
                Addressables.MergeMode.Union, 
                false
            );
            await handle.Task;
            if (handle.Status == AsyncOperationStatus.Succeeded)
            {
                foreach (var text in handle.Result)
                {
                    var err = RuntimeApi.LoadMetadataForAOTAssembly(text.bytes, HomologousImageMode.SuperSet);
                    if (err != LoadImageErrorCode.OK)
                        Debug.LogError($"元数据 {text.name} 加载失败: {err}");
                }
            }
            else
            {
                Debug.LogError("加载 AOT 元数据失败");
                return;
            }
            Addressables.Release(handle);

            
            // 3. 加载热更程序集
            // Editor环境下，HotUpdate.dll.bytes已经被自动加载，不需要加载，重复加载反而会出问题。
#if !UNITY_EDITOR
        Assembly hotUpdateAss = Assembly.Load(File.ReadAllBytes($"{Application.streamingAssetsPath}/HotUpdate.dll.bytes"));
#else
            // Editor下无需加载，直接查找获得HotUpdate程序集
            Assembly hotUpdateAss = System.AppDomain.CurrentDomain.GetAssemblies().First(a => a.GetName().Name == "HotUpdate");
#endif
            // 4. 加载热更场景
            await Addressables.LoadSceneAsync("Assets/Scenes/Test.unity"); // 请使用你实际配置的场景地址
        }
        catch (System.Exception e)
        {
            Debug.LogError($"Main 启动失败: {e}");
        }
    }
}