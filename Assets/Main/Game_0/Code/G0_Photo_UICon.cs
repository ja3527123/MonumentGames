using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class G0_Photo_UICon : MonoBehaviour {
	[Serializable]
	public struct _UI {
		public Image Im;
	}
	public _UI UI;

	public void Load_Target_Data (G0_Target_Data data) {
		UI.Im.sprite = data.Photo;
	}
}
