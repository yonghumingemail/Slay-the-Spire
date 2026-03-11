using System;
using UnityEngine.EventSystems;


public interface IMouseEnterORExit
{
    Action<PointerEventData> OnMouseEnter { get; set; }
    Action<PointerEventData> OnMouseExit { get; set; }
}