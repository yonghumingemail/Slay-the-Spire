using System;
using UnityEngine.EventSystems;

public interface IDragUI 
{
    Action onBeginDrag { get; set; }
    Action onDrag { get; set; }
    Action onEndDrag { get; set; }
}
