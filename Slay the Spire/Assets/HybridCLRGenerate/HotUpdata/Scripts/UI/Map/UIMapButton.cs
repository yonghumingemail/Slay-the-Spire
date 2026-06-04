using System;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;


public class UIMapButton : MonoBehaviour
{
    private Button _button;

    private void Awake()
    {
        _button = transform.GetComponent<Button>();
        _button.onClick.AddListener(() => { UIManager.Instance.OpenUIForm(MapView.ID.ID); });
    }

    private void OnDestroy()
    {
        AddressablesMgr.Instance.Release("Assets/Art/Prefab/UI/Map.prefab");
    }
}