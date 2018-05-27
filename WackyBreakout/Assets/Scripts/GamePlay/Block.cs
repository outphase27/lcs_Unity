using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Block : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    void OnCollisionEnter2D(Collision2D collision)
    {
        GameObject bobj = collision.gameObject;
        if(bobj.tag=="Ball")
        {
            Destroy(gameObject);
        }
    }
}
