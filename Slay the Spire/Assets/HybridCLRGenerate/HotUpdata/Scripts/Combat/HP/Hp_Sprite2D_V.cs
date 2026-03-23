using System;
using DG.Tweening;
using TMPro;
using UnityEngine;

/// <summary>
/// 2D精灵血条显示组件
/// 实现IHealthView接口，负责在2D游戏中显示角色的生命值UI
/// 包括血条进度、数值显示和自适应尺寸调整
/// </summary>
public class Hp_Sprite2D_V : MonoBehaviour,IHealth_V
{
    /// <summary>
    /// 血条x轴的缩放
    /// </summary>
    public float scale_X = 1;
    /// <summary>血条动画变化速度（秒）</summary>
    public float animatorSpeed = 0.15f;
    
    /// <summary>血条相对于父对象精灵的位置偏移量</summary>
    public Vector3 positionOffset;
    
    private TextMeshPro _textMeshPro;      // 生命值文本显示组件
    private AdaptiveResize_Renderer _hp;           // 血条前景渲染器（随生命值变化）
    
    /// <summary>
    /// 更新血条显示
    /// 根据当前生命值比例调整血条长度和文本显示[1,
    /// </summary>
    /// <param name="health">生命值系统接口实例</param>
    public void UpdateView(IHealth health)
    {
        // 计算当前生命值比例（0-1）
        float value = health.HealthValue / health.MaxHealth;
        
        // 计算血条新位置：基于生命值比例横向移动
        var pos = _hp.transform.localPosition;
        pos.x = -1 * _hp.Length * (1 - value);
        
        // 更新生命值文本显示
        _textMeshPro.SetText(health.HealthValue + "/" + health.MaxHealth);
        
        // 使用DOTween创建平滑的血条变化动画
        DOTween.To(() => _hp.transform.localPosition, point => { _hp.transform.localPosition = point; },
            pos, animatorSpeed);
    }



    /// <summary>
    /// 初始化血条组件
    /// 设置血条位置、尺寸适配并获取必要的组件引用
    /// </summary>
    /// <param name="obj">目标对象</param>
    public void InitializeView(GameObject obj)
    {
        // 获取子对象中的文本和血条组件
        _textMeshPro = transform.Find("Value").GetComponent<TextMeshPro>();
        _hp = transform.Find("Blood").GetComponent<AdaptiveResize_Renderer>();
        
        // 获取目标对象的精灵信息用于尺寸适配
        Renderer _renderer = obj.GetComponentInChildren<Renderer>();

        // 调整血条子组件的尺寸以匹配目标对象精灵
        AdaptiveResize_Renderer[] spriteRendererChild = transform.GetComponentsInChildren<AdaptiveResize_Renderer>();

        float maxSpriteSize = 0;
        // 遍历所有血条精灵组件并重新调整尺寸
        foreach (var t in spriteRendererChild)
        {
            t.SpriteResize(_renderer,scale_X);
            if (t.Body.bounds.size.y>maxSpriteSize)
            {
                maxSpriteSize = t.Body.bounds.size.y;
            }
        }
        
        // 计算血条在目标对象下方的位置
        float posY = (-_renderer.bounds.size.y / 2) - maxSpriteSize / 2;
        
        // 设置血条位置（目标对象底部 + 自定义偏移）
        var localPosition = new Vector3(0, posY, _renderer.transform.position.z);
        localPosition += positionOffset;
        transform.localPosition = localPosition;

        // 检查目标对象是否实现了必要的事件接口
        IEventCenterObject<string> eventCenterObject = obj.GetComponent<IEventCenterObject<string>>();
        if (eventCenterObject == null)
        {
            Debug.Log(obj.name + "对象缺少必备组件");
            gameObject.SetActive(false);
            return;
        }
        
        IHealth health = eventCenterObject.eventCenter.GetEvent<Func<IHealth>>("IHealth")?.Invoke();
        if (health == null)
        {
            Debug.Log("对象未实现生命接口");
            gameObject.SetActive(false);
            return;
        }
        UpdateView(health);
    }
}