using System;
using UnityEngine;

namespace Manager
{
    public class StageManager : MonoBehaviour
    {
        #region Serialized Variables

        [Tooltip("Ball Holder")] [SerializeField]
        private GameObject collectables;

        [Space] [Header("Data")] [Tooltip("Stage Id for collectables close")] [SerializeField]
        private int id;

        #endregion

        private void Start()
        {
            EventManager.Instance.onClearActivateBalls += OnClearActivateBalls;
        }

        private void OnDisable()
        {
            EventManager.Instance.onClearActivateBalls -= OnClearActivateBalls;
        }

        private void OnClearActivateBalls(int stageCount)
        {
            if (stageCount == id)
            {
                collectables.SetActive(false);
            }
        }
    }
}