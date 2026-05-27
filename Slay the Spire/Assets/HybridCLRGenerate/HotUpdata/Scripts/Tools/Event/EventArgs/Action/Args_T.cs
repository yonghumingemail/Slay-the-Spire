public class Args_T : GameEventArgs
{
    public object value;

    public override void Clear()
    {
        value = null;
    }
    
    /// <summary>
    /// 检查args的值是否是T类型,不是就返回空
    /// </summary>
    public static T Check<T>(GameEventArgs args) where T : class
    {
        if (args is not Args_T argsType) return null;
        return argsType.value as T;
    }
}