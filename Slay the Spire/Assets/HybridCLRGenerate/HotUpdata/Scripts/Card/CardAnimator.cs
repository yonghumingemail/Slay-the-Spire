using System;
using DG.Tweening;
using UnityEngine;
using Z_Tools;

[Serializable]
public class CardAnimator 
{
    private Camera _mainCamera;
    public Animator animator { get; set; }

    [Header("DOTween动画播放速度")] 
    [SerializeField] private float move_speed = 0.15f;

    public CardAnimator()
    {
        
    }
    // private void Awake()
    // {
    //     animator = GetComponent<Animator>();
    //     _mainCamera = EventCenter_Singleton.Instance.GetEvent<Func<Camera>>("MainCamera").Invoke();
    // }
    //
    // #region DOTween动画
    //
    // public void MoveToScreenCenter(Action callback)
    // {
    //     Vector3 screenCenter =
    //         _mainCamera.ScreenToWorldPoint(new Vector3(Screen.width * 0.5f, Screen.height * 0.5f, 0f));
    //     screenCenter.z = transform.position.z;
    //
    //     DOTween.To(() => transform.position, value => { transform.position = value; }, screenCenter, move_speed)
    //         .onComplete += () => { callback?.Invoke(); };
    // }
    //
    // public void Recycle_DiscardPile(Action callback)
    // {
    //     Vector3 screenRightDown = _mainCamera.ScreenToWorldPoint(new Vector3(Screen.width, 0, 0f));
    //     screenRightDown.z = transform.position.z;
    //     DOTween.To(() => transform.position, value => { transform.position = value; },
    //         screenRightDown,
    //         move_speed);
    //     
    //     DOTween.To(() => transform.localScale, value => { transform.localScale = value; }, Vector3.zero,
    //         move_speed).onComplete += () =>
    //     {
    //         callback?.Invoke();
    //     };
    // }
    //
    // public void Recycle_DrawPile(Action callback)
    // {
    //     Vector3 screenLeftDown = _mainCamera.ScreenToWorldPoint(new Vector3(0, 0, 0f));
    //     screenLeftDown.z = transform.position.z;
    //     DOTween.To(() => transform.position, value => { transform.position = value; },
    //         screenLeftDown,
    //         move_speed);
    //     
    //     DOTween.To(() => transform.localScale, value => { transform.localScale = value; }, Vector3.zero,
    //         move_speed).onComplete += () =>
    //     {
    //         callback?.Invoke();
    //     };
    // }
    //
    // #endregion
}