using System;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using UnityEngine;


/// <summary>
/// 线程不安全的优先级事件中心，同时支持同步和异步事件。
/// 基于优先级降序触发监听器。
/// 执行期间的所有订阅/取消订阅操作均会延迟到触发结束后才真正应用，
/// 保证遍历安全且零GC分配。
/// 实现了 IPriorityEventManageAsync 接口。
/// </summary>
public partial class PriorityQueueEventCenter : IPriorityEventManageAsync<GameEventArgs>
{
    // ---------- 通道实例 ----------

    // 同步事件通道
    private readonly EventChannel<PriorityEvent, GameEventHandler<GameEventArgs>> syncChannel = new();

    // 异步事件通道
    private readonly EventChannel<PriorityEventAsync, GameEventHandlerAsync<GameEventArgs>> asyncChannel = new();

    #region 公共API

    #region 订阅

    /// <summary>订阅同步事件，指定优先级（优先级越高越先执行）</summary>
    public virtual void Subscribe<EventName>(GameEventHandler<GameEventArgs> handler, int priority)
    {
        if (handler == null) throw new ArgumentNullException(nameof(handler));
        syncChannel.Subscribe(typeof(EventName), handler, priority);
    }

    /// <summary>订阅异步事件，指定优先级</summary>
    public virtual void SubscribeAsync<EventName>(GameEventHandlerAsync<GameEventArgs> handler, int priority)
    {
        if (handler == null) throw new ArgumentNullException(nameof(handler));
        asyncChannel.Subscribe(typeof(EventName), handler, priority);
    }

    #endregion

    #region 取消订阅

    /// <summary>取消订阅指定同步处理器</summary>
    public virtual void UnSubscribe<EventName>(GameEventHandler<GameEventArgs> handler)
    {
        if (handler == null) return;
        syncChannel.UnSubscribe(typeof(EventName), handler);
    }

    /// <summary>取消订阅指定异步处理器</summary>
    public virtual void UnSubscribeAsync<EventName>(GameEventHandlerAsync<GameEventArgs> handler)
    {
        if (handler == null) return;
        asyncChannel.UnSubscribe(typeof(EventName), handler);
    }

    /// <summary>移除指定事件类型的所有同步监听</summary>
    public virtual void UnSubscribeAll<EventName>()
        => syncChannel.UnSubscribeAll(typeof(EventName));

    /// <summary>移除指定事件类型的所有异步监听</summary>
    public virtual void UnSubscribeAllAsync<EventName>()
        => asyncChannel.UnSubscribeAll(typeof(EventName));

    #endregion

    #region 触发

    /// <summary>
    /// 同步触发事件，按优先级从高到低依次调用监听器。
    /// 执行期间的所有增删操作将被延迟。
    /// 每个监听器的异常被隔离，不会中断后续监听器。
    /// </summary>
    public virtual void Fire<EventName>(object sender, GameEventArgs args)
    {
        var type = typeof(EventName);
        var list = syncChannel.GetList(type);
        if (list == null || list.Count == 0) return; // 无监听，直接返回

        syncChannel.BeginExecute(type);
        // 直接遍历原列表，执行期间列表不会被修改（延迟操作）
        foreach (var node in list)
        {
            if (node.Handler == null) continue;
            try
            {
                node.Handler.Invoke(sender, args);
            }
            catch (Exception ex)
            {
                Debug.LogError($"同步事件 {type.Name} 的监听器抛出异常: {ex}");
            }
        }

        // 执行完毕且无重入，处理积累的延迟操作
        if (syncChannel.EndExecute(type))
            syncChannel.ProcessPendingOperations(type);
    }

    /// <summary>
    /// 异步触发事件，按优先级从高到低依次异步执行监听器。
    /// 执行期间的所有增删操作将被延迟。
    /// 每个监听器的异常被隔离，不会中断后续监听器。
    /// </summary>
    public virtual async UniTask FireAsync<EventName>(object sender, GameEventArgs args)
    {
        var type = typeof(EventName);
        var list = asyncChannel.GetList(type);
        if (list == null || list.Count == 0) return; // 无监听，直接返回

        asyncChannel.BeginExecute(type);
        foreach (var node in list)
        {
            if (node.Handler == null) continue;
            try
            {
                await node.Handler.Invoke(sender, args);
            }
            catch (Exception ex)
            {
                Debug.LogError($"异步事件 {type.Name} 的监听器抛出异常: {ex}");
            }
        }

        if (asyncChannel.EndExecute(type))
            asyncChannel.ProcessPendingOperations(type);
    }

    #endregion

    #region 清空

    /// <summary>
    /// 清空所有同步和异步事件数据，包括监听、执行状态和延迟操作队列。
    /// 若任何事件正在执行，则抛出 InvalidOperationException。
    /// </summary>
    public virtual void Clear()
    {
        if (syncChannel.IsExecuting || asyncChannel.IsExecuting)
            throw new InvalidOperationException("Cannot clear PriorityQueueEventCenter while events are being executed.");

        syncChannel.events.Clear();
        syncChannel.executingCounts.Clear();
        syncChannel.pendingOps.Clear();

        asyncChannel.events.Clear();
        asyncChannel.executingCounts.Clear();
        asyncChannel.pendingOps.Clear();
    }

    #endregion

    #endregion
}