using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.Pool;
using Z_Tools;

/// <summary>
/// UI 管理器：按深度层级管理 UI 界面。
/// 每个深度对应一个 UIGroup 节点，同一深度的 UI 对象作为该节点的子物体。
/// </summary>
public class UIManager : SingletonBaseMono<UIManager>
{
    // 存放所有深度层级对应的 UIGroup
    private readonly Dictionary<int, GameObject> uiGroup = new();

    private readonly Dictionary<GameObject, UIFormLogic> _uiFormLogics = new();

    // 用于排序的深度列表（缓存，避免每次排序时重复分配内存）
    private readonly List<int> sortedDepths = new();

    // 用于实例化新 UIGroup 的预制体
    private GameObject uiGroupPrefab;

    // 标记预制体是否加载完成、已存在的子 UIGroup 是否已扫描完毕
    private bool isInitialized;


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
        uiGroupPrefab =
            await AddressablesMgr.Instance.LoadAssetAsync<GameObject>("Assets/Art/Prefab/UI/UIGroup.prefab");

        // 遍历所有已有子节点，将它们作为预设的 UIGroup 注册到字典中
        for (int i = 0; i < transform.childCount; i++)
        {
            // 计算深度：例如第一个子节点索引0 → 深度 -999
            int deep = i - 999;
            GameObject child = transform.GetChild(i).gameObject;
            child.name = $"UIGroup_Depth_{deep}";
            uiGroup.Add(deep, child);
        }

        isInitialized = true;
    }


    /// <summary>
    /// 向指定深度添加一个 UI 对象。
    /// 如果该深度已有 UIGroup，则将 obj 设置为它的子物体；
    /// 否则实例化一个新的 UIGroup，并将 obj 挂载到其下，之后重新排序所有层级。
    /// </summary>
    public GameObject AddUIInterface(int deep, GameObject objPrefab, object data=null)
    {
        GameObject obj;
        UIFormLogic uiFormLogic;

        // 如果该深度已经有对应的 UIGroup 节点
        if (uiGroup.TryGetValue(deep, out var group))
        {
            obj = Instantiate(objPrefab, group.transform);
            uiFormLogic = obj.GetComponent<UIFormLogic>();
            _uiFormLogics.TryAdd(obj, uiFormLogic);
        }
        else
        {
            var newGroup = Instantiate(uiGroupPrefab,transform);
            newGroup.name = $"UIGroup_Depth_{deep}";

            obj = Instantiate(objPrefab, newGroup.transform);
            uiFormLogic = obj.GetComponent<UIFormLogic>();

            uiGroup.Add(deep, newGroup);
            _uiFormLogics.TryAdd(obj, uiFormLogic);

            Sort();
        }

        uiFormLogic.OnInit(data);
        return obj;
    }

    public void SetUIActive(bool isActive, GameObject obj, object data = null)
    {
        if (_uiFormLogics.TryGetValue(obj, out var uiFormLogic))
        {
            if (isActive)
            {
                uiFormLogic.OnOpen(data);
            }
            else
            {
                uiFormLogic.OnClose(data);
            }
            uiFormLogic.Visible = isActive;
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
    public void RemoveUIInterface(int deep, GameObject obj)
    {
        if (!uiGroup.TryGetValue(deep, out var group)) return;

        // 仅当 obj 确实挂在该 Group 下时才移除父级关系
        if (obj != null && obj.transform.parent == group.transform)
        {
            obj.transform.SetParent(null);
        }

        // 如果该 Group 下已经没有子物体，则销毁该 Group 并从字典中移除
        if (group.transform.childCount == 0)
        {
            Destroy(group);
            uiGroup.Remove(deep);
            // 层级数量变化，需要重新排序
            Sort();
        }
    }

    /// <summary>
    /// 根据深度值对所有 UIGroup 节点进行排序（兄弟索引越小，渲染越靠后，通常越在底层）。
    /// 深度值小的会被排在前面（索引小）。
    /// </summary>
    private void Sort()
    {
        // 重用缓存列表，避免 GC 分配
        sortedDepths.Clear();
        sortedDepths.AddRange(uiGroup.Keys);
        sortedDepths.Sort();

        // 按排序后的顺序依次设置所有 Group 的兄弟索引
        for (int i = 0; i < sortedDepths.Count; i++)
        {
            uiGroup[sortedDepths[i]].transform.SetSiblingIndex(i);
        }
    }

    /// <summary>
    /// 销毁时释放通过 Addressables 加载的预制体资源。
    /// </summary>
    private void OnDestroy()
    {
    }
}