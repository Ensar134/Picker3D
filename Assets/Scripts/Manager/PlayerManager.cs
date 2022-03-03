using DG.Tweening;
using Manager;
using MoreMountains.NiceVibrations;
using UnityEngine;

public class PlayerManager : MonoBehaviour
{
    #region Self Variables

    #region Public Variables

    #endregion

    #region Self Variables

    [SerializeField] private Rigidbody rigidbody;


    [SerializeField] private float speedHorizontal, speedForward;

    [SerializeField] private GameObject leftBooster, rightBooster;
    [SerializeField] private GameObject confetti;

    [SerializeField] private Vector3 initialPosition;

    [SerializeField] private GameObject fullHolderLeft, fullHolderRight;
    [SerializeField] private GameObject halfHolderLeft, halfHolderRight;

    #endregion

    #region Private Variables

    private float _horizontalValue;

    private bool _isReadyToMove = false;

    #endregion

    #endregion


    // Start is called before the first frame update
    private void Start()
    {
        InputManager.Instance.onHorizontalValueChanged += OnHorizontalValueChanged;
        EventManager.Instance.onSuccessfulStage += OnSuccessfulStage;
        EventManager.Instance.onActivateMovement += OnActivateMovement;
        EventManager.Instance.onClearLevelData += OnClearLevelData;
        EventManager.Instance.onStopPlayer += OnStopPlayer;
        EventManager.Instance.onActivateBoostStage += OnActivateBoostStage;
        EventManager.Instance.onConfettiPlay += OnConfettiPlay;

        EventManager.Instance.onMovePlayerToInitialPosition += OnMovePlayerToInitialPosition;


        initialPosition = new Vector3(0, 0, 0.4520006f);
    }

    private void OnDisable()
    {
        InputManager.Instance.onHorizontalValueChanged -= OnHorizontalValueChanged;
        EventManager.Instance.onSuccessfulStage -= OnSuccessfulStage;
        EventManager.Instance.onActivateMovement -= OnActivateMovement;
        EventManager.Instance.onClearLevelData -= OnClearLevelData;
        EventManager.Instance.onStopPlayer -= OnStopPlayer;
        EventManager.Instance.onActivateBoostStage -= OnActivateBoostStage;
        EventManager.Instance.onConfettiPlay -= OnConfettiPlay;

        EventManager.Instance.onMovePlayerToInitialPosition -= OnMovePlayerToInitialPosition;
    }

    private void FixedUpdate()
    {
        if (!_isReadyToMove)
        {
            StopPlayer();
            return;
        }

        ForwardMovement();

        HorizontalMovement();
    }

    private void StopPlayer()
    {
        rigidbody.velocity = Vector3.zero;
        rigidbody.angularVelocity = Vector3.zero;
    }

    private void HorizontalMovement()
    {
        rigidbody.velocity += new Vector3(_horizontalValue * speedHorizontal * Time.fixedDeltaTime, 0, 0);
    }

    private void ForwardMovement()
    {
        rigidbody.velocity = new Vector3(0, 0, speedForward);
    }

    private void OnHorizontalValueChanged(float val)
    {
        _horizontalValue = val;
    }

    private void OnActivateMovement()
    {
        _isReadyToMove = true;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Wall"))
        {
            other.enabled = false;
            DOVirtual.DelayedCall(2.5f,
                () => EventManager.Instance.onControlStageEnd?.Invoke(LevelManager.Instance.StageValue));
            EventManager.Instance.onGiveForwardForce?.Invoke();
            EventManager.Instance.onDeactivateTouch?.Invoke();

            OnStopPlayer();

            halfHolderLeft.SetActive(false);
            halfHolderRight.SetActive(false);
            fullHolderRight.SetActive(false);
            fullHolderLeft.SetActive(false);
        }

        if (other.CompareTag("FinishLine"))
        {
            other.enabled = false;
            SaveGame();

            //Bonus stage açılsın
            BonusStage();
            NewLevelInitializer();
        }

        if (other.CompareTag("Ball"))
        {
            EventManager.Instance.onIncreaseCollectedBallCount?.Invoke();
            MMVibrationManager.Haptic(HapticTypes.LightImpact);
        }

        if (other.CompareTag("Half"))
        {
            other.gameObject.SetActive(false);
            halfHolderLeft.SetActive(true);
            halfHolderRight.SetActive(true);
        }

        if (other.CompareTag("Full"))
        {
            other.gameObject.SetActive(false);
            fullHolderRight.SetActive(true);
            fullHolderLeft.SetActive(true);
        }
    }

    private static void SaveGame()
    {
        EventManager.Instance.onLevelFinishedSaveGame?.Invoke();
    }

    private static void NewLevelInitializer()
    {
        DOVirtual.DelayedCall(1.35f, () => EventManager.Instance.onLoadNextLevel?.Invoke());
    }

    private void BonusStage()
    {
        leftBooster.SetActive(true);
        rightBooster.SetActive(true);

        EventManager.Instance.onActivateBoostStage?.Invoke((float) LevelManager.Instance.LevelCollectedBallCount *
                                                           3 /
                                                           LevelManager.Instance.LevelBallCount);
        ChangeSpeedDataBeforeBoosterStage();
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Ball"))
        {
            EventManager.Instance.onDecreaseCollectedBallCount?.Invoke();
        }
    }

    private void OnSuccessfulStage()
    {
        _isReadyToMove = true;
    }

    private void MovePlayer()
    {
        _isReadyToMove = true;
    }

    private void OnClearLevelData()
    {
        _isReadyToMove = false;

        speedForward = 5;
        speedHorizontal = 100;
        leftBooster.SetActive(false);
        rightBooster.SetActive(false);
        fullHolderLeft.SetActive(false);
        halfHolderLeft.SetActive(false);
        fullHolderRight.SetActive(false);
        halfHolderRight.SetActive(false);
    }

    private void OnStopPlayer()
    {
        _isReadyToMove = false;
    }

    private void OnConfettiPlay()
    {
        confetti.SetActive(true);
        DOVirtual.DelayedCall(3.5f, () => confetti.SetActive(false));
    }

    private void ResetData()
    {
        leftBooster.SetActive(false);
        rightBooster.SetActive(false);
    }

    private void ChangeSpeedDataBeforeBoosterStage()
    {
        speedForward = 10;
    }

    private void OnActivateBoostStage(float time)
    {
        MovePlayer();

        DOVirtual.DelayedCall(time, SlowlyStopPlayer);

        DOVirtual.DelayedCall(time + 2f,
            MoveToNextLevel);

        DOVirtual.DelayedCall(time, ResetData);
    }

    private void SlowlyStopPlayer()
    {
        DOTween.To(() => rigidbody.velocity, x => rigidbody.velocity = x, Vector3.zero, .75f).SetEase(Ease.Linear)
            .OnComplete(() =>
            {
                EventManager.Instance.onConfettiPlay?.Invoke();
                EventManager.Instance.onDeactivateTouch?.Invoke();
                OnStopPlayer();
            });
        DOTween.To(() => rigidbody.angularVelocity, x => rigidbody.angularVelocity = x, Vector3.zero, .75f);
    }

    private void MoveToNextLevel()
    {
        transform.DOMove(GameObject.Find("LevelHolder").transform.GetChild(1).transform.localPosition, 2)
            .OnComplete(() => EventManager.Instance.onActivateWinPanel?.Invoke());
    }

    private void OnMovePlayerToInitialPosition()
    {
        transform.position = initialPosition;
    }
}