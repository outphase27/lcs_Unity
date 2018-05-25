using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AsteroidSpawner : MonoBehaviour {


	/// <summary>
	/// AsteroidSpawner
	/// </summary>
	/// 
	// Use this for initialization

	[SerializeField]

	GameObject prefabAsteroid;

	float maxSpawnY;
	float minSpawnY;
	float maxSpawnX;
	float minSpawnX;
	Asteroid a1,a2,a3,a4;

	const float SpawnBorder = 0.5f;

	void Start () {



		GameObject temA = Instantiate<GameObject>(prefabAsteroid);
		CircleCollider2D AstCollider = temA.GetComponent<CircleCollider2D>();
		float astradius = AstCollider.radius;
		Destroy(temA);

		Vector3 topLeftCorner = new Vector3(0, Screen.height, -Camera.main.transform.position.z);
        Vector3 bottomRightCorner = new Vector3(Screen.width, 0, -Camera.main.transform.position.z);
        Vector3 worldTopLeftCorner = Camera.main.ScreenToWorldPoint(topLeftCorner);
        Vector3 worldBottomRightCorner = Camera.main.ScreenToWorldPoint(bottomRightCorner);
        maxSpawnY = worldTopLeftCorner.y - astradius ;
        minSpawnY = worldBottomRightCorner.y + astradius;
        minSpawnX = worldTopLeftCorner.x + astradius;
        maxSpawnX = worldBottomRightCorner.x - astradius;



		Vector3 location1 = new Vector3(maxSpawnX,Random.Range(minSpawnY, maxSpawnY));
		GameObject A1 = Instantiate(prefabAsteroid);
		a1 = A1.GetComponent<Asteroid>();
		a1.Initialize(Direction.Left,location1);

		Vector3 location2 = new Vector3(minSpawnX, Random.Range(minSpawnY, maxSpawnY));
        GameObject A2 = Instantiate(prefabAsteroid);
        a2 = A2.GetComponent<Asteroid>();
        a2.Initialize(Direction.Right, location2);

		Vector3 location3 = new Vector3(Random.Range(minSpawnX,maxSpawnX), minSpawnY);
        GameObject A3 = Instantiate(prefabAsteroid);
        a3 = A3.GetComponent<Asteroid>();
        a3.Initialize(Direction.Up, location3);
        
		Vector3 location4 = new Vector3(Random.Range(minSpawnX, maxSpawnX), maxSpawnY);
        GameObject A4 = Instantiate(prefabAsteroid);
        a4 = A4.GetComponent<Asteroid>();
        a4.Initialize(Direction.Down, location4);


        

     
	}
	

}
