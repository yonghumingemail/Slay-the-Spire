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

        _player._priorityEventCenter.Subscribe(DamageValueChange_Attack_EventArgs.id,DamageValueChange_Attack,0);
        priorityEventCenter.Subscribe(OnMouseEnterEnemy_EventArgs.id,OnMouseEnterEnemy,0);
        priorityEventCenter.Subscribe(OnMouseExitEnemy_EventArgs.id,OnMouseExitEnemy,0);

        _directionalCard = new DirectionalCard(this, "Enemy");

        _inflictDamage = new InflictDamage(6,UpdateDescribe);
        AddCardEntry(_inflictDamage);
    }
    public void DamageValueChange_Attack(object send,BaseEventArgs args)
    {
        _inflictDamage.DamageCalculation(_player._priorityEventCenter, null);
    }
    
    public void OnMouseEnterEnemy(object send,BaseEventArgs args)
    {
        if (args is not Enemy_EventArgs enemy_args) return;
        _inflictDamage.DamageCalculation(_player._priorityEventCenter, enemy_args.value._priorityEventCenter);
        _directionalCard.OnMouseEnterSelectableObject(enemy_args.value);

    }
    public void OnMouseExitEnemy(object send,BaseEventArgs args)
    {
        if (args is not Enemy_EventArgs enemy_args) return;
        _inflictDamage.DamageCalculation(_player._priorityEventCenter, null);
        _directionalCard.OnMouseExitSelectableObject(enemy_args.value);

    }
}