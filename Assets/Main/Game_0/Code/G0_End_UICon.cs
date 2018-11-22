using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class G0_End_UICon : ObjArray {

	[Serializable]
	public struct _UI {
		public ButtObj OutButt;
		public Text Score_Text;
		public Text Top_Score_Text;
	}
	public _UI UI;

	void Start () {
		UI.OutButt.Del += () => {
			SceneManager.LoadScene ("G0");
		};
	}

	public void Lose_Open () {
		OnOnlyObjs (0);
	}
	public void Win_Open (int Score) {
		int Top_Score = PlayerPrefs.GetInt ("G0_Top_Score", 0);
		if (Top_Score < Score) {
			PlayerPrefs.SetInt ("G0_Top_Score", Score);
			Top_Score = Score;
		}

		OnOnlyObjs (1);
		UI.Score_Text.text = Score.ToString ();
		UI.Top_Score_Text.text = Top_Score.ToString ();
	}
}
