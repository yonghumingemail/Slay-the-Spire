using System;
using UnityEngine;
using UnityEngine.EventSystems;

public class UIPointerClickEvent : MonoBehaviour,IPointerClickHandler
{
   public Action<PointerEventData> onClick;

    public void OnPointerClick(PointerEventData eventData)
    {
        onClick?.Invoke(eventData);
    }
}
