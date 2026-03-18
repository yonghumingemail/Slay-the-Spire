using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.EventSystems;

public class Card_Ironclad_Bash : Card
{
    private InflictDamage _inflictDamage;
    private VulnerableState _vulnerableState;
    private RaycastHit2D _target;

    public override async UniTask Trigger(CancellationToken cancellationToken, bool conditionCheck = true)
    {
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
        _vulnerableState.stack += 1;
        cardTextInfo.describe = _inflictDamage.GetDescription();
        cardView.UpdateCardUI(this);
    }

    public override async UniTask Initialized()
    {
        IDrag drag = gameObject.GetComponent<IDrag>();
        drag.SetDragEnabled(false);
        handPile.cardDragLine.Register(_mouseInteraction);

        await base.Initialized("重击", CardType.攻击, 2, "Assets/ScriptableObject/CardEvent/Ironclad_Bash.asset");

        _inflictDamage = new InflictDamage(6);
        _vulnerableState = new VulnerableState(2);
        AddCardEntry(_inflictDamage);
        AddCardEntry(_vulnerableState);
        _mouseInteraction.OnMouseUp += _OnMouseUp;
    }

    private void _OnMouseUp(PointerEventData _data)
    {
        _target = Physics2D.Raycast(_data.pressEventCamera.ScreenToWorldPoint(_data.position), Vector3.forward,
            15,
            1 << LayerMask.NameToLayer("Enemy"));
        handPile.AddAsyncCardEvent(this);
    }
}