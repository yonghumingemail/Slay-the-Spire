using System;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.EventSystems;
using Z_Tools;
using Object = UnityEngine.Object;

public class DirectionalCard
{
    private GameObject directionalArrowLinePrefab;


    public RaycastHit2D targetInfo;
    public string detectLayerName;
    public ISelectableObject SelectableObject { get; private set; }
    public DirectionalArrowLine directionalArrowLine { get; private set; }

    public DirectionalCard(Card card, string detectLayerName)
    {
        this.detectLayerName = detectLayerName;
        targetInfo = default;
        SelectableObject = null;

        card.CardInteraction.OnMouseUpDelegate += data => { OnMouseUp(card, data); };
    }

    public async UniTask Init(Card card, Camera camera)
    {
        directionalArrowLinePrefab = await
            AddressablesMgr.Instance.LoadAssetAsync<GameObject>("Assets/Art/Prefab/UI/DirectionalArrowLine.prefab");
        directionalArrowLine = Object.Instantiate(directionalArrowLinePrefab, card.transform)
            .GetComponent<DirectionalArrowLine>();
        directionalArrowLine.Init(camera);
        card.CardInteraction.OnMouseDownDelegate += directionalArrowLine.Enable;
        card.priorityEventCenter.Subscribe<OnUnSelectCard_EA>(OnUnSelectCard, 0);
    }

    private void OnUnSelectCard(object sender, GameEventArgs args)
    {
        directionalArrowLine.Interrupt();
    }

    public async UniTask<bool> Trigger(Card card, CancellationToken cancellationToken, bool conditionCheck)
    {
        if (targetInfo.collider && conditionCheck)
        {
            card.OnTrigger?.Invoke(card);
            card._energy.SetEnergy(card._energy._energy - card.ExteriorInfo.orbValue);

            foreach (var VARIABLE in card.cardEntries)
            {
                VARIABLE.Trigger(card._player.gameObject, targetInfo.collider.gameObject);
                await UniTask.Yield(cancellationToken);
            }

            card.CardTriggerAnimator(() => { card.Enable(false); });

            return true;
        }

        card.ReturnToHandPosition(card.CardInteraction.enable);
        return false;
    }


    public void OnMouseUp(Card card, PointerEventData _data)
    {
        card.CardInteraction.isInteractable = false;
        SelectableObject?.OnUnSelect();
        directionalArrowLine.Interrupt();
        if (!card.CardInteraction._isDragging) return;
        targetInfo = Physics2D.Raycast(_data.pressEventCamera.ScreenToWorldPoint(_data.position), Vector3.forward,
            15,
            1 << LayerMask.NameToLayer(detectLayerName));
        card._combatManage.AddCardToExecuteQueue(card);
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