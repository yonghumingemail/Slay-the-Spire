using System;
/// <summary>
/// 事件节点通用接口，提供优先级和委托访问能力。
/// </summary>
/// <typeparam name="THandler">委托类型</typeparam>
public interface IPriorityEventNode<THandler> where THandler : Delegate
{
    /// <summary>优先级，数值越大越先执行</summary>
    int Priority { get; set; }

    /// <summary>事件处理委托</summary>
    THandler Handler { get; set; }
}
