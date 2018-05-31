using System.Collections;
using System.Collections.Generic;
using UnityEngine;
/// <summary>
/// Ball 
/// </summary>
public class Ball : MonoBehaviour {
    Rigidbody2D rb2D;
    Timer ballTimer,moveTimer;
    bool moveToken = true;

	// Use this for initialization
	void Start () {
        ballTimer = gameObject.AddComponent<Timer>();
        ballTimer.Duration = ConfigurationUtils.BallLifeTime;
        ballTimer.Run();

        moveTimer = gameObject.AddComponent<Timer>();
        moveTimer.Duration = 1;
        moveTimer.Run();   

	}
	
	// Update is called once per frame
	void Update () {
        if(moveToken&&moveTimer.Finished)
        {
            rb2D = GetComponent<Rigidbody2D>();
            Vector2 vector2;
            vector2.x = Mathf.Cos(Mathf.PI / 180 * 20);
            vector2.y = Mathf.Sin(Mathf.PI / 180 * 20);
            vector2 *= ConfigurationUtils.BallImpulswForce;
            rb2D.AddForce(vector2, ForceMode2D.Impulse);
            moveToken = false;
            
        }
        if(ballTimer.Finished)
        {
            Camera.main.GetComponent<BallSpawner>().Spawnball();
            Destroy(gameObject);
        }
		
	}

    public void SetDirection(Vector2 vector2)
    {
        rb2D = GetComponent<Rigidbody2D>();
        float x = rb2D.velocity.x;
        float y = rb2D.velocity.y;
        float speed = Mathf.Sqrt(x * x + y * y);
        rb2D.velocity = vector2 * speed;
                     
    }

    void OnBecameInvisible()
    {
        if(!ballTimer.Finished) //只有在没结束时间的球发动，时间结束的只发动上面的语句
        {
            
            float halfBallCollider = gameObject.GetComponent<BoxCollider2D>().size.y / 2;
            if (transform.position.y - halfBallCollider < ScreenUtils.ScreenBottom) //只有球在外面的时候发动，解决停止游戏的bug
            {
                HUD.BallMiss();
                Camera.main.GetComponent<BallSpawner>().Spawnball();
                //HUD,ReduceBallsLeft();
            }
            Destroy(gameObject);
        }
    }






}