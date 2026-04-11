using System;
using System.Diagnostics.CodeAnalysis;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.U2D;

public class DeFendIntent : IIntent
{
    public Sprite _sprite { get; private set; }
    public string _text { get; private set; }
    public Action<IIntent> OnUpdate { get; set; }
    public Func<Action<Animator>, UniTask> OnAnimatorPlay { get; set; }

    private GainShield _gainShield;

    public DeFendIntent(int value, PriorityQueueEventCenter priorityQueueEventCenter)
    {
        Initialized().Forget();
        _gainShield = new GainShield(value);
    }

    private async UniTask Initialized()
    {
        var resource = await AddressablesMgr.Instance.LoadAssetAsync<SpriteAtlas>(
            "Assets/Art/Image/SpriteAtlas/Intent.spriteatlasv2");
        _sprite = resource.GetSprite("Assets/Art/Image/ui/intent/defend.png");
        _text = string.Empty;
    }

    public async UniTask Execute(GameObject sender, [NotNull] GameObject receiver,CancellationToken token)
    {
        var task1 = _gainShield.Trigger(sender, receiver);
        var task2 = OnAnimatorPlay.Invoke(ExecuteAnimator);
        await UniTask.WhenAll(task1, task2);
    }

    private void ExecuteAnimator(Animator animator)
    {
       // animator.Play("Attack");
    }
}