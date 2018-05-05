using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ship : MonoBehaviour {


	/// <summary>
	/// this is the class to define the ship
	/// </summary>
	// Use this for initialization

	Rigidbody2D r2D;
	Vector2 Thrustdirection = new Vector2(1,0);
	const float ThrustForce = 8;
	float colliderRadius;
	const float rotateDegreesPerSecond = 180;

	void Start () {
		r2D = GetComponent<Rigidbody2D> ();
		colliderRadius = GetComponent<CircleCollider2D> ().radius;
	}

	// Update is called once per frame
	void Update () {
		float rotationInput = Input.GetAxis ("Rotate");
		if (rotationInput != 0) {
			float rotationAmount = rotateDegreesPerSecond * Time.deltaTime;
			if (rotationInput < 0) {
				rotationAmount *= -1;
			}
			transform.Rotate (Vector3.forward, rotationAmount);
			float rotationValue = transform.eulerAngles.z * Mathf.Deg2Rad;
			Thrustdirection.x = Mathf.Cos (rotationValue);
			Thrustdirection.y = Mathf.Sin (rotationValue);

		}
	}

	void FixedUpdate(){
		if (Input.GetAxis ("Thrust") != 0)
			r2D.AddForce (ThrustForce * Thrustdirection, ForceMode2D.Force);
	}

	void OnBecameInvisible()
	{
		Vector2 position = transform.position;

		// check left, right, top, and bottom sides
		if (position.x + colliderRadius < ScreenUtils.ScreenLeft ||
			position.x - colliderRadius > ScreenUtils.ScreenRight)
		{
			position.x *= -1;
		}
		if (position.y - colliderRadius > ScreenUtils.ScreenTop ||
			position.y + colliderRadius < ScreenUtils.ScreenBottom)
		{
			position.y *= -1;
		}

		// move ship
		transform.position = position;
	}

}
