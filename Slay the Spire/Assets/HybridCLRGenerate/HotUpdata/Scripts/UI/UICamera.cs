using System;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using UnityEngine;

public class UICamera : MonoBehaviour
{
    private void Awake()
    {
        Initialize().Forget();
    }
    
    public async UniTask Initialize()
    {
        float time = Time.realtimeSinceStartup;
       // Debug.Log(Time.realtimeSinceStartup);
        var inits = transform.GetComponentsInChildren<INeedToInitialize>();
       // Debug.Log(Time.realtimeSinceStartup + $"找到{inits.Length}个，任务使用时间：{Time.realtimeSinceStartup - time}");
        var tasks = new List<UniTask>(inits.Length);
        foreach (var t in inits)
        {
            tasks.Add(t.Initialize());
        }
        await UniTask.WhenAll(tasks);
    }
}