using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rockspawner : MonoBehaviour {

	// add a prefab
	[SerializeField]
	GameObject prefabRock;

	// for the sprite
	[SerializeField]
	Sprite whiterockSprite;
	[SerializeField]
	Sprite greenrockSprite;
	[SerializeField]
	Sprite purpleSprite;

	// spawn in the proper location
	const int spawnBorderSize = 100;
	int minSpawnX;
	int maxSpawnX;
	int minSpawnY;
	int maxSpawnY;

	// spawn timer control
	const float Spawndelay = 1;
	Timer spawnTimer;

	// Use this for initialization
	void Start () {

		// the boundary value
		minSpawnX = spawnBorderSize;
		maxSpawnX = Screen.width - spawnBorderSize;
		minSpawnY = spawnBorderSize;
		maxSpawnY = Screen.height - spawnBorderSize;
		// spawn timer
		spawnTimer = gameObject.AddComponent<Timer>();
		spawnTimer.Duration = Spawndelay;
		spawnTimer.Run();
		
	}
	
	// Update is called once per frame
	void Update () {

		// make sure the number of the rock is always 3.
		int num = GameObject.FindGameObjectsWithTag("Rock").Length;
		if (num <= 2 && spawnTimer.Finished) {
			spawnRock ();
			spawnTimer.Run ();
		}
	}

	void spawnRock()
	{
		Vector3 location = new Vector3 (Random.Range (minSpawnX, maxSpawnX), Random.Range (minSpawnY, maxSpawnY), -Camera.main.transform.position.z);
		Vector3 worldlocation = Camera.main.ScreenToWorldPoint (location);
		GameObject rock = Instantiate (prefabRock)  as GameObject;
		rock.transform.position = worldlocation;

		// sprite for different rock
		SpriteRenderer spriteRender = rock.GetComponent<SpriteRenderer>();
		int number = Random.Range(0,3);
		if (number == 0)
			spriteRender.sprite = whiterockSprite;
		else if (number == 1)
			spriteRender.sprite = greenrockSprite;
		else 
			spriteRender.sprite = purpleSprite;
			
	}
}
