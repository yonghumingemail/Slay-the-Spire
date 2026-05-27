using GameFramework;
using UnityEngine;

public class GetObject_GEA<ObjType> : Args_T where ObjType : class
{
    
    public static void Subscribe(ObjType instance, IEventManage<GameEventArgs> EventManage)
    {
        EventManage.Subscribe<GetObject_GEA<ObjType>>((send, handler) =>
        {
            if (handler is Args_T args)
            {
                args.value = instance;
            }
        });
    }
    
    public static ObjType Fire(object sender, IEventManage<GameEventArgs> eventManage)
    {
        var args = ReferencePool.Acquire<Args_T>();
        eventManage.Fire<GetObject_GEA<ObjType>>(sender, args);
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