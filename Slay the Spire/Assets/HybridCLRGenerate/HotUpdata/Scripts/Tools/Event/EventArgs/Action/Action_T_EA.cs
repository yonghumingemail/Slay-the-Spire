using GameFramework;
using UnityEngine;

public class Action_T_EA<ClassName> : Action_T where ClassName : class
{
    public override int Id => id;
    public static int id = typeof(ClassName).GetHashCode();

    public static void Fire<T>(T value, object sender,
        IPriorityEventManage<BaseEventArgs> eventManage)
    {
        if (eventManage == null)
        {
            Debug.Log($"sender:{sender}调用Fire函数的事件参数为空");
            return;
        }

        var args = ReferencePool.Acquire<Action_T>();
        args.value = value;
        eventManage.Fire(sender, id, args);
        ReferencePool.Release(args);
    }

    
}


public class OnMouseEnterEnemy_EA : Action_T_EA<OnMouseEnterEnemy_EA>
{
}

public class OnMouseExitEnemy_EA : Action_T_EA<OnMouseExitEnemy_EA>
{
}

public class OnUnSelectCard_EA : Action_T_EA<OnUnSelectCard_EA>
{
}

public class OnSelectCard_EA : Action_T_EA<OnSelectCard_EA>
{
}

public class OnAttack_EA : Action_T_EA<OnAttack_EA>
{
}

public class OnBeAttacked_EA : Action_T_EA<OnBeAttacked_EA>
{
}

public class OnGainShield_EA : Action_T_EA<OnGainShield_EA>
{
}

public class OnHealthActionChange_EA : Action_T_EA<OnHealthActionChange_EA>
{
}