using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Main_0_UICon : ObjArray {
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

		OnOnlyObjs (0);
	}
}
