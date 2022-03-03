using System.Collections.Generic;
using DG.Tweening;
using Manager;
using MoreMountains.NiceVibrations;
using TMPro;
using UnityEngine;


public class PoolManager : MonoBehaviour
{
    #region Self Variables

    #region Public Variables

    #endregion

    #region Serialialized Variables

    [Header("Data")] [SerializeField] [Range(4, 40)]
    public int poolRequiredObjectCount = 4;

    [SerializeField] private Collider col;

    [SerializeField] private TextMeshPro poolText;
    [SerializeField] private List<GameObject> balls;

    [SerializeField] private int stageValue;

    [SerializeField] private GameObject poolCenter;

    #endregion

    #endregion

    private void Awake()
    {
        if (col == null) col = GetComponent<Collider>();
        if (poolText == null)
            poolText =
                GetComponentInChildren<TextMeshPro>(); //transform.getChild(2).transform.getChild(0).getComponent<TextMeshPro>();
    }

    // Start is called before the first frame update
    private void Start()
    {
        poolText.text = "0 / " + poolRequiredObjectCount;


        EventManager.Instance.onControlStageEnd += OnControlStageEnd;
    }

    private void OnDisable()
    {
        EventManager.Instance.onControlStageEnd -= OnControlStageEnd;
    }

    private void OnControlStageEnd(int stageValue)
    {
        if (stageValue != this.stageValue) return;
        if (balls.Count >= poolRequiredObjectCount)
        {
            poolCenter.transform.DOMoveY(.647f, .85f).SetEase(Ease.OutBounce).SetRelative(true);
            poolCenter.transform.GetComponent<Renderer>().material
                .DOColor(new Color(0.2306425f, 0.6698113f, 0.3059757f, 1), .65f).SetEase(Ease.Linear);

            DOVirtual.DelayedCall(.85f, () => EventManager.Instance.onSuccessfulStage?.Invoke());
            DOVirtual.DelayedCall(.85f,
                () =>
                {
                    EventManager.Instance.onActivateTouch?.Invoke();
                    EventManager.Instance.onChangeStageUIBarColor?.Invoke(LevelManager.Instance.StageValue);
                    EventManager.Instance.onClearActivateBalls?.Invoke(LevelManager.Instance.StageValue);
                    EventManager.Instance.onConfettiPlay?.Invoke();
                    LevelManager.Instance.StageValue++;
                });

            //Event manager ile yandaki barın yüzdesini arttır.
            //LevelManager.Instance.LevelCollectedBallCount += balls.Count;
            LevelManager.Instance.LevelCollectedBallCount += balls.Count;
        }
        else if (balls.Count < poolRequiredObjectCount)
        {
            EventManager.Instance.onStopPlayer?.Invoke();
            EventManager.Instance.onDeactivateTouch?.Invoke();
            EventManager.Instance.onActivateFailPanel?.Invoke();
        }
    }

    private void ChangeText(int totalBallValue)
    {
        poolText.text = totalBallValue + " / " + poolRequiredObjectCount;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Ball") && !balls.Contains(other.gameObject))
        {
            balls.Add(other.gameObject);
            ChangeText(balls.Count);
            MMVibrationManager.Haptic(HapticTypes.MediumImpact);
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Ball") && !balls.Contains(other.gameObject))
        {
            balls.Remove(other.gameObject);
            ChangeText(balls.Count);
        }
    }
}