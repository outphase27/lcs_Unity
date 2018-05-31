using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System;

/// <summary>
/// A container for the configuration data
/// </summary>
public class ConfigurationData
{
    #region Fields

    const string ConfigurationDataFileName = "ConfigurationData.csv";

    // configuration data
    static float paddleMoveUnitsPerSecond = 10;
    static float ballImpulseForce = 10;
    static float ballLifeTime = 10;
    static float miniSpawnTime = 5;
    static float maxSpawnTime = 10;
    static float standardBlockPoint = 10;
    static float bonusBlockPoint = 50;
    static float pickUpBlockPoint = 5;
    static float stdBlockProbability = 0.7f;
    static float bonusBlockProbability = 0.1f;
    static float freezerBlockProbability = 0.1f;
    static float speedUpBlockProababitlity = 0.1f;
    static int ballNumber = 5;


    #endregion

    #region Properties

    /// <summary>
    /// Gets the paddle move units per second
    /// </summary>
    /// <value>paddle move units per second</value>
    public float PaddleMoveUnitsPerSecond
    {
        get { return paddleMoveUnitsPerSecond; }
    }

    /// <summary>
    /// Gets the impulse force to apply to move the ball
    /// </summary>
    /// <value>impulse force</value>
    public float BallImpulseForce
    {
        get { return ballImpulseForce; }    
    }


    /// <summary>
    /// Gets the life time of the ball
    /// </summary>
    public float BallLifeTime
    {
        get { return ballLifeTime; }
    }

    /// <summary>
    /// minimum and max maximum spawn time 
    /// </summary>
    public float MinimumSpawnTime
    {
        get { return miniSpawnTime; }
    }
    public float MaximumSpawnTime
    {
        get { return maxSpawnTime; }
    }

    /// <summary>
    /// block points for standard block & Bonus block &PickUp block
    /// </summary>
    public float StandardBlockPoint
    {
        get { return standardBlockPoint; }
    }
    public float BonusBlockPoint
    {
        get { return bonusBlockPoint; }
    }
    public float PickUpBlockPoint
    {
        get { return pickUpBlockPoint; }
    }
    /// <summary>
    /// Spawn probability for different blocks
    /// </summary>
    public float StandardBlockSpawnProbability
    {
        get { return stdBlockProbability; }
    }
    public float BonusBlockSpawnProbability
    {
        get { return bonusBlockProbability; }
    }
    public float FreezerBlockSpawnProbability
    {
        get { return freezerBlockProbability; }
    }
    public float SpeedUpBlockSpawnProbability
    {
        get { return speedUpBlockProababitlity; }
    }
    /// <summary>
    /// Number of the ball
    /// </summary>
    public int BallNumber
    {
        get { return ballNumber; }
    }
    #endregion

    #region Constructor

    /// <summary>
    /// Constructor
    /// Reads configuration data from a file. If the file
    /// read fails, the object contains default values for
    /// the configuration data
    /// </summary>
    /// 
    /// 
    public ConfigurationData()
    {
        StreamReader input = null;
        try
        {
            input = File.OpenText(Path.Combine(
                Application.streamingAssetsPath, ConfigurationDataFileName));
            string names = input.ReadLine();
            string values = input.ReadLine();
            SetConfigurationDataFields(values);
        }
        catch (Exception error)
        {
            Debug.Log(error.Message); // showing the error message
        }
        finally{
            if(input!=null)
            {
                input.Close();
            }
        }

    }

    void SetConfigurationDataFields(string csvValues)
    {
        string[] values = csvValues.Split(',');
        paddleMoveUnitsPerSecond = float.Parse(values[0]);
        ballImpulseForce = float.Parse(values[1]);
        ballLifeTime = float.Parse(values[2]);
        miniSpawnTime = float.Parse(values[3]);
        maxSpawnTime = float.Parse(values[4]);
        standardBlockPoint = float.Parse(values[5]);
        bonusBlockPoint = float.Parse(values[6]);
        pickUpBlockPoint = float.Parse(values[7]);
        stdBlockProbability = float.Parse(values[8]);
        bonusBlockProbability = float.Parse(values[9]);
        freezerBlockProbability = float.Parse(values[10]);
        speedUpBlockProababitlity = float.Parse(values[11]);
        ballNumber = int.Parse(values[12]);


    }


    #endregion
}
