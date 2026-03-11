using System;
using UnityEngine.EventSystems;

public interface IMouseDownOrUp
{
    Action<PointerEventData> OnMouseDown { get; set; }
    Action<PointerEventData> OnMouseUp { get; set; }
}