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

    // 标记预制体是否加载完成、已存在的子 UIGroup 是否已扫描完毕
    public readonly UniTaskCompletionSource onComplete = new();

    protected override void Awake()
    {
        base.Awake();
        // 启动异步初始化，异常时打印日志，不阻塞主流程
        Initialize().Forget(Debug.LogException);
    }

    /// <summary>
    /// 异步初始化：加载 UIGroup 预制体，并扫描当前已存在的子节点作为已有层级。
    /// 假设已存在的子节点深度 = 其索引 - 999。
    /// </summary>
    private async UniTask Initialize()
    {
        // 从 Addressables 异步加载 UIGroup 预制体
        _uiGroupPrefab =
            await AddressablesMgr.Instance.LoadAssetAsync<GameObject>("Assets/Art/Prefab/UI/UIGroup.prefab");

        // 遍历所有已有子节点，将它们作为预设的 UIGroup 注册到字典中
        for (int i = 0; i < transform.childCount; i++)
        {
            // 计算深度：例如第一个子节点索引0 → 深度 -999
            int deep = i - 999;
            if (!transform.GetChild(i).TryGetComponent<UIGroup>(out var group)) continue;
            group.gameObject.name = $"UIGroup_Depth_{deep}";
            group.deep = deep;
            _uiGroups.Add(deep, group);
            _groupList.Add(group);
        }

        Sort();
        onComplete.TrySetResult();
    }

    /// <summary>
    /// 向指定深度添加一个 UI 对象。
    /// 如果该深度已有 UIGroup，则将 obj 设置为它的子物体；
    /// 否则实例化一个新的 UIGroup，并将 obj 挂载到其下，之后重新排序所有层级。
    /// </summary>
    public void AddUIInterface(int deep, int id, GameObject objPrefab, object data = null)
    {
        GameObject obj;
        UIFormLogic uiFormLogic;

        // 如果该深度已经有对应的 UIGroup 节点
        if (_uiGroups.TryGetValue(deep, out var group))
        {
            obj = Instantiate(objPrefab, group.transform);
        }
        else
        {
            group = Instantiate(_uiGroupPrefab, transform).GetComponent<UIGroup>();
            group.OnInit(deep, $"UIGroup_Depth_{deep}");

            _uiGroups.Add(deep, group);
            _groupList.Add(group);

            obj = Instantiate(objPrefab, group.transform);
        }

        uiFormLogic = obj.GetComponent<UIFormLogic>();
        _uiFormLogics.TryAdd(id, uiFormLogic);
        uiFormLogic.uiGroup = group;
        uiFormLogic.OnInit(data);
        Sort();
    }

    public void SetUIActive(bool isActive, int id, object data = null)
    {
        if (_uiFormLogics.TryGetValue(id, out var uiFormLogic))
        {
            if (isActive)
            {
                if (uiFormLogic.uiGroup.deep < _groupList[^1].deep)
                {
                    uiFormLogic.uiGroup.deep = _groupList[^1].deep + 1;
                    Sort();
                }

                uiFormLogic.OnOpen(data);
            }
            else
            {
                if (_groupList.Count > 1 && uiFormLogic.uiGroup._defaultDeep < _groupList[^1]._defaultDeep)
                {
                    uiFormLogic.uiGroup.deep = uiFormLogic.uiGroup._defaultDeep;
                    Sort();
                }

                uiFormLogic.OnClose(data);
            }
        }
        else
        {
            Debug.Log("No UI Form Logic Found");
        }
    }


    /// <summary>
    /// 从指定深度移除一个 UI 对象。
    /// 如果移除后该深度的 UIGroup 下再无子物体，则会销毁该 UIGroup 并重新排序。
    /// </summary>
    /// <param name="deep">对象所在的深度</param>
    /// <param name="obj">要移除的 UI 游戏对象</param>
    public void RemoveUIInterface(int deep, int obj)
    {
        if (!_uiGroups.TryGetValue(deep, out var group)) return;
        
        Destroy(_uiFormLogics[obj].gameObject);
        _uiFormLogics.Remove(obj);
        
        // 如果该 Group 下已经没有子物体，则销毁该 Group 并从字典中移除
        if (group.transform.childCount != 0) return;
        Destroy(group);
        _uiGroups.Remove(deep);
        _groupList.Remove(group);
        Sort();
    }

    /// <summary>
    /// 根据深度值对所有 UIGroup 节点进行排序（兄弟索引越小，渲染越靠后，通常越在底层）。
    /// 深度值小的会被排在前面（索引小）。
    /// </summary>
    private void Sort()
    {
        _groupList.Sort();
        for (int i = 0; i < _groupList.Count; i++)
        {
            _groupList[i].transform.SetSiblingIndex(i);
        }
    }

    /// <summary>
    /// 销毁时释放通过 Addressables 加载的预制体资源。
    /// </summary>
    private void OnDestroy()
    {
        AddressablesMgr.Instance.Release("Assets/Art/Prefab/UI/UIGroup.prefab");
    }
}