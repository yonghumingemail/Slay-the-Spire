using System;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using UnityEngine;

public struct PriorityEvent
{
    public int priority;
    public GameEventHandler<GameEventArgs> _delegate;
}

public struct PriorityEventAsync
{
    public int priority;
    public GameEventHandlerAsync<GameEventArgs> _delegate;
}

[Serializable]
public class PriorityQueueEventCenter : IPriorityEventManageAsync<GameEventArgs>
{
    private readonly Dictionary<Type, List<PriorityEvent>> Event_Dic = new();
    private readonly Dictionary<Type, List<PriorityEventAsync>> Event_DicAsync = new();

    public void Subscribe<EventName>(GameEventHandler<GameEventArgs> _delegate, int priority)
    {
        var eventName = typeof(EventName);
        if (!Event_Dic.TryGetValue(eventName, out var _))
        {
            Event_Dic.Add(eventName, new List<PriorityEvent>());
        }

        var temp = new PriorityEvent
        {
            priority = priority,
            _delegate = _delegate
        };
        Event_Dic[eventName].Add(temp);

        //用插排更好
        Event_Dic[eventName].Sort((a, b) => b.priority.CompareTo(a.priority));
    }

    public void SubscribeAsync<EventName>(GameEventHandlerAsync<GameEventArgs> _delegate, int priority)
    {
        var eventName = typeof(EventName);
        if (!Event_DicAsync.TryGetValue(eventName, out var _))
        {
            Event_DicAsync.Add(eventName, new List<PriorityEventAsync>());
        }

        var temp = new PriorityEventAsync
        {
            priority = priority,
            _delegate = _delegate
        };
        Event_DicAsync[eventName].Add(temp);

        //用插排更好
        Event_DicAsync[eventName].Sort((a, b) => b.priority.CompareTo(a.priority));
    }

    public void UnSubscribe<EventName>(GameEventHandler<GameEventArgs> _delegate)
    {
        var eventName = typeof(EventName);
        if (!Event_Dic.TryGetValue(eventName, out var list)) return;

        for (int i = 0; i < list.Count; i++)
        {
            if (list[i]._delegate != _delegate) continue;
            list.RemoveAt(i);

            return;
        }
    }

    public void UnSubscribeAsync<EventName>(GameEventHandlerAsync<GameEventArgs> _delegate)
    {
        var eventName = typeof(EventName);
        if (!Event_DicAsync.TryGetValue(eventName, out var list)) return;

        for (int i = 0; i < list.Count; i++)
        {
            if (list[i]._delegate != _delegate) continue;
            list.RemoveAt(i);

            return;
        }
    }

    public void UnSubscribeAll<EventName>()
    {
        var eventName = typeof(EventName);
        Event_Dic.Remove(eventName, out var _delegate);
    }

    public void UnSubscribeAllAsync<EventName>()
    {
        var eventName = typeof(EventName);
        Event_DicAsync.Remove(eventName, out var _delegate);
    }

    public void Fire<EventName>(object send, GameEventArgs args)
    {
        var eventName = typeof(EventName);
        if (Event_Dic.TryGetValue(eventName, out var list))
        {
            foreach (var _event in list)
            {
                _event._delegate?.Invoke(send, args);
            }
        }
        else
        {
            Debug.Log($"调用者:{send},事件{eventName}不存在");
        }
    }

    public async UniTask FireAsync<EventName>(object send, GameEventArgs args)
    {
        var eventName = typeof(EventName);
        if (Event_DicAsync.TryGetValue(eventName, out var list))
        {
            foreach (var _event in list)
            {
                if (_event._delegate == null) continue;
                await _event._delegate.Invoke(send, args);
            }
        }
        else
        {
            Debug.Log($"调用者:{send},事件{eventName}不存在");
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