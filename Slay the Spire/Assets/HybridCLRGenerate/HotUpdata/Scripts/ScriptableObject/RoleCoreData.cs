using UnityEngine;

[CreateAssetMenu(fileName = "NewRoleCoreData", menuName = "SO/RoleCoreData")]
public class RoleCoreData:ScriptableObject
{
 public int HealthValue;
 public int MaxHealthValue;
 
 public int ShieldValue;
 public int MaxShieldValue=999;
}
