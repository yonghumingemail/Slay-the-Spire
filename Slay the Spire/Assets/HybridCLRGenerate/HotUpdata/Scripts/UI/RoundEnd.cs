using System;
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
        var eventList = EventCenter_Singleton.Instance._priorityQueueEventCenter.GetEvent("OnRoundEnd");
        foreach (var VARIABLE in eventList)
        {
            (VARIABLE._delegate as Action)?.Invoke();
        }
    }

    void Start()
    {
    }


    void Update()
    {
    }
}