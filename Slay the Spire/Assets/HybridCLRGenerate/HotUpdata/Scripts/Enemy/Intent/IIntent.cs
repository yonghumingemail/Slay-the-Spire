using System;
using System.Diagnostics.CodeAnalysis;
using Cysharp.Threading.Tasks;
using UnityEngine;

public interface IIntent
{
    Sprite _sprite { get; }
    string _text { get; }
    Action<IIntent> OnUpdate { get; set; }

    UniTask Execute(GameObject sender, [NotNull] GameObject receiver);
}

public class AttackIntent : IIntent
{
    private int value; //数值
    private int number; //次数
    private InflictDamage _inflictDamage;
    private Sprite[] _sprites;
    private Animator _animator;
    public Action<IIntent> OnUpdate { get; set; }


    public Sprite _sprite { get; private set; }
    public string _text { get; private set; }

    public AttackIntent(int value, int number, Animator animator, PriorityQueueEventCenter priorityQueueEventCenter)
    {
        Initialized().Forget();
        this.value = value;
        this.number = number;
        _inflictDamage = new InflictDamage(value);
        _animator = animator;
        priorityQueueEventCenter.AddEvent<Action<BuffObj, int>>("GainBuff", GainBuff, 0);
    }

    private void GainBuff(BuffObj buff, int stack)
    {
        int total = buff.stack + value; // 计算总层数

        // 使用整数除法计算精灵索引
        int spriteIndex = Math.Min(total / 5, 6);

        // 获取对应的精灵
        _sprite = _sprites[spriteIndex];
        _text = number == 1 ? $"{value + buff.stack}" : $"{value + buff.stack}X{number}";
        OnUpdate?.Invoke(this);
    }

    private async UniTask Initialized()
    {
        var resource = new[]
        {
            AddressablesMgr.Instance.LoadAssetAsync<Sprite>(
                "Assets/Art/Image/ui/intent/attack/attack_intent_1.png"),
            AddressablesMgr.Instance.LoadAssetAsync<Sprite>(
                "Assets/Art/Image/ui/intent/attack/attack_intent_2.png"),
            AddressablesMgr.Instance.LoadAssetAsync<Sprite>(
                "Assets/Art/Image/ui/intent/attack/attack_intent_3.png"),
            AddressablesMgr.Instance.LoadAssetAsync<Sprite>(
                "Assets/Art/Image/ui/intent/attack/attack_intent_4.png"),
            AddressablesMgr.Instance.LoadAssetAsync<Sprite>(
                "Assets/Art/Image/ui/intent/attack/attack_intent_5.png"),
            AddressablesMgr.Instance.LoadAssetAsync<Sprite>(
                "Assets/Art/Image/ui/intent/attack/attack_intent_6.png"),
            AddressablesMgr.Instance.LoadAssetAsync<Sprite>(
                "Assets/Art/Image/ui/intent/attack/attack_intent_7.png"),
        };
        _sprites = await UniTask.WhenAll(resource);
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
        
    }
}