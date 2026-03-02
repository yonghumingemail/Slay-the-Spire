using System;


public interface IMouseEnterORExit
{
    Action OnMouseEnter { get; set; }
    Action OnMouseExit { get; set; }
}