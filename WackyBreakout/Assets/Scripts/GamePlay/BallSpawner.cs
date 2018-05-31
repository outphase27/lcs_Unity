using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallSpawner : MonoBehaviour {
    [SerializeField]
    GameObject prefabBall;
    Timer spawntimer;
    float delayRange;
    Vector2 spawnLocationMin;
    Vector2 spawnLocationMax;
    bool respawn = false;
	// Use this for initialization
	void Start () {

        //确定球的出生点位置
        GameObject tempball = Instantiate<GameObject>(prefabBall);
        BoxCollider2D ballCollider = tempball.GetComponent<BoxCollider2D>();
        float ballColliderHalfWidth = ballCollider.size.x / 2;
        float ballColliderHalfHeight = ballCollider.size.y / 2;
        Destroy(tempball);
        spawnLocationMin = new Vector2(
            tempball.transform.position.x - ballColliderHalfWidth,
            tempball.transform.position.y - ballColliderHalfHeight);
        spawnLocationMax = new Vector2(
            tempball.transform.position.x + ballColliderHalfWidth,
            tempball.transform.position.y + ballColliderHalfHeight);
        
        delayRange = ConfigurationUtils.MaximumSpawnTime - ConfigurationUtils.MinimumSpawnTime;
        spawntimer = gameObject.AddComponent<Timer>();
        spawntimer.Duration = RandomSpawnDelay();
        spawntimer.Run();

        Spawnball();
	}
	
	// Update is called once per frame
	void Update () {
        if(spawntimer.Finished)
        {
            respawn = false;
            Spawnball();
            spawntimer.Duration = RandomSpawnDelay();
            spawntimer.Run();

        }
        if(respawn)
        {
            Spawnball();
        }
		
	}

    public void Spawnball()
    {
        if (Physics2D.OverlapArea(spawnLocationMin,spawnLocationMax)==null)
        {
            respawn = false;
            Instantiate(prefabBall);
        }
        else
        {
            respawn = true;
        }
    }

    float RandomSpawnDelay()
    {
        return ConfigurationUtils.MinimumSpawnTime + Random.value * delayRange;
        // Random.value 给一个0到1的随机数
    }



}
