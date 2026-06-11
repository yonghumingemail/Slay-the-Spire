using System.Collections.Generic;
using GameFramework;
using UnityEngine;

public class UIManage : GameFrameworkModule
{
    private readonly Dictionary<int, UIFormLogic> _uiFormLogics = new();
    private readonly Dictionary<string, UIGroup> _uiGroups = new();
    
    //存储已经打开的UI
    private readonly LinkedList<UIFormLogic> _uiFormLogicList = new();

    
    public void AddGroup(string groupName, UIGroup uiGroup)
    {
        _uiGroups.Add(groupName, uiGroup);
    }
    
    /// <summary>
    /// 创建一个新的 UI 实例并注册。
    /// </summary>
    public void CreateUIForm(string groupName, int id, GameObject objPrefab, object data = null)
    {
        if (!_uiGroups.TryGetValue(groupName, out var group)) return;

        var obj = Object.Instantiate(objPrefab, group.transform);
        var uiFormLogic = obj.GetComponent<UIFormLogic>();
        if (uiFormLogic == null)
        {
            Debug.LogError($"预制体 {objPrefab.name} 缺少 UIFormLogic 组件");
            Object.Destroy(obj);
            return;
        }

        uiFormLogic.OnInit(data);

        if (!_uiFormLogics.TryAdd(id, uiFormLogic))
        {
            Debug.LogWarning($"UIFormLogic ID {id} 已存在，将被覆盖");
            _uiFormLogics[id] = uiFormLogic;
        }
    }

    public void RegisterUIForm(string groupName, int id, UIFormLogic uiFormLogic, object data = null)
    {
        if (!_uiGroups.TryGetValue(groupName, out var group)) return;

        if (uiFormLogic == null)
        {
            Debug.LogError($"UIFormLogic 组件为空");
            return;
        }

        uiFormLogic.transform.SetParent(group.transform);
        uiFormLogic.OnInit(data);

        if (_uiFormLogics.TryAdd(id, uiFormLogic)) return;
        Debug.LogWarning($"UIFormLogic ID {id} 已存在，将被覆盖");
        _uiFormLogics[id] = uiFormLogic;
    }

    /// <summary>
    /// 移除并销毁指定 ID 的 UI。
    /// </summary>
    public void RemoveUIForm(int id, object data = null)
    {
        if (!_uiFormLogics.Remove(id, out var uiFormLogic))
            return;

        if (uiFormLogic != null && uiFormLogic.gameObject != null)
            Object.Destroy(uiFormLogic.gameObject);
    }

    public void OpenUIForm(int id, object data = null)
    {
        if (!_uiFormLogics.TryGetValue(id, out var ui)) return;

        // 如果已经打开，先移除旧节点
        var node = _uiFormLogicList.Find(ui);
        if (node != null)
            _uiFormLogicList.Remove(node);

        // 添加到链表末尾
        _uiFormLogicList.AddLast(ui);
        ui.OnOpen(data);
    }

    public void CloseUIForm(int id, object data = null)
    {
        if (!_uiFormLogics.TryGetValue(id, out var ui)) return;

        // 从链表中移除
        var node = _uiFormLogicList.Find(ui);
        if (node != null)
            _uiFormLogicList.Remove(node);

        ui.OnClose(data);
    }
}