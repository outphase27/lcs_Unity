using System.Collections;
using System.Collections.Generic;
using UnityEngine;
/// <summary>
/// this is a class of Asteroid.
/// </summary>
public class Asteroid : MonoBehaviour {

	[SerializeField]
	Sprite[] sprites = new Sprite[3];
	SpriteRenderer spriteRenderer;
	// Use this for initialization
	void Start () {
		// random force that applying on the asteriod.
		const float MinImpulseForce = 1f;
		const float MaxImpluseForce = 5f;
		float angle = Random.Range(0, 2 * Mathf.PI);
		Vector2 direction = new Vector2(Mathf.Cos(angle), Mathf.Sin(angle));
		float force  = Random.Range(MinImpulseForce, MaxImpluseForce);
		GetComponent<Rigidbody2D>().AddForce(direction * force, ForceMode2D.Impulse);

		spriteRenderer = GetComponent<SpriteRenderer>();
		spriteRenderer.sprite = sprites[(int)Random.Range(0, 4)];

        
	}
	

}
