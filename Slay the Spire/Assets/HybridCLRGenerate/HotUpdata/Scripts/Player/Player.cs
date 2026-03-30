using System;
using Cysharp.Threading.Tasks;
using UnityEngine;
using Z_Tools;

public class Player : MonoBehaviour, IEventCenterObject<string>
{
    public IEventCenter<string> eventCenter { get; } = new EventCenter<string>(); //用于提供接口对象

    public PriorityQueueEventCenter _priorityEventCenter { get; private set; } =
        new PriorityQueueEventCenter(); //用于记录buff事件

    [SerializeField] public SimpleHealth _health;
    private IHealth_V health_V;

    [SerializeField] public SimpleShield _shield;
    private IShield_V shield_V;

    [SerializeField] public SimpleBuffList _buffList;
    private IBuffList_V buffList_V;

    private Animator animator;

    private void Awake()
    {
        Initialize().Forget();
    }

    private async UniTaskVoid Initialize()
    {
        health_V = GetComponentInChildren<IHealth_V>();
        health_V.InitializeView(gameObject);
        _health = new SimpleHealth(100, 100, health_V, _priorityEventCenter);
        eventCenter.AddEvent<Func<IHealth>>("IHealth", () => _health);

        shield_V = GetComponentInChildren<IShield_V>();
        shield_V.InitializeView(gameObject, health_V);
        _shield = new SimpleShield(shield_V, _priorityEventCenter);
        eventCenter.AddEvent<Func<IShield>>("IShield", () => _shield);

        buffList_V = GetComponentInChildren<IBuffList_V>();
        await buffList_V.Initialized();
        _buffList = new SimpleBuffList(buffList_V, _priorityEventCenter);
        eventCenter.AddEvent<Func<IBuffList>>("IBuffList", () => _buffList);


        animator = GetComponent<Animator>();
        EventCenter_Singleton.Instance.AddEvent<Func<Player>>("Player", Get);
    }

    private Player Get() => this;
}