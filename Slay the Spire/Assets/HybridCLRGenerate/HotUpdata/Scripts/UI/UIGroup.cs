using System;
using System.Collections.Generic;
using UnityEngine;

public class UIGroup : MonoBehaviour, IComparable<UIGroup>
{
   public int _defaultDeep { get;private set; }
   public int deep;

   public void OnInit(int defaultDeep)
   {
      _defaultDeep = defaultDeep;
      deep=_defaultDeep;
   }
   public int CompareTo(UIGroup other)
   {
      return !other ? 1 : deep.CompareTo(other.deep);
   }
}
