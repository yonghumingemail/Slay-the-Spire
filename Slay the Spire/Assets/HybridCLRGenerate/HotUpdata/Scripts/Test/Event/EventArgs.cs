using GameFramework;
using UnityEngine;

public abstract class EventArgs:IReference
{
    public abstract int Id { get; }
    public abstract void Clear();
}
