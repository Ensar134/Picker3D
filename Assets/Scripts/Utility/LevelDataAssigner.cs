using Manager;
using UnityEngine;

namespace Utility
{
    public class LevelDataAssigner : MonoBehaviour
    {
        public int LevelBallCount;

        private void Start()
        {
            EventManager.Instance.onAssignLevelCollectableBallCount += OnAssignLevelCollectableBallCount;
        }

        private void OnDisable()
        {
            EventManager.Instance.onAssignLevelCollectableBallCount -= OnAssignLevelCollectableBallCount;
        }

        private void OnAssignLevelCollectableBallCount()
        {
            LevelManager.Instance.LevelBallCount = LevelBallCount;
        }
    }
}