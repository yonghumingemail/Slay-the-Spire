using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;

public class CharSelectPanel : UIFormLogic
{
    [SerializeField] private RectTransform button;
    [SerializeField] private RectTransform background;

    private GameObject buttonPrefab;
    private GameObject backgroundPrefab;


    private void Awake()
    {
        Init().Forget();
    }

    public async UniTask Init()
    {
        buttonPrefab = await AddressablesMgr.Instance.LoadAssetAsync<GameObject>("Assets/Art/Prefab/UI/Component/CharSelectButton.prefab");
        backgroundPrefab = await AddressablesMgr.Instance.LoadAssetAsync<GameObject>("Assets/Art/Prefab/UI/Panel/CharacterSelectionBackground.prefab");

        var roleInfos = await AddressablesMgr.Instance.LoadAssetsAsync<CharacterSelectionInfo>(new List<string>() { "CharacterSelectionInfo" });

        foreach (var roleInfo in roleInfos)
        {
            var instantiate = Instantiate(backgroundPrefab, background);
            instantiate.name = roleInfo.Name;
            
            var characterSelectionBackground = instantiate.GetComponent<CharacterSelectionBackground>();
            characterSelectionBackground.SetUIInfo(roleInfo);

            var characterSelectionButton = Instantiate(buttonPrefab, button);
            characterSelectionButton.GetComponent<Button>().onClick.AddListener(() => {characterSelectionBackground.OnOpen(null); });
            var image = characterSelectionButton.GetComponent<Image>();
            image.sprite = roleInfo.buttonIcon;
        }
    }
}