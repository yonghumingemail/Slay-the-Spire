using System;
using UnityEngine;
using UnityGameFramework.Runtime;

public class CombatUI : UIFormLogic
{
    public abstract class ID : ClassID<ID>
    {
    }
    
    private void Awake()
    {
        UIComponent uiComponent = GameEntry.GetManagerComponent<UIComponent>();
        uiComponent.RegisterUIForm(nameof(UIGroupEnum.Game), ID.ID, this);
    }
}