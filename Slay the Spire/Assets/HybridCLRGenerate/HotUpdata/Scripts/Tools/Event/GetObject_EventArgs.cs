using UnityEngine;

public class GetObject_EventArgs<T> : EventArgs
{
    public override int Id => id;
    public static int id = typeof(T).GetHashCode();

    public T value;

    public static void Get(EventArgs eventHandler, T value_)
    {
        if (eventHandler is GetObject_EventArgs<T> args)
        {
            args.value = value_;
        }
    }

    public override void Clear()
    {
        value = default;
    }
}