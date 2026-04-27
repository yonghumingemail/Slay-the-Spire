using System;
using System.Collections.Generic;
using UnityEngine;

public class EventManage : MonoBehaviour
{
    private readonly Dictionary<int, Delegate> Event_Dic = new Dictionary<int, Delegate>();
    
    /// <summary>
    /// 添加事件
    /// </summary>
    /// <param name="id">事件id</param>
    /// <param name="_delegate">事件</param>
    /// <returns></returns>
    public bool AddEvent<T>(int id, T _delegate) where T : Delegate
    {
        // 尝试从字典中获取事件信息
        if (!Event_Dic.TryGetValue(id, out var action))
        {
            Event_Dic.Add(id, _delegate);
            return true;
        }

        if (_delegate.GetType() == action.GetType())
        {
            Event_Dic[id] = Delegate.Combine(action, _delegate);
        }
        else
        {
            Debug.Log($"事件类型不一致，事件:{id}的原类型为{action.GetType()},添加的事件类型为{_delegate.GetType()}");
        }

        return false;
    }


    /// <summary>
    /// 获取事件实例
    /// </summary>
    /// <returns></returns>
    public void Fire<T>(object send,EventArgs args) where T : Delegate
    {
        
        if (Event_Dic.TryGetValue(args.Id, out var i_info))
        {
           // return i_info as T;
        }
        
    }

    /// <summary>
    /// 移除事件
    /// </summary>
    /// <param name="eventint">事件名</param>
    /// <returns></returns>
    public bool RemoveEvent(int eventint)
    {
        if (!Event_Dic.TryGetValue(eventint, out var value)) return false;

        Event_Dic[eventint] = null;
        return Event_Dic.Remove(eventint);
    }

    /// <summary>
    /// 移除事件中的行为
    /// </summary>
    /// <param name="eventint">事件名</param>
    /// <param name="_delegate">需要移除的行为</param>
    /// <returns></returns>
    public bool RemoveEvent(int eventint, Delegate _delegate)
    {
        if (!Event_Dic.TryGetValue(eventint, out var value)) return false;

        // 从委托链中移除指定的委托
        var newDelegate = Delegate.Remove(value, _delegate);

        // 如果移除后的委托链不为空，则更新字典，否则删除该键
        if (newDelegate != null)
        {
            Event_Dic[eventint] = newDelegate;
        }
        else
        {
            Event_Dic.Remove(eventint);
        }

        return true;
    }

    public bool Change(int eventint, Delegate _delegate)
    {
        if (!Event_Dic.TryGetValue(eventint, out var value)) return false;
        Event_Dic[eventint] = _delegate;
        return true;
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