using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.EventSystems;
using Z_Tools;

[Serializable]
public class Enemy : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler, IHealth, IBuffList, IShield
{
    public IEventCenter<string> eventCenter { get; } = new EventCenter<string>(); //用于提供接口对象
    
    [SerializeField] private SimpleHealth _health;
    private IHealth_V health_V;
    [SerializeField] private SimpleBuffList _buffList;
    private IBuffList_V buffList_V;
    [SerializeField] private SimpleShield _shield;
    private IShieldV shield_V;

    private Intent_V _intentV;

    public EnemySpawner enemySpawner;
    public SpriteRenderer spriteRenderer;

    private AlertBox _alertBox;
    [SerializeField] private bool isSelectCard;

    public GameObject receive;
    private List<Intent> entryList = new List<Intent>();

    private async void Awake()
    {
        _alertBox = transform.Find("AlertBox").GetComponent<AlertBox>();
        _intentV = transform.Find("Intent").GetComponent<Intent_V>();
        enemySpawner = transform.parent.GetComponent<EnemySpawner>();
        spriteRenderer = GetComponent<SpriteRenderer>();


        health_V = transform.Find("HP").GetComponent<IHealth_V>();
        health_V.InitializeView(gameObject);
        _health = new SimpleHealth(50, 100, health_V, _priorityEventCenter);
       

        shield_V = transform.Find("HP/Shield").GetComponent<IShieldV>();
        shield_V.InitializeView(gameObject);
        _shield = new SimpleShield(shield_V, _priorityEventCenter);
        

        buffList_V = transform.Find("BuffList").GetComponent<IBuffList_V>();
        await buffList_V.Initialized();
        _buffList = new SimpleBuffList(buffList_V, _priorityEventCenter);
       

        EventCenter_Singleton.Instance.AddEvent<Action<Card>>("OnSelectCard", (card) => { isSelectCard = true; });
        EventCenter_Singleton.Instance.AddEvent<Action<Card>>("OnUnSelectCard", (card) => { isSelectCard = false; });

        _buffList.AddBuff(new Anger_BuffObj(2, 999, new[] { BuffTag_E.buff }, gameObject));
      Intent temp=  new AttackIntent(40, 3, _intentV, _priorityEventCenter);
        entryList.Add(temp);
        temp.Show();
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

    public float HealthValue => _health.HealthValue;
    public float MaxHealth => _health.MaxHealth;

    public void SetHealth(ChangeValueInfo changeValueInfo)
    {
        _health.SetHealth(changeValueInfo);
    }

    public float ShieldValue => _shield.ShieldValue;

    public void SetShieldValue(float value)
    {
        _shield.SetShieldValue(value);
    }

    public void ShieldTrigger(ChangeValueInfo info)
    {
       _shield.ShieldTrigger(info);
    }
    
    public PriorityQueueEventCenter _priorityEventCenter { get; private set; } =
        new PriorityQueueEventCenter(); //用于记录和触发buff事件
    public void AddBuff(BuffObj buffObj)
    {
        _buffList.AddBuff(buffObj);
    }

    public void RemoveBuff(BuffObj buffObj)
    {
        _buffList.RemoveBuff(buffObj);
    }

    public void UpdateView(BuffObj buffObj)
    {
      _buffList.UpdateView(buffObj);
    }

    public IEnumerable<BuffObj> GetBuffList()
    {
        return _buffList.GetBuffList();
    }
}