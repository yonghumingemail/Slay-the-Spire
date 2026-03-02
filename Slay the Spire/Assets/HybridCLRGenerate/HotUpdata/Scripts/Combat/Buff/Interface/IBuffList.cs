using System.Collections.Generic;
using UnityEngine;

public interface IBuffList
{
    void AddBuff(BuffObj buffObj);
    void RemoveBuff(BuffObj buffObj);
    void UpdateView(BuffObj buffObj);

    IEnumerable<BuffObj> GetBuffList();
}