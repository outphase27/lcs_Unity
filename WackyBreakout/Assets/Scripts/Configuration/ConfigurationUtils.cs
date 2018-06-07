using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Provides access to configuration data
/// </summary>
public static class ConfigurationUtils
{
    static ConfigurationData configurationData;
    #region Properties
    
    /// <summary>
    /// Gets the paddle move units per second
    /// </summary>
    /// <value>paddle move units per second</value>
    public static float PaddleMoveUnitsPerSecond
    {
        get { return configurationData.PaddleMoveUnitsPerSecond; }
    }
    public static float BallImpulswForce
    {
        get { return configurationData.BallImpulseForce; }
    }
    public static float BallLifeTime
    {
        get { return configurationData.BallLifeTime; }
    }
    public static float MaximumSpawnTime
    {
        get { return configurationData.MaximumSpawnTime; }
    }
    public static float MinimumSpawnTime
    {
        get { return configurationData.MinimumSpawnTime; }
    }
    public static float StandardBlockPoint
    {
        get { return configurationData.StandardBlockPoint; }
    }
    public static float BonusBlockPoint
    {
        get { return configurationData.BonusBlockPoint; }
    }
    public static float PickUpBlockPoint
    {
        get { return configurationData.PickUpBlockPoint; }
    }
    public static float StandardBlockSpawnProbability
    {
        get { return configurationData.StandardBlockSpawnProbability; }
    }
    public static float BonusBlockSpawnProbability
    {
        get { return configurationData.BonusBlockSpawnProbability; }
    }
    public static float FreezerBlockSpawnProbability
    {

        get { return configurationData.FreezerBlockSpawnProbability; }
    }
    public static float SpeedUpBlockProbability
    {
        get { return configurationData.SpeedUpBlockSpawnProbability; }
    }
    public static int BallNumber
    {
        get { return configurationData.BallNumber; }
    }
    public static float FreezerEffectDuration
    {
        get { return configurationData.FreezerEffectDuration; }
    }
    public static float SpeedUpSeconds
    {
        get { return configurationData.SpeedUpSeconds; }
    }
    public static float SpeedUpTimes
    {
        get { return configurationData.SpeedUpTimes; }
    }



    #endregion
    
    /// <summary>
    /// Initializes the configuration utils
    /// </summary>scoreText.text = scorePrefix + score;
    public static void Initialize()
    {
       configurationData = new ConfigurationData();
    }
}
