using System;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;
using Z_Tools;



public class Player : MonoBehaviour, IEventCenterObject<BaseEventArgs>
{
    public IEventManage<BaseEventArgs> EventManage { get; } = new EventManage(); //用于提供接口对象

    public PriorityQueueEventCenter _priorityEventCenter { get; private set; } =
        new PriorityQueueEventCenter(); //用于记录buff事件

    public CancellationTokenSource TokenSource { get; } = new CancellationTokenSource();

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

    private GainPower gainPower = new GainPower(2);
    private VulnerableState vulnerableState = new VulnerableState(2);

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.A))
        {
            gainPower.Trigger(null, gameObject);
            vulnerableState.Trigger(null, gameObject);
        }
    }

    private async UniTaskVoid Initialize()
    {
        EventCenter_Singleton.Instance.Subscribe(GetObject_EventArgs<Player>.id, Get);
        EventCenter_Singleton.Instance._priorityQueueEventCenter.AddEvent<Func<int, UniTask>>("OnRoundEnd", OnRoundEnd,
            0);
        EventManage.Subscribe(GetObject_EventArgs<PriorityQueueEventCenter>.id, (send, handler) => { GetObject_EventArgs<PriorityQueueEventCenter>.Subscribe(handler, _priorityEventCenter); });

        health_V = GetComponentInChildren<IHealth_V>();
        health_V.InitializeView(gameObject);
        _health = new SimpleHealth(100, 100, health_V, _priorityEventCenter);
        EventManage.Subscribe(GetObject_EventArgs<IHealth>.id, (send, handler) => { GetObject_EventArgs<IHealth>.Subscribe(handler, _health); });

        shield_V = GetComponentInChildren<IShield_V>();
        shield_V.InitializeView(gameObject, health_V);
        _shield = new SimpleShield(shield_V, _priorityEventCenter);
        EventManage.Subscribe(GetObject_EventArgs<IShield>.id, (send, handler) => { GetObject_EventArgs<IShield>.Subscribe(handler, _shield); });

        buffList_V = GetComponentInChildren<IBuffList_V>();
        await buffList_V.Initialized();
        _buffList = new SimpleBuffList(buffList_V, _priorityEventCenter);
        EventManage.Subscribe(GetObject_EventArgs<IBuffList>.id, (send, handler) => { GetObject_EventArgs<IBuffList>.Subscribe(handler, _buffList); });

        animator = GetComponent<Animator>();
        //监听玩家死亡，将token设置为取消
    }

    private void Get(object send, BaseEventArgs baseEventHandler)
    {
        GetObject_EventArgs<Player>.Subscribe(baseEventHandler, this);
    }


    private async UniTask OnRoundEnd(int roundCount)
    {
        //通知事件，回合开始
        var actions = _priorityEventCenter.GetEvent("OnRoundEnd");
        foreach (var action in actions)
        {
            if (action._delegate is Func<int, UniTask> func)
            {
                await func(roundCount);
            }
            else
            {
                // 处理类型不匹配的情况
                Debug.LogWarning($"委托类型不匹配: {action._delegate?.GetType()}");
            }
        }
    }

    private void OnDestroy()
    {
        EventManage.Clear();
        foreach (var VARIABLE in _priorityEventCenter.GetEvent("OnDestroy"))
        {
            (VARIABLE._delegate as Action)?.Invoke();
        }

        _priorityEventCenter.Clear();
    }
}