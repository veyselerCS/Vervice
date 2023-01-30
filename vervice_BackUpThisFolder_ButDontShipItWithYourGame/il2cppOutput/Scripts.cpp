#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`2<System.Object,System.Int32>
struct Action_2_tAC461AE4F7B507965CE2E6A32853473F8C02CD75;
// System.Action`2<TestService,System.Int32>
struct Action_2_t7698FDBD96AC02E7CB9ABEB25A1FDB48CA188E24;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<DependencyNode>>
struct Dictionary_2_t398838F02E06F247F837F098A38A7E59F568D47D;
// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.FieldInfo>
struct Dictionary_2_tA42794065062A1F618BC324141E216CEDA748815;
// System.Collections.Generic.Dictionary`2<System.Type,IVervice>
struct Dictionary_2_t9CC1B5AC2436F143FC60952FA62246708BB0B97A;
// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<System.Type>
struct HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.List`1<DependencyNode>>
struct KeyCollection_tB157FA960D9EDAB5392FA10BFDC2C1ED62807031;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Reflection.FieldInfo>
struct KeyCollection_t96B6E1ED4FFAFEDF134354B80229C4EB0EB53D80;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,IVervice>
struct KeyCollection_tC8D2A54931581E9037BDF225A7399A19E1876883;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Object>
struct KeyCollection_t06BF4E8028DD7CCA572FE96F996862FCB21C8ED4;
// System.Collections.Generic.List`1<DependencyNode>
struct List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0;
// System.Collections.Generic.List`1<IVervice>
struct List_1_t9576881927C14F0A8ABC20E7DD60FBE920096639;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// MonoVervice`1<FooService>
struct MonoVervice_1_tFA9D0D7079EABFAF379997FA969BE49728B8E6B4;
// MonoVervice`1<System.Object>
struct MonoVervice_1_t15463CF614DF06DDCF646C4375B536383AD4CF61;
// MonoVervice`1<TestService>
struct MonoVervice_1_tF013AC46BCA8C8F4C2AECD2A9EA92B9F013D210D;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.List`1<DependencyNode>>
struct ValueCollection_t5199A3AE0237F00B449282A357262B11E1E526EC;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Reflection.FieldInfo>
struct ValueCollection_tDC3A72B352249CEA50EE0810894684B5E9CD5D2F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,IVervice>
struct ValueCollection_t029C4E9126035462FBF7A0C53DDBD72D1E44397F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Object>
struct ValueCollection_t9EB9C5634AB88E4E9CA993FE202AEE842111C914;
// Vervice`1<BarPOCOService>
struct Vervice_1_t475C29B0FB7E801061695ACD6BDF7C28A62FA12B;
// Vervice`1<System.Object>
struct Vervice_1_tFC2AF52186E4558090551EF2090B38EDA522D830;
// Vervice`1<POCOService>
struct Vervice_1_tE73787701B7D71979F5ADD3424ABD072749E7C75;
// VonoBehaviour`1<FooMono>
struct VonoBehaviour_1_t4CBB6E11A839C3707D289801BEEFDC9A6AA20A18;
// VonoBehaviour`1<System.Object>
struct VonoBehaviour_1_tA4FDA72CA563CFF6366610B19D1FAA5B997648CF;
// VonoBehaviour`1<TestMono>
struct VonoBehaviour_1_tA76DC37462E9B127A591648DADEE8AFE800B49F6;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.List`1<DependencyNode>>[]
struct EntryU5BU5D_t6F22A1561DD13791DA019EA8E34ECB3B08B290AE;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Reflection.FieldInfo>[]
struct EntryU5BU5D_tA9C268247DC07ACA29D520435399EA8C4E276746;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,IVervice>[]
struct EntryU5BU5D_t915F853D620FFA95EFB9C94E7126C82B82086759;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Object>[]
struct EntryU5BU5D_t756A95E079BB929872956FD3C32190FE718B2B92;
// System.Collections.Generic.HashSet`1/Slot<System.Object>[]
struct SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343;
// System.Collections.Generic.HashSet`1/Slot<System.Type>[]
struct SlotU5BU5D_t0FD57ECF60D6ADD2A7050D7198C4DF420FEE1D88;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// DependencyNode[]
struct DependencyNodeU5BU5D_t04B0FA1B704361008C5CF60BCAEF721D86AB2931;
// IVervice[]
struct IVerviceU5BU5D_t8201584A62171D77EFC240D114BB0D242A2ECE84;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// BarPOCOService
struct BarPOCOService_t427590A744DF69027D6D94D8AA794244D1862AE5;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Container
struct Container_tD893563141DD2B976E59B5F23B739924B8ABF41A;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DependencyNode
struct DependencyNode_t9B8DCC43D012674005888A11FBEC5A86904B2E62;
// System.Exception
struct Exception_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// FooMono
struct FooMono_tA3240818A8285C012D7FBA6A8CA05681CE7BD263;
// FooService
struct FooService_t9BBB99CBC21C19D86DC6F0145CF057991342DBD3;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// IVervice
struct IVervice_tDDB4F73057E6702D49B93436323A0B8E5FA24C94;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MonoVervice
struct MonoVervice_tF220D43A7C8A61DCA2E5184E7DBAC10A5304350B;
// POCOService
struct POCOService_t66D32826576BC5D0341692F3ABFE8AE69058013B;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// TestMono
struct TestMono_tF243BB3690D70325849699B896D3E50B0094B670;
// TestService
struct TestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// Vervice
struct Vervice_t37BBCA9D632DF7EC3C536CFD85A6E249FA5B4447;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* BarPOCOService_t427590A744DF69027D6D94D8AA794244D1862AE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Container_tD893563141DD2B976E59B5F23B739924B8ABF41A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t398838F02E06F247F837F098A38A7E59F568D47D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9CC1B5AC2436F143FC60952FA62246708BB0B97A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVervice_tDDB4F73057E6702D49B93436323A0B8E5FA24C94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9576881927C14F0A8ABC20E7DD60FBE920096639_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* POCOService_t66D32826576BC5D0341692F3ABFE8AE69058013B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05EDA87D0D8E1E20FEF7057308B3AB6F8A9E3E63;
IL2CPP_EXTERN_C String_t* _stringLiteral7C922CA1F64A471A627F33EEA615A59B789DA2DD;
IL2CPP_EXTERN_C String_t* _stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3;
IL2CPP_EXTERN_C String_t* _stringLiteralAFC479C5D71B2F56F8CD209F77503EBDF44EE919;
IL2CPP_EXTERN_C String_t* _stringLiteralDA00CC5AB932DFD2BC8DEFCC94CEAF6CE9E2001E;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CBeginU3Ed__3_tFD4B4484F4123A67A1D5D47760BAAD27E4D40ED0_m285B74A2E96217A00C95BFB1C6848D1FAB57E5BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CBeginU3Ed__3_tFD4B4484F4123A67A1D5D47760BAAD27E4D40ED0_m7D5418FE8F0D3E3A9AABDAB1D8080D0BC8102C4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Container_CreateSetter_TisTestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mACB73F0BAD12CFD1F5C32C2843C963AC7A499BDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Container_Resolve_TisFooService_t9BBB99CBC21C19D86DC6F0145CF057991342DBD3_mA4C790D40FC0F72C802F53E8B68F434A5318B75F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Container_Resolve_TisTestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334_m64F26B1288847D6F283B59D858469A847A680C56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mAA9891AEE244B2C2EC2C2E1AA27061C05CE207B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC21AC22BD324FC96B5944AE994ADF0708DF056F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mFE0B282ABFC67D240E8C236181CD3C4FF0984045_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m3A43E866B1140357104C49F863CC2A61862781DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mFFA67F8949BECCB768EF906E8D727C437C29EB21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m5EF85F1F39BC68D48BD5234A7960F3ABC62FDF31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m7E22CED7FAAAD3513533252972A7C4B82DD32077_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mEACC35835C05B20642437541D2844FDA88378AAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m781AE06E52917D6444892255F88F0357B2E97C39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m5D79F02FA712BECCEEA6B785FC482DD162321705_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m0EA4BCAF1B1B73C0A14F9AB34EB354A4B99D56F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m84DCABCA6F8E90C1A9C54403427A93C6CA760A1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m99C192183AF9336890F815A2EB9C163DBBCF617A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_mD1818E16E559CE55BBEF0C92F130FECEAF112C37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m6C68BAE5F60CFAA27C4E88A593D0BF368DC0D879_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mD4D6329707A4295C17057969FA11FEEF4AEB82FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m5BE0DB621FE38299535388D5706AFAA41BDD9CAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA044033B8A5913ECCDFE4652F077A1825573D325_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA452FB910DA7DD11178A7DF048CD2F9F4255F382_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC4569FBDE7439C4E2A6FE98F5D0C5B696F133BD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE426EC95549E014CA1F52D61FEC8767B1108952F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m0F70D3576CBC03943498D17DA551BF1D6C15707F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m334DB633FF9C6901D091C12EBA8517ADA9644A8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m686E9F4F715B3E1E3530A9516FB350F32726418B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB2F293F4A2475AFA0370F2E6DFF7FE62E006056E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE0180D08E2BD3A0FC296E258CD90752FE03EA394_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m5DC2C0C199FC4D0C486633A0DF88BDA42271664C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7E10F01459FB649D535BF1618F1104363FE6D3C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9572D6CDB5A50A40CF7FF18F977AA4A250D202BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD550F51A6EADAA1F4604F3F610F0C7780DC8D2E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFF7EED004557218A14519D654CAB04AC54BD8847_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_m62F6C841338A696A7D092C9A95CEC67D4082135C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_get_Count_m84934F32D3D4BCD461A09A1B2E4FA7C5B39109B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m94FB4DC031581990488B18A4B232F1E0661E51E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mF416E075781721E04FC2B7DD1074D130F3A112D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m444B97383AD199746EB73DB76ECC10D39129B4B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m58C466806927542B95D4A5DACEF7BE28888CD5A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB04BCCDE748416EA43BA5F820BDD671B40860836_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mDAA357932F8D17FFB8193DCB3FD4EF937240195C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mE098CB4DFC36B3802E3C84ED81B9AF88B92D3B94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mC8C8D5218D85BBFD21620926D2065DD8543222BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mE71B344EEC7CD59C011871FBD0C7F932163466DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mD8E40C194D0E4BA50B5CFFF23C9E4BB8B057942E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m79C7722331FD0ADACE281C15C3B9EBF53F55088F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m85B926DC1FC04C1704A3E44B60FE07F69BBA9D3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m3C98FBEA3D83B4079B0F8A4D14DC641056AB166C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m0E3E58710802448C7EF22FB134E38A897FD1870E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoVervice_1_SetReady_m12F517E77765EAEEF3DF95A18C713CF1031D3C04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoVervice_1_SetReady_mAEF0438FDB806839C6FB65EA94A5B48373F00C6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoVervice_1__ctor_m86A221BE0A47EE9BCE6F00552B8480179EB0FECC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoVervice_1__ctor_mA5E09AAFEF5E153507C8DA8DCD713BAC811E48D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vervice_1_SetReady_m059E5A2F6D080BB028C2CDF99CE39500995DE423_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vervice_1_SetReady_mB39C2E71B7CF252B0E97959A8B705864DEA7996D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vervice_1__ctor_m1DC854F24DF24619D79BB63C7C873B880BE12C0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vervice_1__ctor_mFC812F54801461B87C34360FFFC37ABFD7902A6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VonoBehaviour_1__ctor_mB7E1FA0A91B5F085EFF7B1357CBF7D3FE68035FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VonoBehaviour_1__ctor_mC86852F454761CCED0B2F899D684F65970190F0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VonoBehaviour_1_get_Services_mFC2967723B5013D56ECD08D4220EF37AE1B145D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* FooService_t9BBB99CBC21C19D86DC6F0145CF057991342DBD3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TestMono_tF243BB3690D70325849699B896D3E50B0094B670_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t2EBA562C4E204DEF61E5026F596E50683C4D38FF 
{
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<DependencyNode>>
struct Dictionary_2_t398838F02E06F247F837F098A38A7E59F568D47D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t6F22A1561DD13791DA019EA8E34ECB3B08B290AE* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tB157FA960D9EDAB5392FA10BFDC2C1ED62807031* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t5199A3AE0237F00B449282A357262B11E1E526EC* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.FieldInfo>
struct Dictionary_2_tA42794065062A1F618BC324141E216CEDA748815  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tA9C268247DC07ACA29D520435399EA8C4E276746* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t96B6E1ED4FFAFEDF134354B80229C4EB0EB53D80* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tDC3A72B352249CEA50EE0810894684B5E9CD5D2F* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,IVervice>
struct Dictionary_2_t9CC1B5AC2436F143FC60952FA62246708BB0B97A  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t915F853D620FFA95EFB9C94E7126C82B82086759* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tC8D2A54931581E9037BDF225A7399A19E1876883* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t029C4E9126035462FBF7A0C53DDBD72D1E44397F* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t756A95E079BB929872956FD3C32190FE718B2B92* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t06BF4E8028DD7CCA572FE96F996862FCB21C8ED4* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t9EB9C5634AB88E4E9CA993FE202AEE842111C914* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.HashSet`1<System.Type>
struct HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t0FD57ECF60D6ADD2A7050D7198C4DF420FEE1D88* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<DependencyNode>
struct List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DependencyNodeU5BU5D_t04B0FA1B704361008C5CF60BCAEF721D86AB2931* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DependencyNodeU5BU5D_t04B0FA1B704361008C5CF60BCAEF721D86AB2931* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<IVervice>
struct List_1_t9576881927C14F0A8ABC20E7DD60FBE920096639  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IVerviceU5BU5D_t8201584A62171D77EFC240D114BB0D242A2ECE84* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t9576881927C14F0A8ABC20E7DD60FBE920096639_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IVerviceU5BU5D_t8201584A62171D77EFC240D114BB0D242A2ECE84* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// DependencyNode
struct DependencyNode_t9B8DCC43D012674005888A11FBEC5A86904B2E62  : public RuntimeObject
{
	// System.Type DependencyNode::Type
	Type_t* ___Type_0;
	// System.Reflection.FieldInfo DependencyNode::FieldInfo
	FieldInfo_t* ___FieldInfo_1;
	// System.Object DependencyNode::Requirer
	RuntimeObject* ___Requirer_2;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Vervice
struct Vervice_t37BBCA9D632DF7EC3C536CFD85A6E249FA5B4447  : public RuntimeObject
{
	// System.Collections.Generic.List`1<DependencyNode> Vervice::<Dependencies>k__BackingField
	List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* ___U3CDependenciesU3Ek__BackingField_0;
};

// System.Collections.Generic.List`1/Enumerator<DependencyNode>
struct Enumerator_tE696B3D2C4506598825E7FBA0C6A9E4FE15A1BE1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	DependencyNode_t9B8DCC43D012674005888A11FBEC5A86904B2E62* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<IVervice>
struct Enumerator_t96327DFA982D2F0604E7D9721E3663A9F50F48D4 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t9576881927C14F0A8ABC20E7DD60FBE920096639* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Type,System.Reflection.FieldInfo>
struct KeyValuePair_2_t69B7D0132BAC70C788A2CDC3B6BF6309824784ED 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Type_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	FieldInfo_t* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Type,IVervice>
struct KeyValuePair_2_t2D8C807AA01443ADA4CCD49DDDD15C5C71E470BF 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Type_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>
struct KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Type_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// Vervice`1<BarPOCOService>
struct Vervice_1_t475C29B0FB7E801061695ACD6BDF7C28A62FA12B  : public Vervice_t37BBCA9D632DF7EC3C536CFD85A6E249FA5B4447
{
};

// Vervice`1<POCOService>
struct Vervice_1_tE73787701B7D71979F5ADD3424ABD072749E7C75  : public Vervice_t37BBCA9D632DF7EC3C536CFD85A6E249FA5B4447
{
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Reflection.FieldInfo>
struct Enumerator_t744FFD1CDD2295419F232ACCF870382D4F6799D7 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tA42794065062A1F618BC324141E216CEDA748815* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t69B7D0132BAC70C788A2CDC3B6BF6309824784ED ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Type,IVervice>
struct Enumerator_t28D71F7C3D1DBE22553AF4B386EC1B963718EBB3 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t9CC1B5AC2436F143FC60952FA62246708BB0B97A* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t2D8C807AA01443ADA4CCD49DDDD15C5C71E470BF ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Object>
struct Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};

// BarPOCOService
struct BarPOCOService_t427590A744DF69027D6D94D8AA794244D1862AE5  : public Vervice_1_t475C29B0FB7E801061695ACD6BDF7C28A62FA12B
{
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// POCOService
struct POCOService_t66D32826576BC5D0341692F3ABFE8AE69058013B  : public Vervice_1_tE73787701B7D71979F5ADD3424ABD072749E7C75
{
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// TestService/<Begin>d__3
struct U3CBeginU3Ed__3_tFD4B4484F4123A67A1D5D47760BAAD27E4D40ED0 
{
	// System.Int32 TestService/<Begin>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder TestService/<Begin>d__3::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// TestService TestService/<Begin>d__3::<>4__this
	TestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter TestService/<Begin>d__3::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// System.Action`2<System.Object,System.Int32>
struct Action_2_tAC461AE4F7B507965CE2E6A32853473F8C02CD75  : public MulticastDelegate_t
{
};

// System.Action`2<TestService,System.Int32>
struct Action_2_t7698FDBD96AC02E7CB9ABEB25A1FDB48CA188E24  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// VonoBehaviour`1<FooMono>
struct VonoBehaviour_1_t4CBB6E11A839C3707D289801BEEFDC9A6AA20A18  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct VonoBehaviour_1_t4CBB6E11A839C3707D289801BEEFDC9A6AA20A18_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.FieldInfo> VonoBehaviour`1::<Services>k__BackingField
	Dictionary_2_tA42794065062A1F618BC324141E216CEDA748815* ___U3CServicesU3Ek__BackingField_4;
};

// VonoBehaviour`1<System.Object>
struct VonoBehaviour_1_tA4FDA72CA563CFF6366610B19D1FAA5B997648CF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct VonoBehaviour_1_tA4FDA72CA563CFF6366610B19D1FAA5B997648CF_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.FieldInfo> VonoBehaviour`1::<Services>k__BackingField
	Dictionary_2_tA42794065062A1F618BC324141E216CEDA748815* ___U3CServicesU3Ek__BackingField_4;
};

// VonoBehaviour`1<TestMono>
struct VonoBehaviour_1_tA76DC37462E9B127A591648DADEE8AFE800B49F6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct VonoBehaviour_1_tA76DC37462E9B127A591648DADEE8AFE800B49F6_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.FieldInfo> VonoBehaviour`1::<Services>k__BackingField
	Dictionary_2_tA42794065062A1F618BC324141E216CEDA748815* ___U3CServicesU3Ek__BackingField_4;
};

// Container
struct Container_tD893563141DD2B976E59B5F23B739924B8ABF41A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Object> Container::_readyServices
	Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* ____readyServices_5;
	// System.Collections.Generic.Dictionary`2<System.Type,IVervice> Container::_pocoServices
	Dictionary_2_t9CC1B5AC2436F143FC60952FA62246708BB0B97A* ____pocoServices_6;
	// System.Collections.Generic.Dictionary`2<System.Type,IVervice> Container::_monoServices
	Dictionary_2_t9CC1B5AC2436F143FC60952FA62246708BB0B97A* ____monoServices_7;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<DependencyNode>> Container::_objectGraph
	Dictionary_2_t398838F02E06F247F837F098A38A7E59F568D47D* ____objectGraph_8;
	// System.Collections.Generic.List`1<IVervice> Container::_readyToInitServices
	List_1_t9576881927C14F0A8ABC20E7DD60FBE920096639* ____readyToInitServices_9;
	// System.Collections.Generic.HashSet`1<System.Type> Container::_registeryWaitingServiceTypes
	HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* ____registeryWaitingServiceTypes_10;
	// TestMono Container::TestMono
	TestMono_tF243BB3690D70325849699B896D3E50B0094B670* ___TestMono_11;
	// System.Boolean Container::AllReady
	bool ___AllReady_12;
	// System.Reflection.MethodInfo Container::_methodInfo
	MethodInfo_t* ____methodInfo_13;
	// System.Object[] Container::_emptyObjArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____emptyObjArray_14;
	// System.Action`2<TestService,System.Int32> Container::_delegate
	Action_2_t7698FDBD96AC02E7CB9ABEB25A1FDB48CA188E24* ____delegate_15;
};

struct Container_tD893563141DD2B976E59B5F23B739924B8ABF41A_StaticFields
{
	// Container Container::<Instance>k__BackingField
	Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* ___U3CInstanceU3Ek__BackingField_4;
};

// MonoVervice
struct MonoVervice_tF220D43A7C8A61DCA2E5184E7DBAC10A5304350B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<DependencyNode> MonoVervice::<Dependencies>k__BackingField
	List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* ___U3CDependenciesU3Ek__BackingField_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// MonoVervice`1<FooService>
struct MonoVervice_1_tFA9D0D7079EABFAF379997FA969BE49728B8E6B4  : public MonoVervice_tF220D43A7C8A61DCA2E5184E7DBAC10A5304350B
{
};

// MonoVervice`1<TestService>
struct MonoVervice_1_tF013AC46BCA8C8F4C2AECD2A9EA92B9F013D210D  : public MonoVervice_tF220D43A7C8A61DCA2E5184E7DBAC10A5304350B
{
};

// FooMono
struct FooMono_tA3240818A8285C012D7FBA6A8CA05681CE7BD263  : public VonoBehaviour_1_t4CBB6E11A839C3707D289801BEEFDC9A6AA20A18
{
	// TestService FooMono::_testService
	TestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334* ____testService_5;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// TestMono
struct TestMono_tF243BB3690D70325849699B896D3E50B0094B670  : public VonoBehaviour_1_tA76DC37462E9B127A591648DADEE8AFE800B49F6
{
	// TestService TestMono::_testService
	TestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334* ____testService_5;
	// FooService TestMono::_fooService
	FooService_t9BBB99CBC21C19D86DC6F0145CF057991342DBD3* ____fooService_6;
};

// FooService
struct FooService_t9BBB99CBC21C19D86DC6F0145CF057991342DBD3  : public MonoVervice_1_tFA9D0D7079EABFAF379997FA969BE49728B8E6B4
{
	// TestService FooService::_testService
	TestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334* ____testService_5;
	// BarPOCOService FooService::_barPocoService
	BarPOCOService_t427590A744DF69027D6D94D8AA794244D1862AE5* ____barPocoService_6;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// TestService
struct TestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334  : public MonoVervice_1_tF013AC46BCA8C8F4C2AECD2A9EA92B9F013D210D
{
	// BarPOCOService TestService::_barPocoService
	BarPOCOService_t427590A744DF69027D6D94D8AA794244D1862AE5* ____barPocoService_5;
	// System.Int32 TestService::Value
	int32_t ___Value_6;
	// UnityEngine.UI.Text TestService::TextMesh
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TextMesh_7;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Action`2<S,T> Container::CreateSetter<System.Object,System.Int32>(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_tAC461AE4F7B507965CE2E6A32853473F8C02CD75* Container_CreateSetter_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD838F4ECFA16306076F744824058F9D5C9CF8002_gshared (Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* __this, FieldInfo_t* ___field0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Int32>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m88484A213EB00FF7254FE3DB935BFB06DD3F5753_gshared_inline (Action_2_tAC461AE4F7B507965CE2E6A32853473F8C02CD75* __this, RuntimeObject* ___arg10, int32_t ___arg21, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void VonoBehaviour`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VonoBehaviour_1__ctor_mF2876C35AA405B2D78352E395B8326A47D019E81_gshared (VonoBehaviour_1_tA4FDA72CA563CFF6366610B19D1FAA5B997648CF* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.FieldInfo> VonoBehaviour`1<System.Object>::get_Services()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tA42794065062A1F618BC324141E216CEDA748815* VonoBehaviour_1_get_Services_m608F06548979B0EA0548FEC51E18C3B47FD37BF5_gshared_inline (const RuntimeMethod* method) ;
// System.Void Container::Resolve<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container_Resolve_TisRuntimeObject_mF06E209E3D447F927E50C4955D32DAEFBB1F75B0_gshared (Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* __this, RuntimeObject** ___obj0, const RuntimeMethod* method) ;
// System.Void Vervice`1<System.Object>::SetReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vervice_1_SetReady_m070ED9EF2E18376C1C86065073E92320103350DC_gshared (Vervice_1_tFC2AF52186E4558090551EF2090B38EDA522D830* __this, const RuntimeMethod* method) ;
// System.Void Vervice`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vervice_1__ctor_m5C926BBA44277120A584ED87AC69283E1ADA0A0E_gshared (Vervice_1_tFC2AF52186E4558090551EF2090B38EDA522D830* __this, const RuntimeMethod* method) ;
// System.Void MonoVervice`1<System.Object>::SetReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoVervice_1_SetReady_mF67191F0A69FE7F6A39C827A193DE1BE2A8A6831_gshared (MonoVervice_1_t15463CF614DF06DDCF646C4375B536383AD4CF61* __this, const RuntimeMethod* method) ;
// System.Void MonoVervice`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoVervice_1__ctor_mA75976314DF51D2D9855A4C6612615DA0B57697F_gshared (MonoVervice_1_t15463CF614DF06DDCF646C4375B536383AD4CF61* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<TestService/<Begin>d__3>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CBeginU3Ed__3_tFD4B4484F4123A67A1D5D47760BAAD27E4D40ED0_m7D5418FE8F0D3E3A9AABDAB1D8080D0BC8102C4F_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CBeginU3Ed__3_tFD4B4484F4123A67A1D5D47760BAAD27E4D40ED0* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,TestService/<Begin>d__3>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CBeginU3Ed__3_tFD4B4484F4123A67A1D5D47760BAAD27E4D40ED0_m285B74A2E96217A00C95BFB1C6848D1FAB57E5BD_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CBeginU3Ed__3_tFD4B4484F4123A67A1D5D47760BAAD27E4D40ED0* ___stateMachine1, const RuntimeMethod* method) ;

// System.Void Container::set_Instance(Container)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Container_set_Instance_m04708340B4DDC64F30D2AF257CB60C25203D2B20_inline (Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* ___value0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231 (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void POCOService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void POCOService__ctor_mC7A386EFFAF4DF68B673F9243AB6A7B3890061F3 (POCOService_t66D32826576BC5D0341692F3ABFE8AE69058013B* __this, const RuntimeMethod* method) ;
// System.Void BarPOCOService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BarPOCOService__ctor_m26BC2F57BB3FA87626EEA020008A81E6C53BEC81 (BarPOCOService_t427590A744DF69027D6D94D8AA794244D1862AE5* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Type>::Add(T)
inline bool HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1 (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* __this, Type_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*, Type_t*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Reflection.FieldInfo System.Type::GetField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0 (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Action`2<S,T> Container::CreateSetter<TestService,System.Int32>(System.Reflection.FieldInfo)
inline Action_2_t7698FDBD96AC02E7CB9ABEB25A1FDB48CA188E24* Container_CreateSetter_TisTestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mACB73F0BAD12CFD1F5C32C2843C963AC7A499BDF (Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* __this, FieldInfo_t* ___field0, const RuntimeMethod* method)
{
	return ((  Action_2_t7698FDBD96AC02E7CB9ABEB25A1FDB48CA188E24* (*) (Container_tD893563141DD2B976E59B5F23B739924B8ABF41A*, FieldInfo_t*, const RuntimeMethod*))Container_CreateSetter_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD838F4ECFA16306076F744824058F9D5C9CF8002_gshared)(__this, ___field0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,IVervice>::Add(TKey,TValue)
inline void Dictionary_2_Add_mAA9891AEE244B2C2EC2C2E1AA27061C05CE207B2 (Dictionary_2_t9CC1B5AC2436F143FC60952FA62246708BB0B97A* __this, Type_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9CC1B5AC2436F143FC60952FA62246708BB0B97A*, Type_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Type>::Remove(T)
inline bool HashSet_1_Remove_m62F6C841338A696A7D092C9A95CEC67D4082135C (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* __this, Type_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*, Type_t*, const RuntimeMethod*))HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared)(__this, ___item0, method);
}
// System.Void Container::CheckRegistrationFinish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container_CheckRegistrationFinish_m35C6D5DB808B3A0E7D02E0A9910363A6ABB4F967 (Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Object>::Add(TKey,TValue)
inline void Dictionary_2_Add_mFE0B282ABFC67D240E8C236181CD3C4FF0984045 (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* __this, Type_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*, Type_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<DependencyNode>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mFFA67F8949BECCB768EF906E8D727C437C29EB21 (Dictionary_2_t398838F02E06F247F837F098A38A7E59F568D47D* __this, Type_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t398838F02E06F247F837F098A38A7E59F568D47D*, Type_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<DependencyNode>>::get_Item(TKey)
inline List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* Dictionary_2_get_Item_m6C68BAE5F60CFAA27C4E88A593D0BF368DC0D879 (Dictionary_2_t398838F02E06F247F837F098A38A7E59F568D47D* __this, Type_t* ___key0, const RuntimeMethod* method)
{
	return ((  List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* (*) (Dictionary_2_t398838F02E06F247F837F098A38A7E59F568D47D*, Type_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<DependencyNode>::GetEnumerator()
inline Enumerator_tE696B3D2C4506598825E7FBA0C6A9E4FE15A1BE1 List_1_GetEnumerator_mE71B344EEC7CD59C011871FBD0C7F932163466DA (List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE696B3D2C4506598825E7FBA0C6A9E4FE15A1BE1 (*) (List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<DependencyNode>::Dispose()
inline void Enumerator_Dispose_mE426EC95549E014CA1F52D61FEC8767B1108952F (Enumerator_tE696B3D2C4506598825E7FBA0C6A9E4FE15A1BE1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE696B3D2C4506598825E7FBA0C6A9E4FE15A1BE1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<DependencyNode>::get_Current()
inline DependencyNode_t9B8DCC43D012674005888A11FBEC5A86904B2E62* Enumerator_get_Current_mFF7EED004557218A14519D654CAB04AC54BD8847_inline (Enumerator_tE696B3D2C4506598825E7FBA0C6A9E4FE15A1BE1* __this, const RuntimeMethod* method)
{
	return ((  DependencyNode_t9B8DCC43D012674005888A11FBEC5A86904B2E62* (*) (Enumerator_tE696B3D2C4506598825E7FBA0C6A9E4FE15A1BE1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C (FieldInfo_t* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<DependencyNode>::MoveNext()
inline bool Enumerator_MoveNext_mB2F293F4A2475AFA0370F2E6DFF7FE62E006056E (Enumerator_tE696B3D2C4506598825E7FBA0C6A9E4FE15A1BE1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE696B3D2C4506598825E7FBA0C6A9E4FE15A1BE1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<DependencyNode>>::Remove(TKey)
inline bool Dictionary_2_Remove_m781AE06E52917D6444892255F88F0357B2E97C39 (Dictionary_2_t398838F02E06F247F837F098A38A7E59F568D47D* __this, Type_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t398838F02E06F247F837F098A38A7E59F568D47D*, Type_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Void Container::CheckInjectionFinish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container_CheckInjectionFinish_mC44B55320A2871A8A9833159A8A280CD4CC75D4F (Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* __this, const RuntimeMethod* method) ;
// System.Void Container::BuildObjectGraphForVervices(System.Collections.Generic.Dictionary`2<System.Type,IVervice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container_BuildObjectGraphForVervices_mF807DE576098770ADBDC9766B4CF82AC6A412E67 (Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* __this, Dictionary_2_t9CC1B5AC2436F143FC60952FA62246708BB0B97A* ___vervices0, const RuntimeMethod* method) ;
// System.Void Container::Resolve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container_Resolve_m5DE19141530B22D47633B9FF983670E3FB3C0120 (Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,IVervice>::GetEnumerator()
inline Enumerator_t28D71F7C3D1DBE22553AF4B386EC1B963718EBB3 Dictionary_2_GetEnumerator_m7E22CED7FAAAD3513533252972A7C4B82DD32077 (Dictionary_2_t9CC1B5AC2436F143FC60952FA62246708BB0B97A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t28D71F7C3D1DBE22553AF4B386EC1B963718EBB3 (*) (Dictionary_2_t9CC1B5AC2436F143FC60952FA62246708BB0B97A*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Type,IVervice>::Dispose()
inline void Enumerator_Dispose_mC4569FBDE7439C4E2A6FE98F5D0C5B696F133BD9 (Enumerator_t28D71F7C3D1DBE22553AF4B386EC1B963718EBB3* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t28D71F7C3D1DBE22553AF4B386EC1B963718EBB3*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Type,IVervice>::get_Current()
inline KeyValuePair_2_t2D8C807AA01443ADA4CCD49DDDD15C5C71E470BF Enumerator_get_Current_m7E10F01459FB649D535BF1618F1104363FE6D3C1_inline (Enumerator_t28D71F7C3D1DBE22553AF4B386EC1B963718EBB3* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t2D8C807AA01443ADA4CCD49DDDD15C5C71E470BF (*) (Enumerator_t28D71F7C3D1DBE22553AF4B386EC1B963718EBB3*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Type,IVervice>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_m58C466806927542B95D4A5DACEF7BE28888CD5A7_inline (KeyValuePair_2_t2D8C807AA01443ADA4CCD49DDDD15C5C71E470BF* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t2D8C807AA01443ADA4CCD49DDDD15C5C71E470BF*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<DependencyNode>::get_Count()
inline int32_t List_1_get_Count_m3C98FBEA3D83B4079B0F8A4D14DC641056AB166C_inline (List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<DependencyNode>::get_Item(System.Int32)
inline DependencyNode_t9B8DCC43D012674005888A11FBEC5A86904B2E62* List_1_get_Item_m0E3E58710802448C7EF22FB134E38A897FD1870E (List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  DependencyNode_t9B8DCC43D012674005888A11FBEC5A86904B2E62* (*) (List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void Container::SetForLateBinding(DependencyNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container_SetForLateBinding_mF903DACFDA65A879218CD336CC566A81DE048CF2 (Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* __this, DependencyNode_t9B8DCC43D012674005888A11FBEC5A86904B2E62* ___dependency0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<IVervice>::Add(T)
inline void List_1_Add_mB04BCCDE748416EA43BA5F820BDD671B40860836_inline (List_1_t9576881927C14F0A8ABC20E7DD60FBE920096639* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9576881927C14F0A8ABC20E7DD60FBE920096639*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Type,IVervice>::MoveNext()
inline bool Enumerator_MoveNext_m0F70D3576CBC03943498D17DA551BF1D6C15707F (Enumerator_t28D71F7C3D1DBE22553AF4B386EC1B963718EBB3* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t28D71F7C3D1DBE22553AF4B386EC1B963718EBB3*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<DependencyNode>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m5D79F02FA712BECCEEA6B785FC482DD162321705 (Dictionary_2_t398838F02E06F247F837F098A38A7E59F568D47D* __this, Type_t* ___key0, List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t398838F02E06F247F837F098A38A7E59F568D47D*, Type_t*, List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<DependencyNode>::Add(T)
inline void List_1_Add_mDAA357932F8D17FFB8193DCB3FD4EF937240195C_inline (List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* __this, DependencyNode_t9B8DCC43D012674005888A11FBEC5A86904B2E62* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0*, DependencyNode_t9B8DCC43D012674005888A11FBEC5A86904B2E62*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<DependencyNode>::.ctor()
inline void List_1__ctor_m79C7722331FD0ADACE281C15C3B9EBF53F55088F (List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<DependencyNode>>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC21AC22BD324FC96B5944AE994ADF0708DF056F7 (Dictionary_2_t398838F02E06F247F837F098A38A7E59F568D47D* __this, Type_t* ___key0, List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t398838F02E06F247F837F098A38A7E59F568D47D*, Type_t*, List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 System.Collections.Generic.HashSet`1<System.Type>::get_Count()
inline int32_t HashSet_1_get_Count_m84934F32D3D4BCD461A09A1B2E4FA7C5B39109B7_inline (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*, const RuntimeMethod*))HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline)(__this, method);
}
// System.Void Container::BuildObjectGraph()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container_BuildObjectGraph_mF95A1D025B3C313797C80223ED0103257F77866F (Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<DependencyNode>>::get_Count()
inline int32_t Dictionary_2_get_Count_mD1818E16E559CE55BBEF0C92F130FECEAF112C37 (Dictionary_2_t398838F02E06F247F837F098A38A7E59F568D47D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t398838F02E06F247F837F098A38A7E59F568D47D*, const RuntimeMethod*))Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Type,System.Object>::get_Item(TKey)
inline RuntimeObject* Dictionary_2_get_Item_mD4D6329707A4295C17057969FA11FEEF4AEB82FA (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* __this, Type_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*, Type_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Void System.Action`2<TestService,System.Int32>::Invoke(T1,T2)
inline void Action_2_Invoke_m8758198DBF07435BEECC55C9BF18BFEBE7051CAE_inline (Action_2_t7698FDBD96AC02E7CB9ABEB25A1FDB48CA188E24* __this, TestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334* ___arg10, int32_t ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t7698FDBD96AC02E7CB9ABEB25A1FDB48CA188E24*, TestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334*, int32_t, const RuntimeMethod*))Action_2_Invoke_m88484A213EB00FF7254FE3DB935BFB06DD3F5753_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<IVervice>::GetEnumerator()
inline Enumerator_t96327DFA982D2F0604E7D9721E3663A9F50F48D4 List_1_GetEnumerator_mC8C8D5218D85BBFD21620926D2065DD8543222BF (List_1_t9576881927C14F0A8ABC20E7DD60FBE920096639* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t96327DFA982D2F0604E7D9721E3663A9F50F48D4 (*) (List_1_t9576881927C14F0A8ABC20E7DD60FBE920096639*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<IVervice>::Dispose()
inline void Enumerator_Dispose_mA044033B8A5913ECCDFE4652F077A1825573D325 (Enumerator_t96327DFA982D2F0604E7D9721E3663A9F50F48D4* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t96327DFA982D2F0604E7D9721E3663A9F50F48D4*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<IVervice>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m9572D6CDB5A50A40CF7FF18F977AA4A250D202BB_inline (Enumerator_t96327DFA982D2F0604E7D9721E3663A9F50F48D4* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t96327DFA982D2F0604E7D9721E3663A9F50F48D4*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<IVervice>::MoveNext()
inline bool Enumerator_MoveNext_m334DB633FF9C6901D091C12EBA8517ADA9644A8C (Enumerator_t96327DFA982D2F0604E7D9721E3663A9F50F48D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t96327DFA982D2F0604E7D9721E3663A9F50F48D4*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<IVervice>::Clear()
inline void List_1_Clear_mE098CB4DFC36B3802E3C84ED81B9AF88B92D3B94_inline (List_1_t9576881927C14F0A8ABC20E7DD60FBE920096639* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9576881927C14F0A8ABC20E7DD60FBE920096639*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,IVervice>::Clear()
inline void Dictionary_2_Clear_m3A43E866B1140357104C49F863CC2A61862781DC (Dictionary_2_t9CC1B5AC2436F143FC60952FA62246708BB0B97A* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9CC1B5AC2436F143FC60952FA62246708BB0B97A*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.FieldInfo>::GetEnumerator()
inline Enumerator_t744FFD1CDD2295419F232ACCF870382D4F6799D7 Dictionary_2_GetEnumerator_m5EF85F1F39BC68D48BD5234A7960F3ABC62FDF31 (Dictionary_2_tA42794065062A1F618BC324141E216CEDA748815* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t744FFD1CDD2295419F232ACCF870382D4F6799D7 (*) (Dictionary_2_tA42794065062A1F618BC324141E216CEDA748815*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Reflection.FieldInfo>::Dispose()
inline void Enumerator_Dispose_m5BE0DB621FE38299535388D5706AFAA41BDD9CAA (Enumerator_t744FFD1CDD2295419F232ACCF870382D4F6799D7* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t744FFD1CDD2295419F232ACCF870382D4F6799D7*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Reflection.FieldInfo>::get_Current()
inline KeyValuePair_2_t69B7D0132BAC70C788A2CDC3B6BF6309824784ED Enumerator_get_Current_m5DC2C0C199FC4D0C486633A0DF88BDA42271664C_inline (Enumerator_t744FFD1CDD2295419F232ACCF870382D4F6799D7* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t69B7D0132BAC70C788A2CDC3B6BF6309824784ED (*) (Enumerator_t744FFD1CDD2295419F232ACCF870382D4F6799D7*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Type,System.Reflection.FieldInfo>::get_Value()
inline FieldInfo_t* KeyValuePair_2_get_Value_m444B97383AD199746EB73DB76ECC10D39129B4B1_inline (KeyValuePair_2_t69B7D0132BAC70C788A2CDC3B6BF6309824784ED* __this, const RuntimeMethod* method)
{
	return ((  FieldInfo_t* (*) (KeyValuePair_2_t69B7D0132BAC70C788A2CDC3B6BF6309824784ED*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Type,System.Reflection.FieldInfo>::get_Key()
inline Type_t* KeyValuePair_2_get_Key_mF416E075781721E04FC2B7DD1074D130F3A112D9_inline (KeyValuePair_2_t69B7D0132BAC70C788A2CDC3B6BF6309824784ED* __this, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (KeyValuePair_2_t69B7D0132BAC70C788A2CDC3B6BF6309824784ED*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Reflection.FieldInfo>::MoveNext()
inline bool Enumerator_MoveNext_mE0180D08E2BD3A0FC296E258CD90752FE03EA394 (Enumerator_t744FFD1CDD2295419F232ACCF870382D4F6799D7* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t744FFD1CDD2295419F232ACCF870382D4F6799D7*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// Container Container::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* Container_get_Instance_m844AAC5E1E36187B2111CB2E37F8D65C10AA6531_inline (const RuntimeMethod* method) ;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___obj0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,System.Object>::GetEnumerator()
inline Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1 Dictionary_2_GetEnumerator_mEACC35835C05B20642437541D2844FDA88378AAB (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1 (*) (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Object>::Dispose()
inline void Enumerator_Dispose_mA452FB910DA7DD11178A7DF048CD2F9F4255F382 (Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Object>::get_Current()
inline KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA Enumerator_get_Current_mD550F51A6EADAA1F4604F3F610F0C7780DC8D2E8_inline (Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA (*) (Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>::get_Key()
inline Type_t* KeyValuePair_2_get_Key_m94FB4DC031581990488B18A4B232F1E0661E51E6_inline (KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA* __this, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m686E9F4F715B3E1E3530A9516FB350F32726418B (Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Object>::.ctor()
inline void Dictionary_2__ctor_m84DCABCA6F8E90C1A9C54403427A93C6CA760A1E (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,IVervice>::.ctor()
inline void Dictionary_2__ctor_m99C192183AF9336890F815A2EB9C163DBBCF617A (Dictionary_2_t9CC1B5AC2436F143FC60952FA62246708BB0B97A* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9CC1B5AC2436F143FC60952FA62246708BB0B97A*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<DependencyNode>>::.ctor()
inline void Dictionary_2__ctor_m0EA4BCAF1B1B73C0A14F9AB34EB354A4B99D56F0 (Dictionary_2_t398838F02E06F247F837F098A38A7E59F568D47D* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t398838F02E06F247F837F098A38A7E59F568D47D*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<IVervice>::.ctor()
inline void List_1__ctor_m85B926DC1FC04C1704A3E44B60FE07F69BBA9D3D (List_1_t9576881927C14F0A8ABC20E7DD60FBE920096639* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9576881927C14F0A8ABC20E7DD60FBE920096639*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.Type>::.ctor()
inline void HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<DependencyNode> MonoVervice::get_Dependencies()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* MonoVervice_get_Dependencies_m590972D5DB3F3460CFA7CB871E718D51DEC43D84_inline (MonoVervice_tF220D43A7C8A61DCA2E5184E7DBAC10A5304350B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DependencyNode>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mD8E40C194D0E4BA50B5CFFF23C9E4BB8B057942E (List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Collections.Generic.List`1<DependencyNode> Vervice::get_Dependencies()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* Vervice_get_Dependencies_mD4A3C7C892E634EE603FE8469C8943821DD995C4_inline (Vervice_t37BBCA9D632DF7EC3C536CFD85A6E249FA5B4447* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void VonoBehaviour`1<FooMono>::.ctor()
inline void VonoBehaviour_1__ctor_mC86852F454761CCED0B2F899D684F65970190F0F (VonoBehaviour_1_t4CBB6E11A839C3707D289801BEEFDC9A6AA20A18* __this, const RuntimeMethod* method)
{
	((  void (*) (VonoBehaviour_1_t4CBB6E11A839C3707D289801BEEFDC9A6AA20A18*, const RuntimeMethod*))VonoBehaviour_1__ctor_mF2876C35AA405B2D78352E395B8326A47D019E81_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.FieldInfo> VonoBehaviour`1<TestMono>::get_Services()
inline Dictionary_2_tA42794065062A1F618BC324141E216CEDA748815* VonoBehaviour_1_get_Services_mFC2967723B5013D56ECD08D4220EF37AE1B145D6_inline (const RuntimeMethod* method)
{
	return ((  Dictionary_2_tA42794065062A1F618BC324141E216CEDA748815* (*) (const RuntimeMethod*))VonoBehaviour_1_get_Services_m608F06548979B0EA0548FEC51E18C3B47FD37BF5_gshared_inline)(method);
}
// System.Void Container::Resolve(System.Object,System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.FieldInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container_Resolve_mA812BB9EF7F17176F3A65DB30C9F86AA9F406DC4 (Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* __this, RuntimeObject* ___obj0, Dictionary_2_tA42794065062A1F618BC324141E216CEDA748815* ___fields1, const RuntimeMethod* method) ;
// System.Void Container::Resolve<TestService>(T&)
inline void Container_Resolve_TisTestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334_m64F26B1288847D6F283B59D858469A847A680C56 (Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* __this, TestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334** ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Container_tD893563141DD2B976E59B5F23B739924B8ABF41A*, TestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334**, const RuntimeMethod*))Container_Resolve_TisRuntimeObject_mF06E209E3D447F927E50C4955D32DAEFBB1F75B0_gshared)(__this, ___obj0, method);
}
// System.Void Container::Resolve<FooService>(T&)
inline void Container_Resolve_TisFooService_t9BBB99CBC21C19D86DC6F0145CF057991342DBD3_mA4C790D40FC0F72C802F53E8B68F434A5318B75F (Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* __this, FooService_t9BBB99CBC21C19D86DC6F0145CF057991342DBD3** ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Container_tD893563141DD2B976E59B5F23B739924B8ABF41A*, FooService_t9BBB99CBC21C19D86DC6F0145CF057991342DBD3**, const RuntimeMethod*))Container_Resolve_TisRuntimeObject_mF06E209E3D447F927E50C4955D32DAEFBB1F75B0_gshared)(__this, ___obj0, method);
}
// System.Void VonoBehaviour`1<TestMono>::.ctor()
inline void VonoBehaviour_1__ctor_mB7E1FA0A91B5F085EFF7B1357CBF7D3FE68035FC (VonoBehaviour_1_tA76DC37462E9B127A591648DADEE8AFE800B49F6* __this, const RuntimeMethod* method)
{
	((  void (*) (VonoBehaviour_1_tA76DC37462E9B127A591648DADEE8AFE800B49F6*, const RuntimeMethod*))VonoBehaviour_1__ctor_mF2876C35AA405B2D78352E395B8326A47D019E81_gshared)(__this, method);
}
// System.Void Vervice`1<BarPOCOService>::SetReady()
inline void Vervice_1_SetReady_m059E5A2F6D080BB028C2CDF99CE39500995DE423 (Vervice_1_t475C29B0FB7E801061695ACD6BDF7C28A62FA12B* __this, const RuntimeMethod* method)
{
	((  void (*) (Vervice_1_t475C29B0FB7E801061695ACD6BDF7C28A62FA12B*, const RuntimeMethod*))Vervice_1_SetReady_m070ED9EF2E18376C1C86065073E92320103350DC_gshared)(__this, method);
}
// System.Void Vervice`1<BarPOCOService>::.ctor()
inline void Vervice_1__ctor_mFC812F54801461B87C34360FFFC37ABFD7902A6C (Vervice_1_t475C29B0FB7E801061695ACD6BDF7C28A62FA12B* __this, const RuntimeMethod* method)
{
	((  void (*) (Vervice_1_t475C29B0FB7E801061695ACD6BDF7C28A62FA12B*, const RuntimeMethod*))Vervice_1__ctor_m5C926BBA44277120A584ED87AC69283E1ADA0A0E_gshared)(__this, method);
}
// System.Void MonoVervice`1<FooService>::SetReady()
inline void MonoVervice_1_SetReady_mAEF0438FDB806839C6FB65EA94A5B48373F00C6B (MonoVervice_1_tFA9D0D7079EABFAF379997FA969BE49728B8E6B4* __this, const RuntimeMethod* method)
{
	((  void (*) (MonoVervice_1_tFA9D0D7079EABFAF379997FA969BE49728B8E6B4*, const RuntimeMethod*))MonoVervice_1_SetReady_mF67191F0A69FE7F6A39C827A193DE1BE2A8A6831_gshared)(__this, method);
}
// System.Void BarPOCOService::Test()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BarPOCOService_Test_m7152D9087322FF3DCF662716B983E6DC17371D74 (BarPOCOService_t427590A744DF69027D6D94D8AA794244D1862AE5* __this, const RuntimeMethod* method) ;
// System.Void MonoVervice`1<FooService>::.ctor()
inline void MonoVervice_1__ctor_m86A221BE0A47EE9BCE6F00552B8480179EB0FECC (MonoVervice_1_tFA9D0D7079EABFAF379997FA969BE49728B8E6B4* __this, const RuntimeMethod* method)
{
	((  void (*) (MonoVervice_1_tFA9D0D7079EABFAF379997FA969BE49728B8E6B4*, const RuntimeMethod*))MonoVervice_1__ctor_mA75976314DF51D2D9855A4C6612615DA0B57697F_gshared)(__this, method);
}
// System.Void Vervice`1<POCOService>::.ctor()
inline void Vervice_1__ctor_m1DC854F24DF24619D79BB63C7C873B880BE12C0D (Vervice_1_tE73787701B7D71979F5ADD3424ABD072749E7C75* __this, const RuntimeMethod* method)
{
	((  void (*) (Vervice_1_tE73787701B7D71979F5ADD3424ABD072749E7C75*, const RuntimeMethod*))Vervice_1__ctor_m5C926BBA44277120A584ED87AC69283E1ADA0A0E_gshared)(__this, method);
}
// System.Void Vervice`1<POCOService>::SetReady()
inline void Vervice_1_SetReady_mB39C2E71B7CF252B0E97959A8B705864DEA7996D (Vervice_1_tE73787701B7D71979F5ADD3424ABD072749E7C75* __this, const RuntimeMethod* method)
{
	((  void (*) (Vervice_1_tE73787701B7D71979F5ADD3424ABD072749E7C75*, const RuntimeMethod*))Vervice_1_SetReady_m070ED9EF2E18376C1C86065073E92320103350DC_gshared)(__this, method);
}
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<TestService/<Begin>d__3>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CBeginU3Ed__3_tFD4B4484F4123A67A1D5D47760BAAD27E4D40ED0_m7D5418FE8F0D3E3A9AABDAB1D8080D0BC8102C4F (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CBeginU3Ed__3_tFD4B4484F4123A67A1D5D47760BAAD27E4D40ED0* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CBeginU3Ed__3_tFD4B4484F4123A67A1D5D47760BAAD27E4D40ED0*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CBeginU3Ed__3_tFD4B4484F4123A67A1D5D47760BAAD27E4D40ED0_m7D5418FE8F0D3E3A9AABDAB1D8080D0BC8102C4F_gshared)(__this, ___stateMachine0, method);
}
// System.Void MonoVervice`1<TestService>::.ctor()
inline void MonoVervice_1__ctor_mA5E09AAFEF5E153507C8DA8DCD713BAC811E48D6 (MonoVervice_1_tF013AC46BCA8C8F4C2AECD2A9EA92B9F013D210D* __this, const RuntimeMethod* method)
{
	((  void (*) (MonoVervice_1_tF013AC46BCA8C8F4C2AECD2A9EA92B9F013D210D*, const RuntimeMethod*))MonoVervice_1__ctor_mA75976314DF51D2D9855A4C6612615DA0B57697F_gshared)(__this, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Delay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_Delay_m4B84654B4DAADEC41096D9F01C099CCEA9927A48 (int32_t ___millisecondsDelay0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,TestService/<Begin>d__3>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CBeginU3Ed__3_tFD4B4484F4123A67A1D5D47760BAAD27E4D40ED0_m285B74A2E96217A00C95BFB1C6848D1FAB57E5BD (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CBeginU3Ed__3_tFD4B4484F4123A67A1D5D47760BAAD27E4D40ED0* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CBeginU3Ed__3_tFD4B4484F4123A67A1D5D47760BAAD27E4D40ED0*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CBeginU3Ed__3_tFD4B4484F4123A67A1D5D47760BAAD27E4D40ED0_m285B74A2E96217A00C95BFB1C6848D1FAB57E5BD_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void MonoVervice`1<TestService>::SetReady()
inline void MonoVervice_1_SetReady_m12F517E77765EAEEF3DF95A18C713CF1031D3C04 (MonoVervice_1_tF013AC46BCA8C8F4C2AECD2A9EA92B9F013D210D* __this, const RuntimeMethod* method)
{
	((  void (*) (MonoVervice_1_tF013AC46BCA8C8F4C2AECD2A9EA92B9F013D210D*, const RuntimeMethod*))MonoVervice_1_SetReady_mF67191F0A69FE7F6A39C827A193DE1BE2A8A6831_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// System.Void TestService/<Begin>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBeginU3Ed__3_MoveNext_m53A025E79BE3D3191A30EC8BB7B5C9298CAC96AD (U3CBeginU3Ed__3_tFD4B4484F4123A67A1D5D47760BAAD27E4D40ED0* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void TestService/<Begin>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBeginU3Ed__3_SetStateMachine_m0038DD4AD66C7094FAC6D67EDCAD839F92AE6908 (U3CBeginU3Ed__3_tFD4B4484F4123A67A1D5D47760BAAD27E4D40ED0* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// Container Container::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* Container_get_Instance_m844AAC5E1E36187B2111CB2E37F8D65C10AA6531 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Container_tD893563141DD2B976E59B5F23B739924B8ABF41A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Container Instance { get; private set; }
		Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* L_0 = ((Container_tD893563141DD2B976E59B5F23B739924B8ABF41A_StaticFields*)il2cpp_codegen_static_fields_for(Container_tD893563141DD2B976E59B5F23B739924B8ABF41A_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Container::set_Instance(Container)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container_set_Instance_m04708340B4DDC64F30D2AF257CB60C25203D2B20 (Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Container_tD893563141DD2B976E59B5F23B739924B8ABF41A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Container Instance { get; private set; }
		Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* L_0 = ___value0;
		((Container_tD893563141DD2B976E59B5F23B739924B8ABF41A_StaticFields*)il2cpp_codegen_static_fields_for(Container_tD893563141DD2B976E59B5F23B739924B8ABF41A_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Container_tD893563141DD2B976E59B5F23B739924B8ABF41A_StaticFields*)il2cpp_codegen_static_fields_for(Container_tD893563141DD2B976E59B5F23B739924B8ABF41A_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void Container::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container_Awake_m008AC79A27B2B33017895DF9D69AE375608B9F0B (Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BarPOCOService_t427590A744DF69027D6D94D8AA794244D1862AE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Container_CreateSetter_TisTestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mACB73F0BAD12CFD1F5C32C2843C963AC7A499BDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FooService_t9BBB99CBC21C19D86DC6F0145CF057991342DBD3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&POCOService_t66D32826576BC5D0341692F3ABFE8AE69058013B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TestMono_tF243BB3690D70325849699B896D3E50B0094B670_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05EDA87D0D8E1E20FEF7057308B3AB6F8A9E3E63);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3);
		s_Il2CppMethodInitialized = true;
	}
	FieldInfo_t* V_0 = NULL;
	{
		// Instance = this;
		Container_set_Instance_m04708340B4DDC64F30D2AF257CB60C25203D2B20_inline(__this, NULL);
		// _methodInfo = typeof(TestMono).GetMethod(nameof(TestMono.ResolveWithMethodInfo));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (TestMono_tF243BB3690D70325849699B896D3E50B0094B670_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		MethodInfo_t* L_2;
		L_2 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_1, _stringLiteral05EDA87D0D8E1E20FEF7057308B3AB6F8A9E3E63, NULL);
		__this->____methodInfo_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____methodInfo_13), (void*)L_2);
		// new POCOService();
		POCOService_t66D32826576BC5D0341692F3ABFE8AE69058013B* L_3 = (POCOService_t66D32826576BC5D0341692F3ABFE8AE69058013B*)il2cpp_codegen_object_new(POCOService_t66D32826576BC5D0341692F3ABFE8AE69058013B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		POCOService__ctor_mC7A386EFFAF4DF68B673F9243AB6A7B3890061F3(L_3, NULL);
		// new BarPOCOService();
		BarPOCOService_t427590A744DF69027D6D94D8AA794244D1862AE5* L_4 = (BarPOCOService_t427590A744DF69027D6D94D8AA794244D1862AE5*)il2cpp_codegen_object_new(BarPOCOService_t427590A744DF69027D6D94D8AA794244D1862AE5_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		BarPOCOService__ctor_m26BC2F57BB3FA87626EEA020008A81E6C53BEC81(L_4, NULL);
		// _registeryWaitingServiceTypes.Add(typeof(FooService));
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_5 = __this->____registeryWaitingServiceTypes_10;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (FooService_t9BBB99CBC21C19D86DC6F0145CF057991342DBD3_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_5);
		bool L_8;
		L_8 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_5, L_7, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		// _registeryWaitingServiceTypes.Add(typeof(TestService));
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_9 = __this->____registeryWaitingServiceTypes_10;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (TestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck(L_9);
		bool L_12;
		L_12 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_9, L_11, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		// var fieldInfo = typeof(TestService).GetField("Value");
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (TestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		NullCheck(L_14);
		FieldInfo_t* L_15;
		L_15 = Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0(L_14, _stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3, NULL);
		V_0 = L_15;
		// _delegate = CreateSetter<TestService, int>(fieldInfo);
		FieldInfo_t* L_16 = V_0;
		Action_2_t7698FDBD96AC02E7CB9ABEB25A1FDB48CA188E24* L_17;
		L_17 = Container_CreateSetter_TisTestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mACB73F0BAD12CFD1F5C32C2843C963AC7A499BDF(__this, L_16, Container_CreateSetter_TisTestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mACB73F0BAD12CFD1F5C32C2843C963AC7A499BDF_RuntimeMethod_var);
		__this->____delegate_15 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____delegate_15), (void*)L_17);
		// }
		return;
	}
}
// System.Void Container::Register(System.Type,Vervice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container_Register_m9D0F1564002E796EC33B0B5AD3DA5DE0AFBDA49A (Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* __this, Type_t* ___type0, Vervice_t37BBCA9D632DF7EC3C536CFD85A6E249FA5B4447* ___service1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mAA9891AEE244B2C2EC2C2E1AA27061C05CE207B2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _pocoServices.Add(type, service);
		Dictionary_2_t9CC1B5AC2436F143FC60952FA62246708BB0B97A* L_0 = __this->____pocoServices_6;
		Type_t* L_1 = ___type0;
		Vervice_t37BBCA9D632DF7EC3C536CFD85A6E249FA5B4447* L_2 = ___service1;
		NullCheck(L_0);
		Dictionary_2_Add_mAA9891AEE244B2C2EC2C2E1AA27061C05CE207B2(L_0, L_1, L_2, Dictionary_2_Add_mAA9891AEE244B2C2EC2C2E1AA27061C05CE207B2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Container::RegisterMono(System.Type,MonoVervice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container_RegisterMono_mD86B79969F9C1AC43E42E748EF13574790C586DB (Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* __this, Type_t* ___type0, MonoVervice_tF220D43A7C8A61DCA2E5184E7DBAC10A5304350B* ___service1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mAA9891AEE244B2C2EC2C2E1AA27061C05CE207B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m62F6C841338A696A7D092C9A95CEC67D4082135C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _monoServices.Add(type, service);
		Dictionary_2_t9CC1B5AC2436F143FC60952FA62246708BB0B97A* L_0 = __this->____monoServices_7;
		Type_t* L_1 = ___type0;
		MonoVervice_tF220D43A7C8A61DCA2E5184E7DBAC10A5304350B* L_2 = ___service1;
		NullCheck(L_0);
		Dictionary_2_Add_mAA9891AEE244B2C2EC2C2E1AA27061C05CE207B2(L_0, L_1, L_2, Dictionary_2_Add_mAA9891AEE244B2C2EC2C2E1AA27061C05CE207B2_RuntimeMethod_var);
		// _registeryWaitingServiceTypes.Remove(type);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_3 = __this->____registeryWaitingServiceTypes_10;
		Type_t* L_4 = ___type0;
		NullCheck(L_3);
		bool L_5;
		L_5 = HashSet_1_Remove_m62F6C841338A696A7D092C9A95CEC67D4082135C(L_3, L_4, HashSet_1_Remove_m62F6C841338A696A7D092C9A95CEC67D4082135C_RuntimeMethod_var);
		// CheckRegistrationFinish();
		Container_CheckRegistrationFinish_m35C6D5DB808B3A0E7D02E0A9910363A6ABB4F967(__this, NULL);
		// }
		return;
	}
}
// System.Void Container::SetReady(System.Type,IVervice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container_SetReady_mEC90AA666957BD86B15A72F4123EE95FB36B86B1 (Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* __this, Type_t* ___type0, RuntimeObject* ___service1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mFE0B282ABFC67D240E8C236181CD3C4FF0984045_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mFFA67F8949BECCB768EF906E8D727C437C29EB21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m781AE06E52917D6444892255F88F0357B2E97C39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m6C68BAE5F60CFAA27C4E88A593D0BF368DC0D879_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE426EC95549E014CA1F52D61FEC8767B1108952F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB2F293F4A2475AFA0370F2E6DFF7FE62E006056E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFF7EED004557218A14519D654CAB04AC54BD8847_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVervice_tDDB4F73057E6702D49B93436323A0B8E5FA24C94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mE71B344EEC7CD59C011871FBD0C7F932163466DA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tE696B3D2C4506598825E7FBA0C6A9E4FE15A1BE1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// _readyServices.Add(type, service);
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_0 = __this->____readyServices_5;
		Type_t* L_1 = ___type0;
		RuntimeObject* L_2 = ___service1;
		NullCheck(L_0);
		Dictionary_2_Add_mFE0B282ABFC67D240E8C236181CD3C4FF0984045(L_0, L_1, L_2, Dictionary_2_Add_mFE0B282ABFC67D240E8C236181CD3C4FF0984045_RuntimeMethod_var);
		// if(!_objectGraph.ContainsKey(type)) return;
		Dictionary_2_t398838F02E06F247F837F098A38A7E59F568D47D* L_3 = __this->____objectGraph_8;
		Type_t* L_4 = ___type0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_mFFA67F8949BECCB768EF906E8D727C437C29EB21(L_3, L_4, Dictionary_2_ContainsKey_mFFA67F8949BECCB768EF906E8D727C437C29EB21_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_001c;
		}
	}
	{
		// if(!_objectGraph.ContainsKey(type)) return;
		return;
	}

IL_001c:
	{
		// foreach (var dependency in _objectGraph[type])
		Dictionary_2_t398838F02E06F247F837F098A38A7E59F568D47D* L_6 = __this->____objectGraph_8;
		Type_t* L_7 = ___type0;
		NullCheck(L_6);
		List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* L_8;
		L_8 = Dictionary_2_get_Item_m6C68BAE5F60CFAA27C4E88A593D0BF368DC0D879(L_6, L_7, Dictionary_2_get_Item_m6C68BAE5F60CFAA27C4E88A593D0BF368DC0D879_RuntimeMethod_var);
		NullCheck(L_8);
		Enumerator_tE696B3D2C4506598825E7FBA0C6A9E4FE15A1BE1 L_9;
		L_9 = List_1_GetEnumerator_mE71B344EEC7CD59C011871FBD0C7F932163466DA(L_8, List_1_GetEnumerator_mE71B344EEC7CD59C011871FBD0C7F932163466DA_RuntimeMethod_var);
		V_0 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0071:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mE426EC95549E014CA1F52D61FEC8767B1108952F((&V_0), Enumerator_Dispose_mE426EC95549E014CA1F52D61FEC8767B1108952F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0066_1;
			}

IL_0030_1:
			{
				// foreach (var dependency in _objectGraph[type])
				DependencyNode_t9B8DCC43D012674005888A11FBEC5A86904B2E62* L_10;
				L_10 = Enumerator_get_Current_mFF7EED004557218A14519D654CAB04AC54BD8847_inline((&V_0), Enumerator_get_Current_mFF7EED004557218A14519D654CAB04AC54BD8847_RuntimeMethod_var);
				// var requirer = dependency.Requirer;
				DependencyNode_t9B8DCC43D012674005888A11FBEC5A86904B2E62* L_11 = L_10;
				NullCheck(L_11);
				RuntimeObject* L_12 = L_11->___Requirer_2;
				V_1 = L_12;
				// dependency.FieldInfo.SetValue(requirer, service);
				NullCheck(L_11);
				FieldInfo_t* L_13 = L_11->___FieldInfo_1;
				RuntimeObject* L_14 = V_1;
				RuntimeObject* L_15 = ___service1;
				NullCheck(L_13);
				FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_13, L_14, L_15, NULL);
				// var vervice = (IVervice)requirer;
				RuntimeObject* L_16 = V_1;
				V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_16, IVervice_tDDB4F73057E6702D49B93436323A0B8E5FA24C94_il2cpp_TypeInfo_var));
				// vervice.OnTypeResolved(type);
				RuntimeObject* L_17 = V_2;
				Type_t* L_18 = ___type0;
				NullCheck(L_17);
				InterfaceActionInvoker1< Type_t* >::Invoke(1 /* System.Void IVervice::OnTypeResolved(System.Type) */, IVervice_tDDB4F73057E6702D49B93436323A0B8E5FA24C94_il2cpp_TypeInfo_var, L_17, L_18);
				// if (vervice.Resolved)
				RuntimeObject* L_19 = V_2;
				NullCheck(L_19);
				bool L_20;
				L_20 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean IVervice::get_Resolved() */, IVervice_tDDB4F73057E6702D49B93436323A0B8E5FA24C94_il2cpp_TypeInfo_var, L_19);
				if (!L_20)
				{
					goto IL_0066_1;
				}
			}
			{
				// vervice.Begin();
				RuntimeObject* L_21 = V_2;
				NullCheck(L_21);
				InterfaceActionInvoker0::Invoke(0 /* System.Void IVervice::Begin() */, IVervice_tDDB4F73057E6702D49B93436323A0B8E5FA24C94_il2cpp_TypeInfo_var, L_21);
			}

IL_0066_1:
			{
				// foreach (var dependency in _objectGraph[type])
				bool L_22;
				L_22 = Enumerator_MoveNext_mB2F293F4A2475AFA0370F2E6DFF7FE62E006056E((&V_0), Enumerator_MoveNext_mB2F293F4A2475AFA0370F2E6DFF7FE62E006056E_RuntimeMethod_var);
				if (L_22)
				{
					goto IL_0030_1;
				}
			}
			{
				goto IL_007f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007f:
	{
		// _objectGraph.Remove(type);
		Dictionary_2_t398838F02E06F247F837F098A38A7E59F568D47D* L_23 = __this->____objectGraph_8;
		Type_t* L_24 = ___type0;
		NullCheck(L_23);
		bool L_25;
		L_25 = Dictionary_2_Remove_m781AE06E52917D6444892255F88F0357B2E97C39(L_23, L_24, Dictionary_2_Remove_m781AE06E52917D6444892255F88F0357B2E97C39_RuntimeMethod_var);
		// CheckInjectionFinish();
		Container_CheckInjectionFinish_mC44B55320A2871A8A9833159A8A280CD4CC75D4F(__this, NULL);
		// }
		return;
	}
}
// System.Void Container::BuildObjectGraph()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container_BuildObjectGraph_mF95A1D025B3C313797C80223ED0103257F77866F (Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* __this, const RuntimeMethod* method) 
{
	{
		// BuildObjectGraphForVervices(_pocoServices);
		Dictionary_2_t9CC1B5AC2436F143FC60952FA62246708BB0B97A* L_0 = __this->____pocoServices_6;
		Container_BuildObjectGraphForVervices_mF807DE576098770ADBDC9766B4CF82AC6A412E67(__this, L_0, NULL);
		// BuildObjectGraphForVervices(_monoServices);
		Dictionary_2_t9CC1B5AC2436F143FC60952FA62246708BB0B97A* L_1 = __this->____monoServices_7;
		Container_BuildObjectGraphForVervices_mF807DE576098770ADBDC9766B4CF82AC6A412E67(__this, L_1, NULL);
		// Resolve();
		Container_Resolve_m5DE19141530B22D47633B9FF983670E3FB3C0120(__this, NULL);
		// }
		return;
	}
}
// System.Void Container::BuildObjectGraphForVervices(System.Collections.Generic.Dictionary`2<System.Type,IVervice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container_BuildObjectGraphForVervices_mF807DE576098770ADBDC9766B4CF82AC6A412E67 (Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* __this, Dictionary_2_t9CC1B5AC2436F143FC60952FA62246708BB0B97A* ___vervices0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m7E22CED7FAAAD3513533252972A7C4B82DD32077_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC4569FBDE7439C4E2A6FE98F5D0C5B696F133BD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m0F70D3576CBC03943498D17DA551BF1D6C15707F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7E10F01459FB649D535BF1618F1104363FE6D3C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVervice_tDDB4F73057E6702D49B93436323A0B8E5FA24C94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m58C466806927542B95D4A5DACEF7BE28888CD5A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB04BCCDE748416EA43BA5F820BDD671B40860836_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3C98FBEA3D83B4079B0F8A4D14DC641056AB166C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0E3E58710802448C7EF22FB134E38A897FD1870E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t28D71F7C3D1DBE22553AF4B386EC1B963718EBB3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t2D8C807AA01443ADA4CCD49DDDD15C5C71E470BF V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	DependencyNode_t9B8DCC43D012674005888A11FBEC5A86904B2E62* V_4 = NULL;
	{
		// foreach (var typeServicePair in vervices)
		Dictionary_2_t9CC1B5AC2436F143FC60952FA62246708BB0B97A* L_0 = ___vervices0;
		NullCheck(L_0);
		Enumerator_t28D71F7C3D1DBE22553AF4B386EC1B963718EBB3 L_1;
		L_1 = Dictionary_2_GetEnumerator_m7E22CED7FAAAD3513533252972A7C4B82DD32077(L_0, Dictionary_2_GetEnumerator_m7E22CED7FAAAD3513533252972A7C4B82DD32077_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC4569FBDE7439C4E2A6FE98F5D0C5B696F133BD9((&V_0), Enumerator_Dispose_mC4569FBDE7439C4E2A6FE98F5D0C5B696F133BD9_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0060_1;
			}

IL_0009_1:
			{
				// foreach (var typeServicePair in vervices)
				KeyValuePair_2_t2D8C807AA01443ADA4CCD49DDDD15C5C71E470BF L_2;
				L_2 = Enumerator_get_Current_m7E10F01459FB649D535BF1618F1104363FE6D3C1_inline((&V_0), Enumerator_get_Current_m7E10F01459FB649D535BF1618F1104363FE6D3C1_RuntimeMethod_var);
				V_1 = L_2;
				// var vervice = typeServicePair.Value;
				RuntimeObject* L_3;
				L_3 = KeyValuePair_2_get_Value_m58C466806927542B95D4A5DACEF7BE28888CD5A7_inline((&V_1), KeyValuePair_2_get_Value_m58C466806927542B95D4A5DACEF7BE28888CD5A7_RuntimeMethod_var);
				V_2 = L_3;
				// for (var i = vervice.Dependencies.Count - 1; i >= 0; i--)
				RuntimeObject* L_4 = V_2;
				NullCheck(L_4);
				List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* L_5;
				L_5 = InterfaceFuncInvoker0< List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* >::Invoke(3 /* System.Collections.Generic.List`1<DependencyNode> IVervice::get_Dependencies() */, IVervice_tDDB4F73057E6702D49B93436323A0B8E5FA24C94_il2cpp_TypeInfo_var, L_4);
				NullCheck(L_5);
				int32_t L_6;
				L_6 = List_1_get_Count_m3C98FBEA3D83B4079B0F8A4D14DC641056AB166C_inline(L_5, List_1_get_Count_m3C98FBEA3D83B4079B0F8A4D14DC641056AB166C_RuntimeMethod_var);
				V_3 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
				goto IL_0043_1;
			}

IL_0029_1:
			{
				// var dependency = vervice.Dependencies[i];
				RuntimeObject* L_7 = V_2;
				NullCheck(L_7);
				List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* L_8;
				L_8 = InterfaceFuncInvoker0< List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* >::Invoke(3 /* System.Collections.Generic.List`1<DependencyNode> IVervice::get_Dependencies() */, IVervice_tDDB4F73057E6702D49B93436323A0B8E5FA24C94_il2cpp_TypeInfo_var, L_7);
				int32_t L_9 = V_3;
				NullCheck(L_8);
				DependencyNode_t9B8DCC43D012674005888A11FBEC5A86904B2E62* L_10;
				L_10 = List_1_get_Item_m0E3E58710802448C7EF22FB134E38A897FD1870E(L_8, L_9, List_1_get_Item_m0E3E58710802448C7EF22FB134E38A897FD1870E_RuntimeMethod_var);
				V_4 = L_10;
				// SetForLateBinding(dependency);
				DependencyNode_t9B8DCC43D012674005888A11FBEC5A86904B2E62* L_11 = V_4;
				Container_SetForLateBinding_mF903DACFDA65A879218CD336CC566A81DE048CF2(__this, L_11, NULL);
				// for (var i = vervice.Dependencies.Count - 1; i >= 0; i--)
				int32_t L_12 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
			}

IL_0043_1:
			{
				// for (var i = vervice.Dependencies.Count - 1; i >= 0; i--)
				int32_t L_13 = V_3;
				if ((((int32_t)L_13) >= ((int32_t)0)))
				{
					goto IL_0029_1;
				}
			}
			{
				// if (vervice.Dependencies.Count == 0)
				RuntimeObject* L_14 = V_2;
				NullCheck(L_14);
				List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* L_15;
				L_15 = InterfaceFuncInvoker0< List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* >::Invoke(3 /* System.Collections.Generic.List`1<DependencyNode> IVervice::get_Dependencies() */, IVervice_tDDB4F73057E6702D49B93436323A0B8E5FA24C94_il2cpp_TypeInfo_var, L_14);
				NullCheck(L_15);
				int32_t L_16;
				L_16 = List_1_get_Count_m3C98FBEA3D83B4079B0F8A4D14DC641056AB166C_inline(L_15, List_1_get_Count_m3C98FBEA3D83B4079B0F8A4D14DC641056AB166C_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_0060_1;
				}
			}
			{
				// _readyToInitServices.Add(vervice);
				List_1_t9576881927C14F0A8ABC20E7DD60FBE920096639* L_17 = __this->____readyToInitServices_9;
				RuntimeObject* L_18 = V_2;
				NullCheck(L_17);
				List_1_Add_mB04BCCDE748416EA43BA5F820BDD671B40860836_inline(L_17, L_18, List_1_Add_mB04BCCDE748416EA43BA5F820BDD671B40860836_RuntimeMethod_var);
			}

IL_0060_1:
			{
				// foreach (var typeServicePair in vervices)
				bool L_19;
				L_19 = Enumerator_MoveNext_m0F70D3576CBC03943498D17DA551BF1D6C15707F((&V_0), Enumerator_MoveNext_m0F70D3576CBC03943498D17DA551BF1D6C15707F_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0079;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.Void Container::SetForLateBinding(DependencyNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container_SetForLateBinding_mF903DACFDA65A879218CD336CC566A81DE048CF2 (Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* __this, DependencyNode_t9B8DCC43D012674005888A11FBEC5A86904B2E62* ___dependency0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC21AC22BD324FC96B5944AE994ADF0708DF056F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m5D79F02FA712BECCEEA6B785FC482DD162321705_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mDAA357932F8D17FFB8193DCB3FD4EF937240195C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m79C7722331FD0ADACE281C15C3B9EBF53F55088F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* V_0 = NULL;
	{
		// if (_objectGraph.TryGetValue(dependency.Type, out var fieldInfos))
		Dictionary_2_t398838F02E06F247F837F098A38A7E59F568D47D* L_0 = __this->____objectGraph_8;
		DependencyNode_t9B8DCC43D012674005888A11FBEC5A86904B2E62* L_1 = ___dependency0;
		NullCheck(L_1);
		Type_t* L_2 = L_1->___Type_0;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m5D79F02FA712BECCEEA6B785FC482DD162321705(L_0, L_2, (&V_0), Dictionary_2_TryGetValue_m5D79F02FA712BECCEEA6B785FC482DD162321705_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// fieldInfos.Add(dependency);
		List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* L_4 = V_0;
		DependencyNode_t9B8DCC43D012674005888A11FBEC5A86904B2E62* L_5 = ___dependency0;
		NullCheck(L_4);
		List_1_Add_mDAA357932F8D17FFB8193DCB3FD4EF937240195C_inline(L_4, L_5, List_1_Add_mDAA357932F8D17FFB8193DCB3FD4EF937240195C_RuntimeMethod_var);
		return;
	}

IL_001d:
	{
		// _objectGraph.Add(dependency.Type, new List<DependencyNode>() { dependency });
		Dictionary_2_t398838F02E06F247F837F098A38A7E59F568D47D* L_6 = __this->____objectGraph_8;
		DependencyNode_t9B8DCC43D012674005888A11FBEC5A86904B2E62* L_7 = ___dependency0;
		NullCheck(L_7);
		Type_t* L_8 = L_7->___Type_0;
		List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* L_9 = (List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0*)il2cpp_codegen_object_new(List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		List_1__ctor_m79C7722331FD0ADACE281C15C3B9EBF53F55088F(L_9, List_1__ctor_m79C7722331FD0ADACE281C15C3B9EBF53F55088F_RuntimeMethod_var);
		List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* L_10 = L_9;
		DependencyNode_t9B8DCC43D012674005888A11FBEC5A86904B2E62* L_11 = ___dependency0;
		NullCheck(L_10);
		List_1_Add_mDAA357932F8D17FFB8193DCB3FD4EF937240195C_inline(L_10, L_11, List_1_Add_mDAA357932F8D17FFB8193DCB3FD4EF937240195C_RuntimeMethod_var);
		NullCheck(L_6);
		Dictionary_2_Add_mC21AC22BD324FC96B5944AE994ADF0708DF056F7(L_6, L_8, L_10, Dictionary_2_Add_mC21AC22BD324FC96B5944AE994ADF0708DF056F7_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Container::CheckRegistrationFinish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container_CheckRegistrationFinish_m35C6D5DB808B3A0E7D02E0A9910363A6ABB4F967 (Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_m84934F32D3D4BCD461A09A1B2E4FA7C5B39109B7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_registeryWaitingServiceTypes.Count == 0)
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_0 = __this->____registeryWaitingServiceTypes_10;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = HashSet_1_get_Count_m84934F32D3D4BCD461A09A1B2E4FA7C5B39109B7_inline(L_0, HashSet_1_get_Count_m84934F32D3D4BCD461A09A1B2E4FA7C5B39109B7_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// BuildObjectGraph();
		Container_BuildObjectGraph_mF95A1D025B3C313797C80223ED0103257F77866F(__this, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Container::CheckInjectionFinish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container_CheckInjectionFinish_mC44B55320A2871A8A9833159A8A280CD4CC75D4F (Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mD1818E16E559CE55BBEF0C92F130FECEAF112C37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mD4D6329707A4295C17057969FA11FEEF4AEB82FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA00CC5AB932DFD2BC8DEFCC94CEAF6CE9E2001E);
		s_Il2CppMethodInitialized = true;
	}
	TestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334* V_0 = NULL;
	{
		// if (_objectGraph.Count == 0)
		Dictionary_2_t398838F02E06F247F837F098A38A7E59F568D47D* L_0 = __this->____objectGraph_8;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_mD1818E16E559CE55BBEF0C92F130FECEAF112C37(L_0, Dictionary_2_get_Count_mD1818E16E559CE55BBEF0C92F130FECEAF112C37_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_005c;
		}
	}
	{
		// Debug.Log("All services are ready");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralDA00CC5AB932DFD2BC8DEFCC94CEAF6CE9E2001E, NULL);
		// AllReady = true;
		__this->___AllReady_12 = (bool)1;
		// var testService = (TestService)_readyServices[typeof(TestService)];
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_2 = __this->____readyServices_5;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (TestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		NullCheck(L_2);
		RuntimeObject* L_5;
		L_5 = Dictionary_2_get_Item_mD4D6329707A4295C17057969FA11FEEF4AEB82FA(L_2, L_4, Dictionary_2_get_Item_mD4D6329707A4295C17057969FA11FEEF4AEB82FA_RuntimeMethod_var);
		V_0 = ((TestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334*)CastclassClass((RuntimeObject*)L_5, TestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334_il2cpp_TypeInfo_var));
		// _delegate(testService, 2);
		Action_2_t7698FDBD96AC02E7CB9ABEB25A1FDB48CA188E24* L_6 = __this->____delegate_15;
		TestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334* L_7 = V_0;
		NullCheck(L_6);
		Action_2_Invoke_m8758198DBF07435BEECC55C9BF18BFEBE7051CAE_inline(L_6, L_7, 2, NULL);
		// testService.TextMesh.text = testService.Value.ToString();
		TestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334* L_8 = V_0;
		NullCheck(L_8);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = L_8->___TextMesh_7;
		TestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334* L_10 = V_0;
		NullCheck(L_10);
		int32_t* L_11 = (&L_10->___Value_6);
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_11, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_12);
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void Container::Resolve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container_Resolve_m5DE19141530B22D47633B9FF983670E3FB3C0120 (Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m3A43E866B1140357104C49F863CC2A61862781DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA044033B8A5913ECCDFE4652F077A1825573D325_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m334DB633FF9C6901D091C12EBA8517ADA9644A8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9572D6CDB5A50A40CF7FF18F977AA4A250D202BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVervice_tDDB4F73057E6702D49B93436323A0B8E5FA24C94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mE098CB4DFC36B3802E3C84ED81B9AF88B92D3B94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC8C8D5218D85BBFD21620926D2065DD8543222BF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t96327DFA982D2F0604E7D9721E3663A9F50F48D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var service in _readyToInitServices)
		List_1_t9576881927C14F0A8ABC20E7DD60FBE920096639* L_0 = __this->____readyToInitServices_9;
		NullCheck(L_0);
		Enumerator_t96327DFA982D2F0604E7D9721E3663A9F50F48D4 L_1;
		L_1 = List_1_GetEnumerator_mC8C8D5218D85BBFD21620926D2065DD8543222BF(L_0, List_1_GetEnumerator_mC8C8D5218D85BBFD21620926D2065DD8543222BF_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA044033B8A5913ECCDFE4652F077A1825573D325((&V_0), Enumerator_Dispose_mA044033B8A5913ECCDFE4652F077A1825573D325_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000e_1:
			{
				// foreach (var service in _readyToInitServices)
				RuntimeObject* L_2;
				L_2 = Enumerator_get_Current_m9572D6CDB5A50A40CF7FF18F977AA4A250D202BB_inline((&V_0), Enumerator_get_Current_m9572D6CDB5A50A40CF7FF18F977AA4A250D202BB_RuntimeMethod_var);
				// service.Begin();
				NullCheck(L_2);
				InterfaceActionInvoker0::Invoke(0 /* System.Void IVervice::Begin() */, IVervice_tDDB4F73057E6702D49B93436323A0B8E5FA24C94_il2cpp_TypeInfo_var, L_2);
			}

IL_001a_1:
			{
				// foreach (var service in _readyToInitServices)
				bool L_3;
				L_3 = Enumerator_MoveNext_m334DB633FF9C6901D091C12EBA8517ADA9644A8C((&V_0), Enumerator_MoveNext_m334DB633FF9C6901D091C12EBA8517ADA9644A8C_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// _readyToInitServices.Clear();
		List_1_t9576881927C14F0A8ABC20E7DD60FBE920096639* L_4 = __this->____readyToInitServices_9;
		NullCheck(L_4);
		List_1_Clear_mE098CB4DFC36B3802E3C84ED81B9AF88B92D3B94_inline(L_4, List_1_Clear_mE098CB4DFC36B3802E3C84ED81B9AF88B92D3B94_RuntimeMethod_var);
		// _pocoServices.Clear();
		Dictionary_2_t9CC1B5AC2436F143FC60952FA62246708BB0B97A* L_5 = __this->____pocoServices_6;
		NullCheck(L_5);
		Dictionary_2_Clear_m3A43E866B1140357104C49F863CC2A61862781DC(L_5, Dictionary_2_Clear_m3A43E866B1140357104C49F863CC2A61862781DC_RuntimeMethod_var);
		// _monoServices.Clear();
		Dictionary_2_t9CC1B5AC2436F143FC60952FA62246708BB0B97A* L_6 = __this->____monoServices_7;
		NullCheck(L_6);
		Dictionary_2_Clear_m3A43E866B1140357104C49F863CC2A61862781DC(L_6, Dictionary_2_Clear_m3A43E866B1140357104C49F863CC2A61862781DC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Container::Resolve(System.Object,System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.FieldInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container_Resolve_mA812BB9EF7F17176F3A65DB30C9F86AA9F406DC4 (Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* __this, RuntimeObject* ___obj0, Dictionary_2_tA42794065062A1F618BC324141E216CEDA748815* ___fields1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m5EF85F1F39BC68D48BD5234A7960F3ABC62FDF31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mD4D6329707A4295C17057969FA11FEEF4AEB82FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m5BE0DB621FE38299535388D5706AFAA41BDD9CAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE0180D08E2BD3A0FC296E258CD90752FE03EA394_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5DC2C0C199FC4D0C486633A0DF88BDA42271664C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mF416E075781721E04FC2B7DD1074D130F3A112D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m444B97383AD199746EB73DB76ECC10D39129B4B1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t744FFD1CDD2295419F232ACCF870382D4F6799D7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t69B7D0132BAC70C788A2CDC3B6BF6309824784ED V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// foreach (var service in fields)
		Dictionary_2_tA42794065062A1F618BC324141E216CEDA748815* L_0 = ___fields1;
		NullCheck(L_0);
		Enumerator_t744FFD1CDD2295419F232ACCF870382D4F6799D7 L_1;
		L_1 = Dictionary_2_GetEnumerator_m5EF85F1F39BC68D48BD5234A7960F3ABC62FDF31(L_0, Dictionary_2_GetEnumerator_m5EF85F1F39BC68D48BD5234A7960F3ABC62FDF31_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m5BE0DB621FE38299535388D5706AFAA41BDD9CAA((&V_0), Enumerator_Dispose_m5BE0DB621FE38299535388D5706AFAA41BDD9CAA_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0030_1;
			}

IL_0009_1:
			{
				// foreach (var service in fields)
				KeyValuePair_2_t69B7D0132BAC70C788A2CDC3B6BF6309824784ED L_2;
				L_2 = Enumerator_get_Current_m5DC2C0C199FC4D0C486633A0DF88BDA42271664C_inline((&V_0), Enumerator_get_Current_m5DC2C0C199FC4D0C486633A0DF88BDA42271664C_RuntimeMethod_var);
				V_1 = L_2;
				// service.Value.SetValue(obj, _readyServices[service.Key]);
				FieldInfo_t* L_3;
				L_3 = KeyValuePair_2_get_Value_m444B97383AD199746EB73DB76ECC10D39129B4B1_inline((&V_1), KeyValuePair_2_get_Value_m444B97383AD199746EB73DB76ECC10D39129B4B1_RuntimeMethod_var);
				RuntimeObject* L_4 = ___obj0;
				Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_5 = __this->____readyServices_5;
				Type_t* L_6;
				L_6 = KeyValuePair_2_get_Key_mF416E075781721E04FC2B7DD1074D130F3A112D9_inline((&V_1), KeyValuePair_2_get_Key_mF416E075781721E04FC2B7DD1074D130F3A112D9_RuntimeMethod_var);
				NullCheck(L_5);
				RuntimeObject* L_7;
				L_7 = Dictionary_2_get_Item_mD4D6329707A4295C17057969FA11FEEF4AEB82FA(L_5, L_6, Dictionary_2_get_Item_mD4D6329707A4295C17057969FA11FEEF4AEB82FA_RuntimeMethod_var);
				NullCheck(L_3);
				FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_3, L_4, L_7, NULL);
			}

IL_0030_1:
			{
				// foreach (var service in fields)
				bool L_8;
				L_8 = Enumerator_MoveNext_mE0180D08E2BD3A0FC296E258CD90752FE03EA394((&V_0), Enumerator_MoveNext_mE0180D08E2BD3A0FC296E258CD90752FE03EA394_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0049;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void Container::TestResolve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container_TestResolve_m41E53A6A2703AE3F0CCC8D960013EF3DE3793C2B (Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* __this, const RuntimeMethod* method) 
{
	{
		// _methodInfo.Invoke(Instance.TestMono, _emptyObjArray);
		MethodInfo_t* L_0 = __this->____methodInfo_13;
		Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* L_1;
		L_1 = Container_get_Instance_m844AAC5E1E36187B2111CB2E37F8D65C10AA6531_inline(NULL);
		NullCheck(L_1);
		TestMono_tF243BB3690D70325849699B896D3E50B0094B670* L_2 = L_1->___TestMono_11;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____emptyObjArray_14;
		NullCheck(L_0);
		RuntimeObject* L_4;
		L_4 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_0, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Container::DumpServiceTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container_DumpServiceTypes_m949EA3336CAC580DB7BF79E57F6A34F1459BDC35 (Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mEACC35835C05B20642437541D2844FDA88378AAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA452FB910DA7DD11178A7DF048CD2F9F4255F382_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m686E9F4F715B3E1E3530A9516FB350F32726418B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD550F51A6EADAA1F4604F3F610F0C7780DC8D2E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m94FB4DC031581990488B18A4B232F1E0661E51E6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// foreach (var service in _readyServices)
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_0 = __this->____readyServices_5;
		NullCheck(L_0);
		Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1 L_1;
		L_1 = Dictionary_2_GetEnumerator_mEACC35835C05B20642437541D2844FDA88378AAB(L_0, Dictionary_2_GetEnumerator_mEACC35835C05B20642437541D2844FDA88378AAB_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA452FB910DA7DD11178A7DF048CD2F9F4255F382((&V_0), Enumerator_Dispose_mA452FB910DA7DD11178A7DF048CD2F9F4255F382_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0022_1;
			}

IL_000e_1:
			{
				// foreach (var service in _readyServices)
				KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA L_2;
				L_2 = Enumerator_get_Current_mD550F51A6EADAA1F4604F3F610F0C7780DC8D2E8_inline((&V_0), Enumerator_get_Current_mD550F51A6EADAA1F4604F3F610F0C7780DC8D2E8_RuntimeMethod_var);
				V_1 = L_2;
				// Debug.Log(service.Key);
				Type_t* L_3;
				L_3 = KeyValuePair_2_get_Key_m94FB4DC031581990488B18A4B232F1E0661E51E6_inline((&V_1), KeyValuePair_2_get_Key_m94FB4DC031581990488B18A4B232F1E0661E51E6_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
			}

IL_0022_1:
			{
				// foreach (var service in _readyServices)
				bool L_4;
				L_4 = Enumerator_MoveNext_m686E9F4F715B3E1E3530A9516FB350F32726418B((&V_0), Enumerator_MoveNext_m686E9F4F715B3E1E3530A9516FB350F32726418B_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_003b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void Container::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container__ctor_mF708AC5E300E72702D92F892DFB12027A314709C (Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m0EA4BCAF1B1B73C0A14F9AB34EB354A4B99D56F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m84DCABCA6F8E90C1A9C54403427A93C6CA760A1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m99C192183AF9336890F815A2EB9C163DBBCF617A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t398838F02E06F247F837F098A38A7E59F568D47D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9CC1B5AC2436F143FC60952FA62246708BB0B97A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m85B926DC1FC04C1704A3E44B60FE07F69BBA9D3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9576881927C14F0A8ABC20E7DD60FBE920096639_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<Type, object> _readyServices = new();
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_0 = (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*)il2cpp_codegen_object_new(Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m84DCABCA6F8E90C1A9C54403427A93C6CA760A1E(L_0, Dictionary_2__ctor_m84DCABCA6F8E90C1A9C54403427A93C6CA760A1E_RuntimeMethod_var);
		__this->____readyServices_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____readyServices_5), (void*)L_0);
		// private Dictionary<Type, IVervice> _pocoServices = new();
		Dictionary_2_t9CC1B5AC2436F143FC60952FA62246708BB0B97A* L_1 = (Dictionary_2_t9CC1B5AC2436F143FC60952FA62246708BB0B97A*)il2cpp_codegen_object_new(Dictionary_2_t9CC1B5AC2436F143FC60952FA62246708BB0B97A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m99C192183AF9336890F815A2EB9C163DBBCF617A(L_1, Dictionary_2__ctor_m99C192183AF9336890F815A2EB9C163DBBCF617A_RuntimeMethod_var);
		__this->____pocoServices_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pocoServices_6), (void*)L_1);
		// private Dictionary<Type, IVervice> _monoServices = new();
		Dictionary_2_t9CC1B5AC2436F143FC60952FA62246708BB0B97A* L_2 = (Dictionary_2_t9CC1B5AC2436F143FC60952FA62246708BB0B97A*)il2cpp_codegen_object_new(Dictionary_2_t9CC1B5AC2436F143FC60952FA62246708BB0B97A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m99C192183AF9336890F815A2EB9C163DBBCF617A(L_2, Dictionary_2__ctor_m99C192183AF9336890F815A2EB9C163DBBCF617A_RuntimeMethod_var);
		__this->____monoServices_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____monoServices_7), (void*)L_2);
		// private Dictionary<Type, List<DependencyNode>> _objectGraph = new();
		Dictionary_2_t398838F02E06F247F837F098A38A7E59F568D47D* L_3 = (Dictionary_2_t398838F02E06F247F837F098A38A7E59F568D47D*)il2cpp_codegen_object_new(Dictionary_2_t398838F02E06F247F837F098A38A7E59F568D47D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_m0EA4BCAF1B1B73C0A14F9AB34EB354A4B99D56F0(L_3, Dictionary_2__ctor_m0EA4BCAF1B1B73C0A14F9AB34EB354A4B99D56F0_RuntimeMethod_var);
		__this->____objectGraph_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____objectGraph_8), (void*)L_3);
		// private List<IVervice> _readyToInitServices = new();
		List_1_t9576881927C14F0A8ABC20E7DD60FBE920096639* L_4 = (List_1_t9576881927C14F0A8ABC20E7DD60FBE920096639*)il2cpp_codegen_object_new(List_1_t9576881927C14F0A8ABC20E7DD60FBE920096639_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m85B926DC1FC04C1704A3E44B60FE07F69BBA9D3D(L_4, List_1__ctor_m85B926DC1FC04C1704A3E44B60FE07F69BBA9D3D_RuntimeMethod_var);
		__this->____readyToInitServices_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____readyToInitServices_9), (void*)L_4);
		// private HashSet<Type> _registeryWaitingServiceTypes = new();
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_5 = (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*)il2cpp_codegen_object_new(HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC(L_5, HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC_RuntimeMethod_var);
		__this->____registeryWaitingServiceTypes_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____registeryWaitingServiceTypes_10), (void*)L_5);
		// private object[] _emptyObjArray = new object[] { };
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->____emptyObjArray_14 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____emptyObjArray_14), (void*)L_6);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void DependencyNode::.ctor(System.Type,System.Reflection.FieldInfo,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyNode__ctor_m94F05ABBA7F4857739AF04E84D4532D07BA51128 (DependencyNode_t9B8DCC43D012674005888A11FBEC5A86904B2E62* __this, Type_t* ___type0, FieldInfo_t* ___fieldInfo1, RuntimeObject* ___requirer2, const RuntimeMethod* method) 
{
	{
		// public DependencyNode(Type type, FieldInfo fieldInfo, object requirer)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Type = type;
		Type_t* L_0 = ___type0;
		__this->___Type_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Type_0), (void*)L_0);
		// FieldInfo = fieldInfo;
		FieldInfo_t* L_1 = ___fieldInfo1;
		__this->___FieldInfo_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FieldInfo_1), (void*)L_1);
		// Requirer = requirer;
		RuntimeObject* L_2 = ___requirer2;
		__this->___Requirer_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Requirer_2), (void*)L_2);
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
// System.Collections.Generic.List`1<DependencyNode> MonoVervice::get_Dependencies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* MonoVervice_get_Dependencies_m590972D5DB3F3460CFA7CB871E718D51DEC43D84 (MonoVervice_tF220D43A7C8A61DCA2E5184E7DBAC10A5304350B* __this, const RuntimeMethod* method) 
{
	{
		// public List<DependencyNode> Dependencies { get; set; }
		List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* L_0 = __this->___U3CDependenciesU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void MonoVervice::set_Dependencies(System.Collections.Generic.List`1<DependencyNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoVervice_set_Dependencies_mC343577EA58A21B75977631CA3E4624F570F2781 (MonoVervice_tF220D43A7C8A61DCA2E5184E7DBAC10A5304350B* __this, List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<DependencyNode> Dependencies { get; set; }
		List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* L_0 = ___value0;
		__this->___U3CDependenciesU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDependenciesU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Boolean MonoVervice::get_Resolved()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonoVervice_get_Resolved_m42238FD4BD2A807681C9E6E59EA1ECE3B0153C6D (MonoVervice_tF220D43A7C8A61DCA2E5184E7DBAC10A5304350B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3C98FBEA3D83B4079B0F8A4D14DC641056AB166C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool Resolved => Dependencies.Count == 0;
		List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* L_0;
		L_0 = MonoVervice_get_Dependencies_m590972D5DB3F3460CFA7CB871E718D51DEC43D84_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m3C98FBEA3D83B4079B0F8A4D14DC641056AB166C_inline(L_0, List_1_get_Count_m3C98FBEA3D83B4079B0F8A4D14DC641056AB166C_RuntimeMethod_var);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void MonoVervice::OnTypeResolved(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoVervice_OnTypeResolved_mE6D157CBAF78761774EC3542420B6F332D4C3EC3 (MonoVervice_tF220D43A7C8A61DCA2E5184E7DBAC10A5304350B* __this, Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mD8E40C194D0E4BA50B5CFFF23C9E4BB8B057942E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3C98FBEA3D83B4079B0F8A4D14DC641056AB166C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0E3E58710802448C7EF22FB134E38A897FD1870E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (var i = 0; i < Dependencies.Count; i++)
		V_0 = 0;
		goto IL_002e;
	}

IL_0004:
	{
		// if (Dependencies[i].Type == type)
		List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* L_0;
		L_0 = MonoVervice_get_Dependencies_m590972D5DB3F3460CFA7CB871E718D51DEC43D84_inline(__this, NULL);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		DependencyNode_t9B8DCC43D012674005888A11FBEC5A86904B2E62* L_2;
		L_2 = List_1_get_Item_m0E3E58710802448C7EF22FB134E38A897FD1870E(L_0, L_1, List_1_get_Item_m0E3E58710802448C7EF22FB134E38A897FD1870E_RuntimeMethod_var);
		NullCheck(L_2);
		Type_t* L_3 = L_2->___Type_0;
		Type_t* L_4 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		// Dependencies.RemoveAt(i);
		List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* L_6;
		L_6 = MonoVervice_get_Dependencies_m590972D5DB3F3460CFA7CB871E718D51DEC43D84_inline(__this, NULL);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		List_1_RemoveAt_mD8E40C194D0E4BA50B5CFFF23C9E4BB8B057942E(L_6, L_7, List_1_RemoveAt_mD8E40C194D0E4BA50B5CFFF23C9E4BB8B057942E_RuntimeMethod_var);
		// return;
		return;
	}

IL_002a:
	{
		// for (var i = 0; i < Dependencies.Count; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002e:
	{
		// for (var i = 0; i < Dependencies.Count; i++)
		int32_t L_9 = V_0;
		List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* L_10;
		L_10 = MonoVervice_get_Dependencies_m590972D5DB3F3460CFA7CB871E718D51DEC43D84_inline(__this, NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m3C98FBEA3D83B4079B0F8A4D14DC641056AB166C_inline(L_10, List_1_get_Count_m3C98FBEA3D83B4079B0F8A4D14DC641056AB166C_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MonoVervice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoVervice__ctor_mEC010B5263AE7ADB69893C59D08CF1A936FF7C98 (MonoVervice_tF220D43A7C8A61DCA2E5184E7DBAC10A5304350B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Collections.Generic.List`1<DependencyNode> Vervice::get_Dependencies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* Vervice_get_Dependencies_mD4A3C7C892E634EE603FE8469C8943821DD995C4 (Vervice_t37BBCA9D632DF7EC3C536CFD85A6E249FA5B4447* __this, const RuntimeMethod* method) 
{
	{
		// public List<DependencyNode> Dependencies { get;  set; }
		List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* L_0 = __this->___U3CDependenciesU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Vervice::set_Dependencies(System.Collections.Generic.List`1<DependencyNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vervice_set_Dependencies_m1AE8D68FA3F11A08443066756B734DF19B8DD652 (Vervice_t37BBCA9D632DF7EC3C536CFD85A6E249FA5B4447* __this, List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<DependencyNode> Dependencies { get;  set; }
		List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* L_0 = ___value0;
		__this->___U3CDependenciesU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDependenciesU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Boolean Vervice::get_Resolved()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vervice_get_Resolved_m29456C11459A019796BE3EB7B2403389D383E92B (Vervice_t37BBCA9D632DF7EC3C536CFD85A6E249FA5B4447* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3C98FBEA3D83B4079B0F8A4D14DC641056AB166C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool Resolved => Dependencies.Count == 0;
		List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* L_0;
		L_0 = Vervice_get_Dependencies_mD4A3C7C892E634EE603FE8469C8943821DD995C4_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m3C98FBEA3D83B4079B0F8A4D14DC641056AB166C_inline(L_0, List_1_get_Count_m3C98FBEA3D83B4079B0F8A4D14DC641056AB166C_RuntimeMethod_var);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Vervice::OnTypeResolved(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vervice_OnTypeResolved_m3DE144CB365212DC31C253D76CD163C7202FC0D2 (Vervice_t37BBCA9D632DF7EC3C536CFD85A6E249FA5B4447* __this, Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mD8E40C194D0E4BA50B5CFFF23C9E4BB8B057942E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3C98FBEA3D83B4079B0F8A4D14DC641056AB166C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0E3E58710802448C7EF22FB134E38A897FD1870E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (var i = 0; i < Dependencies.Count; i++)
		V_0 = 0;
		goto IL_002e;
	}

IL_0004:
	{
		// if (Dependencies[i].Type == type)
		List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* L_0;
		L_0 = Vervice_get_Dependencies_mD4A3C7C892E634EE603FE8469C8943821DD995C4_inline(__this, NULL);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		DependencyNode_t9B8DCC43D012674005888A11FBEC5A86904B2E62* L_2;
		L_2 = List_1_get_Item_m0E3E58710802448C7EF22FB134E38A897FD1870E(L_0, L_1, List_1_get_Item_m0E3E58710802448C7EF22FB134E38A897FD1870E_RuntimeMethod_var);
		NullCheck(L_2);
		Type_t* L_3 = L_2->___Type_0;
		Type_t* L_4 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		// Dependencies.RemoveAt(i);
		List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* L_6;
		L_6 = Vervice_get_Dependencies_mD4A3C7C892E634EE603FE8469C8943821DD995C4_inline(__this, NULL);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		List_1_RemoveAt_mD8E40C194D0E4BA50B5CFFF23C9E4BB8B057942E(L_6, L_7, List_1_RemoveAt_mD8E40C194D0E4BA50B5CFFF23C9E4BB8B057942E_RuntimeMethod_var);
		// return;
		return;
	}

IL_002a:
	{
		// for (var i = 0; i < Dependencies.Count; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002e:
	{
		// for (var i = 0; i < Dependencies.Count; i++)
		int32_t L_9 = V_0;
		List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* L_10;
		L_10 = Vervice_get_Dependencies_mD4A3C7C892E634EE603FE8469C8943821DD995C4_inline(__this, NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m3C98FBEA3D83B4079B0F8A4D14DC641056AB166C_inline(L_10, List_1_get_Count_m3C98FBEA3D83B4079B0F8A4D14DC641056AB166C_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Vervice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vervice__ctor_m91AA342525E638852750919B689B6F5C5B6AD758 (Vervice_t37BBCA9D632DF7EC3C536CFD85A6E249FA5B4447* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void FooMono::TestFoo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FooMono_TestFoo_mAC5BDC6161B3AF0CA42AE656ACBF0F8940A2B4A3 (FooMono_tA3240818A8285C012D7FBA6A8CA05681CE7BD263* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C922CA1F64A471A627F33EEA615A59B789DA2DD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("I am FooMono");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral7C922CA1F64A471A627F33EEA615A59B789DA2DD, NULL);
		// }
		return;
	}
}
// System.Void FooMono::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FooMono__ctor_m208B3CE80328F4FF3D1163F9EE631E0B22A30F3F (FooMono_tA3240818A8285C012D7FBA6A8CA05681CE7BD263* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VonoBehaviour_1__ctor_mC86852F454761CCED0B2F899D684F65970190F0F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VonoBehaviour_1__ctor_mC86852F454761CCED0B2F899D684F65970190F0F(__this, VonoBehaviour_1__ctor_mC86852F454761CCED0B2F899D684F65970190F0F_RuntimeMethod_var);
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
// System.Void TestMono::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestMono_Start_m90FC4686E14D11293136BC928CB48489C625187D (TestMono_tF243BB3690D70325849699B896D3E50B0094B670* __this, const RuntimeMethod* method) 
{
	{
		// Container.Instance.TestMono = this;
		Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* L_0;
		L_0 = Container_get_Instance_m844AAC5E1E36187B2111CB2E37F8D65C10AA6531_inline(NULL);
		NullCheck(L_0);
		L_0->___TestMono_11 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___TestMono_11), (void*)__this);
		// }
		return;
	}
}
// System.Void TestMono::ResolveWithReflection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestMono_ResolveWithReflection_m43C218000116590864C063BDEF599E0C996122CF (TestMono_tF243BB3690D70325849699B896D3E50B0094B670* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VonoBehaviour_1_get_Services_mFC2967723B5013D56ECD08D4220EF37AE1B145D6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Container.Instance.Resolve(this, Services);
		Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* L_0;
		L_0 = Container_get_Instance_m844AAC5E1E36187B2111CB2E37F8D65C10AA6531_inline(NULL);
		Dictionary_2_tA42794065062A1F618BC324141E216CEDA748815* L_1;
		L_1 = VonoBehaviour_1_get_Services_mFC2967723B5013D56ECD08D4220EF37AE1B145D6_inline(VonoBehaviour_1_get_Services_mFC2967723B5013D56ECD08D4220EF37AE1B145D6_RuntimeMethod_var);
		NullCheck(L_0);
		Container_Resolve_mA812BB9EF7F17176F3A65DB30C9F86AA9F406DC4(L_0, __this, L_1, NULL);
		// }
		return;
	}
}
// System.Void TestMono::ResolveWithDirectAssignment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestMono_ResolveWithDirectAssignment_mC149F02BBACC7AC3C57E95B285A0FF27AFC7B344 (TestMono_tF243BB3690D70325849699B896D3E50B0094B670* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Container_Resolve_TisFooService_t9BBB99CBC21C19D86DC6F0145CF057991342DBD3_mA4C790D40FC0F72C802F53E8B68F434A5318B75F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Container_Resolve_TisTestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334_m64F26B1288847D6F283B59D858469A847A680C56_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Container.Instance.Resolve(ref _testService);
		Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* L_0;
		L_0 = Container_get_Instance_m844AAC5E1E36187B2111CB2E37F8D65C10AA6531_inline(NULL);
		TestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334** L_1 = (&__this->____testService_5);
		NullCheck(L_0);
		Container_Resolve_TisTestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334_m64F26B1288847D6F283B59D858469A847A680C56(L_0, L_1, Container_Resolve_TisTestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334_m64F26B1288847D6F283B59D858469A847A680C56_RuntimeMethod_var);
		// Container.Instance.Resolve(ref _fooService);
		Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* L_2;
		L_2 = Container_get_Instance_m844AAC5E1E36187B2111CB2E37F8D65C10AA6531_inline(NULL);
		FooService_t9BBB99CBC21C19D86DC6F0145CF057991342DBD3** L_3 = (&__this->____fooService_6);
		NullCheck(L_2);
		Container_Resolve_TisFooService_t9BBB99CBC21C19D86DC6F0145CF057991342DBD3_mA4C790D40FC0F72C802F53E8B68F434A5318B75F(L_2, L_3, Container_Resolve_TisFooService_t9BBB99CBC21C19D86DC6F0145CF057991342DBD3_mA4C790D40FC0F72C802F53E8B68F434A5318B75F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TestMono::ResolveWithMethodInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestMono_ResolveWithMethodInfo_mCC5E33EB110C03D76233796618E7F7758D043252 (TestMono_tF243BB3690D70325849699B896D3E50B0094B670* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Container_Resolve_TisFooService_t9BBB99CBC21C19D86DC6F0145CF057991342DBD3_mA4C790D40FC0F72C802F53E8B68F434A5318B75F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Container_Resolve_TisTestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334_m64F26B1288847D6F283B59D858469A847A680C56_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Container.Instance.Resolve(ref _testService);
		Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* L_0;
		L_0 = Container_get_Instance_m844AAC5E1E36187B2111CB2E37F8D65C10AA6531_inline(NULL);
		TestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334** L_1 = (&__this->____testService_5);
		NullCheck(L_0);
		Container_Resolve_TisTestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334_m64F26B1288847D6F283B59D858469A847A680C56(L_0, L_1, Container_Resolve_TisTestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334_m64F26B1288847D6F283B59D858469A847A680C56_RuntimeMethod_var);
		// Container.Instance.Resolve(ref _fooService);
		Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* L_2;
		L_2 = Container_get_Instance_m844AAC5E1E36187B2111CB2E37F8D65C10AA6531_inline(NULL);
		FooService_t9BBB99CBC21C19D86DC6F0145CF057991342DBD3** L_3 = (&__this->____fooService_6);
		NullCheck(L_2);
		Container_Resolve_TisFooService_t9BBB99CBC21C19D86DC6F0145CF057991342DBD3_mA4C790D40FC0F72C802F53E8B68F434A5318B75F(L_2, L_3, Container_Resolve_TisFooService_t9BBB99CBC21C19D86DC6F0145CF057991342DBD3_mA4C790D40FC0F72C802F53E8B68F434A5318B75F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TestMono::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestMono__ctor_m61E2D9484FD666DEF0BA26BDDB3E255B4AB86A45 (TestMono_tF243BB3690D70325849699B896D3E50B0094B670* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VonoBehaviour_1__ctor_mB7E1FA0A91B5F085EFF7B1357CBF7D3FE68035FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VonoBehaviour_1__ctor_mB7E1FA0A91B5F085EFF7B1357CBF7D3FE68035FC(__this, VonoBehaviour_1__ctor_mB7E1FA0A91B5F085EFF7B1357CBF7D3FE68035FC_RuntimeMethod_var);
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
// System.Void BarPOCOService::Begin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BarPOCOService_Begin_m708D558EF393573476FC4A82A9C04B4B02DB8722 (BarPOCOService_t427590A744DF69027D6D94D8AA794244D1862AE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vervice_1_SetReady_m059E5A2F6D080BB028C2CDF99CE39500995DE423_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetReady();
		Vervice_1_SetReady_m059E5A2F6D080BB028C2CDF99CE39500995DE423(__this, Vervice_1_SetReady_m059E5A2F6D080BB028C2CDF99CE39500995DE423_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BarPOCOService::Test()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BarPOCOService_Test_m7152D9087322FF3DCF662716B983E6DC17371D74 (BarPOCOService_t427590A744DF69027D6D94D8AA794244D1862AE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFC479C5D71B2F56F8CD209F77503EBDF44EE919);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("EYO BAR POCO");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralAFC479C5D71B2F56F8CD209F77503EBDF44EE919, NULL);
		// }
		return;
	}
}
// System.Void BarPOCOService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BarPOCOService__ctor_m26BC2F57BB3FA87626EEA020008A81E6C53BEC81 (BarPOCOService_t427590A744DF69027D6D94D8AA794244D1862AE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vervice_1__ctor_mFC812F54801461B87C34360FFFC37ABFD7902A6C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vervice_1__ctor_mFC812F54801461B87C34360FFFC37ABFD7902A6C(__this, Vervice_1__ctor_mFC812F54801461B87C34360FFFC37ABFD7902A6C_RuntimeMethod_var);
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
// System.Void FooService::Begin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FooService_Begin_mA1C71440114FF0449EB0C0BC0233D03B781675D8 (FooService_t9BBB99CBC21C19D86DC6F0145CF057991342DBD3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoVervice_1_SetReady_mAEF0438FDB806839C6FB65EA94A5B48373F00C6B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetReady();
		MonoVervice_1_SetReady_mAEF0438FDB806839C6FB65EA94A5B48373F00C6B(__this, MonoVervice_1_SetReady_mAEF0438FDB806839C6FB65EA94A5B48373F00C6B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void FooService::Test()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FooService_Test_mE45FEABEC3684071CFDBFE86E67A28D23DE8E9FE (FooService_t9BBB99CBC21C19D86DC6F0145CF057991342DBD3* __this, const RuntimeMethod* method) 
{
	{
		// _barPocoService.Test();
		BarPOCOService_t427590A744DF69027D6D94D8AA794244D1862AE5* L_0 = __this->____barPocoService_6;
		NullCheck(L_0);
		BarPOCOService_Test_m7152D9087322FF3DCF662716B983E6DC17371D74(L_0, NULL);
		// }
		return;
	}
}
// System.Void FooService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FooService__ctor_m54A7DDAEF871AC750FBAEB46FA99A8563631112D (FooService_t9BBB99CBC21C19D86DC6F0145CF057991342DBD3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoVervice_1__ctor_m86A221BE0A47EE9BCE6F00552B8480179EB0FECC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoVervice_1__ctor_m86A221BE0A47EE9BCE6F00552B8480179EB0FECC(__this, MonoVervice_1__ctor_m86A221BE0A47EE9BCE6F00552B8480179EB0FECC_RuntimeMethod_var);
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
// System.Void POCOService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void POCOService__ctor_mC7A386EFFAF4DF68B673F9243AB6A7B3890061F3 (POCOService_t66D32826576BC5D0341692F3ABFE8AE69058013B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vervice_1__ctor_m1DC854F24DF24619D79BB63C7C873B880BE12C0D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public POCOService()
		Vervice_1__ctor_m1DC854F24DF24619D79BB63C7C873B880BE12C0D(__this, Vervice_1__ctor_m1DC854F24DF24619D79BB63C7C873B880BE12C0D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void POCOService::Begin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void POCOService_Begin_m099CFE89382CEFAC28AC72A04A43CEA460206E87 (POCOService_t66D32826576BC5D0341692F3ABFE8AE69058013B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vervice_1_SetReady_mB39C2E71B7CF252B0E97959A8B705864DEA7996D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetReady();
		Vervice_1_SetReady_mB39C2E71B7CF252B0E97959A8B705864DEA7996D(__this, Vervice_1_SetReady_mB39C2E71B7CF252B0E97959A8B705864DEA7996D_RuntimeMethod_var);
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
// System.Void TestService::Begin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestService_Begin_m3DC9A518C28D44C42BD1ECEC87E2D5BE593DB316 (TestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CBeginU3Ed__3_tFD4B4484F4123A67A1D5D47760BAAD27E4D40ED0_m7D5418FE8F0D3E3A9AABDAB1D8080D0BC8102C4F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CBeginU3Ed__3_tFD4B4484F4123A67A1D5D47760BAAD27E4D40ED0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CBeginU3Ed__3_tFD4B4484F4123A67A1D5D47760BAAD27E4D40ED0_m7D5418FE8F0D3E3A9AABDAB1D8080D0BC8102C4F(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CBeginU3Ed__3_tFD4B4484F4123A67A1D5D47760BAAD27E4D40ED0_m7D5418FE8F0D3E3A9AABDAB1D8080D0BC8102C4F_RuntimeMethod_var);
		return;
	}
}
// System.Void TestService::Test()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestService_Test_mBC89A6F8D407A9850D2685FD02A57E266F612582 (TestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334* __this, const RuntimeMethod* method) 
{
	{
		// _barPocoService.Test();
		BarPOCOService_t427590A744DF69027D6D94D8AA794244D1862AE5* L_0 = __this->____barPocoService_5;
		NullCheck(L_0);
		BarPOCOService_Test_m7152D9087322FF3DCF662716B983E6DC17371D74(L_0, NULL);
		// }
		return;
	}
}
// System.Void TestService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestService__ctor_m4A7F79692E78655EA0C95EADDF3589C953469832 (TestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoVervice_1__ctor_mA5E09AAFEF5E153507C8DA8DCD713BAC811E48D6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoVervice_1__ctor_mA5E09AAFEF5E153507C8DA8DCD713BAC811E48D6(__this, MonoVervice_1__ctor_mA5E09AAFEF5E153507C8DA8DCD713BAC811E48D6_RuntimeMethod_var);
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
// System.Void TestService/<Begin>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBeginU3Ed__3_MoveNext_m53A025E79BE3D3191A30EC8BB7B5C9298CAC96AD (U3CBeginU3Ed__3_tFD4B4484F4123A67A1D5D47760BAAD27E4D40ED0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CBeginU3Ed__3_tFD4B4484F4123A67A1D5D47760BAAD27E4D40ED0_m285B74A2E96217A00C95BFB1C6848D1FAB57E5BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoVervice_1_SetReady_m12F517E77765EAEEF3DF95A18C713CF1031D3C04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0060_1;
			}
		}
		{
			// TextMesh.text = Value.ToString();
			TestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334* L_3 = V_1;
			NullCheck(L_3);
			Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = L_3->___TextMesh_7;
			TestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334* L_5 = V_1;
			NullCheck(L_5);
			int32_t* L_6 = (&L_5->___Value_6);
			String_t* L_7;
			L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_6, NULL);
			NullCheck(L_4);
			VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
			// await Task.Delay(1000);
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8;
			L_8 = Task_Delay_m4B84654B4DAADEC41096D9F01C099CCEA9927A48(((int32_t)1000), NULL);
			NullCheck(L_8);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_9;
			L_9 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_8, NULL);
			V_2 = L_9;
			bool L_10;
			L_10 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_10)
			{
				goto IL_007c_1;
			}
		}
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->___U3CU3E1__state_0 = L_11;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_12 = V_2;
			__this->___U3CU3Eu__1_3 = L_12;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_13 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CBeginU3Ed__3_tFD4B4484F4123A67A1D5D47760BAAD27E4D40ED0_m285B74A2E96217A00C95BFB1C6848D1FAB57E5BD(L_13, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CBeginU3Ed__3_tFD4B4484F4123A67A1D5D47760BAAD27E4D40ED0_m285B74A2E96217A00C95BFB1C6848D1FAB57E5BD_RuntimeMethod_var);
			goto IL_00b5;
		}

IL_0060_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_14 = __this->___U3CU3Eu__1_3;
			V_2 = L_14;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_15 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_15, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->___U3CU3E1__state_0 = L_16;
		}

IL_007c_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			// SetReady();
			TestService_t43816EF36DF986A407F3D3DF48D22A6D2B83D334* L_17 = V_1;
			NullCheck(L_17);
			MonoVervice_1_SetReady_m12F517E77765EAEEF3DF95A18C713CF1031D3C04(L_17, MonoVervice_1_SetReady_m12F517E77765EAEEF3DF95A18C713CF1031D3C04_RuntimeMethod_var);
			goto IL_00a2;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008b;
		}
		throw e;
	}

CATCH_008b:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_18 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_19 = V_3;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_18, L_19, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b5;
	}// end catch (depth: 1)

IL_00a2:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_20 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_20, NULL);
	}

IL_00b5:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CBeginU3Ed__3_MoveNext_m53A025E79BE3D3191A30EC8BB7B5C9298CAC96AD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CBeginU3Ed__3_tFD4B4484F4123A67A1D5D47760BAAD27E4D40ED0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CBeginU3Ed__3_tFD4B4484F4123A67A1D5D47760BAAD27E4D40ED0*>(__this + _offset);
	U3CBeginU3Ed__3_MoveNext_m53A025E79BE3D3191A30EC8BB7B5C9298CAC96AD(_thisAdjusted, method);
}
// System.Void TestService/<Begin>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBeginU3Ed__3_SetStateMachine_m0038DD4AD66C7094FAC6D67EDCAD839F92AE6908 (U3CBeginU3Ed__3_tFD4B4484F4123A67A1D5D47760BAAD27E4D40ED0* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CBeginU3Ed__3_SetStateMachine_m0038DD4AD66C7094FAC6D67EDCAD839F92AE6908_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CBeginU3Ed__3_tFD4B4484F4123A67A1D5D47760BAAD27E4D40ED0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CBeginU3Ed__3_tFD4B4484F4123A67A1D5D47760BAAD27E4D40ED0*>(__this + _offset);
	U3CBeginU3Ed__3_SetStateMachine_m0038DD4AD66C7094FAC6D67EDCAD839F92AE6908(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Container_set_Instance_m04708340B4DDC64F30D2AF257CB60C25203D2B20_inline (Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Container_tD893563141DD2B976E59B5F23B739924B8ABF41A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Container Instance { get; private set; }
		Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* L_0 = ___value0;
		((Container_tD893563141DD2B976E59B5F23B739924B8ABF41A_StaticFields*)il2cpp_codegen_static_fields_for(Container_tD893563141DD2B976E59B5F23B739924B8ABF41A_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Container_tD893563141DD2B976E59B5F23B739924B8ABF41A_StaticFields*)il2cpp_codegen_static_fields_for(Container_tD893563141DD2B976E59B5F23B739924B8ABF41A_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* Container_get_Instance_m844AAC5E1E36187B2111CB2E37F8D65C10AA6531_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Container_tD893563141DD2B976E59B5F23B739924B8ABF41A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Container Instance { get; private set; }
		Container_tD893563141DD2B976E59B5F23B739924B8ABF41A* L_0 = ((Container_tD893563141DD2B976E59B5F23B739924B8ABF41A_StaticFields*)il2cpp_codegen_static_fields_for(Container_tD893563141DD2B976E59B5F23B739924B8ABF41A_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* MonoVervice_get_Dependencies_m590972D5DB3F3460CFA7CB871E718D51DEC43D84_inline (MonoVervice_tF220D43A7C8A61DCA2E5184E7DBAC10A5304350B* __this, const RuntimeMethod* method) 
{
	{
		// public List<DependencyNode> Dependencies { get; set; }
		List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* L_0 = __this->___U3CDependenciesU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* Vervice_get_Dependencies_mD4A3C7C892E634EE603FE8469C8943821DD995C4_inline (Vervice_t37BBCA9D632DF7EC3C536CFD85A6E249FA5B4447* __this, const RuntimeMethod* method) 
{
	{
		// public List<DependencyNode> Dependencies { get;  set; }
		List_1_t8ABB21B5921ACE331C679685B2D6E1342A675AA0* L_0 = __this->___U3CDependenciesU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m88484A213EB00FF7254FE3DB935BFB06DD3F5753_gshared_inline (Action_2_tAC461AE4F7B507965CE2E6A32853473F8C02CD75* __this, RuntimeObject* ___arg10, int32_t ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tA42794065062A1F618BC324141E216CEDA748815* VonoBehaviour_1_get_Services_m608F06548979B0EA0548FEC51E18C3B47FD37BF5_gshared_inline (const RuntimeMethod* method) 
{
	{
		// protected static Dictionary<Type, FieldInfo> Services { get; set; }
		Dictionary_2_tA42794065062A1F618BC324141E216CEDA748815* L_0 = ((VonoBehaviour_1_tA4FDA72CA563CFF6366610B19D1FAA5B997648CF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___U3CServicesU3Ek__BackingField_4;
		return L_0;
	}
}
