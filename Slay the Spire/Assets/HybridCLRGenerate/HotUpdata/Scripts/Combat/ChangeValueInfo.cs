using GameFramework;
using UnityEngine;

public class ChangeValueInfo : IReference
{
    public GameObject sender;

    public GameObject receiver;

    public int value;

    public ChangeValueInfo()
    {
    }

    public static ChangeValueInfo GetInstance(GameObject sender, GameObject receiver, int value)
    {
        var instance = ReferencePool.Acquire<ChangeValueInfo>();
        instance.sender = sender;
        instance.receiver = receiver;
        instance.value = value;
        return instance;
    }


    public void Clear()
    {
        sender = null;
        receiver = null;
        value = 0;
    }
}