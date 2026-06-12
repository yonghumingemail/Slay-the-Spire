using System;
using GameFramework;
using UnityEngine;


[Serializable]
public class SimpleHealth : IHealth
{
    private Action<IHealth> _updateView;
    private PriorityEventManager _priorityEventManager;

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

    public SimpleHealth(Action<IHealth> UpdateView, PriorityEventManager priorityEventManager)
    {
        _priorityEventManager = priorityEventManager;
        _updateView = UpdateView;
    }

    public void AddHealth(ChangeValueInfo info)
    {
        Args_T_EA<OnBeAttacked_EA>.Fire(info, this, _priorityEventManager);

        HealthValue = Mathf.Clamp(HealthValue + info.value, 0, MaxHealth);
        _updateView?.Invoke(this);

        Args_T_EA<OnHealthArgsChangeEa>.Fire(info, this, _priorityEventManager);

        ReferencePool.Release(info);
        // Debug.Log(HealthValue);
    }
}