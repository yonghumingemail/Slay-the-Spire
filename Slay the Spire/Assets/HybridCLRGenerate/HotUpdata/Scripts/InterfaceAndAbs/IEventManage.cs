using System;
using Cysharp.Threading.Tasks;

public interface IBaseEventManage<TEventArgs> where TEventArgs : GameEventArgs
{
    void UnSubscribe<EventName>(GameEventHandler<TEventArgs> _delegate);
    void UnSubscribeAll<EventName>();
    void Fire<EventName>(object send, TEventArgs args);
    void Clear();
}

public interface IEventManage<TEventArgs> : IBaseEventManage<TEventArgs>
    where TEventArgs : GameEventArgs
{
    void Subscribe<EventName>(GameEventHandler<TEventArgs> _delegate);
}

public interface IPriorityEventManage<TEventArgs> : IBaseEventManage<TEventArgs>
    where TEventArgs : GameEventArgs
{
    void Subscribe<EventName>(GameEventHandler<TEventArgs> _delegate, int priority);
}

public interface IPriorityEventManageAsync<TEventArgs> : IPriorityEventManage<TEventArgs>
    where TEventArgs : GameEventArgs
{
    void SubscribeAsync<EventName>(GameEventHandlerAsync<GameEventArgs> _delegate, int priority);
    void UnSubscribeAsync<EventName>(GameEventHandlerAsync<GameEventArgs> _delegate);
    void UnSubscribeAllAsync<EventName>();
    UniTask FireAsync<EventName>(object send, GameEventArgs args);
}