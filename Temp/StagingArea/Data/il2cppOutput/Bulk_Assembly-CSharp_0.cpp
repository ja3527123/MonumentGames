#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// ButtObj
struct ButtObj_t1384809709;
// ButtonTest
struct ButtonTest_t3454622828;
// ColliderDetect
struct ColliderDetect_t2731829106;
// DiceDiceGameObject
struct DiceDiceGameObject_t4246336230;
// DiceGameObject
struct DiceGameObject_t232715106;
// DiceGameObject[]
struct DiceGameObjectU5BU5D_t1500657879;
// DiceInt
struct DiceInt_t728545408;
// DiceString
struct DiceString_t1417265547;
// Dice`1<DiceGameObject>
struct Dice_1_t3214026182;
// Dice`1<System.Int32>
struct Dice_1_t1637289533;
// Dice`1<System.Object>
struct Dice_1_t1766449944;
// Dice`1<System.String>
struct Dice_1_t533794469;
// Dice`1<UnityEngine.GameObject>
struct Dice_1_t4094947695;
// DragButt
struct DragButt_t1708563181;
// FileCon
struct FileCon_t3780093993;
// G0_End_UICon
struct G0_End_UICon_t3782924102;
// G0_Lv_Data
struct G0_Lv_Data_t3685245493;
// G0_Lv_Data[]
struct G0_Lv_DataU5BU5D_t720604504;
// G0_Main_UICon
struct G0_Main_UICon_t3463799450;
// G0_Main_UICon/<Start>c__AnonStorey0
struct U3CStartU3Ec__AnonStorey0_t898297963;
// G0_Photo_UICon
struct G0_Photo_UICon_t1912912122;
// G0_Photo_UICon[]
struct G0_Photo_UIConU5BU5D_t2201776607;
// G0_Play_UICon
struct G0_Play_UICon_t46452308;
// G0_Play_UICon/<Start>c__Iterator0
struct U3CStartU3Ec__Iterator0_t1260829943;
// G0_Target_Data
struct G0_Target_Data_t1917875166;
// G0_Target_Data[]
struct G0_Target_DataU5BU5D_t586259179;
// G0_Target_UICOn
struct G0_Target_UICOn_t2128227474;
// G0_Target_UICOn[]
struct G0_Target_UICOnU5BU5D_t325879015;
// GetGoogleTab
struct GetGoogleTab_t2614510110;
// GetGoogleTab/<GetTable>c__Iterator0
struct U3CGetTableU3Ec__Iterator0_t1324267896;
// GetGoogleTab/<GetTable>c__Iterator1
struct U3CGetTableU3Ec__Iterator1_t4053151251;
// MainUICon
struct MainUICon_t3042406425;
// MoveDragButt
struct MoveDragButt_t3773719392;
// MyCalculate
struct MyCalculate_t3992633026;
// Note
struct Note_t2277534322;
// ObjArray
struct ObjArray_t2087238592;
// ObjArray/Obj[]
struct ObjU5BU5D_t778053183;
// PauseCon
struct PauseCon_t3747094933;
// Photograph
struct Photograph_t2819091045;
// RayDetect
struct RayDetect_t2170308910;
// SizeButt
struct SizeButt_t245973045;
// System.Action`1<UnityEngine.U2D.SpriteAtlas>
struct Action_1_t819399007;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte
struct Byte_t1134296376;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.List`1<G0_Photo_UICon>
struct List_1_t3384986864;
// System.Collections.Generic.List`1<G0_Target_UICOn>
struct List_1_t3600302216;
// System.Collections.Generic.List`1<ObjArray/Obj>
struct List_1_t3869091856;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>
struct List_1_t496632877;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.List`1<System.String>[]
struct List_1U5BU5D_t182406414;
// System.Collections.Generic.List`1<Tween>
struct List_1_t1723595505;
// System.Collections.Generic.List`1<UnityEngine.Collider2D>
struct List_1_t4278874368;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t4072576034;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t4142344393;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t1234605051;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t3628304265;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t899420910;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t496136383;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Delegate
struct Delegate_t1188392813;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Double
struct Double_t594665363;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IO.DirectoryInfo
struct DirectoryInfo_t35957480;
// System.IO.Stream
struct Stream_t1273022909;
// System.IO.StreamWriter
struct StreamWriter_t1266378904;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// System.Single[][]
struct SingleU5BU5DU5BU5D_t3206712258;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.String[][]
struct StringU5BU5DU5BU5D_t2611993717;
// System.String[][][]
struct StringU5BU5DU5BU5DU5BU5D_t2402656792;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.UInt16
struct UInt16_t2177724958;
// System.Void
struct Void_t1185182177;
// TestCon
struct TestCon_t50111880;
// TestCon/<Start>c__Iterator0
struct U3CStartU3Ec__Iterator0_t46314510;
// TextSpacing
struct TextSpacing_t1351873361;
// TimeLoop
struct TimeLoop_t468784922;
// TimeLoop/<_Reset>c__Iterator0
struct U3C_ResetU3Ec__Iterator0_t24904354;
// Tween
struct Tween_t251520763;
// Tween[]
struct TweenU5BU5D_t2222812858;
// Tween_Array
struct Tween_Array_t2143430763;
// Tween_Color
struct Tween_Color_t1470692164;
// Tween_Position
struct Tween_Position_t749407915;
// Tween_Rotation
struct Tween_Rotation_t2420198140;
// Tween_Size
struct Tween_Size_t305626671;
// TxtCon
struct TxtCon_t3340380335;
// TxtCon/PathObj[]
struct PathObjU5BU5D_t895737483;
// UguiTool
struct UguiTool_t847651177;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Collider2D
struct Collider2D_t2806799626;
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t1693969295;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t4150874583;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1003666588;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3807901092;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2498835369;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3050769227;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t2581268647;
// UnityEngine.Events.UnityEvent[]
struct UnityEventU5BU5D_t4042265822;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t463507806;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1258266594;
// UnityEngine.RenderTexture
struct RenderTexture_t2108887433;
// UnityEngine.Sprite
struct Sprite_t280657092;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.UI.BaseMeshEffect
struct BaseMeshEffect_t2440176439;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t3839221559;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.WWW
struct WWW_t3688466362;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251;
// VoidDel
struct VoidDel_t2721053205;
// Void_BoolDel
struct Void_BoolDel_t1563598436;
// Void_FloatDel
struct Void_FloatDel_t2690466815;
// Void_IntDel
struct Void_IntDel_t3049649234;
// Void_IntIntDel
struct Void_IntIntDel_t3257518218;
// Void_Texture2DDel
struct Void_Texture2DDel_t3998872356;
// Void_Vector3Del
struct Void_Vector3Del_t2915247505;
// WebTest
struct WebTest_t1430771800;

extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* G0_End_UICon_t3782924102_il2cpp_TypeInfo_var;
extern RuntimeClass* G0_Photo_UICon_t1912912122_il2cpp_TypeInfo_var;
extern RuntimeClass* G0_Play_UICon_t46452308_il2cpp_TypeInfo_var;
extern RuntimeClass* G0_Target_UICOn_t2128227474_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1234605051_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t128053199_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1723595505_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3319525431_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3384986864_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3600302216_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3869091856_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t4278874368_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t496632877_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* MoveDragButt_t3773719392_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjU5BU5D_t778053183_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* PauseCon_t3747094933_il2cpp_TypeInfo_var;
extern RuntimeClass* Physics2D_t1528932956_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern RuntimeClass* RenderTexture_t2108887433_il2cpp_TypeInfo_var;
extern RuntimeClass* SingleU5BU5DU5BU5D_t3206712258_il2cpp_TypeInfo_var;
extern RuntimeClass* SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5DU5BU5DU5BU5D_t2402656792_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5DU5BU5D_t2611993717_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Texture2D_t3840446185_il2cpp_TypeInfo_var;
extern RuntimeClass* Tween_Position_t749407915_il2cpp_TypeInfo_var;
extern RuntimeClass* Tween_Rotation_t2420198140_il2cpp_TypeInfo_var;
extern RuntimeClass* Tween_Size_t305626671_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CGetTableU3Ec__Iterator0_t1324267896_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CGetTableU3Ec__Iterator1_t4053151251_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CStartU3Ec__AnonStorey0_t898297963_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CStartU3Ec__Iterator0_t1260829943_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CStartU3Ec__Iterator0_t46314510_il2cpp_TypeInfo_var;
extern RuntimeClass* U3C_ResetU3Ec__Iterator0_t24904354_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2Int_t3469998543_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* VoidDel_t2721053205_il2cpp_TypeInfo_var;
extern RuntimeClass* Void_FloatDel_t2690466815_il2cpp_TypeInfo_var;
extern RuntimeClass* Void_IntDel_t3049649234_il2cpp_TypeInfo_var;
extern RuntimeClass* Void_Vector3Del_t2915247505_il2cpp_TypeInfo_var;
extern RuntimeClass* WWW_t3688466362_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitForSeconds_t1699091251_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral111252121;
extern String_t* _stringLiteral1163431733;
extern String_t* _stringLiteral2752638692;
extern String_t* _stringLiteral2799279888;
extern String_t* _stringLiteral2930855047;
extern String_t* _stringLiteral332388519;
extern String_t* _stringLiteral3325447198;
extern String_t* _stringLiteral3451566041;
extern String_t* _stringLiteral3452580740;
extern String_t* _stringLiteral3452614526;
extern String_t* _stringLiteral3452614529;
extern String_t* _stringLiteral3452614532;
extern String_t* _stringLiteral3452614566;
extern String_t* _stringLiteral3452618194;
extern String_t* _stringLiteral3452626588;
extern String_t* _stringLiteral3452627165;
extern String_t* _stringLiteral3452627167;
extern String_t* _stringLiteral3580600126;
extern String_t* _stringLiteral3669225188;
extern String_t* _stringLiteral3793920202;
extern String_t* _stringLiteral3885013980;
extern String_t* _stringLiteral3944467184;
extern String_t* _stringLiteral3988949892;
extern String_t* _stringLiteral4080627277;
extern String_t* _stringLiteral4082700035;
extern String_t* _stringLiteral4181545892;
extern String_t* _stringLiteral4278844832;
extern String_t* _stringLiteral4288010602;
extern String_t* _stringLiteral772591046;
extern String_t* _stringLiteral883380564;
extern String_t* _stringLiteral944755346;
extern const RuntimeMethod* ButtObj_U3CLoadCloseU3Em__1_m3902895995_RuntimeMethod_var;
extern const RuntimeMethod* ButtObj_U3CLoadOutU3Em__0_m726817463_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisMaskableGraphic_t3839221559_m1169390343_RuntimeMethod_var;
extern const RuntimeMethod* Dice_1_GetAInt_m1474206182_RuntimeMethod_var;
extern const RuntimeMethod* Dice_1_GetAInt_m3540587861_RuntimeMethod_var;
extern const RuntimeMethod* Dice_1_GetAInt_m3781324307_RuntimeMethod_var;
extern const RuntimeMethod* Dice_1_GetNotRepeatingInts_m1466825919_RuntimeMethod_var;
extern const RuntimeMethod* Dice_1__ctor_m3482360944_RuntimeMethod_var;
extern const RuntimeMethod* Dice_1__ctor_m3948654876_RuntimeMethod_var;
extern const RuntimeMethod* Dice_1__ctor_m622095197_RuntimeMethod_var;
extern const RuntimeMethod* Dice_1__ctor_m994750923_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2026665411_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m4093600480_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m436229931_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m3528958210_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m4158182743_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m754000926_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m236733038_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2609582037_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m785251069_RuntimeMethod_var;
extern const RuntimeMethod* G0_End_UICon_U3CStartU3Em__0_m1037383738_RuntimeMethod_var;
extern const RuntimeMethod* G0_Main_UICon_U3CStartU3Em__0_m1903770879_RuntimeMethod_var;
extern const RuntimeMethod* G0_Main_UICon_U3CStartU3Em__1_m1903836415_RuntimeMethod_var;
extern const RuntimeMethod* G0_Photo_UICon_U3CStartU3Em__0_m1978002736_RuntimeMethod_var;
extern const RuntimeMethod* G0_Photo_UICon_U3CStartU3Em__1_m2536475243_RuntimeMethod_var;
extern const RuntimeMethod* G0_Photo_UICon_U3CStartU3Em__2_m847122382_RuntimeMethod_var;
extern const RuntimeMethod* G0_Photo_UICon_U3CStartU3Em__3_m934328299_RuntimeMethod_var;
extern const RuntimeMethod* G0_Play_UICon_Game_Update_m1799142341_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisG0_Photo_UICon_t1912912122_m4197247811_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisG0_Target_UICOn_t2128227474_m336255185_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1263474110_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1433744898_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1685793073_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2353349950_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m552355349_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m697420525_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m891152756_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m1001098768_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m1955908099_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m3862866820_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Remove_m1178666607_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Remove_m735619916_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m426799129_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1316785032_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1628857705_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1692865676_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2923797854_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3458422818_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3713859815_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m487875160_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m537059739_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m706204246_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m1316380031_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2200761832_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m348913021_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m361000296_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m4272413490_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1845799387_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m3124045229_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m457221236_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m686969124_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m863626585_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m888956288_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Item_m2057272351_RuntimeMethod_var;
extern const RuntimeMethod* MoveDragButt_U3CStartU3Em__0_m725292635_RuntimeMethod_var;
extern const RuntimeMethod* MoveDragButt_U3CStartU3Em__1_m3174680571_RuntimeMethod_var;
extern const RuntimeMethod* ObjArray_GetObjT_TisButtObj_t1384809709_m2868763048_RuntimeMethod_var;
extern const RuntimeMethod* ObjArray_GetObjT_TisG0_End_UICon_t3782924102_m4010045863_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var;
extern const RuntimeMethod* Tween_Color_U3CStartU3Em__0_m335980265_RuntimeMethod_var;
extern const RuntimeMethod* Tween_Position_U3CStartU3Em__0_m719965587_RuntimeMethod_var;
extern const RuntimeMethod* Tween_Rotation_U3CStartU3Em__0_m4072489487_RuntimeMethod_var;
extern const RuntimeMethod* Tween_Size_U3CStartU3Em__0_m1213412234_RuntimeMethod_var;
extern const RuntimeMethod* U3CGetTableU3Ec__Iterator0_Reset_m825771642_RuntimeMethod_var;
extern const RuntimeMethod* U3CGetTableU3Ec__Iterator1_Reset_m1189166879_RuntimeMethod_var;
extern const RuntimeMethod* U3CStartU3Ec__AnonStorey0_U3CU3Em__0_m3925152730_RuntimeMethod_var;
extern const RuntimeMethod* U3CStartU3Ec__Iterator0_Reset_m1605782607_RuntimeMethod_var;
extern const RuntimeMethod* U3CStartU3Ec__Iterator0_Reset_m3831356277_RuntimeMethod_var;
extern const RuntimeMethod* U3C_ResetU3Ec__Iterator0_Reset_m3981321021_RuntimeMethod_var;
extern const uint32_t ButtObj_LoadClose_m1126349390_MetadataUsageId;
extern const uint32_t ButtObj_LoadOut_m3695596364_MetadataUsageId;
extern const uint32_t ButtObj_U3CLoadOutU3Em__0_m726817463_MetadataUsageId;
extern const uint32_t ButtonTest_OnDrag_m3819574937_MetadataUsageId;
extern const uint32_t ButtonTest_OnPointerClick_m210394707_MetadataUsageId;
extern const uint32_t ButtonTest_OnPointerDown_m897068878_MetadataUsageId;
extern const uint32_t ButtonTest_OnPointerEnter_m1681552836_MetadataUsageId;
extern const uint32_t ButtonTest_OnPointerExit_m22094742_MetadataUsageId;
extern const uint32_t ButtonTest_OnPointerUp_m3216703716_MetadataUsageId;
extern const uint32_t ColliderDetect_FindObj_m3525428455_MetadataUsageId;
extern const uint32_t ColliderDetect_OnTriggerEnter2D_m3833022960_MetadataUsageId;
extern const uint32_t ColliderDetect_OnTriggerExit2D_m2581985821_MetadataUsageId;
extern const uint32_t ColliderDetect__ctor_m3056952211_MetadataUsageId;
extern const uint32_t ColliderDetect_get_LastCollider_m3358013447_MetadataUsageId;
extern const uint32_t DiceDiceGameObject__ctor_m3542747046_MetadataUsageId;
extern const uint32_t DiceGameObject__ctor_m912715460_MetadataUsageId;
extern const uint32_t DiceGameObject_test_m1143595968_MetadataUsageId;
extern const uint32_t DiceInt_Test_m2457352367_MetadataUsageId;
extern const uint32_t DiceInt__ctor_m42780435_MetadataUsageId;
extern const uint32_t DiceString_Test_m3521938962_MetadataUsageId;
extern const uint32_t DiceString__ctor_m2183416959_MetadataUsageId;
extern const uint32_t DragButt_GetLocalV3_m3218047294_MetadataUsageId;
extern const uint32_t DragButt_OnDrag_m3639072537_MetadataUsageId;
extern const uint32_t DragButt_OnPointerDown_m923556467_MetadataUsageId;
extern const uint32_t DragButt_OnPointerUp_m797636537_MetadataUsageId;
extern const uint32_t DragButt_get_Drag_V3_m402370484_MetadataUsageId;
extern const uint32_t FileCon_CopyDirectory_m2289805401_MetadataUsageId;
extern const uint32_t FileCon_Get_Path_m420164848_MetadataUsageId;
extern const uint32_t G0_End_UICon_Start_m1024664937_MetadataUsageId;
extern const uint32_t G0_End_UICon_U3CStartU3Em__0_m1037383738_MetadataUsageId;
extern const uint32_t G0_End_UICon_Win_Open_m511383927_MetadataUsageId;
extern const uint32_t G0_Main_UICon_Start_m2007940339_MetadataUsageId;
extern const uint32_t G0_Photo_UICon_End_m2363947105_MetadataUsageId;
extern const uint32_t G0_Photo_UICon_Set_Transform_Count_m148275024_MetadataUsageId;
extern const uint32_t G0_Photo_UICon_Start_m4121861866_MetadataUsageId;
extern const uint32_t G0_Photo_UICon_U3CStartU3Em__0_m1978002736_MetadataUsageId;
extern const uint32_t G0_Photo_UICon_U3CStartU3Em__2_m847122382_MetadataUsageId;
extern const uint32_t G0_Photo_UICon_U3CStartU3Em__3_m934328299_MetadataUsageId;
extern const uint32_t G0_Photo_UICon_get_IsOK_m988091250_MetadataUsageId;
extern const uint32_t G0_Play_UICon_Awake_m2197750010_MetadataUsageId;
extern const uint32_t G0_Play_UICon_End_m385289090_MetadataUsageId;
extern const uint32_t G0_Play_UICon_Game_Update_m1799142341_MetadataUsageId;
extern const uint32_t G0_Play_UICon_Load_Lv_Data_m2226816120_MetadataUsageId;
extern const uint32_t G0_Play_UICon_Start_m2611122650_MetadataUsageId;
extern const uint32_t G0_Play_UICon__cctor_m710891186_MetadataUsageId;
extern const uint32_t G0_Play_UICon_get_Now_Lv_Data_m3483712159_MetadataUsageId;
extern const uint32_t G0_Target_UICOn_Awake_m3812866298_MetadataUsageId;
extern const uint32_t G0_Target_UICOn_Load_Target_m2047948276_MetadataUsageId;
extern const uint32_t G0_Target_UICOn_OnPointerEnter_m1288772088_MetadataUsageId;
extern const uint32_t G0_Target_UICOn_Open_m1477967583_MetadataUsageId;
extern const uint32_t GetGoogleTab_GetTable_m1557446434_MetadataUsageId;
extern const uint32_t GetGoogleTab_GetTable_m2458751461_MetadataUsageId;
extern const uint32_t GetGoogleTab_PrintTable_m2049994154_MetadataUsageId;
extern const uint32_t GetGoogleTab__ctor_m4098893875_MetadataUsageId;
extern const uint32_t MoveDragButt_Start_m1993957511_MetadataUsageId;
extern const uint32_t MoveDragButt_U3CStartU3Em__1_m3174680571_MetadataUsageId;
extern const uint32_t MyCalculate_CosSin_m1194007606_MetadataUsageId;
extern const uint32_t MyCalculate_GetTuchV2_m2125599697_MetadataUsageId;
extern const uint32_t MyCalculate_NomberToString_m875396777_MetadataUsageId;
extern const uint32_t MyCalculate_RemoveRow_m2231241764_MetadataUsageId;
extern const uint32_t MyCalculate_SpObj_m3074102938_MetadataUsageId;
extern const uint32_t MyCalculate_StringWelding_m2904816465_MetadataUsageId;
extern const uint32_t MyCalculate_TxtToFloat_m100248283_MetadataUsageId;
extern const uint32_t MyCalculate_TxtToString_m1598558100_MetadataUsageId;
extern const uint32_t MyCalculate_TxtToString_m3197571433_MetadataUsageId;
extern const uint32_t MyCalculate_UTxtToString_m1614030829_MetadataUsageId;
extern const uint32_t MyCalculate__NomberToString_m312450311_MetadataUsageId;
extern const uint32_t MyCalculate__TxtToString_m2022611661_MetadataUsageId;
extern const uint32_t ObjArray_OnOffObj_m918063367_MetadataUsageId;
extern const uint32_t ObjArray_ResetObj_m3989847945_MetadataUsageId;
extern const uint32_t ObjArray_SetObj_m3148489018_MetadataUsageId;
extern const uint32_t PauseCon_OnApplicationPause_m729924688_MetadataUsageId;
extern const uint32_t Photograph_GetCaIm_m2356785699_MetadataUsageId;
extern const uint32_t RayDetect_FixedUpdate_m642415867_MetadataUsageId;
extern const uint32_t RayDetect__ctor_m337685244_MetadataUsageId;
extern const uint32_t SizeButt_SetObj_Rect_m343241564_MetadataUsageId;
extern const uint32_t SizeButt_SetObj_Scale_m1124595701_MetadataUsageId;
extern const uint32_t SizeButt_SetSize_m2589160445_MetadataUsageId;
extern const uint32_t SizeButt__ctor_m2790226521_MetadataUsageId;
extern const uint32_t TestCon_Start_m791603019_MetadataUsageId;
extern const uint32_t TextSpacing_ModifyMesh_m2493072849_MetadataUsageId;
extern const uint32_t TimeLoop_Test_m3384722899_MetadataUsageId;
extern const uint32_t TimeLoop__Reset_m1745416133_MetadataUsageId;
extern const uint32_t Tween_Array_Update_m724047589_MetadataUsageId;
extern const uint32_t Tween_Array__ctor_m3297969044_MetadataUsageId;
extern const uint32_t Tween_Color_Start_m3998074835_MetadataUsageId;
extern const uint32_t Tween_Color_U3CStartU3Em__0_m335980265_MetadataUsageId;
extern const uint32_t Tween_Position_Start_m73072837_MetadataUsageId;
extern const uint32_t Tween_Position_U3CStartU3Em__0_m719965587_MetadataUsageId;
extern const uint32_t Tween_Rotation_Start_m2561354194_MetadataUsageId;
extern const uint32_t Tween_Rotation_U3CStartU3Em__0_m4072489487_MetadataUsageId;
extern const uint32_t Tween_Size_Start_m999688751_MetadataUsageId;
extern const uint32_t Tween_Size_U3CStartU3Em__0_m1213412234_MetadataUsageId;
extern const uint32_t Tween_set_f_m2683448068_MetadataUsageId;
extern const uint32_t TxtCon_CreateTxt_m3588886097_MetadataUsageId;
extern const uint32_t TxtCon_DeleteTxt_m2426403509_MetadataUsageId;
extern const uint32_t TxtCon_GetPath_m324242885_MetadataUsageId;
extern const uint32_t TxtCon_GetTxt_m2099723250_MetadataUsageId;
extern const uint32_t TxtCon_GetTxt_m2424354758_MetadataUsageId;
extern const uint32_t U3CGetTableU3Ec__Iterator0_Reset_m825771642_MetadataUsageId;
extern const uint32_t U3CGetTableU3Ec__Iterator1_MoveNext_m4121720577_MetadataUsageId;
extern const uint32_t U3CGetTableU3Ec__Iterator1_Reset_m1189166879_MetadataUsageId;
extern const uint32_t U3CStartU3Ec__AnonStorey0_U3CU3Em__0_m3925152730_MetadataUsageId;
extern const uint32_t U3CStartU3Ec__Iterator0_MoveNext_m2646565618_MetadataUsageId;
extern const uint32_t U3CStartU3Ec__Iterator0_MoveNext_m3158819371_MetadataUsageId;
extern const uint32_t U3CStartU3Ec__Iterator0_Reset_m1605782607_MetadataUsageId;
extern const uint32_t U3CStartU3Ec__Iterator0_Reset_m3831356277_MetadataUsageId;
extern const uint32_t U3C_ResetU3Ec__Iterator0_Reset_m3981321021_MetadataUsageId;
extern const uint32_t Void_BoolDel_BeginInvoke_m2248180201_MetadataUsageId;
extern const uint32_t Void_FloatDel_BeginInvoke_m3073402510_MetadataUsageId;
extern const uint32_t Void_IntDel_BeginInvoke_m1791044266_MetadataUsageId;
extern const uint32_t Void_IntIntDel_BeginInvoke_m3924972942_MetadataUsageId;
extern const uint32_t Void_Vector3Del_BeginInvoke_m1321478613_MetadataUsageId;
extern const uint32_t WebTest_Update_m911304425_MetadataUsageId;

struct G0_Lv_DataU5BU5D_t720604504;
struct G0_Target_DataU5BU5D_t586259179;
struct ObjU5BU5D_t778053183;
struct CharU5BU5D_t3528271667;
struct Int32U5BU5D_t385246372;
struct SingleU5BU5D_t1444911251;
struct SingleU5BU5DU5BU5D_t3206712258;
struct StringU5BU5D_t1281789340;
struct StringU5BU5DU5BU5D_t2611993717;
struct StringU5BU5DU5BU5DU5BU5D_t2402656792;
struct PathObjU5BU5D_t895737483;
struct UnityEventU5BU5D_t4042265822;


#ifndef U3CMODULEU3E_T692745545_H
#define U3CMODULEU3E_T692745545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745545 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745545_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef G0_LV_DATA_T3685245493_H
#define G0_LV_DATA_T3685245493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// G0_Lv_Data
struct  G0_Lv_Data_t3685245493  : public RuntimeObject
{
public:
	// UnityEngine.Sprite G0_Lv_Data::Map_Im
	Sprite_t280657092 * ___Map_Im_0;
	// System.Int32 G0_Lv_Data::Time
	int32_t ___Time_1;
	// System.Int32 G0_Lv_Data::N
	int32_t ___N_2;
	// G0_Target_Data[] G0_Lv_Data::All_Target
	G0_Target_DataU5BU5D_t586259179* ___All_Target_3;

public:
	inline static int32_t get_offset_of_Map_Im_0() { return static_cast<int32_t>(offsetof(G0_Lv_Data_t3685245493, ___Map_Im_0)); }
	inline Sprite_t280657092 * get_Map_Im_0() const { return ___Map_Im_0; }
	inline Sprite_t280657092 ** get_address_of_Map_Im_0() { return &___Map_Im_0; }
	inline void set_Map_Im_0(Sprite_t280657092 * value)
	{
		___Map_Im_0 = value;
		Il2CppCodeGenWriteBarrier((&___Map_Im_0), value);
	}

	inline static int32_t get_offset_of_Time_1() { return static_cast<int32_t>(offsetof(G0_Lv_Data_t3685245493, ___Time_1)); }
	inline int32_t get_Time_1() const { return ___Time_1; }
	inline int32_t* get_address_of_Time_1() { return &___Time_1; }
	inline void set_Time_1(int32_t value)
	{
		___Time_1 = value;
	}

	inline static int32_t get_offset_of_N_2() { return static_cast<int32_t>(offsetof(G0_Lv_Data_t3685245493, ___N_2)); }
	inline int32_t get_N_2() const { return ___N_2; }
	inline int32_t* get_address_of_N_2() { return &___N_2; }
	inline void set_N_2(int32_t value)
	{
		___N_2 = value;
	}

	inline static int32_t get_offset_of_All_Target_3() { return static_cast<int32_t>(offsetof(G0_Lv_Data_t3685245493, ___All_Target_3)); }
	inline G0_Target_DataU5BU5D_t586259179* get_All_Target_3() const { return ___All_Target_3; }
	inline G0_Target_DataU5BU5D_t586259179** get_address_of_All_Target_3() { return &___All_Target_3; }
	inline void set_All_Target_3(G0_Target_DataU5BU5D_t586259179* value)
	{
		___All_Target_3 = value;
		Il2CppCodeGenWriteBarrier((&___All_Target_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // G0_LV_DATA_T3685245493_H
#ifndef U3CSTARTU3EC__ANONSTOREY0_T898297963_H
#define U3CSTARTU3EC__ANONSTOREY0_T898297963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// G0_Main_UICon/<Start>c__AnonStorey0
struct  U3CStartU3Ec__AnonStorey0_t898297963  : public RuntimeObject
{
public:
	// System.Int32 G0_Main_UICon/<Start>c__AnonStorey0::_i
	int32_t ____i_0;

public:
	inline static int32_t get_offset_of__i_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__AnonStorey0_t898297963, ____i_0)); }
	inline int32_t get__i_0() const { return ____i_0; }
	inline int32_t* get_address_of__i_0() { return &____i_0; }
	inline void set__i_0(int32_t value)
	{
		____i_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTU3EC__ANONSTOREY0_T898297963_H
#ifndef U3CSTARTU3EC__ITERATOR0_T1260829943_H
#define U3CSTARTU3EC__ITERATOR0_T1260829943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// G0_Play_UICon/<Start>c__Iterator0
struct  U3CStartU3Ec__Iterator0_t1260829943  : public RuntimeObject
{
public:
	// G0_Play_UICon G0_Play_UICon/<Start>c__Iterator0::$this
	G0_Play_UICon_t46452308 * ___U24this_0;
	// System.Object G0_Play_UICon/<Start>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean G0_Play_UICon/<Start>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 G0_Play_UICon/<Start>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t1260829943, ___U24this_0)); }
	inline G0_Play_UICon_t46452308 * get_U24this_0() const { return ___U24this_0; }
	inline G0_Play_UICon_t46452308 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(G0_Play_UICon_t46452308 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t1260829943, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t1260829943, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t1260829943, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTU3EC__ITERATOR0_T1260829943_H
#ifndef U3CGETTABLEU3EC__ITERATOR0_T1324267896_H
#define U3CGETTABLEU3EC__ITERATOR0_T1324267896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GetGoogleTab/<GetTable>c__Iterator0
struct  U3CGetTableU3Ec__Iterator0_t1324267896  : public RuntimeObject
{
public:
	// GetGoogleTab GetGoogleTab/<GetTable>c__Iterator0::$this
	GetGoogleTab_t2614510110 * ___U24this_0;
	// System.Object GetGoogleTab/<GetTable>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean GetGoogleTab/<GetTable>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 GetGoogleTab/<GetTable>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CGetTableU3Ec__Iterator0_t1324267896, ___U24this_0)); }
	inline GetGoogleTab_t2614510110 * get_U24this_0() const { return ___U24this_0; }
	inline GetGoogleTab_t2614510110 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(GetGoogleTab_t2614510110 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CGetTableU3Ec__Iterator0_t1324267896, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CGetTableU3Ec__Iterator0_t1324267896, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CGetTableU3Ec__Iterator0_t1324267896, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETTABLEU3EC__ITERATOR0_T1324267896_H
#ifndef U3CGETTABLEU3EC__ITERATOR1_T4053151251_H
#define U3CGETTABLEU3EC__ITERATOR1_T4053151251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GetGoogleTab/<GetTable>c__Iterator1
struct  U3CGetTableU3Ec__Iterator1_t4053151251  : public RuntimeObject
{
public:
	// System.String GetGoogleTab/<GetTable>c__Iterator1::TabName
	String_t* ___TabName_0;
	// System.String GetGoogleTab/<GetTable>c__Iterator1::Id
	String_t* ___Id_1;
	// UnityEngine.WWW GetGoogleTab/<GetTable>c__Iterator1::<www>__0
	WWW_t3688466362 * ___U3CwwwU3E__0_2;
	// System.String[] GetGoogleTab/<GetTable>c__Iterator1::<_mDate>__0
	StringU5BU5D_t1281789340* ___U3C_mDateU3E__0_3;
	// System.Collections.Generic.List`1<System.String> GetGoogleTab/<GetTable>c__Iterator1::<L0>__0
	List_1_t3319525431 * ___U3CL0U3E__0_4;
	// GetGoogleTab GetGoogleTab/<GetTable>c__Iterator1::$this
	GetGoogleTab_t2614510110 * ___U24this_5;
	// System.Object GetGoogleTab/<GetTable>c__Iterator1::$current
	RuntimeObject * ___U24current_6;
	// System.Boolean GetGoogleTab/<GetTable>c__Iterator1::$disposing
	bool ___U24disposing_7;
	// System.Int32 GetGoogleTab/<GetTable>c__Iterator1::$PC
	int32_t ___U24PC_8;

public:
	inline static int32_t get_offset_of_TabName_0() { return static_cast<int32_t>(offsetof(U3CGetTableU3Ec__Iterator1_t4053151251, ___TabName_0)); }
	inline String_t* get_TabName_0() const { return ___TabName_0; }
	inline String_t** get_address_of_TabName_0() { return &___TabName_0; }
	inline void set_TabName_0(String_t* value)
	{
		___TabName_0 = value;
		Il2CppCodeGenWriteBarrier((&___TabName_0), value);
	}

	inline static int32_t get_offset_of_Id_1() { return static_cast<int32_t>(offsetof(U3CGetTableU3Ec__Iterator1_t4053151251, ___Id_1)); }
	inline String_t* get_Id_1() const { return ___Id_1; }
	inline String_t** get_address_of_Id_1() { return &___Id_1; }
	inline void set_Id_1(String_t* value)
	{
		___Id_1 = value;
		Il2CppCodeGenWriteBarrier((&___Id_1), value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E__0_2() { return static_cast<int32_t>(offsetof(U3CGetTableU3Ec__Iterator1_t4053151251, ___U3CwwwU3E__0_2)); }
	inline WWW_t3688466362 * get_U3CwwwU3E__0_2() const { return ___U3CwwwU3E__0_2; }
	inline WWW_t3688466362 ** get_address_of_U3CwwwU3E__0_2() { return &___U3CwwwU3E__0_2; }
	inline void set_U3CwwwU3E__0_2(WWW_t3688466362 * value)
	{
		___U3CwwwU3E__0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwwwU3E__0_2), value);
	}

	inline static int32_t get_offset_of_U3C_mDateU3E__0_3() { return static_cast<int32_t>(offsetof(U3CGetTableU3Ec__Iterator1_t4053151251, ___U3C_mDateU3E__0_3)); }
	inline StringU5BU5D_t1281789340* get_U3C_mDateU3E__0_3() const { return ___U3C_mDateU3E__0_3; }
	inline StringU5BU5D_t1281789340** get_address_of_U3C_mDateU3E__0_3() { return &___U3C_mDateU3E__0_3; }
	inline void set_U3C_mDateU3E__0_3(StringU5BU5D_t1281789340* value)
	{
		___U3C_mDateU3E__0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3C_mDateU3E__0_3), value);
	}

	inline static int32_t get_offset_of_U3CL0U3E__0_4() { return static_cast<int32_t>(offsetof(U3CGetTableU3Ec__Iterator1_t4053151251, ___U3CL0U3E__0_4)); }
	inline List_1_t3319525431 * get_U3CL0U3E__0_4() const { return ___U3CL0U3E__0_4; }
	inline List_1_t3319525431 ** get_address_of_U3CL0U3E__0_4() { return &___U3CL0U3E__0_4; }
	inline void set_U3CL0U3E__0_4(List_1_t3319525431 * value)
	{
		___U3CL0U3E__0_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CL0U3E__0_4), value);
	}

	inline static int32_t get_offset_of_U24this_5() { return static_cast<int32_t>(offsetof(U3CGetTableU3Ec__Iterator1_t4053151251, ___U24this_5)); }
	inline GetGoogleTab_t2614510110 * get_U24this_5() const { return ___U24this_5; }
	inline GetGoogleTab_t2614510110 ** get_address_of_U24this_5() { return &___U24this_5; }
	inline void set_U24this_5(GetGoogleTab_t2614510110 * value)
	{
		___U24this_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_5), value);
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CGetTableU3Ec__Iterator1_t4053151251, ___U24current_6)); }
	inline RuntimeObject * get_U24current_6() const { return ___U24current_6; }
	inline RuntimeObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(RuntimeObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_6), value);
	}

	inline static int32_t get_offset_of_U24disposing_7() { return static_cast<int32_t>(offsetof(U3CGetTableU3Ec__Iterator1_t4053151251, ___U24disposing_7)); }
	inline bool get_U24disposing_7() const { return ___U24disposing_7; }
	inline bool* get_address_of_U24disposing_7() { return &___U24disposing_7; }
	inline void set_U24disposing_7(bool value)
	{
		___U24disposing_7 = value;
	}

	inline static int32_t get_offset_of_U24PC_8() { return static_cast<int32_t>(offsetof(U3CGetTableU3Ec__Iterator1_t4053151251, ___U24PC_8)); }
	inline int32_t get_U24PC_8() const { return ___U24PC_8; }
	inline int32_t* get_address_of_U24PC_8() { return &___U24PC_8; }
	inline void set_U24PC_8(int32_t value)
	{
		___U24PC_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETTABLEU3EC__ITERATOR1_T4053151251_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_T3384986864_H
#define LIST_1_T3384986864_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<G0_Photo_UICon>
struct  List_1_t3384986864  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	G0_Photo_UIConU5BU5D_t2201776607* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3384986864, ____items_1)); }
	inline G0_Photo_UIConU5BU5D_t2201776607* get__items_1() const { return ____items_1; }
	inline G0_Photo_UIConU5BU5D_t2201776607** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(G0_Photo_UIConU5BU5D_t2201776607* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3384986864, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3384986864, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3384986864_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	G0_Photo_UIConU5BU5D_t2201776607* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3384986864_StaticFields, ___EmptyArray_4)); }
	inline G0_Photo_UIConU5BU5D_t2201776607* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline G0_Photo_UIConU5BU5D_t2201776607** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(G0_Photo_UIConU5BU5D_t2201776607* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3384986864_H
#ifndef LIST_1_T3600302216_H
#define LIST_1_T3600302216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<G0_Target_UICOn>
struct  List_1_t3600302216  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	G0_Target_UICOnU5BU5D_t325879015* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3600302216, ____items_1)); }
	inline G0_Target_UICOnU5BU5D_t325879015* get__items_1() const { return ____items_1; }
	inline G0_Target_UICOnU5BU5D_t325879015** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(G0_Target_UICOnU5BU5D_t325879015* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3600302216, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3600302216, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3600302216_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	G0_Target_UICOnU5BU5D_t325879015* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3600302216_StaticFields, ___EmptyArray_4)); }
	inline G0_Target_UICOnU5BU5D_t325879015* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline G0_Target_UICOnU5BU5D_t325879015** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(G0_Target_UICOnU5BU5D_t325879015* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3600302216_H
#ifndef LIST_1_T3869091856_H
#define LIST_1_T3869091856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<ObjArray/Obj>
struct  List_1_t3869091856  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjU5BU5D_t778053183* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3869091856, ____items_1)); }
	inline ObjU5BU5D_t778053183* get__items_1() const { return ____items_1; }
	inline ObjU5BU5D_t778053183** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjU5BU5D_t778053183* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3869091856, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3869091856, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3869091856_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ObjU5BU5D_t778053183* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3869091856_StaticFields, ___EmptyArray_4)); }
	inline ObjU5BU5D_t778053183* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ObjU5BU5D_t778053183** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ObjU5BU5D_t778053183* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3869091856_H
#ifndef LIST_1_T496632877_H
#define LIST_1_T496632877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>
struct  List_1_t496632877  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	List_1U5BU5D_t182406414* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t496632877, ____items_1)); }
	inline List_1U5BU5D_t182406414* get__items_1() const { return ____items_1; }
	inline List_1U5BU5D_t182406414** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(List_1U5BU5D_t182406414* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t496632877, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t496632877, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t496632877_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	List_1U5BU5D_t182406414* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t496632877_StaticFields, ___EmptyArray_4)); }
	inline List_1U5BU5D_t182406414* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline List_1U5BU5D_t182406414** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(List_1U5BU5D_t182406414* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T496632877_H
#ifndef LIST_1_T128053199_H
#define LIST_1_T128053199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t128053199  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t385246372* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____items_1)); }
	inline Int32U5BU5D_t385246372* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t385246372** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t385246372* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t128053199_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Int32U5BU5D_t385246372* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t128053199_StaticFields, ___EmptyArray_4)); }
	inline Int32U5BU5D_t385246372* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Int32U5BU5D_t385246372** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Int32U5BU5D_t385246372* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T128053199_H
#ifndef LIST_1_T3319525431_H
#define LIST_1_T3319525431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String>
struct  List_1_t3319525431  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t1281789340* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____items_1)); }
	inline StringU5BU5D_t1281789340* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t1281789340** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t1281789340* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3319525431_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	StringU5BU5D_t1281789340* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3319525431_StaticFields, ___EmptyArray_4)); }
	inline StringU5BU5D_t1281789340* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline StringU5BU5D_t1281789340** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(StringU5BU5D_t1281789340* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3319525431_H
#ifndef LIST_1_T1723595505_H
#define LIST_1_T1723595505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Tween>
struct  List_1_t1723595505  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TweenU5BU5D_t2222812858* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1723595505, ____items_1)); }
	inline TweenU5BU5D_t2222812858* get__items_1() const { return ____items_1; }
	inline TweenU5BU5D_t2222812858** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TweenU5BU5D_t2222812858* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1723595505, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1723595505, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1723595505_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	TweenU5BU5D_t2222812858* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1723595505_StaticFields, ___EmptyArray_4)); }
	inline TweenU5BU5D_t2222812858* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline TweenU5BU5D_t2222812858** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(TweenU5BU5D_t2222812858* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1723595505_H
#ifndef LIST_1_T4278874368_H
#define LIST_1_T4278874368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Collider2D>
struct  List_1_t4278874368  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Collider2DU5BU5D_t1693969295* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4278874368, ____items_1)); }
	inline Collider2DU5BU5D_t1693969295* get__items_1() const { return ____items_1; }
	inline Collider2DU5BU5D_t1693969295** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Collider2DU5BU5D_t1693969295* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4278874368, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4278874368, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t4278874368_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Collider2DU5BU5D_t1693969295* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t4278874368_StaticFields, ___EmptyArray_4)); }
	inline Collider2DU5BU5D_t1693969295* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Collider2DU5BU5D_t1693969295** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Collider2DU5BU5D_t1693969295* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4278874368_H
#ifndef LIST_1_T1234605051_H
#define LIST_1_T1234605051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct  List_1_t1234605051  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UIVertexU5BU5D_t1981460040* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1234605051, ____items_1)); }
	inline UIVertexU5BU5D_t1981460040* get__items_1() const { return ____items_1; }
	inline UIVertexU5BU5D_t1981460040** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UIVertexU5BU5D_t1981460040* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1234605051, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1234605051, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1234605051_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	UIVertexU5BU5D_t1981460040* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1234605051_StaticFields, ___EmptyArray_4)); }
	inline UIVertexU5BU5D_t1981460040* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(UIVertexU5BU5D_t1981460040* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1234605051_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef TEXTWRITER_T3478189236_H
#define TEXTWRITER_T3478189236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter
struct  TextWriter_t3478189236  : public RuntimeObject
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t3528271667* ___CoreNewLine_0;

public:
	inline static int32_t get_offset_of_CoreNewLine_0() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236, ___CoreNewLine_0)); }
	inline CharU5BU5D_t3528271667* get_CoreNewLine_0() const { return ___CoreNewLine_0; }
	inline CharU5BU5D_t3528271667** get_address_of_CoreNewLine_0() { return &___CoreNewLine_0; }
	inline void set_CoreNewLine_0(CharU5BU5D_t3528271667* value)
	{
		___CoreNewLine_0 = value;
		Il2CppCodeGenWriteBarrier((&___CoreNewLine_0), value);
	}
};

struct TextWriter_t3478189236_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t3478189236 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ___Null_1)); }
	inline TextWriter_t3478189236 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t3478189236 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t3478189236 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTWRITER_T3478189236_H
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T2760389100_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef U3CSTARTU3EC__ITERATOR0_T46314510_H
#define U3CSTARTU3EC__ITERATOR0_T46314510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TestCon/<Start>c__Iterator0
struct  U3CStartU3Ec__Iterator0_t46314510  : public RuntimeObject
{
public:
	// System.Int32 TestCon/<Start>c__Iterator0::<i>__1
	int32_t ___U3CiU3E__1_0;
	// TestCon TestCon/<Start>c__Iterator0::$this
	TestCon_t50111880 * ___U24this_1;
	// System.Object TestCon/<Start>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean TestCon/<Start>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 TestCon/<Start>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U3CiU3E__1_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t46314510, ___U3CiU3E__1_0)); }
	inline int32_t get_U3CiU3E__1_0() const { return ___U3CiU3E__1_0; }
	inline int32_t* get_address_of_U3CiU3E__1_0() { return &___U3CiU3E__1_0; }
	inline void set_U3CiU3E__1_0(int32_t value)
	{
		___U3CiU3E__1_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t46314510, ___U24this_1)); }
	inline TestCon_t50111880 * get_U24this_1() const { return ___U24this_1; }
	inline TestCon_t50111880 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(TestCon_t50111880 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t46314510, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t46314510, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t46314510, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTU3EC__ITERATOR0_T46314510_H
#ifndef U3C_RESETU3EC__ITERATOR0_T24904354_H
#define U3C_RESETU3EC__ITERATOR0_T24904354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TimeLoop/<_Reset>c__Iterator0
struct  U3C_ResetU3Ec__Iterator0_t24904354  : public RuntimeObject
{
public:
	// TimeLoop TimeLoop/<_Reset>c__Iterator0::$this
	TimeLoop_t468784922 * ___U24this_0;
	// System.Object TimeLoop/<_Reset>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean TimeLoop/<_Reset>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 TimeLoop/<_Reset>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3C_ResetU3Ec__Iterator0_t24904354, ___U24this_0)); }
	inline TimeLoop_t468784922 * get_U24this_0() const { return ___U24this_0; }
	inline TimeLoop_t468784922 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(TimeLoop_t468784922 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3C_ResetU3Ec__Iterator0_t24904354, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3C_ResetU3Ec__Iterator0_t24904354, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3C_ResetU3Ec__Iterator0_t24904354, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3C_RESETU3EC__ITERATOR0_T24904354_H
#ifndef UGUITOOL_T847651177_H
#define UGUITOOL_T847651177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UguiTool
struct  UguiTool_t847651177  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UGUITOOL_T847651177_H
#ifndef CUSTOMYIELDINSTRUCTION_T1895667560_H
#define CUSTOMYIELDINSTRUCTION_T1895667560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t1895667560  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMYIELDINSTRUCTION_T1895667560_H
#ifndef ABSTRACTEVENTDATA_T4171500731_H
#define ABSTRACTEVENTDATA_T4171500731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t4171500731  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t4171500731, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTEVENTDATA_T4171500731_H
#ifndef UNITYEVENTBASE_T3960448221_H
#define UNITYEVENTBASE_T3960448221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t3960448221  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t2498835369 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3050769227 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_Calls_0)); }
	inline InvokableCallList_t2498835369 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t2498835369 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t2498835369 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3050769227 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3050769227 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3050769227 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T3960448221_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef U24ARRAYTYPEU3D20_T1702832645_H
#define U24ARRAYTYPEU3D20_T1702832645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=20
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D20_t1702832645 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D20_t1702832645__padding[20];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D20_T1702832645_H
#ifndef _UI_T1688782487_H
#define _UI_T1688782487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// G0_End_UICon/_UI
struct  _UI_t1688782487 
{
public:
	// ButtObj G0_End_UICon/_UI::OutButt
	ButtObj_t1384809709 * ___OutButt_0;
	// UnityEngine.UI.Text G0_End_UICon/_UI::Score_Text
	Text_t1901882714 * ___Score_Text_1;
	// UnityEngine.UI.Text G0_End_UICon/_UI::Top_Score_Text
	Text_t1901882714 * ___Top_Score_Text_2;

public:
	inline static int32_t get_offset_of_OutButt_0() { return static_cast<int32_t>(offsetof(_UI_t1688782487, ___OutButt_0)); }
	inline ButtObj_t1384809709 * get_OutButt_0() const { return ___OutButt_0; }
	inline ButtObj_t1384809709 ** get_address_of_OutButt_0() { return &___OutButt_0; }
	inline void set_OutButt_0(ButtObj_t1384809709 * value)
	{
		___OutButt_0 = value;
		Il2CppCodeGenWriteBarrier((&___OutButt_0), value);
	}

	inline static int32_t get_offset_of_Score_Text_1() { return static_cast<int32_t>(offsetof(_UI_t1688782487, ___Score_Text_1)); }
	inline Text_t1901882714 * get_Score_Text_1() const { return ___Score_Text_1; }
	inline Text_t1901882714 ** get_address_of_Score_Text_1() { return &___Score_Text_1; }
	inline void set_Score_Text_1(Text_t1901882714 * value)
	{
		___Score_Text_1 = value;
		Il2CppCodeGenWriteBarrier((&___Score_Text_1), value);
	}

	inline static int32_t get_offset_of_Top_Score_Text_2() { return static_cast<int32_t>(offsetof(_UI_t1688782487, ___Top_Score_Text_2)); }
	inline Text_t1901882714 * get_Top_Score_Text_2() const { return ___Top_Score_Text_2; }
	inline Text_t1901882714 ** get_address_of_Top_Score_Text_2() { return &___Top_Score_Text_2; }
	inline void set_Top_Score_Text_2(Text_t1901882714 * value)
	{
		___Top_Score_Text_2 = value;
		Il2CppCodeGenWriteBarrier((&___Top_Score_Text_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of G0_End_UICon/_UI
struct _UI_t1688782487_marshaled_pinvoke
{
	ButtObj_t1384809709 * ___OutButt_0;
	Text_t1901882714 * ___Score_Text_1;
	Text_t1901882714 * ___Top_Score_Text_2;
};
// Native definition for COM marshalling of G0_End_UICon/_UI
struct _UI_t1688782487_marshaled_com
{
	ButtObj_t1384809709 * ___OutButt_0;
	Text_t1901882714 * ___Score_Text_1;
	Text_t1901882714 * ___Top_Score_Text_2;
};
#endif // _UI_T1688782487_H
#ifndef _UI_T1624633473_H
#define _UI_T1624633473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// G0_Main_UICon/_UI
struct  _UI_t1624633473 
{
public:
	// ButtObj G0_Main_UICon/_UI::TButt
	ButtObj_t1384809709 * ___TButt_0;
	// ButtObj G0_Main_UICon/_UI::TOutButt
	ButtObj_t1384809709 * ___TOutButt_1;
	// ObjArray G0_Main_UICon/_UI::ButtsOA
	ObjArray_t2087238592 * ___ButtsOA_2;

public:
	inline static int32_t get_offset_of_TButt_0() { return static_cast<int32_t>(offsetof(_UI_t1624633473, ___TButt_0)); }
	inline ButtObj_t1384809709 * get_TButt_0() const { return ___TButt_0; }
	inline ButtObj_t1384809709 ** get_address_of_TButt_0() { return &___TButt_0; }
	inline void set_TButt_0(ButtObj_t1384809709 * value)
	{
		___TButt_0 = value;
		Il2CppCodeGenWriteBarrier((&___TButt_0), value);
	}

	inline static int32_t get_offset_of_TOutButt_1() { return static_cast<int32_t>(offsetof(_UI_t1624633473, ___TOutButt_1)); }
	inline ButtObj_t1384809709 * get_TOutButt_1() const { return ___TOutButt_1; }
	inline ButtObj_t1384809709 ** get_address_of_TOutButt_1() { return &___TOutButt_1; }
	inline void set_TOutButt_1(ButtObj_t1384809709 * value)
	{
		___TOutButt_1 = value;
		Il2CppCodeGenWriteBarrier((&___TOutButt_1), value);
	}

	inline static int32_t get_offset_of_ButtsOA_2() { return static_cast<int32_t>(offsetof(_UI_t1624633473, ___ButtsOA_2)); }
	inline ObjArray_t2087238592 * get_ButtsOA_2() const { return ___ButtsOA_2; }
	inline ObjArray_t2087238592 ** get_address_of_ButtsOA_2() { return &___ButtsOA_2; }
	inline void set_ButtsOA_2(ObjArray_t2087238592 * value)
	{
		___ButtsOA_2 = value;
		Il2CppCodeGenWriteBarrier((&___ButtsOA_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of G0_Main_UICon/_UI
struct _UI_t1624633473_marshaled_pinvoke
{
	ButtObj_t1384809709 * ___TButt_0;
	ButtObj_t1384809709 * ___TOutButt_1;
	ObjArray_t2087238592 * ___ButtsOA_2;
};
// Native definition for COM marshalling of G0_Main_UICon/_UI
struct _UI_t1624633473_marshaled_com
{
	ButtObj_t1384809709 * ___TButt_0;
	ButtObj_t1384809709 * ___TOutButt_1;
	ObjArray_t2087238592 * ___ButtsOA_2;
};
#endif // _UI_T1624633473_H
#ifndef _UI_T4116017140_H
#define _UI_T4116017140_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// G0_Photo_UICon/_UI
struct  _UI_t4116017140 
{
public:
	// MoveDragButt G0_Photo_UICon/_UI::Butt
	MoveDragButt_t3773719392 * ___Butt_0;
	// UnityEngine.UI.Image G0_Photo_UICon/_UI::Im
	Image_t2670269651 * ___Im_1;
	// Tween_Array G0_Photo_UICon/_UI::Tween
	Tween_Array_t2143430763 * ___Tween_2;

public:
	inline static int32_t get_offset_of_Butt_0() { return static_cast<int32_t>(offsetof(_UI_t4116017140, ___Butt_0)); }
	inline MoveDragButt_t3773719392 * get_Butt_0() const { return ___Butt_0; }
	inline MoveDragButt_t3773719392 ** get_address_of_Butt_0() { return &___Butt_0; }
	inline void set_Butt_0(MoveDragButt_t3773719392 * value)
	{
		___Butt_0 = value;
		Il2CppCodeGenWriteBarrier((&___Butt_0), value);
	}

	inline static int32_t get_offset_of_Im_1() { return static_cast<int32_t>(offsetof(_UI_t4116017140, ___Im_1)); }
	inline Image_t2670269651 * get_Im_1() const { return ___Im_1; }
	inline Image_t2670269651 ** get_address_of_Im_1() { return &___Im_1; }
	inline void set_Im_1(Image_t2670269651 * value)
	{
		___Im_1 = value;
		Il2CppCodeGenWriteBarrier((&___Im_1), value);
	}

	inline static int32_t get_offset_of_Tween_2() { return static_cast<int32_t>(offsetof(_UI_t4116017140, ___Tween_2)); }
	inline Tween_Array_t2143430763 * get_Tween_2() const { return ___Tween_2; }
	inline Tween_Array_t2143430763 ** get_address_of_Tween_2() { return &___Tween_2; }
	inline void set_Tween_2(Tween_Array_t2143430763 * value)
	{
		___Tween_2 = value;
		Il2CppCodeGenWriteBarrier((&___Tween_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of G0_Photo_UICon/_UI
struct _UI_t4116017140_marshaled_pinvoke
{
	MoveDragButt_t3773719392 * ___Butt_0;
	Image_t2670269651 * ___Im_1;
	Tween_Array_t2143430763 * ___Tween_2;
};
// Native definition for COM marshalling of G0_Photo_UICon/_UI
struct _UI_t4116017140_marshaled_com
{
	MoveDragButt_t3773719392 * ___Butt_0;
	Image_t2670269651 * ___Im_1;
	Tween_Array_t2143430763 * ___Tween_2;
};
#endif // _UI_T4116017140_H
#ifndef _UI_T3927201216_H
#define _UI_T3927201216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// G0_Play_UICon/_UI
struct  _UI_t3927201216 
{
public:
	// UnityEngine.UI.Image G0_Play_UICon/_UI::Map
	Image_t2670269651 * ___Map_0;
	// TimeLoop G0_Play_UICon/_UI::time
	TimeLoop_t468784922 * ___time_1;
	// UnityEngine.UI.Text G0_Play_UICon/_UI::Time_text
	Text_t1901882714 * ___Time_text_2;
	// UnityEngine.GameObject G0_Play_UICon/_UI::Photo_Parent
	GameObject_t1113636619 * ___Photo_Parent_3;
	// UnityEngine.GameObject G0_Play_UICon/_UI::Photo_Obj
	GameObject_t1113636619 * ___Photo_Obj_4;
	// UnityEngine.GameObject G0_Play_UICon/_UI::Target_Parent
	GameObject_t1113636619 * ___Target_Parent_5;
	// UnityEngine.GameObject G0_Play_UICon/_UI::Traget_Obj
	GameObject_t1113636619 * ___Traget_Obj_6;

public:
	inline static int32_t get_offset_of_Map_0() { return static_cast<int32_t>(offsetof(_UI_t3927201216, ___Map_0)); }
	inline Image_t2670269651 * get_Map_0() const { return ___Map_0; }
	inline Image_t2670269651 ** get_address_of_Map_0() { return &___Map_0; }
	inline void set_Map_0(Image_t2670269651 * value)
	{
		___Map_0 = value;
		Il2CppCodeGenWriteBarrier((&___Map_0), value);
	}

	inline static int32_t get_offset_of_time_1() { return static_cast<int32_t>(offsetof(_UI_t3927201216, ___time_1)); }
	inline TimeLoop_t468784922 * get_time_1() const { return ___time_1; }
	inline TimeLoop_t468784922 ** get_address_of_time_1() { return &___time_1; }
	inline void set_time_1(TimeLoop_t468784922 * value)
	{
		___time_1 = value;
		Il2CppCodeGenWriteBarrier((&___time_1), value);
	}

	inline static int32_t get_offset_of_Time_text_2() { return static_cast<int32_t>(offsetof(_UI_t3927201216, ___Time_text_2)); }
	inline Text_t1901882714 * get_Time_text_2() const { return ___Time_text_2; }
	inline Text_t1901882714 ** get_address_of_Time_text_2() { return &___Time_text_2; }
	inline void set_Time_text_2(Text_t1901882714 * value)
	{
		___Time_text_2 = value;
		Il2CppCodeGenWriteBarrier((&___Time_text_2), value);
	}

	inline static int32_t get_offset_of_Photo_Parent_3() { return static_cast<int32_t>(offsetof(_UI_t3927201216, ___Photo_Parent_3)); }
	inline GameObject_t1113636619 * get_Photo_Parent_3() const { return ___Photo_Parent_3; }
	inline GameObject_t1113636619 ** get_address_of_Photo_Parent_3() { return &___Photo_Parent_3; }
	inline void set_Photo_Parent_3(GameObject_t1113636619 * value)
	{
		___Photo_Parent_3 = value;
		Il2CppCodeGenWriteBarrier((&___Photo_Parent_3), value);
	}

	inline static int32_t get_offset_of_Photo_Obj_4() { return static_cast<int32_t>(offsetof(_UI_t3927201216, ___Photo_Obj_4)); }
	inline GameObject_t1113636619 * get_Photo_Obj_4() const { return ___Photo_Obj_4; }
	inline GameObject_t1113636619 ** get_address_of_Photo_Obj_4() { return &___Photo_Obj_4; }
	inline void set_Photo_Obj_4(GameObject_t1113636619 * value)
	{
		___Photo_Obj_4 = value;
		Il2CppCodeGenWriteBarrier((&___Photo_Obj_4), value);
	}

	inline static int32_t get_offset_of_Target_Parent_5() { return static_cast<int32_t>(offsetof(_UI_t3927201216, ___Target_Parent_5)); }
	inline GameObject_t1113636619 * get_Target_Parent_5() const { return ___Target_Parent_5; }
	inline GameObject_t1113636619 ** get_address_of_Target_Parent_5() { return &___Target_Parent_5; }
	inline void set_Target_Parent_5(GameObject_t1113636619 * value)
	{
		___Target_Parent_5 = value;
		Il2CppCodeGenWriteBarrier((&___Target_Parent_5), value);
	}

	inline static int32_t get_offset_of_Traget_Obj_6() { return static_cast<int32_t>(offsetof(_UI_t3927201216, ___Traget_Obj_6)); }
	inline GameObject_t1113636619 * get_Traget_Obj_6() const { return ___Traget_Obj_6; }
	inline GameObject_t1113636619 ** get_address_of_Traget_Obj_6() { return &___Traget_Obj_6; }
	inline void set_Traget_Obj_6(GameObject_t1113636619 * value)
	{
		___Traget_Obj_6 = value;
		Il2CppCodeGenWriteBarrier((&___Traget_Obj_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of G0_Play_UICon/_UI
struct _UI_t3927201216_marshaled_pinvoke
{
	Image_t2670269651 * ___Map_0;
	TimeLoop_t468784922 * ___time_1;
	Text_t1901882714 * ___Time_text_2;
	GameObject_t1113636619 * ___Photo_Parent_3;
	GameObject_t1113636619 * ___Photo_Obj_4;
	GameObject_t1113636619 * ___Target_Parent_5;
	GameObject_t1113636619 * ___Traget_Obj_6;
};
// Native definition for COM marshalling of G0_Play_UICon/_UI
struct _UI_t3927201216_marshaled_com
{
	Image_t2670269651 * ___Map_0;
	TimeLoop_t468784922 * ___time_1;
	Text_t1901882714 * ___Time_text_2;
	GameObject_t1113636619 * ___Photo_Parent_3;
	GameObject_t1113636619 * ___Photo_Obj_4;
	GameObject_t1113636619 * ___Target_Parent_5;
	GameObject_t1113636619 * ___Traget_Obj_6;
};
#endif // _UI_T3927201216_H
#ifndef _UI_T1677693085_H
#define _UI_T1677693085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainUICon/_UI
struct  _UI_t1677693085 
{
public:
	union
	{
		struct
		{
		};
		uint8_t _UI_t1677693085__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _UI_T1677693085_H
#ifndef OBJ_T2397017114_H
#define OBJ_T2397017114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjArray/Obj
struct  Obj_t2397017114 
{
public:
	// UnityEngine.GameObject ObjArray/Obj::obj
	GameObject_t1113636619 * ___obj_0;
	// UnityEngine.Events.UnityEvent ObjArray/Obj::EnterEvent
	UnityEvent_t2581268647 * ___EnterEvent_1;
	// UnityEngine.Events.UnityEvent ObjArray/Obj::ExitEvent
	UnityEvent_t2581268647 * ___ExitEvent_2;

public:
	inline static int32_t get_offset_of_obj_0() { return static_cast<int32_t>(offsetof(Obj_t2397017114, ___obj_0)); }
	inline GameObject_t1113636619 * get_obj_0() const { return ___obj_0; }
	inline GameObject_t1113636619 ** get_address_of_obj_0() { return &___obj_0; }
	inline void set_obj_0(GameObject_t1113636619 * value)
	{
		___obj_0 = value;
		Il2CppCodeGenWriteBarrier((&___obj_0), value);
	}

	inline static int32_t get_offset_of_EnterEvent_1() { return static_cast<int32_t>(offsetof(Obj_t2397017114, ___EnterEvent_1)); }
	inline UnityEvent_t2581268647 * get_EnterEvent_1() const { return ___EnterEvent_1; }
	inline UnityEvent_t2581268647 ** get_address_of_EnterEvent_1() { return &___EnterEvent_1; }
	inline void set_EnterEvent_1(UnityEvent_t2581268647 * value)
	{
		___EnterEvent_1 = value;
		Il2CppCodeGenWriteBarrier((&___EnterEvent_1), value);
	}

	inline static int32_t get_offset_of_ExitEvent_2() { return static_cast<int32_t>(offsetof(Obj_t2397017114, ___ExitEvent_2)); }
	inline UnityEvent_t2581268647 * get_ExitEvent_2() const { return ___ExitEvent_2; }
	inline UnityEvent_t2581268647 ** get_address_of_ExitEvent_2() { return &___ExitEvent_2; }
	inline void set_ExitEvent_2(UnityEvent_t2581268647 * value)
	{
		___ExitEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___ExitEvent_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of ObjArray/Obj
struct Obj_t2397017114_marshaled_pinvoke
{
	GameObject_t1113636619 * ___obj_0;
	UnityEvent_t2581268647 * ___EnterEvent_1;
	UnityEvent_t2581268647 * ___ExitEvent_2;
};
// Native definition for COM marshalling of ObjArray/Obj
struct Obj_t2397017114_marshaled_com
{
	GameObject_t1113636619 * ___obj_0;
	UnityEvent_t2581268647 * ___EnterEvent_1;
	UnityEvent_t2581268647 * ___ExitEvent_2;
};
#endif // OBJ_T2397017114_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef ENUMERATOR_T2385876754_H
#define ENUMERATOR_T2385876754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.String>>
struct  Enumerator_t2385876754 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t496632877 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	List_1_t3319525431 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2385876754, ___l_0)); }
	inline List_1_t496632877 * get_l_0() const { return ___l_0; }
	inline List_1_t496632877 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t496632877 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2385876754, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2385876754, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2385876754, ___current_3)); }
	inline List_1_t3319525431 * get_current_3() const { return ___current_3; }
	inline List_1_t3319525431 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(List_1_t3319525431 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2385876754_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef ENUMERATOR_T913802012_H
#define ENUMERATOR_T913802012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.String>
struct  Enumerator_t913802012 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3319525431 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	String_t* ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t913802012, ___l_0)); }
	inline List_1_t3319525431 * get_l_0() const { return ___l_0; }
	inline List_1_t3319525431 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3319525431 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t913802012, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t913802012, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t913802012, ___current_3)); }
	inline String_t* get_current_3() const { return ___current_3; }
	inline String_t** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(String_t* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T913802012_H
#ifndef ENUMERATOR_T1873150949_H
#define ENUMERATOR_T1873150949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Collider2D>
struct  Enumerator_t1873150949 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t4278874368 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Collider2D_t2806799626 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t1873150949, ___l_0)); }
	inline List_1_t4278874368 * get_l_0() const { return ___l_0; }
	inline List_1_t4278874368 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t4278874368 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1873150949, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t1873150949, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1873150949, ___current_3)); }
	inline Collider2D_t2806799626 * get_current_3() const { return ___current_3; }
	inline Collider2D_t2806799626 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Collider2D_t2806799626 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1873150949_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef STREAMWRITER_T1266378904_H
#define STREAMWRITER_T1266378904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamWriter
struct  StreamWriter_t1266378904  : public TextWriter_t3478189236
{
public:
	// System.Text.Encoding System.IO.StreamWriter::internalEncoding
	Encoding_t1523322056 * ___internalEncoding_2;
	// System.IO.Stream System.IO.StreamWriter::internalStream
	Stream_t1273022909 * ___internalStream_3;
	// System.Boolean System.IO.StreamWriter::iflush
	bool ___iflush_4;
	// System.Byte[] System.IO.StreamWriter::byte_buf
	ByteU5BU5D_t4116647657* ___byte_buf_5;
	// System.Int32 System.IO.StreamWriter::byte_pos
	int32_t ___byte_pos_6;
	// System.Char[] System.IO.StreamWriter::decode_buf
	CharU5BU5D_t3528271667* ___decode_buf_7;
	// System.Int32 System.IO.StreamWriter::decode_pos
	int32_t ___decode_pos_8;
	// System.Boolean System.IO.StreamWriter::DisposedAlready
	bool ___DisposedAlready_9;
	// System.Boolean System.IO.StreamWriter::preamble_done
	bool ___preamble_done_10;

public:
	inline static int32_t get_offset_of_internalEncoding_2() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___internalEncoding_2)); }
	inline Encoding_t1523322056 * get_internalEncoding_2() const { return ___internalEncoding_2; }
	inline Encoding_t1523322056 ** get_address_of_internalEncoding_2() { return &___internalEncoding_2; }
	inline void set_internalEncoding_2(Encoding_t1523322056 * value)
	{
		___internalEncoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___internalEncoding_2), value);
	}

	inline static int32_t get_offset_of_internalStream_3() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___internalStream_3)); }
	inline Stream_t1273022909 * get_internalStream_3() const { return ___internalStream_3; }
	inline Stream_t1273022909 ** get_address_of_internalStream_3() { return &___internalStream_3; }
	inline void set_internalStream_3(Stream_t1273022909 * value)
	{
		___internalStream_3 = value;
		Il2CppCodeGenWriteBarrier((&___internalStream_3), value);
	}

	inline static int32_t get_offset_of_iflush_4() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___iflush_4)); }
	inline bool get_iflush_4() const { return ___iflush_4; }
	inline bool* get_address_of_iflush_4() { return &___iflush_4; }
	inline void set_iflush_4(bool value)
	{
		___iflush_4 = value;
	}

	inline static int32_t get_offset_of_byte_buf_5() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___byte_buf_5)); }
	inline ByteU5BU5D_t4116647657* get_byte_buf_5() const { return ___byte_buf_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_byte_buf_5() { return &___byte_buf_5; }
	inline void set_byte_buf_5(ByteU5BU5D_t4116647657* value)
	{
		___byte_buf_5 = value;
		Il2CppCodeGenWriteBarrier((&___byte_buf_5), value);
	}

	inline static int32_t get_offset_of_byte_pos_6() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___byte_pos_6)); }
	inline int32_t get_byte_pos_6() const { return ___byte_pos_6; }
	inline int32_t* get_address_of_byte_pos_6() { return &___byte_pos_6; }
	inline void set_byte_pos_6(int32_t value)
	{
		___byte_pos_6 = value;
	}

	inline static int32_t get_offset_of_decode_buf_7() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___decode_buf_7)); }
	inline CharU5BU5D_t3528271667* get_decode_buf_7() const { return ___decode_buf_7; }
	inline CharU5BU5D_t3528271667** get_address_of_decode_buf_7() { return &___decode_buf_7; }
	inline void set_decode_buf_7(CharU5BU5D_t3528271667* value)
	{
		___decode_buf_7 = value;
		Il2CppCodeGenWriteBarrier((&___decode_buf_7), value);
	}

	inline static int32_t get_offset_of_decode_pos_8() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___decode_pos_8)); }
	inline int32_t get_decode_pos_8() const { return ___decode_pos_8; }
	inline int32_t* get_address_of_decode_pos_8() { return &___decode_pos_8; }
	inline void set_decode_pos_8(int32_t value)
	{
		___decode_pos_8 = value;
	}

	inline static int32_t get_offset_of_DisposedAlready_9() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___DisposedAlready_9)); }
	inline bool get_DisposedAlready_9() const { return ___DisposedAlready_9; }
	inline bool* get_address_of_DisposedAlready_9() { return &___DisposedAlready_9; }
	inline void set_DisposedAlready_9(bool value)
	{
		___DisposedAlready_9 = value;
	}

	inline static int32_t get_offset_of_preamble_done_10() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___preamble_done_10)); }
	inline bool get_preamble_done_10() const { return ___preamble_done_10; }
	inline bool* get_address_of_preamble_done_10() { return &___preamble_done_10; }
	inline void set_preamble_done_10(bool value)
	{
		___preamble_done_10 = value;
	}
};

struct StreamWriter_t1266378904_StaticFields
{
public:
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t1266378904 * ___Null_11;

public:
	inline static int32_t get_offset_of_Null_11() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904_StaticFields, ___Null_11)); }
	inline StreamWriter_t1266378904 * get_Null_11() const { return ___Null_11; }
	inline StreamWriter_t1266378904 ** get_address_of_Null_11() { return &___Null_11; }
	inline void set_Null_11(StreamWriter_t1266378904 * value)
	{
		___Null_11 = value;
		Il2CppCodeGenWriteBarrier((&___Null_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMWRITER_T1266378904_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef PATHOBJ_T4274847934_H
#define PATHOBJ_T4274847934_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TxtCon/PathObj
struct  PathObj_t4274847934 
{
public:
	// System.String TxtCon/PathObj::name
	String_t* ___name_0;
	// System.String TxtCon/PathObj::Path
	String_t* ___Path_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(PathObj_t4274847934, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_Path_1() { return static_cast<int32_t>(offsetof(PathObj_t4274847934, ___Path_1)); }
	inline String_t* get_Path_1() const { return ___Path_1; }
	inline String_t** get_address_of_Path_1() { return &___Path_1; }
	inline void set_Path_1(String_t* value)
	{
		___Path_1 = value;
		Il2CppCodeGenWriteBarrier((&___Path_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of TxtCon/PathObj
struct PathObj_t4274847934_marshaled_pinvoke
{
	char* ___name_0;
	char* ___Path_1;
};
// Native definition for COM marshalling of TxtCon/PathObj
struct PathObj_t4274847934_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___Path_1;
};
#endif // PATHOBJ_T4274847934_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef COLOR32_T2600501292_H
#define COLOR32_T2600501292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct  Color32_t2600501292 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T2600501292_H
#ifndef BASEEVENTDATA_T3903027533_H
#define BASEEVENTDATA_T3903027533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t3903027533  : public AbstractEventData_t4171500731
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t1003666588 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t3903027533, ___m_EventSystem_1)); }
	inline EventSystem_t1003666588 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t1003666588 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t1003666588 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTDATA_T3903027533_H
#ifndef UNITYEVENT_T2581268647_H
#define UNITYEVENT_T2581268647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent
struct  UnityEvent_t2581268647  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t2581268647, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_T2581268647_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR2INT_T3469998543_H
#define VECTOR2INT_T3469998543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2Int
struct  Vector2Int_t3469998543 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_t3469998543, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_t3469998543, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_t3469998543_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t3469998543  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t3469998543  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t3469998543  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t3469998543  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t3469998543  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t3469998543  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_t3469998543_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_t3469998543  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_t3469998543 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_t3469998543  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_t3469998543_StaticFields, ___s_One_3)); }
	inline Vector2Int_t3469998543  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_t3469998543 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_t3469998543  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_t3469998543_StaticFields, ___s_Up_4)); }
	inline Vector2Int_t3469998543  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_t3469998543 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_t3469998543  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_t3469998543_StaticFields, ___s_Down_5)); }
	inline Vector2Int_t3469998543  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_t3469998543 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_t3469998543  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_t3469998543_StaticFields, ___s_Left_6)); }
	inline Vector2Int_t3469998543  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_t3469998543 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_t3469998543  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_t3469998543_StaticFields, ___s_Right_7)); }
	inline Vector2Int_t3469998543  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_t3469998543 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_t3469998543  value)
	{
		___s_Right_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2INT_T3469998543_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3319028937  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3319028937  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_6)); }
	inline Vector4_t3319028937  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3319028937 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3319028937  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
#ifndef WWW_T3688466362_H
#define WWW_T3688466362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WWW
struct  WWW_t3688466362  : public CustomYieldInstruction_t1895667560
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.WWW::_uwr
	UnityWebRequest_t463507806 * ____uwr_0;

public:
	inline static int32_t get_offset_of__uwr_0() { return static_cast<int32_t>(offsetof(WWW_t3688466362, ____uwr_0)); }
	inline UnityWebRequest_t463507806 * get__uwr_0() const { return ____uwr_0; }
	inline UnityWebRequest_t463507806 ** get_address_of__uwr_0() { return &____uwr_0; }
	inline void set__uwr_0(UnityWebRequest_t463507806 * value)
	{
		____uwr_0 = value;
		Il2CppCodeGenWriteBarrier((&____uwr_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WWW_T3688466362_H
#ifndef WAITFORSECONDS_T1699091251_H
#define WAITFORSECONDS_T1699091251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1699091251  : public YieldInstruction_t403091072
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1699091251, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1699091251_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255366_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255366  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-35859E8329070E55C5D9282930023DD6B1594141
	U24ArrayTypeU3D20_t1702832645  ___U24fieldU2D35859E8329070E55C5D9282930023DD6B1594141_0;

public:
	inline static int32_t get_offset_of_U24fieldU2D35859E8329070E55C5D9282930023DD6B1594141_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields, ___U24fieldU2D35859E8329070E55C5D9282930023DD6B1594141_0)); }
	inline U24ArrayTypeU3D20_t1702832645  get_U24fieldU2D35859E8329070E55C5D9282930023DD6B1594141_0() const { return ___U24fieldU2D35859E8329070E55C5D9282930023DD6B1594141_0; }
	inline U24ArrayTypeU3D20_t1702832645 * get_address_of_U24fieldU2D35859E8329070E55C5D9282930023DD6B1594141_0() { return &___U24fieldU2D35859E8329070E55C5D9282930023DD6B1594141_0; }
	inline void set_U24fieldU2D35859E8329070E55C5D9282930023DD6B1594141_0(U24ArrayTypeU3D20_t1702832645  value)
	{
		___U24fieldU2D35859E8329070E55C5D9282930023DD6B1594141_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255366_H
#ifndef G0_TARGET_DATA_T1917875166_H
#define G0_TARGET_DATA_T1917875166_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// G0_Target_Data
struct  G0_Target_Data_t1917875166  : public RuntimeObject
{
public:
	// System.String G0_Target_Data::name
	String_t* ___name_0;
	// UnityEngine.Sprite G0_Target_Data::Photo
	Sprite_t280657092 * ___Photo_1;
	// UnityEngine.Vector2Int G0_Target_Data::Pot
	Vector2Int_t3469998543  ___Pot_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(G0_Target_Data_t1917875166, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_Photo_1() { return static_cast<int32_t>(offsetof(G0_Target_Data_t1917875166, ___Photo_1)); }
	inline Sprite_t280657092 * get_Photo_1() const { return ___Photo_1; }
	inline Sprite_t280657092 ** get_address_of_Photo_1() { return &___Photo_1; }
	inline void set_Photo_1(Sprite_t280657092 * value)
	{
		___Photo_1 = value;
		Il2CppCodeGenWriteBarrier((&___Photo_1), value);
	}

	inline static int32_t get_offset_of_Pot_2() { return static_cast<int32_t>(offsetof(G0_Target_Data_t1917875166, ___Pot_2)); }
	inline Vector2Int_t3469998543  get_Pot_2() const { return ___Pot_2; }
	inline Vector2Int_t3469998543 * get_address_of_Pot_2() { return &___Pot_2; }
	inline void set_Pot_2(Vector2Int_t3469998543  value)
	{
		___Pot_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // G0_TARGET_DATA_T1917875166_H
#ifndef SIZETYPE_T504230827_H
#define SIZETYPE_T504230827_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SizeButt/SizeType
struct  SizeType_t504230827 
{
public:
	// System.Int32 SizeButt/SizeType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SizeType_t504230827, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIZETYPE_T504230827_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef FILEATTRIBUTES_T3417205536_H
#define FILEATTRIBUTES_T3417205536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAttributes
struct  FileAttributes_t3417205536 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAttributes_t3417205536, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEATTRIBUTES_T3417205536_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef TWEEN_TYPE_T1734675930_H
#define TWEEN_TYPE_T1734675930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tween/Tween_Type
struct  Tween_Type_t1734675930 
{
public:
	// System.Int32 Tween/Tween_Type::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Tween_Type_t1734675930, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWEEN_TYPE_T1734675930_H
#ifndef ANIMATIONCURVE_T3046754366_H
#define ANIMATIONCURVE_T3046754366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationCurve
struct  AnimationCurve_t3046754366  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t3046754366, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ANIMATIONCURVE_T3046754366_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef DRIVENTRANSFORMPROPERTIES_T3813433528_H
#define DRIVENTRANSFORMPROPERTIES_T3813433528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenTransformProperties
struct  DrivenTransformProperties_t3813433528 
{
public:
	// System.Int32 UnityEngine.DrivenTransformProperties::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DrivenTransformProperties_t3813433528, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENTRANSFORMPROPERTIES_T3813433528_H
#ifndef INPUTBUTTON_T3704011348_H
#define INPUTBUTTON_T3704011348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData/InputButton
struct  InputButton_t3704011348 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InputButton_t3704011348, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTBUTTON_T3704011348_H
#ifndef RAYCASTRESULT_T3360306849_H
#define RAYCASTRESULT_T3360306849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t3360306849 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t1113636619 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t4150874583 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t3722313464  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t3722313464  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t2156229523  ___screenPosition_9;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___m_GameObject_0)); }
	inline GameObject_t1113636619 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_t1113636619 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_t1113636619 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameObject_0), value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___module_1)); }
	inline BaseRaycaster_t4150874583 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_t4150874583 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_t4150874583 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((&___module_1), value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldPosition_7)); }
	inline Vector3_t3722313464  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t3722313464 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t3722313464  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldNormal_8)); }
	inline Vector3_t3722313464  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t3722313464 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t3722313464  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___screenPosition_9)); }
	inline Vector2_t2156229523  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_t2156229523 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_t2156229523  value)
	{
		___screenPosition_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_pinvoke
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_com
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
#endif // RAYCASTRESULT_T3360306849_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef RAYCASTHIT2D_T2279581989_H
#define RAYCASTHIT2D_T2279581989_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit2D
struct  RaycastHit2D_t2279581989 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t2156229523  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t2156229523  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t2156229523  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Centroid_0)); }
	inline Vector2_t2156229523  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_t2156229523 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_t2156229523  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Point_1)); }
	inline Vector2_t2156229523  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_t2156229523 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_t2156229523  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Normal_2)); }
	inline Vector2_t2156229523  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_t2156229523 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_t2156229523  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYCASTHIT2D_T2279581989_H
#ifndef TEXTUREFORMAT_T2701165832_H
#define TEXTUREFORMAT_T2701165832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t2701165832 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureFormat_t2701165832, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREFORMAT_T2701165832_H
#ifndef FILLMETHOD_T1167457570_H
#define FILLMETHOD_T1167457570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/FillMethod
struct  FillMethod_t1167457570 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FillMethod_t1167457570, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILLMETHOD_T1167457570_H
#ifndef TYPE_T1152881528_H
#define TYPE_T1152881528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/Type
struct  Type_t1152881528 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Type_t1152881528, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T1152881528_H
#ifndef VERTEXHELPER_T2453304189_H
#define VERTEXHELPER_T2453304189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.VertexHelper
struct  VertexHelper_t2453304189  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Positions
	List_1_t899420910 * ___m_Positions_0;
	// System.Collections.Generic.List`1<UnityEngine.Color32> UnityEngine.UI.VertexHelper::m_Colors
	List_1_t4072576034 * ___m_Colors_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv0S
	List_1_t3628304265 * ___m_Uv0S_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv1S
	List_1_t3628304265 * ___m_Uv1S_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv2S
	List_1_t3628304265 * ___m_Uv2S_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv3S
	List_1_t3628304265 * ___m_Uv3S_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Normals
	List_1_t899420910 * ___m_Normals_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Tangents
	List_1_t496136383 * ___m_Tangents_7;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UI.VertexHelper::m_Indices
	List_1_t128053199 * ___m_Indices_8;

public:
	inline static int32_t get_offset_of_m_Positions_0() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Positions_0)); }
	inline List_1_t899420910 * get_m_Positions_0() const { return ___m_Positions_0; }
	inline List_1_t899420910 ** get_address_of_m_Positions_0() { return &___m_Positions_0; }
	inline void set_m_Positions_0(List_1_t899420910 * value)
	{
		___m_Positions_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Positions_0), value);
	}

	inline static int32_t get_offset_of_m_Colors_1() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Colors_1)); }
	inline List_1_t4072576034 * get_m_Colors_1() const { return ___m_Colors_1; }
	inline List_1_t4072576034 ** get_address_of_m_Colors_1() { return &___m_Colors_1; }
	inline void set_m_Colors_1(List_1_t4072576034 * value)
	{
		___m_Colors_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Colors_1), value);
	}

	inline static int32_t get_offset_of_m_Uv0S_2() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Uv0S_2)); }
	inline List_1_t3628304265 * get_m_Uv0S_2() const { return ___m_Uv0S_2; }
	inline List_1_t3628304265 ** get_address_of_m_Uv0S_2() { return &___m_Uv0S_2; }
	inline void set_m_Uv0S_2(List_1_t3628304265 * value)
	{
		___m_Uv0S_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uv0S_2), value);
	}

	inline static int32_t get_offset_of_m_Uv1S_3() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Uv1S_3)); }
	inline List_1_t3628304265 * get_m_Uv1S_3() const { return ___m_Uv1S_3; }
	inline List_1_t3628304265 ** get_address_of_m_Uv1S_3() { return &___m_Uv1S_3; }
	inline void set_m_Uv1S_3(List_1_t3628304265 * value)
	{
		___m_Uv1S_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uv1S_3), value);
	}

	inline static int32_t get_offset_of_m_Uv2S_4() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Uv2S_4)); }
	inline List_1_t3628304265 * get_m_Uv2S_4() const { return ___m_Uv2S_4; }
	inline List_1_t3628304265 ** get_address_of_m_Uv2S_4() { return &___m_Uv2S_4; }
	inline void set_m_Uv2S_4(List_1_t3628304265 * value)
	{
		___m_Uv2S_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uv2S_4), value);
	}

	inline static int32_t get_offset_of_m_Uv3S_5() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Uv3S_5)); }
	inline List_1_t3628304265 * get_m_Uv3S_5() const { return ___m_Uv3S_5; }
	inline List_1_t3628304265 ** get_address_of_m_Uv3S_5() { return &___m_Uv3S_5; }
	inline void set_m_Uv3S_5(List_1_t3628304265 * value)
	{
		___m_Uv3S_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uv3S_5), value);
	}

	inline static int32_t get_offset_of_m_Normals_6() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Normals_6)); }
	inline List_1_t899420910 * get_m_Normals_6() const { return ___m_Normals_6; }
	inline List_1_t899420910 ** get_address_of_m_Normals_6() { return &___m_Normals_6; }
	inline void set_m_Normals_6(List_1_t899420910 * value)
	{
		___m_Normals_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Normals_6), value);
	}

	inline static int32_t get_offset_of_m_Tangents_7() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Tangents_7)); }
	inline List_1_t496136383 * get_m_Tangents_7() const { return ___m_Tangents_7; }
	inline List_1_t496136383 ** get_address_of_m_Tangents_7() { return &___m_Tangents_7; }
	inline void set_m_Tangents_7(List_1_t496136383 * value)
	{
		___m_Tangents_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Tangents_7), value);
	}

	inline static int32_t get_offset_of_m_Indices_8() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Indices_8)); }
	inline List_1_t128053199 * get_m_Indices_8() const { return ___m_Indices_8; }
	inline List_1_t128053199 ** get_address_of_m_Indices_8() { return &___m_Indices_8; }
	inline void set_m_Indices_8(List_1_t128053199 * value)
	{
		___m_Indices_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_Indices_8), value);
	}
};

struct VertexHelper_t2453304189_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.UI.VertexHelper::s_DefaultTangent
	Vector4_t3319028937  ___s_DefaultTangent_9;
	// UnityEngine.Vector3 UnityEngine.UI.VertexHelper::s_DefaultNormal
	Vector3_t3722313464  ___s_DefaultNormal_10;

public:
	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_t3319028937  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_t3319028937 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_t3319028937  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_s_DefaultNormal_10() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189_StaticFields, ___s_DefaultNormal_10)); }
	inline Vector3_t3722313464  get_s_DefaultNormal_10() const { return ___s_DefaultNormal_10; }
	inline Vector3_t3722313464 * get_address_of_s_DefaultNormal_10() { return &___s_DefaultNormal_10; }
	inline void set_s_DefaultNormal_10(Vector3_t3722313464  value)
	{
		___s_DefaultNormal_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERTEXHELPER_T2453304189_H
#ifndef UIVERTEX_T4057497605_H
#define UIVERTEX_T4057497605_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UIVertex
struct  UIVertex_t4057497605 
{
public:
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_t3722313464  ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_t3722313464  ___normal_1;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_t3319028937  ___tangent_2;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_t2600501292  ___color_3;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv0
	Vector2_t2156229523  ___uv0_4;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv1
	Vector2_t2156229523  ___uv1_5;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv2
	Vector2_t2156229523  ___uv2_6;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv3
	Vector2_t2156229523  ___uv3_7;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___position_0)); }
	inline Vector3_t3722313464  get_position_0() const { return ___position_0; }
	inline Vector3_t3722313464 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t3722313464  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___normal_1)); }
	inline Vector3_t3722313464  get_normal_1() const { return ___normal_1; }
	inline Vector3_t3722313464 * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_t3722313464  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_tangent_2() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___tangent_2)); }
	inline Vector4_t3319028937  get_tangent_2() const { return ___tangent_2; }
	inline Vector4_t3319028937 * get_address_of_tangent_2() { return &___tangent_2; }
	inline void set_tangent_2(Vector4_t3319028937  value)
	{
		___tangent_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___color_3)); }
	inline Color32_t2600501292  get_color_3() const { return ___color_3; }
	inline Color32_t2600501292 * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(Color32_t2600501292  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_uv0_4() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___uv0_4)); }
	inline Vector2_t2156229523  get_uv0_4() const { return ___uv0_4; }
	inline Vector2_t2156229523 * get_address_of_uv0_4() { return &___uv0_4; }
	inline void set_uv0_4(Vector2_t2156229523  value)
	{
		___uv0_4 = value;
	}

	inline static int32_t get_offset_of_uv1_5() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___uv1_5)); }
	inline Vector2_t2156229523  get_uv1_5() const { return ___uv1_5; }
	inline Vector2_t2156229523 * get_address_of_uv1_5() { return &___uv1_5; }
	inline void set_uv1_5(Vector2_t2156229523  value)
	{
		___uv1_5 = value;
	}

	inline static int32_t get_offset_of_uv2_6() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___uv2_6)); }
	inline Vector2_t2156229523  get_uv2_6() const { return ___uv2_6; }
	inline Vector2_t2156229523 * get_address_of_uv2_6() { return &___uv2_6; }
	inline void set_uv2_6(Vector2_t2156229523  value)
	{
		___uv2_6 = value;
	}

	inline static int32_t get_offset_of_uv3_7() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___uv3_7)); }
	inline Vector2_t2156229523  get_uv3_7() const { return ___uv3_7; }
	inline Vector2_t2156229523 * get_address_of_uv3_7() { return &___uv3_7; }
	inline void set_uv3_7(Vector2_t2156229523  value)
	{
		___uv3_7 = value;
	}
};

struct UIVertex_t4057497605_StaticFields
{
public:
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_t2600501292  ___s_DefaultColor_8;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_t3319028937  ___s_DefaultTangent_9;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_t4057497605  ___simpleVert_10;

public:
	inline static int32_t get_offset_of_s_DefaultColor_8() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605_StaticFields, ___s_DefaultColor_8)); }
	inline Color32_t2600501292  get_s_DefaultColor_8() const { return ___s_DefaultColor_8; }
	inline Color32_t2600501292 * get_address_of_s_DefaultColor_8() { return &___s_DefaultColor_8; }
	inline void set_s_DefaultColor_8(Color32_t2600501292  value)
	{
		___s_DefaultColor_8 = value;
	}

	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_t3319028937  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_t3319028937 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_t3319028937  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_simpleVert_10() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605_StaticFields, ___simpleVert_10)); }
	inline UIVertex_t4057497605  get_simpleVert_10() const { return ___simpleVert_10; }
	inline UIVertex_t4057497605 * get_address_of_simpleVert_10() { return &___simpleVert_10; }
	inline void set_simpleVert_10(UIVertex_t4057497605  value)
	{
		___simpleVert_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIVERTEX_T4057497605_H
#ifndef MONOIOSTAT_T592533987_H
#define MONOIOSTAT_T592533987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MonoIOStat
struct  MonoIOStat_t592533987 
{
public:
	// System.String System.IO.MonoIOStat::Name
	String_t* ___Name_0;
	// System.IO.FileAttributes System.IO.MonoIOStat::Attributes
	int32_t ___Attributes_1;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_2;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_3;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_4;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_5;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_Attributes_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___Attributes_1)); }
	inline int32_t get_Attributes_1() const { return ___Attributes_1; }
	inline int32_t* get_address_of_Attributes_1() { return &___Attributes_1; }
	inline void set_Attributes_1(int32_t value)
	{
		___Attributes_1 = value;
	}

	inline static int32_t get_offset_of_Length_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___Length_2)); }
	inline int64_t get_Length_2() const { return ___Length_2; }
	inline int64_t* get_address_of_Length_2() { return &___Length_2; }
	inline void set_Length_2(int64_t value)
	{
		___Length_2 = value;
	}

	inline static int32_t get_offset_of_CreationTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___CreationTime_3)); }
	inline int64_t get_CreationTime_3() const { return ___CreationTime_3; }
	inline int64_t* get_address_of_CreationTime_3() { return &___CreationTime_3; }
	inline void set_CreationTime_3(int64_t value)
	{
		___CreationTime_3 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___LastAccessTime_4)); }
	inline int64_t get_LastAccessTime_4() const { return ___LastAccessTime_4; }
	inline int64_t* get_address_of_LastAccessTime_4() { return &___LastAccessTime_4; }
	inline void set_LastAccessTime_4(int64_t value)
	{
		___LastAccessTime_4 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_5() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___LastWriteTime_5)); }
	inline int64_t get_LastWriteTime_5() const { return ___LastWriteTime_5; }
	inline int64_t* get_address_of_LastWriteTime_5() { return &___LastWriteTime_5; }
	inline void set_LastWriteTime_5(int64_t value)
	{
		___LastWriteTime_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.IO.MonoIOStat
struct MonoIOStat_t592533987_marshaled_pinvoke
{
	char* ___Name_0;
	int32_t ___Attributes_1;
	int64_t ___Length_2;
	int64_t ___CreationTime_3;
	int64_t ___LastAccessTime_4;
	int64_t ___LastWriteTime_5;
};
// Native definition for COM marshalling of System.IO.MonoIOStat
struct MonoIOStat_t592533987_marshaled_com
{
	Il2CppChar* ___Name_0;
	int32_t ___Attributes_1;
	int64_t ___Length_2;
	int64_t ___CreationTime_3;
	int64_t ___LastAccessTime_4;
	int64_t ___LastWriteTime_5;
};
#endif // MONOIOSTAT_T592533987_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef POINTEREVENTDATA_T3807901092_H
#define POINTEREVENTDATA_T3807901092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_t3807901092  : public BaseEventData_t3903027533
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t1113636619 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t1113636619 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t1113636619 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t1113636619 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t1113636619 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t3360306849  ___U3CpointerCurrentRaycastU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t3360306849  ___U3CpointerPressRaycastU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t2585711361 * ___hovered_9;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_10;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_11;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t2156229523  ___U3CpositionU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t2156229523  ___U3CdeltaU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t2156229523  ___U3CpressPositionU3Ek__BackingField_14;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t3722313464  ___U3CworldPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t3722313464  ___U3CworldNormalU3Ek__BackingField_16;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_17;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t2156229523  ___U3CscrollDeltaU3Ek__BackingField_19;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_21;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_t1113636619 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_t1113636619 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_t1113636619 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerEnterU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___m_PointerPress_3)); }
	inline GameObject_t1113636619 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_t1113636619 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_t1113636619 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointerPress_3), value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_t1113636619 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_t1113636619 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_t1113636619 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClastPressU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_t1113636619 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_t1113636619 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_t1113636619 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CrawPointerPressU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_t1113636619 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_t1113636619 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_t1113636619 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerDragU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerCurrentRaycastU3Ek__BackingField_7)); }
	inline RaycastResult_t3360306849  get_U3CpointerCurrentRaycastU3Ek__BackingField_7() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline RaycastResult_t3360306849 * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_7(RaycastResult_t3360306849  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerPressRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t3360306849  get_U3CpointerPressRaycastU3Ek__BackingField_8() const { return ___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t3360306849 * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return &___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_8(RaycastResult_t3360306849  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_hovered_9() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___hovered_9)); }
	inline List_1_t2585711361 * get_hovered_9() const { return ___hovered_9; }
	inline List_1_t2585711361 ** get_address_of_hovered_9() { return &___hovered_9; }
	inline void set_hovered_9(List_1_t2585711361 * value)
	{
		___hovered_9 = value;
		Il2CppCodeGenWriteBarrier((&___hovered_9), value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CeligibleForClickU3Ek__BackingField_10)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_10() const { return ___U3CeligibleForClickU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_10() { return &___U3CeligibleForClickU3Ek__BackingField_10; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_10(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerIdU3Ek__BackingField_11)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_11() const { return ___U3CpointerIdU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_11() { return &___U3CpointerIdU3Ek__BackingField_11; }
	inline void set_U3CpointerIdU3Ek__BackingField_11(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpositionU3Ek__BackingField_12)); }
	inline Vector2_t2156229523  get_U3CpositionU3Ek__BackingField_12() const { return ___U3CpositionU3Ek__BackingField_12; }
	inline Vector2_t2156229523 * get_address_of_U3CpositionU3Ek__BackingField_12() { return &___U3CpositionU3Ek__BackingField_12; }
	inline void set_U3CpositionU3Ek__BackingField_12(Vector2_t2156229523  value)
	{
		___U3CpositionU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CdeltaU3Ek__BackingField_13)); }
	inline Vector2_t2156229523  get_U3CdeltaU3Ek__BackingField_13() const { return ___U3CdeltaU3Ek__BackingField_13; }
	inline Vector2_t2156229523 * get_address_of_U3CdeltaU3Ek__BackingField_13() { return &___U3CdeltaU3Ek__BackingField_13; }
	inline void set_U3CdeltaU3Ek__BackingField_13(Vector2_t2156229523  value)
	{
		___U3CdeltaU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpressPositionU3Ek__BackingField_14)); }
	inline Vector2_t2156229523  get_U3CpressPositionU3Ek__BackingField_14() const { return ___U3CpressPositionU3Ek__BackingField_14; }
	inline Vector2_t2156229523 * get_address_of_U3CpressPositionU3Ek__BackingField_14() { return &___U3CpressPositionU3Ek__BackingField_14; }
	inline void set_U3CpressPositionU3Ek__BackingField_14(Vector2_t2156229523  value)
	{
		___U3CpressPositionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CworldPositionU3Ek__BackingField_15)); }
	inline Vector3_t3722313464  get_U3CworldPositionU3Ek__BackingField_15() const { return ___U3CworldPositionU3Ek__BackingField_15; }
	inline Vector3_t3722313464 * get_address_of_U3CworldPositionU3Ek__BackingField_15() { return &___U3CworldPositionU3Ek__BackingField_15; }
	inline void set_U3CworldPositionU3Ek__BackingField_15(Vector3_t3722313464  value)
	{
		___U3CworldPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CworldNormalU3Ek__BackingField_16)); }
	inline Vector3_t3722313464  get_U3CworldNormalU3Ek__BackingField_16() const { return ___U3CworldNormalU3Ek__BackingField_16; }
	inline Vector3_t3722313464 * get_address_of_U3CworldNormalU3Ek__BackingField_16() { return &___U3CworldNormalU3Ek__BackingField_16; }
	inline void set_U3CworldNormalU3Ek__BackingField_16(Vector3_t3722313464  value)
	{
		___U3CworldNormalU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CclickTimeU3Ek__BackingField_17)); }
	inline float get_U3CclickTimeU3Ek__BackingField_17() const { return ___U3CclickTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_17() { return &___U3CclickTimeU3Ek__BackingField_17; }
	inline void set_U3CclickTimeU3Ek__BackingField_17(float value)
	{
		___U3CclickTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CclickCountU3Ek__BackingField_18)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_18() const { return ___U3CclickCountU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_18() { return &___U3CclickCountU3Ek__BackingField_18; }
	inline void set_U3CclickCountU3Ek__BackingField_18(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CscrollDeltaU3Ek__BackingField_19)); }
	inline Vector2_t2156229523  get_U3CscrollDeltaU3Ek__BackingField_19() const { return ___U3CscrollDeltaU3Ek__BackingField_19; }
	inline Vector2_t2156229523 * get_address_of_U3CscrollDeltaU3Ek__BackingField_19() { return &___U3CscrollDeltaU3Ek__BackingField_19; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_19(Vector2_t2156229523  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CuseDragThresholdU3Ek__BackingField_20)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_20() const { return ___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_20() { return &___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_20(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CdraggingU3Ek__BackingField_21)); }
	inline bool get_U3CdraggingU3Ek__BackingField_21() const { return ___U3CdraggingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_21() { return &___U3CdraggingU3Ek__BackingField_21; }
	inline void set_U3CdraggingU3Ek__BackingField_21(bool value)
	{
		___U3CdraggingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CbuttonU3Ek__BackingField_22)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_22() const { return ___U3CbuttonU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_22() { return &___U3CbuttonU3Ek__BackingField_22; }
	inline void set_U3CbuttonU3Ek__BackingField_22(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTEREVENTDATA_T3807901092_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef SPRITE_T280657092_H
#define SPRITE_T280657092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprite
struct  Sprite_t280657092  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITE_T280657092_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef FILESYSTEMINFO_T3745885336_H
#define FILESYSTEMINFO_T3745885336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileSystemInfo
struct  FileSystemInfo_t3745885336  : public MarshalByRefObject_t2760389100
{
public:
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_1;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_2;
	// System.IO.MonoIOStat System.IO.FileSystemInfo::stat
	MonoIOStat_t592533987  ___stat_3;
	// System.Boolean System.IO.FileSystemInfo::valid
	bool ___valid_4;

public:
	inline static int32_t get_offset_of_FullPath_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___FullPath_1)); }
	inline String_t* get_FullPath_1() const { return ___FullPath_1; }
	inline String_t** get_address_of_FullPath_1() { return &___FullPath_1; }
	inline void set_FullPath_1(String_t* value)
	{
		___FullPath_1 = value;
		Il2CppCodeGenWriteBarrier((&___FullPath_1), value);
	}

	inline static int32_t get_offset_of_OriginalPath_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___OriginalPath_2)); }
	inline String_t* get_OriginalPath_2() const { return ___OriginalPath_2; }
	inline String_t** get_address_of_OriginalPath_2() { return &___OriginalPath_2; }
	inline void set_OriginalPath_2(String_t* value)
	{
		___OriginalPath_2 = value;
		Il2CppCodeGenWriteBarrier((&___OriginalPath_2), value);
	}

	inline static int32_t get_offset_of_stat_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___stat_3)); }
	inline MonoIOStat_t592533987  get_stat_3() const { return ___stat_3; }
	inline MonoIOStat_t592533987 * get_address_of_stat_3() { return &___stat_3; }
	inline void set_stat_3(MonoIOStat_t592533987  value)
	{
		___stat_3 = value;
	}

	inline static int32_t get_offset_of_valid_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___valid_4)); }
	inline bool get_valid_4() const { return ___valid_4; }
	inline bool* get_address_of_valid_4() { return &___valid_4; }
	inline void set_valid_4(bool value)
	{
		___valid_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESYSTEMINFO_T3745885336_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef RENDERTEXTURE_T2108887433_H
#define RENDERTEXTURE_T2108887433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTexture
struct  RenderTexture_t2108887433  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTURE_T2108887433_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:
	// System.Int32 UnityEngine.Transform::<hierarchyCount>k__BackingField
	int32_t ___U3ChierarchyCountU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3ChierarchyCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Transform_t3600365921, ___U3ChierarchyCountU3Ek__BackingField_4)); }
	inline int32_t get_U3ChierarchyCountU3Ek__BackingField_4() const { return ___U3ChierarchyCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3ChierarchyCountU3Ek__BackingField_4() { return &___U3ChierarchyCountU3Ek__BackingField_4; }
	inline void set_U3ChierarchyCountU3Ek__BackingField_4(int32_t value)
	{
		___U3ChierarchyCountU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef VOIDDEL_T2721053205_H
#define VOIDDEL_T2721053205_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VoidDel
struct  VoidDel_t2721053205  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOIDDEL_T2721053205_H
#ifndef VOID_BOOLDEL_T1563598436_H
#define VOID_BOOLDEL_T1563598436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Void_BoolDel
struct  Void_BoolDel_t1563598436  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_BOOLDEL_T1563598436_H
#ifndef VOID_FLOATDEL_T2690466815_H
#define VOID_FLOATDEL_T2690466815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Void_FloatDel
struct  Void_FloatDel_t2690466815  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_FLOATDEL_T2690466815_H
#ifndef VOID_INTDEL_T3049649234_H
#define VOID_INTDEL_T3049649234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Void_IntDel
struct  Void_IntDel_t3049649234  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_INTDEL_T3049649234_H
#ifndef VOID_INTINTDEL_T3257518218_H
#define VOID_INTINTDEL_T3257518218_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Void_IntIntDel
struct  Void_IntIntDel_t3257518218  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_INTINTDEL_T3257518218_H
#ifndef VOID_TEXTURE2DDEL_T3998872356_H
#define VOID_TEXTURE2DDEL_T3998872356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Void_Texture2DDel
struct  Void_Texture2DDel_t3998872356  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_TEXTURE2DDEL_T3998872356_H
#ifndef VOID_VECTOR3DEL_T2915247505_H
#define VOID_VECTOR3DEL_T2915247505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Void_Vector3Del
struct  Void_Vector3Del_t2915247505  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_VECTOR3DEL_T2915247505_H
#ifndef DIRECTORYINFO_T35957480_H
#define DIRECTORYINFO_T35957480_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.DirectoryInfo
struct  DirectoryInfo_t35957480  : public FileSystemInfo_t3745885336
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_5;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_6;

public:
	inline static int32_t get_offset_of_current_5() { return static_cast<int32_t>(offsetof(DirectoryInfo_t35957480, ___current_5)); }
	inline String_t* get_current_5() const { return ___current_5; }
	inline String_t** get_address_of_current_5() { return &___current_5; }
	inline void set_current_5(String_t* value)
	{
		___current_5 = value;
		Il2CppCodeGenWriteBarrier((&___current_5), value);
	}

	inline static int32_t get_offset_of_parent_6() { return static_cast<int32_t>(offsetof(DirectoryInfo_t35957480, ___parent_6)); }
	inline String_t* get_parent_6() const { return ___parent_6; }
	inline String_t** get_address_of_parent_6() { return &___parent_6; }
	inline void set_parent_6(String_t* value)
	{
		___parent_6 = value;
		Il2CppCodeGenWriteBarrier((&___parent_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORYINFO_T35957480_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t190067161 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t190067161 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_4), value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t190067161 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t190067161 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_5), value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t190067161 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t190067161 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef COLLIDER2D_T2806799626_H
#define COLLIDER2D_T2806799626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider2D
struct  Collider2D_t2806799626  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER2D_T2806799626_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef RECTTRANSFORM_T3704657025_H
#define RECTTRANSFORM_T3704657025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t3704657025  : public Transform_t3600365921
{
public:
	// UnityEngine.Object UnityEngine.RectTransform::<drivenByObject>k__BackingField
	Object_t631007953 * ___U3CdrivenByObjectU3Ek__BackingField_6;
	// UnityEngine.DrivenTransformProperties UnityEngine.RectTransform::<drivenProperties>k__BackingField
	int32_t ___U3CdrivenPropertiesU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CdrivenByObjectU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025, ___U3CdrivenByObjectU3Ek__BackingField_6)); }
	inline Object_t631007953 * get_U3CdrivenByObjectU3Ek__BackingField_6() const { return ___U3CdrivenByObjectU3Ek__BackingField_6; }
	inline Object_t631007953 ** get_address_of_U3CdrivenByObjectU3Ek__BackingField_6() { return &___U3CdrivenByObjectU3Ek__BackingField_6; }
	inline void set_U3CdrivenByObjectU3Ek__BackingField_6(Object_t631007953 * value)
	{
		___U3CdrivenByObjectU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CdrivenByObjectU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CdrivenPropertiesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025, ___U3CdrivenPropertiesU3Ek__BackingField_7)); }
	inline int32_t get_U3CdrivenPropertiesU3Ek__BackingField_7() const { return ___U3CdrivenPropertiesU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CdrivenPropertiesU3Ek__BackingField_7() { return &___U3CdrivenPropertiesU3Ek__BackingField_7; }
	inline void set_U3CdrivenPropertiesU3Ek__BackingField_7(int32_t value)
	{
		___U3CdrivenPropertiesU3Ek__BackingField_7 = value;
	}
};

struct RectTransform_t3704657025_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1258266594 * ___reapplyDrivenProperties_5;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_5() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025_StaticFields, ___reapplyDrivenProperties_5)); }
	inline ReapplyDrivenProperties_t1258266594 * get_reapplyDrivenProperties_5() const { return ___reapplyDrivenProperties_5; }
	inline ReapplyDrivenProperties_t1258266594 ** get_address_of_reapplyDrivenProperties_5() { return &___reapplyDrivenProperties_5; }
	inline void set_reapplyDrivenProperties_5(ReapplyDrivenProperties_t1258266594 * value)
	{
		___reapplyDrivenProperties_5 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T3704657025_H
#ifndef BUTTOBJ_T1384809709_H
#define BUTTOBJ_T1384809709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ButtObj
struct  ButtObj_t1384809709  : public MonoBehaviour_t3962482529
{
public:
	// VoidDel ButtObj::Del
	VoidDel_t2721053205 * ___Del_4;

public:
	inline static int32_t get_offset_of_Del_4() { return static_cast<int32_t>(offsetof(ButtObj_t1384809709, ___Del_4)); }
	inline VoidDel_t2721053205 * get_Del_4() const { return ___Del_4; }
	inline VoidDel_t2721053205 ** get_address_of_Del_4() { return &___Del_4; }
	inline void set_Del_4(VoidDel_t2721053205 * value)
	{
		___Del_4 = value;
		Il2CppCodeGenWriteBarrier((&___Del_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTOBJ_T1384809709_H
#ifndef COLLIDERDETECT_T2731829106_H
#define COLLIDERDETECT_T2731829106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColliderDetect
struct  ColliderDetect_t2731829106  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Collider2D> ColliderDetect::AllCollider
	List_1_t4278874368 * ___AllCollider_4;
	// System.String ColliderDetect::ToTag
	String_t* ___ToTag_5;

public:
	inline static int32_t get_offset_of_AllCollider_4() { return static_cast<int32_t>(offsetof(ColliderDetect_t2731829106, ___AllCollider_4)); }
	inline List_1_t4278874368 * get_AllCollider_4() const { return ___AllCollider_4; }
	inline List_1_t4278874368 ** get_address_of_AllCollider_4() { return &___AllCollider_4; }
	inline void set_AllCollider_4(List_1_t4278874368 * value)
	{
		___AllCollider_4 = value;
		Il2CppCodeGenWriteBarrier((&___AllCollider_4), value);
	}

	inline static int32_t get_offset_of_ToTag_5() { return static_cast<int32_t>(offsetof(ColliderDetect_t2731829106, ___ToTag_5)); }
	inline String_t* get_ToTag_5() const { return ___ToTag_5; }
	inline String_t** get_address_of_ToTag_5() { return &___ToTag_5; }
	inline void set_ToTag_5(String_t* value)
	{
		___ToTag_5 = value;
		Il2CppCodeGenWriteBarrier((&___ToTag_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDERDETECT_T2731829106_H
#ifndef DICE_1_T3214026182_H
#define DICE_1_T3214026182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Dice`1<DiceGameObject>
struct  Dice_1_t3214026182  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32[] Dice`1::AllInt
	Int32U5BU5D_t385246372* ___AllInt_4;
	// T[] Dice`1::AllT
	DiceGameObjectU5BU5D_t1500657879* ___AllT_5;

public:
	inline static int32_t get_offset_of_AllInt_4() { return static_cast<int32_t>(offsetof(Dice_1_t3214026182, ___AllInt_4)); }
	inline Int32U5BU5D_t385246372* get_AllInt_4() const { return ___AllInt_4; }
	inline Int32U5BU5D_t385246372** get_address_of_AllInt_4() { return &___AllInt_4; }
	inline void set_AllInt_4(Int32U5BU5D_t385246372* value)
	{
		___AllInt_4 = value;
		Il2CppCodeGenWriteBarrier((&___AllInt_4), value);
	}

	inline static int32_t get_offset_of_AllT_5() { return static_cast<int32_t>(offsetof(Dice_1_t3214026182, ___AllT_5)); }
	inline DiceGameObjectU5BU5D_t1500657879* get_AllT_5() const { return ___AllT_5; }
	inline DiceGameObjectU5BU5D_t1500657879** get_address_of_AllT_5() { return &___AllT_5; }
	inline void set_AllT_5(DiceGameObjectU5BU5D_t1500657879* value)
	{
		___AllT_5 = value;
		Il2CppCodeGenWriteBarrier((&___AllT_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICE_1_T3214026182_H
#ifndef DICE_1_T1637289533_H
#define DICE_1_T1637289533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Dice`1<System.Int32>
struct  Dice_1_t1637289533  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32[] Dice`1::AllInt
	Int32U5BU5D_t385246372* ___AllInt_4;
	// T[] Dice`1::AllT
	Int32U5BU5D_t385246372* ___AllT_5;

public:
	inline static int32_t get_offset_of_AllInt_4() { return static_cast<int32_t>(offsetof(Dice_1_t1637289533, ___AllInt_4)); }
	inline Int32U5BU5D_t385246372* get_AllInt_4() const { return ___AllInt_4; }
	inline Int32U5BU5D_t385246372** get_address_of_AllInt_4() { return &___AllInt_4; }
	inline void set_AllInt_4(Int32U5BU5D_t385246372* value)
	{
		___AllInt_4 = value;
		Il2CppCodeGenWriteBarrier((&___AllInt_4), value);
	}

	inline static int32_t get_offset_of_AllT_5() { return static_cast<int32_t>(offsetof(Dice_1_t1637289533, ___AllT_5)); }
	inline Int32U5BU5D_t385246372* get_AllT_5() const { return ___AllT_5; }
	inline Int32U5BU5D_t385246372** get_address_of_AllT_5() { return &___AllT_5; }
	inline void set_AllT_5(Int32U5BU5D_t385246372* value)
	{
		___AllT_5 = value;
		Il2CppCodeGenWriteBarrier((&___AllT_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICE_1_T1637289533_H
#ifndef DICE_1_T533794469_H
#define DICE_1_T533794469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Dice`1<System.String>
struct  Dice_1_t533794469  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32[] Dice`1::AllInt
	Int32U5BU5D_t385246372* ___AllInt_4;
	// T[] Dice`1::AllT
	StringU5BU5D_t1281789340* ___AllT_5;

public:
	inline static int32_t get_offset_of_AllInt_4() { return static_cast<int32_t>(offsetof(Dice_1_t533794469, ___AllInt_4)); }
	inline Int32U5BU5D_t385246372* get_AllInt_4() const { return ___AllInt_4; }
	inline Int32U5BU5D_t385246372** get_address_of_AllInt_4() { return &___AllInt_4; }
	inline void set_AllInt_4(Int32U5BU5D_t385246372* value)
	{
		___AllInt_4 = value;
		Il2CppCodeGenWriteBarrier((&___AllInt_4), value);
	}

	inline static int32_t get_offset_of_AllT_5() { return static_cast<int32_t>(offsetof(Dice_1_t533794469, ___AllT_5)); }
	inline StringU5BU5D_t1281789340* get_AllT_5() const { return ___AllT_5; }
	inline StringU5BU5D_t1281789340** get_address_of_AllT_5() { return &___AllT_5; }
	inline void set_AllT_5(StringU5BU5D_t1281789340* value)
	{
		___AllT_5 = value;
		Il2CppCodeGenWriteBarrier((&___AllT_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICE_1_T533794469_H
#ifndef DICE_1_T4094947695_H
#define DICE_1_T4094947695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Dice`1<UnityEngine.GameObject>
struct  Dice_1_t4094947695  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32[] Dice`1::AllInt
	Int32U5BU5D_t385246372* ___AllInt_4;
	// T[] Dice`1::AllT
	GameObjectU5BU5D_t3328599146* ___AllT_5;

public:
	inline static int32_t get_offset_of_AllInt_4() { return static_cast<int32_t>(offsetof(Dice_1_t4094947695, ___AllInt_4)); }
	inline Int32U5BU5D_t385246372* get_AllInt_4() const { return ___AllInt_4; }
	inline Int32U5BU5D_t385246372** get_address_of_AllInt_4() { return &___AllInt_4; }
	inline void set_AllInt_4(Int32U5BU5D_t385246372* value)
	{
		___AllInt_4 = value;
		Il2CppCodeGenWriteBarrier((&___AllInt_4), value);
	}

	inline static int32_t get_offset_of_AllT_5() { return static_cast<int32_t>(offsetof(Dice_1_t4094947695, ___AllT_5)); }
	inline GameObjectU5BU5D_t3328599146* get_AllT_5() const { return ___AllT_5; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_AllT_5() { return &___AllT_5; }
	inline void set_AllT_5(GameObjectU5BU5D_t3328599146* value)
	{
		___AllT_5 = value;
		Il2CppCodeGenWriteBarrier((&___AllT_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICE_1_T4094947695_H
#ifndef FILECON_T3780093993_H
#define FILECON_T3780093993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FileCon
struct  FileCon_t3780093993  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILECON_T3780093993_H
#ifndef G0_PHOTO_UICON_T1912912122_H
#define G0_PHOTO_UICON_T1912912122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// G0_Photo_UICon
struct  G0_Photo_UICon_t1912912122  : public MonoBehaviour_t3962482529
{
public:
	// G0_Target_Data G0_Photo_UICon::Data
	G0_Target_Data_t1917875166 * ___Data_6;
	// G0_Photo_UICon/_UI G0_Photo_UICon::UI
	_UI_t4116017140  ___UI_7;
	// UnityEngine.Transform G0_Photo_UICon::Start_parent
	Transform_t3600365921 * ___Start_parent_8;

public:
	inline static int32_t get_offset_of_Data_6() { return static_cast<int32_t>(offsetof(G0_Photo_UICon_t1912912122, ___Data_6)); }
	inline G0_Target_Data_t1917875166 * get_Data_6() const { return ___Data_6; }
	inline G0_Target_Data_t1917875166 ** get_address_of_Data_6() { return &___Data_6; }
	inline void set_Data_6(G0_Target_Data_t1917875166 * value)
	{
		___Data_6 = value;
		Il2CppCodeGenWriteBarrier((&___Data_6), value);
	}

	inline static int32_t get_offset_of_UI_7() { return static_cast<int32_t>(offsetof(G0_Photo_UICon_t1912912122, ___UI_7)); }
	inline _UI_t4116017140  get_UI_7() const { return ___UI_7; }
	inline _UI_t4116017140 * get_address_of_UI_7() { return &___UI_7; }
	inline void set_UI_7(_UI_t4116017140  value)
	{
		___UI_7 = value;
	}

	inline static int32_t get_offset_of_Start_parent_8() { return static_cast<int32_t>(offsetof(G0_Photo_UICon_t1912912122, ___Start_parent_8)); }
	inline Transform_t3600365921 * get_Start_parent_8() const { return ___Start_parent_8; }
	inline Transform_t3600365921 ** get_address_of_Start_parent_8() { return &___Start_parent_8; }
	inline void set_Start_parent_8(Transform_t3600365921 * value)
	{
		___Start_parent_8 = value;
		Il2CppCodeGenWriteBarrier((&___Start_parent_8), value);
	}
};

struct G0_Photo_UICon_t1912912122_StaticFields
{
public:
	// System.Collections.Generic.List`1<G0_Photo_UICon> G0_Photo_UICon::AllPhoto
	List_1_t3384986864 * ___AllPhoto_4;
	// G0_Photo_UICon G0_Photo_UICon::Now
	G0_Photo_UICon_t1912912122 * ___Now_5;
	// Void_Vector3Del G0_Photo_UICon::<>f__am$cache0
	Void_Vector3Del_t2915247505 * ___U3CU3Ef__amU24cache0_9;

public:
	inline static int32_t get_offset_of_AllPhoto_4() { return static_cast<int32_t>(offsetof(G0_Photo_UICon_t1912912122_StaticFields, ___AllPhoto_4)); }
	inline List_1_t3384986864 * get_AllPhoto_4() const { return ___AllPhoto_4; }
	inline List_1_t3384986864 ** get_address_of_AllPhoto_4() { return &___AllPhoto_4; }
	inline void set_AllPhoto_4(List_1_t3384986864 * value)
	{
		___AllPhoto_4 = value;
		Il2CppCodeGenWriteBarrier((&___AllPhoto_4), value);
	}

	inline static int32_t get_offset_of_Now_5() { return static_cast<int32_t>(offsetof(G0_Photo_UICon_t1912912122_StaticFields, ___Now_5)); }
	inline G0_Photo_UICon_t1912912122 * get_Now_5() const { return ___Now_5; }
	inline G0_Photo_UICon_t1912912122 ** get_address_of_Now_5() { return &___Now_5; }
	inline void set_Now_5(G0_Photo_UICon_t1912912122 * value)
	{
		___Now_5 = value;
		Il2CppCodeGenWriteBarrier((&___Now_5), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_9() { return static_cast<int32_t>(offsetof(G0_Photo_UICon_t1912912122_StaticFields, ___U3CU3Ef__amU24cache0_9)); }
	inline Void_Vector3Del_t2915247505 * get_U3CU3Ef__amU24cache0_9() const { return ___U3CU3Ef__amU24cache0_9; }
	inline Void_Vector3Del_t2915247505 ** get_address_of_U3CU3Ef__amU24cache0_9() { return &___U3CU3Ef__amU24cache0_9; }
	inline void set_U3CU3Ef__amU24cache0_9(Void_Vector3Del_t2915247505 * value)
	{
		___U3CU3Ef__amU24cache0_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // G0_PHOTO_UICON_T1912912122_H
#ifndef G0_TARGET_UICON_T2128227474_H
#define G0_TARGET_UICON_T2128227474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// G0_Target_UICOn
struct  G0_Target_UICOn_t2128227474  : public MonoBehaviour_t3962482529
{
public:
	// G0_Target_Data G0_Target_UICOn::Data
	G0_Target_Data_t1917875166 * ___Data_6;
	// UnityEngine.Sprite G0_Target_UICOn::Open_Im
	Sprite_t280657092 * ___Open_Im_7;
	// UnityEngine.Sprite G0_Target_UICOn::Close_Im
	Sprite_t280657092 * ___Close_Im_8;
	// System.Boolean G0_Target_UICOn::IsOpen
	bool ___IsOpen_9;

public:
	inline static int32_t get_offset_of_Data_6() { return static_cast<int32_t>(offsetof(G0_Target_UICOn_t2128227474, ___Data_6)); }
	inline G0_Target_Data_t1917875166 * get_Data_6() const { return ___Data_6; }
	inline G0_Target_Data_t1917875166 ** get_address_of_Data_6() { return &___Data_6; }
	inline void set_Data_6(G0_Target_Data_t1917875166 * value)
	{
		___Data_6 = value;
		Il2CppCodeGenWriteBarrier((&___Data_6), value);
	}

	inline static int32_t get_offset_of_Open_Im_7() { return static_cast<int32_t>(offsetof(G0_Target_UICOn_t2128227474, ___Open_Im_7)); }
	inline Sprite_t280657092 * get_Open_Im_7() const { return ___Open_Im_7; }
	inline Sprite_t280657092 ** get_address_of_Open_Im_7() { return &___Open_Im_7; }
	inline void set_Open_Im_7(Sprite_t280657092 * value)
	{
		___Open_Im_7 = value;
		Il2CppCodeGenWriteBarrier((&___Open_Im_7), value);
	}

	inline static int32_t get_offset_of_Close_Im_8() { return static_cast<int32_t>(offsetof(G0_Target_UICOn_t2128227474, ___Close_Im_8)); }
	inline Sprite_t280657092 * get_Close_Im_8() const { return ___Close_Im_8; }
	inline Sprite_t280657092 ** get_address_of_Close_Im_8() { return &___Close_Im_8; }
	inline void set_Close_Im_8(Sprite_t280657092 * value)
	{
		___Close_Im_8 = value;
		Il2CppCodeGenWriteBarrier((&___Close_Im_8), value);
	}

	inline static int32_t get_offset_of_IsOpen_9() { return static_cast<int32_t>(offsetof(G0_Target_UICOn_t2128227474, ___IsOpen_9)); }
	inline bool get_IsOpen_9() const { return ___IsOpen_9; }
	inline bool* get_address_of_IsOpen_9() { return &___IsOpen_9; }
	inline void set_IsOpen_9(bool value)
	{
		___IsOpen_9 = value;
	}
};

struct G0_Target_UICOn_t2128227474_StaticFields
{
public:
	// System.Collections.Generic.List`1<G0_Target_UICOn> G0_Target_UICOn::AllTarget
	List_1_t3600302216 * ___AllTarget_4;
	// G0_Target_UICOn G0_Target_UICOn::Now
	G0_Target_UICOn_t2128227474 * ___Now_5;

public:
	inline static int32_t get_offset_of_AllTarget_4() { return static_cast<int32_t>(offsetof(G0_Target_UICOn_t2128227474_StaticFields, ___AllTarget_4)); }
	inline List_1_t3600302216 * get_AllTarget_4() const { return ___AllTarget_4; }
	inline List_1_t3600302216 ** get_address_of_AllTarget_4() { return &___AllTarget_4; }
	inline void set_AllTarget_4(List_1_t3600302216 * value)
	{
		___AllTarget_4 = value;
		Il2CppCodeGenWriteBarrier((&___AllTarget_4), value);
	}

	inline static int32_t get_offset_of_Now_5() { return static_cast<int32_t>(offsetof(G0_Target_UICOn_t2128227474_StaticFields, ___Now_5)); }
	inline G0_Target_UICOn_t2128227474 * get_Now_5() const { return ___Now_5; }
	inline G0_Target_UICOn_t2128227474 ** get_address_of_Now_5() { return &___Now_5; }
	inline void set_Now_5(G0_Target_UICOn_t2128227474 * value)
	{
		___Now_5 = value;
		Il2CppCodeGenWriteBarrier((&___Now_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // G0_TARGET_UICON_T2128227474_H
#ifndef GETGOOGLETAB_T2614510110_H
#define GETGOOGLETAB_T2614510110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GetGoogleTab
struct  GetGoogleTab_t2614510110  : public MonoBehaviour_t3962482529
{
public:
	// System.String GetGoogleTab::URL
	String_t* ___URL_4;
	// System.String GetGoogleTab::Id
	String_t* ___Id_5;
	// System.String GetGoogleTab::TabName
	String_t* ___TabName_6;
	// System.String GetGoogleTab::StringDate
	String_t* ___StringDate_7;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>> GetGoogleTab::mDate
	List_1_t496632877 * ___mDate_8;

public:
	inline static int32_t get_offset_of_URL_4() { return static_cast<int32_t>(offsetof(GetGoogleTab_t2614510110, ___URL_4)); }
	inline String_t* get_URL_4() const { return ___URL_4; }
	inline String_t** get_address_of_URL_4() { return &___URL_4; }
	inline void set_URL_4(String_t* value)
	{
		___URL_4 = value;
		Il2CppCodeGenWriteBarrier((&___URL_4), value);
	}

	inline static int32_t get_offset_of_Id_5() { return static_cast<int32_t>(offsetof(GetGoogleTab_t2614510110, ___Id_5)); }
	inline String_t* get_Id_5() const { return ___Id_5; }
	inline String_t** get_address_of_Id_5() { return &___Id_5; }
	inline void set_Id_5(String_t* value)
	{
		___Id_5 = value;
		Il2CppCodeGenWriteBarrier((&___Id_5), value);
	}

	inline static int32_t get_offset_of_TabName_6() { return static_cast<int32_t>(offsetof(GetGoogleTab_t2614510110, ___TabName_6)); }
	inline String_t* get_TabName_6() const { return ___TabName_6; }
	inline String_t** get_address_of_TabName_6() { return &___TabName_6; }
	inline void set_TabName_6(String_t* value)
	{
		___TabName_6 = value;
		Il2CppCodeGenWriteBarrier((&___TabName_6), value);
	}

	inline static int32_t get_offset_of_StringDate_7() { return static_cast<int32_t>(offsetof(GetGoogleTab_t2614510110, ___StringDate_7)); }
	inline String_t* get_StringDate_7() const { return ___StringDate_7; }
	inline String_t** get_address_of_StringDate_7() { return &___StringDate_7; }
	inline void set_StringDate_7(String_t* value)
	{
		___StringDate_7 = value;
		Il2CppCodeGenWriteBarrier((&___StringDate_7), value);
	}

	inline static int32_t get_offset_of_mDate_8() { return static_cast<int32_t>(offsetof(GetGoogleTab_t2614510110, ___mDate_8)); }
	inline List_1_t496632877 * get_mDate_8() const { return ___mDate_8; }
	inline List_1_t496632877 ** get_address_of_mDate_8() { return &___mDate_8; }
	inline void set_mDate_8(List_1_t496632877 * value)
	{
		___mDate_8 = value;
		Il2CppCodeGenWriteBarrier((&___mDate_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETGOOGLETAB_T2614510110_H
#ifndef MAINUICON_T3042406425_H
#define MAINUICON_T3042406425_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainUICon
struct  MainUICon_t3042406425  : public MonoBehaviour_t3962482529
{
public:
	// MainUICon/_UI MainUICon::UI
	_UI_t1677693085  ___UI_4;

public:
	inline static int32_t get_offset_of_UI_4() { return static_cast<int32_t>(offsetof(MainUICon_t3042406425, ___UI_4)); }
	inline _UI_t1677693085  get_UI_4() const { return ___UI_4; }
	inline _UI_t1677693085 * get_address_of_UI_4() { return &___UI_4; }
	inline void set_UI_4(_UI_t1677693085  value)
	{
		___UI_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAINUICON_T3042406425_H
#ifndef MYCALCULATE_T3992633026_H
#define MYCALCULATE_T3992633026_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MyCalculate
struct  MyCalculate_t3992633026  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MYCALCULATE_T3992633026_H
#ifndef NOTE_T2277534322_H
#define NOTE_T2277534322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Note
struct  Note_t2277534322  : public MonoBehaviour_t3962482529
{
public:
	// System.String Note::Text
	String_t* ___Text_4;

public:
	inline static int32_t get_offset_of_Text_4() { return static_cast<int32_t>(offsetof(Note_t2277534322, ___Text_4)); }
	inline String_t* get_Text_4() const { return ___Text_4; }
	inline String_t** get_address_of_Text_4() { return &___Text_4; }
	inline void set_Text_4(String_t* value)
	{
		___Text_4 = value;
		Il2CppCodeGenWriteBarrier((&___Text_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTE_T2277534322_H
#ifndef OBJARRAY_T2087238592_H
#define OBJARRAY_T2087238592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjArray
struct  ObjArray_t2087238592  : public MonoBehaviour_t3962482529
{
public:
	// ObjArray/Obj[] ObjArray::AllObj
	ObjU5BU5D_t778053183* ___AllObj_4;

public:
	inline static int32_t get_offset_of_AllObj_4() { return static_cast<int32_t>(offsetof(ObjArray_t2087238592, ___AllObj_4)); }
	inline ObjU5BU5D_t778053183* get_AllObj_4() const { return ___AllObj_4; }
	inline ObjU5BU5D_t778053183** get_address_of_AllObj_4() { return &___AllObj_4; }
	inline void set_AllObj_4(ObjU5BU5D_t778053183* value)
	{
		___AllObj_4 = value;
		Il2CppCodeGenWriteBarrier((&___AllObj_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJARRAY_T2087238592_H
#ifndef PAUSECON_T3747094933_H
#define PAUSECON_T3747094933_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PauseCon
struct  PauseCon_t3747094933  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Events.UnityEvent PauseCon::OpenPause
	UnityEvent_t2581268647 * ___OpenPause_4;
	// UnityEngine.Events.UnityEvent PauseCon::ClosePause
	UnityEvent_t2581268647 * ___ClosePause_5;

public:
	inline static int32_t get_offset_of_OpenPause_4() { return static_cast<int32_t>(offsetof(PauseCon_t3747094933, ___OpenPause_4)); }
	inline UnityEvent_t2581268647 * get_OpenPause_4() const { return ___OpenPause_4; }
	inline UnityEvent_t2581268647 ** get_address_of_OpenPause_4() { return &___OpenPause_4; }
	inline void set_OpenPause_4(UnityEvent_t2581268647 * value)
	{
		___OpenPause_4 = value;
		Il2CppCodeGenWriteBarrier((&___OpenPause_4), value);
	}

	inline static int32_t get_offset_of_ClosePause_5() { return static_cast<int32_t>(offsetof(PauseCon_t3747094933, ___ClosePause_5)); }
	inline UnityEvent_t2581268647 * get_ClosePause_5() const { return ___ClosePause_5; }
	inline UnityEvent_t2581268647 ** get_address_of_ClosePause_5() { return &___ClosePause_5; }
	inline void set_ClosePause_5(UnityEvent_t2581268647 * value)
	{
		___ClosePause_5 = value;
		Il2CppCodeGenWriteBarrier((&___ClosePause_5), value);
	}
};

struct PauseCon_t3747094933_StaticFields
{
public:
	// System.String PauseCon::Pass
	String_t* ___Pass_6;

public:
	inline static int32_t get_offset_of_Pass_6() { return static_cast<int32_t>(offsetof(PauseCon_t3747094933_StaticFields, ___Pass_6)); }
	inline String_t* get_Pass_6() const { return ___Pass_6; }
	inline String_t** get_address_of_Pass_6() { return &___Pass_6; }
	inline void set_Pass_6(String_t* value)
	{
		___Pass_6 = value;
		Il2CppCodeGenWriteBarrier((&___Pass_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PAUSECON_T3747094933_H
#ifndef PHOTOGRAPH_T2819091045_H
#define PHOTOGRAPH_T2819091045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photograph
struct  Photograph_t2819091045  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Camera Photograph::Ca
	Camera_t4157153871 * ___Ca_4;
	// UnityEngine.Vector2Int Photograph::ScreenSize
	Vector2Int_t3469998543  ___ScreenSize_5;
	// System.Int32 Photograph::CaH
	int32_t ___CaH_6;

public:
	inline static int32_t get_offset_of_Ca_4() { return static_cast<int32_t>(offsetof(Photograph_t2819091045, ___Ca_4)); }
	inline Camera_t4157153871 * get_Ca_4() const { return ___Ca_4; }
	inline Camera_t4157153871 ** get_address_of_Ca_4() { return &___Ca_4; }
	inline void set_Ca_4(Camera_t4157153871 * value)
	{
		___Ca_4 = value;
		Il2CppCodeGenWriteBarrier((&___Ca_4), value);
	}

	inline static int32_t get_offset_of_ScreenSize_5() { return static_cast<int32_t>(offsetof(Photograph_t2819091045, ___ScreenSize_5)); }
	inline Vector2Int_t3469998543  get_ScreenSize_5() const { return ___ScreenSize_5; }
	inline Vector2Int_t3469998543 * get_address_of_ScreenSize_5() { return &___ScreenSize_5; }
	inline void set_ScreenSize_5(Vector2Int_t3469998543  value)
	{
		___ScreenSize_5 = value;
	}

	inline static int32_t get_offset_of_CaH_6() { return static_cast<int32_t>(offsetof(Photograph_t2819091045, ___CaH_6)); }
	inline int32_t get_CaH_6() const { return ___CaH_6; }
	inline int32_t* get_address_of_CaH_6() { return &___CaH_6; }
	inline void set_CaH_6(int32_t value)
	{
		___CaH_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHOTOGRAPH_T2819091045_H
#ifndef RAYDETECT_T2170308910_H
#define RAYDETECT_T2170308910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RayDetect
struct  RayDetect_t2170308910  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Events.UnityEvent RayDetect::StartEvent
	UnityEvent_t2581268647 * ___StartEvent_4;
	// UnityEngine.Events.UnityEvent RayDetect::ExitEvent
	UnityEvent_t2581268647 * ___ExitEvent_5;
	// UnityEngine.Events.UnityEvent RayDetect::UpdateEvent
	UnityEvent_t2581268647 * ___UpdateEvent_6;
	// System.String RayDetect::ToTag
	String_t* ___ToTag_7;
	// UnityEngine.GameObject RayDetect::f
	GameObject_t1113636619 * ___f_8;
	// UnityEngine.Vector2 RayDetect::direction
	Vector2_t2156229523  ___direction_9;
	// System.Boolean RayDetect::_Open
	bool ____Open_10;
	// System.Single RayDetect::Leng
	float ___Leng_11;

public:
	inline static int32_t get_offset_of_StartEvent_4() { return static_cast<int32_t>(offsetof(RayDetect_t2170308910, ___StartEvent_4)); }
	inline UnityEvent_t2581268647 * get_StartEvent_4() const { return ___StartEvent_4; }
	inline UnityEvent_t2581268647 ** get_address_of_StartEvent_4() { return &___StartEvent_4; }
	inline void set_StartEvent_4(UnityEvent_t2581268647 * value)
	{
		___StartEvent_4 = value;
		Il2CppCodeGenWriteBarrier((&___StartEvent_4), value);
	}

	inline static int32_t get_offset_of_ExitEvent_5() { return static_cast<int32_t>(offsetof(RayDetect_t2170308910, ___ExitEvent_5)); }
	inline UnityEvent_t2581268647 * get_ExitEvent_5() const { return ___ExitEvent_5; }
	inline UnityEvent_t2581268647 ** get_address_of_ExitEvent_5() { return &___ExitEvent_5; }
	inline void set_ExitEvent_5(UnityEvent_t2581268647 * value)
	{
		___ExitEvent_5 = value;
		Il2CppCodeGenWriteBarrier((&___ExitEvent_5), value);
	}

	inline static int32_t get_offset_of_UpdateEvent_6() { return static_cast<int32_t>(offsetof(RayDetect_t2170308910, ___UpdateEvent_6)); }
	inline UnityEvent_t2581268647 * get_UpdateEvent_6() const { return ___UpdateEvent_6; }
	inline UnityEvent_t2581268647 ** get_address_of_UpdateEvent_6() { return &___UpdateEvent_6; }
	inline void set_UpdateEvent_6(UnityEvent_t2581268647 * value)
	{
		___UpdateEvent_6 = value;
		Il2CppCodeGenWriteBarrier((&___UpdateEvent_6), value);
	}

	inline static int32_t get_offset_of_ToTag_7() { return static_cast<int32_t>(offsetof(RayDetect_t2170308910, ___ToTag_7)); }
	inline String_t* get_ToTag_7() const { return ___ToTag_7; }
	inline String_t** get_address_of_ToTag_7() { return &___ToTag_7; }
	inline void set_ToTag_7(String_t* value)
	{
		___ToTag_7 = value;
		Il2CppCodeGenWriteBarrier((&___ToTag_7), value);
	}

	inline static int32_t get_offset_of_f_8() { return static_cast<int32_t>(offsetof(RayDetect_t2170308910, ___f_8)); }
	inline GameObject_t1113636619 * get_f_8() const { return ___f_8; }
	inline GameObject_t1113636619 ** get_address_of_f_8() { return &___f_8; }
	inline void set_f_8(GameObject_t1113636619 * value)
	{
		___f_8 = value;
		Il2CppCodeGenWriteBarrier((&___f_8), value);
	}

	inline static int32_t get_offset_of_direction_9() { return static_cast<int32_t>(offsetof(RayDetect_t2170308910, ___direction_9)); }
	inline Vector2_t2156229523  get_direction_9() const { return ___direction_9; }
	inline Vector2_t2156229523 * get_address_of_direction_9() { return &___direction_9; }
	inline void set_direction_9(Vector2_t2156229523  value)
	{
		___direction_9 = value;
	}

	inline static int32_t get_offset_of__Open_10() { return static_cast<int32_t>(offsetof(RayDetect_t2170308910, ____Open_10)); }
	inline bool get__Open_10() const { return ____Open_10; }
	inline bool* get_address_of__Open_10() { return &____Open_10; }
	inline void set__Open_10(bool value)
	{
		____Open_10 = value;
	}

	inline static int32_t get_offset_of_Leng_11() { return static_cast<int32_t>(offsetof(RayDetect_t2170308910, ___Leng_11)); }
	inline float get_Leng_11() const { return ___Leng_11; }
	inline float* get_address_of_Leng_11() { return &___Leng_11; }
	inline void set_Leng_11(float value)
	{
		___Leng_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYDETECT_T2170308910_H
#ifndef TESTCON_T50111880_H
#define TESTCON_T50111880_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TestCon
struct  TestCon_t50111880  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Events.UnityEvent[] TestCon::Events
	UnityEventU5BU5D_t4042265822* ___Events_4;

public:
	inline static int32_t get_offset_of_Events_4() { return static_cast<int32_t>(offsetof(TestCon_t50111880, ___Events_4)); }
	inline UnityEventU5BU5D_t4042265822* get_Events_4() const { return ___Events_4; }
	inline UnityEventU5BU5D_t4042265822** get_address_of_Events_4() { return &___Events_4; }
	inline void set_Events_4(UnityEventU5BU5D_t4042265822* value)
	{
		___Events_4 = value;
		Il2CppCodeGenWriteBarrier((&___Events_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TESTCON_T50111880_H
#ifndef TIMELOOP_T468784922_H
#define TIMELOOP_T468784922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TimeLoop
struct  TimeLoop_t468784922  : public MonoBehaviour_t3962482529
{
public:
	// Void_IntDel TimeLoop::Del
	Void_IntDel_t3049649234 * ___Del_4;
	// UnityEngine.Events.UnityEvent TimeLoop::TheEvent
	UnityEvent_t2581268647 * ___TheEvent_5;
	// System.Single TimeLoop::Delay
	float ___Delay_6;
	// System.Single TimeLoop::Time_F
	float ___Time_F_7;
	// System.Int32 TimeLoop::n
	int32_t ___n_8;
	// System.Boolean TimeLoop::IsOpen
	bool ___IsOpen_9;
	// System.Single TimeLoop::Next_Time
	float ___Next_Time_10;

public:
	inline static int32_t get_offset_of_Del_4() { return static_cast<int32_t>(offsetof(TimeLoop_t468784922, ___Del_4)); }
	inline Void_IntDel_t3049649234 * get_Del_4() const { return ___Del_4; }
	inline Void_IntDel_t3049649234 ** get_address_of_Del_4() { return &___Del_4; }
	inline void set_Del_4(Void_IntDel_t3049649234 * value)
	{
		___Del_4 = value;
		Il2CppCodeGenWriteBarrier((&___Del_4), value);
	}

	inline static int32_t get_offset_of_TheEvent_5() { return static_cast<int32_t>(offsetof(TimeLoop_t468784922, ___TheEvent_5)); }
	inline UnityEvent_t2581268647 * get_TheEvent_5() const { return ___TheEvent_5; }
	inline UnityEvent_t2581268647 ** get_address_of_TheEvent_5() { return &___TheEvent_5; }
	inline void set_TheEvent_5(UnityEvent_t2581268647 * value)
	{
		___TheEvent_5 = value;
		Il2CppCodeGenWriteBarrier((&___TheEvent_5), value);
	}

	inline static int32_t get_offset_of_Delay_6() { return static_cast<int32_t>(offsetof(TimeLoop_t468784922, ___Delay_6)); }
	inline float get_Delay_6() const { return ___Delay_6; }
	inline float* get_address_of_Delay_6() { return &___Delay_6; }
	inline void set_Delay_6(float value)
	{
		___Delay_6 = value;
	}

	inline static int32_t get_offset_of_Time_F_7() { return static_cast<int32_t>(offsetof(TimeLoop_t468784922, ___Time_F_7)); }
	inline float get_Time_F_7() const { return ___Time_F_7; }
	inline float* get_address_of_Time_F_7() { return &___Time_F_7; }
	inline void set_Time_F_7(float value)
	{
		___Time_F_7 = value;
	}

	inline static int32_t get_offset_of_n_8() { return static_cast<int32_t>(offsetof(TimeLoop_t468784922, ___n_8)); }
	inline int32_t get_n_8() const { return ___n_8; }
	inline int32_t* get_address_of_n_8() { return &___n_8; }
	inline void set_n_8(int32_t value)
	{
		___n_8 = value;
	}

	inline static int32_t get_offset_of_IsOpen_9() { return static_cast<int32_t>(offsetof(TimeLoop_t468784922, ___IsOpen_9)); }
	inline bool get_IsOpen_9() const { return ___IsOpen_9; }
	inline bool* get_address_of_IsOpen_9() { return &___IsOpen_9; }
	inline void set_IsOpen_9(bool value)
	{
		___IsOpen_9 = value;
	}

	inline static int32_t get_offset_of_Next_Time_10() { return static_cast<int32_t>(offsetof(TimeLoop_t468784922, ___Next_Time_10)); }
	inline float get_Next_Time_10() const { return ___Next_Time_10; }
	inline float* get_address_of_Next_Time_10() { return &___Next_Time_10; }
	inline void set_Next_Time_10(float value)
	{
		___Next_Time_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMELOOP_T468784922_H
#ifndef TWEEN_T251520763_H
#define TWEEN_T251520763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tween
struct  Tween_t251520763  : public MonoBehaviour_t3962482529
{
public:
	// Tween/Tween_Type Tween::Type
	int32_t ___Type_4;
	// UnityEngine.AnimationCurve Tween::animationCurve
	AnimationCurve_t3046754366 * ___animationCurve_5;
	// Void_FloatDel Tween::Del
	Void_FloatDel_t2690466815 * ___Del_6;
	// VoidDel Tween::End_Del
	VoidDel_t2721053205 * ___End_Del_7;
	// System.Single Tween::Time_Length
	float ___Time_Length_8;
	// System.Single Tween::_f
	float ____f_9;
	// System.Int32 Tween::Mod
	int32_t ___Mod_10;
	// System.Single Tween::Start_Time
	float ___Start_Time_11;

public:
	inline static int32_t get_offset_of_Type_4() { return static_cast<int32_t>(offsetof(Tween_t251520763, ___Type_4)); }
	inline int32_t get_Type_4() const { return ___Type_4; }
	inline int32_t* get_address_of_Type_4() { return &___Type_4; }
	inline void set_Type_4(int32_t value)
	{
		___Type_4 = value;
	}

	inline static int32_t get_offset_of_animationCurve_5() { return static_cast<int32_t>(offsetof(Tween_t251520763, ___animationCurve_5)); }
	inline AnimationCurve_t3046754366 * get_animationCurve_5() const { return ___animationCurve_5; }
	inline AnimationCurve_t3046754366 ** get_address_of_animationCurve_5() { return &___animationCurve_5; }
	inline void set_animationCurve_5(AnimationCurve_t3046754366 * value)
	{
		___animationCurve_5 = value;
		Il2CppCodeGenWriteBarrier((&___animationCurve_5), value);
	}

	inline static int32_t get_offset_of_Del_6() { return static_cast<int32_t>(offsetof(Tween_t251520763, ___Del_6)); }
	inline Void_FloatDel_t2690466815 * get_Del_6() const { return ___Del_6; }
	inline Void_FloatDel_t2690466815 ** get_address_of_Del_6() { return &___Del_6; }
	inline void set_Del_6(Void_FloatDel_t2690466815 * value)
	{
		___Del_6 = value;
		Il2CppCodeGenWriteBarrier((&___Del_6), value);
	}

	inline static int32_t get_offset_of_End_Del_7() { return static_cast<int32_t>(offsetof(Tween_t251520763, ___End_Del_7)); }
	inline VoidDel_t2721053205 * get_End_Del_7() const { return ___End_Del_7; }
	inline VoidDel_t2721053205 ** get_address_of_End_Del_7() { return &___End_Del_7; }
	inline void set_End_Del_7(VoidDel_t2721053205 * value)
	{
		___End_Del_7 = value;
		Il2CppCodeGenWriteBarrier((&___End_Del_7), value);
	}

	inline static int32_t get_offset_of_Time_Length_8() { return static_cast<int32_t>(offsetof(Tween_t251520763, ___Time_Length_8)); }
	inline float get_Time_Length_8() const { return ___Time_Length_8; }
	inline float* get_address_of_Time_Length_8() { return &___Time_Length_8; }
	inline void set_Time_Length_8(float value)
	{
		___Time_Length_8 = value;
	}

	inline static int32_t get_offset_of__f_9() { return static_cast<int32_t>(offsetof(Tween_t251520763, ____f_9)); }
	inline float get__f_9() const { return ____f_9; }
	inline float* get_address_of__f_9() { return &____f_9; }
	inline void set__f_9(float value)
	{
		____f_9 = value;
	}

	inline static int32_t get_offset_of_Mod_10() { return static_cast<int32_t>(offsetof(Tween_t251520763, ___Mod_10)); }
	inline int32_t get_Mod_10() const { return ___Mod_10; }
	inline int32_t* get_address_of_Mod_10() { return &___Mod_10; }
	inline void set_Mod_10(int32_t value)
	{
		___Mod_10 = value;
	}

	inline static int32_t get_offset_of_Start_Time_11() { return static_cast<int32_t>(offsetof(Tween_t251520763, ___Start_Time_11)); }
	inline float get_Start_Time_11() const { return ___Start_Time_11; }
	inline float* get_address_of_Start_Time_11() { return &___Start_Time_11; }
	inline void set_Start_Time_11(float value)
	{
		___Start_Time_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWEEN_T251520763_H
#ifndef TXTCON_T3340380335_H
#define TXTCON_T3340380335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TxtCon
struct  TxtCon_t3340380335  : public MonoBehaviour_t3962482529
{
public:
	// TxtCon/PathObj[] TxtCon::PathObjs
	PathObjU5BU5D_t895737483* ___PathObjs_4;

public:
	inline static int32_t get_offset_of_PathObjs_4() { return static_cast<int32_t>(offsetof(TxtCon_t3340380335, ___PathObjs_4)); }
	inline PathObjU5BU5D_t895737483* get_PathObjs_4() const { return ___PathObjs_4; }
	inline PathObjU5BU5D_t895737483** get_address_of_PathObjs_4() { return &___PathObjs_4; }
	inline void set_PathObjs_4(PathObjU5BU5D_t895737483* value)
	{
		___PathObjs_4 = value;
		Il2CppCodeGenWriteBarrier((&___PathObjs_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TXTCON_T3340380335_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef WEBTEST_T1430771800_H
#define WEBTEST_T1430771800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebTest
struct  WebTest_t1430771800  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text WebTest::text
	Text_t1901882714 * ___text_4;

public:
	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(WebTest_t1430771800, ___text_4)); }
	inline Text_t1901882714 * get_text_4() const { return ___text_4; }
	inline Text_t1901882714 ** get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(Text_t1901882714 * value)
	{
		___text_4 = value;
		Il2CppCodeGenWriteBarrier((&___text_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBTEST_T1430771800_H
#ifndef BUTTONTEST_T3454622828_H
#define BUTTONTEST_T3454622828_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ButtonTest
struct  ButtonTest_t3454622828  : public ButtObj_t1384809709
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTONTEST_T3454622828_H
#ifndef DICEDICEGAMEOBJECT_T4246336230_H
#define DICEDICEGAMEOBJECT_T4246336230_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DiceDiceGameObject
struct  DiceDiceGameObject_t4246336230  : public Dice_1_t3214026182
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICEDICEGAMEOBJECT_T4246336230_H
#ifndef DICEGAMEOBJECT_T232715106_H
#define DICEGAMEOBJECT_T232715106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DiceGameObject
struct  DiceGameObject_t232715106  : public Dice_1_t4094947695
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICEGAMEOBJECT_T232715106_H
#ifndef DICEINT_T728545408_H
#define DICEINT_T728545408_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DiceInt
struct  DiceInt_t728545408  : public Dice_1_t1637289533
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICEINT_T728545408_H
#ifndef DICESTRING_T1417265547_H
#define DICESTRING_T1417265547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DiceString
struct  DiceString_t1417265547  : public Dice_1_t533794469
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICESTRING_T1417265547_H
#ifndef DRAGBUTT_T1708563181_H
#define DRAGBUTT_T1708563181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragButt
struct  DragButt_t1708563181  : public ButtObj_t1384809709
{
public:
	// UnityEngine.Vector3 DragButt::Start_V3
	Vector3_t3722313464  ___Start_V3_5;
	// UnityEngine.Vector3 DragButt::End_V3
	Vector3_t3722313464  ___End_V3_6;
	// Void_Vector3Del DragButt::Start_Del
	Void_Vector3Del_t2915247505 * ___Start_Del_7;
	// Void_Vector3Del DragButt::Update_Del
	Void_Vector3Del_t2915247505 * ___Update_Del_8;
	// Void_Vector3Del DragButt::End_Del
	Void_Vector3Del_t2915247505 * ___End_Del_9;

public:
	inline static int32_t get_offset_of_Start_V3_5() { return static_cast<int32_t>(offsetof(DragButt_t1708563181, ___Start_V3_5)); }
	inline Vector3_t3722313464  get_Start_V3_5() const { return ___Start_V3_5; }
	inline Vector3_t3722313464 * get_address_of_Start_V3_5() { return &___Start_V3_5; }
	inline void set_Start_V3_5(Vector3_t3722313464  value)
	{
		___Start_V3_5 = value;
	}

	inline static int32_t get_offset_of_End_V3_6() { return static_cast<int32_t>(offsetof(DragButt_t1708563181, ___End_V3_6)); }
	inline Vector3_t3722313464  get_End_V3_6() const { return ___End_V3_6; }
	inline Vector3_t3722313464 * get_address_of_End_V3_6() { return &___End_V3_6; }
	inline void set_End_V3_6(Vector3_t3722313464  value)
	{
		___End_V3_6 = value;
	}

	inline static int32_t get_offset_of_Start_Del_7() { return static_cast<int32_t>(offsetof(DragButt_t1708563181, ___Start_Del_7)); }
	inline Void_Vector3Del_t2915247505 * get_Start_Del_7() const { return ___Start_Del_7; }
	inline Void_Vector3Del_t2915247505 ** get_address_of_Start_Del_7() { return &___Start_Del_7; }
	inline void set_Start_Del_7(Void_Vector3Del_t2915247505 * value)
	{
		___Start_Del_7 = value;
		Il2CppCodeGenWriteBarrier((&___Start_Del_7), value);
	}

	inline static int32_t get_offset_of_Update_Del_8() { return static_cast<int32_t>(offsetof(DragButt_t1708563181, ___Update_Del_8)); }
	inline Void_Vector3Del_t2915247505 * get_Update_Del_8() const { return ___Update_Del_8; }
	inline Void_Vector3Del_t2915247505 ** get_address_of_Update_Del_8() { return &___Update_Del_8; }
	inline void set_Update_Del_8(Void_Vector3Del_t2915247505 * value)
	{
		___Update_Del_8 = value;
		Il2CppCodeGenWriteBarrier((&___Update_Del_8), value);
	}

	inline static int32_t get_offset_of_End_Del_9() { return static_cast<int32_t>(offsetof(DragButt_t1708563181, ___End_Del_9)); }
	inline Void_Vector3Del_t2915247505 * get_End_Del_9() const { return ___End_Del_9; }
	inline Void_Vector3Del_t2915247505 ** get_address_of_End_Del_9() { return &___End_Del_9; }
	inline void set_End_Del_9(Void_Vector3Del_t2915247505 * value)
	{
		___End_Del_9 = value;
		Il2CppCodeGenWriteBarrier((&___End_Del_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRAGBUTT_T1708563181_H
#ifndef G0_END_UICON_T3782924102_H
#define G0_END_UICON_T3782924102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// G0_End_UICon
struct  G0_End_UICon_t3782924102  : public ObjArray_t2087238592
{
public:
	// G0_End_UICon/_UI G0_End_UICon::UI
	_UI_t1688782487  ___UI_5;

public:
	inline static int32_t get_offset_of_UI_5() { return static_cast<int32_t>(offsetof(G0_End_UICon_t3782924102, ___UI_5)); }
	inline _UI_t1688782487  get_UI_5() const { return ___UI_5; }
	inline _UI_t1688782487 * get_address_of_UI_5() { return &___UI_5; }
	inline void set_UI_5(_UI_t1688782487  value)
	{
		___UI_5 = value;
	}
};

struct G0_End_UICon_t3782924102_StaticFields
{
public:
	// VoidDel G0_End_UICon::<>f__am$cache0
	VoidDel_t2721053205 * ___U3CU3Ef__amU24cache0_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_6() { return static_cast<int32_t>(offsetof(G0_End_UICon_t3782924102_StaticFields, ___U3CU3Ef__amU24cache0_6)); }
	inline VoidDel_t2721053205 * get_U3CU3Ef__amU24cache0_6() const { return ___U3CU3Ef__amU24cache0_6; }
	inline VoidDel_t2721053205 ** get_address_of_U3CU3Ef__amU24cache0_6() { return &___U3CU3Ef__amU24cache0_6; }
	inline void set_U3CU3Ef__amU24cache0_6(VoidDel_t2721053205 * value)
	{
		___U3CU3Ef__amU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // G0_END_UICON_T3782924102_H
#ifndef G0_MAIN_UICON_T3463799450_H
#define G0_MAIN_UICON_T3463799450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// G0_Main_UICon
struct  G0_Main_UICon_t3463799450  : public ObjArray_t2087238592
{
public:
	// G0_Main_UICon/_UI G0_Main_UICon::UI
	_UI_t1624633473  ___UI_5;

public:
	inline static int32_t get_offset_of_UI_5() { return static_cast<int32_t>(offsetof(G0_Main_UICon_t3463799450, ___UI_5)); }
	inline _UI_t1624633473  get_UI_5() const { return ___UI_5; }
	inline _UI_t1624633473 * get_address_of_UI_5() { return &___UI_5; }
	inline void set_UI_5(_UI_t1624633473  value)
	{
		___UI_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // G0_MAIN_UICON_T3463799450_H
#ifndef G0_PLAY_UICON_T46452308_H
#define G0_PLAY_UICON_T46452308_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// G0_Play_UICon
struct  G0_Play_UICon_t46452308  : public ObjArray_t2087238592
{
public:
	// G0_Play_UICon/_UI G0_Play_UICon::UI
	_UI_t3927201216  ___UI_7;
	// G0_Lv_Data[] G0_Play_UICon::All_Lv_Data
	G0_Lv_DataU5BU5D_t720604504* ___All_Lv_Data_8;
	// System.Collections.Generic.List`1<G0_Photo_UICon> G0_Play_UICon::All_Photo
	List_1_t3384986864 * ___All_Photo_9;
	// System.Collections.Generic.List`1<G0_Target_UICOn> G0_Play_UICon::All_Target
	List_1_t3600302216 * ___All_Target_10;
	// System.Int32 G0_Play_UICon::Score
	int32_t ___Score_11;

public:
	inline static int32_t get_offset_of_UI_7() { return static_cast<int32_t>(offsetof(G0_Play_UICon_t46452308, ___UI_7)); }
	inline _UI_t3927201216  get_UI_7() const { return ___UI_7; }
	inline _UI_t3927201216 * get_address_of_UI_7() { return &___UI_7; }
	inline void set_UI_7(_UI_t3927201216  value)
	{
		___UI_7 = value;
	}

	inline static int32_t get_offset_of_All_Lv_Data_8() { return static_cast<int32_t>(offsetof(G0_Play_UICon_t46452308, ___All_Lv_Data_8)); }
	inline G0_Lv_DataU5BU5D_t720604504* get_All_Lv_Data_8() const { return ___All_Lv_Data_8; }
	inline G0_Lv_DataU5BU5D_t720604504** get_address_of_All_Lv_Data_8() { return &___All_Lv_Data_8; }
	inline void set_All_Lv_Data_8(G0_Lv_DataU5BU5D_t720604504* value)
	{
		___All_Lv_Data_8 = value;
		Il2CppCodeGenWriteBarrier((&___All_Lv_Data_8), value);
	}

	inline static int32_t get_offset_of_All_Photo_9() { return static_cast<int32_t>(offsetof(G0_Play_UICon_t46452308, ___All_Photo_9)); }
	inline List_1_t3384986864 * get_All_Photo_9() const { return ___All_Photo_9; }
	inline List_1_t3384986864 ** get_address_of_All_Photo_9() { return &___All_Photo_9; }
	inline void set_All_Photo_9(List_1_t3384986864 * value)
	{
		___All_Photo_9 = value;
		Il2CppCodeGenWriteBarrier((&___All_Photo_9), value);
	}

	inline static int32_t get_offset_of_All_Target_10() { return static_cast<int32_t>(offsetof(G0_Play_UICon_t46452308, ___All_Target_10)); }
	inline List_1_t3600302216 * get_All_Target_10() const { return ___All_Target_10; }
	inline List_1_t3600302216 ** get_address_of_All_Target_10() { return &___All_Target_10; }
	inline void set_All_Target_10(List_1_t3600302216 * value)
	{
		___All_Target_10 = value;
		Il2CppCodeGenWriteBarrier((&___All_Target_10), value);
	}

	inline static int32_t get_offset_of_Score_11() { return static_cast<int32_t>(offsetof(G0_Play_UICon_t46452308, ___Score_11)); }
	inline int32_t get_Score_11() const { return ___Score_11; }
	inline int32_t* get_address_of_Score_11() { return &___Score_11; }
	inline void set_Score_11(int32_t value)
	{
		___Score_11 = value;
	}
};

struct G0_Play_UICon_t46452308_StaticFields
{
public:
	// G0_Play_UICon G0_Play_UICon::_
	G0_Play_UICon_t46452308 * _____5;
	// System.Int32 G0_Play_UICon::Now_Lv
	int32_t ___Now_Lv_6;
	// System.Int32[] G0_Play_UICon::Now_Traget_Nobs
	Int32U5BU5D_t385246372* ___Now_Traget_Nobs_12;

public:
	inline static int32_t get_offset_of___5() { return static_cast<int32_t>(offsetof(G0_Play_UICon_t46452308_StaticFields, _____5)); }
	inline G0_Play_UICon_t46452308 * get___5() const { return _____5; }
	inline G0_Play_UICon_t46452308 ** get_address_of___5() { return &_____5; }
	inline void set___5(G0_Play_UICon_t46452308 * value)
	{
		_____5 = value;
		Il2CppCodeGenWriteBarrier((&_____5), value);
	}

	inline static int32_t get_offset_of_Now_Lv_6() { return static_cast<int32_t>(offsetof(G0_Play_UICon_t46452308_StaticFields, ___Now_Lv_6)); }
	inline int32_t get_Now_Lv_6() const { return ___Now_Lv_6; }
	inline int32_t* get_address_of_Now_Lv_6() { return &___Now_Lv_6; }
	inline void set_Now_Lv_6(int32_t value)
	{
		___Now_Lv_6 = value;
	}

	inline static int32_t get_offset_of_Now_Traget_Nobs_12() { return static_cast<int32_t>(offsetof(G0_Play_UICon_t46452308_StaticFields, ___Now_Traget_Nobs_12)); }
	inline Int32U5BU5D_t385246372* get_Now_Traget_Nobs_12() const { return ___Now_Traget_Nobs_12; }
	inline Int32U5BU5D_t385246372** get_address_of_Now_Traget_Nobs_12() { return &___Now_Traget_Nobs_12; }
	inline void set_Now_Traget_Nobs_12(Int32U5BU5D_t385246372* value)
	{
		___Now_Traget_Nobs_12 = value;
		Il2CppCodeGenWriteBarrier((&___Now_Traget_Nobs_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // G0_PLAY_UICON_T46452308_H
#ifndef SIZEBUTT_T245973045_H
#define SIZEBUTT_T245973045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SizeButt
struct  SizeButt_t245973045  : public ButtObj_t1384809709
{
public:
	// UnityEngine.RectTransform SizeButt::Obj
	RectTransform_t3704657025 * ___Obj_5;
	// SizeButt/SizeType SizeButt::sizeType
	int32_t ___sizeType_6;
	// UnityEngine.Vector3 SizeButt::OpenSize
	Vector3_t3722313464  ___OpenSize_7;
	// UnityEngine.Vector3 SizeButt::CloseSize
	Vector3_t3722313464  ___CloseSize_8;

public:
	inline static int32_t get_offset_of_Obj_5() { return static_cast<int32_t>(offsetof(SizeButt_t245973045, ___Obj_5)); }
	inline RectTransform_t3704657025 * get_Obj_5() const { return ___Obj_5; }
	inline RectTransform_t3704657025 ** get_address_of_Obj_5() { return &___Obj_5; }
	inline void set_Obj_5(RectTransform_t3704657025 * value)
	{
		___Obj_5 = value;
		Il2CppCodeGenWriteBarrier((&___Obj_5), value);
	}

	inline static int32_t get_offset_of_sizeType_6() { return static_cast<int32_t>(offsetof(SizeButt_t245973045, ___sizeType_6)); }
	inline int32_t get_sizeType_6() const { return ___sizeType_6; }
	inline int32_t* get_address_of_sizeType_6() { return &___sizeType_6; }
	inline void set_sizeType_6(int32_t value)
	{
		___sizeType_6 = value;
	}

	inline static int32_t get_offset_of_OpenSize_7() { return static_cast<int32_t>(offsetof(SizeButt_t245973045, ___OpenSize_7)); }
	inline Vector3_t3722313464  get_OpenSize_7() const { return ___OpenSize_7; }
	inline Vector3_t3722313464 * get_address_of_OpenSize_7() { return &___OpenSize_7; }
	inline void set_OpenSize_7(Vector3_t3722313464  value)
	{
		___OpenSize_7 = value;
	}

	inline static int32_t get_offset_of_CloseSize_8() { return static_cast<int32_t>(offsetof(SizeButt_t245973045, ___CloseSize_8)); }
	inline Vector3_t3722313464  get_CloseSize_8() const { return ___CloseSize_8; }
	inline Vector3_t3722313464 * get_address_of_CloseSize_8() { return &___CloseSize_8; }
	inline void set_CloseSize_8(Vector3_t3722313464  value)
	{
		___CloseSize_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIZEBUTT_T245973045_H
#ifndef TWEEN_ARRAY_T2143430763_H
#define TWEEN_ARRAY_T2143430763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tween_Array
struct  Tween_Array_t2143430763  : public Tween_t251520763
{
public:
	// System.Collections.Generic.List`1<Tween> Tween_Array::All_Tween
	List_1_t1723595505 * ___All_Tween_12;

public:
	inline static int32_t get_offset_of_All_Tween_12() { return static_cast<int32_t>(offsetof(Tween_Array_t2143430763, ___All_Tween_12)); }
	inline List_1_t1723595505 * get_All_Tween_12() const { return ___All_Tween_12; }
	inline List_1_t1723595505 ** get_address_of_All_Tween_12() { return &___All_Tween_12; }
	inline void set_All_Tween_12(List_1_t1723595505 * value)
	{
		___All_Tween_12 = value;
		Il2CppCodeGenWriteBarrier((&___All_Tween_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWEEN_ARRAY_T2143430763_H
#ifndef TWEEN_COLOR_T1470692164_H
#define TWEEN_COLOR_T1470692164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tween_Color
struct  Tween_Color_t1470692164  : public Tween_t251520763
{
public:
	// UnityEngine.Color Tween_Color::From
	Color_t2555686324  ___From_12;
	// UnityEngine.Color Tween_Color::To
	Color_t2555686324  ___To_13;

public:
	inline static int32_t get_offset_of_From_12() { return static_cast<int32_t>(offsetof(Tween_Color_t1470692164, ___From_12)); }
	inline Color_t2555686324  get_From_12() const { return ___From_12; }
	inline Color_t2555686324 * get_address_of_From_12() { return &___From_12; }
	inline void set_From_12(Color_t2555686324  value)
	{
		___From_12 = value;
	}

	inline static int32_t get_offset_of_To_13() { return static_cast<int32_t>(offsetof(Tween_Color_t1470692164, ___To_13)); }
	inline Color_t2555686324  get_To_13() const { return ___To_13; }
	inline Color_t2555686324 * get_address_of_To_13() { return &___To_13; }
	inline void set_To_13(Color_t2555686324  value)
	{
		___To_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWEEN_COLOR_T1470692164_H
#ifndef TWEEN_POSITION_T749407915_H
#define TWEEN_POSITION_T749407915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tween_Position
struct  Tween_Position_t749407915  : public Tween_t251520763
{
public:
	// UnityEngine.Vector3 Tween_Position::From
	Vector3_t3722313464  ___From_12;
	// UnityEngine.Vector3 Tween_Position::To
	Vector3_t3722313464  ___To_13;

public:
	inline static int32_t get_offset_of_From_12() { return static_cast<int32_t>(offsetof(Tween_Position_t749407915, ___From_12)); }
	inline Vector3_t3722313464  get_From_12() const { return ___From_12; }
	inline Vector3_t3722313464 * get_address_of_From_12() { return &___From_12; }
	inline void set_From_12(Vector3_t3722313464  value)
	{
		___From_12 = value;
	}

	inline static int32_t get_offset_of_To_13() { return static_cast<int32_t>(offsetof(Tween_Position_t749407915, ___To_13)); }
	inline Vector3_t3722313464  get_To_13() const { return ___To_13; }
	inline Vector3_t3722313464 * get_address_of_To_13() { return &___To_13; }
	inline void set_To_13(Vector3_t3722313464  value)
	{
		___To_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWEEN_POSITION_T749407915_H
#ifndef TWEEN_ROTATION_T2420198140_H
#define TWEEN_ROTATION_T2420198140_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tween_Rotation
struct  Tween_Rotation_t2420198140  : public Tween_t251520763
{
public:
	// UnityEngine.Vector3 Tween_Rotation::From
	Vector3_t3722313464  ___From_12;
	// UnityEngine.Vector3 Tween_Rotation::To
	Vector3_t3722313464  ___To_13;

public:
	inline static int32_t get_offset_of_From_12() { return static_cast<int32_t>(offsetof(Tween_Rotation_t2420198140, ___From_12)); }
	inline Vector3_t3722313464  get_From_12() const { return ___From_12; }
	inline Vector3_t3722313464 * get_address_of_From_12() { return &___From_12; }
	inline void set_From_12(Vector3_t3722313464  value)
	{
		___From_12 = value;
	}

	inline static int32_t get_offset_of_To_13() { return static_cast<int32_t>(offsetof(Tween_Rotation_t2420198140, ___To_13)); }
	inline Vector3_t3722313464  get_To_13() const { return ___To_13; }
	inline Vector3_t3722313464 * get_address_of_To_13() { return &___To_13; }
	inline void set_To_13(Vector3_t3722313464  value)
	{
		___To_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWEEN_ROTATION_T2420198140_H
#ifndef TWEEN_SIZE_T305626671_H
#define TWEEN_SIZE_T305626671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tween_Size
struct  Tween_Size_t305626671  : public Tween_t251520763
{
public:
	// UnityEngine.Vector3 Tween_Size::From
	Vector3_t3722313464  ___From_12;
	// UnityEngine.Vector3 Tween_Size::To
	Vector3_t3722313464  ___To_13;

public:
	inline static int32_t get_offset_of_From_12() { return static_cast<int32_t>(offsetof(Tween_Size_t305626671, ___From_12)); }
	inline Vector3_t3722313464  get_From_12() const { return ___From_12; }
	inline Vector3_t3722313464 * get_address_of_From_12() { return &___From_12; }
	inline void set_From_12(Vector3_t3722313464  value)
	{
		___From_12 = value;
	}

	inline static int32_t get_offset_of_To_13() { return static_cast<int32_t>(offsetof(Tween_Size_t305626671, ___To_13)); }
	inline Vector3_t3722313464  get_To_13() const { return ___To_13; }
	inline Vector3_t3722313464 * get_address_of_To_13() { return &___To_13; }
	inline void set_To_13(Vector3_t3722313464  value)
	{
		___To_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWEEN_SIZE_T305626671_H
#ifndef BASEMESHEFFECT_T2440176439_H
#define BASEMESHEFFECT_T2440176439_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.BaseMeshEffect
struct  BaseMeshEffect_t2440176439  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Graphic UnityEngine.UI.BaseMeshEffect::m_Graphic
	Graphic_t1660335611 * ___m_Graphic_4;

public:
	inline static int32_t get_offset_of_m_Graphic_4() { return static_cast<int32_t>(offsetof(BaseMeshEffect_t2440176439, ___m_Graphic_4)); }
	inline Graphic_t1660335611 * get_m_Graphic_4() const { return ___m_Graphic_4; }
	inline Graphic_t1660335611 ** get_address_of_m_Graphic_4() { return &___m_Graphic_4; }
	inline void set_m_Graphic_4(Graphic_t1660335611 * value)
	{
		___m_Graphic_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Graphic_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEMESHEFFECT_T2440176439_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_8;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_9;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_t2598313366 * ___m_CanvasRenderer_10;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_11;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_12;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_14;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_16;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_19;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_6)); }
	inline Material_t340375123 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t340375123 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t340375123 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_6), value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_7)); }
	inline Color_t2555686324  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t2555686324 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t2555686324  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_8)); }
	inline bool get_m_RaycastTarget_8() const { return ___m_RaycastTarget_8; }
	inline bool* get_address_of_m_RaycastTarget_8() { return &___m_RaycastTarget_8; }
	inline void set_m_RaycastTarget_8(bool value)
	{
		___m_RaycastTarget_8 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_9)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_9() const { return ___m_RectTransform_9; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_9() { return &___m_RectTransform_9; }
	inline void set_m_RectTransform_9(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_9), value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRenderer_10)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRenderer_10() const { return ___m_CanvasRenderer_10; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRenderer_10() { return &___m_CanvasRenderer_10; }
	inline void set_m_CanvasRenderer_10(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRenderer_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRenderer_10), value);
	}

	inline static int32_t get_offset_of_m_Canvas_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_11)); }
	inline Canvas_t3310196443 * get_m_Canvas_11() const { return ___m_Canvas_11; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_11() { return &___m_Canvas_11; }
	inline void set_m_Canvas_11(Canvas_t3310196443 * value)
	{
		___m_Canvas_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_11), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_12)); }
	inline bool get_m_VertsDirty_12() const { return ___m_VertsDirty_12; }
	inline bool* get_address_of_m_VertsDirty_12() { return &___m_VertsDirty_12; }
	inline void set_m_VertsDirty_12(bool value)
	{
		___m_VertsDirty_12 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_13)); }
	inline bool get_m_MaterialDirty_13() const { return ___m_MaterialDirty_13; }
	inline bool* get_address_of_m_MaterialDirty_13() { return &___m_MaterialDirty_13; }
	inline void set_m_MaterialDirty_13(bool value)
	{
		___m_MaterialDirty_13 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_14() const { return ___m_OnDirtyLayoutCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_14() { return &___m_OnDirtyLayoutCallback_14; }
	inline void set_m_OnDirtyLayoutCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_14), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_15)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_15() const { return ___m_OnDirtyVertsCallback_15; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_15() { return &___m_OnDirtyVertsCallback_15; }
	inline void set_m_OnDirtyVertsCallback_15(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_15), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_16)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_16() const { return ___m_OnDirtyMaterialCallback_16; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_16() { return &___m_OnDirtyMaterialCallback_16; }
	inline void set_m_OnDirtyMaterialCallback_16(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_16), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_19() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_19)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_19() const { return ___m_ColorTweenRunner_19; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_19() { return &___m_ColorTweenRunner_19; }
	inline void set_m_ColorTweenRunner_19(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_19), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_20(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_20 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_17;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_18;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t340375123 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t340375123 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_4), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_5), value);
	}

	inline static int32_t get_offset_of_s_Mesh_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_17)); }
	inline Mesh_t3648964284 * get_s_Mesh_17() const { return ___s_Mesh_17; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_17() { return &___s_Mesh_17; }
	inline void set_s_Mesh_17(Mesh_t3648964284 * value)
	{
		___s_Mesh_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_17), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_18)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_18() const { return ___s_VertexHelper_18; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_18() { return &___s_VertexHelper_18; }
	inline void set_s_VertexHelper_18(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef MOVEDRAGBUTT_T3773719392_H
#define MOVEDRAGBUTT_T3773719392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoveDragButt
struct  MoveDragButt_t3773719392  : public DragButt_t1708563181
{
public:
	// UnityEngine.Vector3 MoveDragButt::F_V3
	Vector3_t3722313464  ___F_V3_10;
	// System.Boolean MoveDragButt::Is_F
	bool ___Is_F_11;

public:
	inline static int32_t get_offset_of_F_V3_10() { return static_cast<int32_t>(offsetof(MoveDragButt_t3773719392, ___F_V3_10)); }
	inline Vector3_t3722313464  get_F_V3_10() const { return ___F_V3_10; }
	inline Vector3_t3722313464 * get_address_of_F_V3_10() { return &___F_V3_10; }
	inline void set_F_V3_10(Vector3_t3722313464  value)
	{
		___F_V3_10 = value;
	}

	inline static int32_t get_offset_of_Is_F_11() { return static_cast<int32_t>(offsetof(MoveDragButt_t3773719392, ___Is_F_11)); }
	inline bool get_Is_F_11() const { return ___Is_F_11; }
	inline bool* get_address_of_Is_F_11() { return &___Is_F_11; }
	inline void set_Is_F_11(bool value)
	{
		___Is_F_11 = value;
	}
};

struct MoveDragButt_t3773719392_StaticFields
{
public:
	// Void_Vector3Del MoveDragButt::<>f__am$cache0
	Void_Vector3Del_t2915247505 * ___U3CU3Ef__amU24cache0_12;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_12() { return static_cast<int32_t>(offsetof(MoveDragButt_t3773719392_StaticFields, ___U3CU3Ef__amU24cache0_12)); }
	inline Void_Vector3Del_t2915247505 * get_U3CU3Ef__amU24cache0_12() const { return ___U3CU3Ef__amU24cache0_12; }
	inline Void_Vector3Del_t2915247505 ** get_address_of_U3CU3Ef__amU24cache0_12() { return &___U3CU3Ef__amU24cache0_12; }
	inline void set_U3CU3Ef__amU24cache0_12(Void_Vector3Del_t2915247505 * value)
	{
		___U3CU3Ef__amU24cache0_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOVEDRAGBUTT_T3773719392_H
#ifndef TEXTSPACING_T1351873361_H
#define TEXTSPACING_T1351873361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TextSpacing
struct  TextSpacing_t1351873361  : public BaseMeshEffect_t2440176439
{
public:
	// System.Single TextSpacing::_textSpacing
	float ____textSpacing_5;

public:
	inline static int32_t get_offset_of__textSpacing_5() { return static_cast<int32_t>(offsetof(TextSpacing_t1351873361, ____textSpacing_5)); }
	inline float get__textSpacing_5() const { return ____textSpacing_5; }
	inline float* get_address_of__textSpacing_5() { return &____textSpacing_5; }
	inline void set__textSpacing_5(float value)
	{
		____textSpacing_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTSPACING_T1351873361_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_21;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_22;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_23;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_25;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_26;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_27;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_28;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_29;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_21)); }
	inline bool get_m_ShouldRecalculateStencil_21() const { return ___m_ShouldRecalculateStencil_21; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_21() { return &___m_ShouldRecalculateStencil_21; }
	inline void set_m_ShouldRecalculateStencil_21(bool value)
	{
		___m_ShouldRecalculateStencil_21 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_22)); }
	inline Material_t340375123 * get_m_MaskMaterial_22() const { return ___m_MaskMaterial_22; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_22() { return &___m_MaskMaterial_22; }
	inline void set_m_MaskMaterial_22(Material_t340375123 * value)
	{
		___m_MaskMaterial_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_22), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_23)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_23() const { return ___m_ParentMask_23; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_23() { return &___m_ParentMask_23; }
	inline void set_m_ParentMask_23(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_23), value);
	}

	inline static int32_t get_offset_of_m_Maskable_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_24)); }
	inline bool get_m_Maskable_24() const { return ___m_Maskable_24; }
	inline bool* get_address_of_m_Maskable_24() { return &___m_Maskable_24; }
	inline void set_m_Maskable_24(bool value)
	{
		___m_Maskable_24 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_25)); }
	inline bool get_m_IncludeForMasking_25() const { return ___m_IncludeForMasking_25; }
	inline bool* get_address_of_m_IncludeForMasking_25() { return &___m_IncludeForMasking_25; }
	inline void set_m_IncludeForMasking_25(bool value)
	{
		___m_IncludeForMasking_25 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_26)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_26() const { return ___m_OnCullStateChanged_26; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_26() { return &___m_OnCullStateChanged_26; }
	inline void set_m_OnCullStateChanged_26(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_26), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_27)); }
	inline bool get_m_ShouldRecalculate_27() const { return ___m_ShouldRecalculate_27; }
	inline bool* get_address_of_m_ShouldRecalculate_27() { return &___m_ShouldRecalculate_27; }
	inline void set_m_ShouldRecalculate_27(bool value)
	{
		___m_ShouldRecalculate_27 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_28)); }
	inline int32_t get_m_StencilValue_28() const { return ___m_StencilValue_28; }
	inline int32_t* get_address_of_m_StencilValue_28() { return &___m_StencilValue_28; }
	inline void set_m_StencilValue_28(int32_t value)
	{
		___m_StencilValue_28 = value;
	}

	inline static int32_t get_offset_of_m_Corners_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_29)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_29() const { return ___m_Corners_29; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_29() { return &___m_Corners_29; }
	inline void set_m_Corners_29(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef IMAGE_T2670269651_H
#define IMAGE_T2670269651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image
struct  Image_t2670269651  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t280657092 * ___m_Sprite_31;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t280657092 * ___m_OverrideSprite_32;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_33;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_34;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_35;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_36;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_37;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_38;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_39;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_40;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_41;

public:
	inline static int32_t get_offset_of_m_Sprite_31() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Sprite_31)); }
	inline Sprite_t280657092 * get_m_Sprite_31() const { return ___m_Sprite_31; }
	inline Sprite_t280657092 ** get_address_of_m_Sprite_31() { return &___m_Sprite_31; }
	inline void set_m_Sprite_31(Sprite_t280657092 * value)
	{
		___m_Sprite_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_Sprite_31), value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_32() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_OverrideSprite_32)); }
	inline Sprite_t280657092 * get_m_OverrideSprite_32() const { return ___m_OverrideSprite_32; }
	inline Sprite_t280657092 ** get_address_of_m_OverrideSprite_32() { return &___m_OverrideSprite_32; }
	inline void set_m_OverrideSprite_32(Sprite_t280657092 * value)
	{
		___m_OverrideSprite_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_OverrideSprite_32), value);
	}

	inline static int32_t get_offset_of_m_Type_33() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Type_33)); }
	inline int32_t get_m_Type_33() const { return ___m_Type_33; }
	inline int32_t* get_address_of_m_Type_33() { return &___m_Type_33; }
	inline void set_m_Type_33(int32_t value)
	{
		___m_Type_33 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_34() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_PreserveAspect_34)); }
	inline bool get_m_PreserveAspect_34() const { return ___m_PreserveAspect_34; }
	inline bool* get_address_of_m_PreserveAspect_34() { return &___m_PreserveAspect_34; }
	inline void set_m_PreserveAspect_34(bool value)
	{
		___m_PreserveAspect_34 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_35() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillCenter_35)); }
	inline bool get_m_FillCenter_35() const { return ___m_FillCenter_35; }
	inline bool* get_address_of_m_FillCenter_35() { return &___m_FillCenter_35; }
	inline void set_m_FillCenter_35(bool value)
	{
		___m_FillCenter_35 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_36() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillMethod_36)); }
	inline int32_t get_m_FillMethod_36() const { return ___m_FillMethod_36; }
	inline int32_t* get_address_of_m_FillMethod_36() { return &___m_FillMethod_36; }
	inline void set_m_FillMethod_36(int32_t value)
	{
		___m_FillMethod_36 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_37() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillAmount_37)); }
	inline float get_m_FillAmount_37() const { return ___m_FillAmount_37; }
	inline float* get_address_of_m_FillAmount_37() { return &___m_FillAmount_37; }
	inline void set_m_FillAmount_37(float value)
	{
		___m_FillAmount_37 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_38() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillClockwise_38)); }
	inline bool get_m_FillClockwise_38() const { return ___m_FillClockwise_38; }
	inline bool* get_address_of_m_FillClockwise_38() { return &___m_FillClockwise_38; }
	inline void set_m_FillClockwise_38(bool value)
	{
		___m_FillClockwise_38 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_39() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillOrigin_39)); }
	inline int32_t get_m_FillOrigin_39() const { return ___m_FillOrigin_39; }
	inline int32_t* get_address_of_m_FillOrigin_39() { return &___m_FillOrigin_39; }
	inline void set_m_FillOrigin_39(int32_t value)
	{
		___m_FillOrigin_39 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_40() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_AlphaHitTestMinimumThreshold_40)); }
	inline float get_m_AlphaHitTestMinimumThreshold_40() const { return ___m_AlphaHitTestMinimumThreshold_40; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_40() { return &___m_AlphaHitTestMinimumThreshold_40; }
	inline void set_m_AlphaHitTestMinimumThreshold_40(float value)
	{
		___m_AlphaHitTestMinimumThreshold_40 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_41() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Tracked_41)); }
	inline bool get_m_Tracked_41() const { return ___m_Tracked_41; }
	inline bool* get_address_of_m_Tracked_41() { return &___m_Tracked_41; }
	inline void set_m_Tracked_41(bool value)
	{
		___m_Tracked_41 = value;
	}
};

struct Image_t2670269651_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t340375123 * ___s_ETC1DefaultUI_30;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_t1457185986* ___s_VertScratch_42;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_t1457185986* ___s_UVScratch_43;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t1718750761* ___s_Xy_44;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t1718750761* ___s_Uv_45;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t4142344393 * ___m_TrackedTexturelessImages_46;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_47;
	// System.Action`1<UnityEngine.U2D.SpriteAtlas> UnityEngine.UI.Image::<>f__mg$cache0
	Action_1_t819399007 * ___U3CU3Ef__mgU24cache0_48;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_30() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_ETC1DefaultUI_30)); }
	inline Material_t340375123 * get_s_ETC1DefaultUI_30() const { return ___s_ETC1DefaultUI_30; }
	inline Material_t340375123 ** get_address_of_s_ETC1DefaultUI_30() { return &___s_ETC1DefaultUI_30; }
	inline void set_s_ETC1DefaultUI_30(Material_t340375123 * value)
	{
		___s_ETC1DefaultUI_30 = value;
		Il2CppCodeGenWriteBarrier((&___s_ETC1DefaultUI_30), value);
	}

	inline static int32_t get_offset_of_s_VertScratch_42() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_VertScratch_42)); }
	inline Vector2U5BU5D_t1457185986* get_s_VertScratch_42() const { return ___s_VertScratch_42; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_VertScratch_42() { return &___s_VertScratch_42; }
	inline void set_s_VertScratch_42(Vector2U5BU5D_t1457185986* value)
	{
		___s_VertScratch_42 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertScratch_42), value);
	}

	inline static int32_t get_offset_of_s_UVScratch_43() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_UVScratch_43)); }
	inline Vector2U5BU5D_t1457185986* get_s_UVScratch_43() const { return ___s_UVScratch_43; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_UVScratch_43() { return &___s_UVScratch_43; }
	inline void set_s_UVScratch_43(Vector2U5BU5D_t1457185986* value)
	{
		___s_UVScratch_43 = value;
		Il2CppCodeGenWriteBarrier((&___s_UVScratch_43), value);
	}

	inline static int32_t get_offset_of_s_Xy_44() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Xy_44)); }
	inline Vector3U5BU5D_t1718750761* get_s_Xy_44() const { return ___s_Xy_44; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Xy_44() { return &___s_Xy_44; }
	inline void set_s_Xy_44(Vector3U5BU5D_t1718750761* value)
	{
		___s_Xy_44 = value;
		Il2CppCodeGenWriteBarrier((&___s_Xy_44), value);
	}

	inline static int32_t get_offset_of_s_Uv_45() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Uv_45)); }
	inline Vector3U5BU5D_t1718750761* get_s_Uv_45() const { return ___s_Uv_45; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Uv_45() { return &___s_Uv_45; }
	inline void set_s_Uv_45(Vector3U5BU5D_t1718750761* value)
	{
		___s_Uv_45 = value;
		Il2CppCodeGenWriteBarrier((&___s_Uv_45), value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_46() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___m_TrackedTexturelessImages_46)); }
	inline List_1_t4142344393 * get_m_TrackedTexturelessImages_46() const { return ___m_TrackedTexturelessImages_46; }
	inline List_1_t4142344393 ** get_address_of_m_TrackedTexturelessImages_46() { return &___m_TrackedTexturelessImages_46; }
	inline void set_m_TrackedTexturelessImages_46(List_1_t4142344393 * value)
	{
		___m_TrackedTexturelessImages_46 = value;
		Il2CppCodeGenWriteBarrier((&___m_TrackedTexturelessImages_46), value);
	}

	inline static int32_t get_offset_of_s_Initialized_47() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Initialized_47)); }
	inline bool get_s_Initialized_47() const { return ___s_Initialized_47; }
	inline bool* get_address_of_s_Initialized_47() { return &___s_Initialized_47; }
	inline void set_s_Initialized_47(bool value)
	{
		___s_Initialized_47 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_48() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___U3CU3Ef__mgU24cache0_48)); }
	inline Action_1_t819399007 * get_U3CU3Ef__mgU24cache0_48() const { return ___U3CU3Ef__mgU24cache0_48; }
	inline Action_1_t819399007 ** get_address_of_U3CU3Ef__mgU24cache0_48() { return &___U3CU3Ef__mgU24cache0_48; }
	inline void set_U3CU3Ef__mgU24cache0_48(Action_1_t819399007 * value)
	{
		___U3CU3Ef__mgU24cache0_48 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_48), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE_T2670269651_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_30;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_31;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_32;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_33;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_35;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_36;

public:
	inline static int32_t get_offset_of_m_FontData_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_30)); }
	inline FontData_t746620069 * get_m_FontData_30() const { return ___m_FontData_30; }
	inline FontData_t746620069 ** get_address_of_m_FontData_30() { return &___m_FontData_30; }
	inline void set_m_FontData_30(FontData_t746620069 * value)
	{
		___m_FontData_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_30), value);
	}

	inline static int32_t get_offset_of_m_Text_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_31)); }
	inline String_t* get_m_Text_31() const { return ___m_Text_31; }
	inline String_t** get_address_of_m_Text_31() { return &___m_Text_31; }
	inline void set_m_Text_31(String_t* value)
	{
		___m_Text_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_31), value);
	}

	inline static int32_t get_offset_of_m_TextCache_32() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_32)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_32() const { return ___m_TextCache_32; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_32() { return &___m_TextCache_32; }
	inline void set_m_TextCache_32(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_32), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_33)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_33() const { return ___m_TextCacheForLayout_33; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_33() { return &___m_TextCacheForLayout_33; }
	inline void set_m_TextCacheForLayout_33(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_33), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_35() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_35)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_35() const { return ___m_DisableFontTextureRebuiltCallback_35; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_35() { return &___m_DisableFontTextureRebuiltCallback_35; }
	inline void set_m_DisableFontTextureRebuiltCallback_35(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_35 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_36() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_36)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_36() const { return ___m_TempVerts_36; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_36() { return &___m_TempVerts_36; }
	inline void set_m_TempVerts_36(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_36 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_36), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_34;

public:
	inline static int32_t get_offset_of_s_DefaultText_34() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_34)); }
	inline Material_t340375123 * get_s_DefaultText_34() const { return ___s_DefaultText_34; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_34() { return &___s_DefaultText_34; }
	inline void set_s_DefaultText_34(Material_t340375123 * value)
	{
		___s_DefaultText_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_34), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// ObjArray/Obj[]
struct ObjU5BU5D_t778053183  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Obj_t2397017114  m_Items[1];

public:
	inline Obj_t2397017114  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Obj_t2397017114 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Obj_t2397017114  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Obj_t2397017114  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Obj_t2397017114 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Obj_t2397017114  value)
	{
		m_Items[index] = value;
	}
};
// G0_Lv_Data[]
struct G0_Lv_DataU5BU5D_t720604504  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) G0_Lv_Data_t3685245493 * m_Items[1];

public:
	inline G0_Lv_Data_t3685245493 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline G0_Lv_Data_t3685245493 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, G0_Lv_Data_t3685245493 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline G0_Lv_Data_t3685245493 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline G0_Lv_Data_t3685245493 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, G0_Lv_Data_t3685245493 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// G0_Target_Data[]
struct G0_Target_DataU5BU5D_t586259179  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) G0_Target_Data_t1917875166 * m_Items[1];

public:
	inline G0_Target_Data_t1917875166 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline G0_Target_Data_t1917875166 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, G0_Target_Data_t1917875166 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline G0_Target_Data_t1917875166 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline G0_Target_Data_t1917875166 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, G0_Target_Data_t1917875166 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[][]
struct StringU5BU5DU5BU5D_t2611993717  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) StringU5BU5D_t1281789340* m_Items[1];

public:
	inline StringU5BU5D_t1281789340* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StringU5BU5D_t1281789340** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StringU5BU5D_t1281789340* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline StringU5BU5D_t1281789340* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StringU5BU5D_t1281789340** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StringU5BU5D_t1281789340* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Single[]
struct SingleU5BU5D_t1444911251  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Single[][]
struct SingleU5BU5DU5BU5D_t3206712258  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SingleU5BU5D_t1444911251* m_Items[1];

public:
	inline SingleU5BU5D_t1444911251* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SingleU5BU5D_t1444911251** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SingleU5BU5D_t1444911251* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline SingleU5BU5D_t1444911251* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SingleU5BU5D_t1444911251** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SingleU5BU5D_t1444911251* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[][][]
struct StringU5BU5DU5BU5DU5BU5D_t2402656792  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) StringU5BU5DU5BU5D_t2611993717* m_Items[1];

public:
	inline StringU5BU5DU5BU5D_t2611993717* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StringU5BU5DU5BU5D_t2611993717** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StringU5BU5DU5BU5D_t2611993717* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline StringU5BU5DU5BU5D_t2611993717* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StringU5BU5DU5BU5D_t2611993717** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StringU5BU5DU5BU5D_t2611993717* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Events.UnityEvent[]
struct UnityEventU5BU5D_t4042265822  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) UnityEvent_t2581268647 * m_Items[1];

public:
	inline UnityEvent_t2581268647 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnityEvent_t2581268647 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnityEvent_t2581268647 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline UnityEvent_t2581268647 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnityEvent_t2581268647 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnityEvent_t2581268647 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// TxtCon/PathObj[]
struct PathObjU5BU5D_t895737483  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PathObj_t4274847934  m_Items[1];

public:
	inline PathObj_t4274847934  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PathObj_t4274847934 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PathObj_t4274847934  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline PathObj_t4274847934  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PathObj_t4274847934 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PathObj_t4274847934  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Remove_m1416767016_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void Dice`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dice_1__ctor_m458462117_gshared (Dice_1_t1766449944 * __this, const RuntimeMethod* method);
// System.Int32 Dice`1<System.Object>::GetAInt()
extern "C" IL2CPP_METHOD_ATTR int32_t Dice_1_GetAInt_m1595632037_gshared (Dice_1_t1766449944 * __this, const RuntimeMethod* method);
// System.Void Dice`1<System.Int32>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dice_1__ctor_m3948654876_gshared (Dice_1_t1637289533 * __this, const RuntimeMethod* method);
// System.Int32 Dice`1<System.Int32>::GetAInt()
extern "C" IL2CPP_METHOD_ATTR int32_t Dice_1_GetAInt_m3540587861_gshared (Dice_1_t1637289533 * __this, const RuntimeMethod* method);
// T ObjArray::GetObjT<System.Object>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ObjArray_GetObjT_TisRuntimeObject_m32325199_gshared (ObjArray_t2087238592 * __this, int32_t ___n0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Int32[] Dice`1<System.Int32>::GetNotRepeatingInts(System.Int32,System.Int32[])
extern "C" IL2CPP_METHOD_ATTR Int32U5BU5D_t385246372* Dice_1_GetNotRepeatingInts_m1466825919_gshared (RuntimeObject * __this /* static, unused */, int32_t p0, Int32U5BU5D_t385246372* p1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m2446893047_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m1628857705_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m697420525_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m361000296_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m888956288_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<ObjArray/Obj>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m487875160_gshared (List_1_t3869091856 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<ObjArray/Obj>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m1263474110_gshared (List_1_t3869091856 * __this, Obj_t2397017114  p0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<ObjArray/Obj>::ToArray()
extern "C" IL2CPP_METHOD_ATTR ObjU5BU5D_t778053183* List_1_ToArray_m426799129_gshared (List_1_t3869091856 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m3713859815_gshared (List_1_t1234605051 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR UIVertex_t4057497605  List_1_get_Item_m457221236_gshared (List_1_t1234605051 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_set_Item_m2057272351_gshared (List_1_t1234605051 * __this, int32_t p0, UIVertex_t4057497605  p1, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.Void VoidDel::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void VoidDel__ctor_m1452115049 (VoidDel_t2721053205 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method);
// System.Void ButtObj::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ButtObj__ctor_m2484122873 (ButtObj_t1384809709 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour_print_m330341231 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_pointerId()
extern "C" IL2CPP_METHOD_ATTR int32_t PointerEventData_get_pointerId_m1200356155 (PointerEventData_t3807901092 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Collider2D>::.ctor()
inline void List_1__ctor_m537059739 (List_1_t4278874368 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4278874368 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Collider2D>::get_Count()
inline int32_t List_1_get_Count_m2200761832 (List_1_t4278874368 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4278874368 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Collider2D>::get_Item(System.Int32)
inline Collider2D_t2806799626 * List_1_get_Item_m686969124 (List_1_t4278874368 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Collider2D_t2806799626 * (*) (List_1_t4278874368 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.String UnityEngine.Component::get_tag()
extern "C" IL2CPP_METHOD_ATTR String_t* Component_get_tag_m2716693327 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Collider2D>::Add(!0)
inline void List_1_Add_m552355349 (List_1_t4278874368 * __this, Collider2D_t2806799626 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4278874368 *, Collider2D_t2806799626 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Collider2D>::Remove(!0)
inline bool List_1_Remove_m1178666607 (List_1_t4278874368 * __this, Collider2D_t2806799626 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t4278874368 *, Collider2D_t2806799626 *, const RuntimeMethod*))List_1_Remove_m1416767016_gshared)(__this, p0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Collider2D>::GetEnumerator()
inline Enumerator_t1873150949  List_1_GetEnumerator_m1001098768 (List_1_t4278874368 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1873150949  (*) (List_1_t4278874368 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Collider2D>::get_Current()
inline Collider2D_t2806799626 * Enumerator_get_Current_m785251069 (Enumerator_t1873150949 * __this, const RuntimeMethod* method)
{
	return ((  Collider2D_t2806799626 * (*) (Enumerator_t1873150949 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Collider2D>::MoveNext()
inline bool Enumerator_MoveNext_m3528958210 (Enumerator_t1873150949 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1873150949 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Collider2D>::Dispose()
inline void Enumerator_Dispose_m436229931 (Enumerator_t1873150949 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1873150949 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method);
}
// System.Void Dice`1<DiceGameObject>::.ctor()
inline void Dice_1__ctor_m622095197 (Dice_1_t3214026182 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dice_1_t3214026182 *, const RuntimeMethod*))Dice_1__ctor_m458462117_gshared)(__this, method);
}
// System.Void Dice`1<UnityEngine.GameObject>::.ctor()
inline void Dice_1__ctor_m3482360944 (Dice_1_t4094947695 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dice_1_t4094947695 *, const RuntimeMethod*))Dice_1__ctor_m458462117_gshared)(__this, method);
}
// System.Int32 Dice`1<UnityEngine.GameObject>::GetAInt()
inline int32_t Dice_1_GetAInt_m1474206182 (Dice_1_t4094947695 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dice_1_t4094947695 *, const RuntimeMethod*))Dice_1_GetAInt_m1595632037_gshared)(__this, method);
}
// System.Void Dice`1<System.Int32>::.ctor()
inline void Dice_1__ctor_m3948654876 (Dice_1_t1637289533 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dice_1_t1637289533 *, const RuntimeMethod*))Dice_1__ctor_m3948654876_gshared)(__this, method);
}
// System.Int32 Dice`1<System.Int32>::GetAInt()
inline int32_t Dice_1_GetAInt_m3540587861 (Dice_1_t1637289533 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dice_1_t1637289533 *, const RuntimeMethod*))Dice_1_GetAInt_m3540587861_gshared)(__this, method);
}
// System.Void Dice`1<System.String>::.ctor()
inline void Dice_1__ctor_m994750923 (Dice_1_t533794469 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dice_1_t533794469 *, const RuntimeMethod*))Dice_1__ctor_m458462117_gshared)(__this, method);
}
// System.Int32 Dice`1<System.String>::GetAInt()
inline int32_t Dice_1_GetAInt_m3781324307 (Dice_1_t533794469 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dice_1_t533794469 *, const RuntimeMethod*))Dice_1_GetAInt_m1595632037_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  PointerEventData_get_position_m437660275 (PointerEventData_t3807901092 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Void Void_Vector3Del::Invoke(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Void_Vector3Del_Invoke_m3646649775 (Void_Vector3Del_t2915247505 * __this, Vector3_t3722313464  ___Vector30, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Transform_get_parent_m835071599 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_lossyScale_m465496651 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Division_m510815599 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method);
// System.Boolean System.IO.File::Exists(System.String)
extern "C" IL2CPP_METHOD_ATTR bool File_Exists_m3943585060 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Boolean System.IO.Directory::Exists(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Directory_Exists_m1484791558 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String[] System.IO.Directory::GetFiles(System.String)
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* Directory_GetFiles_m932257245 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String[] System.IO.Directory::GetDirectories(System.String)
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* Directory_GetDirectories_m1966820948 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
extern "C" IL2CPP_METHOD_ATTR DirectoryInfo_t35957480 * Directory_CreateDirectory_m751642867 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String[] FileCon::GetFiles(System.String)
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* FileCon_GetFiles_m3100483592 (RuntimeObject * __this /* static, unused */, String_t* ___URL0, const RuntimeMethod* method);
// System.String FileCon::PathName(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* FileCon_PathName_m2998309428 (RuntimeObject * __this /* static, unused */, String_t* ___FormPath0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void System.IO.File::Copy(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void File_Copy_m497281780 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String[] FileCon::GetDirectorys(System.String)
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* FileCon_GetDirectorys_m2457216495 (RuntimeObject * __this /* static, unused */, String_t* ___URL0, const RuntimeMethod* method);
// System.Void FileCon::CopyDirectory(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void FileCon_CopyDirectory_m2289805401 (RuntimeObject * __this /* static, unused */, String_t* ___FormURL0, String_t* ___ToURL1, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* String_Split_m3646115398 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method);
// System.String[] FileCon::Get_Path(System.String)
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* FileCon_Get_Path_m420164848 (RuntimeObject * __this /* static, unused */, String_t* ___FromPath0, const RuntimeMethod* method);
// System.Void ObjArray::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ObjArray__ctor_m4268133846 (ObjArray_t2087238592 * __this, const RuntimeMethod* method);
// System.Void ObjArray::OnOnlyObjs(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ObjArray_OnOnlyObjs_m2386750287 (ObjArray_t2087238592 * __this, int32_t ___n0, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m1299643124 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m2842000469 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.String System.Int32::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C" IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m1758133949 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void G0_Main_UICon/<Start>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__AnonStorey0__ctor_m179079137 (U3CStartU3Ec__AnonStorey0_t898297963 * __this, const RuntimeMethod* method);
// T ObjArray::GetObjT<ButtObj>(System.Int32)
inline ButtObj_t1384809709 * ObjArray_GetObjT_TisButtObj_t1384809709_m2868763048 (ObjArray_t2087238592 * __this, int32_t ___n0, const RuntimeMethod* method)
{
	return ((  ButtObj_t1384809709 * (*) (ObjArray_t2087238592 *, int32_t, const RuntimeMethod*))ObjArray_GetObjT_TisRuntimeObject_m32325199_gshared)(__this, ___n0, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<G0_Photo_UICon>::.ctor()
inline void List_1__ctor_m1692865676 (List_1_t3384986864 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3384986864 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<G0_Photo_UICon>::Add(!0)
inline void List_1_Add_m1433744898 (List_1_t3384986864 * __this, G0_Photo_UICon_t1912912122 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3384986864 *, G0_Photo_UICon_t1912912122 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void Void_Vector3Del::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Void_Vector3Del__ctor_m1002480554 (Void_Vector3Del_t2915247505 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
extern "C" IL2CPP_METHOD_ATTR void Image_set_sprite_m2369174689 (Image_t2670269651 * __this, Sprite_t280657092 * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<G0_Photo_UICon>::get_Count()
inline int32_t List_1_get_Count_m4272413490 (List_1_t3384986864 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3384986864 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<G0_Photo_UICon>::get_Item(System.Int32)
inline G0_Photo_UICon_t1912912122 * List_1_get_Item_m1845799387 (List_1_t3384986864 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  G0_Photo_UICon_t1912912122 * (*) (List_1_t3384986864 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Transform::SetSiblingIndex(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Transform_SetSiblingIndex_m1077399982 (Transform_t3600365921 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<G0_Photo_UICon>::Remove(!0)
inline bool List_1_Remove_m735619916 (List_1_t3384986864 * __this, G0_Photo_UICon_t1912912122 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t3384986864 *, G0_Photo_UICon_t1912912122 *, const RuntimeMethod*))List_1_Remove_m1416767016_gshared)(__this, p0, method);
}
// System.Void G0_Play_UICon::End(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void G0_Play_UICon_End_m385289090 (G0_Play_UICon_t46452308 * __this, bool ___Win0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Transform_SetParent_m381167889 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method);
// System.Boolean G0_Photo_UICon::get_IsOK()
extern "C" IL2CPP_METHOD_ATTR bool G0_Photo_UICon_get_IsOK_m988091250 (G0_Photo_UICon_t1912912122 * __this, const RuntimeMethod* method);
// System.Void G0_Target_UICOn::Open()
extern "C" IL2CPP_METHOD_ATTR void G0_Target_UICOn_Open_m1477967583 (G0_Target_UICOn_t2128227474 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::GetSiblingIndex()
extern "C" IL2CPP_METHOD_ATTR int32_t Transform_GetSiblingIndex_m798637244 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Tween>::get_Item(System.Int32)
inline Tween_t251520763 * List_1_get_Item_m863626585 (List_1_t1723595505 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Tween_t251520763 * (*) (List_1_t1723595505 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_one_m1629952498 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_localPosition_m4234289348 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void Tween::Play(System.Boolean,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Tween_Play_m1783120483 (Tween_t251520763 * __this, bool ___b0, float ___Delay1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t2670269651 * Component_GetComponent_TisImage_t2670269651_m980647750 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Image_t2670269651 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void G0_Photo_UICon::End()
extern "C" IL2CPP_METHOD_ATTR void G0_Photo_UICon_End_m2363947105 (G0_Photo_UICon_t1912912122 * __this, const RuntimeMethod* method);
// System.Void G0_Photo_UICon::Set_Transform_Count()
extern "C" IL2CPP_METHOD_ATTR void G0_Photo_UICon_Set_Transform_Count_m148275024 (G0_Photo_UICon_t1912912122 * __this, const RuntimeMethod* method);
// System.Void G0_Play_UICon/<Start>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0__ctor_m1990627779 (U3CStartU3Ec__Iterator0_t1260829943 * __this, const RuntimeMethod* method);
// G0_Lv_Data G0_Play_UICon::get_Now_Lv_Data()
extern "C" IL2CPP_METHOD_ATTR G0_Lv_Data_t3685245493 * G0_Play_UICon_get_Now_Lv_Data_m3483712159 (G0_Play_UICon_t46452308 * __this, const RuntimeMethod* method);
// System.Int32[] Dice`1<System.Int32>::GetNotRepeatingInts(System.Int32,System.Int32[])
inline Int32U5BU5D_t385246372* Dice_1_GetNotRepeatingInts_m1466825919 (RuntimeObject * __this /* static, unused */, int32_t p0, Int32U5BU5D_t385246372* p1, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t385246372* (*) (RuntimeObject * /* static, unused */, int32_t, Int32U5BU5D_t385246372*, const RuntimeMethod*))Dice_1_GetNotRepeatingInts_m1466825919_gshared)(__this /* static, unused */, p0, p1, method);
}
// UnityEngine.GameObject MyCalculate::SpObj(UnityEngine.GameObject,UnityEngine.Transform,UnityEngine.Vector3,System.String)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * MyCalculate_SpObj_m3074102938 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___obj0, Transform_t3600365921 * ___parent1, Vector3_t3722313464  ___Position2, String_t* ___objName3, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<G0_Photo_UICon>()
inline G0_Photo_UICon_t1912912122 * GameObject_GetComponent_TisG0_Photo_UICon_t1912912122_m4197247811 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  G0_Photo_UICon_t1912912122 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// System.Void G0_Photo_UICon::Load_Target_Data(G0_Target_Data)
extern "C" IL2CPP_METHOD_ATTR void G0_Photo_UICon_Load_Target_Data_m3715051138 (G0_Photo_UICon_t1912912122 * __this, G0_Target_Data_t1917875166 * ___data0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<G0_Target_UICOn>::.ctor()
inline void List_1__ctor_m1316785032 (List_1_t3600302216 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3600302216 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2Int::op_Implicit(UnityEngine.Vector2Int)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2Int_op_Implicit_m1284226264 (RuntimeObject * __this /* static, unused */, Vector2Int_t3469998543  p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<G0_Target_UICOn>()
inline G0_Target_UICOn_t2128227474 * GameObject_GetComponent_TisG0_Target_UICOn_t2128227474_m336255185 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  G0_Target_UICOn_t2128227474 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<G0_Target_UICOn>::Add(!0)
inline void List_1_Add_m891152756 (List_1_t3600302216 * __this, G0_Target_UICOn_t2128227474 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3600302216 *, G0_Target_UICOn_t2128227474 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// T ObjArray::GetObjT<G0_End_UICon>(System.Int32)
inline G0_End_UICon_t3782924102 * ObjArray_GetObjT_TisG0_End_UICon_t3782924102_m4010045863 (ObjArray_t2087238592 * __this, int32_t ___n0, const RuntimeMethod* method)
{
	return ((  G0_End_UICon_t3782924102 * (*) (ObjArray_t2087238592 *, int32_t, const RuntimeMethod*))ObjArray_GetObjT_TisRuntimeObject_m32325199_gshared)(__this, ___n0, method);
}
// System.Void G0_End_UICon::Lose_Open()
extern "C" IL2CPP_METHOD_ATTR void G0_End_UICon_Lose_Open_m2031812526 (G0_End_UICon_t3782924102 * __this, const RuntimeMethod* method);
// System.Void G0_End_UICon::Win_Open(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void G0_End_UICon_Win_Open_m511383927 (G0_End_UICon_t3782924102 * __this, int32_t ___Score0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::DeleteAll()
extern "C" IL2CPP_METHOD_ATTR void PlayerPrefs_DeleteAll_m610653455 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Void_IntDel::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Void_IntDel__ctor_m3144570209 (Void_IntDel_t3049649234 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void TimeLoop::Open()
extern "C" IL2CPP_METHOD_ATTR void TimeLoop_Open_m4218940108 (TimeLoop_t468784922 * __this, const RuntimeMethod* method);
// System.Void G0_Play_UICon::Load_Lv_Data(G0_Lv_Data)
extern "C" IL2CPP_METHOD_ATTR void G0_Play_UICon_Load_Lv_Data_m2226816120 (G0_Play_UICon_t46452308 * __this, G0_Lv_Data_t3685245493 * ___data0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method);
// System.Void G0_Target_UICOn::Load_Target(G0_Target_UICOn)
extern "C" IL2CPP_METHOD_ATTR void G0_Target_UICOn_Load_Target_m2047948276 (RuntimeObject * __this /* static, unused */, G0_Target_UICOn_t2128227474 * ___g0_Target_UICon0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<G0_Target_UICOn>::get_Item(System.Int32)
inline G0_Target_UICOn_t2128227474 * List_1_get_Item_m3124045229 (List_1_t3600302216 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  G0_Target_UICOn_t2128227474 * (*) (List_1_t3600302216 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<G0_Target_UICOn>::get_Count()
inline int32_t List_1_get_Count_m348913021 (List_1_t3600302216 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3600302216 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::.ctor()
inline void List_1__ctor_m3458422818 (List_1_t496632877 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t496632877 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void GetGoogleTab/<GetTable>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CGetTableU3Ec__Iterator0__ctor_m1394337478 (U3CGetTableU3Ec__Iterator0_t1324267896 * __this, const RuntimeMethod* method);
// System.Void GetGoogleTab/<GetTable>c__Iterator1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CGetTableU3Ec__Iterator1__ctor_m1757732715 (U3CGetTableU3Ec__Iterator1_t4053151251 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::GetEnumerator()
inline Enumerator_t2385876754  List_1_GetEnumerator_m3862866820 (List_1_t496632877 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2385876754  (*) (List_1_t496632877 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.String>>::get_Current()
inline List_1_t3319525431 * Enumerator_get_Current_m2609582037 (Enumerator_t2385876754 * __this, const RuntimeMethod* method)
{
	return ((  List_1_t3319525431 * (*) (Enumerator_t2385876754 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_t913802012  List_1_GetEnumerator_m1955908099 (List_1_t3319525431 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t913802012  (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m236733038 (Enumerator_t913802012 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_t913802012 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_m4158182743 (Enumerator_t913802012 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t913802012 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m2026665411 (Enumerator_t913802012 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t913802012 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.String>>::MoveNext()
inline bool Enumerator_MoveNext_m754000926 (Enumerator_t2385876754 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2385876754 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.String>>::Dispose()
inline void Enumerator_Dispose_m4093600480 (Enumerator_t2385876754 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2385876754 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method);
}
// System.Collections.IEnumerator GetGoogleTab::GetTable(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GetGoogleTab_GetTable_m1557446434 (GetGoogleTab_t2614510110 * __this, String_t* ___Id0, String_t* ___TabName1, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.String UnityEngine.WWW::EscapeURL(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* WWW_EscapeURL_m4251687403 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m1809518182 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t1281789340* p0, const RuntimeMethod* method);
// System.Void UnityEngine.WWW::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void WWW__ctor_m2915079343 (WWW_t3688466362 * __this, String_t* p0, const RuntimeMethod* method);
// System.String UnityEngine.WWW::get_error()
extern "C" IL2CPP_METHOD_ATTR String_t* WWW_get_error_m3055313367 (WWW_t3688466362 * __this, const RuntimeMethod* method);
// System.String UnityEngine.WWW::get_text()
extern "C" IL2CPP_METHOD_ATTR String_t* WWW_get_text_m898164367 (WWW_t3688466362 * __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m706204246 (List_1_t3319525431 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Inequality_m215368492 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::Add(!0)
inline void List_1_Add_m2353349950 (List_1_t496632877 * __this, List_1_t3319525431 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t496632877 *, List_1_t3319525431 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m1685793073 (List_1_t3319525431 * __this, String_t* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3319525431 *, String_t*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void DragButt::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DragButt__ctor_m2250402185 (DragButt_t1708563181 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 DragButt::get_Drag_V3()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  DragButt_get_Drag_V3_m402370484 (DragButt_t1708563181 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Input_get_mousePosition_m1616496925 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Camera_ScreenToWorldPoint_m3978588570 (Camera_t4157153871 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_t1113636619 * Object_Instantiate_TisGameObject_t1113636619_m4070250708 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * p0, const RuntimeMethod* method)
{
	return ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method);
}
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localPosition_m4128471975 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_localScale_m129152068 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
extern "C" IL2CPP_METHOD_ATTR void Object_set_name_m291480324 (Object_t631007953 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Multiply_m2347887432 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, const RuntimeMethod* method);
// System.String[] MyCalculate::_TxtToString(System.String)
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* MyCalculate__TxtToString_m2022611661 (RuntimeObject * __this /* static, unused */, String_t* ___a0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m1628857705 (List_1_t128053199 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t128053199 *, const RuntimeMethod*))List_1__ctor_m1628857705_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_m697420525 (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_Add_m697420525_gshared)(__this, p0, method);
}
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Replace_m1273907647 (String_t* __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_m361000296 (List_1_t128053199 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t128053199 *, const RuntimeMethod*))List_1_get_Count_m361000296_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_m888956288 (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_get_Item_m888956288_gshared)(__this, p0, method);
}
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m1610150815 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Single System.Single::Parse(System.String)
extern "C" IL2CPP_METHOD_ATTR float Single_Parse_m364357836 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String[][] MyCalculate::TxtToString(System.String)
extern "C" IL2CPP_METHOD_ATTR StringU5BU5DU5BU5D_t2611993717* MyCalculate_TxtToString_m1598558100 (RuntimeObject * __this /* static, unused */, String_t* ___a0, const RuntimeMethod* method);
// System.String MyCalculate::UTxtToString(System.String[][],System.Char)
extern "C" IL2CPP_METHOD_ATTR String_t* MyCalculate_UTxtToString_m1614030829 (RuntimeObject * __this /* static, unused */, StringU5BU5DU5BU5D_t2611993717* ___alltext0, Il2CppChar ___f1, const RuntimeMethod* method);
// System.String[][] MyCalculate::RemoveRow(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR StringU5BU5DU5BU5D_t2611993717* MyCalculate_RemoveRow_m2231241764 (RuntimeObject * __this /* static, unused */, String_t* ___text0, int32_t ___n1, const RuntimeMethod* method);
// System.String MyCalculate::_NomberToString(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* MyCalculate__NomberToString_m312450311 (RuntimeObject * __this /* static, unused */, int32_t ___n0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_Min_m18103608 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m2848979100 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 MyCalculate::SaladModInt(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t MyCalculate_SaladModInt_m405261417 (RuntimeObject * __this /* static, unused */, int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.Boolean ObjArray/Obj::get_Open()
extern "C" IL2CPP_METHOD_ATTR bool Obj_get_Open_m2072835916 (Obj_t2397017114 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_Invoke_m3065672636 (UnityEvent_t2581268647 * __this, const RuntimeMethod* method);
// System.Void ObjArray::OnOffObj(System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ObjArray_OnOffObj_m918063367 (ObjArray_t2087238592 * __this, int32_t ___n0, bool ___OnOff1, const RuntimeMethod* method);
// System.Void ObjArray::ContinuousObj(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ObjArray_ContinuousObj_m3982673243 (ObjArray_t2087238592 * __this, int32_t ___star0, int32_t ___end1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_m3145433196 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Transform_GetChild_m1092972975 (Transform_t3600365921 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<ObjArray/Obj>::.ctor()
inline void List_1__ctor_m487875160 (List_1_t3869091856 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3869091856 *, const RuntimeMethod*))List_1__ctor_m487875160_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<ObjArray/Obj>::Add(!0)
inline void List_1_Add_m1263474110 (List_1_t3869091856 * __this, Obj_t2397017114  p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3869091856 *, Obj_t2397017114 , const RuntimeMethod*))List_1_Add_m1263474110_gshared)(__this, p0, method);
}
// !0[] System.Collections.Generic.List`1<ObjArray/Obj>::ToArray()
inline ObjU5BU5D_t778053183* List_1_ToArray_m426799129 (List_1_t3869091856 * __this, const RuntimeMethod* method)
{
	return ((  ObjU5BU5D_t778053183* (*) (List_1_t3869091856 *, const RuntimeMethod*))List_1_ToArray_m426799129_gshared)(__this, method);
}
// System.Boolean UnityEngine.GameObject::get_activeSelf()
extern "C" IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m1767405923 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Time_set_timeScale_m1127545364 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::get_y()
extern "C" IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m64542185 (Vector2Int_t3469998543 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Camera_set_orthographicSize_m76971700 (Camera_t4157153871 * __this, float p0, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_orthographicSize()
extern "C" IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m3903216845 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_width_m3421484486 (Rect_t2360479859 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_height_m1358425599 (Rect_t2360479859 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RenderTexture__ctor_m769234016 (RenderTexture_t2108887433 * __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void Camera_set_targetTexture_m3148311140 (Camera_t4157153871 * __this, RenderTexture_t2108887433 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::Render()
extern "C" IL2CPP_METHOD_ATTR void Camera_Render_m2813253190 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void RenderTexture_set_active_m1437732586 (RuntimeObject * __this /* static, unused */, RenderTexture_t2108887433 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture2D__ctor_m2862217990 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, int32_t p2, bool p3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m3395504488 (Texture2D_t3840446185 * __this, Rect_t2360479859  p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
extern "C" IL2CPP_METHOD_ATTR void Texture2D_Apply_m2271746283 (Texture2D_t3840446185 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_left()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_get_left_m1559018038 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR RaycastHit2D_t2279581989  Physics2D_Raycast_m2341153778 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method);
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern "C" IL2CPP_METHOD_ATTR Collider2D_t2806799626 * RaycastHit2D_get_collider_m1549426026 (RaycastHit2D_t2279581989 * __this, const RuntimeMethod* method);
// System.Void RayDetect::set_Open(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void RayDetect_set_Open_m3049167136 (RayDetect_t2170308910 * __this, bool ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.RaycastHit2D::get_fraction()
extern "C" IL2CPP_METHOD_ATTR float RaycastHit2D_get_fraction_m2673798080 (RaycastHit2D_t2279581989 * __this, const RuntimeMethod* method);
// System.Void SizeButt::SetSize(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SizeButt_SetSize_m2589160445 (SizeButt_t245973045 * __this, bool ___b0, const RuntimeMethod* method);
// System.Void VoidDel::Invoke()
extern "C" IL2CPP_METHOD_ATTR void VoidDel_Invoke_m1500761510 (VoidDel_t2721053205 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_m3462269772 (RectTransform_t3704657025 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t3704657025 * GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t3704657025 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  RectTransform_get_sizeDelta_m2183112744 (RectTransform_t3704657025 * __this, const RuntimeMethod* method);
// System.Void TestCon/<Start>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0__ctor_m1093577629 (U3CStartU3Ec__Iterator0_t46314510 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m2199082655 (WaitForSeconds_t1699091251 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.BaseMeshEffect::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BaseMeshEffect__ctor_m2277545720 (BaseMeshEffect_t2440176439 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.UI.VertexHelper::get_currentVertCount()
extern "C" IL2CPP_METHOD_ATTR int32_t VertexHelper_get_currentVertCount_m124779331 (VertexHelper_t2453304189 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
inline void List_1__ctor_m3713859815 (List_1_t1234605051 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1234605051 *, const RuntimeMethod*))List_1__ctor_m3713859815_gshared)(__this, method);
}
// System.Void UnityEngine.UI.VertexHelper::GetUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" IL2CPP_METHOD_ATTR void VertexHelper_GetUIVertexStream_m785241639 (VertexHelper_t2453304189 * __this, List_1_t1234605051 * p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.UI.VertexHelper::get_currentIndexCount()
extern "C" IL2CPP_METHOD_ATTR int32_t VertexHelper_get_currentIndexCount_m2916736969 (VertexHelper_t2453304189 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
inline UIVertex_t4057497605  List_1_get_Item_m457221236 (List_1_t1234605051 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  UIVertex_t4057497605  (*) (List_1_t1234605051 *, int32_t, const RuntimeMethod*))List_1_get_Item_m457221236_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m2057272351 (List_1_t1234605051 * __this, int32_t p0, UIVertex_t4057497605  p1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1234605051 *, int32_t, UIVertex_t4057497605 , const RuntimeMethod*))List_1_set_Item_m2057272351_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.UI.VertexHelper::SetUIVertex(UnityEngine.UIVertex,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void VertexHelper_SetUIVertex_m3094993826 (VertexHelper_t2453304189 * __this, UIVertex_t4057497605  p0, int32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m20417929 (Behaviour_t1437897464 * __this, bool p0, const RuntimeMethod* method);
// System.Void TimeLoop::Load_Del()
extern "C" IL2CPP_METHOD_ATTR void TimeLoop_Load_Del_m1745856296 (TimeLoop_t468784922 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
extern "C" IL2CPP_METHOD_ATTR float Time_get_time_m2907476221 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Collections.IEnumerator TimeLoop::_Reset()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TimeLoop__Reset_m1745416133 (TimeLoop_t468784922 * __this, const RuntimeMethod* method);
// System.Void TimeLoop/<_Reset>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3C_ResetU3Ec__Iterator0__ctor_m3294748105 (U3C_ResetU3Ec__Iterator0_t24904354 * __this, const RuntimeMethod* method);
// System.Void Void_IntDel::Invoke(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Void_IntDel_Invoke_m2136999072 (Void_IntDel_t3049649234 * __this, int32_t ___n0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Clamp_m3350697880 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void Tween::set_f(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Tween_set_f_m2683448068 (Tween_t251520763 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Tween::Update_One()
extern "C" IL2CPP_METHOD_ATTR void Tween_Update_One_m1576375117 (Tween_t251520763 * __this, const RuntimeMethod* method);
// System.Void Tween::Update_Loop()
extern "C" IL2CPP_METHOD_ATTR void Tween_Update_Loop_m2544562173 (Tween_t251520763 * __this, const RuntimeMethod* method);
// System.Void Tween::Update_Pingpong()
extern "C" IL2CPP_METHOD_ATTR void Tween_Update_Pingpong_m2382596180 (Tween_t251520763 * __this, const RuntimeMethod* method);
// System.Single Tween::get_f()
extern "C" IL2CPP_METHOD_ATTR float Tween_get_f_m702625410 (Tween_t251520763 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
extern "C" IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m2125563588 (AnimationCurve_t3046754366 * __this, float p0, const RuntimeMethod* method);
// System.Void Void_FloatDel::Invoke(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Void_FloatDel_Invoke_m2708042268 (Void_FloatDel_t2690466815 * __this, float ___n0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Tween>::.ctor()
inline void List_1__ctor_m2923797854 (List_1_t1723595505 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1723595505 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void Tween::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Tween__ctor_m3828688439 (Tween_t251520763 * __this, const RuntimeMethod* method);
// System.Void Tween::Update()
extern "C" IL2CPP_METHOD_ATTR void Tween_Update_m2885568604 (Tween_t251520763 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern "C" IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m753527255 (Behaviour_t1437897464 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Tween>::get_Count()
inline int32_t List_1_get_Count_m1316380031 (List_1_t1723595505 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1723595505 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Color__ctor_m286683560 (Color_t2555686324 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void Void_FloatDel::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Void_FloatDel__ctor_m2051256971 (Void_FloatDel_t2690466815 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.MaskableGraphic>()
inline MaskableGraphic_t3839221559 * Component_GetComponent_TisMaskableGraphic_t3839221559_m1169390343 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  MaskableGraphic_t3839221559 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::op_Subtraction(UnityEngine.Color,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_op_Subtraction_m181229690 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, Color_t2555686324  p1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_op_Multiply_m2887457390 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::op_Addition(UnityEngine.Color,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_op_Addition_m3293657895 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, Color_t2555686324  p1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_Euler_m1803555822 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localRotation_m19445462 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method);
// System.Void TxtCon::AddDirectory(TxtCon/PathObj)
extern "C" IL2CPP_METHOD_ATTR void TxtCon_AddDirectory_m2064543538 (TxtCon_t3340380335 * __this, PathObj_t4274847934  ___HowPath0, const RuntimeMethod* method);
// System.Boolean System.String::EndsWith(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_EndsWith_m1901926500 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.String System.IO.File::ReadAllText(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* File_ReadAllText_m2815479134 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2163913788 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method);
// System.IO.StreamWriter System.IO.File::CreateText(System.String)
extern "C" IL2CPP_METHOD_ATTR StreamWriter_t1266378904 * File_CreateText_m1585655010 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.IO.File::Delete(System.String)
extern "C" IL2CPP_METHOD_ATTR void File_Delete_m321251800 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void Void_BoolDel::Invoke(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Void_BoolDel_Invoke_m1424525850 (Void_BoolDel_t1563598436 * __this, bool ___b0, const RuntimeMethod* method);
// System.Void Void_IntIntDel::Invoke(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Void_IntIntDel_Invoke_m1069980505 (Void_IntIntDel_t3257518218 * __this, int32_t ___m0, int32_t ___n1, const RuntimeMethod* method);
// System.Void Void_Texture2DDel::Invoke(UnityEngine.Texture2D)
extern "C" IL2CPP_METHOD_ATTR void Void_Texture2DDel_Invoke_m42601466 (Void_Texture2DDel_t3998872356 * __this, Texture2D_t3840446185 * ___Im0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m1715369213 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ButtObj::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ButtObj__ctor_m2484122873 (ButtObj_t1384809709 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ButtObj::LoadOut()
extern "C" IL2CPP_METHOD_ATTR void ButtObj_LoadOut_m3695596364 (ButtObj_t1384809709 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ButtObj_LoadOut_m3695596364_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VoidDel_t2721053205 * L_0 = __this->get_Del_4();
		intptr_t L_1 = (intptr_t)ButtObj_U3CLoadOutU3Em__0_m726817463_RuntimeMethod_var;
		VoidDel_t2721053205 * L_2 = (VoidDel_t2721053205 *)il2cpp_codegen_object_new(VoidDel_t2721053205_il2cpp_TypeInfo_var);
		VoidDel__ctor_m1452115049(L_2, __this, L_1, /*hidden argument*/NULL);
		Delegate_t1188392813 * L_3 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		__this->set_Del_4(((VoidDel_t2721053205 *)CastclassSealed((RuntimeObject*)L_3, VoidDel_t2721053205_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void ButtObj::LoadClose()
extern "C" IL2CPP_METHOD_ATTR void ButtObj_LoadClose_m1126349390 (ButtObj_t1384809709 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ButtObj_LoadClose_m1126349390_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VoidDel_t2721053205 * L_0 = __this->get_Del_4();
		intptr_t L_1 = (intptr_t)ButtObj_U3CLoadCloseU3Em__1_m3902895995_RuntimeMethod_var;
		VoidDel_t2721053205 * L_2 = (VoidDel_t2721053205 *)il2cpp_codegen_object_new(VoidDel_t2721053205_il2cpp_TypeInfo_var);
		VoidDel__ctor_m1452115049(L_2, __this, L_1, /*hidden argument*/NULL);
		Delegate_t1188392813 * L_3 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		__this->set_Del_4(((VoidDel_t2721053205 *)CastclassSealed((RuntimeObject*)L_3, VoidDel_t2721053205_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void ButtObj::<LoadOut>m__0()
extern "C" IL2CPP_METHOD_ATTR void ButtObj_U3CLoadOutU3Em__0_m726817463 (ButtObj_t1384809709 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ButtObj_U3CLoadOutU3Em__0_m726817463_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ButtObj::<LoadClose>m__1()
extern "C" IL2CPP_METHOD_ATTR void ButtObj_U3CLoadCloseU3Em__1_m3902895995 (ButtObj_t1384809709 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ButtonTest::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ButtonTest__ctor_m732164781 (ButtonTest_t3454622828 * __this, const RuntimeMethod* method)
{
	{
		ButtObj__ctor_m2484122873(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ButtonTest::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void ButtonTest_OnPointerClick_m210394707 (ButtonTest_t3454622828 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ButtonTest_OnPointerClick_m210394707_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral4082700035, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ButtonTest::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void ButtonTest_OnPointerDown_m897068878 (ButtonTest_t3454622828 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ButtonTest_OnPointerDown_m897068878_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PointerEventData_t3807901092 * L_0 = ___eventData0;
		int32_t L_1 = PointerEventData_get_pointerId_m1200356155(L_0, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral332388519, L_3, /*hidden argument*/NULL);
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ButtonTest::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void ButtonTest_OnPointerUp_m3216703716 (ButtonTest_t3454622828 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ButtonTest_OnPointerUp_m3216703716_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PointerEventData_t3807901092 * L_0 = ___eventData0;
		int32_t L_1 = PointerEventData_get_pointerId_m1200356155(L_0, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral944755346, L_3, /*hidden argument*/NULL);
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ButtonTest::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void ButtonTest_OnPointerEnter_m1681552836 (ButtonTest_t3454622828 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ButtonTest_OnPointerEnter_m1681552836_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4181545892, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ButtonTest::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void ButtonTest_OnPointerExit_m22094742 (ButtonTest_t3454622828 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ButtonTest_OnPointerExit_m22094742_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral883380564, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ButtonTest::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void ButtonTest_OnDrag_m3819574937 (ButtonTest_t3454622828 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ButtonTest_OnDrag_m3819574937_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4288010602, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ColliderDetect::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ColliderDetect__ctor_m3056952211 (ColliderDetect_t2731829106 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ColliderDetect__ctor_m3056952211_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t4278874368 * L_0 = (List_1_t4278874368 *)il2cpp_codegen_object_new(List_1_t4278874368_il2cpp_TypeInfo_var);
		List_1__ctor_m537059739(L_0, /*hidden argument*/List_1__ctor_m537059739_RuntimeMethod_var);
		__this->set_AllCollider_4(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Collider2D ColliderDetect::get_LastCollider()
extern "C" IL2CPP_METHOD_ATTR Collider2D_t2806799626 * ColliderDetect_get_LastCollider_m3358013447 (ColliderDetect_t2731829106 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ColliderDetect_get_LastCollider_m3358013447_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t4278874368 * L_0 = __this->get_AllCollider_4();
		int32_t L_1 = List_1_get_Count_m2200761832(L_0, /*hidden argument*/List_1_get_Count_m2200761832_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		List_1_t4278874368 * L_2 = __this->get_AllCollider_4();
		List_1_t4278874368 * L_3 = __this->get_AllCollider_4();
		int32_t L_4 = List_1_get_Count_m2200761832(L_3, /*hidden argument*/List_1_get_Count_m2200761832_RuntimeMethod_var);
		Collider2D_t2806799626 * L_5 = List_1_get_Item_m686969124(L_2, ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)), /*hidden argument*/List_1_get_Item_m686969124_RuntimeMethod_var);
		return L_5;
	}

IL_002a:
	{
		return (Collider2D_t2806799626 *)NULL;
	}
}
// System.Void ColliderDetect::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" IL2CPP_METHOD_ATTR void ColliderDetect_OnTriggerEnter2D_m3833022960 (ColliderDetect_t2731829106 * __this, Collider2D_t2806799626 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ColliderDetect_OnTriggerEnter2D_m3833022960_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_t2806799626 * L_0 = ___other0;
		String_t* L_1 = Component_get_tag_m2716693327(L_0, /*hidden argument*/NULL);
		String_t* L_2 = __this->get_ToTag_5();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_4 = __this->get_ToTag_5();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0032;
		}
	}

IL_0026:
	{
		List_1_t4278874368 * L_6 = __this->get_AllCollider_4();
		Collider2D_t2806799626 * L_7 = ___other0;
		List_1_Add_m552355349(L_6, L_7, /*hidden argument*/List_1_Add_m552355349_RuntimeMethod_var);
	}

IL_0032:
	{
		return;
	}
}
// System.Void ColliderDetect::OnTriggerExit2D(UnityEngine.Collider2D)
extern "C" IL2CPP_METHOD_ATTR void ColliderDetect_OnTriggerExit2D_m2581985821 (ColliderDetect_t2731829106 * __this, Collider2D_t2806799626 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ColliderDetect_OnTriggerExit2D_m2581985821_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t4278874368 * L_0 = __this->get_AllCollider_4();
		Collider2D_t2806799626 * L_1 = ___other0;
		List_1_Remove_m1178666607(L_0, L_1, /*hidden argument*/List_1_Remove_m1178666607_RuntimeMethod_var);
		return;
	}
}
// System.Boolean ColliderDetect::FindObj(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR bool ColliderDetect_FindObj_m3525428455 (ColliderDetect_t2731829106 * __this, GameObject_t1113636619 * ___Obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ColliderDetect_FindObj_m3525428455_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Collider2D_t2806799626 * V_0 = NULL;
	Enumerator_t1873150949  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t4278874368 * L_0 = __this->get_AllCollider_4();
		Enumerator_t1873150949  L_1 = List_1_GetEnumerator_m1001098768(L_0, /*hidden argument*/List_1_GetEnumerator_m1001098768_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0031;
		}

IL_0011:
		{
			Collider2D_t2806799626 * L_2 = Enumerator_get_Current_m785251069((Enumerator_t1873150949 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m785251069_RuntimeMethod_var);
			V_0 = L_2;
			Collider2D_t2806799626 * L_3 = V_0;
			GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(L_3, /*hidden argument*/NULL);
			GameObject_t1113636619 * L_5 = ___Obj0;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_6 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0031;
			}
		}

IL_002a:
		{
			V_2 = (bool)1;
			IL2CPP_LEAVE(0x52, FINALLY_0042);
		}

IL_0031:
		{
			bool L_7 = Enumerator_MoveNext_m3528958210((Enumerator_t1873150949 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m3528958210_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0011;
			}
		}

IL_003d:
		{
			IL2CPP_LEAVE(0x50, FINALLY_0042);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m436229931((Enumerator_t1873150949 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m436229931_RuntimeMethod_var);
		IL2CPP_END_FINALLY(66)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_JUMP_TBL(0x52, IL_0052)
		IL2CPP_JUMP_TBL(0x50, IL_0050)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0050:
	{
		return (bool)0;
	}

IL_0052:
	{
		bool L_8 = V_2;
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DiceDiceGameObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DiceDiceGameObject__ctor_m3542747046 (DiceDiceGameObject_t4246336230 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiceDiceGameObject__ctor_m3542747046_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dice_1__ctor_m622095197(__this, /*hidden argument*/Dice_1__ctor_m622095197_RuntimeMethod_var);
		return;
	}
}
// System.Void DiceDiceGameObject::Start()
extern "C" IL2CPP_METHOD_ATTR void DiceDiceGameObject_Start_m3644567674 (DiceDiceGameObject_t4246336230 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void DiceDiceGameObject::Update()
extern "C" IL2CPP_METHOD_ATTR void DiceDiceGameObject_Update_m3534879984 (DiceDiceGameObject_t4246336230 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DiceGameObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DiceGameObject__ctor_m912715460 (DiceGameObject_t232715106 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiceGameObject__ctor_m912715460_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dice_1__ctor_m3482360944(__this, /*hidden argument*/Dice_1__ctor_m3482360944_RuntimeMethod_var);
		return;
	}
}
// System.Void DiceGameObject::test()
extern "C" IL2CPP_METHOD_ATTR void DiceGameObject_test_m1143595968 (DiceGameObject_t232715106 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiceGameObject_test_m1143595968_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001b;
	}

IL_0007:
	{
		int32_t L_0 = Dice_1_GetAInt_m1474206182(__this, /*hidden argument*/Dice_1_GetAInt_m1474206182_RuntimeMethod_var);
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_1);
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_001b:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)100))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DiceInt::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DiceInt__ctor_m42780435 (DiceInt_t728545408 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiceInt__ctor_m42780435_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dice_1__ctor_m3948654876(__this, /*hidden argument*/Dice_1__ctor_m3948654876_RuntimeMethod_var);
		return;
	}
}
// System.Void DiceInt::Test()
extern "C" IL2CPP_METHOD_ATTR void DiceInt_Test_m2457352367 (DiceInt_t728545408 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiceInt_Test_m2457352367_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001b;
	}

IL_0007:
	{
		int32_t L_0 = Dice_1_GetAInt_m3540587861(__this, /*hidden argument*/Dice_1_GetAInt_m3540587861_RuntimeMethod_var);
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_1);
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_001b:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)1000))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DiceString::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DiceString__ctor_m2183416959 (DiceString_t1417265547 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiceString__ctor_m2183416959_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dice_1__ctor_m994750923(__this, /*hidden argument*/Dice_1__ctor_m994750923_RuntimeMethod_var);
		return;
	}
}
// System.Void DiceString::Test()
extern "C" IL2CPP_METHOD_ATTR void DiceString_Test_m3521938962 (DiceString_t1417265547 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiceString_Test_m3521938962_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001b;
	}

IL_0007:
	{
		int32_t L_0 = Dice_1_GetAInt_m3781324307(__this, /*hidden argument*/Dice_1_GetAInt_m3781324307_RuntimeMethod_var);
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_1);
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_001b:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)1000))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DragButt::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DragButt__ctor_m2250402185 (DragButt_t1708563181 * __this, const RuntimeMethod* method)
{
	{
		ButtObj__ctor_m2484122873(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DragButt::get_Drag_V3()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  DragButt_get_Drag_V3_m402370484 (DragButt_t1708563181 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DragButt_get_Drag_V3_m402370484_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t3722313464  L_0 = __this->get_End_V3_6();
		Vector3_t3722313464  L_1 = __this->get_Start_V3_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void DragButt::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void DragButt_OnPointerDown_m923556467 (DragButt_t1708563181 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DragButt_OnPointerDown_m923556467_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PointerEventData_t3807901092 * L_0 = ___eventData0;
		Vector2_t2156229523  L_1 = PointerEventData_get_position_m437660275(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->set_Start_V3_5(L_2);
		PointerEventData_t3807901092 * L_3 = ___eventData0;
		Vector2_t2156229523  L_4 = PointerEventData_get_position_m437660275(L_3, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		__this->set_End_V3_6(L_5);
		Void_Vector3Del_t2915247505 * L_6 = __this->get_Start_Del_7();
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		Void_Vector3Del_t2915247505 * L_7 = __this->get_Start_Del_7();
		PointerEventData_t3807901092 * L_8 = ___eventData0;
		Vector2_t2156229523  L_9 = PointerEventData_get_position_m437660275(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_10 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		Void_Vector3Del_Invoke_m3646649775(L_7, L_10, /*hidden argument*/NULL);
	}

IL_0043:
	{
		return;
	}
}
// System.Void DragButt::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void DragButt_OnDrag_m3639072537 (DragButt_t1708563181 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DragButt_OnDrag_m3639072537_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PointerEventData_t3807901092 * L_0 = ___eventData0;
		Vector2_t2156229523  L_1 = PointerEventData_get_position_m437660275(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->set_End_V3_6(L_2);
		Void_Vector3Del_t2915247505 * L_3 = __this->get_Update_Del_8();
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		Void_Vector3Del_t2915247505 * L_4 = __this->get_Update_Del_8();
		PointerEventData_t3807901092 * L_5 = ___eventData0;
		Vector2_t2156229523  L_6 = PointerEventData_get_position_m437660275(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_7 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		Void_Vector3Del_Invoke_m3646649775(L_4, L_7, /*hidden argument*/NULL);
	}

IL_0032:
	{
		return;
	}
}
// System.Void DragButt::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void DragButt_OnPointerUp_m797636537 (DragButt_t1708563181 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DragButt_OnPointerUp_m797636537_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Void_Vector3Del_t2915247505 * L_0 = __this->get_End_Del_9();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Void_Vector3Del_t2915247505 * L_1 = __this->get_End_Del_9();
		PointerEventData_t3807901092 * L_2 = ___eventData0;
		Vector2_t2156229523  L_3 = PointerEventData_get_position_m437660275(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		Void_Vector3Del_Invoke_m3646649775(L_1, L_4, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// UnityEngine.Vector3 DragButt::GetLocalV3(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  DragButt_GetLocalV3_m3218047294 (DragButt_t1708563181 * __this, Vector3_t3722313464  ___V30, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DragButt_GetLocalV3_m3218047294_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t3722313464  L_0 = ___V30;
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_2 = Transform_get_parent_m835071599(L_1, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_0, L_3, /*hidden argument*/NULL);
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_6 = Transform_get_parent_m835071599(L_5, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = Transform_get_lossyScale_m465496651(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		float L_8 = (&V_0)->get_x_2();
		Vector3_t3722313464  L_9 = Vector3_op_Division_m510815599(NULL /*static, unused*/, L_4, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FileCon::.ctor()
extern "C" IL2CPP_METHOD_ATTR void FileCon__ctor_m3675787584 (FileCon_t3780093993 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean FileCon::FileExists(System.String)
extern "C" IL2CPP_METHOD_ATTR bool FileCon_FileExists_m208733188 (RuntimeObject * __this /* static, unused */, String_t* ___URL0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___URL0;
		bool L_1 = File_Exists_m3943585060(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean FileCon::DirectoryExists(System.String)
extern "C" IL2CPP_METHOD_ATTR bool FileCon_DirectoryExists_m2457297660 (RuntimeObject * __this /* static, unused */, String_t* ___URL0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___URL0;
		bool L_1 = Directory_Exists_m1484791558(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String[] FileCon::GetFiles(System.String)
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* FileCon_GetFiles_m3100483592 (RuntimeObject * __this /* static, unused */, String_t* ___URL0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___URL0;
		StringU5BU5D_t1281789340* L_1 = Directory_GetFiles_m932257245(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String[] FileCon::GetDirectorys(System.String)
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* FileCon_GetDirectorys_m2457216495 (RuntimeObject * __this /* static, unused */, String_t* ___URL0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___URL0;
		StringU5BU5D_t1281789340* L_1 = Directory_GetDirectories_m1966820948(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void FileCon::CopyDirectory(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void FileCon_CopyDirectory_m2289805401 (RuntimeObject * __this /* static, unused */, String_t* ___FormURL0, String_t* ___ToURL1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FileCon_CopyDirectory_m2289805401_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	String_t* V_1 = NULL;
	StringU5BU5D_t1281789340* V_2 = NULL;
	int32_t V_3 = 0;
	StringU5BU5D_t1281789340* V_4 = NULL;
	String_t* V_5 = NULL;
	StringU5BU5D_t1281789340* V_6 = NULL;
	int32_t V_7 = 0;
	{
		String_t* L_0 = ___ToURL1;
		Directory_CreateDirectory_m751642867(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___FormURL0;
		StringU5BU5D_t1281789340* L_2 = FileCon_GetFiles_m3100483592(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		StringU5BU5D_t1281789340* L_3 = V_0;
		V_2 = L_3;
		V_3 = 0;
		goto IL_0036;
	}

IL_0017:
	{
		StringU5BU5D_t1281789340* L_4 = V_2;
		int32_t L_5 = V_3;
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		String_t* L_8 = V_1;
		String_t* L_9 = ___ToURL1;
		String_t* L_10 = V_1;
		String_t* L_11 = FileCon_PathName_m2998309428(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m3755062657(NULL /*static, unused*/, L_9, _stringLiteral3452614529, L_11, /*hidden argument*/NULL);
		File_Copy_m497281780(NULL /*static, unused*/, L_8, L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0036:
	{
		int32_t L_14 = V_3;
		StringU5BU5D_t1281789340* L_15 = V_2;
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_16 = ___FormURL0;
		StringU5BU5D_t1281789340* L_17 = FileCon_GetDirectorys_m2457216495(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		V_4 = L_17;
		StringU5BU5D_t1281789340* L_18 = V_4;
		V_6 = L_18;
		V_7 = 0;
		goto IL_0079;
	}

IL_0053:
	{
		StringU5BU5D_t1281789340* L_19 = V_6;
		int32_t L_20 = V_7;
		int32_t L_21 = L_20;
		String_t* L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		V_5 = L_22;
		String_t* L_23 = V_5;
		String_t* L_24 = ___ToURL1;
		String_t* L_25 = V_5;
		String_t* L_26 = FileCon_PathName_m2998309428(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_27 = String_Concat_m3755062657(NULL /*static, unused*/, L_24, _stringLiteral3452614529, L_26, /*hidden argument*/NULL);
		FileCon_CopyDirectory_m2289805401(NULL /*static, unused*/, L_23, L_27, /*hidden argument*/NULL);
		int32_t L_28 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_0079:
	{
		int32_t L_29 = V_7;
		StringU5BU5D_t1281789340* L_30 = V_6;
		if ((((int32_t)L_29) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_30)->max_length)))))))
		{
			goto IL_0053;
		}
	}
	{
		return;
	}
}
// System.String[] FileCon::Get_Path(System.String)
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* FileCon_Get_Path_m420164848 (RuntimeObject * __this /* static, unused */, String_t* ___FromPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FileCon_Get_Path_m420164848_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___FromPath0;
		CharU5BU5D_t3528271667* L_1 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t3528271667* L_2 = L_1;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)92));
		CharU5BU5D_t3528271667* L_3 = L_2;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)47));
		StringU5BU5D_t1281789340* L_4 = String_Split_m3646115398(L_0, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String FileCon::PathName(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* FileCon_PathName_m2998309428 (RuntimeObject * __this /* static, unused */, String_t* ___FormPath0, const RuntimeMethod* method)
{
	StringU5BU5D_t1281789340* V_0 = NULL;
	{
		String_t* L_0 = ___FormPath0;
		StringU5BU5D_t1281789340* L_1 = FileCon_Get_Path_m420164848(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		StringU5BU5D_t1281789340* L_2 = V_0;
		StringU5BU5D_t1281789340* L_3 = V_0;
		int32_t L_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length)))), (int32_t)1));
		String_t* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void G0_End_UICon::.ctor()
extern "C" IL2CPP_METHOD_ATTR void G0_End_UICon__ctor_m775630827 (G0_End_UICon_t3782924102 * __this, const RuntimeMethod* method)
{
	{
		ObjArray__ctor_m4268133846(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void G0_End_UICon::Start()
extern "C" IL2CPP_METHOD_ATTR void G0_End_UICon_Start_m1024664937 (G0_End_UICon_t3782924102 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (G0_End_UICon_Start_m1024664937_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VoidDel_t2721053205 * G_B2_0 = NULL;
	ButtObj_t1384809709 * G_B2_1 = NULL;
	VoidDel_t2721053205 * G_B1_0 = NULL;
	ButtObj_t1384809709 * G_B1_1 = NULL;
	{
		_UI_t1688782487 * L_0 = __this->get_address_of_UI_5();
		ButtObj_t1384809709 * L_1 = L_0->get_OutButt_0();
		ButtObj_t1384809709 * L_2 = L_1;
		VoidDel_t2721053205 * L_3 = L_2->get_Del_4();
		VoidDel_t2721053205 * L_4 = ((G0_End_UICon_t3782924102_StaticFields*)il2cpp_codegen_static_fields_for(G0_End_UICon_t3782924102_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_6();
		G_B1_0 = L_3;
		G_B1_1 = L_2;
		if (L_4)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_2;
			goto IL_0029;
		}
	}
	{
		intptr_t L_5 = (intptr_t)G0_End_UICon_U3CStartU3Em__0_m1037383738_RuntimeMethod_var;
		VoidDel_t2721053205 * L_6 = (VoidDel_t2721053205 *)il2cpp_codegen_object_new(VoidDel_t2721053205_il2cpp_TypeInfo_var);
		VoidDel__ctor_m1452115049(L_6, NULL, L_5, /*hidden argument*/NULL);
		((G0_End_UICon_t3782924102_StaticFields*)il2cpp_codegen_static_fields_for(G0_End_UICon_t3782924102_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_6(L_6);
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
	}

IL_0029:
	{
		VoidDel_t2721053205 * L_7 = ((G0_End_UICon_t3782924102_StaticFields*)il2cpp_codegen_static_fields_for(G0_End_UICon_t3782924102_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_6();
		Delegate_t1188392813 * L_8 = Delegate_Combine_m1859655160(NULL /*static, unused*/, G_B2_0, L_7, /*hidden argument*/NULL);
		G_B2_1->set_Del_4(((VoidDel_t2721053205 *)CastclassSealed((RuntimeObject*)L_8, VoidDel_t2721053205_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void G0_End_UICon::Lose_Open()
extern "C" IL2CPP_METHOD_ATTR void G0_End_UICon_Lose_Open_m2031812526 (G0_End_UICon_t3782924102 * __this, const RuntimeMethod* method)
{
	{
		ObjArray_OnOnlyObjs_m2386750287(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void G0_End_UICon::Win_Open(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void G0_End_UICon_Win_Open_m511383927 (G0_End_UICon_t3782924102 * __this, int32_t ___Score0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (G0_End_UICon_Win_Open_m511383927_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = PlayerPrefs_GetInt_m1299643124(NULL /*static, unused*/, _stringLiteral772591046, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2 = ___Score0;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = ___Score0;
		PlayerPrefs_SetInt_m2842000469(NULL /*static, unused*/, _stringLiteral772591046, L_3, /*hidden argument*/NULL);
		int32_t L_4 = ___Score0;
		V_0 = L_4;
	}

IL_0020:
	{
		ObjArray_OnOnlyObjs_m2386750287(__this, 1, /*hidden argument*/NULL);
		_UI_t1688782487 * L_5 = __this->get_address_of_UI_5();
		Text_t1901882714 * L_6 = L_5->get_Score_Text_1();
		String_t* L_7 = Int32_ToString_m141394615((int32_t*)(&___Score0), /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_7);
		_UI_t1688782487 * L_8 = __this->get_address_of_UI_5();
		Text_t1901882714 * L_9 = L_8->get_Top_Score_Text_2();
		String_t* L_10 = Int32_ToString_m141394615((int32_t*)(&V_0), /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_10);
		return;
	}
}
// System.Void G0_End_UICon::<Start>m__0()
extern "C" IL2CPP_METHOD_ATTR void G0_End_UICon_U3CStartU3Em__0_m1037383738 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (G0_End_UICon_U3CStartU3Em__0_m1037383738_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral3451566041, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: G0_End_UICon/_UI
extern "C" void _UI_t1688782487_marshal_pinvoke(const _UI_t1688782487& unmarshaled, _UI_t1688782487_marshaled_pinvoke& marshaled)
{
	Exception_t* ___OutButt_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'OutButt' of type '_UI': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___OutButt_0Exception, NULL, NULL);
}
extern "C" void _UI_t1688782487_marshal_pinvoke_back(const _UI_t1688782487_marshaled_pinvoke& marshaled, _UI_t1688782487& unmarshaled)
{
	Exception_t* ___OutButt_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'OutButt' of type '_UI': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___OutButt_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: G0_End_UICon/_UI
extern "C" void _UI_t1688782487_marshal_pinvoke_cleanup(_UI_t1688782487_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: G0_End_UICon/_UI
extern "C" void _UI_t1688782487_marshal_com(const _UI_t1688782487& unmarshaled, _UI_t1688782487_marshaled_com& marshaled)
{
	Exception_t* ___OutButt_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'OutButt' of type '_UI': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___OutButt_0Exception, NULL, NULL);
}
extern "C" void _UI_t1688782487_marshal_com_back(const _UI_t1688782487_marshaled_com& marshaled, _UI_t1688782487& unmarshaled)
{
	Exception_t* ___OutButt_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'OutButt' of type '_UI': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___OutButt_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: G0_End_UICon/_UI
extern "C" void _UI_t1688782487_marshal_com_cleanup(_UI_t1688782487_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void G0_Lv_Data::.ctor()
extern "C" IL2CPP_METHOD_ATTR void G0_Lv_Data__ctor_m4253958676 (G0_Lv_Data_t3685245493 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void G0_Main_UICon::.ctor()
extern "C" IL2CPP_METHOD_ATTR void G0_Main_UICon__ctor_m1257050959 (G0_Main_UICon_t3463799450 * __this, const RuntimeMethod* method)
{
	{
		ObjArray__ctor_m4268133846(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void G0_Main_UICon::Start()
extern "C" IL2CPP_METHOD_ATTR void G0_Main_UICon_Start_m2007940339 (G0_Main_UICon_t3463799450 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (G0_Main_UICon_Start_m2007940339_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CStartU3Ec__AnonStorey0_t898297963 * V_1 = NULL;
	{
		_UI_t1624633473 * L_0 = __this->get_address_of_UI_5();
		ButtObj_t1384809709 * L_1 = L_0->get_TButt_0();
		ButtObj_t1384809709 * L_2 = L_1;
		VoidDel_t2721053205 * L_3 = L_2->get_Del_4();
		intptr_t L_4 = (intptr_t)G0_Main_UICon_U3CStartU3Em__0_m1903770879_RuntimeMethod_var;
		VoidDel_t2721053205 * L_5 = (VoidDel_t2721053205 *)il2cpp_codegen_object_new(VoidDel_t2721053205_il2cpp_TypeInfo_var);
		VoidDel__ctor_m1452115049(L_5, __this, L_4, /*hidden argument*/NULL);
		Delegate_t1188392813 * L_6 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		L_2->set_Del_4(((VoidDel_t2721053205 *)CastclassSealed((RuntimeObject*)L_6, VoidDel_t2721053205_il2cpp_TypeInfo_var)));
		_UI_t1624633473 * L_7 = __this->get_address_of_UI_5();
		ButtObj_t1384809709 * L_8 = L_7->get_TOutButt_1();
		ButtObj_t1384809709 * L_9 = L_8;
		VoidDel_t2721053205 * L_10 = L_9->get_Del_4();
		intptr_t L_11 = (intptr_t)G0_Main_UICon_U3CStartU3Em__1_m1903836415_RuntimeMethod_var;
		VoidDel_t2721053205 * L_12 = (VoidDel_t2721053205 *)il2cpp_codegen_object_new(VoidDel_t2721053205_il2cpp_TypeInfo_var);
		VoidDel__ctor_m1452115049(L_12, __this, L_11, /*hidden argument*/NULL);
		Delegate_t1188392813 * L_13 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_10, L_12, /*hidden argument*/NULL);
		L_9->set_Del_4(((VoidDel_t2721053205 *)CastclassSealed((RuntimeObject*)L_13, VoidDel_t2721053205_il2cpp_TypeInfo_var)));
		V_0 = 0;
		goto IL_00a2;
	}

IL_005f:
	{
		U3CStartU3Ec__AnonStorey0_t898297963 * L_14 = (U3CStartU3Ec__AnonStorey0_t898297963 *)il2cpp_codegen_object_new(U3CStartU3Ec__AnonStorey0_t898297963_il2cpp_TypeInfo_var);
		U3CStartU3Ec__AnonStorey0__ctor_m179079137(L_14, /*hidden argument*/NULL);
		V_1 = L_14;
		U3CStartU3Ec__AnonStorey0_t898297963 * L_15 = V_1;
		int32_t L_16 = V_0;
		L_15->set__i_0(L_16);
		_UI_t1624633473 * L_17 = __this->get_address_of_UI_5();
		ObjArray_t2087238592 * L_18 = L_17->get_ButtsOA_2();
		int32_t L_19 = V_0;
		ButtObj_t1384809709 * L_20 = ObjArray_GetObjT_TisButtObj_t1384809709_m2868763048(L_18, L_19, /*hidden argument*/ObjArray_GetObjT_TisButtObj_t1384809709_m2868763048_RuntimeMethod_var);
		ButtObj_t1384809709 * L_21 = L_20;
		VoidDel_t2721053205 * L_22 = L_21->get_Del_4();
		U3CStartU3Ec__AnonStorey0_t898297963 * L_23 = V_1;
		intptr_t L_24 = (intptr_t)U3CStartU3Ec__AnonStorey0_U3CU3Em__0_m3925152730_RuntimeMethod_var;
		VoidDel_t2721053205 * L_25 = (VoidDel_t2721053205 *)il2cpp_codegen_object_new(VoidDel_t2721053205_il2cpp_TypeInfo_var);
		VoidDel__ctor_m1452115049(L_25, L_23, L_24, /*hidden argument*/NULL);
		Delegate_t1188392813 * L_26 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_22, L_25, /*hidden argument*/NULL);
		L_21->set_Del_4(((VoidDel_t2721053205 *)CastclassSealed((RuntimeObject*)L_26, VoidDel_t2721053205_il2cpp_TypeInfo_var)));
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_00a2:
	{
		int32_t L_28 = V_0;
		_UI_t1624633473 * L_29 = __this->get_address_of_UI_5();
		ObjArray_t2087238592 * L_30 = L_29->get_ButtsOA_2();
		ObjU5BU5D_t778053183* L_31 = L_30->get_AllObj_4();
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_31)->max_length)))))))
		{
			goto IL_005f;
		}
	}
	{
		ObjArray_OnOnlyObjs_m2386750287(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void G0_Main_UICon::<Start>m__0()
extern "C" IL2CPP_METHOD_ATTR void G0_Main_UICon_U3CStartU3Em__0_m1903770879 (G0_Main_UICon_t3463799450 * __this, const RuntimeMethod* method)
{
	{
		ObjArray_OnOnlyObjs_m2386750287(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void G0_Main_UICon::<Start>m__1()
extern "C" IL2CPP_METHOD_ATTR void G0_Main_UICon_U3CStartU3Em__1_m1903836415 (G0_Main_UICon_t3463799450 * __this, const RuntimeMethod* method)
{
	{
		ObjArray_OnOnlyObjs_m2386750287(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void G0_Main_UICon/<Start>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__AnonStorey0__ctor_m179079137 (U3CStartU3Ec__AnonStorey0_t898297963 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void G0_Main_UICon/<Start>c__AnonStorey0::<>m__0()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__AnonStorey0_U3CU3Em__0_m3925152730 (U3CStartU3Ec__AnonStorey0_t898297963 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__AnonStorey0_U3CU3Em__0_m3925152730_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get__i_0();
		IL2CPP_RUNTIME_CLASS_INIT(G0_Play_UICon_t46452308_il2cpp_TypeInfo_var);
		((G0_Play_UICon_t46452308_StaticFields*)il2cpp_codegen_static_fields_for(G0_Play_UICon_t46452308_il2cpp_TypeInfo_var))->set_Now_Lv_6(L_0);
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral4080627277, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: G0_Main_UICon/_UI
extern "C" void _UI_t1624633473_marshal_pinvoke(const _UI_t1624633473& unmarshaled, _UI_t1624633473_marshaled_pinvoke& marshaled)
{
	Exception_t* ___TButt_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'TButt' of type '_UI': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___TButt_0Exception, NULL, NULL);
}
extern "C" void _UI_t1624633473_marshal_pinvoke_back(const _UI_t1624633473_marshaled_pinvoke& marshaled, _UI_t1624633473& unmarshaled)
{
	Exception_t* ___TButt_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'TButt' of type '_UI': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___TButt_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: G0_Main_UICon/_UI
extern "C" void _UI_t1624633473_marshal_pinvoke_cleanup(_UI_t1624633473_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: G0_Main_UICon/_UI
extern "C" void _UI_t1624633473_marshal_com(const _UI_t1624633473& unmarshaled, _UI_t1624633473_marshaled_com& marshaled)
{
	Exception_t* ___TButt_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'TButt' of type '_UI': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___TButt_0Exception, NULL, NULL);
}
extern "C" void _UI_t1624633473_marshal_com_back(const _UI_t1624633473_marshaled_com& marshaled, _UI_t1624633473& unmarshaled)
{
	Exception_t* ___TButt_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'TButt' of type '_UI': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___TButt_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: G0_Main_UICon/_UI
extern "C" void _UI_t1624633473_marshal_com_cleanup(_UI_t1624633473_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void G0_Photo_UICon::.ctor()
extern "C" IL2CPP_METHOD_ATTR void G0_Photo_UICon__ctor_m2149168920 (G0_Photo_UICon_t1912912122 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean G0_Photo_UICon::get_IsOK()
extern "C" IL2CPP_METHOD_ATTR bool G0_Photo_UICon_get_IsOK_m988091250 (G0_Photo_UICon_t1912912122 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (G0_Photo_UICon_get_IsOK_m988091250_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		G0_Target_UICOn_t2128227474 * L_0 = ((G0_Target_UICOn_t2128227474_StaticFields*)il2cpp_codegen_static_fields_for(G0_Target_UICOn_t2128227474_il2cpp_TypeInfo_var))->get_Now_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		G0_Target_Data_t1917875166 * L_2 = __this->get_Data_6();
		String_t* L_3 = L_2->get_name_0();
		G0_Target_UICOn_t2128227474 * L_4 = ((G0_Target_UICOn_t2128227474_StaticFields*)il2cpp_codegen_static_fields_for(G0_Target_UICOn_t2128227474_il2cpp_TypeInfo_var))->get_Now_5();
		G0_Target_Data_t1917875166 * L_5 = L_4->get_Data_6();
		String_t* L_6 = L_5->get_name_0();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m920492651(NULL /*static, unused*/, L_3, L_6, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_7));
		goto IL_0032;
	}

IL_0031:
	{
		G_B3_0 = 0;
	}

IL_0032:
	{
		return (bool)G_B3_0;
	}
}
// System.Void G0_Photo_UICon::Start()
extern "C" IL2CPP_METHOD_ATTR void G0_Photo_UICon_Start_m4121861866 (G0_Photo_UICon_t1912912122 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (G0_Photo_UICon_Start_m4121861866_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Void_Vector3Del_t2915247505 * G_B4_0 = NULL;
	MoveDragButt_t3773719392 * G_B4_1 = NULL;
	Void_Vector3Del_t2915247505 * G_B3_0 = NULL;
	MoveDragButt_t3773719392 * G_B3_1 = NULL;
	{
		List_1_t3384986864 * L_0 = ((G0_Photo_UICon_t1912912122_StaticFields*)il2cpp_codegen_static_fields_for(G0_Photo_UICon_t1912912122_il2cpp_TypeInfo_var))->get_AllPhoto_4();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		List_1_t3384986864 * L_1 = (List_1_t3384986864 *)il2cpp_codegen_object_new(List_1_t3384986864_il2cpp_TypeInfo_var);
		List_1__ctor_m1692865676(L_1, /*hidden argument*/List_1__ctor_m1692865676_RuntimeMethod_var);
		((G0_Photo_UICon_t1912912122_StaticFields*)il2cpp_codegen_static_fields_for(G0_Photo_UICon_t1912912122_il2cpp_TypeInfo_var))->set_AllPhoto_4(L_1);
	}

IL_0014:
	{
		List_1_t3384986864 * L_2 = ((G0_Photo_UICon_t1912912122_StaticFields*)il2cpp_codegen_static_fields_for(G0_Photo_UICon_t1912912122_il2cpp_TypeInfo_var))->get_AllPhoto_4();
		List_1_Add_m1433744898(L_2, __this, /*hidden argument*/List_1_Add_m1433744898_RuntimeMethod_var);
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_4 = Transform_get_parent_m835071599(L_3, /*hidden argument*/NULL);
		__this->set_Start_parent_8(L_4);
		_UI_t4116017140 * L_5 = __this->get_address_of_UI_7();
		MoveDragButt_t3773719392 * L_6 = L_5->get_Butt_0();
		MoveDragButt_t3773719392 * L_7 = L_6;
		Void_Vector3Del_t2915247505 * L_8 = ((DragButt_t1708563181 *)L_7)->get_Start_Del_7();
		intptr_t L_9 = (intptr_t)G0_Photo_UICon_U3CStartU3Em__0_m1978002736_RuntimeMethod_var;
		Void_Vector3Del_t2915247505 * L_10 = (Void_Vector3Del_t2915247505 *)il2cpp_codegen_object_new(Void_Vector3Del_t2915247505_il2cpp_TypeInfo_var);
		Void_Vector3Del__ctor_m1002480554(L_10, __this, L_9, /*hidden argument*/NULL);
		Delegate_t1188392813 * L_11 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/NULL);
		((DragButt_t1708563181 *)L_7)->set_Start_Del_7(((Void_Vector3Del_t2915247505 *)CastclassSealed((RuntimeObject*)L_11, Void_Vector3Del_t2915247505_il2cpp_TypeInfo_var)));
		_UI_t4116017140 * L_12 = __this->get_address_of_UI_7();
		MoveDragButt_t3773719392 * L_13 = L_12->get_Butt_0();
		MoveDragButt_t3773719392 * L_14 = L_13;
		Void_Vector3Del_t2915247505 * L_15 = ((DragButt_t1708563181 *)L_14)->get_Start_Del_7();
		Void_Vector3Del_t2915247505 * L_16 = ((G0_Photo_UICon_t1912912122_StaticFields*)il2cpp_codegen_static_fields_for(G0_Photo_UICon_t1912912122_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_9();
		G_B3_0 = L_15;
		G_B3_1 = L_14;
		if (L_16)
		{
			G_B4_0 = L_15;
			G_B4_1 = L_14;
			goto IL_0085;
		}
	}
	{
		intptr_t L_17 = (intptr_t)G0_Photo_UICon_U3CStartU3Em__1_m2536475243_RuntimeMethod_var;
		Void_Vector3Del_t2915247505 * L_18 = (Void_Vector3Del_t2915247505 *)il2cpp_codegen_object_new(Void_Vector3Del_t2915247505_il2cpp_TypeInfo_var);
		Void_Vector3Del__ctor_m1002480554(L_18, NULL, L_17, /*hidden argument*/NULL);
		((G0_Photo_UICon_t1912912122_StaticFields*)il2cpp_codegen_static_fields_for(G0_Photo_UICon_t1912912122_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_9(L_18);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
	}

IL_0085:
	{
		Void_Vector3Del_t2915247505 * L_19 = ((G0_Photo_UICon_t1912912122_StaticFields*)il2cpp_codegen_static_fields_for(G0_Photo_UICon_t1912912122_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_9();
		Delegate_t1188392813 * L_20 = Delegate_Combine_m1859655160(NULL /*static, unused*/, G_B4_0, L_19, /*hidden argument*/NULL);
		((DragButt_t1708563181 *)G_B4_1)->set_Start_Del_7(((Void_Vector3Del_t2915247505 *)CastclassSealed((RuntimeObject*)L_20, Void_Vector3Del_t2915247505_il2cpp_TypeInfo_var)));
		_UI_t4116017140 * L_21 = __this->get_address_of_UI_7();
		MoveDragButt_t3773719392 * L_22 = L_21->get_Butt_0();
		MoveDragButt_t3773719392 * L_23 = L_22;
		Void_Vector3Del_t2915247505 * L_24 = ((DragButt_t1708563181 *)L_23)->get_End_Del_9();
		intptr_t L_25 = (intptr_t)G0_Photo_UICon_U3CStartU3Em__2_m847122382_RuntimeMethod_var;
		Void_Vector3Del_t2915247505 * L_26 = (Void_Vector3Del_t2915247505 *)il2cpp_codegen_object_new(Void_Vector3Del_t2915247505_il2cpp_TypeInfo_var);
		Void_Vector3Del__ctor_m1002480554(L_26, __this, L_25, /*hidden argument*/NULL);
		Delegate_t1188392813 * L_27 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_24, L_26, /*hidden argument*/NULL);
		((DragButt_t1708563181 *)L_23)->set_End_Del_9(((Void_Vector3Del_t2915247505 *)CastclassSealed((RuntimeObject*)L_27, Void_Vector3Del_t2915247505_il2cpp_TypeInfo_var)));
		_UI_t4116017140 * L_28 = __this->get_address_of_UI_7();
		Tween_Array_t2143430763 * L_29 = L_28->get_Tween_2();
		intptr_t L_30 = (intptr_t)G0_Photo_UICon_U3CStartU3Em__3_m934328299_RuntimeMethod_var;
		VoidDel_t2721053205 * L_31 = (VoidDel_t2721053205 *)il2cpp_codegen_object_new(VoidDel_t2721053205_il2cpp_TypeInfo_var);
		VoidDel__ctor_m1452115049(L_31, __this, L_30, /*hidden argument*/NULL);
		((Tween_t251520763 *)L_29)->set_End_Del_7(L_31);
		return;
	}
}
// System.Void G0_Photo_UICon::Load_Target_Data(G0_Target_Data)
extern "C" IL2CPP_METHOD_ATTR void G0_Photo_UICon_Load_Target_Data_m3715051138 (G0_Photo_UICon_t1912912122 * __this, G0_Target_Data_t1917875166 * ___data0, const RuntimeMethod* method)
{
	{
		G0_Target_Data_t1917875166 * L_0 = ___data0;
		__this->set_Data_6(L_0);
		_UI_t4116017140 * L_1 = __this->get_address_of_UI_7();
		Image_t2670269651 * L_2 = L_1->get_Im_1();
		G0_Target_Data_t1917875166 * L_3 = ___data0;
		Sprite_t280657092 * L_4 = L_3->get_Photo_1();
		Image_set_sprite_m2369174689(L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void G0_Photo_UICon::Set_Transform_Count()
extern "C" IL2CPP_METHOD_ATTR void G0_Photo_UICon_Set_Transform_Count_m148275024 (G0_Photo_UICon_t1912912122 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (G0_Photo_UICon_Set_Transform_Count_m148275024_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		List_1_t3384986864 * L_0 = ((G0_Photo_UICon_t1912912122_StaticFields*)il2cpp_codegen_static_fields_for(G0_Photo_UICon_t1912912122_il2cpp_TypeInfo_var))->get_AllPhoto_4();
		int32_t L_1 = List_1_get_Count_m4272413490(L_0, /*hidden argument*/List_1_get_Count_m4272413490_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0065;
	}

IL_0012:
	{
		List_1_t3384986864 * L_2 = ((G0_Photo_UICon_t1912912122_StaticFields*)il2cpp_codegen_static_fields_for(G0_Photo_UICon_t1912912122_il2cpp_TypeInfo_var))->get_AllPhoto_4();
		int32_t L_3 = V_1;
		G0_Photo_UICon_t1912912122 * L_4 = List_1_get_Item_m1845799387(L_2, L_3, /*hidden argument*/List_1_get_Item_m1845799387_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0061;
		}
	}
	{
		List_1_t3384986864 * L_6 = ((G0_Photo_UICon_t1912912122_StaticFields*)il2cpp_codegen_static_fields_for(G0_Photo_UICon_t1912912122_il2cpp_TypeInfo_var))->get_AllPhoto_4();
		int32_t L_7 = V_1;
		G0_Photo_UICon_t1912912122 * L_8 = List_1_get_Item_m1845799387(L_6, L_7, /*hidden argument*/List_1_get_Item_m1845799387_RuntimeMethod_var);
		Transform_t3600365921 * L_9 = Component_get_transform_m3162698980(L_8, /*hidden argument*/NULL);
		Vector3_t3722313464  L_10 = Transform_get_position_m36019626(L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		float L_11 = (&V_2)->get_y_3();
		Transform_t3600365921 * L_12 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_13 = Transform_get_position_m36019626(L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		float L_14 = (&V_3)->get_y_3();
		if ((!(((float)L_11) <= ((float)L_14))))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1));
	}

IL_0061:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0065:
	{
		int32_t L_17 = V_1;
		List_1_t3384986864 * L_18 = ((G0_Photo_UICon_t1912912122_StaticFields*)il2cpp_codegen_static_fields_for(G0_Photo_UICon_t1912912122_il2cpp_TypeInfo_var))->get_AllPhoto_4();
		int32_t L_19 = List_1_get_Count_m4272413490(L_18, /*hidden argument*/List_1_get_Count_m4272413490_RuntimeMethod_var);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0012;
		}
	}
	{
		Transform_t3600365921 * L_20 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		int32_t L_21 = V_0;
		Transform_SetSiblingIndex_m1077399982(L_20, L_21, /*hidden argument*/NULL);
		return;
	}
}
// System.Void G0_Photo_UICon::End()
extern "C" IL2CPP_METHOD_ATTR void G0_Photo_UICon_End_m2363947105 (G0_Photo_UICon_t1912912122 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (G0_Photo_UICon_End_m2363947105_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3384986864 * L_0 = ((G0_Photo_UICon_t1912912122_StaticFields*)il2cpp_codegen_static_fields_for(G0_Photo_UICon_t1912912122_il2cpp_TypeInfo_var))->get_AllPhoto_4();
		List_1_Remove_m735619916(L_0, __this, /*hidden argument*/List_1_Remove_m735619916_RuntimeMethod_var);
		List_1_t3384986864 * L_1 = ((G0_Photo_UICon_t1912912122_StaticFields*)il2cpp_codegen_static_fields_for(G0_Photo_UICon_t1912912122_il2cpp_TypeInfo_var))->get_AllPhoto_4();
		int32_t L_2 = List_1_get_Count_m4272413490(L_1, /*hidden argument*/List_1_get_Count_m4272413490_RuntimeMethod_var);
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(G0_Play_UICon_t46452308_il2cpp_TypeInfo_var);
		G0_Play_UICon_t46452308 * L_3 = ((G0_Play_UICon_t46452308_StaticFields*)il2cpp_codegen_static_fields_for(G0_Play_UICon_t46452308_il2cpp_TypeInfo_var))->get___5();
		G0_Play_UICon_End_m385289090(L_3, (bool)1, /*hidden argument*/NULL);
	}

IL_0027:
	{
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void G0_Photo_UICon::<Start>m__0(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void G0_Photo_UICon_U3CStartU3Em__0_m1978002736 (G0_Photo_UICon_t1912912122 * __this, Vector3_t3722313464  ___V30, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (G0_Photo_UICon_U3CStartU3Em__0_m1978002736_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((G0_Photo_UICon_t1912912122_StaticFields*)il2cpp_codegen_static_fields_for(G0_Photo_UICon_t1912912122_il2cpp_TypeInfo_var))->set_Now_5(__this);
		((G0_Target_UICOn_t2128227474_StaticFields*)il2cpp_codegen_static_fields_for(G0_Target_UICOn_t2128227474_il2cpp_TypeInfo_var))->set_Now_5((G0_Target_UICOn_t2128227474 *)NULL);
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_1 = __this->get_Start_parent_8();
		Transform_t3600365921 * L_2 = Transform_get_parent_m835071599(L_1, /*hidden argument*/NULL);
		Transform_SetParent_m381167889(L_0, L_2, /*hidden argument*/NULL);
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_SetSiblingIndex_m1077399982(L_3, 2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void G0_Photo_UICon::<Start>m__1(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void G0_Photo_UICon_U3CStartU3Em__1_m2536475243 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___V30, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void G0_Photo_UICon::<Start>m__2(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void G0_Photo_UICon_U3CStartU3Em__2_m847122382 (G0_Photo_UICon_t1912912122 * __this, Vector3_t3722313464  ___V30, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (G0_Photo_UICon_U3CStartU3Em__2_m847122382_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Tween_Position_t749407915 * V_0 = NULL;
	Tween_Size_t305626671 * V_1 = NULL;
	Tween_Rotation_t2420198140 * V_2 = NULL;
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Tween_Position_t749407915 * V_4 = NULL;
	{
		((G0_Photo_UICon_t1912912122_StaticFields*)il2cpp_codegen_static_fields_for(G0_Photo_UICon_t1912912122_il2cpp_TypeInfo_var))->set_Now_5((G0_Photo_UICon_t1912912122 *)NULL);
		bool L_0 = G0_Photo_UICon_get_IsOK_m988091250(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0131;
		}
	}
	{
		G0_Target_UICOn_t2128227474 * L_1 = ((G0_Target_UICOn_t2128227474_StaticFields*)il2cpp_codegen_static_fields_for(G0_Target_UICOn_t2128227474_il2cpp_TypeInfo_var))->get_Now_5();
		G0_Target_UICOn_Open_m1477967583(L_1, /*hidden argument*/NULL);
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(G0_Play_UICon_t46452308_il2cpp_TypeInfo_var);
		G0_Play_UICon_t46452308 * L_3 = ((G0_Play_UICon_t46452308_StaticFields*)il2cpp_codegen_static_fields_for(G0_Play_UICon_t46452308_il2cpp_TypeInfo_var))->get___5();
		_UI_t3927201216 * L_4 = L_3->get_address_of_UI_7();
		GameObject_t1113636619 * L_5 = L_4->get_Target_Parent_5();
		Transform_t3600365921 * L_6 = GameObject_get_transform_m1369836730(L_5, /*hidden argument*/NULL);
		int32_t L_7 = Transform_GetSiblingIndex_m798637244(L_6, /*hidden argument*/NULL);
		Transform_SetSiblingIndex_m1077399982(L_2, ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)), /*hidden argument*/NULL);
		_UI_t4116017140 * L_8 = __this->get_address_of_UI_7();
		Tween_Array_t2143430763 * L_9 = L_8->get_Tween_2();
		((Tween_t251520763 *)L_9)->set_Time_Length_8((0.3f));
		_UI_t4116017140 * L_10 = __this->get_address_of_UI_7();
		Tween_Array_t2143430763 * L_11 = L_10->get_Tween_2();
		List_1_t1723595505 * L_12 = L_11->get_All_Tween_12();
		Tween_t251520763 * L_13 = List_1_get_Item_m863626585(L_12, 0, /*hidden argument*/List_1_get_Item_m863626585_RuntimeMethod_var);
		V_0 = ((Tween_Position_t749407915 *)IsInstClass((RuntimeObject*)L_13, Tween_Position_t749407915_il2cpp_TypeInfo_var));
		_UI_t4116017140 * L_14 = __this->get_address_of_UI_7();
		Tween_Array_t2143430763 * L_15 = L_14->get_Tween_2();
		List_1_t1723595505 * L_16 = L_15->get_All_Tween_12();
		Tween_t251520763 * L_17 = List_1_get_Item_m863626585(L_16, 1, /*hidden argument*/List_1_get_Item_m863626585_RuntimeMethod_var);
		V_1 = ((Tween_Size_t305626671 *)IsInstClass((RuntimeObject*)L_17, Tween_Size_t305626671_il2cpp_TypeInfo_var));
		_UI_t4116017140 * L_18 = __this->get_address_of_UI_7();
		Tween_Array_t2143430763 * L_19 = L_18->get_Tween_2();
		List_1_t1723595505 * L_20 = L_19->get_All_Tween_12();
		Tween_t251520763 * L_21 = List_1_get_Item_m863626585(L_20, 2, /*hidden argument*/List_1_get_Item_m863626585_RuntimeMethod_var);
		V_2 = ((Tween_Rotation_t2420198140 *)IsInstClass((RuntimeObject*)L_21, Tween_Rotation_t2420198140_il2cpp_TypeInfo_var));
		Tween_Size_t305626671 * L_22 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_23 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_24 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_23, (2.0f), /*hidden argument*/NULL);
		L_22->set_From_12(L_24);
		Tween_Size_t305626671 * L_25 = V_1;
		Vector3_t3722313464  L_26 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		L_25->set_To_13(L_26);
		Tween_Position_t749407915 * L_27 = V_0;
		Transform_t3600365921 * L_28 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_29 = Transform_get_localPosition_m4234289348(L_28, /*hidden argument*/NULL);
		L_27->set_From_12(L_29);
		Tween_Position_t749407915 * L_30 = V_0;
		G0_Target_UICOn_t2128227474 * L_31 = ((G0_Target_UICOn_t2128227474_StaticFields*)il2cpp_codegen_static_fields_for(G0_Target_UICOn_t2128227474_il2cpp_TypeInfo_var))->get_Now_5();
		Transform_t3600365921 * L_32 = Component_get_transform_m3162698980(L_31, /*hidden argument*/NULL);
		Vector3_t3722313464  L_33 = Transform_get_localPosition_m4234289348(L_32, /*hidden argument*/NULL);
		L_30->set_To_13(L_33);
		Tween_Rotation_t2420198140 * L_34 = V_2;
		Vector3_t3722313464  L_35;
		memset(&L_35, 0, sizeof(L_35));
		Vector3__ctor_m3353183577((&L_35), (0.0f), (0.0f), (360.0f), /*hidden argument*/NULL);
		L_34->set_To_13(L_35);
		_UI_t4116017140 * L_36 = __this->get_address_of_UI_7();
		Tween_Array_t2143430763 * L_37 = L_36->get_Tween_2();
		Tween_Play_m1783120483(L_37, (bool)1, (1.0f), /*hidden argument*/NULL);
		Image_t2670269651 * L_38 = Component_GetComponent_TisImage_t2670269651_m980647750(__this, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		VirtActionInvoker1< bool >::Invoke(25 /* System.Void UnityEngine.UI.Graphic::set_raycastTarget(System.Boolean) */, L_38, (bool)0);
		goto IL_0195;
	}

IL_0131:
	{
		Transform_t3600365921 * L_39 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_40 = Transform_get_localPosition_m4234289348(L_39, /*hidden argument*/NULL);
		V_3 = L_40;
		_UI_t4116017140 * L_41 = __this->get_address_of_UI_7();
		Tween_Array_t2143430763 * L_42 = L_41->get_Tween_2();
		List_1_t1723595505 * L_43 = L_42->get_All_Tween_12();
		Tween_t251520763 * L_44 = List_1_get_Item_m863626585(L_43, 0, /*hidden argument*/List_1_get_Item_m863626585_RuntimeMethod_var);
		V_4 = ((Tween_Position_t749407915 *)IsInstClass((RuntimeObject*)L_44, Tween_Position_t749407915_il2cpp_TypeInfo_var));
		Tween_Position_t749407915 * L_45 = V_4;
		Vector3_t3722313464  L_46 = V_3;
		L_45->set_From_12(L_46);
		Tween_Position_t749407915 * L_47 = V_4;
		float L_48 = (&V_3)->get_y_3();
		Vector3_t3722313464  L_49;
		memset(&L_49, 0, sizeof(L_49));
		Vector3__ctor_m3353183577((&L_49), (761.0f), L_48, (0.0f), /*hidden argument*/NULL);
		L_47->set_To_13(L_49);
		_UI_t4116017140 * L_50 = __this->get_address_of_UI_7();
		Tween_Array_t2143430763 * L_51 = L_50->get_Tween_2();
		Tween_Play_m1783120483(L_51, (bool)1, (0.0f), /*hidden argument*/NULL);
	}

IL_0195:
	{
		return;
	}
}
// System.Void G0_Photo_UICon::<Start>m__3()
extern "C" IL2CPP_METHOD_ATTR void G0_Photo_UICon_U3CStartU3Em__3_m934328299 (G0_Photo_UICon_t1912912122 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (G0_Photo_UICon_U3CStartU3Em__3_m934328299_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Image_t2670269651 * L_0 = Component_GetComponent_TisImage_t2670269651_m980647750(__this, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean UnityEngine.UI.Graphic::get_raycastTarget() */, L_0);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		G0_Photo_UICon_End_m2363947105(__this, /*hidden argument*/NULL);
		goto IL_0032;
	}

IL_001b:
	{
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_3 = __this->get_Start_parent_8();
		Transform_SetParent_m381167889(L_2, L_3, /*hidden argument*/NULL);
		G0_Photo_UICon_Set_Transform_Count_m148275024(__this, /*hidden argument*/NULL);
	}

IL_0032:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: G0_Photo_UICon/_UI
extern "C" void _UI_t4116017140_marshal_pinvoke(const _UI_t4116017140& unmarshaled, _UI_t4116017140_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Butt_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Butt' of type '_UI': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Butt_0Exception, NULL, NULL);
}
extern "C" void _UI_t4116017140_marshal_pinvoke_back(const _UI_t4116017140_marshaled_pinvoke& marshaled, _UI_t4116017140& unmarshaled)
{
	Exception_t* ___Butt_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Butt' of type '_UI': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Butt_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: G0_Photo_UICon/_UI
extern "C" void _UI_t4116017140_marshal_pinvoke_cleanup(_UI_t4116017140_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: G0_Photo_UICon/_UI
extern "C" void _UI_t4116017140_marshal_com(const _UI_t4116017140& unmarshaled, _UI_t4116017140_marshaled_com& marshaled)
{
	Exception_t* ___Butt_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Butt' of type '_UI': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Butt_0Exception, NULL, NULL);
}
extern "C" void _UI_t4116017140_marshal_com_back(const _UI_t4116017140_marshaled_com& marshaled, _UI_t4116017140& unmarshaled)
{
	Exception_t* ___Butt_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Butt' of type '_UI': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Butt_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: G0_Photo_UICon/_UI
extern "C" void _UI_t4116017140_marshal_com_cleanup(_UI_t4116017140_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void G0_Play_UICon::.ctor()
extern "C" IL2CPP_METHOD_ATTR void G0_Play_UICon__ctor_m2620797138 (G0_Play_UICon_t46452308 * __this, const RuntimeMethod* method)
{
	{
		ObjArray__ctor_m4268133846(__this, /*hidden argument*/NULL);
		return;
	}
}
// G0_Lv_Data G0_Play_UICon::get_Now_Lv_Data()
extern "C" IL2CPP_METHOD_ATTR G0_Lv_Data_t3685245493 * G0_Play_UICon_get_Now_Lv_Data_m3483712159 (G0_Play_UICon_t46452308 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (G0_Play_UICon_get_Now_Lv_Data_m3483712159_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		G0_Lv_DataU5BU5D_t720604504* L_0 = __this->get_All_Lv_Data_8();
		IL2CPP_RUNTIME_CLASS_INIT(G0_Play_UICon_t46452308_il2cpp_TypeInfo_var);
		int32_t L_1 = ((G0_Play_UICon_t46452308_StaticFields*)il2cpp_codegen_static_fields_for(G0_Play_UICon_t46452308_il2cpp_TypeInfo_var))->get_Now_Lv_6();
		int32_t L_2 = L_1;
		G0_Lv_Data_t3685245493 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.Void G0_Play_UICon::Awake()
extern "C" IL2CPP_METHOD_ATTR void G0_Play_UICon_Awake_m2197750010 (G0_Play_UICon_t46452308 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (G0_Play_UICon_Awake_m2197750010_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(G0_Play_UICon_t46452308_il2cpp_TypeInfo_var);
		((G0_Play_UICon_t46452308_StaticFields*)il2cpp_codegen_static_fields_for(G0_Play_UICon_t46452308_il2cpp_TypeInfo_var))->set___5(__this);
		return;
	}
}
// System.Collections.IEnumerator G0_Play_UICon::Start()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* G0_Play_UICon_Start_m2611122650 (G0_Play_UICon_t46452308 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (G0_Play_UICon_Start_m2611122650_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartU3Ec__Iterator0_t1260829943 * V_0 = NULL;
	{
		U3CStartU3Ec__Iterator0_t1260829943 * L_0 = (U3CStartU3Ec__Iterator0_t1260829943 *)il2cpp_codegen_object_new(U3CStartU3Ec__Iterator0_t1260829943_il2cpp_TypeInfo_var);
		U3CStartU3Ec__Iterator0__ctor_m1990627779(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CStartU3Ec__Iterator0_t1260829943 * L_1 = V_0;
		L_1->set_U24this_0(__this);
		U3CStartU3Ec__Iterator0_t1260829943 * L_2 = V_0;
		return L_2;
	}
}
// System.Void G0_Play_UICon::Update()
extern "C" IL2CPP_METHOD_ATTR void G0_Play_UICon_Update_m2679722582 (G0_Play_UICon_t46452308 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void G0_Play_UICon::Load_Lv_Data(G0_Lv_Data)
extern "C" IL2CPP_METHOD_ATTR void G0_Play_UICon_Load_Lv_Data_m2226816120 (G0_Play_UICon_t46452308 * __this, G0_Lv_Data_t3685245493 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (G0_Play_UICon_Load_Lv_Data_m2226816120_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t385246372* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	G0_Photo_UICon_t1912912122 * V_4 = NULL;
	int32_t V_5 = 0;
	G0_Target_Data_t1917875166 * V_6 = NULL;
	G0_Target_UICOn_t2128227474 * V_7 = NULL;
	{
		G0_Lv_Data_t3685245493 * L_0 = G0_Play_UICon_get_Now_Lv_Data_m3483712159(__this, /*hidden argument*/NULL);
		G0_Target_DataU5BU5D_t586259179* L_1 = L_0->get_All_Target_3();
		Int32U5BU5D_t385246372* L_2 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))));
		V_0 = L_2;
		V_1 = 0;
		goto IL_0022;
	}

IL_001a:
	{
		Int32U5BU5D_t385246372* L_3 = V_0;
		int32_t L_4 = V_1;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (int32_t)1);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0022:
	{
		int32_t L_6 = V_1;
		Int32U5BU5D_t385246372* L_7 = V_0;
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		G0_Lv_Data_t3685245493 * L_8 = G0_Play_UICon_get_Now_Lv_Data_m3483712159(__this, /*hidden argument*/NULL);
		int32_t L_9 = L_8->get_N_2();
		Int32U5BU5D_t385246372* L_10 = V_0;
		Int32U5BU5D_t385246372* L_11 = Dice_1_GetNotRepeatingInts_m1466825919(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/Dice_1_GetNotRepeatingInts_m1466825919_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(G0_Play_UICon_t46452308_il2cpp_TypeInfo_var);
		((G0_Play_UICon_t46452308_StaticFields*)il2cpp_codegen_static_fields_for(G0_Play_UICon_t46452308_il2cpp_TypeInfo_var))->set_Now_Traget_Nobs_12(L_11);
		_UI_t3927201216 * L_12 = __this->get_address_of_UI_7();
		Image_t2670269651 * L_13 = L_12->get_Map_0();
		G0_Lv_Data_t3685245493 * L_14 = ___data0;
		Sprite_t280657092 * L_15 = L_14->get_Map_Im_0();
		Image_set_sprite_m2369174689(L_13, L_15, /*hidden argument*/NULL);
		List_1_t3384986864 * L_16 = (List_1_t3384986864 *)il2cpp_codegen_object_new(List_1_t3384986864_il2cpp_TypeInfo_var);
		List_1__ctor_m1692865676(L_16, /*hidden argument*/List_1__ctor_m1692865676_RuntimeMethod_var);
		__this->set_All_Photo_9(L_16);
		((G0_Photo_UICon_t1912912122_StaticFields*)il2cpp_codegen_static_fields_for(G0_Photo_UICon_t1912912122_il2cpp_TypeInfo_var))->set_AllPhoto_4((List_1_t3384986864 *)NULL);
		V_2 = 0;
		goto IL_00c8;
	}

IL_006f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(G0_Play_UICon_t46452308_il2cpp_TypeInfo_var);
		Int32U5BU5D_t385246372* L_17 = ((G0_Play_UICon_t46452308_StaticFields*)il2cpp_codegen_static_fields_for(G0_Play_UICon_t46452308_il2cpp_TypeInfo_var))->get_Now_Traget_Nobs_12();
		int32_t L_18 = V_2;
		int32_t L_19 = L_18;
		int32_t L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		V_3 = L_20;
		_UI_t3927201216 * L_21 = __this->get_address_of_UI_7();
		GameObject_t1113636619 * L_22 = L_21->get_Photo_Obj_4();
		_UI_t3927201216 * L_23 = __this->get_address_of_UI_7();
		GameObject_t1113636619 * L_24 = L_23->get_Photo_Parent_3();
		Transform_t3600365921 * L_25 = GameObject_get_transform_m1369836730(L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_26 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_27 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		GameObject_t1113636619 * L_28 = MyCalculate_SpObj_m3074102938(NULL /*static, unused*/, L_22, L_25, L_26, L_27, /*hidden argument*/NULL);
		G0_Photo_UICon_t1912912122 * L_29 = GameObject_GetComponent_TisG0_Photo_UICon_t1912912122_m4197247811(L_28, /*hidden argument*/GameObject_GetComponent_TisG0_Photo_UICon_t1912912122_m4197247811_RuntimeMethod_var);
		V_4 = L_29;
		G0_Photo_UICon_t1912912122 * L_30 = V_4;
		G0_Lv_Data_t3685245493 * L_31 = ___data0;
		G0_Target_DataU5BU5D_t586259179* L_32 = L_31->get_All_Target_3();
		int32_t L_33 = V_3;
		int32_t L_34 = L_33;
		G0_Target_Data_t1917875166 * L_35 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		G0_Photo_UICon_Load_Target_Data_m3715051138(L_30, L_35, /*hidden argument*/NULL);
		List_1_t3384986864 * L_36 = __this->get_All_Photo_9();
		G0_Photo_UICon_t1912912122 * L_37 = V_4;
		List_1_Add_m1433744898(L_36, L_37, /*hidden argument*/List_1_Add_m1433744898_RuntimeMethod_var);
		int32_t L_38 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_00c8:
	{
		int32_t L_39 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(G0_Play_UICon_t46452308_il2cpp_TypeInfo_var);
		Int32U5BU5D_t385246372* L_40 = ((G0_Play_UICon_t46452308_StaticFields*)il2cpp_codegen_static_fields_for(G0_Play_UICon_t46452308_il2cpp_TypeInfo_var))->get_Now_Traget_Nobs_12();
		if ((((int32_t)L_39) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_40)->max_length)))))))
		{
			goto IL_006f;
		}
	}
	{
		List_1_t3600302216 * L_41 = (List_1_t3600302216 *)il2cpp_codegen_object_new(List_1_t3600302216_il2cpp_TypeInfo_var);
		List_1__ctor_m1316785032(L_41, /*hidden argument*/List_1__ctor_m1316785032_RuntimeMethod_var);
		__this->set_All_Target_10(L_41);
		((G0_Target_UICOn_t2128227474_StaticFields*)il2cpp_codegen_static_fields_for(G0_Target_UICOn_t2128227474_il2cpp_TypeInfo_var))->set_AllTarget_4((List_1_t3600302216 *)NULL);
		V_5 = 0;
		goto IL_0152;
	}

IL_00ee:
	{
		G0_Lv_Data_t3685245493 * L_42 = ___data0;
		G0_Target_DataU5BU5D_t586259179* L_43 = L_42->get_All_Target_3();
		int32_t L_44 = V_5;
		int32_t L_45 = L_44;
		G0_Target_Data_t1917875166 * L_46 = (L_43)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
		V_6 = L_46;
		_UI_t3927201216 * L_47 = __this->get_address_of_UI_7();
		GameObject_t1113636619 * L_48 = L_47->get_Traget_Obj_6();
		_UI_t3927201216 * L_49 = __this->get_address_of_UI_7();
		GameObject_t1113636619 * L_50 = L_49->get_Target_Parent_5();
		Transform_t3600365921 * L_51 = GameObject_get_transform_m1369836730(L_50, /*hidden argument*/NULL);
		G0_Target_Data_t1917875166 * L_52 = V_6;
		Vector2Int_t3469998543  L_53 = L_52->get_Pot_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2Int_t3469998543_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_54 = Vector2Int_op_Implicit_m1284226264(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_55 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_54, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_56 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		GameObject_t1113636619 * L_57 = MyCalculate_SpObj_m3074102938(NULL /*static, unused*/, L_48, L_51, L_55, L_56, /*hidden argument*/NULL);
		G0_Target_UICOn_t2128227474 * L_58 = GameObject_GetComponent_TisG0_Target_UICOn_t2128227474_m336255185(L_57, /*hidden argument*/GameObject_GetComponent_TisG0_Target_UICOn_t2128227474_m336255185_RuntimeMethod_var);
		V_7 = L_58;
		G0_Target_UICOn_t2128227474 * L_59 = V_7;
		G0_Target_Data_t1917875166 * L_60 = V_6;
		L_59->set_Data_6(L_60);
		List_1_t3600302216 * L_61 = __this->get_All_Target_10();
		G0_Target_UICOn_t2128227474 * L_62 = V_7;
		List_1_Add_m891152756(L_61, L_62, /*hidden argument*/List_1_Add_m891152756_RuntimeMethod_var);
		int32_t L_63 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1));
	}

IL_0152:
	{
		int32_t L_64 = V_5;
		G0_Lv_Data_t3685245493 * L_65 = ___data0;
		G0_Target_DataU5BU5D_t586259179* L_66 = L_65->get_All_Target_3();
		if ((((int32_t)L_64) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_66)->max_length)))))))
		{
			goto IL_00ee;
		}
	}
	{
		return;
	}
}
// System.Void G0_Play_UICon::Game_Update(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void G0_Play_UICon_Game_Update_m1799142341 (G0_Play_UICon_t46452308 * __this, int32_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (G0_Play_UICon_Game_Update_m1799142341_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		G0_Lv_Data_t3685245493 * L_0 = G0_Play_UICon_get_Now_Lv_Data_m3483712159(__this, /*hidden argument*/NULL);
		int32_t L_1 = L_0->get_Time_1();
		int32_t L_2 = ___n0;
		__this->set_Score_11(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2)));
		int32_t L_3 = __this->get_Score_11();
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral3944467184, /*hidden argument*/NULL);
		G0_Play_UICon_End_m385289090(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}

IL_0031:
	{
		_UI_t3927201216 * L_4 = __this->get_address_of_UI_7();
		Text_t1901882714 * L_5 = L_4->get_Time_text_2();
		int32_t* L_6 = __this->get_address_of_Score_11();
		String_t* L_7 = Int32_ToString_m141394615((int32_t*)L_6, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_7);
		return;
	}
}
// System.Void G0_Play_UICon::End(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void G0_Play_UICon_End_m385289090 (G0_Play_UICon_t46452308 * __this, bool ___Win0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (G0_Play_UICon_End_m385289090_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjArray_OnOnlyObjs_m2386750287(__this, 1, /*hidden argument*/NULL);
		bool L_0 = ___Win0;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		G0_End_UICon_t3782924102 * L_1 = ObjArray_GetObjT_TisG0_End_UICon_t3782924102_m4010045863(__this, 1, /*hidden argument*/ObjArray_GetObjT_TisG0_End_UICon_t3782924102_m4010045863_RuntimeMethod_var);
		G0_End_UICon_Lose_Open_m2031812526(L_1, /*hidden argument*/NULL);
		goto IL_0030;
	}

IL_001e:
	{
		G0_End_UICon_t3782924102 * L_2 = ObjArray_GetObjT_TisG0_End_UICon_t3782924102_m4010045863(__this, 1, /*hidden argument*/ObjArray_GetObjT_TisG0_End_UICon_t3782924102_m4010045863_RuntimeMethod_var);
		int32_t L_3 = __this->get_Score_11();
		G0_End_UICon_Win_Open_m511383927(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Void G0_Play_UICon::Delete_Save()
extern "C" IL2CPP_METHOD_ATTR void G0_Play_UICon_Delete_Save_m2766490961 (G0_Play_UICon_t46452308 * __this, const RuntimeMethod* method)
{
	{
		PlayerPrefs_DeleteAll_m610653455(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void G0_Play_UICon::.cctor()
extern "C" IL2CPP_METHOD_ATTR void G0_Play_UICon__cctor_m710891186 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (G0_Play_UICon__cctor_m710891186_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((G0_Play_UICon_t46452308_StaticFields*)il2cpp_codegen_static_fields_for(G0_Play_UICon_t46452308_il2cpp_TypeInfo_var))->set_Now_Lv_6(2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void G0_Play_UICon/<Start>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0__ctor_m1990627779 (U3CStartU3Ec__Iterator0_t1260829943 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean G0_Play_UICon/<Start>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CStartU3Ec__Iterator0_MoveNext_m2646565618 (U3CStartU3Ec__Iterator0_t1260829943 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_MoveNext_m2646565618_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0055;
			}
		}
	}
	{
		goto IL_00c9;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(G0_Play_UICon_t46452308_il2cpp_TypeInfo_var);
		int32_t L_2 = ((G0_Play_UICon_t46452308_StaticFields*)il2cpp_codegen_static_fields_for(G0_Play_UICon_t46452308_il2cpp_TypeInfo_var))->get_Now_Lv_6();
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3885013980, L_4, /*hidden argument*/NULL);
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->set_U24current_1(NULL);
		bool L_6 = __this->get_U24disposing_2();
		if (L_6)
		{
			goto IL_0050;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0050:
	{
		goto IL_00cb;
	}

IL_0055:
	{
		G0_Play_UICon_t46452308 * L_7 = __this->get_U24this_0();
		ObjArray_OnOnlyObjs_m2386750287(L_7, 0, /*hidden argument*/NULL);
		G0_Play_UICon_t46452308 * L_8 = __this->get_U24this_0();
		_UI_t3927201216 * L_9 = L_8->get_address_of_UI_7();
		TimeLoop_t468784922 * L_10 = L_9->get_time_1();
		TimeLoop_t468784922 * L_11 = L_10;
		Void_IntDel_t3049649234 * L_12 = L_11->get_Del_4();
		G0_Play_UICon_t46452308 * L_13 = __this->get_U24this_0();
		intptr_t L_14 = (intptr_t)G0_Play_UICon_Game_Update_m1799142341_RuntimeMethod_var;
		Void_IntDel_t3049649234 * L_15 = (Void_IntDel_t3049649234 *)il2cpp_codegen_object_new(Void_IntDel_t3049649234_il2cpp_TypeInfo_var);
		Void_IntDel__ctor_m3144570209(L_15, L_13, L_14, /*hidden argument*/NULL);
		Delegate_t1188392813 * L_16 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_12, L_15, /*hidden argument*/NULL);
		L_11->set_Del_4(((Void_IntDel_t3049649234 *)CastclassSealed((RuntimeObject*)L_16, Void_IntDel_t3049649234_il2cpp_TypeInfo_var)));
		G0_Play_UICon_t46452308 * L_17 = __this->get_U24this_0();
		_UI_t3927201216 * L_18 = L_17->get_address_of_UI_7();
		TimeLoop_t468784922 * L_19 = L_18->get_time_1();
		TimeLoop_Open_m4218940108(L_19, /*hidden argument*/NULL);
		G0_Play_UICon_t46452308 * L_20 = __this->get_U24this_0();
		G0_Play_UICon_t46452308 * L_21 = __this->get_U24this_0();
		G0_Lv_Data_t3685245493 * L_22 = G0_Play_UICon_get_Now_Lv_Data_m3483712159(L_21, /*hidden argument*/NULL);
		G0_Play_UICon_Load_Lv_Data_m2226816120(L_20, L_22, /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_00c9:
	{
		return (bool)0;
	}

IL_00cb:
	{
		return (bool)1;
	}
}
// System.Object G0_Play_UICon/<Start>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m657217273 (U3CStartU3Ec__Iterator0_t1260829943 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object G0_Play_UICon/<Start>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m2687387029 (U3CStartU3Ec__Iterator0_t1260829943 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void G0_Play_UICon/<Start>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0_Dispose_m1063918399 (U3CStartU3Ec__Iterator0_t1260829943 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void G0_Play_UICon/<Start>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0_Reset_m1605782607 (U3CStartU3Ec__Iterator0_t1260829943 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_Reset_m1605782607_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CStartU3Ec__Iterator0_Reset_m1605782607_RuntimeMethod_var);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: G0_Play_UICon/_UI
extern "C" void _UI_t3927201216_marshal_pinvoke(const _UI_t3927201216& unmarshaled, _UI_t3927201216_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Map_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Map' of type '_UI': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Map_0Exception, NULL, NULL);
}
extern "C" void _UI_t3927201216_marshal_pinvoke_back(const _UI_t3927201216_marshaled_pinvoke& marshaled, _UI_t3927201216& unmarshaled)
{
	Exception_t* ___Map_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Map' of type '_UI': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Map_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: G0_Play_UICon/_UI
extern "C" void _UI_t3927201216_marshal_pinvoke_cleanup(_UI_t3927201216_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: G0_Play_UICon/_UI
extern "C" void _UI_t3927201216_marshal_com(const _UI_t3927201216& unmarshaled, _UI_t3927201216_marshaled_com& marshaled)
{
	Exception_t* ___Map_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Map' of type '_UI': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Map_0Exception, NULL, NULL);
}
extern "C" void _UI_t3927201216_marshal_com_back(const _UI_t3927201216_marshaled_com& marshaled, _UI_t3927201216& unmarshaled)
{
	Exception_t* ___Map_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Map' of type '_UI': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Map_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: G0_Play_UICon/_UI
extern "C" void _UI_t3927201216_marshal_com_cleanup(_UI_t3927201216_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void G0_Target_Data::.ctor()
extern "C" IL2CPP_METHOD_ATTR void G0_Target_Data__ctor_m3148611863 (G0_Target_Data_t1917875166 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void G0_Target_UICOn::.ctor()
extern "C" IL2CPP_METHOD_ATTR void G0_Target_UICOn__ctor_m1701376674 (G0_Target_UICOn_t2128227474 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void G0_Target_UICOn::Awake()
extern "C" IL2CPP_METHOD_ATTR void G0_Target_UICOn_Awake_m3812866298 (G0_Target_UICOn_t2128227474 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (G0_Target_UICOn_Awake_m3812866298_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3600302216 * L_0 = ((G0_Target_UICOn_t2128227474_StaticFields*)il2cpp_codegen_static_fields_for(G0_Target_UICOn_t2128227474_il2cpp_TypeInfo_var))->get_AllTarget_4();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		List_1_t3600302216 * L_1 = (List_1_t3600302216 *)il2cpp_codegen_object_new(List_1_t3600302216_il2cpp_TypeInfo_var);
		List_1__ctor_m1316785032(L_1, /*hidden argument*/List_1__ctor_m1316785032_RuntimeMethod_var);
		((G0_Target_UICOn_t2128227474_StaticFields*)il2cpp_codegen_static_fields_for(G0_Target_UICOn_t2128227474_il2cpp_TypeInfo_var))->set_AllTarget_4(L_1);
	}

IL_0014:
	{
		List_1_t3600302216 * L_2 = ((G0_Target_UICOn_t2128227474_StaticFields*)il2cpp_codegen_static_fields_for(G0_Target_UICOn_t2128227474_il2cpp_TypeInfo_var))->get_AllTarget_4();
		List_1_Add_m891152756(L_2, __this, /*hidden argument*/List_1_Add_m891152756_RuntimeMethod_var);
		return;
	}
}
// System.Void G0_Target_UICOn::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void G0_Target_UICOn_OnPointerEnter_m1288772088 (G0_Target_UICOn_t2128227474 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (G0_Target_UICOn_OnPointerEnter_m1288772088_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_IsOpen_9();
		if (L_0)
		{
			goto IL_0027;
		}
	}
	{
		G0_Photo_UICon_t1912912122 * L_1 = ((G0_Photo_UICon_t1912912122_StaticFields*)il2cpp_codegen_static_fields_for(G0_Photo_UICon_t1912912122_il2cpp_TypeInfo_var))->get_Now_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		((G0_Target_UICOn_t2128227474_StaticFields*)il2cpp_codegen_static_fields_for(G0_Target_UICOn_t2128227474_il2cpp_TypeInfo_var))->set_Now_5(__this);
		G0_Target_UICOn_Load_Target_m2047948276(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void G0_Target_UICOn::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void G0_Target_UICOn_OnPointerExit_m3236561862 (G0_Target_UICOn_t2128227474 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	{
		G0_Target_UICOn_Load_Target_m2047948276(NULL /*static, unused*/, (G0_Target_UICOn_t2128227474 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void G0_Target_UICOn::Open()
extern "C" IL2CPP_METHOD_ATTR void G0_Target_UICOn_Open_m1477967583 (G0_Target_UICOn_t2128227474 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (G0_Target_UICOn_Open_m1477967583_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Image_t2670269651 * L_0 = Component_GetComponent_TisImage_t2670269651_m980647750(__this, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		Sprite_t280657092 * L_1 = __this->get_Open_Im_7();
		Image_set_sprite_m2369174689(L_0, L_1, /*hidden argument*/NULL);
		__this->set_IsOpen_9((bool)1);
		return;
	}
}
// System.Void G0_Target_UICOn::Load_Target(G0_Target_UICOn)
extern "C" IL2CPP_METHOD_ATTR void G0_Target_UICOn_Load_Target_m2047948276 (RuntimeObject * __this /* static, unused */, G0_Target_UICOn_t2128227474 * ___g0_Target_UICon0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (G0_Target_UICOn_Load_Target_m2047948276_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0064;
	}

IL_0007:
	{
		List_1_t3600302216 * L_0 = ((G0_Target_UICOn_t2128227474_StaticFields*)il2cpp_codegen_static_fields_for(G0_Target_UICOn_t2128227474_il2cpp_TypeInfo_var))->get_AllTarget_4();
		int32_t L_1 = V_0;
		G0_Target_UICOn_t2128227474 * L_2 = List_1_get_Item_m3124045229(L_0, L_1, /*hidden argument*/List_1_get_Item_m3124045229_RuntimeMethod_var);
		G0_Target_UICOn_t2128227474 * L_3 = ___g0_Target_UICon0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0046;
		}
	}
	{
		List_1_t3600302216 * L_5 = ((G0_Target_UICOn_t2128227474_StaticFields*)il2cpp_codegen_static_fields_for(G0_Target_UICOn_t2128227474_il2cpp_TypeInfo_var))->get_AllTarget_4();
		int32_t L_6 = V_0;
		G0_Target_UICOn_t2128227474 * L_7 = List_1_get_Item_m3124045229(L_5, L_6, /*hidden argument*/List_1_get_Item_m3124045229_RuntimeMethod_var);
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_9 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_10 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_9, (1.5f), /*hidden argument*/NULL);
		Transform_set_localScale_m3053443106(L_8, L_10, /*hidden argument*/NULL);
		goto IL_0060;
	}

IL_0046:
	{
		List_1_t3600302216 * L_11 = ((G0_Target_UICOn_t2128227474_StaticFields*)il2cpp_codegen_static_fields_for(G0_Target_UICOn_t2128227474_il2cpp_TypeInfo_var))->get_AllTarget_4();
		int32_t L_12 = V_0;
		G0_Target_UICOn_t2128227474 * L_13 = List_1_get_Item_m3124045229(L_11, L_12, /*hidden argument*/List_1_get_Item_m3124045229_RuntimeMethod_var);
		Transform_t3600365921 * L_14 = Component_get_transform_m3162698980(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_15 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_set_localScale_m3053443106(L_14, L_15, /*hidden argument*/NULL);
	}

IL_0060:
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0064:
	{
		int32_t L_17 = V_0;
		List_1_t3600302216 * L_18 = ((G0_Target_UICOn_t2128227474_StaticFields*)il2cpp_codegen_static_fields_for(G0_Target_UICOn_t2128227474_il2cpp_TypeInfo_var))->get_AllTarget_4();
		int32_t L_19 = List_1_get_Count_m348913021(L_18, /*hidden argument*/List_1_get_Count_m348913021_RuntimeMethod_var);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GetGoogleTab::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GetGoogleTab__ctor_m4098893875 (GetGoogleTab_t2614510110 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GetGoogleTab__ctor_m4098893875_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_URL_4(_stringLiteral3580600126);
		__this->set_StringDate_7(_stringLiteral3325447198);
		List_1_t496632877 * L_0 = (List_1_t496632877 *)il2cpp_codegen_object_new(List_1_t496632877_il2cpp_TypeInfo_var);
		List_1__ctor_m3458422818(L_0, /*hidden argument*/List_1__ctor_m3458422818_RuntimeMethod_var);
		__this->set_mDate_8(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator GetGoogleTab::GetTable()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GetGoogleTab_GetTable_m2458751461 (GetGoogleTab_t2614510110 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GetGoogleTab_GetTable_m2458751461_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetTableU3Ec__Iterator0_t1324267896 * V_0 = NULL;
	{
		U3CGetTableU3Ec__Iterator0_t1324267896 * L_0 = (U3CGetTableU3Ec__Iterator0_t1324267896 *)il2cpp_codegen_object_new(U3CGetTableU3Ec__Iterator0_t1324267896_il2cpp_TypeInfo_var);
		U3CGetTableU3Ec__Iterator0__ctor_m1394337478(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetTableU3Ec__Iterator0_t1324267896 * L_1 = V_0;
		L_1->set_U24this_0(__this);
		U3CGetTableU3Ec__Iterator0_t1324267896 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator GetGoogleTab::GetTable(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GetGoogleTab_GetTable_m1557446434 (GetGoogleTab_t2614510110 * __this, String_t* ___Id0, String_t* ___TabName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GetGoogleTab_GetTable_m1557446434_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetTableU3Ec__Iterator1_t4053151251 * V_0 = NULL;
	{
		U3CGetTableU3Ec__Iterator1_t4053151251 * L_0 = (U3CGetTableU3Ec__Iterator1_t4053151251 *)il2cpp_codegen_object_new(U3CGetTableU3Ec__Iterator1_t4053151251_il2cpp_TypeInfo_var);
		U3CGetTableU3Ec__Iterator1__ctor_m1757732715(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetTableU3Ec__Iterator1_t4053151251 * L_1 = V_0;
		String_t* L_2 = ___TabName1;
		L_1->set_TabName_0(L_2);
		U3CGetTableU3Ec__Iterator1_t4053151251 * L_3 = V_0;
		String_t* L_4 = ___Id0;
		L_3->set_Id_1(L_4);
		U3CGetTableU3Ec__Iterator1_t4053151251 * L_5 = V_0;
		L_5->set_U24this_5(__this);
		U3CGetTableU3Ec__Iterator1_t4053151251 * L_6 = V_0;
		return L_6;
	}
}
// System.Void GetGoogleTab::PrintTable()
extern "C" IL2CPP_METHOD_ATTR void GetGoogleTab_PrintTable_m2049994154 (GetGoogleTab_t2614510110 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GetGoogleTab_PrintTable_m2049994154_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3319525431 * V_0 = NULL;
	Enumerator_t2385876754  V_1;
	memset(&V_1, 0, sizeof(V_1));
	String_t* V_2 = NULL;
	Enumerator_t913802012  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t496632877 * L_0 = __this->get_mDate_8();
		Enumerator_t2385876754  L_1 = List_1_GetEnumerator_m3862866820(L_0, /*hidden argument*/List_1_GetEnumerator_m3862866820_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005c;
		}

IL_0011:
		{
			List_1_t3319525431 * L_2 = Enumerator_get_Current_m2609582037((Enumerator_t2385876754 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m2609582037_RuntimeMethod_var);
			V_0 = L_2;
			List_1_t3319525431 * L_3 = V_0;
			Enumerator_t913802012  L_4 = List_1_GetEnumerator_m1955908099(L_3, /*hidden argument*/List_1_GetEnumerator_m1955908099_RuntimeMethod_var);
			V_3 = L_4;
		}

IL_0020:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0033;
			}

IL_0025:
			{
				String_t* L_5 = Enumerator_get_Current_m236733038((Enumerator_t913802012 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m236733038_RuntimeMethod_var);
				V_2 = L_5;
				String_t* L_6 = V_2;
				MonoBehaviour_print_m330341231(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
			}

IL_0033:
			{
				bool L_7 = Enumerator_MoveNext_m4158182743((Enumerator_t913802012 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m4158182743_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0025;
				}
			}

IL_003f:
			{
				IL2CPP_LEAVE(0x52, FINALLY_0044);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0044;
		}

FINALLY_0044:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m2026665411((Enumerator_t913802012 *)(&V_3), /*hidden argument*/Enumerator_Dispose_m2026665411_RuntimeMethod_var);
			IL2CPP_END_FINALLY(68)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(68)
		{
			IL2CPP_JUMP_TBL(0x52, IL_0052)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0052:
		{
			MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral1163431733, /*hidden argument*/NULL);
		}

IL_005c:
		{
			bool L_8 = Enumerator_MoveNext_m754000926((Enumerator_t2385876754 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m754000926_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0011;
			}
		}

IL_0068:
		{
			IL2CPP_LEAVE(0x7B, FINALLY_006d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006d;
	}

FINALLY_006d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4093600480((Enumerator_t2385876754 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m4093600480_RuntimeMethod_var);
		IL2CPP_END_FINALLY(109)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(109)
	{
		IL2CPP_JUMP_TBL(0x7B, IL_007b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007b:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GetGoogleTab/<GetTable>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CGetTableU3Ec__Iterator0__ctor_m1394337478 (U3CGetTableU3Ec__Iterator0_t1324267896 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GetGoogleTab/<GetTable>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CGetTableU3Ec__Iterator0_MoveNext_m2034726657 (U3CGetTableU3Ec__Iterator0_t1324267896 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0067;
			}
		}
	}
	{
		goto IL_006e;
	}

IL_0021:
	{
		GetGoogleTab_t2614510110 * L_2 = __this->get_U24this_0();
		GetGoogleTab_t2614510110 * L_3 = __this->get_U24this_0();
		GetGoogleTab_t2614510110 * L_4 = __this->get_U24this_0();
		String_t* L_5 = L_4->get_Id_5();
		GetGoogleTab_t2614510110 * L_6 = __this->get_U24this_0();
		String_t* L_7 = L_6->get_TabName_6();
		RuntimeObject* L_8 = GetGoogleTab_GetTable_m1557446434(L_3, L_5, L_7, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_9 = MonoBehaviour_StartCoroutine_m3411253000(L_2, L_8, /*hidden argument*/NULL);
		__this->set_U24current_1(L_9);
		bool L_10 = __this->get_U24disposing_2();
		if (L_10)
		{
			goto IL_0062;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0062:
	{
		goto IL_0070;
	}

IL_0067:
	{
		__this->set_U24PC_3((-1));
	}

IL_006e:
	{
		return (bool)0;
	}

IL_0070:
	{
		return (bool)1;
	}
}
// System.Object GetGoogleTab/<GetTable>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CGetTableU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2483704675 (U3CGetTableU3Ec__Iterator0_t1324267896 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object GetGoogleTab/<GetTable>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CGetTableU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m224316928 (U3CGetTableU3Ec__Iterator0_t1324267896 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void GetGoogleTab/<GetTable>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CGetTableU3Ec__Iterator0_Dispose_m227206838 (U3CGetTableU3Ec__Iterator0_t1324267896 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void GetGoogleTab/<GetTable>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CGetTableU3Ec__Iterator0_Reset_m825771642 (U3CGetTableU3Ec__Iterator0_t1324267896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetTableU3Ec__Iterator0_Reset_m825771642_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CGetTableU3Ec__Iterator0_Reset_m825771642_RuntimeMethod_var);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GetGoogleTab/<GetTable>c__Iterator1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CGetTableU3Ec__Iterator1__ctor_m1757732715 (U3CGetTableU3Ec__Iterator1_t4053151251 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GetGoogleTab/<GetTable>c__Iterator1::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CGetTableU3Ec__Iterator1_MoveNext_m4121720577 (U3CGetTableU3Ec__Iterator1_t4053151251 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetTableU3Ec__Iterator1_MoveNext_m4121720577_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->get_U24PC_8();
		V_0 = L_0;
		__this->set_U24PC_8((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0098;
			}
		}
	}
	{
		goto IL_01a7;
	}

IL_0021:
	{
		String_t* L_2 = __this->get_TabName_0();
		String_t* L_3 = WWW_EscapeURL_m4251687403(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->set_TabName_0(L_3);
		StringU5BU5D_t1281789340* L_4 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t1281789340* L_5 = L_4;
		GetGoogleTab_t2614510110 * L_6 = __this->get_U24this_5();
		String_t* L_7 = L_6->get_URL_4();
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_7);
		StringU5BU5D_t1281789340* L_8 = L_5;
		ArrayElementTypeCheck (L_8, _stringLiteral2930855047);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral2930855047);
		StringU5BU5D_t1281789340* L_9 = L_8;
		String_t* L_10 = __this->get_Id_1();
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_10);
		StringU5BU5D_t1281789340* L_11 = L_9;
		ArrayElementTypeCheck (L_11, _stringLiteral2799279888);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral2799279888);
		StringU5BU5D_t1281789340* L_12 = L_11;
		String_t* L_13 = __this->get_TabName_0();
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_13);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m1809518182(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		WWW_t3688466362 * L_15 = (WWW_t3688466362 *)il2cpp_codegen_object_new(WWW_t3688466362_il2cpp_TypeInfo_var);
		WWW__ctor_m2915079343(L_15, L_14, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E__0_2(L_15);
		WWW_t3688466362 * L_16 = __this->get_U3CwwwU3E__0_2();
		__this->set_U24current_6(L_16);
		bool L_17 = __this->get_U24disposing_7();
		if (L_17)
		{
			goto IL_0093;
		}
	}
	{
		__this->set_U24PC_8(1);
	}

IL_0093:
	{
		goto IL_01a9;
	}

IL_0098:
	{
		WWW_t3688466362 * L_18 = __this->get_U3CwwwU3E__0_2();
		String_t* L_19 = WWW_get_error_m3055313367(L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00be;
		}
	}
	{
		GetGoogleTab_t2614510110 * L_20 = __this->get_U24this_5();
		WWW_t3688466362 * L_21 = __this->get_U3CwwwU3E__0_2();
		String_t* L_22 = WWW_get_text_m898164367(L_21, /*hidden argument*/NULL);
		L_20->set_StringDate_7(L_22);
	}

IL_00be:
	{
		GetGoogleTab_t2614510110 * L_23 = __this->get_U24this_5();
		String_t* L_24 = L_23->get_StringDate_7();
		CharU5BU5D_t3528271667* L_25 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t3528271667* L_26 = L_25;
		Il2CppChar L_27 = String_get_Chars_m2986988803(_stringLiteral3452614526, 0, /*hidden argument*/NULL);
		(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)L_27);
		StringU5BU5D_t1281789340* L_28 = String_Split_m3646115398(L_24, L_26, /*hidden argument*/NULL);
		__this->set_U3C_mDateU3E__0_3(L_28);
		List_1_t3319525431 * L_29 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_29, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		__this->set_U3CL0U3E__0_4(L_29);
		V_1 = 0;
		goto IL_017c;
	}

IL_00fa:
	{
		StringU5BU5D_t1281789340* L_30 = __this->get_U3C_mDateU3E__0_3();
		int32_t L_31 = V_1;
		int32_t L_32 = L_31;
		String_t* L_33 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_34 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_35 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_33, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_0178;
		}
	}
	{
		StringU5BU5D_t1281789340* L_36 = __this->get_U3C_mDateU3E__0_3();
		int32_t L_37 = V_1;
		int32_t L_38 = L_37;
		String_t* L_39 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_40 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_39, _stringLiteral3452614532, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0178;
		}
	}
	{
		StringU5BU5D_t1281789340* L_41 = __this->get_U3C_mDateU3E__0_3();
		int32_t L_42 = V_1;
		int32_t L_43 = L_42;
		String_t* L_44 = (L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_45 = String_op_Equality_m920492651(NULL /*static, unused*/, L_44, _stringLiteral3452614566, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_0165;
		}
	}
	{
		GetGoogleTab_t2614510110 * L_46 = __this->get_U24this_5();
		List_1_t496632877 * L_47 = L_46->get_mDate_8();
		List_1_t3319525431 * L_48 = __this->get_U3CL0U3E__0_4();
		List_1_Add_m2353349950(L_47, L_48, /*hidden argument*/List_1_Add_m2353349950_RuntimeMethod_var);
		List_1_t3319525431 * L_49 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_49, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		__this->set_U3CL0U3E__0_4(L_49);
		goto IL_0178;
	}

IL_0165:
	{
		List_1_t3319525431 * L_50 = __this->get_U3CL0U3E__0_4();
		StringU5BU5D_t1281789340* L_51 = __this->get_U3C_mDateU3E__0_3();
		int32_t L_52 = V_1;
		int32_t L_53 = L_52;
		String_t* L_54 = (L_51)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_53));
		List_1_Add_m1685793073(L_50, L_54, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
	}

IL_0178:
	{
		int32_t L_55 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
	}

IL_017c:
	{
		int32_t L_56 = V_1;
		StringU5BU5D_t1281789340* L_57 = __this->get_U3C_mDateU3E__0_3();
		if ((((int32_t)L_56) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_57)->max_length)))))))
		{
			goto IL_00fa;
		}
	}
	{
		GetGoogleTab_t2614510110 * L_58 = __this->get_U24this_5();
		List_1_t496632877 * L_59 = L_58->get_mDate_8();
		List_1_t3319525431 * L_60 = __this->get_U3CL0U3E__0_4();
		List_1_Add_m2353349950(L_59, L_60, /*hidden argument*/List_1_Add_m2353349950_RuntimeMethod_var);
		__this->set_U24PC_8((-1));
	}

IL_01a7:
	{
		return (bool)0;
	}

IL_01a9:
	{
		return (bool)1;
	}
}
// System.Object GetGoogleTab/<GetTable>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CGetTableU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m413345403 (U3CGetTableU3Ec__Iterator1_t4053151251 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_6();
		return L_0;
	}
}
// System.Object GetGoogleTab/<GetTable>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CGetTableU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m487397799 (U3CGetTableU3Ec__Iterator1_t4053151251 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_6();
		return L_0;
	}
}
// System.Void GetGoogleTab/<GetTable>c__Iterator1::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CGetTableU3Ec__Iterator1_Dispose_m348683025 (U3CGetTableU3Ec__Iterator1_t4053151251 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_7((bool)1);
		__this->set_U24PC_8((-1));
		return;
	}
}
// System.Void GetGoogleTab/<GetTable>c__Iterator1::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CGetTableU3Ec__Iterator1_Reset_m1189166879 (U3CGetTableU3Ec__Iterator1_t4053151251 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetTableU3Ec__Iterator1_Reset_m1189166879_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CGetTableU3Ec__Iterator1_Reset_m1189166879_RuntimeMethod_var);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MainUICon::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MainUICon__ctor_m318999790 (MainUICon_t3042406425 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainUICon::Start()
extern "C" IL2CPP_METHOD_ATTR void MainUICon_Start_m2020589464 (MainUICon_t3042406425 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MoveDragButt::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MoveDragButt__ctor_m1350507279 (MoveDragButt_t3773719392 * __this, const RuntimeMethod* method)
{
	{
		DragButt__ctor_m2250402185(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoveDragButt::Start()
extern "C" IL2CPP_METHOD_ATTR void MoveDragButt_Start_m1993957511 (MoveDragButt_t3773719392 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoveDragButt_Start_m1993957511_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Void_Vector3Del_t2915247505 * G_B2_0 = NULL;
	MoveDragButt_t3773719392 * G_B2_1 = NULL;
	Void_Vector3Del_t2915247505 * G_B1_0 = NULL;
	MoveDragButt_t3773719392 * G_B1_1 = NULL;
	{
		Void_Vector3Del_t2915247505 * L_0 = ((DragButt_t1708563181 *)__this)->get_Start_Del_7();
		Void_Vector3Del_t2915247505 * L_1 = ((MoveDragButt_t3773719392_StaticFields*)il2cpp_codegen_static_fields_for(MoveDragButt_t3773719392_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_12();
		G_B1_0 = L_0;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_0;
			G_B2_1 = __this;
			goto IL_001f;
		}
	}
	{
		intptr_t L_2 = (intptr_t)MoveDragButt_U3CStartU3Em__0_m725292635_RuntimeMethod_var;
		Void_Vector3Del_t2915247505 * L_3 = (Void_Vector3Del_t2915247505 *)il2cpp_codegen_object_new(Void_Vector3Del_t2915247505_il2cpp_TypeInfo_var);
		Void_Vector3Del__ctor_m1002480554(L_3, NULL, L_2, /*hidden argument*/NULL);
		((MoveDragButt_t3773719392_StaticFields*)il2cpp_codegen_static_fields_for(MoveDragButt_t3773719392_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_12(L_3);
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
	}

IL_001f:
	{
		Void_Vector3Del_t2915247505 * L_4 = ((MoveDragButt_t3773719392_StaticFields*)il2cpp_codegen_static_fields_for(MoveDragButt_t3773719392_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_12();
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, G_B2_0, L_4, /*hidden argument*/NULL);
		((DragButt_t1708563181 *)G_B2_1)->set_Start_Del_7(((Void_Vector3Del_t2915247505 *)CastclassSealed((RuntimeObject*)L_5, Void_Vector3Del_t2915247505_il2cpp_TypeInfo_var)));
		Void_Vector3Del_t2915247505 * L_6 = ((DragButt_t1708563181 *)__this)->get_Update_Del_8();
		intptr_t L_7 = (intptr_t)MoveDragButt_U3CStartU3Em__1_m3174680571_RuntimeMethod_var;
		Void_Vector3Del_t2915247505 * L_8 = (Void_Vector3Del_t2915247505 *)il2cpp_codegen_object_new(Void_Vector3Del_t2915247505_il2cpp_TypeInfo_var);
		Void_Vector3Del__ctor_m1002480554(L_8, __this, L_7, /*hidden argument*/NULL);
		Delegate_t1188392813 * L_9 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		((DragButt_t1708563181 *)__this)->set_Update_Del_8(((Void_Vector3Del_t2915247505 *)CastclassSealed((RuntimeObject*)L_9, Void_Vector3Del_t2915247505_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void MoveDragButt::<Start>m__0(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void MoveDragButt_U3CStartU3Em__0_m725292635 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___V30, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void MoveDragButt::<Start>m__1(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void MoveDragButt_U3CStartU3Em__1_m3174680571 (MoveDragButt_t3773719392 * __this, Vector3_t3722313464  ___V30, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoveDragButt_U3CStartU3Em__1_m3174680571_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = ((DragButt_t1708563181 *)__this)->get_Start_V3_5();
		Vector3_t3722313464  L_2 = DragButt_get_Drag_V3_m402370484(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_3 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = __this->get_F_V3_10();
		Vector3_t3722313464  L_5 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_0, L_5, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MyCalculate::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MyCalculate__ctor_m2401876068 (MyCalculate_t3992633026 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 MyCalculate::GetTuchV2(UnityEngine.Camera)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  MyCalculate_GetTuchV2_m2125599697 (RuntimeObject * __this /* static, unused */, Camera_t4157153871 * ___Cam0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MyCalculate_GetTuchV2_m2125599697_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Camera_t4157153871 * L_0 = ___Cam0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = Camera_ScreenToWorldPoint_m3978588570(L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_3 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector2_t2156229523  L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.GameObject MyCalculate::SpObj(UnityEngine.GameObject,UnityEngine.Transform,UnityEngine.Vector3,System.String)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * MyCalculate_SpObj_m3074102938 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___obj0, Transform_t3600365921 * ___parent1, Vector3_t3722313464  ___Position2, String_t* ___objName3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MyCalculate_SpObj_m3074102938_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_1 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_0, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		V_0 = L_1;
		GameObject_t1113636619 * L_2 = V_0;
		Transform_t3600365921 * L_3 = GameObject_get_transform_m1369836730(L_2, /*hidden argument*/NULL);
		Transform_t3600365921 * L_4 = ___parent1;
		Transform_SetParent_m381167889(L_3, L_4, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_5 = V_0;
		Transform_t3600365921 * L_6 = GameObject_get_transform_m1369836730(L_5, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = ___Position2;
		Transform_set_localPosition_m4128471975(L_6, L_7, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_8 = V_0;
		Transform_t3600365921 * L_9 = GameObject_get_transform_m1369836730(L_8, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_10 = ___obj0;
		Transform_t3600365921 * L_11 = GameObject_get_transform_m1369836730(L_10, /*hidden argument*/NULL);
		Vector3_t3722313464  L_12 = Transform_get_localScale_m129152068(L_11, /*hidden argument*/NULL);
		Transform_set_localScale_m3053443106(L_9, L_12, /*hidden argument*/NULL);
		String_t* L_13 = ___objName3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_15 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_004c;
		}
	}
	{
		GameObject_t1113636619 * L_16 = V_0;
		String_t* L_17 = ___objName3;
		Object_set_name_m291480324(L_16, L_17, /*hidden argument*/NULL);
	}

IL_004c:
	{
		GameObject_t1113636619 * L_18 = V_0;
		return L_18;
	}
}
// System.Int32 MyCalculate::SaladModInt(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t MyCalculate_SaladModInt_m405261417 (RuntimeObject * __this /* static, unused */, int32_t ___a0, int32_t ___b1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___a0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___a0;
		int32_t L_2 = ___b1;
		return ((int32_t)((int32_t)L_1%(int32_t)L_2));
	}

IL_000b:
	{
		int32_t L_3 = ___b1;
		int32_t L_4 = ___a0;
		int32_t L_5 = ___b1;
		int32_t L_6 = ___b1;
		return ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)((int32_t)((int32_t)L_4%(int32_t)L_5))))%(int32_t)L_6));
	}
}
// System.Single MyCalculate::SaladMod(System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR float MyCalculate_SaladMod_m93912600 (RuntimeObject * __this /* static, unused */, float ___a0, int32_t ___b1, const RuntimeMethod* method)
{
	{
		float L_0 = ___a0;
		if ((!(((float)L_0) >= ((float)(0.0f)))))
		{
			goto IL_0010;
		}
	}
	{
		float L_1 = ___a0;
		int32_t L_2 = ___b1;
		return (fmodf(L_1, (((float)((float)L_2)))));
	}

IL_0010:
	{
		int32_t L_3 = ___b1;
		float L_4 = ___a0;
		int32_t L_5 = ___b1;
		int32_t L_6 = ___b1;
		return (fmodf(((float)il2cpp_codegen_add((float)(((float)((float)L_3))), (float)(fmodf(L_4, (((float)((float)L_5))))))), (((float)((float)L_6)))));
	}
}
// UnityEngine.Vector2 MyCalculate::CosSin(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  MyCalculate_CosSin_m1194007606 (RuntimeObject * __this /* static, unused */, float ___m0, float ___r1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MyCalculate_CosSin_m1194007606_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___r1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_1 = cosf(((float)il2cpp_codegen_multiply((float)L_0, (float)(0.0174532924f))));
		float L_2 = ___r1;
		float L_3 = sinf(((float)il2cpp_codegen_multiply((float)L_2, (float)(0.0174532924f))));
		Vector2_t2156229523  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector2__ctor_m3970636864((&L_4), L_1, L_3, /*hidden argument*/NULL);
		float L_5 = ___m0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_6 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.String[][] MyCalculate::TxtToString(System.String)
extern "C" IL2CPP_METHOD_ATTR StringU5BU5DU5BU5D_t2611993717* MyCalculate_TxtToString_m1598558100 (RuntimeObject * __this /* static, unused */, String_t* ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MyCalculate_TxtToString_m1598558100_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5DU5BU5D_t2611993717* V_0 = NULL;
	StringU5BU5D_t1281789340* V_1 = NULL;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___a0;
		StringU5BU5D_t1281789340* L_1 = MyCalculate__TxtToString_m2022611661(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		StringU5BU5D_t1281789340* L_2 = V_1;
		StringU5BU5DU5BU5D_t2611993717* L_3 = (StringU5BU5DU5BU5D_t2611993717*)SZArrayNew(StringU5BU5DU5BU5D_t2611993717_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))));
		V_0 = L_3;
		V_2 = 0;
		goto IL_0031;
	}

IL_0017:
	{
		StringU5BU5DU5BU5D_t2611993717* L_4 = V_0;
		int32_t L_5 = V_2;
		StringU5BU5D_t1281789340* L_6 = V_1;
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		CharU5BU5D_t3528271667* L_10 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t3528271667* L_11 = L_10;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)9));
		StringU5BU5D_t1281789340* L_12 = String_Split_m3646115398(L_9, L_11, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_4, L_12);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (StringU5BU5D_t1281789340*)L_12);
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0031:
	{
		int32_t L_14 = V_2;
		StringU5BU5D_t1281789340* L_15 = V_1;
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		StringU5BU5DU5BU5D_t2611993717* L_16 = V_0;
		return L_16;
	}
}
// System.String[] MyCalculate::_TxtToString(System.String)
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* MyCalculate__TxtToString_m2022611661 (RuntimeObject * __this /* static, unused */, String_t* ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MyCalculate__TxtToString_m2022611661_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	List_1_t128053199 * V_2 = NULL;
	int32_t V_3 = 0;
	StringU5BU5D_t1281789340* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t G_B12_0 = 0;
	{
		V_0 = (bool)0;
		V_1 = 0;
		List_1_t128053199 * L_0 = (List_1_t128053199 *)il2cpp_codegen_object_new(List_1_t128053199_il2cpp_TypeInfo_var);
		List_1__ctor_m1628857705(L_0, /*hidden argument*/List_1__ctor_m1628857705_RuntimeMethod_var);
		V_2 = L_0;
		List_1_t128053199 * L_1 = V_2;
		int32_t L_2 = V_1;
		List_1_Add_m697420525(L_1, L_2, /*hidden argument*/List_1_Add_m697420525_RuntimeMethod_var);
		V_3 = 0;
		goto IL_005f;
	}

IL_0018:
	{
		String_t* L_3 = ___a0;
		int32_t L_4 = V_3;
		Il2CppChar L_5 = String_get_Chars_m2986988803(L_3, L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0030;
		}
	}
	{
		bool L_6 = V_0;
		V_0 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_005b;
	}

IL_0030:
	{
		bool L_7 = V_0;
		String_t* L_8 = ___a0;
		int32_t L_9 = V_3;
		Il2CppChar L_10 = String_get_Chars_m2986988803(L_8, L_9, /*hidden argument*/NULL);
		Il2CppChar L_11 = String_get_Chars_m2986988803(_stringLiteral3452614566, 0, /*hidden argument*/NULL);
		if (!((int32_t)((int32_t)((((int32_t)L_7) == ((int32_t)0))? 1 : 0)&(int32_t)((((int32_t)L_10) == ((int32_t)L_11))? 1 : 0))))
		{
			goto IL_0057;
		}
	}
	{
		List_1_t128053199 * L_12 = V_2;
		int32_t L_13 = V_1;
		List_1_Add_m697420525(L_12, ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)), /*hidden argument*/List_1_Add_m697420525_RuntimeMethod_var);
	}

IL_0057:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_005f:
	{
		int32_t L_16 = V_3;
		String_t* L_17 = ___a0;
		int32_t L_18 = String_get_Length_m3847582255(L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_19 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		String_t* L_21 = String_Replace_m1273907647(L_19, _stringLiteral3452614526, L_20, /*hidden argument*/NULL);
		___a0 = L_21;
		List_1_t128053199 * L_22 = V_2;
		int32_t L_23 = List_1_get_Count_m361000296(L_22, /*hidden argument*/List_1_get_Count_m361000296_RuntimeMethod_var);
		StringU5BU5D_t1281789340* L_24 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)L_23);
		V_4 = L_24;
		V_5 = 0;
		goto IL_00eb;
	}

IL_0092:
	{
		int32_t L_25 = V_5;
		StringU5BU5D_t1281789340* L_26 = V_4;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_26)->max_length)))), (int32_t)1)))))
		{
			goto IL_00b9;
		}
	}
	{
		List_1_t128053199 * L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = List_1_get_Item_m888956288(L_27, ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1)), /*hidden argument*/List_1_get_Item_m888956288_RuntimeMethod_var);
		List_1_t128053199 * L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = List_1_get_Item_m888956288(L_30, L_31, /*hidden argument*/List_1_get_Item_m888956288_RuntimeMethod_var);
		G_B12_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)L_32)), (int32_t)1));
		goto IL_00ce;
	}

IL_00b9:
	{
		String_t* L_33 = ___a0;
		int32_t L_34 = String_get_Length_m3847582255(L_33, /*hidden argument*/NULL);
		List_1_t128053199 * L_35 = V_2;
		List_1_t128053199 * L_36 = V_2;
		int32_t L_37 = List_1_get_Count_m361000296(L_36, /*hidden argument*/List_1_get_Count_m361000296_RuntimeMethod_var);
		int32_t L_38 = List_1_get_Item_m888956288(L_35, ((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)1)), /*hidden argument*/List_1_get_Item_m888956288_RuntimeMethod_var);
		G_B12_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)L_38));
	}

IL_00ce:
	{
		V_6 = G_B12_0;
		StringU5BU5D_t1281789340* L_39 = V_4;
		int32_t L_40 = V_5;
		String_t* L_41 = ___a0;
		List_1_t128053199 * L_42 = V_2;
		int32_t L_43 = V_5;
		int32_t L_44 = List_1_get_Item_m888956288(L_42, L_43, /*hidden argument*/List_1_get_Item_m888956288_RuntimeMethod_var);
		int32_t L_45 = V_6;
		String_t* L_46 = String_Substring_m1610150815(L_41, L_44, L_45, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_39, L_46);
		(L_39)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40), (String_t*)L_46);
		int32_t L_47 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
	}

IL_00eb:
	{
		int32_t L_48 = V_5;
		StringU5BU5D_t1281789340* L_49 = V_4;
		if ((((int32_t)L_48) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_49)->max_length)))))))
		{
			goto IL_0092;
		}
	}
	{
		StringU5BU5D_t1281789340* L_50 = V_4;
		return L_50;
	}
}
// System.String MyCalculate::UTxtToString(System.String[][],System.Char)
extern "C" IL2CPP_METHOD_ATTR String_t* MyCalculate_UTxtToString_m1614030829 (RuntimeObject * __this /* static, unused */, StringU5BU5DU5BU5D_t2611993717* ___alltext0, Il2CppChar ___f1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MyCalculate_UTxtToString_m1614030829_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_0 = L_0;
		V_1 = 0;
		goto IL_006f;
	}

IL_000d:
	{
		V_2 = 0;
		goto IL_003e;
	}

IL_0014:
	{
		String_t* L_1 = V_0;
		StringU5BU5DU5BU5D_t2611993717* L_2 = ___alltext0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		StringU5BU5D_t1281789340* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = V_2;
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m3937257545(NULL /*static, unused*/, L_1, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = V_2;
		StringU5BU5DU5BU5D_t2611993717* L_11 = ___alltext0;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		StringU5BU5D_t1281789340* L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))), (int32_t)1)))))
		{
			goto IL_003a;
		}
	}
	{
		String_t* L_15 = V_0;
		Il2CppChar L_16 = ___f1;
		Il2CppChar L_17 = L_16;
		RuntimeObject * L_18 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_17);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Concat_m904156431(NULL /*static, unused*/, L_15, L_18, /*hidden argument*/NULL);
		V_0 = L_19;
	}

IL_003a:
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_003e:
	{
		int32_t L_21 = V_2;
		StringU5BU5DU5BU5D_t2611993717* L_22 = ___alltext0;
		int32_t L_23 = V_1;
		int32_t L_24 = L_23;
		StringU5BU5D_t1281789340* L_25 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length)))))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_26 = V_1;
		StringU5BU5DU5BU5D_t2611993717* L_27 = ___alltext0;
		if ((((int32_t)L_26) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_27)->max_length)))), (int32_t)1)))))
		{
			goto IL_006b;
		}
	}
	{
		String_t* L_28 = V_0;
		Il2CppChar L_29 = String_get_Chars_m2986988803(_stringLiteral3452614566, 0, /*hidden argument*/NULL);
		Il2CppChar L_30 = L_29;
		RuntimeObject * L_31 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_30);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_32 = String_Concat_m904156431(NULL /*static, unused*/, L_28, L_31, /*hidden argument*/NULL);
		V_0 = L_32;
	}

IL_006b:
	{
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_006f:
	{
		int32_t L_34 = V_1;
		StringU5BU5DU5BU5D_t2611993717* L_35 = ___alltext0;
		if ((((int32_t)L_34) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_35)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_36 = V_0;
		return L_36;
	}
}
// System.Single[][] MyCalculate::TxtToFloat(System.String)
extern "C" IL2CPP_METHOD_ATTR SingleU5BU5DU5BU5D_t3206712258* MyCalculate_TxtToFloat_m100248283 (RuntimeObject * __this /* static, unused */, String_t* ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MyCalculate_TxtToFloat_m100248283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5DU5BU5D_t3206712258* V_0 = NULL;
	StringU5BU5D_t1281789340* V_1 = NULL;
	int32_t V_2 = 0;
	StringU5BU5D_t1281789340* V_3 = NULL;
	SingleU5BU5D_t1444911251* V_4 = NULL;
	int32_t V_5 = 0;
	{
		String_t* L_0 = ___a0;
		CharU5BU5D_t3528271667* L_1 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t3528271667* L_2 = L_1;
		Il2CppChar L_3 = String_get_Chars_m2986988803(_stringLiteral3452614566, 0, /*hidden argument*/NULL);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)L_3);
		StringU5BU5D_t1281789340* L_4 = String_Split_m3646115398(L_0, L_2, /*hidden argument*/NULL);
		V_1 = L_4;
		StringU5BU5D_t1281789340* L_5 = V_1;
		SingleU5BU5DU5BU5D_t3206712258* L_6 = (SingleU5BU5DU5BU5D_t3206712258*)SZArrayNew(SingleU5BU5DU5BU5D_t3206712258_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))));
		V_0 = L_6;
		V_2 = 0;
		goto IL_0078;
	}

IL_002b:
	{
		StringU5BU5D_t1281789340* L_7 = V_1;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		CharU5BU5D_t3528271667* L_11 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t3528271667* L_12 = L_11;
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)9));
		StringU5BU5D_t1281789340* L_13 = String_Split_m3646115398(L_10, L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		StringU5BU5D_t1281789340* L_14 = V_3;
		SingleU5BU5D_t1444911251* L_15 = (SingleU5BU5D_t1444911251*)SZArrayNew(SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))));
		V_4 = L_15;
		V_5 = 0;
		goto IL_0065;
	}

IL_0051:
	{
		SingleU5BU5D_t1444911251* L_16 = V_4;
		int32_t L_17 = V_5;
		StringU5BU5D_t1281789340* L_18 = V_3;
		int32_t L_19 = V_5;
		int32_t L_20 = L_19;
		String_t* L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		float L_22 = Single_Parse_m364357836(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17), (float)L_22);
		int32_t L_23 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0065:
	{
		int32_t L_24 = V_5;
		StringU5BU5D_t1281789340* L_25 = V_3;
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length)))))))
		{
			goto IL_0051;
		}
	}
	{
		SingleU5BU5DU5BU5D_t3206712258* L_26 = V_0;
		int32_t L_27 = V_2;
		SingleU5BU5D_t1444911251* L_28 = V_4;
		ArrayElementTypeCheck (L_26, L_28);
		(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27), (SingleU5BU5D_t1444911251*)L_28);
		int32_t L_29 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_0078:
	{
		int32_t L_30 = V_2;
		StringU5BU5D_t1281789340* L_31 = V_1;
		if ((((int32_t)L_30) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_31)->max_length)))))))
		{
			goto IL_002b;
		}
	}
	{
		SingleU5BU5DU5BU5D_t3206712258* L_32 = V_0;
		return L_32;
	}
}
// System.String[][][] MyCalculate::TxtToString(System.String[])
extern "C" IL2CPP_METHOD_ATTR StringU5BU5DU5BU5DU5BU5D_t2402656792* MyCalculate_TxtToString_m3197571433 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t1281789340* ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MyCalculate_TxtToString_m3197571433_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5DU5BU5DU5BU5D_t2402656792* V_0 = NULL;
	int32_t V_1 = 0;
	{
		StringU5BU5D_t1281789340* L_0 = ___a0;
		StringU5BU5DU5BU5DU5BU5D_t2402656792* L_1 = (StringU5BU5DU5BU5DU5BU5D_t2402656792*)SZArrayNew(StringU5BU5DU5BU5DU5BU5D_t2402656792_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))));
		V_0 = L_1;
		V_1 = 0;
		goto IL_001f;
	}

IL_0010:
	{
		StringU5BU5DU5BU5DU5BU5D_t2402656792* L_2 = V_0;
		int32_t L_3 = V_1;
		StringU5BU5D_t1281789340* L_4 = ___a0;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		StringU5BU5DU5BU5D_t2611993717* L_8 = MyCalculate_TxtToString_m1598558100(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_2, L_8);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (StringU5BU5DU5BU5D_t2611993717*)L_8);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_001f:
	{
		int32_t L_10 = V_1;
		StringU5BU5D_t1281789340* L_11 = ___a0;
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		StringU5BU5DU5BU5DU5BU5D_t2402656792* L_12 = V_0;
		return L_12;
	}
}
// System.String[][] MyCalculate::RemoveRow(System.String[][],System.Int32)
extern "C" IL2CPP_METHOD_ATTR StringU5BU5DU5BU5D_t2611993717* MyCalculate_RemoveRow_m2830351973 (RuntimeObject * __this /* static, unused */, StringU5BU5DU5BU5D_t2611993717* ___text0, int32_t ___n1, const RuntimeMethod* method)
{
	{
		StringU5BU5DU5BU5D_t2611993717* L_0 = ___text0;
		String_t* L_1 = MyCalculate_UTxtToString_m1614030829(NULL /*static, unused*/, L_0, ((int32_t)9), /*hidden argument*/NULL);
		int32_t L_2 = ___n1;
		StringU5BU5DU5BU5D_t2611993717* L_3 = MyCalculate_RemoveRow_m2231241764(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String[][] MyCalculate::RemoveRow(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR StringU5BU5DU5BU5D_t2611993717* MyCalculate_RemoveRow_m2231241764 (RuntimeObject * __this /* static, unused */, String_t* ___text0, int32_t ___n1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MyCalculate_RemoveRow_m2231241764_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___text0;
		CharU5BU5D_t3528271667* L_1 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t3528271667* L_2 = L_1;
		Il2CppChar L_3 = String_get_Chars_m2986988803(_stringLiteral3452614566, 0, /*hidden argument*/NULL);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)L_3);
		StringU5BU5D_t1281789340* L_4 = String_Split_m3646115398(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		___text0 = L_5;
		V_1 = 0;
		goto IL_0044;
	}

IL_0029:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = ___n1;
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_8 = ___text0;
		StringU5BU5D_t1281789340* L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		String_t* L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m3755062657(NULL /*static, unused*/, L_8, L_12, _stringLiteral3452614566, /*hidden argument*/NULL);
		___text0 = L_13;
	}

IL_0040:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0044:
	{
		int32_t L_15 = V_1;
		StringU5BU5D_t1281789340* L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))))
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_17 = ___text0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_19 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_006e;
		}
	}
	{
		String_t* L_20 = ___text0;
		String_t* L_21 = ___text0;
		int32_t L_22 = String_get_Length_m3847582255(L_21, /*hidden argument*/NULL);
		String_t* L_23 = String_Substring_m1610150815(L_20, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)1)), /*hidden argument*/NULL);
		___text0 = L_23;
	}

IL_006e:
	{
		String_t* L_24 = ___text0;
		StringU5BU5DU5BU5D_t2611993717* L_25 = MyCalculate_TxtToString_m1598558100(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		return L_25;
	}
}
// System.String MyCalculate::StringWelding(System.String[],System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* MyCalculate_StringWelding_m2904816465 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t1281789340* ___Strings0, String_t* ___g1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MyCalculate_StringWelding_m2904816465_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		StringU5BU5D_t1281789340* L_0 = ___Strings0;
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		V_1 = 1;
		goto IL_001a;
	}

IL_000b:
	{
		String_t* L_3 = V_0;
		String_t* L_4 = ___g1;
		StringU5BU5D_t1281789340* L_5 = ___Strings0;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m3755062657(NULL /*static, unused*/, L_3, L_4, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_001a:
	{
		int32_t L_11 = V_1;
		StringU5BU5D_t1281789340* L_12 = ___Strings0;
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_13 = V_0;
		return L_13;
	}
}
// System.String MyCalculate::NomberToString(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* MyCalculate_NomberToString_m875396777 (RuntimeObject * __this /* static, unused */, int32_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MyCalculate_NomberToString_m875396777_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0 = ___n0;
		String_t* L_1 = MyCalculate__NomberToString_m312450311(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		String_t* L_3 = V_0;
		int32_t L_4 = String_get_Length_m3847582255(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_5 = Mathf_Min_m18103608(NULL /*static, unused*/, L_4, 2, /*hidden argument*/NULL);
		String_t* L_6 = String_Substring_m1610150815(L_2, 0, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m920492651(NULL /*static, unused*/, L_6, _stringLiteral4278844832, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_8 = V_0;
		String_t* L_9 = String_Substring_m2848979100(L_8, 1, /*hidden argument*/NULL);
		return L_9;
	}

IL_0031:
	{
		String_t* L_10 = V_0;
		return L_10;
	}
}
// System.String MyCalculate::_NomberToString(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* MyCalculate__NomberToString_m312450311 (RuntimeObject * __this /* static, unused */, int32_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MyCalculate__NomberToString_m312450311_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* G_B4_0 = NULL;
	{
		int32_t L_0 = ___n0;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)10))))
		{
			goto IL_003a;
		}
	}
	{
		V_1 = _stringLiteral2752638692;
		int32_t L_1 = ___n0;
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B4_0 = L_2;
		goto IL_0034;
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		String_t* L_4 = V_1;
		int32_t L_5 = ___n0;
		Il2CppChar L_6 = String_get_Chars_m2986988803(L_4, L_5, /*hidden argument*/NULL);
		Il2CppChar L_7 = L_6;
		RuntimeObject * L_8 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9 = String_Concat_m904156431(NULL /*static, unused*/, L_3, L_8, /*hidden argument*/NULL);
		G_B4_0 = L_9;
	}

IL_0034:
	{
		V_0 = G_B4_0;
		goto IL_011a;
	}

IL_003a:
	{
		int32_t L_10 = ___n0;
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)100))))
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_11 = ___n0;
		String_t* L_12 = MyCalculate__NomberToString_m312450311(NULL /*static, unused*/, ((int32_t)((int32_t)L_11/(int32_t)((int32_t)10))), /*hidden argument*/NULL);
		int32_t L_13 = ___n0;
		String_t* L_14 = MyCalculate__NomberToString_m312450311(NULL /*static, unused*/, ((int32_t)((int32_t)L_13%(int32_t)((int32_t)10))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m3755062657(NULL /*static, unused*/, L_12, _stringLiteral3452627167, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		goto IL_011a;
	}

IL_0064:
	{
		int32_t L_16 = ___n0;
		if ((((int32_t)L_16) >= ((int32_t)((int32_t)1000))))
		{
			goto IL_0091;
		}
	}
	{
		int32_t L_17 = ___n0;
		String_t* L_18 = MyCalculate__NomberToString_m312450311(NULL /*static, unused*/, ((int32_t)((int32_t)L_17/(int32_t)((int32_t)100))), /*hidden argument*/NULL);
		int32_t L_19 = ___n0;
		String_t* L_20 = MyCalculate__NomberToString_m312450311(NULL /*static, unused*/, ((int32_t)((int32_t)L_19%(int32_t)((int32_t)100))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m3755062657(NULL /*static, unused*/, L_18, _stringLiteral3452618194, L_20, /*hidden argument*/NULL);
		V_0 = L_21;
		goto IL_011a;
	}

IL_0091:
	{
		int32_t L_22 = ___n0;
		if ((((int32_t)L_22) >= ((int32_t)((int32_t)10000))))
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_23 = ___n0;
		String_t* L_24 = MyCalculate__NomberToString_m312450311(NULL /*static, unused*/, ((int32_t)((int32_t)L_23/(int32_t)((int32_t)1000))), /*hidden argument*/NULL);
		int32_t L_25 = ___n0;
		String_t* L_26 = MyCalculate__NomberToString_m312450311(NULL /*static, unused*/, ((int32_t)((int32_t)L_25%(int32_t)((int32_t)1000))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_27 = String_Concat_m3755062657(NULL /*static, unused*/, L_24, _stringLiteral3452627165, L_26, /*hidden argument*/NULL);
		V_0 = L_27;
		goto IL_011a;
	}

IL_00c4:
	{
		int32_t L_28 = ___n0;
		if ((((int32_t)L_28) >= ((int32_t)((int32_t)100000000))))
		{
			goto IL_00f7;
		}
	}
	{
		int32_t L_29 = ___n0;
		String_t* L_30 = MyCalculate__NomberToString_m312450311(NULL /*static, unused*/, ((int32_t)((int32_t)L_29/(int32_t)((int32_t)10000))), /*hidden argument*/NULL);
		int32_t L_31 = ___n0;
		String_t* L_32 = MyCalculate__NomberToString_m312450311(NULL /*static, unused*/, ((int32_t)((int32_t)L_31%(int32_t)((int32_t)10000))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_33 = String_Concat_m3755062657(NULL /*static, unused*/, L_30, _stringLiteral3452580740, L_32, /*hidden argument*/NULL);
		V_0 = L_33;
		goto IL_011a;
	}

IL_00f7:
	{
		int32_t L_34 = ___n0;
		String_t* L_35 = MyCalculate__NomberToString_m312450311(NULL /*static, unused*/, ((int32_t)((int32_t)L_34/(int32_t)((int32_t)100000000))), /*hidden argument*/NULL);
		int32_t L_36 = ___n0;
		String_t* L_37 = MyCalculate__NomberToString_m312450311(NULL /*static, unused*/, ((int32_t)((int32_t)L_36%(int32_t)((int32_t)100000000))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_38 = String_Concat_m3755062657(NULL /*static, unused*/, L_35, _stringLiteral3452626588, L_37, /*hidden argument*/NULL);
		V_0 = L_38;
	}

IL_011a:
	{
		String_t* L_39 = V_0;
		return L_39;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Note::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Note__ctor_m1984508076 (Note_t2277534322 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ObjArray::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ObjArray__ctor_m4268133846 (ObjArray_t2087238592 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ObjArray::OnOffObj(System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ObjArray_OnOffObj_m918063367 (ObjArray_t2087238592 * __this, int32_t ___n0, bool ___OnOff1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjArray_OnOffObj_m918063367_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___n0;
		ObjU5BU5D_t778053183* L_1 = __this->get_AllObj_4();
		int32_t L_2 = MyCalculate_SaladModInt_m405261417(NULL /*static, unused*/, L_0, (((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))), /*hidden argument*/NULL);
		___n0 = L_2;
		ObjU5BU5D_t778053183* L_3 = __this->get_AllObj_4();
		int32_t L_4 = ___n0;
		GameObject_t1113636619 * L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->get_obj_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_5, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		return;
	}

IL_002d:
	{
		ObjU5BU5D_t778053183* L_7 = __this->get_AllObj_4();
		int32_t L_8 = ___n0;
		bool L_9 = Obj_get_Open_m2072835916((Obj_t2397017114 *)((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8))), /*hidden argument*/NULL);
		bool L_10 = ___OnOff1;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0045;
		}
	}
	{
		return;
	}

IL_0045:
	{
		ObjU5BU5D_t778053183* L_11 = __this->get_AllObj_4();
		int32_t L_12 = ___n0;
		GameObject_t1113636619 * L_13 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_12)))->get_obj_0();
		bool L_14 = ___OnOff1;
		GameObject_SetActive_m796801857(L_13, L_14, /*hidden argument*/NULL);
		bool L_15 = ___OnOff1;
		if (!L_15)
		{
			goto IL_0093;
		}
	}
	{
		ObjU5BU5D_t778053183* L_16 = __this->get_AllObj_4();
		int32_t L_17 = ___n0;
		UnityEvent_t2581268647 * L_18 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)))->get_EnterEvent_1();
		if (!L_18)
		{
			goto IL_008e;
		}
	}
	{
		ObjU5BU5D_t778053183* L_19 = __this->get_AllObj_4();
		int32_t L_20 = ___n0;
		UnityEvent_t2581268647 * L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->get_EnterEvent_1();
		UnityEvent_Invoke_m3065672636(L_21, /*hidden argument*/NULL);
	}

IL_008e:
	{
		goto IL_00bf;
	}

IL_0093:
	{
		ObjU5BU5D_t778053183* L_22 = __this->get_AllObj_4();
		int32_t L_23 = ___n0;
		UnityEvent_t2581268647 * L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->get_ExitEvent_2();
		if (!L_24)
		{
			goto IL_00bf;
		}
	}
	{
		ObjU5BU5D_t778053183* L_25 = __this->get_AllObj_4();
		int32_t L_26 = ___n0;
		UnityEvent_t2581268647 * L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->get_ExitEvent_2();
		UnityEvent_Invoke_m3065672636(L_27, /*hidden argument*/NULL);
	}

IL_00bf:
	{
		return;
	}
}
// System.Void ObjArray::OnOffAll(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ObjArray_OnOffAll_m3453852669 (ObjArray_t2087238592 * __this, bool ___OnOff0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0013;
	}

IL_0007:
	{
		int32_t L_0 = V_0;
		bool L_1 = ___OnOff0;
		ObjArray_OnOffObj_m918063367(__this, L_0, L_1, /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_0013:
	{
		int32_t L_3 = V_0;
		ObjU5BU5D_t778053183* L_4 = __this->get_AllObj_4();
		if ((((int32_t)L_3) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ObjArray::OnOnlyObjs(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ObjArray_OnOnlyObjs_m2386750287 (ObjArray_t2087238592 * __this, int32_t ___n0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0016;
	}

IL_0007:
	{
		int32_t L_0 = V_0;
		int32_t L_1 = ___n0;
		int32_t L_2 = V_0;
		ObjArray_OnOffObj_m918063367(__this, L_0, (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0), /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		ObjU5BU5D_t778053183* L_5 = __this->get_AllObj_4();
		if ((((int32_t)L_4) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ObjArray::OnOnlyObjs(System.Int32[])
extern "C" IL2CPP_METHOD_ATTR void ObjArray_OnOnlyObjs_m2139668142 (ObjArray_t2087238592 * __this, Int32U5BU5D_t385246372* ___ns0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		goto IL_0034;
	}

IL_0007:
	{
		V_1 = (bool)0;
		V_2 = 0;
		goto IL_001f;
	}

IL_0010:
	{
		Int32U5BU5D_t385246372* L_0 = ___ns0;
		int32_t L_1 = V_2;
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001b;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_001b:
	{
		int32_t L_5 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_001f:
	{
		int32_t L_6 = V_2;
		Int32U5BU5D_t385246372* L_7 = ___ns0;
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_8 = V_0;
		bool L_9 = V_1;
		ObjArray_OnOffObj_m918063367(__this, L_8, L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0034:
	{
		int32_t L_11 = V_0;
		ObjU5BU5D_t778053183* L_12 = __this->get_AllObj_4();
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ObjArray::ContinuousObj(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ObjArray_ContinuousObj_m1198490343 (ObjArray_t2087238592 * __this, int32_t ___end0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___end0;
		ObjArray_ContinuousObj_m3982673243(__this, 0, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ObjArray::ContinuousObj(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ObjArray_ContinuousObj_m3982673243 (ObjArray_t2087238592 * __this, int32_t ___star0, int32_t ___end1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_002e;
	}

IL_0007:
	{
		int32_t L_0 = V_0;
		int32_t L_1 = ___star0;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_2 = V_0;
		int32_t L_3 = ___end1;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = V_0;
		ObjArray_OnOffObj_m918063367(__this, L_4, (bool)1, /*hidden argument*/NULL);
		goto IL_002a;
	}

IL_0022:
	{
		int32_t L_5 = V_0;
		ObjArray_OnOffObj_m918063367(__this, L_5, (bool)0, /*hidden argument*/NULL);
	}

IL_002a:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_7 = V_0;
		ObjU5BU5D_t778053183* L_8 = __this->get_AllObj_4();
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ObjArray::SetObj()
extern "C" IL2CPP_METHOD_ATTR void ObjArray_SetObj_m3148489018 (ObjArray_t2087238592 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjArray_SetObj_m3148489018_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		int32_t L_1 = Transform_get_childCount_m3145433196(L_0, /*hidden argument*/NULL);
		ObjU5BU5D_t778053183* L_2 = (ObjU5BU5D_t778053183*)SZArrayNew(ObjU5BU5D_t778053183_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->set_AllObj_4(L_2);
		V_0 = 0;
		goto IL_0043;
	}

IL_001d:
	{
		ObjU5BU5D_t778053183* L_3 = __this->get_AllObj_4();
		int32_t L_4 = V_0;
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		Transform_t3600365921 * L_7 = Transform_GetChild_m1092972975(L_5, L_6, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_8 = Component_get_gameObject_m442555142(L_7, /*hidden argument*/NULL);
		((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->set_obj_0(L_8);
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0043:
	{
		int32_t L_10 = V_0;
		Transform_t3600365921 * L_11 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		int32_t L_12 = Transform_get_childCount_m3145433196(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_001d;
		}
	}
	{
		return;
	}
}
// System.Void ObjArray::ResetObj()
extern "C" IL2CPP_METHOD_ATTR void ObjArray_ResetObj_m3989847945 (ObjArray_t2087238592 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjArray_ResetObj_m3989847945_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3869091856 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		List_1_t3869091856 * L_0 = (List_1_t3869091856 *)il2cpp_codegen_object_new(List_1_t3869091856_il2cpp_TypeInfo_var);
		List_1__ctor_m487875160(L_0, /*hidden argument*/List_1__ctor_m487875160_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0044;
	}

IL_000d:
	{
		ObjU5BU5D_t778053183* L_1 = __this->get_AllObj_4();
		int32_t L_2 = V_1;
		GameObject_t1113636619 * L_3 = ((L_1)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_2)))->get_obj_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		List_1_t3869091856 * L_5 = V_0;
		ObjU5BU5D_t778053183* L_6 = __this->get_AllObj_4();
		int32_t L_7 = V_1;
		List_1_Add_m1263474110(L_5, (*(Obj_t2397017114 *)((L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)))), /*hidden argument*/List_1_Add_m1263474110_RuntimeMethod_var);
	}

IL_0040:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0044:
	{
		int32_t L_9 = V_1;
		ObjU5BU5D_t778053183* L_10 = __this->get_AllObj_4();
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		List_1_t3869091856 * L_11 = V_0;
		ObjU5BU5D_t778053183* L_12 = List_1_ToArray_m426799129(L_11, /*hidden argument*/List_1_ToArray_m426799129_RuntimeMethod_var);
		__this->set_AllObj_4(L_12);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: ObjArray/Obj
extern "C" void Obj_t2397017114_marshal_pinvoke(const Obj_t2397017114& unmarshaled, Obj_t2397017114_marshaled_pinvoke& marshaled)
{
	Exception_t* ___obj_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'obj' of type 'Obj': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___obj_0Exception, NULL, NULL);
}
extern "C" void Obj_t2397017114_marshal_pinvoke_back(const Obj_t2397017114_marshaled_pinvoke& marshaled, Obj_t2397017114& unmarshaled)
{
	Exception_t* ___obj_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'obj' of type 'Obj': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___obj_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: ObjArray/Obj
extern "C" void Obj_t2397017114_marshal_pinvoke_cleanup(Obj_t2397017114_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ObjArray/Obj
extern "C" void Obj_t2397017114_marshal_com(const Obj_t2397017114& unmarshaled, Obj_t2397017114_marshaled_com& marshaled)
{
	Exception_t* ___obj_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'obj' of type 'Obj': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___obj_0Exception, NULL, NULL);
}
extern "C" void Obj_t2397017114_marshal_com_back(const Obj_t2397017114_marshaled_com& marshaled, Obj_t2397017114& unmarshaled)
{
	Exception_t* ___obj_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'obj' of type 'Obj': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___obj_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: ObjArray/Obj
extern "C" void Obj_t2397017114_marshal_com_cleanup(Obj_t2397017114_marshaled_com& marshaled)
{
}
// System.Boolean ObjArray/Obj::get_Open()
extern "C" IL2CPP_METHOD_ATTR bool Obj_get_Open_m2072835916 (Obj_t2397017114 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_obj_0();
		bool L_1 = GameObject_get_activeSelf_m1767405923(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  bool Obj_get_Open_m2072835916_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Obj_t2397017114 * _thisAdjusted = reinterpret_cast<Obj_t2397017114 *>(__this + 1);
	return Obj_get_Open_m2072835916(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PauseCon::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PauseCon__ctor_m4134877453 (PauseCon_t3747094933 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PauseCon::OnApplicationPause(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void PauseCon_OnApplicationPause_m729924688 (PauseCon_t3747094933 * __this, bool ___isPause0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PauseCon_OnApplicationPause_m729924688_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___isPause0;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		Time_set_timeScale_m1127545364(NULL /*static, unused*/, (0.0f), /*hidden argument*/NULL);
		UnityEvent_t2581268647 * L_1 = __this->get_OpenPause_4();
		UnityEvent_Invoke_m3065672636(L_1, /*hidden argument*/NULL);
		goto IL_0058;
	}

IL_0020:
	{
		String_t* L_2 = ((PauseCon_t3747094933_StaticFields*)il2cpp_codegen_static_fields_for(PauseCon_t3747094933_il2cpp_TypeInfo_var))->get_Pass_6();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_4 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0044;
		}
	}
	{
		UnityEvent_t2581268647 * L_5 = __this->get_ClosePause_5();
		UnityEvent_Invoke_m3065672636(L_5, /*hidden argument*/NULL);
		goto IL_004e;
	}

IL_0044:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		((PauseCon_t3747094933_StaticFields*)il2cpp_codegen_static_fields_for(PauseCon_t3747094933_il2cpp_TypeInfo_var))->set_Pass_6(L_6);
	}

IL_004e:
	{
		Time_set_timeScale_m1127545364(NULL /*static, unused*/, (1.0f), /*hidden argument*/NULL);
	}

IL_0058:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photograph::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Photograph__ctor_m1581183276 (Photograph_t2819091045 * __this, const RuntimeMethod* method)
{
	{
		__this->set_CaH_6(((int32_t)1536));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photograph::Update()
extern "C" IL2CPP_METHOD_ATTR void Photograph_Update_m2734945022 (Photograph_t2819091045 * __this, const RuntimeMethod* method)
{
	{
		Camera_t4157153871 * L_0 = __this->get_Ca_4();
		int32_t L_1 = __this->get_CaH_6();
		Vector2Int_t3469998543 * L_2 = __this->get_address_of_ScreenSize_5();
		int32_t L_3 = Vector2Int_get_y_m64542185((Vector2Int_t3469998543 *)L_2, /*hidden argument*/NULL);
		Camera_set_orthographicSize_m76971700(L_0, ((float)((float)(((float)((float)L_1)))/(float)(((float)((float)L_3))))), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Texture2D Photograph::GetCaIm(UnityEngine.Rect)
extern "C" IL2CPP_METHOD_ATTR Texture2D_t3840446185 * Photograph_GetCaIm_m2356785699 (Photograph_t2819091045 * __this, Rect_t2360479859  ___rect0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Photograph_GetCaIm_m2356785699_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	RenderTexture_t2108887433 * V_1 = NULL;
	Texture2D_t3840446185 * V_2 = NULL;
	{
		Camera_t4157153871 * L_0 = __this->get_Ca_4();
		float L_1 = Camera_get_orthographicSize_m3903216845(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = Rect_get_width_m3421484486((Rect_t2360479859 *)(&___rect0), /*hidden argument*/NULL);
		float L_3 = Rect_get_height_m1358425599((Rect_t2360479859 *)(&___rect0), /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_4 = (RenderTexture_t2108887433 *)il2cpp_codegen_object_new(RenderTexture_t2108887433_il2cpp_TypeInfo_var);
		RenderTexture__ctor_m769234016(L_4, (((int32_t)((int32_t)L_2))), (((int32_t)((int32_t)L_3))), 0, /*hidden argument*/NULL);
		V_1 = L_4;
		Camera_t4157153871 * L_5 = __this->get_Ca_4();
		RenderTexture_t2108887433 * L_6 = V_1;
		Camera_set_targetTexture_m3148311140(L_5, L_6, /*hidden argument*/NULL);
		Camera_t4157153871 * L_7 = __this->get_Ca_4();
		Camera_Render_m2813253190(L_7, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_8 = V_1;
		RenderTexture_set_active_m1437732586(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		float L_9 = Rect_get_width_m3421484486((Rect_t2360479859 *)(&___rect0), /*hidden argument*/NULL);
		float L_10 = Rect_get_height_m1358425599((Rect_t2360479859 *)(&___rect0), /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_11 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m2862217990(L_11, (((int32_t)((int32_t)L_9))), (((int32_t)((int32_t)L_10))), 3, (bool)0, /*hidden argument*/NULL);
		V_2 = L_11;
		Texture2D_t3840446185 * L_12 = V_2;
		Rect_t2360479859  L_13 = ___rect0;
		Texture2D_ReadPixels_m3395504488(L_12, L_13, 0, 0, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_14 = V_2;
		Texture2D_Apply_m2271746283(L_14, /*hidden argument*/NULL);
		Camera_t4157153871 * L_15 = __this->get_Ca_4();
		Camera_set_targetTexture_m3148311140(L_15, (RenderTexture_t2108887433 *)NULL, /*hidden argument*/NULL);
		RenderTexture_set_active_m1437732586(NULL /*static, unused*/, (RenderTexture_t2108887433 *)NULL, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_17 = V_2;
		return L_17;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RayDetect::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RayDetect__ctor_m337685244 (RayDetect_t2170308910 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RayDetect__ctor_m337685244_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_0 = Vector2_get_left_m1559018038(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_direction_9(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean RayDetect::get_Open()
extern "C" IL2CPP_METHOD_ATTR bool RayDetect_get_Open_m3928600884 (RayDetect_t2170308910 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__Open_10();
		return L_0;
	}
}
// System.Void RayDetect::set_Open(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void RayDetect_set_Open_m3049167136 (RayDetect_t2170308910 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		bool L_1 = __this->get__Open_10();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		bool L_2 = ___value0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		UnityEvent_t2581268647 * L_3 = __this->get_StartEvent_4();
		UnityEvent_Invoke_m3065672636(L_3, /*hidden argument*/NULL);
		goto IL_002d;
	}

IL_0022:
	{
		UnityEvent_t2581268647 * L_4 = __this->get_ExitEvent_5();
		UnityEvent_Invoke_m3065672636(L_4, /*hidden argument*/NULL);
	}

IL_002d:
	{
		UnityEvent_t2581268647 * L_5 = __this->get_UpdateEvent_6();
		UnityEvent_Invoke_m3065672636(L_5, /*hidden argument*/NULL);
	}

IL_0038:
	{
		return;
	}
}
// System.Void RayDetect::FixedUpdate()
extern "C" IL2CPP_METHOD_ATTR void RayDetect_FixedUpdate_m642415867 (RayDetect_t2170308910 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RayDetect_FixedUpdate_m642415867_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit2D_t2279581989  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		GameObject_t1113636619 * L_0 = __this->get_f_8();
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_3 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Vector2_t2156229523  L_4 = __this->get_direction_9();
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1528932956_il2cpp_TypeInfo_var);
		RaycastHit2D_t2279581989  L_5 = Physics2D_Raycast_m2341153778(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Collider2D_t2806799626 * L_6 = RaycastHit2D_get_collider_m1549426026((RaycastHit2D_t2279581989 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_007c;
		}
	}
	{
		Collider2D_t2806799626 * L_8 = RaycastHit2D_get_collider_m1549426026((RaycastHit2D_t2279581989 *)(&V_0), /*hidden argument*/NULL);
		String_t* L_9 = Component_get_tag_m2716693327(L_8, /*hidden argument*/NULL);
		String_t* L_10 = __this->get_ToTag_7();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_11 = String_op_Equality_m920492651(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_007c;
		}
	}
	{
		RayDetect_set_Open_m3049167136(__this, (bool)1, /*hidden argument*/NULL);
		float L_12 = RaycastHit2D_get_fraction_m2673798080((RaycastHit2D_t2279581989 *)(&V_0), /*hidden argument*/NULL);
		Transform_t3600365921 * L_13 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = Transform_get_lossyScale_m465496651(L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		float L_15 = (&V_1)->get_x_2();
		__this->set_Leng_11(((float)((float)L_12/(float)L_15)));
		goto IL_0083;
	}

IL_007c:
	{
		RayDetect_set_Open_m3049167136(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0083:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SizeButt::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SizeButt__ctor_m2790226521 (SizeButt_t245973045 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SizeButt__ctor_m2790226521_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_0, (1.1f), /*hidden argument*/NULL);
		__this->set_OpenSize_7(L_1);
		Vector3_t3722313464  L_2 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_CloseSize_8(L_2);
		ButtObj__ctor_m2484122873(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SizeButt::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void SizeButt_OnPointerDown_m1556207670 (SizeButt_t245973045 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	{
		SizeButt_SetSize_m2589160445(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SizeButt::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void SizeButt_OnPointerUp_m3542156877 (SizeButt_t245973045 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	{
		SizeButt_SetSize_m2589160445(__this, (bool)0, /*hidden argument*/NULL);
		VoidDel_t2721053205 * L_0 = ((ButtObj_t1384809709 *)__this)->get_Del_4();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		VoidDel_t2721053205 * L_1 = ((ButtObj_t1384809709 *)__this)->get_Del_4();
		VoidDel_Invoke_m1500761510(L_1, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void SizeButt::SetSize(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SizeButt_SetSize_m2589160445 (SizeButt_t245973045 * __this, bool ___b0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SizeButt_SetSize_m2589160445_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_sizeType_6();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_004b;
		}
	}
	{
		goto IL_0087;
	}

IL_0019:
	{
		bool L_3 = ___b0;
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		RectTransform_t3704657025 * L_4 = __this->get_Obj_5();
		Vector3_t3722313464  L_5 = __this->get_OpenSize_7();
		Transform_set_localScale_m3053443106(L_4, L_5, /*hidden argument*/NULL);
		goto IL_0046;
	}

IL_0035:
	{
		RectTransform_t3704657025 * L_6 = __this->get_Obj_5();
		Vector3_t3722313464  L_7 = __this->get_CloseSize_8();
		Transform_set_localScale_m3053443106(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0046:
	{
		goto IL_0087;
	}

IL_004b:
	{
		bool L_8 = ___b0;
		if (!L_8)
		{
			goto IL_006c;
		}
	}
	{
		RectTransform_t3704657025 * L_9 = __this->get_Obj_5();
		Vector3_t3722313464  L_10 = __this->get_OpenSize_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_11 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		RectTransform_set_sizeDelta_m3462269772(L_9, L_11, /*hidden argument*/NULL);
		goto IL_0082;
	}

IL_006c:
	{
		RectTransform_t3704657025 * L_12 = __this->get_Obj_5();
		Vector3_t3722313464  L_13 = __this->get_CloseSize_8();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_14 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		RectTransform_set_sizeDelta_m3462269772(L_12, L_14, /*hidden argument*/NULL);
	}

IL_0082:
	{
		goto IL_0087;
	}

IL_0087:
	{
		return;
	}
}
// System.Void SizeButt::SetObj_Scale()
extern "C" IL2CPP_METHOD_ATTR void SizeButt_SetObj_Scale_m1124595701 (SizeButt_t245973045 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SizeButt_SetObj_Scale_m1124595701_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_sizeType_6(0);
		RectTransform_t3704657025 * L_0 = __this->get_Obj_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_3 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_2, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		__this->set_Obj_5(L_3);
	}

IL_0029:
	{
		RectTransform_t3704657025 * L_4 = __this->get_Obj_5();
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(L_4, /*hidden argument*/NULL);
		Vector3_t3722313464  L_6 = Transform_get_localScale_m129152068(L_5, /*hidden argument*/NULL);
		__this->set_CloseSize_8(L_6);
		Vector3_t3722313464  L_7 = __this->get_CloseSize_8();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_7, (1.1f), /*hidden argument*/NULL);
		__this->set_OpenSize_7(L_8);
		return;
	}
}
// System.Void SizeButt::SetObj_Rect()
extern "C" IL2CPP_METHOD_ATTR void SizeButt_SetObj_Rect_m343241564 (SizeButt_t245973045 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SizeButt_SetObj_Rect_m343241564_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_sizeType_6(1);
		RectTransform_t3704657025 * L_0 = __this->get_Obj_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_3 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_2, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		__this->set_Obj_5(L_3);
	}

IL_0029:
	{
		RectTransform_t3704657025 * L_4 = __this->get_Obj_5();
		Vector2_t2156229523  L_5 = RectTransform_get_sizeDelta_m2183112744(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->set_CloseSize_8(L_6);
		Vector3_t3722313464  L_7 = __this->get_CloseSize_8();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_7, (1.1f), /*hidden argument*/NULL);
		__this->set_OpenSize_7(L_8);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TestCon::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TestCon__ctor_m4163693271 (TestCon_t50111880 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator TestCon::Start()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TestCon_Start_m791603019 (TestCon_t50111880 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestCon_Start_m791603019_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartU3Ec__Iterator0_t46314510 * V_0 = NULL;
	{
		U3CStartU3Ec__Iterator0_t46314510 * L_0 = (U3CStartU3Ec__Iterator0_t46314510 *)il2cpp_codegen_object_new(U3CStartU3Ec__Iterator0_t46314510_il2cpp_TypeInfo_var);
		U3CStartU3Ec__Iterator0__ctor_m1093577629(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CStartU3Ec__Iterator0_t46314510 * L_1 = V_0;
		L_1->set_U24this_1(__this);
		U3CStartU3Ec__Iterator0_t46314510 * L_2 = V_0;
		return L_2;
	}
}
// System.Void TestCon::Print(System.String)
extern "C" IL2CPP_METHOD_ATTR void TestCon_Print_m2216005521 (TestCon_t50111880 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___text0;
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TestCon/<Start>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0__ctor_m1093577629 (U3CStartU3Ec__Iterator0_t46314510 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TestCon/<Start>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CStartU3Ec__Iterator0_MoveNext_m3158819371 (U3CStartU3Ec__Iterator0_t46314510 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_MoveNext_m3158819371_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0068;
			}
		}
	}
	{
		goto IL_0095;
	}

IL_0021:
	{
		__this->set_U3CiU3E__1_0(0);
		goto IL_0076;
	}

IL_002d:
	{
		TestCon_t50111880 * L_2 = __this->get_U24this_1();
		UnityEventU5BU5D_t4042265822* L_3 = L_2->get_Events_4();
		int32_t L_4 = __this->get_U3CiU3E__1_0();
		int32_t L_5 = L_4;
		UnityEvent_t2581268647 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		UnityEvent_Invoke_m3065672636(L_6, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_7 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_7, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_2(L_7);
		bool L_8 = __this->get_U24disposing_3();
		if (L_8)
		{
			goto IL_0063;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_0063:
	{
		goto IL_0097;
	}

IL_0068:
	{
		int32_t L_9 = __this->get_U3CiU3E__1_0();
		__this->set_U3CiU3E__1_0(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
	}

IL_0076:
	{
		int32_t L_10 = __this->get_U3CiU3E__1_0();
		TestCon_t50111880 * L_11 = __this->get_U24this_1();
		UnityEventU5BU5D_t4042265822* L_12 = L_11->get_Events_4();
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_002d;
		}
	}
	{
		__this->set_U24PC_4((-1));
	}

IL_0095:
	{
		return (bool)0;
	}

IL_0097:
	{
		return (bool)1;
	}
}
// System.Object TestCon/<Start>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m4211483446 (U3CStartU3Ec__Iterator0_t46314510 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object TestCon/<Start>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1245492252 (U3CStartU3Ec__Iterator0_t46314510 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void TestCon/<Start>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0_Dispose_m3920339441 (U3CStartU3Ec__Iterator0_t46314510 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void TestCon/<Start>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0_Reset_m3831356277 (U3CStartU3Ec__Iterator0_t46314510 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_Reset_m3831356277_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CStartU3Ec__Iterator0_Reset_m3831356277_RuntimeMethod_var);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TextSpacing::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TextSpacing__ctor_m2568912792 (TextSpacing_t1351873361 * __this, const RuntimeMethod* method)
{
	{
		__this->set__textSpacing_5((1.0f));
		BaseMeshEffect__ctor_m2277545720(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TextSpacing::ModifyMesh(UnityEngine.UI.VertexHelper)
extern "C" IL2CPP_METHOD_ATTR void TextSpacing_ModifyMesh_m2493072849 (TextSpacing_t1351873361 * __this, VertexHelper_t2453304189 * ___vh0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextSpacing_ModifyMesh_m2493072849_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t1234605051 * V_0 = NULL;
	int32_t V_1 = 0;
	UIVertex_t4057497605  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.EventSystems.UIBehaviour::IsActive() */, __this);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		VertexHelper_t2453304189 * L_1 = ___vh0;
		int32_t L_2 = VertexHelper_get_currentVertCount_m124779331(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		return;
	}

IL_0017:
	{
		List_1_t1234605051 * L_3 = (List_1_t1234605051 *)il2cpp_codegen_object_new(List_1_t1234605051_il2cpp_TypeInfo_var);
		List_1__ctor_m3713859815(L_3, /*hidden argument*/List_1__ctor_m3713859815_RuntimeMethod_var);
		V_0 = L_3;
		VertexHelper_t2453304189 * L_4 = ___vh0;
		List_1_t1234605051 * L_5 = V_0;
		VertexHelper_GetUIVertexStream_m785241639(L_4, L_5, /*hidden argument*/NULL);
		VertexHelper_t2453304189 * L_6 = ___vh0;
		int32_t L_7 = VertexHelper_get_currentIndexCount_m2916736969(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		V_3 = 6;
		goto IL_00a6;
	}

IL_0032:
	{
		List_1_t1234605051 * L_8 = V_0;
		int32_t L_9 = V_3;
		UIVertex_t4057497605  L_10 = List_1_get_Item_m457221236(L_8, L_9, /*hidden argument*/List_1_get_Item_m457221236_RuntimeMethod_var);
		V_2 = L_10;
		UIVertex_t4057497605 * L_11 = (&V_2);
		Vector3_t3722313464  L_12 = L_11->get_position_0();
		float L_13 = __this->get__textSpacing_5();
		int32_t L_14 = V_3;
		Vector3_t3722313464  L_15;
		memset(&L_15, 0, sizeof(L_15));
		Vector3__ctor_m3353183577((&L_15), ((float)il2cpp_codegen_multiply((float)L_13, (float)(((float)((float)((int32_t)((int32_t)L_14/(int32_t)6))))))), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_16 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_12, L_15, /*hidden argument*/NULL);
		L_11->set_position_0(L_16);
		List_1_t1234605051 * L_17 = V_0;
		int32_t L_18 = V_3;
		UIVertex_t4057497605  L_19 = V_2;
		List_1_set_Item_m2057272351(L_17, L_18, L_19, /*hidden argument*/List_1_set_Item_m2057272351_RuntimeMethod_var);
		int32_t L_20 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_20%(int32_t)6))) > ((int32_t)2)))
		{
			goto IL_0087;
		}
	}
	{
		VertexHelper_t2453304189 * L_21 = ___vh0;
		UIVertex_t4057497605  L_22 = V_2;
		int32_t L_23 = V_3;
		int32_t L_24 = V_3;
		VertexHelper_SetUIVertex_m3094993826(L_21, L_22, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_23/(int32_t)6)), (int32_t)4)), (int32_t)((int32_t)((int32_t)L_24%(int32_t)6)))), /*hidden argument*/NULL);
	}

IL_0087:
	{
		int32_t L_25 = V_3;
		if ((!(((uint32_t)((int32_t)((int32_t)L_25%(int32_t)6))) == ((uint32_t)4))))
		{
			goto IL_00a2;
		}
	}
	{
		VertexHelper_t2453304189 * L_26 = ___vh0;
		UIVertex_t4057497605  L_27 = V_2;
		int32_t L_28 = V_3;
		int32_t L_29 = V_3;
		VertexHelper_SetUIVertex_m3094993826(L_26, L_27, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_28/(int32_t)6)), (int32_t)4)), (int32_t)((int32_t)((int32_t)L_29%(int32_t)6)))), (int32_t)1)), /*hidden argument*/NULL);
	}

IL_00a2:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_00a6:
	{
		int32_t L_31 = V_3;
		int32_t L_32 = V_1;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0032;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TimeLoop::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TimeLoop__ctor_m2872835515 (TimeLoop_t468784922 * __this, const RuntimeMethod* method)
{
	{
		__this->set_Time_F_7((1.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TimeLoop::Open()
extern "C" IL2CPP_METHOD_ATTR void TimeLoop_Open_m4218940108 (TimeLoop_t468784922 * __this, const RuntimeMethod* method)
{
	{
		Behaviour_set_enabled_m20417929(__this, (bool)1, /*hidden argument*/NULL);
		TimeLoop_Load_Del_m1745856296(__this, /*hidden argument*/NULL);
		float L_0 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = __this->get_Delay_6();
		float L_2 = __this->get_Time_F_7();
		__this->set_Next_Time_10(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_0, (float)L_1)), (float)L_2)));
		__this->set_IsOpen_9((bool)1);
		return;
	}
}
// System.Void TimeLoop::Reset()
extern "C" IL2CPP_METHOD_ATTR void TimeLoop_Reset_m1960235212 (TimeLoop_t468784922 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = TimeLoop__Reset_m1745416133(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator TimeLoop::_Reset()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TimeLoop__Reset_m1745416133 (TimeLoop_t468784922 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeLoop__Reset_m1745416133_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3C_ResetU3Ec__Iterator0_t24904354 * V_0 = NULL;
	{
		U3C_ResetU3Ec__Iterator0_t24904354 * L_0 = (U3C_ResetU3Ec__Iterator0_t24904354 *)il2cpp_codegen_object_new(U3C_ResetU3Ec__Iterator0_t24904354_il2cpp_TypeInfo_var);
		U3C_ResetU3Ec__Iterator0__ctor_m3294748105(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3C_ResetU3Ec__Iterator0_t24904354 * L_1 = V_0;
		L_1->set_U24this_0(__this);
		U3C_ResetU3Ec__Iterator0_t24904354 * L_2 = V_0;
		return L_2;
	}
}
// System.Void TimeLoop::Update()
extern "C" IL2CPP_METHOD_ATTR void TimeLoop_Update_m790017293 (TimeLoop_t468784922 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_IsOpen_9();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		float L_1 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = __this->get_Next_Time_10();
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_3 = __this->get_n_8();
		__this->set_n_8(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		TimeLoop_Load_Del_m1745856296(__this, /*hidden argument*/NULL);
		float L_4 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_5 = __this->get_Time_F_7();
		__this->set_Next_Time_10(((float)il2cpp_codegen_add((float)L_4, (float)L_5)));
	}

IL_0042:
	{
		return;
	}
}
// System.Void TimeLoop::Load_Del()
extern "C" IL2CPP_METHOD_ATTR void TimeLoop_Load_Del_m1745856296 (TimeLoop_t468784922 * __this, const RuntimeMethod* method)
{
	{
		Void_IntDel_t3049649234 * L_0 = __this->get_Del_4();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		Void_IntDel_t3049649234 * L_1 = __this->get_Del_4();
		int32_t L_2 = __this->get_n_8();
		Void_IntDel_Invoke_m2136999072(L_1, L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
		UnityEvent_t2581268647 * L_3 = __this->get_TheEvent_5();
		UnityEvent_Invoke_m3065672636(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TimeLoop::Test()
extern "C" IL2CPP_METHOD_ATTR void TimeLoop_Test_m3384722899 (TimeLoop_t468784922 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeLoop_Test_m3384722899_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_n_8();
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_1);
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TimeLoop/<_Reset>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3C_ResetU3Ec__Iterator0__ctor_m3294748105 (U3C_ResetU3Ec__Iterator0_t24904354 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TimeLoop/<_Reset>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3C_ResetU3Ec__Iterator0_MoveNext_m777643402 (U3C_ResetU3Ec__Iterator0_t24904354 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0054;
			}
		}
	}
	{
		goto IL_0066;
	}

IL_0021:
	{
		TimeLoop_t468784922 * L_2 = __this->get_U24this_0();
		L_2->set_IsOpen_9((bool)0);
		TimeLoop_t468784922 * L_3 = __this->get_U24this_0();
		L_3->set_n_8(0);
		__this->set_U24current_1(NULL);
		bool L_4 = __this->get_U24disposing_2();
		if (L_4)
		{
			goto IL_004f;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_004f:
	{
		goto IL_0068;
	}

IL_0054:
	{
		TimeLoop_t468784922 * L_5 = __this->get_U24this_0();
		TimeLoop_Open_m4218940108(L_5, /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_0066:
	{
		return (bool)0;
	}

IL_0068:
	{
		return (bool)1;
	}
}
// System.Object TimeLoop/<_Reset>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3C_ResetU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1018907635 (U3C_ResetU3Ec__Iterator0_t24904354 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object TimeLoop/<_Reset>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3C_ResetU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m551943483 (U3C_ResetU3Ec__Iterator0_t24904354 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void TimeLoop/<_Reset>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3C_ResetU3Ec__Iterator0_Dispose_m2736381439 (U3C_ResetU3Ec__Iterator0_t24904354 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void TimeLoop/<_Reset>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3C_ResetU3Ec__Iterator0_Reset_m3981321021 (U3C_ResetU3Ec__Iterator0_t24904354 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3C_ResetU3Ec__Iterator0_Reset_m3981321021_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3C_ResetU3Ec__Iterator0_Reset_m3981321021_RuntimeMethod_var);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tween::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Tween__ctor_m3828688439 (Tween_t251520763 * __this, const RuntimeMethod* method)
{
	{
		__this->set_Time_Length_8((10.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Tween::get_f()
extern "C" IL2CPP_METHOD_ATTR float Tween_get_f_m702625410 (Tween_t251520763 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__f_9();
		return L_0;
	}
}
// System.Void Tween::set_f(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Tween_set_f_m2683448068 (Tween_t251520763 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tween_set_f_m2683448068_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_0, (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set__f_9(L_1);
		return;
	}
}
// System.Void Tween::On()
extern "C" IL2CPP_METHOD_ATTR void Tween_On_m2841163185 (Tween_t251520763 * __this, const RuntimeMethod* method)
{
	{
		Tween_Play_m1783120483(__this, (bool)1, (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Tween::Off()
extern "C" IL2CPP_METHOD_ATTR void Tween_Off_m2739421470 (Tween_t251520763 * __this, const RuntimeMethod* method)
{
	{
		Tween_Play_m1783120483(__this, (bool)0, (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Tween::Play(System.Boolean,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Tween_Play_m1783120483 (Tween_t251520763 * __this, bool ___b0, float ___Delay1, const RuntimeMethod* method)
{
	Tween_t251520763 * G_B3_0 = NULL;
	Tween_t251520763 * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	Tween_t251520763 * G_B4_1 = NULL;
	Tween_t251520763 * G_B7_0 = NULL;
	Tween_t251520763 * G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	Tween_t251520763 * G_B8_1 = NULL;
	{
		int32_t L_0 = __this->get_Mod_10();
		if (L_0)
		{
			goto IL_002c;
		}
	}
	{
		float L_1 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = ___Delay1;
		__this->set_Start_Time_11(((float)il2cpp_codegen_add((float)L_1, (float)L_2)));
		bool L_3 = ___b0;
		G_B2_0 = __this;
		if (!L_3)
		{
			G_B3_0 = __this;
			goto IL_0025;
		}
	}
	{
		G_B4_0 = 0;
		G_B4_1 = G_B2_0;
		goto IL_0026;
	}

IL_0025:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_0026:
	{
		Tween_set_f_m2683448068(G_B4_1, (((float)((float)G_B4_0))), /*hidden argument*/NULL);
	}

IL_002c:
	{
		bool L_4 = ___b0;
		G_B6_0 = __this;
		if (!L_4)
		{
			G_B7_0 = __this;
			goto IL_0039;
		}
	}
	{
		G_B8_0 = 1;
		G_B8_1 = G_B6_0;
		goto IL_003a;
	}

IL_0039:
	{
		G_B8_0 = (-1);
		G_B8_1 = G_B7_0;
	}

IL_003a:
	{
		G_B8_1->set_Mod_10(G_B8_0);
		Behaviour_set_enabled_m20417929(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Tween::Update()
extern "C" IL2CPP_METHOD_ATTR void Tween_Update_m2885568604 (Tween_t251520763 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_Mod_10();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Behaviour_set_enabled_m20417929(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}

IL_0013:
	{
		float L_1 = __this->get_Start_Time_11();
		float L_2 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_0024;
		}
	}
	{
		return;
	}

IL_0024:
	{
		int32_t L_3 = __this->get_Type_4();
		V_0 = L_3;
		int32_t L_4 = V_0;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0042;
			}
			case 1:
			{
				goto IL_004d;
			}
			case 2:
			{
				goto IL_0058;
			}
		}
	}
	{
		goto IL_0063;
	}

IL_0042:
	{
		Tween_Update_One_m1576375117(__this, /*hidden argument*/NULL);
		goto IL_0068;
	}

IL_004d:
	{
		Tween_Update_Loop_m2544562173(__this, /*hidden argument*/NULL);
		goto IL_0068;
	}

IL_0058:
	{
		Tween_Update_Pingpong_m2382596180(__this, /*hidden argument*/NULL);
		goto IL_0068;
	}

IL_0063:
	{
		goto IL_0068;
	}

IL_0068:
	{
		Void_FloatDel_t2690466815 * L_5 = __this->get_Del_6();
		if (!L_5)
		{
			goto IL_008f;
		}
	}
	{
		Void_FloatDel_t2690466815 * L_6 = __this->get_Del_6();
		AnimationCurve_t3046754366 * L_7 = __this->get_animationCurve_5();
		float L_8 = Tween_get_f_m702625410(__this, /*hidden argument*/NULL);
		float L_9 = AnimationCurve_Evaluate_m2125563588(L_7, L_8, /*hidden argument*/NULL);
		Void_FloatDel_Invoke_m2708042268(L_6, L_9, /*hidden argument*/NULL);
	}

IL_008f:
	{
		int32_t L_10 = __this->get_Mod_10();
		if (L_10)
		{
			goto IL_00b0;
		}
	}
	{
		VoidDel_t2721053205 * L_11 = __this->get_End_Del_7();
		if (!L_11)
		{
			goto IL_00b0;
		}
	}
	{
		VoidDel_t2721053205 * L_12 = __this->get_End_Del_7();
		VoidDel_Invoke_m1500761510(L_12, /*hidden argument*/NULL);
	}

IL_00b0:
	{
		return;
	}
}
// System.Void Tween::Update_One()
extern "C" IL2CPP_METHOD_ATTR void Tween_Update_One_m1576375117 (Tween_t251520763 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_Mod_10();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		float L_1 = Tween_get_f_m702625410(__this, /*hidden argument*/NULL);
		float L_2 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = __this->get_Time_Length_8();
		Tween_set_f_m2683448068(__this, ((float)il2cpp_codegen_add((float)L_1, (float)((float)((float)L_2/(float)L_3)))), /*hidden argument*/NULL);
		float L_4 = Tween_get_f_m702625410(__this, /*hidden argument*/NULL);
		if ((!(((float)L_4) >= ((float)(1.0f)))))
		{
			goto IL_003c;
		}
	}
	{
		__this->set_Mod_10(0);
	}

IL_003c:
	{
		goto IL_007d;
	}

IL_0041:
	{
		int32_t L_5 = __this->get_Mod_10();
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		float L_6 = Tween_get_f_m702625410(__this, /*hidden argument*/NULL);
		float L_7 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_8 = __this->get_Time_Length_8();
		Tween_set_f_m2683448068(__this, ((float)il2cpp_codegen_subtract((float)L_6, (float)((float)((float)L_7/(float)L_8)))), /*hidden argument*/NULL);
		float L_9 = Tween_get_f_m702625410(__this, /*hidden argument*/NULL);
		if ((!(((float)L_9) <= ((float)(0.0f)))))
		{
			goto IL_007d;
		}
	}
	{
		__this->set_Mod_10(0);
	}

IL_007d:
	{
		return;
	}
}
// System.Void Tween::Update_Loop()
extern "C" IL2CPP_METHOD_ATTR void Tween_Update_Loop_m2544562173 (Tween_t251520763 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_Mod_10();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		float L_1 = Tween_get_f_m702625410(__this, /*hidden argument*/NULL);
		float L_2 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = __this->get_Time_Length_8();
		Tween_set_f_m2683448068(__this, (fmodf(((float)il2cpp_codegen_add((float)L_1, (float)((float)((float)L_2/(float)L_3)))), (1.0f))), /*hidden argument*/NULL);
		goto IL_0061;
	}

IL_0030:
	{
		int32_t L_4 = __this->get_Mod_10();
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0061;
		}
	}
	{
		float L_5 = Tween_get_f_m702625410(__this, /*hidden argument*/NULL);
		float L_6 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_7 = __this->get_Time_Length_8();
		Tween_set_f_m2683448068(__this, (fmodf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_5, (float)((float)((float)L_6/(float)L_7)))), (float)(1.0f))), (1.0f))), /*hidden argument*/NULL);
	}

IL_0061:
	{
		return;
	}
}
// System.Void Tween::Update_Pingpong()
extern "C" IL2CPP_METHOD_ATTR void Tween_Update_Pingpong_m2382596180 (Tween_t251520763 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_Mod_10();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		float L_1 = Tween_get_f_m702625410(__this, /*hidden argument*/NULL);
		float L_2 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = __this->get_Time_Length_8();
		Tween_set_f_m2683448068(__this, ((float)il2cpp_codegen_add((float)L_1, (float)((float)((float)L_2/(float)L_3)))), /*hidden argument*/NULL);
		float L_4 = Tween_get_f_m702625410(__this, /*hidden argument*/NULL);
		if ((!(((float)L_4) >= ((float)(1.0f)))))
		{
			goto IL_003c;
		}
	}
	{
		__this->set_Mod_10((-1));
	}

IL_003c:
	{
		goto IL_007d;
	}

IL_0041:
	{
		int32_t L_5 = __this->get_Mod_10();
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		float L_6 = Tween_get_f_m702625410(__this, /*hidden argument*/NULL);
		float L_7 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_8 = __this->get_Time_Length_8();
		Tween_set_f_m2683448068(__this, ((float)il2cpp_codegen_subtract((float)L_6, (float)((float)((float)L_7/(float)L_8)))), /*hidden argument*/NULL);
		float L_9 = Tween_get_f_m702625410(__this, /*hidden argument*/NULL);
		if ((!(((float)L_9) <= ((float)(0.0f)))))
		{
			goto IL_007d;
		}
	}
	{
		__this->set_Mod_10(1);
	}

IL_007d:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tween_Array::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Tween_Array__ctor_m3297969044 (Tween_Array_t2143430763 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tween_Array__ctor_m3297969044_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t1723595505 * L_0 = (List_1_t1723595505 *)il2cpp_codegen_object_new(List_1_t1723595505_il2cpp_TypeInfo_var);
		List_1__ctor_m2923797854(L_0, /*hidden argument*/List_1__ctor_m2923797854_RuntimeMethod_var);
		__this->set_All_Tween_12(L_0);
		Tween__ctor_m3828688439(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Tween_Array::Update()
extern "C" IL2CPP_METHOD_ATTR void Tween_Array_Update_m724047589 (Tween_Array_t2143430763 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tween_Array_Update_m724047589_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Tween_Update_m2885568604(__this, /*hidden argument*/NULL);
		bool L_0 = Behaviour_get_enabled_m753527255(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		V_0 = 0;
		goto IL_004f;
	}

IL_0019:
	{
		List_1_t1723595505 * L_1 = __this->get_All_Tween_12();
		int32_t L_2 = V_0;
		Tween_t251520763 * L_3 = List_1_get_Item_m863626585(L_1, L_2, /*hidden argument*/List_1_get_Item_m863626585_RuntimeMethod_var);
		Void_FloatDel_t2690466815 * L_4 = L_3->get_Del_6();
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		List_1_t1723595505 * L_5 = __this->get_All_Tween_12();
		int32_t L_6 = V_0;
		Tween_t251520763 * L_7 = List_1_get_Item_m863626585(L_5, L_6, /*hidden argument*/List_1_get_Item_m863626585_RuntimeMethod_var);
		Void_FloatDel_t2690466815 * L_8 = L_7->get_Del_6();
		float L_9 = Tween_get_f_m702625410(__this, /*hidden argument*/NULL);
		Void_FloatDel_Invoke_m2708042268(L_8, L_9, /*hidden argument*/NULL);
	}

IL_004b:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_004f:
	{
		int32_t L_11 = V_0;
		List_1_t1723595505 * L_12 = __this->get_All_Tween_12();
		int32_t L_13 = List_1_get_Count_m1316380031(L_12, /*hidden argument*/List_1_get_Count_m1316380031_RuntimeMethod_var);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_14 = ((Tween_t251520763 *)__this)->get_Mod_10();
		if (L_14)
		{
			goto IL_00a8;
		}
	}
	{
		V_1 = 0;
		goto IL_0097;
	}

IL_0072:
	{
		List_1_t1723595505 * L_15 = __this->get_All_Tween_12();
		int32_t L_16 = V_1;
		Tween_t251520763 * L_17 = List_1_get_Item_m863626585(L_15, L_16, /*hidden argument*/List_1_get_Item_m863626585_RuntimeMethod_var);
		VoidDel_t2721053205 * L_18 = L_17->get_End_Del_7();
		if (!L_18)
		{
			goto IL_0093;
		}
	}
	{
		VoidDel_t2721053205 * L_19 = ((Tween_t251520763 *)__this)->get_End_Del_7();
		VoidDel_Invoke_m1500761510(L_19, /*hidden argument*/NULL);
	}

IL_0093:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0097:
	{
		int32_t L_21 = V_1;
		List_1_t1723595505 * L_22 = __this->get_All_Tween_12();
		int32_t L_23 = List_1_get_Count_m1316380031(L_22, /*hidden argument*/List_1_get_Count_m1316380031_RuntimeMethod_var);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_0072;
		}
	}

IL_00a8:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tween_Color::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Tween_Color__ctor_m737685389 (Tween_Color_t1470692164 * __this, const RuntimeMethod* method)
{
	{
		Color_t2555686324  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Color__ctor_m286683560((&L_0), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_From_12(L_0);
		Color_t2555686324  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Color__ctor_m286683560((&L_1), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_To_13(L_1);
		Tween__ctor_m3828688439(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Tween_Color::Start()
extern "C" IL2CPP_METHOD_ATTR void Tween_Color_Start_m3998074835 (Tween_Color_t1470692164 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tween_Color_Start_m3998074835_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Void_FloatDel_t2690466815 * L_0 = ((Tween_t251520763 *)__this)->get_Del_6();
		intptr_t L_1 = (intptr_t)Tween_Color_U3CStartU3Em__0_m335980265_RuntimeMethod_var;
		Void_FloatDel_t2690466815 * L_2 = (Void_FloatDel_t2690466815 *)il2cpp_codegen_object_new(Void_FloatDel_t2690466815_il2cpp_TypeInfo_var);
		Void_FloatDel__ctor_m2051256971(L_2, __this, L_1, /*hidden argument*/NULL);
		Delegate_t1188392813 * L_3 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		((Tween_t251520763 *)__this)->set_Del_6(((Void_FloatDel_t2690466815 *)CastclassSealed((RuntimeObject*)L_3, Void_FloatDel_t2690466815_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void Tween_Color::<Start>m__0(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Tween_Color_U3CStartU3Em__0_m335980265 (Tween_Color_t1470692164 * __this, float ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tween_Color_U3CStartU3Em__0_m335980265_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MaskableGraphic_t3839221559 * L_0 = Component_GetComponent_TisMaskableGraphic_t3839221559_m1169390343(__this, /*hidden argument*/Component_GetComponent_TisMaskableGraphic_t3839221559_m1169390343_RuntimeMethod_var);
		Color_t2555686324  L_1 = __this->get_From_12();
		Color_t2555686324  L_2 = __this->get_To_13();
		Color_t2555686324  L_3 = __this->get_From_12();
		Color_t2555686324  L_4 = Color_op_Subtraction_m181229690(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		float L_5 = ___f0;
		Color_t2555686324  L_6 = Color_op_Multiply_m2887457390(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		Color_t2555686324  L_7 = Color_op_Addition_m3293657895(NULL /*static, unused*/, L_1, L_6, /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_7);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tween_Position::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Tween_Position__ctor_m2077600953 (Tween_Position_t749407915 * __this, const RuntimeMethod* method)
{
	{
		Tween__ctor_m3828688439(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Tween_Position::Start()
extern "C" IL2CPP_METHOD_ATTR void Tween_Position_Start_m73072837 (Tween_Position_t749407915 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tween_Position_Start_m73072837_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Void_FloatDel_t2690466815 * L_0 = ((Tween_t251520763 *)__this)->get_Del_6();
		intptr_t L_1 = (intptr_t)Tween_Position_U3CStartU3Em__0_m719965587_RuntimeMethod_var;
		Void_FloatDel_t2690466815 * L_2 = (Void_FloatDel_t2690466815 *)il2cpp_codegen_object_new(Void_FloatDel_t2690466815_il2cpp_TypeInfo_var);
		Void_FloatDel__ctor_m2051256971(L_2, __this, L_1, /*hidden argument*/NULL);
		Delegate_t1188392813 * L_3 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		((Tween_t251520763 *)__this)->set_Del_6(((Void_FloatDel_t2690466815 *)CastclassSealed((RuntimeObject*)L_3, Void_FloatDel_t2690466815_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void Tween_Position::<Start>m__0(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Tween_Position_U3CStartU3Em__0_m719965587 (Tween_Position_t749407915 * __this, float ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tween_Position_U3CStartU3Em__0_m719965587_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = __this->get_From_12();
		Vector3_t3722313464  L_2 = __this->get_To_13();
		Vector3_t3722313464  L_3 = __this->get_From_12();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		float L_5 = ___f0;
		Vector3_t3722313464  L_6 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_1, L_6, /*hidden argument*/NULL);
		Transform_set_localPosition_m4128471975(L_0, L_7, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tween_Rotation::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Tween_Rotation__ctor_m2468579968 (Tween_Rotation_t2420198140 * __this, const RuntimeMethod* method)
{
	{
		Tween__ctor_m3828688439(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Tween_Rotation::Start()
extern "C" IL2CPP_METHOD_ATTR void Tween_Rotation_Start_m2561354194 (Tween_Rotation_t2420198140 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tween_Rotation_Start_m2561354194_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Void_FloatDel_t2690466815 * L_0 = ((Tween_t251520763 *)__this)->get_Del_6();
		intptr_t L_1 = (intptr_t)Tween_Rotation_U3CStartU3Em__0_m4072489487_RuntimeMethod_var;
		Void_FloatDel_t2690466815 * L_2 = (Void_FloatDel_t2690466815 *)il2cpp_codegen_object_new(Void_FloatDel_t2690466815_il2cpp_TypeInfo_var);
		Void_FloatDel__ctor_m2051256971(L_2, __this, L_1, /*hidden argument*/NULL);
		Delegate_t1188392813 * L_3 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		((Tween_t251520763 *)__this)->set_Del_6(((Void_FloatDel_t2690466815 *)CastclassSealed((RuntimeObject*)L_3, Void_FloatDel_t2690466815_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void Tween_Rotation::<Start>m__0(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Tween_Rotation_U3CStartU3Em__0_m4072489487 (Tween_Rotation_t2420198140 * __this, float ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tween_Rotation_U3CStartU3Em__0_m4072489487_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = __this->get_From_12();
		Vector3_t3722313464  L_2 = __this->get_To_13();
		Vector3_t3722313464  L_3 = __this->get_From_12();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		float L_5 = ___f0;
		Vector3_t3722313464  L_6 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_1, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_8 = Quaternion_Euler_m1803555822(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		Transform_set_localRotation_m19445462(L_0, L_8, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tween_Size::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Tween_Size__ctor_m3432602619 (Tween_Size_t305626671 * __this, const RuntimeMethod* method)
{
	{
		Tween__ctor_m3828688439(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Tween_Size::Start()
extern "C" IL2CPP_METHOD_ATTR void Tween_Size_Start_m999688751 (Tween_Size_t305626671 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tween_Size_Start_m999688751_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Void_FloatDel_t2690466815 * L_0 = ((Tween_t251520763 *)__this)->get_Del_6();
		intptr_t L_1 = (intptr_t)Tween_Size_U3CStartU3Em__0_m1213412234_RuntimeMethod_var;
		Void_FloatDel_t2690466815 * L_2 = (Void_FloatDel_t2690466815 *)il2cpp_codegen_object_new(Void_FloatDel_t2690466815_il2cpp_TypeInfo_var);
		Void_FloatDel__ctor_m2051256971(L_2, __this, L_1, /*hidden argument*/NULL);
		Delegate_t1188392813 * L_3 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		((Tween_t251520763 *)__this)->set_Del_6(((Void_FloatDel_t2690466815 *)CastclassSealed((RuntimeObject*)L_3, Void_FloatDel_t2690466815_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void Tween_Size::<Start>m__0(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Tween_Size_U3CStartU3Em__0_m1213412234 (Tween_Size_t305626671 * __this, float ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tween_Size_U3CStartU3Em__0_m1213412234_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = __this->get_From_12();
		Vector3_t3722313464  L_2 = __this->get_To_13();
		Vector3_t3722313464  L_3 = __this->get_From_12();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		float L_5 = ___f0;
		Vector3_t3722313464  L_6 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_1, L_6, /*hidden argument*/NULL);
		Transform_set_localScale_m3053443106(L_0, L_7, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TxtCon::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TxtCon__ctor_m3734774675 (TxtCon_t3340380335 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// TxtCon/PathObj TxtCon::GetPath(System.String)
extern "C" IL2CPP_METHOD_ATTR PathObj_t4274847934  TxtCon_GetPath_m324242885 (TxtCon_t3340380335 * __this, String_t* ___Pname0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TxtCon_GetPath_m324242885_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PathObj_t4274847934  V_0;
	memset(&V_0, 0, sizeof(V_0));
	PathObjU5BU5D_t895737483* V_1 = NULL;
	int32_t V_2 = 0;
	PathObj_t4274847934  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		PathObjU5BU5D_t895737483* L_0 = __this->get_PathObjs_4();
		V_1 = L_0;
		V_2 = 0;
		goto IL_0033;
	}

IL_000e:
	{
		PathObjU5BU5D_t895737483* L_1 = V_1;
		int32_t L_2 = V_2;
		V_0 = (*(PathObj_t4274847934 *)((L_1)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_2))));
		String_t* L_3 = (&V_0)->get_name_0();
		String_t* L_4 = ___Pname0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m920492651(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		PathObj_t4274847934  L_6 = V_0;
		return L_6;
	}

IL_002f:
	{
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0033:
	{
		int32_t L_8 = V_2;
		PathObjU5BU5D_t895737483* L_9 = V_1;
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(PathObj_t4274847934 ));
		PathObj_t4274847934  L_10 = V_3;
		return L_10;
	}
}
// System.String TxtCon::GetTxt(TxtCon/PathObj)
extern "C" IL2CPP_METHOD_ATTR String_t* TxtCon_GetTxt_m2424354758 (TxtCon_t3340380335 * __this, PathObj_t4274847934  ___HowPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TxtCon_GetTxt_m2424354758_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_t1281789340* V_1 = NULL;
	int32_t V_2 = 0;
	{
		String_t* L_0 = (&___HowPath0)->get_Path_1();
		bool L_1 = File_Exists_m3943585060(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		PathObj_t4274847934  L_2 = ___HowPath0;
		TxtCon_AddDirectory_m2064543538(__this, L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		String_t* L_3 = (&___HowPath0)->get_Path_1();
		StringU5BU5D_t1281789340* L_4 = Directory_GetFiles_m932257245(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		V_2 = 0;
		goto IL_004b;
	}

IL_002c:
	{
		StringU5BU5D_t1281789340* L_5 = V_1;
		int32_t L_6 = V_2;
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = L_8;
		String_t* L_9 = V_0;
		bool L_10 = String_EndsWith_m1901926500(L_9, _stringLiteral3988949892, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_11 = V_0;
		String_t* L_12 = File_ReadAllText_m2815479134(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_0047:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_004b:
	{
		int32_t L_14 = V_2;
		StringU5BU5D_t1281789340* L_15 = V_1;
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_16;
	}
}
// System.String TxtCon::GetTxt(System.String,TxtCon/PathObj)
extern "C" IL2CPP_METHOD_ATTR String_t* TxtCon_GetTxt_m2099723250 (TxtCon_t3340380335 * __this, String_t* ___TxtName0, PathObj_t4274847934  ___HowPath1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TxtCon_GetTxt_m2099723250_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral3669225188, /*hidden argument*/NULL);
		String_t* L_0 = (&___HowPath1)->get_Path_1();
		bool L_1 = File_Exists_m3943585060(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		PathObj_t4274847934  L_2 = ___HowPath1;
		TxtCon_AddDirectory_m2064543538(__this, L_2, /*hidden argument*/NULL);
	}

IL_0022:
	{
		String_t* L_3 = (&___HowPath1)->get_Path_1();
		String_t* L_4 = ___TxtName0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m2163913788(NULL /*static, unused*/, L_3, _stringLiteral3452614529, L_4, _stringLiteral3988949892, /*hidden argument*/NULL);
		bool L_6 = File_Exists_m3943585060(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0060;
		}
	}
	{
		String_t* L_7 = (&___HowPath1)->get_Path_1();
		String_t* L_8 = ___TxtName0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m2163913788(NULL /*static, unused*/, L_7, _stringLiteral3452614529, L_8, _stringLiteral3988949892, /*hidden argument*/NULL);
		String_t* L_10 = File_ReadAllText_m2815479134(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0060:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_11;
	}
}
// System.Void TxtCon::CreateTxt(System.String,System.String,TxtCon/PathObj)
extern "C" IL2CPP_METHOD_ATTR void TxtCon_CreateTxt_m3588886097 (TxtCon_t3340380335 * __this, String_t* ___TxtName0, String_t* ___Text1, PathObj_t4274847934  ___HowPath2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TxtCon_CreateTxt_m3588886097_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StreamWriter_t1266378904 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = (&___HowPath2)->get_Path_1();
		bool L_1 = File_Exists_m3943585060(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		PathObj_t4274847934  L_2 = ___HowPath2;
		TxtCon_AddDirectory_m2064543538(__this, L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		String_t* L_3 = (&___HowPath2)->get_Path_1();
		String_t* L_4 = ___TxtName0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m2163913788(NULL /*static, unused*/, L_3, _stringLiteral3452614529, L_4, _stringLiteral3988949892, /*hidden argument*/NULL);
		StreamWriter_t1266378904 * L_6 = File_CreateText_m1585655010(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_0035:
	try
	{ // begin try (depth: 1)
		StreamWriter_t1266378904 * L_7 = V_0;
		String_t* L_8 = ___Text1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral111252121, L_8, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_7, L_9);
		IL2CPP_LEAVE(0x58, FINALLY_004b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004b;
	}

FINALLY_004b:
	{ // begin finally (depth: 1)
		{
			StreamWriter_t1266378904 * L_10 = V_0;
			if (!L_10)
			{
				goto IL_0057;
			}
		}

IL_0051:
		{
			StreamWriter_t1266378904 * L_11 = V_0;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_11);
		}

IL_0057:
		{
			IL2CPP_END_FINALLY(75)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(75)
	{
		IL2CPP_JUMP_TBL(0x58, IL_0058)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0058:
	{
		return;
	}
}
// System.Void TxtCon::AddDirectory(TxtCon/PathObj)
extern "C" IL2CPP_METHOD_ATTR void TxtCon_AddDirectory_m2064543538 (TxtCon_t3340380335 * __this, PathObj_t4274847934  ___HowPath0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (&___HowPath0)->get_Path_1();
		Directory_CreateDirectory_m751642867(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TxtCon::DeleteTxt(System.String,TxtCon/PathObj)
extern "C" IL2CPP_METHOD_ATTR void TxtCon_DeleteTxt_m2426403509 (TxtCon_t3340380335 * __this, String_t* ___TxtName0, PathObj_t4274847934  ___HowPath1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TxtCon_DeleteTxt_m2426403509_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = (&___HowPath1)->get_Path_1();
		String_t* L_1 = ___TxtName0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m2163913788(NULL /*static, unused*/, L_0, _stringLiteral3452614529, L_1, _stringLiteral3988949892, /*hidden argument*/NULL);
		File_Delete_m321251800(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: TxtCon/PathObj
extern "C" void PathObj_t4274847934_marshal_pinvoke(const PathObj_t4274847934& unmarshaled, PathObj_t4274847934_marshaled_pinvoke& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.get_name_0());
	marshaled.___Path_1 = il2cpp_codegen_marshal_string(unmarshaled.get_Path_1());
}
extern "C" void PathObj_t4274847934_marshal_pinvoke_back(const PathObj_t4274847934_marshaled_pinvoke& marshaled, PathObj_t4274847934& unmarshaled)
{
	unmarshaled.set_name_0(il2cpp_codegen_marshal_string_result(marshaled.___name_0));
	unmarshaled.set_Path_1(il2cpp_codegen_marshal_string_result(marshaled.___Path_1));
}
// Conversion method for clean up from marshalling of: TxtCon/PathObj
extern "C" void PathObj_t4274847934_marshal_pinvoke_cleanup(PathObj_t4274847934_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___Path_1);
	marshaled.___Path_1 = NULL;
}
// Conversion methods for marshalling of: TxtCon/PathObj
extern "C" void PathObj_t4274847934_marshal_com(const PathObj_t4274847934& unmarshaled, PathObj_t4274847934_marshaled_com& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_name_0());
	marshaled.___Path_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_Path_1());
}
extern "C" void PathObj_t4274847934_marshal_com_back(const PathObj_t4274847934_marshaled_com& marshaled, PathObj_t4274847934& unmarshaled)
{
	unmarshaled.set_name_0(il2cpp_codegen_marshal_bstring_result(marshaled.___name_0));
	unmarshaled.set_Path_1(il2cpp_codegen_marshal_bstring_result(marshaled.___Path_1));
}
// Conversion method for clean up from marshalling of: TxtCon/PathObj
extern "C" void PathObj_t4274847934_marshal_com_cleanup(PathObj_t4274847934_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___Path_1);
	marshaled.___Path_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UguiTool::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UguiTool__ctor_m438969230 (UguiTool_t847651177 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_VoidDel_t2721053205 (VoidDel_t2721053205 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void VoidDel::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void VoidDel__ctor_m1452115049 (VoidDel_t2721053205 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void VoidDel::Invoke()
extern "C" IL2CPP_METHOD_ATTR void VoidDel_Invoke_m1500761510 (VoidDel_t2721053205 * __this, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		VoidDel_Invoke_m1500761510((VoidDel_t2721053205 *)__this->get_prev_9(), method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult VoidDel::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* VoidDel_BeginInvoke_m1047569188 (VoidDel_t2721053205 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void VoidDel::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void VoidDel_EndInvoke_m4040948605 (VoidDel_t2721053205 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_Void_BoolDel_t1563598436 (Void_BoolDel_t1563598436 * __this, bool ___b0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___b0));

}
// System.Void Void_BoolDel::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Void_BoolDel__ctor_m1504586985 (Void_BoolDel_t1563598436 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Void_BoolDel::Invoke(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Void_BoolDel_Invoke_m1424525850 (Void_BoolDel_t1563598436 * __this, bool ___b0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		Void_BoolDel_Invoke_m1424525850((Void_BoolDel_t1563598436 *)__this->get_prev_9(), ___b0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___b0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___b0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___b0);
					else
						GenericVirtActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___b0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___b0);
					else
						VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___b0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___b0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Void_BoolDel::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Void_BoolDel_BeginInvoke_m2248180201 (Void_BoolDel_t1563598436 * __this, bool ___b0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Void_BoolDel_BeginInvoke_m2248180201_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &___b0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Void_BoolDel::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void Void_BoolDel_EndInvoke_m1015618057 (Void_BoolDel_t1563598436 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_Void_FloatDel_t2690466815 (Void_FloatDel_t2690466815 * __this, float ___n0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___n0);

}
// System.Void Void_FloatDel::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Void_FloatDel__ctor_m2051256971 (Void_FloatDel_t2690466815 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Void_FloatDel::Invoke(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Void_FloatDel_Invoke_m2708042268 (Void_FloatDel_t2690466815 * __this, float ___n0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		Void_FloatDel_Invoke_m2708042268((Void_FloatDel_t2690466815 *)__this->get_prev_9(), ___n0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___n0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___n0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< float >::Invoke(targetMethod, targetThis, ___n0);
					else
						GenericVirtActionInvoker1< float >::Invoke(targetMethod, targetThis, ___n0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___n0);
					else
						VirtActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___n0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___n0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Void_FloatDel::BeginInvoke(System.Single,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Void_FloatDel_BeginInvoke_m3073402510 (Void_FloatDel_t2690466815 * __this, float ___n0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Void_FloatDel_BeginInvoke_m3073402510_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Single_t1397266774_il2cpp_TypeInfo_var, &___n0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Void_FloatDel::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void Void_FloatDel_EndInvoke_m226905211 (Void_FloatDel_t2690466815 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_Void_IntDel_t3049649234 (Void_IntDel_t3049649234 * __this, int32_t ___n0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___n0);

}
// System.Void Void_IntDel::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Void_IntDel__ctor_m3144570209 (Void_IntDel_t3049649234 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Void_IntDel::Invoke(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Void_IntDel_Invoke_m2136999072 (Void_IntDel_t3049649234 * __this, int32_t ___n0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		Void_IntDel_Invoke_m2136999072((Void_IntDel_t3049649234 *)__this->get_prev_9(), ___n0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___n0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___n0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___n0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___n0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___n0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___n0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___n0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Void_IntDel::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Void_IntDel_BeginInvoke_m1791044266 (Void_IntDel_t3049649234 * __this, int32_t ___n0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Void_IntDel_BeginInvoke_m1791044266_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___n0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Void_IntDel::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void Void_IntDel_EndInvoke_m2158811568 (Void_IntDel_t3049649234 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_Void_IntIntDel_t3257518218 (Void_IntIntDel_t3257518218 * __this, int32_t ___m0, int32_t ___n1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___m0, ___n1);

}
// System.Void Void_IntIntDel::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Void_IntIntDel__ctor_m2239859387 (Void_IntIntDel_t3257518218 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Void_IntIntDel::Invoke(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Void_IntIntDel_Invoke_m1069980505 (Void_IntIntDel_t3257518218 * __this, int32_t ___m0, int32_t ___n1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		Void_IntIntDel_Invoke_m1069980505((Void_IntIntDel_t3257518218 *)__this->get_prev_9(), ___m0, ___n1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___m0, ___n1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___m0, ___n1, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___m0, ___n1);
					else
						GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___m0, ___n1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___m0, ___n1);
					else
						VirtActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___m0, ___n1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___m0, ___n1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Void_IntIntDel::BeginInvoke(System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Void_IntIntDel_BeginInvoke_m3924972942 (Void_IntIntDel_t3257518218 * __this, int32_t ___m0, int32_t ___n1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Void_IntIntDel_BeginInvoke_m3924972942_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___m0);
	__d_args[1] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___n1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Void_IntIntDel::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void Void_IntIntDel_EndInvoke_m142418476 (Void_IntIntDel_t3257518218 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Void_Texture2DDel::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Void_Texture2DDel__ctor_m2974431715 (Void_Texture2DDel_t3998872356 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Void_Texture2DDel::Invoke(UnityEngine.Texture2D)
extern "C" IL2CPP_METHOD_ATTR void Void_Texture2DDel_Invoke_m42601466 (Void_Texture2DDel_t3998872356 * __this, Texture2D_t3840446185 * ___Im0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		Void_Texture2DDel_Invoke_m42601466((Void_Texture2DDel_t3998872356 *)__this->get_prev_9(), ___Im0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, Texture2D_t3840446185 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___Im0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, Texture2D_t3840446185 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___Im0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Texture2D_t3840446185 * >::Invoke(targetMethod, targetThis, ___Im0);
					else
						GenericVirtActionInvoker1< Texture2D_t3840446185 * >::Invoke(targetMethod, targetThis, ___Im0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Texture2D_t3840446185 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___Im0);
					else
						VirtActionInvoker1< Texture2D_t3840446185 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___Im0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Texture2D_t3840446185 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___Im0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___Im0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___Im0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___Im0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___Im0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Texture2D_t3840446185 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___Im0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Void_Texture2DDel::BeginInvoke(UnityEngine.Texture2D,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Void_Texture2DDel_BeginInvoke_m982522931 (Void_Texture2DDel_t3998872356 * __this, Texture2D_t3840446185 * ___Im0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___Im0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Void_Texture2DDel::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void Void_Texture2DDel_EndInvoke_m4201715653 (Void_Texture2DDel_t3998872356 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_Void_Vector3Del_t2915247505 (Void_Vector3Del_t2915247505 * __this, Vector3_t3722313464  ___Vector30, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(Vector3_t3722313464 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___Vector30);

}
// System.Void Void_Vector3Del::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Void_Vector3Del__ctor_m1002480554 (Void_Vector3Del_t2915247505 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Void_Vector3Del::Invoke(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Void_Vector3Del_Invoke_m3646649775 (Void_Vector3Del_t2915247505 * __this, Vector3_t3722313464  ___Vector30, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		Void_Vector3Del_Invoke_m3646649775((Void_Vector3Del_t2915247505 *)__this->get_prev_9(), ___Vector30, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, Vector3_t3722313464 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___Vector30, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, Vector3_t3722313464 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___Vector30, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Vector3_t3722313464  >::Invoke(targetMethod, targetThis, ___Vector30);
					else
						GenericVirtActionInvoker1< Vector3_t3722313464  >::Invoke(targetMethod, targetThis, ___Vector30);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Vector3_t3722313464  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___Vector30);
					else
						VirtActionInvoker1< Vector3_t3722313464  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___Vector30);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Vector3_t3722313464 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___Vector30, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Void_Vector3Del::BeginInvoke(UnityEngine.Vector3,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Void_Vector3Del_BeginInvoke_m1321478613 (Void_Vector3Del_t2915247505 * __this, Vector3_t3722313464  ___Vector30, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Void_Vector3Del_BeginInvoke_m1321478613_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &___Vector30);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Void_Vector3Del::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void Void_Vector3Del_EndInvoke_m2497884577 (Void_Vector3Del_t2915247505 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebTest::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WebTest__ctor_m1008603845 (WebTest_t1430771800 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebTest::Start()
extern "C" IL2CPP_METHOD_ATTR void WebTest_Start_m3863409103 (WebTest_t1430771800 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void WebTest::Update()
extern "C" IL2CPP_METHOD_ATTR void WebTest_Update_m911304425 (WebTest_t1430771800 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebTest_Update_m911304425_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		V_0 = (3.0f);
		float L_0 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = V_0;
		float L_2 = V_0;
		V_1 = ((float)((float)(fmodf(L_0, L_1))/(float)L_2));
		float L_3 = V_1;
		V_2 = ((float)il2cpp_codegen_multiply((float)L_3, (float)(100.0f)));
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_5 = V_2;
		Vector3_t3722313464  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m3353183577((&L_6), L_5, (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_m4128471975(L_4, L_6, /*hidden argument*/NULL);
		Text_t1901882714 * L_7 = __this->get_text_4();
		int32_t L_8 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_9);
		int32_t L_11 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_12);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m1715369213(NULL /*static, unused*/, L_10, _stringLiteral3793920202, L_13, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_14);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
