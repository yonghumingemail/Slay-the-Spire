using UnityEngine;
using UnityEngine.UI;


/// <summary>
/// 界面逻辑基类。
/// </summary>
public abstract class UIFormLogic : MonoBehaviour
{
    private bool m_Available = false;
    private bool m_Visible = false;

    private Transform m_CachedTransform = null;
    private int m_OriginalLayer = 0;
    
    protected CanvasGroup m_Group = null;

    public UIGroup uiGroup;
    /// <summary>
    /// 获取或设置界面名称。
    /// </summary>
    public string Name
    {
        get => gameObject.name;
        set => gameObject.name = value;
    }

    /// <summary>
    /// 获取界面是否可用。
    /// </summary>
    public bool Available => m_Available;

    /// <summary>
    /// 获取或设置界面是否可见。
    /// </summary>
    public bool Visible
    {
        get => m_Available && m_Visible;
        set
        {
            if (!m_Available)
            {
                Debug.Log("UI form '{0}' is not available.");
                return;
            }

            if (m_Visible == value)
            {
                return;
            }

            m_Visible = value;
            InternalSetVisible(value);
        }
    }

    /// <summary>
    /// 获取已缓存的 Transform。
    /// </summary>
    public Transform CachedTransform => m_CachedTransform;

    /// <summary>
    /// 界面初始化。
    /// </summary>
    /// <param name="userData">用户自定义数据。</param>
    protected internal virtual void OnInit(object userData)
    {
        m_CachedTransform = transform;
        m_OriginalLayer = gameObject.layer;
        m_Group = transform.GetComponent<CanvasGroup>();
        if (m_Group == null)
        {
            m_Group = gameObject.AddComponent<CanvasGroup>();
        }
        InternalSetVisible(false);
    }

    /// <summary>
    /// 界面回收。
    /// </summary>
    protected internal virtual void OnRecycle()
    {
    }

    /// <summary>
    /// 界面打开。
    /// </summary>
    /// <param name="userData">用户自定义数据。</param>
    protected internal virtual void OnOpen(object userData)
    {
        m_Available = true;
        Visible = true;
    }

    /// <summary>
    /// 界面关闭。
    /// </summary>

    protected internal virtual void OnClose( object userData)
    {
        Visible = false;
        m_Available = false;
    }

    /// <summary>
    /// 界面暂停。
    /// </summary>
    protected internal virtual void OnPause()
    {
        Visible = false;
    }

    /// <summary>
    /// 界面暂停恢复。
    /// </summary>
    protected internal virtual void OnResume()
    {
        Visible = true;
    }

    /// <summary>
    /// 界面遮挡。
    /// </summary>
    protected internal virtual void OnCover()
    {
    }

    /// <summary>
    /// 界面遮挡恢复。
    /// </summary>
    protected internal virtual void OnReveal()
    {
    }

    /// <summary>
    /// 界面激活。
    /// </summary>
    /// <param name="userData">用户自定义数据。</param>
    protected internal virtual void OnRefocus(object userData)
    {
    }

    /// <summary>
    /// 界面轮询。
    /// </summary>
    /// <param name="elapseSeconds">逻辑流逝时间，以秒为单位。</param>
    /// <param name="realElapseSeconds">真实流逝时间，以秒为单位。</param>
    protected internal virtual void OnUpdate(float elapseSeconds, float realElapseSeconds)
    {
    }

    /// <summary>
    /// 界面深度改变。
    /// </summary>
    /// <param name="uiGroupDepth">界面组深度。</param>
    /// <param name="depthInUIGroup">界面在界面组中的深度。</param>
    protected internal virtual void OnDepthChanged(int uiGroupDepth, int depthInUIGroup)
    {
    }

    /// <summary>
    /// 设置界面的可见性。
    /// </summary>
    /// <param name="visible">界面的可见性。</param>
    protected virtual void InternalSetVisible(bool visible)
    {
        m_Group.alpha = visible ? 1 : 0;
        m_Group.interactable = visible;
        m_Group.blocksRaycasts = visible;
    }
}