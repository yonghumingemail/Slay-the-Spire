using UnityGameFramework.Runtime;

public class MapView : UIFormLogic
{
    public abstract class ID : ClassID<ID>
    {
    }

    private MouseInteraction maskInteraction;
    private void Awake()
    {
        maskInteraction = transform.GetComponentInChildren<MouseInteraction>();
        UIComponent uiComponent = GameEntry.GetManagerComponent<UIComponent>();
        uiComponent.RegisterUIForm(nameof(UIGroupEnum.Panel),ID.ID, this);
        maskInteraction.OnMouseDownDelegate += data => { uiComponent.CloseUIForm(ID.ID); };
    }
}