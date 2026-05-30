using System;
using System.Collections.Generic;
using DG.Tweening;
using HybridCLRGenerate.HotUpdata.Scripts.Tools.Event.EventArgs;
using UnityEngine;
using UnityEngine.Splines;
using Z_Tools;

public class CardArrangement
{
    public int _maxCardsCount;


    public CardArrangement(int maxCardsCount = 10)
    {
        _maxCardsCount = maxCardsCount;
    }

    public float speed;

    public void UpdateCardPositions(SplineContainer splineContainer, List<Card> cards, Action callBack)
    {
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
            
            Vector3 forward = spline.EvaluateTangent(p);
            Vector3 up = spline.EvaluateUpVector(p);
            Quaternion rotation = Quaternion.LookRotation(up, Vector3.Cross(up, forward).normalized);
            
            cards[i].UpdatePosInfo(splineWorldPos, rotation);
        }
        
        callBack?.Invoke();
    }
}