using System;
using System.Diagnostics.CodeAnalysis;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.U2D;

public class AttackIntent : IIntent
{
    private int value; //数值
    private int number; //次数
    private InflictDamage _inflictDamage;
    private Sprite[] _sprites;
    public Action<IIntent> OnUpdate { get; set; }
    public Func<Action<Animator>, UniTask> OnAnimatorPlay { get; set; }
    private PriorityQueueEventCenter  _priorityEventCenter ;

    public Sprite _sprite { get; private set; }
    public string _text { get; private set; }

    private Player _player;
    
    public AttackIntent(int value, int number, PriorityQueueEventCenter priorityQueueEventCenter,Player player)
    {
        Initialized().Forget();
        this.value = value;
        this.number = number;
        _inflictDamage = new InflictDamage(value);
        _player = player;

        _priorityEventCenter= priorityQueueEventCenter;
        _player._priorityEventCenter.AddEvent<Action>("DamageValueChange_BeAttacked", DamageValueChange, 0);
        _priorityEventCenter.AddEvent<Action>("DamageValueChange_Attack", DamageValueChange, 0);
       
    }
    
    private void DamageValueChange()
    {
       _inflictDamage.DamageCalculation(_priorityEventCenter, _player._priorityEventCenter);
        value=_inflictDamage.damage;
        // 使用整数除法计算精灵索引
        int spriteIndex = Math.Min(value / 5, 6);

        // 获取对应的精灵
        _sprite = _sprites[spriteIndex];
        _text = number == 1 ? $"{value}" : $"{value}X{number}";
        OnUpdate?.Invoke(this);
    }
    

    private async UniTask Initialized()
    {
        var resource = await AddressablesMgr.Instance.LoadAssetAsync<SpriteAtlas>(
            "Assets/Art/Image/SpriteAtlas/Intent.spriteatlasv2");
        _sprites = new[]
        {
            resource.GetSprite("attack_intent_1"),
            resource.GetSprite("attack_intent_2"),
            resource.GetSprite("attack_intent_3"),
            resource.GetSprite("attack_intent_4"),
            resource.GetSprite("attack_intent_5"),
            resource.GetSprite("attack_intent_6"),
            resource.GetSprite("attack_intent_7"),
        };
        // 使用整数除法计算精灵索引
        int spriteIndex = Math.Min(value / 5, 6);

        _sprite = _sprites[spriteIndex];
        _text = number == 1 ? $"{value}" : $"{value}X{number}";
    }


    public async UniTask Execute(GameObject sender, [NotNull] GameObject receiver,CancellationToken token)
    {
        for (int i = 0; i < number; i++)
        {
            await _inflictDamage.Trigger(sender, receiver);
            await UniTask.Yield(token);
        }

        await OnAnimatorPlay.Invoke(ExecuteAnimator);
    }

    private void ExecuteAnimator(Animator animator)
    {
        animator.Play("Attack");
    }
}