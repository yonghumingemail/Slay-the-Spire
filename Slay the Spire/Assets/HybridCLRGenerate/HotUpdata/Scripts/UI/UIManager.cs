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
    private readonly Dictionary<int, UIGroup> _uiGroups = new();
    private readonly List<UIGroup> _groupList = new(5);

    private GameObject _uiGroupPrefab;
    private UniTaskCompletionSource _onComplete = new();
    
    protected override void Awake()
    {
        base.Awake();
        Initialize().Forget(e => Debug.LogException(e));
    }

    /// <summary>
    /// 异步初始化：加载 UIGroup 预制体，并扫描当前已存在的子节点作为已有层级。
    /// </summary>
    private async UniTask Initialize()
    {
        try
        {
            // 从 Addressables 异步加载 UIGroup 预制体
            _uiGroupPrefab = await AddressablesMgr.Instance.LoadAssetAsync<GameObject>(
                "Assets/Art/Prefab/UI/UIGroup.prefab");

            // 遍历现有子节点，注册已存在的 UIGroup
            for (int i = 0; i < transform.childCount; i++)
            {
                if (transform.GetChild(i).TryGetComponent<UIGroup>(out var group))
                {
                    group.OnInit(group.deep, $"UIGroup_Depth_{group.deep}");
                    _uiGroups.Add(group.deep, group);
                    _groupList.Add(group);
                }
            }

            Sort();
            _onComplete.TrySetResult();
        }
        catch (Exception ex)
        {
            Debug.LogError($"UIManager 初始化失败: {ex}");
            _onComplete.TrySetException(ex);
            throw;
        }
    }


    /// <summary>
    /// 获取或创建指定深度的 UIGroup。
    /// </summary>
    private UIGroup GetOrCreateUIGroup(int deep)
    {
        
        if (_uiGroups.TryGetValue(deep, out var group))
            return group;

        // 实例化新的 UIGroup
        var groupObj = Instantiate(_uiGroupPrefab, transform);
        group = groupObj.GetComponent<UIGroup>();
        group.OnInit(deep, $"UIGroup_Depth_{deep}");

        _uiGroups.Add(deep, group);
        _groupList.Add(group);
        Sort();

        return group;
    }

    /// <summary>
    /// 创建一个新的 UI 实例并注册。
    /// </summary>
    public void CreateUIForm(int deep, int id, GameObject objPrefab, object data = null)
    {
        if (objPrefab == null)
        {
            Debug.LogError("CreateUIForm 失败: objPrefab 为空");
            return;
        }

        var group =  GetOrCreateUIGroup(deep);
        var obj = Instantiate(objPrefab, group.transform);
        var uiFormLogic = obj.GetComponent<UIFormLogic>();
        if (uiFormLogic == null)
        {
            Debug.LogError($"预制体 {objPrefab.name} 缺少 UIFormLogic 组件");
            Destroy(obj);
            return;
        }

        uiFormLogic.uiGroup = group;
        uiFormLogic.OnInit(data);

        if (!_uiFormLogics.TryAdd(id, uiFormLogic))
        {
            Debug.LogWarning($"UIFormLogic ID {id} 已存在，将被覆盖");
            _uiFormLogics[id] = uiFormLogic;
        }

        Sort();
    }

    /// <summary>
    /// 注册一个已存在的 GameObject 作为 UI 界面。
    /// </summary>
    public void RegisterUIForm(int deep, int id, GameObject obj, object data = null)
    {
        if (obj == null)
        {
            Debug.LogError("RegisterUIForm 失败: obj 为空");
            return;
        }

        var group =  GetOrCreateUIGroup(deep);
        var uiFormLogic = obj.GetComponent<UIFormLogic>();
        if (uiFormLogic == null)
        {
            Debug.LogError($"对象 {obj.name} 缺少 UIFormLogic 组件");
            return;
        }

        uiFormLogic.uiGroup = group;
        uiFormLogic.OnInit(data);

        if (!_uiFormLogics.TryAdd(id, uiFormLogic))
        {
            Debug.LogWarning($"UIFormLogic ID {id} 已存在，将被覆盖");
            _uiFormLogics[id] = uiFormLogic;
        }

        Sort();
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
        // 注意：UIGroup 可能变为空，但保留以便后续使用。如有需要可增加清理空组的逻辑
    }

    /// <summary>
    /// 打开指定 ID 的 UI（提升到最前显示）。
    /// </summary>
    public void OpenUIForm(int id, object data = null)
    {

        if (!_uiFormLogics.TryGetValue(id, out var uiFormLogic))
        {
            Debug.LogError($"OpenUIForm 失败: 未找到 ID {id} 的 UIFormLogic");
            return;
        }

        // 获取当前最大深度
        int maxDeep = _groupList.Count > 0 ? _groupList[^1].deep : 0;
        var group = uiFormLogic.uiGroup;

        // 如果当前组深度不是最大，则将其提升到最大+1
        if (group.deep < maxDeep)
        {
            group.deep = maxDeep + 1;
            Sort();
        }

        uiFormLogic.OnOpen(data);
    }

    /// <summary>
    /// 关闭指定 ID 的 UI（恢复其默认深度）。
    /// </summary>
    public void CloseUIForm(int id, object data = null)
    {

        if (!_uiFormLogics.TryGetValue(id, out var uiFormLogic))
        {
            Debug.LogError($"CloseUIForm 失败: 未找到 ID {id} 的 UIFormLogic");
            return;
        }

        var group = uiFormLogic.uiGroup;
        int defaultDeep = group._defaultDeep;

        // 获取当前次大深度（排除自身）
        // 注意：如果当前组是最大深度，则恢复后需要重新排序
        if (_groupList.Count >= 2 && group.deep > _groupList[^2].deep)
        {
            group.deep = defaultDeep;
            Sort();
        }

        uiFormLogic.OnClose(data);
    }

    /// <summary>
    /// 根据深度值对所有 UIGroup 进行排序，并设置 sibling index。
    /// </summary>
    private void Sort()
    {
        if (_groupList.Count == 0) return;

        _groupList.Sort();
        for (int i = 0; i < _groupList.Count; i++)
        {
            _groupList[i].transform.SetSiblingIndex(i);
        }
    }

    private void OnDestroy()
    {
        if (AddressablesMgr.Instance != null && _uiGroupPrefab != null)
            AddressablesMgr.Instance.Release("Assets/Art/Prefab/UI/UIGroup.prefab");
    }
}