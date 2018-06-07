using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class Block : MonoBehaviour {
    protected float blockPoints;
    // Use this for initialization

    AddPoints addPoints;

	virtual protected void Start () {
       
        addPoints = new AddPoints();
        EventManager.AddAddPointsInvoker(this);

	}
	
	// Update is called once per frame
	void Update () {
		
	}

    virtual protected void OnCollisionEnter2D(Collision2D collision)
    {
        GameObject bobj = collision.gameObject;
        if(bobj.tag=="Ball")
        {
            AudioManager.Play(AudioClipName.BallCollision);
            //HUD.ScoreAdd(blockPoints);
            addPoints.Invoke(blockPoints);
            Destroy(gameObject);
            //print(ConfigurationUtils.BallLifeTime);
        }
    }

    public void AddAddPointsListener(UnityAction<float> listener)
    {
        addPoints.AddListener(listener);
    }


}
