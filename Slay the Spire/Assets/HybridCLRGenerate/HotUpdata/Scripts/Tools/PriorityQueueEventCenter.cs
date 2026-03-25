using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public struct PriorityEvent
{
    public int priority;
    public Delegate _delegate;
}

public class PriorityQueueEventCenter
{
    private Dictionary<string, List<PriorityEvent>> Event_Dic = new();

    public void AddEvent<D>(string eventName, D _delegate, int priority) where D : Delegate
    {
        if (!Event_Dic.TryGetValue(eventName, out var _))
        {
            Event_Dic.Add(eventName, new List<PriorityEvent>());
        }
        else
        {
            if (Event_Dic[eventName][0]._delegate is not D)
            {
                Debug.Log(
                    $"事件类型不统一,原事件类型为{Event_Dic[eventName][0]._delegate.GetType()}|,传递的参数类型为{_delegate.GetType()}");
                return;
            }
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

    public IEnumerable<PriorityEvent> GetEvent(string name)
    {
        return Event_Dic.GetValueOrDefault(name) ?? Enumerable.Empty<PriorityEvent>();
    }

    public bool RemoveEvent(string eventName)
    {
        if (!Event_Dic.TryGetValue(eventName, out var _)) return false;

        Event_Dic[eventName] = null;
        return Event_Dic.Remove(eventName);
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