using System;
using Cysharp.Threading.Tasks;
using UnityEngine;
using Z_Tools;

public class Player : MonoBehaviour, IEventCenterObject<string>
{
    public IEventCenter<string> eventCenter { get; } = new EventCenter<string>();

    public PriorityQueueEventCenter _priorityEventCenter { get; private set; } =
        new PriorityQueueEventCenter(); //用于记录buff事件

    [SerializeField] public SimpleHealth _health;
    private IHealth_V health_V;
    
    [SerializeField] public SimpleBuffList _buffList;
    private IBuffList_V buffList_V;

    [SerializeField] public SimpleShield _shield;
    private IShieldV shield_V;

    private Animator animator;

    private void Awake()
    {
        health_V = transform.Find("HP").GetComponent<IHealth_V>();
        _health = new SimpleHealth(50, 100, health_V, _priorityEventCenter);
        eventCenter.AddEvent<Func<IHealth>>("IHealth", () => _health);
        health_V.InitializeView(gameObject);

        shield_V = transform.Find("HP/Shield").GetComponent<IShieldV>();
        _shield = new SimpleShield(shield_V, _priorityEventCenter);
        eventCenter.AddEvent<Func<IShield>>("IShield", () => _shield);
        shield_V.InitializeView(gameObject);

        buffList_V = transform.Find("BuffList").GetComponent<IBuffList_V>();
        _buffList = new SimpleBuffList(buffList_V, _priorityEventCenter);
        eventCenter.AddEvent<Func<IBuffList>>("IBuffList", () => _buffList);

        animator = GetComponent<Animator>();
        EventCenter_Singleton.Instance.AddEvent<Func<Player>>("Player",Get);
    }

    private Player Get() => this;
}