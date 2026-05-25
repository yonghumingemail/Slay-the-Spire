using System;
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
        set
        {
            if (healthValue > maxHealthValue)
            {
                healthValue = maxHealthValue;
            }
            else
            {
                healthValue = healthValue + value - maxHealthValue;
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
        _updateView?.Invoke(this);
    }

    public void AddHealth(ChangeValueInfo info)
    {
        Action_T_EA<OnBeAttacked_EA>.Fire(info, this, _priorityEventCenter);

        HealthValue = Mathf.Clamp(HealthValue + info.value, 0, MaxHealth);
        _updateView?.Invoke(this);

        Action_T_EA<OnHealthActionChange_EA>.Fire(info, this, _priorityEventCenter);

        // Debug.Log(HealthValue);
    }
}