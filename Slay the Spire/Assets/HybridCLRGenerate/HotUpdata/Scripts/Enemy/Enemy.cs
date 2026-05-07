using System;
using System.Collections.Generic;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.U2D;
using Z_Tools;

[Serializable]
public abstract class Enemy : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler, ISelectableObject,
    IEventCenterObject<BaseEventArgs>
{
    public IEventManage<BaseEventArgs> EventManage { get; } = new EventManage(); //用于提供接口对象
    public CancellationTokenSource TokenSource { get; } = new CancellationTokenSource();

    public PriorityQueueEventCenter _priorityEventCenter =
        new PriorityQueueEventCenter(); //用于记录和触发buff事件

    [SerializeField] protected SimpleHealth _health;
    protected IHealth_V health_V;

    [SerializeField] protected SimpleShield _shield;
    protected IShield_V shield_V;

    [SerializeField] protected SimpleBuffList _buffList;
    protected IBuffList_V buffList_V;


    public SpriteRenderer spriteRenderer { get; protected set; }

    protected Animator _animator;

    protected Intent_C intentC;
    protected List<EnemyAction> actionList = new List<EnemyAction>();
    protected EnemyAction currentAction;
    protected SpriteAtlas _spriteAtlas;
    public AlertBox alertBox { get; protected set; }
    protected Player _player;
    protected AnimatorComplete _animatorComplete;

    public abstract EnemyAction GetNextAction();

    protected virtual void Start()
    {
        Initialize().Forget();
    }

    protected virtual async UniTask Initialize()
    {
        _player = GetObject_EventArgs<Player>.Fire(this, EventCenter_Singleton.Instance);

        spriteRenderer = transform.Find("UI").gameObject.GetComponent<SpriteRenderer>();
        intentC = GetComponentInChildren<Intent_C>();
        alertBox = GetComponentInChildren<AlertBox>();
        _animator = GetComponent<Animator>();
        _animatorComplete = GetComponent<AnimatorComplete>();

        EventManage.Subscribe(GetObject_EventArgs<PriorityQueueEventCenter>.id, (send, handler) => { GetObject_EventArgs<PriorityQueueEventCenter>.Subscribe(handler, _priorityEventCenter); });

        health_V = GetComponentInChildren<IHealth_V>();
        health_V.InitializeView(spriteRenderer.gameObject);
        _health = new SimpleHealth(50, 100, health_V, _priorityEventCenter);
        EventManage.Subscribe(GetObject_EventArgs<IHealth>.id, (send, handler) => { GetObject_EventArgs<IHealth>.Subscribe(handler, _health); });

        shield_V = GetComponentInChildren<IShield_V>();
        shield_V.InitializeView(spriteRenderer.gameObject, health_V);
        _shield = new SimpleShield(shield_V, _priorityEventCenter);
        EventManage.Subscribe(GetObject_EventArgs<IShield>.id, (send, handler) => { GetObject_EventArgs<IShield>.Subscribe(handler, _shield); });

        buffList_V = GetComponentInChildren<IBuffList_V>();
        await buffList_V.Initialized();
        _buffList = new SimpleBuffList(buffList_V, _priorityEventCenter);
        EventManage.Subscribe(GetObject_EventArgs<IBuffList>.id, (send, handler) => { GetObject_EventArgs<IBuffList>.Subscribe(handler, _buffList); });

        //改，不应该由enemy加载
        _spriteAtlas =
            await AddressablesMgr.Instance.LoadAssetAsync<SpriteAtlas>(
                "Assets/Art/Image/SpriteAtlas/Intent.spriteatlasv2");
    }


    /// <summary>
    /// 在敌人回合结束时的回调,不需要外部调用，执行完意图后执行
    /// </summary>
    /// <param name="roundCount"></param>
    protected virtual async UniTask OnRoundEnd(int roundCount)
    {
        //通知事件，回合结束
        await OnRound_EventArgs.Fire(roundCount, OnRoundEnd_EventArgs.id, this, _priorityEventCenter);
        
    }


    /// <summary>
    /// 在敌人回合开始时的回调,需要由外部调用
    /// </summary>
    /// <param name="roundCount"></param>
    public virtual async UniTask OnRoundStart(int roundCount)
    {
        //通知事件，回合开始
        await OnRound_EventArgs.Fire(roundCount, OnRoundStart_EventArgs.id, this, _priorityEventCenter);

        await currentAction.Execute.Invoke();
        actionList.Add(currentAction);
        currentAction = GetNextAction();
        intentC.HideIntent();
        await OnRoundEnd(roundCount);
    }

    public virtual UniTask OnPlayerRoundStart(int roundCount)
    {
        intentC.ShowIntent(currentAction.intents);
        return UniTask.CompletedTask;
    }


    public virtual void OnPointerEnter(PointerEventData eventData)
    {
        Enemy_EventArgs.Fire(this, OnMouseEnterEnemy_EventArgs.id, this, EventCenter_Singleton.Instance._priorityQueueEventCenter);
    }

    public virtual void OnPointerExit(PointerEventData eventData)
    {
        Enemy_EventArgs.Fire(this, OnMouseExitEnemy_EventArgs.id, this, EventCenter_Singleton.Instance._priorityQueueEventCenter);
    }

    public virtual void OnSelect()
    {
        alertBox.Show(transform, spriteRenderer.sprite);
    }

    public virtual void OnUnSelect()
    {
        alertBox.Close();
    }

    private void OnDestroy()
    {
        Action_EventArgs.Fire(OnDestroy_EventArgs.id, this, _priorityEventCenter);

        _priorityEventCenter.Clear();
    }
}