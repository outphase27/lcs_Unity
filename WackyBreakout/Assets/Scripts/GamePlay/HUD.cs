using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HUD : MonoBehaviour {
    static Text scoreText;
    static float score = 0;
    const string scorePrefix = "Score: ";
    static Text ballLeftText;
    static int ballLeft;
    const string ballLeftPrefix = "Ball Left: ";
	// Use this for initialization
	void Start () {
        scoreText = GameObject.FindGameObjectWithTag("Score").GetComponent<Text>();
        scoreText.text = scorePrefix + score;

        ballLeftText = GameObject.FindGameObjectWithTag("BallLeft").GetComponent<Text>();
        ballLeft = ConfigurationUtils.BallNumber;
        ballLeftText.text = ballLeftPrefix + ballLeft;	
	}
	
	// Update is called once per frame
	void Update () {
        
		
	}

    public static void ScoreAdd(float points)
    {
        score += points;
        scoreText.text = scorePrefix + score;
    }

    public static void BallMiss()
    {
        ballLeft--;
        ballLeftText.text = ballLeftPrefix + ballLeft;
    }
}
