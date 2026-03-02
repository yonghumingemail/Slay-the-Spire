using UnityEngine;

public interface IEventCenterObject<in T>
{
    IEventCenter<T>  eventCenter { get; }
}
