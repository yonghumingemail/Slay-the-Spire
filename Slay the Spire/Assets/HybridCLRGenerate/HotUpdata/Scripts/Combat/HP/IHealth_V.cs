using UnityEngine;

public interface IHealth_V 
{
    float Scale_X { get; }
    void UpdateView( IHealth health);
    void InitializeView(Renderer renderer );
    GameObject GetViewObject();
}
