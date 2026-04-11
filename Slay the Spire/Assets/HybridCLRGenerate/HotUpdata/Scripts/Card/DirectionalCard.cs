using System;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEditor.Experimental.GraphView;
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
            card.CardComponentInfo.HandPile.DirectionalArrowLine.Enable(data);
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
                await VARIABLE.Trigger(card._player.gameObject, targetInfo.collider.gameObject);
                await UniTask.Yield(cancellationToken);
            }

            await card.CardTriggerAnimator();

            card.Enable(false);
            card.CardComponentInfo.HandPile.SortCards();

            return true;
        }

        card.ReturnToHandPosition();
        return false;
    }


    public void OnMouseUp(Card card, PointerEventData _data)
    {
        SelectableObject?.OnUnSelect();
        card.CardComponentInfo.HandPile.DirectionalArrowLine.Interrupt();
        if (!card.CardInteraction._isDragging) return;
        targetInfo = Physics2D.Raycast(_data.pressEventCamera.ScreenToWorldPoint(_data.position), Vector3.forward,
            15,
            1 << LayerMask.NameToLayer(detectLayerName));

        card._combatManage.AddCardToExecuteQueue(card);
    }

    public void OnMouseEnterSelectableObject(ISelectableObject selectableObject)
    {
        SelectableObject = selectableObject;
        selectableObject.OnSelect();
    }

    public void OnMouseExitSelectableObject(ISelectableObject selectableObject)
    {
        SelectableObject = selectableObject;
        SelectableObject.OnUnSelect();
    }
}