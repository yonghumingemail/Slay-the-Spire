using GameFramework;
using UnityEngine;
using UnityGameFramework.Runtime;

public class GetObject_EventArgs<ObjType> : Args_T where ObjType : class
{
    
    public static void Subscribe(ObjType instance, IEventManager eventManager)
    {
        eventManager.Subscribe<GetObject_EventArgs<ObjType>>((send, handler) =>
        {
            if (handler is Args_T args)
            {
                args.value = instance;
            }
        });
    }
    
    public static ObjType Fire(object sender, IEventManager eventManager)
    {
        var args = ReferencePool.Acquire<Args_T>();
        eventManager.Fire<GetObject_EventArgs<ObjType>>(sender, args);
        var returnValue = args.value;
        ReferencePool.Release(args);
        if (returnValue is ObjType value)
        {
            return value;
        }

        Debug.Log($"参数类型不一致，返回空值\n所需类型为：{typeof(ObjType)},实际参数类型：{returnValue.GetType()}");
        return null;
    }
    public static ObjType Fire(object sender)
    {
        var args = ReferencePool.Acquire<Args_T>();
        GameEntry.Event.Fire<GetObject_EventArgs<ObjType>>(sender, args);
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