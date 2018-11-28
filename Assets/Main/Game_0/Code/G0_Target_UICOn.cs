using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class G0_Target_UICOn : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler {
    static public List <G0_Target_UICOn> AllTarget;
    static public G0_Target_UICOn Now;

    public G0_Target_Data Data;

    public Sprite Open_Im;
    public Sprite Close_Im;

    public bool IsOpen;

    public void Awake () {
        if (AllTarget == null) AllTarget = new List<G0_Target_UICOn> ();
        AllTarget.Add (this);
    }

    public void OnPointerEnter(PointerEventData eventData){
        if (!IsOpen && G0_Photo_UICon.Now != null) {
            Now = this;
            Load_Target (this);
            // transform.localScale = Vector3.one * 1.5f;
        }
    }
    public void OnPointerExit(PointerEventData eventData){
        Load_Target (null);
        // transform.localScale = Vector3.one;
    }

    public void Open () {
        GetComponent <Image> ().sprite = Open_Im;
        IsOpen = true;
    }

    static public void Load_Target (G0_Target_UICOn g0_Target_UICon) {
        for (int i = 0; i < AllTarget.Count; i++) {
            if (AllTarget [i] == g0_Target_UICon) {
                AllTarget [i].transform.localScale = Vector3.one * 1.5f;
            } else {
                AllTarget [i].transform.localScale = Vector3.one;
            }
        }
    }
}
