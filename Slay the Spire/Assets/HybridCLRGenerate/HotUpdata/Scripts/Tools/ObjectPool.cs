using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;

#nullable disable


/// <summary>
/// <para>基于堆栈的对象池实现</para>
/// <para>用于管理对象的复用，减少频繁创建和销毁的开销</para>
/// </summary>
public class ObjectPool<T> : IDisposable where T : class
{
  // 内部对象存储列表（实际使用堆栈逻辑：后进先出）
  internal readonly List<T> m_List;
  
  // 创建新对象的委托，当对象池为空时调用
  private readonly Func<T> m_CreateFunc;
  
  // 从对象池获取对象时执行的操作（如重置状态）
  private readonly Action<T> m_ActionOnGet;
  
  // 将对象返回到对象池时执行的操作（如清理状态）
  private readonly Action<T> m_ActionOnRelease;
  
  // 销毁对象时执行的操作（当对象池已满时）
  private readonly Action<T> m_ActionOnDestroy;
  
  // 对象池的最大容量限制
  private readonly int m_MaxSize;
  
  // 是否启用集合检查（防止重复释放同一对象）
  internal bool m_CollectionCheck;
  
  // 最近释放的对象引用，优化频繁存取场景
  private T m_FreshlyReleased;

  // 对象池创建的所有对象总数（包括活跃和非活跃对象）
  public int CountAll { get; private set; }

  // 当前活跃对象数量（正在被使用的对象）
  public int CountActive => this.CountAll - this.CountInactive;

  // 当前非活跃对象数量（池中可用的对象）
  public int CountInactive => this.m_List.Count + ((object)this.m_FreshlyReleased != null ? 1 : 0);

  /// <summary>
  /// 对象池构造函数
  /// </summary>
  /// <param name="createFunc">创建新对象的函数（必需）</param>
  /// <param name="actionOnGet">获取对象时的回调（可选）</param>
  /// <param name="actionOnRelease">释放对象时的回调（可选）</param>
  /// <param name="actionOnDestroy">销毁对象时的回调（可选）</param>
  /// <param name="collectionCheck">是否启用集合检查（防止重复释放）</param>
  /// <param name="defaultCapacity">对象池默认容量</param>
  /// <param name="maxSize">对象池最大容量</param>
  public ObjectPool(
    Func<T> createFunc,
    Action<T> actionOnGet = null,
    Action<T> actionOnRelease = null,
    Action<T> actionOnDestroy = null,
    bool collectionCheck = true,
    int defaultCapacity = 10,
    int maxSize = 10000)
  {
    // 参数验证：创建函数不能为空
    if (createFunc == null)
      throw new ArgumentNullException(nameof(createFunc));
    
    // 参数验证：最大容量必须大于0
    if (maxSize <= 0)
      throw new ArgumentException("Max Size must be greater than 0", nameof(maxSize));
    
    // 初始化内部存储列表
    this.m_List = new List<T>(defaultCapacity);
    
    // 设置各回调函数和参数
    this.m_CreateFunc = createFunc;
    this.m_MaxSize = maxSize;
    this.m_ActionOnGet = actionOnGet;
    this.m_ActionOnRelease = actionOnRelease;
    this.m_ActionOnDestroy = actionOnDestroy;
    this.m_CollectionCheck = collectionCheck;
  }

  /// <summary>
  /// 从对象池获取一个对象
  /// 使用内联优化提升性能
  /// </summary>
  /// <returns>可用的对象实例</returns>
  [MethodImpl(MethodImplOptions.AggressiveInlining)]
  public T Get()
  {
    T obj;
    
    // 优先检查最近释放的对象（优化频繁存取场景）
    if ((object)this.m_FreshlyReleased != null)
    {
      obj = this.m_FreshlyReleased;
      this.m_FreshlyReleased = default(T);
    }
    // 如果池中无可用对象，创建新对象
    else if (this.m_List.Count == 0)
    {
      obj = this.m_CreateFunc();
      ++this.CountAll; // 更新总对象计数
    }
    // 从池中获取最后一个对象（后进先出）
    else
    {
      int index = this.m_List.Count - 1;
      obj = this.m_List[index];
      this.m_List.RemoveAt(index);
    }
    
    // 执行获取对象的回调函数（如初始化对象状态）
    Action<T> actionOnGet = this.m_ActionOnGet;
    if (actionOnGet != null)
      actionOnGet(obj);
      
    return obj;
  }

  
  /// <summary>
  /// 将对象释放回对象池
  /// 使用内联优化提升性能
  /// </summary>
  /// <param name="element">要释放的对象</param>
  [MethodImpl(MethodImplOptions.AggressiveInlining)]
  public void Release(T element)
  {
    // 集合检查：防止重复释放同一对象
    if (this.m_CollectionCheck && (this.m_List.Count > 0 || (object)this.m_FreshlyReleased != null))
    {
      // 检查是否尝试释放最近刚释放的对象
      if ((object)element == (object)this.m_FreshlyReleased)
        throw new InvalidOperationException("Trying to release an object that has already been released to the pool.");
      
      // 检查对象是否已在池中
      for (int index = 0; index < this.m_List.Count; ++index)
      {
        if ((object)element == (object)this.m_List[index])
          throw new InvalidOperationException("Trying to release an object that has already been released to the pool.");
      }
    }
    
    // 执行释放对象的回调函数（如重置对象状态）
    Action<T> actionOnRelease = this.m_ActionOnRelease;
    if (actionOnRelease != null)
      actionOnRelease(element);
    
    // 对象存储策略：
    // 1. 优先使用m_FreshlyReleased缓存最近释放的对象
    if ((object)this.m_FreshlyReleased == null)
    {
      this.m_FreshlyReleased = element;
    }
    // 2. 如果池未达最大容量，添加到池中
    else if (this.CountInactive < this.m_MaxSize)
    {
      this.m_List.Add(element);
    }
    // 3. 池已满，销毁对象
    else
    {
      --this.CountAll; // 减少总对象计数
      Action<T> actionOnDestroy = this.m_ActionOnDestroy;
      if (actionOnDestroy != null)
        actionOnDestroy(element); // 执行销毁回调
    }
  }

  /// <summary>
  /// 清空对象池，销毁所有对象
  /// </summary>
  public void Clear()
  {
    // 如果有销毁回调，对所有池中对象执行销毁操作
    if (this.m_ActionOnDestroy != null)
    {
      // 销毁列表中的所有对象
      foreach (T obj in this.m_List)
        this.m_ActionOnDestroy(obj);
      
      // 销毁最近释放的对象
      if ((object)this.m_FreshlyReleased != null)
        this.m_ActionOnDestroy(this.m_FreshlyReleased);
    }
    
    // 重置状态
    this.m_FreshlyReleased = default(T);
    this.m_List.Clear();
    this.CountAll = 0;
  }

  /// <summary>
  /// 释放对象池资源（调用Clear方法）
  /// </summary>
  public void Dispose() => this.Clear();

  /// <summary>
  /// 内部方法：检查对象是否在池中
  /// </summary>
  /// <param name="element">要检查的对象</param>
  /// <returns>对象是否在池中</returns>
  internal bool HasElement(T element)
  {
    return (object)this.m_FreshlyReleased == (object)element || this.m_List.Contains(element);
  }
}