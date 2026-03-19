using System;
using UnityEngine.EventSystems;


public interface IMouseEnterORExit
{
    Action<PointerEventData> OnMouseEnterDelegate { get; set; }
    Action<PointerEventData> OnMouseExitDelegate { get; set; }
}