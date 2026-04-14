using System;
using UnityEngine;

public interface IHealth
{
    int HealthValue { get; }
    int MaxHealth { get; }
    void AddHealth(ChangeValueInfo  changeValueInfo);
}