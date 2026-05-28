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

        // card.CardInteraction.OnMouseDownDelegate += data =>
        // {
        //     card.CardInfo.HandPile.DirectionalArrowLine.Enable(data);
        //     card.CardInfo.HandPile.SetSelectedCard(card);
        // };
        // card.CardInteraction.OnMouseUpDelegate += data => { OnMouseUp(card, data); };
        //
        // card.CardInteraction.OnMouseEnterDelegate += data => { card.mouseEnter = true; };
        // card.CardInteraction.OnMouseExitDelegate += data => { card.mouseEnter = false; };
    }

    public async UniTask<bool> Trigger(Card card, CancellationToken cancellationToken, bool conditionCheck)
    {
        if (targetInfo.collider&&conditionCheck)
        {
            card._energy.SetEnergy(card._energy._energy - card.ExteriorInfo.orbValue);
           
            foreach (var VARIABLE in card.cardEntries)
            {
                 VARIABLE.Trigger(card._player.gameObject, targetInfo.collider.gameObject);
                await UniTask.Yield(cancellationToken);
            }
            card.CardInfo.HandPile.cardInstances.Remove(card);
            card.CardInfo.HandPile.SortCards();
            await card.CardTriggerAnimator();

            card.Enable(false);
           

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
        card.CardInteraction.isInteractable = false;
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