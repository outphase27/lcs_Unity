using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;

public class HUD : MonoBehaviour {
    static Text scoreText;
    static float score = 0;
    const string scorePrefix = "Score: ";
    static Text ballLeftText;
    static int ballLeft;
    const string ballLeftPrefix = "Ball Left: ";
    LastBallLost lastBallLost;
    public static float Score
    {
        get { return score; }
    }
	// Use this for initialization
	void Start () {
        scoreText = GameObject.FindGameObjectWithTag("Score").GetComponent<Text>();
        scoreText.text = scorePrefix + score;

        ballLeftText = GameObject.FindGameObjectWithTag("BallLeft").GetComponent<Text>();
        ballLeft = ConfigurationUtils.BallNumber;
        ballLeftText.text = ballLeftPrefix + ballLeft;
        EventManager.AddAddPointsListener(ScoreAdd);
        EventManager.AddBallMissListener(BallMiss);
        lastBallLost = new LastBallLost();
        EventManager.AddLastBallLostInvoker(this);
	}
	
	// Update is called once per frame
	void Update () 
    {
	}

    void ScoreAdd(float points)
    {
        score += points;
        scoreText.text = scorePrefix + score;
    }

    void BallMiss()
    {
        ballLeft--;
        ballLeftText.text = ballLeftPrefix + ballLeft;
        if(ballLeft==0)
        {
            lastBallLost.Invoke();
        }
    }

    public void AddLastBallLostListener(UnityAction listener)
    {
        lastBallLost.AddListener(listener);
    }
}
