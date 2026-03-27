using System;
using Cysharp.Threading.Tasks;
using UnityEngine;
using Z_Tools;

public class Player : MonoBehaviour
{
    public PriorityQueueEventCenter _priorityEventCenter { get; private set; } =
        new PriorityQueueEventCenter(); //用于记录buff事件

    [SerializeField] public SimpleHealth _health;
    private IHealth_V health_V;

    [SerializeField] public SimpleBuffList _buffList;
    private IBuffList_V buffList_V;

    [SerializeField] public SimpleShield _shield;
    private IShieldV shield_V;

    private Animator animator;

    private async void Awake()
    {
        health_V = transform.Find("HP").GetComponent<IHealth_V>();
        health_V.InitializeView(gameObject);
        _health = new SimpleHealth(50, 100, health_V, _priorityEventCenter);


        shield_V = transform.Find("HP/Shield").GetComponent<IShieldV>();
        shield_V.InitializeView(gameObject);
        _shield = new SimpleShield(shield_V, _priorityEventCenter);


        buffList_V = transform.Find("BuffList").GetComponent<IBuffList_V>();
        await buffList_V.Initialized();
        _buffList = new SimpleBuffList(buffList_V, _priorityEventCenter);

        animator = GetComponent<Animator>();
        EventCenter_Singleton.Instance.AddEvent<Func<Player>>("Player", Get);
    }

    private Player Get() => this;
}