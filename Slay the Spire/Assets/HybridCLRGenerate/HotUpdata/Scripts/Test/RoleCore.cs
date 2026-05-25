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

  
    
    public RoleCore(IHealth_V healthV, IShield_V shieldV, IBuffList_V buffListV,PriorityQueueEventCenter priorityQueueEventCenter)
    {
        _priorityEventCenter=priorityQueueEventCenter;
        
        health_V = healthV;
        shield_V = shieldV;
        buffList_V = buffListV;
        _health=new SimpleHealth(healthV.UpdateView,priorityQueueEventCenter);
        _shield=new SimpleShield(shieldV.UpdateView,priorityQueueEventCenter);
        _buffList=new SimpleBuffList(buffListV,priorityQueueEventCenter);
        
    }
    
    public void InterfaceRegistration(IEventManage<BaseEventArgs> EventManage)
    {
        GetObject_GEA<PriorityQueueEventCenter>.Subscribe(_priorityEventCenter,EventManage);
        GetObject_GEA<SimpleBuffList>.Subscribe(_buffList,EventManage);
        GetObject_GEA<SimpleHealth>.Subscribe(_health,EventManage);
        GetObject_GEA<SimpleShield>.Subscribe(_shield,EventManage);
    }

  
}