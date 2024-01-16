﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`1<UnityEngine.XR.XRInputSubsystem>
struct Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6;
// UnityEngine.InputSystem.InputProcessor`1<System.Int32>
struct InputProcessor_1_t4FADB4D3DE00139A4F28E5E4E7DA4469ACABC778;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>
struct InputProcessor_1_tD243A5FFA688AB3DB552DF256470B094F1DF649E;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>
struct InputProcessor_1_t4690DBFD42BF24BF19EA9BAC1D3562C5A36409C3;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>
struct InputProcessor_1_tC8E19492613FA6810CB26144EE17777AAA6C5BA3;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>
struct InputProcessor_1_t5F3C0A9DC0CC0FF65BC984D1F9BF1B744B3D1499;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct KeyValuePair_2_tB95A6A387D7920E47E50CDFF1D9B02543EFBB3A2;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B;
// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_t6331523A19E51FB87CA899920C03B10A48A562B0;
// UnityEngine.InputSystem.InputProcessor`1<System.Int32>[]
struct InputProcessor_1U5BU5D_t58074C25792E7D59759A252D00563FB807805DFB;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>[]
struct InputProcessor_1U5BU5D_t3FF9C535284B1BE91BECC7DA8D15C0C518A86CD6;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>[]
struct InputProcessor_1U5BU5D_t6B73785AF65E26634F5AC5885F4322EFB474C00E;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>[]
struct InputProcessor_1U5BU5D_t953CEBF69C3B0FA4DD7FFFEDB4F4B0C994C93B88;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>[]
struct InputProcessor_1U5BU5D_t0F7BAEC7505D157255C9B1D75BEF627416D36C1C;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>[]
struct KeyValuePair_2U5BU5D_tE11A7A68F4479A86E316612ABA3466B825E73064;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_tE51E95FA96826139CF9D99A021136552F802FA71;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_tD96CA717926C553408C7A718673AC12F4F787095;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// UnityEngine.XR.XRDisplaySubsystemDescriptor[]
struct XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642;
// UnityEngine.XR.XRInputSubsystemDescriptor[]
struct XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05;
// UnityEngine.InputSystem.InputDevice/ControlBitRangeNode[]
struct ControlBitRangeNodeU5BU5D_tA24B796B2F142740E56C0BBBF3F9767EF23BCB11;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61;
// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Unity.XR.Oculus.Input.GearVRTrackedController
struct GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14;
// UnityEngine.InputSystem.InputControl
struct InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B;
// UnityEngine.InputSystem.Controls.IntegerControl
struct IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Unity.XR.Oculus.Input.OculusGoController
struct OculusGoController_tE3AB6FC9374A8DB24CFA9AB6592CB6235F6AB21B;
// Unity.XR.Oculus.Input.OculusHMD
struct OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A;
// Unity.XR.Oculus.Input.OculusHMDExtended
struct OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC;
// Unity.XR.Oculus.OculusLoader
struct OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB;
// Unity.XR.Oculus.Input.OculusRemote
struct OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3;
// Unity.XR.Oculus.OculusRestarter
struct OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65;
// Unity.XR.Oculus.OculusSettings
struct OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C;
// Unity.XR.Oculus.Input.OculusTouchController
struct OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA;
// Unity.XR.Oculus.Input.OculusTrackingReference
struct OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807;
// UnityEngine.InputSystem.Controls.QuaternionControl
struct QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.InputSystem.Controls.Vector2Control
struct Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1;
// UnityEngine.InputSystem.Controls.Vector3Control
struct Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.InputSystem.XR.XRController
struct XRController_t3786F06F6CA867377708D84F3C9F243136EF482E;
// UnityEngine.InputSystem.XR.XRControllerWithRumble
struct XRControllerWithRumble_tFBD01C9D685DD1E6E662FCF8066F11274AA0ABA8;
// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042;
// UnityEngine.InputSystem.XR.XRHMD
struct XRHMD_t878DAFA36F392EAE743A0A73CA4DDC0604128CF5;
// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B;
// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F;
// Unity.XR.Oculus.OculusRestarter/<PauseAndRestartCoroutine>d__22
struct U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77;
// Unity.XR.Oculus.OculusRestarter/<RestartCoroutine>d__23
struct U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputLayoutLoader_t49C5641FC147A26ECBF0BA4435702257FEC65EF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputSystem_t86ED0830F667A4972D94D670A2702050BCF82B88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04EA248327ED413DE02A011F18AC3C95CE6B8EF0;
IL2CPP_EXTERN_C String_t* _stringLiteral077AC4F37BECA7E305659A36FD4351A1A726D74E;
IL2CPP_EXTERN_C String_t* _stringLiteral07FB9B6025681C5CF07481693E1C2043EA488AFE;
IL2CPP_EXTERN_C String_t* _stringLiteral100A996F2433F52193B5EFF823ACE8663FC5C8C6;
IL2CPP_EXTERN_C String_t* _stringLiteral156E662C55D382C18194118C3287CEAB98FA2C6F;
IL2CPP_EXTERN_C String_t* _stringLiteral24BA0B3EAF2D368DF4A667A3DA43E98A55602935;
IL2CPP_EXTERN_C String_t* _stringLiteral271AF6878EC3872B415EA8A73A1433E4B604ACDF;
IL2CPP_EXTERN_C String_t* _stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A;
IL2CPP_EXTERN_C String_t* _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD;
IL2CPP_EXTERN_C String_t* _stringLiteral2C43BA5A481CBEF412DB695717FC94453B3769F6;
IL2CPP_EXTERN_C String_t* _stringLiteral2D3C0882E8B897E888F8BF5C82A33ED850CDEA80;
IL2CPP_EXTERN_C String_t* _stringLiteral3115DB94D93EB3315DED225F97D881D8A834AB58;
IL2CPP_EXTERN_C String_t* _stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4;
IL2CPP_EXTERN_C String_t* _stringLiteral3624BAC25188A8C57A604CA0D3ACB2CBF73CF5DF;
IL2CPP_EXTERN_C String_t* _stringLiteral381617D1A1C0C848CBE085A3C3BF523A03E9659F;
IL2CPP_EXTERN_C String_t* _stringLiteral40F58D79BFB7F12C0766FBC616821E1891152822;
IL2CPP_EXTERN_C String_t* _stringLiteral4375062BD8882E451B6BEE137E47CDAFE50A90EC;
IL2CPP_EXTERN_C String_t* _stringLiteral48FC1F936713D53F5EFACC314E330907113FDC9D;
IL2CPP_EXTERN_C String_t* _stringLiteral494FAA0B659E3A69DCE4CE1C4EB20F594E2E641E;
IL2CPP_EXTERN_C String_t* _stringLiteral4ADB212528F8CF625764142B108030A0499510F0;
IL2CPP_EXTERN_C String_t* _stringLiteral4C9B28579DAB706CEF903A85854B98A08280D27D;
IL2CPP_EXTERN_C String_t* _stringLiteral4E267D25EFB4D56321079C3FF27EAE0DC4819CC9;
IL2CPP_EXTERN_C String_t* _stringLiteral4FAF1332EAA22ED62546993B44D1AE07024AA9C9;
IL2CPP_EXTERN_C String_t* _stringLiteral50B8349DC34E14AB475F3453803BCDBD9F3B0F85;
IL2CPP_EXTERN_C String_t* _stringLiteral5DA5B233166AA50A8488D3B97E0B5A1D09EA4905;
IL2CPP_EXTERN_C String_t* _stringLiteral5E00AB7EC86A20EC1ECB923C22939506C6806CC9;
IL2CPP_EXTERN_C String_t* _stringLiteral60295FC3A60C2E33E7CE2BBA56CDC92EDF6E0594;
IL2CPP_EXTERN_C String_t* _stringLiteral6A8CECB369E64DA7E1FBB6FDE079801EFD1EBFEB;
IL2CPP_EXTERN_C String_t* _stringLiteral6C095088ADD88C25A47E7BBE6A81D13C798F9E75;
IL2CPP_EXTERN_C String_t* _stringLiteral6F2A85EC8DA913664B5C83242F8C325DFB1BC03C;
IL2CPP_EXTERN_C String_t* _stringLiteral71D87D03368ADC0E5018E85E30CA4984F5FF2AA8;
IL2CPP_EXTERN_C String_t* _stringLiteral753B6D37AEAF368AA772306EFBD496750FDE357A;
IL2CPP_EXTERN_C String_t* _stringLiteral7589D1EF4E8D8454C532BCBFBC5823B5B4345F30;
IL2CPP_EXTERN_C String_t* _stringLiteral767FF60B240D13D0E7862196C1340B1049EF4B4B;
IL2CPP_EXTERN_C String_t* _stringLiteral79107CD3BE0F3FC64B9E61F6ED6F8C2C75548D4F;
IL2CPP_EXTERN_C String_t* _stringLiteral791956718283C9837F3ED95D7886E3C88855114B;
IL2CPP_EXTERN_C String_t* _stringLiteral836BEF03CDF7F78C55ADABFC8E7F1FC31387E456;
IL2CPP_EXTERN_C String_t* _stringLiteral86986460D761FE23D8BB01FB96CFA1B151516AE3;
IL2CPP_EXTERN_C String_t* _stringLiteral890FDBCF037770EED7A1937DEF697FFC44FBF0B3;
IL2CPP_EXTERN_C String_t* _stringLiteral9193CA2A883A8C656610DDBD604EA09532252279;
IL2CPP_EXTERN_C String_t* _stringLiteral9C0461316058197D67FFB59CE6A345F2B7BEA590;
IL2CPP_EXTERN_C String_t* _stringLiteral9CA2736EB42A97B73E816FF8369ACA2005FA5AA2;
IL2CPP_EXTERN_C String_t* _stringLiteral9E98EC4F7D85E6AB585D718D9BEDBB163E42B54C;
IL2CPP_EXTERN_C String_t* _stringLiteral9FE5967523CA0E49A247084021DB0C0C2C996FDF;
IL2CPP_EXTERN_C String_t* _stringLiteralA2BD5C6F3FA74D0EF59EAFB5EDD968485F2F807C;
IL2CPP_EXTERN_C String_t* _stringLiteralA7259D04FD257B3E588D4DDE5C297D07A9BF111B;
IL2CPP_EXTERN_C String_t* _stringLiteralB261904704D3ADA83E0084DF37061DE2D4CE88C1;
IL2CPP_EXTERN_C String_t* _stringLiteralB5CCD6D3CB93DC1BEDD79DB8A4B75174089A3455;
IL2CPP_EXTERN_C String_t* _stringLiteralB5E18713BEC060441013BF24EEFF304074095168;
IL2CPP_EXTERN_C String_t* _stringLiteralB795E7C13E4CFACF08133C1739B538F3A728EF41;
IL2CPP_EXTERN_C String_t* _stringLiteralB81B10F5CAB114184CB2AEC199DE4C618C7F57DB;
IL2CPP_EXTERN_C String_t* _stringLiteralC3E98CA0D21B6899AC08C4CE0868CF1323933585;
IL2CPP_EXTERN_C String_t* _stringLiteralC49271934571B500FDC497EFB8A9FA5650E48B32;
IL2CPP_EXTERN_C String_t* _stringLiteralCC0836D648D015EDCC6EE9D171A855190052F97A;
IL2CPP_EXTERN_C String_t* _stringLiteralCD3DD4C1241990E3D05C7BE7560D9E9C10B9D7A5;
IL2CPP_EXTERN_C String_t* _stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDCA884BDE3461B51BC3CBE077E141428C6D55245;
IL2CPP_EXTERN_C String_t* _stringLiteralEDC78BA63A133C81FC2DD3E3CA7EC02E945F89CE;
IL2CPP_EXTERN_C String_t* _stringLiteralF1BB48CEB008ADB81AB49FAD95AAB464FAD9CA84;
IL2CPP_EXTERN_C String_t* _stringLiteralFABA7B84135B56F6F79588F7B57766574B6E8C66;
IL2CPP_EXTERN_C String_t* _stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisOculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_m202AE7171E57107B6E8DDAFA0F044806B81EFBFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisOculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_mACE49B13D3DE9F0EE5F3B471A3230A439C6C8A92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisAxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61_m50AA28A6A79BF457341DE5768D5F8F2E1D0B0B4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisIntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3_mADA7BED738CAC95FE7FE96EB3C14277B7158E331_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisQuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A_mDC7B154D598EA657266845F32A54167E63A3C42E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisVector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1_m6FAC1ACEDE733EE9B82D626AA2E0BDE4A5705980_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_RegisterLayout_TisGearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D_m73C07C0A05DC24057C95EA08E8DE02F2399EC482_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_RegisterLayout_TisOculusGoController_tE3AB6FC9374A8DB24CFA9AB6592CB6235F6AB21B_mEF936CA7BA6ECC090DD4C3FE81F2D09403AC8101_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_RegisterLayout_TisOculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC_mB7C9CEFE0472DEAE7192DC89DE33CB2925EEE930_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_RegisterLayout_TisOculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A_m30D0609F6053B2EA7D155FB616D299C4172F008E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_RegisterLayout_TisOculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3_mE279C4BC1F5C51A298C4F8505823E6F8DC0761B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_RegisterLayout_TisOculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA_m8D0F6C076C0E8BFA618D11E7A0F2F457572B39BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_RegisterLayout_TisOculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807_m73A539F782FFEA18B6DA805B0A6B31BB2420A5D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6A950B4252C0E5235E96AFE2360A90333D479AFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF19C6A53B3B3B3BE0F1915716886E25C49467F00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m1ACF1D32EC082D78D7F7D997E93BD9AAEF56A664_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegisterUpdateCallback_Update_m2DA82FDFC251E9F4D10F6F5ADB6A9F4B11BAD7ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPauseAndRestartCoroutineU3Ed__22_System_Collections_IEnumerator_Reset_m437EE8315D091FAF8113083C558FB27ACDFD49AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRestartCoroutineU3Ed__23_System_Collections_IEnumerator_Reset_m8B74BC95BE0B29C902B5C7547EE3461E876BFC9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m2674D41E2C5D7DE045BEF6EDE661A9A0767A99FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m69A4EA17370FA4464CCE4BEAD83D5E0D47AADB56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7AE6139F914F84F8A7AA30CC70F6A01A757E1BE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m3724DC2747A9C6A68F78041E6FA78F6AC5CB39C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_mF935C6C4671BBBEA57D48C65DE73B9D27EB611D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m243694C799C58C0396A563991537B952A5B48F98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m8145C9418422BD4F45DBBF37D028DDD2F1A6F7AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m530AFB9035AAA37796915EEB42C678B7A7F39686_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoader_GetLoadedSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m6098CB15555B2E45C3BCAB9086012011CB382DAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoader_GetLoadedSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_mC98D5F7030C574A69D86EA429F90CF769106A5EB_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t29E6020F6B208E8C3E84F1F09ED89415CA01DC30 
{
public:

public:
};


// System.Object


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048, ____items_1)); }
	inline XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642* get__items_1() const { return ____items_1; }
	inline XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0, ____items_1)); }
	inline XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05* get__items_1() const { return ____items_1; }
	inline XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Unity.XR.Oculus.InputFocus
struct InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C  : public RuntimeObject
{
public:

public:
};


// Unity.XR.Oculus.InputLayoutLoader
struct InputLayoutLoader_t49C5641FC147A26ECBF0BA4435702257FEC65EF8  : public RuntimeObject
{
public:

public:
};


// Unity.XR.Oculus.NativeMethods
struct NativeMethods_t3621D74DE9BA054C3E33DB4FA2CFEC8DD7152EEF  : public RuntimeObject
{
public:

public:
};


// Unity.XR.Oculus.OculusSession
struct OculusSession_tA5D60DB4C67D65843DEE55DCF2AC1A4DE412D1B2  : public RuntimeObject
{
public:

public:
};


// Unity.XR.Oculus.RegisterUpdateCallback
struct RegisterUpdateCallback_t1C829E95646132B4A54493595EFCFF669920ACE1  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Unity.XR.Oculus.NativeMethods/Internal
struct Internal_tFE0FD2202F25632711238961AAA0DB0A1CB0F0DB  : public RuntimeObject
{
public:

public:
};


// Unity.XR.Oculus.OculusRestarter/<PauseAndRestartCoroutine>d__22
struct U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77  : public RuntimeObject
{
public:
	// System.Int32 Unity.XR.Oculus.OculusRestarter/<PauseAndRestartCoroutine>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Unity.XR.Oculus.OculusRestarter/<PauseAndRestartCoroutine>d__22::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single Unity.XR.Oculus.OculusRestarter/<PauseAndRestartCoroutine>d__22::pauseTimeInSeconds
	float ___pauseTimeInSeconds_2;
	// Unity.XR.Oculus.OculusRestarter Unity.XR.Oculus.OculusRestarter/<PauseAndRestartCoroutine>d__22::<>4__this
	OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_pauseTimeInSeconds_2() { return static_cast<int32_t>(offsetof(U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77, ___pauseTimeInSeconds_2)); }
	inline float get_pauseTimeInSeconds_2() const { return ___pauseTimeInSeconds_2; }
	inline float* get_address_of_pauseTimeInSeconds_2() { return &___pauseTimeInSeconds_2; }
	inline void set_pauseTimeInSeconds_2(float value)
	{
		___pauseTimeInSeconds_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77, ___U3CU3E4__this_3)); }
	inline OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// Unity.XR.Oculus.OculusRestarter/<RestartCoroutine>d__23
struct U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D  : public RuntimeObject
{
public:
	// System.Int32 Unity.XR.Oculus.OculusRestarter/<RestartCoroutine>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Unity.XR.Oculus.OculusRestarter/<RestartCoroutine>d__23::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Unity.XR.Oculus.OculusRestarter Unity.XR.Oculus.OculusRestarter/<RestartCoroutine>d__23::<>4__this
	OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * ___U3CU3E4__this_2;
	// System.Boolean Unity.XR.Oculus.OculusRestarter/<RestartCoroutine>d__23::shouldRestart
	bool ___shouldRestart_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D, ___U3CU3E4__this_2)); }
	inline OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_shouldRestart_3() { return static_cast<int32_t>(offsetof(U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D, ___shouldRestart_3)); }
	inline bool get_shouldRestart_3() const { return ___shouldRestart_3; }
	inline bool* get_address_of_shouldRestart_3() { return &___shouldRestart_3; }
	inline void set_shouldRestart_3(bool value)
	{
		___shouldRestart_3 = value;
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Int32>>
struct InlinedArray_1_tF807720F77A8A5E2A3298C5600ACD66F342F8ECF 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t4FADB4D3DE00139A4F28E5E4E7DA4469ACABC778 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t58074C25792E7D59759A252D00563FB807805DFB* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tF807720F77A8A5E2A3298C5600ACD66F342F8ECF, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tF807720F77A8A5E2A3298C5600ACD66F342F8ECF, ___firstValue_1)); }
	inline InputProcessor_1_t4FADB4D3DE00139A4F28E5E4E7DA4469ACABC778 * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_t4FADB4D3DE00139A4F28E5E4E7DA4469ACABC778 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_t4FADB4D3DE00139A4F28E5E4E7DA4469ACABC778 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tF807720F77A8A5E2A3298C5600ACD66F342F8ECF, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_t58074C25792E7D59759A252D00563FB807805DFB* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_t58074C25792E7D59759A252D00563FB807805DFB** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_t58074C25792E7D59759A252D00563FB807805DFB* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>>
struct InlinedArray_1_t2822C0699DD93BBEC6516E7E6B13C1618EB31581 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tD243A5FFA688AB3DB552DF256470B094F1DF649E * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t3FF9C535284B1BE91BECC7DA8D15C0C518A86CD6* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t2822C0699DD93BBEC6516E7E6B13C1618EB31581, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t2822C0699DD93BBEC6516E7E6B13C1618EB31581, ___firstValue_1)); }
	inline InputProcessor_1_tD243A5FFA688AB3DB552DF256470B094F1DF649E * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_tD243A5FFA688AB3DB552DF256470B094F1DF649E ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_tD243A5FFA688AB3DB552DF256470B094F1DF649E * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t2822C0699DD93BBEC6516E7E6B13C1618EB31581, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_t3FF9C535284B1BE91BECC7DA8D15C0C518A86CD6* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_t3FF9C535284B1BE91BECC7DA8D15C0C518A86CD6** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_t3FF9C535284B1BE91BECC7DA8D15C0C518A86CD6* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Single>>
struct InlinedArray_1_t4F3144D93F19BFC891F1722ADCE4CCE54C1E92A1 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t4690DBFD42BF24BF19EA9BAC1D3562C5A36409C3 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t6B73785AF65E26634F5AC5885F4322EFB474C00E* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t4F3144D93F19BFC891F1722ADCE4CCE54C1E92A1, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t4F3144D93F19BFC891F1722ADCE4CCE54C1E92A1, ___firstValue_1)); }
	inline InputProcessor_1_t4690DBFD42BF24BF19EA9BAC1D3562C5A36409C3 * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_t4690DBFD42BF24BF19EA9BAC1D3562C5A36409C3 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_t4690DBFD42BF24BF19EA9BAC1D3562C5A36409C3 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t4F3144D93F19BFC891F1722ADCE4CCE54C1E92A1, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_t6B73785AF65E26634F5AC5885F4322EFB474C00E* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_t6B73785AF65E26634F5AC5885F4322EFB474C00E** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_t6B73785AF65E26634F5AC5885F4322EFB474C00E* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>>
struct InlinedArray_1_tB43AA6A419E88F1694A37B47344B3CA3F7FE18AB 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tC8E19492613FA6810CB26144EE17777AAA6C5BA3 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t953CEBF69C3B0FA4DD7FFFEDB4F4B0C994C93B88* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tB43AA6A419E88F1694A37B47344B3CA3F7FE18AB, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tB43AA6A419E88F1694A37B47344B3CA3F7FE18AB, ___firstValue_1)); }
	inline InputProcessor_1_tC8E19492613FA6810CB26144EE17777AAA6C5BA3 * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_tC8E19492613FA6810CB26144EE17777AAA6C5BA3 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_tC8E19492613FA6810CB26144EE17777AAA6C5BA3 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tB43AA6A419E88F1694A37B47344B3CA3F7FE18AB, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_t953CEBF69C3B0FA4DD7FFFEDB4F4B0C994C93B88* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_t953CEBF69C3B0FA4DD7FFFEDB4F4B0C994C93B88** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_t953CEBF69C3B0FA4DD7FFFEDB4F4B0C994C93B88* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>>
struct InlinedArray_1_t3102A9D3C8D757739239874F84CE7BCF70BE54F5 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t5F3C0A9DC0CC0FF65BC984D1F9BF1B744B3D1499 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t0F7BAEC7505D157255C9B1D75BEF627416D36C1C* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t3102A9D3C8D757739239874F84CE7BCF70BE54F5, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t3102A9D3C8D757739239874F84CE7BCF70BE54F5, ___firstValue_1)); }
	inline InputProcessor_1_t5F3C0A9DC0CC0FF65BC984D1F9BF1B744B3D1499 * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_t5F3C0A9DC0CC0FF65BC984D1F9BF1B744B3D1499 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_t5F3C0A9DC0CC0FF65BC984D1F9BF1B744B3D1499 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t3102A9D3C8D757739239874F84CE7BCF70BE54F5, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_t0F7BAEC7505D157255C9B1D75BEF627416D36C1C* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_t0F7BAEC7505D157255C9B1D75BEF627416D36C1C** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_t0F7BAEC7505D157255C9B1D75BEF627416D36C1C* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;

public:
	inline static int32_t get_offset_of_m_Code_0() { return static_cast<int32_t>(offsetof(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1, ___m_Code_0)); }
	inline int32_t get_m_Code_0() const { return ___m_Code_0; }
	inline int32_t* get_address_of_m_Code_0() { return &___m_Code_0; }
	inline void set_m_Code_0(int32_t value)
	{
		___m_Code_0 = value;
	}
};


// UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_t16E2C7E9B9CE5B7ADB7D70F3C47932EF59D0D980 
{
public:
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_InterfaceName
	String_t* ___m_InterfaceName_0;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_DeviceClass
	String_t* ___m_DeviceClass_1;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Manufacturer
	String_t* ___m_Manufacturer_2;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Product
	String_t* ___m_Product_3;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Serial
	String_t* ___m_Serial_4;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Version
	String_t* ___m_Version_5;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Capabilities
	String_t* ___m_Capabilities_6;

public:
	inline static int32_t get_offset_of_m_InterfaceName_0() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t16E2C7E9B9CE5B7ADB7D70F3C47932EF59D0D980, ___m_InterfaceName_0)); }
	inline String_t* get_m_InterfaceName_0() const { return ___m_InterfaceName_0; }
	inline String_t** get_address_of_m_InterfaceName_0() { return &___m_InterfaceName_0; }
	inline void set_m_InterfaceName_0(String_t* value)
	{
		___m_InterfaceName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InterfaceName_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceClass_1() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t16E2C7E9B9CE5B7ADB7D70F3C47932EF59D0D980, ___m_DeviceClass_1)); }
	inline String_t* get_m_DeviceClass_1() const { return ___m_DeviceClass_1; }
	inline String_t** get_address_of_m_DeviceClass_1() { return &___m_DeviceClass_1; }
	inline void set_m_DeviceClass_1(String_t* value)
	{
		___m_DeviceClass_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceClass_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Manufacturer_2() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t16E2C7E9B9CE5B7ADB7D70F3C47932EF59D0D980, ___m_Manufacturer_2)); }
	inline String_t* get_m_Manufacturer_2() const { return ___m_Manufacturer_2; }
	inline String_t** get_address_of_m_Manufacturer_2() { return &___m_Manufacturer_2; }
	inline void set_m_Manufacturer_2(String_t* value)
	{
		___m_Manufacturer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Manufacturer_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Product_3() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t16E2C7E9B9CE5B7ADB7D70F3C47932EF59D0D980, ___m_Product_3)); }
	inline String_t* get_m_Product_3() const { return ___m_Product_3; }
	inline String_t** get_address_of_m_Product_3() { return &___m_Product_3; }
	inline void set_m_Product_3(String_t* value)
	{
		___m_Product_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Product_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Serial_4() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t16E2C7E9B9CE5B7ADB7D70F3C47932EF59D0D980, ___m_Serial_4)); }
	inline String_t* get_m_Serial_4() const { return ___m_Serial_4; }
	inline String_t** get_address_of_m_Serial_4() { return &___m_Serial_4; }
	inline void set_m_Serial_4(String_t* value)
	{
		___m_Serial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Serial_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Version_5() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t16E2C7E9B9CE5B7ADB7D70F3C47932EF59D0D980, ___m_Version_5)); }
	inline String_t* get_m_Version_5() const { return ___m_Version_5; }
	inline String_t** get_address_of_m_Version_5() { return &___m_Version_5; }
	inline void set_m_Version_5(String_t* value)
	{
		___m_Version_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Version_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Capabilities_6() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t16E2C7E9B9CE5B7ADB7D70F3C47932EF59D0D980, ___m_Capabilities_6)); }
	inline String_t* get_m_Capabilities_6() const { return ___m_Capabilities_6; }
	inline String_t** get_address_of_m_Capabilities_6() { return &___m_Capabilities_6; }
	inline void set_m_Capabilities_6(String_t* value)
	{
		___m_Capabilities_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Capabilities_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_t16E2C7E9B9CE5B7ADB7D70F3C47932EF59D0D980_marshaled_pinvoke
{
	char* ___m_InterfaceName_0;
	char* ___m_DeviceClass_1;
	char* ___m_Manufacturer_2;
	char* ___m_Product_3;
	char* ___m_Serial_4;
	char* ___m_Version_5;
	char* ___m_Capabilities_6;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_t16E2C7E9B9CE5B7ADB7D70F3C47932EF59D0D980_marshaled_com
{
	Il2CppChar* ___m_InterfaceName_0;
	Il2CppChar* ___m_DeviceClass_1;
	Il2CppChar* ___m_Manufacturer_2;
	Il2CppChar* ___m_Product_3;
	Il2CppChar* ___m_Serial_4;
	Il2CppChar* ___m_Version_5;
	Il2CppChar* ___m_Capabilities_6;
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;

public:
	inline static int32_t get_offset_of_m_StringOriginalCase_0() { return static_cast<int32_t>(offsetof(InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA, ___m_StringOriginalCase_0)); }
	inline String_t* get_m_StringOriginalCase_0() const { return ___m_StringOriginalCase_0; }
	inline String_t** get_address_of_m_StringOriginalCase_0() { return &___m_StringOriginalCase_0; }
	inline void set_m_StringOriginalCase_0(String_t* value)
	{
		___m_StringOriginalCase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringOriginalCase_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StringLowerCase_1() { return static_cast<int32_t>(offsetof(InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA, ___m_StringLowerCase_1)); }
	inline String_t* get_m_StringLowerCase_1() const { return ___m_StringLowerCase_1; }
	inline String_t** get_address_of_m_StringLowerCase_1() { return &___m_StringLowerCase_1; }
	inline void set_m_StringLowerCase_1(String_t* value)
	{
		___m_StringLowerCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringLowerCase_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// Unity.XR.Oculus.NativeMethods/UserDefinedSettings
struct UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D 
{
public:
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::sharedDepthBuffer
	uint16_t ___sharedDepthBuffer_0;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::dashSupport
	uint16_t ___dashSupport_1;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::stereoRenderingMode
	uint16_t ___stereoRenderingMode_2;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::colorSpace
	uint16_t ___colorSpace_3;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::lowOverheadMode
	uint16_t ___lowOverheadMode_4;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::protectedContext
	uint16_t ___protectedContext_5;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::focusAware
	uint16_t ___focusAware_6;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::optimizeBufferDiscards
	uint16_t ___optimizeBufferDiscards_7;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::phaseSync
	uint16_t ___phaseSync_8;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::symmetricProjection
	uint16_t ___symmetricProjection_9;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::subsampledLayout
	uint16_t ___subsampledLayout_10;

public:
	inline static int32_t get_offset_of_sharedDepthBuffer_0() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___sharedDepthBuffer_0)); }
	inline uint16_t get_sharedDepthBuffer_0() const { return ___sharedDepthBuffer_0; }
	inline uint16_t* get_address_of_sharedDepthBuffer_0() { return &___sharedDepthBuffer_0; }
	inline void set_sharedDepthBuffer_0(uint16_t value)
	{
		___sharedDepthBuffer_0 = value;
	}

	inline static int32_t get_offset_of_dashSupport_1() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___dashSupport_1)); }
	inline uint16_t get_dashSupport_1() const { return ___dashSupport_1; }
	inline uint16_t* get_address_of_dashSupport_1() { return &___dashSupport_1; }
	inline void set_dashSupport_1(uint16_t value)
	{
		___dashSupport_1 = value;
	}

	inline static int32_t get_offset_of_stereoRenderingMode_2() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___stereoRenderingMode_2)); }
	inline uint16_t get_stereoRenderingMode_2() const { return ___stereoRenderingMode_2; }
	inline uint16_t* get_address_of_stereoRenderingMode_2() { return &___stereoRenderingMode_2; }
	inline void set_stereoRenderingMode_2(uint16_t value)
	{
		___stereoRenderingMode_2 = value;
	}

	inline static int32_t get_offset_of_colorSpace_3() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___colorSpace_3)); }
	inline uint16_t get_colorSpace_3() const { return ___colorSpace_3; }
	inline uint16_t* get_address_of_colorSpace_3() { return &___colorSpace_3; }
	inline void set_colorSpace_3(uint16_t value)
	{
		___colorSpace_3 = value;
	}

	inline static int32_t get_offset_of_lowOverheadMode_4() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___lowOverheadMode_4)); }
	inline uint16_t get_lowOverheadMode_4() const { return ___lowOverheadMode_4; }
	inline uint16_t* get_address_of_lowOverheadMode_4() { return &___lowOverheadMode_4; }
	inline void set_lowOverheadMode_4(uint16_t value)
	{
		___lowOverheadMode_4 = value;
	}

	inline static int32_t get_offset_of_protectedContext_5() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___protectedContext_5)); }
	inline uint16_t get_protectedContext_5() const { return ___protectedContext_5; }
	inline uint16_t* get_address_of_protectedContext_5() { return &___protectedContext_5; }
	inline void set_protectedContext_5(uint16_t value)
	{
		___protectedContext_5 = value;
	}

	inline static int32_t get_offset_of_focusAware_6() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___focusAware_6)); }
	inline uint16_t get_focusAware_6() const { return ___focusAware_6; }
	inline uint16_t* get_address_of_focusAware_6() { return &___focusAware_6; }
	inline void set_focusAware_6(uint16_t value)
	{
		___focusAware_6 = value;
	}

	inline static int32_t get_offset_of_optimizeBufferDiscards_7() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___optimizeBufferDiscards_7)); }
	inline uint16_t get_optimizeBufferDiscards_7() const { return ___optimizeBufferDiscards_7; }
	inline uint16_t* get_address_of_optimizeBufferDiscards_7() { return &___optimizeBufferDiscards_7; }
	inline void set_optimizeBufferDiscards_7(uint16_t value)
	{
		___optimizeBufferDiscards_7 = value;
	}

	inline static int32_t get_offset_of_phaseSync_8() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___phaseSync_8)); }
	inline uint16_t get_phaseSync_8() const { return ___phaseSync_8; }
	inline uint16_t* get_address_of_phaseSync_8() { return &___phaseSync_8; }
	inline void set_phaseSync_8(uint16_t value)
	{
		___phaseSync_8 = value;
	}

	inline static int32_t get_offset_of_symmetricProjection_9() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___symmetricProjection_9)); }
	inline uint16_t get_symmetricProjection_9() const { return ___symmetricProjection_9; }
	inline uint16_t* get_address_of_symmetricProjection_9() { return &___symmetricProjection_9; }
	inline void set_symmetricProjection_9(uint16_t value)
	{
		___symmetricProjection_9 = value;
	}

	inline static int32_t get_offset_of_subsampledLayout_10() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___subsampledLayout_10)); }
	inline uint16_t get_subsampledLayout_10() const { return ___subsampledLayout_10; }
	inline uint16_t* get_address_of_subsampledLayout_10() { return &___subsampledLayout_10; }
	inline void set_subsampledLayout_10(uint16_t value)
	{
		___subsampledLayout_10 = value;
	}
};


// UnityEngine.ColorSpace
struct ColorSpace_tAD694F94295170CB332A0F99BBE086F4AC8C15BA 
{
public:
	// System.Int32 UnityEngine.ColorSpace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorSpace_tAD694F94295170CB332A0F99BBE086F4AC8C15BA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.HideFlags
struct HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D 
{
public:
	// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>[] UnityEngine.InputSystem.Layouts.InputDeviceMatcher::m_Patterns
	KeyValuePair_2U5BU5D_tE11A7A68F4479A86E316612ABA3466B825E73064* ___m_Patterns_0;

public:
	inline static int32_t get_offset_of_m_Patterns_0() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D, ___m_Patterns_0)); }
	inline KeyValuePair_2U5BU5D_tE11A7A68F4479A86E316612ABA3466B825E73064* get_m_Patterns_0() const { return ___m_Patterns_0; }
	inline KeyValuePair_2U5BU5D_tE11A7A68F4479A86E316612ABA3466B825E73064** get_address_of_m_Patterns_0() { return &___m_Patterns_0; }
	inline void set_m_Patterns_0(KeyValuePair_2U5BU5D_tE11A7A68F4479A86E316612ABA3466B825E73064* value)
	{
		___m_Patterns_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Patterns_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D_marshaled_pinvoke
{
	KeyValuePair_2_tB95A6A387D7920E47E50CDFF1D9B02543EFBB3A2 * ___m_Patterns_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D_marshaled_com
{
	KeyValuePair_2_tB95A6A387D7920E47E50CDFF1D9B02543EFBB3A2 * ___m_Patterns_0;
};

// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B 
{
public:
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___U3CformatU3Ek__BackingField_40;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::m_ByteOffset
	uint32_t ___m_ByteOffset_41;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_42;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_43;

public:
	inline static int32_t get_offset_of_U3CformatU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B, ___U3CformatU3Ek__BackingField_40)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_U3CformatU3Ek__BackingField_40() const { return ___U3CformatU3Ek__BackingField_40; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_U3CformatU3Ek__BackingField_40() { return &___U3CformatU3Ek__BackingField_40; }
	inline void set_U3CformatU3Ek__BackingField_40(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___U3CformatU3Ek__BackingField_40 = value;
	}

	inline static int32_t get_offset_of_m_ByteOffset_41() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B, ___m_ByteOffset_41)); }
	inline uint32_t get_m_ByteOffset_41() const { return ___m_ByteOffset_41; }
	inline uint32_t* get_address_of_m_ByteOffset_41() { return &___m_ByteOffset_41; }
	inline void set_m_ByteOffset_41(uint32_t value)
	{
		___m_ByteOffset_41 = value;
	}

	inline static int32_t get_offset_of_U3CbitOffsetU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B, ___U3CbitOffsetU3Ek__BackingField_42)); }
	inline uint32_t get_U3CbitOffsetU3Ek__BackingField_42() const { return ___U3CbitOffsetU3Ek__BackingField_42; }
	inline uint32_t* get_address_of_U3CbitOffsetU3Ek__BackingField_42() { return &___U3CbitOffsetU3Ek__BackingField_42; }
	inline void set_U3CbitOffsetU3Ek__BackingField_42(uint32_t value)
	{
		___U3CbitOffsetU3Ek__BackingField_42 = value;
	}

	inline static int32_t get_offset_of_U3CsizeInBitsU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B, ___U3CsizeInBitsU3Ek__BackingField_43)); }
	inline uint32_t get_U3CsizeInBitsU3Ek__BackingField_43() const { return ___U3CsizeInBitsU3Ek__BackingField_43; }
	inline uint32_t* get_address_of_U3CsizeInBitsU3Ek__BackingField_43() { return &___U3CsizeInBitsU3Ek__BackingField_43; }
	inline void set_U3CsizeInBitsU3Ek__BackingField_43(uint32_t value)
	{
		___U3CsizeInBitsU3Ek__BackingField_43 = value;
	}
};


// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SubsystemDescriptor_1() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002, ___m_SubsystemDescriptor_1)); }
	inline RuntimeObject* get_m_SubsystemDescriptor_1() const { return ___m_SubsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_SubsystemDescriptor_1() { return &___m_SubsystemDescriptor_1; }
	inline void set_m_SubsystemDescriptor_1(RuntimeObject* value)
	{
		___m_SubsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubsystemDescriptor_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.TypeCode
struct TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.Controls.AxisControl/Clamp
struct Clamp_tBEB7E08F8D691E6C3FBB1B32D92EE5FA3EB5D290 
{
public:
	// System.Int32 UnityEngine.InputSystem.Controls.AxisControl/Clamp::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Clamp_tBEB7E08F8D691E6C3FBB1B32D92EE5FA3EB5D290, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.XR.Oculus.Development/UserDeveloperModeSettingCache
struct UserDeveloperModeSettingCache_tD3FF164E39B8C782608E279A1E9ECA582812B4C8 
{
public:
	// System.Int32 Unity.XR.Oculus.Development/UserDeveloperModeSettingCache::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserDeveloperModeSettingCache_tD3FF164E39B8C782608E279A1E9ECA582812B4C8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputControl/ControlFlags
struct ControlFlags_t48A78BCAC824EC741BEA783C7EEE7B5AC04A0A72 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControl/ControlFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControlFlags_t48A78BCAC824EC741BEA783C7EEE7B5AC04A0A72, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputDevice/DeviceFlags
struct DeviceFlags_t5A08DAC8DB17DAEBB6CC5CE0044090EAEB88740C 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputDevice/DeviceFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceFlags_t5A08DAC8DB17DAEBB6CC5CE0044090EAEB88740C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.XR.Oculus.OculusLoader/DeviceSupportedResult
struct DeviceSupportedResult_t91515A5FEA3D8ADF6777D4894FF176444CE2F15F 
{
public:
	// System.Int32 Unity.XR.Oculus.OculusLoader/DeviceSupportedResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceSupportedResult_t91515A5FEA3D8ADF6777D4894FF176444CE2F15F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.XR.Oculus.OculusSettings/StereoRenderingModeAndroid
struct StereoRenderingModeAndroid_t51C792A37730976614F2A445348686E8467ABCD2 
{
public:
	// System.Int32 Unity.XR.Oculus.OculusSettings/StereoRenderingModeAndroid::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StereoRenderingModeAndroid_t51C792A37730976614F2A445348686E8467ABCD2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.XR.Oculus.OculusSettings/StereoRenderingModeDesktop
struct StereoRenderingModeDesktop_t0AAEF2D9C556C46E75A630F2CB5145AA78AE3207 
{
public:
	// System.Int32 Unity.XR.Oculus.OculusSettings/StereoRenderingModeDesktop::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StereoRenderingModeDesktop_t0AAEF2D9C556C46E75A630F2CB5145AA78AE3207, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4  : public IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002
{
public:

public:
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct IntegratedSubsystem_1_tD5C4AF38726B9433CFC3CA0F889D8C8C2535AEFE  : public IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002
{
public:

public:
};


// System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>
struct Nullable_1_t1840F33AA72FFDFEF6AC4DD7EF5FA3C598530094 
{
public:
	// T System.Nullable`1::value
	InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1840F33AA72FFDFEF6AC4DD7EF5FA3C598530094, ___value_0)); }
	inline InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D  get_value_0() const { return ___value_0; }
	inline InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Patterns_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1840F33AA72FFDFEF6AC4DD7EF5FA3C598530094, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Unity.XR.Oculus.Development
struct Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83  : public RuntimeObject
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_BoolValue_1() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477, ___m_BoolValue_1)); }
	inline bool get_m_BoolValue_1() const { return ___m_BoolValue_1; }
	inline bool* get_address_of_m_BoolValue_1() { return &___m_BoolValue_1; }
	inline void set_m_BoolValue_1(bool value)
	{
		___m_BoolValue_1 = value;
	}

	inline static int32_t get_offset_of_m_CharValue_2() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477, ___m_CharValue_2)); }
	inline Il2CppChar get_m_CharValue_2() const { return ___m_CharValue_2; }
	inline Il2CppChar* get_address_of_m_CharValue_2() { return &___m_CharValue_2; }
	inline void set_m_CharValue_2(Il2CppChar value)
	{
		___m_CharValue_2 = value;
	}

	inline static int32_t get_offset_of_m_ByteValue_3() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477, ___m_ByteValue_3)); }
	inline uint8_t get_m_ByteValue_3() const { return ___m_ByteValue_3; }
	inline uint8_t* get_address_of_m_ByteValue_3() { return &___m_ByteValue_3; }
	inline void set_m_ByteValue_3(uint8_t value)
	{
		___m_ByteValue_3 = value;
	}

	inline static int32_t get_offset_of_m_SByteValue_4() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477, ___m_SByteValue_4)); }
	inline int8_t get_m_SByteValue_4() const { return ___m_SByteValue_4; }
	inline int8_t* get_address_of_m_SByteValue_4() { return &___m_SByteValue_4; }
	inline void set_m_SByteValue_4(int8_t value)
	{
		___m_SByteValue_4 = value;
	}

	inline static int32_t get_offset_of_m_ShortValue_5() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477, ___m_ShortValue_5)); }
	inline int16_t get_m_ShortValue_5() const { return ___m_ShortValue_5; }
	inline int16_t* get_address_of_m_ShortValue_5() { return &___m_ShortValue_5; }
	inline void set_m_ShortValue_5(int16_t value)
	{
		___m_ShortValue_5 = value;
	}

	inline static int32_t get_offset_of_m_UShortValue_6() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477, ___m_UShortValue_6)); }
	inline uint16_t get_m_UShortValue_6() const { return ___m_UShortValue_6; }
	inline uint16_t* get_address_of_m_UShortValue_6() { return &___m_UShortValue_6; }
	inline void set_m_UShortValue_6(uint16_t value)
	{
		___m_UShortValue_6 = value;
	}

	inline static int32_t get_offset_of_m_IntValue_7() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477, ___m_IntValue_7)); }
	inline int32_t get_m_IntValue_7() const { return ___m_IntValue_7; }
	inline int32_t* get_address_of_m_IntValue_7() { return &___m_IntValue_7; }
	inline void set_m_IntValue_7(int32_t value)
	{
		___m_IntValue_7 = value;
	}

	inline static int32_t get_offset_of_m_UIntValue_8() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477, ___m_UIntValue_8)); }
	inline uint32_t get_m_UIntValue_8() const { return ___m_UIntValue_8; }
	inline uint32_t* get_address_of_m_UIntValue_8() { return &___m_UIntValue_8; }
	inline void set_m_UIntValue_8(uint32_t value)
	{
		___m_UIntValue_8 = value;
	}

	inline static int32_t get_offset_of_m_LongValue_9() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477, ___m_LongValue_9)); }
	inline int64_t get_m_LongValue_9() const { return ___m_LongValue_9; }
	inline int64_t* get_address_of_m_LongValue_9() { return &___m_LongValue_9; }
	inline void set_m_LongValue_9(int64_t value)
	{
		___m_LongValue_9 = value;
	}

	inline static int32_t get_offset_of_m_ULongValue_10() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477, ___m_ULongValue_10)); }
	inline uint64_t get_m_ULongValue_10() const { return ___m_ULongValue_10; }
	inline uint64_t* get_address_of_m_ULongValue_10() { return &___m_ULongValue_10; }
	inline void set_m_ULongValue_10(uint64_t value)
	{
		___m_ULongValue_10 = value;
	}

	inline static int32_t get_offset_of_m_FloatValue_11() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477, ___m_FloatValue_11)); }
	inline float get_m_FloatValue_11() const { return ___m_FloatValue_11; }
	inline float* get_address_of_m_FloatValue_11() { return &___m_FloatValue_11; }
	inline void set_m_FloatValue_11(float value)
	{
		___m_FloatValue_11 = value;
	}

	inline static int32_t get_offset_of_m_DoubleValue_12() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477, ___m_DoubleValue_12)); }
	inline double get_m_DoubleValue_12() const { return ___m_DoubleValue_12; }
	inline double* get_address_of_m_DoubleValue_12() { return &___m_DoubleValue_12; }
	inline void set_m_DoubleValue_12(double value)
	{
		___m_DoubleValue_12 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.InputSystem.InputControl
struct InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B  ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA  ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA  ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA  ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B * ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701 * ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// System.Boolean UnityEngine.InputSystem.InputControl::m_CachedValueIsStale
	bool ___m_CachedValueIsStale_18;
	// System.Boolean UnityEngine.InputSystem.InputControl::m_UnprocessedCachedValueIsStale
	bool ___m_UnprocessedCachedValueIsStale_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477  ___m_DefaultState_20;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477  ___m_MinValue_21;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477  ___m_MaxValue_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.InputControl::m_OptimizedControlDataType
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___m_OptimizedControlDataType_23;

public:
	inline static int32_t get_offset_of_m_StateBlock_0() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_StateBlock_0)); }
	inline InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B  get_m_StateBlock_0() const { return ___m_StateBlock_0; }
	inline InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B * get_address_of_m_StateBlock_0() { return &___m_StateBlock_0; }
	inline void set_m_StateBlock_0(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B  value)
	{
		___m_StateBlock_0 = value;
	}

	inline static int32_t get_offset_of_m_Name_1() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_Name_1)); }
	inline InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA  get_m_Name_1() const { return ___m_Name_1; }
	inline InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA * get_address_of_m_Name_1() { return &___m_Name_1; }
	inline void set_m_Name_1(InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA  value)
	{
		___m_Name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Path_2() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_Path_2)); }
	inline String_t* get_m_Path_2() const { return ___m_Path_2; }
	inline String_t** get_address_of_m_Path_2() { return &___m_Path_2; }
	inline void set_m_Path_2(String_t* value)
	{
		___m_Path_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayName_3() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_DisplayName_3)); }
	inline String_t* get_m_DisplayName_3() const { return ___m_DisplayName_3; }
	inline String_t** get_address_of_m_DisplayName_3() { return &___m_DisplayName_3; }
	inline void set_m_DisplayName_3(String_t* value)
	{
		___m_DisplayName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayName_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayNameFromLayout_4() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_DisplayNameFromLayout_4)); }
	inline String_t* get_m_DisplayNameFromLayout_4() const { return ___m_DisplayNameFromLayout_4; }
	inline String_t** get_address_of_m_DisplayNameFromLayout_4() { return &___m_DisplayNameFromLayout_4; }
	inline void set_m_DisplayNameFromLayout_4(String_t* value)
	{
		___m_DisplayNameFromLayout_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayNameFromLayout_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayName_5() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_ShortDisplayName_5)); }
	inline String_t* get_m_ShortDisplayName_5() const { return ___m_ShortDisplayName_5; }
	inline String_t** get_address_of_m_ShortDisplayName_5() { return &___m_ShortDisplayName_5; }
	inline void set_m_ShortDisplayName_5(String_t* value)
	{
		___m_ShortDisplayName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShortDisplayName_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayNameFromLayout_6() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_ShortDisplayNameFromLayout_6)); }
	inline String_t* get_m_ShortDisplayNameFromLayout_6() const { return ___m_ShortDisplayNameFromLayout_6; }
	inline String_t** get_address_of_m_ShortDisplayNameFromLayout_6() { return &___m_ShortDisplayNameFromLayout_6; }
	inline void set_m_ShortDisplayNameFromLayout_6(String_t* value)
	{
		___m_ShortDisplayNameFromLayout_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShortDisplayNameFromLayout_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Layout_7() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_Layout_7)); }
	inline InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA  get_m_Layout_7() const { return ___m_Layout_7; }
	inline InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA * get_address_of_m_Layout_7() { return &___m_Layout_7; }
	inline void set_m_Layout_7(InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA  value)
	{
		___m_Layout_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_7))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_7))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Variants_8() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_Variants_8)); }
	inline InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA  get_m_Variants_8() const { return ___m_Variants_8; }
	inline InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA * get_address_of_m_Variants_8() { return &___m_Variants_8; }
	inline void set_m_Variants_8(InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA  value)
	{
		___m_Variants_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_8))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_8))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Device_9() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_Device_9)); }
	inline InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B * get_m_Device_9() const { return ___m_Device_9; }
	inline InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B ** get_address_of_m_Device_9() { return &___m_Device_9; }
	inline void set_m_Device_9(InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B * value)
	{
		___m_Device_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Device_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Parent_10() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_Parent_10)); }
	inline InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701 * get_m_Parent_10() const { return ___m_Parent_10; }
	inline InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701 ** get_address_of_m_Parent_10() { return &___m_Parent_10; }
	inline void set_m_Parent_10(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701 * value)
	{
		___m_Parent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Parent_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsageCount_11() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_UsageCount_11)); }
	inline int32_t get_m_UsageCount_11() const { return ___m_UsageCount_11; }
	inline int32_t* get_address_of_m_UsageCount_11() { return &___m_UsageCount_11; }
	inline void set_m_UsageCount_11(int32_t value)
	{
		___m_UsageCount_11 = value;
	}

	inline static int32_t get_offset_of_m_UsageStartIndex_12() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_UsageStartIndex_12)); }
	inline int32_t get_m_UsageStartIndex_12() const { return ___m_UsageStartIndex_12; }
	inline int32_t* get_address_of_m_UsageStartIndex_12() { return &___m_UsageStartIndex_12; }
	inline void set_m_UsageStartIndex_12(int32_t value)
	{
		___m_UsageStartIndex_12 = value;
	}

	inline static int32_t get_offset_of_m_AliasCount_13() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_AliasCount_13)); }
	inline int32_t get_m_AliasCount_13() const { return ___m_AliasCount_13; }
	inline int32_t* get_address_of_m_AliasCount_13() { return &___m_AliasCount_13; }
	inline void set_m_AliasCount_13(int32_t value)
	{
		___m_AliasCount_13 = value;
	}

	inline static int32_t get_offset_of_m_AliasStartIndex_14() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_AliasStartIndex_14)); }
	inline int32_t get_m_AliasStartIndex_14() const { return ___m_AliasStartIndex_14; }
	inline int32_t* get_address_of_m_AliasStartIndex_14() { return &___m_AliasStartIndex_14; }
	inline void set_m_AliasStartIndex_14(int32_t value)
	{
		___m_AliasStartIndex_14 = value;
	}

	inline static int32_t get_offset_of_m_ChildCount_15() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_ChildCount_15)); }
	inline int32_t get_m_ChildCount_15() const { return ___m_ChildCount_15; }
	inline int32_t* get_address_of_m_ChildCount_15() { return &___m_ChildCount_15; }
	inline void set_m_ChildCount_15(int32_t value)
	{
		___m_ChildCount_15 = value;
	}

	inline static int32_t get_offset_of_m_ChildStartIndex_16() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_ChildStartIndex_16)); }
	inline int32_t get_m_ChildStartIndex_16() const { return ___m_ChildStartIndex_16; }
	inline int32_t* get_address_of_m_ChildStartIndex_16() { return &___m_ChildStartIndex_16; }
	inline void set_m_ChildStartIndex_16(int32_t value)
	{
		___m_ChildStartIndex_16 = value;
	}

	inline static int32_t get_offset_of_m_ControlFlags_17() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_ControlFlags_17)); }
	inline int32_t get_m_ControlFlags_17() const { return ___m_ControlFlags_17; }
	inline int32_t* get_address_of_m_ControlFlags_17() { return &___m_ControlFlags_17; }
	inline void set_m_ControlFlags_17(int32_t value)
	{
		___m_ControlFlags_17 = value;
	}

	inline static int32_t get_offset_of_m_CachedValueIsStale_18() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_CachedValueIsStale_18)); }
	inline bool get_m_CachedValueIsStale_18() const { return ___m_CachedValueIsStale_18; }
	inline bool* get_address_of_m_CachedValueIsStale_18() { return &___m_CachedValueIsStale_18; }
	inline void set_m_CachedValueIsStale_18(bool value)
	{
		___m_CachedValueIsStale_18 = value;
	}

	inline static int32_t get_offset_of_m_UnprocessedCachedValueIsStale_19() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_UnprocessedCachedValueIsStale_19)); }
	inline bool get_m_UnprocessedCachedValueIsStale_19() const { return ___m_UnprocessedCachedValueIsStale_19; }
	inline bool* get_address_of_m_UnprocessedCachedValueIsStale_19() { return &___m_UnprocessedCachedValueIsStale_19; }
	inline void set_m_UnprocessedCachedValueIsStale_19(bool value)
	{
		___m_UnprocessedCachedValueIsStale_19 = value;
	}

	inline static int32_t get_offset_of_m_DefaultState_20() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_DefaultState_20)); }
	inline PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477  get_m_DefaultState_20() const { return ___m_DefaultState_20; }
	inline PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477 * get_address_of_m_DefaultState_20() { return &___m_DefaultState_20; }
	inline void set_m_DefaultState_20(PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477  value)
	{
		___m_DefaultState_20 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_21() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_MinValue_21)); }
	inline PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477  get_m_MinValue_21() const { return ___m_MinValue_21; }
	inline PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477 * get_address_of_m_MinValue_21() { return &___m_MinValue_21; }
	inline void set_m_MinValue_21(PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477  value)
	{
		___m_MinValue_21 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_22() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_MaxValue_22)); }
	inline PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477  get_m_MaxValue_22() const { return ___m_MaxValue_22; }
	inline PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477 * get_address_of_m_MaxValue_22() { return &___m_MaxValue_22; }
	inline void set_m_MaxValue_22(PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477  value)
	{
		___m_MaxValue_22 = value;
	}

	inline static int32_t get_offset_of_m_OptimizedControlDataType_23() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_OptimizedControlDataType_23)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_m_OptimizedControlDataType_23() const { return ___m_OptimizedControlDataType_23; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_m_OptimizedControlDataType_23() { return &___m_OptimizedControlDataType_23; }
	inline void set_m_OptimizedControlDataType_23(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___m_OptimizedControlDataType_23 = value;
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Unity.XR.Oculus.OculusSettings
struct OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// Unity.XR.Oculus.OculusSettings/StereoRenderingModeDesktop Unity.XR.Oculus.OculusSettings::m_StereoRenderingModeDesktop
	int32_t ___m_StereoRenderingModeDesktop_4;
	// Unity.XR.Oculus.OculusSettings/StereoRenderingModeAndroid Unity.XR.Oculus.OculusSettings::m_StereoRenderingModeAndroid
	int32_t ___m_StereoRenderingModeAndroid_5;
	// System.Boolean Unity.XR.Oculus.OculusSettings::SharedDepthBuffer
	bool ___SharedDepthBuffer_6;
	// System.Boolean Unity.XR.Oculus.OculusSettings::DashSupport
	bool ___DashSupport_7;
	// System.Boolean Unity.XR.Oculus.OculusSettings::V2Signing
	bool ___V2Signing_8;
	// System.Boolean Unity.XR.Oculus.OculusSettings::LowOverheadMode
	bool ___LowOverheadMode_9;
	// System.Boolean Unity.XR.Oculus.OculusSettings::ProtectedContext
	bool ___ProtectedContext_10;
	// System.Boolean Unity.XR.Oculus.OculusSettings::FocusAware
	bool ___FocusAware_11;
	// System.Boolean Unity.XR.Oculus.OculusSettings::OptimizeBufferDiscards
	bool ___OptimizeBufferDiscards_12;
	// System.Boolean Unity.XR.Oculus.OculusSettings::PhaseSync
	bool ___PhaseSync_13;
	// System.Boolean Unity.XR.Oculus.OculusSettings::SymmetricProjection
	bool ___SymmetricProjection_14;
	// System.Boolean Unity.XR.Oculus.OculusSettings::SubsampledLayout
	bool ___SubsampledLayout_15;
	// System.Boolean Unity.XR.Oculus.OculusSettings::TargetQuest
	bool ___TargetQuest_16;
	// System.Boolean Unity.XR.Oculus.OculusSettings::TargetQuest2
	bool ___TargetQuest2_17;
	// UnityEngine.Texture2D Unity.XR.Oculus.OculusSettings::SystemSplashScreen
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___SystemSplashScreen_18;

public:
	inline static int32_t get_offset_of_m_StereoRenderingModeDesktop_4() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___m_StereoRenderingModeDesktop_4)); }
	inline int32_t get_m_StereoRenderingModeDesktop_4() const { return ___m_StereoRenderingModeDesktop_4; }
	inline int32_t* get_address_of_m_StereoRenderingModeDesktop_4() { return &___m_StereoRenderingModeDesktop_4; }
	inline void set_m_StereoRenderingModeDesktop_4(int32_t value)
	{
		___m_StereoRenderingModeDesktop_4 = value;
	}

	inline static int32_t get_offset_of_m_StereoRenderingModeAndroid_5() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___m_StereoRenderingModeAndroid_5)); }
	inline int32_t get_m_StereoRenderingModeAndroid_5() const { return ___m_StereoRenderingModeAndroid_5; }
	inline int32_t* get_address_of_m_StereoRenderingModeAndroid_5() { return &___m_StereoRenderingModeAndroid_5; }
	inline void set_m_StereoRenderingModeAndroid_5(int32_t value)
	{
		___m_StereoRenderingModeAndroid_5 = value;
	}

	inline static int32_t get_offset_of_SharedDepthBuffer_6() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___SharedDepthBuffer_6)); }
	inline bool get_SharedDepthBuffer_6() const { return ___SharedDepthBuffer_6; }
	inline bool* get_address_of_SharedDepthBuffer_6() { return &___SharedDepthBuffer_6; }
	inline void set_SharedDepthBuffer_6(bool value)
	{
		___SharedDepthBuffer_6 = value;
	}

	inline static int32_t get_offset_of_DashSupport_7() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___DashSupport_7)); }
	inline bool get_DashSupport_7() const { return ___DashSupport_7; }
	inline bool* get_address_of_DashSupport_7() { return &___DashSupport_7; }
	inline void set_DashSupport_7(bool value)
	{
		___DashSupport_7 = value;
	}

	inline static int32_t get_offset_of_V2Signing_8() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___V2Signing_8)); }
	inline bool get_V2Signing_8() const { return ___V2Signing_8; }
	inline bool* get_address_of_V2Signing_8() { return &___V2Signing_8; }
	inline void set_V2Signing_8(bool value)
	{
		___V2Signing_8 = value;
	}

	inline static int32_t get_offset_of_LowOverheadMode_9() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___LowOverheadMode_9)); }
	inline bool get_LowOverheadMode_9() const { return ___LowOverheadMode_9; }
	inline bool* get_address_of_LowOverheadMode_9() { return &___LowOverheadMode_9; }
	inline void set_LowOverheadMode_9(bool value)
	{
		___LowOverheadMode_9 = value;
	}

	inline static int32_t get_offset_of_ProtectedContext_10() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___ProtectedContext_10)); }
	inline bool get_ProtectedContext_10() const { return ___ProtectedContext_10; }
	inline bool* get_address_of_ProtectedContext_10() { return &___ProtectedContext_10; }
	inline void set_ProtectedContext_10(bool value)
	{
		___ProtectedContext_10 = value;
	}

	inline static int32_t get_offset_of_FocusAware_11() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___FocusAware_11)); }
	inline bool get_FocusAware_11() const { return ___FocusAware_11; }
	inline bool* get_address_of_FocusAware_11() { return &___FocusAware_11; }
	inline void set_FocusAware_11(bool value)
	{
		___FocusAware_11 = value;
	}

	inline static int32_t get_offset_of_OptimizeBufferDiscards_12() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___OptimizeBufferDiscards_12)); }
	inline bool get_OptimizeBufferDiscards_12() const { return ___OptimizeBufferDiscards_12; }
	inline bool* get_address_of_OptimizeBufferDiscards_12() { return &___OptimizeBufferDiscards_12; }
	inline void set_OptimizeBufferDiscards_12(bool value)
	{
		___OptimizeBufferDiscards_12 = value;
	}

	inline static int32_t get_offset_of_PhaseSync_13() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___PhaseSync_13)); }
	inline bool get_PhaseSync_13() const { return ___PhaseSync_13; }
	inline bool* get_address_of_PhaseSync_13() { return &___PhaseSync_13; }
	inline void set_PhaseSync_13(bool value)
	{
		___PhaseSync_13 = value;
	}

	inline static int32_t get_offset_of_SymmetricProjection_14() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___SymmetricProjection_14)); }
	inline bool get_SymmetricProjection_14() const { return ___SymmetricProjection_14; }
	inline bool* get_address_of_SymmetricProjection_14() { return &___SymmetricProjection_14; }
	inline void set_SymmetricProjection_14(bool value)
	{
		___SymmetricProjection_14 = value;
	}

	inline static int32_t get_offset_of_SubsampledLayout_15() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___SubsampledLayout_15)); }
	inline bool get_SubsampledLayout_15() const { return ___SubsampledLayout_15; }
	inline bool* get_address_of_SubsampledLayout_15() { return &___SubsampledLayout_15; }
	inline void set_SubsampledLayout_15(bool value)
	{
		___SubsampledLayout_15 = value;
	}

	inline static int32_t get_offset_of_TargetQuest_16() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___TargetQuest_16)); }
	inline bool get_TargetQuest_16() const { return ___TargetQuest_16; }
	inline bool* get_address_of_TargetQuest_16() { return &___TargetQuest_16; }
	inline void set_TargetQuest_16(bool value)
	{
		___TargetQuest_16 = value;
	}

	inline static int32_t get_offset_of_TargetQuest2_17() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___TargetQuest2_17)); }
	inline bool get_TargetQuest2_17() const { return ___TargetQuest2_17; }
	inline bool* get_address_of_TargetQuest2_17() { return &___TargetQuest2_17; }
	inline void set_TargetQuest2_17(bool value)
	{
		___TargetQuest2_17 = value;
	}

	inline static int32_t get_offset_of_SystemSplashScreen_18() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___SystemSplashScreen_18)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_SystemSplashScreen_18() const { return ___SystemSplashScreen_18; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_SystemSplashScreen_18() { return &___SystemSplashScreen_18; }
	inline void set_SystemSplashScreen_18(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___SystemSplashScreen_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SystemSplashScreen_18), (void*)value);
	}
};


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93  : public IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4
{
public:
	// System.Action`1<System.Boolean> UnityEngine.XR.XRDisplaySubsystem::displayFocusChanged
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___displayFocusChanged_2;

public:
	inline static int32_t get_offset_of_displayFocusChanged_2() { return static_cast<int32_t>(offsetof(XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93, ___displayFocusChanged_2)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_displayFocusChanged_2() const { return ___displayFocusChanged_2; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_displayFocusChanged_2() { return &___displayFocusChanged_2; }
	inline void set_displayFocusChanged_2(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___displayFocusChanged_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayFocusChanged_2), (void*)value);
	}
};


// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;

public:
	inline static int32_t get_offset_of_m_LoaderManagerInstance_6() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_LoaderManagerInstance_6)); }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * get_m_LoaderManagerInstance_6() const { return ___m_LoaderManagerInstance_6; }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F ** get_address_of_m_LoaderManagerInstance_6() { return &___m_LoaderManagerInstance_6; }
	inline void set_m_LoaderManagerInstance_6(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * value)
	{
		___m_LoaderManagerInstance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LoaderManagerInstance_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_InitManagerOnStart_7() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_InitManagerOnStart_7)); }
	inline bool get_m_InitManagerOnStart_7() const { return ___m_InitManagerOnStart_7; }
	inline bool* get_address_of_m_InitManagerOnStart_7() { return &___m_InitManagerOnStart_7; }
	inline void set_m_InitManagerOnStart_7(bool value)
	{
		___m_InitManagerOnStart_7 = value;
	}

	inline static int32_t get_offset_of_m_XRManager_8() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_XRManager_8)); }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * get_m_XRManager_8() const { return ___m_XRManager_8; }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F ** get_address_of_m_XRManager_8() { return &___m_XRManager_8; }
	inline void set_m_XRManager_8(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * value)
	{
		___m_XRManager_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_XRManager_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_ProviderIntialized_9() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_ProviderIntialized_9)); }
	inline bool get_m_ProviderIntialized_9() const { return ___m_ProviderIntialized_9; }
	inline bool* get_address_of_m_ProviderIntialized_9() { return &___m_ProviderIntialized_9; }
	inline void set_m_ProviderIntialized_9(bool value)
	{
		___m_ProviderIntialized_9 = value;
	}

	inline static int32_t get_offset_of_m_ProviderStarted_10() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_ProviderStarted_10)); }
	inline bool get_m_ProviderStarted_10() const { return ___m_ProviderStarted_10; }
	inline bool* get_address_of_m_ProviderStarted_10() { return &___m_ProviderStarted_10; }
	inline void set_m_ProviderStarted_10(bool value)
	{
		___m_ProviderStarted_10 = value;
	}
};


// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09  : public IntegratedSubsystem_1_tD5C4AF38726B9433CFC3CA0F889D8C8C2535AEFE
{
public:
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::trackingOriginUpdated
	Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * ___trackingOriginUpdated_2;
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::boundaryChanged
	Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * ___boundaryChanged_3;
	// System.Collections.Generic.List`1<System.UInt64> UnityEngine.XR.XRInputSubsystem::m_DeviceIdsCache
	List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * ___m_DeviceIdsCache_4;

public:
	inline static int32_t get_offset_of_trackingOriginUpdated_2() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___trackingOriginUpdated_2)); }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * get_trackingOriginUpdated_2() const { return ___trackingOriginUpdated_2; }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 ** get_address_of_trackingOriginUpdated_2() { return &___trackingOriginUpdated_2; }
	inline void set_trackingOriginUpdated_2(Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * value)
	{
		___trackingOriginUpdated_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingOriginUpdated_2), (void*)value);
	}

	inline static int32_t get_offset_of_boundaryChanged_3() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___boundaryChanged_3)); }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * get_boundaryChanged_3() const { return ___boundaryChanged_3; }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 ** get_address_of_boundaryChanged_3() { return &___boundaryChanged_3; }
	inline void set_boundaryChanged_3(Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * value)
	{
		___boundaryChanged_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryChanged_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceIdsCache_4() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___m_DeviceIdsCache_4)); }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * get_m_DeviceIdsCache_4() const { return ___m_DeviceIdsCache_4; }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B ** get_address_of_m_DeviceIdsCache_4() { return &___m_DeviceIdsCache_4; }
	inline void set_m_DeviceIdsCache_4(List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * value)
	{
		___m_DeviceIdsCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceIdsCache_4), (void*)value);
	}
};


// UnityEngine.XR.Management.XRLoader
struct XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 * ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * ___U3CactiveLoaderU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_m_InitializationComplete_4() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_InitializationComplete_4)); }
	inline bool get_m_InitializationComplete_4() const { return ___m_InitializationComplete_4; }
	inline bool* get_address_of_m_InitializationComplete_4() { return &___m_InitializationComplete_4; }
	inline void set_m_InitializationComplete_4(bool value)
	{
		___m_InitializationComplete_4 = value;
	}

	inline static int32_t get_offset_of_m_RequiresSettingsUpdate_5() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_RequiresSettingsUpdate_5)); }
	inline bool get_m_RequiresSettingsUpdate_5() const { return ___m_RequiresSettingsUpdate_5; }
	inline bool* get_address_of_m_RequiresSettingsUpdate_5() { return &___m_RequiresSettingsUpdate_5; }
	inline void set_m_RequiresSettingsUpdate_5(bool value)
	{
		___m_RequiresSettingsUpdate_5 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticLoading_6() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_AutomaticLoading_6)); }
	inline bool get_m_AutomaticLoading_6() const { return ___m_AutomaticLoading_6; }
	inline bool* get_address_of_m_AutomaticLoading_6() { return &___m_AutomaticLoading_6; }
	inline void set_m_AutomaticLoading_6(bool value)
	{
		___m_AutomaticLoading_6 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticRunning_7() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_AutomaticRunning_7)); }
	inline bool get_m_AutomaticRunning_7() const { return ___m_AutomaticRunning_7; }
	inline bool* get_address_of_m_AutomaticRunning_7() { return &___m_AutomaticRunning_7; }
	inline void set_m_AutomaticRunning_7(bool value)
	{
		___m_AutomaticRunning_7 = value;
	}

	inline static int32_t get_offset_of_m_Loaders_8() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_Loaders_8)); }
	inline List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * get_m_Loaders_8() const { return ___m_Loaders_8; }
	inline List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 ** get_address_of_m_Loaders_8() { return &___m_Loaders_8; }
	inline void set_m_Loaders_8(List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * value)
	{
		___m_Loaders_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Loaders_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_RegisteredLoaders_9() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_RegisteredLoaders_9)); }
	inline HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 * get_m_RegisteredLoaders_9() const { return ___m_RegisteredLoaders_9; }
	inline HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 ** get_address_of_m_RegisteredLoaders_9() { return &___m_RegisteredLoaders_9; }
	inline void set_m_RegisteredLoaders_9(HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 * value)
	{
		___m_RegisteredLoaders_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RegisteredLoaders_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CactiveLoaderU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___U3CactiveLoaderU3Ek__BackingField_10)); }
	inline XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * get_U3CactiveLoaderU3Ek__BackingField_10() const { return ___U3CactiveLoaderU3Ek__BackingField_10; }
	inline XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B ** get_address_of_U3CactiveLoaderU3Ek__BackingField_10() { return &___U3CactiveLoaderU3Ek__BackingField_10; }
	inline void set_U3CactiveLoaderU3Ek__BackingField_10(XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * value)
	{
		___U3CactiveLoaderU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CactiveLoaderU3Ek__BackingField_10), (void*)value);
	}
};


// UnityEngine.InputSystem.InputControl`1<System.Int32>
struct InputControl_1_t825546598B55547604AB9C6D831787B84903989A  : public InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_tF807720F77A8A5E2A3298C5600ACD66F342F8ECF  ___m_ProcessorStack_24;
	// TValue UnityEngine.InputSystem.InputControl`1::m_CachedValue
	int32_t ___m_CachedValue_25;
	// TValue UnityEngine.InputSystem.InputControl`1::m_UnprocessedCachedValue
	int32_t ___m_UnprocessedCachedValue_26;
	// System.Boolean UnityEngine.InputSystem.InputControl`1::evaluateProcessorsEveryRead
	bool ___evaluateProcessorsEveryRead_27;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_24() { return static_cast<int32_t>(offsetof(InputControl_1_t825546598B55547604AB9C6D831787B84903989A, ___m_ProcessorStack_24)); }
	inline InlinedArray_1_tF807720F77A8A5E2A3298C5600ACD66F342F8ECF  get_m_ProcessorStack_24() const { return ___m_ProcessorStack_24; }
	inline InlinedArray_1_tF807720F77A8A5E2A3298C5600ACD66F342F8ECF * get_address_of_m_ProcessorStack_24() { return &___m_ProcessorStack_24; }
	inline void set_m_ProcessorStack_24(InlinedArray_1_tF807720F77A8A5E2A3298C5600ACD66F342F8ECF  value)
	{
		___m_ProcessorStack_24 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_24))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_24))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CachedValue_25() { return static_cast<int32_t>(offsetof(InputControl_1_t825546598B55547604AB9C6D831787B84903989A, ___m_CachedValue_25)); }
	inline int32_t get_m_CachedValue_25() const { return ___m_CachedValue_25; }
	inline int32_t* get_address_of_m_CachedValue_25() { return &___m_CachedValue_25; }
	inline void set_m_CachedValue_25(int32_t value)
	{
		___m_CachedValue_25 = value;
	}

	inline static int32_t get_offset_of_m_UnprocessedCachedValue_26() { return static_cast<int32_t>(offsetof(InputControl_1_t825546598B55547604AB9C6D831787B84903989A, ___m_UnprocessedCachedValue_26)); }
	inline int32_t get_m_UnprocessedCachedValue_26() const { return ___m_UnprocessedCachedValue_26; }
	inline int32_t* get_address_of_m_UnprocessedCachedValue_26() { return &___m_UnprocessedCachedValue_26; }
	inline void set_m_UnprocessedCachedValue_26(int32_t value)
	{
		___m_UnprocessedCachedValue_26 = value;
	}

	inline static int32_t get_offset_of_evaluateProcessorsEveryRead_27() { return static_cast<int32_t>(offsetof(InputControl_1_t825546598B55547604AB9C6D831787B84903989A, ___evaluateProcessorsEveryRead_27)); }
	inline bool get_evaluateProcessorsEveryRead_27() const { return ___evaluateProcessorsEveryRead_27; }
	inline bool* get_address_of_evaluateProcessorsEveryRead_27() { return &___evaluateProcessorsEveryRead_27; }
	inline void set_evaluateProcessorsEveryRead_27(bool value)
	{
		___evaluateProcessorsEveryRead_27 = value;
	}
};


// UnityEngine.InputSystem.InputControl`1<UnityEngine.Quaternion>
struct InputControl_1_t9E3D05AE6266A835E893627128370A8D85075799  : public InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t2822C0699DD93BBEC6516E7E6B13C1618EB31581  ___m_ProcessorStack_24;
	// TValue UnityEngine.InputSystem.InputControl`1::m_CachedValue
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_CachedValue_25;
	// TValue UnityEngine.InputSystem.InputControl`1::m_UnprocessedCachedValue
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_UnprocessedCachedValue_26;
	// System.Boolean UnityEngine.InputSystem.InputControl`1::evaluateProcessorsEveryRead
	bool ___evaluateProcessorsEveryRead_27;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_24() { return static_cast<int32_t>(offsetof(InputControl_1_t9E3D05AE6266A835E893627128370A8D85075799, ___m_ProcessorStack_24)); }
	inline InlinedArray_1_t2822C0699DD93BBEC6516E7E6B13C1618EB31581  get_m_ProcessorStack_24() const { return ___m_ProcessorStack_24; }
	inline InlinedArray_1_t2822C0699DD93BBEC6516E7E6B13C1618EB31581 * get_address_of_m_ProcessorStack_24() { return &___m_ProcessorStack_24; }
	inline void set_m_ProcessorStack_24(InlinedArray_1_t2822C0699DD93BBEC6516E7E6B13C1618EB31581  value)
	{
		___m_ProcessorStack_24 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_24))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_24))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CachedValue_25() { return static_cast<int32_t>(offsetof(InputControl_1_t9E3D05AE6266A835E893627128370A8D85075799, ___m_CachedValue_25)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_CachedValue_25() const { return ___m_CachedValue_25; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_CachedValue_25() { return &___m_CachedValue_25; }
	inline void set_m_CachedValue_25(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_CachedValue_25 = value;
	}

	inline static int32_t get_offset_of_m_UnprocessedCachedValue_26() { return static_cast<int32_t>(offsetof(InputControl_1_t9E3D05AE6266A835E893627128370A8D85075799, ___m_UnprocessedCachedValue_26)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_UnprocessedCachedValue_26() const { return ___m_UnprocessedCachedValue_26; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_UnprocessedCachedValue_26() { return &___m_UnprocessedCachedValue_26; }
	inline void set_m_UnprocessedCachedValue_26(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_UnprocessedCachedValue_26 = value;
	}

	inline static int32_t get_offset_of_evaluateProcessorsEveryRead_27() { return static_cast<int32_t>(offsetof(InputControl_1_t9E3D05AE6266A835E893627128370A8D85075799, ___evaluateProcessorsEveryRead_27)); }
	inline bool get_evaluateProcessorsEveryRead_27() const { return ___evaluateProcessorsEveryRead_27; }
	inline bool* get_address_of_evaluateProcessorsEveryRead_27() { return &___evaluateProcessorsEveryRead_27; }
	inline void set_evaluateProcessorsEveryRead_27(bool value)
	{
		___evaluateProcessorsEveryRead_27 = value;
	}
};


// UnityEngine.InputSystem.InputControl`1<System.Single>
struct InputControl_1_tD9474E386047B0BF9AF076E94A90D4FEEE64E46E  : public InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t4F3144D93F19BFC891F1722ADCE4CCE54C1E92A1  ___m_ProcessorStack_24;
	// TValue UnityEngine.InputSystem.InputControl`1::m_CachedValue
	float ___m_CachedValue_25;
	// TValue UnityEngine.InputSystem.InputControl`1::m_UnprocessedCachedValue
	float ___m_UnprocessedCachedValue_26;
	// System.Boolean UnityEngine.InputSystem.InputControl`1::evaluateProcessorsEveryRead
	bool ___evaluateProcessorsEveryRead_27;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_24() { return static_cast<int32_t>(offsetof(InputControl_1_tD9474E386047B0BF9AF076E94A90D4FEEE64E46E, ___m_ProcessorStack_24)); }
	inline InlinedArray_1_t4F3144D93F19BFC891F1722ADCE4CCE54C1E92A1  get_m_ProcessorStack_24() const { return ___m_ProcessorStack_24; }
	inline InlinedArray_1_t4F3144D93F19BFC891F1722ADCE4CCE54C1E92A1 * get_address_of_m_ProcessorStack_24() { return &___m_ProcessorStack_24; }
	inline void set_m_ProcessorStack_24(InlinedArray_1_t4F3144D93F19BFC891F1722ADCE4CCE54C1E92A1  value)
	{
		___m_ProcessorStack_24 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_24))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_24))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CachedValue_25() { return static_cast<int32_t>(offsetof(InputControl_1_tD9474E386047B0BF9AF076E94A90D4FEEE64E46E, ___m_CachedValue_25)); }
	inline float get_m_CachedValue_25() const { return ___m_CachedValue_25; }
	inline float* get_address_of_m_CachedValue_25() { return &___m_CachedValue_25; }
	inline void set_m_CachedValue_25(float value)
	{
		___m_CachedValue_25 = value;
	}

	inline static int32_t get_offset_of_m_UnprocessedCachedValue_26() { return static_cast<int32_t>(offsetof(InputControl_1_tD9474E386047B0BF9AF076E94A90D4FEEE64E46E, ___m_UnprocessedCachedValue_26)); }
	inline float get_m_UnprocessedCachedValue_26() const { return ___m_UnprocessedCachedValue_26; }
	inline float* get_address_of_m_UnprocessedCachedValue_26() { return &___m_UnprocessedCachedValue_26; }
	inline void set_m_UnprocessedCachedValue_26(float value)
	{
		___m_UnprocessedCachedValue_26 = value;
	}

	inline static int32_t get_offset_of_evaluateProcessorsEveryRead_27() { return static_cast<int32_t>(offsetof(InputControl_1_tD9474E386047B0BF9AF076E94A90D4FEEE64E46E, ___evaluateProcessorsEveryRead_27)); }
	inline bool get_evaluateProcessorsEveryRead_27() const { return ___evaluateProcessorsEveryRead_27; }
	inline bool* get_address_of_evaluateProcessorsEveryRead_27() { return &___evaluateProcessorsEveryRead_27; }
	inline void set_evaluateProcessorsEveryRead_27(bool value)
	{
		___evaluateProcessorsEveryRead_27 = value;
	}
};


// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>
struct InputControl_1_t06010FF34F6AA0B516E3D677801601857EE00B24  : public InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_tB43AA6A419E88F1694A37B47344B3CA3F7FE18AB  ___m_ProcessorStack_24;
	// TValue UnityEngine.InputSystem.InputControl`1::m_CachedValue
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_CachedValue_25;
	// TValue UnityEngine.InputSystem.InputControl`1::m_UnprocessedCachedValue
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UnprocessedCachedValue_26;
	// System.Boolean UnityEngine.InputSystem.InputControl`1::evaluateProcessorsEveryRead
	bool ___evaluateProcessorsEveryRead_27;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_24() { return static_cast<int32_t>(offsetof(InputControl_1_t06010FF34F6AA0B516E3D677801601857EE00B24, ___m_ProcessorStack_24)); }
	inline InlinedArray_1_tB43AA6A419E88F1694A37B47344B3CA3F7FE18AB  get_m_ProcessorStack_24() const { return ___m_ProcessorStack_24; }
	inline InlinedArray_1_tB43AA6A419E88F1694A37B47344B3CA3F7FE18AB * get_address_of_m_ProcessorStack_24() { return &___m_ProcessorStack_24; }
	inline void set_m_ProcessorStack_24(InlinedArray_1_tB43AA6A419E88F1694A37B47344B3CA3F7FE18AB  value)
	{
		___m_ProcessorStack_24 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_24))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_24))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CachedValue_25() { return static_cast<int32_t>(offsetof(InputControl_1_t06010FF34F6AA0B516E3D677801601857EE00B24, ___m_CachedValue_25)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_CachedValue_25() const { return ___m_CachedValue_25; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_CachedValue_25() { return &___m_CachedValue_25; }
	inline void set_m_CachedValue_25(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_CachedValue_25 = value;
	}

	inline static int32_t get_offset_of_m_UnprocessedCachedValue_26() { return static_cast<int32_t>(offsetof(InputControl_1_t06010FF34F6AA0B516E3D677801601857EE00B24, ___m_UnprocessedCachedValue_26)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UnprocessedCachedValue_26() const { return ___m_UnprocessedCachedValue_26; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UnprocessedCachedValue_26() { return &___m_UnprocessedCachedValue_26; }
	inline void set_m_UnprocessedCachedValue_26(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UnprocessedCachedValue_26 = value;
	}

	inline static int32_t get_offset_of_evaluateProcessorsEveryRead_27() { return static_cast<int32_t>(offsetof(InputControl_1_t06010FF34F6AA0B516E3D677801601857EE00B24, ___evaluateProcessorsEveryRead_27)); }
	inline bool get_evaluateProcessorsEveryRead_27() const { return ___evaluateProcessorsEveryRead_27; }
	inline bool* get_address_of_evaluateProcessorsEveryRead_27() { return &___evaluateProcessorsEveryRead_27; }
	inline void set_evaluateProcessorsEveryRead_27(bool value)
	{
		___evaluateProcessorsEveryRead_27 = value;
	}
};


// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector3>
struct InputControl_1_t6C3A49856BC5864E9B073345D0D5D9A5D0D1F5A0  : public InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t3102A9D3C8D757739239874F84CE7BCF70BE54F5  ___m_ProcessorStack_24;
	// TValue UnityEngine.InputSystem.InputControl`1::m_CachedValue
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_CachedValue_25;
	// TValue UnityEngine.InputSystem.InputControl`1::m_UnprocessedCachedValue
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_UnprocessedCachedValue_26;
	// System.Boolean UnityEngine.InputSystem.InputControl`1::evaluateProcessorsEveryRead
	bool ___evaluateProcessorsEveryRead_27;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_24() { return static_cast<int32_t>(offsetof(InputControl_1_t6C3A49856BC5864E9B073345D0D5D9A5D0D1F5A0, ___m_ProcessorStack_24)); }
	inline InlinedArray_1_t3102A9D3C8D757739239874F84CE7BCF70BE54F5  get_m_ProcessorStack_24() const { return ___m_ProcessorStack_24; }
	inline InlinedArray_1_t3102A9D3C8D757739239874F84CE7BCF70BE54F5 * get_address_of_m_ProcessorStack_24() { return &___m_ProcessorStack_24; }
	inline void set_m_ProcessorStack_24(InlinedArray_1_t3102A9D3C8D757739239874F84CE7BCF70BE54F5  value)
	{
		___m_ProcessorStack_24 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_24))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_24))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CachedValue_25() { return static_cast<int32_t>(offsetof(InputControl_1_t6C3A49856BC5864E9B073345D0D5D9A5D0D1F5A0, ___m_CachedValue_25)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_CachedValue_25() const { return ___m_CachedValue_25; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_CachedValue_25() { return &___m_CachedValue_25; }
	inline void set_m_CachedValue_25(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_CachedValue_25 = value;
	}

	inline static int32_t get_offset_of_m_UnprocessedCachedValue_26() { return static_cast<int32_t>(offsetof(InputControl_1_t6C3A49856BC5864E9B073345D0D5D9A5D0D1F5A0, ___m_UnprocessedCachedValue_26)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_UnprocessedCachedValue_26() const { return ___m_UnprocessedCachedValue_26; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_UnprocessedCachedValue_26() { return &___m_UnprocessedCachedValue_26; }
	inline void set_m_UnprocessedCachedValue_26(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_UnprocessedCachedValue_26 = value;
	}

	inline static int32_t get_offset_of_evaluateProcessorsEveryRead_27() { return static_cast<int32_t>(offsetof(InputControl_1_t6C3A49856BC5864E9B073345D0D5D9A5D0D1F5A0, ___evaluateProcessorsEveryRead_27)); }
	inline bool get_evaluateProcessorsEveryRead_27() const { return ___evaluateProcessorsEveryRead_27; }
	inline bool* get_address_of_evaluateProcessorsEveryRead_27() { return &___evaluateProcessorsEveryRead_27; }
	inline void set_evaluateProcessorsEveryRead_27(bool value)
	{
		___evaluateProcessorsEveryRead_27 = value;
	}
};


// UnityEngine.InputSystem.InputDevice
struct InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B  : public InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701
{
public:
	// UnityEngine.InputSystem.InputDevice/DeviceFlags UnityEngine.InputSystem.InputDevice::m_DeviceFlags
	int32_t ___m_DeviceFlags_27;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceId
	int32_t ___m_DeviceId_28;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_ParticipantId
	int32_t ___m_ParticipantId_29;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceIndex
	int32_t ___m_DeviceIndex_30;
	// UnityEngine.InputSystem.Layouts.InputDeviceDescription UnityEngine.InputSystem.InputDevice::m_Description
	InputDeviceDescription_t16E2C7E9B9CE5B7ADB7D70F3C47932EF59D0D980  ___m_Description_31;
	// System.Double UnityEngine.InputSystem.InputDevice::m_LastUpdateTimeInternal
	double ___m_LastUpdateTimeInternal_32;
	// System.UInt32 UnityEngine.InputSystem.InputDevice::m_CurrentUpdateStepCount
	uint32_t ___m_CurrentUpdateStepCount_33;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_AliasesForEachControl
	InternedStringU5BU5D_tD96CA717926C553408C7A718673AC12F4F787095* ___m_AliasesForEachControl_34;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_UsagesForEachControl
	InternedStringU5BU5D_tD96CA717926C553408C7A718673AC12F4F787095* ___m_UsagesForEachControl_35;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_UsageToControl
	InputControlU5BU5D_tE51E95FA96826139CF9D99A021136552F802FA71* ___m_UsageToControl_36;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_ChildrenForEachControl
	InputControlU5BU5D_tE51E95FA96826139CF9D99A021136552F802FA71* ___m_ChildrenForEachControl_37;
	// System.UInt32[] UnityEngine.InputSystem.InputDevice::m_StateOffsetToControlMap
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___m_StateOffsetToControlMap_38;
	// UnityEngine.InputSystem.InputDevice/ControlBitRangeNode[] UnityEngine.InputSystem.InputDevice::m_ControlTreeNodes
	ControlBitRangeNodeU5BU5D_tA24B796B2F142740E56C0BBBF3F9767EF23BCB11* ___m_ControlTreeNodes_39;
	// System.UInt16[] UnityEngine.InputSystem.InputDevice::m_ControlTreeIndices
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___m_ControlTreeIndices_40;

public:
	inline static int32_t get_offset_of_m_DeviceFlags_27() { return static_cast<int32_t>(offsetof(InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B, ___m_DeviceFlags_27)); }
	inline int32_t get_m_DeviceFlags_27() const { return ___m_DeviceFlags_27; }
	inline int32_t* get_address_of_m_DeviceFlags_27() { return &___m_DeviceFlags_27; }
	inline void set_m_DeviceFlags_27(int32_t value)
	{
		___m_DeviceFlags_27 = value;
	}

	inline static int32_t get_offset_of_m_DeviceId_28() { return static_cast<int32_t>(offsetof(InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B, ___m_DeviceId_28)); }
	inline int32_t get_m_DeviceId_28() const { return ___m_DeviceId_28; }
	inline int32_t* get_address_of_m_DeviceId_28() { return &___m_DeviceId_28; }
	inline void set_m_DeviceId_28(int32_t value)
	{
		___m_DeviceId_28 = value;
	}

	inline static int32_t get_offset_of_m_ParticipantId_29() { return static_cast<int32_t>(offsetof(InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B, ___m_ParticipantId_29)); }
	inline int32_t get_m_ParticipantId_29() const { return ___m_ParticipantId_29; }
	inline int32_t* get_address_of_m_ParticipantId_29() { return &___m_ParticipantId_29; }
	inline void set_m_ParticipantId_29(int32_t value)
	{
		___m_ParticipantId_29 = value;
	}

	inline static int32_t get_offset_of_m_DeviceIndex_30() { return static_cast<int32_t>(offsetof(InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B, ___m_DeviceIndex_30)); }
	inline int32_t get_m_DeviceIndex_30() const { return ___m_DeviceIndex_30; }
	inline int32_t* get_address_of_m_DeviceIndex_30() { return &___m_DeviceIndex_30; }
	inline void set_m_DeviceIndex_30(int32_t value)
	{
		___m_DeviceIndex_30 = value;
	}

	inline static int32_t get_offset_of_m_Description_31() { return static_cast<int32_t>(offsetof(InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B, ___m_Description_31)); }
	inline InputDeviceDescription_t16E2C7E9B9CE5B7ADB7D70F3C47932EF59D0D980  get_m_Description_31() const { return ___m_Description_31; }
	inline InputDeviceDescription_t16E2C7E9B9CE5B7ADB7D70F3C47932EF59D0D980 * get_address_of_m_Description_31() { return &___m_Description_31; }
	inline void set_m_Description_31(InputDeviceDescription_t16E2C7E9B9CE5B7ADB7D70F3C47932EF59D0D980  value)
	{
		___m_Description_31 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_31))->___m_InterfaceName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_31))->___m_DeviceClass_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_31))->___m_Manufacturer_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_31))->___m_Product_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_31))->___m_Serial_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_31))->___m_Version_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_31))->___m_Capabilities_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_LastUpdateTimeInternal_32() { return static_cast<int32_t>(offsetof(InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B, ___m_LastUpdateTimeInternal_32)); }
	inline double get_m_LastUpdateTimeInternal_32() const { return ___m_LastUpdateTimeInternal_32; }
	inline double* get_address_of_m_LastUpdateTimeInternal_32() { return &___m_LastUpdateTimeInternal_32; }
	inline void set_m_LastUpdateTimeInternal_32(double value)
	{
		___m_LastUpdateTimeInternal_32 = value;
	}

	inline static int32_t get_offset_of_m_CurrentUpdateStepCount_33() { return static_cast<int32_t>(offsetof(InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B, ___m_CurrentUpdateStepCount_33)); }
	inline uint32_t get_m_CurrentUpdateStepCount_33() const { return ___m_CurrentUpdateStepCount_33; }
	inline uint32_t* get_address_of_m_CurrentUpdateStepCount_33() { return &___m_CurrentUpdateStepCount_33; }
	inline void set_m_CurrentUpdateStepCount_33(uint32_t value)
	{
		___m_CurrentUpdateStepCount_33 = value;
	}

	inline static int32_t get_offset_of_m_AliasesForEachControl_34() { return static_cast<int32_t>(offsetof(InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B, ___m_AliasesForEachControl_34)); }
	inline InternedStringU5BU5D_tD96CA717926C553408C7A718673AC12F4F787095* get_m_AliasesForEachControl_34() const { return ___m_AliasesForEachControl_34; }
	inline InternedStringU5BU5D_tD96CA717926C553408C7A718673AC12F4F787095** get_address_of_m_AliasesForEachControl_34() { return &___m_AliasesForEachControl_34; }
	inline void set_m_AliasesForEachControl_34(InternedStringU5BU5D_tD96CA717926C553408C7A718673AC12F4F787095* value)
	{
		___m_AliasesForEachControl_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AliasesForEachControl_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsagesForEachControl_35() { return static_cast<int32_t>(offsetof(InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B, ___m_UsagesForEachControl_35)); }
	inline InternedStringU5BU5D_tD96CA717926C553408C7A718673AC12F4F787095* get_m_UsagesForEachControl_35() const { return ___m_UsagesForEachControl_35; }
	inline InternedStringU5BU5D_tD96CA717926C553408C7A718673AC12F4F787095** get_address_of_m_UsagesForEachControl_35() { return &___m_UsagesForEachControl_35; }
	inline void set_m_UsagesForEachControl_35(InternedStringU5BU5D_tD96CA717926C553408C7A718673AC12F4F787095* value)
	{
		___m_UsagesForEachControl_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UsagesForEachControl_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsageToControl_36() { return static_cast<int32_t>(offsetof(InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B, ___m_UsageToControl_36)); }
	inline InputControlU5BU5D_tE51E95FA96826139CF9D99A021136552F802FA71* get_m_UsageToControl_36() const { return ___m_UsageToControl_36; }
	inline InputControlU5BU5D_tE51E95FA96826139CF9D99A021136552F802FA71** get_address_of_m_UsageToControl_36() { return &___m_UsageToControl_36; }
	inline void set_m_UsageToControl_36(InputControlU5BU5D_tE51E95FA96826139CF9D99A021136552F802FA71* value)
	{
		___m_UsageToControl_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UsageToControl_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChildrenForEachControl_37() { return static_cast<int32_t>(offsetof(InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B, ___m_ChildrenForEachControl_37)); }
	inline InputControlU5BU5D_tE51E95FA96826139CF9D99A021136552F802FA71* get_m_ChildrenForEachControl_37() const { return ___m_ChildrenForEachControl_37; }
	inline InputControlU5BU5D_tE51E95FA96826139CF9D99A021136552F802FA71** get_address_of_m_ChildrenForEachControl_37() { return &___m_ChildrenForEachControl_37; }
	inline void set_m_ChildrenForEachControl_37(InputControlU5BU5D_tE51E95FA96826139CF9D99A021136552F802FA71* value)
	{
		___m_ChildrenForEachControl_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChildrenForEachControl_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_StateOffsetToControlMap_38() { return static_cast<int32_t>(offsetof(InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B, ___m_StateOffsetToControlMap_38)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_m_StateOffsetToControlMap_38() const { return ___m_StateOffsetToControlMap_38; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_m_StateOffsetToControlMap_38() { return &___m_StateOffsetToControlMap_38; }
	inline void set_m_StateOffsetToControlMap_38(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___m_StateOffsetToControlMap_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StateOffsetToControlMap_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_ControlTreeNodes_39() { return static_cast<int32_t>(offsetof(InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B, ___m_ControlTreeNodes_39)); }
	inline ControlBitRangeNodeU5BU5D_tA24B796B2F142740E56C0BBBF3F9767EF23BCB11* get_m_ControlTreeNodes_39() const { return ___m_ControlTreeNodes_39; }
	inline ControlBitRangeNodeU5BU5D_tA24B796B2F142740E56C0BBBF3F9767EF23BCB11** get_address_of_m_ControlTreeNodes_39() { return &___m_ControlTreeNodes_39; }
	inline void set_m_ControlTreeNodes_39(ControlBitRangeNodeU5BU5D_tA24B796B2F142740E56C0BBBF3F9767EF23BCB11* value)
	{
		___m_ControlTreeNodes_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControlTreeNodes_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_ControlTreeIndices_40() { return static_cast<int32_t>(offsetof(InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B, ___m_ControlTreeIndices_40)); }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* get_m_ControlTreeIndices_40() const { return ___m_ControlTreeIndices_40; }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67** get_address_of_m_ControlTreeIndices_40() { return &___m_ControlTreeIndices_40; }
	inline void set_m_ControlTreeIndices_40(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* value)
	{
		___m_ControlTreeIndices_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControlTreeIndices_40), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013  : public XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem> UnityEngine.XR.Management.XRLoaderHelper::m_SubsystemInstanceMap
	Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * ___m_SubsystemInstanceMap_4;

public:
	inline static int32_t get_offset_of_m_SubsystemInstanceMap_4() { return static_cast<int32_t>(offsetof(XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013, ___m_SubsystemInstanceMap_4)); }
	inline Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * get_m_SubsystemInstanceMap_4() const { return ___m_SubsystemInstanceMap_4; }
	inline Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B ** get_address_of_m_SubsystemInstanceMap_4() { return &___m_SubsystemInstanceMap_4; }
	inline void set_m_SubsystemInstanceMap_4(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * value)
	{
		___m_SubsystemInstanceMap_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubsystemInstanceMap_4), (void*)value);
	}
};


// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61  : public InputControl_1_tD9474E386047B0BF9AF076E94A90D4FEEE64E46E
{
public:
	// UnityEngine.InputSystem.Controls.AxisControl/Clamp UnityEngine.InputSystem.Controls.AxisControl::clamp
	int32_t ___clamp_28;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampMin
	float ___clampMin_29;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampMax
	float ___clampMax_30;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampConstant
	float ___clampConstant_31;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::invert
	bool ___invert_32;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::normalize
	bool ___normalize_33;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeMin
	float ___normalizeMin_34;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeMax
	float ___normalizeMax_35;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeZero
	float ___normalizeZero_36;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::scale
	bool ___scale_37;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::scaleFactor
	float ___scaleFactor_38;

public:
	inline static int32_t get_offset_of_clamp_28() { return static_cast<int32_t>(offsetof(AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61, ___clamp_28)); }
	inline int32_t get_clamp_28() const { return ___clamp_28; }
	inline int32_t* get_address_of_clamp_28() { return &___clamp_28; }
	inline void set_clamp_28(int32_t value)
	{
		___clamp_28 = value;
	}

	inline static int32_t get_offset_of_clampMin_29() { return static_cast<int32_t>(offsetof(AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61, ___clampMin_29)); }
	inline float get_clampMin_29() const { return ___clampMin_29; }
	inline float* get_address_of_clampMin_29() { return &___clampMin_29; }
	inline void set_clampMin_29(float value)
	{
		___clampMin_29 = value;
	}

	inline static int32_t get_offset_of_clampMax_30() { return static_cast<int32_t>(offsetof(AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61, ___clampMax_30)); }
	inline float get_clampMax_30() const { return ___clampMax_30; }
	inline float* get_address_of_clampMax_30() { return &___clampMax_30; }
	inline void set_clampMax_30(float value)
	{
		___clampMax_30 = value;
	}

	inline static int32_t get_offset_of_clampConstant_31() { return static_cast<int32_t>(offsetof(AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61, ___clampConstant_31)); }
	inline float get_clampConstant_31() const { return ___clampConstant_31; }
	inline float* get_address_of_clampConstant_31() { return &___clampConstant_31; }
	inline void set_clampConstant_31(float value)
	{
		___clampConstant_31 = value;
	}

	inline static int32_t get_offset_of_invert_32() { return static_cast<int32_t>(offsetof(AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61, ___invert_32)); }
	inline bool get_invert_32() const { return ___invert_32; }
	inline bool* get_address_of_invert_32() { return &___invert_32; }
	inline void set_invert_32(bool value)
	{
		___invert_32 = value;
	}

	inline static int32_t get_offset_of_normalize_33() { return static_cast<int32_t>(offsetof(AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61, ___normalize_33)); }
	inline bool get_normalize_33() const { return ___normalize_33; }
	inline bool* get_address_of_normalize_33() { return &___normalize_33; }
	inline void set_normalize_33(bool value)
	{
		___normalize_33 = value;
	}

	inline static int32_t get_offset_of_normalizeMin_34() { return static_cast<int32_t>(offsetof(AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61, ___normalizeMin_34)); }
	inline float get_normalizeMin_34() const { return ___normalizeMin_34; }
	inline float* get_address_of_normalizeMin_34() { return &___normalizeMin_34; }
	inline void set_normalizeMin_34(float value)
	{
		___normalizeMin_34 = value;
	}

	inline static int32_t get_offset_of_normalizeMax_35() { return static_cast<int32_t>(offsetof(AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61, ___normalizeMax_35)); }
	inline float get_normalizeMax_35() const { return ___normalizeMax_35; }
	inline float* get_address_of_normalizeMax_35() { return &___normalizeMax_35; }
	inline void set_normalizeMax_35(float value)
	{
		___normalizeMax_35 = value;
	}

	inline static int32_t get_offset_of_normalizeZero_36() { return static_cast<int32_t>(offsetof(AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61, ___normalizeZero_36)); }
	inline float get_normalizeZero_36() const { return ___normalizeZero_36; }
	inline float* get_address_of_normalizeZero_36() { return &___normalizeZero_36; }
	inline void set_normalizeZero_36(float value)
	{
		___normalizeZero_36 = value;
	}

	inline static int32_t get_offset_of_scale_37() { return static_cast<int32_t>(offsetof(AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61, ___scale_37)); }
	inline bool get_scale_37() const { return ___scale_37; }
	inline bool* get_address_of_scale_37() { return &___scale_37; }
	inline void set_scale_37(bool value)
	{
		___scale_37 = value;
	}

	inline static int32_t get_offset_of_scaleFactor_38() { return static_cast<int32_t>(offsetof(AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61, ___scaleFactor_38)); }
	inline float get_scaleFactor_38() const { return ___scaleFactor_38; }
	inline float* get_address_of_scaleFactor_38() { return &___scaleFactor_38; }
	inline void set_scaleFactor_38(float value)
	{
		___scaleFactor_38 = value;
	}
};


// UnityEngine.InputSystem.Controls.IntegerControl
struct IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3  : public InputControl_1_t825546598B55547604AB9C6D831787B84903989A
{
public:

public:
};


// Unity.XR.Oculus.OculusLoader
struct OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB  : public XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013
{
public:

public:
};


// Unity.XR.Oculus.Input.OculusRemote
struct OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3  : public InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B
{
public:
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusRemote::<back>k__BackingField
	ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___U3CbackU3Ek__BackingField_44;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusRemote::<start>k__BackingField
	ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___U3CstartU3Ek__BackingField_45;
	// UnityEngine.InputSystem.Controls.Vector2Control Unity.XR.Oculus.Input.OculusRemote::<touchpad>k__BackingField
	Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * ___U3CtouchpadU3Ek__BackingField_46;

public:
	inline static int32_t get_offset_of_U3CbackU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3, ___U3CbackU3Ek__BackingField_44)); }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * get_U3CbackU3Ek__BackingField_44() const { return ___U3CbackU3Ek__BackingField_44; }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E ** get_address_of_U3CbackU3Ek__BackingField_44() { return &___U3CbackU3Ek__BackingField_44; }
	inline void set_U3CbackU3Ek__BackingField_44(ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * value)
	{
		___U3CbackU3Ek__BackingField_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbackU3Ek__BackingField_44), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstartU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3, ___U3CstartU3Ek__BackingField_45)); }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * get_U3CstartU3Ek__BackingField_45() const { return ___U3CstartU3Ek__BackingField_45; }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E ** get_address_of_U3CstartU3Ek__BackingField_45() { return &___U3CstartU3Ek__BackingField_45; }
	inline void set_U3CstartU3Ek__BackingField_45(ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * value)
	{
		___U3CstartU3Ek__BackingField_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstartU3Ek__BackingField_45), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtouchpadU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3, ___U3CtouchpadU3Ek__BackingField_46)); }
	inline Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * get_U3CtouchpadU3Ek__BackingField_46() const { return ___U3CtouchpadU3Ek__BackingField_46; }
	inline Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 ** get_address_of_U3CtouchpadU3Ek__BackingField_46() { return &___U3CtouchpadU3Ek__BackingField_46; }
	inline void set_U3CtouchpadU3Ek__BackingField_46(Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * value)
	{
		___U3CtouchpadU3Ek__BackingField_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtouchpadU3Ek__BackingField_46), (void*)value);
	}
};


// Unity.XR.Oculus.OculusRestarter
struct OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action Unity.XR.Oculus.OculusRestarter::onAfterRestart
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onAfterRestart_4;
	// System.Action Unity.XR.Oculus.OculusRestarter::onAfterShutdown
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onAfterShutdown_5;
	// System.Action Unity.XR.Oculus.OculusRestarter::onQuit
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onQuit_6;
	// System.Action Unity.XR.Oculus.OculusRestarter::onAfterCoroutine
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onAfterCoroutine_7;
	// UnityEngine.Coroutine Unity.XR.Oculus.OculusRestarter::m_Coroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_Coroutine_10;
	// UnityEngine.Coroutine Unity.XR.Oculus.OculusRestarter::m_pauseAndRestartCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_pauseAndRestartCoroutine_11;

public:
	inline static int32_t get_offset_of_onAfterRestart_4() { return static_cast<int32_t>(offsetof(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65, ___onAfterRestart_4)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_onAfterRestart_4() const { return ___onAfterRestart_4; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_onAfterRestart_4() { return &___onAfterRestart_4; }
	inline void set_onAfterRestart_4(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___onAfterRestart_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAfterRestart_4), (void*)value);
	}

	inline static int32_t get_offset_of_onAfterShutdown_5() { return static_cast<int32_t>(offsetof(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65, ___onAfterShutdown_5)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_onAfterShutdown_5() const { return ___onAfterShutdown_5; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_onAfterShutdown_5() { return &___onAfterShutdown_5; }
	inline void set_onAfterShutdown_5(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___onAfterShutdown_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAfterShutdown_5), (void*)value);
	}

	inline static int32_t get_offset_of_onQuit_6() { return static_cast<int32_t>(offsetof(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65, ___onQuit_6)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_onQuit_6() const { return ___onQuit_6; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_onQuit_6() { return &___onQuit_6; }
	inline void set_onQuit_6(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___onQuit_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onQuit_6), (void*)value);
	}

	inline static int32_t get_offset_of_onAfterCoroutine_7() { return static_cast<int32_t>(offsetof(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65, ___onAfterCoroutine_7)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_onAfterCoroutine_7() const { return ___onAfterCoroutine_7; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_onAfterCoroutine_7() { return &___onAfterCoroutine_7; }
	inline void set_onAfterCoroutine_7(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___onAfterCoroutine_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAfterCoroutine_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Coroutine_10() { return static_cast<int32_t>(offsetof(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65, ___m_Coroutine_10)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_Coroutine_10() const { return ___m_Coroutine_10; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_Coroutine_10() { return &___m_Coroutine_10; }
	inline void set_m_Coroutine_10(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_Coroutine_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Coroutine_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_pauseAndRestartCoroutine_11() { return static_cast<int32_t>(offsetof(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65, ___m_pauseAndRestartCoroutine_11)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_pauseAndRestartCoroutine_11() const { return ___m_pauseAndRestartCoroutine_11; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_pauseAndRestartCoroutine_11() { return &___m_pauseAndRestartCoroutine_11; }
	inline void set_m_pauseAndRestartCoroutine_11(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_pauseAndRestartCoroutine_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_pauseAndRestartCoroutine_11), (void*)value);
	}
};


// Unity.XR.Oculus.Input.OculusTrackingReference
struct OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807  : public InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B
{
public:
	// UnityEngine.InputSystem.Controls.IntegerControl Unity.XR.Oculus.Input.OculusTrackingReference::<trackingState>k__BackingField
	IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * ___U3CtrackingStateU3Ek__BackingField_44;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTrackingReference::<isTracked>k__BackingField
	ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___U3CisTrackedU3Ek__BackingField_45;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusTrackingReference::<devicePosition>k__BackingField
	Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___U3CdevicePositionU3Ek__BackingField_46;
	// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.OculusTrackingReference::<deviceRotation>k__BackingField
	QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * ___U3CdeviceRotationU3Ek__BackingField_47;

public:
	inline static int32_t get_offset_of_U3CtrackingStateU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807, ___U3CtrackingStateU3Ek__BackingField_44)); }
	inline IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * get_U3CtrackingStateU3Ek__BackingField_44() const { return ___U3CtrackingStateU3Ek__BackingField_44; }
	inline IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 ** get_address_of_U3CtrackingStateU3Ek__BackingField_44() { return &___U3CtrackingStateU3Ek__BackingField_44; }
	inline void set_U3CtrackingStateU3Ek__BackingField_44(IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * value)
	{
		___U3CtrackingStateU3Ek__BackingField_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackingStateU3Ek__BackingField_44), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisTrackedU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807, ___U3CisTrackedU3Ek__BackingField_45)); }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * get_U3CisTrackedU3Ek__BackingField_45() const { return ___U3CisTrackedU3Ek__BackingField_45; }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E ** get_address_of_U3CisTrackedU3Ek__BackingField_45() { return &___U3CisTrackedU3Ek__BackingField_45; }
	inline void set_U3CisTrackedU3Ek__BackingField_45(ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * value)
	{
		___U3CisTrackedU3Ek__BackingField_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CisTrackedU3Ek__BackingField_45), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdevicePositionU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807, ___U3CdevicePositionU3Ek__BackingField_46)); }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * get_U3CdevicePositionU3Ek__BackingField_46() const { return ___U3CdevicePositionU3Ek__BackingField_46; }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 ** get_address_of_U3CdevicePositionU3Ek__BackingField_46() { return &___U3CdevicePositionU3Ek__BackingField_46; }
	inline void set_U3CdevicePositionU3Ek__BackingField_46(Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * value)
	{
		___U3CdevicePositionU3Ek__BackingField_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdevicePositionU3Ek__BackingField_46), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceRotationU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807, ___U3CdeviceRotationU3Ek__BackingField_47)); }
	inline QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * get_U3CdeviceRotationU3Ek__BackingField_47() const { return ___U3CdeviceRotationU3Ek__BackingField_47; }
	inline QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A ** get_address_of_U3CdeviceRotationU3Ek__BackingField_47() { return &___U3CdeviceRotationU3Ek__BackingField_47; }
	inline void set_U3CdeviceRotationU3Ek__BackingField_47(QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * value)
	{
		___U3CdeviceRotationU3Ek__BackingField_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceRotationU3Ek__BackingField_47), (void*)value);
	}
};


// UnityEngine.InputSystem.Controls.QuaternionControl
struct QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A  : public InputControl_1_t9E3D05AE6266A835E893627128370A8D85075799
{
public:
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<x>k__BackingField
	AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * ___U3CxU3Ek__BackingField_28;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<y>k__BackingField
	AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * ___U3CyU3Ek__BackingField_29;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<z>k__BackingField
	AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * ___U3CzU3Ek__BackingField_30;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<w>k__BackingField
	AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * ___U3CwU3Ek__BackingField_31;

public:
	inline static int32_t get_offset_of_U3CxU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A, ___U3CxU3Ek__BackingField_28)); }
	inline AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * get_U3CxU3Ek__BackingField_28() const { return ___U3CxU3Ek__BackingField_28; }
	inline AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 ** get_address_of_U3CxU3Ek__BackingField_28() { return &___U3CxU3Ek__BackingField_28; }
	inline void set_U3CxU3Ek__BackingField_28(AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * value)
	{
		___U3CxU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CxU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CyU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A, ___U3CyU3Ek__BackingField_29)); }
	inline AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * get_U3CyU3Ek__BackingField_29() const { return ___U3CyU3Ek__BackingField_29; }
	inline AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 ** get_address_of_U3CyU3Ek__BackingField_29() { return &___U3CyU3Ek__BackingField_29; }
	inline void set_U3CyU3Ek__BackingField_29(AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * value)
	{
		___U3CyU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CyU3Ek__BackingField_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3CzU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A, ___U3CzU3Ek__BackingField_30)); }
	inline AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * get_U3CzU3Ek__BackingField_30() const { return ___U3CzU3Ek__BackingField_30; }
	inline AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 ** get_address_of_U3CzU3Ek__BackingField_30() { return &___U3CzU3Ek__BackingField_30; }
	inline void set_U3CzU3Ek__BackingField_30(AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * value)
	{
		___U3CzU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CzU3Ek__BackingField_30), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A, ___U3CwU3Ek__BackingField_31)); }
	inline AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * get_U3CwU3Ek__BackingField_31() const { return ___U3CwU3Ek__BackingField_31; }
	inline AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 ** get_address_of_U3CwU3Ek__BackingField_31() { return &___U3CwU3Ek__BackingField_31; }
	inline void set_U3CwU3Ek__BackingField_31(AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * value)
	{
		___U3CwU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwU3Ek__BackingField_31), (void*)value);
	}
};


// UnityEngine.InputSystem.TrackedDevice
struct TrackedDevice_tA2A2B9299E780C26BF0F812E6493BD90029ACFD3  : public InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B
{
public:
	// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.InputSystem.TrackedDevice::<trackingState>k__BackingField
	IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * ___U3CtrackingStateU3Ek__BackingField_44;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.TrackedDevice::<isTracked>k__BackingField
	ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___U3CisTrackedU3Ek__BackingField_45;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.InputSystem.TrackedDevice::<devicePosition>k__BackingField
	Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___U3CdevicePositionU3Ek__BackingField_46;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.InputSystem.TrackedDevice::<deviceRotation>k__BackingField
	QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * ___U3CdeviceRotationU3Ek__BackingField_47;

public:
	inline static int32_t get_offset_of_U3CtrackingStateU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(TrackedDevice_tA2A2B9299E780C26BF0F812E6493BD90029ACFD3, ___U3CtrackingStateU3Ek__BackingField_44)); }
	inline IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * get_U3CtrackingStateU3Ek__BackingField_44() const { return ___U3CtrackingStateU3Ek__BackingField_44; }
	inline IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 ** get_address_of_U3CtrackingStateU3Ek__BackingField_44() { return &___U3CtrackingStateU3Ek__BackingField_44; }
	inline void set_U3CtrackingStateU3Ek__BackingField_44(IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * value)
	{
		___U3CtrackingStateU3Ek__BackingField_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackingStateU3Ek__BackingField_44), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisTrackedU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(TrackedDevice_tA2A2B9299E780C26BF0F812E6493BD90029ACFD3, ___U3CisTrackedU3Ek__BackingField_45)); }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * get_U3CisTrackedU3Ek__BackingField_45() const { return ___U3CisTrackedU3Ek__BackingField_45; }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E ** get_address_of_U3CisTrackedU3Ek__BackingField_45() { return &___U3CisTrackedU3Ek__BackingField_45; }
	inline void set_U3CisTrackedU3Ek__BackingField_45(ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * value)
	{
		___U3CisTrackedU3Ek__BackingField_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CisTrackedU3Ek__BackingField_45), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdevicePositionU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(TrackedDevice_tA2A2B9299E780C26BF0F812E6493BD90029ACFD3, ___U3CdevicePositionU3Ek__BackingField_46)); }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * get_U3CdevicePositionU3Ek__BackingField_46() const { return ___U3CdevicePositionU3Ek__BackingField_46; }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 ** get_address_of_U3CdevicePositionU3Ek__BackingField_46() { return &___U3CdevicePositionU3Ek__BackingField_46; }
	inline void set_U3CdevicePositionU3Ek__BackingField_46(Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * value)
	{
		___U3CdevicePositionU3Ek__BackingField_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdevicePositionU3Ek__BackingField_46), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceRotationU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(TrackedDevice_tA2A2B9299E780C26BF0F812E6493BD90029ACFD3, ___U3CdeviceRotationU3Ek__BackingField_47)); }
	inline QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * get_U3CdeviceRotationU3Ek__BackingField_47() const { return ___U3CdeviceRotationU3Ek__BackingField_47; }
	inline QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A ** get_address_of_U3CdeviceRotationU3Ek__BackingField_47() { return &___U3CdeviceRotationU3Ek__BackingField_47; }
	inline void set_U3CdeviceRotationU3Ek__BackingField_47(QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * value)
	{
		___U3CdeviceRotationU3Ek__BackingField_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceRotationU3Ek__BackingField_47), (void*)value);
	}
};


// UnityEngine.InputSystem.Controls.Vector2Control
struct Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1  : public InputControl_1_t06010FF34F6AA0B516E3D677801601857EE00B24
{
public:
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector2Control::<x>k__BackingField
	AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * ___U3CxU3Ek__BackingField_28;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector2Control::<y>k__BackingField
	AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * ___U3CyU3Ek__BackingField_29;

public:
	inline static int32_t get_offset_of_U3CxU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1, ___U3CxU3Ek__BackingField_28)); }
	inline AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * get_U3CxU3Ek__BackingField_28() const { return ___U3CxU3Ek__BackingField_28; }
	inline AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 ** get_address_of_U3CxU3Ek__BackingField_28() { return &___U3CxU3Ek__BackingField_28; }
	inline void set_U3CxU3Ek__BackingField_28(AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * value)
	{
		___U3CxU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CxU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CyU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1, ___U3CyU3Ek__BackingField_29)); }
	inline AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * get_U3CyU3Ek__BackingField_29() const { return ___U3CyU3Ek__BackingField_29; }
	inline AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 ** get_address_of_U3CyU3Ek__BackingField_29() { return &___U3CyU3Ek__BackingField_29; }
	inline void set_U3CyU3Ek__BackingField_29(AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * value)
	{
		___U3CyU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CyU3Ek__BackingField_29), (void*)value);
	}
};


// UnityEngine.InputSystem.Controls.Vector3Control
struct Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718  : public InputControl_1_t6C3A49856BC5864E9B073345D0D5D9A5D0D1F5A0
{
public:
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector3Control::<x>k__BackingField
	AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * ___U3CxU3Ek__BackingField_28;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector3Control::<y>k__BackingField
	AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * ___U3CyU3Ek__BackingField_29;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector3Control::<z>k__BackingField
	AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * ___U3CzU3Ek__BackingField_30;

public:
	inline static int32_t get_offset_of_U3CxU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718, ___U3CxU3Ek__BackingField_28)); }
	inline AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * get_U3CxU3Ek__BackingField_28() const { return ___U3CxU3Ek__BackingField_28; }
	inline AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 ** get_address_of_U3CxU3Ek__BackingField_28() { return &___U3CxU3Ek__BackingField_28; }
	inline void set_U3CxU3Ek__BackingField_28(AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * value)
	{
		___U3CxU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CxU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CyU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718, ___U3CyU3Ek__BackingField_29)); }
	inline AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * get_U3CyU3Ek__BackingField_29() const { return ___U3CyU3Ek__BackingField_29; }
	inline AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 ** get_address_of_U3CyU3Ek__BackingField_29() { return &___U3CyU3Ek__BackingField_29; }
	inline void set_U3CyU3Ek__BackingField_29(AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * value)
	{
		___U3CyU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CyU3Ek__BackingField_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3CzU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718, ___U3CzU3Ek__BackingField_30)); }
	inline AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * get_U3CzU3Ek__BackingField_30() const { return ___U3CzU3Ek__BackingField_30; }
	inline AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 ** get_address_of_U3CzU3Ek__BackingField_30() { return &___U3CzU3Ek__BackingField_30; }
	inline void set_U3CzU3Ek__BackingField_30(AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * value)
	{
		___U3CzU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CzU3Ek__BackingField_30), (void*)value);
	}
};


// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E  : public AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61
{
public:
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::pressPoint
	float ___pressPoint_39;

public:
	inline static int32_t get_offset_of_pressPoint_39() { return static_cast<int32_t>(offsetof(ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E, ___pressPoint_39)); }
	inline float get_pressPoint_39() const { return ___pressPoint_39; }
	inline float* get_address_of_pressPoint_39() { return &___pressPoint_39; }
	inline void set_pressPoint_39(float value)
	{
		___pressPoint_39 = value;
	}
};


// UnityEngine.InputSystem.XR.XRController
struct XRController_t3786F06F6CA867377708D84F3C9F243136EF482E  : public TrackedDevice_tA2A2B9299E780C26BF0F812E6493BD90029ACFD3
{
public:

public:
};


// UnityEngine.InputSystem.XR.XRHMD
struct XRHMD_t878DAFA36F392EAE743A0A73CA4DDC0604128CF5  : public TrackedDevice_tA2A2B9299E780C26BF0F812E6493BD90029ACFD3
{
public:
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.InputSystem.XR.XRHMD::<leftEyePosition>k__BackingField
	Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___U3CleftEyePositionU3Ek__BackingField_48;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.InputSystem.XR.XRHMD::<leftEyeRotation>k__BackingField
	QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * ___U3CleftEyeRotationU3Ek__BackingField_49;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.InputSystem.XR.XRHMD::<rightEyePosition>k__BackingField
	Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___U3CrightEyePositionU3Ek__BackingField_50;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.InputSystem.XR.XRHMD::<rightEyeRotation>k__BackingField
	QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * ___U3CrightEyeRotationU3Ek__BackingField_51;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.InputSystem.XR.XRHMD::<centerEyePosition>k__BackingField
	Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___U3CcenterEyePositionU3Ek__BackingField_52;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.InputSystem.XR.XRHMD::<centerEyeRotation>k__BackingField
	QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * ___U3CcenterEyeRotationU3Ek__BackingField_53;

public:
	inline static int32_t get_offset_of_U3CleftEyePositionU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(XRHMD_t878DAFA36F392EAE743A0A73CA4DDC0604128CF5, ___U3CleftEyePositionU3Ek__BackingField_48)); }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * get_U3CleftEyePositionU3Ek__BackingField_48() const { return ___U3CleftEyePositionU3Ek__BackingField_48; }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 ** get_address_of_U3CleftEyePositionU3Ek__BackingField_48() { return &___U3CleftEyePositionU3Ek__BackingField_48; }
	inline void set_U3CleftEyePositionU3Ek__BackingField_48(Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * value)
	{
		___U3CleftEyePositionU3Ek__BackingField_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleftEyePositionU3Ek__BackingField_48), (void*)value);
	}

	inline static int32_t get_offset_of_U3CleftEyeRotationU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(XRHMD_t878DAFA36F392EAE743A0A73CA4DDC0604128CF5, ___U3CleftEyeRotationU3Ek__BackingField_49)); }
	inline QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * get_U3CleftEyeRotationU3Ek__BackingField_49() const { return ___U3CleftEyeRotationU3Ek__BackingField_49; }
	inline QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A ** get_address_of_U3CleftEyeRotationU3Ek__BackingField_49() { return &___U3CleftEyeRotationU3Ek__BackingField_49; }
	inline void set_U3CleftEyeRotationU3Ek__BackingField_49(QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * value)
	{
		___U3CleftEyeRotationU3Ek__BackingField_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleftEyeRotationU3Ek__BackingField_49), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrightEyePositionU3Ek__BackingField_50() { return static_cast<int32_t>(offsetof(XRHMD_t878DAFA36F392EAE743A0A73CA4DDC0604128CF5, ___U3CrightEyePositionU3Ek__BackingField_50)); }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * get_U3CrightEyePositionU3Ek__BackingField_50() const { return ___U3CrightEyePositionU3Ek__BackingField_50; }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 ** get_address_of_U3CrightEyePositionU3Ek__BackingField_50() { return &___U3CrightEyePositionU3Ek__BackingField_50; }
	inline void set_U3CrightEyePositionU3Ek__BackingField_50(Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * value)
	{
		___U3CrightEyePositionU3Ek__BackingField_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrightEyePositionU3Ek__BackingField_50), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrightEyeRotationU3Ek__BackingField_51() { return static_cast<int32_t>(offsetof(XRHMD_t878DAFA36F392EAE743A0A73CA4DDC0604128CF5, ___U3CrightEyeRotationU3Ek__BackingField_51)); }
	inline QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * get_U3CrightEyeRotationU3Ek__BackingField_51() const { return ___U3CrightEyeRotationU3Ek__BackingField_51; }
	inline QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A ** get_address_of_U3CrightEyeRotationU3Ek__BackingField_51() { return &___U3CrightEyeRotationU3Ek__BackingField_51; }
	inline void set_U3CrightEyeRotationU3Ek__BackingField_51(QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * value)
	{
		___U3CrightEyeRotationU3Ek__BackingField_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrightEyeRotationU3Ek__BackingField_51), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcenterEyePositionU3Ek__BackingField_52() { return static_cast<int32_t>(offsetof(XRHMD_t878DAFA36F392EAE743A0A73CA4DDC0604128CF5, ___U3CcenterEyePositionU3Ek__BackingField_52)); }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * get_U3CcenterEyePositionU3Ek__BackingField_52() const { return ___U3CcenterEyePositionU3Ek__BackingField_52; }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 ** get_address_of_U3CcenterEyePositionU3Ek__BackingField_52() { return &___U3CcenterEyePositionU3Ek__BackingField_52; }
	inline void set_U3CcenterEyePositionU3Ek__BackingField_52(Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * value)
	{
		___U3CcenterEyePositionU3Ek__BackingField_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcenterEyePositionU3Ek__BackingField_52), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcenterEyeRotationU3Ek__BackingField_53() { return static_cast<int32_t>(offsetof(XRHMD_t878DAFA36F392EAE743A0A73CA4DDC0604128CF5, ___U3CcenterEyeRotationU3Ek__BackingField_53)); }
	inline QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * get_U3CcenterEyeRotationU3Ek__BackingField_53() const { return ___U3CcenterEyeRotationU3Ek__BackingField_53; }
	inline QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A ** get_address_of_U3CcenterEyeRotationU3Ek__BackingField_53() { return &___U3CcenterEyeRotationU3Ek__BackingField_53; }
	inline void set_U3CcenterEyeRotationU3Ek__BackingField_53(QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * value)
	{
		___U3CcenterEyeRotationU3Ek__BackingField_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcenterEyeRotationU3Ek__BackingField_53), (void*)value);
	}
};


// Unity.XR.Oculus.Input.GearVRTrackedController
struct GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D  : public XRController_t3786F06F6CA867377708D84F3C9F243136EF482E
{
public:
	// UnityEngine.InputSystem.Controls.Vector2Control Unity.XR.Oculus.Input.GearVRTrackedController::<touchpad>k__BackingField
	Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * ___U3CtouchpadU3Ek__BackingField_48;
	// UnityEngine.InputSystem.Controls.AxisControl Unity.XR.Oculus.Input.GearVRTrackedController::<trigger>k__BackingField
	AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * ___U3CtriggerU3Ek__BackingField_49;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.GearVRTrackedController::<back>k__BackingField
	ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___U3CbackU3Ek__BackingField_50;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.GearVRTrackedController::<triggerPressed>k__BackingField
	ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___U3CtriggerPressedU3Ek__BackingField_51;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.GearVRTrackedController::<touchpadClicked>k__BackingField
	ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___U3CtouchpadClickedU3Ek__BackingField_52;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.GearVRTrackedController::<touchpadTouched>k__BackingField
	ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___U3CtouchpadTouchedU3Ek__BackingField_53;
	// UnityEngine.InputSystem.Controls.IntegerControl Unity.XR.Oculus.Input.GearVRTrackedController::<trackingState>k__BackingField
	IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * ___U3CtrackingStateU3Ek__BackingField_54;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.GearVRTrackedController::<isTracked>k__BackingField
	ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___U3CisTrackedU3Ek__BackingField_55;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.GearVRTrackedController::<devicePosition>k__BackingField
	Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___U3CdevicePositionU3Ek__BackingField_56;
	// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.GearVRTrackedController::<deviceRotation>k__BackingField
	QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * ___U3CdeviceRotationU3Ek__BackingField_57;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.GearVRTrackedController::<deviceAngularVelocity>k__BackingField
	Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___U3CdeviceAngularVelocityU3Ek__BackingField_58;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.GearVRTrackedController::<deviceAcceleration>k__BackingField
	Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___U3CdeviceAccelerationU3Ek__BackingField_59;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.GearVRTrackedController::<deviceAngularAcceleration>k__BackingField
	Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___U3CdeviceAngularAccelerationU3Ek__BackingField_60;

public:
	inline static int32_t get_offset_of_U3CtouchpadU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CtouchpadU3Ek__BackingField_48)); }
	inline Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * get_U3CtouchpadU3Ek__BackingField_48() const { return ___U3CtouchpadU3Ek__BackingField_48; }
	inline Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 ** get_address_of_U3CtouchpadU3Ek__BackingField_48() { return &___U3CtouchpadU3Ek__BackingField_48; }
	inline void set_U3CtouchpadU3Ek__BackingField_48(Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * value)
	{
		___U3CtouchpadU3Ek__BackingField_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtouchpadU3Ek__BackingField_48), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtriggerU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CtriggerU3Ek__BackingField_49)); }
	inline AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * get_U3CtriggerU3Ek__BackingField_49() const { return ___U3CtriggerU3Ek__BackingField_49; }
	inline AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 ** get_address_of_U3CtriggerU3Ek__BackingField_49() { return &___U3CtriggerU3Ek__BackingField_49; }
	inline void set_U3CtriggerU3Ek__BackingField_49(AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * value)
	{
		___U3CtriggerU3Ek__BackingField_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtriggerU3Ek__BackingField_49), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbackU3Ek__BackingField_50() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CbackU3Ek__BackingField_50)); }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * get_U3CbackU3Ek__BackingField_50() const { return ___U3CbackU3Ek__BackingField_50; }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E ** get_address_of_U3CbackU3Ek__BackingField_50() { return &___U3CbackU3Ek__BackingField_50; }
	inline void set_U3CbackU3Ek__BackingField_50(ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * value)
	{
		___U3CbackU3Ek__BackingField_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbackU3Ek__BackingField_50), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtriggerPressedU3Ek__BackingField_51() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CtriggerPressedU3Ek__BackingField_51)); }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * get_U3CtriggerPressedU3Ek__BackingField_51() const { return ___U3CtriggerPressedU3Ek__BackingField_51; }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E ** get_address_of_U3CtriggerPressedU3Ek__BackingField_51() { return &___U3CtriggerPressedU3Ek__BackingField_51; }
	inline void set_U3CtriggerPressedU3Ek__BackingField_51(ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * value)
	{
		___U3CtriggerPressedU3Ek__BackingField_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtriggerPressedU3Ek__BackingField_51), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtouchpadClickedU3Ek__BackingField_52() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CtouchpadClickedU3Ek__BackingField_52)); }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * get_U3CtouchpadClickedU3Ek__BackingField_52() const { return ___U3CtouchpadClickedU3Ek__BackingField_52; }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E ** get_address_of_U3CtouchpadClickedU3Ek__BackingField_52() { return &___U3CtouchpadClickedU3Ek__BackingField_52; }
	inline void set_U3CtouchpadClickedU3Ek__BackingField_52(ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * value)
	{
		___U3CtouchpadClickedU3Ek__BackingField_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtouchpadClickedU3Ek__BackingField_52), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtouchpadTouchedU3Ek__BackingField_53() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CtouchpadTouchedU3Ek__BackingField_53)); }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * get_U3CtouchpadTouchedU3Ek__BackingField_53() const { return ___U3CtouchpadTouchedU3Ek__BackingField_53; }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E ** get_address_of_U3CtouchpadTouchedU3Ek__BackingField_53() { return &___U3CtouchpadTouchedU3Ek__BackingField_53; }
	inline void set_U3CtouchpadTouchedU3Ek__BackingField_53(ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * value)
	{
		___U3CtouchpadTouchedU3Ek__BackingField_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtouchpadTouchedU3Ek__BackingField_53), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtrackingStateU3Ek__BackingField_54() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CtrackingStateU3Ek__BackingField_54)); }
	inline IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * get_U3CtrackingStateU3Ek__BackingField_54() const { return ___U3CtrackingStateU3Ek__BackingField_54; }
	inline IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 ** get_address_of_U3CtrackingStateU3Ek__BackingField_54() { return &___U3CtrackingStateU3Ek__BackingField_54; }
	inline void set_U3CtrackingStateU3Ek__BackingField_54(IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * value)
	{
		___U3CtrackingStateU3Ek__BackingField_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackingStateU3Ek__BackingField_54), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisTrackedU3Ek__BackingField_55() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CisTrackedU3Ek__BackingField_55)); }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * get_U3CisTrackedU3Ek__BackingField_55() const { return ___U3CisTrackedU3Ek__BackingField_55; }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E ** get_address_of_U3CisTrackedU3Ek__BackingField_55() { return &___U3CisTrackedU3Ek__BackingField_55; }
	inline void set_U3CisTrackedU3Ek__BackingField_55(ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * value)
	{
		___U3CisTrackedU3Ek__BackingField_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CisTrackedU3Ek__BackingField_55), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdevicePositionU3Ek__BackingField_56() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CdevicePositionU3Ek__BackingField_56)); }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * get_U3CdevicePositionU3Ek__BackingField_56() const { return ___U3CdevicePositionU3Ek__BackingField_56; }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 ** get_address_of_U3CdevicePositionU3Ek__BackingField_56() { return &___U3CdevicePositionU3Ek__BackingField_56; }
	inline void set_U3CdevicePositionU3Ek__BackingField_56(Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * value)
	{
		___U3CdevicePositionU3Ek__BackingField_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdevicePositionU3Ek__BackingField_56), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceRotationU3Ek__BackingField_57() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CdeviceRotationU3Ek__BackingField_57)); }
	inline QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * get_U3CdeviceRotationU3Ek__BackingField_57() const { return ___U3CdeviceRotationU3Ek__BackingField_57; }
	inline QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A ** get_address_of_U3CdeviceRotationU3Ek__BackingField_57() { return &___U3CdeviceRotationU3Ek__BackingField_57; }
	inline void set_U3CdeviceRotationU3Ek__BackingField_57(QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * value)
	{
		___U3CdeviceRotationU3Ek__BackingField_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceRotationU3Ek__BackingField_57), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceAngularVelocityU3Ek__BackingField_58() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CdeviceAngularVelocityU3Ek__BackingField_58)); }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * get_U3CdeviceAngularVelocityU3Ek__BackingField_58() const { return ___U3CdeviceAngularVelocityU3Ek__BackingField_58; }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 ** get_address_of_U3CdeviceAngularVelocityU3Ek__BackingField_58() { return &___U3CdeviceAngularVelocityU3Ek__BackingField_58; }
	inline void set_U3CdeviceAngularVelocityU3Ek__BackingField_58(Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * value)
	{
		___U3CdeviceAngularVelocityU3Ek__BackingField_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceAngularVelocityU3Ek__BackingField_58), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceAccelerationU3Ek__BackingField_59() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CdeviceAccelerationU3Ek__BackingField_59)); }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * get_U3CdeviceAccelerationU3Ek__BackingField_59() const { return ___U3CdeviceAccelerationU3Ek__BackingField_59; }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 ** get_address_of_U3CdeviceAccelerationU3Ek__BackingField_59() { return &___U3CdeviceAccelerationU3Ek__BackingField_59; }
	inline void set_U3CdeviceAccelerationU3Ek__BackingField_59(Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * value)
	{
		___U3CdeviceAccelerationU3Ek__BackingField_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceAccelerationU3Ek__BackingField_59), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceAngularAccelerationU3Ek__BackingField_60() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CdeviceAngularAccelerationU3Ek__BackingField_60)); }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * get_U3CdeviceAngularAccelerationU3Ek__BackingField_60() const { return ___U3CdeviceAngularAccelerationU3Ek__BackingField_60; }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 ** get_address_of_U3CdeviceAngularAccelerationU3Ek__BackingField_60() { return &___U3CdeviceAngularAccelerationU3Ek__BackingField_60; }
	inline void set_U3CdeviceAngularAccelerationU3Ek__BackingField_60(Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * value)
	{
		___U3CdeviceAngularAccelerationU3Ek__BackingField_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceAngularAccelerationU3Ek__BackingField_60), (void*)value);
	}
};


// Unity.XR.Oculus.Input.OculusHMD
struct OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A  : public XRHMD_t878DAFA36F392EAE743A0A73CA4DDC0604128CF5
{
public:
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusHMD::<userPresence>k__BackingField
	ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___U3CuserPresenceU3Ek__BackingField_54;
	// UnityEngine.InputSystem.Controls.IntegerControl Unity.XR.Oculus.Input.OculusHMD::<trackingState>k__BackingField
	IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * ___U3CtrackingStateU3Ek__BackingField_55;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusHMD::<isTracked>k__BackingField
	ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___U3CisTrackedU3Ek__BackingField_56;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<devicePosition>k__BackingField
	Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___U3CdevicePositionU3Ek__BackingField_57;
	// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.OculusHMD::<deviceRotation>k__BackingField
	QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * ___U3CdeviceRotationU3Ek__BackingField_58;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<deviceAngularVelocity>k__BackingField
	Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___U3CdeviceAngularVelocityU3Ek__BackingField_59;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<deviceAcceleration>k__BackingField
	Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___U3CdeviceAccelerationU3Ek__BackingField_60;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<deviceAngularAcceleration>k__BackingField
	Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___U3CdeviceAngularAccelerationU3Ek__BackingField_61;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<leftEyePosition>k__BackingField
	Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___U3CleftEyePositionU3Ek__BackingField_62;
	// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.OculusHMD::<leftEyeRotation>k__BackingField
	QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * ___U3CleftEyeRotationU3Ek__BackingField_63;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<leftEyeAngularVelocity>k__BackingField
	Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___U3CleftEyeAngularVelocityU3Ek__BackingField_64;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<leftEyeAcceleration>k__BackingField
	Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___U3CleftEyeAccelerationU3Ek__BackingField_65;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<leftEyeAngularAcceleration>k__BackingField
	Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___U3CleftEyeAngularAccelerationU3Ek__BackingField_66;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<rightEyePosition>k__BackingField
	Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___U3CrightEyePositionU3Ek__BackingField_67;
	// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.OculusHMD::<rightEyeRotation>k__BackingField
	QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * ___U3CrightEyeRotationU3Ek__BackingField_68;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<rightEyeAngularVelocity>k__BackingField
	Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___U3CrightEyeAngularVelocityU3Ek__BackingField_69;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<rightEyeAcceleration>k__BackingField
	Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___U3CrightEyeAccelerationU3Ek__BackingField_70;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<rightEyeAngularAcceleration>k__BackingField
	Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___U3CrightEyeAngularAccelerationU3Ek__BackingField_71;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<centerEyePosition>k__BackingField
	Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___U3CcenterEyePositionU3Ek__BackingField_72;
	// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.OculusHMD::<centerEyeRotation>k__BackingField
	QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * ___U3CcenterEyeRotationU3Ek__BackingField_73;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<centerEyeAngularVelocity>k__BackingField
	Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___U3CcenterEyeAngularVelocityU3Ek__BackingField_74;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<centerEyeAcceleration>k__BackingField
	Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___U3CcenterEyeAccelerationU3Ek__BackingField_75;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<centerEyeAngularAcceleration>k__BackingField
	Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___U3CcenterEyeAngularAccelerationU3Ek__BackingField_76;

public:
	inline static int32_t get_offset_of_U3CuserPresenceU3Ek__BackingField_54() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CuserPresenceU3Ek__BackingField_54)); }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * get_U3CuserPresenceU3Ek__BackingField_54() const { return ___U3CuserPresenceU3Ek__BackingField_54; }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E ** get_address_of_U3CuserPresenceU3Ek__BackingField_54() { return &___U3CuserPresenceU3Ek__BackingField_54; }
	inline void set_U3CuserPresenceU3Ek__BackingField_54(ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * value)
	{
		___U3CuserPresenceU3Ek__BackingField_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CuserPresenceU3Ek__BackingField_54), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtrackingStateU3Ek__BackingField_55() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CtrackingStateU3Ek__BackingField_55)); }
	inline IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * get_U3CtrackingStateU3Ek__BackingField_55() const { return ___U3CtrackingStateU3Ek__BackingField_55; }
	inline IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 ** get_address_of_U3CtrackingStateU3Ek__BackingField_55() { return &___U3CtrackingStateU3Ek__BackingField_55; }
	inline void set_U3CtrackingStateU3Ek__BackingField_55(IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * value)
	{
		___U3CtrackingStateU3Ek__BackingField_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackingStateU3Ek__BackingField_55), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisTrackedU3Ek__BackingField_56() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CisTrackedU3Ek__BackingField_56)); }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * get_U3CisTrackedU3Ek__BackingField_56() const { return ___U3CisTrackedU3Ek__BackingField_56; }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E ** get_address_of_U3CisTrackedU3Ek__BackingField_56() { return &___U3CisTrackedU3Ek__BackingField_56; }
	inline void set_U3CisTrackedU3Ek__BackingField_56(ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * value)
	{
		___U3CisTrackedU3Ek__BackingField_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CisTrackedU3Ek__BackingField_56), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdevicePositionU3Ek__BackingField_57() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CdevicePositionU3Ek__BackingField_57)); }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * get_U3CdevicePositionU3Ek__BackingField_57() const { return ___U3CdevicePositionU3Ek__BackingField_57; }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 ** get_address_of_U3CdevicePositionU3Ek__BackingField_57() { return &___U3CdevicePositionU3Ek__BackingField_57; }
	inline void set_U3CdevicePositionU3Ek__BackingField_57(Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * value)
	{
		___U3CdevicePositionU3Ek__BackingField_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdevicePositionU3Ek__BackingField_57), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceRotationU3Ek__BackingField_58() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CdeviceRotationU3Ek__BackingField_58)); }
	inline QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * get_U3CdeviceRotationU3Ek__BackingField_58() const { return ___U3CdeviceRotationU3Ek__BackingField_58; }
	inline QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A ** get_address_of_U3CdeviceRotationU3Ek__BackingField_58() { return &___U3CdeviceRotationU3Ek__BackingField_58; }
	inline void set_U3CdeviceRotationU3Ek__BackingField_58(QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * value)
	{
		___U3CdeviceRotationU3Ek__BackingField_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceRotationU3Ek__BackingField_58), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceAngularVelocityU3Ek__BackingField_59() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CdeviceAngularVelocityU3Ek__BackingField_59)); }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * get_U3CdeviceAngularVelocityU3Ek__BackingField_59() const { return ___U3CdeviceAngularVelocityU3Ek__BackingField_59; }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 ** get_address_of_U3CdeviceAngularVelocityU3Ek__BackingField_59() { return &___U3CdeviceAngularVelocityU3Ek__BackingField_59; }
	inline void set_U3CdeviceAngularVelocityU3Ek__BackingField_59(Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * value)
	{
		___U3CdeviceAngularVelocityU3Ek__BackingField_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceAngularVelocityU3Ek__BackingField_59), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceAccelerationU3Ek__BackingField_60() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CdeviceAccelerationU3Ek__BackingField_60)); }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * get_U3CdeviceAccelerationU3Ek__BackingField_60() const { return ___U3CdeviceAccelerationU3Ek__BackingField_60; }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 ** get_address_of_U3CdeviceAccelerationU3Ek__BackingField_60() { return &___U3CdeviceAccelerationU3Ek__BackingField_60; }
	inline void set_U3CdeviceAccelerationU3Ek__BackingField_60(Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * value)
	{
		___U3CdeviceAccelerationU3Ek__BackingField_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceAccelerationU3Ek__BackingField_60), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceAngularAccelerationU3Ek__BackingField_61() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CdeviceAngularAccelerationU3Ek__BackingField_61)); }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * get_U3CdeviceAngularAccelerationU3Ek__BackingField_61() const { return ___U3CdeviceAngularAccelerationU3Ek__BackingField_61; }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 ** get_address_of_U3CdeviceAngularAccelerationU3Ek__BackingField_61() { return &___U3CdeviceAngularAccelerationU3Ek__BackingField_61; }
	inline void set_U3CdeviceAngularAccelerationU3Ek__BackingField_61(Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * value)
	{
		___U3CdeviceAngularAccelerationU3Ek__BackingField_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceAngularAccelerationU3Ek__BackingField_61), (void*)value);
	}

	inline static int32_t get_offset_of_U3CleftEyePositionU3Ek__BackingField_62() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CleftEyePositionU3Ek__BackingField_62)); }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * get_U3CleftEyePositionU3Ek__BackingField_62() const { return ___U3CleftEyePositionU3Ek__BackingField_62; }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 ** get_address_of_U3CleftEyePositionU3Ek__BackingField_62() { return &___U3CleftEyePositionU3Ek__BackingField_62; }
	inline void set_U3CleftEyePositionU3Ek__BackingField_62(Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * value)
	{
		___U3CleftEyePositionU3Ek__BackingField_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleftEyePositionU3Ek__BackingField_62), (void*)value);
	}

	inline static int32_t get_offset_of_U3CleftEyeRotationU3Ek__BackingField_63() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CleftEyeRotationU3Ek__BackingField_63)); }
	inline QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * get_U3CleftEyeRotationU3Ek__BackingField_63() const { return ___U3CleftEyeRotationU3Ek__BackingField_63; }
	inline QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A ** get_address_of_U3CleftEyeRotationU3Ek__BackingField_63() { return &___U3CleftEyeRotationU3Ek__BackingField_63; }
	inline void set_U3CleftEyeRotationU3Ek__BackingField_63(QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * value)
	{
		___U3CleftEyeRotationU3Ek__BackingField_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleftEyeRotationU3Ek__BackingField_63), (void*)value);
	}

	inline static int32_t get_offset_of_U3CleftEyeAngularVelocityU3Ek__BackingField_64() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CleftEyeAngularVelocityU3Ek__BackingField_64)); }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * get_U3CleftEyeAngularVelocityU3Ek__BackingField_64() const { return ___U3CleftEyeAngularVelocityU3Ek__BackingField_64; }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 ** get_address_of_U3CleftEyeAngularVelocityU3Ek__BackingField_64() { return &___U3CleftEyeAngularVelocityU3Ek__BackingField_64; }
	inline void set_U3CleftEyeAngularVelocityU3Ek__BackingField_64(Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * value)
	{
		___U3CleftEyeAngularVelocityU3Ek__BackingField_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleftEyeAngularVelocityU3Ek__BackingField_64), (void*)value);
	}

	inline static int32_t get_offset_of_U3CleftEyeAccelerationU3Ek__BackingField_65() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CleftEyeAccelerationU3Ek__BackingField_65)); }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * get_U3CleftEyeAccelerationU3Ek__BackingField_65() const { return ___U3CleftEyeAccelerationU3Ek__BackingField_65; }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 ** get_address_of_U3CleftEyeAccelerationU3Ek__BackingField_65() { return &___U3CleftEyeAccelerationU3Ek__BackingField_65; }
	inline void set_U3CleftEyeAccelerationU3Ek__BackingField_65(Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * value)
	{
		___U3CleftEyeAccelerationU3Ek__BackingField_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleftEyeAccelerationU3Ek__BackingField_65), (void*)value);
	}

	inline static int32_t get_offset_of_U3CleftEyeAngularAccelerationU3Ek__BackingField_66() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CleftEyeAngularAccelerationU3Ek__BackingField_66)); }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * get_U3CleftEyeAngularAccelerationU3Ek__BackingField_66() const { return ___U3CleftEyeAngularAccelerationU3Ek__BackingField_66; }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 ** get_address_of_U3CleftEyeAngularAccelerationU3Ek__BackingField_66() { return &___U3CleftEyeAngularAccelerationU3Ek__BackingField_66; }
	inline void set_U3CleftEyeAngularAccelerationU3Ek__BackingField_66(Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * value)
	{
		___U3CleftEyeAngularAccelerationU3Ek__BackingField_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleftEyeAngularAccelerationU3Ek__BackingField_66), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrightEyePositionU3Ek__BackingField_67() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CrightEyePositionU3Ek__BackingField_67)); }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * get_U3CrightEyePositionU3Ek__BackingField_67() const { return ___U3CrightEyePositionU3Ek__BackingField_67; }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 ** get_address_of_U3CrightEyePositionU3Ek__BackingField_67() { return &___U3CrightEyePositionU3Ek__BackingField_67; }
	inline void set_U3CrightEyePositionU3Ek__BackingField_67(Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * value)
	{
		___U3CrightEyePositionU3Ek__BackingField_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrightEyePositionU3Ek__BackingField_67), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrightEyeRotationU3Ek__BackingField_68() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CrightEyeRotationU3Ek__BackingField_68)); }
	inline QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * get_U3CrightEyeRotationU3Ek__BackingField_68() const { return ___U3CrightEyeRotationU3Ek__BackingField_68; }
	inline QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A ** get_address_of_U3CrightEyeRotationU3Ek__BackingField_68() { return &___U3CrightEyeRotationU3Ek__BackingField_68; }
	inline void set_U3CrightEyeRotationU3Ek__BackingField_68(QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * value)
	{
		___U3CrightEyeRotationU3Ek__BackingField_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrightEyeRotationU3Ek__BackingField_68), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrightEyeAngularVelocityU3Ek__BackingField_69() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CrightEyeAngularVelocityU3Ek__BackingField_69)); }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * get_U3CrightEyeAngularVelocityU3Ek__BackingField_69() const { return ___U3CrightEyeAngularVelocityU3Ek__BackingField_69; }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 ** get_address_of_U3CrightEyeAngularVelocityU3Ek__BackingField_69() { return &___U3CrightEyeAngularVelocityU3Ek__BackingField_69; }
	inline void set_U3CrightEyeAngularVelocityU3Ek__BackingField_69(Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * value)
	{
		___U3CrightEyeAngularVelocityU3Ek__BackingField_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrightEyeAngularVelocityU3Ek__BackingField_69), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrightEyeAccelerationU3Ek__BackingField_70() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CrightEyeAccelerationU3Ek__BackingField_70)); }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * get_U3CrightEyeAccelerationU3Ek__BackingField_70() const { return ___U3CrightEyeAccelerationU3Ek__BackingField_70; }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 ** get_address_of_U3CrightEyeAccelerationU3Ek__BackingField_70() { return &___U3CrightEyeAccelerationU3Ek__BackingField_70; }
	inline void set_U3CrightEyeAccelerationU3Ek__BackingField_70(Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * value)
	{
		___U3CrightEyeAccelerationU3Ek__BackingField_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrightEyeAccelerationU3Ek__BackingField_70), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrightEyeAngularAccelerationU3Ek__BackingField_71() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CrightEyeAngularAccelerationU3Ek__BackingField_71)); }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * get_U3CrightEyeAngularAccelerationU3Ek__BackingField_71() const { return ___U3CrightEyeAngularAccelerationU3Ek__BackingField_71; }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 ** get_address_of_U3CrightEyeAngularAccelerationU3Ek__BackingField_71() { return &___U3CrightEyeAngularAccelerationU3Ek__BackingField_71; }
	inline void set_U3CrightEyeAngularAccelerationU3Ek__BackingField_71(Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * value)
	{
		___U3CrightEyeAngularAccelerationU3Ek__BackingField_71 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrightEyeAngularAccelerationU3Ek__BackingField_71), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcenterEyePositionU3Ek__BackingField_72() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CcenterEyePositionU3Ek__BackingField_72)); }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * get_U3CcenterEyePositionU3Ek__BackingField_72() const { return ___U3CcenterEyePositionU3Ek__BackingField_72; }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 ** get_address_of_U3CcenterEyePositionU3Ek__BackingField_72() { return &___U3CcenterEyePositionU3Ek__BackingField_72; }
	inline void set_U3CcenterEyePositionU3Ek__BackingField_72(Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * value)
	{
		___U3CcenterEyePositionU3Ek__BackingField_72 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcenterEyePositionU3Ek__BackingField_72), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcenterEyeRotationU3Ek__BackingField_73() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CcenterEyeRotationU3Ek__BackingField_73)); }
	inline QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * get_U3CcenterEyeRotationU3Ek__BackingField_73() const { return ___U3CcenterEyeRotationU3Ek__BackingField_73; }
	inline QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A ** get_address_of_U3CcenterEyeRotationU3Ek__BackingField_73() { return &___U3CcenterEyeRotationU3Ek__BackingField_73; }
	inline void set_U3CcenterEyeRotationU3Ek__BackingField_73(QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * value)
	{
		___U3CcenterEyeRotationU3Ek__BackingField_73 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcenterEyeRotationU3Ek__BackingField_73), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcenterEyeAngularVelocityU3Ek__BackingField_74() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CcenterEyeAngularVelocityU3Ek__BackingField_74)); }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * get_U3CcenterEyeAngularVelocityU3Ek__BackingField_74() const { return ___U3CcenterEyeAngularVelocityU3Ek__BackingField_74; }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 ** get_address_of_U3CcenterEyeAngularVelocityU3Ek__BackingField_74() { return &___U3CcenterEyeAngularVelocityU3Ek__BackingField_74; }
	inline void set_U3CcenterEyeAngularVelocityU3Ek__BackingField_74(Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * value)
	{
		___U3CcenterEyeAngularVelocityU3Ek__BackingField_74 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcenterEyeAngularVelocityU3Ek__BackingField_74), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcenterEyeAccelerationU3Ek__BackingField_75() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CcenterEyeAccelerationU3Ek__BackingField_75)); }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * get_U3CcenterEyeAccelerationU3Ek__BackingField_75() const { return ___U3CcenterEyeAccelerationU3Ek__BackingField_75; }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 ** get_address_of_U3CcenterEyeAccelerationU3Ek__BackingField_75() { return &___U3CcenterEyeAccelerationU3Ek__BackingField_75; }
	inline void set_U3CcenterEyeAccelerationU3Ek__BackingField_75(Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * value)
	{
		___U3CcenterEyeAccelerationU3Ek__BackingField_75 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcenterEyeAccelerationU3Ek__BackingField_75), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcenterEyeAngularAccelerationU3Ek__BackingField_76() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CcenterEyeAngularAccelerationU3Ek__BackingField_76)); }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * get_U3CcenterEyeAngularAccelerationU3Ek__BackingField_76() const { return ___U3CcenterEyeAngularAccelerationU3Ek__BackingField_76; }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 ** get_address_of_U3CcenterEyeAngularAccelerationU3Ek__BackingField_76() { return &___U3CcenterEyeAngularAccelerationU3Ek__BackingField_76; }
	inline void set_U3CcenterEyeAngularAccelerationU3Ek__BackingField_76(Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * value)
	{
		___U3CcenterEyeAngularAccelerationU3Ek__BackingField_76 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcenterEyeAngularAccelerationU3Ek__BackingField_76), (void*)value);
	}
};


// UnityEngine.InputSystem.XR.XRControllerWithRumble
struct XRControllerWithRumble_tFBD01C9D685DD1E6E662FCF8066F11274AA0ABA8  : public XRController_t3786F06F6CA867377708D84F3C9F243136EF482E
{
public:

public:
};


// Unity.XR.Oculus.Input.OculusGoController
struct OculusGoController_tE3AB6FC9374A8DB24CFA9AB6592CB6235F6AB21B  : public GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D
{
public:

public:
};


// Unity.XR.Oculus.Input.OculusHMDExtended
struct OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC  : public OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A
{
public:
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusHMDExtended::<back>k__BackingField
	ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___U3CbackU3Ek__BackingField_77;
	// UnityEngine.InputSystem.Controls.Vector2Control Unity.XR.Oculus.Input.OculusHMDExtended::<touchpad>k__BackingField
	Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * ___U3CtouchpadU3Ek__BackingField_78;

public:
	inline static int32_t get_offset_of_U3CbackU3Ek__BackingField_77() { return static_cast<int32_t>(offsetof(OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC, ___U3CbackU3Ek__BackingField_77)); }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * get_U3CbackU3Ek__BackingField_77() const { return ___U3CbackU3Ek__BackingField_77; }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E ** get_address_of_U3CbackU3Ek__BackingField_77() { return &___U3CbackU3Ek__BackingField_77; }
	inline void set_U3CbackU3Ek__BackingField_77(ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * value)
	{
		___U3CbackU3Ek__BackingField_77 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbackU3Ek__BackingField_77), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtouchpadU3Ek__BackingField_78() { return static_cast<int32_t>(offsetof(OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC, ___U3CtouchpadU3Ek__BackingField_78)); }
	inline Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * get_U3CtouchpadU3Ek__BackingField_78() const { return ___U3CtouchpadU3Ek__BackingField_78; }
	inline Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 ** get_address_of_U3CtouchpadU3Ek__BackingField_78() { return &___U3CtouchpadU3Ek__BackingField_78; }
	inline void set_U3CtouchpadU3Ek__BackingField_78(Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * value)
	{
		___U3CtouchpadU3Ek__BackingField_78 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtouchpadU3Ek__BackingField_78), (void*)value);
	}
};


// Unity.XR.Oculus.Input.OculusTouchController
struct OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA  : public XRControllerWithRumble_tFBD01C9D685DD1E6E662FCF8066F11274AA0ABA8
{
public:
	// UnityEngine.InputSystem.Controls.Vector2Control Unity.XR.Oculus.Input.OculusTouchController::<thumbstick>k__BackingField
	Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * ___U3CthumbstickU3Ek__BackingField_48;
	// UnityEngine.InputSystem.Controls.AxisControl Unity.XR.Oculus.Input.OculusTouchController::<trigger>k__BackingField
	AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * ___U3CtriggerU3Ek__BackingField_49;
	// UnityEngine.InputSystem.Controls.AxisControl Unity.XR.Oculus.Input.OculusTouchController::<grip>k__BackingField
	AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * ___U3CgripU3Ek__BackingField_50;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::<primaryButton>k__BackingField
	ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___U3CprimaryButtonU3Ek__BackingField_51;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::<secondaryButton>k__BackingField
	ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___U3CsecondaryButtonU3Ek__BackingField_52;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::<gripPressed>k__BackingField
	ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___U3CgripPressedU3Ek__BackingField_53;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::<start>k__BackingField
	ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___U3CstartU3Ek__BackingField_54;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::<thumbstickClicked>k__BackingField
	ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___U3CthumbstickClickedU3Ek__BackingField_55;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::<primaryTouched>k__BackingField
	ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___U3CprimaryTouchedU3Ek__BackingField_56;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::<secondaryTouched>k__BackingField
	ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___U3CsecondaryTouchedU3Ek__BackingField_57;
	// UnityEngine.InputSystem.Controls.AxisControl Unity.XR.Oculus.Input.OculusTouchController::<triggerTouched>k__BackingField
	AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * ___U3CtriggerTouchedU3Ek__BackingField_58;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::<triggerPressed>k__BackingField
	ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___U3CtriggerPressedU3Ek__BackingField_59;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::<thumbstickTouched>k__BackingField
	ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___U3CthumbstickTouchedU3Ek__BackingField_60;
	// UnityEngine.InputSystem.Controls.IntegerControl Unity.XR.Oculus.Input.OculusTouchController::<trackingState>k__BackingField
	IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * ___U3CtrackingStateU3Ek__BackingField_61;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::<isTracked>k__BackingField
	ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___U3CisTrackedU3Ek__BackingField_62;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusTouchController::<devicePosition>k__BackingField
	Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___U3CdevicePositionU3Ek__BackingField_63;
	// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.OculusTouchController::<deviceRotation>k__BackingField
	QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * ___U3CdeviceRotationU3Ek__BackingField_64;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusTouchController::<deviceVelocity>k__BackingField
	Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___U3CdeviceVelocityU3Ek__BackingField_65;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusTouchController::<deviceAngularVelocity>k__BackingField
	Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___U3CdeviceAngularVelocityU3Ek__BackingField_66;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusTouchController::<deviceAcceleration>k__BackingField
	Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___U3CdeviceAccelerationU3Ek__BackingField_67;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusTouchController::<deviceAngularAcceleration>k__BackingField
	Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___U3CdeviceAngularAccelerationU3Ek__BackingField_68;

public:
	inline static int32_t get_offset_of_U3CthumbstickU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CthumbstickU3Ek__BackingField_48)); }
	inline Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * get_U3CthumbstickU3Ek__BackingField_48() const { return ___U3CthumbstickU3Ek__BackingField_48; }
	inline Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 ** get_address_of_U3CthumbstickU3Ek__BackingField_48() { return &___U3CthumbstickU3Ek__BackingField_48; }
	inline void set_U3CthumbstickU3Ek__BackingField_48(Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * value)
	{
		___U3CthumbstickU3Ek__BackingField_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CthumbstickU3Ek__BackingField_48), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtriggerU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CtriggerU3Ek__BackingField_49)); }
	inline AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * get_U3CtriggerU3Ek__BackingField_49() const { return ___U3CtriggerU3Ek__BackingField_49; }
	inline AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 ** get_address_of_U3CtriggerU3Ek__BackingField_49() { return &___U3CtriggerU3Ek__BackingField_49; }
	inline void set_U3CtriggerU3Ek__BackingField_49(AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * value)
	{
		___U3CtriggerU3Ek__BackingField_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtriggerU3Ek__BackingField_49), (void*)value);
	}

	inline static int32_t get_offset_of_U3CgripU3Ek__BackingField_50() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CgripU3Ek__BackingField_50)); }
	inline AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * get_U3CgripU3Ek__BackingField_50() const { return ___U3CgripU3Ek__BackingField_50; }
	inline AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 ** get_address_of_U3CgripU3Ek__BackingField_50() { return &___U3CgripU3Ek__BackingField_50; }
	inline void set_U3CgripU3Ek__BackingField_50(AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * value)
	{
		___U3CgripU3Ek__BackingField_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgripU3Ek__BackingField_50), (void*)value);
	}

	inline static int32_t get_offset_of_U3CprimaryButtonU3Ek__BackingField_51() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CprimaryButtonU3Ek__BackingField_51)); }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * get_U3CprimaryButtonU3Ek__BackingField_51() const { return ___U3CprimaryButtonU3Ek__BackingField_51; }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E ** get_address_of_U3CprimaryButtonU3Ek__BackingField_51() { return &___U3CprimaryButtonU3Ek__BackingField_51; }
	inline void set_U3CprimaryButtonU3Ek__BackingField_51(ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * value)
	{
		___U3CprimaryButtonU3Ek__BackingField_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CprimaryButtonU3Ek__BackingField_51), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsecondaryButtonU3Ek__BackingField_52() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CsecondaryButtonU3Ek__BackingField_52)); }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * get_U3CsecondaryButtonU3Ek__BackingField_52() const { return ___U3CsecondaryButtonU3Ek__BackingField_52; }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E ** get_address_of_U3CsecondaryButtonU3Ek__BackingField_52() { return &___U3CsecondaryButtonU3Ek__BackingField_52; }
	inline void set_U3CsecondaryButtonU3Ek__BackingField_52(ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * value)
	{
		___U3CsecondaryButtonU3Ek__BackingField_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsecondaryButtonU3Ek__BackingField_52), (void*)value);
	}

	inline static int32_t get_offset_of_U3CgripPressedU3Ek__BackingField_53() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CgripPressedU3Ek__BackingField_53)); }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * get_U3CgripPressedU3Ek__BackingField_53() const { return ___U3CgripPressedU3Ek__BackingField_53; }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E ** get_address_of_U3CgripPressedU3Ek__BackingField_53() { return &___U3CgripPressedU3Ek__BackingField_53; }
	inline void set_U3CgripPressedU3Ek__BackingField_53(ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * value)
	{
		___U3CgripPressedU3Ek__BackingField_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgripPressedU3Ek__BackingField_53), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstartU3Ek__BackingField_54() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CstartU3Ek__BackingField_54)); }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * get_U3CstartU3Ek__BackingField_54() const { return ___U3CstartU3Ek__BackingField_54; }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E ** get_address_of_U3CstartU3Ek__BackingField_54() { return &___U3CstartU3Ek__BackingField_54; }
	inline void set_U3CstartU3Ek__BackingField_54(ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * value)
	{
		___U3CstartU3Ek__BackingField_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstartU3Ek__BackingField_54), (void*)value);
	}

	inline static int32_t get_offset_of_U3CthumbstickClickedU3Ek__BackingField_55() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CthumbstickClickedU3Ek__BackingField_55)); }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * get_U3CthumbstickClickedU3Ek__BackingField_55() const { return ___U3CthumbstickClickedU3Ek__BackingField_55; }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E ** get_address_of_U3CthumbstickClickedU3Ek__BackingField_55() { return &___U3CthumbstickClickedU3Ek__BackingField_55; }
	inline void set_U3CthumbstickClickedU3Ek__BackingField_55(ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * value)
	{
		___U3CthumbstickClickedU3Ek__BackingField_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CthumbstickClickedU3Ek__BackingField_55), (void*)value);
	}

	inline static int32_t get_offset_of_U3CprimaryTouchedU3Ek__BackingField_56() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CprimaryTouchedU3Ek__BackingField_56)); }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * get_U3CprimaryTouchedU3Ek__BackingField_56() const { return ___U3CprimaryTouchedU3Ek__BackingField_56; }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E ** get_address_of_U3CprimaryTouchedU3Ek__BackingField_56() { return &___U3CprimaryTouchedU3Ek__BackingField_56; }
	inline void set_U3CprimaryTouchedU3Ek__BackingField_56(ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * value)
	{
		___U3CprimaryTouchedU3Ek__BackingField_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CprimaryTouchedU3Ek__BackingField_56), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsecondaryTouchedU3Ek__BackingField_57() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CsecondaryTouchedU3Ek__BackingField_57)); }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * get_U3CsecondaryTouchedU3Ek__BackingField_57() const { return ___U3CsecondaryTouchedU3Ek__BackingField_57; }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E ** get_address_of_U3CsecondaryTouchedU3Ek__BackingField_57() { return &___U3CsecondaryTouchedU3Ek__BackingField_57; }
	inline void set_U3CsecondaryTouchedU3Ek__BackingField_57(ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * value)
	{
		___U3CsecondaryTouchedU3Ek__BackingField_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsecondaryTouchedU3Ek__BackingField_57), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtriggerTouchedU3Ek__BackingField_58() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CtriggerTouchedU3Ek__BackingField_58)); }
	inline AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * get_U3CtriggerTouchedU3Ek__BackingField_58() const { return ___U3CtriggerTouchedU3Ek__BackingField_58; }
	inline AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 ** get_address_of_U3CtriggerTouchedU3Ek__BackingField_58() { return &___U3CtriggerTouchedU3Ek__BackingField_58; }
	inline void set_U3CtriggerTouchedU3Ek__BackingField_58(AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * value)
	{
		___U3CtriggerTouchedU3Ek__BackingField_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtriggerTouchedU3Ek__BackingField_58), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtriggerPressedU3Ek__BackingField_59() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CtriggerPressedU3Ek__BackingField_59)); }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * get_U3CtriggerPressedU3Ek__BackingField_59() const { return ___U3CtriggerPressedU3Ek__BackingField_59; }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E ** get_address_of_U3CtriggerPressedU3Ek__BackingField_59() { return &___U3CtriggerPressedU3Ek__BackingField_59; }
	inline void set_U3CtriggerPressedU3Ek__BackingField_59(ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * value)
	{
		___U3CtriggerPressedU3Ek__BackingField_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtriggerPressedU3Ek__BackingField_59), (void*)value);
	}

	inline static int32_t get_offset_of_U3CthumbstickTouchedU3Ek__BackingField_60() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CthumbstickTouchedU3Ek__BackingField_60)); }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * get_U3CthumbstickTouchedU3Ek__BackingField_60() const { return ___U3CthumbstickTouchedU3Ek__BackingField_60; }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E ** get_address_of_U3CthumbstickTouchedU3Ek__BackingField_60() { return &___U3CthumbstickTouchedU3Ek__BackingField_60; }
	inline void set_U3CthumbstickTouchedU3Ek__BackingField_60(ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * value)
	{
		___U3CthumbstickTouchedU3Ek__BackingField_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CthumbstickTouchedU3Ek__BackingField_60), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtrackingStateU3Ek__BackingField_61() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CtrackingStateU3Ek__BackingField_61)); }
	inline IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * get_U3CtrackingStateU3Ek__BackingField_61() const { return ___U3CtrackingStateU3Ek__BackingField_61; }
	inline IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 ** get_address_of_U3CtrackingStateU3Ek__BackingField_61() { return &___U3CtrackingStateU3Ek__BackingField_61; }
	inline void set_U3CtrackingStateU3Ek__BackingField_61(IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * value)
	{
		___U3CtrackingStateU3Ek__BackingField_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackingStateU3Ek__BackingField_61), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisTrackedU3Ek__BackingField_62() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CisTrackedU3Ek__BackingField_62)); }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * get_U3CisTrackedU3Ek__BackingField_62() const { return ___U3CisTrackedU3Ek__BackingField_62; }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E ** get_address_of_U3CisTrackedU3Ek__BackingField_62() { return &___U3CisTrackedU3Ek__BackingField_62; }
	inline void set_U3CisTrackedU3Ek__BackingField_62(ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * value)
	{
		___U3CisTrackedU3Ek__BackingField_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CisTrackedU3Ek__BackingField_62), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdevicePositionU3Ek__BackingField_63() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CdevicePositionU3Ek__BackingField_63)); }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * get_U3CdevicePositionU3Ek__BackingField_63() const { return ___U3CdevicePositionU3Ek__BackingField_63; }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 ** get_address_of_U3CdevicePositionU3Ek__BackingField_63() { return &___U3CdevicePositionU3Ek__BackingField_63; }
	inline void set_U3CdevicePositionU3Ek__BackingField_63(Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * value)
	{
		___U3CdevicePositionU3Ek__BackingField_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdevicePositionU3Ek__BackingField_63), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceRotationU3Ek__BackingField_64() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CdeviceRotationU3Ek__BackingField_64)); }
	inline QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * get_U3CdeviceRotationU3Ek__BackingField_64() const { return ___U3CdeviceRotationU3Ek__BackingField_64; }
	inline QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A ** get_address_of_U3CdeviceRotationU3Ek__BackingField_64() { return &___U3CdeviceRotationU3Ek__BackingField_64; }
	inline void set_U3CdeviceRotationU3Ek__BackingField_64(QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * value)
	{
		___U3CdeviceRotationU3Ek__BackingField_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceRotationU3Ek__BackingField_64), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceVelocityU3Ek__BackingField_65() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CdeviceVelocityU3Ek__BackingField_65)); }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * get_U3CdeviceVelocityU3Ek__BackingField_65() const { return ___U3CdeviceVelocityU3Ek__BackingField_65; }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 ** get_address_of_U3CdeviceVelocityU3Ek__BackingField_65() { return &___U3CdeviceVelocityU3Ek__BackingField_65; }
	inline void set_U3CdeviceVelocityU3Ek__BackingField_65(Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * value)
	{
		___U3CdeviceVelocityU3Ek__BackingField_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceVelocityU3Ek__BackingField_65), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceAngularVelocityU3Ek__BackingField_66() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CdeviceAngularVelocityU3Ek__BackingField_66)); }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * get_U3CdeviceAngularVelocityU3Ek__BackingField_66() const { return ___U3CdeviceAngularVelocityU3Ek__BackingField_66; }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 ** get_address_of_U3CdeviceAngularVelocityU3Ek__BackingField_66() { return &___U3CdeviceAngularVelocityU3Ek__BackingField_66; }
	inline void set_U3CdeviceAngularVelocityU3Ek__BackingField_66(Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * value)
	{
		___U3CdeviceAngularVelocityU3Ek__BackingField_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceAngularVelocityU3Ek__BackingField_66), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceAccelerationU3Ek__BackingField_67() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CdeviceAccelerationU3Ek__BackingField_67)); }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * get_U3CdeviceAccelerationU3Ek__BackingField_67() const { return ___U3CdeviceAccelerationU3Ek__BackingField_67; }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 ** get_address_of_U3CdeviceAccelerationU3Ek__BackingField_67() { return &___U3CdeviceAccelerationU3Ek__BackingField_67; }
	inline void set_U3CdeviceAccelerationU3Ek__BackingField_67(Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * value)
	{
		___U3CdeviceAccelerationU3Ek__BackingField_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceAccelerationU3Ek__BackingField_67), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceAngularAccelerationU3Ek__BackingField_68() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CdeviceAngularAccelerationU3Ek__BackingField_68)); }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * get_U3CdeviceAngularAccelerationU3Ek__BackingField_68() const { return ___U3CdeviceAngularAccelerationU3Ek__BackingField_68; }
	inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 ** get_address_of_U3CdeviceAngularAccelerationU3Ek__BackingField_68() { return &___U3CdeviceAngularAccelerationU3Ek__BackingField_68; }
	inline void set_U3CdeviceAngularAccelerationU3Ek__BackingField_68(Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * value)
	{
		___U3CdeviceAngularAccelerationU3Ek__BackingField_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceAngularAccelerationU3Ek__BackingField_68), (void*)value);
	}
};


// <Module>


// <Module>


// System.Object


// System.Object


// System.EmptyArray`1<System.Object>

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>


// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>

struct List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048_StaticFields, ____emptyArray_5)); }
	inline XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>


// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>

struct List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0_StaticFields, ____emptyArray_5)); }
	inline XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>

struct Il2CppArrayBounds;

// System.Array

struct Il2CppArrayBounds;

// System.Array


// Unity.XR.Oculus.InputFocus

struct InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields
{
public:
	// System.Action Unity.XR.Oculus.InputFocus::InputFocusAcquired
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___InputFocusAcquired_0;
	// System.Action Unity.XR.Oculus.InputFocus::InputFocusLost
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___InputFocusLost_1;
	// System.Boolean Unity.XR.Oculus.InputFocus::hadInputFocus
	bool ___hadInputFocus_2;

public:
	inline static int32_t get_offset_of_InputFocusAcquired_0() { return static_cast<int32_t>(offsetof(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields, ___InputFocusAcquired_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_InputFocusAcquired_0() const { return ___InputFocusAcquired_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_InputFocusAcquired_0() { return &___InputFocusAcquired_0; }
	inline void set_InputFocusAcquired_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___InputFocusAcquired_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputFocusAcquired_0), (void*)value);
	}

	inline static int32_t get_offset_of_InputFocusLost_1() { return static_cast<int32_t>(offsetof(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields, ___InputFocusLost_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_InputFocusLost_1() const { return ___InputFocusLost_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_InputFocusLost_1() { return &___InputFocusLost_1; }
	inline void set_InputFocusLost_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___InputFocusLost_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputFocusLost_1), (void*)value);
	}

	inline static int32_t get_offset_of_hadInputFocus_2() { return static_cast<int32_t>(offsetof(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields, ___hadInputFocus_2)); }
	inline bool get_hadInputFocus_2() const { return ___hadInputFocus_2; }
	inline bool* get_address_of_hadInputFocus_2() { return &___hadInputFocus_2; }
	inline void set_hadInputFocus_2(bool value)
	{
		___hadInputFocus_2 = value;
	}
};


// Unity.XR.Oculus.InputFocus


// Unity.XR.Oculus.InputLayoutLoader


// Unity.XR.Oculus.InputLayoutLoader


// Unity.XR.Oculus.NativeMethods


// Unity.XR.Oculus.NativeMethods


// Unity.XR.Oculus.OculusSession


// Unity.XR.Oculus.OculusSession


// Unity.XR.Oculus.RegisterUpdateCallback


// Unity.XR.Oculus.RegisterUpdateCallback


// System.String

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.String


// System.ValueType


// System.ValueType


// UnityEngine.YieldInstruction


// UnityEngine.YieldInstruction


// Unity.XR.Oculus.NativeMethods/Internal


// Unity.XR.Oculus.NativeMethods/Internal


// Unity.XR.Oculus.OculusRestarter/<PauseAndRestartCoroutine>d__22


// Unity.XR.Oculus.OculusRestarter/<PauseAndRestartCoroutine>d__22


// Unity.XR.Oculus.OculusRestarter/<RestartCoroutine>d__23


// Unity.XR.Oculus.OculusRestarter/<RestartCoroutine>d__23


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Int32>>


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Int32>>


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>>


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>>


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Single>>


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Single>>


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>>


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>>


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>>


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>>


// System.Boolean

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Boolean


// System.Enum

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};


// System.Enum


// UnityEngine.InputSystem.Utilities.FourCC


// UnityEngine.InputSystem.Utilities.FourCC


// UnityEngine.InputSystem.Layouts.InputDeviceDescription


// UnityEngine.InputSystem.Layouts.InputDeviceDescription


// System.Int32


// System.Int32


// System.IntPtr

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


// System.IntPtr


// UnityEngine.InputSystem.Utilities.InternedString


// UnityEngine.InputSystem.Utilities.InternedString


// UnityEngine.Quaternion

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Quaternion


// System.Single


// System.Single


// System.UInt16


// System.UInt16


// UnityEngine.Vector2

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector2


// UnityEngine.Vector3

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector3


// System.Void


// System.Void


// UnityEngine.WaitForSeconds


// UnityEngine.WaitForSeconds


// Unity.XR.Oculus.NativeMethods/UserDefinedSettings


// Unity.XR.Oculus.NativeMethods/UserDefinedSettings


// UnityEngine.ColorSpace


// UnityEngine.ColorSpace


// UnityEngine.Coroutine


// UnityEngine.Coroutine


// System.Delegate


// System.Delegate


// System.Exception

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};


// System.Exception


// UnityEngine.HideFlags


// UnityEngine.HideFlags


// UnityEngine.InputSystem.Layouts.InputDeviceMatcher

struct InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kInterfaceKey
	InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA  ___kInterfaceKey_1;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kDeviceClassKey
	InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA  ___kDeviceClassKey_2;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kManufacturerKey
	InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA  ___kManufacturerKey_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kProductKey
	InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA  ___kProductKey_4;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kVersionKey
	InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA  ___kVersionKey_5;

public:
	inline static int32_t get_offset_of_kInterfaceKey_1() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D_StaticFields, ___kInterfaceKey_1)); }
	inline InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA  get_kInterfaceKey_1() const { return ___kInterfaceKey_1; }
	inline InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA * get_address_of_kInterfaceKey_1() { return &___kInterfaceKey_1; }
	inline void set_kInterfaceKey_1(InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA  value)
	{
		___kInterfaceKey_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kInterfaceKey_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kInterfaceKey_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_kDeviceClassKey_2() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D_StaticFields, ___kDeviceClassKey_2)); }
	inline InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA  get_kDeviceClassKey_2() const { return ___kDeviceClassKey_2; }
	inline InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA * get_address_of_kDeviceClassKey_2() { return &___kDeviceClassKey_2; }
	inline void set_kDeviceClassKey_2(InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA  value)
	{
		___kDeviceClassKey_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kDeviceClassKey_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kDeviceClassKey_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_kManufacturerKey_3() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D_StaticFields, ___kManufacturerKey_3)); }
	inline InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA  get_kManufacturerKey_3() const { return ___kManufacturerKey_3; }
	inline InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA * get_address_of_kManufacturerKey_3() { return &___kManufacturerKey_3; }
	inline void set_kManufacturerKey_3(InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA  value)
	{
		___kManufacturerKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kManufacturerKey_3))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kManufacturerKey_3))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_kProductKey_4() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D_StaticFields, ___kProductKey_4)); }
	inline InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA  get_kProductKey_4() const { return ___kProductKey_4; }
	inline InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA * get_address_of_kProductKey_4() { return &___kProductKey_4; }
	inline void set_kProductKey_4(InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA  value)
	{
		___kProductKey_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kProductKey_4))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kProductKey_4))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_kVersionKey_5() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D_StaticFields, ___kVersionKey_5)); }
	inline InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA  get_kVersionKey_5() const { return ___kVersionKey_5; }
	inline InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA * get_address_of_kVersionKey_5() { return &___kVersionKey_5; }
	inline void set_kVersionKey_5(InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA  value)
	{
		___kVersionKey_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kVersionKey_5))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kVersionKey_5))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.Layouts.InputDeviceMatcher


// UnityEngine.InputSystem.LowLevel.InputStateBlock

struct InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInvalid
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatInvalid_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatBit
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatBit_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSBit
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatSBit_6;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInt
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatInt_8;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUInt
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatUInt_10;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatShort
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatShort_12;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUShort
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatUShort_14;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatByte
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatByte_16;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSByte
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatSByte_18;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatLong
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatLong_20;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatULong
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatULong_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatFloat
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatFloat_24;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatDouble
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatDouble_26;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatVector2_28;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatVector3_30;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatQuaternion
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatQuaternion_32;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Short
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatVector2Short_34;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Short
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatVector3Short_35;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Byte
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatVector2Byte_36;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Byte
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatVector3Byte_37;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatPose
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatPose_38;

public:
	inline static int32_t get_offset_of_FormatInvalid_2() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatInvalid_2)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatInvalid_2() const { return ___FormatInvalid_2; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatInvalid_2() { return &___FormatInvalid_2; }
	inline void set_FormatInvalid_2(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatInvalid_2 = value;
	}

	inline static int32_t get_offset_of_FormatBit_4() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatBit_4)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatBit_4() const { return ___FormatBit_4; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatBit_4() { return &___FormatBit_4; }
	inline void set_FormatBit_4(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatBit_4 = value;
	}

	inline static int32_t get_offset_of_FormatSBit_6() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatSBit_6)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatSBit_6() const { return ___FormatSBit_6; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatSBit_6() { return &___FormatSBit_6; }
	inline void set_FormatSBit_6(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatSBit_6 = value;
	}

	inline static int32_t get_offset_of_FormatInt_8() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatInt_8)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatInt_8() const { return ___FormatInt_8; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatInt_8() { return &___FormatInt_8; }
	inline void set_FormatInt_8(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatInt_8 = value;
	}

	inline static int32_t get_offset_of_FormatUInt_10() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatUInt_10)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatUInt_10() const { return ___FormatUInt_10; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatUInt_10() { return &___FormatUInt_10; }
	inline void set_FormatUInt_10(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatUInt_10 = value;
	}

	inline static int32_t get_offset_of_FormatShort_12() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatShort_12)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatShort_12() const { return ___FormatShort_12; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatShort_12() { return &___FormatShort_12; }
	inline void set_FormatShort_12(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatShort_12 = value;
	}

	inline static int32_t get_offset_of_FormatUShort_14() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatUShort_14)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatUShort_14() const { return ___FormatUShort_14; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatUShort_14() { return &___FormatUShort_14; }
	inline void set_FormatUShort_14(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatUShort_14 = value;
	}

	inline static int32_t get_offset_of_FormatByte_16() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatByte_16)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatByte_16() const { return ___FormatByte_16; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatByte_16() { return &___FormatByte_16; }
	inline void set_FormatByte_16(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatByte_16 = value;
	}

	inline static int32_t get_offset_of_FormatSByte_18() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatSByte_18)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatSByte_18() const { return ___FormatSByte_18; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatSByte_18() { return &___FormatSByte_18; }
	inline void set_FormatSByte_18(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatSByte_18 = value;
	}

	inline static int32_t get_offset_of_FormatLong_20() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatLong_20)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatLong_20() const { return ___FormatLong_20; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatLong_20() { return &___FormatLong_20; }
	inline void set_FormatLong_20(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatLong_20 = value;
	}

	inline static int32_t get_offset_of_FormatULong_22() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatULong_22)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatULong_22() const { return ___FormatULong_22; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatULong_22() { return &___FormatULong_22; }
	inline void set_FormatULong_22(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatULong_22 = value;
	}

	inline static int32_t get_offset_of_FormatFloat_24() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatFloat_24)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatFloat_24() const { return ___FormatFloat_24; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatFloat_24() { return &___FormatFloat_24; }
	inline void set_FormatFloat_24(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatFloat_24 = value;
	}

	inline static int32_t get_offset_of_FormatDouble_26() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatDouble_26)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatDouble_26() const { return ___FormatDouble_26; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatDouble_26() { return &___FormatDouble_26; }
	inline void set_FormatDouble_26(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatDouble_26 = value;
	}

	inline static int32_t get_offset_of_FormatVector2_28() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatVector2_28)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatVector2_28() const { return ___FormatVector2_28; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatVector2_28() { return &___FormatVector2_28; }
	inline void set_FormatVector2_28(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatVector2_28 = value;
	}

	inline static int32_t get_offset_of_FormatVector3_30() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatVector3_30)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatVector3_30() const { return ___FormatVector3_30; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatVector3_30() { return &___FormatVector3_30; }
	inline void set_FormatVector3_30(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatVector3_30 = value;
	}

	inline static int32_t get_offset_of_FormatQuaternion_32() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatQuaternion_32)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatQuaternion_32() const { return ___FormatQuaternion_32; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatQuaternion_32() { return &___FormatQuaternion_32; }
	inline void set_FormatQuaternion_32(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatQuaternion_32 = value;
	}

	inline static int32_t get_offset_of_FormatVector2Short_34() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatVector2Short_34)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatVector2Short_34() const { return ___FormatVector2Short_34; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatVector2Short_34() { return &___FormatVector2Short_34; }
	inline void set_FormatVector2Short_34(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatVector2Short_34 = value;
	}

	inline static int32_t get_offset_of_FormatVector3Short_35() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatVector3Short_35)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatVector3Short_35() const { return ___FormatVector3Short_35; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatVector3Short_35() { return &___FormatVector3Short_35; }
	inline void set_FormatVector3Short_35(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatVector3Short_35 = value;
	}

	inline static int32_t get_offset_of_FormatVector2Byte_36() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatVector2Byte_36)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatVector2Byte_36() const { return ___FormatVector2Byte_36; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatVector2Byte_36() { return &___FormatVector2Byte_36; }
	inline void set_FormatVector2Byte_36(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatVector2Byte_36 = value;
	}

	inline static int32_t get_offset_of_FormatVector3Byte_37() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatVector3Byte_37)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatVector3Byte_37() const { return ___FormatVector3Byte_37; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatVector3Byte_37() { return &___FormatVector3Byte_37; }
	inline void set_FormatVector3Byte_37(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatVector3Byte_37 = value;
	}

	inline static int32_t get_offset_of_FormatPose_38() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatPose_38)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatPose_38() const { return ___FormatPose_38; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatPose_38() { return &___FormatPose_38; }
	inline void set_FormatPose_38(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatPose_38 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.InputStateBlock


// UnityEngine.IntegratedSubsystem


// UnityEngine.IntegratedSubsystem


// UnityEngine.Object

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};


// UnityEngine.Object


// System.TypeCode


// System.TypeCode


// UnityEngine.InputSystem.Controls.AxisControl/Clamp


// UnityEngine.InputSystem.Controls.AxisControl/Clamp


// Unity.XR.Oculus.Development/UserDeveloperModeSettingCache


// Unity.XR.Oculus.Development/UserDeveloperModeSettingCache


// UnityEngine.InputSystem.InputControl/ControlFlags


// UnityEngine.InputSystem.InputControl/ControlFlags


// UnityEngine.InputSystem.InputDevice/DeviceFlags


// UnityEngine.InputSystem.InputDevice/DeviceFlags


// Unity.XR.Oculus.OculusLoader/DeviceSupportedResult


// Unity.XR.Oculus.OculusLoader/DeviceSupportedResult


// Unity.XR.Oculus.OculusSettings/StereoRenderingModeAndroid


// Unity.XR.Oculus.OculusSettings/StereoRenderingModeAndroid


// Unity.XR.Oculus.OculusSettings/StereoRenderingModeDesktop


// Unity.XR.Oculus.OculusSettings/StereoRenderingModeDesktop


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRInputSubsystemDescriptor>


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRInputSubsystemDescriptor>


// System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>


// System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>


// UnityEngine.Component


// UnityEngine.Component


// Unity.XR.Oculus.Development

struct Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_StaticFields
{
public:
	// Unity.XR.Oculus.Development/UserDeveloperModeSettingCache Unity.XR.Oculus.Development::s_CachedMode
	int32_t ___s_CachedMode_0;

public:
	inline static int32_t get_offset_of_s_CachedMode_0() { return static_cast<int32_t>(offsetof(Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_StaticFields, ___s_CachedMode_0)); }
	inline int32_t get_s_CachedMode_0() const { return ___s_CachedMode_0; }
	inline int32_t* get_address_of_s_CachedMode_0() { return &___s_CachedMode_0; }
	inline void set_s_CachedMode_0(int32_t value)
	{
		___s_CachedMode_0 = value;
	}
};


// Unity.XR.Oculus.Development


// UnityEngine.GameObject


// UnityEngine.GameObject


// System.MulticastDelegate


// System.MulticastDelegate


// UnityEngine.InputSystem.Utilities.PrimitiveValue


// UnityEngine.InputSystem.Utilities.PrimitiveValue


// UnityEngine.ScriptableObject


// UnityEngine.ScriptableObject


// System.SystemException


// System.SystemException


// System.Action


// System.Action


// UnityEngine.Behaviour


// UnityEngine.Behaviour


// UnityEngine.InputSystem.InputControl


// UnityEngine.InputSystem.InputControl


// System.NotSupportedException


// System.NotSupportedException


// Unity.XR.Oculus.OculusSettings

struct OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_StaticFields
{
public:
	// Unity.XR.Oculus.OculusSettings Unity.XR.Oculus.OculusSettings::s_Settings
	OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * ___s_Settings_19;

public:
	inline static int32_t get_offset_of_s_Settings_19() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_StaticFields, ___s_Settings_19)); }
	inline OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * get_s_Settings_19() const { return ___s_Settings_19; }
	inline OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C ** get_address_of_s_Settings_19() { return &___s_Settings_19; }
	inline void set_s_Settings_19(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * value)
	{
		___s_Settings_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Settings_19), (void*)value);
	}
};


// Unity.XR.Oculus.OculusSettings


// UnityEngine.Events.UnityAction


// UnityEngine.Events.UnityAction


// UnityEngine.XR.XRDisplaySubsystem


// UnityEngine.XR.XRDisplaySubsystem


// UnityEngine.XR.Management.XRGeneralSettings

struct XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_StaticFields
{
public:
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * ___s_RuntimeSettingsInstance_5;

public:
	inline static int32_t get_offset_of_k_SettingsKey_4() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_StaticFields, ___k_SettingsKey_4)); }
	inline String_t* get_k_SettingsKey_4() const { return ___k_SettingsKey_4; }
	inline String_t** get_address_of_k_SettingsKey_4() { return &___k_SettingsKey_4; }
	inline void set_k_SettingsKey_4(String_t* value)
	{
		___k_SettingsKey_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_SettingsKey_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_RuntimeSettingsInstance_5() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_StaticFields, ___s_RuntimeSettingsInstance_5)); }
	inline XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * get_s_RuntimeSettingsInstance_5() const { return ___s_RuntimeSettingsInstance_5; }
	inline XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 ** get_address_of_s_RuntimeSettingsInstance_5() { return &___s_RuntimeSettingsInstance_5; }
	inline void set_s_RuntimeSettingsInstance_5(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * value)
	{
		___s_RuntimeSettingsInstance_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RuntimeSettingsInstance_5), (void*)value);
	}
};


// UnityEngine.XR.Management.XRGeneralSettings


// UnityEngine.XR.XRInputSubsystem


// UnityEngine.XR.XRInputSubsystem


// UnityEngine.XR.Management.XRLoader


// UnityEngine.XR.Management.XRLoader


// UnityEngine.XR.Management.XRManagerSettings


// UnityEngine.XR.Management.XRManagerSettings


// UnityEngine.InputSystem.InputControl`1<System.Int32>


// UnityEngine.InputSystem.InputControl`1<System.Int32>


// UnityEngine.InputSystem.InputControl`1<UnityEngine.Quaternion>


// UnityEngine.InputSystem.InputControl`1<UnityEngine.Quaternion>


// UnityEngine.InputSystem.InputControl`1<System.Single>


// UnityEngine.InputSystem.InputControl`1<System.Single>


// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>


// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>


// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector3>


// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector3>


// UnityEngine.InputSystem.InputDevice


// UnityEngine.InputSystem.InputDevice


// UnityEngine.MonoBehaviour


// UnityEngine.MonoBehaviour


// UnityEngine.XR.Management.XRLoaderHelper


// UnityEngine.XR.Management.XRLoaderHelper


// UnityEngine.InputSystem.Controls.AxisControl


// UnityEngine.InputSystem.Controls.AxisControl


// UnityEngine.InputSystem.Controls.IntegerControl


// UnityEngine.InputSystem.Controls.IntegerControl


// Unity.XR.Oculus.OculusLoader

struct OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor> Unity.XR.Oculus.OculusLoader::s_DisplaySubsystemDescriptors
	List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 * ___s_DisplaySubsystemDescriptors_5;
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor> Unity.XR.Oculus.OculusLoader::s_InputSubsystemDescriptors
	List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * ___s_InputSubsystemDescriptors_6;

public:
	inline static int32_t get_offset_of_s_DisplaySubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_StaticFields, ___s_DisplaySubsystemDescriptors_5)); }
	inline List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 * get_s_DisplaySubsystemDescriptors_5() const { return ___s_DisplaySubsystemDescriptors_5; }
	inline List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 ** get_address_of_s_DisplaySubsystemDescriptors_5() { return &___s_DisplaySubsystemDescriptors_5; }
	inline void set_s_DisplaySubsystemDescriptors_5(List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 * value)
	{
		___s_DisplaySubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DisplaySubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_InputSubsystemDescriptors_6() { return static_cast<int32_t>(offsetof(OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_StaticFields, ___s_InputSubsystemDescriptors_6)); }
	inline List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * get_s_InputSubsystemDescriptors_6() const { return ___s_InputSubsystemDescriptors_6; }
	inline List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 ** get_address_of_s_InputSubsystemDescriptors_6() { return &___s_InputSubsystemDescriptors_6; }
	inline void set_s_InputSubsystemDescriptors_6(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * value)
	{
		___s_InputSubsystemDescriptors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InputSubsystemDescriptors_6), (void*)value);
	}
};


// Unity.XR.Oculus.OculusLoader


// Unity.XR.Oculus.Input.OculusRemote


// Unity.XR.Oculus.Input.OculusRemote


// Unity.XR.Oculus.OculusRestarter

struct OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields
{
public:
	// System.String Unity.XR.Oculus.OculusRestarter::k_GameObjectName
	String_t* ___k_GameObjectName_8;
	// Unity.XR.Oculus.OculusRestarter Unity.XR.Oculus.OculusRestarter::s_Instance
	OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * ___s_Instance_9;
	// System.Int32 Unity.XR.Oculus.OculusRestarter::m_pauseAndRestartAttempts
	int32_t ___m_pauseAndRestartAttempts_12;
	// System.Single Unity.XR.Oculus.OculusRestarter::<TimeBetweenRestartAttempts>k__BackingField
	float ___U3CTimeBetweenRestartAttemptsU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_k_GameObjectName_8() { return static_cast<int32_t>(offsetof(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields, ___k_GameObjectName_8)); }
	inline String_t* get_k_GameObjectName_8() const { return ___k_GameObjectName_8; }
	inline String_t** get_address_of_k_GameObjectName_8() { return &___k_GameObjectName_8; }
	inline void set_k_GameObjectName_8(String_t* value)
	{
		___k_GameObjectName_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_GameObjectName_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_Instance_9() { return static_cast<int32_t>(offsetof(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields, ___s_Instance_9)); }
	inline OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * get_s_Instance_9() const { return ___s_Instance_9; }
	inline OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 ** get_address_of_s_Instance_9() { return &___s_Instance_9; }
	inline void set_s_Instance_9(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * value)
	{
		___s_Instance_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Instance_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_pauseAndRestartAttempts_12() { return static_cast<int32_t>(offsetof(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields, ___m_pauseAndRestartAttempts_12)); }
	inline int32_t get_m_pauseAndRestartAttempts_12() const { return ___m_pauseAndRestartAttempts_12; }
	inline int32_t* get_address_of_m_pauseAndRestartAttempts_12() { return &___m_pauseAndRestartAttempts_12; }
	inline void set_m_pauseAndRestartAttempts_12(int32_t value)
	{
		___m_pauseAndRestartAttempts_12 = value;
	}

	inline static int32_t get_offset_of_U3CTimeBetweenRestartAttemptsU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields, ___U3CTimeBetweenRestartAttemptsU3Ek__BackingField_13)); }
	inline float get_U3CTimeBetweenRestartAttemptsU3Ek__BackingField_13() const { return ___U3CTimeBetweenRestartAttemptsU3Ek__BackingField_13; }
	inline float* get_address_of_U3CTimeBetweenRestartAttemptsU3Ek__BackingField_13() { return &___U3CTimeBetweenRestartAttemptsU3Ek__BackingField_13; }
	inline void set_U3CTimeBetweenRestartAttemptsU3Ek__BackingField_13(float value)
	{
		___U3CTimeBetweenRestartAttemptsU3Ek__BackingField_13 = value;
	}
};


// Unity.XR.Oculus.OculusRestarter


// Unity.XR.Oculus.Input.OculusTrackingReference


// Unity.XR.Oculus.Input.OculusTrackingReference


// UnityEngine.InputSystem.Controls.QuaternionControl


// UnityEngine.InputSystem.Controls.QuaternionControl


// UnityEngine.InputSystem.TrackedDevice


// UnityEngine.InputSystem.TrackedDevice


// UnityEngine.InputSystem.Controls.Vector2Control


// UnityEngine.InputSystem.Controls.Vector2Control


// UnityEngine.InputSystem.Controls.Vector3Control


// UnityEngine.InputSystem.Controls.Vector3Control


// UnityEngine.InputSystem.Controls.ButtonControl

struct ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_StaticFields
{
public:
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonPressPoint
	float ___s_GlobalDefaultButtonPressPoint_40;
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonReleaseThreshold
	float ___s_GlobalDefaultButtonReleaseThreshold_41;

public:
	inline static int32_t get_offset_of_s_GlobalDefaultButtonPressPoint_40() { return static_cast<int32_t>(offsetof(ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_StaticFields, ___s_GlobalDefaultButtonPressPoint_40)); }
	inline float get_s_GlobalDefaultButtonPressPoint_40() const { return ___s_GlobalDefaultButtonPressPoint_40; }
	inline float* get_address_of_s_GlobalDefaultButtonPressPoint_40() { return &___s_GlobalDefaultButtonPressPoint_40; }
	inline void set_s_GlobalDefaultButtonPressPoint_40(float value)
	{
		___s_GlobalDefaultButtonPressPoint_40 = value;
	}

	inline static int32_t get_offset_of_s_GlobalDefaultButtonReleaseThreshold_41() { return static_cast<int32_t>(offsetof(ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_StaticFields, ___s_GlobalDefaultButtonReleaseThreshold_41)); }
	inline float get_s_GlobalDefaultButtonReleaseThreshold_41() const { return ___s_GlobalDefaultButtonReleaseThreshold_41; }
	inline float* get_address_of_s_GlobalDefaultButtonReleaseThreshold_41() { return &___s_GlobalDefaultButtonReleaseThreshold_41; }
	inline void set_s_GlobalDefaultButtonReleaseThreshold_41(float value)
	{
		___s_GlobalDefaultButtonReleaseThreshold_41 = value;
	}
};


// UnityEngine.InputSystem.Controls.ButtonControl


// UnityEngine.InputSystem.XR.XRController


// UnityEngine.InputSystem.XR.XRController


// UnityEngine.InputSystem.XR.XRHMD


// UnityEngine.InputSystem.XR.XRHMD


// Unity.XR.Oculus.Input.GearVRTrackedController


// Unity.XR.Oculus.Input.GearVRTrackedController


// Unity.XR.Oculus.Input.OculusHMD


// Unity.XR.Oculus.Input.OculusHMD


// UnityEngine.InputSystem.XR.XRControllerWithRumble


// UnityEngine.InputSystem.XR.XRControllerWithRumble


// Unity.XR.Oculus.Input.OculusGoController


// Unity.XR.Oculus.Input.OculusGoController


// Unity.XR.Oculus.Input.OculusHMDExtended


// Unity.XR.Oculus.Input.OculusHMDExtended


// Unity.XR.Oculus.Input.OculusTouchController


// Unity.XR.Oculus.Input.OculusTouchController

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * InputControl_GetChildControl_TisRuntimeObject_m2F008AFE6092A4F3967E9A14B2B32306E0D43FCE_gshared (InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701 * __this, String_t* ___path0, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m1ACF1D32EC082D78D7F7D997E93BD9AAEF56A664_gshared (Nullable_1_t1840F33AA72FFDFEF6AC4DD7EF5FA3C598530094 * __this, InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<System.Object>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_RegisterLayout_TisRuntimeObject_m0DFD264AF0ECD50B05EFD2C208A4C1102A2C74B7_gshared (String_t* ___name0, Nullable_1_t1840F33AA72FFDFEF6AC4DD7EF5FA3C598530094  ___matches1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<!!0>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m3E52F1FFE137D3A16050805AB648F726394436DC_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___descriptors0, String_t* ___id1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StartSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_StartSubsystem_TisRuntimeObject_m5FFD6719D8FE560199B25C5D3AF8D0D40DFD038E_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StopSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_StopSubsystem_TisRuntimeObject_m5700EB064085C2D3E817458AD01E0C97624102A7_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_DestroySubsystem_TisRuntimeObject_m43760686D2E4C1FBCE4BD18489E767F294A68E8A_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_gshared_inline (const RuntimeMethod* method);

// System.Boolean UnityEngine.Debug::get_isDebugBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debug_get_isDebugBuild_mEFC4658EA34BA262EB8D6D1AB5FDB73478EA32C7 (const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods::SetDeveloperModeStrict(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_SetDeveloperModeStrict_mB7F4A67FF3C6396D8600290B3BBA555A6CF56767 (bool ___active0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.XR.XRController::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRController_FinishSetup_m9CE3D32BDE43475028823752C0FB7768B7E9F2CB (XRController_t3786F06F6CA867377708D84F3C9F243136EF482E * __this, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.Vector2Control>(System.String)
inline Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * InputControl_GetChildControl_TisVector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1_m6FAC1ACEDE733EE9B82D626AA2E0BDE4A5705980 (InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * (*) (InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701 *, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m2F008AFE6092A4F3967E9A14B2B32306E0D43FCE_gshared)(__this, ___path0, method);
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_touchpad(UnityEngine.InputSystem.Controls.Vector2Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_touchpad_mD30A931E272C79A49E97DF66595142067628B1C4_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.AxisControl>(System.String)
inline AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * InputControl_GetChildControl_TisAxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61_m50AA28A6A79BF457341DE5768D5F8F2E1D0B0B4D (InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * (*) (InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701 *, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m2F008AFE6092A4F3967E9A14B2B32306E0D43FCE_gshared)(__this, ___path0, method);
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_trigger(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_trigger_m16158CF3316E7AD4D01FCEEAA38A4FE2A931855C_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.ButtonControl>(System.String)
inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9 (InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * (*) (InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701 *, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m2F008AFE6092A4F3967E9A14B2B32306E0D43FCE_gshared)(__this, ___path0, method);
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_back(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_back_m76F2BCBDDFA3B3745449EE8C3B4E23AE9D8E44E9_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_triggerPressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_triggerPressed_m5102DF95F8DFDEC87D81A6CAF1B220DF8BFB13EF_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_touchpadClicked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_touchpadClicked_m0093E9CE2D7EF99F8805E5CA5FBEB9828B32797F_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_touchpadTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_touchpadTouched_m718CB22287AB2B37C1234F4B9553DE539230BD20_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.IntegerControl>(System.String)
inline IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * InputControl_GetChildControl_TisIntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3_mADA7BED738CAC95FE7FE96EB3C14277B7158E331 (InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * (*) (InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701 *, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m2F008AFE6092A4F3967E9A14B2B32306E0D43FCE_gshared)(__this, ___path0, method);
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_trackingState_mE69779797C93F9EC24F8AE569D74D3561EA3AA57_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_isTracked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_isTracked_m98CC84B04F3CCE061D9FAC495D072E9413163A84_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.Vector3Control>(System.String)
inline Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71 (InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * (*) (InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701 *, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m2F008AFE6092A4F3967E9A14B2B32306E0D43FCE_gshared)(__this, ___path0, method);
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_devicePosition_m6AB20284CEF59FB18E1DCC05F9A9471D0C36F86F_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.QuaternionControl>(System.String)
inline QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * InputControl_GetChildControl_TisQuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A_mDC7B154D598EA657266845F32A54167E63A3C42E (InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * (*) (InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701 *, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m2F008AFE6092A4F3967E9A14B2B32306E0D43FCE_gshared)(__this, ___path0, method);
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_deviceRotation_m68C593F68DAE58EA02D9D641937FEF02F7DDC72D_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_deviceAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_deviceAngularVelocity_m4C0D01B20E744EB2AEF36D21A7C2B2703B449376_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_deviceAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_deviceAcceleration_m440F6ADE8ACC1758CE71975A3501208084DEA89A_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_deviceAngularAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_deviceAngularAcceleration_mD6E63593A48342E40BFA776879AF1CF19123B760_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.XR.XRController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRController__ctor_m6A41F2DE173180F91042669887FB62732C89A83C (XRController_t3786F06F6CA867377708D84F3C9F243136EF482E * __this, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods::GetHasInputFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetHasInputFocus_mC5174AB5E09FCDEC72E3FE70EE041824A3328806 (const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.InputFocus::get_hasInputFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFocus_get_hasInputFocus_m89BC1D49BF5D1BD9207D5D32780FA93CEC6AD793 (const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.InputLayoutLoader::RegisterInputLayouts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputLayoutLoader_RegisterInputLayouts_m7D259AB887FFDEB3E4FA2F7D991F498BDC00DE15 (const RuntimeMethod* method);
// UnityEngine.InputSystem.Layouts.InputDeviceMatcher UnityEngine.InputSystem.Layouts.InputDeviceMatcher::WithInterface(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D  InputDeviceMatcher_WithInterface_m71824BD735E7B59FC470FA2AFF2B747272854DEB (InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D * __this, String_t* ___pattern0, bool ___supportRegex1, const RuntimeMethod* method);
// UnityEngine.InputSystem.Layouts.InputDeviceMatcher UnityEngine.InputSystem.Layouts.InputDeviceMatcher::WithProduct(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D  InputDeviceMatcher_WithProduct_mF565EA2A291674F7E3589D40591C646A3B6C8466 (InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D * __this, String_t* ___pattern0, bool ___supportRegex1, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>::.ctor(!0)
inline void Nullable_1__ctor_m1ACF1D32EC082D78D7F7D997E93BD9AAEF56A664 (Nullable_1_t1840F33AA72FFDFEF6AC4DD7EF5FA3C598530094 * __this, InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t1840F33AA72FFDFEF6AC4DD7EF5FA3C598530094 *, InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D , const RuntimeMethod*))Nullable_1__ctor_m1ACF1D32EC082D78D7F7D997E93BD9AAEF56A664_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<Unity.XR.Oculus.Input.OculusHMD>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
inline void InputSystem_RegisterLayout_TisOculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A_m30D0609F6053B2EA7D155FB616D299C4172F008E (String_t* ___name0, Nullable_1_t1840F33AA72FFDFEF6AC4DD7EF5FA3C598530094  ___matches1, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Nullable_1_t1840F33AA72FFDFEF6AC4DD7EF5FA3C598530094 , const RuntimeMethod*))InputSystem_RegisterLayout_TisRuntimeObject_m0DFD264AF0ECD50B05EFD2C208A4C1102A2C74B7_gshared)(___name0, ___matches1, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<Unity.XR.Oculus.Input.OculusTouchController>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
inline void InputSystem_RegisterLayout_TisOculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA_m8D0F6C076C0E8BFA618D11E7A0F2F457572B39BD (String_t* ___name0, Nullable_1_t1840F33AA72FFDFEF6AC4DD7EF5FA3C598530094  ___matches1, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Nullable_1_t1840F33AA72FFDFEF6AC4DD7EF5FA3C598530094 , const RuntimeMethod*))InputSystem_RegisterLayout_TisRuntimeObject_m0DFD264AF0ECD50B05EFD2C208A4C1102A2C74B7_gshared)(___name0, ___matches1, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<Unity.XR.Oculus.Input.OculusRemote>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
inline void InputSystem_RegisterLayout_TisOculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3_mE279C4BC1F5C51A298C4F8505823E6F8DC0761B4 (String_t* ___name0, Nullable_1_t1840F33AA72FFDFEF6AC4DD7EF5FA3C598530094  ___matches1, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Nullable_1_t1840F33AA72FFDFEF6AC4DD7EF5FA3C598530094 , const RuntimeMethod*))InputSystem_RegisterLayout_TisRuntimeObject_m0DFD264AF0ECD50B05EFD2C208A4C1102A2C74B7_gshared)(___name0, ___matches1, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<Unity.XR.Oculus.Input.OculusTrackingReference>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
inline void InputSystem_RegisterLayout_TisOculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807_m73A539F782FFEA18B6DA805B0A6B31BB2420A5D3 (String_t* ___name0, Nullable_1_t1840F33AA72FFDFEF6AC4DD7EF5FA3C598530094  ___matches1, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Nullable_1_t1840F33AA72FFDFEF6AC4DD7EF5FA3C598530094 , const RuntimeMethod*))InputSystem_RegisterLayout_TisRuntimeObject_m0DFD264AF0ECD50B05EFD2C208A4C1102A2C74B7_gshared)(___name0, ___matches1, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<Unity.XR.Oculus.Input.OculusGoController>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
inline void InputSystem_RegisterLayout_TisOculusGoController_tE3AB6FC9374A8DB24CFA9AB6592CB6235F6AB21B_mEF936CA7BA6ECC090DD4C3FE81F2D09403AC8101 (String_t* ___name0, Nullable_1_t1840F33AA72FFDFEF6AC4DD7EF5FA3C598530094  ___matches1, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Nullable_1_t1840F33AA72FFDFEF6AC4DD7EF5FA3C598530094 , const RuntimeMethod*))InputSystem_RegisterLayout_TisRuntimeObject_m0DFD264AF0ECD50B05EFD2C208A4C1102A2C74B7_gshared)(___name0, ___matches1, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<Unity.XR.Oculus.Input.OculusHMDExtended>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
inline void InputSystem_RegisterLayout_TisOculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC_mB7C9CEFE0472DEAE7192DC89DE33CB2925EEE930 (String_t* ___name0, Nullable_1_t1840F33AA72FFDFEF6AC4DD7EF5FA3C598530094  ___matches1, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Nullable_1_t1840F33AA72FFDFEF6AC4DD7EF5FA3C598530094 , const RuntimeMethod*))InputSystem_RegisterLayout_TisRuntimeObject_m0DFD264AF0ECD50B05EFD2C208A4C1102A2C74B7_gshared)(___name0, ___matches1, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<Unity.XR.Oculus.Input.GearVRTrackedController>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
inline void InputSystem_RegisterLayout_TisGearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D_m73C07C0A05DC24057C95EA08E8DE02F2399EC482 (String_t* ___name0, Nullable_1_t1840F33AA72FFDFEF6AC4DD7EF5FA3C598530094  ___matches1, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Nullable_1_t1840F33AA72FFDFEF6AC4DD7EF5FA3C598530094 , const RuntimeMethod*))InputSystem_RegisterLayout_TisRuntimeObject_m0DFD264AF0ECD50B05EFD2C208A4C1102A2C74B7_gshared)(___name0, ___matches1, method);
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::LoadOVRPlugin(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_LoadOVRPlugin_m20BF6ADFC47F043ED9CB9F86199E26C8A46AD5AF (String_t* ___ovrpPath0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetUserDefinedSettings(Unity.XR.Oculus.NativeMethods/UserDefinedSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetUserDefinedSettings_mE187F03B58FEB8FE874B938E28401C06C919221E (UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D  ___settings0, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::SetDeveloperModeStrict(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_SetDeveloperModeStrict_m0A2121361A4FFDA8D0EF716D2C011F0EF19A34F8 (bool ___active0, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetAppHasInputFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetAppHasInputFocus_mA679379FDE6F3AFAFBF35841818A0BD5A492579F (const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetAppShouldQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetAppShouldQuit_m2201DC6D753AE50E8E041C75816721CC622DA353 (const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetShouldRestartSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetShouldRestartSession_m232B73B6EB98D8E93F361FFBEDC386E93CD86E1E (const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController__ctor_m35059DBECC8470F3A2695CF33528C805722D6B6B (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.XR.XRHMD::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHMD_FinishSetup_m0F4B9F4FFD18F37C7AECCC8555417EFB7CF732A5 (XRHMD_t878DAFA36F392EAE743A0A73CA4DDC0604128CF5 * __this, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_userPresence(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_userPresence_m96741F0BBE2A8070F516DA685E65CCAA514A1679_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_trackingState_mCC316B092DB4A9129733B960684AB3859B18E663_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_isTracked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_isTracked_mFC9B8122161957BCBC36759F1AA976A2ABFBE2C7_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_devicePosition_m483AA5BEACD9BE4452716A4FD93BE41140B27B51_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_deviceRotation_m69931E5CCA4FFE13D1901888AA7FDB6996CA76B5_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_deviceAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_deviceAngularVelocity_mB7C37988CBA0AE9B50F99B7F7C2871B40C048CA1_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_deviceAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_deviceAcceleration_m23CDE7042398488476090D336D3F0A38DEDF2FC0_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_deviceAngularAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_deviceAngularAcceleration_mB21A55CB0306B56B5D0A1311E37D1004A2C39E85_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_leftEyePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyePosition_mE14FDF9DD8C209780EB60BB8C57752188B0037DC_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_leftEyeRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyeRotation_m76DDAB16545F73D11319E052138DBBDFCB125D34_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_leftEyeAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyeAngularVelocity_m17F8A6AF388491942AB669556C3BC2C804478814_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_leftEyeAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyeAcceleration_m262585422FEB4CB04401A13E55F209E459807330_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_leftEyeAngularAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyeAngularAcceleration_mA37A13118C81CE1CF6F924F6DAEE02B92A1659DE_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_rightEyePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyePosition_m4327CA684F0A549A131308C28D7D8AE0CC8351C0_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_rightEyeRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyeRotation_m3BCFCBCE5A52F9007AD7E98954B7BDAD51BF4583_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_rightEyeAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyeAngularVelocity_m5AC3A1540E35C60730BA0276AADE239AACD8AF78_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_rightEyeAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyeAcceleration_mDD9ED7D1DEED41B45F7418A7F380FFA85D5A2D9D_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_rightEyeAngularAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyeAngularAcceleration_m437486769E36F9E9D7A0B4C0B0E1064144C221C6_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_centerEyePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyePosition_mA6D67B6465E1B36F4CC0675F07CFF4A187619FFC_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_centerEyeRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyeRotation_m051815EFB96695ED9504BC65A7DE83B6A62843BF_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_centerEyeAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyeAngularVelocity_m28DCEA3459CF0B548838DBF44A1E68D90E2DC4ED_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_centerEyeAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyeAcceleration_mA095C5F1709C0B8B75839730D19083CCBAAE7A38_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_centerEyeAngularAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyeAngularAcceleration_m8E9759795ABB82FBDDD65DD82172C7CB9E1FE5E8_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.XR.XRHMD::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHMD__ctor_m99AC2E8B38AE426F8E44BAA08B5D6DB65CAB934D (XRHMD_t878DAFA36F392EAE743A0A73CA4DDC0604128CF5 * __this, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_FinishSetup_m476E392C04F8BBB6E230BE6A37A90269820CA796 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMDExtended::set_back(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMDExtended_set_back_m7A33E91EA604FD207CB76DB965ADFFAADB7EB36B_inline (OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMDExtended::set_touchpad(UnityEngine.InputSystem.Controls.Vector2Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMDExtended_set_touchpad_m4224731C210C73B2A4FA9301CEF174D76C3521EA_inline (OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC * __this, Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD__ctor_mE497EDF74203D170F59426A5FFA99DA118BA67FD (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method);
// Unity.XR.Oculus.OculusLoader/DeviceSupportedResult Unity.XR.Oculus.OculusLoader::IsDeviceSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OculusLoader_IsDeviceSupported_mC2E5A317811DBD9EB506037FD358CF7F64814286 (const RuntimeMethod* method);
// Unity.XR.Oculus.OculusSettings Unity.XR.Oculus.OculusLoader::GetSettings()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * OculusLoader_GetSettings_mF0D5694BD84372039D4227997B00CAB33A419CAC_inline (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.UInt16 Unity.XR.Oculus.OculusSettings::GetStereoRenderingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t OculusSettings_GetStereoRenderingMode_mB4FF47E7831A653C90D7B08E336C40D66968F2FD (OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * __this, const RuntimeMethod* method);
// UnityEngine.ColorSpace UnityEngine.QualitySettings::get_activeColorSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_get_activeColorSpace_mE0C265DD8E215FC537CFA8B000C0977B10C6A49C (const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods::SetUserDefinedSettings(Unity.XR.Oculus.NativeMethods/UserDefinedSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetUserDefinedSettings_m60831E50BCEB63E8B8E3A6421CE2D6BC21FB6FCD (UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D  ___settings0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<UnityEngine.XR.XRDisplaySubsystemDescriptor,UnityEngine.XR.XRDisplaySubsystem>(System.Collections.Generic.List`1<!!0>,System.String)
inline void XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m2674D41E2C5D7DE045BEF6EDE661A9A0767A99FF (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 * ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 *, String_t*, const RuntimeMethod*))XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m3E52F1FFE137D3A16050805AB648F726394436DC_gshared)(__this, ___descriptors0, ___id1, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<UnityEngine.XR.XRInputSubsystemDescriptor,UnityEngine.XR.XRInputSubsystem>(System.Collections.Generic.List`1<!!0>,System.String)
inline void XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m69A4EA17370FA4464CCE4BEAD83D5E0D47AADB56 (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 *, String_t*, const RuntimeMethod*))XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m3E52F1FFE137D3A16050805AB648F726394436DC_gshared)(__this, ___descriptors0, ___id1, method);
}
// UnityEngine.XR.XRDisplaySubsystem Unity.XR.Oculus.OculusLoader::get_displaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * OculusLoader_get_displaySubsystem_mE2C42E00522835401105B4A163E0768AA433E71A (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method);
// UnityEngine.XR.XRInputSubsystem Unity.XR.Oculus.OculusLoader::get_inputSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * OculusLoader_get_inputSubsystem_m8E87DAAF3BB44B2F3945232518EAF6862E9D1B95 (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.RegisterUpdateCallback::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisterUpdateCallback_Initialize_m009EBB49477FAD1D7E03DA45EB80F15E6D28F521 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StartSubsystem<UnityEngine.XR.XRDisplaySubsystem>()
inline void XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_mF935C6C4671BBBEA57D48C65DE73B9D27EB611D7 (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, const RuntimeMethod*))XRLoaderHelper_StartSubsystem_TisRuntimeObject_m5FFD6719D8FE560199B25C5D3AF8D0D40DFD038E_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StartSubsystem<UnityEngine.XR.XRInputSubsystem>()
inline void XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m243694C799C58C0396A563991537B952A5B48F98 (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, const RuntimeMethod*))XRLoaderHelper_StartSubsystem_TisRuntimeObject_m5FFD6719D8FE560199B25C5D3AF8D0D40DFD038E_gshared)(__this, method);
}
// System.Void Unity.XR.Oculus.Development::OverrideDeveloperModeStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Development_OverrideDeveloperModeStart_mC9E24212121397B0C37A27904F5B95B4FD871C88 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StopSubsystem<UnityEngine.XR.XRDisplaySubsystem>()
inline void XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m8145C9418422BD4F45DBBF37D028DDD2F1A6F7AD (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, const RuntimeMethod*))XRLoaderHelper_StopSubsystem_TisRuntimeObject_m5700EB064085C2D3E817458AD01E0C97624102A7_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StopSubsystem<UnityEngine.XR.XRInputSubsystem>()
inline void XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m530AFB9035AAA37796915EEB42C678B7A7F39686 (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, const RuntimeMethod*))XRLoaderHelper_StopSubsystem_TisRuntimeObject_m5700EB064085C2D3E817458AD01E0C97624102A7_gshared)(__this, method);
}
// System.Void Unity.XR.Oculus.Development::OverrideDeveloperModeStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Development_OverrideDeveloperModeStop_mF62FEF98A60806E453F85B7419FE8A726A54A621 (const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.RegisterUpdateCallback::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisterUpdateCallback_Deinitialize_m5783A25B492DD2271AF20528CC7225AA69B48D2B (const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<UnityEngine.XR.XRDisplaySubsystem>()
inline void XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7AE6139F914F84F8A7AA30CC70F6A01A757E1BE3 (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, const RuntimeMethod*))XRLoaderHelper_DestroySubsystem_TisRuntimeObject_m43760686D2E4C1FBCE4BD18489E767F294A68E8A_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<UnityEngine.XR.XRInputSubsystem>()
inline void XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m3724DC2747A9C6A68F78041E6FA78F6AC5CB39C8 (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, const RuntimeMethod*))XRLoaderHelper_DestroySubsystem_TisRuntimeObject_m43760686D2E4C1FBCE4BD18489E767F294A68E8A_gshared)(__this, method);
}
// System.Boolean Unity.XR.Oculus.NativeMethods::LoadOVRPlugin(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_LoadOVRPlugin_m4D4C796D2F76D0CA13969C61603C01B0A26478E7 (String_t* ___ovrpPath0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper__ctor_mD27E0396EC4B11E208CF891642475B496CADAC9B (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>::.ctor()
inline void List_1__ctor_mF19C6A53B3B3B3BE0F1915716886E25C49467F00 (List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m6A950B4252C0E5235E96AFE2360A90333D479AFB (List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.InputSystem.InputControl::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControl_FinishSetup_m6C5197AC4E2CE043C961C73FAE231A3CE403AB43 (InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701 * __this, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusRemote::set_back(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusRemote_set_back_m4C382005E2D041A5692C77D5B3EE1FA7C45AD4DB_inline (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusRemote::set_start(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusRemote_set_start_m59B1620D1A23592159814952F566E1AE1D56A96C_inline (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusRemote::set_touchpad(UnityEngine.InputSystem.Controls.Vector2Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusRemote_set_touchpad_mE33ADFCA48ADEEFF93276F772338DDD411F2B922_inline (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputDevice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevice__ctor_m31094E7AA7ADF06B4A30AB3B3B154618399A9846 (InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B * __this, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.OculusRestarter::set_TimeBetweenRestartAttempts(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusRestarter_set_TimeBetweenRestartAttempts_m3FDA87CEAC42CF6AF6521DFF3E4EB1CC0BC9454F_inline (float ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879 (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Unity.XR.Oculus.OculusRestarter>()
inline OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * GameObject_AddComponent_TisOculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_m202AE7171E57107B6E8DDAFA0F044806B81EFBFF (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<Unity.XR.Oculus.OculusRestarter>()
inline OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * GameObject_GetComponent_TisOculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_mACE49B13D3DE9F0EE5F3B471A3230A439C6C8A92 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Single Unity.XR.Oculus.OculusRestarter::get_TimeBetweenRestartAttempts()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float OculusRestarter_get_TimeBetweenRestartAttempts_m4643B819097BB5929C5EA5AAC0BBD798817B2465_inline (const RuntimeMethod* method);
// System.Collections.IEnumerator Unity.XR.Oculus.OculusRestarter::PauseAndRestartCoroutine(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OculusRestarter_PauseAndRestartCoroutine_mE17893C50E82B62DABC119C745041BD732A93E72 (OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * __this, float ___pauseTimeInSeconds0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.OculusRestarter/<PauseAndRestartCoroutine>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseAndRestartCoroutineU3Ed__22__ctor_mE9A0F9B54589637F39AD77E522D257AAF233F600 (U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.OculusRestarter/<RestartCoroutine>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestartCoroutineU3Ed__23__ctor_mFBCFBC73BF40550C580D2DBD6446E6765106D5DC (U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods::GetShouldRestartSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetShouldRestartSession_m691BE303740AD0161244C7D02838D9A1397D8EA1 (const RuntimeMethod* method);
// Unity.XR.Oculus.OculusRestarter Unity.XR.Oculus.OculusRestarter::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * OculusRestarter_get_Instance_m39A581FAA5C8E45A6603F7FA0EA6CAD784887796 (const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.OculusRestarter::PauseAndRestart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusRestarter_PauseAndRestart_m28727BF6DE2EB3868DBCE80CB9FFB05F11800C9B (OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_thumbstick(UnityEngine.InputSystem.Controls.Vector2Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_thumbstick_m00F82EBCCC313F54B5A60F6A8447D92959B8716D_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_trigger(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_trigger_m6F6E887869AED80DBD9B218B5134F024841695FA_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_triggerTouched(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_triggerTouched_m339518BDD4A2BBD7CBE6C4B858C771FA39DA7157_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_grip(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_grip_mADCF99F3193B708BF7396D5DA73DAA8DB4B779A3_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_primaryButton(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_primaryButton_mA8700B473E56C05853C534BDDF9F68539A6C2FD4_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_secondaryButton(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_secondaryButton_m5BA77AC5600FEF3ECD35B02BBE329B6E9B22DFFB_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_gripPressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_gripPressed_m7039EC4B244C76C50A901D80509889E1ABDD4026_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_start(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_start_m4679F07AD3DA5CE874D244FAB956778862AFA931_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_thumbstickClicked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_thumbstickClicked_m6EDEFE81C41FCA01762CBEAA00D0472D8403C634_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_primaryTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_primaryTouched_mEC9BC1EFB27C6CA5786B139702E6D33FD84AB6D7_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_secondaryTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_secondaryTouched_mE7A945ED75984999AB0DCFE0E0E11A1515C85592_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_thumbstickTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_thumbstickTouched_mFE18A59ABD500CCC4DB33B6A22791D170B1A2018_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_triggerPressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_triggerPressed_m1BB81FA58DADC4EB3B71188F28FB3ABC00E59833_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_trackingState_m489EE336DEF47BAD050DD22AC9F01B6E48B35F92_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_isTracked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_isTracked_mC244243B9DC88A638E059D15C1AE0EBFF9A9EE2A_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_devicePosition_m70F8D567FC1F462D3F9448A27EE657B739558E10_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceRotation_mAAF6A6FF0283A463485FDF78733891EB3D44C5EC_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_deviceVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceVelocity_m52D4BC592FB6E47A498E50306AB9A343F73AAC66_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_deviceAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceAngularVelocity_mFDA9EEAFEEB4282AF8E2286BFC665534F7647FB7_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_deviceAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceAcceleration_mE7159D3C09C8821DE5D175AD0F1EF3BB21B8C584_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_deviceAngularAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceAngularAcceleration_mE7F8E9E296ADA9F2BFF9A07612315BD1428A15CE_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.XR.XRControllerWithRumble::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRControllerWithRumble__ctor_m144AC64AFA76873B0C51FA8789330DF914A9F7D5 (XRControllerWithRumble_tFBD01C9D685DD1E6E662FCF8066F11274AA0ABA8 * __this, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTrackingReference::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTrackingReference_set_trackingState_mEF7324C462A98E446070E0169D4409FFB2E7735A_inline (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTrackingReference::set_isTracked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTrackingReference_set_isTracked_mE8F3E0C098AE57B5B7FB82C6B58B63BFA5BC3CC4_inline (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTrackingReference::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTrackingReference_set_devicePosition_m2EC3DD9273A0831CCC9DC458F450E26CCB79F49A_inline (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTrackingReference::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTrackingReference_set_deviceRotation_m86012663D85BC459D875DE3F48F18C7A4FF4C670_inline (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Application::add_onBeforeRender(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_onBeforeRender_m1324FCAC06439BC14CFCE062C6BEFB76C7501228 (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::remove_onBeforeRender(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_remove_onBeforeRender_mD2FFDA214D242F524EFF15932A7334F1F0D526D0 (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.InputFocus::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFocus_Update_mA29F59D3148E351431EF53DEEE921320DC66945E (const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.OculusSession::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusSession_Update_m9956F648A7B5BE12D6D26ED0DEBFD7B20722E4C2 (const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods::GetAppShouldQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetAppShouldQuit_m4A8AC6995227A1AA4F5EF087051DA57735D0C486 (const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m10E44C187C0E5807F9C955A176885FAA95829267 (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.OculusRestarter/<PauseAndRestartCoroutine>d__22::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseAndRestartCoroutineU3Ed__22_U3CU3Em__Finally1_m17836219B16F0E2F40AFE29DDADEACD9F0CEA00E (U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Collections.IEnumerator Unity.XR.Oculus.OculusRestarter::RestartCoroutine(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OculusRestarter_RestartCoroutine_mED386FBEC1602B3DB023E06F05EC3043E6FFC027 (OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * __this, bool ___shouldRestart0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_gshared_inline)(method);
}
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m2CDD2A21AF2BCE3CE07D634645F9A61B4CB7D9B3 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.OculusRestarter/<PauseAndRestartCoroutine>d__22::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseAndRestartCoroutineU3Ed__22_System_IDisposable_Dispose_m2D4C564714370227159B843E3E3FD992C00C00BC (U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.OculusRestarter/<RestartCoroutine>d__23::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestartCoroutineU3Ed__23_U3CU3Em__Finally1_m5D43CE3EF7B89A3C817C148215ABE10F5F221332 (U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D * __this, const RuntimeMethod* method);
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * XRGeneralSettings_get_Instance_mC714587778971DCD3EBECF8FC23741ED9A7A23BE_inline (const RuntimeMethod* method);
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544_inline (XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRManagerSettings::DeinitializeLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_DeinitializeLoader_m6AD4F079818DF78946C99AD8D49E3D343DAAF290 (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.XR.Management.XRManagerSettings::InitializeLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_InitializeLoader_m92B987C89AF6F7E7D05718296243E0ED021FD6B3 (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRManagerSettings::StartSubsystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_StartSubsystems_mB9F502956C1FC6AD6D421CD36C3980B095B4282E (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method);
// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::get_activeLoader()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.OculusRestarter/<RestartCoroutine>d__23::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestartCoroutineU3Ed__23_System_IDisposable_Dispose_m3CB326B58BAA27EB44C80329052E1D2FBB7701B9 (U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D * __this, const RuntimeMethod* method);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL LoadOVRPlugin(Il2CppChar*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetUserDefinedSettings(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D );
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SetDeveloperModeStrict(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetAppHasInputFocus();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetAppShouldQuit();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetShouldRestartSession();
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
// System.Void Unity.XR.Oculus.Development::OverrideDeveloperModeStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Development_OverrideDeveloperModeStart_mC9E24212121397B0C37A27904F5B95B4FD871C88 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CA2736EB42A97B73E816FF8369ACA2005FA5AA2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// bool enable = true;
		V_0 = (bool)1;
		// bool shouldOverride = false;
		V_1 = (bool)0;
		// if (s_CachedMode != UserDeveloperModeSettingCache.NoUserSettingCached)
		int32_t L_0 = ((Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_StaticFields*)il2cpp_codegen_static_fields_for(Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var))->get_s_CachedMode_0();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// shouldOverride = true;
		V_1 = (bool)1;
		// enable = (s_CachedMode == UserDeveloperModeSettingCache.UserSettingTrue);
		int32_t L_1 = ((Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_StaticFields*)il2cpp_codegen_static_fields_for(Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var))->get_s_CachedMode_0();
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
		// }
		goto IL_0021;
	}

IL_0018:
	{
		// else if (Debug.isDebugBuild)
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Debug_get_isDebugBuild_mEFC4658EA34BA262EB8D6D1AB5FDB73478EA32C7(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// shouldOverride = true;
		V_1 = (bool)1;
	}

IL_0021:
	{
		// if (shouldOverride && !NativeMethods.SetDeveloperModeStrict(enable))
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		bool L_4 = V_0;
		bool L_5;
		L_5 = NativeMethods_SetDeveloperModeStrict_mB7F4A67FF3C6396D8600290B3BBA555A6CF56767(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0036;
		}
	}
	{
		// Debug.LogError("Failed to set DeveloperMode on Start.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(_stringLiteral9CA2736EB42A97B73E816FF8369ACA2005FA5AA2, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.Development::OverrideDeveloperModeStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Development_OverrideDeveloperModeStop_mF62FEF98A60806E453F85B7419FE8A726A54A621 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C095088ADD88C25A47E7BBE6A81D13C798F9E75);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!NativeMethods.SetDeveloperModeStrict(false))
		bool L_0;
		L_0 = NativeMethods_SetDeveloperModeStrict_mB7F4A67FF3C6396D8600290B3BBA555A6CF56767((bool)0, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// Debug.LogError("Failed to set DeveloperMode to false on Stop.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(_stringLiteral6C095088ADD88C25A47E7BBE6A81D13C798F9E75, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// }
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
// UnityEngine.InputSystem.Controls.Vector2Control Unity.XR.Oculus.Input.GearVRTrackedController::get_touchpad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * GearVRTrackedController_get_touchpad_m2BACE799F4683543875CB2593CCFEF57A60BAFBA (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public Vector2Control touchpad { get; private set; }
		Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * L_0 = __this->get_U3CtouchpadU3Ek__BackingField_48();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_touchpad(UnityEngine.InputSystem.Controls.Vector2Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_touchpad_mD30A931E272C79A49E97DF66595142067628B1C4 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2Control touchpad { get; private set; }
		Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * L_0 = ___value0;
		__this->set_U3CtouchpadU3Ek__BackingField_48(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.AxisControl Unity.XR.Oculus.Input.GearVRTrackedController::get_trigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * GearVRTrackedController_get_trigger_mABDA6803531A560849DFB5FD039525385EB70742 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public AxisControl trigger { get; private set; }
		AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * L_0 = __this->get_U3CtriggerU3Ek__BackingField_49();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_trigger(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_trigger_m16158CF3316E7AD4D01FCEEAA38A4FE2A931855C (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl trigger { get; private set; }
		AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * L_0 = ___value0;
		__this->set_U3CtriggerU3Ek__BackingField_49(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.GearVRTrackedController::get_back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * GearVRTrackedController_get_back_m9B54DB92B9E27F3D9373416B48420D814ECB2F3D (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl back { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = __this->get_U3CbackU3Ek__BackingField_50();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_back(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_back_m76F2BCBDDFA3B3745449EE8C3B4E23AE9D8E44E9 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl back { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CbackU3Ek__BackingField_50(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.GearVRTrackedController::get_triggerPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * GearVRTrackedController_get_triggerPressed_mF8873135BBA2363EC378F700AA6F81D530B9F85C (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl triggerPressed { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = __this->get_U3CtriggerPressedU3Ek__BackingField_51();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_triggerPressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_triggerPressed_m5102DF95F8DFDEC87D81A6CAF1B220DF8BFB13EF (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl triggerPressed { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CtriggerPressedU3Ek__BackingField_51(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.GearVRTrackedController::get_touchpadClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * GearVRTrackedController_get_touchpadClicked_m8AC4A899F62C7B880E63BAB1A5DD520BCB018354 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl touchpadClicked { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = __this->get_U3CtouchpadClickedU3Ek__BackingField_52();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_touchpadClicked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_touchpadClicked_m0093E9CE2D7EF99F8805E5CA5FBEB9828B32797F (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl touchpadClicked { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CtouchpadClickedU3Ek__BackingField_52(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.GearVRTrackedController::get_touchpadTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * GearVRTrackedController_get_touchpadTouched_m72AE01D38A03D78FCED6552D552FE87FE0732338 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl touchpadTouched { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = __this->get_U3CtouchpadTouchedU3Ek__BackingField_53();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_touchpadTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_touchpadTouched_m718CB22287AB2B37C1234F4B9553DE539230BD20 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl touchpadTouched { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CtouchpadTouchedU3Ek__BackingField_53(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.IntegerControl Unity.XR.Oculus.Input.GearVRTrackedController::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * GearVRTrackedController_get_trackingState_mBB9EDE610B5E4ACF57493D528B2ACA5F099CBBAC (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public new IntegerControl trackingState { get; private set; }
		IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * L_0 = __this->get_U3CtrackingStateU3Ek__BackingField_54();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_trackingState_mE69779797C93F9EC24F8AE569D74D3561EA3AA57 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * ___value0, const RuntimeMethod* method)
{
	{
		// public new IntegerControl trackingState { get; private set; }
		IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * L_0 = ___value0;
		__this->set_U3CtrackingStateU3Ek__BackingField_54(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.GearVRTrackedController::get_isTracked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * GearVRTrackedController_get_isTracked_m380A7FC330976183D80F58C9425984BC9E5D81DC (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public new ButtonControl isTracked { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = __this->get_U3CisTrackedU3Ek__BackingField_55();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_isTracked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_isTracked_m98CC84B04F3CCE061D9FAC495D072E9413163A84 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public new ButtonControl isTracked { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CisTrackedU3Ek__BackingField_55(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.GearVRTrackedController::get_devicePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * GearVRTrackedController_get_devicePosition_mFFEB02D9FEBFAEAC99121A2B6B217BC45983A67E (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public new Vector3Control devicePosition { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = __this->get_U3CdevicePositionU3Ek__BackingField_56();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_devicePosition_m6AB20284CEF59FB18E1DCC05F9A9471D0C36F86F (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control devicePosition { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CdevicePositionU3Ek__BackingField_56(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.GearVRTrackedController::get_deviceRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * GearVRTrackedController_get_deviceRotation_m6FEA2C6421B6120DE92786624D5654268C53E498 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * L_0 = __this->get_U3CdeviceRotationU3Ek__BackingField_57();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_deviceRotation_m68C593F68DAE58EA02D9D641937FEF02F7DDC72D (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * L_0 = ___value0;
		__this->set_U3CdeviceRotationU3Ek__BackingField_57(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.GearVRTrackedController::get_deviceAngularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * GearVRTrackedController_get_deviceAngularVelocity_m58E258AF2CB9F7EC2246CB8D846C29E77C1D7ADF (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularVelocity { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = __this->get_U3CdeviceAngularVelocityU3Ek__BackingField_58();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_deviceAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_deviceAngularVelocity_m4C0D01B20E744EB2AEF36D21A7C2B2703B449376 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularVelocity { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CdeviceAngularVelocityU3Ek__BackingField_58(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.GearVRTrackedController::get_deviceAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * GearVRTrackedController_get_deviceAcceleration_mA3ABF23B30B304FF898155AE7CE727D2CA33C6CC (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAcceleration { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = __this->get_U3CdeviceAccelerationU3Ek__BackingField_59();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_deviceAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_deviceAcceleration_m440F6ADE8ACC1758CE71975A3501208084DEA89A (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAcceleration { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CdeviceAccelerationU3Ek__BackingField_59(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.GearVRTrackedController::get_deviceAngularAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * GearVRTrackedController_get_deviceAngularAcceleration_mF2AA91CF73F3361E80032A35DDF81BE83D34F695 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularAcceleration { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = __this->get_U3CdeviceAngularAccelerationU3Ek__BackingField_60();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_deviceAngularAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_deviceAngularAcceleration_mD6E63593A48342E40BFA776879AF1CF19123B760 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularAcceleration { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CdeviceAngularAccelerationU3Ek__BackingField_60(L_0);
		return;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_FinishSetup_m435CA1B37517D6EA68D43DDBBC4A334C1B5F955D (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisAxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61_m50AA28A6A79BF457341DE5768D5F8F2E1D0B0B4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisIntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3_mADA7BED738CAC95FE7FE96EB3C14277B7158E331_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisQuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A_mDC7B154D598EA657266845F32A54167E63A3C42E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1_m6FAC1ACEDE733EE9B82D626AA2E0BDE4A5705980_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral381617D1A1C0C848CBE085A3C3BF523A03E9659F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4375062BD8882E451B6BEE137E47CDAFE50A90EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48FC1F936713D53F5EFACC314E330907113FDC9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E00AB7EC86A20EC1ECB923C22939506C6806CC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C0461316058197D67FFB59CE6A345F2B7BEA590);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FE5967523CA0E49A247084021DB0C0C2C996FDF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB81B10F5CAB114184CB2AEC199DE4C618C7F57DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3E98CA0D21B6899AC08C4CE0868CF1323933585);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDC78BA63A133C81FC2DD3E3CA7EC02E945F89CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.FinishSetup();
		XRController_FinishSetup_m9CE3D32BDE43475028823752C0FB7768B7E9F2CB(__this, /*hidden argument*/NULL);
		// touchpad = GetChildControl<Vector2Control>("touchpad");
		Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * L_0;
		L_0 = InputControl_GetChildControl_TisVector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1_m6FAC1ACEDE733EE9B82D626AA2E0BDE4A5705980(__this, _stringLiteral4375062BD8882E451B6BEE137E47CDAFE50A90EC, /*hidden argument*/InputControl_GetChildControl_TisVector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1_m6FAC1ACEDE733EE9B82D626AA2E0BDE4A5705980_RuntimeMethod_var);
		GearVRTrackedController_set_touchpad_mD30A931E272C79A49E97DF66595142067628B1C4_inline(__this, L_0, /*hidden argument*/NULL);
		// trigger = GetChildControl<AxisControl>("trigger");
		AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * L_1;
		L_1 = InputControl_GetChildControl_TisAxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61_m50AA28A6A79BF457341DE5768D5F8F2E1D0B0B4D(__this, _stringLiteral9FE5967523CA0E49A247084021DB0C0C2C996FDF, /*hidden argument*/InputControl_GetChildControl_TisAxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61_m50AA28A6A79BF457341DE5768D5F8F2E1D0B0B4D_RuntimeMethod_var);
		GearVRTrackedController_set_trigger_m16158CF3316E7AD4D01FCEEAA38A4FE2A931855C_inline(__this, L_1, /*hidden argument*/NULL);
		// back = GetChildControl<ButtonControl>("back");
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_2;
		L_2 = InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9(__this, _stringLiteral381617D1A1C0C848CBE085A3C3BF523A03E9659F, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9_RuntimeMethod_var);
		GearVRTrackedController_set_back_m76F2BCBDDFA3B3745449EE8C3B4E23AE9D8E44E9_inline(__this, L_2, /*hidden argument*/NULL);
		// triggerPressed = GetChildControl<ButtonControl>("triggerPressed");
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_3;
		L_3 = InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9(__this, _stringLiteral9C0461316058197D67FFB59CE6A345F2B7BEA590, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9_RuntimeMethod_var);
		GearVRTrackedController_set_triggerPressed_m5102DF95F8DFDEC87D81A6CAF1B220DF8BFB13EF_inline(__this, L_3, /*hidden argument*/NULL);
		// touchpadClicked = GetChildControl<ButtonControl>("touchpadClicked");
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_4;
		L_4 = InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9(__this, _stringLiteralEDC78BA63A133C81FC2DD3E3CA7EC02E945F89CE, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9_RuntimeMethod_var);
		GearVRTrackedController_set_touchpadClicked_m0093E9CE2D7EF99F8805E5CA5FBEB9828B32797F_inline(__this, L_4, /*hidden argument*/NULL);
		// touchpadTouched = GetChildControl<ButtonControl>("touchpadTouched");
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_5;
		L_5 = InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9(__this, _stringLiteralB81B10F5CAB114184CB2AEC199DE4C618C7F57DB, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9_RuntimeMethod_var);
		GearVRTrackedController_set_touchpadTouched_m718CB22287AB2B37C1234F4B9553DE539230BD20_inline(__this, L_5, /*hidden argument*/NULL);
		// trackingState = GetChildControl<IntegerControl>("trackingState");
		IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * L_6;
		L_6 = InputControl_GetChildControl_TisIntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3_mADA7BED738CAC95FE7FE96EB3C14277B7158E331(__this, _stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D, /*hidden argument*/InputControl_GetChildControl_TisIntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3_mADA7BED738CAC95FE7FE96EB3C14277B7158E331_RuntimeMethod_var);
		GearVRTrackedController_set_trackingState_mE69779797C93F9EC24F8AE569D74D3561EA3AA57_inline(__this, L_6, /*hidden argument*/NULL);
		// isTracked = GetChildControl<ButtonControl>("isTracked");
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_7;
		L_7 = InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9(__this, _stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9_RuntimeMethod_var);
		GearVRTrackedController_set_isTracked_m98CC84B04F3CCE061D9FAC495D072E9413163A84_inline(__this, L_7, /*hidden argument*/NULL);
		// devicePosition = GetChildControl<Vector3Control>("devicePosition");
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_8;
		L_8 = InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71(__this, _stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71_RuntimeMethod_var);
		GearVRTrackedController_set_devicePosition_m6AB20284CEF59FB18E1DCC05F9A9471D0C36F86F_inline(__this, L_8, /*hidden argument*/NULL);
		// deviceRotation = GetChildControl<QuaternionControl>("deviceRotation");
		QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * L_9;
		L_9 = InputControl_GetChildControl_TisQuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A_mDC7B154D598EA657266845F32A54167E63A3C42E(__this, _stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567, /*hidden argument*/InputControl_GetChildControl_TisQuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A_mDC7B154D598EA657266845F32A54167E63A3C42E_RuntimeMethod_var);
		GearVRTrackedController_set_deviceRotation_m68C593F68DAE58EA02D9D641937FEF02F7DDC72D_inline(__this, L_9, /*hidden argument*/NULL);
		// deviceAngularVelocity = GetChildControl<Vector3Control>("deviceAngularVelocity");
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_10;
		L_10 = InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71(__this, _stringLiteral48FC1F936713D53F5EFACC314E330907113FDC9D, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71_RuntimeMethod_var);
		GearVRTrackedController_set_deviceAngularVelocity_m4C0D01B20E744EB2AEF36D21A7C2B2703B449376_inline(__this, L_10, /*hidden argument*/NULL);
		// deviceAcceleration = GetChildControl<Vector3Control>("deviceAcceleration");
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_11;
		L_11 = InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71(__this, _stringLiteral5E00AB7EC86A20EC1ECB923C22939506C6806CC9, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71_RuntimeMethod_var);
		GearVRTrackedController_set_deviceAcceleration_m440F6ADE8ACC1758CE71975A3501208084DEA89A_inline(__this, L_11, /*hidden argument*/NULL);
		// deviceAngularAcceleration = GetChildControl<Vector3Control>("deviceAngularAcceleration");
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_12;
		L_12 = InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71(__this, _stringLiteralC3E98CA0D21B6899AC08C4CE0868CF1323933585, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71_RuntimeMethod_var);
		GearVRTrackedController_set_deviceAngularAcceleration_mD6E63593A48342E40BFA776879AF1CF19123B760_inline(__this, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController__ctor_m35059DBECC8470F3A2695CF33528C805722D6B6B (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		XRController__ctor_m6A41F2DE173180F91042669887FB62732C89A83C(__this, /*hidden argument*/NULL);
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
// System.Boolean Unity.XR.Oculus.InputFocus::get_hasInputFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFocus_get_hasInputFocus_m89BC1D49BF5D1BD9207D5D32780FA93CEC6AD793 (const RuntimeMethod* method)
{
	{
		// return NativeMethods.GetHasInputFocus();
		bool L_0;
		L_0 = NativeMethods_GetHasInputFocus_mC5174AB5E09FCDEC72E3FE70EE041824A3328806(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.InputFocus::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFocus_Update_mA29F59D3148E351431EF53DEEE921320DC66945E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool G_B4_0 = false;
	bool G_B1_0 = false;
	bool G_B2_0 = false;
	bool G_B3_0 = false;
	bool G_B8_0 = false;
	bool G_B5_0 = false;
	bool G_B6_0 = false;
	bool G_B7_0 = false;
	{
		// bool appHasInputFocus = hasInputFocus;
		bool L_0;
		L_0 = InputFocus_get_hasInputFocus_m89BC1D49BF5D1BD9207D5D32780FA93CEC6AD793(/*hidden argument*/NULL);
		// if (!appHasInputFocus && hadInputFocus)
		bool L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B4_0 = L_1;
			goto IL_0020;
		}
	}
	{
		bool L_2 = ((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_hadInputFocus_2();
		G_B2_0 = G_B1_0;
		if (!L_2)
		{
			G_B4_0 = G_B1_0;
			goto IL_0020;
		}
	}
	{
		// if (InputFocusLost != null)
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_InputFocusLost_1();
		G_B3_0 = G_B2_0;
		if (!L_3)
		{
			G_B4_0 = G_B2_0;
			goto IL_0020;
		}
	}
	{
		// InputFocusLost();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = ((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_InputFocusLost_1();
		NullCheck(L_4);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_4, /*hidden argument*/NULL);
		G_B4_0 = G_B3_0;
	}

IL_0020:
	{
		// if (appHasInputFocus && !hadInputFocus)
		bool L_5 = G_B4_0;
		G_B5_0 = L_5;
		if (!L_5)
		{
			G_B8_0 = L_5;
			goto IL_003b;
		}
	}
	{
		bool L_6 = ((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_hadInputFocus_2();
		G_B6_0 = G_B5_0;
		if (L_6)
		{
			G_B8_0 = G_B5_0;
			goto IL_003b;
		}
	}
	{
		// if (InputFocusAcquired != null)
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = ((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_InputFocusAcquired_0();
		G_B7_0 = G_B6_0;
		if (!L_7)
		{
			G_B8_0 = G_B6_0;
			goto IL_003b;
		}
	}
	{
		// InputFocusAcquired();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = ((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_InputFocusAcquired_0();
		NullCheck(L_8);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_8, /*hidden argument*/NULL);
		G_B8_0 = G_B7_0;
	}

IL_003b:
	{
		// hadInputFocus = appHasInputFocus;
		((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->set_hadInputFocus_2(G_B8_0);
		// }
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
// System.Void Unity.XR.Oculus.InputLayoutLoader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputLayoutLoader__cctor_m7BFAE3F72F69BA6A7FA77F14FFD935C18DF5530D (const RuntimeMethod* method)
{
	{
		// RegisterInputLayouts();
		InputLayoutLoader_RegisterInputLayouts_m7D259AB887FFDEB3E4FA2F7D991F498BDC00DE15(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.InputLayoutLoader::RegisterInputLayouts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputLayoutLoader_RegisterInputLayouts_m7D259AB887FFDEB3E4FA2F7D991F498BDC00DE15 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_RegisterLayout_TisGearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D_m73C07C0A05DC24057C95EA08E8DE02F2399EC482_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_RegisterLayout_TisOculusGoController_tE3AB6FC9374A8DB24CFA9AB6592CB6235F6AB21B_mEF936CA7BA6ECC090DD4C3FE81F2D09403AC8101_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_RegisterLayout_TisOculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC_mB7C9CEFE0472DEAE7192DC89DE33CB2925EEE930_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_RegisterLayout_TisOculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A_m30D0609F6053B2EA7D155FB616D299C4172F008E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_RegisterLayout_TisOculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3_mE279C4BC1F5C51A298C4F8505823E6F8DC0761B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_RegisterLayout_TisOculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA_m8D0F6C076C0E8BFA618D11E7A0F2F457572B39BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_RegisterLayout_TisOculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807_m73A539F782FFEA18B6DA805B0A6B31BB2420A5D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t86ED0830F667A4972D94D670A2702050BCF82B88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m1ACF1D32EC082D78D7F7D997E93BD9AAEF56A664_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07FB9B6025681C5CF07481693E1C2043EA488AFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86986460D761FE23D8BB01FB96CFA1B151516AE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2BD5C6F3FA74D0EF59EAFB5EDD968485F2F807C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7259D04FD257B3E588D4DDE5C297D07A9BF111B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5E18713BEC060441013BF24EEFF304074095168);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCA884BDE3461B51BC3CBE077E141428C6D55245);
		s_Il2CppMethodInitialized = true;
	}
	InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t1840F33AA72FFDFEF6AC4DD7EF5FA3C598530094  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// InputSystem.RegisterLayout<OculusHMD>(
		//     matches: new InputDeviceMatcher()
		//         .WithInterface(XRUtilities.InterfaceMatchAnyVersion)
		//         .WithProduct("^(Oculus Rift)|^(Oculus Quest)|^(Oculus Go)"));
		InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D * L_0 = (&V_0);
		il2cpp_codegen_initobj(L_0, sizeof(InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D ));
		InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D  L_1;
		L_1 = InputDeviceMatcher_WithInterface_m71824BD735E7B59FC470FA2AFF2B747272854DEB((InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D *)L_0, _stringLiteralDCA884BDE3461B51BC3CBE077E141428C6D55245, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D  L_2;
		L_2 = InputDeviceMatcher_WithProduct_mF565EA2A291674F7E3589D40591C646A3B6C8466((InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D *)(&V_0), _stringLiteral86986460D761FE23D8BB01FB96CFA1B151516AE3, (bool)1, /*hidden argument*/NULL);
		Nullable_1_t1840F33AA72FFDFEF6AC4DD7EF5FA3C598530094  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Nullable_1__ctor_m1ACF1D32EC082D78D7F7D997E93BD9AAEF56A664((&L_3), L_2, /*hidden argument*/Nullable_1__ctor_m1ACF1D32EC082D78D7F7D997E93BD9AAEF56A664_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(InputSystem_t86ED0830F667A4972D94D670A2702050BCF82B88_il2cpp_TypeInfo_var);
		InputSystem_RegisterLayout_TisOculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A_m30D0609F6053B2EA7D155FB616D299C4172F008E((String_t*)NULL, L_3, /*hidden argument*/InputSystem_RegisterLayout_TisOculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A_m30D0609F6053B2EA7D155FB616D299C4172F008E_RuntimeMethod_var);
		// InputSystem.RegisterLayout<OculusTouchController>(
		//     matches: new InputDeviceMatcher()
		//         .WithInterface(XRUtilities.InterfaceMatchAnyVersion)
		//         .WithProduct(@"(^(Oculus Touch Controller))|(^(Oculus Quest Controller))"));
		InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D * L_4 = (&V_0);
		il2cpp_codegen_initobj(L_4, sizeof(InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D ));
		InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D  L_5;
		L_5 = InputDeviceMatcher_WithInterface_m71824BD735E7B59FC470FA2AFF2B747272854DEB((InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D *)L_4, _stringLiteralDCA884BDE3461B51BC3CBE077E141428C6D55245, (bool)1, /*hidden argument*/NULL);
		V_0 = L_5;
		InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D  L_6;
		L_6 = InputDeviceMatcher_WithProduct_mF565EA2A291674F7E3589D40591C646A3B6C8466((InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D *)(&V_0), _stringLiteralA2BD5C6F3FA74D0EF59EAFB5EDD968485F2F807C, (bool)1, /*hidden argument*/NULL);
		Nullable_1_t1840F33AA72FFDFEF6AC4DD7EF5FA3C598530094  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Nullable_1__ctor_m1ACF1D32EC082D78D7F7D997E93BD9AAEF56A664((&L_7), L_6, /*hidden argument*/Nullable_1__ctor_m1ACF1D32EC082D78D7F7D997E93BD9AAEF56A664_RuntimeMethod_var);
		InputSystem_RegisterLayout_TisOculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA_m8D0F6C076C0E8BFA618D11E7A0F2F457572B39BD((String_t*)NULL, L_7, /*hidden argument*/InputSystem_RegisterLayout_TisOculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA_m8D0F6C076C0E8BFA618D11E7A0F2F457572B39BD_RuntimeMethod_var);
		// InputSystem.RegisterLayout<OculusRemote>(
		//     matches: new InputDeviceMatcher()
		//         .WithInterface(XRUtilities.InterfaceMatchAnyVersion)
		//         .WithProduct(@"Oculus Remote"));
		InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D * L_8 = (&V_0);
		il2cpp_codegen_initobj(L_8, sizeof(InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D ));
		InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D  L_9;
		L_9 = InputDeviceMatcher_WithInterface_m71824BD735E7B59FC470FA2AFF2B747272854DEB((InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D *)L_8, _stringLiteralDCA884BDE3461B51BC3CBE077E141428C6D55245, (bool)1, /*hidden argument*/NULL);
		V_0 = L_9;
		InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D  L_10;
		L_10 = InputDeviceMatcher_WithProduct_mF565EA2A291674F7E3589D40591C646A3B6C8466((InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D *)(&V_0), _stringLiteralA7259D04FD257B3E588D4DDE5C297D07A9BF111B, (bool)1, /*hidden argument*/NULL);
		Nullable_1_t1840F33AA72FFDFEF6AC4DD7EF5FA3C598530094  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Nullable_1__ctor_m1ACF1D32EC082D78D7F7D997E93BD9AAEF56A664((&L_11), L_10, /*hidden argument*/Nullable_1__ctor_m1ACF1D32EC082D78D7F7D997E93BD9AAEF56A664_RuntimeMethod_var);
		InputSystem_RegisterLayout_TisOculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3_mE279C4BC1F5C51A298C4F8505823E6F8DC0761B4((String_t*)NULL, L_11, /*hidden argument*/InputSystem_RegisterLayout_TisOculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3_mE279C4BC1F5C51A298C4F8505823E6F8DC0761B4_RuntimeMethod_var);
		// InputSystem.RegisterLayout<OculusTrackingReference>(
		//     matches: new InputDeviceMatcher()
		//         .WithInterface(XRUtilities.InterfaceMatchAnyVersion)
		//         .WithProduct(@"((Tracking Reference)|(^(Oculus Rift [a-zA-Z0-9]* \(Camera)))"));
		InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D * L_12 = (&V_0);
		il2cpp_codegen_initobj(L_12, sizeof(InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D ));
		InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D  L_13;
		L_13 = InputDeviceMatcher_WithInterface_m71824BD735E7B59FC470FA2AFF2B747272854DEB((InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D *)L_12, _stringLiteralDCA884BDE3461B51BC3CBE077E141428C6D55245, (bool)1, /*hidden argument*/NULL);
		V_0 = L_13;
		InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D  L_14;
		L_14 = InputDeviceMatcher_WithProduct_mF565EA2A291674F7E3589D40591C646A3B6C8466((InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D *)(&V_0), _stringLiteral07FB9B6025681C5CF07481693E1C2043EA488AFE, (bool)1, /*hidden argument*/NULL);
		Nullable_1_t1840F33AA72FFDFEF6AC4DD7EF5FA3C598530094  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Nullable_1__ctor_m1ACF1D32EC082D78D7F7D997E93BD9AAEF56A664((&L_15), L_14, /*hidden argument*/Nullable_1__ctor_m1ACF1D32EC082D78D7F7D997E93BD9AAEF56A664_RuntimeMethod_var);
		InputSystem_RegisterLayout_TisOculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807_m73A539F782FFEA18B6DA805B0A6B31BB2420A5D3((String_t*)NULL, L_15, /*hidden argument*/InputSystem_RegisterLayout_TisOculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807_m73A539F782FFEA18B6DA805B0A6B31BB2420A5D3_RuntimeMethod_var);
		// InputSystem.RegisterLayout<OculusGoController>(
		//     matches: new InputDeviceMatcher()
		//         .WithInterface(XRUtilities.InterfaceMatchAnyVersion)
		//         .WithProduct("^(Oculus Tracked Remote)"));
		InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D * L_16 = (&V_0);
		il2cpp_codegen_initobj(L_16, sizeof(InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D ));
		InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D  L_17;
		L_17 = InputDeviceMatcher_WithInterface_m71824BD735E7B59FC470FA2AFF2B747272854DEB((InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D *)L_16, _stringLiteralDCA884BDE3461B51BC3CBE077E141428C6D55245, (bool)1, /*hidden argument*/NULL);
		V_0 = L_17;
		InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D  L_18;
		L_18 = InputDeviceMatcher_WithProduct_mF565EA2A291674F7E3589D40591C646A3B6C8466((InputDeviceMatcher_tA0D74475DAFE2D0B54097D4C9D465CE8BE3E4B9D *)(&V_0), _stringLiteralB5E18713BEC060441013BF24EEFF304074095168, (bool)1, /*hidden argument*/NULL);
		Nullable_1_t1840F33AA72FFDFEF6AC4DD7EF5FA3C598530094  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Nullable_1__ctor_m1ACF1D32EC082D78D7F7D997E93BD9AAEF56A664((&L_19), L_18, /*hidden argument*/Nullable_1__ctor_m1ACF1D32EC082D78D7F7D997E93BD9AAEF56A664_RuntimeMethod_var);
		InputSystem_RegisterLayout_TisOculusGoController_tE3AB6FC9374A8DB24CFA9AB6592CB6235F6AB21B_mEF936CA7BA6ECC090DD4C3FE81F2D09403AC8101((String_t*)NULL, L_19, /*hidden argument*/InputSystem_RegisterLayout_TisOculusGoController_tE3AB6FC9374A8DB24CFA9AB6592CB6235F6AB21B_mEF936CA7BA6ECC090DD4C3FE81F2D09403AC8101_RuntimeMethod_var);
		// InputSystem.RegisterLayout<OculusHMDExtended>();
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t1840F33AA72FFDFEF6AC4DD7EF5FA3C598530094 ));
		Nullable_1_t1840F33AA72FFDFEF6AC4DD7EF5FA3C598530094  L_20 = V_1;
		InputSystem_RegisterLayout_TisOculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC_mB7C9CEFE0472DEAE7192DC89DE33CB2925EEE930((String_t*)NULL, L_20, /*hidden argument*/InputSystem_RegisterLayout_TisOculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC_mB7C9CEFE0472DEAE7192DC89DE33CB2925EEE930_RuntimeMethod_var);
		// InputSystem.RegisterLayout<GearVRTrackedController>();
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t1840F33AA72FFDFEF6AC4DD7EF5FA3C598530094 ));
		Nullable_1_t1840F33AA72FFDFEF6AC4DD7EF5FA3C598530094  L_21 = V_1;
		InputSystem_RegisterLayout_TisGearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D_m73C07C0A05DC24057C95EA08E8DE02F2399EC482((String_t*)NULL, L_21, /*hidden argument*/InputSystem_RegisterLayout_TisGearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D_m73C07C0A05DC24057C95EA08E8DE02F2399EC482_RuntimeMethod_var);
		// }
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
// System.Boolean Unity.XR.Oculus.NativeMethods::LoadOVRPlugin(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_LoadOVRPlugin_m4D4C796D2F76D0CA13969C61603C01B0A26478E7 (String_t* ___ovrpPath0, const RuntimeMethod* method)
{
	{
		// return Internal.LoadOVRPlugin(ovrpPath);
		String_t* L_0 = ___ovrpPath0;
		bool L_1;
		L_1 = Internal_LoadOVRPlugin_m20BF6ADFC47F043ED9CB9F86199E26C8A46AD5AF(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Unity.XR.Oculus.NativeMethods::SetUserDefinedSettings(Unity.XR.Oculus.NativeMethods/UserDefinedSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetUserDefinedSettings_m60831E50BCEB63E8B8E3A6421CE2D6BC21FB6FCD (UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D  ___settings0, const RuntimeMethod* method)
{
	{
		// Internal.SetUserDefinedSettings(settings);
		UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D  L_0 = ___settings0;
		Internal_SetUserDefinedSettings_mE187F03B58FEB8FE874B938E28401C06C919221E(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::SetDeveloperModeStrict(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_SetDeveloperModeStrict_mB7F4A67FF3C6396D8600290B3BBA555A6CF56767 (bool ___active0, const RuntimeMethod* method)
{
	{
		// return Internal.SetDeveloperModeStrict(active);
		bool L_0 = ___active0;
		bool L_1;
		L_1 = Internal_SetDeveloperModeStrict_m0A2121361A4FFDA8D0EF716D2C011F0EF19A34F8(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetHasInputFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetHasInputFocus_mC5174AB5E09FCDEC72E3FE70EE041824A3328806 (const RuntimeMethod* method)
{
	{
		// return Internal.GetAppHasInputFocus();
		bool L_0;
		L_0 = Internal_GetAppHasInputFocus_mA679379FDE6F3AFAFBF35841818A0BD5A492579F(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetAppShouldQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetAppShouldQuit_m4A8AC6995227A1AA4F5EF087051DA57735D0C486 (const RuntimeMethod* method)
{
	{
		// return Internal.GetAppShouldQuit();
		bool L_0;
		L_0 = Internal_GetAppShouldQuit_m2201DC6D753AE50E8E041C75816721CC622DA353(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetShouldRestartSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetShouldRestartSession_m691BE303740AD0161244C7D02838D9A1397D8EA1 (const RuntimeMethod* method)
{
	{
		// return Internal.GetShouldRestartSession();
		bool L_0;
		L_0 = Internal_GetShouldRestartSession_m232B73B6EB98D8E93F361FFBEDC386E93CD86E1E(/*hidden argument*/NULL);
		return L_0;
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
// System.Void Unity.XR.Oculus.Input.OculusGoController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusGoController__ctor_mA08B0DA17D85ACD7166DE362B280B0E019F02719 (OculusGoController_tE3AB6FC9374A8DB24CFA9AB6592CB6235F6AB21B * __this, const RuntimeMethod* method)
{
	{
		GearVRTrackedController__ctor_m35059DBECC8470F3A2695CF33528C805722D6B6B(__this, /*hidden argument*/NULL);
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
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusHMD::get_userPresence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * OculusHMD_get_userPresence_m1DDBF0FB361F98C1DF1185F2914CC22E74609F69 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl userPresence { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = __this->get_U3CuserPresenceU3Ek__BackingField_54();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_userPresence(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_userPresence_m96741F0BBE2A8070F516DA685E65CCAA514A1679 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl userPresence { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CuserPresenceU3Ek__BackingField_54(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.IntegerControl Unity.XR.Oculus.Input.OculusHMD::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * OculusHMD_get_trackingState_m0BAF221BDCD256B2B6EC1F71693CE9314AFFBA50 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public new IntegerControl trackingState { get; private set; }
		IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * L_0 = __this->get_U3CtrackingStateU3Ek__BackingField_55();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_trackingState_mCC316B092DB4A9129733B960684AB3859B18E663 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * ___value0, const RuntimeMethod* method)
{
	{
		// public new IntegerControl trackingState { get; private set; }
		IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * L_0 = ___value0;
		__this->set_U3CtrackingStateU3Ek__BackingField_55(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusHMD::get_isTracked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * OculusHMD_get_isTracked_m47717FA0FAF5B6B49C1F79F6EF28CA479ABE9EF3 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public new ButtonControl isTracked { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = __this->get_U3CisTrackedU3Ek__BackingField_56();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_isTracked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_isTracked_mFC9B8122161957BCBC36759F1AA976A2ABFBE2C7 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public new ButtonControl isTracked { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CisTrackedU3Ek__BackingField_56(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_devicePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * OculusHMD_get_devicePosition_m57F7597CABC0C32E842EE05B891C1B2719AF91C6 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public new Vector3Control devicePosition { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = __this->get_U3CdevicePositionU3Ek__BackingField_57();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_devicePosition_m483AA5BEACD9BE4452716A4FD93BE41140B27B51 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control devicePosition { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CdevicePositionU3Ek__BackingField_57(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.OculusHMD::get_deviceRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * OculusHMD_get_deviceRotation_mB7216A305BA8AE76A665B6F6C077C10B2955A3CD (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * L_0 = __this->get_U3CdeviceRotationU3Ek__BackingField_58();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_deviceRotation_m69931E5CCA4FFE13D1901888AA7FDB6996CA76B5 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * L_0 = ___value0;
		__this->set_U3CdeviceRotationU3Ek__BackingField_58(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_deviceAngularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * OculusHMD_get_deviceAngularVelocity_mE77B7DBD525705D40848548BF83BEEC5A9F7C06C (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularVelocity { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = __this->get_U3CdeviceAngularVelocityU3Ek__BackingField_59();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_deviceAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_deviceAngularVelocity_mB7C37988CBA0AE9B50F99B7F7C2871B40C048CA1 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularVelocity { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CdeviceAngularVelocityU3Ek__BackingField_59(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_deviceAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * OculusHMD_get_deviceAcceleration_m84E4E45E8FB6802EFE129E611087585061FAF698 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAcceleration { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = __this->get_U3CdeviceAccelerationU3Ek__BackingField_60();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_deviceAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_deviceAcceleration_m23CDE7042398488476090D336D3F0A38DEDF2FC0 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAcceleration { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CdeviceAccelerationU3Ek__BackingField_60(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_deviceAngularAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * OculusHMD_get_deviceAngularAcceleration_mD970B466A555B1687EA7444BCAE18238ABF6B85A (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularAcceleration { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = __this->get_U3CdeviceAngularAccelerationU3Ek__BackingField_61();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_deviceAngularAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_deviceAngularAcceleration_mB21A55CB0306B56B5D0A1311E37D1004A2C39E85 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularAcceleration { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CdeviceAngularAccelerationU3Ek__BackingField_61(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_leftEyePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * OculusHMD_get_leftEyePosition_m8D433C8776ADE93032BBFCC58827769249F8FE5E (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public new Vector3Control leftEyePosition { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = __this->get_U3CleftEyePositionU3Ek__BackingField_62();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_leftEyePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyePosition_mE14FDF9DD8C209780EB60BB8C57752188B0037DC (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control leftEyePosition { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CleftEyePositionU3Ek__BackingField_62(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.OculusHMD::get_leftEyeRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * OculusHMD_get_leftEyeRotation_m7C5E4B09F9EBC257C6094B510BEB788ECEFBF140 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl leftEyeRotation { get; private set; }
		QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * L_0 = __this->get_U3CleftEyeRotationU3Ek__BackingField_63();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_leftEyeRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyeRotation_m76DDAB16545F73D11319E052138DBBDFCB125D34 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl leftEyeRotation { get; private set; }
		QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * L_0 = ___value0;
		__this->set_U3CleftEyeRotationU3Ek__BackingField_63(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_leftEyeAngularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * OculusHMD_get_leftEyeAngularVelocity_mB9EB8A302873854BFE29B5D26AD23C885001D085 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control leftEyeAngularVelocity { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = __this->get_U3CleftEyeAngularVelocityU3Ek__BackingField_64();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_leftEyeAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyeAngularVelocity_m17F8A6AF388491942AB669556C3BC2C804478814 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control leftEyeAngularVelocity { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CleftEyeAngularVelocityU3Ek__BackingField_64(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_leftEyeAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * OculusHMD_get_leftEyeAcceleration_mD404C09C4B5E6ECE9D57C0A7720F8BEC54429F38 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control leftEyeAcceleration { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = __this->get_U3CleftEyeAccelerationU3Ek__BackingField_65();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_leftEyeAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyeAcceleration_m262585422FEB4CB04401A13E55F209E459807330 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control leftEyeAcceleration { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CleftEyeAccelerationU3Ek__BackingField_65(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_leftEyeAngularAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * OculusHMD_get_leftEyeAngularAcceleration_m365124E3CBBA877DB44AEA2B8245E444E14C738C (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control leftEyeAngularAcceleration { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = __this->get_U3CleftEyeAngularAccelerationU3Ek__BackingField_66();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_leftEyeAngularAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyeAngularAcceleration_mA37A13118C81CE1CF6F924F6DAEE02B92A1659DE (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control leftEyeAngularAcceleration { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CleftEyeAngularAccelerationU3Ek__BackingField_66(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_rightEyePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * OculusHMD_get_rightEyePosition_mA070F68EA0FE93CCD62146C41036259C2AD66FBB (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public new Vector3Control rightEyePosition { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = __this->get_U3CrightEyePositionU3Ek__BackingField_67();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_rightEyePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyePosition_m4327CA684F0A549A131308C28D7D8AE0CC8351C0 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control rightEyePosition { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CrightEyePositionU3Ek__BackingField_67(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.OculusHMD::get_rightEyeRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * OculusHMD_get_rightEyeRotation_m7A0C486F753E99C1175D537112BD869224C22515 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl rightEyeRotation { get; private set; }
		QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * L_0 = __this->get_U3CrightEyeRotationU3Ek__BackingField_68();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_rightEyeRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyeRotation_m3BCFCBCE5A52F9007AD7E98954B7BDAD51BF4583 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl rightEyeRotation { get; private set; }
		QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * L_0 = ___value0;
		__this->set_U3CrightEyeRotationU3Ek__BackingField_68(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_rightEyeAngularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * OculusHMD_get_rightEyeAngularVelocity_m53BBC7317C05E639E52462348513C30B95992F11 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control rightEyeAngularVelocity { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = __this->get_U3CrightEyeAngularVelocityU3Ek__BackingField_69();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_rightEyeAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyeAngularVelocity_m5AC3A1540E35C60730BA0276AADE239AACD8AF78 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control rightEyeAngularVelocity { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CrightEyeAngularVelocityU3Ek__BackingField_69(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_rightEyeAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * OculusHMD_get_rightEyeAcceleration_mF47D5D7C1586BCDCC71381694252368D59C5A99D (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control rightEyeAcceleration { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = __this->get_U3CrightEyeAccelerationU3Ek__BackingField_70();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_rightEyeAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyeAcceleration_mDD9ED7D1DEED41B45F7418A7F380FFA85D5A2D9D (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control rightEyeAcceleration { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CrightEyeAccelerationU3Ek__BackingField_70(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_rightEyeAngularAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * OculusHMD_get_rightEyeAngularAcceleration_mD7933EA1DC7EC846DDABF0343BF8B4C19E946042 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control rightEyeAngularAcceleration { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = __this->get_U3CrightEyeAngularAccelerationU3Ek__BackingField_71();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_rightEyeAngularAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyeAngularAcceleration_m437486769E36F9E9D7A0B4C0B0E1064144C221C6 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control rightEyeAngularAcceleration { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CrightEyeAngularAccelerationU3Ek__BackingField_71(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_centerEyePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * OculusHMD_get_centerEyePosition_mC6B6010284BD87015538DDECC7E84E02F51DF444 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public new Vector3Control centerEyePosition { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = __this->get_U3CcenterEyePositionU3Ek__BackingField_72();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_centerEyePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyePosition_mA6D67B6465E1B36F4CC0675F07CFF4A187619FFC (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control centerEyePosition { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CcenterEyePositionU3Ek__BackingField_72(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.OculusHMD::get_centerEyeRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * OculusHMD_get_centerEyeRotation_m6AACD72F01CD8D2E1560A11D33E8ED6CDE8C70BA (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl centerEyeRotation { get; private set; }
		QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * L_0 = __this->get_U3CcenterEyeRotationU3Ek__BackingField_73();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_centerEyeRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyeRotation_m051815EFB96695ED9504BC65A7DE83B6A62843BF (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl centerEyeRotation { get; private set; }
		QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * L_0 = ___value0;
		__this->set_U3CcenterEyeRotationU3Ek__BackingField_73(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_centerEyeAngularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * OculusHMD_get_centerEyeAngularVelocity_mB477D745BE6D47F5A8E4702E4D2821180B8FE0FF (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control centerEyeAngularVelocity { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = __this->get_U3CcenterEyeAngularVelocityU3Ek__BackingField_74();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_centerEyeAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyeAngularVelocity_m28DCEA3459CF0B548838DBF44A1E68D90E2DC4ED (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control centerEyeAngularVelocity { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CcenterEyeAngularVelocityU3Ek__BackingField_74(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_centerEyeAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * OculusHMD_get_centerEyeAcceleration_m21A620A3690003C13626C8A216EC338EE8DDE18B (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control centerEyeAcceleration { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = __this->get_U3CcenterEyeAccelerationU3Ek__BackingField_75();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_centerEyeAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyeAcceleration_mA095C5F1709C0B8B75839730D19083CCBAAE7A38 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control centerEyeAcceleration { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CcenterEyeAccelerationU3Ek__BackingField_75(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_centerEyeAngularAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * OculusHMD_get_centerEyeAngularAcceleration_m0E88950FFF724FDCFE96190ABBD562C785D2D8C3 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control centerEyeAngularAcceleration { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = __this->get_U3CcenterEyeAngularAccelerationU3Ek__BackingField_76();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_centerEyeAngularAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyeAngularAcceleration_m8E9759795ABB82FBDDD65DD82172C7CB9E1FE5E8 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control centerEyeAngularAcceleration { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CcenterEyeAngularAccelerationU3Ek__BackingField_76(L_0);
		return;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_FinishSetup_m476E392C04F8BBB6E230BE6A37A90269820CA796 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisIntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3_mADA7BED738CAC95FE7FE96EB3C14277B7158E331_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisQuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A_mDC7B154D598EA657266845F32A54167E63A3C42E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04EA248327ED413DE02A011F18AC3C95CE6B8EF0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral077AC4F37BECA7E305659A36FD4351A1A726D74E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral100A996F2433F52193B5EFF823ACE8663FC5C8C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral156E662C55D382C18194118C3287CEAB98FA2C6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24BA0B3EAF2D368DF4A667A3DA43E98A55602935);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C43BA5A481CBEF412DB695717FC94453B3769F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3624BAC25188A8C57A604CA0D3ACB2CBF73CF5DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40F58D79BFB7F12C0766FBC616821E1891152822);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48FC1F936713D53F5EFACC314E330907113FDC9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral494FAA0B659E3A69DCE4CE1C4EB20F594E2E641E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E267D25EFB4D56321079C3FF27EAE0DC4819CC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E00AB7EC86A20EC1ECB923C22939506C6806CC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F2A85EC8DA913664B5C83242F8C325DFB1BC03C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral791956718283C9837F3ED95D7886E3C88855114B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB795E7C13E4CFACF08133C1739B538F3A728EF41);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3E98CA0D21B6899AC08C4CE0868CF1323933585);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC49271934571B500FDC497EFB8A9FA5650E48B32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC0836D648D015EDCC6EE9D171A855190052F97A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFABA7B84135B56F6F79588F7B57766574B6E8C66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.FinishSetup();
		XRHMD_FinishSetup_m0F4B9F4FFD18F37C7AECCC8555417EFB7CF732A5(__this, /*hidden argument*/NULL);
		// userPresence = GetChildControl<ButtonControl>("userPresence");
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0;
		L_0 = InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9(__this, _stringLiteralC49271934571B500FDC497EFB8A9FA5650E48B32, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9_RuntimeMethod_var);
		OculusHMD_set_userPresence_m96741F0BBE2A8070F516DA685E65CCAA514A1679_inline(__this, L_0, /*hidden argument*/NULL);
		// trackingState = GetChildControl<IntegerControl>("trackingState");
		IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * L_1;
		L_1 = InputControl_GetChildControl_TisIntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3_mADA7BED738CAC95FE7FE96EB3C14277B7158E331(__this, _stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D, /*hidden argument*/InputControl_GetChildControl_TisIntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3_mADA7BED738CAC95FE7FE96EB3C14277B7158E331_RuntimeMethod_var);
		OculusHMD_set_trackingState_mCC316B092DB4A9129733B960684AB3859B18E663_inline(__this, L_1, /*hidden argument*/NULL);
		// isTracked = GetChildControl<ButtonControl>("isTracked");
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_2;
		L_2 = InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9(__this, _stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9_RuntimeMethod_var);
		OculusHMD_set_isTracked_mFC9B8122161957BCBC36759F1AA976A2ABFBE2C7_inline(__this, L_2, /*hidden argument*/NULL);
		// devicePosition = GetChildControl<Vector3Control>("devicePosition");
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_3;
		L_3 = InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71(__this, _stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71_RuntimeMethod_var);
		OculusHMD_set_devicePosition_m483AA5BEACD9BE4452716A4FD93BE41140B27B51_inline(__this, L_3, /*hidden argument*/NULL);
		// deviceRotation = GetChildControl<QuaternionControl>("deviceRotation");
		QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * L_4;
		L_4 = InputControl_GetChildControl_TisQuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A_mDC7B154D598EA657266845F32A54167E63A3C42E(__this, _stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567, /*hidden argument*/InputControl_GetChildControl_TisQuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A_mDC7B154D598EA657266845F32A54167E63A3C42E_RuntimeMethod_var);
		OculusHMD_set_deviceRotation_m69931E5CCA4FFE13D1901888AA7FDB6996CA76B5_inline(__this, L_4, /*hidden argument*/NULL);
		// deviceAngularVelocity = GetChildControl<Vector3Control>("deviceAngularVelocity");
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_5;
		L_5 = InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71(__this, _stringLiteral48FC1F936713D53F5EFACC314E330907113FDC9D, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71_RuntimeMethod_var);
		OculusHMD_set_deviceAngularVelocity_mB7C37988CBA0AE9B50F99B7F7C2871B40C048CA1_inline(__this, L_5, /*hidden argument*/NULL);
		// deviceAcceleration = GetChildControl<Vector3Control>("deviceAcceleration");
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_6;
		L_6 = InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71(__this, _stringLiteral5E00AB7EC86A20EC1ECB923C22939506C6806CC9, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71_RuntimeMethod_var);
		OculusHMD_set_deviceAcceleration_m23CDE7042398488476090D336D3F0A38DEDF2FC0_inline(__this, L_6, /*hidden argument*/NULL);
		// deviceAngularAcceleration = GetChildControl<Vector3Control>("deviceAngularAcceleration");
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_7;
		L_7 = InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71(__this, _stringLiteralC3E98CA0D21B6899AC08C4CE0868CF1323933585, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71_RuntimeMethod_var);
		OculusHMD_set_deviceAngularAcceleration_mB21A55CB0306B56B5D0A1311E37D1004A2C39E85_inline(__this, L_7, /*hidden argument*/NULL);
		// leftEyePosition = GetChildControl<Vector3Control>("leftEyePosition");
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_8;
		L_8 = InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71(__this, _stringLiteral40F58D79BFB7F12C0766FBC616821E1891152822, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71_RuntimeMethod_var);
		OculusHMD_set_leftEyePosition_mE14FDF9DD8C209780EB60BB8C57752188B0037DC_inline(__this, L_8, /*hidden argument*/NULL);
		// leftEyeRotation = GetChildControl<QuaternionControl>("leftEyeRotation");
		QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * L_9;
		L_9 = InputControl_GetChildControl_TisQuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A_mDC7B154D598EA657266845F32A54167E63A3C42E(__this, _stringLiteralCC0836D648D015EDCC6EE9D171A855190052F97A, /*hidden argument*/InputControl_GetChildControl_TisQuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A_mDC7B154D598EA657266845F32A54167E63A3C42E_RuntimeMethod_var);
		OculusHMD_set_leftEyeRotation_m76DDAB16545F73D11319E052138DBBDFCB125D34_inline(__this, L_9, /*hidden argument*/NULL);
		// leftEyeAngularVelocity = GetChildControl<Vector3Control>("leftEyeAngularVelocity");
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_10;
		L_10 = InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71(__this, _stringLiteral2C43BA5A481CBEF412DB695717FC94453B3769F6, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71_RuntimeMethod_var);
		OculusHMD_set_leftEyeAngularVelocity_m17F8A6AF388491942AB669556C3BC2C804478814_inline(__this, L_10, /*hidden argument*/NULL);
		// leftEyeAcceleration = GetChildControl<Vector3Control>("leftEyeAcceleration");
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_11;
		L_11 = InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71(__this, _stringLiteral3624BAC25188A8C57A604CA0D3ACB2CBF73CF5DF, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71_RuntimeMethod_var);
		OculusHMD_set_leftEyeAcceleration_m262585422FEB4CB04401A13E55F209E459807330_inline(__this, L_11, /*hidden argument*/NULL);
		// leftEyeAngularAcceleration = GetChildControl<Vector3Control>("leftEyeAngularAcceleration");
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_12;
		L_12 = InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71(__this, _stringLiteral156E662C55D382C18194118C3287CEAB98FA2C6F, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71_RuntimeMethod_var);
		OculusHMD_set_leftEyeAngularAcceleration_mA37A13118C81CE1CF6F924F6DAEE02B92A1659DE_inline(__this, L_12, /*hidden argument*/NULL);
		// rightEyePosition = GetChildControl<Vector3Control>("rightEyePosition");
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_13;
		L_13 = InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71(__this, _stringLiteral100A996F2433F52193B5EFF823ACE8663FC5C8C6, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71_RuntimeMethod_var);
		OculusHMD_set_rightEyePosition_m4327CA684F0A549A131308C28D7D8AE0CC8351C0_inline(__this, L_13, /*hidden argument*/NULL);
		// rightEyeRotation = GetChildControl<QuaternionControl>("rightEyeRotation");
		QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * L_14;
		L_14 = InputControl_GetChildControl_TisQuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A_mDC7B154D598EA657266845F32A54167E63A3C42E(__this, _stringLiteral6F2A85EC8DA913664B5C83242F8C325DFB1BC03C, /*hidden argument*/InputControl_GetChildControl_TisQuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A_mDC7B154D598EA657266845F32A54167E63A3C42E_RuntimeMethod_var);
		OculusHMD_set_rightEyeRotation_m3BCFCBCE5A52F9007AD7E98954B7BDAD51BF4583_inline(__this, L_14, /*hidden argument*/NULL);
		// rightEyeAngularVelocity = GetChildControl<Vector3Control>("rightEyeAngularVelocity");
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_15;
		L_15 = InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71(__this, _stringLiteral24BA0B3EAF2D368DF4A667A3DA43E98A55602935, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71_RuntimeMethod_var);
		OculusHMD_set_rightEyeAngularVelocity_m5AC3A1540E35C60730BA0276AADE239AACD8AF78_inline(__this, L_15, /*hidden argument*/NULL);
		// rightEyeAcceleration = GetChildControl<Vector3Control>("rightEyeAcceleration");
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_16;
		L_16 = InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71(__this, _stringLiteralB795E7C13E4CFACF08133C1739B538F3A728EF41, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71_RuntimeMethod_var);
		OculusHMD_set_rightEyeAcceleration_mDD9ED7D1DEED41B45F7418A7F380FFA85D5A2D9D_inline(__this, L_16, /*hidden argument*/NULL);
		// rightEyeAngularAcceleration = GetChildControl<Vector3Control>("rightEyeAngularAcceleration");
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_17;
		L_17 = InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71(__this, _stringLiteralFABA7B84135B56F6F79588F7B57766574B6E8C66, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71_RuntimeMethod_var);
		OculusHMD_set_rightEyeAngularAcceleration_m437486769E36F9E9D7A0B4C0B0E1064144C221C6_inline(__this, L_17, /*hidden argument*/NULL);
		// centerEyePosition = GetChildControl<Vector3Control>("centerEyePosition");
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_18;
		L_18 = InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71(__this, _stringLiteral791956718283C9837F3ED95D7886E3C88855114B, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71_RuntimeMethod_var);
		OculusHMD_set_centerEyePosition_mA6D67B6465E1B36F4CC0675F07CFF4A187619FFC_inline(__this, L_18, /*hidden argument*/NULL);
		// centerEyeRotation = GetChildControl<QuaternionControl>("centerEyeRotation");
		QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * L_19;
		L_19 = InputControl_GetChildControl_TisQuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A_mDC7B154D598EA657266845F32A54167E63A3C42E(__this, _stringLiteral494FAA0B659E3A69DCE4CE1C4EB20F594E2E641E, /*hidden argument*/InputControl_GetChildControl_TisQuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A_mDC7B154D598EA657266845F32A54167E63A3C42E_RuntimeMethod_var);
		OculusHMD_set_centerEyeRotation_m051815EFB96695ED9504BC65A7DE83B6A62843BF_inline(__this, L_19, /*hidden argument*/NULL);
		// centerEyeAngularVelocity = GetChildControl<Vector3Control>("centerEyeAngularVelocity");
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_20;
		L_20 = InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71(__this, _stringLiteral077AC4F37BECA7E305659A36FD4351A1A726D74E, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71_RuntimeMethod_var);
		OculusHMD_set_centerEyeAngularVelocity_m28DCEA3459CF0B548838DBF44A1E68D90E2DC4ED_inline(__this, L_20, /*hidden argument*/NULL);
		// centerEyeAcceleration = GetChildControl<Vector3Control>("centerEyeAcceleration");
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_21;
		L_21 = InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71(__this, _stringLiteral4E267D25EFB4D56321079C3FF27EAE0DC4819CC9, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71_RuntimeMethod_var);
		OculusHMD_set_centerEyeAcceleration_mA095C5F1709C0B8B75839730D19083CCBAAE7A38_inline(__this, L_21, /*hidden argument*/NULL);
		// centerEyeAngularAcceleration = GetChildControl<Vector3Control>("centerEyeAngularAcceleration");
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_22;
		L_22 = InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71(__this, _stringLiteral04EA248327ED413DE02A011F18AC3C95CE6B8EF0, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71_RuntimeMethod_var);
		OculusHMD_set_centerEyeAngularAcceleration_m8E9759795ABB82FBDDD65DD82172C7CB9E1FE5E8_inline(__this, L_22, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD__ctor_mE497EDF74203D170F59426A5FFA99DA118BA67FD (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		XRHMD__ctor_m99AC2E8B38AE426F8E44BAA08B5D6DB65CAB934D(__this, /*hidden argument*/NULL);
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
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusHMDExtended::get_back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * OculusHMDExtended_get_back_m48A7AFF8E7C713A8EBCE01464CDFF6750847E23E (OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl back { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = __this->get_U3CbackU3Ek__BackingField_77();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMDExtended::set_back(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMDExtended_set_back_m7A33E91EA604FD207CB76DB965ADFFAADB7EB36B (OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl back { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CbackU3Ek__BackingField_77(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector2Control Unity.XR.Oculus.Input.OculusHMDExtended::get_touchpad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * OculusHMDExtended_get_touchpad_mD24FA21C5F544116AFC9B5FF6FA827E0B0AED947 (OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC * __this, const RuntimeMethod* method)
{
	{
		// public Vector2Control touchpad { get; private set; }
		Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * L_0 = __this->get_U3CtouchpadU3Ek__BackingField_78();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMDExtended::set_touchpad(UnityEngine.InputSystem.Controls.Vector2Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMDExtended_set_touchpad_m4224731C210C73B2A4FA9301CEF174D76C3521EA (OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC * __this, Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2Control touchpad { get; private set; }
		Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * L_0 = ___value0;
		__this->set_U3CtouchpadU3Ek__BackingField_78(L_0);
		return;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMDExtended::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMDExtended_FinishSetup_mA390A06FAC20D884C637738168848C44E5BBDD3C (OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1_m6FAC1ACEDE733EE9B82D626AA2E0BDE4A5705980_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral381617D1A1C0C848CBE085A3C3BF523A03E9659F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4375062BD8882E451B6BEE137E47CDAFE50A90EC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.FinishSetup();
		OculusHMD_FinishSetup_m476E392C04F8BBB6E230BE6A37A90269820CA796(__this, /*hidden argument*/NULL);
		// back = GetChildControl<ButtonControl>("back");
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0;
		L_0 = InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9(__this, _stringLiteral381617D1A1C0C848CBE085A3C3BF523A03E9659F, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9_RuntimeMethod_var);
		OculusHMDExtended_set_back_m7A33E91EA604FD207CB76DB965ADFFAADB7EB36B_inline(__this, L_0, /*hidden argument*/NULL);
		// touchpad = GetChildControl<Vector2Control>("touchpad");
		Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * L_1;
		L_1 = InputControl_GetChildControl_TisVector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1_m6FAC1ACEDE733EE9B82D626AA2E0BDE4A5705980(__this, _stringLiteral4375062BD8882E451B6BEE137E47CDAFE50A90EC, /*hidden argument*/InputControl_GetChildControl_TisVector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1_m6FAC1ACEDE733EE9B82D626AA2E0BDE4A5705980_RuntimeMethod_var);
		OculusHMDExtended_set_touchpad_m4224731C210C73B2A4FA9301CEF174D76C3521EA_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMDExtended::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMDExtended__ctor_mB98D9DF9D7D27CD8EE8E72E0111C29E94D7FB64A (OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC * __this, const RuntimeMethod* method)
{
	{
		OculusHMD__ctor_mE497EDF74203D170F59426A5FFA99DA118BA67FD(__this, /*hidden argument*/NULL);
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
// Unity.XR.Oculus.OculusLoader/DeviceSupportedResult Unity.XR.Oculus.OculusLoader::IsDeviceSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OculusLoader_IsDeviceSupported_mC2E5A317811DBD9EB506037FD358CF7F64814286 (const RuntimeMethod* method)
{
	{
		// return DeviceSupportedResult.Supported;
		return (int32_t)(0);
	}
}
// UnityEngine.XR.XRDisplaySubsystem Unity.XR.Oculus.OculusLoader::get_displaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * OculusLoader_get_displaySubsystem_mE2C42E00522835401105B4A163E0768AA433E71A (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoader_GetLoadedSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m6098CB15555B2E45C3BCAB9086012011CB382DAA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetLoadedSubsystem<XRDisplaySubsystem>();
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_0;
		L_0 = GenericVirtFuncInvoker0< XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * >::Invoke(XRLoader_GetLoadedSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m6098CB15555B2E45C3BCAB9086012011CB382DAA_RuntimeMethod_var, __this);
		return L_0;
	}
}
// UnityEngine.XR.XRInputSubsystem Unity.XR.Oculus.OculusLoader::get_inputSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * OculusLoader_get_inputSubsystem_m8E87DAAF3BB44B2F3945232518EAF6862E9D1B95 (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoader_GetLoadedSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_mC98D5F7030C574A69D86EA429F90CF769106A5EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetLoadedSubsystem<XRInputSubsystem>();
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_0;
		L_0 = GenericVirtFuncInvoker0< XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * >::Invoke(XRLoader_GetLoadedSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_mC98D5F7030C574A69D86EA429F90CF769106A5EB_RuntimeMethod_var, __this);
		return L_0;
	}
}
// System.Boolean Unity.XR.Oculus.OculusLoader::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OculusLoader_Initialize_m9F45EA7F9134BED3F23133D3B2A3467CF51B5561 (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputLayoutLoader_t49C5641FC147A26ECBF0BA4435702257FEC65EF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m2674D41E2C5D7DE045BEF6EDE661A9A0767A99FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m69A4EA17370FA4464CCE4BEAD83D5E0D47AADB56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral271AF6878EC3872B415EA8A73A1433E4B604ACDF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50B8349DC34E14AB475F3453803BCDBD9F3B0F85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71D87D03368ADC0E5018E85E30CA4984F5FF2AA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral753B6D37AEAF368AA772306EFBD496750FDE357A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD3DD4C1241990E3D05C7BE7560D9E9C10B9D7A5);
		s_Il2CppMethodInitialized = true;
	}
	OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * V_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B5_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B6_1 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B8_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B9_1 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B11_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B12_1 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B14_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B13_0 = NULL;
	int32_t G_B15_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B15_1 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B17_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B18_1 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B20_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B19_0 = NULL;
	int32_t G_B21_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B21_1 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B23_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B24_1 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B26_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B25_0 = NULL;
	int32_t G_B27_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B27_1 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B29_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B28_0 = NULL;
	int32_t G_B30_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B30_1 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B32_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B33_1 = NULL;
	{
		//             if (IsDeviceSupported() != DeviceSupportedResult.Supported
		// #if UNITY_EDITOR_WIN
		//                 || SystemInfo.graphicsDeviceType != GraphicsDeviceType.Direct3D11
		// #endif
		//             )
		IL2CPP_RUNTIME_CLASS_INIT(OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = OculusLoader_IsDeviceSupported_mC2E5A317811DBD9EB506037FD358CF7F64814286(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0009:
	{
		// InputLayoutLoader.RegisterInputLayouts();
		IL2CPP_RUNTIME_CLASS_INIT(InputLayoutLoader_t49C5641FC147A26ECBF0BA4435702257FEC65EF8_il2cpp_TypeInfo_var);
		InputLayoutLoader_RegisterInputLayouts_m7D259AB887FFDEB3E4FA2F7D991F498BDC00DE15(/*hidden argument*/NULL);
		// OculusSettings settings = GetSettings();
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_1;
		L_1 = OculusLoader_GetSettings_mF0D5694BD84372039D4227997B00CAB33A419CAC_inline(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (settings != null)
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00fc;
		}
	}
	{
		// userDefinedSettings.sharedDepthBuffer = (ushort)(settings.SharedDepthBuffer ? 1 : 0);
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_4 = V_0;
		NullCheck(L_4);
		bool L_5 = L_4->get_SharedDepthBuffer_6();
		G_B4_0 = (&V_1);
		if (L_5)
		{
			G_B5_0 = (&V_1);
			goto IL_002e;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_002f;
	}

IL_002e:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_002f:
	{
		G_B6_1->set_sharedDepthBuffer_0((uint16_t)((int32_t)((uint16_t)G_B6_0)));
		// userDefinedSettings.dashSupport = (ushort)(settings.DashSupport ? 1 : 0);
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = L_6->get_DashSupport_7();
		G_B7_0 = (&V_1);
		if (L_7)
		{
			G_B8_0 = (&V_1);
			goto IL_0042;
		}
	}
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_0;
		goto IL_0043;
	}

IL_0042:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_0043:
	{
		G_B9_1->set_dashSupport_1((uint16_t)((int32_t)((uint16_t)G_B9_0)));
		// userDefinedSettings.stereoRenderingMode = (ushort)settings.GetStereoRenderingMode();
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_8 = V_0;
		NullCheck(L_8);
		uint16_t L_9;
		L_9 = OculusSettings_GetStereoRenderingMode_mB4FF47E7831A653C90D7B08E336C40D66968F2FD(L_8, /*hidden argument*/NULL);
		(&V_1)->set_stereoRenderingMode_2(L_9);
		// userDefinedSettings.colorSpace = (ushort)((QualitySettings.activeColorSpace == ColorSpace.Linear) ? 1 : 0);
		int32_t L_10;
		L_10 = QualitySettings_get_activeColorSpace_mE0C265DD8E215FC537CFA8B000C0977B10C6A49C(/*hidden argument*/NULL);
		G_B10_0 = (&V_1);
		if ((((int32_t)L_10) == ((int32_t)1)))
		{
			G_B11_0 = (&V_1);
			goto IL_0063;
		}
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_0;
		goto IL_0064;
	}

IL_0063:
	{
		G_B12_0 = 1;
		G_B12_1 = G_B11_0;
	}

IL_0064:
	{
		G_B12_1->set_colorSpace_3((uint16_t)((int32_t)((uint16_t)G_B12_0)));
		// userDefinedSettings.lowOverheadMode = (ushort)(settings.LowOverheadMode ? 1 : 0);
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = L_11->get_LowOverheadMode_9();
		G_B13_0 = (&V_1);
		if (L_12)
		{
			G_B14_0 = (&V_1);
			goto IL_0077;
		}
	}
	{
		G_B15_0 = 0;
		G_B15_1 = G_B13_0;
		goto IL_0078;
	}

IL_0077:
	{
		G_B15_0 = 1;
		G_B15_1 = G_B14_0;
	}

IL_0078:
	{
		G_B15_1->set_lowOverheadMode_4((uint16_t)((int32_t)((uint16_t)G_B15_0)));
		// userDefinedSettings.protectedContext = (ushort)(settings.ProtectedContext ? 1 : 0);
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_13 = V_0;
		NullCheck(L_13);
		bool L_14 = L_13->get_ProtectedContext_10();
		G_B16_0 = (&V_1);
		if (L_14)
		{
			G_B17_0 = (&V_1);
			goto IL_008b;
		}
	}
	{
		G_B18_0 = 0;
		G_B18_1 = G_B16_0;
		goto IL_008c;
	}

IL_008b:
	{
		G_B18_0 = 1;
		G_B18_1 = G_B17_0;
	}

IL_008c:
	{
		G_B18_1->set_protectedContext_5((uint16_t)((int32_t)((uint16_t)G_B18_0)));
		// userDefinedSettings.focusAware = (ushort)(settings.FocusAware ? 1 : 0);
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_15 = V_0;
		NullCheck(L_15);
		bool L_16 = L_15->get_FocusAware_11();
		G_B19_0 = (&V_1);
		if (L_16)
		{
			G_B20_0 = (&V_1);
			goto IL_009f;
		}
	}
	{
		G_B21_0 = 0;
		G_B21_1 = G_B19_0;
		goto IL_00a0;
	}

IL_009f:
	{
		G_B21_0 = 1;
		G_B21_1 = G_B20_0;
	}

IL_00a0:
	{
		G_B21_1->set_focusAware_6((uint16_t)((int32_t)((uint16_t)G_B21_0)));
		// userDefinedSettings.optimizeBufferDiscards = (ushort)(settings.OptimizeBufferDiscards ? 1 : 0);
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_17 = V_0;
		NullCheck(L_17);
		bool L_18 = L_17->get_OptimizeBufferDiscards_12();
		G_B22_0 = (&V_1);
		if (L_18)
		{
			G_B23_0 = (&V_1);
			goto IL_00b3;
		}
	}
	{
		G_B24_0 = 0;
		G_B24_1 = G_B22_0;
		goto IL_00b4;
	}

IL_00b3:
	{
		G_B24_0 = 1;
		G_B24_1 = G_B23_0;
	}

IL_00b4:
	{
		G_B24_1->set_optimizeBufferDiscards_7((uint16_t)((int32_t)((uint16_t)G_B24_0)));
		// userDefinedSettings.phaseSync = (ushort)(settings.PhaseSync ? 1 : 0);
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_19 = V_0;
		NullCheck(L_19);
		bool L_20 = L_19->get_PhaseSync_13();
		G_B25_0 = (&V_1);
		if (L_20)
		{
			G_B26_0 = (&V_1);
			goto IL_00c7;
		}
	}
	{
		G_B27_0 = 0;
		G_B27_1 = G_B25_0;
		goto IL_00c8;
	}

IL_00c7:
	{
		G_B27_0 = 1;
		G_B27_1 = G_B26_0;
	}

IL_00c8:
	{
		G_B27_1->set_phaseSync_8((uint16_t)((int32_t)((uint16_t)G_B27_0)));
		// userDefinedSettings.symmetricProjection = (ushort)(settings.SymmetricProjection ? 1 : 0);
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_21 = V_0;
		NullCheck(L_21);
		bool L_22 = L_21->get_SymmetricProjection_14();
		G_B28_0 = (&V_1);
		if (L_22)
		{
			G_B29_0 = (&V_1);
			goto IL_00db;
		}
	}
	{
		G_B30_0 = 0;
		G_B30_1 = G_B28_0;
		goto IL_00dc;
	}

IL_00db:
	{
		G_B30_0 = 1;
		G_B30_1 = G_B29_0;
	}

IL_00dc:
	{
		G_B30_1->set_symmetricProjection_9((uint16_t)((int32_t)((uint16_t)G_B30_0)));
		// userDefinedSettings.subsampledLayout = (ushort)(settings.SubsampledLayout ? 1 : 0);
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_23 = V_0;
		NullCheck(L_23);
		bool L_24 = L_23->get_SubsampledLayout_15();
		G_B31_0 = (&V_1);
		if (L_24)
		{
			G_B32_0 = (&V_1);
			goto IL_00ef;
		}
	}
	{
		G_B33_0 = 0;
		G_B33_1 = G_B31_0;
		goto IL_00f0;
	}

IL_00ef:
	{
		G_B33_0 = 1;
		G_B33_1 = G_B32_0;
	}

IL_00f0:
	{
		G_B33_1->set_subsampledLayout_10((uint16_t)((int32_t)((uint16_t)G_B33_0)));
		// NativeMethods.SetUserDefinedSettings(userDefinedSettings);
		UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D  L_25 = V_1;
		NativeMethods_SetUserDefinedSettings_m60831E50BCEB63E8B8E3A6421CE2D6BC21FB6FCD(L_25, /*hidden argument*/NULL);
	}

IL_00fc:
	{
		// CreateSubsystem<XRDisplaySubsystemDescriptor, XRDisplaySubsystem>(s_DisplaySubsystemDescriptors, "oculus display");
		IL2CPP_RUNTIME_CLASS_INIT(OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var);
		List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 * L_26 = ((OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_StaticFields*)il2cpp_codegen_static_fields_for(OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var))->get_s_DisplaySubsystemDescriptors_5();
		XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m2674D41E2C5D7DE045BEF6EDE661A9A0767A99FF(__this, L_26, _stringLiteral753B6D37AEAF368AA772306EFBD496750FDE357A, /*hidden argument*/XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m2674D41E2C5D7DE045BEF6EDE661A9A0767A99FF_RuntimeMethod_var);
		// CreateSubsystem<XRInputSubsystemDescriptor, XRInputSubsystem>(s_InputSubsystemDescriptors, "oculus input");
		List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * L_27 = ((OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_StaticFields*)il2cpp_codegen_static_fields_for(OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var))->get_s_InputSubsystemDescriptors_6();
		XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m69A4EA17370FA4464CCE4BEAD83D5E0D47AADB56(__this, L_27, _stringLiteral71D87D03368ADC0E5018E85E30CA4984F5FF2AA8, /*hidden argument*/XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m69A4EA17370FA4464CCE4BEAD83D5E0D47AADB56_RuntimeMethod_var);
		// if (displaySubsystem == null && inputSubsystem == null)
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_28;
		L_28 = OculusLoader_get_displaySubsystem_mE2C42E00522835401105B4A163E0768AA433E71A(__this, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0138;
		}
	}
	{
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_29;
		L_29 = OculusLoader_get_inputSubsystem_m8E87DAAF3BB44B2F3945232518EAF6862E9D1B95(__this, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_0138;
		}
	}
	{
		// Debug.LogWarning("Unable to start Oculus XR Plugin.\n" +
		//                  "Possible causes include a headset not being attached, or the Oculus runtime is not installed or up to date.\n" +
		//                  "If you've recently installed or updated the Oculus runtime, you may need to reboot or close Unity and the Unity Hub and try again.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0(_stringLiteralCD3DD4C1241990E3D05C7BE7560D9E9C10B9D7A5, /*hidden argument*/NULL);
		// }
		goto IL_0165;
	}

IL_0138:
	{
		// else if (displaySubsystem == null)
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_30;
		L_30 = OculusLoader_get_displaySubsystem_mE2C42E00522835401105B4A163E0768AA433E71A(__this, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_014c;
		}
	}
	{
		// Debug.LogError("Unable to start Oculus XR Plugin. Failed to load display subsystem.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(_stringLiteral50B8349DC34E14AB475F3453803BCDBD9F3B0F85, /*hidden argument*/NULL);
		// }
		goto IL_0165;
	}

IL_014c:
	{
		// else if (inputSubsystem == null)
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_31;
		L_31 = OculusLoader_get_inputSubsystem_m8E87DAAF3BB44B2F3945232518EAF6862E9D1B95(__this, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_0160;
		}
	}
	{
		// Debug.LogError("Unable to start Oculus XR Plugin. Failed to load input subsystem.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(_stringLiteral271AF6878EC3872B415EA8A73A1433E4B604ACDF, /*hidden argument*/NULL);
		// }
		goto IL_0165;
	}

IL_0160:
	{
		// RegisterUpdateCallback.Initialize();
		RegisterUpdateCallback_Initialize_m009EBB49477FAD1D7E03DA45EB80F15E6D28F521(/*hidden argument*/NULL);
	}

IL_0165:
	{
		// return displaySubsystem != null && inputSubsystem != null;
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_32;
		L_32 = OculusLoader_get_displaySubsystem_mE2C42E00522835401105B4A163E0768AA433E71A(__this, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_0177;
		}
	}
	{
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_33;
		L_33 = OculusLoader_get_inputSubsystem_m8E87DAAF3BB44B2F3945232518EAF6862E9D1B95(__this, /*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 *)L_33) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}

IL_0177:
	{
		return (bool)0;
	}
}
// System.Boolean Unity.XR.Oculus.OculusLoader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OculusLoader_Start_m48219B334C6D430348D0A6CE4B0BB8E9493E29F5 (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_mF935C6C4671BBBEA57D48C65DE73B9D27EB611D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m243694C799C58C0396A563991537B952A5B48F98_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartSubsystem<XRDisplaySubsystem>();
		XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_mF935C6C4671BBBEA57D48C65DE73B9D27EB611D7(__this, /*hidden argument*/XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_mF935C6C4671BBBEA57D48C65DE73B9D27EB611D7_RuntimeMethod_var);
		// StartSubsystem<XRInputSubsystem>();
		XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m243694C799C58C0396A563991537B952A5B48F98(__this, /*hidden argument*/XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m243694C799C58C0396A563991537B952A5B48F98_RuntimeMethod_var);
		// Development.OverrideDeveloperModeStart();
		Development_OverrideDeveloperModeStart_mC9E24212121397B0C37A27904F5B95B4FD871C88(/*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// System.Boolean Unity.XR.Oculus.OculusLoader::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OculusLoader_Stop_m096A1F5907CFA0315161CDE8C28F889CC1709482 (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m8145C9418422BD4F45DBBF37D028DDD2F1A6F7AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m530AFB9035AAA37796915EEB42C678B7A7F39686_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopSubsystem<XRDisplaySubsystem>();
		XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m8145C9418422BD4F45DBBF37D028DDD2F1A6F7AD(__this, /*hidden argument*/XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m8145C9418422BD4F45DBBF37D028DDD2F1A6F7AD_RuntimeMethod_var);
		// StopSubsystem<XRInputSubsystem>();
		XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m530AFB9035AAA37796915EEB42C678B7A7F39686(__this, /*hidden argument*/XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m530AFB9035AAA37796915EEB42C678B7A7F39686_RuntimeMethod_var);
		// Development.OverrideDeveloperModeStop();
		Development_OverrideDeveloperModeStop_mF62FEF98A60806E453F85B7419FE8A726A54A621(/*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// System.Boolean Unity.XR.Oculus.OculusLoader::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OculusLoader_Deinitialize_m1DBBE6B4710416D0793C6869DC3C17656431599F (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7AE6139F914F84F8A7AA30CC70F6A01A757E1BE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m3724DC2747A9C6A68F78041E6FA78F6AC5CB39C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RegisterUpdateCallback.Deinitialize();
		RegisterUpdateCallback_Deinitialize_m5783A25B492DD2271AF20528CC7225AA69B48D2B(/*hidden argument*/NULL);
		// DestroySubsystem<XRDisplaySubsystem>();
		XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7AE6139F914F84F8A7AA30CC70F6A01A757E1BE3(__this, /*hidden argument*/XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7AE6139F914F84F8A7AA30CC70F6A01A757E1BE3_RuntimeMethod_var);
		// DestroySubsystem<XRInputSubsystem>();
		XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m3724DC2747A9C6A68F78041E6FA78F6AC5CB39C8(__this, /*hidden argument*/XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m3724DC2747A9C6A68F78041E6FA78F6AC5CB39C8_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}
}
// System.Void Unity.XR.Oculus.OculusLoader::RuntimeLoadOVRPlugin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusLoader_RuntimeLoadOVRPlugin_m2CA81B2C2F621A6BEF5495DF46AE5B2E2F04C042 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79107CD3BE0F3FC64B9E61F6ED6F8C2C75548D4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// if (!NativeMethods.LoadOVRPlugin(""))
			bool L_0;
			L_0 = NativeMethods_LoadOVRPlugin_m4D4C796D2F76D0CA13969C61603C01B0A26478E7(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
			if (L_0)
			{
				goto IL_0016;
			}
		}

IL_000c:
		{
			// Debug.LogError("Failed to load OVRPlugin.dll");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(_stringLiteral79107CD3BE0F3FC64B9E61F6ED6F8C2C75548D4F, /*hidden argument*/NULL);
		}

IL_0016:
		{
			// }
			goto IL_001b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0018;
		}
		throw e;
	}

CATCH_0018:
	{ // begin catch(System.Object)
		// catch
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001b;
	} // end catch (depth: 1)

IL_001b:
	{
		// }
		return;
	}
}
// Unity.XR.Oculus.OculusSettings Unity.XR.Oculus.OculusLoader::GetSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * OculusLoader_GetSettings_mF0D5694BD84372039D4227997B00CAB33A419CAC (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// settings = OculusSettings.s_Settings;
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_0 = ((OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_StaticFields*)il2cpp_codegen_static_fields_for(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_il2cpp_TypeInfo_var))->get_s_Settings_19();
		// return settings;
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.OculusLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusLoader__ctor_mF6A80167D63792923ADC3AB04D39BC1D0B3EB360 (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method)
{
	{
		XRLoaderHelper__ctor_mD27E0396EC4B11E208CF891642475B496CADAC9B(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.XR.Oculus.OculusLoader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusLoader__cctor_mD99F1A4C2C8FA6EE03E450E22062EDC2AEF809BE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6A950B4252C0E5235E96AFE2360A90333D479AFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF19C6A53B3B3B3BE0F1915716886E25C49467F00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static List<XRDisplaySubsystemDescriptor> s_DisplaySubsystemDescriptors = new List<XRDisplaySubsystemDescriptor>();
		List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 * L_0 = (List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 *)il2cpp_codegen_object_new(List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048_il2cpp_TypeInfo_var);
		List_1__ctor_mF19C6A53B3B3B3BE0F1915716886E25C49467F00(L_0, /*hidden argument*/List_1__ctor_mF19C6A53B3B3B3BE0F1915716886E25C49467F00_RuntimeMethod_var);
		((OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_StaticFields*)il2cpp_codegen_static_fields_for(OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var))->set_s_DisplaySubsystemDescriptors_5(L_0);
		// private static List<XRInputSubsystemDescriptor> s_InputSubsystemDescriptors = new List<XRInputSubsystemDescriptor>();
		List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * L_1 = (List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 *)il2cpp_codegen_object_new(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0_il2cpp_TypeInfo_var);
		List_1__ctor_m6A950B4252C0E5235E96AFE2360A90333D479AFB(L_1, /*hidden argument*/List_1__ctor_m6A950B4252C0E5235E96AFE2360A90333D479AFB_RuntimeMethod_var);
		((OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_StaticFields*)il2cpp_codegen_static_fields_for(OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var))->set_s_InputSubsystemDescriptors_6(L_1);
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
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusRemote::get_back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * OculusRemote_get_back_mD741A9BA4768F2FE5859475A689457295E23411D (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl back { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = __this->get_U3CbackU3Ek__BackingField_44();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusRemote::set_back(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusRemote_set_back_m4C382005E2D041A5692C77D5B3EE1FA7C45AD4DB (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl back { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CbackU3Ek__BackingField_44(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusRemote::get_start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * OculusRemote_get_start_m708E4303F0E55BEEF500C4F3E365F1108371C2A5 (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl start { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = __this->get_U3CstartU3Ek__BackingField_45();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusRemote::set_start(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusRemote_set_start_m59B1620D1A23592159814952F566E1AE1D56A96C (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl start { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CstartU3Ek__BackingField_45(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector2Control Unity.XR.Oculus.Input.OculusRemote::get_touchpad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * OculusRemote_get_touchpad_mBE8FD12A5299E0650CD145F23EEBEC6091ED4DA8 (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2Control touchpad { get; private set; }
		Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * L_0 = __this->get_U3CtouchpadU3Ek__BackingField_46();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusRemote::set_touchpad(UnityEngine.InputSystem.Controls.Vector2Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusRemote_set_touchpad_mE33ADFCA48ADEEFF93276F772338DDD411F2B922 (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2Control touchpad { get; private set; }
		Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * L_0 = ___value0;
		__this->set_U3CtouchpadU3Ek__BackingField_46(L_0);
		return;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusRemote::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusRemote_FinishSetup_m5C9517EF579C721B0ADC03E00EBFF1F0C5BA7F7F (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1_m6FAC1ACEDE733EE9B82D626AA2E0BDE4A5705980_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral381617D1A1C0C848CBE085A3C3BF523A03E9659F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4375062BD8882E451B6BEE137E47CDAFE50A90EC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.FinishSetup();
		InputControl_FinishSetup_m6C5197AC4E2CE043C961C73FAE231A3CE403AB43(__this, /*hidden argument*/NULL);
		// back = GetChildControl<ButtonControl>("back");
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0;
		L_0 = InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9(__this, _stringLiteral381617D1A1C0C848CBE085A3C3BF523A03E9659F, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9_RuntimeMethod_var);
		OculusRemote_set_back_m4C382005E2D041A5692C77D5B3EE1FA7C45AD4DB_inline(__this, L_0, /*hidden argument*/NULL);
		// start = GetChildControl<ButtonControl>("start");
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_1;
		L_1 = InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9(__this, _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9_RuntimeMethod_var);
		OculusRemote_set_start_m59B1620D1A23592159814952F566E1AE1D56A96C_inline(__this, L_1, /*hidden argument*/NULL);
		// touchpad = GetChildControl<Vector2Control>("touchpad");
		Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * L_2;
		L_2 = InputControl_GetChildControl_TisVector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1_m6FAC1ACEDE733EE9B82D626AA2E0BDE4A5705980(__this, _stringLiteral4375062BD8882E451B6BEE137E47CDAFE50A90EC, /*hidden argument*/InputControl_GetChildControl_TisVector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1_m6FAC1ACEDE733EE9B82D626AA2E0BDE4A5705980_RuntimeMethod_var);
		OculusRemote_set_touchpad_mE33ADFCA48ADEEFF93276F772338DDD411F2B922_inline(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusRemote::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusRemote__ctor_m2BCE3ECEF5DBFEAD59595E747A26E7A314788A3C (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, const RuntimeMethod* method)
{
	{
		InputDevice__ctor_m31094E7AA7ADF06B4A30AB3B3B154618399A9846(__this, /*hidden argument*/NULL);
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
// System.Void Unity.XR.Oculus.OculusRestarter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusRestarter__cctor_m050787ED25CC19F82E8607F6A3DD74B6A92E7D57 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60295FC3A60C2E33E7CE2BBA56CDC92EDF6E0594);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly String k_GameObjectName = "~oculusrestarter";
		((OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields*)il2cpp_codegen_static_fields_for(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var))->set_k_GameObjectName_8(_stringLiteral60295FC3A60C2E33E7CE2BBA56CDC92EDF6E0594);
		// private static OculusRestarter s_Instance = null;
		((OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields*)il2cpp_codegen_static_fields_for(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var))->set_s_Instance_9((OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 *)NULL);
		// private static int m_pauseAndRestartAttempts = 0;
		((OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields*)il2cpp_codegen_static_fields_for(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var))->set_m_pauseAndRestartAttempts_12(0);
		// TimeBetweenRestartAttempts = 5.0f;
		OculusRestarter_set_TimeBetweenRestartAttempts_m3FDA87CEAC42CF6AF6521DFF3E4EB1CC0BC9454F_inline((5.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.OculusRestarter::ResetCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusRestarter_ResetCallbacks_mDFC9B5CDAF74BFE121D4F813709A09DF60E75CC3 (OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onAfterRestart = null;
		__this->set_onAfterRestart_4((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)NULL);
		// onAfterShutdown = null;
		__this->set_onAfterShutdown_5((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)NULL);
		// onAfterCoroutine = null;
		__this->set_onAfterCoroutine_7((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)NULL);
		// onQuit = null;
		__this->set_onQuit_6((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)NULL);
		// m_pauseAndRestartAttempts = 0;
		IL2CPP_RUNTIME_CLASS_INIT(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		((OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields*)il2cpp_codegen_static_fields_for(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var))->set_m_pauseAndRestartAttempts_12(0);
		// }
		return;
	}
}
// System.Boolean Unity.XR.Oculus.OculusRestarter::get_isRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OculusRestarter_get_isRunning_mD3558955217FE9FEC976D5AE772617EBEB44E25E (OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * __this, const RuntimeMethod* method)
{
	{
		// public bool isRunning => m_Coroutine != null;
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_0 = __this->get_m_Coroutine_10();
		return (bool)((!(((RuntimeObject*)(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Single Unity.XR.Oculus.OculusRestarter::get_TimeBetweenRestartAttempts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OculusRestarter_get_TimeBetweenRestartAttempts_m4643B819097BB5929C5EA5AAC0BBD798817B2465 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get;
		IL2CPP_RUNTIME_CLASS_INIT(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		float L_0 = ((OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields*)il2cpp_codegen_static_fields_for(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var))->get_U3CTimeBetweenRestartAttemptsU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.OculusRestarter::set_TimeBetweenRestartAttempts(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusRestarter_set_TimeBetweenRestartAttempts_m3FDA87CEAC42CF6AF6521DFF3E4EB1CC0BC9454F (float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set;
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		((OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields*)il2cpp_codegen_static_fields_for(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var))->set_U3CTimeBetweenRestartAttemptsU3Ek__BackingField_13(L_0);
		return;
	}
}
// System.Int32 Unity.XR.Oculus.OculusRestarter::get_PauseAndRestartAttempts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OculusRestarter_get_PauseAndRestartAttempts_m5073862450728EBD76EDC01F37A6CCFEA52F0AA9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_pauseAndRestartAttempts;
		IL2CPP_RUNTIME_CLASS_INIT(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		int32_t L_0 = ((OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields*)il2cpp_codegen_static_fields_for(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var))->get_m_pauseAndRestartAttempts_12();
		return L_0;
	}
}
// Unity.XR.Oculus.OculusRestarter Unity.XR.Oculus.OculusRestarter::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * OculusRestarter_get_Instance_m39A581FAA5C8E45A6603F7FA0EA6CAD784887796 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisOculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_m202AE7171E57107B6E8DDAFA0F044806B81EFBFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisOculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_mACE49B13D3DE9F0EE5F3B471A3230A439C6C8A92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// if (s_Instance == null)
		IL2CPP_RUNTIME_CLASS_INIT(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_0 = ((OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields*)il2cpp_codegen_static_fields_for(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var))->get_s_Instance_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0046;
		}
	}
	{
		// var go = GameObject.Find(k_GameObjectName);
		IL2CPP_RUNTIME_CLASS_INIT(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		String_t* L_2 = ((OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields*)il2cpp_codegen_static_fields_for(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var))->get_k_GameObjectName_8();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (go == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// go = new GameObject(k_GameObjectName);
		IL2CPP_RUNTIME_CLASS_INIT(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		String_t* L_6 = ((OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields*)il2cpp_codegen_static_fields_for(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var))->get_k_GameObjectName_8();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_7, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// go.hideFlags = HideFlags.HideAndDontSave;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = V_0;
		NullCheck(L_8);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_8, ((int32_t)61), /*hidden argument*/NULL);
		// go.AddComponent<OculusRestarter>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = V_0;
		NullCheck(L_9);
		OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_10;
		L_10 = GameObject_AddComponent_TisOculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_m202AE7171E57107B6E8DDAFA0F044806B81EFBFF(L_9, /*hidden argument*/GameObject_AddComponent_TisOculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_m202AE7171E57107B6E8DDAFA0F044806B81EFBFF_RuntimeMethod_var);
	}

IL_003b:
	{
		// s_Instance = go.GetComponent<OculusRestarter>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = V_0;
		NullCheck(L_11);
		OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_12;
		L_12 = GameObject_GetComponent_TisOculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_mACE49B13D3DE9F0EE5F3B471A3230A439C6C8A92(L_11, /*hidden argument*/GameObject_GetComponent_TisOculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_mACE49B13D3DE9F0EE5F3B471A3230A439C6C8A92_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		((OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields*)il2cpp_codegen_static_fields_for(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var))->set_s_Instance_9(L_12);
	}

IL_0046:
	{
		// return s_Instance;
		IL2CPP_RUNTIME_CLASS_INIT(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_13 = ((OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields*)il2cpp_codegen_static_fields_for(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var))->get_s_Instance_9();
		return L_13;
	}
}
// System.Void Unity.XR.Oculus.OculusRestarter::PauseAndRestart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusRestarter_PauseAndRestart_m28727BF6DE2EB3868DBCE80CB9FFB05F11800C9B (OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7589D1EF4E8D8454C532BCBFBC5823B5B4345F30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1BB48CEB008ADB81AB49FAD95AAB464FAD9CA84);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_pauseAndRestartCoroutine != null)
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_0 = __this->get_m_pauseAndRestartCoroutine_11();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogError("Only one pause then shutdown/restart can be executed at a time");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(_stringLiteralF1BB48CEB008ADB81AB49FAD95AAB464FAD9CA84, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0013:
	{
		// Debug.Log("Please make sure the device is connected. Will try to restart xr periodically.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteral7589D1EF4E8D8454C532BCBFBC5823B5B4345F30, /*hidden argument*/NULL);
		// m_pauseAndRestartCoroutine = StartCoroutine(PauseAndRestartCoroutine(TimeBetweenRestartAttempts));
		IL2CPP_RUNTIME_CLASS_INIT(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = OculusRestarter_get_TimeBetweenRestartAttempts_m4643B819097BB5929C5EA5AAC0BBD798817B2465_inline(/*hidden argument*/NULL);
		RuntimeObject* L_2;
		L_2 = OculusRestarter_PauseAndRestartCoroutine_mE17893C50E82B62DABC119C745041BD732A93E72(__this, L_1, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
		__this->set_m_pauseAndRestartCoroutine_11(L_3);
		// }
		return;
	}
}
// System.Collections.IEnumerator Unity.XR.Oculus.OculusRestarter::PauseAndRestartCoroutine(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OculusRestarter_PauseAndRestartCoroutine_mE17893C50E82B62DABC119C745041BD732A93E72 (OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * __this, float ___pauseTimeInSeconds0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77 * L_0 = (U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77 *)il2cpp_codegen_object_new(U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77_il2cpp_TypeInfo_var);
		U3CPauseAndRestartCoroutineU3Ed__22__ctor_mE9A0F9B54589637F39AD77E522D257AAF233F600(L_0, 0, /*hidden argument*/NULL);
		U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77 * L_2 = L_1;
		float L_3 = ___pauseTimeInSeconds0;
		NullCheck(L_2);
		L_2->set_pauseTimeInSeconds_2(L_3);
		return L_2;
	}
}
// System.Collections.IEnumerator Unity.XR.Oculus.OculusRestarter::RestartCoroutine(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OculusRestarter_RestartCoroutine_mED386FBEC1602B3DB023E06F05EC3043E6FFC027 (OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * __this, bool ___shouldRestart0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D * L_0 = (U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D *)il2cpp_codegen_object_new(U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D_il2cpp_TypeInfo_var);
		U3CRestartCoroutineU3Ed__23__ctor_mFBCFBC73BF40550C580D2DBD6446E6765106D5DC(L_0, 0, /*hidden argument*/NULL);
		U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D * L_2 = L_1;
		bool L_3 = ___shouldRestart0;
		NullCheck(L_2);
		L_2->set_shouldRestart_3(L_3);
		return L_2;
	}
}
// System.Void Unity.XR.Oculus.OculusRestarter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusRestarter__ctor_mAFC467BA7F2B5C76CA9E93DF2B2FE5D4B991B05D (OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Unity.XR.Oculus.OculusSession::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusSession_Update_m9956F648A7B5BE12D6D26ED0DEBFD7B20722E4C2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (NativeMethods.GetShouldRestartSession()) {
		bool L_0;
		L_0 = NativeMethods_GetShouldRestartSession_m691BE303740AD0161244C7D02838D9A1397D8EA1(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// OculusRestarter.Instance.PauseAndRestart();
		IL2CPP_RUNTIME_CLASS_INIT(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_1;
		L_1 = OculusRestarter_get_Instance_m39A581FAA5C8E45A6603F7FA0EA6CAD784887796(/*hidden argument*/NULL);
		NullCheck(L_1);
		OculusRestarter_PauseAndRestart_m28727BF6DE2EB3868DBCE80CB9FFB05F11800C9B(L_1, /*hidden argument*/NULL);
	}

IL_0011:
	{
		// }
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
// System.UInt16 Unity.XR.Oculus.OculusSettings::GetStereoRenderingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t OculusSettings_GetStereoRenderingMode_mB4FF47E7831A653C90D7B08E336C40D66968F2FD (OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * __this, const RuntimeMethod* method)
{
	{
		// return (ushort)m_StereoRenderingModeDesktop;
		int32_t L_0 = __this->get_m_StereoRenderingModeDesktop_4();
		return (uint16_t)((int32_t)((uint16_t)L_0));
	}
}
// System.Void Unity.XR.Oculus.OculusSettings::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusSettings_Awake_m525FBEB4247E44DBC0D7E147581BD5EE751DCDB1 (OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Settings = this;
		((OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_StaticFields*)il2cpp_codegen_static_fields_for(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_il2cpp_TypeInfo_var))->set_s_Settings_19(__this);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.OculusSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusSettings__ctor_mBD02A264D1619566E55F183F6BE3E2F9D8C9747B (OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * __this, const RuntimeMethod* method)
{
	{
		// public bool SharedDepthBuffer = true;
		__this->set_SharedDepthBuffer_6((bool)1);
		// public bool DashSupport = true;
		__this->set_DashSupport_7((bool)1);
		// public bool V2Signing = true;
		__this->set_V2Signing_8((bool)1);
		// public bool FocusAware = true;
		__this->set_FocusAware_11((bool)1);
		// public bool OptimizeBufferDiscards = true;
		__this->set_OptimizeBufferDiscards_12((bool)1);
		// public bool TargetQuest = true;
		__this->set_TargetQuest_16((bool)1);
		// public bool TargetQuest2 = true;
		__this->set_TargetQuest2_17((bool)1);
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// UnityEngine.InputSystem.Controls.Vector2Control Unity.XR.Oculus.Input.OculusTouchController::get_thumbstick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * OculusTouchController_get_thumbstick_mFD912041252076A618BB744E52BF99032E43004E (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public Vector2Control thumbstick { get; private set; }
		Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * L_0 = __this->get_U3CthumbstickU3Ek__BackingField_48();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_thumbstick(UnityEngine.InputSystem.Controls.Vector2Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_thumbstick_m00F82EBCCC313F54B5A60F6A8447D92959B8716D (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2Control thumbstick { get; private set; }
		Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * L_0 = ___value0;
		__this->set_U3CthumbstickU3Ek__BackingField_48(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.AxisControl Unity.XR.Oculus.Input.OculusTouchController::get_trigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * OculusTouchController_get_trigger_m20305A0A16B17956FB0AADA6A179C8503595E1A2 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public AxisControl trigger { get; private set; }
		AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * L_0 = __this->get_U3CtriggerU3Ek__BackingField_49();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_trigger(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_trigger_m6F6E887869AED80DBD9B218B5134F024841695FA (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl trigger { get; private set; }
		AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * L_0 = ___value0;
		__this->set_U3CtriggerU3Ek__BackingField_49(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.AxisControl Unity.XR.Oculus.Input.OculusTouchController::get_grip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * OculusTouchController_get_grip_m189AB487AD9DEA49775E79249ED45A96A90B0684 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public AxisControl grip { get; private set; }
		AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * L_0 = __this->get_U3CgripU3Ek__BackingField_50();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_grip(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_grip_mADCF99F3193B708BF7396D5DA73DAA8DB4B779A3 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl grip { get; private set; }
		AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * L_0 = ___value0;
		__this->set_U3CgripU3Ek__BackingField_50(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::get_primaryButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * OculusTouchController_get_primaryButton_mA0D861B235BDC03A6810D69B668F5B5E13017F9A (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl primaryButton { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = __this->get_U3CprimaryButtonU3Ek__BackingField_51();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_primaryButton(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_primaryButton_mA8700B473E56C05853C534BDDF9F68539A6C2FD4 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl primaryButton { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CprimaryButtonU3Ek__BackingField_51(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::get_secondaryButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * OculusTouchController_get_secondaryButton_mAA60EB4A5A680C5DFA7C9ED3CFCEAC697E045FCD (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl secondaryButton { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = __this->get_U3CsecondaryButtonU3Ek__BackingField_52();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_secondaryButton(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_secondaryButton_m5BA77AC5600FEF3ECD35B02BBE329B6E9B22DFFB (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl secondaryButton { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CsecondaryButtonU3Ek__BackingField_52(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::get_gripPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * OculusTouchController_get_gripPressed_mBC04065E1EB23F39CB17A703591B6314156821FE (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl gripPressed { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = __this->get_U3CgripPressedU3Ek__BackingField_53();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_gripPressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_gripPressed_m7039EC4B244C76C50A901D80509889E1ABDD4026 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl gripPressed { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CgripPressedU3Ek__BackingField_53(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::get_start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * OculusTouchController_get_start_m063687E20DED483C7BF3A7357BB2A4B2F2D598D0 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl start { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = __this->get_U3CstartU3Ek__BackingField_54();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_start(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_start_m4679F07AD3DA5CE874D244FAB956778862AFA931 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl start { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CstartU3Ek__BackingField_54(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::get_thumbstickClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * OculusTouchController_get_thumbstickClicked_mB8A211D049AAA90AA6CEFF9DD5BC7AD1D33B4101 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl thumbstickClicked { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = __this->get_U3CthumbstickClickedU3Ek__BackingField_55();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_thumbstickClicked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_thumbstickClicked_m6EDEFE81C41FCA01762CBEAA00D0472D8403C634 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl thumbstickClicked { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CthumbstickClickedU3Ek__BackingField_55(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::get_primaryTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * OculusTouchController_get_primaryTouched_m2B05C3448521A6DBE6A3EFC7755715DFB4DC8EA3 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl primaryTouched { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = __this->get_U3CprimaryTouchedU3Ek__BackingField_56();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_primaryTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_primaryTouched_mEC9BC1EFB27C6CA5786B139702E6D33FD84AB6D7 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl primaryTouched { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CprimaryTouchedU3Ek__BackingField_56(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::get_secondaryTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * OculusTouchController_get_secondaryTouched_mA7A4EE7458B7C323C3916FE99F97F4A8ADA037E0 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl secondaryTouched { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = __this->get_U3CsecondaryTouchedU3Ek__BackingField_57();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_secondaryTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_secondaryTouched_mE7A945ED75984999AB0DCFE0E0E11A1515C85592 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl secondaryTouched { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CsecondaryTouchedU3Ek__BackingField_57(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.AxisControl Unity.XR.Oculus.Input.OculusTouchController::get_triggerTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * OculusTouchController_get_triggerTouched_m6D6A1CE7AC2513C462BEE7720FF9745CFD957983 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public AxisControl triggerTouched { get; private set; }
		AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * L_0 = __this->get_U3CtriggerTouchedU3Ek__BackingField_58();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_triggerTouched(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_triggerTouched_m339518BDD4A2BBD7CBE6C4B858C771FA39DA7157 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl triggerTouched { get; private set; }
		AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * L_0 = ___value0;
		__this->set_U3CtriggerTouchedU3Ek__BackingField_58(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::get_triggerPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * OculusTouchController_get_triggerPressed_mC1C5C4B34538051EA1F565F4375469E693F18670 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl triggerPressed { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = __this->get_U3CtriggerPressedU3Ek__BackingField_59();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_triggerPressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_triggerPressed_m1BB81FA58DADC4EB3B71188F28FB3ABC00E59833 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl triggerPressed { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CtriggerPressedU3Ek__BackingField_59(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::get_thumbstickTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * OculusTouchController_get_thumbstickTouched_m02CC45E97CD003F042291F91C66C1A2C123605A3 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl thumbstickTouched { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = __this->get_U3CthumbstickTouchedU3Ek__BackingField_60();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_thumbstickTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_thumbstickTouched_mFE18A59ABD500CCC4DB33B6A22791D170B1A2018 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl thumbstickTouched { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CthumbstickTouchedU3Ek__BackingField_60(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.IntegerControl Unity.XR.Oculus.Input.OculusTouchController::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * OculusTouchController_get_trackingState_m4A4E14D04E77731A5CA3BC178034A04CAA711A6C (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public new IntegerControl trackingState { get; private set; }
		IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * L_0 = __this->get_U3CtrackingStateU3Ek__BackingField_61();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_trackingState_m489EE336DEF47BAD050DD22AC9F01B6E48B35F92 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * ___value0, const RuntimeMethod* method)
{
	{
		// public new IntegerControl trackingState { get; private set; }
		IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * L_0 = ___value0;
		__this->set_U3CtrackingStateU3Ek__BackingField_61(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::get_isTracked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * OculusTouchController_get_isTracked_mE41828C544EFC233EF62362CCAA643B5247973B2 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public new ButtonControl isTracked { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = __this->get_U3CisTrackedU3Ek__BackingField_62();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_isTracked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_isTracked_mC244243B9DC88A638E059D15C1AE0EBFF9A9EE2A (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public new ButtonControl isTracked { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CisTrackedU3Ek__BackingField_62(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusTouchController::get_devicePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * OculusTouchController_get_devicePosition_mFB537547642DFAA32FBBB3936219DDD8ED183E5C (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public new Vector3Control devicePosition { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = __this->get_U3CdevicePositionU3Ek__BackingField_63();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_devicePosition_m70F8D567FC1F462D3F9448A27EE657B739558E10 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control devicePosition { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CdevicePositionU3Ek__BackingField_63(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.OculusTouchController::get_deviceRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * OculusTouchController_get_deviceRotation_m7AABAF6C9B2DB0E17E4CDF60CC7B04023E4A5DB8 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * L_0 = __this->get_U3CdeviceRotationU3Ek__BackingField_64();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceRotation_mAAF6A6FF0283A463485FDF78733891EB3D44C5EC (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * L_0 = ___value0;
		__this->set_U3CdeviceRotationU3Ek__BackingField_64(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusTouchController::get_deviceVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * OculusTouchController_get_deviceVelocity_m3D40C80FEEE8487D4B29EDCDA848DB83C1BB1EBD (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceVelocity { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = __this->get_U3CdeviceVelocityU3Ek__BackingField_65();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_deviceVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceVelocity_m52D4BC592FB6E47A498E50306AB9A343F73AAC66 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceVelocity { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CdeviceVelocityU3Ek__BackingField_65(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusTouchController::get_deviceAngularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * OculusTouchController_get_deviceAngularVelocity_m4884F6051835A91D03F2510F3F1BEFE058879792 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularVelocity { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = __this->get_U3CdeviceAngularVelocityU3Ek__BackingField_66();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_deviceAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceAngularVelocity_mFDA9EEAFEEB4282AF8E2286BFC665534F7647FB7 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularVelocity { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CdeviceAngularVelocityU3Ek__BackingField_66(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusTouchController::get_deviceAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * OculusTouchController_get_deviceAcceleration_m881F948F2332B1F9E13978C6428850D969A42B04 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAcceleration { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = __this->get_U3CdeviceAccelerationU3Ek__BackingField_67();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_deviceAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceAcceleration_mE7159D3C09C8821DE5D175AD0F1EF3BB21B8C584 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAcceleration { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CdeviceAccelerationU3Ek__BackingField_67(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusTouchController::get_deviceAngularAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * OculusTouchController_get_deviceAngularAcceleration_m6F83F23CE6E24483074431768C678DFFE17F0AF8 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularAcceleration { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = __this->get_U3CdeviceAngularAccelerationU3Ek__BackingField_68();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_deviceAngularAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceAngularAcceleration_mE7F8E9E296ADA9F2BFF9A07612315BD1428A15CE (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularAcceleration { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CdeviceAngularAccelerationU3Ek__BackingField_68(L_0);
		return;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_FinishSetup_mCFB90E6EBDEB8F694B926E12EDE38DA7D3BD394A (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisAxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61_m50AA28A6A79BF457341DE5768D5F8F2E1D0B0B4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisIntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3_mADA7BED738CAC95FE7FE96EB3C14277B7158E331_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisQuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A_mDC7B154D598EA657266845F32A54167E63A3C42E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1_m6FAC1ACEDE733EE9B82D626AA2E0BDE4A5705980_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D3C0882E8B897E888F8BF5C82A33ED850CDEA80);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48FC1F936713D53F5EFACC314E330907113FDC9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4ADB212528F8CF625764142B108030A0499510F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C9B28579DAB706CEF903A85854B98A08280D27D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FAF1332EAA22ED62546993B44D1AE07024AA9C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DA5B233166AA50A8488D3B97E0B5A1D09EA4905);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E00AB7EC86A20EC1ECB923C22939506C6806CC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A8CECB369E64DA7E1FBB6FDE079801EFD1EBFEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral767FF60B240D13D0E7862196C1340B1049EF4B4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral836BEF03CDF7F78C55ADABFC8E7F1FC31387E456);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral890FDBCF037770EED7A1937DEF697FFC44FBF0B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C0461316058197D67FFB59CE6A345F2B7BEA590);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E98EC4F7D85E6AB585D718D9BEDBB163E42B54C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FE5967523CA0E49A247084021DB0C0C2C996FDF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5CCD6D3CB93DC1BEDD79DB8A4B75174089A3455);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3E98CA0D21B6899AC08C4CE0868CF1323933585);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.FinishSetup();
		XRController_FinishSetup_m9CE3D32BDE43475028823752C0FB7768B7E9F2CB(__this, /*hidden argument*/NULL);
		// thumbstick = GetChildControl<Vector2Control>("thumbstick");
		Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * L_0;
		L_0 = InputControl_GetChildControl_TisVector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1_m6FAC1ACEDE733EE9B82D626AA2E0BDE4A5705980(__this, _stringLiteral6A8CECB369E64DA7E1FBB6FDE079801EFD1EBFEB, /*hidden argument*/InputControl_GetChildControl_TisVector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1_m6FAC1ACEDE733EE9B82D626AA2E0BDE4A5705980_RuntimeMethod_var);
		OculusTouchController_set_thumbstick_m00F82EBCCC313F54B5A60F6A8447D92959B8716D_inline(__this, L_0, /*hidden argument*/NULL);
		// trigger = GetChildControl<AxisControl>("trigger");
		AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * L_1;
		L_1 = InputControl_GetChildControl_TisAxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61_m50AA28A6A79BF457341DE5768D5F8F2E1D0B0B4D(__this, _stringLiteral9FE5967523CA0E49A247084021DB0C0C2C996FDF, /*hidden argument*/InputControl_GetChildControl_TisAxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61_m50AA28A6A79BF457341DE5768D5F8F2E1D0B0B4D_RuntimeMethod_var);
		OculusTouchController_set_trigger_m6F6E887869AED80DBD9B218B5134F024841695FA_inline(__this, L_1, /*hidden argument*/NULL);
		// triggerTouched = GetChildControl<AxisControl>("triggerTouched");
		AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * L_2;
		L_2 = InputControl_GetChildControl_TisAxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61_m50AA28A6A79BF457341DE5768D5F8F2E1D0B0B4D(__this, _stringLiteral767FF60B240D13D0E7862196C1340B1049EF4B4B, /*hidden argument*/InputControl_GetChildControl_TisAxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61_m50AA28A6A79BF457341DE5768D5F8F2E1D0B0B4D_RuntimeMethod_var);
		OculusTouchController_set_triggerTouched_m339518BDD4A2BBD7CBE6C4B858C771FA39DA7157_inline(__this, L_2, /*hidden argument*/NULL);
		// grip = GetChildControl<AxisControl>("grip");
		AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * L_3;
		L_3 = InputControl_GetChildControl_TisAxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61_m50AA28A6A79BF457341DE5768D5F8F2E1D0B0B4D(__this, _stringLiteral4FAF1332EAA22ED62546993B44D1AE07024AA9C9, /*hidden argument*/InputControl_GetChildControl_TisAxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61_m50AA28A6A79BF457341DE5768D5F8F2E1D0B0B4D_RuntimeMethod_var);
		OculusTouchController_set_grip_mADCF99F3193B708BF7396D5DA73DAA8DB4B779A3_inline(__this, L_3, /*hidden argument*/NULL);
		// primaryButton = GetChildControl<ButtonControl>("primaryButton");
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_4;
		L_4 = InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9(__this, _stringLiteral5DA5B233166AA50A8488D3B97E0B5A1D09EA4905, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9_RuntimeMethod_var);
		OculusTouchController_set_primaryButton_mA8700B473E56C05853C534BDDF9F68539A6C2FD4_inline(__this, L_4, /*hidden argument*/NULL);
		// secondaryButton = GetChildControl<ButtonControl>("secondaryButton");
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_5;
		L_5 = InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9(__this, _stringLiteral4ADB212528F8CF625764142B108030A0499510F0, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9_RuntimeMethod_var);
		OculusTouchController_set_secondaryButton_m5BA77AC5600FEF3ECD35B02BBE329B6E9B22DFFB_inline(__this, L_5, /*hidden argument*/NULL);
		// gripPressed = GetChildControl<ButtonControl>("gripPressed");
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_6;
		L_6 = InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9(__this, _stringLiteral836BEF03CDF7F78C55ADABFC8E7F1FC31387E456, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9_RuntimeMethod_var);
		OculusTouchController_set_gripPressed_m7039EC4B244C76C50A901D80509889E1ABDD4026_inline(__this, L_6, /*hidden argument*/NULL);
		// start = GetChildControl<ButtonControl>("start");
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_7;
		L_7 = InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9(__this, _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9_RuntimeMethod_var);
		OculusTouchController_set_start_m4679F07AD3DA5CE874D244FAB956778862AFA931_inline(__this, L_7, /*hidden argument*/NULL);
		// thumbstickClicked = GetChildControl<ButtonControl>("thumbstickClicked");
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_8;
		L_8 = InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9(__this, _stringLiteralB5CCD6D3CB93DC1BEDD79DB8A4B75174089A3455, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9_RuntimeMethod_var);
		OculusTouchController_set_thumbstickClicked_m6EDEFE81C41FCA01762CBEAA00D0472D8403C634_inline(__this, L_8, /*hidden argument*/NULL);
		// primaryTouched = GetChildControl<ButtonControl>("primaryTouched");
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_9;
		L_9 = InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9(__this, _stringLiteral9E98EC4F7D85E6AB585D718D9BEDBB163E42B54C, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9_RuntimeMethod_var);
		OculusTouchController_set_primaryTouched_mEC9BC1EFB27C6CA5786B139702E6D33FD84AB6D7_inline(__this, L_9, /*hidden argument*/NULL);
		// secondaryTouched = GetChildControl<ButtonControl>("secondaryTouched");
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_10;
		L_10 = InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9(__this, _stringLiteral890FDBCF037770EED7A1937DEF697FFC44FBF0B3, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9_RuntimeMethod_var);
		OculusTouchController_set_secondaryTouched_mE7A945ED75984999AB0DCFE0E0E11A1515C85592_inline(__this, L_10, /*hidden argument*/NULL);
		// thumbstickTouched = GetChildControl<ButtonControl>("thumbstickTouched");
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_11;
		L_11 = InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9(__this, _stringLiteral4C9B28579DAB706CEF903A85854B98A08280D27D, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9_RuntimeMethod_var);
		OculusTouchController_set_thumbstickTouched_mFE18A59ABD500CCC4DB33B6A22791D170B1A2018_inline(__this, L_11, /*hidden argument*/NULL);
		// triggerPressed = GetChildControl<ButtonControl>("triggerPressed");
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_12;
		L_12 = InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9(__this, _stringLiteral9C0461316058197D67FFB59CE6A345F2B7BEA590, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9_RuntimeMethod_var);
		OculusTouchController_set_triggerPressed_m1BB81FA58DADC4EB3B71188F28FB3ABC00E59833_inline(__this, L_12, /*hidden argument*/NULL);
		// trackingState = GetChildControl<IntegerControl>("trackingState");
		IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * L_13;
		L_13 = InputControl_GetChildControl_TisIntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3_mADA7BED738CAC95FE7FE96EB3C14277B7158E331(__this, _stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D, /*hidden argument*/InputControl_GetChildControl_TisIntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3_mADA7BED738CAC95FE7FE96EB3C14277B7158E331_RuntimeMethod_var);
		OculusTouchController_set_trackingState_m489EE336DEF47BAD050DD22AC9F01B6E48B35F92_inline(__this, L_13, /*hidden argument*/NULL);
		// isTracked = GetChildControl<ButtonControl>("isTracked");
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_14;
		L_14 = InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9(__this, _stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9_RuntimeMethod_var);
		OculusTouchController_set_isTracked_mC244243B9DC88A638E059D15C1AE0EBFF9A9EE2A_inline(__this, L_14, /*hidden argument*/NULL);
		// devicePosition = GetChildControl<Vector3Control>("devicePosition");
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_15;
		L_15 = InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71(__this, _stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71_RuntimeMethod_var);
		OculusTouchController_set_devicePosition_m70F8D567FC1F462D3F9448A27EE657B739558E10_inline(__this, L_15, /*hidden argument*/NULL);
		// deviceRotation = GetChildControl<QuaternionControl>("deviceRotation");
		QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * L_16;
		L_16 = InputControl_GetChildControl_TisQuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A_mDC7B154D598EA657266845F32A54167E63A3C42E(__this, _stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567, /*hidden argument*/InputControl_GetChildControl_TisQuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A_mDC7B154D598EA657266845F32A54167E63A3C42E_RuntimeMethod_var);
		OculusTouchController_set_deviceRotation_mAAF6A6FF0283A463485FDF78733891EB3D44C5EC_inline(__this, L_16, /*hidden argument*/NULL);
		// deviceVelocity = GetChildControl<Vector3Control>("deviceVelocity");
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_17;
		L_17 = InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71(__this, _stringLiteral2D3C0882E8B897E888F8BF5C82A33ED850CDEA80, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71_RuntimeMethod_var);
		OculusTouchController_set_deviceVelocity_m52D4BC592FB6E47A498E50306AB9A343F73AAC66_inline(__this, L_17, /*hidden argument*/NULL);
		// deviceAngularVelocity = GetChildControl<Vector3Control>("deviceAngularVelocity");
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_18;
		L_18 = InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71(__this, _stringLiteral48FC1F936713D53F5EFACC314E330907113FDC9D, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71_RuntimeMethod_var);
		OculusTouchController_set_deviceAngularVelocity_mFDA9EEAFEEB4282AF8E2286BFC665534F7647FB7_inline(__this, L_18, /*hidden argument*/NULL);
		// deviceAcceleration = GetChildControl<Vector3Control>("deviceAcceleration");
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_19;
		L_19 = InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71(__this, _stringLiteral5E00AB7EC86A20EC1ECB923C22939506C6806CC9, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71_RuntimeMethod_var);
		OculusTouchController_set_deviceAcceleration_mE7159D3C09C8821DE5D175AD0F1EF3BB21B8C584_inline(__this, L_19, /*hidden argument*/NULL);
		// deviceAngularAcceleration = GetChildControl<Vector3Control>("deviceAngularAcceleration");
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_20;
		L_20 = InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71(__this, _stringLiteralC3E98CA0D21B6899AC08C4CE0868CF1323933585, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71_RuntimeMethod_var);
		OculusTouchController_set_deviceAngularAcceleration_mE7F8E9E296ADA9F2BFF9A07612315BD1428A15CE_inline(__this, L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController__ctor_m3DF25FC6EBC1D65AFDBDB011BCF9ABB1A85793C8 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		XRControllerWithRumble__ctor_m144AC64AFA76873B0C51FA8789330DF914A9F7D5(__this, /*hidden argument*/NULL);
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
// UnityEngine.InputSystem.Controls.IntegerControl Unity.XR.Oculus.Input.OculusTrackingReference::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * OculusTrackingReference_get_trackingState_mF80DC82EFD8D24A1F98BD2665FF50E91D1CAC953 (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, const RuntimeMethod* method)
{
	{
		// public IntegerControl trackingState { get; private set; }
		IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * L_0 = __this->get_U3CtrackingStateU3Ek__BackingField_44();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTrackingReference::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTrackingReference_set_trackingState_mEF7324C462A98E446070E0169D4409FFB2E7735A (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * ___value0, const RuntimeMethod* method)
{
	{
		// public IntegerControl trackingState { get; private set; }
		IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * L_0 = ___value0;
		__this->set_U3CtrackingStateU3Ek__BackingField_44(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTrackingReference::get_isTracked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * OculusTrackingReference_get_isTracked_mBF7BD4285B5D0C7CAD80A64FCECA44DE8242B6B1 (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl isTracked { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = __this->get_U3CisTrackedU3Ek__BackingField_45();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTrackingReference::set_isTracked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTrackingReference_set_isTracked_mE8F3E0C098AE57B5B7FB82C6B58B63BFA5BC3CC4 (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl isTracked { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CisTrackedU3Ek__BackingField_45(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusTrackingReference::get_devicePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * OculusTrackingReference_get_devicePosition_mD75CCBD843C301EDF4244CB6ACE190F43B5B47AF (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control devicePosition { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = __this->get_U3CdevicePositionU3Ek__BackingField_46();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTrackingReference::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTrackingReference_set_devicePosition_m2EC3DD9273A0831CCC9DC458F450E26CCB79F49A (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control devicePosition { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CdevicePositionU3Ek__BackingField_46(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.OculusTrackingReference::get_deviceRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * OculusTrackingReference_get_deviceRotation_m8420EA181176AB67F4F1E7C6A54F3A08302F540E (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, const RuntimeMethod* method)
{
	{
		// public QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * L_0 = __this->get_U3CdeviceRotationU3Ek__BackingField_47();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTrackingReference::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTrackingReference_set_deviceRotation_m86012663D85BC459D875DE3F48F18C7A4FF4C670 (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * ___value0, const RuntimeMethod* method)
{
	{
		// public QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * L_0 = ___value0;
		__this->set_U3CdeviceRotationU3Ek__BackingField_47(L_0);
		return;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTrackingReference::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTrackingReference_FinishSetup_mC8CDDD455575F2A0FF9F9E3E996CDD200752BC33 (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisIntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3_mADA7BED738CAC95FE7FE96EB3C14277B7158E331_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisQuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A_mDC7B154D598EA657266845F32A54167E63A3C42E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.FinishSetup();
		InputControl_FinishSetup_m6C5197AC4E2CE043C961C73FAE231A3CE403AB43(__this, /*hidden argument*/NULL);
		// trackingState = GetChildControl<IntegerControl>("trackingState");
		IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * L_0;
		L_0 = InputControl_GetChildControl_TisIntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3_mADA7BED738CAC95FE7FE96EB3C14277B7158E331(__this, _stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D, /*hidden argument*/InputControl_GetChildControl_TisIntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3_mADA7BED738CAC95FE7FE96EB3C14277B7158E331_RuntimeMethod_var);
		OculusTrackingReference_set_trackingState_mEF7324C462A98E446070E0169D4409FFB2E7735A_inline(__this, L_0, /*hidden argument*/NULL);
		// isTracked = GetChildControl<ButtonControl>("isTracked");
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_1;
		L_1 = InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9(__this, _stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_mA2569DF9EC09A5E0A3FAD37B86ADBFF2B2CE0FA9_RuntimeMethod_var);
		OculusTrackingReference_set_isTracked_mE8F3E0C098AE57B5B7FB82C6B58B63BFA5BC3CC4_inline(__this, L_1, /*hidden argument*/NULL);
		// devicePosition = GetChildControl<Vector3Control>("devicePosition");
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_2;
		L_2 = InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71(__this, _stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718_m33F63AC3680BDB00460D65E97955191BF71DCF71_RuntimeMethod_var);
		OculusTrackingReference_set_devicePosition_m2EC3DD9273A0831CCC9DC458F450E26CCB79F49A_inline(__this, L_2, /*hidden argument*/NULL);
		// deviceRotation = GetChildControl<QuaternionControl>("deviceRotation");
		QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * L_3;
		L_3 = InputControl_GetChildControl_TisQuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A_mDC7B154D598EA657266845F32A54167E63A3C42E(__this, _stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567, /*hidden argument*/InputControl_GetChildControl_TisQuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A_mDC7B154D598EA657266845F32A54167E63A3C42E_RuntimeMethod_var);
		OculusTrackingReference_set_deviceRotation_m86012663D85BC459D875DE3F48F18C7A4FF4C670_inline(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTrackingReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTrackingReference__ctor_m034388DDCC9F71833408E6C24C10F4F8C9FFE15E (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, const RuntimeMethod* method)
{
	{
		InputDevice__ctor_m31094E7AA7ADF06B4A30AB3B3B154618399A9846(__this, /*hidden argument*/NULL);
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
// System.Void Unity.XR.Oculus.RegisterUpdateCallback::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisterUpdateCallback_Initialize_m009EBB49477FAD1D7E03DA45EB80F15E6D28F521 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegisterUpdateCallback_Update_m2DA82FDFC251E9F4D10F6F5ADB6A9F4B11BAD7ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.onBeforeRender += Update;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_0 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_0, NULL, (intptr_t)((intptr_t)RegisterUpdateCallback_Update_m2DA82FDFC251E9F4D10F6F5ADB6A9F4B11BAD7ED_RuntimeMethod_var), /*hidden argument*/NULL);
		Application_add_onBeforeRender_m1324FCAC06439BC14CFCE062C6BEFB76C7501228(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.RegisterUpdateCallback::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisterUpdateCallback_Deinitialize_m5783A25B492DD2271AF20528CC7225AA69B48D2B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegisterUpdateCallback_Update_m2DA82FDFC251E9F4D10F6F5ADB6A9F4B11BAD7ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.onBeforeRender -= Update;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_0 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_0, NULL, (intptr_t)((intptr_t)RegisterUpdateCallback_Update_m2DA82FDFC251E9F4D10F6F5ADB6A9F4B11BAD7ED_RuntimeMethod_var), /*hidden argument*/NULL);
		Application_remove_onBeforeRender_mD2FFDA214D242F524EFF15932A7334F1F0D526D0(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.RegisterUpdateCallback::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisterUpdateCallback_Update_m2DA82FDFC251E9F4D10F6F5ADB6A9F4B11BAD7ED (const RuntimeMethod* method)
{
	{
		// InputFocus.Update();
		InputFocus_Update_mA29F59D3148E351431EF53DEEE921320DC66945E(/*hidden argument*/NULL);
		// OculusSession.Update();
		OculusSession_Update_m9956F648A7B5BE12D6D26ED0DEBFD7B20722E4C2(/*hidden argument*/NULL);
		// if (NativeMethods.GetAppShouldQuit())
		bool L_0;
		L_0 = NativeMethods_GetAppShouldQuit_m4A8AC6995227A1AA4F5EF087051DA57735D0C486(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// Application.Quit();
		Application_Quit_m10E44C187C0E5807F9C955A176885FAA95829267(/*hidden argument*/NULL);
	}

IL_0016:
	{
		// }
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
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::LoadOVRPlugin(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_LoadOVRPlugin_m20BF6ADFC47F043ED9CB9F86199E26C8A46AD5AF (String_t* ___ovrpPath0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (Il2CppChar*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Il2CppChar*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "LoadOVRPlugin", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___ovrpPath0' to native representation
	Il2CppChar* ____ovrpPath0_marshaled = NULL;
	if (___ovrpPath0 != NULL)
	{
		____ovrpPath0_marshaled = ___ovrpPath0->get_address_of_m_firstChar_1();
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(LoadOVRPlugin)(____ovrpPath0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____ovrpPath0_marshaled);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetUserDefinedSettings(Unity.XR.Oculus.NativeMethods/UserDefinedSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetUserDefinedSettings_mE187F03B58FEB8FE874B938E28401C06C919221E (UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D  ___settings0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D );
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D ) + 2;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetUserDefinedSettings", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetUserDefinedSettings)(___settings0);
	#else
	il2cppPInvokeFunc(___settings0);
	#endif

}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::SetDeveloperModeStrict(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_SetDeveloperModeStrict_m0A2121361A4FFDA8D0EF716D2C011F0EF19A34F8 (bool ___active0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetDeveloperModeStrict", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SetDeveloperModeStrict)(static_cast<int32_t>(___active0));
	#else
	int32_t returnValue = il2cppPInvokeFunc(static_cast<int32_t>(___active0));
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetAppHasInputFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetAppHasInputFocus_mA679379FDE6F3AFAFBF35841818A0BD5A492579F (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetAppHasInputFocus", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetAppHasInputFocus)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetAppShouldQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetAppShouldQuit_m2201DC6D753AE50E8E041C75816721CC622DA353 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetAppShouldQuit", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetAppShouldQuit)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetShouldRestartSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetShouldRestartSession_m232B73B6EB98D8E93F361FFBEDC386E93CD86E1E (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetShouldRestartSession", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetShouldRestartSession)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.XR.Oculus.OculusRestarter/<PauseAndRestartCoroutine>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseAndRestartCoroutineU3Ed__22__ctor_mE9A0F9B54589637F39AD77E522D257AAF233F600 (U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Unity.XR.Oculus.OculusRestarter/<PauseAndRestartCoroutine>d__22::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseAndRestartCoroutineU3Ed__22_System_IDisposable_Dispose_m2D4C564714370227159B843E3E3FD992C00C00BC (U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CPauseAndRestartCoroutineU3Ed__22_U3CU3Em__Finally1_m17836219B16F0E2F40AFE29DDADEACD9F0CEA00E(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Unity.XR.Oculus.OculusRestarter/<PauseAndRestartCoroutine>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPauseAndRestartCoroutineU3Ed__22_MoveNext_m594251DEF3855E1BD0F30EB7B45CEF06C51E94D7 (U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9193CA2A883A8C656610DDBD604EA09532252279);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_1 = __this->get_U3CU3E4__this_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_001c;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0047;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_009d;
		}

IL_001c:
		{
			__this->set_U3CU3E1__state_0((-1));
			// {
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return new WaitForSeconds(pauseTimeInSeconds);
			float L_4 = __this->get_pauseTimeInSeconds_2();
			WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
			WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, L_4, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_5);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_009d;
		}

IL_0047:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// m_pauseAndRestartAttempts += 1;
			IL2CPP_RUNTIME_CLASS_INIT(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
			int32_t L_6 = ((OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields*)il2cpp_codegen_static_fields_for(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var))->get_m_pauseAndRestartAttempts_12();
			((OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields*)il2cpp_codegen_static_fields_for(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var))->set_m_pauseAndRestartAttempts_12(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
			// if (m_Coroutine == null)
			OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_7 = V_2;
			NullCheck(L_7);
			Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_8 = L_7->get_m_Coroutine_10();
			if (L_8)
			{
				goto IL_0078;
			}
		}

IL_0063:
		{
			// m_Coroutine = StartCoroutine(RestartCoroutine(true));
			OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_9 = V_2;
			OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_10 = V_2;
			OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_11 = V_2;
			NullCheck(L_11);
			RuntimeObject* L_12;
			L_12 = OculusRestarter_RestartCoroutine_mED386FBEC1602B3DB023E06F05EC3043E6FFC027(L_11, (bool)1, /*hidden argument*/NULL);
			NullCheck(L_10);
			Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_13;
			L_13 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_10, L_12, /*hidden argument*/NULL);
			NullCheck(L_9);
			L_9->set_m_Coroutine_10(L_13);
			// }
			goto IL_008c;
		}

IL_0078:
		{
			// Debug.LogError(String.Format("Restart/Shutdown already in progress so skipping this attempt."));
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14;
			L_14 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
			String_t* L_15;
			L_15 = String_Format_m2CDD2A21AF2BCE3CE07D634645F9A61B4CB7D9B3(_stringLiteral9193CA2A883A8C656610DDBD604EA09532252279, L_14, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(L_15, /*hidden argument*/NULL);
		}

IL_008c:
		{
			// }
			U3CPauseAndRestartCoroutineU3Ed__22_U3CU3Em__Finally1_m17836219B16F0E2F40AFE29DDADEACD9F0CEA00E(__this, /*hidden argument*/NULL);
			// }
			V_0 = (bool)0;
			goto IL_009d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0096;
	}

FAULT_0096:
	{ // begin fault (depth: 1)
		U3CPauseAndRestartCoroutineU3Ed__22_System_IDisposable_Dispose_m2D4C564714370227159B843E3E3FD992C00C00BC(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(150)
	} // end fault
	IL2CPP_CLEANUP(150)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_009d:
	{
		bool L_16 = V_0;
		return L_16;
	}
}
// System.Void Unity.XR.Oculus.OculusRestarter/<PauseAndRestartCoroutine>d__22::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseAndRestartCoroutineU3Ed__22_U3CU3Em__Finally1_m17836219B16F0E2F40AFE29DDADEACD9F0CEA00E (U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77 * __this, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		__this->set_U3CU3E1__state_0((-1));
		OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_0 = __this->get_U3CU3E4__this_3();
		// m_pauseAndRestartCoroutine = null;
		OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_m_pauseAndRestartCoroutine_11((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
		// onAfterCoroutine?.Invoke();
		NullCheck(L_1);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = L_1->get_onAfterCoroutine_7();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Object Unity.XR.Oculus.OculusRestarter/<PauseAndRestartCoroutine>d__22::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPauseAndRestartCoroutineU3Ed__22_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5CE986377F44FF4B04030B2B1CB84A4630F803A9 (U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.OculusRestarter/<PauseAndRestartCoroutine>d__22::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseAndRestartCoroutineU3Ed__22_System_Collections_IEnumerator_Reset_m437EE8315D091FAF8113083C558FB27ACDFD49AC (U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPauseAndRestartCoroutineU3Ed__22_System_Collections_IEnumerator_Reset_m437EE8315D091FAF8113083C558FB27ACDFD49AC_RuntimeMethod_var)));
	}
}
// System.Object Unity.XR.Oculus.OculusRestarter/<PauseAndRestartCoroutine>d__22::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPauseAndRestartCoroutineU3Ed__22_System_Collections_IEnumerator_get_Current_m1A0F4AF33C851DF304034CA195AB9A7DAA9E798A (U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Unity.XR.Oculus.OculusRestarter/<RestartCoroutine>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestartCoroutineU3Ed__23__ctor_mFBCFBC73BF40550C580D2DBD6446E6765106D5DC (U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Unity.XR.Oculus.OculusRestarter/<RestartCoroutine>d__23::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestartCoroutineU3Ed__23_System_IDisposable_Dispose_m3CB326B58BAA27EB44C80329052E1D2FBB7701B9 (U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1))) <= ((uint32_t)2))))
		{
			goto IL_001c;
		}
	}

IL_0012:
	{
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1C, FINALLY_0015);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0015;
	}

FINALLY_0015:
	{ // begin finally (depth: 1)
		U3CRestartCoroutineU3Ed__23_U3CU3Em__Finally1_m5D43CE3EF7B89A3C817C148215ABE10F5F221332(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(21)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(21)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1C, IL_001c)
	}

IL_001c:
	{
		return;
	}
}
// System.Boolean Unity.XR.Oculus.OculusRestarter/<RestartCoroutine>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRestartCoroutineU3Ed__23_MoveNext_mCF04F2683E7B1F137036D577AA4C7A54AD86E648 (U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3115DB94D93EB3315DED225F97D881D8A834AB58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB261904704D3ADA83E0084DF37061DE2D4CE88C1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B6_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B5_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B14_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B13_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_1 = __this->get_U3CU3E4__this_2();
			V_2 = L_1;
			int32_t L_2 = V_1;
			switch (L_2)
			{
				case 0:
				{
					goto IL_002b;
				}
				case 1:
				{
					goto IL_004f;
				}
				case 2:
				{
					goto IL_007b;
				}
				case 3:
				{
					goto IL_00bc;
				}
			}
		}

IL_0024:
		{
			V_0 = (bool)0;
			goto IL_0128;
		}

IL_002b:
		{
			__this->set_U3CU3E1__state_0((-1));
			// {
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return null;
			__this->set_U3CU3E2__current_1(NULL);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0128;
		}

IL_004f:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// XRGeneralSettings.Instance.Manager.DeinitializeLoader();
			IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
			XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_3;
			L_3 = XRGeneralSettings_get_Instance_mC714587778971DCD3EBECF8FC23741ED9A7A23BE_inline(/*hidden argument*/NULL);
			NullCheck(L_3);
			XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_4;
			L_4 = XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544_inline(L_3, /*hidden argument*/NULL);
			NullCheck(L_4);
			XRManagerSettings_DeinitializeLoader_m6AD4F079818DF78946C99AD8D49E3D343DAAF290(L_4, /*hidden argument*/NULL);
			// yield return null;
			__this->set_U3CU3E2__current_1(NULL);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_0128;
		}

IL_007b:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// onAfterShutdown?.Invoke();
			OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_5 = V_2;
			NullCheck(L_5);
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = L_5->get_onAfterShutdown_5();
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = L_6;
			G_B5_0 = L_7;
			if (L_7)
			{
				G_B6_0 = L_7;
				goto IL_008f;
			}
		}

IL_008c:
		{
			goto IL_0094;
		}

IL_008f:
		{
			NullCheck(G_B6_0);
			Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B6_0, /*hidden argument*/NULL);
		}

IL_0094:
		{
			// if (shouldRestart)
			bool L_8 = __this->get_shouldRestart_3();
			if (!L_8)
			{
				goto IL_0117;
			}
		}

IL_009c:
		{
			// yield return XRGeneralSettings.Instance.Manager.InitializeLoader();
			IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
			XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_9;
			L_9 = XRGeneralSettings_get_Instance_mC714587778971DCD3EBECF8FC23741ED9A7A23BE_inline(/*hidden argument*/NULL);
			NullCheck(L_9);
			XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_10;
			L_10 = XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544_inline(L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			RuntimeObject* L_11;
			L_11 = XRManagerSettings_InitializeLoader_m92B987C89AF6F7E7D05718296243E0ED021FD6B3(L_10, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_11);
			__this->set_U3CU3E1__state_0(3);
			V_0 = (bool)1;
			goto IL_0128;
		}

IL_00bc:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// XRGeneralSettings.Instance.Manager.StartSubsystems();
			IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
			XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_12;
			L_12 = XRGeneralSettings_get_Instance_mC714587778971DCD3EBECF8FC23741ED9A7A23BE_inline(/*hidden argument*/NULL);
			NullCheck(L_12);
			XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_13;
			L_13 = XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544_inline(L_12, /*hidden argument*/NULL);
			NullCheck(L_13);
			XRManagerSettings_StartSubsystems_mB9F502956C1FC6AD6D421CD36C3980B095B4282E(L_13, /*hidden argument*/NULL);
			// if (XRGeneralSettings.Instance.Manager.activeLoader == null)
			XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_14;
			L_14 = XRGeneralSettings_get_Instance_mC714587778971DCD3EBECF8FC23741ED9A7A23BE_inline(/*hidden argument*/NULL);
			NullCheck(L_14);
			XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_15;
			L_15 = XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544_inline(L_14, /*hidden argument*/NULL);
			NullCheck(L_15);
			XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_16;
			L_16 = XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline(L_15, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_17;
			L_17 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_16, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_17)
			{
				goto IL_00f6;
			}
		}

IL_00ea:
		{
			// Debug.LogError("Failure to restart OculusLoader after shutdown.");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(_stringLiteral3115DB94D93EB3315DED225F97D881D8A834AB58, /*hidden argument*/NULL);
			// }
			goto IL_0106;
		}

IL_00f6:
		{
			// Debug.Log("OculusLoader restart successful.");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteralB261904704D3ADA83E0084DF37061DE2D4CE88C1, /*hidden argument*/NULL);
			// m_pauseAndRestartAttempts = 0;
			IL2CPP_RUNTIME_CLASS_INIT(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
			((OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields*)il2cpp_codegen_static_fields_for(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var))->set_m_pauseAndRestartAttempts_12(0);
		}

IL_0106:
		{
			// onAfterRestart?.Invoke();
			OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_18 = V_2;
			NullCheck(L_18);
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_19 = L_18->get_onAfterRestart_4();
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_20 = L_19;
			G_B13_0 = L_20;
			if (L_20)
			{
				G_B14_0 = L_20;
				goto IL_0112;
			}
		}

IL_010f:
		{
			goto IL_0117;
		}

IL_0112:
		{
			NullCheck(G_B14_0);
			Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B14_0, /*hidden argument*/NULL);
		}

IL_0117:
		{
			// }
			U3CRestartCoroutineU3Ed__23_U3CU3Em__Finally1_m5D43CE3EF7B89A3C817C148215ABE10F5F221332(__this, /*hidden argument*/NULL);
			// }
			V_0 = (bool)0;
			goto IL_0128;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0121;
	}

FAULT_0121:
	{ // begin fault (depth: 1)
		U3CRestartCoroutineU3Ed__23_System_IDisposable_Dispose_m3CB326B58BAA27EB44C80329052E1D2FBB7701B9(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(289)
	} // end fault
	IL2CPP_CLEANUP(289)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0128:
	{
		bool L_21 = V_0;
		return L_21;
	}
}
// System.Void Unity.XR.Oculus.OculusRestarter/<RestartCoroutine>d__23::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestartCoroutineU3Ed__23_U3CU3Em__Finally1_m5D43CE3EF7B89A3C817C148215ABE10F5F221332 (U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		__this->set_U3CU3E1__state_0((-1));
		OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_0 = __this->get_U3CU3E4__this_2();
		V_0 = L_0;
		// m_Coroutine = null;
		OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_m_Coroutine_10((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
		// onAfterCoroutine?.Invoke();
		OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_2 = V_0;
		NullCheck(L_2);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = L_2->get_onAfterCoroutine_7();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_0021;
		}
	}
	{
		goto IL_0026;
	}

IL_0021:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// if (XRGeneralSettings.Instance.Manager.activeLoader == null) {
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_5;
		L_5 = XRGeneralSettings_get_Instance_mC714587778971DCD3EBECF8FC23741ED9A7A23BE_inline(/*hidden argument*/NULL);
		NullCheck(L_5);
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_6;
		L_6 = XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_7;
		L_7 = XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		// PauseAndRestart();
		OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_9 = V_0;
		NullCheck(L_9);
		OculusRestarter_PauseAndRestart_m28727BF6DE2EB3868DBCE80CB9FFB05F11800C9B(L_9, /*hidden argument*/NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Object Unity.XR.Oculus.OculusRestarter/<RestartCoroutine>d__23::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRestartCoroutineU3Ed__23_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC4D68BC3E723F9EA64A307AAAEBE92D15E9C7C10 (U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.OculusRestarter/<RestartCoroutine>d__23::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestartCoroutineU3Ed__23_System_Collections_IEnumerator_Reset_m8B74BC95BE0B29C902B5C7547EE3461E876BFC9F (U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRestartCoroutineU3Ed__23_System_Collections_IEnumerator_Reset_m8B74BC95BE0B29C902B5C7547EE3461E876BFC9F_RuntimeMethod_var)));
	}
}
// System.Object Unity.XR.Oculus.OculusRestarter/<RestartCoroutine>d__23::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRestartCoroutineU3Ed__23_System_Collections_IEnumerator_get_Current_m5154B4EB20D93035D0D588C0498EAFF2D0F2C986 (U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_touchpad_mD30A931E272C79A49E97DF66595142067628B1C4_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2Control touchpad { get; private set; }
		Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * L_0 = ___value0;
		__this->set_U3CtouchpadU3Ek__BackingField_48(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_trigger_m16158CF3316E7AD4D01FCEEAA38A4FE2A931855C_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl trigger { get; private set; }
		AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * L_0 = ___value0;
		__this->set_U3CtriggerU3Ek__BackingField_49(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_back_m76F2BCBDDFA3B3745449EE8C3B4E23AE9D8E44E9_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl back { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CbackU3Ek__BackingField_50(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_triggerPressed_m5102DF95F8DFDEC87D81A6CAF1B220DF8BFB13EF_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl triggerPressed { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CtriggerPressedU3Ek__BackingField_51(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_touchpadClicked_m0093E9CE2D7EF99F8805E5CA5FBEB9828B32797F_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl touchpadClicked { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CtouchpadClickedU3Ek__BackingField_52(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_touchpadTouched_m718CB22287AB2B37C1234F4B9553DE539230BD20_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl touchpadTouched { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CtouchpadTouchedU3Ek__BackingField_53(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_trackingState_mE69779797C93F9EC24F8AE569D74D3561EA3AA57_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * ___value0, const RuntimeMethod* method)
{
	{
		// public new IntegerControl trackingState { get; private set; }
		IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * L_0 = ___value0;
		__this->set_U3CtrackingStateU3Ek__BackingField_54(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_isTracked_m98CC84B04F3CCE061D9FAC495D072E9413163A84_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public new ButtonControl isTracked { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CisTrackedU3Ek__BackingField_55(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_devicePosition_m6AB20284CEF59FB18E1DCC05F9A9471D0C36F86F_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control devicePosition { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CdevicePositionU3Ek__BackingField_56(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_deviceRotation_m68C593F68DAE58EA02D9D641937FEF02F7DDC72D_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * L_0 = ___value0;
		__this->set_U3CdeviceRotationU3Ek__BackingField_57(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_deviceAngularVelocity_m4C0D01B20E744EB2AEF36D21A7C2B2703B449376_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularVelocity { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CdeviceAngularVelocityU3Ek__BackingField_58(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_deviceAcceleration_m440F6ADE8ACC1758CE71975A3501208084DEA89A_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAcceleration { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CdeviceAccelerationU3Ek__BackingField_59(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_deviceAngularAcceleration_mD6E63593A48342E40BFA776879AF1CF19123B760_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularAcceleration { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CdeviceAngularAccelerationU3Ek__BackingField_60(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_userPresence_m96741F0BBE2A8070F516DA685E65CCAA514A1679_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl userPresence { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CuserPresenceU3Ek__BackingField_54(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_trackingState_mCC316B092DB4A9129733B960684AB3859B18E663_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * ___value0, const RuntimeMethod* method)
{
	{
		// public new IntegerControl trackingState { get; private set; }
		IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * L_0 = ___value0;
		__this->set_U3CtrackingStateU3Ek__BackingField_55(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_isTracked_mFC9B8122161957BCBC36759F1AA976A2ABFBE2C7_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public new ButtonControl isTracked { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CisTrackedU3Ek__BackingField_56(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_devicePosition_m483AA5BEACD9BE4452716A4FD93BE41140B27B51_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control devicePosition { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CdevicePositionU3Ek__BackingField_57(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_deviceRotation_m69931E5CCA4FFE13D1901888AA7FDB6996CA76B5_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * L_0 = ___value0;
		__this->set_U3CdeviceRotationU3Ek__BackingField_58(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_deviceAngularVelocity_mB7C37988CBA0AE9B50F99B7F7C2871B40C048CA1_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularVelocity { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CdeviceAngularVelocityU3Ek__BackingField_59(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_deviceAcceleration_m23CDE7042398488476090D336D3F0A38DEDF2FC0_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAcceleration { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CdeviceAccelerationU3Ek__BackingField_60(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_deviceAngularAcceleration_mB21A55CB0306B56B5D0A1311E37D1004A2C39E85_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularAcceleration { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CdeviceAngularAccelerationU3Ek__BackingField_61(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyePosition_mE14FDF9DD8C209780EB60BB8C57752188B0037DC_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control leftEyePosition { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CleftEyePositionU3Ek__BackingField_62(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyeRotation_m76DDAB16545F73D11319E052138DBBDFCB125D34_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl leftEyeRotation { get; private set; }
		QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * L_0 = ___value0;
		__this->set_U3CleftEyeRotationU3Ek__BackingField_63(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyeAngularVelocity_m17F8A6AF388491942AB669556C3BC2C804478814_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control leftEyeAngularVelocity { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CleftEyeAngularVelocityU3Ek__BackingField_64(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyeAcceleration_m262585422FEB4CB04401A13E55F209E459807330_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control leftEyeAcceleration { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CleftEyeAccelerationU3Ek__BackingField_65(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyeAngularAcceleration_mA37A13118C81CE1CF6F924F6DAEE02B92A1659DE_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control leftEyeAngularAcceleration { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CleftEyeAngularAccelerationU3Ek__BackingField_66(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyePosition_m4327CA684F0A549A131308C28D7D8AE0CC8351C0_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control rightEyePosition { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CrightEyePositionU3Ek__BackingField_67(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyeRotation_m3BCFCBCE5A52F9007AD7E98954B7BDAD51BF4583_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl rightEyeRotation { get; private set; }
		QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * L_0 = ___value0;
		__this->set_U3CrightEyeRotationU3Ek__BackingField_68(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyeAngularVelocity_m5AC3A1540E35C60730BA0276AADE239AACD8AF78_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control rightEyeAngularVelocity { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CrightEyeAngularVelocityU3Ek__BackingField_69(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyeAcceleration_mDD9ED7D1DEED41B45F7418A7F380FFA85D5A2D9D_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control rightEyeAcceleration { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CrightEyeAccelerationU3Ek__BackingField_70(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyeAngularAcceleration_m437486769E36F9E9D7A0B4C0B0E1064144C221C6_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control rightEyeAngularAcceleration { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CrightEyeAngularAccelerationU3Ek__BackingField_71(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyePosition_mA6D67B6465E1B36F4CC0675F07CFF4A187619FFC_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control centerEyePosition { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CcenterEyePositionU3Ek__BackingField_72(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyeRotation_m051815EFB96695ED9504BC65A7DE83B6A62843BF_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl centerEyeRotation { get; private set; }
		QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * L_0 = ___value0;
		__this->set_U3CcenterEyeRotationU3Ek__BackingField_73(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyeAngularVelocity_m28DCEA3459CF0B548838DBF44A1E68D90E2DC4ED_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control centerEyeAngularVelocity { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CcenterEyeAngularVelocityU3Ek__BackingField_74(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyeAcceleration_mA095C5F1709C0B8B75839730D19083CCBAAE7A38_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control centerEyeAcceleration { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CcenterEyeAccelerationU3Ek__BackingField_75(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyeAngularAcceleration_m8E9759795ABB82FBDDD65DD82172C7CB9E1FE5E8_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control centerEyeAngularAcceleration { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CcenterEyeAngularAccelerationU3Ek__BackingField_76(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMDExtended_set_back_m7A33E91EA604FD207CB76DB965ADFFAADB7EB36B_inline (OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl back { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CbackU3Ek__BackingField_77(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMDExtended_set_touchpad_m4224731C210C73B2A4FA9301CEF174D76C3521EA_inline (OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC * __this, Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2Control touchpad { get; private set; }
		Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * L_0 = ___value0;
		__this->set_U3CtouchpadU3Ek__BackingField_78(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * OculusLoader_GetSettings_mF0D5694BD84372039D4227997B00CAB33A419CAC_inline (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// settings = OculusSettings.s_Settings;
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_0 = ((OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_StaticFields*)il2cpp_codegen_static_fields_for(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_il2cpp_TypeInfo_var))->get_s_Settings_19();
		// return settings;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusRemote_set_back_m4C382005E2D041A5692C77D5B3EE1FA7C45AD4DB_inline (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl back { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CbackU3Ek__BackingField_44(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusRemote_set_start_m59B1620D1A23592159814952F566E1AE1D56A96C_inline (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl start { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CstartU3Ek__BackingField_45(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusRemote_set_touchpad_mE33ADFCA48ADEEFF93276F772338DDD411F2B922_inline (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2Control touchpad { get; private set; }
		Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * L_0 = ___value0;
		__this->set_U3CtouchpadU3Ek__BackingField_46(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusRestarter_set_TimeBetweenRestartAttempts_m3FDA87CEAC42CF6AF6521DFF3E4EB1CC0BC9454F_inline (float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set;
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		((OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields*)il2cpp_codegen_static_fields_for(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var))->set_U3CTimeBetweenRestartAttemptsU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float OculusRestarter_get_TimeBetweenRestartAttempts_m4643B819097BB5929C5EA5AAC0BBD798817B2465_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get;
		IL2CPP_RUNTIME_CLASS_INIT(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		float L_0 = ((OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields*)il2cpp_codegen_static_fields_for(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var))->get_U3CTimeBetweenRestartAttemptsU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_thumbstick_m00F82EBCCC313F54B5A60F6A8447D92959B8716D_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2Control thumbstick { get; private set; }
		Vector2Control_t1A9CC5BA745DB882B3BB14842ED9B97416D154F1 * L_0 = ___value0;
		__this->set_U3CthumbstickU3Ek__BackingField_48(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_trigger_m6F6E887869AED80DBD9B218B5134F024841695FA_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl trigger { get; private set; }
		AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * L_0 = ___value0;
		__this->set_U3CtriggerU3Ek__BackingField_49(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_triggerTouched_m339518BDD4A2BBD7CBE6C4B858C771FA39DA7157_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl triggerTouched { get; private set; }
		AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * L_0 = ___value0;
		__this->set_U3CtriggerTouchedU3Ek__BackingField_58(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_grip_mADCF99F3193B708BF7396D5DA73DAA8DB4B779A3_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl grip { get; private set; }
		AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61 * L_0 = ___value0;
		__this->set_U3CgripU3Ek__BackingField_50(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_primaryButton_mA8700B473E56C05853C534BDDF9F68539A6C2FD4_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl primaryButton { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CprimaryButtonU3Ek__BackingField_51(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_secondaryButton_m5BA77AC5600FEF3ECD35B02BBE329B6E9B22DFFB_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl secondaryButton { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CsecondaryButtonU3Ek__BackingField_52(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_gripPressed_m7039EC4B244C76C50A901D80509889E1ABDD4026_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl gripPressed { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CgripPressedU3Ek__BackingField_53(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_start_m4679F07AD3DA5CE874D244FAB956778862AFA931_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl start { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CstartU3Ek__BackingField_54(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_thumbstickClicked_m6EDEFE81C41FCA01762CBEAA00D0472D8403C634_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl thumbstickClicked { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CthumbstickClickedU3Ek__BackingField_55(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_primaryTouched_mEC9BC1EFB27C6CA5786B139702E6D33FD84AB6D7_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl primaryTouched { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CprimaryTouchedU3Ek__BackingField_56(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_secondaryTouched_mE7A945ED75984999AB0DCFE0E0E11A1515C85592_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl secondaryTouched { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CsecondaryTouchedU3Ek__BackingField_57(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_thumbstickTouched_mFE18A59ABD500CCC4DB33B6A22791D170B1A2018_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl thumbstickTouched { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CthumbstickTouchedU3Ek__BackingField_60(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_triggerPressed_m1BB81FA58DADC4EB3B71188F28FB3ABC00E59833_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl triggerPressed { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CtriggerPressedU3Ek__BackingField_59(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_trackingState_m489EE336DEF47BAD050DD22AC9F01B6E48B35F92_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * ___value0, const RuntimeMethod* method)
{
	{
		// public new IntegerControl trackingState { get; private set; }
		IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * L_0 = ___value0;
		__this->set_U3CtrackingStateU3Ek__BackingField_61(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_isTracked_mC244243B9DC88A638E059D15C1AE0EBFF9A9EE2A_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public new ButtonControl isTracked { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CisTrackedU3Ek__BackingField_62(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_devicePosition_m70F8D567FC1F462D3F9448A27EE657B739558E10_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control devicePosition { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CdevicePositionU3Ek__BackingField_63(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceRotation_mAAF6A6FF0283A463485FDF78733891EB3D44C5EC_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * L_0 = ___value0;
		__this->set_U3CdeviceRotationU3Ek__BackingField_64(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceVelocity_m52D4BC592FB6E47A498E50306AB9A343F73AAC66_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceVelocity { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CdeviceVelocityU3Ek__BackingField_65(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceAngularVelocity_mFDA9EEAFEEB4282AF8E2286BFC665534F7647FB7_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularVelocity { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CdeviceAngularVelocityU3Ek__BackingField_66(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceAcceleration_mE7159D3C09C8821DE5D175AD0F1EF3BB21B8C584_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAcceleration { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CdeviceAccelerationU3Ek__BackingField_67(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceAngularAcceleration_mE7F8E9E296ADA9F2BFF9A07612315BD1428A15CE_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularAcceleration { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CdeviceAngularAccelerationU3Ek__BackingField_68(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTrackingReference_set_trackingState_mEF7324C462A98E446070E0169D4409FFB2E7735A_inline (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * ___value0, const RuntimeMethod* method)
{
	{
		// public IntegerControl trackingState { get; private set; }
		IntegerControl_t33134FCA4B82F86B961F5E9A48552B7E25B305A3 * L_0 = ___value0;
		__this->set_U3CtrackingStateU3Ek__BackingField_44(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTrackingReference_set_isTracked_mE8F3E0C098AE57B5B7FB82C6B58B63BFA5BC3CC4_inline (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl isTracked { get; private set; }
		ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * L_0 = ___value0;
		__this->set_U3CisTrackedU3Ek__BackingField_45(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTrackingReference_set_devicePosition_m2EC3DD9273A0831CCC9DC458F450E26CCB79F49A_inline (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control devicePosition { get; private set; }
		Vector3Control_t2F54D9E782010D083B62336166CD37D77BEBA718 * L_0 = ___value0;
		__this->set_U3CdevicePositionU3Ek__BackingField_46(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTrackingReference_set_deviceRotation_m86012663D85BC459D875DE3F48F18C7A4FF4C670_inline (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * ___value0, const RuntimeMethod* method)
{
	{
		// public QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_t380AAC641A4CC847C6E1D44116D1303AB566205A * L_0 = ___value0;
		__this->set_U3CdeviceRotationU3Ek__BackingField_47(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * XRGeneralSettings_get_Instance_mC714587778971DCD3EBECF8FC23741ED9A7A23BE_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_RuntimeSettingsInstance;
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_0 = ((XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var))->get_s_RuntimeSettingsInstance_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544_inline (XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_LoaderManagerInstance; }
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_0 = __this->get_m_LoaderManagerInstance_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method)
{
	{
		// public XRLoader activeLoader { get; private set; }
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_0 = __this->get_U3CactiveLoaderU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
