using System;
using UnityEngine;

[Serializable]
public class RoleCore
{
    #region 只读属性

    public SimpleHealth Health => _health;
    public IHealth_V HealthV => health_V;

    public SimpleShield Shield => _shield;
    public IShield_V ShieldV => shield_V;

    public SimpleBuffList BuffList => _buffList;
    public IBuffList_V BuffListV => buffList_V;

    #endregion

    #region 私有变量

    [SerializeField] private SimpleHealth _health;
    private IHealth_V health_V;

    [SerializeField] private SimpleShield _shield;
    private IShield_V shield_V;

    [SerializeField] private SimpleBuffList _buffList;
    private IBuffList_V buffList_V;

    private PriorityQueueEventCenter _priorityEventCenter;

    #endregion

    public RoleCore(GameObject gameObject, Renderer renderer, RoleCoreData data,
        PriorityQueueEventCenter priorityQueueEventCenter)
    {
        _priorityEventCenter = priorityQueueEventCenter;

        health_V = gameObject.GetComponentInChildren<IHealth_V>(true);
        health_V.InitializeView(renderer);

        shield_V = gameObject.GetComponentInChildren<IShield_V>(true);
        shield_V.InitializeView(health_V, renderer);

        buffList_V = gameObject.GetComponentInChildren<IBuffList_V>(true);

        _health = new SimpleHealth(health_V.UpdateView, priorityQueueEventCenter);
        _shield = new SimpleShield(shield_V.UpdateView, priorityQueueEventCenter);
        _buffList = new SimpleBuffList(buffList_V, priorityQueueEventCenter);

        _health.MaxHealth = data.MaxHealthValue;
        _health.HealthValue = data.HealthValue;
        _shield.ShieldValue = data.ShieldValue;
        _shield.MaxValue = data.MaxShieldValue;

        health_V.UpdateView(_health);
        shield_V.UpdateView(_shield);
    }

    public void InterfaceRegistration(IEventManage<GameEventArgs> EventManage)
    {
        GetObject_GEA<IBuffList>.Subscribe(_buffList, EventManage);
        GetObject_GEA<IHealth>.Subscribe(_health, EventManage);
        GetObject_GEA<IShield>.Subscribe(_shield, EventManage);
    }
}