using GameFramework;
using UnityEngine;
using Z_Tools;

public class GetObject_EventArgs<T> : GameEventArgs
{
    public override int Id => id;
    public static readonly int id = typeof(GetObject_EventArgs<T>).GetHashCode();

    public T value;

    public static void Subscribe(BaseEventArgs baseEventHandler, T value_)
    {
        if (baseEventHandler is GetObject_EventArgs<T> args)
        {
            args.value = value_;
        }
    }
    public static T Fire(object sender,IEventManage<BaseEventArgs> eventManage)
    {
        var args = ReferencePool.Acquire<GetObject_EventArgs<T>>();
        eventManage.Fire(sender, args);
        var returnValue = args.value;
        ReferencePool.Release(args);
        return returnValue;
    }
    public override void Clear()
    {
        value = default;
    }
}