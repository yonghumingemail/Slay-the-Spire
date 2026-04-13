using System;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.U2D;

public class AttackIntent : IIntent
{
    private Sprite[] _sprites;

    private PriorityQueueEventCenter _send;
    private PriorityQueueEventCenter _receive;
    public Sprite _sprite { get; private set; }
    public string _text { get; private set; }
    public Intent_V _intentV { get; set; }

    public int value { get; private set; } //数值
    public int number { get; private set; } //次数
    public InflictDamage _inflictDamage { get; private set; }

    public AttackIntent(int value, int number, SpriteAtlas sprites, PriorityQueueEventCenter send, PriorityQueueEventCenter receive)
    {
        _sprites = new[]
        {
            sprites.GetSprite("attack_intent_1"),
            sprites.GetSprite("attack_intent_2"),
            sprites.GetSprite("attack_intent_3"),
            sprites.GetSprite("attack_intent_4"),
            sprites.GetSprite("attack_intent_5"),
            sprites.GetSprite("attack_intent_6"),
            sprites.GetSprite("attack_intent_7"),
        };

        this.value = value;
        this.number = number;
        _inflictDamage = new InflictDamage(value);

        _receive = receive;
        _send = send;

        _receive.AddEvent<Action>("DamageValueChange_BeAttacked", DamageValueChange, 0);
        _send.AddEvent<Action>("DamageValueChange_Attack", DamageValueChange, 0);
    }

    public void OnShow(Intent_V intentV)
    {
        // 使用整数除法计算精灵索引
        int spriteIndex = Math.Min(value / 5, 6);
        _intentV = intentV;
        _sprite = _sprites[spriteIndex];
        _text = number == 1 ? $"{value}" : $"{value}X{number}";
    }

    public void OnHide()
    {
        _intentV = null;
    }

    public async UniTask Trigger(GameObject sender, GameObject receiver, CancellationToken token)
    {
        for (int i = 0; i < number; i++)
        {
            await _inflictDamage.Trigger(sender, receiver);
            await UniTask.Yield(token);
        }
    }

    public string GetDescription()
    {
        return "敌人将要造成" + (number == 1 ? $"{value}点伤害" : $"{value}次X{number}点伤害");
    }

    private void DamageValueChange()
    {
        _inflictDamage.DamageCalculation(_send, _receive);
        value = _inflictDamage.calculated_damage;
        // 使用整数除法计算精灵索引
        int spriteIndex = Math.Min(value / 5, 6);

        // 获取对应的精灵
        _sprite = _sprites[spriteIndex];
        _text = number == 1 ? $"{value}" : $"{value}X{number}";
        _intentV?.UpdateUI(this);
    }
}