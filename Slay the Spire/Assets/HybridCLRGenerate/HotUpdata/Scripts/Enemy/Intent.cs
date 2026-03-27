using System;
using System.Diagnostics.CodeAnalysis;
using Cysharp.Threading.Tasks;
using UnityEngine;

public interface Intent
{
    public void Show();
    public UniTask Execute(GameObject sender, [NotNull] GameObject receiver);
}

public class AttackIntent : Intent
{
    protected Intent_V _intentV;
    private int value; //数值
    private int number; //次数
    private InflictDamage _inflictDamage;
    private Sprite[] _sprites;
    private Sprite _sprite;
    private string _text;

    public AttackIntent(int value, int number, Intent_V intentV, PriorityQueueEventCenter priorityQueueEventCenter)
    {
        Initialized().Forget();
        this.value = value;
        this.number = number;
        _intentV = intentV;
        _inflictDamage = new InflictDamage(value);
        
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
    }

    private async UniTask Initialized()
    {
        _sprites = new[]
        {
            await AddressablesMgr.Instance.LoadAssetAsync<Sprite>(
                "Assets/Art/Image/ui/intent/attack/attack_intent_1.png"),
            await AddressablesMgr.Instance.LoadAssetAsync<Sprite>(
                "Assets/Art/Image/ui/intent/attack/attack_intent_2.png"),
            await AddressablesMgr.Instance.LoadAssetAsync<Sprite>(
                "Assets/Art/Image/ui/intent/attack/attack_intent_3.png"),
            await AddressablesMgr.Instance.LoadAssetAsync<Sprite>(
                "Assets/Art/Image/ui/intent/attack/attack_intent_4.png"),
            await AddressablesMgr.Instance.LoadAssetAsync<Sprite>(
                "Assets/Art/Image/ui/intent/attack/attack_intent_5.png"),
            await AddressablesMgr.Instance.LoadAssetAsync<Sprite>(
                "Assets/Art/Image/ui/intent/attack/attack_intent_6.png"),
            await AddressablesMgr.Instance.LoadAssetAsync<Sprite>(
                "Assets/Art/Image/ui/intent/attack/attack_intent_7.png"),
        };
        
        // 使用整数除法计算精灵索引
        int spriteIndex = Math.Min(value / 5, 6); 

        // 获取对应的精灵
        Sprite selectedSprite = _sprites[spriteIndex];
        _text = number == 1 ? $"{value}" : $"{value}X{number}";
        
        _intentV._spriteRenderer.sprite = selectedSprite;
        _intentV._textMeshPro.SetText(_text);
    }

    public void Show()
    {
        _intentV._spriteRenderer.sprite = _sprite;
        _intentV._textMeshPro.SetText(_text);
    }

    public async UniTask Execute(GameObject sender, [NotNull] GameObject receiver)
    {
        for (int i = 0; i < number; i++)
        {
            await _inflictDamage.Trigger(sender, receiver);
        }
    }
}