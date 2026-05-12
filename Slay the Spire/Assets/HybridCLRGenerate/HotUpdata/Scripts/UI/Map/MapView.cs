

public class MapView : UIFormLogic
{
    private MouseInteraction maskInteraction;

    private void Awake()
    {
        maskInteraction = transform.GetComponentInChildren<MouseInteraction>();
        maskInteraction.OnMouseDownDelegate += data => {  Visible = false; };
    }


}