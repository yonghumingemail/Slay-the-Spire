using System;
using DG.Tweening;
using Unity.Mathematics;
using UnityEngine;
using Z_Tools;

[Serializable]
public class CardAnimator:MonoBehaviour
{
    [SerializeField] private Animator _animator;
    public Animator Animator => _animator;

    [Header("DOTween动画播放速度")] [SerializeField]
    private float animatorSpeed = 0.25f;

    private Camera _mainCamera;
    private Sequence _sequence;

    private void Awake()
    {
        _animator = GetComponent<Animator>();
        _mainCamera = Camera.main;
    }



    #region DOTween动画

    public void MoveToScreenCenter( Action callback)
    {
        Vector3 screenCenter =
            _mainCamera.ScreenToWorldPoint(new Vector3(Screen.width * 0.5f, Screen.height * 0.5f, 0f));
        screenCenter.z = transform.position.z;

        DOTween.To(() => transform.position, value => { transform.position = value; }, screenCenter,
                animatorSpeed)
            .onComplete += () => { callback?.Invoke(); };
    }

    public void Recycle_DiscardPile( Action callback)
    {
        Vector3 screenRightDown = _mainCamera.ScreenToWorldPoint(new Vector3(Screen.width, 0, 0f));
        screenRightDown.z = transform.position.z;

        TransformEffect(gameObject,screenRightDown, new Vector3(0, 0, -180), Vector3.zero, callback: callback);
    }

    public void Recycle_DrawPile( Action callback)
    {
        Vector3 screenLeftDown = _mainCamera.ScreenToWorldPoint(new Vector3(0, 0, 0f));
        screenLeftDown.z = transform.position.z;

        TransformEffect(gameObject,screenLeftDown, new Vector3(0, 0, 180), Vector3.zero, callback: callback);
    }

    // 方法1：绝对旋转（旋转到指定四元数,无方向）
    public void TransformEffectToRotation(GameObject target, Vector3 targetPosition,
        Quaternion targetRotation, Vector3 targetScale, Action callback = null)
    {
        _sequence.Kill();
        _sequence = DOTween.Sequence();

        var move = target.transform.DOMove(targetPosition, animatorSpeed);
        var rotation = target.transform.DORotateQuaternion(targetRotation, animatorSpeed);
        var scale = target.transform.DOScale(targetScale, animatorSpeed);

        _sequence.Insert(0, move);
        _sequence.Insert(0, rotation);
        _sequence.Insert(0, scale);

        
        _sequence.onComplete += () => callback?.Invoke();
    }
// 方法2：相对旋转（旋转指定角度,有方向）
    public void TransformEffect( GameObject target,Vector3 targetPosition,
        Vector3 rotateAngle, Vector3 targetScale, RotateMode rotateMode = RotateMode.LocalAxisAdd,
        Action callback = null)
    {
        _sequence.Kill();
        _sequence = DOTween.Sequence();

        var move = target.transform.DOMove(targetPosition, animatorSpeed);
        var rotation = target.transform.DORotate(rotateAngle, animatorSpeed, rotateMode);
        var scale = target.transform.DOScale(targetScale, animatorSpeed);

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