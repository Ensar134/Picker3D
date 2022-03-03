using System;
using System.Collections.Generic;
using Manager;
using UnityEngine;

namespace Controller
{
    public class BallForceController : MonoBehaviour
    {
        #region Serialized Variables

        [SerializeField] private List<Collider> ballColliderList = new List<Collider>();

        #endregion

        private void Start()
        {
            EventManager.Instance.onGiveForwardForce += OnGiveForwardForce;
        }

        private void OnDisable()
        {
            EventManager.Instance.onGiveForwardForce -= OnGiveForwardForce;
        }

        private void OnGiveForwardForce()
        {
            Vector3 forcePos = new Vector3(transform.position.x, transform.position.y, transform.position.z - 3);

            Collider[] collider = Physics.OverlapSphere(forcePos, 1.15f);

            foreach (var col in collider)
            {
                if (col.CompareTag("Ball")) ballColliderList.Add(col);
            }

            foreach (var ball in ballColliderList)
            {
                if (ball.GetComponent<Rigidbody>() != null)
                {
                    Rigidbody rb;
                    rb = ball.GetComponent<Rigidbody>();
                    rb.AddForce(transform.forward * 2f, ForceMode.Impulse);
                    rb.AddForce(transform.up * 1.45f, ForceMode.Impulse);
                }
            }

            ballColliderList.Clear();
        }

        // private void OnDrawGizmos()
        // {
        //     Gizmos.color = Color.yellow;
        //     Gizmos.DrawSphere(new Vector3(transform.position.x, transform.position.y, transform.position.z - 3), 1.15f);
        // }
    }
}