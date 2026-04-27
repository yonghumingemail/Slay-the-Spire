using System;
using System.Collections.Generic;
using UnityEngine;
using Z_Tools;

public class EventManage:IEventManage<EventArgs>
{
    private readonly Dictionary<int, GameEventHandler<EventArgs>> Event_Dic = new Dictionary<int, GameEventHandler<EventArgs>>();
    
    public void Subscribe(int id, GameEventHandler<EventArgs> _delegate)
    {
        // 尝试从字典中获取事件信息
        if (!Event_Dic.TryGetValue(id, out var action))
        {
            Event_Dic.Add(id, _delegate);
        }

        Event_Dic[id] += _delegate;
    }

    public void UnSubscribe(int id, GameEventHandler<EventArgs> _delegate)
    {
        // 尝试从字典中获取事件信息
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
    public void UnSubscribeAll(int id)
    {
        // 尝试从字典中获取事件信息
        if (Event_Dic.TryGetValue(id, out var action))
        {
            Event_Dic[id] = null;
        }
        else
        {
            Debug.Log($"事件{id}不存在");
        }
        
    }

    /// <summary>
    /// 获取事件实例
    /// </summary>
    /// <returns></returns>
    public void Fire(object send, EventArgs args)
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


    public bool Clear()
    {
        Event_Dic.Clear();
        return true;
    }

    public void Show()
    {
    }
}