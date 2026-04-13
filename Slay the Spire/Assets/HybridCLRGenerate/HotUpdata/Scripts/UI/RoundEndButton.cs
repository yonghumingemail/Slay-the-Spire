using System;
using Cysharp.Threading.Tasks;
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
        _combatManage = EventCenter_Singleton.Instance.GetEvent<Func<CombatManage>>("CombatManage").Invoke();
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
        var eventList = EventCenter_Singleton.Instance._priorityQueueEventCenter.GetEvent("OnRoundEnd");
        foreach (var VARIABLE in eventList)
        {
            if (VARIABLE._delegate is Func<int,UniTask> func)
            {
                await func.Invoke(_combatManage.RoundCount);
            }
            else
            {
                // 处理类型不匹配的情况
                Debug.LogWarning($"委托类型不匹配: {VARIABLE._delegate?.GetType()}");
            }
        }
        _text.SetText("结束回合");
        _combatManage.OnRoundStart().Forget();
    }
}