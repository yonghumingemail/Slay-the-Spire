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
    public bool isDebug;

    public virtual void OnPointerEnter(PointerEventData eventData)
    {
        if (isDebug) print("OnPointerEnter");
        OnMouseEnterDelegate?.Invoke(eventData);
    }

    public virtual void OnPointerExit(PointerEventData eventData)
    {
        if (isDebug)   print("OnPointerExit");
        OnMouseExitDelegate?.Invoke(eventData);
    }

    public virtual void OnPointerDown(PointerEventData eventData)
    {
        if (isDebug) print("OnPointerDown");
        OnMouseDownDelegate?.Invoke(eventData);
    }

    public virtual void OnPointerUp(PointerEventData eventData)
    {
        if (isDebug)   print("OnPointerUp");
        OnMouseUpDelegate?.Invoke(eventData);
    }

    protected virtual void OnDestroy()
    {
        OnMouseEnterDelegate = null;
        OnMouseExitDelegate = null;
        OnMouseEnterDelegate = null;
        OnMouseExitDelegate = null;
    }
}