using System;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// 基于泛型事件参数的事件管理器，实现 IEventManage
/// 使用类型作为事件键，不支持优先级与异步（可后续扩展）
/// </summary>
public class EventManager : IEventManager
{
    private readonly Dictionary<Type, GameEventHandler<GameEventArgs>> eventHandlers = new();

    public void Subscribe<EventName>(GameEventHandler<GameEventArgs> handler)
    {
        if (handler == null) throw new ArgumentNullException(nameof(handler));

        var eventType = typeof(EventName);
        if (eventHandlers.TryGetValue(eventType, out var existingHandler))
        {
            eventHandlers[eventType] = existingHandler + handler;
        }
        else
        {
            eventHandlers.Add(eventType, handler);
        }
    }

    public void UnSubscribe<EventName>(GameEventHandler<GameEventArgs> handler)
    {
        if (handler == null) throw new ArgumentNullException(nameof(handler));

        var eventType = typeof(EventName);
        if (eventHandlers.TryGetValue(eventType, out var existingHandler))
        {
            // 删除所有匹配的委托实例，并将新链存回（或移除整个条目）
            var newHandler = existingHandler - handler;
            if (newHandler == null)
                eventHandlers.Remove(eventType);
            else
                eventHandlers[eventType] = newHandler;
        }
        else
        {
            Debug.LogWarning($"事件 {eventType.Name} 不存在，无法取消订阅");
        }
    }

    public void UnSubscribeAll<EventName>()
    {
        var eventType = typeof(EventName);
        if (!eventHandlers.Remove(eventType))
        {
            Debug.LogWarning($"事件 {eventType.Name} 不存在，无法清空订阅");
        }
    }

    public void Fire<EventName>(object sender, GameEventArgs args)
    {
        if (args == null) throw new ArgumentNullException(nameof(args));

        var eventType = typeof(EventName);
        if (eventHandlers.TryGetValue(eventType, out var handler))
        {
            handler?.Invoke(sender, args);
        }
        else
        {
            Debug.LogWarning($"事件 {eventType.Name} 不存在，触发无效");
        }
    }

    public void Clear()
    {
        eventHandlers.Clear();
    }

}