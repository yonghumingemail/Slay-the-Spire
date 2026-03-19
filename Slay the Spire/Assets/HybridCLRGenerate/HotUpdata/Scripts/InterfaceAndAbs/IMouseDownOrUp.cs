using System;
using UnityEngine.EventSystems;

public interface IMouseDownOrUp
{
    Action<PointerEventData> OnMouseDownDelegate { get; set; }
    Action<PointerEventData> OnMouseUpDelegate { get; set; }
}