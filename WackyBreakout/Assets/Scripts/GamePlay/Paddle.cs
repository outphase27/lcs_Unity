using System.Collections;
using System.Collections.Generic;
using UnityEngine;
/// <summary>
/// Paddle Control
/// </summary>
public class Paddle : MonoBehaviour
{

    Rigidbody2D rb2D;
    float halfWidth;
    float halfheight;
    const float tolerance = 0.05f;
    const float BounceAngleHalfRange = Mathf.PI / 3;
    bool frozen;
    Timer frozenTimer;

    // Use this for initialization
    void Start()
    {
        rb2D = GetComponent<Rigidbody2D>();
        BoxCollider2D collider2D = GetComponent<BoxCollider2D>();
        halfWidth = collider2D.size.x / 2;

        frozen = false;
        frozenTimer = gameObject.AddComponent<Timer>();
        frozenTimer.AddTimerFinishedListener(HandleFrozenTimerFinished);
        EventManager.AddFreezerEffectListener(HandleFreezerEffect);

    }

    // Update is called once per frame
    void Update()
    {
        /*
        if(frozenTimer.Finished)
        {
            frozen = false;
            frozenTimer.Stop();
        }
        */
    }

    void HandleFrozenTimerFinished()
    {
        frozen = false;
        frozenTimer.Stop();
    }
    // 50 times / sec
    void FixedUpdate()
    {
        Vector3 position = transform.position;
        float horizontalInput = Input.GetAxis("Horizontal");
        if (horizontalInput != 0 && !frozen)
        {
            position.x += horizontalInput * ConfigurationUtils.PaddleMoveUnitsPerSecond * Time.deltaTime;
        }
        position.x = CalculateClampedX(position.x);
        transform.position = position;
    }

    float CalculateClampedX(float x)
    {
        float new_x = 0;
        if (x > ScreenUtils.ScreenRight - halfWidth)
            new_x = ScreenUtils.ScreenRight - halfWidth;
        else if (x < ScreenUtils.ScreenLeft + halfWidth)
            new_x = ScreenUtils.ScreenLeft + halfWidth;
        else
            new_x = x;
        return new_x;
    }
    /// <summary>
    /// Detects collision with a ball to aim the ball
    /// </summary>
    /// <param name="coll">collision info</param>
    void OnCollisionEnter2D(Collision2D coll)
    {
        
        if (coll.gameObject.CompareTag("Ball") && CollsionOnTOP(coll))
        {
            AudioManager.Play(AudioClipName.BallCollision);
            // calculate new ball direction
            float ballOffsetFromPaddleCenter = transform.position.x -
                coll.transform.position.x;
            float normalizedBallOffset = ballOffsetFromPaddleCenter /
                halfWidth;
            float angleOffset = normalizedBallOffset * BounceAngleHalfRange;
            float angle = Mathf.PI / 2 + angleOffset;
            Vector2 direction = new Vector2(Mathf.Cos(angle), Mathf.Sin(angle));

            // tell ball to set direction to new direction
            Ball ballScript = coll.gameObject.GetComponent<Ball>();
            ballScript.SetDirection(direction);
        }
    }

    bool CollsionOnTOP(Collision2D coll)
    {

        ContactPoint2D[] contacts = coll.contacts;
        return Mathf.Abs(contacts[0].point.y - contacts[1].point.y) < tolerance;
    }

    void HandleFreezerEffect(float duration)
    {
        AudioManager.Play(AudioClipName.FreezerEffectActivated);
        
        if(frozen==false)
        {
            frozenTimer.Duration = duration;
            frozenTimer.Run();
            frozen = true;
        }
        else
        {
            
            frozenTimer.Stop();
            frozenTimer.Duration = duration;
            frozenTimer.Run();
        }


    }

}
