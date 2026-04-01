using System;
using UnityEngine;

[Serializable]
public class SimpleHealth : IHealth
{
    private IHealth_V _healthV;
    private PriorityQueueEventCenter _priorityEventCenter;

    public float HealthValue
    {
        get => healthValue;
        private set => healthValue = value;
    }

    public float MaxHealth
    {
        get => maxHealthValue;
        private set => maxHealthValue = value;
    }

    public float healthValue;
    public float maxHealthValue;

    public SimpleHealth(float health, float maxHealth, IHealth_V healthV,PriorityQueueEventCenter priorityEventCenter)
    {
        HealthValue = health;
        MaxHealth = maxHealth;
        _priorityEventCenter = priorityEventCenter;
        _healthV = healthV;
        _healthV.UpdateView(this);
    }

    public void AddHealth(ChangeValueInfo info)
    {
        var eventList = _priorityEventCenter.GetEvent("OnHealthChange");
        if (eventList != null)
        {
            foreach (var VARIABLE in eventList)
            {
                (VARIABLE._delegate as Action<ChangeValueInfo>)?.Invoke(info);
            }
        }

        HealthValue = Mathf.Clamp(HealthValue + info.value, 0, MaxHealth);
        _healthV.UpdateView(this);
        // Debug.Log(HealthValue);
    }
}