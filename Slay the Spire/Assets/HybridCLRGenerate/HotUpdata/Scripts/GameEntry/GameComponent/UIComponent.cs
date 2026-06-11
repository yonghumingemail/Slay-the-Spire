using UnityEngine;
using UnityGameFramework.Runtime;
using Z_Tools;

public class UIComponent : MonoBehaviour, IGameModuleComponent
{
    private UIManage _uiManage;

    public void Init()
    {
        GameEntry.RegisterManagerComponent(this);
        _uiManage = GameFrameworkEntry.GetModule<UIManage>();
        foreach (var uiGroup in transform.GetComponentsInChildren<UIGroup>())
        {
            uiGroup.OnInit();
            _uiManage.AddGroup(uiGroup.name.Replace("UIGroup_", ""), uiGroup);
        }
    }

    // public async UniTask Initialize(IEnumerable<string> resourceLabels)
    // {
    //     for (int i = 0; i < transform.childCount; i++)
    //     {
    //         Destroy(transform.GetChild(i));
    //     }
    // }

    /// <summary>
    /// 创建一个新的 UI 实例并注册。
    /// </summary>
    public void CreateUIForm(string groupName, int id, GameObject objPrefab, object data = null)
    {
        _uiManage.CreateUIForm(groupName, id, objPrefab, data);
    }

    public void RegisterUIForm(string groupName, int id, UIFormLogic uiFormLogic, object data = null)
    {
        _uiManage.RegisterUIForm(groupName, id, uiFormLogic, data);
    }

    /// <summary>
    /// 移除并销毁指定 ID 的 UI。
    /// </summary>
    public void RemoveUIForm(int id, object data = null)
    {
        _uiManage.RemoveUIForm(id, data);
    }

    public void OpenUIForm(int id, object data = null)
    {
        _uiManage.OpenUIForm(id, data);
    }

    public void CloseUIForm(int id, object data = null)
    {
        _uiManage.CloseUIForm(id, data);
    }
}