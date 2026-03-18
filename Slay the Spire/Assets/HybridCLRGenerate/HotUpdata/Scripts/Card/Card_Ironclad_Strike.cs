using System;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.EventSystems;

public class Card_Ironclad_Strike : Card
{
    private InflictDamage _inflictDamage;
    private RaycastHit2D _target;

    public override async UniTask Trigger(CancellationToken cancellationToken, bool conditionCheck = true)
    {
        print(_target.collider != null && (!conditionCheck || energy.SetEnergy(energy._energy - cardTextInfo.orbValue)));
        
        print(_target.collider != null);
        print(energy.SetEnergy(energy._energy - cardTextInfo.orbValue));
        if (_target.collider != null && (!conditionCheck || energy.SetEnergy(energy._energy - cardTextInfo.orbValue)))
        {
              Debug.Log("Trigger");
            foreach (var VARIABLE in cardTextInfo.cardEntries)
            {
                await VARIABLE.Trigger(gameObject, _target.collider.gameObject);
            }

            await CardTriggerAnimator();
            _target = default;
        }
        else
        {
            cardInteraction.TransformEffect(
                gameObject,
                cardInteraction.position,
                cardInteraction.rotation,
                cardInteraction.scale);
             Debug.Log("UnTrigger");
        }
    }

    public override void Strengthen()
    {
        cardTextInfo.isStrengthen = true;
        _inflictDamage.damage += 2;
        cardTextInfo.describe = _inflictDamage.GetDescription();
        cardView.UpdateCardUI(this);
    }

    public override async UniTask Initialized()
    {
        IDrag drag = gameObject.GetComponent<IDrag>();
        drag.SetDragEnabled(false);
        handPile.cardDragLine.Register(_mouseInteraction);
        
        await base.Initialized("打击", CardType.攻击, 1, "Assets/ScriptableObject/CardEvent/Ironclad_Strike.asset");
        _inflictDamage = new InflictDamage(6);
        AddCardEntry(_inflictDamage);
        _mouseInteraction.OnMouseUp += _OnMouseUp;
    }

    private void _OnMouseUp(PointerEventData _data)
    {
        _target = Physics2D.Raycast(_data.pressEventCamera.ScreenToWorldPoint(_data.position), Vector3.forward,
            15,
            1 << LayerMask.NameToLayer("Enemy"));
        handPile.AddAsyncCardEvent(this);
        //_target有数据但在其他地方报空
        print(_target.collider != null);
    }
}