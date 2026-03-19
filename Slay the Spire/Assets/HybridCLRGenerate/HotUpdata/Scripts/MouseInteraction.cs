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
    public Action<PointerEventData> OnMouseDownDelegate { get; set; }
    public Action<PointerEventData> OnMouseUpDelegate { get; set; }
    public Action<PointerEventData> OnMouseEnterDelegate { get; set; }
    public Action<PointerEventData> OnMouseExitDelegate { get; set; }

    public void OnPointerEnter(PointerEventData eventData)
    {
        OnMouseEnterDelegate?.Invoke(eventData);
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        OnMouseExitDelegate?.Invoke(eventData);
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        OnMouseDownDelegate?.Invoke(eventData);
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        OnMouseUpDelegate?.Invoke(eventData);
    }

    private void OnDestroy()
    {
        OnMouseEnterDelegate = null;
        OnMouseExitDelegate = null;
        OnMouseEnterDelegate = null;
        OnMouseExitDelegate = null;
    }
}