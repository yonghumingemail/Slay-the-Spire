using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using GameFramework;
using UnityEngine;

public abstract class GameEventArgs : BaseEventArgs, IReference
{
    public abstract void Clear();
}


public class BaseDamageCalculation_EventArgs : GameEventArgs
{
    public override int Id { get; }

    public int damage;

    public static int Fire(int damageValue, int id, object sender, IPriorityEventManage<BaseEventArgs> eventManage)
    {
        if (eventManage != null)
        {
            var args = ReferencePool.Acquire<BaseDamageCalculation_EventArgs>();
            args.damage = damageValue;
            eventManage.Fire(sender, id, args);
            var returnValue = args.damage;
            ReferencePool.Release(args);
            return returnValue;
        }

        Debug.Log($"sender:{sender}调用Fire函数的事件参数为空");
        return damageValue;
    }

    public override void Clear()
    {
        damage = 0;
    }
}

public class DamageCalculation_Attack_EventArgs : BaseDamageCalculation_EventArgs
{
    public override int Id => id;
    public static int id = typeof(DamageCalculation_Attack_EventArgs).GetHashCode();
}

public class DamageCalculation_BeAttacked_EventArgs : BaseDamageCalculation_EventArgs
{
    public override int Id => id;
    public static int id = typeof(DamageCalculation_BeAttacked_EventArgs).GetHashCode();
}


public class ChangeValueEvent_EventArgs : GameEventArgs
{
    public override int Id { get; }
    public ChangeValueInfo value;

    public static void Fire(ChangeValueInfo value, int id, object sender,
        IPriorityEventManage<BaseEventArgs> eventManage)
    {
        if (eventManage == null)
        {
            Debug.Log($"sender:{sender}调用Fire函数的事件参数为空");
            return;
        }

        var args = ReferencePool.Acquire<ChangeValueEvent_EventArgs>();
        args.value = value;

        eventManage.Fire(sender, id, args);
        ReferencePool.Release(args);
    }

    public override void Clear()
    {
        value = null;
    }
}

public class OnAttack_EventArgs : ChangeValueEvent_EventArgs
{
    public override int Id => id;
    public static int id = typeof(OnAttack_EventArgs).GetHashCode();
}

public class OnBeAttacked_EventArgs : ChangeValueEvent_EventArgs
{
    public override int Id => id;
    public static int id = typeof(OnBeAttacked_EventArgs).GetHashCode();
}

public class OnGainShield_EventArgs : ChangeValueEvent_EventArgs
{
    public override int Id => id;
    public static int id = typeof(OnGainShield_EventArgs).GetHashCode();
}

public class OnHealthChange_EventArgs : ChangeValueEvent_EventArgs
{
    public override int Id => id;
    public static int id = typeof(OnHealthChange_EventArgs).GetHashCode();
}


public class OnRound_EventArgs : GameEventArgs
{
    public override int Id { get; }

    public int args_int;
    
    public static async UniTask Fire(int args_int, int id, object sender,
        IPriorityEventManageAsync<BaseEventArgs> eventManage)
    {
        if (eventManage == null)
        {
            Debug.Log($"sender:{sender}调用Fire函数的事件参数为空");
            return;
        }

        var args = ReferencePool.Acquire<OnRound_EventArgs>();
        args.args_int = args_int;
        await eventManage.FireAsync(sender, id, args);
        ReferencePool.Release(args);
    }

    public override void Clear()
    {
        args_int = 0;
    }
}

public class OnRoundStart_EventArgs : OnRound_EventArgs
{
    public override int Id => id;
    public static int id = typeof(OnRoundStart_EventArgs).GetHashCode();
}

public class OnRoundEnd_EventArgs : OnRound_EventArgs
{
    public override int Id => id;
    public static int id = typeof(OnRoundEnd_EventArgs).GetHashCode();
}

public class Action_EventArgs : GameEventArgs
{
    public override int Id { get; }

    public static void Fire(int id, object sender,
        IPriorityEventManage<BaseEventArgs> eventManage)
    {
        if (eventManage == null)
        {
            Debug.Log($"sender:{sender}调用Fire函数的事件参数为空");
            return;
        }

        var args = ReferencePool.Acquire<Action_EventArgs>();
        eventManage.Fire(sender, id, args);
        ReferencePool.Release(args);
    }

    public override void Clear()
    {
    }
}

public class OnDestroy_EventArgs : Action_EventArgs
{
    public override int Id => id;
    public static int id = typeof(OnDestroy_EventArgs).GetHashCode();
}

public class DamageValueChange_Attack_EventArgs : Action_EventArgs
{
    public override int Id => id;
    public static int id = typeof(DamageValueChange_Attack_EventArgs).GetHashCode();
}

public class DamageValueChange_BeAttacked_EventArgs : Action_EventArgs
{
    public override int Id => id;
    public static int id = typeof(DamageValueChange_BeAttacked_EventArgs).GetHashCode();
}

public class OnCardArrangementStart_EventArgs : Action_EventArgs
{
    public override int Id => id;
    public static int id = typeof(OnCardArrangementStart_EventArgs).GetHashCode();
}

public class OnCardArrangementEnd_EventArgs : Action_EventArgs
{
    public override int Id => id;
    public static int id = typeof(OnCardArrangementEnd_EventArgs).GetHashCode();
}


public class Enemy_EventArgs : GameEventArgs
{
    public override int Id { get; }
    public Enemy value;

    public static void Fire(Enemy value, int id, object sender,
        IPriorityEventManage<BaseEventArgs> eventManage)
    {
        if (eventManage == null)
        {
            Debug.Log($"sender:{sender}调用Fire函数的事件参数为空");
            return;
        }

        var args = ReferencePool.Acquire<Enemy_EventArgs>();
        args.value = value;
        eventManage.Fire(sender, id, args);
        ReferencePool.Release(args);
    }

    public override void Clear()
    {
    }
}

public class OnMouseEnterEnemy_EventArgs : Enemy_EventArgs
{
    public override int Id => id;
    public static int id = typeof(OnMouseEnterEnemy_EventArgs).GetHashCode();
}

public class OnMouseExitEnemy_EventArgs : Enemy_EventArgs
{
    public override int Id => id;
    public static int id = typeof(OnMouseExitEnemy_EventArgs).GetHashCode();
}

public class Card_EventArgs : GameEventArgs
{
    public override int Id { get; }
    public Card value;

    public static void Fire(Card value, int id, object sender,
        IPriorityEventManage<BaseEventArgs> eventManage)
    {
        if (eventManage == null)
        {
            Debug.Log($"sender:{sender}调用Fire函数的事件参数为空");
            return;
        }

        var args = ReferencePool.Acquire<Card_EventArgs>();
        args.value = value;
        eventManage.Fire(sender, id, args);
        ReferencePool.Release(args);
    }

    public override void Clear()
    {
    }
}

public class OnUnSelectCard_EventArgs : Card_EventArgs
{
    public override int Id => id;
    public static int id = typeof(OnUnSelectCard_EventArgs).GetHashCode();
}

public class OnSelectCard_EventArgs : Card_EventArgs
{
    public override int Id => id;
    public static int id = typeof(OnSelectCard_EventArgs).GetHashCode();
}


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
        eventManage.Fire(sender, id, args);
        ReferencePool.Release(args);
    }

    public override void Clear()
    {
    }
}

public class OnGainBuff_EventArgs : Card_EventArgs
{
    public override int Id => id;
    public static int id = typeof(OnGainBuff_EventArgs).GetHashCode();
}