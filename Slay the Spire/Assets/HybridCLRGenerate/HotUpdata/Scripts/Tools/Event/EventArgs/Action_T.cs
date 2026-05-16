using GameFramework;
using UnityEngine;

namespace HybridCLRGenerate.HotUpdata.Scripts.Tools.Event.EventArgs
{
    public class Action_T : GameEventArgs
    {
        public override int Id { get; }
        public object value;

        public static void Fire<T>(T value, int id, object sender,
            IPriorityEventManage<BaseEventArgs> eventManage) where T : class
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

        /// <summary>
        /// 检查args的值是否是T类型,不是就返回空
        /// </summary>
        public static T Check<T>(BaseEventArgs args) where T : class
        {
            if (args is not Action_T argsType) return null;
            return argsType.value as T;
        }

        public override void Clear()
        {
        }
    }

    
    public class OnMouseEnterEnemy_EventArgs : Action_T
    {
        public override int Id => id;
        public static int id = typeof(OnMouseEnterEnemy_EventArgs).GetHashCode();
    }

    public class OnMouseExitEnemy_EventArgs : Action_T
    {
        public override int Id => id;
        public static int id = typeof(OnMouseExitEnemy_EventArgs).GetHashCode();
    }

    public class OnUnSelectCard_EventArgs : Action_T
    {
        public override int Id => id;
        public static int id = typeof(OnUnSelectCard_EventArgs).GetHashCode();
    }

    public class OnSelectCard_EventArgs : Action_T
    {
        public override int Id => id;
        public static int id = typeof(OnSelectCard_EventArgs).GetHashCode();
    }
    
    public class OnAttack_EventArgs : Action_T
    {
        public override int Id => id;
        public static int id = typeof(OnAttack_EventArgs).GetHashCode();
    }

    public class OnBeAttacked_EventArgs : Action_T
    {
        public override int Id => id;
        public static int id = typeof(OnBeAttacked_EventArgs).GetHashCode();
    }

    public class OnGainShield_EventArgs : Action_T
    {
        public override int Id => id;
        public static int id = typeof(OnGainShield_EventArgs).GetHashCode();
    }

    public class OnHealthActionChangeEventArgs : Action_T
    {
        public override int Id => id;
        public static int id = typeof(OnHealthActionChangeEventArgs).GetHashCode();
    }
}