using System;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using TMPro;
using UnityEngine;
using UnityEngine.Android;
using UnityEngine.UI;
using Z_Tools;
using Object = UnityEngine.Object;

public class CardFactory : SingletonBase<CardFactory>
{
    public async UniTask<Card> CreateCardInstanceAsync(CardEvent_Abs cardEventAbs, Transform parent, bool isActive = false)
    {
        // 1. 异步加载并实例化预制体
        var prefab = await AddressablesMgr.Instance.LoadAssetAsync<GameObject>("Assets/Art/Prefab/Card/Card.prefab");
        var cardInstance = Object.Instantiate(prefab, parent);
       
        //注册卡牌信息，并更新卡牌UI
        var card = cardInstance.GetComponent<Card>();
        card.Initialized(cardEventAbs);

        cardInstance.SetActive(isActive);
        return card;
    }

    public async UniTask<GameObject> CreateCardInstanceAsync(CardEvent_Abs cardEventAbs, RectTransform parent, bool isActive = false)
    {
        // 1. 异步加载并实例化预制体
        var prefab = await AddressablesMgr.Instance.LoadAssetAsync<GameObject>("Assets/Art/Prefab/Card/Card_UI.prefab");
        var cardInstance = Object.Instantiate(prefab, parent);

        //注册卡牌信息，并更新卡牌UI
        var card = cardInstance.GetComponent<UICard>();
        GameObject UI = card._infoComponent._background.gameObject;
        UI.SetActive(false);

        bool succeed = await card.Initialized(cardEventAbs);
        if (!succeed)
        {
            //需要修改，回收
            Object.Destroy(cardInstance);
            Debug.Log("初始化失败，卡牌回收");
            return null;
        }

        cardInstance.SetActive(isActive);
        UI.SetActive(true);
        return cardInstance;
    }


    public async UniTask<bool> UpdateCardUI(UICard uiCard, CardEvent_Abs cardEventAbs)
    {
        uiCard._infoComponent._background.sprite = cardEventAbs.SpriteData.background;
        uiCard._infoComponent._frame.sprite = cardEventAbs.SpriteData.frame;
        uiCard._infoComponent._banners.sprite = cardEventAbs.SpriteData.banner;
        uiCard._infoComponent._orb.sprite = cardEventAbs.SpriteData.orb;
        uiCard._infoComponent._image.sprite = cardEventAbs.SpriteData.image;

        uiCard._infoComponent._name.SetText(cardEventAbs.cardName);
        uiCard._infoComponent._typeName.SetText(Enum.GetName(cardEventAbs.cardType.GetType(), cardEventAbs.cardType));
        uiCard._infoComponent._point.SetText(cardEventAbs.orbValue.ToString());
        uiCard._infoComponent._describe.SetText(cardEventAbs.describe);

        // 确保UI布局正确更新
        await UniTask.NextFrame();
        return true;
    }
}