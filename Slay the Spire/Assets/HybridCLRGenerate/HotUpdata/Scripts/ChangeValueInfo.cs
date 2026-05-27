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
    public ChangeValueInfo(GameObject sender, GameObject receiver, int value)
    {
        this.sender = sender;
        this.receiver = receiver;
        this.value = value;
    }
    
    public void Init(GameObject sender, GameObject receiver, int value)
    {
        this.sender = sender;
        this.receiver = receiver;
        this.value = value;
    }

  

    public void Clear()
    {
        sender = null;
        receiver = null;
        value = 0;
    }
}