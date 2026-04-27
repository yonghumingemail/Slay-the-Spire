using UnityEngine;
using Z_Tools;

public interface IEventCenterObject<T> where T : EventArgs
{
    IEventManage<T>  EventManage { get; }
}

