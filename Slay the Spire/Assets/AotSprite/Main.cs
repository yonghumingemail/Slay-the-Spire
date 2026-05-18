using System.Collections.Generic;
using System.IO;
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
                new List<string> { "MetadataDllText" }, // 确认标签名无误
                null
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
            Assembly hotUpdateAss = Assembly.Load(await File.ReadAllBytesAsync($"{Application.streamingAssetsPath}/HotUpdate.dll.bytes"));
            Debug.Log("热更程序集加载完成");

            // 4. 加载热更场景
            await Addressables.LoadSceneAsync("Assets/Scenes/Test.unity"); // 请使用你实际配置的场景地址
        }
        catch (System.Exception e)
        {
            Debug.LogError($"Main 启动失败: {e}");
        }
    }
}