using UnityEngine;
using Z_Tools;

public interface IEventCenterObject<in T>
{
    IEventCenter<T>  eventCenter { get; }
}

