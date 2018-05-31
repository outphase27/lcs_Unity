using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NewLevelBuilder : MonoBehaviour {
    [SerializeField]
    GameObject paddle;
    [SerializeField]
    GameObject prefabStdBlock;
    [SerializeField]
    GameObject prefabBonusBlock;
    [SerializeField]
    GameObject prefabPickUpBlock;
    // Use this for initialization
    [SerializeField]
    int layersNum;

	void Start () {
        Instantiate(paddle);


        //measure the shape of the block
        GameObject temBlock = Instantiate<GameObject>(prefabStdBlock);
        BoxCollider2D boxCollider = temBlock.GetComponent<BoxCollider2D>();
        float blockWidth = boxCollider.size.x;
        float blockHeight = boxCollider.size.y;
        Destroy(temBlock);

        //blocks per row
        float screenWidth = ScreenUtils.ScreenRight - ScreenUtils.ScreenLeft;
        int blockNum = (int)(screenWidth / blockWidth);
        float totalBlockWidth = blockWidth * blockNum;
        // 计算左边的block的中心点
        float leftBlockoffset = ScreenUtils.ScreenLeft + (screenWidth - totalBlockWidth) / 2 + blockWidth / 2;

        float topRowOffset = ScreenUtils.ScreenTop - (ScreenUtils.ScreenTop - ScreenUtils.ScreenBottom) / 7 - blockHeight / 2;
        Vector2 currentPosition = new Vector2(leftBlockoffset, topRowOffset);

        int layers = 3;
        for (int i = 0; i < layers;++i)
        {
            for (int j = 0; j < blockNum; j++)
            {
                float choice = Random.value;
                if (choice < ConfigurationUtils.StandardBlockSpawnProbability)
                {
                    Instantiate(prefabStdBlock, currentPosition, Quaternion.identity);
                }
                else if (choice < ConfigurationUtils.StandardBlockSpawnProbability + ConfigurationUtils.BonusBlockSpawnProbability)
                {
                    Instantiate(prefabBonusBlock, currentPosition, Quaternion.identity);
                }
                else
                {

                    GameObject GO = Instantiate(prefabPickUpBlock, currentPosition, Quaternion.identity);
                    PickUpBlock pickUpBlock = GO.GetComponent<PickUpBlock>();
                    if (choice < ConfigurationUtils.StandardBlockSpawnProbability + ConfigurationUtils.BonusBlockSpawnProbability + ConfigurationUtils.FreezerBlockSpawnProbability)
                    {
                        pickUpBlock.Effect = PickupEffect.Freezer;
                    }
                    else
                        pickUpBlock.Effect = PickupEffect.Speedup;
                }
                currentPosition.x += blockWidth;
            }
            currentPosition.x = leftBlockoffset;
            currentPosition.y -= blockHeight;
        }
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
