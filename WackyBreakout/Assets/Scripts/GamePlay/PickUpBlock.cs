using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class PickUpBlock : Block {
    [SerializeField]
    Sprite FreezerSprite;
    [SerializeField]
    Sprite SpeedUPSprite;
    // Use this for initialization

    float freezerDuration;
    float speedUpDuration;
    float speedUpTimes;
    FreezerEffectActivatedEvent freezerEffectActivatedEvent;
    SpeedUpActivatezEvent speedUpActivatezEvent;

    PickupEffect effect;
	override protected void Start () {
        base.Start();
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
                freezerDuration = ConfigurationUtils.FreezerEffectDuration;
                freezerEffectActivatedEvent = new FreezerEffectActivatedEvent();
                EventManager.AddFreezerEffectInvoker(this);
            }
            else
            {
                spriteRenderer.sprite = SpeedUPSprite;
                speedUpDuration = ConfigurationUtils.SpeedUpSeconds;
                speedUpTimes = ConfigurationUtils.SpeedUpTimes;
                speedUpActivatezEvent = new SpeedUpActivatezEvent();
                EventManager.AddSpeedUpEffectInvoker(this);
            }
            
        }
    }

    public void AddFreezerEffectListener(UnityAction<float> listener)
    {
        freezerEffectActivatedEvent.AddListener(listener);
    }
    public void AddSpeedUpEffectListener(UnityAction<float,float> listener)
    {
        speedUpActivatezEvent.AddListener(listener);
    }

    protected override void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Ball"))
        {
            if(effect == PickupEffect.Freezer)
            {
                freezerEffectActivatedEvent.Invoke(freezerDuration);
            }
            if(effect == PickupEffect.Speedup)
            {
                speedUpActivatezEvent.Invoke(speedUpDuration, speedUpTimes);
            }
            base.OnCollisionEnter2D(collision);
        }
    }

}
