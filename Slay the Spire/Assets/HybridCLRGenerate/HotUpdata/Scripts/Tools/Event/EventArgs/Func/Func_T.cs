using UnityEngine;

public class Func_T : GameEventArgs
{
    public override int Id { get; }
    public object value;

    public override void Clear()
    {
        value = null;
    }
}
