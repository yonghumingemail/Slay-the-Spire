using UnityEngine;

public interface IShield_V
{
    void UpdateView(IShield shield);
    void InitializeView(IHealth_V  healthV,Renderer targetRenderer);
    GameObject GetViewObject();
}