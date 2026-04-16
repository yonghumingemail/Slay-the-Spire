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
        return new List<PriorityEvent>(Event_Dic.GetValueOrDefault(name) ?? Enumerable.Empty<PriorityEvent>());
        //return Event_Dic.GetValueOrDefault(name) ?? Enumerable.Empty<PriorityEvent>();
    }

    public bool RemoveEvent(string eventName)
    {
        if (!Event_Dic.TryGetValue(eventName, out var _)) return false;

        Event_Dic[eventName] = null;
        return Event_Dic.Remove(eventName);
    }

    public bool RemoveEvent<D>(string eventName, D _delegate) where D : Delegate
    {
        if (!Event_Dic.TryGetValue(eventName, out var delegates)) return false;
        
        for (int i = 0; i < delegates.Count; i++)
        {
            if (delegates[i]._delegate != _delegate) continue;
            delegates.RemoveAt(i);
            return true;
        }
      
        return false;
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