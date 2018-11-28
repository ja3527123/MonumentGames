﻿using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class G0_Play_UICon : ObjArray {
	static public G0_Play_UICon _;

	static public int Now_Lv = 2;

	[Serializable]
	public struct _UI {
		public Image Map;
		public TimeLoop time;
		public Text Time_text;
		public GameObject Photo_Parent;
		public GameObject Photo_Obj;
		public GameObject Target_Parent;
		public GameObject Traget_Obj;
	}
	public _UI UI;


	public G0_Lv_Data [] All_Lv_Data;
	public G0_Lv_Data Now_Lv_Data {
		get {
			return All_Lv_Data [Now_Lv];
		}
	}

	public List <G0_Photo_UICon> All_Photo;
	public List <G0_Target_UICOn> All_Target;
	public int Score;

	void Awake () {
		_ = this;
	}

	static int [] Now_Traget_Nobs;

	IEnumerator Start () {
		print ("Lv:" + Now_Lv);
		yield return null;

		OnOnlyObjs (0);
		UI.time.Del += Game_Update;
		UI.time.Open ();
		Load_Lv_Data (Now_Lv_Data);
	}

	void Update () {
		// bool b = true;
		// for (int i = 0; G0_Photo_UICon.AllPhoto != null && G0_Photo_UICon.AllPhoto.Count > 0 &&  i < G0_Photo_UICon.AllPhoto.Count; i++) {
		// 	if (G0_Photo_UICon.AllPhoto [i] != null) b = false;
		// }
		// if (b) {
		// 	print ("勝利");
		// 	OnOnlyObjs (1);
		// 	GetObjT <G0_End_UICon> (1).Win_Open (Score);
		// 	enabled = false;
		// }
	}

	public void Load_Lv_Data (G0_Lv_Data data) {
		//決定這場要哪些地點
		int [] rD = new int [Now_Lv_Data.All_Target.Length];//每個地點抽到的機率
		for (int i = 0; i < rD.Length; i++) rD [i] = 1;
		Now_Traget_Nobs = Dice<int>.GetNotRepeatingInts (Now_Lv_Data.N, rD);

		UI.Map.sprite = data.Map_Im;

		All_Photo = new List<G0_Photo_UICon> ();
		G0_Photo_UICon.AllPhoto = null;
		for (int i = 0; i < Now_Traget_Nobs.Length; i++) {
			int Nob = Now_Traget_Nobs [i];
			G0_Photo_UICon r = MyCalculate.SpObj (UI.Photo_Obj, UI.Photo_Parent.transform, Vector3.zero).GetComponent <G0_Photo_UICon> ();
			r.Load_Target_Data (data.All_Target [Nob]);
			All_Photo.Add (r);
		}

		All_Target = new List<G0_Target_UICOn> ();
		G0_Target_UICOn.AllTarget = null;
		for (int i = 0; i < data.All_Target.Length; i++) {
			G0_Target_Data Target = data.All_Target [i];
			G0_Target_UICOn r = MyCalculate.SpObj (UI.Traget_Obj, UI.Target_Parent.transform, (Vector2)Target.Pot).GetComponent <G0_Target_UICOn> ();
			r.Data = Target;
			All_Target.Add (r);
		}
	}

	public void Game_Update (int n) {
		Score =  Now_Lv_Data.Time - n;
		// print (Score);
		if (Score < 0) {
			print ("結束");
			End (false);
			// OnOnlyObjs (1);
			// GetObjT <G0_End_UICon> (1).Lose_Open ();
			return;
		}
		UI.Time_text.text = Score.ToString ();
	}

	public void End (bool Win) {
		OnOnlyObjs (1);
		if (!Win) {
			GetObjT <G0_End_UICon> (1).Lose_Open ();
		} else {
			GetObjT <G0_End_UICon> (1).Win_Open (Score);
		}
	}
//====================================================================================================================
	// public ObjArray Test;
	// [ContextMenu ("test")]
	// public void LoadData () {
	// 	G0_Target_Data [] Objs = All_Lv_Data [2].All_Target;
	// 	for (int i = 0; i < Objs.Length; i++) {
	// 		Vector2 r = Test.GetObjT <Transform> (i).localPosition;
	// 		Objs [i].Pot = new Vector2Int ((int)r.x, (int)r.y);
	// 	}
	// }

	[ContextMenu ("Delete_Save")]
	public void Delete_Save () {
		PlayerPrefs.DeleteAll ();
	}
}

[Serializable]
public class G0_Lv_Data {
	public Sprite Map_Im;
	public int Time;
	public int N;
	public G0_Target_Data [] All_Target;
}
[Serializable]
public class G0_Target_Data {
	public string name;
	public Sprite Photo;
	public Vector2Int Pot;
}
