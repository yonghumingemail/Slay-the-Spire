using System;
using System.Collections.Generic;
using UnityEngine;

public class UIGroup : MonoBehaviour, IComparable<UIGroup>
{
   public int _defaultDeep { get;private set; }
   public int deep;

   public void OnInit(int defaultDeep,string name_)
   {
      _defaultDeep = defaultDeep;
      deep=_defaultDeep;
      gameObject.name = name_;
   }
   public int CompareTo(UIGroup other)
   {
      if (other == null) return 1;
      return this.deep.CompareTo(other.deep);
   }
}
