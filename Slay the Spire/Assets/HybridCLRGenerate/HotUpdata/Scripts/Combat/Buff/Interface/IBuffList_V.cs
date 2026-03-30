using Cysharp.Threading.Tasks;
using UnityEngine;

public interface IBuffList_V
{
    void AddBuff(BuffObj buffObj);
    void RemoveBuff(BuffObj buffObj);
    void UpdateBuffView(BuffObj buffObj);
    UniTask Initialized();
    GameObject GetViewObject();
}