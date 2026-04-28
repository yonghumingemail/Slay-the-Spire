using System;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using Z_Tools;
using Random = System.Random;

// 卡牌堆基类
public class Pile : MonoBehaviour
{
    // 当前堆中的卡牌事件列表
    [SerializeField] protected List<Card> cardList = new List<Card>();

    // UI引用
    protected Button returnUI; // 返回按钮
    protected Button UI; // 打开堆的按钮
    protected CanvasGroup View; // 堆的视图画布组（用于显示/隐藏）
    protected CardScrollView cardScrollView; // 卡牌滚动视图组件

    protected TextMeshProUGUI countText; // 显示卡牌数量的文本
    protected bool isEnable; // 当前是否处于显示状态
    protected Random random = new Random(); // 随机数生成器

    // 初始化方法
    protected virtual void Awake()
    {
        // 获取UI组件引用
        returnUI = transform.Find("View/Return").GetComponent<Button>();
        UI = transform.Find("UI").GetComponent<Button>();
        countText = transform.Find("UI/Count/Text").GetComponent<TextMeshProUGUI>();
        View = transform.Find("View").GetComponent<CanvasGroup>();

        // 从事件中心获取卡牌滚动视图
        // EventCenter_Singleton.Instance.GetEvent<Func<CardScrollView>>("CardScrollView",
        //     (action) => { cardScrollView = action.Invoke(); });

        // 绑定按钮点击事件
        UI.onClick.AddListener(OnClick);
        returnUI.onClick.AddListener(OnClick);

        // 初始化视图状态
        View.blocksRaycasts = isEnable;
        View.alpha = 0;
        countText.SetText("0");
    }

    // 按钮点击事件处理
    protected virtual void OnClick()
    {
        if (isEnable)
        {
            CloseUICard(); // 如果已显示，则关闭
        }
        else
        {
            ShowUICard(); // 如果未显示，则打开
        }
    }

    // 显示UI卡牌视图
    public virtual void ShowUICard()
    {
        // isEnable = true;
        // View.blocksRaycasts = true;  // 启用射线检测（可交互）
        // View.alpha = 1;              // 完全显示
        //
        // // 同时显示卡牌滚动视图
        // cardScrollView.canvasGroup.blocksRaycasts = true;
        // cardScrollView.canvasGroup.alpha = 1;
        //
        // // 将卡牌按顺序添加到滚动视图中
        // int i = 0;
        // foreach (var card in cardList)
        // {
        //     cardScrollView.cardDic[card].transform.SetSiblingIndex(i);
        //     cardScrollView.cardDic[card].uiCard.gameObject.SetActive(true);
        //     i++;
        // }
    }

    // 关闭UI卡牌视图
    public virtual void CloseUICard()
    {
        // isEnable = false;
        // View.blocksRaycasts = false; // 禁用射线检测
        // View.alpha = 0;              // 完全隐藏
        //
        // // 同时隐藏卡牌滚动视图
        // cardScrollView.canvasGroup.blocksRaycasts = false;
        // cardScrollView.canvasGroup.alpha = 0;
        //
        // // 隐藏所有卡牌UI
        // foreach (var card in cardList)
        // {
        //     cardScrollView.cardDic[card].uiCard.gameObject.SetActive(false);
        // }
    }

    // 添加卡牌到堆中
    public virtual UniTask AddCard(Card card)
    {
        // // 如果卡牌不在滚动视图字典中，则创建UI实例
        // if (!cardScrollView.cardDic.ContainsKey(card))
        // {
        //     var instance =
        //         await CardFactory.Instance.CreateCardInstanceAsync(card.CardEvent, cardScrollView.content);
        //
        //     cardScrollView.cardDic.Add(card.CardEvent, (card, instance.GetComponent<UICard>()));
        // }

        // 添加到卡牌列表
        cardList.Add(card);

        // 更新计数显示
        countText.SetText(cardList.Count.ToString());
        return UniTask.CompletedTask;
    }

    // 获取堆中所有卡牌并清空当前堆
    public virtual Card[] GetCarAll()
    {
        var returnList =cardList.ToArray();
        cardList.Clear();
        countText.SetText(cardList.Count.ToString());
        return returnList;
    }

    /// <summary>
    /// 从列表中随机取样指定数量的元素（不重复）
    /// 采用Knuth洗牌算法，原地操作，高效随机
    /// </summary>
    /// <typeparam name="T">元素类型</typeparam>
    /// <param name="list">源列表</param>
    /// <param name="count">取样数量</param>
    /// <returns>随机取样结果</returns>
    protected virtual List<T> RandomSample<T>(List<T> list, int count)
    {
        // 边界检查
        if (list == null || list.Count <= 1) return list;

        int n = list.Count;
        count = count < list.Count ? count : list.Count; // 确保取样数量不超过列表大小

        // 部分洗牌算法：只洗前count个元素
        for (int i = 0; i < count; i++)
        {
            int j = random.Next(i, n);
            (list[i], list[j]) = (list[j], list[i]); // 交换元素
        }

        // 获取前count个元素作为结果
        var result = list.GetRange(0, count);

        // 从原列表中移除已被取样的元素
        list.RemoveRange(0, count);
        return result;
    }
}