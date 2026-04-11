using System;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using UnityEngine;

public class Intent_C : MonoBehaviour
{
    //已经执行的意图列表
    public List<IIntent> executedList { get; private set; } = new List<IIntent>();

    public IIntent currentIntent { get; private set; }
    public Intent_V[] intentV;

    private Animator _animator;
    private AnimatorComplete _animatorComplete;

    private void Awake()
    {
        intentV = GetComponentsInChildren<Intent_V>();
        _animatorComplete = GetComponent<AnimatorComplete>();
        _animator = GetComponent<Animator>();
    }

    private void OnIntentUpdate(IIntent intent)
    {
        
    }

    public void AddIntent(IIntent intent)
    {
        intent.OnUpdate += OnIntentUpdate;
        intent.OnAnimatorPlay += AnimatorComplete;
    }

    public void ShowIntent(IIntent intent)
    {
        currentIntent = intent;
        
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


    private int Choose(IEnumerable<float> list, float total)
    {
        // 处理总权重为0的情况
        if (total <= 0f)
        {
            return -1; // 或者抛出异常
        }

        //在0到总权重之间随机选取一个点
        float randomPoint = UnityEngine.Random.value * total;

        //确定随机点落在哪个区间
        int currentIndex = 0;
        foreach (float weight in list)
        {
            if (randomPoint < weight)
            {
                return currentIndex;
            }

            randomPoint -= weight;
            currentIndex++;
        }

        //为了防止浮点数精度问题，返回最后一个索引
        return currentIndex - 1;
    }
    
}