using System;
using System.Text;
using System.Threading;
using Cysharp.Threading.Tasks;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using Z_Tools;


public class Card_Ironclad_Strike : Card
{
    private InflictDamage _inflictDamage;

    private RaycastHit2D _target;
    private Enemy _enemy;


    private void OnMouseEnterEnemy(Enemy enemy)
    {
        _enemy = enemy;
        enemy.alertBox.Show(enemy.transform, enemy.spriteRenderer.sprite);
        foreach (var action in enemy._priorityEventCenter.GetEvent("DamageCalculation_BeAttacked"))
        {
           _inflictDamage.calculated_damage = (action._delegate as Func<int, int>).Invoke( _inflictDamage.calculated_damage);
        }

        describe = _inflictDamage.GetDescription();
        cardComponentInfo.UpdateCardUI(this);
    }

    private void OnMouseExitEnemy(Enemy enemy)
    {
        _enemy = enemy;
        enemy?.alertBox.Close();
        _inflictDamage.calculated_damage = _inflictDamage.damage;
        foreach (var action in _player._priorityEventCenter.GetEvent("DamageCalculation_Attack"))
        {
            _inflictDamage.calculated_damage = (action._delegate as Func<int, int>).Invoke( _inflictDamage.calculated_damage);
        }

        describe = _inflictDamage.GetDescription();
        cardComponentInfo.UpdateCardUI(this);
    }


    public override async UniTask<bool> Trigger(CancellationToken cancellationToken, bool conditionCheck = true)
    {
        if (_target.collider != null && (!conditionCheck || _energy.SetEnergy(_energy._energy - exteriorInfo.orbValue)))
        {
            cardInteraction.isInteractable = false;
            foreach (var VARIABLE in cardEntries)
            {
                await VARIABLE.Trigger(_player.gameObject, _target.collider.gameObject);
            }

            await CardTriggerAnimator();
            _target = default;
            Enable(false);
            cardComponentInfo.HandPile.SortCards();

            return true;
        }
        cardAnimator.TransformEffectToRotation(gameObject, cardInteraction.position, cardInteraction.rotation, cardInteraction.scale);
        return false;
    }

    public override void Strengthen()
    {
        isStrengthen = true;
        _inflictDamage.damage += 3;
        describe = _inflictDamage.GetDescription();
        cardComponentInfo.UpdateCardUI(this);
    }

    public override async UniTask Initialized()
    {
        await base.Initialized("Assets/ScriptableObject/CardEvent/Ironclad_Strike.asset");

        cardComponentInfo.HandPile.cardDragLine.Register(this);
        _player._priorityEventCenter.AddEvent<Action>("DamageValueChange_Attack", () => { OnMouseExitEnemy(null); }, 0);
        priorityEventCenter.AddEvent<Action<Enemy>>("OnMouseEnterEnemy", OnMouseEnterEnemy, 0);
        priorityEventCenter.AddEvent<Action<Enemy>>("OnMouseExitEnemy", OnMouseExitEnemy, 0);

        _inflictDamage = new InflictDamage(6);
        AddCardEntry(_inflictDamage);
        cardInteraction.OnMouseUpDelegate += _OnMouseUp;
    }

    private void _OnMouseUp(PointerEventData _data)
    {
        _enemy?.alertBox.Close();
        if (!cardInteraction._isDragging) return;
        _target = Physics2D.Raycast(_data.pressEventCamera.ScreenToWorldPoint(_data.position), Vector3.forward,
            15,
            1 << LayerMask.NameToLayer("Enemy"));
        
        _combatManage.AddCardToExecuteQueue(this);
    }
}