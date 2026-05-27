using System;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.EventSystems;

public class DirectionalCard
{
    public RaycastHit2D targetInfo;
    public string detectLayerName;
    public ISelectableObject SelectableObject { get; private set; }

    public DirectionalCard(Card card, string detectLayerName)
    {
        this.detectLayerName = detectLayerName;

        targetInfo = default;
        SelectableObject = null;

        card.CardInteraction.OnMouseDownDelegate += data =>
        {
            card.CardInfo.HandPile.DirectionalArrowLine.Enable(data);
            card.CardInfo.HandPile.SetSelectedCard(card);
        };
        card.CardInteraction.OnMouseUpDelegate += data => { OnMouseUp(card, data); };
    }

    public async UniTask<bool> Trigger(Card card, CancellationToken cancellationToken, bool conditionCheck)
    {
        if (targetInfo.collider&&conditionCheck)
        {
            card._energy.SetEnergy(card._energy._energy - card.ExteriorInfo.orbValue);
            card.CardInteraction.isInteractable = false;
            foreach (var VARIABLE in card.cardEntries)
            {
                 VARIABLE.Trigger(card._player.gameObject, targetInfo.collider.gameObject);
                await UniTask.Yield(cancellationToken);
            }

            await card.CardTriggerAnimator();

            card.Enable(false);
            card.CardInfo.HandPile.SortCards();

            return true;
        }

        card.ReturnToHandPosition();
        return false;
    }


    public void OnMouseUp(Card card, PointerEventData _data)
    {
        SelectableObject?.OnUnSelect();
        card.CardInfo.HandPile.DirectionalArrowLine.Interrupt();
        
        if (!card.CardInteraction._isDragging) return;
        targetInfo = Physics2D.Raycast(_data.pressEventCamera.ScreenToWorldPoint(_data.position), Vector3.forward,
            15,
            1 << LayerMask.NameToLayer(detectLayerName));
        Debug.Log(targetInfo.collider==null);
        card._combatManage.AddCardToExecuteQueue(card);
        card.CardInfo.HandPile.SetSelectedCard(null);
    }

    public void OnMouseEnterSelectableObject(ISelectableObject selectableObject)
    {
        SelectableObject = selectableObject;
        selectableObject?.OnSelect();
    }

    public void OnMouseExitSelectableObject(ISelectableObject selectableObject)
    {
        SelectableObject = selectableObject;
        SelectableObject?.OnUnSelect();
    }
}