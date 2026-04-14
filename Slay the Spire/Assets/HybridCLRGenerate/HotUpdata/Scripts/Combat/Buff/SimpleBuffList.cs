using System;
using System.Collections.Generic;
using UnityEngine;

// 可序列化属性，允许此类实例被序列化存储
[Serializable]
public class SimpleBuffList : IBuffList
{
    // 优先级事件中心，用于处理Buff相关事件（如添加、移除）并按优先级排序
    public PriorityQueueEventCenter _priorityEventCenter { get; private set; }

    // Buff列表的视图接口，用于更新Buff的显示
    private IBuffList_V _buffListV;

    // 存储所有BuffObj对象的列表
    [SerializeField] private List<BuffObj> _buffListObj;

    public SimpleBuffList(IBuffList_V buffListV, PriorityQueueEventCenter priorityEventCenter)
    {
        // 设置事件中心
        _priorityEventCenter = priorityEventCenter;
        // 设置视图接口
        _buffListV = buffListV;
        // 初始化Buff对象列表
        _buffListObj = new List<BuffObj>();

        priorityEventCenter.AddEvent<Action>("OnDestroy", OnDestroy, 0);
    }


    // 添加Buff对象
    public void AddBuff(BuffObj buffObj)
    {
        // 将Buff对象添加到内部列表
        _buffListObj.Add(buffObj);
        // 通知视图更新，显示新添加的Buff
        _buffListV.AddBuff(buffObj);
        // 触发Buff对象的添加事件，传入事件中心
        buffObj.OnAddBuff(_priorityEventCenter, UpdateView);
    }

    // 移除Buff对象
    public void RemoveBuff(BuffObj buffObj)
    {
        // 从内部列表中移除指定的Buff对象
        _buffListObj.Remove(buffObj);
        // 通知视图更新，移除对应Buff的显示
        _buffListV.RemoveBuff(buffObj);
        // 触发Buff对象的移除事件，传入事件中心
        buffObj.OnRemoveBuff(_priorityEventCenter);
    }

    // 更新指定Buff对象的视图显示
    public void UpdateView(BuffObj buffObj)
    {
        //buff层数为0时移除buff
        if (buffObj.stack < 1)
        {
            RemoveBuff(buffObj);
        }

        // 通知视图接口更新指定Buff的显示
        _buffListV.UpdateBuffView(buffObj);
    }

    // 获取所有Buff对象的枚举集合
    public IEnumerable<BuffObj> GetBuffList()
    {
        // 返回内部Buff对象列表
        return _buffListObj;
    }

    private void OnDestroy()
    {
        foreach (var VARIABLE in _buffListObj)
        {
            VARIABLE.OnRemoveBuff(_priorityEventCenter);
        }

        _buffListObj.Clear();
        _buffListV = null;

        Debug.Log(this + "OnDestroy执行");
    }
}