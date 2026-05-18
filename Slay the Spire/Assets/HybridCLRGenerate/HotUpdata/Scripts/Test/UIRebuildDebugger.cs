using System.Collections.Generic;
using System.Reflection;
using UnityEngine;
using UnityEngine.UI;

public class UIRebuildDebugger : MonoBehaviour
{
      IList<ICanvasElement> m_GraphicRebuildQueue;

    void Awake()
    {
        System.Type type = typeof(CanvasUpdateRegistry);
        FieldInfo field = type.GetField("m_GraphicRebuildQueue", BindingFlags.NonPublic | BindingFlags.Instance);
        if (field != null)
        {
            m_GraphicRebuildQueue = (IList<ICanvasElement>)field.GetValue(CanvasUpdateRegistry.instance);
        }
        else
        {
            Debug.LogError("反射获取队列失败，可能Unity版本不兼容。");
        }
    }

    private void FixedUpdate()
    {
        if (m_GraphicRebuildQueue == null) return;

        for (int j = 0; j < m_GraphicRebuildQueue.Count; j++)
        {
            var element = m_GraphicRebuildQueue[j];
            if (element != null && element is Component comp && comp != null)
            {
                var graphic = comp.GetComponent<Graphic>();
                if (graphic != null && graphic.canvas != null)
                {
                    Debug.Log($"<color=red>[UI Rebuild]</color> 物体 <b>{comp.name}</b> 在画布 <b>{graphic.canvas.name}</b> 中引发了图形重建。", comp.gameObject);
                }
            }
        }
    }

    void Update()
    {
        if (m_GraphicRebuildQueue == null) return;

        for (int j = 0; j < m_GraphicRebuildQueue.Count; j++)
        {
            var element = m_GraphicRebuildQueue[j];
            if (element != null && element is Component comp && comp != null)
            {
                var graphic = comp.GetComponent<Graphic>();
                if (graphic != null && graphic.canvas != null)
                {
                    Debug.Log($"<color=red>[UI Rebuild]</color> 物体 <b>{comp.name}</b> 在画布 <b>{graphic.canvas.name}</b> 中引发了图形重建。", comp.gameObject);
                }
            }
        }
    }

    private void LateUpdate()
    {
        if (m_GraphicRebuildQueue == null) return;

        for (int j = 0; j < m_GraphicRebuildQueue.Count; j++)
        {
            var element = m_GraphicRebuildQueue[j];
            if (element != null && element is Component comp && comp != null)
            {
                var graphic = comp.GetComponent<Graphic>();
                if (graphic != null && graphic.canvas != null)
                {
                    Debug.Log($"<color=red>[UI Rebuild]</color> 物体 <b>{comp.name}</b> 在画布 <b>{graphic.canvas.name}</b> 中引发了图形重建。", comp.gameObject);
                }
            }
        }
    }
}
