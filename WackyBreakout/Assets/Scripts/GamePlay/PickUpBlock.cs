using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PickUpBlock : Block {
    [SerializeField]
    Sprite FreezerSprite;
    [SerializeField]
    Sprite SpeedUPSprite;
    // Use this for initialization

    PickupEffect effect;
	void Start () {
        blockPoints = ConfigurationUtils.PickUpBlockPoint;

		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public PickupEffect Effect
    {
        set
        {
            effect = value;
            // set sprite
            SpriteRenderer spriteRenderer = GetComponent<SpriteRenderer>();
            if (effect == PickupEffect.Freezer)
            {
                spriteRenderer.sprite = FreezerSprite;
            }
            else
            {
                spriteRenderer.sprite = SpeedUPSprite;
            }
            
        }
    }

}
