using Cysharp.Threading.Tasks;

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
public interface IPriorityEventManageAsync<TEventArgs> : IPriorityEventManage<TEventArgs>
    where TEventArgs : BaseEventArgs
{
    void SubscribeAsync(int id, GameEventHandlerAsync<BaseEventArgs> _delegate, int priority);
    void UnSubscribeAsync(int id,GameEventHandlerAsync<BaseEventArgs> _delegate);
    void UnSubscribeAllAsync(int id);
    UniTask FireAsync(object send, int id, BaseEventArgs args);
   
}