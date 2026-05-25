using System;
using System.Threading;
using Cysharp.Threading.Tasks;
using HybridCLRGenerate.HotUpdata.Scripts.Tools.Event.EventArgs;
using UnityEngine;
using Z_Tools;


public class Player : MonoBehaviour, IEventCenterObject<BaseEventArgs>
{
    public IEventManage<BaseEventArgs> EventManage { get; } = new EventManage(); //用于提供接口对象
    public PriorityQueueEventCenter _priorityEventCenter { get; } = new (); //用于记录buff事件
    public CancellationTokenSource TokenSource { get; } = new ();
    
    private Animator animator;
    [SerializeField]private RoleCore roleCore;
    private void Awake()
    {
        Initialize().Forget();
    }

    private GainPower gainPower = new (2);
    private VulnerableState vulnerableState = new (2);

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
        animator = GetComponent<Animator>();

        EventCenter_Singleton.Instance.Subscribe(GetObject_GEA<Player>.id, Get);

        var initArray = GetComponentsInChildren<INeedToInitialize>();
        var tasks = new UniTask[initArray.Length];
        int i = 0;
        foreach (var VARIABLE in initArray)
        {
            tasks[i] = VARIABLE.Initialize();
        }

        await tasks;

        var health_V = GetComponentInChildren<IHealth_V>();
        health_V.InitializeView(gameObject);

        var shield_V = GetComponentInChildren<IShield_V>();
        shield_V.InitializeView(gameObject, health_V);

        var buffList_V = GetComponentInChildren<IBuffList_V>();

        roleCore=new RoleCore(health_V, shield_V, buffList_V,_priorityEventCenter);
        roleCore.InterfaceRegistration(EventManage);
        
        GetObject_GEA<PriorityQueueEventCenter>.Subscribe(_priorityEventCenter, EventManage);
        
        //监听玩家死亡，将token设置为取消
    }

    private void Get(object send, BaseEventArgs baseEventHandler)
    {
        if (baseEventHandler is Func_T args)
        {
            args.value = this;
        }
    }


    private async UniTask OnRoundEnd(object sender, BaseEventArgs baseEventArgs)
    {
        if (baseEventArgs is OnRoundEnd_EventArgs args)
        {
            await Action_Int_Async.Fire(args.args_int, OnRoundEnd_EventArgs.id, this,
                _priorityEventCenter);
        }
    }


    private void OnDestroy()
    {
        EventManage.Clear();
        _priorityEventCenter.Fire(this, OnDestroy_EA.id, null);
        _priorityEventCenter.Clear();
    }
}