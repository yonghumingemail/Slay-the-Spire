using System;
using System.Threading;
using CardEvent_Ironclad;
using Cysharp.Threading.Tasks;
using DG.Tweening;
using UnityEngine;


public class Test : MonoBehaviour
{
    public float time;
    private async void Start()
    {
        await Test22(this.GetCancellationTokenOnDestroy()).SuppressCancellationThrow();
        
    }

    private void Update()
    {
    }

    public async UniTask Test22( CancellationToken token)
    {

        while (time<10f)
        {
            time+=Time.deltaTime;
            await UniTask.Yield(token);
        }
        print("执行完毕");
    }
}