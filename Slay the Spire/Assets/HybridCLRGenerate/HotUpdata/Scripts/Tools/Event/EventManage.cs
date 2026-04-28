using System;
using System.Collections.Generic;
using UnityEngine;
using Z_Tools;

public class EventManage : IEventManage<BaseEventArgs>
{
    private readonly Dictionary<int, GameEventHandler<BaseEventArgs>> Event_Dic =
        new();

    public void Subscribe(int id, GameEventHandler<BaseEventArgs> _delegate)
    {
        if (!Event_Dic.TryGetValue(id, out var action))
        {
            Event_Dic.Add(id, _delegate);
        }

        Event_Dic[id] += _delegate;
    }
    
    public void UnSubscribeAll(int id)
    {
        if (!Event_Dic.Remove(id, out var action))
        {
            Debug.Log($"事件{id}不存在");
        }
    }
    public void UnSubscribe(int id, GameEventHandler<BaseEventArgs> _delegate)
    {
        if (Event_Dic.TryGetValue(id, out var action))
        {
            foreach (var VARIABLE in action.GetInvocationList())
            {
                if (!VARIABLE.Equals(_delegate)) continue;
                action -= _delegate;
                Event_Dic[id] = action;
            }
        }
        else
        {
            Debug.Log($"事件{id}不存在");
        }
    }

  

    public void Fire(object send, BaseEventArgs args)
    {
        if (Event_Dic.TryGetValue(args.Id, out var eventHandler))
        {
            eventHandler?.Invoke(send, args);
        }
        else
        {
            Debug.Log($"事件{args.Id}不存在");
        }
    }


    public void Clear()
    {
        Event_Dic.Clear();
    }

    public void Show()
    {
    }
}