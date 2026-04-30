using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using GameFramework;
using UnityEngine;

public abstract class GameEventArgs : BaseEventArgs, IReference
{
    public abstract void Clear();
}


public class BaseDamageCalculation_EventArgs<T> : GameEventArgs where T : BaseDamageCalculation_EventArgs<T>, new()
{
    public override int Id => id;
    public static readonly int id = typeof(BaseDamageCalculation_EventArgs<T>).GetHashCode();

    public int damage;

    public static int Fire(int damageValue, object sender, IPriorityEventManage<BaseEventArgs> eventManage)
    {
        if (eventManage != null)
        {
            var args = ReferencePool.Acquire<T>();
            args.damage = damageValue;
            eventManage.Fire(sender, args);
            var returnValue = args.damage;
            ReferencePool.Release(args);
            return returnValue;
        }

        Debug.Log($"sender:{sender}调用Fire函数的事件参数为空");
        return 0;
    }

    public override void Clear()
    {
        damage = 0;
    }
}

public class DamageCalculation_Attack_EventArgs : BaseDamageCalculation_EventArgs<DamageCalculation_Attack_EventArgs>
{
}

public class DamageCalculation_BeAttacked_EventArgs : BaseDamageCalculation_EventArgs<DamageCalculation_BeAttacked_EventArgs>
{
}


public class ChangeValueEvent_EventArgs<T> : GameEventArgs where T : ChangeValueEvent_EventArgs<T>, new()
{
    public override int Id => id;
    public static readonly int id = typeof(T).GetHashCode();

    public ChangeValueInfo ChangeValueInfo;

    public static void Fire(ChangeValueInfo info, object sender, IPriorityEventManage<BaseEventArgs> eventManage)
    {
        if (eventManage == null)
        {
            Debug.Log($"sender:{sender}调用Fire函数的事件参数为空");
            return;
        }

        var args = ReferencePool.Acquire<T>();
        args.ChangeValueInfo = info;

        eventManage.Fire(sender, args);
        ReferencePool.Release(args);
    }

    public override void Clear()
    {
        ChangeValueInfo = null;
    }
}

public class OnAttack_EventArgs : ChangeValueEvent_EventArgs<OnAttack_EventArgs>
{
}

public class OnBeAttacked_EventArgs : ChangeValueEvent_EventArgs<OnBeAttacked_EventArgs>
{
}

public class OnRound_EventArgs<T> : GameEventArgs where T : OnRound_EventArgs<T>, new()
{
    public override int Id => id;
    public static readonly int id = typeof(T).GetHashCode();

    public int args_int;
    public List<UniTask> value;

    public static List<UniTask> Fire(int args_int, object sender, IPriorityEventManage<BaseEventArgs> eventManage)
    {
        if (eventManage == null)
        {
            Debug.Log($"sender:{sender}调用Fire函数的事件参数为空");
            return null;
        }

        var args = ReferencePool.Acquire<T>();
        args.args_int = args_int;
        eventManage.Fire(sender, args);
        var returnValue = args.value;
        ReferencePool.Release(args);
        return returnValue;
    }

    public override void Clear()
    {
        args_int = 0;
        value = null;
    }
}

public class OnRoundStart_EventArgs : OnRound_EventArgs<OnRoundStart_EventArgs>
{
}

public class OnRoundEnd_EventArgs : OnRound_EventArgs<OnRoundEnd_EventArgs>
{
}