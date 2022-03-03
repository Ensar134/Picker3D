using Manager;
using UnityEngine;
using UnityEngine.Events;

public class InputManager : MonoBehaviour
{
    #region Singleton

    public static InputManager Instance;

// Start is called before the first frame update
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


    public UnityAction<float> onHorizontalValueChanged = delegate { };

    private float _horizontalValue;
    private float _mousePos, _currentVelocity;
    private Vector2? _mousePosition; //ref type
    private Vector3 _moveVector; //ref type

    private bool _firstTouchTaken, _enableTouch;


    private void Start()
    {
        EventManager.Instance.onClearLevelData += OnClearLevelData;
        EventManager.Instance.onLevelStart += OnLevelStart;
        EventManager.Instance.onDeactivateTouch += OnDeactivateTouch;
        EventManager.Instance.onActivateTouch += OnActivateTouch;
    }

    private void OnDisable()
    {
        EventManager.Instance.onClearLevelData -= OnClearLevelData;
        EventManager.Instance.onLevelStart -= OnLevelStart;
        EventManager.Instance.onDeactivateTouch -= OnDeactivateTouch;
        EventManager.Instance.onActivateTouch -= OnActivateTouch;
    }

    // Update is called once per frame
    private void Update()
    {
        if (!_enableTouch) return;

        if (Input.GetMouseButtonDown(0))
        {
            _mousePosition = Input.mousePosition;
            if (!_firstTouchTaken)
            {
                EventManager.Instance.onDeactivateFirstPanel.Invoke();
                EventManager.Instance.onSetNewLevelValuesToUI.Invoke(LevelManager.Instance.LevelID);
                EventManager.Instance.onActivateMovement.Invoke();
            }
        }

        if (Input.GetMouseButton(0))
        {
            if (_mousePosition != null)
            {
                Vector2 mouseDeltaPos = (Vector2) Input.mousePosition - _mousePosition.Value;


                if (mouseDeltaPos.x > 1.25f)
                    _moveVector.x = 1.25f / 10f * mouseDeltaPos.x;
                else if (mouseDeltaPos.x < -1.25f)
                    _moveVector.x = -1.25f / 10f * -mouseDeltaPos.x;
                else
                    _moveVector.x = Mathf.SmoothDamp(_moveVector.x, 0f, ref _currentVelocity,
                        .007f);
            }

            _mousePosition = Input.mousePosition;
        }

        onHorizontalValueChanged?.Invoke(_moveVector.x);
    }


    private void OnLevelStart()
    {
        _enableTouch = true;
    }

    private void OnDeactivateTouch()
    {
        _enableTouch = false;
    }

    private void OnActivateTouch()
    {
        _enableTouch = true;
    }

    private void OnClearLevelData()
    {
        _firstTouchTaken = false;
        _enableTouch = true;
    }
}