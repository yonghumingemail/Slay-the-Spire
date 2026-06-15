using System;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityGameFramework.Runtime;

public class EventManagerComponent : MonoBehaviour, IGameModuleComponent
{

    private PriorityEventManagerView _priorityEventManagerView;
    public void Init()
    {
        GameEntry.RegisterManagerComponent(this);
        _priorityEventManagerView=GetComponent<PriorityEventManagerView>();
        _priorityEventManagerView.SetEventManager(GameFrameworkEntry.GetModule<IPriorityEventManager>());
    }

    public void UnSubscribe<EventName>(GameEventHandler<GameEventArgs> _delegate)
    {
        _priorityEventManagerView.UnSubscribe<EventName>(_delegate);
    }

    public void UnSubscribeAll<EventName>()
    {
        _priorityEventManagerView.UnSubscribeAll<EventName>();
    }

    public void Fire<EventName>(object send, GameEventArgs args)
    {
        _priorityEventManagerView.Fire<EventName>(send, args);
    }

    public UniTask FireAsync<EventName>(object send, GameEventArgs args)
    {
        return _priorityEventManagerView.FireAsync<EventName>(send, args);
    }


    public void Subscribe<EventName>(GameEventHandler<GameEventArgs> _delegate, int priority = 0)
    {
        _priorityEventManagerView.Subscribe<EventName>(_delegate, priority);
    }

    public void SubscribeAsync<EventName>(GameEventHandlerAsync<GameEventArgs> _delegate, int priority = 0)
    {
        _priorityEventManagerView.SubscribeAsync<EventName>(_delegate, priority);
    }

    public void UnSubscribeAsync<EventName>(GameEventHandlerAsync<GameEventArgs> _delegate)
    {
        _priorityEventManagerView.UnSubscribeAsync<EventName>(_delegate);
    }

    public void UnSubscribeAllAsync<EventName>()
    {
        _priorityEventManagerView.UnSubscribeAllAsync<EventName>();
    }

    public void Clear()
    {
        _priorityEventManagerView.Clear();
    }
}