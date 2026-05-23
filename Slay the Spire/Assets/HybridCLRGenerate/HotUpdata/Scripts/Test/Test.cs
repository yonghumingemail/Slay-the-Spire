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
    public int _radius;

    public Dictionary<Type, List<object>> dict = new();

    private void Start()
    {
        // for (int i = 0; i < 6; i++)
        // {
        //     Vector2 pos = GetPointOnCircle(Vector2.zero, _radius,i*60);
        //     transform.GetChild(i).transform.localPosition = new Vector3(pos.x, pos.y, 0);
        // }
    }

    public Vector2 GetPointOnCircle( Vector2 center, float radius, float angleDegrees)
    {
        float angleRad = angleDegrees * Mathf.Deg2Rad;
        float x = center.x + radius * Mathf.Cos(angleRad);
        float y = center.y + radius * Mathf.Sin(angleRad);
        return new Vector2(x, y);
    }
    public void AddInterfaceObject<T>(T obj) where T : class
    {
        if (dict.TryGetValue(typeof(T), out var list))
        {
            list.Add(obj);
        }
        else
        {
            dict.Add(typeof(T), new List<object>() { obj });
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