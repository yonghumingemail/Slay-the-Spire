using UnityEngine;

/// <summary>
/// 应用对象池写
/// </summary>
public class ChangeValueInfo
{
    public GameObject sender;
    
    public GameObject receiver;
    
    public int value;
    private ChangeValueInfo(){}
    public ChangeValueInfo(GameObject sender, GameObject receiver, int value)
    {
        this.sender = sender;
        this.receiver = receiver;
        this.value = value;
    }
}
