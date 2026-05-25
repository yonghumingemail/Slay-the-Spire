using GameFramework;

public abstract class GameEventArgs : BaseEventArgs, IReference
{
    public abstract void Clear();
}

    public class Action_EA<T> :BaseEventArgs
    {
        public override int Id => id;
        public static int id => typeof(T).GetHashCode();
    }

    public class OnDestroy_EA :Action_EA<OnDestroy_EA> {}

    public class DamageValueChange_Attack_EA : Action_EA<DamageValueChange_Attack_EA>{}

    public class DamageValueChange_BeAttacked_EA : Action_EA<DamageValueChange_BeAttacked_EA>{}

    public class OnCardArrangementStart_EA : Action_EA<OnCardArrangementStart_EA>{}

    public class OnCardArrangementEnd_EA : Action_EA<OnCardArrangementEnd_EA>{}
