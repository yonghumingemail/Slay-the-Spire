using GameFramework;
using UnityEngine;

public class GetObject_GEA<T> : Func_T where T : class
{
    public override int Id => id;
    public static readonly int id = typeof(GetObject_GEA<T>).GetHashCode();
    
    public static void Subscribe(T instance, IEventManage<BaseEventArgs> EventManage)
    {
        EventManage.Subscribe(id, (send, handler) =>
        {
            if (handler is Func_T args)
            {
                args.value = instance;
            }
        });
    }
    
    public static T Fire(object sender, IEventManage<BaseEventArgs> eventManage)
    {
        var args = ReferencePool.Acquire<Func_T>();
        eventManage.Fire(sender, id, args);
        var returnValue = args.value;
        ReferencePool.Release(args);
        if (returnValue is T value)
        {
            return value;
        }

        Debug.Log($"参数类型不一致，返回空值\n所需类型为：{typeof(T)},实际参数类型：{returnValue.GetType()}");
        return null;
    }
}