using System;

/// <summary>
/// 异步事件节点，存储优先级和对应的异步处理委托。
/// 实现 IComparable 用于列表中的优先级降序排列。
/// </summary>
public class PriorityEventAsync : IPriorityEventNode<GameEventHandlerAsync<GameEventArgs>>,
    IComparable<PriorityEventAsync>
{
    public int Priority { get; set; }
    public GameEventHandlerAsync<GameEventArgs> Handler { get; set; }

    /// <summary>降序比较：优先级高的排在前面</summary>
    public int CompareTo(PriorityEventAsync other) => other.Priority.CompareTo(this.Priority);
}