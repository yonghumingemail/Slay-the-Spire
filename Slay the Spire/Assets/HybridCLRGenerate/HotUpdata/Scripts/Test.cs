using System;
using System.Threading;
using Cysharp.Threading.Tasks;
using DG.Tweening;
using UnityEngine;


public class Test : MonoBehaviour
{
    private void Start()
    {
        Test11(this.GetCancellationTokenOnDestroy()).Forget();
    }

    private void Update()
    {
    }

    public async UniTask Test11(CancellationToken token)
    {
        await Test22(token);
        print("完毕");
    }

    public async UniTask Test22(CancellationToken token)
    {
        while (!token.IsCancellationRequested)
        {
            print("执行");
            await UniTask.Yield(token);
        }

        print("循环终止");
    }
}