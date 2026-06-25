using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;

public class MainMenu : MonoBehaviour
{
    private GameObject buttonPrefab;
    [SerializeField] private GameObject menuPanel;

    public Button startGameButton;
    public Button exitGameButton;
    public Button settingsButton;

    private void Awake()
    {
        // Init().Forget();
    }

    private async UniTask Init()
    {
        buttonPrefab =
            await AddressablesMgr.Instance.LoadAssetAsync<GameObject>("Assets/Art/Prefab/UI/Component/Button.prefab");
        startGameButton = Instantiate(buttonPrefab, menuPanel.transform).GetComponent<Button>();
        exitGameButton = Instantiate(buttonPrefab, menuPanel.transform).GetComponent<Button>();
        settingsButton = Instantiate(buttonPrefab, menuPanel.transform).GetComponent<Button>();
        
        startGameButton.onClick.AddListener(OnStartGameButtonClick);
        exitGameButton.onClick.AddListener(OnExitGameButtonClick);
        settingsButton.onClick.AddListener(OnSettingsButtonClick);
        
    }

    private void OnStartGameButtonClick()
    {
        
    }

    private void OnExitGameButtonClick()
    {
        
    }

    private void OnSettingsButtonClick()
    {
        
    }

    private void OnDestroy()
    {
        AddressablesMgr.Instance.Release("Assets/Art/Prefab/UI/Component/Button.prefab");
    }
}