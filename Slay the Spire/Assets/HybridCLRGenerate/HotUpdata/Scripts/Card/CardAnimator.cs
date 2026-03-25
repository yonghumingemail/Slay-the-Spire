using System;
using DG.Tweening;
using Unity.Mathematics;
using UnityEngine;
using Z_Tools;

[Serializable]
public class CardAnimator
{
    [SerializeField] private Animator _animator;
    public Animator Animator => _animator;

    [Header("DOTween动画播放速度")] [SerializeField]
    private float animatorSpeed = 0.25f;

    private Camera _mainCamera;
    private Sequence _sequence;

    public CardAnimator(Card card, Camera mainCamera)
    {
        _animator = card.GetComponent<Animator>();
        _mainCamera = mainCamera;
    }


    #region DOTween动画

    public void MoveToScreenCenter(GameObject target, Action callback)
    {
        Vector3 screenCenter =
            _mainCamera.ScreenToWorldPoint(new Vector3(Screen.width * 0.5f, Screen.height * 0.5f, 0f));
        screenCenter.z = target.transform.position.z;

        DOTween.To(() => target.transform.position, value => { target.transform.position = value; }, screenCenter,
                animatorSpeed)
            .onComplete += () => { callback?.Invoke(); };
    }

    public void Recycle_DiscardPile(GameObject target, Action callback)
    {
        Vector3 screenRightDown = _mainCamera.ScreenToWorldPoint(new Vector3(Screen.width, 0, 0f));
        screenRightDown.z = target.transform.position.z;

        TransformEffect(target, screenRightDown, new Vector3(0, 0, -180), Vector3.zero, callback: callback);
    }

    public void Recycle_DrawPile(GameObject target, Action callback)
    {
        Vector3 screenLeftDown = _mainCamera.ScreenToWorldPoint(new Vector3(0, 0, 0f));
        screenLeftDown.z = target.transform.position.z;

        TransformEffect(target, screenLeftDown, new Vector3(0, 0, 180), Vector3.zero, callback: callback);
    }

    // 方法1：绝对旋转（旋转到指定四元数,无方向）
    public void TransformEffectToRotation(GameObject obj, Vector3 targetPosition,
        Quaternion targetRotation, Vector3 targetScale, Action callback = null)
    {
        _sequence.Kill();
        _sequence = DOTween.Sequence();

        var move = obj.transform.DOMove(targetPosition, animatorSpeed);
        var rotation = obj.transform.DORotateQuaternion(targetRotation, animatorSpeed);
        var scale = obj.transform.DOScale(targetScale, animatorSpeed);

        _sequence.Insert(0, move);
        _sequence.Insert(0, rotation);
        _sequence.Insert(0, scale);

        _sequence.onComplete += () => callback?.Invoke();
    }

// 方法2：相对旋转（旋转指定角度,有方向）
    public void TransformEffect(GameObject obj, Vector3 targetPosition,
        Vector3 rotateAngle, Vector3 targetScale, RotateMode rotateMode = RotateMode.LocalAxisAdd,
        Action callback = null)
    {
        _sequence.Kill();
        _sequence = DOTween.Sequence();

        var move = obj.transform.DOMove(targetPosition, animatorSpeed);
        var rotation = obj.transform.DORotate(rotateAngle, animatorSpeed, rotateMode);
        var scale = obj.transform.DOScale(targetScale, animatorSpeed);

        _sequence.Insert(0, move);
        _sequence.Insert(0, rotation);
        _sequence.Insert(0, scale);

        _sequence.onComplete += () => callback?.Invoke();
    }

    #endregion

    public void OnDestroy()
    {
    }
}