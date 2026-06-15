using System;
using GameFramework;
using System.Collections.Generic;


/// <summary>
/// 可序列化的事件节点数据
/// </summary>
[Serializable]
public class SerializableEventNode
{
    public string sendName;
    public int priority;
}

/// <summary>
/// 可序列化的单个事件数据
/// </summary>
[Serializable]
public class SerializableEventData
{
    public string eventTypeName;           // 事件类型名称
    public string eventTypeAssemblyQualifiedName; // 类型全名，用于反序列化恢复 Type
    public List<SerializableEventNode> listeners = new List<SerializableEventNode>();
}

/// <summary>
/// 可序列化的完整事件系统快照
/// </summary>
[Serializable]
public class SerializableEventSnapshot
{
    public List<SerializableEventData> syncEvents = new List<SerializableEventData>();
    public List<SerializableEventData> asyncEvents = new List<SerializableEventData>();
}

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

