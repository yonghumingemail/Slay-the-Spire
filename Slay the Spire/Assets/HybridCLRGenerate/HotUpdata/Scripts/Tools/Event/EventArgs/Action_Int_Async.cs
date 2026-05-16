using Cysharp.Threading.Tasks;
using GameFramework;
using UnityEngine;

namespace HybridCLRGenerate.HotUpdata.Scripts.Tools.Event.EventArgs
{
    public class Action_Int_Async : GameEventArgs
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

            var args = ReferencePool.Acquire<Action_Int_Async>();
            args.args_int = args_int;
            await eventManage.FireAsync(sender, id, args);
            ReferencePool.Release(args);
        }

        public override void Clear()
        {
            args_int = 0;
        }
    }
    public class OnRoundStart_EventArgs : Action_Int_Async
    {
        public override int Id => id;
        public static int id = typeof(OnRoundStart_EventArgs).GetHashCode();
    }

    public class OnRoundEnd_EventArgs : Action_Int_Async
    {
        public override int Id => id;
        public static int id = typeof(OnRoundEnd_EventArgs).GetHashCode();
    }


}

