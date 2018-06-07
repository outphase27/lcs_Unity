using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
/// <summary>
/// Ball 
/// </summary>
public class Ball : MonoBehaviour {
    Rigidbody2D rb2D;
    Timer ballTimer,moveTimer,speedUpTimer;
    //bool moveToken = true;
    float speeduptimes;
    bool speedUp;
    BallMiss ballMiss;
    BallSpawn ballSpawn;

	// Use this for initialization
	void Start () {
        ballTimer = gameObject.AddComponent<Timer>();
        ballTimer.AddTimerFinishedListener(HandleBallTimerFinished);
        ballTimer.Duration = ConfigurationUtils.BallLifeTime;
        ballTimer.Run();
        moveTimer = gameObject.AddComponent<Timer>();
        moveTimer.AddTimerFinishedListener(HandleMoveTimerFinished);
        moveTimer.Duration = 1;
        moveTimer.Run();
        speedUpTimer = gameObject.AddComponent<Timer>();
        speedUpTimer.AddTimerFinishedListener(HandleSpeedUpTimerFinished);
        speedUp = false;
        EventManager.AddSpeedUpEffectListener(HandleSpeedUpEffect);
        ballMiss = new BallMiss();
        EventManager.AddBallMissInvoker(this);

        ballSpawn = new BallSpawn();
        EventManager.AddBallSpawnInvoker(this);


	}
	
	// Update is called once per frame
	void Update () {
        /*
        if(moveToken&&moveTimer.Finished) // 这个token是担心反复给力
        {
            rb2D = GetComponent<Rigidbody2D>();
            Vector2 vector2;
            vector2.x = Mathf.Cos(Mathf.PI / 180 * 20);
            vector2.y = Mathf.Sin(Mathf.PI / 180 * 20);
            vector2 *= ConfigurationUtils.BallImpulswForce*EffectUtils.SpeedUpTimes;
            //print(EffectUtils.SpeedUpTimes);
            rb2D.AddForce(vector2, ForceMode2D.Impulse);
            moveToken = false;  
        }
        if(ballTimer.Finished)
        {
            Camera.main.GetComponent<BallSpawner>().Spawnball();
            Destroy(gameObject);
        }


        if(speedUpTimer.Finished)
        {
            rb2D = GetComponent<Rigidbody2D>();
            rb2D.velocity = rb2D.velocity / speeduptimes;
            speedUp = false;
            speedUpTimer.Stop();
        }
        */	
	}
    void HandleMoveTimerFinished()
    {
        rb2D = GetComponent<Rigidbody2D>();
        Vector2 vector2;
        vector2.x = Mathf.Cos(Mathf.PI / 180 * 75);
        vector2.y = Mathf.Sin(Mathf.PI / 180 * 75);
        vector2 *= ConfigurationUtils.BallImpulswForce * EffectUtils.SpeedUpTimes;
        //print(EffectUtils.SpeedUpTimes);
        rb2D.AddForce(vector2, ForceMode2D.Impulse);
    }

    void HandleSpeedUpTimerFinished()
    {
        rb2D = GetComponent<Rigidbody2D>();
        rb2D.velocity = rb2D.velocity / speeduptimes;
        speedUp = false;
        speedUpTimer.Stop();
    }
    void HandleBallTimerFinished()
    {
        //Camera.main.GetComponent<BallSpawner>().Spawnball();
        ballSpawn.Invoke();
        Destroy(gameObject);
    }

    public void SetDirection(Vector2 vector2)
    {
        rb2D = GetComponent<Rigidbody2D>();
        float x = rb2D.velocity.x;
        float y = rb2D.velocity.y;
        float speed = Mathf.Sqrt(x * x + y * y);
        rb2D.velocity = vector2 * speed;               
    }

    public void SpeedUp(float speedUpTimes)
    {
        rb2D = GetComponent<Rigidbody2D>();
        rb2D.velocity = rb2D.velocity * speedUpTimes;
    }


    void OnBecameInvisible()
    {
        if(!ballTimer.Finished) //只有在没结束时间的球发动，时间结束的只发动上面的语句
        {
            
            float halfBallCollider = gameObject.GetComponent<BoxCollider2D>().size.y / 2;
            if (transform.position.y - halfBallCollider < ScreenUtils.ScreenBottom) //只有球在外面的时候发动，解决停止游戏的bug
            {
                //HUD.BallMiss();
                ballMiss.Invoke();
                // Camera.main.GetComponent<BallSpawner>().Spawnball();
                ballSpawn.Invoke();
            }
            Destroy(gameObject);
        }
    }

    void HandleSpeedUpEffect(float speedUpDurtation, float speedUpTimes)
    {
        AudioManager.Play(AudioClipName.SpeedupEffectActivated);
        speeduptimes = speedUpTimes;
        if (speedUp == false)
        {
            speedUpTimer.Duration = speedUpDurtation;
            speedUpTimer.Run();
            SpeedUp(speedUpTimes);


        }
        else
        {
            speedUpTimer.Stop();
            speedUpTimer.Duration = speedUpDurtation;
            speedUpTimer.Run();
        }
    }

    public void AddBallMissListener(UnityAction listener)
    {
        ballMiss.AddListener(listener);
    }

    public void AddBallSpawnListener(UnityAction listener)
    {
        ballSpawn.AddListener(listener);
    }


}