using System.Collections.Generic;
using Manager;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class UIManager : MonoBehaviour
{
    #region Singleton

    public static UIManager Instance;

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
            return;
        }

        Instance = this;
    }

    #endregion


    #region Serialized Variables

    [SerializeField] private GameObject levelPanel, firstPanel, winPanel, failPanel;
    [SerializeField] private TextMeshProUGUI leftBarText, rightBarText;
    [SerializeField] private List<Image> stageBarImages;

    #endregion

    // Start is called before the first frame update
    private void Start()
    {
        EventManager.Instance.onSetNewLevelValuesToUI += OnSetNewLevelValuesToUI;
        EventManager.Instance.onDeactivateFirstPanel += OnDeactivateFirstPanel;
        EventManager.Instance.onChangeStageUIBarColor += OnChangeStageUIBarColor;
        EventManager.Instance.onClearLevelData += OnLevelReset;
        EventManager.Instance.onActivateFailPanel += OnActivateFailPanel;
        EventManager.Instance.onActivateWinPanel += OnActivateWinPanel;
    }

    private void OnDisable()
    {
        EventManager.Instance.onSetNewLevelValuesToUI -= OnSetNewLevelValuesToUI;
        EventManager.Instance.onDeactivateFirstPanel -= OnDeactivateFirstPanel;
        EventManager.Instance.onChangeStageUIBarColor -= OnChangeStageUIBarColor;
        EventManager.Instance.onClearLevelData -= OnLevelReset;
        EventManager.Instance.onActivateFailPanel -= OnActivateFailPanel;
        EventManager.Instance.onActivateWinPanel -= OnActivateWinPanel;
    }

    private void OnDeactivateFirstPanel()
    {
        firstPanel.SetActive(false);
    }

    private void OnSetNewLevelValuesToUI(int newLevelValue)
    {
        levelPanel.SetActive(true);
        newLevelValue++;
        leftBarText.text = newLevelValue.ToString();
        newLevelValue++;
        rightBarText.text = newLevelValue.ToString();
    }

    private void OnChangeStageUIBarColor(int stageValue)
    {
        stageBarImages[stageValue].color = new Color(1, 0.4319223f, 0.1179245f, 1f);
    }

    private void OnLevelReset()
    {
        foreach (var stageBar in stageBarImages)
        {
            stageBar.color = Color.white;
        }

        levelPanel.SetActive(false);
        firstPanel.SetActive(true);
    }

    private void OnActivateWinPanel()
    {
        levelPanel.SetActive(false);
        firstPanel.SetActive(false);
        winPanel.SetActive(true);
    }

    private void OnActivateFailPanel()
    {
        levelPanel.SetActive(false);
        firstPanel.SetActive(false);
        failPanel.SetActive(true);
    }

    public void NextLevel()
    {
        EventManager.Instance.onClearLevelData?.Invoke();
        EventManager.Instance.onNextLevel?.Invoke();
    }

    public void RestartLevel()
    {
        EventManager.Instance.onSetRestartCondition?.Invoke();
        EventManager.Instance.onClearLevelData?.Invoke();
        EventManager.Instance.onRestartLevel?.Invoke();
    }
}