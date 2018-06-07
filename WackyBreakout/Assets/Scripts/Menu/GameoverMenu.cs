using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameoverMenu : MonoBehaviour {

    [SerializeField]
    Text MessageText;
	// Use this for initialization
	void Start () {
        Time.timeScale = 0;
        MessageText.text = "GAMEOVER! Your final score is "+ HUD.Score;
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public void HandleQuitButtonClickOn()
    {
        AudioManager.Play(AudioClipName.MenuButtonClick);
        Time.timeScale = 1;
        Destroy(gameObject);
        MenuManager.GoToMenu(MenuName.Main);
    }
}
