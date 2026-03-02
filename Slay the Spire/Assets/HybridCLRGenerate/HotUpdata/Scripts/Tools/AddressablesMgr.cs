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

    public T LoadAsset<T>(string name)
    {
        // 构建唯一的资源标识键
        string keyName = name;
        Debug.Log(keyName);
        // 检查资源是否已缓存
        if (resDic.TryGetValue(keyName, out AddressablesInfo cachedInfo))
        {
            Debug.Log(cachedInfo.handle.Result is T); //结果为true
            // 获取已缓存的操作句柄并转换类型
            if (cachedInfo.handle.Result is T result)
            {
                cachedInfo.count += 1;
                return result;
            }
        }

        return default;
    }


    //释放资源的方法 
    public void Release(string path)
    {
        string keyName = path;
        if (resDic.ContainsKey(keyName))
        {
            //释放时 引用计数-1
            resDic[keyName].count -= 1;
            //如果引用计数为0  才真正的释放
            if (resDic[keyName].count == 0)
            {
                Addressables.Release(resDic[keyName].handle);
                resDic.Remove(keyName);
            }
        }
    }


    public async UniTaskVoid LoadAssetsAsync(Addressables.MergeMode mode, CancellationTokenSource cancellationTokenSource, params string[] keys)
    {
        try
        {
            // 参数验证
            if (keys == null || keys.Length == 0)
            {
                Debug.LogWarning("资源键数组为空，跳过加载");
                return;
            }

            if (cancellationTokenSource == null)
            {
                Debug.LogError("CancellationTokenSource 不能为 null");
                return;
            }

            // 1. 获取资源位置信息 - 查询标签对应的资源地址
            var locationsHandle = Addressables.LoadResourceLocationsAsync(keys, mode);

            // 等待资源位置查询完成，传入取消令牌以支持取消操作
            await locationsHandle.ToUniTask(cancellationToken: cancellationTokenSource.Token);

            // 检查资源位置查询是否成功
            if (locationsHandle.Status != AsyncOperationStatus.Succeeded)
            {
                Debug.LogError($"加载资源位置失败: {string.Join(", ", keys)}，状态: {locationsHandle.Status}");
                if (locationsHandle.OperationException != null)
                {
                    Debug.LogError($"异常信息: {locationsHandle.OperationException}");
                }

                return;
            }
            // Debug.Log($"找到 {locationsHandle.Result.Count} 个资源位置");

            // 2. 创建所有资源的加载任务列表
            var loadTasks = new List<UniTask<(string key, AsyncOperationHandle asset)>>();

            // 遍历所有资源位置，为每个资源创建加载任务
            foreach (var location in locationsHandle.Result)
            {
                // 为每个资源创建异步加载任务
                var task = LoadSingleAssetWithConcurrencyControl(location, cancellationTokenSource.Token);
                loadTasks.Add(task);
            }

            // 3. 使用 UniTask.WhenAll 并行加载所有资源，提高加载效率
            var results = await UniTask.WhenAll(loadTasks);

            // 4. 处理加载结果：将成功加载的资源添加到缓存字典
            foreach (var (key, asset) in results)
            {
                // 确保资源不为空且不重复添加
                if (asset.Result == null || resDic.ContainsKey(key)) continue;
                AddressablesInfo info = new AddressablesInfo(asset);
                resDic.Add(key, info);
            }

            // 释放资源位置查询句柄
            Addressables.Release(locationsHandle);
          //  Debug.Log($"资源加载完成，成功加载: {loadTasks.Count} 个资源");
        }
        catch (System.OperationCanceledException)
        {
            // 处理操作取消异常（用户主动取消或超时）
            Debug.Log("资源加载被取消");
        }
        catch (System.Exception e)
        {
            // 处理其他异常，记录错误信息
            Debug.LogError($"资源加载异常: {e.Message}");
        }
    }

    private async UniTask<(string key, AsyncOperationHandle asset)> LoadSingleAssetWithConcurrencyControl(
        IResourceLocation location,
        CancellationToken cancellationToken)
    {
        //检查资源字典中是否已经存在
        if (resDic.TryGetValue(location.InternalId, out AddressablesInfo cachedInfo))
        {
            return (location.InternalId,cachedInfo.handle);
        }
        // 开始异步加载资源
        var handle = Addressables.LoadAssetAsync<object>(location);

        // 等待加载完成，支持取消操作
        await handle.ToUniTask(cancellationToken: cancellationToken);

        string returnKey = location.InternalId;
        // 检查资源加载状态
        if (handle.Status == AsyncOperationStatus.Succeeded)
        {
            //Debug.Log($"成功加载资源: {returnKey}");
            resDic.Add(returnKey,new AddressablesInfo(handle));
            return (returnKey, handle);
        }

        // 加载失败，记录警告但继续执行其他资源加载
        //Debug.LogWarning($"加载资源失败: {location.InternalId}");
        Addressables.Release(handle);
        return (returnKey, default);
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