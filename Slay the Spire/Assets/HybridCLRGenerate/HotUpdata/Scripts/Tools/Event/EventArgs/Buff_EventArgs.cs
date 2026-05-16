using GameFramework;
using UnityEngine;
public class Buff_EventArgs : GameEventArgs
{
    public override int Id { get; }
    public BuffObj value;
    public int stack;

    public static void Fire(BuffObj value, int stack, int id, object sender,
        IPriorityEventManage<BaseEventArgs> eventManage)
    {
        if (eventManage == null)
        {
            Debug.Log($"sender:{sender}调用Fire函数的事件参数为空");
            return;
        }

        var args = ReferencePool.Acquire<Buff_EventArgs>();
        args.value = value;
        args.stack = stack;
        eventManage.Fire(sender, id, args);
        ReferencePool.Release(args);
    }

    public override void Clear()
    {
    }
}

public class OnGainBuff_EventArgs : Buff_EventArgs
{
    public override int Id => id;
    public static int id = typeof(OnGainBuff_EventArgs).GetHashCode();
}