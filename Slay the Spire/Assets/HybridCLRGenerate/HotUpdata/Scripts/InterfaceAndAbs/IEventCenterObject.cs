using UnityEngine;
using Z_Tools;

public interface IEventCenterObject<T> where T : GameEventArgs
{
    IEventManage<T>  EventManage { get; }
}

