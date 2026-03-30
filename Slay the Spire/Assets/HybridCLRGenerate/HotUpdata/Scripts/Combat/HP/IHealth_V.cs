using UnityEngine;

public interface IHealth_V 
{
    void UpdateView( IHealth health);
    void InitializeView(GameObject obj );
    GameObject GetViewObject();
}
