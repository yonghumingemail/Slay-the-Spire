using System;
using System.Collections.Generic;
using System.Linq;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.U2D;

public class Intent_C : MonoBehaviour
{
    public List<Intent_V> intentsViewArray;
    private IIntent[] displayedIntents;

    public GameObject prefab;
    public float intentSpacing;
    public bool isInitialized;


    
    private Action OnComplete;

    private void Awake()
    {
        Initialize().Forget();
        intentsViewArray = new List<Intent_V>(transform.GetComponentsInChildren<Intent_V>(true));
    }

    private async UniTask Initialize()
    {
       
        prefab = await AddressablesMgr.Instance.LoadAssetAsync<GameObject>("Assets/Art/Prefab/Enemy/Intent.prefab");

        isInitialized = true;
        OnComplete?.Invoke();
        OnComplete = null;
    }


    public void ShowIntent(IIntent[] intents)
    {
        if (isInitialized)
        {
            foreach (var intent in displayedIntents ?? Enumerable.Empty<IIntent>())
            {
                intent.OnHide();
            }

            displayedIntents = intents;
            for (; intents.Length > intentsViewArray.Count;)
            {
                intentsViewArray.Add(Instantiate(prefab, transform).GetComponent<Intent_V>());
            }

            float firstCardPosition = -((intents.Length - 1) * intentSpacing / 2);

            Vector3 temp;
            for (int i = 0; i < intents.Length; i++)
            {
                intents[i].OnShow(intentsViewArray[i]);
                float p = firstCardPosition + i * intentSpacing;

                temp = intentsViewArray[i].transform.localPosition;
                temp.x = p;

                intentsViewArray[i].gameObject.SetActive(true);
                intentsViewArray[i].transform.localPosition = temp;
                intentsViewArray[i].UpdateUI(intents[i]);
                print(1);
            }

            for (int i = intents.Length; i < intentsViewArray.Count; i++)
            {
                intentsViewArray[i].gameObject.SetActive(false);
                print(2);
            }
        }
        else
        {
            OnComplete += () => { ShowIntent(intents); };
        }
    }

    public void HideIntent()
    {
        foreach (var VARIABLE in intentsViewArray)
        {
            VARIABLE.gameObject.SetActive(false);
        }
    }

    private int Choose(IEnumerable<float> list, float total)
    {
        // 处理总权重为0的情况
        if (total <= 0f)
        {
            return -1; // 或者抛出异常
        }

        //在0到总权重之间随机选取一个点
        float randomPoint = UnityEngine.Random.value * total;

        //确定随机点落在哪个区间
        int currentIndex = 0;
        foreach (float weight in list)
        {
            if (randomPoint < weight)
            {
                return currentIndex;
            }

            randomPoint -= weight;
            currentIndex++;
        }

        //为了防止浮点数精度问题，返回最后一个索引
        return currentIndex - 1;
    }
}