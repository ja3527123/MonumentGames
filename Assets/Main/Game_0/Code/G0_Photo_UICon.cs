using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class G0_Photo_UICon : MonoBehaviour {
	static public List <G0_Photo_UICon> AllPhoto;
	static public G0_Photo_UICon Now;

	public G0_Target_Data Data;

	[Serializable]
	public struct _UI {
		public MoveDragButt Butt;
		public Image Im;
		public Tween_Array Tween;
	}
	public _UI UI;

	public Transform Start_parent;
	public bool IsOK {
		get {
			//有選中地點並且雙方資料匹配
			return G0_Target_UICOn.Now != null && Data.name == G0_Target_UICOn.Now.Data.name;
		}
	}

	void Start () {
		if (AllPhoto == null) AllPhoto = new List<G0_Photo_UICon> ();
		AllPhoto.Add (this);

		Start_parent = transform.parent;
		UI.Butt.Start_Del += (V3) => {
			Now = this;
			G0_Target_UICOn.Now = null;

			transform.SetParent (Start_parent.parent);
			transform.SetSiblingIndex (2);
		};
		UI.Butt.Start_Del += (V3) => {
			// UI.Butt.F_V3 = Vector3.zero;
		};
		UI.Butt.End_Del += (V3) => {
			Now = null;
			
			if (IsOK) {
				G0_Target_UICOn.Now.Open ();
				// print ("特效開始");
				transform.SetSiblingIndex (G0_Play_UICon._.UI.Target_Parent.transform.GetSiblingIndex () + 1);
				UI.Tween.Time_Length = 0.3f;
				Tween_Position tween_Position = UI.Tween.All_Tween [0] as Tween_Position;
				Tween_Size tween_Size = UI.Tween.All_Tween [1] as Tween_Size;
				Tween_Rotation tween_Rotation = UI.Tween.All_Tween [2] as Tween_Rotation;

				tween_Size.From = Vector3.one * 2;
				tween_Size.To = Vector3.zero;
				tween_Position.From = transform.localPosition;
				tween_Position.To = G0_Target_UICOn.Now.transform.localPosition;
				tween_Rotation.To = new Vector3 (0, 0, 360);
				
				UI.Tween.Play (true, 1);

				GetComponent <Image> ().raycastTarget = false;
			} else {
				Vector3 v3 = transform.localPosition;
				Tween_Position tween_Position = UI.Tween.All_Tween [0] as Tween_Position;	
				tween_Position.From = v3;
				tween_Position.To = new Vector3 (761, v3.y, 0);
				UI.Tween.Play (true);
			}
		};
		UI.Tween.End_Del = () => {
			// print (G0_Target_UICOn.Now != null);
			if (!GetComponent <Image> ().raycastTarget) {
				// print ("特效結束");
				End ();
			} else {
				transform.SetParent (Start_parent);
				Set_Transform_Count ();
			}
		};
	}

	public void Load_Target_Data (G0_Target_Data data) {
		this.Data = data;
		UI.Im.sprite = data.Photo;
	}

	public void Set_Transform_Count () {
		int n = AllPhoto.Count;
		for (int i = 0; i < AllPhoto.Count ; i ++) {
			if (AllPhoto [i] != null && AllPhoto [i].transform.position.y <= transform.position.y) {
				n--;
			}
		}
		transform.SetSiblingIndex (n);
	}

	public void End () {
		AllPhoto.Remove (this);
		// print (AllPhoto.Count);
		if (AllPhoto.Count <= 0) {
			G0_Play_UICon._.End (true);
		}
		Destroy (gameObject);
	}
}
