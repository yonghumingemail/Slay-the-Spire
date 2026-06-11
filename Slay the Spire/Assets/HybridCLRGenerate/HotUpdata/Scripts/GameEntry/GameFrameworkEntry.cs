using System;
using System.Collections.Generic;
using GameFramework;
using UnityEngine;

public class GameFrameworkEntry
{
    private static Dictionary<Type, GameFrameworkModule> componentDic = new();


    /// <summary>
    /// 获取游戏框架模块。
    /// </summary>
    /// <typeparam name="T">要获取的游戏框架模块类型。</typeparam>
    /// <returns>要获取的游戏框架模块。</returns>
    /// <remarks>如果要获取的游戏框架模块不存在，则自动创建该游戏框架模块。</remarks>
    public static T GetModule<T>() where T : class
    {
        Type interfaceType = typeof(T);
        // if (!interfaceType.IsInterface)
        // {
        //     Debug.Log(
        //         Utility.Text.Format("You must get module by interface, but '{0}' is not.", interfaceType.FullName));
        // }

        // if (!interfaceType.FullName.StartsWith("GameFramework.", StringComparison.Ordinal))
        // {
        //     Debug.Log(Utility.Text.Format("You must get a Game Framework module, but '{0}' is not.", interfaceType.FullName));
        // }

       // string moduleName = Utility.Text.Format("{0}.{1}", interfaceType.Namespace, interfaceType.Name[1..]);
       // Type moduleType = Type.GetType(moduleName);
        // if (moduleType == null)
        // {
        //     Debug.Log(Utility.Text.Format("Can not find Game Framework module type '{0}'.", moduleName));
        // }

        return GetModule(interfaceType) as T;
    }

    /// <summary>
    /// 获取游戏框架模块。
    /// </summary>
    /// <param name="moduleType">要获取的游戏框架模块类型。</param>
    /// <returns>要获取的游戏框架模块。</returns>
    /// <remarks>如果要获取的游戏框架模块不存在，则自动创建该游戏框架模块。</remarks>
    private static GameFrameworkModule GetModule(Type moduleType)
    {
        if (componentDic.TryGetValue(moduleType, out var module))
        {
            return module;
        }

        module = (GameFrameworkModule)Activator.CreateInstance(moduleType);
        componentDic.Add(moduleType, module);
        return module;
    }
}