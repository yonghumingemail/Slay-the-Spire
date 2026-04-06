using System;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.EventSystems;
using Z_Tools;


public class Card_Ironclad_Bash : Card
{
    private InflictDamage _inflictDamage;
    private VulnerableState _vulnerableState;
    private RaycastHit2D _target;
    private int calculated_damage;
    private Enemy _enemy;

    private void OnMouseEnterEnemy(Enemy enemy)
    {
        _enemy = enemy;
        enemy.alertBox.Show(enemy.transform, enemy.spriteRenderer.sprite);
        foreach (var action in enemy._priorityEventCenter.GetEvent("DamageCalculation_BeAttacked"))
        {
            calculated_damage = (action._delegate as Func<int, int>).Invoke(calculated_damage);
        }

        describe = _inflictDamage.GetDescription(calculated_damage) + _vulnerableState.GetDescription();
        cardComponentInfo.UpdateCardUI(this);
    }

    private void OnMouseExitEnemy(Enemy enemy)
    {
        _enemy = enemy;
        enemy?.alertBox.Close();
        calculated_damage = _inflictDamage.damage;
        foreach (var action in _player._priorityEventCenter.GetEvent("DamageCalculation_Attack"))
        {
            calculated_damage = (action._delegate as Func<int, int>).Invoke(calculated_damage);
        }

        describe = _inflictDamage.GetDescription(calculated_damage) + _vulnerableState.GetDescription();
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

        isSelect = false;
        return false;
    }


    public override void Strengthen()
    {
        isStrengthen = true;
        _inflictDamage.damage += 2;
        _vulnerableState.stack += 1;
        describe = _inflictDamage.GetDescription() + _vulnerableState.GetDescription();
        cardComponentInfo.UpdateCardUI(this);
    }

    public override async UniTask Initialized()
    {
        await base.Initialized("Assets/ScriptableObject/CardEvent/Ironclad_Bash.asset");

        cardComponentInfo.HandPile.cardDragLine.Register(cardInteraction);
        calculated_damage = _inflictDamage.damage;

        _player._priorityEventCenter.AddEvent<Action>("DamageValueChange_Attack", () => { OnMouseExitEnemy(null); }, 0);
        priorityQueueEventCenter.AddEvent<Action<Enemy>>("OnMouseEnterEnemy", OnMouseEnterEnemy, 0);
        priorityQueueEventCenter.AddEvent<Action<Enemy>>("OnMouseExitEnemy", OnMouseExitEnemy, 0);

        _inflictDamage = new InflictDamage(6);
        _vulnerableState = new VulnerableState(2);
        AddCardEntry(_inflictDamage);
        AddCardEntry(_vulnerableState);

        cardInteraction.OnMouseUpDelegate += _OnMouseUp;
    }

    private void _OnMouseUp(PointerEventData _data)
    {
        _enemy?.alertBox.Close();
        if (!isSelect) return;
        _target = Physics2D.Raycast(_data.pressEventCamera.ScreenToWorldPoint(_data.position), Vector3.forward,
            15,
            1 << LayerMask.NameToLayer("Enemy"));

        _combatManage.AddCardToExecuteQueue(this);
    }
}