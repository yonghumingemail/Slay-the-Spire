using UnityEngine;

public interface IShield_V
{
    void UpdateView(IShield shield);
    void InitializeView(GameObject obj,IHealth_V  healthV);
    GameObject GetViewObject();
}