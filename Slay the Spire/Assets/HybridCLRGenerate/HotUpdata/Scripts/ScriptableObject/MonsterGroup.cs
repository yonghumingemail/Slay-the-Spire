using System;
using UnityEngine;

[CreateAssetMenu(fileName = "NewMonsterGroup", menuName = "SO/MonsterGroup")]
public class MonsterGroup: ScriptableObject
{
    public SpawnEntry[] groupList;
}
[Serializable]
public struct SpawnEntry
{
    public GameObject enemy;
    public float probability;
}