using System;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;
using UnityEngine.Splines;
using Z_Tools;

public class CardArrangement
{
    public int _maxCardsCount { get; private set; }
    private Sequence _sequence;

    public CardArrangement(int maxCardsCount = 10)
    {
        _maxCardsCount = maxCardsCount;
    }

    public float speed;
    
    public void UpdateCardPositions(SplineContainer splineContainer, List<Card> cards, Action callBack)
    {
        EventCenter_Singleton.Instance.GetEvent<Action>("OnStartCardArrangement")?.Invoke();
        // 检查卡牌列表是否为空，为空则直接返回避免后续计算
        if (cards.Count == 0)
            return;
        for (int i = cards.Count - 1; i > -1; i--)
        {
            if (!cards[i].gameObject.activeSelf)
            {
                cards.RemoveAt(i);
            }
        }


        if (cards.Count >= _maxCardsCount)
        {
            _maxCardsCount = cards.Count;
        }

        // 计算每张卡牌在样条曲线上的间距（基于最大处理数量）
        // 将整个曲线长度（0-1）按最大数量等分
        float cardSpacing = 1f / _maxCardsCount;

        // 计算第一张卡牌的起始位置，实现卡牌居中排列
        // 通过减去 (卡片数量-1)*间距/2 来让所有卡牌以曲线中点对称分布
        float firstCardPosition = 0.5f - (cards.Count - 1) * cardSpacing / 2;

        // 从容器中获取样条曲线引用
        Spline spline = splineContainer.Spline;
        _sequence.Kill();
        _sequence = DOTween.Sequence();

        float z = -0.1f;
        // 遍历所有卡牌，逐个设置位置和旋转
        for (int i = 0; i < cards.Count; i++)
        {
            // 计算当前卡牌在样条曲线上的参数位置（0-1之间）
            // 从第一张卡牌位置开始，按索引顺序递增间距
            float p = firstCardPosition + i * cardSpacing;

            // 根据参数p获取样条曲线上的世界坐标位置
            Vector3 splineWorldPos = spline.EvaluatePosition(p);
            splineWorldPos.z = z;
            z -= 0.1f;
            // 获取曲线在该点的切线方向（前向向量）
            Vector3 forward = spline.EvaluateTangent(p);
            // 获取曲线在该点的上向量
            Vector3 up = spline.EvaluateUpVector(p);

            // 计算卡牌的旋转：使用LookRotation创建朝向矩阵
            // 第一个参数是卡牌的朝向（z轴对齐），第二个参数是卡牌的上方向（y轴对齐）
            // 这里使用叉积计算正确的上方向，确保卡牌与曲线方向匹配
            Quaternion rotation = Quaternion.LookRotation(up, Vector3.Cross(up, forward).normalized);

            Transform temp = cards[i].transform;
            
            var positionAnimator = DOTween
                .To(() => temp.position, value => { temp.position = value; }, splineWorldPos, speed)
                .SetEase(Ease.OutQuad);
            var rotationAnimator = DOTween
                .To(() => temp.rotation, value => temp.rotation = value, rotation.eulerAngles, speed)
                .SetEase(Ease.OutQuad);

            _sequence.Insert(0, positionAnimator);
            _sequence.Insert(0, rotationAnimator);
        }

        _sequence.onComplete += () =>
        {
            EventCenter_Singleton.Instance.GetEvent<Action>("OnCardArrangementComplete")?.Invoke();
            callBack?.Invoke();
        };
    }
}