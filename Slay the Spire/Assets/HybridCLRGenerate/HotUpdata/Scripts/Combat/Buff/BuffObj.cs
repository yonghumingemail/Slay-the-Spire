using System;
using UnityEngine;

[Serializable]
public class BuffObj
{
    public GameObject _carrier; //承载者
    public BuffTag_E[] tags; //标签
    public int priority; //优先级
    public int stack; //当前层数
    public int maxStack; //最大层数
    public string name;
    protected BuffName_E _name;
    protected BuffObj( int stack, int maxStack, GameObject carrier)
    {
        this.stack = stack;
        this.maxStack = maxStack;
        this._carrier = carrier;
    }
    
    
    public virtual void OnAddBuff(PriorityQueueEventCenter eventCent){}
    public virtual void OnRemoveBuff(PriorityQueueEventCenter eventCent){}
   
}



