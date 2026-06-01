using System;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.EventSystems;

public abstract class DirectionalCard : Card
{
    protected RaycastHit2D targetInfo;

    protected ISelectableObject SelectableObject;

    protected GameObject directionalArrowLinePrefab;
    protected DirectionalArrowLine directionalArrowLine;


    public override async UniTask Initialized()
    {
        await base.Initialized();

        directionalArrowLinePrefab = await
            AddressablesMgr.Instance.LoadAssetAsync<GameObject>("Assets/Art/Prefab/UI/DirectionalArrowLine.prefab");
        directionalArrowLine = Instantiate(directionalArrowLinePrefab, transform).GetComponent<DirectionalArrowLine>();
        directionalArrowLine.Init(mainCamera);

        CardInteraction.OnMouseDownDelegate += OnMouseDown_;
        CardInteraction.OnMouseUpDelegate += OnMouseUp_;
    }


    public override void UnSelectCard()
    {
        directionalArrowLine.Interrupt();
        base.UnSelectCard();
    }

    public override async UniTask<bool> Trigger(CancellationToken cancellationToken, bool conditionCheck = true)
    {
        Debug.Log($"对象：{targetInfo.collider},条件：{(!conditionCheck || TriggerCondition)}");
        if (targetInfo.collider && (!conditionCheck || TriggerCondition))
        {
            OnTrigger?.Invoke(this);
            if (conditionCheck)
            {
                _energy.SetEnergy(_energy._energy - ExteriorInfo.orbValue);
            }

            foreach (var VARIABLE in cardEntries)
            {
                VARIABLE.Trigger(_player.gameObject, targetInfo.collider.gameObject);
                await UniTask.Yield(cancellationToken);
            }

            CardTriggerAnimator(Disable);
            return true;
        }

        CardInteraction.ReturnToHandPosition(CardInteraction.enable);
        return false;
    }

    protected virtual void OnMouseDown_(PointerEventData _data)
    {
        directionalArrowLine.Enable(_data);
        Vector3 pos = cardInteraction.mouseOverPosition;
        pos.x = 0;
        cardAnimator.TransformEffect(gameObject, pos, Quaternion.identity, cardInteraction.mouseOverScale);
    }

    protected virtual void OnMouseUp_(PointerEventData _data)
    {
        CardInteraction.Disable();
        SelectableObject?.OnUnSelect();
        directionalArrowLine.Interrupt();
        targetInfo = Physics2D.Raycast(mainCamera.ScreenToWorldPoint(_data.position), Vector3.forward,
            15, detectLayer);
        _combatManage.AddCardToExecuteQueue(this);
    }

    protected virtual void OnMouseEnterSelectableObject(ISelectableObject selectableObject)
    {
        SelectableObject = selectableObject;
        selectableObject?.OnSelect();
    }

    protected virtual void OnMouseExitSelectableObject(ISelectableObject selectableObject)
    {
        SelectableObject = selectableObject;
        SelectableObject?.OnUnSelect();
    }

    private void OnDestroy()
    {
        AddressablesMgr.Instance.Release("Assets/Art/Prefab/UI/DirectionalArrowLine.prefab");
    }
}