public class MapView : UIFormLogic
{
    public abstract class ID : ClassID<ID>
    {
    }

    private MouseInteraction maskInteraction;

    private void Awake()
    {
        maskInteraction = transform.GetComponentInChildren<MouseInteraction>();
        UIManager.Instance.RegisterUIForm(1, ID.ID, this);
        maskInteraction.OnMouseDownDelegate += data => { UIManager.Instance.CloseUIForm(ID.ID); };
    }
}