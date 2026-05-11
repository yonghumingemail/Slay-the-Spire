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
        Initialize().Forget();
    }

    private async UniTaskVoid Initialize()
    {
        mapObj = await AddressablesMgr.Instance.LoadAssetAsync<GameObject>("Assets/Art/Prefab/UI/Map.prefab");
        UIManager.Instance.AddUIInterface(0,mapObj,this);
        _button.onClick.AddListener(() =>
            {
            }
        );
    }
}