using System;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using Z_Tools;
using Random = System.Random;


public class Pile : MonoBehaviour
{
    public List<CardEvent_Abs> cardList { get; protected set; } = new List<CardEvent_Abs>();

    protected Button returnUI;
    protected Button UI;
    protected CanvasGroup View;
    protected CardScrollView cardScrollView;

    protected TextMeshProUGUI countText;
    protected bool isEnable;
    protected Random random = new Random();

    protected virtual void Awake()
    {
        returnUI = transform.Find("View/Return").GetComponent<Button>();
        UI = transform.Find("UI").GetComponent<Button>();
        countText = transform.Find("UI/Count/Text").GetComponent<TextMeshProUGUI>();
        View = transform.Find("View").GetComponent<CanvasGroup>();

        EventCenter_Singleton.Instance.GetEvent<Func<CardScrollView>>("CardScrollView",
            (action) => { cardScrollView = action.Invoke(); });

        UI.onClick.AddListener(OnClick);
        returnUI.onClick.AddListener(OnClick);
        View.blocksRaycasts = isEnable;
        View.alpha = 0;
        countText.SetText("0");
    }

    protected virtual void OnClick()
    {
        if (isEnable)
        {
            CloseUICard();
        }
        else
        {
            ShowUICard();
        }
    }

    public virtual void ShowUICard()
    {
        isEnable = true;
        View.blocksRaycasts = true;
        View.alpha = 1;
        cardScrollView.canvasGroup.blocksRaycasts = true;
        cardScrollView.canvasGroup.alpha = 1;

        int i = 0;
        foreach (var card in cardList)
        {
            cardScrollView.cardDic[card].uiCard.transform.SetSiblingIndex(i);
            cardScrollView.cardDic[card].uiCard.gameObject.SetActive(true);
        }
    }

    public virtual void CloseUICard()
    {
        isEnable = false;
        View.blocksRaycasts = false;
        View.alpha = 0;
        cardScrollView.canvasGroup.blocksRaycasts = false;
        cardScrollView.canvasGroup.alpha = 0;

        foreach (var card in cardList)
        {
            cardScrollView.cardDic[card].uiCard.gameObject.SetActive(false);
        }
    }

    public virtual async UniTask AddCard(Card card)
    {
        if (!cardScrollView.cardDic.ContainsKey(card.cardEvent))
        {
            var instance =
                await CardFactory.Instance.CreateCardInstanceAsync(card.cardEvent, cardScrollView.content);

            cardScrollView.cardDic.Add(card.cardEvent, (card, instance.GetComponent<UICard>()));
        }

        cardList.Add(card.cardEvent);

        countText.SetText(cardList.Count.ToString());
    }

    public virtual List<CardEvent_Abs> GetCarAll()
    {
        var returnList = new List<CardEvent_Abs>(cardList);
        cardList.Clear();
        countText.SetText(cardList.Count.ToString());
        return returnList;
    }
    

    /// <summary>
    /// 
    /// </summary>
    /// <typeparam name="T">元素类型</typeparam>
    /// <param name="list">源列表</param>
    /// <param name="count">取样数量</param>
    /// <returns>随机取样结果</returns>
    protected virtual List<T> RandomSample<T>(List<T> list, int count)
    {
        if (list == null || list.Count <= 1) return list;

        int n = list.Count;
        count = count < list.Count ? count : list.Count;
        for (int i = 0; i <count; i++)
        {
            int j = random.Next(i, n);
            (list[i], list[j]) = (list[j], list[i]);
        }

        var result = list.GetRange(0, count);
        list.RemoveRange(0, count);
        return result;
    }
}