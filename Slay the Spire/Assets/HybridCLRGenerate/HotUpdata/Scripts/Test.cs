using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading;
using Cysharp.Threading.Tasks;
using DG.Tweening;
using UnityEngine;


public class Test : MonoBehaviour
{
    public List<Test> tests = new List<Test>();
    public Vector3 position;
    private void Start()
    {
        tests.Add(this);
    }

    private void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
          
        }
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