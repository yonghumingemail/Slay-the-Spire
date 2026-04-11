using System;
using System.Threading;
using Cysharp.Threading.Tasks;

public class Card_Ironclad_Strike : Card
{
    private InflictDamage _inflictDamage;
    private DirectionalCard _directionalCard;

    public override UniTask<bool> Trigger(CancellationToken cancellationToken, bool conditionCheck = true)
    {
        return _directionalCard.Trigger(this, cancellationToken,
            !conditionCheck || (_energy._energy - exteriorInfo.orbValue) > -1);
    }

    public override void Strengthen()
    {
        isStrengthen = true;
        _inflictDamage.damage += 3;
        UpdateDescribe();
    }

    public override async UniTask Initialized()
    {
        await base.Initialized("Assets/ScriptableObject/CardEvent/Ironclad_Strike.asset");

        _player._priorityEventCenter.AddEvent<Action>("DamageValueChange_Attack", () =>
        {
            _inflictDamage.DamageCalculation(_player._priorityEventCenter, null);
            UpdateDescribe();
        }, 0);


        priorityEventCenter.AddEvent<Action<Enemy>>("OnMouseEnterEnemy",
            (enemy) =>
            {
                _inflictDamage.DamageCalculation(_player._priorityEventCenter, enemy._priorityEventCenter);
                _directionalCard.OnMouseEnterSelectableObject(enemy);
            },
            0);
        priorityEventCenter.AddEvent<Action<Enemy>>("OnMouseExitEnemy",
            (enemy) =>
            {
                _inflictDamage.DamageCalculation(_player._priorityEventCenter, null);
                _directionalCard.OnMouseExitSelectableObject(enemy);
            }, 0);

        _directionalCard = new DirectionalCard(this, "Enemy");

        _inflictDamage = new InflictDamage(6);
        AddCardEntry(_inflictDamage);
    }
}