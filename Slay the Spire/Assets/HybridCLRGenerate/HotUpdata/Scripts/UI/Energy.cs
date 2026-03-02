using System;
using TMPro;
using UnityEngine;
using Z_Tools;

public class Energy : MonoBehaviour
{
    private RectTransform image1;
    private RectTransform image2;
    private RectTransform image3;
    private RectTransform image4;
    private TextMeshProUGUI _text;
    public float speed;
    public int _maxEnergy; //{ get; private set; } = 3;
    public int _energy; //{ get; private set; } = 3;

    private void Awake()
    {
        image1 = transform.GetChild(0).GetChild(0).GetComponent<RectTransform>();
        image2 = transform.GetChild(0).GetChild(1).GetComponent<RectTransform>();
        image3 = transform.GetChild(0).GetChild(2).GetComponent<RectTransform>();
        image4 = transform.GetChild(0).GetChild(3).GetComponent<RectTransform>();
        _text = transform.Find("Text").GetComponent<TextMeshProUGUI>();
        UpdateUIInfo();
        EventCenter_Singleton.Instance.AddEvent<Func<Energy>>("Energy", () => this);
    }

    private void FixedUpdate()
    {
        image1.transform.rotation *= Quaternion.AngleAxis(Time.deltaTime * speed, Vector3.forward);
        image2.transform.rotation *= Quaternion.AngleAxis(-Time.deltaTime * speed, Vector3.forward);
        image3.transform.rotation *= Quaternion.AngleAxis(Time.deltaTime * speed, Vector3.forward);
        image4.transform.rotation *= Quaternion.AngleAxis(-Time.deltaTime * speed, Vector3.forward);
    }

    public bool SetEnergy(int energy)
    {
        if (energy < 0 )
        {
            return false;
        }
        _energy = energy;
        UpdateUIInfo();
        return true;
    }

    public void SetMaxEnergy(int energy)
    {
        this._maxEnergy = energy;
        UpdateUIInfo();
    }

    private void UpdateUIInfo()
    {
        _text.SetText(_energy + "/" + _maxEnergy);
    }
}