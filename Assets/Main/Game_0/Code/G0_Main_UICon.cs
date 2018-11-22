using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class G0_Main_UICon : ObjArray {
	[Serializable]
	public struct _UI {
		public ButtObj TButt;
		public ButtObj TOutButt;
		public ObjArray ButtsOA;
	}
	public _UI UI;
	
	void Start () {
		UI.TButt.Del += () => {
			OnOnlyObjs (1);
		};
		UI.TOutButt.Del += () => {
			OnOnlyObjs (0);
		};
		for (int i = 0; i < UI.ButtsOA.AllObj.Length; i++) {
			int _i = i;
			UI.ButtsOA.GetObjT <ButtObj> (i).Del += () => {
				G0_Play_UICon.Now_Lv = _i;
				SceneManager.LoadScene ("G0_Play");
			};
		}

		OnOnlyObjs (0);
	}
}
