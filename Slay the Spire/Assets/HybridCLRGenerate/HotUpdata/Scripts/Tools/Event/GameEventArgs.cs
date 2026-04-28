using GameFramework;

public abstract class GameEventArgs : BaseEventArgs,IReference
{
    public abstract void Clear();
}