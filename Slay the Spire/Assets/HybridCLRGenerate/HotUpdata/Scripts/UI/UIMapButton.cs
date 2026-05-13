using System;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;

public class UIMapButton : MonoBehaviour
{
    private GameObject viewObj;
    private Button _button;

    private void Awake()
    {
        _button = transform.GetComponent<Button>();
        Initialize().Forget();
    }

    private void Start()
    {
       
    }

    private async UniTaskVoid Initialize()
    {
        var mapObjPrefab = await AddressablesMgr.Instance.LoadAssetAsync<GameObject>("Assets/Art/Prefab/UI/Map.prefab");
        await UIManager.Instance.onComplete.Task;
        viewObj = UIManager.Instance.AddUIInterface(0, mapObjPrefab);
        _button.onClick.AddListener(() =>
            {
                  UIManager.Instance.SetUIActive(true,viewObj);
            }
        );
    }

    private void OnDestroy()
    {
        AddressablesMgr.Instance.Release("Assets/Art/Prefab/UI/Map.prefab");
    }
}