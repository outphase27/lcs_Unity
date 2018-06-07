using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpeedUpMonitor : MonoBehaviour {
    Timer speedUpEffectTimer;
    float speedUPFactor;
    bool SpeedUpToken;
	// Use this for initialization
	void Start () 
    {
        speedUpEffectTimer = gameObject.AddComponent<Timer>();
        speedUpEffectTimer.AddTimerFinishedListener(HandleSpeedUpEffectTimerFinished);

        SpeedUpToken = false;
        speedUPFactor = 1;
        EventManager.AddSpeedUpEffectListener(HandleSpeedUpEffect);
	}


    public bool SpeedUpStatus
    {
        get { return SpeedUpToken; }
    }

    public float SpeedUpTimes
    {
        get { return speedUPFactor; }
    }
	
	// Update is called once per frame
	void Update ()
    {
        /*
        if(speedUpEffectTimer.Finished)
        {
            //print("TimerFinished!");
            SpeedUpToken = false;
            speedUpEffectTimer.Stop();
            speedUPFactor = 1;
        }
        */
		
	}
    void HandleSpeedUpEffectTimerFinished()
    {
            //print("TimerFinished!");
            SpeedUpToken = false;
            speedUpEffectTimer.Stop();
            speedUPFactor = 1;
    }

    void HandleSpeedUpEffect(float speedUpduration, float speedTimes)
    {
        speedUPFactor = speedTimes;
        if(!SpeedUpToken)
        {
            SpeedUpToken = true;
            speedUpEffectTimer.Duration = speedUpduration;
            speedUpEffectTimer.Run();
        }
        else
        {
            speedUpEffectTimer.Stop();
            speedUpEffectTimer.Duration = speedUpduration;
            speedUpEffectTimer.Run();
        }
    }
}
