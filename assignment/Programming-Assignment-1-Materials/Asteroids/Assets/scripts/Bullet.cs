using System.Collections;
using System.Collections.Generic;
using UnityEngine;
/// <summary>
/// this is about bullet
/// </summary>
public class Bullet : MonoBehaviour {
    

    //death support
    const float bulletLifespanSecond = 1;
    Timer deathTimer;

    public void ApplyForce(Vector2 vector2)
    {
        const int ForceMagnitude = 30;
        Rigidbody2D rb2D = GetComponent<Rigidbody2D>();
        rb2D.AddForce(vector2 * ForceMagnitude, ForceMode2D.Impulse);
    }
	// Use this for initialization
	void Start () {
        deathTimer = gameObject.AddComponent<Timer>();
        deathTimer.Duration = bulletLifespanSecond;
        deathTimer.Run();
		
	}
	
	// Update is called once per frame
	void Update () {
        if(deathTimer.Finished){
            Destroy(gameObject);
        }
		
	}
}
