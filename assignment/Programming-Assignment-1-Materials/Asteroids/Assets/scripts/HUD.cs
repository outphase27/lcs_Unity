using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HUD : MonoBehaviour {
    [SerializeField]
    Text text;
    float passSecond = 0;
    int pS = 0;
    bool timerRun = true;


	// Use this for initialization
	void Start () {
        text.text = "0";
	}
	
	// Update is called once per frame
	void Update () {
        if (timerRun == true)
        {
            passSecond += Time.deltaTime;
            pS = (int)passSecond;
            text.text = "Timer: " + pS.ToString();
        }
	}

    public void StopGameTimer()
    {
        timerRun = false;
    }
}
