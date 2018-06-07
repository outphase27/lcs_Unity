using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GamePlayControl: MonoBehaviour {

    float score;
    bool win = false;
    private void Start()
    {
        //print(HUD.Score);
        EventManager.AddLastBallListener(HandleGameOver);
        //score = HUD.Score;
        //AudioManager.Play(AudioClipName.BGM);
    }
    // Update is called once per frame
    void Update () {
        if(Input.GetKeyDown(KeyCode.Escape))
        {
            MenuManager.GoToMenu(MenuName.Pause);
        }
        if(Input.GetKeyDown(KeyCode.Space))
        {
            // MenuManager.GoToMenu(MenuName.GameOver);
            Destroy(GameObject.FindWithTag("Block"));
        }
        if (GameObject.FindWithTag("Block") == null&&!win)
        {
            win = true;
            AudioManager.Play(AudioClipName.GameWin);
            MenuManager.GoToMenu(MenuName.GameOver);
        }
	}
    void HandleGameOver()
    {
        AudioManager.Play(AudioClipName.GameLost);
        MenuManager.GoToMenu(MenuName.GameOver);
    }
}
