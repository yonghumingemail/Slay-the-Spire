using System;
using System.Collections.Generic;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;

[Serializable]
public abstract class Test23
{
    public int counter;
    public string name;
    public abstract void Test();
}

public class Test : MonoBehaviour
{
   public List<Test23> tests = new List<Test23>();
    public Vector3 position;

    private void Start()
    {
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