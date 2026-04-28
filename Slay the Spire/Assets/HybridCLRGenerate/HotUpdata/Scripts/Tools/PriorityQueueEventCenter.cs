using System.Collections.Generic;
using UnityEngine;

public struct PriorityEvent
{
    public int priority;
    public GameEventHandler<BaseEventArgs> _delegate;
}

public class PriorityQueueEventCenter
{
    private Dictionary<int, List<PriorityEvent>> Event_Dic = new();

    public void AddEvent(int id, GameEventHandler<BaseEventArgs> _delegate, int priority) 
    {
        if (!Event_Dic.TryGetValue(id, out var _))
        {
            Event_Dic.Add(id, new List<PriorityEvent>());
        }
        
        var temp = new PriorityEvent
        {
            priority = priority,
            _delegate = _delegate
        };
        Event_Dic[id].Add(temp);
        //用插排更好
        Event_Dic[id].Sort((a, b) => b.priority.CompareTo(a.priority));
    }


    public void GetEvent(object send, BaseEventArgs args)
    {
        if (Event_Dic.TryGetValue(args.Id, out var list))
        {
            foreach (var _event in list)
            {
                _event._delegate?.Invoke(send, args);
            }
          
        }
        else
        {
            Debug.Log($"事件{args.Id}不存在");
        }
    }

    public void RemoveEventAll(int id)
    {
        Event_Dic.Remove(id, out var _);
    }

    public void RemoveEvent(int id, GameEventHandler<BaseEventArgs> _delegate) 
    {
        if (!Event_Dic.TryGetValue(id, out var list)) return ;
        
        for (int i = 0; i < list.Count; i++)
        {
            if (list[i]._delegate != _delegate) continue;
            list.RemoveAt(i);
            return ;
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