using System;
using System.Collections.Generic;
using System.Threading;
using Cysharp.Threading.Tasks;
using Z_Tools;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.ResourceManagement.ResourceLocations;

//可寻址资源 信息
public class AddressablesInfo
{
    //记录 异步操作句柄
    public AsyncOperationHandle handle { get; }

    //记录 引用计数
    public uint count;

    public AddressablesInfo(AsyncOperationHandle handle)
    {
        this.handle = handle;
        count += 1;
    }
}

public class AddressablesMgr : SingletonBase<AddressablesMgr>
{
    //有一个容器 帮助我们存储 异步加载的返回值
    private Dictionary<string, AddressablesInfo> resDic = new();
    

    public void Show()
    {
        foreach (var key in resDic.Keys)
        {
            Debug.Log(key);
        }
    }

    // 核心方法：使用 UniTask 异步加载资源
    public async UniTask<T> LoadAssetAsync<T>(string path)
    {
        // 构建唯一的资源标识键
        string keyName = path;
        AsyncOperationHandle<T> handle;
        // 检查资源是否已缓存
        if (resDic.TryGetValue(keyName, out AddressablesInfo cachedInfo))
        {
//            Debug.Log((cachedInfo.handle.Result is T) + "____" + $"{path}_____{cachedInfo.handle.Result == null}____{typeof(T)}");
           
            if (cachedInfo.handle.Result is not T result)
            {
                Debug.Log($"类型不一致：原类型为：{cachedInfo.handle.Result.GetType()}，所需类型为{typeof(T)}");
                return default;
            }
            cachedInfo.count += 1;
            return result;
        }

        // 资源未缓存，开始新的异步加载
        handle = Addressables.LoadAssetAsync<T>(path);

        try
        {
            // 等待异步加载完成
            // ToUniTask() 将 Addressables 的异步操作转换为 UniTask
            await handle.ToUniTask();

            // 检查最终状态
            if (handle.Status == AsyncOperationStatus.Succeeded)
            {
                resDic.TryAdd(keyName, new AddressablesInfo(handle));
                return handle.Result;
            }
            // 加载失败，从缓存中移除并抛出异常
            resDic.Remove(keyName);
            Debug.Log($"Failed to load asset: {keyName}");
            return default;
        }
        catch (System.Exception ex)
        {
            // 异常处理：确保失败时清理缓存
            resDic.Remove(keyName);

            Addressables.Release(handle);
            Debug.Log($"Failed to load asset: {keyName}" + ex);
            return default;
        }
    }
    
    //释放资源的方法 
    public void Release(string path)
    {
        string keyName = path;
        if (!resDic.TryGetValue(keyName, out var value)) return;
        //释放时 引用计数-1
        value.count -= 1;
        //如果引用计数为0  才真正的释放
        if (resDic[keyName].count != 0) return;
        Addressables.Release(resDic[keyName].handle);
        resDic.Remove(keyName);
    }
    
    public void Release(AsyncOperationHandle resource)
    {
        foreach (var VARIABLE in resDic)
        {
            if (VARIABLE.Value.handle.Equals(resource))
            {
                VARIABLE.Value.count -= 1;
                if (VARIABLE.Value.count == 0)
                {
                    Addressables.Release(VARIABLE.Value.handle);
                }
            }
        }
    }

    //清空资源
    public void Clear()
    {
        foreach (var item in resDic.Values)
        {
            Addressables.Release(item.handle);
        }

        resDic.Clear();
        // AssetBundle.UnloadAllAssetBundles(true);
        Resources.UnloadUnusedAssets();
        GC.Collect();
    }
}