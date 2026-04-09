using System;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.EventSystems;

public class Card_Ironclad_Bash : Card
{
    private InflictDamage _inflictDamage;
    private VulnerableState _vulnerableState;
    private DirectionalCard _directionalCard;

    private int calculated_damage; //记录经过我方buff计算后的伤害

    public override UniTask<bool> Trigger(CancellationToken cancellationToken, bool conditionCheck = true)
    {
        return _directionalCard.Trigger(this, cancellationToken,  !conditionCheck || _energy.SetEnergy(_energy._energy - exteriorInfo.orbValue));
    }


    public override void Strengthen()
    {
        isStrengthen = true;
        _inflictDamage.damage += 2;
        _vulnerableState.stack += 1;
        UpdateDescribe();
    }

    public override async UniTask Initialized()
    {
        await base.Initialized("Assets/ScriptableObject/CardEvent/Ironclad_Bash.asset");

        _player._priorityEventCenter.AddEvent<Action>("DamageValueChange_Attack", () =>
        {
            _inflictDamage.DamageCalculation(_player._priorityEventCenter, null);
            UpdateDescribe();
            print(_inflictDamage.calculated_damage);
            print(_inflictDamage.GetDescription());
        }, 0);

        cardInteraction.OnMouseUpDelegate += (data) => { _directionalCard.OnMouseUp(this, data); };
        priorityEventCenter.AddEvent<Action<Enemy>>("OnMouseEnterEnemy", (enemy) => { _inflictDamage.DamageCalculation(_player._priorityEventCenter, enemy._priorityEventCenter); }, 0);

        priorityEventCenter.AddEvent<Action<Enemy>>("OnMouseExitEnemy", (enemy) => { _inflictDamage.DamageCalculation(_player._priorityEventCenter, null); }, 0);

        _directionalCard = new DirectionalCard(this, "Enemy");

        _inflictDamage = new InflictDamage(6);
        _vulnerableState = new VulnerableState(2);
        AddCardEntry(_inflictDamage);
        AddCardEntry(_vulnerableState);
    }
}