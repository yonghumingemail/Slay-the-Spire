using System;
using System.Collections.Generic;
using System.Linq;
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

    private Intent_V _intentV;

    public EnemySpawner enemySpawner;
    public SpriteRenderer spriteRenderer;

    
    private Animator _animator;
    private GameObject _ui;
    private Intent_C intentC;
    private AlertBox _alertBox;
    [SerializeField] private bool isSelectCard;

    public GameObject receive;


    private void Awake()
    {
        Initialize().Forget();
    }

    private async UniTaskVoid Initialize()
    {
        _ui = transform.Find("UI").gameObject;
        _alertBox = GetComponentInChildren<AlertBox>();
        _intentV = GetComponentInChildren<Intent_V>();
        enemySpawner = transform.parent.GetComponent<EnemySpawner>();
        spriteRenderer = GetComponent<SpriteRenderer>();
        intentC = GetComponent<Intent_C>();
        _animator = GetComponent<Animator>();
        

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


        EventCenter_Singleton.Instance.AddEvent<Action<Card>>("OnSelectCard", (card) => { isSelectCard = true; });
        EventCenter_Singleton.Instance.AddEvent<Action<Card>>("OnUnSelectCard", (card) => { isSelectCard = false; });

        _buffList.AddBuff(new Anger_BuffObj(2, 999, new[] { BuffTag_E.buff }, gameObject));
    }

    private void Start()
    {
        IIntent temp = new AttackIntent(20, 3, _animator, _priorityEventCenter);
        intentC.AddIntent(temp);
        intentC.ShowIntent(temp);
    }

    public virtual async UniTask ExecuteEntry(int roundCount)
    {
        //通知buff，回合开始
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

        CancellationToken token = this.GetCancellationTokenOnDestroy();

        foreach (var entry in intentC.entryList)
        {
            await entry.Execute(gameObject, receive);
            await UniTask.Yield(token);
        }
    }

    public virtual int Choose(float[] list)
    {
        if (list == null || list.Length == 0) return -1;
        // 1. 计算总权重
        float total = 0f;
        foreach (float elem in list)
        {
            total += elem;
        }

        // 2. 在0到总权重之间随机选取一个点
        float randomPoint = UnityEngine.Random.value * total; // Random.value返回0.0到1.0之间的数

        // 3. 确定随机点落在哪个区间
        for (int i = 0; i < list.Length; i++)
        {
            if (randomPoint < list[i])
            {
                return i; // 随机点落在当前区间，返回当前索引
            }

            randomPoint -= list[i]; // 随机点减去当前区间的权重，继续检查下一个区间
        }

        // 为了防止意外情况，默认返回最后一个选项的索引
        return list.Length - 1;
    }

    public void OnPointerEnter(PointerEventData eventData)
    {
        if (isSelectCard)
        {
            _alertBox.Show(transform, spriteRenderer.sprite);
            enemySpawner.eventCenter.GetEvent<Action<Transform, Sprite>>("OnSelectEnemy")
                ?.Invoke(transform, spriteRenderer.sprite);
        }
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        _alertBox.Close();
        enemySpawner.eventCenter.GetEvent<Action>("OnDeSelectEnemy")?.Invoke();
    }

   
}