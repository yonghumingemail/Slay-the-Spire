using UnityEngine;
using Z_Tools;

public interface IEventCenterObject<T> where T : BaseEventArgs
{
    IEventManage<T>  EventManage { get; }
}

