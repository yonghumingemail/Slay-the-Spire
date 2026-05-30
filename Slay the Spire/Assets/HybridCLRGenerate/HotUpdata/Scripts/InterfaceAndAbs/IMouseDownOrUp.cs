using System;
using UnityEngine.EventSystems;

public interface IMouseDownOrUp
{
    bool IsEnableDownOrUp { get; set; }
    Action<PointerEventData> OnMouseDownDelegate { get; set; }
    Action<PointerEventData> OnMouseUpDelegate { get; set; }
}