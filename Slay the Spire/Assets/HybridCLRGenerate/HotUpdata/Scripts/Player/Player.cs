using System;
using System.Threading;
using Cysharp.Threading.Tasks;
using HybridCLRGenerate.HotUpdata.Scripts.Tools.Event.EventArgs;
using UnityEngine;
using UnityGameFramework.Runtime;
using Z_Tools;


public class Player : MonoBehaviour, IEventCenterObject<GameEventArgs>
{
    public IEventManager<GameEventArgs> EventManager { get; } = new EventManager(); //用于提供接口对象
    public PriorityEventManager PriorityEventManager { get; } = new(); //用于记录buff事件
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

        GameEntry.Event.Subscribe<GetObject_GEA<Player>>(Get);
        GameEntry.Event.SubscribeAsync<OnRoundEnd_EN>(OnRoundEnd, 0);
        GameEntry.Event.SubscribeAsync<OnRoundStart_EN>(OnRoundStart, 0);


        var initArray = GetComponentsInChildren<INeedToInitializeAsync>(true);
        var tasks = new UniTask[initArray.Length];
        int i = 0;
        foreach (var VARIABLE in initArray)
        {
            tasks[i] = VARIABLE.Init();
        }

        await tasks;
        var roleCoreData =
            await AddressablesMgr.Instance.LoadAssetAsync<RoleCoreData>(
                "Assets/ScriptableObject/RoleCoreData/Player/Player.asset");

        _spriteRenderer = transform.Find("UI").GetComponent<SpriteRenderer>();
        roleCore = new RoleCore(gameObject, _spriteRenderer, roleCoreData, PriorityEventManager);
        roleCore.InterfaceRegistration(EventManager);


        GetObject_GEA<PriorityEventManager>.Subscribe(PriorityEventManager, EventManager);

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
        if (gameEventArgs is Action_Int_Async args)
        {
            await Action_Int_Async.Fire<OnRoundEnd_EN>(args.args_int, this,
                PriorityEventManager);
        }
    }

    private async UniTask OnRoundStart(object sender, GameEventArgs gameEventArgs)
    {
        if (gameEventArgs is Action_Int_Async args)
        {
            await Action_Int_Async.Fire<OnRoundStart_EN>(args.args_int, this,
                PriorityEventManager);
        }
    }

    private void OnDestroy()
    {
        EventManager.Clear();
        PriorityEventManager.Fire<OnDestroy_EN>(this, null);
        PriorityEventManager.Clear();
    }
}