using GameFramework;
using UnityEngine;

namespace HybridCLRGenerate.HotUpdata.Scripts.Tools.Event.EventArgs
{
    public class Action_Int : GameEventArgs
    {
        public override int Id { get; }

        public int value_Int;

        public static int Fire(int value, int eventId, object sender, IPriorityEventManage<BaseEventArgs> eventManage)
        {
            if (eventManage != null)
            {
                var args = ReferencePool.Acquire<Action_Int>();
                args.value_Int = value;
                eventManage.Fire(sender, eventId, args);
                var returnValue = args.value_Int;
                ReferencePool.Release(args);
                return returnValue;
            }

            Debug.Log($"sender:{sender}调用Fire函数的事件参数为空");
            return value;
        }

        public override void Clear()
        {
            value_Int = 0;
        }
    }
    public class DamageCalculation_Attack_EventArgs : Action_Int
    {
        public override int Id => id;
        public static int id = typeof(DamageCalculation_Attack_EventArgs).GetHashCode();
    }

    public class DamageCalculation_BeAttacked_EventArgs : Action_Int
    {
        public override int Id => id;
        public static int id = typeof(DamageCalculation_BeAttacked_EventArgs).GetHashCode();
    }
}


