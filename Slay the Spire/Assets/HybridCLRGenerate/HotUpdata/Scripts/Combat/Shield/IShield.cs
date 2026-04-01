using UnityEngine;

public interface IShield 
{
   float ShieldValue { get; }
   void AddShieldValue(float value);
   void ShieldTrigger(ChangeValueInfo info);
}
