using System;
using UnityEngine;

public class AnimatorComplete : MonoBehaviour
{
    
    public Action<string> onStart;
    public Action<string> onComplete;
    
    private Animator _animator;
    private AnimatorOverrideController _animatorOverrideController;

    private void Awake()
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
            AnimationEvent startEvent = new AnimationEvent
            {
                time = 0,
                stringParameter = animationClip.name,
                functionName = "OnStart"
            };
            animationClip.AddEvent(startEvent);
            animationClip.AddEvent(completeEvent);
        }
        
        _animator.runtimeAnimatorController = _animatorOverrideController;
    }

    public void OnStart(string clipName)
    {
        onStart?.Invoke(clipName);
    }
    public void OnComplete(string clipName)
    {
        onComplete?.Invoke(clipName);
    }
}