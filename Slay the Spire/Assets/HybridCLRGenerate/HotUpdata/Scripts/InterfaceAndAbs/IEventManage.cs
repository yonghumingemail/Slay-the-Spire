using Cysharp.Threading.Tasks;
using GameFramework;

public interface IBaseEventManager
{
    void UnSubscribe<EventName>(GameEventHandler<GameEventArgs> _delegate);
    void UnSubscribeAll<EventName>();
    void Fire<EventName>(object send, GameEventArgs args);
    void Clear();
}

public interface IEventManager : IBaseEventManager
{
    void Subscribe<EventName>(GameEventHandler<GameEventArgs> _delegate);
}

public interface IPriorityEventManager : IEventManager, IGameFrameworkModule
{
    void Subscribe<EventName>(GameEventHandler<GameEventArgs> _delegate, int priority = 0);
    void SubscribeAsync<EventName>(GameEventHandlerAsync<GameEventArgs> _delegate, int priority = 0);
    void UnSubscribeAsync<EventName>(GameEventHandlerAsync<GameEventArgs> _delegate);
    void UnSubscribeAllAsync<EventName>();
    UniTask FireAsync<EventName>(object send, GameEventArgs args);
}