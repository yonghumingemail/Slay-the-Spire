using System;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using Z_Tools;

/// <summary>
/// Addressables 资源管理器（线程安全，主线程使用）
/// 基于 UniTaskCompletionSource 统一管理加载完成信号，
/// 引用计数归零时自动释放资源，避免并发冲突与资源泄漏。
/// </summary>
public class AddressablesMgr : SingletonBase<AddressablesMgr>
{
    /// <summary>
    /// 内部资源信息：句柄、引用计数、完成信号源
    /// </summary>
    private class ResourceInfo
    {
        public AsyncOperationHandle handle; // 用于最终释放
        public uint refCount; // 当前引用计数
        public UniTaskCompletionSource<object> completionSource; // 加载完成信号（传递结果或异常）
    }

    private readonly Dictionary<string, ResourceInfo> mainResources = new Dictionary<string, ResourceInfo>();
    private readonly object lockObj = new object();


    /// <summary>
    /// 异步加载单个资源（自动增加引用计数，返回资源实例）
    /// </summary>
    /// <typeparam name="T">资源类型（必须为 UnityEngine.Object）</typeparam>
    /// <param name="address">资源地址</param>
    /// <param name="progress">可选的进度报告</param>
    /// <returns>资源实例</returns>
    public async UniTask<T> LoadAssetAsync<T>(string address, IProgress<float> progress = null) where T : class
    {
        if (string.IsNullOrEmpty(address))
            throw new ArgumentNullException(nameof(address));

        string key = address;
        ResourceInfo info;
        bool isInitiator = false;

        lock (lockObj)
        {
            if (mainResources.TryGetValue(key, out info))
            {
                // 已存在（已加载完成或正在加载中），增加引用计数
                info.refCount++;
            }
            else
            {
                // 不存在：创建新信息，标记为“加载中”
                info = new ResourceInfo
                {
                    refCount = 1,
                    completionSource = new UniTaskCompletionSource<object>()
                };
                mainResources[key] = info;
                isInitiator = true;
            }
        }

        if (isInitiator)
        {
            // 作为发起者：真正发起 Addressables 加载
            var handle = Addressables.LoadAssetAsync<T>(address);
            info.handle = handle;

            try
            {
                await handle.ToUniTask(progress);
                if (handle.Status == AsyncOperationStatus.Succeeded)
                {
                    // 成功：将结果写入信号源，通知所有等待者
                    info.completionSource.TrySetResult(handle.Result);
                    return handle.Result;
                }
                else
                {
                    var ex = new Exception($"Resource load failed: {address}, {handle.OperationException}");
                    info.completionSource.TrySetException(ex);
                    throw ex;
                }
            }
            catch (Exception ex)
            {
                // 加载异常：设置失败信号，清理句柄与字典条目
                info.completionSource.TrySetException(ex);

                AsyncOperationHandle handleToRelease = info.handle;
                lock (lockObj)
                {
                    mainResources.Remove(key);
                }

                if (handleToRelease.IsValid())
                    Addressables.Release(handleToRelease);

                throw;
            }
        }

        // 作为等待者：等待发起者的完成信号（成功返回结果，失败抛出异常）
        var resultObj = await info.completionSource.Task;

        // 成功，直接转换结果类型
        return resultObj as T;
    }

    /// <summary>
    /// 根据标签列表加载所有匹配的资源（支持并集/交集模式）
    /// </summary>
    /// <param name="labels">标签列表</param>
    /// <param name="mergeMode">合并模式：Intersection（交集，需同时拥有所有标签）或 Union（并集，拥有任一标签即可）</param>
    public async UniTask<IList<T>> LoadAssetsAsync<T>(
        IList<string> labels,
        Addressables.MergeMode mergeMode = Addressables.MergeMode.Union) where T : class
    {
        if (labels == null || labels.Count == 0)
            throw new ArgumentNullException(nameof(labels));

        // 先获取资源位置，此时查询完成前不能访问 Result
        var locationHandle = Addressables.LoadResourceLocationsAsync(
            labels,
            mergeMode,
            typeof(T));

        await locationHandle.ToUniTask();

        try
        {
            if (locationHandle.Status != AsyncOperationStatus.Succeeded)
                 throw new ArgumentNullException(); // 抛出异常

            var locations = locationHandle.Result;
            var tasks = new List<UniTask<T>>(locations.Count);

            foreach (var loc in locations)
            {
                tasks.Add(LoadAssetAsync<T>(loc.PrimaryKey));
            }

            // 等待所有资源加载完成
            var results = await UniTask.WhenAll(tasks);
            return results;
        }
        finally
        {
            if (locationHandle.IsValid())
                Addressables.Release(locationHandle);
        }
    }
    
  
    
    /// <summary>
    /// 释放单个资源（引用计数减一，计数归零时真正释放）
    /// </summary>
    /// <param name="address">资源地址</param>
    public void Release(string address)
    {
        string key = address;
        AsyncOperationHandle handleToRelease = default;
        bool shouldRelease = false;

        lock (lockObj)
        {
            if (mainResources.TryGetValue(key, out var info))
            {
                if (info.refCount > 0)
                    info.refCount--;

                if (info.refCount == 0)
                {
                    handleToRelease = info.handle;
                    mainResources.Remove(key);
                    shouldRelease = true;
                }
            }
        }

        // 锁外释放，避免死锁
        if (shouldRelease && handleToRelease.IsValid())
        {
            Addressables.Release(handleToRelease);
        }
    }

    /// <summary>
    /// 根据标签列表释放所有匹配的资源（引用计数减一，若归零则真正释放）
    /// </summary>
    /// <param name="labels">标签列表</param>
    /// <param name="mergeMode">合并模式：Intersection（交集，需同时拥有所有标签）或 Union（并集，拥有任一标签即可）</param>
    public async UniTask ReleaseAssetsByLabelsAsync(
        IList<string> labels,
        Addressables.MergeMode mergeMode = Addressables.MergeMode.Union)
    {
        if (labels == null || labels.Count == 0)
            throw new ArgumentNullException(nameof(labels));

        // 获取所有匹配标签的资源位置
        var locationHandle = Addressables.LoadResourceLocationsAsync(labels, mergeMode, typeof(UnityEngine.Object));
        await locationHandle.ToUniTask();

        try
        {
            if (locationHandle.Status == AsyncOperationStatus.Succeeded)
            {
                var locations = locationHandle.Result;
                foreach (var loc in locations)
                {
                    // 对每个地址执行一次释放（与 Load 配对）
                    Release(loc.PrimaryKey);
                }
            }
            // 若查询失败，静默返回（也可视需求记录日志）
        }
        finally
        {
            if (locationHandle.IsValid())
                Addressables.Release(locationHandle);
        }
    }
    
    
   
}