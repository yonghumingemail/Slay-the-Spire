using System;
using Cysharp.Threading.Tasks;

public interface IBaseEventManager<TEventArgs> where TEventArgs : GameEventArgs
{
    void UnSubscribe<EventName>(GameEventHandler<TEventArgs> _delegate);
    void UnSubscribeAll<EventName>();
    void Fire<EventName>(object send, TEventArgs args);
    void Clear();
}

public interface IEventManager<TEventArgs> : IBaseEventManager<TEventArgs>
    where TEventArgs : GameEventArgs
{
    void Subscribe<EventName>(GameEventHandler<TEventArgs> _delegate);
}

public interface IPriorityEventManager<TEventArgs> : IBaseEventManager<TEventArgs>
    where TEventArgs : GameEventArgs
{
    void Subscribe<EventName>(GameEventHandler<TEventArgs> _delegate, int priority);
}

public interface IPriorityEventManagerAsync<TEventArgs> : IPriorityEventManager<TEventArgs>
    where TEventArgs : GameEventArgs
{
    void SubscribeAsync<EventName>(GameEventHandlerAsync<GameEventArgs> _delegate, int priority);
    void UnSubscribeAsync<EventName>(GameEventHandlerAsync<GameEventArgs> _delegate);
    void UnSubscribeAllAsync<EventName>();
    UniTask FireAsync<EventName>(object send, GameEventArgs args);
}