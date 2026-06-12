using System;
using GameFramework;

/// <summary>
/// 事件节点通用接口，提供优先级和委托访问能力。
/// </summary>
/// <typeparam name="THandler">委托类型</typeparam>
public class PriorityEventNode<THandler> : IReference, IComparable<PriorityEventNode<THandler>> where THandler : Delegate
{
    /// <summary>优先级，数值越大越先执行</summary>
    public int Priority { get; set; }

    /// <summary>事件处理委托</summary>
    public THandler Handler { get; set; }

    /// <summary>委托所属对象名 /// </summary>
    public string sendName { get; set; }

    public void Clear()
    {
        Priority = 0;
        Handler = null;
        sendName = null;
    }
    public int CompareTo(PriorityEventNode<THandler> other) => other.Priority.CompareTo(this.Priority);
}