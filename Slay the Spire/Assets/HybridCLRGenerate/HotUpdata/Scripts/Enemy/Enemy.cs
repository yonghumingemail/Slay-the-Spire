using System;
using System.Collections.Generic;
using System.Threading;
using Cysharp.Threading.Tasks;
using HybridCLRGenerate.HotUpdata.Scripts.Tools.Event.EventArgs;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.U2D;
using Z_Tools;


[Serializable]
public abstract class Enemy : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler, ISelectableObject,
    IEventCenterObject<GameEventArgs>
{
    public IEventManage<GameEventArgs> EventManage { get; } = new EventManage(); //用于提供接口对象
    public CancellationTokenSource TokenSource { get; } = new();

    public PriorityQueueEventCenter _priorityEventCenter = new(); //用于记录和触发buff事件

    public SpriteRenderer spriteRenderer { get; protected set; }

    protected Animator _animator;
    protected BoxCollider2D _boxCollider2D;
    protected AnimatorComplete _animatorComplete;

    protected Intent_C intentC;
    protected List<EnemyAction> actionList = new();
    protected EnemyAction currentAction;
    protected SpriteAtlas _spriteAtlas;
    public AlertBox alertBox { get; protected set; }
    protected Player _player;
    protected GameObject UI;

    [SerializeField] protected RoleCore roleCore;

    public abstract EnemyAction GetNextAction();

    protected virtual async UniTask Initialize(Sprite sprite, RuntimeAnimatorController animatorController)
    {
        _player = GetObject_GEA<Player>.Fire(this, EventCenter_Singleton.Instance);

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
                "Assets/ScriptableObject/RoleCoreData/Enemy/JawWorm.asset");
        
        UI = transform.Find("UI").gameObject;
        spriteRenderer = UI.GetComponent<SpriteRenderer>();
        spriteRenderer.sprite = sprite;

        _animator = UI.GetComponent<Animator>();
        _animator.runtimeAnimatorController = animatorController;

        _animatorComplete = UI.GetComponent<AnimatorComplete>();
        _animatorComplete.Init(_animator);

       _boxCollider2D= FitColliderToRenderer(gameObject,spriteRenderer);
       
       
        intentC = GetComponentInChildren<Intent_C>(true);
        alertBox = GetComponentInChildren<AlertBox>(true);

        roleCore = new RoleCore(gameObject, spriteRenderer, roleCoreData, _priorityEventCenter);
        roleCore.InterfaceRegistration(EventManage);

        GetObject_GEA<PriorityQueueEventCenter>.Subscribe(_priorityEventCenter, EventManage);

        UI.gameObject.SetActive(true);
        //改，不应该由enemy加载
        _spriteAtlas =
            await AddressablesMgr.Instance.LoadAssetAsync<SpriteAtlas>(
                "Assets/Art/Image/SpriteAtlas/Intent.spriteatlasv2");
    }

    public BoxCollider2D FitColliderToRenderer(GameObject target,Renderer _renderer)
    {
        // 2. 获取或添加 BoxCollider2D
        BoxCollider2D _collider = target.AddComponent<BoxCollider2D>();
        _collider.isTrigger = true;

        // 3. 获取 Renderer 的世界轴对齐边界 (Bounds)
        Bounds bounds = _renderer.bounds;

        // 4. 将世界边界转换到物体的本地坐标系中（考虑缩放、旋转）
        Vector3 localMin = target.transform.InverseTransformPoint(bounds.min);
        Vector3 localMax = target.transform.InverseTransformPoint(bounds.max);

        // 5. 计算本地坐标下的大小和中心
        Vector2 size = new Vector2(localMax.x - localMin.x, localMax.y - localMin.y);
        Vector2 center = new Vector2((localMin.x + localMax.x) / 2f, (localMin.y + localMax.y) / 2f);

        // 6. 赋值给 BoxCollider2D
        _collider.size = size;
        _collider.offset = center;

        return _collider;
    }
    
    /// <summary>
    /// 在敌人回合结束时的回调,不需要外部调用，执行完意图后执行
    /// </summary>
    /// <param name="roundCount"></param>
    protected virtual async UniTask OnRoundEnd(int roundCount)
    {
        //通知事件，回合结束
        await Action_Int_Async.Fire<OnRoundEnd_EventName>(roundCount, this, _priorityEventCenter);
    }


    /// <summary>
    /// 在敌人回合开始时的回调,需要由外部调用
    /// </summary>
    /// <param name="roundCount"></param>
    public virtual async UniTask OnRoundStart(int roundCount)
    {
        //通知事件，回合开始
        await Action_Int_Async.Fire<OnRoundStart_EventName>(roundCount, this, _priorityEventCenter);

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
        Args_T_EA<OnMouseEnterEnemy_EA>.Fire(this, this, EventCenter_Singleton.Instance._priorityQueueEventCenter);
    }

    public virtual void OnPointerExit(PointerEventData eventData)
    {
        Args_T_EA<OnMouseExitEnemy_EA>.Fire(this, this, EventCenter_Singleton.Instance._priorityQueueEventCenter);
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
        _priorityEventCenter.Fire<OnDestroy_EA>(this, null);
        _priorityEventCenter.Clear();
    }
}