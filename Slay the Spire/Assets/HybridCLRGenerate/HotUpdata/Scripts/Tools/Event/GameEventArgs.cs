using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using GameFramework;
using UnityEngine;

public abstract class GameEventArgs : BaseEventArgs, IReference
{
    public abstract void Clear();
}

namespace HybridCLRGenerate.HotUpdata.Scripts.Tools.Event.EventArgs
{
    public class OnDestroy_EventArgs : BaseEventArgs
    {
        public override int Id => id;
        public static int id = typeof(OnDestroy_EventArgs).GetHashCode();
    }

    public class DamageValueChange_Attack_EventArgs : BaseEventArgs
    {
        public override int Id => id;
        public static int id = typeof(DamageValueChange_Attack_EventArgs).GetHashCode();
    }

    public class DamageValueChange_BeAttacked_EventArgs : BaseEventArgs
    {
        public override int Id => id;
        public static int id = typeof(DamageValueChange_BeAttacked_EventArgs).GetHashCode();
    }

    public class OnCardArrangementStart_EventArgs : BaseEventArgs
    {
        public override int Id => id;
        public static int id = typeof(OnCardArrangementStart_EventArgs).GetHashCode();
    }

    public class OnCardArrangementEnd_EventArgs : BaseEventArgs
    {
        public override int Id => id;
        public static int id = typeof(OnCardArrangementEnd_EventArgs).GetHashCode();
    }
}








