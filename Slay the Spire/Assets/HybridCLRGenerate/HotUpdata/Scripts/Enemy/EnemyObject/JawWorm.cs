using Cysharp.Threading.Tasks;
using Random = UnityEngine.Random;

//大颚虫
public class JawWorm : Enemy
{
    private EnemyAction action1;
    private EnemyAction action2;
    private EnemyAction action3;
    
    private AttackIntent attackIntent_Action1;

    private ReinforcementIntent reinforcementIntent_Action2;
    private DeFendIntent defendIntent_Action2;
    private GainPower _gainPower_Action2;

    private AttackIntent attackIntent_Action3;
    private DeFendIntent defendIntent_Action3;

    protected override async UniTask Initialize()
    {
        await base.Initialize();
        _gainPower_Action2 = new GainPower(3);

        IIntent[] action1IntentArray =
        {
            attackIntent_Action1 =
                new AttackIntent(11, 1, _spriteAtlas, _priorityEventCenter, _player._priorityEventCenter)
        };
        IIntent[] action2IntentArray =
        {
            reinforcementIntent_Action2 = new ReinforcementIntent(_spriteAtlas),
            defendIntent_Action2 = new DeFendIntent(6, _spriteAtlas)
        };
        IIntent[] action3IntentArray =
        {
            attackIntent_Action3 =
                new AttackIntent(7, 1, _spriteAtlas, _priorityEventCenter, _player._priorityEventCenter),
            defendIntent_Action3 = new DeFendIntent(5, _spriteAtlas)
        };

        action1 = new EnemyAction(1, "啃咬", action1IntentArray, Action1);
        action2 = new EnemyAction(2, "咆哮", action2IntentArray, Action2);
        action3 = new EnemyAction(3, "猛击", action3IntentArray, Action3);

        currentAction = GetNextAction();
        intentC.ShowIntent(currentAction.intents);
        _buffList.AddBuff(new Anger_BuffObj(2, 999,  gameObject));
    }

    public override EnemyAction GetNextAction()
    {
        var num = Random.Range(0, 100);
        EnemyAction value;
        if (num < 25)
        {
            if (actionList.Count > 0 && actionList[^1].id == 1)
            {
                var num2 = Random.Range(0, 100f);
                value = num2 < 56.2f ? action2 : action3;
            }
            else
            {
                value = action1;
            }
        }
        else if (num < 55)
        {
            if (actionList.Count > 1 && actionList[^1].id == 3 && actionList[^2].id == 3)
            {
                var num3 = Random.Range(0, 100f);
                value = num3 < 35.7 ? action1 : action2;
            }
            else
            {
                value = action3;
            }
        }
        else
        {
            if (actionList.Count > 0 && actionList[^1].id == 2)
            {
                var num4 = Random.Range(0, 100f);
                value = num4 < 41.6 ? action1 : action3;
            }
            else
            {
                value = action2;
            }
        }

        return value;
    }


    public async UniTask Action1()
    {
        print("啃咬");
        _animator.Play("Attack");
        await attackIntent_Action1.Trigger(gameObject, _player.gameObject, _player.TokenSource.Token);
        await _animatorComplete.AwaitCurrentAnimatorComplete();
    }

    public UniTask Action2()
    {
        print("咆哮");
        _gainPower_Action2.Trigger(gameObject, gameObject);
        defendIntent_Action2._gainShield.Trigger(gameObject, gameObject);
        return UniTask.CompletedTask;
    }

    public async UniTask Action3()
    {
        print("猛击");
        _animator.Play("Attack");
        await attackIntent_Action3.Trigger(gameObject, _player.gameObject, _player.TokenSource.Token);
        defendIntent_Action3._gainShield.Trigger(gameObject, gameObject);
        await _animatorComplete.AwaitCurrentAnimatorComplete();
    }
}