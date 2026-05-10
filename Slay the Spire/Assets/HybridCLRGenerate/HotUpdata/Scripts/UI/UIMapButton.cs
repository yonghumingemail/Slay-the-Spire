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

    private async UniTaskVoid Initialize()
    {
        var prefab = await AddressablesMgr.Instance.LoadAssetAsync<GameObject>("Assets/Art/Prefab/UI/Map.prefab");
        mapObj = Instantiate(prefab,transform);
        mapObj.SetActive(false);
        mapObj.GetComponent<UIFormLogic>().OnInit(_button);
        UIManager.Instance.AddUIInterface(0, mapObj);
        
    }
}