using System;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.EventSystems;
using Z_Tools;

public class Card_Ironclad_Strike : Card
{
    private InflictDamage _inflictDamage;
    private RaycastHit2D _target;

    public override async UniTask<bool> Trigger(CancellationToken cancellationToken, bool conditionCheck = true)
    {
        if (_target.collider != null && (!conditionCheck || energy.SetEnergy(energy._energy - ExteriorInfo.orbValue)))
        {
            isInteractable = false;
            foreach (var VARIABLE in cardEntries)
            {
                await VARIABLE.Trigger(gameObject, _target.collider.gameObject);
            }

            await CardTriggerAnimator();
            _target = default;
            Enable(false);
            handPile.SortCards();
            return true;
        }

        CardAnimator.TransformEffect(
            gameObject,
            position,
            rotation.eulerAngles,
            scale);
        return false;
    }

    public override void OnUnSelectedCard()
    {
        base.OnUnSelectedCard();
        handPile.cardDragLine.Interrupt();
    }

    public override void Strengthen()
    {
        isStrengthen = true;
        _inflictDamage.damage += 2;
        describe = _inflictDamage.GetDescription();
        cardView.UpdateCardUI(this);
    }

    public override async UniTask Initialized()
    {
        handPile.cardDragLine.Register(_mouseInteraction);

        await base.Initialized("Assets/ScriptableObject/CardEvent/Ironclad_Strike.asset");
        _inflictDamage = new InflictDamage(6);
        AddCardEntry(_inflictDamage);
        _mouseInteraction.OnMouseUpDelegate += _OnMouseUp;
    }

    private void _OnMouseUp(PointerEventData _data)
    {
        _target = Physics2D.Raycast(_data.pressEventCamera.ScreenToWorldPoint(_data.position), Vector3.forward,
            15,
            1 << LayerMask.NameToLayer("Enemy"));
        combatManage.AddCardToExecuteQueue(this);
    }
}