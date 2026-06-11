using System;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;
using UnityGameFramework.Runtime;


public class UIMapButton : MonoBehaviour
{
    private Button _button;

    private void Awake()
    {
        _button = transform.GetComponent<Button>();

        _button.onClick.AddListener(() => { GameEntry.UI.OpenUIForm(MapView.ID.ID); });
    }

    private void OnDestroy()
    {
        
    }
}