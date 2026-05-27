using System;
using UnityEngine.EventSystems;

public interface IMouseDownOrUp
{
    bool isEnableDownOrUp { get; set; }
    Action<PointerEventData> OnMouseDownDelegate { get; set; }
    Action<PointerEventData> OnMouseUpDelegate { get; set; }
}