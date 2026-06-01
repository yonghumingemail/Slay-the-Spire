using System;
using UnityEngine;

[CreateAssetMenu(fileName = "NewMonsterGroupList", menuName = "SO/MonsterGroupList")]
public class MonsterGroupList : ScriptableObject
{
    public MonsterGroups[] groups;
}

[Serializable]
public struct MonsterGroups
{
    public MonsterGroup[]  groupList;
    public float probability;
}
