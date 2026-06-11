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
        var inits = transform.GetComponentsInChildren<INeedToInitializeAsync>();
        var tasks = new List<UniTask>(inits.Length);
        foreach (var t in inits)
        {
            tasks.Add(t.Init());
        }
        await UniTask.WhenAll(tasks);
    }
}