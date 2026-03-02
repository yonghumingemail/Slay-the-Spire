using System;
using System.Collections.Generic;
using UnityEngine;

namespace Z_Tools
{
    public class EventCenter_Singleton : SingletonBase<EventCenter_Singleton>
    {
        private readonly EventCenter<string> EventCenter = new();
        private Dictionary<string, Delegate> UnregisteredEnum = new();

        public readonly PriorityQueueEventCenter _priorityQueueEventCenter = new();

        /// <summary>
        /// 添加事件
        /// </summary>
        /// <param name="eventName">事件名</param>
        /// <param name="_delegate">事件</param>
        public void AddEvent<T>(string eventName, T _delegate)
            where T : Delegate
        {
            EventCenter.AddEvent(eventName + typeof(T), _delegate);
            if (!UnregisteredEnum.TryGetValue(eventName, out Delegate eventData)) return;

            if (eventData is Action<T> action)
            {
                action.Invoke(_delegate);
            }
            else
            {
                Debug.Log($"数据类型不匹配{eventName}类型为" + _delegate.GetType() + "| 原事件类型" + eventData.GetType());
            }

            UnregisteredEnum.Remove(eventName);
        }

        /// <summary>
        /// 获取事件实例
        /// </summary>
        /// <param name="eventName">事件名</param>
        /// <param name="callBack">回调函数</param>
        /// <returns></returns>
        public void GetEvent<T>(string eventName, Action<T> callBack) where T : Delegate
        {
            T ret = EventCenter.GetEvent<T>(eventName + typeof(T));
            if (ret == null)
            {
                if (UnregisteredEnum.TryGetValue(eventName, out Delegate eventData))
                {
                    if (eventData is Action<T> eventDelegate)
                    {
                        UnregisteredEnum[eventName] = Delegate.Combine(eventDelegate, callBack);
                    }
                    else
                    {
                        Debug.Log($"事件类型错误{eventData.GetType()},{typeof(T)},{eventName}");
                    }
                }
                else
                {
                    UnregisteredEnum.Add(eventName, callBack);
                }
            }
            else
            {
                callBack.Invoke(ret);
            }
        }
        
        public T GetEvent<T>(string eventName) where T : Delegate
        {
           return EventCenter.GetEvent<T>(eventName + typeof(T));
        }

        public bool RemoveEvent(string eventName)
        {
            return EventCenter.RemoveEvent(eventName);
        }

        public void Clear()
        {
            EventCenter.Clear();
        }
    }
}