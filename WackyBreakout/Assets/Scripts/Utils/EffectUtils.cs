using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class EffectUtils
{


    static SpeedUpMonitor GetSpeedUpMonitor()
    {
         return Camera.main.GetComponent<SpeedUpMonitor>(); 
    }


    public static bool SpeedUpstatus
    {
        get { return GetSpeedUpMonitor().SpeedUpStatus; }
    }

    public static float SpeedUpTimes
    {
        get { return GetSpeedUpMonitor().SpeedUpTimes; }
    }

}
