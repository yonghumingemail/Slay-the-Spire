using System;
using HybridCLRGenerate.HotUpdata.Scripts.Tools.Event.EventArgs;
using UnityEngine;

[Serializable]
public class SimpleHealth : IHealth
{
    private Action<IHealth> _updateView;
    private PriorityQueueEventCenter _priorityEventCenter;

    public int HealthValue
    {
        get => healthValue;
        private set => healthValue = value;
    }

    public int MaxHealth
    {
        get => maxHealthValue;
        private set => maxHealthValue = value;
    }

    public int healthValue;
    public int maxHealthValue;

    public SimpleHealth(Action<IHealth> UpdateView, PriorityQueueEventCenter priorityEventCenter)
    {
        _priorityEventCenter = priorityEventCenter;
        _updateView = UpdateView;
        _updateView?.Invoke(this);
    }

    public void AddHealth(ChangeValueInfo info)
    {
        Action_T.Fire(info,OnBeAttacked_EventArgs.id,this,_priorityEventCenter);

        HealthValue = Mathf.Clamp(HealthValue + info.value, 0, MaxHealth);
        _updateView?.Invoke(this);
        
        Action_T.Fire(info,OnHealthActionChangeEventArgs.id,this,_priorityEventCenter);
        
        // Debug.Log(HealthValue);
    }
}