using System;
using System.Collections.Generic;

namespace GameFramework
{
    public partial class PriorityEventManager
    {
        /// <summary>
        /// 内部泛型事件通道，封装同一类型（同步或异步）事件的所有管理逻辑。
        /// 包括列表存储、执行计数、延迟操作队列以及相关操作。
        /// </summary>
        /// <typeparam name="THandler">委托类型</typeparam>
        public class EventChannel<THandler>
            where THandler : Delegate
        {
            /// <summary>事件类型到按优先级排序的节点列表的映射</summary>
            public Dictionary<Type, List<PriorityEventNode<THandler>>> events = new();

            /// <summary>正在执行的事件类型及其重入次数（支持递归触发）</summary>
            public Dictionary<Type, int> executingCounts = new();

            /// <summary>
            /// 延迟操作队列，记录执行期间发生的增删操作。
            /// 元组格式: (事件类型, 委托, 优先级, 是否为添加操作)
            /// </summary>
            public List<(Type type, THandler handler, int priority, bool isAdd)> pendingOps = new(4);

            private List<int> _indicesCache = new();
            private List<(THandler handler, int priority, bool isAdd)> _opsCache = new();

            /// <summary>
            /// 按优先级降序将节点插入到已排序的列表中。
            /// 使用二分查找定位插入位置。
            /// </summary>
            private void InsertSorted(List<PriorityEventNode<THandler>> list, PriorityEventNode<THandler> node)
            {
                int index = list.BinarySearch(node);
                if (index < 0) index = ~index; // 转换为插入位置,~x 等价于 -(x+1)
                list.Insert(index, node);
            }

            /// <summary>
            /// 从列表中移除第一个匹配的委托对应的节点。
            /// </summary>
            private void RemoveFromList(List<PriorityEventNode<THandler>> list, THandler handler)
            {
                for (int i = 0; i < list.Count; i++)
                {
                    if (list[i].Handler != handler) continue;
                    ReferencePool.Release(list[i]);
                    list.RemoveAt(i);
                    return;
                }
            }

            private PriorityEventNode<THandler> GetNode(int priority, THandler handler)
            {
                var node = ReferencePool.Acquire<PriorityEventNode<THandler>>();
                node.Priority = priority;
                node.Handler = handler;
                node.sendName = handler.Method.DeclaringType?.Name + "__" + handler.Method.Name;
                return node;
            }

            /// <summary>
            /// 订阅事件。
            /// 若该事件当前正在执行，则将添加操作记录到延迟队列中。
            /// </summary>
            public void Subscribe(Type type, THandler handler, int priority)
            {
                if (handler == null) throw new ArgumentNullException(nameof(handler));

                if (!events.TryGetValue(type, out var list))
                {
                    list = new List<PriorityEventNode<THandler>>();
                    events[type] = list;
                }

                if (executingCounts.ContainsKey(type))
                {
                    // 正在执行，延迟添加
                    pendingOps.Add((type, handler, priority, true));
                    return;
                }

                var node = GetNode(priority, handler);
                InsertSorted(list, node);
            }

            /// <summary>
            /// 取消订阅单个处理器。
            /// 若事件正在执行，则记录移除操作到延迟队列。
            /// </summary>
            public void UnSubscribe(Type type, THandler handler)
            {
                if (handler == null) return; // 忽略空委托

                if (!events.TryGetValue(type, out var list)) return;

                if (executingCounts.ContainsKey(type))
                {
                    pendingOps.Add((type, handler, 0, false));
                    return;
                }

                RemoveFromList(list, handler);
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
                // 清空缓存
                _indicesCache.Clear();
                _opsCache.Clear();

                // 收集匹配的操作及其索引
                for (int i = 0; i < pendingOps.Count; i++)
                {
                    var (t, handler, priority, isAdd) = pendingOps[i];
                    if (t != type) continue;
                    _indicesCache.Add(i);
                    _opsCache.Add((handler, priority, isAdd));
                }

                // 按原始顺序执行操作
                foreach (var (handler, priority, isAdd) in _opsCache)
                {
                    if (isAdd)
                    {
                        if (!events.TryGetValue(type, out var list))
                        {
                            list = new List<PriorityEventNode<THandler>>();
                            events[type] = list;
                        }

                        var node = GetNode(priority, handler);
                        InsertSorted(list, node);
                    }
                    else
                    {
                        if (events.TryGetValue(type, out var list))
                            RemoveFromList(list, handler);
                    }
                }

                // 倒序删除已处理的操作
                for (int i = _indicesCache.Count - 1; i >= 0; i--)
                    pendingOps.RemoveAt(_indicesCache[i]);

                // 若列表变空，清理字典条目
                if (events.TryGetValue(type, out var finalList) && finalList.Count == 0)
                    events.Remove(type);
            }

            /// <summary>
            /// 获取指定事件类型的监听列表，可能为 null。
            /// </summary>
            public List<PriorityEventNode<THandler>> GetList(Type type) => events.GetValueOrDefault(type);

            /// <summary>
            /// 检查是否有任何事件正在执行。
            /// </summary>
            public bool IsExecuting => executingCounts.Count > 0;
        }
    }
}