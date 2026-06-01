using Cysharp.Threading.Tasks;

public class Card_Ironclad_Bash : DirectionalCard
{
    private InflictDamage _inflictDamage;
    private VulnerableState _vulnerableState;
    protected override string defaultDataPtah { get; set; } = "Assets/ScriptableObject/CardEvent/Ironclad_Bash.asset";
    public override void Strengthen()
    {
        isStrengthen = true;
        _inflictDamage.damage += 2;
        _vulnerableState.stack += 1;
        UpdateDescribe();
    }

    public override async UniTask Initialized()
    {
        await base.Initialized();

        _player._priorityEventCenter.Subscribe<DamageValueChange_Attack_EN>(DamageValueChange_Attack, 0);
        priorityEventCenter.Subscribe<OnMouseEnterEnemy_EA>(OnMouseEnterEnemy, 0);
        priorityEventCenter.Subscribe<OnMouseExitEnemy_EA>(OnMouseExitEnemy, 0);
        
        _inflictDamage = new InflictDamage(6, UpdateDescribe);
        _vulnerableState = new VulnerableState(2);
        AddCardEntry(_inflictDamage);
        AddCardEntry(_vulnerableState);
    }

    public void DamageValueChange_Attack(object send, GameEventArgs args)
    {
        _inflictDamage.DamageCalculation(_player._priorityEventCenter, null);
    }

    public void OnMouseEnterEnemy(object send, GameEventArgs args)
    {
        var enemy = Args_T.Check<Enemy>(args);
        _inflictDamage.DamageCalculation(_player._priorityEventCenter, enemy._priorityEventCenter);
        OnMouseEnterSelectableObject(enemy);
    }

    public void OnMouseExitEnemy(object send, GameEventArgs args)
    {
        var enemy = Args_T.Check<Enemy>(args);
        _inflictDamage.DamageCalculation(_player._priorityEventCenter, null);
        OnMouseExitSelectableObject(enemy);
    }
}