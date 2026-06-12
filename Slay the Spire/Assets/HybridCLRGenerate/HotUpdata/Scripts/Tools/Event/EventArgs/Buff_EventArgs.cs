using GameFramework;
using UnityEngine;
public class Buff_EventArgs : GameEventArgs
{
    public BuffObj value;
    public int stack;

    public static void Fire<EventName>(BuffObj value, int stack, object sender,
        IPriorityEventManager<GameEventArgs> eventManager)
    {
        if (eventManager == null)
        {
            Debug.Log($"sender:{sender}调用Fire函数的事件参数为空");
            return;
        }

        var args = ReferencePool.Acquire<Buff_EventArgs>();
        args.value = value;
        args.stack = stack;
        eventManager.Fire<EventName>(sender, args);
        ReferencePool.Release(args);
    }

    public override void Clear()
    {
    }
}

public class OnGainBuff_EventArgs 
{
}