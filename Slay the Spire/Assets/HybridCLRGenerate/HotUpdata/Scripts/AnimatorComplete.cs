using System;
using Cysharp.Threading.Tasks;
using UnityEngine;

public class AnimatorComplete : MonoBehaviour
{
    public Action<string> onComplete;
    public string _clipName;
    private Animator _animator;
    private AnimatorOverrideController _animatorOverrideController;

    public void Awake()
    {
        _animator = GetComponent<Animator>();
        _animatorOverrideController = new AnimatorOverrideController(_animator.runtimeAnimatorController);

        foreach (var animationClip in _animatorOverrideController.animationClips)
        {
            AnimationEvent completeEvent = new AnimationEvent
            {
                time = animationClip.length,
                stringParameter = animationClip.name,
                functionName = "OnComplete"
            };
            animationClip.AddEvent(completeEvent);
        }

        _animator.runtimeAnimatorController = _animatorOverrideController;
    }

    public void OnComplete(string clipName)
    {
        _clipName = clipName;
        onComplete?.Invoke(clipName);
    }

    public UniTask AwaitCurrentAnimatorComplete()
    {
        var task = new UniTaskCompletionSource();

        onComplete?.Invoke($"Error:{_clipName}动画片段完成事件中断,onComplete事件提前执行");

        onComplete += (clipName) =>
        {
            // print(clipName+"播放结束："+Time.time);
            task.TrySetResult();
            onComplete = null;
        };
        return task.Task;
    }
}