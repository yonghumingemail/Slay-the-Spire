using GameFramework;
using UnityEngine;
using UnityGameFramework.Runtime;

public class Args_T_EA<EventName> : Args_T where EventName : class
{
    public static void Fire<ArgsType>(ArgsType value, object sender,
        IEventManager eventManager)
    {
        if (eventManager == null)
        {
            Debug.Log($"sender:{sender}调用Fire函数的事件参数为空");
            return;
        }

        var args = ReferencePool.Acquire<Args_T>();
        args.value = value;
        eventManager.Fire<EventName>(sender, args);
        ReferencePool.Release(args);
    }
    public static void Fire<ArgsType>(ArgsType value, object sender)
    {
        var args = ReferencePool.Acquire<Args_T>();
        args.value = value;
        GameEntry.Event.Fire<EventName>(sender, args);
        ReferencePool.Release(args);

    }
}


public class OnMouseEnterEnemy_EA : Args_T_EA<OnMouseEnterEnemy_EA>
{
}

public class OnMouseExitEnemy_EA: Args_T_EA<OnMouseExitEnemy_EA>
{
}

public class OnAttack_EA: Args_T_EA<OnAttack_EA>
{
}

public class OnBeAttacked_EA: Args_T_EA<OnBeAttacked_EA>
{
}

public class OnGainShield_EA: Args_T_EA<OnGainShield_EA>
{
}

public class OnHealthArgsChangeEa: Args_T_EA<OnHealthArgsChangeEa>
{
}

public class OnEnterRoom_EN : Args_T_EA<OnEnterRoom_EN>
{
}

public class DamageCalculation_Attack_EN : Args_T_EA<DamageCalculation_Attack_EN>
{
}

public class DamageCalculation_BeAttacked_EN : Args_T_EA<DamageCalculation_BeAttacked_EN>
{
}