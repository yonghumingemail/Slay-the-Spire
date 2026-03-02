using System;
using UnityEngine;

/// <summary>
/// 事件中心接口
/// </summary>
/// <typeparam name="T">访问事件的参数类型，例：string、Enum</typeparam>
public interface IEventCenter<in T>
{
    bool AddEvent<D>(T eventName, D _delegate) where D : Delegate;
    /// <summary>
    /// 禁止存储返回的委托，否则容易造成内存泄漏
    /// </summary>
    /// <param name="name"></param>
    /// <typeparam name="D"></typeparam>
    /// <returns></returns>
    D GetEvent<D>(T name) where D : Delegate;
    bool RemoveEvent(T eventName);
    bool Clear();
    void Show();
}
public interface IEventCenter<in T,Value>
{
    bool AddEvent(T eventName, Value value);

    /// <summary>
    /// 禁止存储返回的委托，否则容易造成内存泄漏
    /// </summary>
    /// <param name="name"></param>
    /// <typeparam name="D"></typeparam>
    /// <returns></returns>
    Value GetEvent(T name);
    bool RemoveEvent(T eventName);
    bool Clear();
    void Show();
}
