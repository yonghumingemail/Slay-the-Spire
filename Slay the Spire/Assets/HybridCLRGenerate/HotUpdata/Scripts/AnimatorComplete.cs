using System;
using UnityEngine;

public class AnimatorComplete
{
    public Action<string> onComplete;
    public string _clipName;
    private Animator _animator;
    private AnimatorOverrideController _animatorOverrideController;

    public void Awake(Animator animator)
    {
        _animator = animator;
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
}