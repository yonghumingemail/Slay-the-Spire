using GameFramework;
using UnityEngine;

public class Args_T_EA<EventName> : Args_T where EventName : class
{
    public static void Fire<ArgsType>(ArgsType value, object sender,
        IPriorityEventManage<GameEventArgs> eventManage)
    {
        if (eventManage == null)
        {
            Debug.Log($"sender:{sender}调用Fire函数的事件参数为空");
            return;
        }

        var args = ReferencePool.Acquire<Args_T>();
        args.value = value;
        eventManage.Fire<EventName>(sender, args);
        ReferencePool.Release(args);
    }
}


public class OnMouseEnterEnemy_EA 
{
}

public class OnMouseExitEnemy_EA 
{
}

public class OnUnSelectCard_EA 
{
}

public class OnSelectCard_EA 
{
}

public class OnAttack_EA 
{
}

public class OnBeAttacked_EA
{
}

public class OnGainShield_EA 
{
}

public class OnHealthArgsChangeEa 
{
}