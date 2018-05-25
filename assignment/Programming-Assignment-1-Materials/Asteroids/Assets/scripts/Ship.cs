﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// A ship
/// </summary>
public class Ship : MonoBehaviour

{

    [SerializeField]
    GameObject prefabBullet;
    [SerializeField]
    GameObject HUD;
    // thrust and rotation support

    Vector2 thrustDirection = new Vector2(1, 0);
    const float ThrustForce = 8;
    const float RotateDegreesPerSecond = 180;

	Rigidbody2D rb2D;

	/// <summary>
	/// Use this for initialization
	/// </summary>
	void Start()
	{
		rb2D = GetComponent<Rigidbody2D>();
	}
	
	/// <summary>
	/// Update is called once per frame
	/// </summary>
	void Update()
	{
        // check for rotation input
        float rotationInput = Input.GetAxis("Rotate");
        if (rotationInput != 0) {

            // calculate rotation amount and apply rotation
            float rotationAmount = RotateDegreesPerSecond * Time.deltaTime;
            if (rotationInput < 0) {
                rotationAmount *= -1;
            }
            transform.Rotate(Vector3.forward, rotationAmount);

            // change thrust direction to match ship rotation
            float zRotation = transform.eulerAngles.z * Mathf.Deg2Rad;
            thrustDirection.x = Mathf.Cos(zRotation);
            thrustDirection.y = Mathf.Sin(zRotation);
        }

        if(Input.GetKeyDown(KeyCode.LeftControl))
        {
            AudioManager.Play(AudioClipName.PlayerShot);
            GameObject b = Instantiate(prefabBullet,transform.position,Quaternion.identity);
            Bullet sprite = b.GetComponent<Bullet>();
            sprite.ApplyForce(thrustDirection);


        }
	}

    /// <summary>
    /// FixedUpdate is called 50 times per second
    /// </summary>
    void FixedUpdate()
    {
        // thrust as appropriate
        if (Input.GetAxis("Thrust") != 0)
        {
            rb2D.AddForce(ThrustForce * thrustDirection,
                ForceMode2D.Force);
        }
    }
    /// <summary>
    /// Collision of the ship
    /// </summary>
    

   void OnCollisionEnter2D(Collision2D coll)
    {
        Asteroid A = coll.gameObject.GetComponent<Asteroid>();

		if (A.tag == "Asteroid")
		{
            AudioManager.Play(AudioClipName.PlayerDeath);
            HUD.GetComponent<HUD>().StopGameTimer();
            Destroy(gameObject);
        }
    }


}
