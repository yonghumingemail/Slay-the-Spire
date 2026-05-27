using System;
using UnityEngine.EventSystems;


public interface IMouseEnterORExit
{
    bool isEnableEnterORExit { get; set; }
    Action<PointerEventData> OnMouseEnterDelegate { get; set; }
    Action<PointerEventData> OnMouseExitDelegate { get; set; }
}