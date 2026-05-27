using System;
using System.Threading;
using Cysharp.Threading.Tasks;
using HybridCLRGenerate.HotUpdata.Scripts.Tools.Event.EventArgs;
using UnityEngine;
using Z_Tools;


public class Player : MonoBehaviour, IEventCenterObject<GameEventArgs>
{
    public IEventManage<GameEventArgs> EventManage { get; } = new EventManage(); //用于提供接口对象
    public PriorityQueueEventCenter _priorityEventCenter { get; } = new(); //用于记录buff事件
    public CancellationTokenSource TokenSource { get; } = new();

    private Animator animator;
    private SpriteRenderer _spriteRenderer;
    [SerializeField] private RoleCore roleCore;

    private void Awake()
    {
        Initialize().Forget();
    }

    private GainPower gainPower = new(2);
    private VulnerableState vulnerableState = new(2);

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

        EventCenter_Singleton.Instance.Subscribe<GetObject_GEA<Player>>(Get);

        var initArray = GetComponentsInChildren<INeedToInitialize>(true);
        var tasks = new UniTask[initArray.Length];
        int i = 0;
        foreach (var VARIABLE in initArray)
        {
            tasks[i] = VARIABLE.Initialize();
        }

        await tasks;
        var roleCoreData =
            await AddressablesMgr.Instance.LoadAssetAsync<RoleCoreData>(
                "Assets/ScriptableObject/RoleCoreData/Player/Player.asset");

        _spriteRenderer = transform.Find("UI").GetComponent<SpriteRenderer>();
        roleCore = new RoleCore(gameObject, _spriteRenderer, roleCoreData, _priorityEventCenter);
        roleCore.InterfaceRegistration(EventManage);


        GetObject_GEA<PriorityQueueEventCenter>.Subscribe(_priorityEventCenter, EventManage);

        //监听玩家死亡，将token设置为取消
    }

    private void Get(object send, GameEventArgs gameEventHandler)
    {
        if (gameEventHandler is Args_T args)
        {
            args.value = this;
        }
    }


    private async UniTask OnRoundEnd(object sender, GameEventArgs gameEventArgs)
    {
        if (gameEventArgs is OnRoundEnd_EventArgs args)
        {
            await Action_Int_Async.Fire<OnRoundEnd_EventArgs>(args.args_int, this,
                _priorityEventCenter);
        }
    }


    private void OnDestroy()
    {
        EventManage.Clear();
        _priorityEventCenter.Fire<OnDestroy_EA>(this, null);
        _priorityEventCenter.Clear();
    }
}