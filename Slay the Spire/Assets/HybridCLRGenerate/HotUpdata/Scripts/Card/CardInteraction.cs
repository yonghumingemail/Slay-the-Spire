using System;
using UnityEngine;
using UnityEngine.EventSystems;

public class CardInteraction : MonoBehaviour, 
    IPointerEnterHandler, 
    IPointerExitHandler, 
    IPointerDownHandler, 
    IPointerUpHandler
{
    public event Action<PointerEventData> OnPointerDownAction;
    public event Action<PointerEventData> OnPointerUpAction;
    public event Action<PointerEventData> OnPointerEnterAction;
    public event Action<PointerEventData> OnPointerExitAction;
    
    public bool _isInteractable = true;
    public bool _isDragging{get; private set;}
    
    public void OnPointerEnter(PointerEventData eventData)
    {
        if (!_isInteractable || _isDragging) return;
        
        OnPointerEnterAction?.Invoke(eventData);
    }
    
    public void OnPointerExit(PointerEventData eventData)
    {
        if (!_isInteractable || _isDragging) return;
        
        OnPointerExitAction?.Invoke(eventData);
    }
    
    public void OnPointerDown(PointerEventData eventData)
    {
        if (!_isInteractable) return;
        
        _isDragging = true;
        OnPointerDownAction?.Invoke(eventData);
    }
    
    public void OnPointerUp(PointerEventData eventData)
    {
        if (!_isInteractable) return;
        
        _isDragging = false;
        OnPointerUpAction?.Invoke(eventData);
    }
    
  
}