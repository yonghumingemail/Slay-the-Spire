using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class CharacterSelectionBackground : UIFormLogic
{
    [SerializeField] private TextMeshProUGUI nameText;
    [SerializeField] private TextMeshProUGUI healthText;
    [SerializeField] private TextMeshProUGUI goldText;
    [SerializeField] private TextMeshProUGUI descriptionText;

    [SerializeField] private Image relicsIcon;
    [SerializeField] private TextMeshProUGUI relicsName;
    [SerializeField] private TextMeshProUGUI relicsDescription;

    [SerializeField] private Image background;

    private void Awake()
    {
        OnInit(null);
    }

    public void SetUIInfo(CharacterSelectionInfo characterInfo)
    {
        nameText.SetText(characterInfo.Name);
        healthText.SetText($"生命值：{characterInfo.HealthValue}/{characterInfo.MaxHealthValue}");
        goldText.SetText("金币：" + characterInfo.goldValue);
        descriptionText.SetText(characterInfo.description);

        relicsIcon.sprite = characterInfo.initialRelicInfo.Icon;
        relicsName.SetText(characterInfo.initialRelicInfo.Name);
        relicsDescription.SetText(characterInfo.initialRelicInfo.Description);

        background.sprite = characterInfo.background;
    }
}