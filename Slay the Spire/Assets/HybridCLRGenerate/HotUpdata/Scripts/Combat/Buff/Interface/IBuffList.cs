using System.Collections.Generic;
using UnityEngine;

public interface IBuffList
{
    // 优先级事件中心，用于处理Buff相关事件（如添加、移除、特殊事件触发）并按优先级排序
    PriorityQueueEventCenter _priorityEventCenter { get; }
    void AddBuff(BuffObj buffObj);
    void RemoveBuff(BuffObj buffObj);
    void UpdateView(BuffObj buffObj);

    IEnumerable<BuffObj> GetBuffList();
}