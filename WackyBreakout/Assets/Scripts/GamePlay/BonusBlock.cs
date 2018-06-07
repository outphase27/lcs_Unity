using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BonusBlock : Block{

	// Use this for initialization
	override protected void Start () {
        base.Start();
        blockPoints = ConfigurationUtils.BonusBlockPoint;

	}
	
	// Update is called once per frame
	void Update () {
		
	}

    protected override void OnCollisionEnter2D(Collision2D collision)
    {
        AudioManager.Play(AudioClipName.BonusBlock);
        base.OnCollisionEnter2D(collision);
    }
}
