using System;
using System.Collections.Generic;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.EventSystems;
using Z_Tools;

[Serializable]
public class Enemy : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler, IEventCenterObject<string>
{
    public IEventCenter<string> eventCenter { get; } = new EventCenter<string>(); //用于提供接口对象

    public PriorityQueueEventCenter _priorityEventCenter { get; private set; } =
        new PriorityQueueEventCenter(); //用于记录和触发buff事件

    [SerializeField] private SimpleHealth _health;
    private IHealth_V health_V;

    [SerializeField] private SimpleShield _shield;
    private IShield_V shield_V;

    [SerializeField] private SimpleBuffList _buffList;
    private IBuffList_V buffList_V;


    public SpriteRenderer spriteRenderer { get; private set; }

    private Animator _animator;
    private GameObject _ui;
    private Intent_C intentC;
    public AlertBox alertBox { get; private set; }

    private Player _player;

    private void Awake()
    {
    }

    private void Start()
    {
        Initialize().Forget();
    }

    private async UniTask Initialize()
    {
        _player = EventCenter_Singleton.Instance.GetEvent<Func<Player>>("Player")?.Invoke();
        _ui = transform.Find("UI").gameObject;
        alertBox = GetComponentInChildren<AlertBox>();

        spriteRenderer = _ui.GetComponent<SpriteRenderer>();
        intentC = GetComponent<Intent_C>();
        _animator = GetComponent<Animator>();

        eventCenter.AddEvent<Func<PriorityQueueEventCenter>>("PriorityQueueEventCenter", () => _priorityEventCenter);

        health_V = GetComponentInChildren<IHealth_V>();
        health_V.InitializeView(_ui);
        _health = new SimpleHealth(50, 100, health_V, _priorityEventCenter);
        eventCenter.AddEvent<Func<IHealth>>("IHealth", () => _health);


        shield_V = GetComponentInChildren<IShield_V>();
        shield_V.InitializeView(_ui, health_V);
        _shield = new SimpleShield(shield_V, _priorityEventCenter);
        eventCenter.AddEvent<Func<IShield>>("IShield", () => _shield);

        buffList_V = GetComponentInChildren<IBuffList_V>();
        await buffList_V.Initialized();
        _buffList = new SimpleBuffList(buffList_V, _priorityEventCenter);
        eventCenter.AddEvent<Func<IBuffList>>("IBuffList", () => _buffList);

        _buffList.AddBuff(new Anger_BuffObj(2, 999, new[] { BuffTag_E.buff }, gameObject));
        IIntent temp = new AttackIntent(6, 2, _priorityEventCenter, _player);
        IIntent temp2 = new AttackIntent(4, 1, _priorityEventCenter, _player);
        intentC.AddIntent(temp);
        intentC.AddIntent(temp2);
        intentC.ShowIntent(temp2);
    }

    public virtual async UniTask ExecuteEntry(int roundCount)
    {
        //通知buff，回合开始
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

        CancellationToken token = this.GetCancellationTokenOnDestroy();

        await intentC.currentIntent.Execute(gameObject, _player.gameObject);
    }


    public void OnPointerEnter(PointerEventData eventData)
    {
        foreach (var VARIABLE in EventCenter_Singleton.Instance._priorityQueueEventCenter.GetEvent("OnMouseEnterEnemy"))
        {
            (VARIABLE._delegate as Action<Enemy>)?.Invoke(this);
        }
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        foreach (var VARIABLE in EventCenter_Singleton.Instance._priorityQueueEventCenter.GetEvent("OnMouseExitEnemy"))
        {
            (VARIABLE._delegate as Action<Enemy>)?.Invoke(this);
        }
    }
}