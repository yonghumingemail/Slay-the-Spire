using System;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using TMPro;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.U2D;
using UnityEngine.UI;

public class Test : MonoBehaviour
{
    public TMP_InputField inputField;
    public Button button;
    public Sprite sprite;

    public Dictionary<Type, List<object>> dict = new();

    private void Start()
    {
    }

    
    public void AddInterfaceObject<T>(T obj) where T : class
    {
        if (dict.TryGetValue(typeof(T), out var list))
        {
            list.Add(obj);
        }
        else
        {
            dict.Add(typeof(T),new List<object>(){obj});
        }
    }

    public T GetInterfaceObject<T>() where T : class
    {
        if (dict.TryGetValue(typeof(T), out var list))
        {
            return list[0] as T;
        }

        return null;
    }

    public List<object> GetInterfaceObjects<T>() where T : class
    {
        return dict.GetValueOrDefault(typeof(T));
    }

    public void RemoveInterfaceObject<T>(T obj) where T : class
    {
        if (dict.TryGetValue(typeof(T), out var list))
        {
            list.Remove(obj);
        }
        else
        {
            Debug.Log("字典中不存在该类型接口对象");
        }
    }
}