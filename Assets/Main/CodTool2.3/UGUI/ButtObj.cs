﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtObj : MonoBehaviour {

	public VoidDel Del;

	public void LoadOut () {
		Del += () => {
			Destroy (gameObject);
		};
	}
	public void LoadClose () {
		Del += () => {
			gameObject.SetActive (false);
		};
	}
}
