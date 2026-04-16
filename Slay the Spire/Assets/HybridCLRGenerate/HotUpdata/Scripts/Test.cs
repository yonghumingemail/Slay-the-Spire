using System;
using System.Collections.Generic;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;


/// <summary>
/// 操作类型枚举
/// 定义了对事件列表可以执行的操作类型
/// </summary>
public enum OperationType
{
   Add, // 添加事件
   Remove, // 移除特定事件
   RemoveAll, // 移除所有事件
   Change, // 修改事件（预留）
}

/// <summary>
/// 数组操作信息结构体
/// 用于延迟执行对事件列表的操作
/// </summary>
public struct ArrayOperationInfo
{
   public OperationType operationType; // 操作类型
   public string name; // 事件名称
   public PriorityEvent priorityEvent; // 优先级事件（仅Add/Remove操作需要）
}



public class Test : MonoBehaviour
{
// 事件字典：事件名称 -> 优先级事件列表
    private Dictionary<string, List<PriorityEvent>> Event_Dic = new();

    // 延迟执行的操作列表
    private List<ArrayOperationInfo> awaitExecute = new List<ArrayOperationInfo>();

    // 当前正在执行的事件列表引用
    private List<PriorityEvent> executingEvents;

    /// <summary>
    /// 执行所有延迟的操作
    /// 在当前事件执行完毕后调用
    /// </summary>
    private void AwaitExecute()
    {
        if (awaitExecute.Count == 0) return;

        // 遍历并执行所有延迟操作
        foreach (var arrayOperationInfo in awaitExecute)
        {
            switch (arrayOperationInfo.operationType)
            {
                case OperationType.Add:
                    // 延迟添加事件
                    AddEvent(arrayOperationInfo.name,
                        arrayOperationInfo.priorityEvent._delegate,
                        arrayOperationInfo.priorityEvent.priority);
                    break;
                case OperationType.Remove:
                    // 延迟移除特定事件
                    RemoveEvent(arrayOperationInfo.name, arrayOperationInfo.priorityEvent._delegate);
                    break;
                case OperationType.RemoveAll:
                    // 延迟移除所有事件
                    RemoveEvent(arrayOperationInfo.name);
                    break;
                case OperationType.Change:
                    // 修改事件（暂未实现）
                    break;
            }
        }

        // 清空延迟操作列表
        awaitExecute.Clear();
    }

    /// <summary>
    /// 添加事件
    /// </summary>
    /// <typeparam name="D">委托类型</typeparam>
    /// <param name="eventName">事件名称</param>
    /// <param name="_delegate">事件处理委托</param>
    /// <param name="priority">事件优先级</param>
    public void AddEvent<D>(string eventName, D _delegate, int priority) where D : Delegate
    {
        // 创建优先级事件
        var priorityEvent = new PriorityEvent
        {
            priority = priority,
            _delegate = _delegate
        };

        // 检查事件是否已存在
        if (Event_Dic.TryGetValue(eventName, out var _list))
        {
            // 如果事件正在执行，则延迟添加
            if (_list == executingEvents)
            {
                var info = new ArrayOperationInfo
                {
                    operationType = OperationType.Add,
                    name = eventName,
                    priorityEvent = priorityEvent,
                };
                awaitExecute.Add(info);
                Debug.Log(eventName + "事件正在执行,待事件执行完毕后，才会执行添加操作");
                return;
            }
        }
        else
        {
            // 如果事件不存在，创建新的事件列表
            Event_Dic.Add(eventName, new List<PriorityEvent>());
        }

        // 添加事件到列表
        Event_Dic[eventName].Add(priorityEvent);

        // 按优先级降序排序（优先级数值越大越靠前）
        Event_Dic[eventName].Sort((a, b) => b.priority.CompareTo(a.priority));
    }

    /// <summary>
    /// 同步触发事件
    /// </summary>
    /// <typeparam name="D">委托类型</typeparam>
    /// <param name="name_">事件名称</param>
    /// <param name="func">触发函数</param>
    public void Trigger<D>(string name_, Action<D> func) where D : Delegate
    {
        if (Event_Dic.TryGetValue(name_, out var list))
        {
            executingEvents = list;
            foreach (var eventName in list)
            {
                func.Invoke(eventName._delegate as D);
            }
        }
        else
        {
            executingEvents = null;
        }

        AwaitExecute();
    }

    /// <summary>
    /// 异步触发事件
    /// </summary>
    /// <typeparam name="D">委托类型</typeparam>
    /// <param name="name_">事件名称</param>
    /// <param name="func">异步触发函数</param>
    /// <param name="token">异步Token</param>
    /// <returns>异步任务</returns>
    public async UniTask TriggerAsync<D>(string name_, Func<D, UniTask> func,CancellationToken token) where D : Delegate
    {
        if (Event_Dic.TryGetValue(name_, out var list))
        {
            executingEvents = list;
            foreach (var eventName in list)
            {
                await func.Invoke(eventName._delegate as D);
                await UniTask.Yield(token);
            }
        }
        else
        {
            executingEvents = null;
        }
        
        AwaitExecute();
    }
    
    
    
    /// <summary>
    /// 移除指定名称的所有事件
    /// </summary>
    /// <param name="eventName">事件名称</param>
    public void RemoveEvent(string eventName)
    {
        if (!Event_Dic.TryGetValue(eventName, out var _list)) return;
        if (_list == executingEvents)
        {
            var info = new ArrayOperationInfo
            {
                operationType = OperationType.RemoveAll,
                name = eventName,
            };
            awaitExecute.Add(info);
            Debug.Log(eventName + "事件正在执行,待事件执行完毕后，才会执行移除操作");
        }
        else
        {
            Event_Dic.Remove(eventName);
        }
    }

    /// <summary>
    /// 移除指定事件名称的特定委托
    /// </summary>
    /// <typeparam name="D">委托类型</typeparam>
    /// <param name="eventName">事件名称</param>
    /// <param name="delegate_">要移除的委托</param>
    public void RemoveEvent<D>(string eventName, D delegate_) where D : Delegate
    {
        if (!Event_Dic.TryGetValue(eventName, out var _list)) return;
        if (_list == executingEvents)
        {
            var info = new ArrayOperationInfo
            {
                operationType = OperationType.Remove,
                name = eventName,
                priorityEvent = new PriorityEvent()
                {
                    _delegate = delegate_
                },
            };
            awaitExecute.Add(info);
            Debug.Log(eventName + "事件正在执行,待事件执行完毕后，才会执行移除操作");
        }
        else
        {
            for (int i = 0; i < _list.Count; i++)
            {
                if (_list[i]._delegate != delegate_) continue;
                _list.RemoveAt(i);
            }
        }
    }

    public void Clear()
    {
        Event_Dic.Clear();
    }

    public void Show()
    {
        foreach (var VARIABLE in Event_Dic.Keys)
        {
            Debug.Log(VARIABLE);
        }
    }

  
}