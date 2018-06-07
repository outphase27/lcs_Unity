using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StandardBlock : Block {
    [SerializeField]
    Sprite[] sprites;

	// Use this for initialization
	override protected void Start () {
        base.Start();

        blockPoints = ConfigurationUtils.StandardBlockPoint;
        SpriteRenderer spriteRenderer = GetComponent<SpriteRenderer>();
        int spriteNumber = Random.Range(0, 3);
        spriteRenderer.sprite = sprites[spriteNumber];

	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
