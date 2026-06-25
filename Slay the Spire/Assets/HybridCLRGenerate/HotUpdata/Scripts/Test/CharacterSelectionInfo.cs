using UnityEngine;

[CreateAssetMenu(fileName = "NewCharacterInfo", menuName = "SO/Player/CharacterSelectionInfo")]
public class CharacterSelectionInfo : ScriptableObject
{
    public string Name;
    public int HealthValue;
    public int MaxHealthValue;
    public int goldValue;
    [TextArea] public string description;

    public RelicsInfo initialRelicInfo;

    public Sprite background;
    public Sprite buttonIcon;
}