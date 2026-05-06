public interface IBaseEventManage<TEventArgs> where TEventArgs : BaseEventArgs
{
    void UnSubscribe(int id, GameEventHandler<TEventArgs> _delegate);
    void UnSubscribeAll(int id);
    void Fire(object send, int id,TEventArgs args);
    void Clear();
}

public interface IEventManage<TEventArgs> : IBaseEventManage<TEventArgs>
    where TEventArgs : BaseEventArgs
{
    void Subscribe(int id, GameEventHandler<TEventArgs> _delegate);
}

public interface IPriorityEventManage<TEventArgs> : IBaseEventManage<TEventArgs>
    where TEventArgs : BaseEventArgs
{
    void Subscribe(int id, GameEventHandler<TEventArgs> _delegate, int priority);
}