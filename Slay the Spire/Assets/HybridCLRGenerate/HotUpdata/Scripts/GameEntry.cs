using System;
using System.Collections.Generic;
using UnityEngine;



namespace UnityGameFramework.Runtime
{
    public class GameEntry : MonoBehaviour
    {
        private static Dictionary<Type, MonoBehaviour> componentDic = new();

        private void Awake()
        {
            foreach (var needToInitialize in GetComponentsInChildren<INeedToInitialize>())
            {
                needToInitialize.Init();
            }
        }

        public static T GetManagerComponent<T>() where T : MonoBehaviour
        {
            componentDic.TryGetValue(typeof(T), out var component);
            return component as T;
        }

        public static void RegisterManagerComponent(MonoBehaviour component)
        {
            componentDic.TryAdd(component.GetType(), component);
        }
        
        
        
    }
}