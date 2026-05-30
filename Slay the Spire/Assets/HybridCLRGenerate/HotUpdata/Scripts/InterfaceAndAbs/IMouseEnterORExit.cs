using System;
using UnityEngine.EventSystems;


public interface IMouseEnterORExit
{
    bool IsEnableEnterORExit { get; set; }
    Action<PointerEventData> OnMouseEnterDelegate { get; set; }
    Action<PointerEventData> OnMouseExitDelegate { get; set; }
}