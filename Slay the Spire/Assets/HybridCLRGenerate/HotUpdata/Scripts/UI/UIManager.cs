using System;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using UnityEngine;
using Z_Tools;

/// <summary>
/// UI 管理器：按深度层级管理 UI 界面。
/// 每个深度对应一个 UIGroup 节点，同一深度的 UI 对象作为该节点的子物体。
/// </summary>
public class UIManager : SingletonBaseMono<UIManager>
{
    private readonly Dictionary<int, UIFormLogic> _uiFormLogics = new();

    //改
    private readonly Dictionary<int, UIGroup> _uiGroups = new();

    [SerializeField] private List<UIGroup> _groupList = new(5);

    //存储已经打开的UI
    private readonly LinkedList<UIFormLogic> _uiFormLogicList = new();

    private GameObject _uiGroupPrefab;

    protected override void Awake()
    {
        base.Awake();
    
    }

    public async UniTask Initialize(IEnumerable<string> resourceLabels)
    {
        for (int i = 0; i < transform.childCount; i++)
        { 
            Destroy(transform.GetChild(i));
        }

    }
    
    /// <summary>
    /// 创建一个新的 UI 实例并注册。
    /// </summary>
    public void CreateUIForm(int deep, int id, GameObject objPrefab, object data = null)
    {
        if (!_uiGroups.TryGetValue(deep, out var group)) return;

        var obj = Instantiate(objPrefab, group.transform);
        var uiFormLogic = obj.GetComponent<UIFormLogic>();
        if (uiFormLogic == null)
        {
            Debug.LogError($"预制体 {objPrefab.name} 缺少 UIFormLogic 组件");
            Destroy(obj);
            return;
        }

        uiFormLogic.OnInit(data);

        if (!_uiFormLogics.TryAdd(id, uiFormLogic))
        {
            Debug.LogWarning($"UIFormLogic ID {id} 已存在，将被覆盖");
            _uiFormLogics[id] = uiFormLogic;
        }
    }

    public void RegisterUIForm(int deep, int id, UIFormLogic uiFormLogic, object data = null)
    {
        if (!_uiGroups.TryGetValue(deep, out var group)) return;

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
            Destroy(uiFormLogic.gameObject);
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


    private void OnDestroy()
    {
        if (AddressablesMgr.Instance != null && _uiGroupPrefab != null)
            AddressablesMgr.Instance.Release("Assets/Art/Prefab/UI/UIGroup.prefab");
    }
}