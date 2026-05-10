using System;
using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// 使当前UI对象的所有子对象，根据父物体的图片缩放比例自动调整位置与大小。
/// 常用于：当Image使用原始Sprite但父RectTransform尺寸不同时，让子UI跟随父物体的“实际显示比例”进行适配。
/// </summary>
public class ParentUIScaleFollow : MonoBehaviour
{
    [Tooltip("用于计算基础尺寸的精灵图片，若为空则在Start时自动从Image组件获取")]
    public Sprite sprite;

    [Tooltip("父物体的当前宽度与精灵原始宽度的比率，即子物体需要应用的缩放系数")]
    public float rate;

    private void Start()
    {
        // 如果没有手动指定sprite，则尝试从当前物体上的Image组件获取精灵
        if (sprite == null)
        {
            sprite = GetComponent<Image>().sprite;
        }

        // 获取当前物体的矩形变换组件
        RectTransform rectT = GetComponent<RectTransform>();

        // 计算缩放比率 = 父RectTransform的实际宽度 / 精灵图片的原始宽度
        // 这样就能知道父物体在宽度上被拉伸或压缩了多少倍
        rate = rectT.rect.width / sprite.rect.width;

        // 遍历所有直接子物体，同步其缩放和位置
        for (int i = 0; i < transform.childCount; i++)
        {
            // 获取第i个子物体的RectTransform组件
            RectTransform childRect = transform.GetChild(i).GetComponent<RectTransform>();

            // 取得子物体当前的锚点位置（相对于父物体的坐标）
            Vector2 tempPos = childRect.anchoredPosition;

            // 根据缩放差异调整子物体的位置
            // 公式解释：新位置 = 原位置 + 原位置 * (目标缩放比例 - 当前子物体自身缩放比例)
            // 假设原缩放为1，新缩放为rate，则新位置 = 原位置 * rate
            // 这样做的目的是让子物体在父物体缩放改变后，依然保持在父物体中的相对视觉位置不变
            // 注意：这里使用的是子物体自身的localScale.x，通常初始值为1
            tempPos.x += tempPos.x * (rate - childRect.localScale.x);
            tempPos.y += tempPos.y * (rate - childRect.localScale.x);

            // 将调整后的位置赋值回子物体
            childRect.anchoredPosition = tempPos;

            // 将子物体的本地缩放设置为与父物体相同的比率，使其大小同步变化
            childRect.localScale = new Vector3(rate, rate, rate);
        }
    }
}