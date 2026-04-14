using UnityEngine;

public interface IShield
{
    int ShieldValue { get; }
    void AddShieldValue(ChangeValueInfo value);
}