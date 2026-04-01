using System;
using UnityEngine;

public interface IHealth
{
    float HealthValue { get; }
    float MaxHealth { get; }
    void AddHealth(ChangeValueInfo  changeValueInfo);
}