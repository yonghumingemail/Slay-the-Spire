using System;
using System.Collections.Generic;
using UnityEngine;

namespace Z_Tools
{
    //全局事件应该是图形化界面
    public class EventCenter_Singleton : SingletonBase<EventCenter_Singleton>,IEventManage<GameEventArgs>
    {
        private readonly EventManage EventManage = new();

        public readonly PriorityQueueEventCenter _priorityQueueEventCenter = new();


        public void Subscribe<EventName>( GameEventHandler<GameEventArgs> _delegate)
        {
            // Debug.Log(eventKey);
            EventManage.Subscribe<EventName>(_delegate);
        }


        public void Fire<EventName>(object send,GameEventArgs args)
        {
            EventManage.Fire<EventName>(send,args);
        }

        
        public void UnSubscribe<EventName>( GameEventHandler<GameEventArgs> _delegate)
        {
             EventManage.UnSubscribe<EventName>(_delegate);
        }
        public void UnSubscribeAll<EventName>( )
        {
            EventManage.UnSubscribeAll<EventName>();
        }

        public void Clear()
        {
            EventManage.Clear();
        }
    }
}