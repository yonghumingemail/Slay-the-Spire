using System;
using System.Collections.Generic;
using UnityEngine;

namespace Z_Tools
{
    //全局事件应该是图形化界面
    public class EventCenter_Singleton : SingletonBase<EventCenter_Singleton>,IEventManage<BaseEventArgs>
    {
        private readonly EventManage EventManage = new();

        public readonly PriorityQueueEventCenter _priorityQueueEventCenter = new();


        public void Subscribe(int id, GameEventHandler<BaseEventArgs> _delegate)
        {
            // Debug.Log(eventKey);
            EventManage.Subscribe(id, _delegate);
        }


        public void Fire(object send, BaseEventArgs args)
        {
            EventManage.Fire(send, args);
        }

        
        public void UnSubscribe(int id, GameEventHandler<BaseEventArgs> _delegate)
        {
             EventManage.UnSubscribe(id, _delegate);
        }
        public void UnSubscribeAll(int id)
        {
            EventManage.UnSubscribeAll(id);
        }

        public void Clear()
        {
            EventManage.Clear();
        }
    }
}