using System;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;

public class UIMapButton : MonoBehaviour
{
    private GameObject mapObj;
    private Button _button;

    private void Awake()
    {
        _button = transform.GetComponent<Button>();
       
    }

    private void Start()
    {
        Initialize().Forget();
    }

    private async UniTaskVoid Initialize()
    {
        var mapObjPrefab = await AddressablesMgr.Instance.LoadAssetAsync<GameObject>("Assets/Art/Prefab/UI/Map.prefab");
        mapObj = UIManager.Instance.AddUIInterface(0, mapObjPrefab);
        _button.onClick.AddListener(() =>
            {
                  UIManager.Instance.SetUIActive(true,mapObj);
            }
        );
    }

    private void OnDestroy()
    {
        AddressablesMgr.Instance.Release("Assets/Art/Prefab/UI/Map.prefab");
    }
}