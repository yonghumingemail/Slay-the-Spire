using System;
using System.Diagnostics.CodeAnalysis;
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
    public  Func<Action<Animator>,UniTask> OnAnimatorPlay { get; set; }


    public Sprite _sprite { get; private set; }
    public string _text { get; private set; }

    public AttackIntent(int value, int number, PriorityQueueEventCenter priorityQueueEventCenter)
    {
        Initialized().Forget();
        this.value = value;
        this.number = number;
        _inflictDamage = new InflictDamage(value);
        
        priorityQueueEventCenter.AddEvent<Action<BuffObj, int>>("GainBuff", GainBuff, 0);
    }

    private void GainBuff(BuffObj buff, int stack)
    {
        //不止在获得力量buff时更新图形，应该在伤害发生变化时都进行更新
        if (buff.GetType()!=typeof(Power_BuffObj)) return;
        int total = buff.stack; 

        // 使用整数除法计算精灵索引
        int spriteIndex = Math.Min(total / 5, 6);

        // 获取对应的精灵
        _sprite = _sprites[spriteIndex];
        _text = number == 1 ? $"{value + buff.stack}" : $"{value + buff.stack}X{number}";
        OnUpdate?.Invoke(this);
    }

    private async UniTask Initialized()
    {
        var resource = await AddressablesMgr.Instance.LoadAssetAsync<SpriteAtlas>(
                "Assets/Art/Image/SpriteAtlas/Intent.spriteatlasv2");
        _sprites = new []
        {
            resource.GetSprite("Assets/Art/Image/ui/intent/attack/attack_intent_1.png"),
            resource.GetSprite("Assets/Art/Image/ui/intent/attack/attack_intent_2.png"),
            resource.GetSprite("Assets/Art/Image/ui/intent/attack/attack_intent_3.png"),
            resource.GetSprite("Assets/Art/Image/ui/intent/attack/attack_intent_4.png"),
            resource.GetSprite("Assets/Art/Image/ui/intent/attack/attack_intent_5.png"),
            resource.GetSprite("Assets/Art/Image/ui/intent/attack/attack_intent_6.png"),
            resource.GetSprite("Assets/Art/Image/ui/intent/attack/attack_intent_7.png"),
        };
        
        // 使用整数除法计算精灵索引
        int spriteIndex = Math.Min(value / 5, 6);
        
        _sprite = _sprites[spriteIndex];
        _text = number == 1 ? $"{value}" : $"{value}X{number}";
        OnUpdate?.Invoke(this);
    }


    public async UniTask Execute(GameObject sender, [NotNull] GameObject receiver)
    {
        for (int i = 0; i < number; i++)
        {
            await _inflictDamage.Trigger(sender, receiver);
        }
        await OnAnimatorPlay.Invoke(ExecuteAnimator);
        
    }

    private void ExecuteAnimator(Animator animator)
    {
        animator.Play("Attack");
    }
}