using System;
using System.Collections.Generic;
using UnityEngine;

namespace UnityGameFramework.Runtime
{
    public class GameEntry : MonoBehaviour
    {
       private static Dictionary<Type, IGameModuleComponent> componentDic = new();

       #region 静态实例

       public static UIComponent UI => GetManagerComponent<UIComponent>();
       public static EventManagerComponent Event => GetManagerComponent<EventManagerComponent>();
       

       #endregion
        private void Awake()
        {
            foreach (var needToInitialize in GetComponentsInChildren<IGameModuleComponent>())
            {
                needToInitialize.Init();
            }

        }

        public static T GetManagerComponent<T>() where T :class, IGameModuleComponent
        {
            componentDic.TryGetValue(typeof(T), out var component);
            return component as T;
        }
        
        public static void RegisterManagerComponent(IGameModuleComponent component)
        {
         
          if (!componentDic.TryAdd(component.GetType(), component))
          {
              Debug.Log($"已存在:{component.GetType()}组件");
          }
          
        }
        
        
        
    }
}