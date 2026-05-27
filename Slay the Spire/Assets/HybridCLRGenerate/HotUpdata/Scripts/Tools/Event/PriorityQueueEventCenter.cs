using System;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using UnityEngine;

#region 节点定义

/// <summary>
/// 事件节点通用接口，提供优先级和委托访问能力。
/// </summary>
/// <typeparam name="THandler">委托类型</typeparam>
public interface IPriorityEventNode<THandler> where THandler : Delegate
{
    /// <summary>优先级，数值越大越先执行</summary>
    int Priority { get; set; }
    /// <summary>事件处理委托</summary>
    THandler Handler { get; set; }
}

/// <summary>
/// 同步事件节点，存储优先级和对应的同步处理委托。
/// 实现 IComparable 用于列表中的优先级降序排列。
/// </summary>
public class PriorityEvent : IPriorityEventNode<GameEventHandler<GameEventArgs>>, IComparable<PriorityEvent>
{
    public int Priority { get; set; }
    public GameEventHandler<GameEventArgs> Handler { get; set; }
    /// <summary>降序比较：优先级高的排在前面</summary>
    public int CompareTo(PriorityEvent other) => other.Priority.CompareTo(this.Priority);
}

/// <summary>
/// 异步事件节点，存储优先级和对应的异步处理委托。
/// 实现 IComparable 用于列表中的优先级降序排列。
/// </summary>
public class PriorityEventAsync : IPriorityEventNode<GameEventHandlerAsync<GameEventArgs>>, IComparable<PriorityEventAsync>
{
    public int Priority { get; set; }
    public GameEventHandlerAsync<GameEventArgs> Handler { get; set; }
    /// <summary>降序比较：优先级高的排在前面</summary>
    public int CompareTo(PriorityEventAsync other) => other.Priority.CompareTo(this.Priority);
}

#endregion

/// <summary>
/// 线程不安全的优先级事件中心，同时支持同步和异步事件。
/// 基于优先级降序触发监听器。
/// 执行期间的所有订阅/取消订阅操作均会延迟到触发结束后才真正应用，
/// 保证遍历安全且零GC分配。
/// 实现了 IPriorityEventManageAsync 接口。
/// </summary>
public class PriorityQueueEventCenter : IPriorityEventManageAsync<GameEventArgs>
{
    /// <summary>
    /// 内部泛型事件通道，封装同一类型（同步或异步）事件的所有管理逻辑。
    /// 包括列表存储、执行计数、延迟操作队列以及相关操作。
    /// </summary>
    /// <typeparam name="TNode">事件节点类型，必须实现 IPriorityEventNode 和 IComparable</typeparam>
    /// <typeparam name="THandler">委托类型</typeparam>
    private class EventChannel<TNode, THandler>
        where TNode : class, IPriorityEventNode<THandler>, IComparable<TNode>
        where THandler : Delegate
    {
        /// <summary>事件类型到按优先级排序的节点列表的映射</summary>
        public Dictionary<Type, List<TNode>> events = new();
        /// <summary>正在执行的事件类型及其重入次数（支持递归触发）</summary>
        public Dictionary<Type, int> executingCounts = new();
        /// <summary>
        /// 延迟操作队列，记录执行期间发生的增删操作。
        /// 元组格式: (事件类型, 委托, 优先级, 是否为添加操作)
        /// </summary>
        public List<(Type type, THandler handler, int priority, bool isAdd)> pendingOps = new(4);

        // 创建节点实例的工厂方法
        private readonly Func<THandler, int, TNode> createNode;
        // 插入节点到列表的方法（保证有序）
        private readonly Action<List<TNode>, TNode> insertAction;
        // 从列表中移除节点的方法
        private readonly Action<List<TNode>, THandler> removeAction;

        public EventChannel(Func<THandler, int, TNode> createNode,
            Action<List<TNode>, TNode> insertAction,
            Action<List<TNode>, THandler> removeAction)
        {
            this.createNode = createNode;
            this.insertAction = insertAction;
            this.removeAction = removeAction;
        }

        /// <summary>
        /// 静态方法：按优先级降序将节点插入到已排序的列表中。
        /// 使用二分查找定位插入位置。
        /// </summary>
        public static void InsertSorted(List<TNode> list, TNode node)
        {
            int index = list.BinarySearch(node);
            if (index < 0) index = ~index; // 转换为插入位置
            list.Insert(index, node);
        }

        /// <summary>
        /// 静态方法：从列表中移除第一个匹配的委托对应的节点。
        /// </summary>
        public static void RemoveFromList(List<TNode> list, THandler handler)
        {
            for (int i = 0; i < list.Count; i++)
            {
                if (list[i].Handler != handler) continue;
                list.RemoveAt(i);
                return;
            }
        }

        /// <summary>
        /// 订阅事件。
        /// 若该事件当前正在执行，则将添加操作记录到延迟队列中。
        /// </summary>
        public void Subscribe(Type type, THandler handler, int priority)
        {
            if (!events.TryGetValue(type, out var list))
            {
                list = new List<TNode>();
                events[type] = list;
            }

            if (executingCounts.ContainsKey(type))
            {
                // 正在执行，延迟添加
                pendingOps.Add((type, handler, priority, true));
                return;
            }

            var node = createNode(handler, priority);
            insertAction(list, node);
        }

        /// <summary>
        /// 取消订阅单个处理器。
        /// 若事件正在执行，则记录移除操作到延迟队列。
        /// </summary>
        public void UnSubscribe(Type type, THandler handler)
        {
            if (!events.TryGetValue(type, out var list)) return;

            if (executingCounts.ContainsKey(type))
            {
                pendingOps.Add((type, handler, 0, false));
                return;
            }

            removeAction(list, handler);
            if (list.Count == 0) events.Remove(type);
        }

        /// <summary>
        /// 清空指定事件的所有监听器。
        /// 若正在执行，清空待处理队列中原有的该类型操作，并为当前所有监听器生成移除操作。
        /// </summary>
        public void UnSubscribeAll(Type type)
        {
            if (!events.TryGetValue(type, out var list)) return;

            if (executingCounts.ContainsKey(type))
            {
                // 清除该类型之前的待处理操作，保证“全部取消”的语义
                pendingOps.RemoveAll(op => op.type == type);
                foreach (var node in list)
                    pendingOps.Add((type, node.Handler, 0, false));
            }
            else
            {
                events.Remove(type);
            }
        }

        /// <summary>
        /// 标记事件开始执行，增加重入计数。
        /// </summary>
        public void BeginExecute(Type type)
        {
            executingCounts.TryGetValue(type, out int count);
            executingCounts[type] = count + 1;
        }

        /// <summary>
        /// 标记事件执行结束，递减重入计数。
        /// 当计数归零时返回 true，表示需要处理积累的延迟操作。
        /// </summary>
        public bool EndExecute(Type type)
        {
            if (!executingCounts.TryGetValue(type, out int count)) return false;
            count--;
            if (count <= 0)
            {
                executingCounts.Remove(type);
                return true; // 完全退出执行，可进行延迟操作处理
            }

            executingCounts[type] = count;
            return false;
        }

        /// <summary>
        /// 处理指定事件类型在本次执行期间积累的所有延迟操作（添加/移除）。
        /// 操作按发生的顺序依次应用。
        /// </summary>
        public void ProcessPendingOperations(Type type)
        {
            var indices = new List<int>();
            var ops = new List<(THandler handler, int priority, bool isAdd)>();
            // 收集该类型的所有操作及其在待处理队列中的索引
            for (int i = 0; i < pendingOps.Count; i++)
            {
                var (t, h, p, add) = pendingOps[i];
                if (t != type) continue;

                indices.Add(i);
                ops.Add((h, p, add));
            }

            // 按原始顺序执行操作
            foreach (var (handler, priority, isAdd) in ops)
            {
                if (isAdd)
                {
                    if (!events.TryGetValue(type, out var list))
                    {
                        list = new List<TNode>();
                        events[type] = list;
                    }
                    var node = createNode(handler, priority);
                    insertAction(list, node);
                }
                else
                {
                    if (events.TryGetValue(type, out var list))
                        removeAction(list, handler);
                }
            }

            // 从待处理队列中移除已执行的操作（倒序移除防止索引错乱）
            for (int i = indices.Count - 1; i >= 0; i--)
                pendingOps.RemoveAt(indices[i]);

            // 如果列表变空，清理字典条目
            if (events.TryGetValue(type, out var finalList) && finalList.Count == 0)
                events.Remove(type);
        }

        /// <summary>
        /// 获取指定事件类型的监听列表，可能为 null。
        /// </summary>
        public List<TNode> GetList(Type type) => events.GetValueOrDefault(type);
    }

    // ---------- 通道实例 ----------
    // 同步事件通道
    private readonly EventChannel<PriorityEvent, GameEventHandler<GameEventArgs>> syncChannel =
        new(
            (handler, priority) => new PriorityEvent { Handler = handler, Priority = priority },
            EventChannel<PriorityEvent, GameEventHandler<GameEventArgs>>.InsertSorted,
            EventChannel<PriorityEvent, GameEventHandler<GameEventArgs>>.RemoveFromList
        );

    // 异步事件通道
    private readonly EventChannel<PriorityEventAsync, GameEventHandlerAsync<GameEventArgs>> asyncChannel =
        new(
            (handler, priority) => new PriorityEventAsync { Handler = handler, Priority = priority },
            EventChannel<PriorityEventAsync, GameEventHandlerAsync<GameEventArgs>>.InsertSorted,
            EventChannel<PriorityEventAsync, GameEventHandlerAsync<GameEventArgs>>.RemoveFromList
        );

    #region 公共API

    #region 订阅

    /// <summary>订阅同步事件，指定优先级（优先级越高越先执行）</summary>
    public virtual void Subscribe<EventName>(GameEventHandler<GameEventArgs> handler, int priority)
        => syncChannel.Subscribe(typeof(EventName), handler, priority);

    /// <summary>订阅异步事件，指定优先级</summary>
    public virtual void SubscribeAsync<EventName>(GameEventHandlerAsync<GameEventArgs> handler, int priority)
        => asyncChannel.Subscribe(typeof(EventName), handler, priority);

    #endregion

    #region 取消订阅

    /// <summary>取消订阅指定同步处理器</summary>
    public virtual void UnSubscribe<EventName>(GameEventHandler<GameEventArgs> handler)
        => syncChannel.UnSubscribe(typeof(EventName), handler);

    /// <summary>取消订阅指定异步处理器</summary>
    public virtual void UnSubscribeAsync<EventName>(GameEventHandlerAsync<GameEventArgs> handler)
        => asyncChannel.UnSubscribe(typeof(EventName), handler);

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
    /// </summary>
    public virtual void Fire<EventName>(object sender, GameEventArgs args)
    {
        var type = typeof(EventName);
        var list = syncChannel.GetList(type);
        if (list == null || list.Count == 0)
        {
            Debug.Log($"调用者:{sender}, 同步事件{type.Name}无监听");
            return;
        }

        syncChannel.BeginExecute(type);
        // 直接遍历原列表，执行期间列表不会被修改（延迟操作）
        foreach (var node in list)
        {
            node.Handler?.Invoke(sender, args);
        }

        // 执行完毕且无重入，处理积累的延迟操作
        if (syncChannel.EndExecute(type))
            syncChannel.ProcessPendingOperations(type);
    }

    /// <summary>
    /// 异步触发事件，按优先级从高到低依次异步执行监听器。
    /// 执行期间的所有增删操作将被延迟。
    /// </summary>
    public virtual async UniTask FireAsync<EventName>(object sender, GameEventArgs args)
    {
        var type = typeof(EventName);
        var list = asyncChannel.GetList(type);
        if (list == null || list.Count == 0)
        {
            Debug.Log($"调用者:{sender}, 异步事件{type.Name}无监听");
            return;
        }

        asyncChannel.BeginExecute(type);
        foreach (var node in list)
        {
            if (node.Handler == null) continue;
            await node.Handler.Invoke(sender, args);
        }

        if (asyncChannel.EndExecute(type))
            asyncChannel.ProcessPendingOperations(type);
    }

    #endregion

    #region 清空

    /// <summary>清空所有同步和异步事件数据，包括监听、执行状态和延迟操作队列</summary>
    public virtual void Clear()
    {
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