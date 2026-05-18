using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using TMPro;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.UI;

public class Test : MonoBehaviour
{

    public TMP_InputField inputField;
    public Button button;
    private List<object> results = new List<object>();
    private void Start()
    {
        Debug.Log("Test script started");
        button.onClick.AddListener(()=>{TestAsync().Forget();});
    }

    private async UniTask TestAsync()
    {
        Debug.Log($"开始加载：{inputField.text}");
        results.Add(await Addressables.LoadAssetAsync<object>(inputField.text));
        Debug.Log($"加载完成：{inputField.text},资源类型:{results[^1].GetType()}");
    }
}