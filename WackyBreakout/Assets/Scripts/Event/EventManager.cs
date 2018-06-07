using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;


public static class EventManager 
{
    static List<PickUpBlock> freezerEffectInvokers = new List<PickUpBlock>();
    static List<UnityAction<float>> freezerEffectListeners = new List<UnityAction<float>>();

    static List<PickUpBlock> speedUpInvokers = new List<PickUpBlock>();
    static List<UnityAction<float, float>> speedUplisteners = new List<UnityAction<float, float>>();

    static List<Block> AddPointsInvokers = new List<Block>();
    static List<UnityAction<float>> AddPointsListeners = new List<UnityAction<float>>();

    static List<Ball> BallMissInvokers = new List<Ball>();
    static List<UnityAction> BallMissListeners = new List<UnityAction>();

    static List<Ball> BallSpawnInvokers = new List<Ball>();
    static List<UnityAction> BallSpawnlisteners = new List<UnityAction>();

    static List<HUD> LastBallLostInvokers = new List<HUD>();
    static List<UnityAction> LastBallLostListeners = new List<UnityAction>();
    /*
    static List<Timer> TimerFinishedInvokers = new List<Timer>();
    static List<UnityAction> TimerFinishedListeners = new List<UnityAction>();

    public static void AddTimerFinishedInvoker(Timer invoker)
    {
        TimerFinishedInvokers.Add(invoker);
        foreach (UnityAction listener in TimerFinishedListeners)
        {
            invoker.AddTimerFinishedListener(listener);
        }
    }
    public static void AddTimerFinishedListener(UnityAction listener)
    {
        TimerFinishedListeners.Add(listener);
        foreach (Timer invoker in TimerFinishedInvokers)
        {
            invoker.AddTimerFinishedListener(listener);
        }
    }
*/
    public static void AddLastBallLostInvoker(HUD invoker)
    {
        LastBallLostInvokers.Add(invoker);
        foreach (UnityAction listener in LastBallLostListeners)
        {
            invoker.AddLastBallLostListener(listener);
        }
    }
    public static void AddLastBallListener(UnityAction listener)
    {
        LastBallLostListeners.Add(listener);
        foreach (HUD invoker in LastBallLostInvokers)
        {
            invoker.AddLastBallLostListener(listener);
        }
    }
    public static void AddBallSpawnInvoker (Ball invoker)
    {
        BallSpawnInvokers.Add(invoker);
        foreach (UnityAction listener in BallSpawnlisteners)
        {
            invoker.AddBallSpawnListener(listener);
        }
    }
    public static void AddBallSpawnListener(UnityAction listener)
    {
        BallSpawnlisteners.Add(listener);
        foreach (Ball invoker in BallSpawnInvokers)
        {
            invoker.AddBallMissListener(listener);
        }
    }
    public static void AddBallMissInvoker(Ball invoker)
    {
        BallMissInvokers.Add(invoker);
        foreach (UnityAction listener in BallMissListeners)
        {
            invoker.AddBallMissListener(listener);
        }
    }
    public static void AddBallMissListener(UnityAction listener)
    {
        BallMissListeners.Add(listener);
        foreach(Ball invoker in BallMissInvokers)
        {
            invoker.AddBallMissListener(listener);
        }
    }
    public static void AddAddPointsInvoker(Block invoker)
    {
        AddPointsInvokers.Add(invoker);
        foreach (UnityAction<float> listener in AddPointsListeners)
        {
            invoker.AddAddPointsListener(listener);
        }
    }
    public static void AddAddPointsListener(UnityAction<float> listener)
    {
        AddPointsListeners.Add(listener);
        foreach (Block invoker in AddPointsInvokers)
        {
            invoker.AddAddPointsListener(listener);
        }
    }
    public static void AddFreezerEffectInvoker(PickUpBlock invoker)
    {
        freezerEffectInvokers.Add(invoker);
        foreach (UnityAction<float> listener in freezerEffectListeners)
        {
            invoker.AddFreezerEffectListener(listener);
        }
                            
    }
    public static void AddFreezerEffectListener(UnityAction<float> listener)
    {
        freezerEffectListeners.Add(listener);
        foreach(PickUpBlock invoker in freezerEffectInvokers)
        {
            invoker.AddFreezerEffectListener(listener);
        }
    }
    public static void AddSpeedUpEffectInvoker (PickUpBlock invoker)
    {
        speedUpInvokers.Add(invoker);
        foreach(UnityAction<float,float> listener in speedUplisteners)
        {
            invoker.AddSpeedUpEffectListener(listener);
        }
    }
    public static void AddSpeedUpEffectListener(UnityAction<float,float> listener)
    {
        speedUplisteners.Add(listener);
        foreach(PickUpBlock invoker in speedUpInvokers)
        {
            invoker.AddSpeedUpEffectListener(listener);
        }
    }



}
