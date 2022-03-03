using DG.Tweening;
using UnityEngine;

namespace Manager
{
    public class LevelManager : MonoBehaviour
    {
        #region Singleton

        public static LevelManager Instance;

        private void Awake()
        {
            if (Instance != null & Instance != this)
            {
                Destroy(gameObject);
                return;
            }

            Instance = this;
        }

        #endregion

        #region Public Variables

        public int StageValue;

        [Tooltip("UI Level değeri değişitirmek için ve save için")]
        public int LevelID;

        public int LevelBallCount, LevelCollectedBallCount;

        public bool IsRestarted;

        #endregion

        #region Serialized Variables

        [SerializeField] private float nextLevelSpawnPos = 0;
        [SerializeField] private int totalLevelCount = 4;

        #endregion


        private void ResetAfterLevelEnd()
        {
            if (IsRestarted)
            {
                nextLevelSpawnPos -= 166.0504f;
            }

            StageValue = 0;
            LevelBallCount = 0;
            LevelCollectedBallCount = 0;
            IsRestarted = false;
        }


        private void Start()
        {
            EventManager.Instance.onLevelFinishedSaveGame += OnLevelFinishedSaveGame;
            EventManager.Instance.onLoadNextLevel += OnNextLevel;
            EventManager.Instance.onClearLevelData += ResetAfterLevelEnd;
            EventManager.Instance.onSetRestartCondition += OnSetRestartCondition;

            SpawnLevel();

            EventManager.Instance.onLevelStart?.Invoke();

            EventManager.Instance.onIncreaseCollectedBallCount += OnIncreaseCollectedBallCount;
            EventManager.Instance.onDecreaseCollectedBallCount += OnDecreaseCollectedBallCount;

            EventManager.Instance.onNextLevel += OnNextLevelClicked;
            EventManager.Instance.onRestartLevel += OnRestartLevel;

            DOVirtual.DelayedCall(1, AssignNewLevelBallCount);
        }

        private void SpawnLevel()
        {
            LevelID = GetActivateLevelData();
            ActivateLevel(LevelID % totalLevelCount);
        }


        private void OnDisable()
        {
            EventManager.Instance.onLevelFinishedSaveGame -= OnLevelFinishedSaveGame;
            EventManager.Instance.onLoadNextLevel -= OnNextLevel;
            EventManager.Instance.onClearLevelData -= ResetAfterLevelEnd;
            EventManager.Instance.onSetRestartCondition -= OnSetRestartCondition;

            EventManager.Instance.onIncreaseCollectedBallCount -= OnIncreaseCollectedBallCount;
            EventManager.Instance.onDecreaseCollectedBallCount -= OnDecreaseCollectedBallCount;

            EventManager.Instance.onNextLevel -= OnNextLevelClicked;
            EventManager.Instance.onRestartLevel -= OnRestartLevel;
        }

        private void OnLevelFinishedSaveGame()
        {
            ES3.Save("Level", ++LevelID);
        }

        private void OnClearActiveLevels(int value)
        {
            var levelHolder = GameObject.Find("LevelHolder").gameObject;

            Destroy(levelHolder.transform.GetChild(value).gameObject);
        }

        private void OnNextLevel()
        {
            var newLevel = GetActivateLevelData();
            ActivateLevel(newLevel);
        }

        private int GetActivateLevelData()
        {
            if (ES3.FileExists())
            {
                if (ES3.KeyExists("Level"))
                {
                    return ES3.Load<int>("Level") % totalLevelCount;
                }
            }

            return 0;
        }

        private void ActivateLevel(int levelValue)
        {
            GameObject newLevel = Resources.Load<GameObject>($"Level Prefabs/level {levelValue}");

            GameObject level = Instantiate(newLevel, GameObject.Find("LevelHolder").transform);
            level.transform.localPosition = new Vector3(0, 0, nextLevelSpawnPos);
            nextLevelSpawnPos += 166.0504f;
        }

        private static void AssignNewLevelBallCount()
        {
            DOVirtual.DelayedCall(1f, () => EventManager.Instance.onAssignLevelCollectableBallCount?.Invoke());
        }

        private void OnIncreaseCollectedBallCount()
        {
            LevelCollectedBallCount++;
        }

        private void OnDecreaseCollectedBallCount()
        {
            LevelCollectedBallCount--;
        }

        private void OnNextLevelClicked()
        {
            OnClearActiveLevels(0);
            AssignNewLevelBallCount();
        }

        private void OnRestartLevel()
        {
            OnClearActiveLevels(0);

            EventManager.Instance.onMovePlayerToInitialPosition?.Invoke();

            SpawnLevel();
            AssignNewLevelBallCount();
        }

        private void OnSetRestartCondition()
        {
            IsRestarted = true;
        }
    }
}