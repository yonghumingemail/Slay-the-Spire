using System;
using Cysharp.Threading.Tasks;
using GameFramework;
using UnityEngine;

public class PriorityEventManagerView : MonoBehaviour, IPriorityEventManager
{
    private IPriorityEventManager _priorityEventManager { get; set; } = new PriorityEventManager();
    public Action OnSubscribe;
    public Action OnUnSubscribe;

    public void SetEventManager(IPriorityEventManager priorityEventManager)
    {
        _priorityEventManager = priorityEventManager;
    }

    public void UnSubscribe<EventName>(GameEventHandler<GameEventArgs> _delegate)
    {
        _priorityEventManager.UnSubscribe<EventName>(_delegate);
        OnUnSubscribe?.Invoke();
    }

    public void UnSubscribeAll<EventName>()
    {
        _priorityEventManager.UnSubscribeAll<EventName>();
        OnUnSubscribe?.Invoke();
    }

    public void Fire<EventName>(object send, GameEventArgs args)
    {
        _priorityEventManager.Fire<EventName>(send, args);
    }

    public UniTask FireAsync<EventName>(object send, GameEventArgs args)
    {
        return _priorityEventManager.FireAsync<EventName>(send, args);
    }


    public void Subscribe<EventName>(GameEventHandler<GameEventArgs> _delegate, int priority = 0)
    {
        _priorityEventManager.Subscribe<EventName>(_delegate, priority);
        OnSubscribe?.Invoke();
    }

    public void SubscribeAsync<EventName>(GameEventHandlerAsync<GameEventArgs> _delegate, int priority = 0)
    {
        _priorityEventManager.SubscribeAsync<EventName>(_delegate, priority);
        OnSubscribe?.Invoke();
    }

    public void UnSubscribeAsync<EventName>(GameEventHandlerAsync<GameEventArgs> _delegate)
    {
        _priorityEventManager.UnSubscribeAsync<EventName>(_delegate);
        OnUnSubscribe?.Invoke();
    }

    public void UnSubscribeAllAsync<EventName>()
    {
        _priorityEventManager.UnSubscribeAllAsync<EventName>();
        OnUnSubscribe?.Invoke();
    }

    public void Clear()
    {
        _priorityEventManager.Clear();
    }

    public void Subscribe<EventName>(GameEventHandler<GameEventArgs> _delegate)
    {
        Subscribe<EventName>(_delegate, 0);
    }
}