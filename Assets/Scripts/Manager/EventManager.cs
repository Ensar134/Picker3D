using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace Manager
{
    public class EventManager : MonoBehaviour
    {
        #region Singleton

        public static EventManager Instance;

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

        #region Unity Actions

        public UnityAction onIncreaseCollectedBallCount = delegate { };
        public UnityAction onDecreaseCollectedBallCount = delegate { };

        public UnityAction onAssignLevelCollectableBallCount = delegate { };

        public UnityAction onMovePlayerToInitialPosition = delegate { };

        public UnityAction<int> onSetNewLevelValuesToUI = delegate { };
        public UnityAction onDeactivateFirstPanel = delegate { };
        public UnityAction onActivateMovement = delegate { };
        public UnityAction<int> onChangeStageUIBarColor = delegate { };

        public UnityAction onActivateWinPanel = delegate { };
        public UnityAction onActivateFailPanel = delegate { };
        public UnityAction onDeactivateTouch = delegate { };
        public UnityAction onActivateTouch = delegate { };
        public UnityAction onStopPlayer = delegate { };

        public UnityAction<int> onControlStageEnd = delegate { };
        public UnityAction onSuccessfulStage = delegate { };
        public UnityAction onGiveForwardForce = delegate { };
        public UnityAction<int> onClearActivateBalls = delegate { };

        public UnityAction onConfettiPlay = delegate { };
        public UnityAction<float> onActivateBoostStage = delegate { };
        public UnityAction onLevelFinishedSaveGame = delegate { };
        public UnityAction onLoadNextLevel = delegate { };

        public UnityAction onLevelStart = delegate { };
        public UnityAction onSetRestartCondition = delegate { };
        public UnityAction onClearLevelData = delegate { };
        public UnityAction onNextLevel = delegate { };
        public UnityAction onRestartLevel = delegate { };

        #endregion
    }
}