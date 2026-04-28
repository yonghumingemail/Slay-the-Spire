using System;

namespace Z_Tools
{
    public interface IEventManage<TEventArgs> where TEventArgs : BaseEventArgs
    {
        public void Subscribe(int id, GameEventHandler<TEventArgs> _delegate);
        public void UnSubscribe(int id, GameEventHandler<TEventArgs> _delegate);
        public void UnSubscribeAll(int id);
        public void Fire(object send, TEventArgs args);
        public void Clear();
    }
}
