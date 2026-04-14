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
    IEventCenterObject<string>
{
    public IEventCenter<string> eventCenter { get; } = new EventCenter<string>(); //用于提供接口对象
    public CancellationTokenSource TokenSource { get; } = new CancellationTokenSource();

    public PriorityQueueEventCenter _priorityEventCenter { get; protected set; } =
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
        _player = EventCenter_Singleton.Instance.GetEvent<Func<Player>>("Player")?.Invoke();

        spriteRenderer = transform.Find("UI").gameObject.GetComponent<SpriteRenderer>();
        intentC = GetComponentInChildren<Intent_C>();
        alertBox = GetComponentInChildren<AlertBox>();
        _animator = GetComponent<Animator>();
        _animatorComplete = GetComponent<AnimatorComplete>();

        eventCenter.AddEvent<Func<PriorityQueueEventCenter>>("PriorityQueueEventCenter", () => _priorityEventCenter);

        health_V = GetComponentInChildren<IHealth_V>();
        health_V.InitializeView(spriteRenderer.gameObject);
        _health = new SimpleHealth(50, 100, health_V, _priorityEventCenter);
        eventCenter.AddEvent<Func<IHealth>>("IHealth", () => _health);

        shield_V = GetComponentInChildren<IShield_V>();
        shield_V.InitializeView(spriteRenderer.gameObject, health_V);
        _shield = new SimpleShield(shield_V, _priorityEventCenter);
        eventCenter.AddEvent<Func<IShield>>("IShield", () => _shield);

        buffList_V = GetComponentInChildren<IBuffList_V>();
        await buffList_V.Initialized();
        _buffList = new SimpleBuffList(buffList_V, _priorityEventCenter);
        eventCenter.AddEvent<Func<IBuffList>>("IBuffList", () => _buffList);

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


    /// <summary>
    /// 在敌人回合开始时的回调,需要由外部调用
    /// </summary>
    /// <param name="roundCount"></param>
    public virtual async UniTask OnRoundStart(int roundCount)
    {
        //通知事件，回合开始
        var actions = _priorityEventCenter.GetEvent("OnRoundStart");
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
        foreach (var VARIABLE in EventCenter_Singleton.Instance._priorityQueueEventCenter.GetEvent("OnMouseEnterEnemy"))
        {
            (VARIABLE._delegate as Action<Enemy>)?.Invoke(this);
        }
    }

    public virtual void OnPointerExit(PointerEventData eventData)
    {
        foreach (var VARIABLE in EventCenter_Singleton.Instance._priorityQueueEventCenter.GetEvent("OnMouseExitEnemy"))
        {
            (VARIABLE._delegate as Action<Enemy>)?.Invoke(this);
        }
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
        foreach (var VARIABLE in _priorityEventCenter.GetEvent("OnDestroy"))
        {
            (VARIABLE._delegate as Action)?.Invoke();
        }

        _priorityEventCenter.Clear();
    }
}