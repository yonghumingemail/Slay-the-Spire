using System;
using System.Collections.Generic;
using System.Threading;
using Cysharp.Threading.Tasks;
using HybridCLRGenerate.HotUpdata.Scripts.Tools.Event.EventArgs;
using UnityEditor.Animations;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.U2D;
using VContainer;
using Z_Tools;


[Serializable]
public abstract class Enemy : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler, ISelectableObject,
    IEventCenterObject<BaseEventArgs>
{
    public IEventManage<BaseEventArgs> EventManage { get; } = new EventManage(); //用于提供接口对象
    public CancellationTokenSource TokenSource { get; } = new ();

    public PriorityQueueEventCenter _priorityEventCenter = new (); //用于记录和触发buff事件

    public SpriteRenderer spriteRenderer { get; protected set; }

    protected Animator _animator;
    protected BoxCollider2D _boxCollider2D;
    protected AnimatorComplete _animatorComplete;

    protected Intent_C intentC;
    protected List<EnemyAction> actionList = new ();
    protected EnemyAction currentAction;
    protected SpriteAtlas _spriteAtlas;
    public AlertBox alertBox { get; protected set; }
    protected Player _player;

    [SerializeField] private RoleCore roleCore;

    public abstract EnemyAction GetNextAction();

    protected virtual async UniTask Initialize(Sprite sprite, RuntimeAnimatorController animatorController)
    {
        _player = GetObject_GEA<Player>.Fire(this, EventCenter_Singleton.Instance);

        var initArray = GetComponentsInChildren<INeedToInitialize>();
        var tasks = new UniTask[initArray.Length];
        int i = 0;
        foreach (var VARIABLE in initArray)
        {
            tasks[i] = VARIABLE.Initialize();
        }

        await tasks;

        var UI = transform.Find("UI").gameObject;
        spriteRenderer = UI.GetComponent<SpriteRenderer>();
        spriteRenderer.sprite = sprite;

        _animator = UI.GetComponent<Animator>();
        _animator.runtimeAnimatorController = animatorController;

        _animatorComplete = UI.GetComponent<AnimatorComplete>();
        _animatorComplete.Init(_animator);

        _boxCollider2D = UI.AddComponent<BoxCollider2D>();

        intentC = GetComponentInChildren<Intent_C>(true);
        alertBox = GetComponentInChildren<AlertBox>(true);

        var health_V = GetComponentInChildren<IHealth_V>(true);
        health_V.InitializeView(spriteRenderer.gameObject);
        var shield_V = GetComponentInChildren<IShield_V>(true);
        shield_V.InitializeView(spriteRenderer.gameObject, health_V);
        var buffList_V = GetComponentInChildren<IBuffList_V>();

        roleCore = new RoleCore(health_V, shield_V, buffList_V, _priorityEventCenter);
        roleCore.InterfaceRegistration(EventManage);

        GetObject_GEA<PriorityQueueEventCenter>.Subscribe(_priorityEventCenter, EventManage);

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
        await Action_Int_Async.Fire(roundCount, OnRoundEnd_EventArgs.id, this, _priorityEventCenter);
    }


    /// <summary>
    /// 在敌人回合开始时的回调,需要由外部调用
    /// </summary>
    /// <param name="roundCount"></param>
    public virtual async UniTask OnRoundStart(int roundCount)
    {
        //通知事件，回合开始
        await Action_Int_Async.Fire(roundCount, OnRoundStart_EventArgs.id, this, _priorityEventCenter);

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
        Action_T.Fire(this, OnMouseEnterEnemy_EventArgs.id, this, EventCenter_Singleton.Instance._priorityQueueEventCenter);
    }

    public virtual void OnPointerExit(PointerEventData eventData)
    {
        Action_T.Fire(this, OnMouseExitEnemy_EventArgs.id, this, EventCenter_Singleton.Instance._priorityQueueEventCenter);
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
        _priorityEventCenter.Fire(this, OnDestroy_EventArgs.id, null);
        _priorityEventCenter.Clear();
    }
}