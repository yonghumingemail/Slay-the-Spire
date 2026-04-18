using System;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;

public class AnimatorComplete : MonoBehaviour
{
    public string _clipName;

    private Action<string> onComplete;
    private Animator _animator;
    private AnimatorOverrideController _animatorOverrideController;
    private UniTaskCompletionSource completionSource;

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
        // print(clipName+"播放结束："+Time.time);
        completionSource?.TrySetResult();
        completionSource = null;
    }

    public UniTask AwaitCurrentAnimatorComplete()
    {
        if (completionSource!=null)
        {
            onComplete?.Invoke($"Error:{_clipName}动画播放中断,onComplete事件提前执行");   
        }
        
        completionSource = new UniTaskCompletionSource();
        return completionSource.Task;
    }
}