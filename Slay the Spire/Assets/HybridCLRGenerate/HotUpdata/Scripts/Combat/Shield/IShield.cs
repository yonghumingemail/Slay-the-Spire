using UnityEngine;

public interface IShield 
{
   float ShieldValue { get; }
   void SetShieldValue(float value);
   void ShieldTrigger(ChangeValueInfo info);
}
