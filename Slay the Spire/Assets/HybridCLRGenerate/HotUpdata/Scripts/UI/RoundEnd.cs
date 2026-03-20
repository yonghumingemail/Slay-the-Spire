using System;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;
using Z_Tools;

public class RoundEnd : MonoBehaviour
{
    private Button _button;

    private void Awake()
    {
        _button = transform.GetComponent<Button>();
        _button.onClick.AddListener(OnClick);
    }

    private void OnClick()
    {
        OnRoundEnd().Forget();
    }

    private async UniTaskVoid OnRoundEnd()
    {
        var eventList = EventCenter_Singleton.Instance._priorityQueueEventCenter.GetEvent("OnRoundEnd");
        foreach (var VARIABLE in eventList)
        {
            await (VARIABLE._delegate as Func<UniTask>).Invoke();
        }
    }

    void Start()
    {
    }


    void Update()
    {
    }
}