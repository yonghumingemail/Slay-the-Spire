using System;
using Cysharp.Threading.Tasks;
using HybridCLRGenerate.HotUpdata.Scripts.Tools.Event.EventArgs;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using Z_Tools;

public class RoundEndButton : MonoBehaviour
{
    private Button _button;
    private TextMeshProUGUI  _text;
    private CombatManage _combatManage;

    private void Awake()
    {
        _button = transform.GetComponent<Button>();
        _text = transform.GetComponentInChildren<TextMeshProUGUI>();
        _button.onClick.AddListener(OnClick);
    }

    private void Start()
    {
        _combatManage = GetObject_EventArgs<CombatManage>.Fire(this,EventCenter_Singleton.Instance);
    }

    private void OnClick()
    {
        OnRoundEnd().Forget();
    }

    private async UniTaskVoid OnRoundEnd()
    {
        if (_combatManage.isExecute)
        {
            return;
        }
        _text.SetText("敌方回合");
        _button.interactable = false;
       await Action_Int_Async.Fire(_combatManage.RoundCount, OnRoundEnd_EventArgs.id, this,
            EventCenter_Singleton.Instance._priorityQueueEventCenter);
       
        _text.SetText("结束回合");
        _button.interactable = true;
        _combatManage.OnRoundStart().Forget();
    }
}