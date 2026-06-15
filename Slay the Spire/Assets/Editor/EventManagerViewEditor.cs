#if UNITY_EDITOR
using System;
using UnityEditor;
using UnityEngine;
using System.Collections;
using System.Reflection;

[CustomEditor(typeof(PriorityEventManagerView))]
public class EventManagerViewEditor : Editor
{
    private Vector2 syncScrollPos;
    private Vector2 asyncScrollPos;
    private bool showSync = true;
    private bool showAsync = true;

    private PriorityEventManagerView targetComponent;
    private object priorityEventManager;
    private PropertyInfo priorityEventManagerField;

    private const string PREFS_KEY_SHOW_EVENT_DATA = "EventManagerView_ShowEventData";
    private bool showEventData = true;

    private void OnEnable()
    {
        showEventData = EditorPrefs.GetBool(PREFS_KEY_SHOW_EVENT_DATA, true);

        targetComponent = target as PriorityEventManagerView;
        if (targetComponent == null) return;

        var type = typeof(PriorityEventManagerView);
        priorityEventManagerField = type.GetProperty("_priorityEventManager", BindingFlags.NonPublic | BindingFlags.Instance);
        if (priorityEventManagerField != null)
        {
            priorityEventManager = priorityEventManagerField.GetValue(targetComponent);
        }

        SubscribeToEvents();
    }

    private void OnDisable()
    {
        UnsubscribeFromEvents();
    }

    private void SubscribeToEvents()
    {
        if (targetComponent == null) return;
        targetComponent.OnSubscribe += OnEventChanged;
        targetComponent.OnUnSubscribe += OnEventChanged;
    }

    private void UnsubscribeFromEvents()
    {
        if (targetComponent == null) return;
        targetComponent.OnSubscribe -= OnEventChanged;
        targetComponent.OnUnSubscribe -= OnEventChanged;
    }

    private void OnEventChanged()
    {
        Repaint();
    }

    public override void OnInspectorGUI()
    {
        DrawDefaultInspector();

        EditorGUILayout.Space(5);
        bool newShowEventData = EditorGUILayout.Toggle("显示事件监听数据", showEventData);
        if (newShowEventData != showEventData)
        {
            showEventData = newShowEventData;
            EditorPrefs.SetBool(PREFS_KEY_SHOW_EVENT_DATA, showEventData);
        }

        if (!showEventData)
            return;

        if (!EditorApplication.isPlaying)
        {
            EditorGUILayout.HelpBox("仅在运行时可查看事件监听器数据", MessageType.Info);
            return;
        }

        if (priorityEventManager == null && priorityEventManagerField != null)
        {
            priorityEventManager = priorityEventManagerField.GetValue(targetComponent);
        }

        if (priorityEventManager == null)
        {
            EditorGUILayout.HelpBox("无法获取 PriorityEventManager 实例", MessageType.Error);
            return;
        }

        EditorGUILayout.Space(10);
        EditorGUILayout.LabelField("事件监听器运行时数据", EditorStyles.boldLabel);

        var syncEventsDict = GetEventsDictionary(priorityEventManager, "syncChannel");
        var asyncEventsDict = GetEventsDictionary(priorityEventManager, "asyncChannel");

        // 显示同步事件数量
        int syncCount = syncEventsDict?.Count ?? 0;
        showSync = EditorGUILayout.Foldout(showSync, $"同步事件 ({syncCount})", true);
        if (showSync && syncEventsDict != null)
        {
            if (syncEventsDict.Count == 0)
                EditorGUILayout.LabelField("  无监听器");
            else
                DrawEventTable(syncEventsDict, ref syncScrollPos);
        }

        // 显示异步事件数量
        int asyncCount = asyncEventsDict?.Count ?? 0;
        showAsync = EditorGUILayout.Foldout(showAsync, $"异步事件 ({asyncCount})", true);
        if (showAsync && asyncEventsDict != null)
        {
            if (asyncEventsDict.Count == 0)
                EditorGUILayout.LabelField("  无监听器");
            else
                DrawEventTable(asyncEventsDict, ref asyncScrollPos);
        }
    }

    private IDictionary GetEventsDictionary(object manager, string channelName)
    {
        if (manager == null) return null;

        var channelField = manager.GetType().GetField(channelName, BindingFlags.NonPublic | BindingFlags.Instance);
        if (channelField == null) return null;

        var channel = channelField.GetValue(manager);
        if (channel == null) return null;

        var eventsField = channel.GetType().GetField("events", BindingFlags.Public | BindingFlags.Instance);
        if (eventsField == null) return null;

        return eventsField.GetValue(channel) as IDictionary;
    }

    private string GetFriendlyTypeName(Type type)
    {
        if (!type.IsGenericType)
            return type.Name;

        string baseName = type.Name.Split('`')[0];
        Type[] genericArgs = type.GetGenericArguments();
        string[] argNames = new string[genericArgs.Length];
        for (int i = 0; i < genericArgs.Length; i++)
            argNames[i] = GetFriendlyTypeName(genericArgs[i]);

        return $"{baseName}<{string.Join(", ", argNames)}>";
    }

    private void DrawEventTable(IDictionary eventsDict, ref Vector2 scrollPos)
    {
        scrollPos = EditorGUILayout.BeginScrollView(scrollPos, GUILayout.MaxHeight(300));
        foreach (DictionaryEntry entry in eventsDict)
        {
            string eventName = entry.Key is Type t ? GetFriendlyTypeName(t) : entry.Key.ToString();
            var listenerList = entry.Value as IEnumerable;
            if (listenerList == null) continue;

            EditorGUILayout.LabelField($"事件: {eventName}", EditorStyles.boldLabel);
            EditorGUI.indentLevel++;

            int count = 0;
            foreach (var node in listenerList)
            {
                string sendName = GetPropertyValue<string>(node, "sendName");
                if (string.IsNullOrEmpty(sendName)) sendName = "Unknown";
                int priority = GetPropertyValue<int>(node, "Priority");
                EditorGUILayout.LabelField($"  {sendName}  (优先级: {priority})");
                count++;
            }
            if (count == 0) EditorGUILayout.LabelField("  (无监听)");

            EditorGUI.indentLevel--;
            EditorGUILayout.Space(5);
        }
        EditorGUILayout.EndScrollView();
    }

    private T GetFieldValue<T>(object obj, string fieldName)
    {
        if (obj == null) return default;
        var field = obj.GetType().GetField(fieldName, BindingFlags.Public | BindingFlags.Instance);
        if (field != null) return (T)field.GetValue(obj);
        return default;
    }

    private T GetPropertyValue<T>(object obj, string propName)
    {
        if (obj == null) return default;
        var prop = obj.GetType().GetProperty(propName, BindingFlags.Public | BindingFlags.Instance);
        if (prop != null && prop.CanRead) return (T)prop.GetValue(obj);
        return default;
    }
}
#endif