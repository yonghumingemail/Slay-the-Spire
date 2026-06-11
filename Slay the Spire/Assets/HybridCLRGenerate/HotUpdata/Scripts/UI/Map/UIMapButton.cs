using System;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;
using UnityGameFramework.Runtime;


public class UIMapButton : MonoBehaviour
{
    private Button _button;
    private UIComponent _uiComponent;
    private void Awake()
    {
        _button = transform.GetComponent<Button>();
        _uiComponent = GameEntry.GetManagerComponent<UIComponent>();
        _button.onClick.AddListener(() => { _uiComponent.OpenUIForm(MapView.ID.ID); });
    }

    private void OnDestroy()
    {
        
    }
}