using System;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using UnityEngine;

public class Intent_C : MonoBehaviour
{
    public List<IIntent> entryList { get; private set; } = new List<IIntent>();
    public IIntent currentIntent { get; private set; }
    public Intent_V intentV;

    private Animator _animator;
    private AnimatorComplete _animatorComplete;

    private void Awake()
    {
        intentV = GetComponentInChildren<Intent_V>();
        _animatorComplete = GetComponent<AnimatorComplete>();
        _animator = GetComponent<Animator>();
        intentV.Enable(true);
    }

    private void OnIntentUpdate(IIntent intent)
    {
        if (currentIntent == intent)
        {
            intentV.UpdateUI(intent);
        }
    }

    public void AddIntent(IIntent intent)
    {
        entryList.Add(intent);
        intent.OnUpdate += OnIntentUpdate;
        intent.OnAnimatorPlay += AnimatorComplete;
    }

    public void ShowIntent(IIntent intent)
    {
        currentIntent = intent;
        intentV.UpdateUI(intent);
    }

    public UniTask AnimatorComplete(Action<Animator> action)
    {
        action.Invoke(_animator);
        var task = new UniTaskCompletionSource();

        _animatorComplete.onComplete?.Invoke($"Error:{_animatorComplete._clipName}动画片段中断,onComplete事件提前执行");

        _animatorComplete.onComplete += (clipName) =>
        {
           // print(clipName+"播放结束："+Time.time);
            task.TrySetResult();
            _animatorComplete.onComplete = null;
        };
        return task.Task;
    }

    private void OnDestroy()
    {
        foreach (var entry in entryList)
        {
            entry.OnUpdate = null;
        }
    }
}