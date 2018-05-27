using System.Collections;
using System.Collections.Generic;
using UnityEngine;
/// <summary>
/// Ball 
/// </summary>
public class Ball : MonoBehaviour {
    Rigidbody2D rb2D;
	// Use this for initialization
	void Start () {
        rb2D = GetComponent<Rigidbody2D>();
        Vector2 vector2;
        vector2.x = Mathf.Cos(Mathf.PI / 180 * 20);
        vector2.y = Mathf.Sin(Mathf.PI / 180 * 20);
        vector2 *= ConfigurationUtils.BallImpulswForce;
        rb2D.AddForce(vector2,ForceMode2D.Impulse);
	}
	
	// Update is called once per frame
	void Update () {
		
	}
    //看一下
    public void SetDirection(Vector2 vector2)
    {
        rb2D = GetComponent<Rigidbody2D>();
        float x = rb2D.velocity.x;
        float y = rb2D.velocity.y;
        float speed = Mathf.Sqrt(x * x + y * y);
        rb2D.velocity = vector2 * speed;
                     
    } 
}
