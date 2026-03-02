using UnityEngine;
using UnityEngine.EventSystems;

public class Test2 : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
    public void OnPointerDown(PointerEventData eventData)
    {
        print("Test2Down");
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        print("Test2Up");
    }
}
