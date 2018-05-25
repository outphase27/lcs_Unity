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
    const float MinImpulseForce = 0.5f;
    const float MaxImpluseForce = 1.5f;
	// Use this for initialization
	void Start () {
		

    
	}

	public void Initialize(Direction d,Vector3 spawnPosition)
	{
		// random force that applying on the asteriod.
		transform.position = spawnPosition;

		float baseAngle;
		if (d == Direction.Up)
			baseAngle =  Mathf.PI / 180 * 75;
		else if (d==Direction.Left)
			baseAngle =  Mathf.PI / 180 * 165;
		else if (d == Direction.Down)
            baseAngle =  Mathf.PI / 180 * 255;
		else
            baseAngle =  Mathf.PI / 180 * 345;
        float angle = Random.Range(baseAngle, baseAngle + Mathf.PI/180 * 30);
        Vector2 moveDirection = new Vector2(Mathf.Cos(angle), Mathf.Sin(angle));
        float force = Random.Range(MinImpulseForce, MaxImpluseForce);
        GetComponent<Rigidbody2D>().AddForce(moveDirection * force, ForceMode2D.Impulse);
		spriteRenderer = GetComponent<SpriteRenderer>();
		spriteRenderer.sprite = sprites[(int)Random.Range(0, 3)];
	}
    CircleCollider2D circleCollider2D;
    void OnCollisionEnter2D(Collision2D coll)
    {
        GameObject cobj = coll.gameObject;
        if (cobj.tag == "Bullet")
        {
            
            Destroy(cobj);
            AudioClipName mas = AudioClipName.AsteroidHit;
            AudioManager.Play(mas);

            Vector3 vector3 = new Vector3();
            vector3 = transform.localScale;
            if(vector3.x>0.5)
            {
                vector3.x /= 2;
                vector3.y /= 2;
                transform.localScale = vector3;
                circleCollider2D = GetComponent<CircleCollider2D>();
                circleCollider2D.radius /= 2;
                GameObject a1 = Instantiate(gameObject, transform.position, Quaternion.identity);
                a1.GetComponent<Asteroid>().StartMoving();
                GameObject a2 = Instantiate(gameObject, transform.position, Quaternion.identity);
                a2.GetComponent<Asteroid>().StartMoving();
            }
            Destroy(gameObject); 
        }
    }

    public void StartMoving()
    {
        float angle = Random.Range(0, Mathf.PI*2);
        Vector2 moveDirection = new Vector2(Mathf.Cos(angle), Mathf.Sin(angle));
        float force = Random.Range(MinImpulseForce, MaxImpluseForce);
        GetComponent<Rigidbody2D>().AddForce(moveDirection * force, ForceMode2D.Impulse);
    }
	

}
