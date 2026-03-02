using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;

public static class RuntimeInstanceCreator
{
    /// <summary>
    /// 异步获取指定程序集和命名空间下实现特定接口或继承特定类的所有实例。
    /// </summary>
    /// <typeparam name="T">目标类型（接口或基类）</typeparam>
    /// <param name="assemblyName">程序集名称</param>
    /// <param name="targetNamespace">目标命名空间</param>
    /// <param name="progress">进度报告器（可选）</param>
    /// <param name="cancellationToken">取消令牌（可选）</param>
    /// <param name="framesPerYield">每处理多少个类型后让出一帧（用于分帧处理）</param>
    /// <returns>实例列表</returns>
    public static async UniTask<List<T>> GetInstancesInNamespaceAsync<T>(
        string assemblyName, 
        string targetNamespace, 
        IProgress<float> progress = null,
        CancellationToken cancellationToken = default,
        int framesPerYield = 5) where T : class
    {
        List<T> instances = new List<T>();
        
        try
        {
            // 报告初始进度
            progress?.Report(0f);
            
            // 1. 异步加载程序集（在后台线程执行）
            Assembly targetAssembly = await LoadAssemblyAsync(assemblyName, cancellationToken);
            if (targetAssembly == null)
            {
                Debug.LogError($"未找到名为 '{assemblyName}' 的程序集。");
                return instances;
            }

            // 2. 安全地获取程序集中的所有类型
            Type[] allTypes = await GetAllTypesAsync(targetAssembly, cancellationToken);
            
            // 3. 筛选目标类型
            var targetTypes = allTypes.Where(t =>
                t is { IsClass: true, IsAbstract: false, IsPublic: true } &&
                t.Namespace == targetNamespace &&
                typeof(T).IsAssignableFrom(t)
            ).ToArray();

            Debug.Log($"在程序集 '{assemblyName}' 的命名空间 '{targetNamespace}' 下找到 {targetTypes.Length} 个符合条件的类型。");

            // 4. 分帧异步创建实例
            if (targetTypes.Length > 0)
            {
                instances = await CreateInstancesAsync<T>(targetTypes, progress, cancellationToken, framesPerYield);
            }
            
            progress?.Report(1f);
            Debug.Log($"异步实例创建完成，共创建 {instances.Count} 个实例。");
        }
        catch (OperationCanceledException)
        {
            Debug.Log("实例创建操作已被取消。");
        }
        catch (Exception ex)
        {
            Debug.LogError($"在获取程序集 '{assemblyName}' 的命名空间 '{targetNamespace}' 下的实例时发生错误: {ex.Message}");
        }

        return instances;
    }

    /// <summary>
    /// 在后台线程异步加载程序集
    /// </summary>
    private static async UniTask<Assembly> LoadAssemblyAsync(string assemblyName, CancellationToken cancellationToken)
    {
        // 切换到线程池执行耗时操作
        await UniTask.SwitchToThreadPool();
        cancellationToken.ThrowIfCancellationRequested();
        
        return Assembly.Load(assemblyName);
    }

    /// <summary>
    /// 安全地获取程序集的所有类型
    /// </summary>
    private static async UniTask<Type[]> GetAllTypesAsync(Assembly assembly, CancellationToken cancellationToken)
    {
        await UniTask.SwitchToThreadPool();
        cancellationToken.ThrowIfCancellationRequested();
        
        try
        {
            return assembly.GetTypes();
        }
        catch (ReflectionTypeLoadException ex)
        {
            // 处理部分类型加载失败的情况
            Debug.LogWarning($"加载程序集时部分类型可能不完整，将使用已成功加载的类型。");
            return ex.Types.Where(t => t != null).ToArray();
        }
    }

    /// <summary>
    /// 分帧异步创建实例，避免单帧卡顿
    /// </summary>
    private static async UniTask<List<T>> CreateInstancesAsync<T>(
        Type[] targetTypes, 
        IProgress<float> progress, 
        CancellationToken cancellationToken,
        int framesPerYield) where T : class
    {
        List<T> instances = new List<T>();
        int totalCount = targetTypes.Length;
        
        // 切换回主线程进行实例创建（Unity对象操作需要在主线程）
        await UniTask.SwitchToMainThread(cancellationToken);
        
        for (int i = 0; i < totalCount; i++)
        {
            cancellationToken.ThrowIfCancellationRequested();
            
            Type type = targetTypes[i];
            try
            {
                // 使用Activator创建实例
                object instance = Activator.CreateInstance(type);
                if (instance is T validInstance)
                {
                    instances.Add(validInstance);
                    Debug.Log($"成功创建实例: {type.FullName}");
                }
                
                // 报告进度
                float currentProgress = (float)(i + 1) / totalCount;
                progress?.Report(currentProgress);
                
                // 每处理 framesPerYield 个类型后让出一帧，避免卡顿
                if (i % framesPerYield == framesPerYield - 1 && i < totalCount - 1)
                {
                    await UniTask.Yield(cancellationToken);
                    // 或者使用 DelayFrame 更精确控制
                    // await UniTask.DelayFrame(1, cancellationToken: cancellationToken);
                }
            }
            catch (Exception ex)
            {
                Debug.LogError($"创建类型 {type.FullName} 的实例时出错: {ex.Message}");
            }
        }
        
        return instances;
    }
}