using System;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using UnityEngine;

namespace Z_Tools
{
    [SuppressMessage("ReSharper", "Unity.PerformanceCriticalCodeInvocation")]
    //Key为存储事件的参数的类型
    public class EventCenter<Key> : IEventCenter<Key>
    {
        private readonly Dictionary<Key, Delegate> Event_Dic = new Dictionary<Key, Delegate>();

        /// <summary>
        /// 添加事件
        /// </summary>
        /// <param name="eventKey">事件名</param>
        /// <param name="_delegate">事件</param>
        /// <returns></returns>
        public bool AddEvent<T>(Key eventKey, T _delegate) where T : Delegate
        {
            // 尝试从字典中获取事件信息
            if (!Event_Dic.TryGetValue(eventKey, out var action))
            {
                Event_Dic.Add(eventKey, _delegate);
                return true;
            }
            else
            {
                if (_delegate.GetType() == action.GetType())
                {
                    Event_Dic[eventKey] = Delegate.Combine(action, _delegate);
                }
                else
                {
                    Debug.Log($"事件类型不一致，事件:{eventKey}的原类型为{action.GetType()},添加的事件类型为{_delegate.GetType()}");
                }
            }

            return false;
        }


        /// <summary>
        /// 获取事件实例
        /// </summary>
        /// <param name="name">事件名</param>
        /// <returns></returns>
        public T GetEvent<T>(Key name) where T : Delegate
        {
            if (Event_Dic.TryGetValue(name, out var i_info))
            {
                return i_info as T;
            }

            //Debug.Log("事件不存在");
            return null;
        }

        /// <summary>
        /// 移除事件
        /// </summary>
        /// <param name="eventKey">事件名</param>
        /// <returns></returns>
        public bool RemoveEvent(Key eventKey)
        {
            if (!Event_Dic.TryGetValue(eventKey, out var value)) return false;

            Event_Dic[eventKey] = null;
            return Event_Dic.Remove(eventKey);
        }

        /// <summary>
        /// 移除事件中的行为
        /// </summary>
        /// <param name="eventKey">事件名</param>
        /// <param name="_delegate">需要移除的行为</param>
        /// <returns></returns>
        public bool RemoveEvent<T>(Key eventKey, T _delegate) where T : Delegate
        {
            if (!Event_Dic.TryGetValue(eventKey, out var value)) return false;
            
            // 从委托链中移除指定的委托
            var newDelegate = Delegate.Remove(value, _delegate);
    
            // 如果移除后的委托链不为空，则更新字典，否则删除该键
            if (newDelegate != null)
            {
                Event_Dic[eventKey] = newDelegate;
            }
            else
            {
                Event_Dic.Remove(eventKey);
            }
    
            return true;
        }

        public bool Clear()
        {
            Event_Dic.Clear();
            return true;
        }

        public void Show()
        {
            foreach (var VARIABLE in Event_Dic.Keys)
            {
                Debug.Log(VARIABLE);
            }
        }
    }
}