using System;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.U2D;

public class DeFendIntent : IIntent
{
    public Sprite _sprite { get; private set; }
    public string _text { get; private set; }
    public Action<IIntent> OnUpdate { get; set; }
    public Func<Action<Animator>, UniTask> OnAnimatorPlay { get; set; }

    private int _value;
    private GainShield _gainShield;

    public DeFendIntent(int value, PriorityQueueEventCenter priorityQueueEventCenter)
    {
        Initialized().Forget();
        _value = value;
        _gainShield = new GainShield(_value);
    }

    private async UniTask Initialized()
    {
        var resource = await AddressablesMgr.Instance.LoadAssetAsync<SpriteAtlas>(
            "Assets/Art/Image/SpriteAtlas/Intent.spriteatlasv2");
        _sprite = resource.GetSprite("Assets/Art/Image/ui/intent/defend.png");
        _text = string.Empty;
        OnUpdate?.Invoke(this);
    }

    public UniTask Execute(GameObject sender, GameObject receiver)
    {
        return UniTask.CompletedTask;
    }
}