using System;
using UnityEngine;
using UnityEngine.EventSystems;

public class MouseInteraction : MonoBehaviour,
    IPointerEnterHandler,
    IPointerExitHandler,
    IPointerDownHandler,
    IPointerUpHandler,
    IMouseDownOrUp, IMouseEnterORExit
{
    public Action<PointerEventData> OnMouseDown { get; set; }
    public Action<PointerEventData> OnMouseUp { get; set; }
    public Action<PointerEventData> OnMouseEnter { get; set; }
    public Action<PointerEventData> OnMouseExit { get; set; }

    public void OnPointerEnter(PointerEventData eventData)
    {
        OnMouseEnter?.Invoke(eventData);
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        OnMouseExit?.Invoke(eventData);
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        OnMouseDown?.Invoke(eventData);
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        OnMouseUp?.Invoke(eventData);
    }
}