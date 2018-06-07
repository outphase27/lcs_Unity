using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
 
public static class MenuManager 
{
    public static void GoToMenu(MenuName menuName)
    {
        switch(menuName)
        {
            case MenuName.Help:

                SceneManager.LoadScene("HelpMenu");
                break;

            case MenuName.Main:
                SceneManager.LoadScene("MainMenu");
                break;

            case MenuName.Pause:

                // instantiate prefab
                Object.Instantiate(Resources.Load("PauseMenu"));
                break;

            case MenuName.GameOver:
                Object.Instantiate(Resources.Load("GameOverMenu"));
                break;

        }
    }


}
