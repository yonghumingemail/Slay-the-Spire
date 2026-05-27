using System;
using System.Collections.Generic;
using UnityEngine;
using Z_Tools;

public class EventManage : IEventManage<GameEventArgs>
{
    private readonly Dictionary<Type, GameEventHandler<GameEventArgs>> Event_Dic =
        new();
    
    
    public void UnSubscribe<EventName>(GameEventHandler<GameEventArgs> _delegate)
    {
        var eventName = typeof(EventName);
        if (Event_Dic.TryGetValue(eventName, out var action))
        {
            foreach (var VARIABLE in action.GetInvocationList())
            {
                if (!VARIABLE.Equals(_delegate)) continue;
                action -= _delegate;
                Event_Dic[eventName] = action;
            }
        }
        else
        {
            Debug.Log($"事件{eventName}不存在");
        }
    }

    public void UnSubscribeAll<EventName>()
    {
        var eventName = typeof(EventName);
        if (!Event_Dic.Remove(eventName, out var action))
        {
            Debug.Log($"事件{eventName}不存在");
        }
    }

    public void Fire<EventName>(object send, GameEventArgs args)
    {
        var eventName = typeof(EventName);
        if (Event_Dic.TryGetValue(eventName, out var eventHandler))
        {
            eventHandler?.Invoke(send, args);
        }
        else
        {
            Debug.Log($"事件{eventName}不存在");
        }
    }

    public void Clear()
    {
        Event_Dic.Clear();
    }

    public void Show()
    {
    }

    public void Subscribe<EventName>(GameEventHandler<GameEventArgs> _delegate)
    {
        var eventName = typeof(EventName);
        if (!Event_Dic.TryGetValue(eventName, out var action))
        {
            Event_Dic.Add(eventName, _delegate);
        }

        Event_Dic[eventName] += _delegate;
    }
}

