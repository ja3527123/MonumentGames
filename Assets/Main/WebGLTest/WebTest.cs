using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WebTest : MonoBehaviour {

	public Text text;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		float t = 3;
		float f = ((Time.time % t) / t);
		float x = f * 100;
		transform.localPosition = new Vector3 (x, 0, 0);

		text.text = Screen.width + " X " + Screen.height;
	}
}
