using System;
using System.Collections.Generic;
using System.Reflection;
using GameFramework;
using UnityEngine;

public class GameFrameworkEntry
{
    private static Dictionary<Type, IGameFrameworkModule> componentDic = new();


    /// <summary>
    /// 获取游戏框架模块。
    /// </summary>
    /// <typeparam name="T">要获取的游戏框架模块类型。</typeparam>
    /// <returns>要获取的游戏框架模块。</returns>
    /// <remarks>如果要获取的游戏框架模块不存在，则自动创建该游戏框架模块。</remarks>
    public static T GetModule<T>() where T : class, IGameFrameworkModule
    {
        Type moduleType = typeof(T);

        if (componentDic.TryGetValue(moduleType, out var module))
        {
            return module as T;
        }

        Assembly hotUpdateAss = null;
        var array = System.AppDomain.CurrentDomain.GetAssemblies();
        foreach (var assembly in array)
        {
            if (assembly.GetName().Name != "HotUpdate") continue;
            hotUpdateAss = assembly;
            break;
        }

        if (moduleType.IsInterface)
        {
            moduleType = FindImplementingClass(hotUpdateAss, moduleType);
        }

        module = (IGameFrameworkModule)Activator.CreateInstance(moduleType);
        componentDic.Add(moduleType, module);
        return module as T;
    }

    /// <summary>
    /// 在指定程序集中查找第一个实现了指定接口的非抽象类。
    /// </summary>
    /// <param name="assembly">要搜索的程序集。</param>
    /// <param name="interfaceType">要实现的接口类型。</param>
    /// <returns>第一个匹配的类的 Type；如果未找到则返回 null。</returns>
    private static Type FindImplementingClass(Assembly assembly, Type interfaceType)
    {
        if (assembly == null)
            throw new ArgumentNullException(nameof(assembly));
        if (interfaceType == null)
            throw new ArgumentNullException(nameof(interfaceType));
        if (!interfaceType.IsInterface)
            throw new ArgumentException($"{interfaceType.FullName} 不是接口类型。", nameof(interfaceType));

        foreach (Type type in assembly.GetTypes())
        {
            // 只考虑在指定命名空间内实现了指定接口的非抽象类,
            if (type.IsClass && !type.IsAbstract && interfaceType.IsAssignableFrom(type) && type.FullName.StartsWith("GameFramework.", StringComparison.Ordinal))
            {
                return type;
            }
        }

        return null;
    }
}