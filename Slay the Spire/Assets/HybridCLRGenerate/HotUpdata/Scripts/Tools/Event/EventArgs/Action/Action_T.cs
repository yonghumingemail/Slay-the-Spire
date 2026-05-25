public class Action_T : GameEventArgs
{
    public override int Id { get; }
    public object value;

    public override void Clear()
    {
        value = null;
    }
    
    /// <summary>
    /// 检查args的值是否是T类型,不是就返回空
    /// </summary>
    public static T Check<T>(BaseEventArgs args) where T : class
    {
        if (args is not Action_T argsType) return null;
        return argsType.value as T;
    }
}