using System;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using Z_Tools;
using Object = UnityEngine.Object;

public class CardFactory : SingletonBase<CardFactory>
{
    #region 字典数据

    // 卡牌预制体精灵路径
    private readonly Dictionary<CardType, string> PrefabPaths = new()
    {
        { CardType.攻击, "Assets/Art/Prefab/Card/Card_Triangle.prefab" },
        { CardType.技能, "Assets/Art/Prefab/Card/Card_Square.prefab" },
        { CardType.能力, "Assets/Art/Prefab/Card/Card_Circle.prefab" },
    };

    private readonly Dictionary<CardType, string> UIPrefabPaths = new()
    {
        { CardType.攻击, "Assets/Art/Prefab/Card/Card_Triangle_UI.prefab" },
        { CardType.技能, "Assets/Art/Prefab/Card/Card_Square_UI.prefab" },
        { CardType.能力, "Assets/Art/Prefab/Card/Card_Circle_UI.prefab" },
    };
    // 卡牌边框精灵路径
    private readonly Dictionary<(CardType, CardRarity), string> FrameSpritePaths = new()
    {
        { (CardType.攻击, CardRarity.灰色), "Assets/Art/Image/cardui/cardui3.png[cardui3_7]" },
        { (CardType.攻击, CardRarity.蓝色), "Assets/Art/Image/cardui/cardui3.png[cardui3_0]" },
        { (CardType.攻击, CardRarity.金色), "Assets/Art/Image/cardui/cardui3.png[cardui3_3]" },

        { (CardType.能力, CardRarity.灰色), "Assets/Art/Image/cardui/cardui.png[cardui_10]" },
        { (CardType.能力, CardRarity.蓝色), "Assets/Art/Image/cardui/cardui2.png[cardui2_11]" },
        { (CardType.能力, CardRarity.金色), "Assets/Art/Image/cardui/cardui.png[cardui_5]" },

        { (CardType.技能, CardRarity.灰色), "Assets/Art/Image/cardui/cardui2.png[cardui2_3]" },
        { (CardType.技能, CardRarity.蓝色), "Assets/Art/Image/cardui/cardui2.png[cardui2_7]" },
        { (CardType.技能, CardRarity.金色), "Assets/Art/Image/cardui/cardui3.png[cardui3_1]" }
    };

    // 背景精灵路径
    private readonly Dictionary<(CardType, CardColour), string> BackgroundSpritePaths = new()
    {
        // 攻击 攻击卡牌
        { (CardType.攻击, CardColour.红), "Assets/Art/Image/cardui/cardui.png[cardui_17]" },
        { (CardType.攻击, CardColour.蓝), "Assets/Art/Image/cardui/cardui3.png[cardui3_4]" },
        { (CardType.攻击, CardColour.绿), "Assets/Art/Image/cardui/cardui2.png[cardui2_13]" },
        { (CardType.攻击, CardColour.紫), "Assets/Art/Image/cardui/cardui2.png[cardui2_8]" },
        { (CardType.攻击, CardColour.灰), "Assets/Art/Image/cardui/cardui.png[cardui_15]" },

        // 能力 能力卡牌
        { (CardType.能力, CardColour.红), "Assets/Art/Image/cardui/cardui3.png[cardui3_5]" },
        { (CardType.能力, CardColour.蓝), "Assets/Art/Image/cardui/cardui2.png[cardui2_14]" },
        { (CardType.能力, CardColour.绿), "Assets/Art/Image/cardui/cardui2.png[cardui2_9]" },
        { (CardType.能力, CardColour.紫), "Assets/Art/Image/cardui/cardui3.png[cardui3_9]" },
        { (CardType.能力, CardColour.灰), "Assets/Art/Image/cardui/cardui.png[cardui_11]" },

        // 技能/状态/诅咒 技能/状态/诅咒卡牌 (共享同一套背景，如代码中所示)
        { (CardType.技能, CardColour.红), "Assets/Art/Image/cardui/cardui3.png[cardui3_8]" },
        { (CardType.技能, CardColour.蓝), "Assets/Art/Image/cardui/cardui3.png[cardui3_10]" },
        { (CardType.技能, CardColour.绿), "Assets/Art/Image/cardui/cardui2.png[cardui2_15]" },
        { (CardType.技能, CardColour.紫), "Assets/Art/Image/cardui/cardui4.png[cardui4_10]" },
        { (CardType.技能, CardColour.灰), "Assets/Art/Image/cardui/cardui.png[cardui_12]" },
        { (CardType.技能, CardColour.黑), "Assets/Art/Image/cardui/cardui.png[cardui_16]" },
    };

    // 装饰精灵路径
    private readonly Dictionary<CardRarity, string> DecorationSpritePaths = new()
    {
        { CardRarity.灰色, "Assets/Art/Image/cardui/cardui.png[cardui_6]" },
        { CardRarity.蓝色, "Assets/Art/Image/cardui/cardui2.png[cardui2_5]" },
        { CardRarity.金色, "Assets/Art/Image/cardui/cardui.png[cardui_2]" }
    };

    private readonly Dictionary<CardColour, string> OrbSpritePaths = new()
    {
        { CardColour.红, "Assets/Art/Image/cardui/cardui.png[cardui_36]" },
        { CardColour.蓝, "Assets/Art/Image/cardui/cardui.png[cardui_36]" },
        { CardColour.绿, "Assets/Art/Image/cardui/cardui.png[cardui_36]" },
        { CardColour.紫, "Assets/Art/Image/cardui/cardui.png[cardui_36]" },
        { CardColour.灰, "Assets/Art/Image/cardui/cardui.png[cardui_36]" }
    };
    #endregion

    public async UniTask<Card> CreateCardInstanceAsync(CardEvent_Abs cardEventAbs, Transform parent, bool isActive = false)
    {
        // 1. 异步加载并实例化预制体
        var prefab = await LoadPrefabByType(cardEventAbs.parameter.type);
        var cardInstance = Object.Instantiate(prefab, parent);

        //注册卡牌信息，并更新卡牌UI
        var card = cardInstance.GetComponent<Card>();
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
        return card;
    }

    public async UniTask<GameObject> CreateCardInstanceAsync(CardEvent_Abs cardEventAbs, RectTransform parent, bool isActive = false)
    {
        // 1. 异步加载并实例化预制体
        var prefab = await LoadUIPrefabByType(cardEventAbs.parameter.type);
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
    public async UniTask<bool> UpdateCardUI(Card card, CardEvent_Abs cardEventAbs)
    {
        var (frameSprite, backgroundSprite, decorationSprite,orb) = await LoadAllSpritesAsync(cardEventAbs.parameter);
        if (!frameSprite || !backgroundSprite || !decorationSprite )
        {
            Debug.LogError($"创建卡牌失败");
            return false;
        }

        card._infoComponent._background.sprite = backgroundSprite;
        card._infoComponent._frame.sprite = frameSprite;
        card._infoComponent._banners.sprite = decorationSprite;
        card._infoComponent._image.sprite = cardEventAbs.parameter.image;;
        card._infoComponent._orb.sprite = orb;

        card._infoComponent._name.SetText(Enum.GetName(cardEventAbs.parameter.cardName.GetType(), cardEventAbs.parameter.cardName));
        card._infoComponent._typeName.SetText(Enum.GetName(cardEventAbs.parameter.type.GetType(), cardEventAbs.parameter.type));
        card._infoComponent._point.SetText(cardEventAbs.point.ToString());
        card._infoComponent._describe.SetText(cardEventAbs.describe);

        // 确保UI布局正确更新
        await UniTask.NextFrame();
        return true;
    } public async UniTask<bool> UpdateCardUI(Card card)
    {
        var (frameSprite, backgroundSprite, decorationSprite,orb) = await LoadAllSpritesAsync(card.cardEvent.parameter);
        if (!frameSprite || !backgroundSprite || !decorationSprite )
        {
            Debug.LogError($"创建卡牌失败");
            return false;
        }

        card._infoComponent._background.sprite = backgroundSprite;
        card._infoComponent._frame.sprite = frameSprite;
        card._infoComponent._banners.sprite = decorationSprite;
        card._infoComponent._image.sprite= card.cardEvent.parameter.image;
        card._infoComponent._orb.sprite = orb;

        card._infoComponent._name.SetText(Enum.GetName(card.cardEvent.parameter.cardName.GetType(), card.cardEvent.parameter.cardName));
        card._infoComponent._typeName.SetText(Enum.GetName(card.cardEvent.parameter.type.GetType(), card.cardEvent.parameter.type));
        card._infoComponent._point.SetText(card.cardEvent.point.ToString());
        card._infoComponent._describe.SetText(card.cardEvent.describe);

        // 确保UI布局正确更新
        await UniTask.NextFrame();
        return true;
    }
    public async UniTask<bool> UpdateCardUI(UICard uiCard, CardEvent_Abs cardEventAbs)
    {
        var (frameSprite, backgroundSprite, decorationSprite,orb) = await LoadAllSpritesAsync(cardEventAbs.parameter);
        if (!frameSprite || !backgroundSprite || !decorationSprite )
        {
            Debug.LogError($"创建卡牌失败");
            return false;
        }

        uiCard._infoComponent._background.sprite = backgroundSprite;
        uiCard._infoComponent._frame.sprite = frameSprite;
        uiCard._infoComponent._banners.sprite = decorationSprite;
        uiCard._infoComponent._orb.sprite = orb;
        uiCard._infoComponent._image.sprite = cardEventAbs.parameter.image;

        uiCard._infoComponent._name.SetText(Enum.GetName(cardEventAbs.parameter.cardName.GetType(), cardEventAbs.parameter.cardName));
        uiCard._infoComponent._typeName.SetText(Enum.GetName(cardEventAbs.parameter.type.GetType(), cardEventAbs.parameter.type));
        uiCard._infoComponent._point.SetText(cardEventAbs.point.ToString());
        uiCard._infoComponent._describe.SetText(cardEventAbs.describe);

        // 确保UI布局正确更新
        await UniTask.NextFrame();
        return true;
    }

    private async UniTask<(Sprite frame, Sprite background, Sprite decoration, Sprite orb)> LoadAllSpritesAsync(CardParameter parameter)
    {
        // 并行加载所有精灵资源，显著提升加载效率
        var frameTask = LoadFrameSpriteAsync(parameter);
        var backgroundTask = LoadBackgroundSpriteAsync(parameter);
        var decorationTask = LoadDecorationSpriteAsync(parameter);
        var orbTask = LoadOrbSpriteAsync(parameter);

        return await UniTask.WhenAll(frameTask, backgroundTask, decorationTask,orbTask);
    }


    private async UniTask<GameObject> LoadPrefabByType(CardType cardType)
    {
        //因为技能、状态、诅咒类卡牌共用一种预制体
        if (cardType is CardType.技能 or CardType.状态 or CardType.诅咒)
        {
            cardType = CardType.技能;
        }

        if (PrefabPaths.TryGetValue(cardType, out var path))
        {
            return await AddressablesMgr.Instance.LoadAssetAsync<GameObject>(path);
        }

        throw new ArgumentException($"未找到卡牌类型 {cardType} 对应的预制体路径");
    }
    private async UniTask<GameObject> LoadUIPrefabByType(CardType cardType)
    {
        //因为技能、状态、诅咒类卡牌共用一种预制体
        if (cardType is CardType.技能 or CardType.状态 or CardType.诅咒)
        {
            cardType = CardType.技能;
        }

        if (UIPrefabPaths.TryGetValue(cardType, out var path))
        {
            return await AddressablesMgr.Instance.LoadAssetAsync<GameObject>(path);
        }

        throw new ArgumentException($"未找到卡牌类型 {cardType} 对应的预制体路径");
    }
    private async UniTask<Sprite> LoadFrameSpriteAsync(CardParameter parameter)
    {
        var key = (parameter.type, parameter.rarity);
        if (parameter.type is (CardType.技能 or CardType.状态 or CardType.诅咒))
        {
            key = (CardType.技能, parameter.rarity);
        }

        if (FrameSpritePaths.TryGetValue(key, out var path))
        {
            return await AddressablesMgr.Instance.LoadAssetAsync<Sprite>(path);
        }

        Debug.Log($"未找到卡牌边框（Frame）对应的精灵图路径");
        return null; // 返回null或默认精灵
    }

    private async UniTask<Sprite> LoadBackgroundSpriteAsync(CardParameter parameter)
    {
        var key = (parameter.type, parameter.colour);
        if (parameter.type is (CardType.技能 or CardType.状态 or CardType.诅咒))
        {
            key = (CardType.技能, parameter.colour);
        }

        if (BackgroundSpritePaths.TryGetValue(key, out var path))
        {
            return await AddressablesMgr.Instance.LoadAssetAsync<Sprite>(path);
        }

        Debug.Log($"未找到卡牌边框（Frame）对应的精灵图路径");
        return null; // 返回null或默认精灵
    }
    
    private async UniTask<Sprite> LoadDecorationSpriteAsync(CardParameter parameter)
    {
        if (DecorationSpritePaths.TryGetValue(parameter.rarity,out var path))
        {
            return await AddressablesMgr.Instance.LoadAssetAsync<Sprite>(path);
        }

        Debug.Log($"未找到卡牌边框（Frame）对应的精灵图路径");
        return null; // 返回null或默认精灵
    }
    private async UniTask<Sprite> LoadOrbSpriteAsync(CardParameter parameter)
    {
        if (OrbSpritePaths.TryGetValue(parameter.colour,out var path))
        {
            return await AddressablesMgr.Instance.LoadAssetAsync<Sprite>(path);
        }

        Debug.Log($"未找到能量球（Orb）对应的精灵图路径");
        return null; // 返回null或默认精灵
    }

}
