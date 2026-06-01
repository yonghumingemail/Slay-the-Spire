using Cysharp.Threading.Tasks;
using GameFramework;
using UnityEngine;

namespace HybridCLRGenerate.HotUpdata.Scripts.Tools.Event.EventArgs
{
    public class Action_Int_Async : GameEventArgs
    {

        public int args_int;

        public static async UniTask Fire<EventName>(int args_int, object sender,
            IPriorityEventManageAsync<GameEventArgs> eventManage)
        {
            if (eventManage == null)
            {
                Debug.Log($"sender:{sender}调用Fire函数的事件参数为空");
                return;
            }

            var args = ReferencePool.Acquire<Action_Int_Async>();
            args.args_int = args_int;
            await eventManage.FireAsync<EventName>(sender, args);
            ReferencePool.Release(args);
        }

        public override void Clear()
        {
            args_int = 0;
        }
    }
    public class OnRoundStart_EN 
    {
    }

    public class OnRoundEnd_EN
    {
    }


}

