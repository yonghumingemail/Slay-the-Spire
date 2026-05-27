using System;
using GameFramework;
using UnityEngine;


[Serializable]
public class SimpleHealth : IHealth
{
    private Action<IHealth> _updateView;
    private PriorityQueueEventCenter _priorityEventCenter;

    public int HealthValue
    {
        get => healthValue;
        set
        {
            healthValue = Mathf.Clamp(value, 0, MaxHealth);
            _updateView?.Invoke(this);
        }
    }

    public int MaxHealth
    {
        get => maxHealthValue;
        set
        {
            if (healthValue > maxHealthValue)
            {
                healthValue = maxHealthValue;
            }
            
            maxHealthValue = value;
            _updateView?.Invoke(this);
        }
    }

    [SerializeField] private int healthValue;
    [SerializeField] private int maxHealthValue;

    public SimpleHealth(Action<IHealth> UpdateView, PriorityQueueEventCenter priorityEventCenter)
    {
        _priorityEventCenter = priorityEventCenter;
        _updateView = UpdateView;
    }

    public void AddHealth(ChangeValueInfo info)
    {
        Args_T_EA<OnBeAttacked_EA>.Fire(info, this, _priorityEventCenter);

        HealthValue = Mathf.Clamp(HealthValue + info.value, 0, MaxHealth);
        _updateView?.Invoke(this);

        Args_T_EA<OnHealthArgsChangeEa>.Fire(info, this, _priorityEventCenter);

        ReferencePool.Release(info);
        // Debug.Log(HealthValue);
    }
}