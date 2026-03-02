using System;
using Cysharp.Threading.Tasks;
using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class UICard : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
    public CardUIInfoComponent _infoComponent;
    public CardEvent_Abs cardEvent;
    public float _magnification = 1.1f;
    public float magnification_speed = 0.15f;
    
    public Vector3 _scale;

    private void Awake()
    {
        _infoComponent = new CardUIInfoComponent(this);
        _scale = transform.localScale;
    }
    public async UniTask<bool> Initialized(CardEvent_Abs cardEventAbs)
    {
        cardEvent = cardEventAbs;
        cardEvent._eventCenter.AddEvent<Action>("OnCardDataUpdated",()=>
        {
            CardFactory.Instance.UpdateCardUI(this, cardEventAbs).Forget();
        });
        return await CardFactory.Instance.UpdateCardUI(this, cardEventAbs);
    }
    
   
    public void OnPointerEnter(PointerEventData eventData)
    {
        
        DOTween.To(() => transform.localScale, value => { transform.localScale = value; }, _scale * _magnification,
            magnification_speed);

    }

    public void OnPointerExit(PointerEventData eventData)
    {    
        DOTween.To(() => transform.localScale, value => { transform.localScale = value; }, _scale, magnification_speed);
    }
}
