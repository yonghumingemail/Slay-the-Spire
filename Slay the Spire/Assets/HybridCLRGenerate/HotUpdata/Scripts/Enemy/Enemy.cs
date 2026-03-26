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
    [SerializeField] private SimpleBuffList _buffList;
    private IBuffList_V buffList_V;
    [SerializeField] private SimpleShield _shield;
    private IShieldV shield_V;

    private Intent _intent;
    
    public EnemySpawner enemySpawner;
    public SpriteRenderer spriteRenderer;

    private AlertBox _alertBox;
    [SerializeField] private bool isSelectCard;

    public GameObject receive;
    private List<IEntry> entryList = new List<IEntry>();

    private async void Awake()
    {
        _alertBox = transform.Find("AlertBox").GetComponent<AlertBox>();
        _intent = transform.Find("Intent").GetComponent<Intent>();
        enemySpawner = transform.parent.GetComponent<EnemySpawner>();
        spriteRenderer = GetComponent<SpriteRenderer>();
        

        health_V = transform.Find("HP").GetComponent<IHealth_V>();
        _health = new SimpleHealth(50, 100, health_V, _priorityEventCenter);
        eventCenter.AddEvent<Func<IHealth>>("IHealth", () => _health);
        health_V.InitializeView(gameObject);

        shield_V = transform.Find("HP/Shield").GetComponent<IShieldV>();
        _shield = new SimpleShield(shield_V, _priorityEventCenter);
        eventCenter.AddEvent<Func<IShield>>("IShield", () => _shield);
        shield_V.InitializeView(gameObject);

        buffList_V = transform.Find("BuffList").GetComponent<IBuffList_V>();
        _buffList = new SimpleBuffList(buffList_V, _priorityEventCenter);
        await buffList_V.Initialized();
        eventCenter.AddEvent<Func<IBuffList>>("IBuffList", () => _buffList);

        eventCenter.AddEvent<Func<PriorityQueueEventCenter>>("PriorityQueueEventCenter", () => _priorityEventCenter);
        EventCenter_Singleton.Instance.AddEvent<Action<Card>>("OnSelectCard", (card) => { isSelectCard = true; });
        EventCenter_Singleton.Instance.AddEvent<Action<Card>>("OnUnSelectCard", (card) => { isSelectCard = false; });

        _buffList.AddBuff(new Anger_BuffObj(2, 999, new[] { BuffTag_E.buff }, gameObject));
        entryList.Add(new InflictDamage(5));
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
        foreach (var entry in entryList)
        {
            print("执行");
            await entry.Trigger(gameObject, receive);
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