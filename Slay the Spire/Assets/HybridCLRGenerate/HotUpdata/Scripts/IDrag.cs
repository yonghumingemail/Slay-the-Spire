using System;
using UnityEngine;

public interface IDrag 
{
   bool IsDragging { get; }
   public Action<Transform> OnBeginDragEvent { get; set; }
   public Action<Transform> OnDraggingEvent{ get; set; }
   public Action<Transform> OnEndDragEvent{ get; set; }
   void SetDragEnabled(bool _enabled);
   void ClearEvent();
}
