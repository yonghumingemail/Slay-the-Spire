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

        // GameEntry.UI.RegisterUIForm(nameof(UIGroupEnum.Panel),ID.ID, this);
        // maskInteraction.OnMouseDownDelegate += data => {  GameEntry.UI.CloseUIForm(ID.ID); };
    }
}