using UnityEngine;
using Z_Tools;

public interface IEventCenterObject<T> where T : GameEventArgs
{
    IEventManager<T>  EventManager { get; }
}

