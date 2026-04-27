using System;
using System.Collections.Generic;
using UnityEngine;

namespace Z_Tools
{
    //全局事件应该是图形化界面
    public class EventCenter_Singleton : SingletonBase<EventCenter_Singleton>
    {
        private readonly EventManage EventManage = new();

        public readonly PriorityQueueEventCenter _priorityQueueEventCenter = new();


        public void AddEvent(int id, GameEventHandler<EventArgs> _delegate)
        {
            // Debug.Log(eventKey);
            EventManage.Subscribe(id, _delegate);
        }


        public void GetEvent(object send, EventArgs args)
        {
            EventManage.Fire(send, args);
        }

        
        public void RemoveEvent(int id, GameEventHandler<EventArgs> _delegate)
        {
             EventManage.UnSubscribe(id, _delegate);
        }
        public void RemoveEventAll(int id)
        {
            EventManage.UnSubscribeAll(id);
        }

        public void Clear()
        {
            EventManage.Clear();
        }
    }
}