using System;
using UnityEngine;

public class AnimatorComplete : MonoBehaviour
{
    
    public Action<string> onComplete;
    public string _clipName;
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