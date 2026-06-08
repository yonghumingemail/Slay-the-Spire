using System;
using UnityEngine;

public class CombatUI : UIFormLogic
{
    public abstract class ID : ClassID<ID>
    {
    }
    
    private void Awake()
    {
        UIManager.Instance.RegisterUIForm(1, ID.ID, this);
    }
}