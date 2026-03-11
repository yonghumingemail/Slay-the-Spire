using System;
using CardEvent_Ironclad;
using Cysharp.Threading.Tasks;
using DG.Tweening;
using UnityEngine;


public class Test : MonoBehaviour
{
    private async void Start()
    {
        print(Time.time);
        await Test22();
        print(Time.time);
    }

    public UniTask Test22()
    {
        var completionSource = new UniTaskCompletionSource();

        MoveToScreenCenter(() => { completionSource.TrySetResult(); });

        return completionSource.Task;
    }

    public void MoveToScreenCenter(Action callback)
    {
        Vector3 screenCenter =
            Camera.main.ScreenToWorldPoint(new Vector3(Screen.width * 0.5f, Screen.height * 0.5f, 0f));
        screenCenter.z = transform.position.z;

        DOTween.To(() => transform.position, value => { transform.position = value; }, screenCenter, 1)
            .onComplete += () => { callback?.Invoke(); };
    }
}