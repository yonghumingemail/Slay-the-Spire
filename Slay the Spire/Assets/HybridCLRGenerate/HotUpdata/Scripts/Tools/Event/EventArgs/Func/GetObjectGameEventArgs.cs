using GameFramework;
using UnityEngine;

public class GetObject_GEA<ObjType> : Func_T where ObjType : class
{
    public override int Id => id;
    public static readonly int id = typeof(ObjType).GetHashCode();
    
    public static void Subscribe(ObjType instance, IEventManage<BaseEventArgs> EventManage)
    {
        EventManage.Subscribe(id, (send, handler) =>
        {
            if (handler is Func_T args)
            {
                args.value = instance;
            }
        });
    }
    
    public static ObjType Fire(object sender, IEventManage<BaseEventArgs> eventManage)
    {
        var args = ReferencePool.Acquire<Func_T>();
        eventManage.Fire(sender, id, args);
        var returnValue = args.value;
        ReferencePool.Release(args);
        if (returnValue is ObjType value)
        {
            return value;
        }

        Debug.Log($"参数类型不一致，返回空值\n所需类型为：{typeof(ObjType)},实际参数类型：{returnValue.GetType()}");
        return null;
    }
}