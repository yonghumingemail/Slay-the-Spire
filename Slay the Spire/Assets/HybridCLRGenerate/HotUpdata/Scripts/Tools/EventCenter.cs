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
        /// <param name="eventName">事件名</param>
        /// <param name="_delegate">事件</param>
        /// <returns></returns>
        public bool AddEvent<T>(Key eventName, T _delegate) where T : Delegate
        {
            // 尝试从字典中获取事件信息
            if (!Event_Dic.TryGetValue(eventName, out var action))
            {
                Event_Dic.Add(eventName, _delegate);
                return true;
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
        /// <param name="eventName">事件名</param>
        /// <returns></returns>
        public bool RemoveEvent(Key eventName)
        {
            if (!Event_Dic.TryGetValue(eventName, out var info)) return false;

            Event_Dic[eventName] = null;
            return Event_Dic.Remove(eventName);
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