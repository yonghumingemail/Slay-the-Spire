using System;
using UnityEngine;

public class AnimatorComplete : MonoBehaviour
{
    public Action onComplete;

    public void OnComplete()
    {
        onComplete?.Invoke();
    }
}
