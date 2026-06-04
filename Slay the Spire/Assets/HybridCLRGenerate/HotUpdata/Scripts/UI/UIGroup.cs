using System;
using System.Collections.Generic;
using UnityEngine;

public class UIGroup : MonoBehaviour, IComparable<UIGroup>
{
   public Canvas Canvas{get; private set;}
   
   public void OnInit( )
   {
      Canvas=transform.GetComponent<Canvas>();
   }
   public int CompareTo(UIGroup other)
   {
      return !other ? 1 : Canvas.sortingOrder.CompareTo(other.Canvas.sortingOrder);
   }
}
