using System;
using UnityEngine;

[Serializable]
public class SimpleHealth : IHealth
{
    private IHealth_V _healthV;
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

    public SimpleHealth(int health, int maxHealth, IHealth_V healthV, PriorityQueueEventCenter priorityEventCenter)
    {
        HealthValue = health;
        MaxHealth = maxHealth;
        _priorityEventCenter = priorityEventCenter;
        _healthV = healthV;
        _healthV.UpdateView(this);
    }

    public void AddHealth(ChangeValueInfo info)
    {
        
        foreach (var VARIABLE in _priorityEventCenter.GetEvent("OnBeAttacked"))
        {
            (VARIABLE._delegate as Action<ChangeValueInfo>)?.Invoke(info);
        }

        HealthValue = (int)Mathf.Clamp(HealthValue + info.value, 0, MaxHealth);
        _healthV.UpdateView(this);

        foreach (var VARIABLE in _priorityEventCenter.GetEvent("OnHealthChange"))
        {
            (VARIABLE._delegate as Action<ChangeValueInfo>)?.Invoke(info);
        }


        // Debug.Log(HealthValue);
    }
}