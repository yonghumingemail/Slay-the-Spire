using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;

public class Intent_V : MonoBehaviour,IPointerEnterHandler,IPointerExitHandler
{
    public SpriteRenderer _spriteRenderer { get; private set; }
    public TextMeshPro _textMeshPro { get; private set; }
    public Animator _animator { get; private set; }
    public void Init()
    {
        _spriteRenderer = GetComponentInChildren<SpriteRenderer>(true);
        _textMeshPro = GetComponentInChildren<TextMeshPro>(true);
        _animator = GetComponent<Animator>();
    }

    public void UpdateUI( IIntent intent)
    {
        _spriteRenderer.sprite = intent._sprite;
        _textMeshPro.SetText(intent._text);
    }
    

    public void OnPointerEnter(PointerEventData eventData)
    {

    }

    public void OnPointerExit(PointerEventData eventData)
    {

    }
}