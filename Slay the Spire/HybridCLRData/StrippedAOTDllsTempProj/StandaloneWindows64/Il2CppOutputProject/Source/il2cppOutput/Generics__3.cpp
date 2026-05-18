#include "pch-cpp.hpp"





template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
struct ConstrainedActionInvoker0
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, NULL);
	}
};

struct U3CDisposeAsyncU3Ed__11_t89ED05E58A55A277A6F97431EE3CCFD448F9257F;
struct U3CDisposeAsyncU3Ed__115_tE6A33D2F8D25185A2D66A391E0021E1A3E00CF17;
struct U3CDisposeAsyncU3Ed__12_tD4BC7F3AA975D6EBE8617518F0D399725605D361;
struct U3CDisposeAsyncU3Ed__123_t97C3032A726967F35233D685AE984B8173C3EB8A;
struct U3CDisposeAsyncU3Ed__13_tF07A196D0F005E8E590005E278D170E301695DA4;
struct U3CDisposeAsyncU3Ed__131_t9AD80AC2FC4252AC32C52066CE0CFE3ECDB08537;
struct U3CDisposeAsyncU3Ed__18_tC188752CD4DB8F4F952875C44DD9980B06D167E3;
struct U3CDisposeAsyncU3Ed__21_tAF4A35DE6FCC10CB592383716B6B90BB07B2020F;
struct U3CDisposeAsyncU3Ed__21_t5D9637B25772A807FA1261F4A8EE36BA5CD7B716;
struct U3CDisposeAsyncU3Ed__26_t086ED907A1DA461850C7C13F38E40B6E2DC804E8;
struct U3CDisposeAsyncU3Ed__27_t2E8ADE0520F9050280DC4DC1E0308C0F383AFCB5;
struct U3CDisposeAsyncU3Ed__32_tECFB4179B2FF468D59B2DC3FD696B89B031F5919;
struct U3CDisposeAsyncU3Ed__32_tF67F132D423CFDCC63994B7BFE4A33CB72970ACC;
struct U3CDisposeAsyncU3Ed__35_t7213626E6322D3418A0C77E40B45F74AD357EC49;
struct U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20;
struct U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9;
struct U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF;
struct U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456;
struct U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7;
struct U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D;
struct U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3;
struct U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07;
struct U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F;
struct U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED;
struct U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392;
struct U3CElementAtAsyncU3Ed__0_1_t828967E53B1F0CA7BDCEF9D605C46215C4EC3044;
struct U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605;
struct U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749;
struct U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C;
struct U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1;
struct U3CEnumerateU3Ed__28_t0208D88B19E67F3B47A3ACACCAF0810D4DA5D4AE;
struct U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12;
struct U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518;
struct U3CExceptIteratorU3Ed__77_1_t6DFBE5664B7AA81AE88BBB32A4CE8A105F05FB25;
struct U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E;
struct U3CFirstAsyncU3Ed__0_1_t8FEFBA058854F78C0D1DDC66BF35661E1FF7B142;
struct U3CFirstAsyncU3Ed__1_1_tDD5E86442F853ED2127AA888C9B23F5CF897E394;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773;
struct ChannelReader_1_tE4C2ED9FCB41C91487968797823CEF77B1CF781E;
struct ChannelReader_1_t2ECD38FFB796290865D3F1EAC478976ECBD61318;
struct ChannelWriter_1_tFA8B6F723BEB7DA7FFD8372A38D21E89F5A2E7D9;
struct ChannelWriter_1_t1209690B768C24565769C0EC929D8E49E3C09877;
struct Channel_1_t54EA6F93BD0DB668227D2390918ED6CFA7C02A80;
struct Channel_1_t196AC538B8F832BAE1683ED47BFBECF0CC815252;
struct ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4;
struct ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56;
struct Dictionary_2_t647DF567ADBEEEC3E77B6353D82BF2D62976B39C;
struct Dictionary_2_t5B0B823A74BF369A8BA2728444AAA80B3D22C39C;
struct Dictionary_2_tC90C3EE20FDA713BD1E7D78ED8E5EBA6B529306A;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct Enumerator_t15FA1624E3BE0AC1F3A918185439A63138D413F4;
struct Func_10_tCFA5EB7EA19CD65C3B9C38C693E22F5FFFB1B1AE;
struct Func_11_t17F432ABEC8F07E0EDFA2596226EAEB308D7AF64;
struct Func_12_t59995ACB05F018B0467B398929AA0C7CC6690FCD;
struct Func_14_t832E7C41FBD1EA2EB64BB25F9998F63A0BB0DC05;
struct Func_15_tFDDF27082827311281C23A24DC1AA2B68498702D;
struct Func_16_t85C77A6ADF6A16E184BCE73A1B6011F4D7217BBD;
struct Func_2_t84BAF71E391705D6E17965340D139A05C9BFF4A0;
struct Func_2_tF46956D65019019D93B1B110E5E05EC488B38508;
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
struct Func_3_t5B168CA993A8917EEDE97CA95F27C4287F4CC542;
struct Func_3_tF6C1103031BE014E11B9FAB50F2B76FD767638EE;
struct Func_3_t8EDE592AAEF28AD82747A4171F3E6427A0433048;
struct Func_3_t025EADE05AD46B78D6372153E7AB6141B48C6D40;
struct Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4;
struct Func_4_tCDAEEF6FD796B6EEA3BF7C724CFECD905424655F;
struct Func_4_tACF12340039B5BCFBB5ED953C0B2BF68B8F74D25;
struct Func_4_t572D62CCA845BDAD9BC3ABCD839C1AE78144D079;
struct Func_5_tB069B44093DF1EBDA5245A604B7AD60C4B638397;
struct Func_6_tF0A0CA0D64145FD856F53441697B240796CBF320;
struct Func_7_tE5BE67F6F06DB3CA05521637000BD00C4D993F80;
struct Func_8_t605F8719FA2521B5FF48B1D8047E17F3F082B32E;
struct Func_9_tCA208DB676270504B9EA383199B74083CECB6375;
struct IEnumerable_1_tC98E76738AF0A72F03879344D977819749AF8DB0;
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_t619CE54A14FDF259F76ADA30314D02E023B882E2;
struct IEnumerator_1_t8B5708C83C0213FC035FA2F10A86CB49DCB2E418;
struct IEnumerator_1_t2ADC42E7152AD946D164EAAFD0221F24163406FA;
struct IEnumerator_1_tFABD3B897F1296469E9A2DB9BCF6C89439049208;
struct IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452;
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEqualityComparer_1_t38009044A4DADA30C1C7C33E1DB1F56A370D4EE0;
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IObserver_1_t094BE2515872266E98A772AEA02B413105F16A8B;
struct IStateMachineRunnerPromise_1_t33359314377828B79D5AB55278350F65F2237DD9;
struct IUniTaskAsyncEnumerable_1_tB465D2725680B21CF3074178AECADD1D24C24A74;
struct IUniTaskAsyncEnumerator_1_t821F594EE7A9A9AD50A4AD8E2BCA1FDC7F4D9FDC;
struct IUniTaskAsyncEnumerator_1_t256C7409E6B13FF3224A57D2DD1A4D52A2C40092;
struct IUniTaskSource_1_t675BA59944DF0651A4F586E3EECC80243DAAD7BF;
struct IUniTaskSource_1_tB6B218F9BB467453A6CBAEE053820D3B3E8F891C;
struct IUniTaskSource_1_tA27C284FF17E3AAB5B5D07A7E4DE207B56F764AB;
struct KeyCollection_t5BFA144E65C440BF450E0EC7157FFE4667B63479;
struct KeyCollection_t9318FC1AF9A7A9987CBE12C89224F51595AAD6FF;
struct KeyCollection_t4637880FA04F7D59732F86F40FA82860903EF2D5;
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55;
struct ProfilerFrameData_2_t2E78C7937AD59869D299687F5F9D8FFB343F688A;
struct ProfilerFrameData_2_t950D70A7F1D73DADC9A90BCD19091AF31D8F5CE4;
struct ProfilerFrameData_2_t7F0801E253606F118877F93100B39DE68DD80138;
struct ProfilerFrameData_2_t55016382651482A079353ABFAEBEA16AC98DA7F0;
struct Queue_1_tB71496D5BB569A08499E4DD743B80E80679BD01F;
struct Segment_tBE464478C92438E20009981FD7F953F796D7F3B2;
struct Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912;
struct Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF;
struct Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921;
struct Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D;
struct ValueCollection_tDDD45898682DFD7207062D81AE24401349383F5C;
struct ValueCollection_t8E60F626894DBFAC606E295B687835CA90A38428;
struct ValueCollection_t3309BFCAB7519C3C4580AB856F35E19EBDF34269;
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40;
struct _CombineLatest_t140C724924F9D574B2C92DB7FA4E398102F083FC;
struct _CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354;
struct _CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746;
struct _CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E;
struct _CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1;
struct _CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13;
struct _CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55;
struct _CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E;
struct _CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D;
struct _CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD;
struct _CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0;
struct _CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09;
struct _CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA;
struct _Merge_t1C2BA075B2CB4F56D213F2DD8A75FBF12D2F1F66;
struct _Queue_tECDD01C33751DFE4942831EF0C7D9FB09C499871;
struct _SelectMany_t5F0438964D43258A2404AE58C3E6CF2F6A05294A;
struct _SelectManyAwait_t40659A3A53837DAC9BBAB1389D01501F6486E45D;
struct _SelectManyAwaitWithCancellation_t1377CB768DDFCBBEF8FA7E5B60EA9376D3DCDE53;
struct _Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622;
struct _ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE;
struct _ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD;
struct EntryU5BU5D_t1A6DD5821474A85B667B61B4C3D1ADDA71F1F818;
struct EntryU5BU5D_tD312821F2250A0C4C795B76BC6DB8A3F3455A211;
struct EntryU5BU5D_t5332928D5A1FCD6B6FA42D8469F0604CDE286FE9;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct IUniTaskAsyncEnumerator_1U5BU5D_t74C60CA0A3609180188EC969FD53DDB39021A752;
struct MergeSourceStateU5BU5D_tB7812B44FA052830FF047FF969B894E7A33C7B63;
struct MinimumQueue_1U5BU5D_tE16F7898DFAEB90D2149852F6D7F0100867C311F;
struct MinimumQueue_1U5BU5D_tBBD328725F04A9EA5D6D9D8102F82B63D7E69F59;
struct SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301;
struct SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F;
struct SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B;
struct SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427;
struct SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444;
struct AssetFrameDataU5BU5D_tA0805858BB74DC603986000AAB36FD4937561084;
struct BundleFrameDataU5BU5D_t9C38E8A01CC22BD2B7BB3F73B456FC34557472B8;
struct CatalogFrameDataU5BU5D_tCBDDA8AE38F28E5D65DD9259FE9E9EABFA935DF8;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct SpinLockU5BU5D_tC91183DF6C9CC1830ADAA8476AC2819F1433A5E7;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Exception_t;
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148;
struct IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B;
struct IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MethodInfo_t;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteralF26C76B1728491A2D7039EBFC35CFDE0D352C43A;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct IUniTaskAsyncEnumerator_1U5BU5D_t74C60CA0A3609180188EC969FD53DDB39021A752;
struct MergeSourceStateU5BU5D_tB7812B44FA052830FF047FF969B894E7A33C7B63;
struct SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B;
struct SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	int32_t ___U3CU3E2__current;
	int32_t ___U3CU3El__initialThreadId;
	RuntimeObject* ___comparer;
	RuntimeObject* ___U3CU3E3__comparer;
	RuntimeObject* ___source;
	RuntimeObject* ___U3CU3E3__source;
	Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF* ___U3CsetU3E5__2;
	RuntimeObject* ___U3CU3E7__wrap2;
};
struct U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	int32_t ___U3CU3El__initialThreadId;
	RuntimeObject* ___comparer;
	RuntimeObject* ___U3CU3E3__comparer;
	RuntimeObject* ___source;
	RuntimeObject* ___U3CU3E3__source;
	Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921* ___U3CsetU3E5__2;
	RuntimeObject* ___U3CU3E7__wrap2;
};
struct U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392 : public RuntimeObject {};
struct U3CEnumerateU3Ed__28_t0208D88B19E67F3B47A3ACACCAF0810D4DA5D4AE  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* ___head;
	Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* ___tail;
	int32_t ___tailTail;
	int32_t ___headHead;
	ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* ___U3CU3E4__this;
	int32_t ___U3CheadTailU3E5__2;
	int32_t ___U3CiU3E5__3;
	Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* ___U3CsU3E5__4;
	int32_t ___U3CiU3E5__5;
};
struct U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12 : public RuntimeObject {};
struct U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518 : public RuntimeObject {};
struct U3CExceptIteratorU3Ed__77_1_t6DFBE5664B7AA81AE88BBB32A4CE8A105F05FB25 : public RuntimeObject {};
struct ArrayPool_1_tE643756749CF7C5070E5A8728438CB5B967E75AE  : public RuntimeObject
{
	MinimumQueue_1U5BU5D_tE16F7898DFAEB90D2149852F6D7F0100867C311F* ___buckets;
	SpinLockU5BU5D_tC91183DF6C9CC1830ADAA8476AC2819F1433A5E7* ___locks;
};
struct ArrayPool_1_tF2E5DAE4006A61B7DA16D5CD68CD0BA1C092BDEC  : public RuntimeObject
{
	MinimumQueue_1U5BU5D_tBBD328725F04A9EA5D6D9D8102F82B63D7E69F59* ___buckets;
	SpinLockU5BU5D_tC91183DF6C9CC1830ADAA8476AC2819F1433A5E7* ___locks;
};
struct AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773 : public RuntimeObject {};
struct ChannelWriter_1_tFA8B6F723BEB7DA7FFD8372A38D21E89F5A2E7D9  : public RuntimeObject
{
};
struct ChannelWriter_1_t1209690B768C24565769C0EC929D8E49E3C09877  : public RuntimeObject
{
};
struct Channel_2_t45849CB0DDFE22F6DE89A3AEC42C6041EF634A9D  : public RuntimeObject
{
	ChannelReader_1_tE4C2ED9FCB41C91487968797823CEF77B1CF781E* ___U3CReaderU3Ek__BackingField;
	ChannelWriter_1_tFA8B6F723BEB7DA7FFD8372A38D21E89F5A2E7D9* ___U3CWriterU3Ek__BackingField;
};
struct Channel_2_t063677A10473E8126C159B5E3FC31FB43E1122A7  : public RuntimeObject
{
	ChannelReader_1_t2ECD38FFB796290865D3F1EAC478976ECBD61318* ___U3CReaderU3Ek__BackingField;
	ChannelWriter_1_t1209690B768C24565769C0EC929D8E49E3C09877* ___U3CWriterU3Ek__BackingField;
};
struct ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4  : public RuntimeObject
{
	RuntimeObject* ____crossSegmentLock;
	Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* ____tail;
	Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* ____head;
};
struct ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56  : public RuntimeObject
{
	RuntimeObject* ____crossSegmentLock;
	Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* ____tail;
	Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* ____head;
};
struct Dictionary_2_t647DF567ADBEEEC3E77B6353D82BF2D62976B39C  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t1A6DD5821474A85B667B61B4C3D1ADDA71F1F818* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t5BFA144E65C440BF450E0EC7157FFE4667B63479* ____keys;
	ValueCollection_tDDD45898682DFD7207062D81AE24401349383F5C* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t5B0B823A74BF369A8BA2728444AAA80B3D22C39C  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tD312821F2250A0C4C795B76BC6DB8A3F3455A211* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t9318FC1AF9A7A9987CBE12C89224F51595AAD6FF* ____keys;
	ValueCollection_t8E60F626894DBFAC606E295B687835CA90A38428* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tC90C3EE20FDA713BD1E7D78ED8E5EBA6B529306A  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t5332928D5A1FCD6B6FA42D8469F0604CDE286FE9* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t4637880FA04F7D59732F86F40FA82860903EF2D5* ____keys;
	ValueCollection_t3309BFCAB7519C3C4580AB856F35E19EBDF34269* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* ____keys;
	ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* ____values;
	RuntimeObject* ____syncRoot;
};
struct ProfilerFrameData_2_t2E78C7937AD59869D299687F5F9D8FFB343F688A  : public RuntimeObject
{
	Dictionary_2_t647DF567ADBEEEC3E77B6353D82BF2D62976B39C* ___m_Data;
	CatalogFrameDataU5BU5D_tCBDDA8AE38F28E5D65DD9259FE9E9EABFA935DF8* ___m_Array;
	uint32_t ___m_Version;
	uint32_t ___m_ArrayVersion;
};
struct ProfilerFrameData_2_t950D70A7F1D73DADC9A90BCD19091AF31D8F5CE4  : public RuntimeObject
{
	Dictionary_2_t5B0B823A74BF369A8BA2728444AAA80B3D22C39C* ___m_Data;
	AssetFrameDataU5BU5D_tA0805858BB74DC603986000AAB36FD4937561084* ___m_Array;
	uint32_t ___m_Version;
	uint32_t ___m_ArrayVersion;
};
struct ProfilerFrameData_2_t7F0801E253606F118877F93100B39DE68DD80138  : public RuntimeObject
{
	Dictionary_2_tC90C3EE20FDA713BD1E7D78ED8E5EBA6B529306A* ___m_Data;
	BundleFrameDataU5BU5D_t9C38E8A01CC22BD2B7BB3F73B456FC34557472B8* ___m_Array;
	uint32_t ___m_Version;
	uint32_t ___m_ArrayVersion;
};
struct ProfilerFrameData_2_t55016382651482A079353ABFAEBEA16AC98DA7F0  : public RuntimeObject
{
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___m_Data;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___m_Array;
	uint32_t ___m_Version;
	uint32_t ___m_ArrayVersion;
};
struct Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___buckets;
	SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301* ___slots;
	int32_t ___count;
	int32_t ___freeList;
	RuntimeObject* ___comparer;
};
struct Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___buckets;
	SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F* ___slots;
	int32_t ___count;
	int32_t ___freeList;
	RuntimeObject* ___comparer;
};
struct Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___buckets;
	SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* ___slots;
	int32_t ___count;
	int32_t ___freeList;
	RuntimeObject* ___comparer;
};
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757  : public RuntimeObject
{
	Exception_t* ___m_Exception;
	RuntimeObject* ___m_stackTrace;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
typedef Il2CppFullySharedGenericStruct AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52;
struct Channel_1_t54EA6F93BD0DB668227D2390918ED6CFA7C02A80  : public Channel_2_t45849CB0DDFE22F6DE89A3AEC42C6041EF634A9D
{
};
struct Channel_1_t196AC538B8F832BAE1683ED47BFBECF0CC815252  : public Channel_2_t063677A10473E8126C159B5E3FC31FB43E1122A7
{
};
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177 
{
	RuntimeObject* ___Item;
	int32_t ___SequenceNumber;
};
typedef Il2CppFullySharedGenericStruct Slot_t15722483BF8D3D9AE95C0F301EAB5E41F7E1E2B9;
struct UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2 
{
	bool ___result;
	RuntimeObject* ___error;
	int16_t ___version;
	bool ___hasUnhandledError;
	int32_t ___completedCount;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation;
	RuntimeObject* ___continuationState;
};
struct UniTask_1_tC8C7A934FBFCCE7A352E9ED92F26BB4337EA0147 
{
	RuntimeObject* ___source;
	RuntimeObject* ___result;
	int16_t ___token;
};
struct UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 
{
	RuntimeObject* ___source;
	bool ___result;
	int16_t ___token;
};
typedef Il2CppFullySharedGenericStruct UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483;
struct AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 
{
	RuntimeObject* ___runnerPromise;
	Exception_t* ___ex;
	RuntimeObject* ___debuggingId;
};
struct AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B 
{
	RuntimeObject* ___runner;
	RuntimeObject* ___debuggingId;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 
{
	uint64_t ___u64_0;
	uint64_t ___u64_1;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
#pragma pack(push, tp, 1)
struct PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					char ___Head_OffsetPadding[128];
					int32_t ___Head;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___Head_OffsetPadding_forAlignmentOnly[128];
					int32_t ___Head_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___Tail_OffsetPadding[256];
					int32_t ___Tail;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___Tail_OffsetPadding_forAlignmentOnly[256];
					int32_t ___Tail_forAlignmentOnly;
				};
			};
		};
		uint8_t PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8__padding[384];
	};
};
#pragma pack(pop, tp)
struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 
{
	RuntimeObject* ___source;
	int16_t ___token;
};
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
struct Awaiter_tB6DD991F60A673C9002FFCEF5F20649801E63B4B 
{
	UniTask_1_tC8C7A934FBFCCE7A352E9ED92F26BB4337EA0147 ___task;
};
struct Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 
{
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 ___task;
};
typedef Il2CppFullySharedGenericStruct Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C;
typedef Il2CppFullySharedGenericStruct Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1;
struct MergeSourceState_t6578EE0635EFE21DED16CA6FB2A21EFA1DC03E69 
{
	int32_t ___value__;
};
struct Segment_tBE464478C92438E20009981FD7F953F796D7F3B2  : public RuntimeObject
{
	SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B* ____slots;
	int32_t ____slotsMask;
	PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8 ____headAndTail;
	bool ____preservedForObservation;
	bool ____frozenForEnqueues;
	Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* ____nextSegment;
};
struct Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912  : public RuntimeObject
{
	SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* ____slots;
	int32_t ____slotsMask;
	PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8 ____headAndTail;
	bool ____preservedForObservation;
	bool ____frozenForEnqueues;
	Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* ____nextSegment;
};
struct _Queue_tECDD01C33751DFE4942831EF0C7D9FB09C499871  : public RuntimeObject
{
	RuntimeObject* ___source;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	Channel_1_t196AC538B8F832BAE1683ED47BFBECF0CC815252* ___channel;
	RuntimeObject* ___channelEnumerator;
	RuntimeObject* ___sourceEnumerator;
	bool ___channelClosed;
};
struct BundleOptions_t804CCC242ED453795BDDD72253748BF989E6F3AC 
{
	int16_t ___value__;
};
struct BundleSource_t1E9E1A506FA03925C5305929EC55861EF2839F4A 
{
	int32_t ___value__;
};
struct CatalogFrameData_t6279FD2B744CACF3C1341B20448261AE576CDDE7 
{
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___BuildResultHash;
};
struct ContentStatus_t491A1B2D022DCF1E0C0D5B8F6896E7153FE74296 
{
	int32_t ___value__;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5  : public RuntimeObject
{
	UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2 ___completionSource;
};
struct PlayerLoopTiming_tA0561E77DCF3749CC535F4F45642F515BDF040C2 
{
	int32_t ___value__;
};
struct UniTaskStatus_tC898C29839EBB5DB7055C3DF299A2C276237CB70 
{
	int32_t ___value__;
};
struct WhenEachState_t12EBE05811534489FA3C4A357B48C4B423844EAF 
{
	uint8_t ___value__;
};
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task;
};
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_marshaled_pinvoke
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task;
};
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_marshaled_com
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task;
};
struct U3CDisposeAsyncU3Ed__11_t89ED05E58A55A277A6F97431EE3CCFD448F9257F  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_Queue_tECDD01C33751DFE4942831EF0C7D9FB09C499871* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__115_tE6A33D2F8D25185A2D66A391E0021E1A3E00CF17  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__12_tD4BC7F3AA975D6EBE8617518F0D399725605D361  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	Enumerator_t15FA1624E3BE0AC1F3A918185439A63138D413F4* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__123_t97C3032A726967F35233D685AE984B8173C3EB8A  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__13_tF07A196D0F005E8E590005E278D170E301695DA4  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_Merge_t1C2BA075B2CB4F56D213F2DD8A75FBF12D2F1F66* ___U3CU3E4__this;
	int32_t ___U3CiU3E5__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__131_t9AD80AC2FC4252AC32C52066CE0CFE3ECDB08537  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__18_tC188752CD4DB8F4F952875C44DD9980B06D167E3  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__21_tAF4A35DE6FCC10CB592383716B6B90BB07B2020F  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__21_t5D9637B25772A807FA1261F4A8EE36BA5CD7B716  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__26_t086ED907A1DA461850C7C13F38E40B6E2DC804E8  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_SelectMany_t5F0438964D43258A2404AE58C3E6CF2F6A05294A* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__27_t2E8ADE0520F9050280DC4DC1E0308C0F383AFCB5  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_CombineLatest_t140C724924F9D574B2C92DB7FA4E398102F083FC* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__32_tECFB4179B2FF468D59B2DC3FD696B89B031F5919  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_SelectManyAwaitWithCancellation_t1377CB768DDFCBBEF8FA7E5B60EA9376D3DCDE53* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__32_tF67F132D423CFDCC63994B7BFE4A33CB72970ACC  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_SelectManyAwait_t40659A3A53837DAC9BBAB1389D01501F6486E45D* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__35_t7213626E6322D3418A0C77E40B45F74AD357EC49  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CElementAtAsyncU3Ed__0_1_t828967E53B1F0CA7BDCEF9D605C46215C4EC3044 : public RuntimeObject {};
struct U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1 : public RuntimeObject {};
struct U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E : public RuntimeObject {};
struct U3CFirstAsyncU3Ed__0_1_t8FEFBA058854F78C0D1DDC66BF35661E1FF7B142 : public RuntimeObject {};
struct U3CFirstAsyncU3Ed__1_1_tDD5E86442F853ED2127AA888C9B23F5CF897E394 : public RuntimeObject {};
struct Enumerator_t15FA1624E3BE0AC1F3A918185439A63138D413F4  : public RuntimeObject
{
	RuntimeObject* ___source;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	Channel_1_t54EA6F93BD0DB668227D2390918ED6CFA7C02A80* ___channel;
	RuntimeObject* ___channelEnumerator;
	int32_t ___completeCount;
	uint8_t ___state;
};
struct KeyValuePair_2_tC3AC829C78D0C95AC43F29F601558266274BB956 
{
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___key;
	CatalogFrameData_t6279FD2B744CACF3C1341B20448261AE576CDDE7 ___value;
};
struct _CombineLatest_t140C724924F9D574B2C92DB7FA4E398102F083FC : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _Merge_t1C2BA075B2CB4F56D213F2DD8A75FBF12D2F1F66 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _SelectMany_t5F0438964D43258A2404AE58C3E6CF2F6A05294A : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _SelectManyAwait_t40659A3A53837DAC9BBAB1389D01501F6486E45D : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _SelectManyAwaitWithCancellation_t1377CB768DDFCBBEF8FA7E5B60EA9376D3DCDE53 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct AssetFrameData_t0687CA219D5D690AA89C5CAF450DC188BE1608D8 
{
	int32_t ___AssetCode;
	int32_t ___BundleCode;
	int32_t ___ReferenceCount;
	float ___PercentComplete;
	int32_t ___Status;
};
struct BundleFrameData_tA5E51D69FEA298F7F0D0BFD9A8F734D0ECADEC28 
{
	int32_t ___BundleCode;
	int32_t ___ReferenceCount;
	float ___PercentComplete;
	int32_t ___Status;
	int32_t ___Source;
	int16_t ___LoadingOptions;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6 
{
	Dictionary_2_t647DF567ADBEEEC3E77B6353D82BF2D62976B39C* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tC3AC829C78D0C95AC43F29F601558266274BB956 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};
struct KeyValuePair_2_tA75B083C5C7F9CE6237B200BC4A36B820A24C5C8 
{
	RuntimeObject* ___key;
	AssetFrameData_t0687CA219D5D690AA89C5CAF450DC188BE1608D8 ___value;
};
struct KeyValuePair_2_t9E936A9C063E78E3C06E01B1A28CAB03B4C51221 
{
	RuntimeObject* ___key;
	BundleFrameData_tA5E51D69FEA298F7F0D0BFD9A8F734D0ECADEC28 ___value;
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ____cancellationToken;
};
struct U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	KeyValuePair_2_tC3AC829C78D0C95AC43F29F601558266274BB956 ___U3CU3E2__current;
	int32_t ___U3CU3El__initialThreadId;
	ProfilerFrameData_2_t2E78C7937AD59869D299687F5F9D8FFB343F688A* ___U3CU3E4__this;
	Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6 ___U3CU3Es__1;
	KeyValuePair_2_tC3AC829C78D0C95AC43F29F601558266274BB956 ___U3CpairU3E5__2;
};
struct Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B 
{
	Dictionary_2_t5B0B823A74BF369A8BA2728444AAA80B3D22C39C* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tA75B083C5C7F9CE6237B200BC4A36B820A24C5C8 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1 
{
	Dictionary_2_tC90C3EE20FDA713BD1E7D78ED8E5EBA6B529306A* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t9E936A9C063E78E3C06E01B1A28CAB03B4C51221 ____current;
	int32_t ____getEnumeratorRetType;
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	KeyValuePair_2_tA75B083C5C7F9CE6237B200BC4A36B820A24C5C8 ___U3CU3E2__current;
	int32_t ___U3CU3El__initialThreadId;
	ProfilerFrameData_2_t950D70A7F1D73DADC9A90BCD19091AF31D8F5CE4* ___U3CU3E4__this;
	Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B ___U3CU3Es__1;
	KeyValuePair_2_tA75B083C5C7F9CE6237B200BC4A36B820A24C5C8 ___U3CpairU3E5__2;
};
struct U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	KeyValuePair_2_t9E936A9C063E78E3C06E01B1A28CAB03B4C51221 ___U3CU3E2__current;
	int32_t ___U3CU3El__initialThreadId;
	ProfilerFrameData_2_t7F0801E253606F118877F93100B39DE68DD80138* ___U3CU3E4__this;
	Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1 ___U3CU3Es__1;
	KeyValuePair_2_t9E936A9C063E78E3C06E01B1A28CAB03B4C51221 ___U3CpairU3E5__2;
};
struct ArrayPool_1_tE643756749CF7C5070E5A8728438CB5B967E75AE_StaticFields
{
	IUniTaskAsyncEnumerator_1U5BU5D_t74C60CA0A3609180188EC969FD53DDB39021A752* ___EmptyArray;
	ArrayPool_1_tE643756749CF7C5070E5A8728438CB5B967E75AE* ___Shared;
};
struct ArrayPool_1_tF2E5DAE4006A61B7DA16D5CD68CD0BA1C092BDEC_StaticFields
{
	MergeSourceStateU5BU5D_tB7812B44FA052830FF047FF969B894E7A33C7B63* ___EmptyArray;
	ArrayPool_1_tF2E5DAE4006A61B7DA16D5CD68CD0BA1C092BDEC* ___Shared;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt;
};
struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_StaticFields
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CanceledUniTask;
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CompletedTask;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct _CombineLatest_t140C724924F9D574B2C92DB7FA4E398102F083FC_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed1Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed2Delegate;
};
struct _CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed1Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed2Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed3Delegate;
};
struct _CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed1Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed2Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed3Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed4Delegate;
};
struct _CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed1Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed2Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed3Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed4Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed5Delegate;
};
struct _CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed1Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed2Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed3Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed4Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed5Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed6Delegate;
};
struct _CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed1Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed2Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed3Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed4Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed5Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed6Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed7Delegate;
};
struct _CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed1Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed2Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed3Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed4Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed5Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed6Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed7Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed8Delegate;
};
struct _CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed1Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed2Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed3Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed4Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed5Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed6Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed7Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed8Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed9Delegate;
};
struct _CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed1Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed2Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed3Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed4Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed5Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed6Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed7Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed8Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed9Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed10Delegate;
};
struct _CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed1Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed2Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed3Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed4Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed5Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed6Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed7Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed8Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed9Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed10Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed11Delegate;
};
struct _CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed1Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed2Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed3Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed4Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed5Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed6Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed7Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed8Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed9Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed10Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed11Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed12Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed13Delegate;
};
struct _CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed1Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed2Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed3Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed4Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed5Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed6Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed7Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed8Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed9Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed10Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed11Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed12Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed13Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed14Delegate;
};
struct _CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed1Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed2Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed3Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed4Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed5Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed6Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed7Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed8Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed9Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed10Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed11Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed12Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed13Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed14Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed15Delegate;
};
struct _Merge_t1C2BA075B2CB4F56D213F2DD8A75FBF12D2F1F66_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___GetResultAtAction;
};
struct _SelectMany_t5F0438964D43258A2404AE58C3E6CF2F6A05294A_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___sourceMoveNextCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___selectedSourceMoveNextCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___selectedEnumeratorDisposeAsyncCoreDelegate;
};
struct _SelectManyAwait_t40659A3A53837DAC9BBAB1389D01501F6486E45D_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___sourceMoveNextCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___selectedSourceMoveNextCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___selectedEnumeratorDisposeAsyncCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___selectorAwaitCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___resultSelectorAwaitCoreDelegate;
};
struct _SelectManyAwaitWithCancellation_t1377CB768DDFCBBEF8FA7E5B60EA9376D3DCDE53_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___sourceMoveNextCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___selectedSourceMoveNextCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___selectedEnumeratorDisposeAsyncCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___selectorAwaitCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___resultSelectorAwaitCoreDelegate;
};
struct _Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___firstMoveNextCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___secondMoveNextCoreDelegate;
};
struct _ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___firstMoveNextCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___secondMoveNextCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___resultAwaitCoreDelegate;
};
struct _ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___firstMoveNextCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___secondMoveNextCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___resultAwaitCoreDelegate;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct IUniTaskAsyncEnumerator_1U5BU5D_t74C60CA0A3609180188EC969FD53DDB39021A752  : public RuntimeArray
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
struct MergeSourceStateU5BU5D_tB7812B44FA052830FF047FF969B894E7A33C7B63  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
struct SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177 m_Items[1];

	inline Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item), (void*)NULL);
	}
	inline Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item), (void*)NULL);
	}
};
struct SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mBE6FC6D3BFB3183D106C6DE3A94F3D52D38C5CED_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_mB5D43C4A18D1C039180B81EB91FD0156BB04A99F_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Set_1__ctor_mB7F0167922AAC91B3E4FCF3843619F460CFF987E_gshared (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Set_1_Add_m04B0E9DF64E76BF3ED1C5ECFDC36BFA3555A0287_gshared (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1__ctor_m708FAF31FDC19E6FDE5E944A9128A9AEF1F161F2_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_mD2812ADD8FA30AB5E393A694274076C91F11D02E_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mCFD862B8E1AE48B3A2B7C3D64EFE43012DADE748_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_m8392F600C3472440C079089D02C19C85711BAE38_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Set_1__ctor_mC96DA58C0B3189E9298064337C1F05A5803C1727_gshared (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Set_1_Add_m8646609CFE62CC764D05B694DC78391745C077F4_gshared (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1__ctor_m86F87231C35710F52679F2D970FEDC4F70710B0A_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m7B0039E6CC03FB4B20E61AEE0C9527FAE46C4377_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_U3CU3Em__Finally1_m9B2FA6B08FF9E722DA36557FF1E6B6718C9792F9_gshared (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_System_IDisposable_Dispose_m822AD9373E981AF92EC773A7775471E70F195AF4_gshared (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6 Dictionary_2_GetEnumerator_m0A39AE57744872DEC70B8ADE8E70EC36D30626ED_gshared (Dictionary_2_t647DF567ADBEEEC3E77B6353D82BF2D62976B39C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tC3AC829C78D0C95AC43F29F601558266274BB956 Enumerator_get_Current_m0FECBAC967E8393562F8A3672F8E4749569DC02E_gshared_inline (Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m66EFFC104228A48B97687285B55584759E52AF22_gshared (Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m76E478BB04060042CC11D4F77BA9460C222F01CD_gshared (Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17__ctor_mB0746BB971E5BD52B247C27D67966E85F8B8065E_gshared (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_GetEnumerator_m320EC44570181958F62125A4F84F70EFA610AB28_gshared (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_U3CU3Em__Finally1_m4262D37C649DD5BC0B49ABE69C4A3AD28C907D22_gshared (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_System_IDisposable_Dispose_m685BD7E009413A3367133F7EC4D6C9A723DAB161_gshared (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B Dictionary_2_GetEnumerator_m866DC6D478308614FFCE0750CDBCE7981295C1DD_gshared (Dictionary_2_t5B0B823A74BF369A8BA2728444AAA80B3D22C39C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tA75B083C5C7F9CE6237B200BC4A36B820A24C5C8 Enumerator_get_Current_m0066B93625BCFB48A397FBDD68007AAB78C628E8_gshared_inline (Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mFD341E92CF254C87FE8A00B192EF91521DD704D7_gshared (Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mB78F9BEC4B28EBE0919BC71D6451D716A5787E2B_gshared (Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17__ctor_m89A3352B6AF327E5ECC6B7F2AF8E61B9ED03E291_gshared (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_GetEnumerator_m74BEE0528CC325DBDE6B183458D33A27D446D700_gshared (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_U3CU3Em__Finally1_m087AF99316F92F40C7069B54D25CC750C6B5C5A6_gshared (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_System_IDisposable_Dispose_m1DFF7D1D3CE54878B6BA86061DDB22AF6946ED80_gshared (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1 Dictionary_2_GetEnumerator_mC7D738C9E3A5C4928A1372118A07812193CAFBC5_gshared (Dictionary_2_tC90C3EE20FDA713BD1E7D78ED8E5EBA6B529306A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t9E936A9C063E78E3C06E01B1A28CAB03B4C51221 Enumerator_get_Current_mA2D3EE07E11DDC88DEA69B2580EAD5218FE78599_gshared_inline (Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF71888B7382F2EAF7606858E54551944779DC622_gshared (Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m4F6BFA345E68F3F0A7F8875FFD149A55D5240FD1_gshared (Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17__ctor_mECCA51413CF3890A35F5092E595CEC7473A48CF1_gshared (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_GetEnumerator_m085EEDE4BD6482A57C28B47622AF54C02BFFA8E9_gshared (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Segment_get_FreezeOffset_m402D47C4B47FF6B763734B006DA71BA5DBC42582_gshared (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentQueue_1_GetItemWhenAvailable_m8CD12D6BE7E6FAE430B1FDF9DC5673FA0542C7F9_gshared (ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* __this, Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* ___0_segment, int32_t ___1_i, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperationCanceledException__ctor_m2F34C3B8AEE2AA6C7EB2BB77AE5E0289101293E4 (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
inline void U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mBE6FC6D3BFB3183D106C6DE3A94F3D52D38C5CED (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F*, const RuntimeMethod*))U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mBE6FC6D3BFB3183D106C6DE3A94F3D52D38C5CED_gshared)(__this, method);
}
inline void U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_mB5D43C4A18D1C039180B81EB91FD0156BB04A99F (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F*, const RuntimeMethod*))U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_mB5D43C4A18D1C039180B81EB91FD0156BB04A99F_gshared)(__this, method);
}
inline void Set_1__ctor_mB7F0167922AAC91B3E4FCF3843619F460CFF987E (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF*, RuntimeObject*, const RuntimeMethod*))Set_1__ctor_mB7F0167922AAC91B3E4FCF3843619F460CFF987E_gshared)(__this, ___0_comparer, method);
}
inline bool Set_1_Add_m04B0E9DF64E76BF3ED1C5ECFDC36BFA3555A0287 (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF*, int32_t, const RuntimeMethod*))Set_1_Add_m04B0E9DF64E76BF3ED1C5ECFDC36BFA3555A0287_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
inline void U3CDistinctIteratorU3Ed__68_1__ctor_m708FAF31FDC19E6FDE5E944A9128A9AEF1F161F2 (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F*, int32_t, const RuntimeMethod*))U3CDistinctIteratorU3Ed__68_1__ctor_m708FAF31FDC19E6FDE5E944A9128A9AEF1F161F2_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_mD2812ADD8FA30AB5E393A694274076C91F11D02E (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F*, const RuntimeMethod*))U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_mD2812ADD8FA30AB5E393A694274076C91F11D02E_gshared)(__this, method);
}
inline void U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mCFD862B8E1AE48B3A2B7C3D64EFE43012DADE748 (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED*, const RuntimeMethod*))U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mCFD862B8E1AE48B3A2B7C3D64EFE43012DADE748_gshared)(__this, method);
}
inline void U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_m8392F600C3472440C079089D02C19C85711BAE38 (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED*, const RuntimeMethod*))U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_m8392F600C3472440C079089D02C19C85711BAE38_gshared)(__this, method);
}
inline void Set_1__ctor_mC96DA58C0B3189E9298064337C1F05A5803C1727 (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921*, RuntimeObject*, const RuntimeMethod*))Set_1__ctor_mC96DA58C0B3189E9298064337C1F05A5803C1727_gshared)(__this, ___0_comparer, method);
}
inline bool Set_1_Add_m8646609CFE62CC764D05B694DC78391745C077F4 (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921* __this, RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921*, RuntimeObject*, const RuntimeMethod*))Set_1_Add_m8646609CFE62CC764D05B694DC78391745C077F4_gshared)(__this, ___0_value, method);
}
inline void U3CDistinctIteratorU3Ed__68_1__ctor_m86F87231C35710F52679F2D970FEDC4F70710B0A (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED*, int32_t, const RuntimeMethod*))U3CDistinctIteratorU3Ed__68_1__ctor_m86F87231C35710F52679F2D970FEDC4F70710B0A_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m7B0039E6CC03FB4B20E61AEE0C9527FAE46C4377 (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED*, const RuntimeMethod*))U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m7B0039E6CC03FB4B20E61AEE0C9527FAE46C4377_gshared)(__this, method);
}
inline Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 (*) (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*, const RuntimeMethod*))UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_gshared_inline)(__this, method);
}
inline bool Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, const RuntimeMethod*))Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_gshared_inline)(__this, method);
}
inline bool Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, const RuntimeMethod*))Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Error_ArgumentOutOfRange_mB12CA2A5A28BE69DF8EFD9AB4FBD5DDD4C27AD13_inline (String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803 (Exception_t* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330 (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) ;
inline void U3CEnumerateU3Ed__17_U3CU3Em__Finally1_m9B2FA6B08FF9E722DA36557FF1E6B6718C9792F9 (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605*, const RuntimeMethod*))U3CEnumerateU3Ed__17_U3CU3Em__Finally1_m9B2FA6B08FF9E722DA36557FF1E6B6718C9792F9_gshared)(__this, method);
}
inline void U3CEnumerateU3Ed__17_System_IDisposable_Dispose_m822AD9373E981AF92EC773A7775471E70F195AF4 (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605*, const RuntimeMethod*))U3CEnumerateU3Ed__17_System_IDisposable_Dispose_m822AD9373E981AF92EC773A7775471E70F195AF4_gshared)(__this, method);
}
inline Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6 Dictionary_2_GetEnumerator_m0A39AE57744872DEC70B8ADE8E70EC36D30626ED (Dictionary_2_t647DF567ADBEEEC3E77B6353D82BF2D62976B39C* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6 (*) (Dictionary_2_t647DF567ADBEEEC3E77B6353D82BF2D62976B39C*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m0A39AE57744872DEC70B8ADE8E70EC36D30626ED_gshared)(__this, method);
}
inline KeyValuePair_2_tC3AC829C78D0C95AC43F29F601558266274BB956 Enumerator_get_Current_m0FECBAC967E8393562F8A3672F8E4749569DC02E_inline (Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tC3AC829C78D0C95AC43F29F601558266274BB956 (*) (Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6*, const RuntimeMethod*))Enumerator_get_Current_m0FECBAC967E8393562F8A3672F8E4749569DC02E_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m66EFFC104228A48B97687285B55584759E52AF22 (Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6*, const RuntimeMethod*))Enumerator_MoveNext_m66EFFC104228A48B97687285B55584759E52AF22_gshared)(__this, method);
}
inline void Enumerator_Dispose_m76E478BB04060042CC11D4F77BA9460C222F01CD (Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6*, const RuntimeMethod*))Enumerator_Dispose_m76E478BB04060042CC11D4F77BA9460C222F01CD_gshared)(__this, method);
}
inline void U3CEnumerateU3Ed__17__ctor_mB0746BB971E5BD52B247C27D67966E85F8B8065E (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605*, int32_t, const RuntimeMethod*))U3CEnumerateU3Ed__17__ctor_mB0746BB971E5BD52B247C27D67966E85F8B8065E_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline RuntimeObject* U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_GetEnumerator_m320EC44570181958F62125A4F84F70EFA610AB28 (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605*, const RuntimeMethod*))U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_GetEnumerator_m320EC44570181958F62125A4F84F70EFA610AB28_gshared)(__this, method);
}
inline void U3CEnumerateU3Ed__17_U3CU3Em__Finally1_m4262D37C649DD5BC0B49ABE69C4A3AD28C907D22 (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749*, const RuntimeMethod*))U3CEnumerateU3Ed__17_U3CU3Em__Finally1_m4262D37C649DD5BC0B49ABE69C4A3AD28C907D22_gshared)(__this, method);
}
inline void U3CEnumerateU3Ed__17_System_IDisposable_Dispose_m685BD7E009413A3367133F7EC4D6C9A723DAB161 (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749*, const RuntimeMethod*))U3CEnumerateU3Ed__17_System_IDisposable_Dispose_m685BD7E009413A3367133F7EC4D6C9A723DAB161_gshared)(__this, method);
}
inline Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B Dictionary_2_GetEnumerator_m866DC6D478308614FFCE0750CDBCE7981295C1DD (Dictionary_2_t5B0B823A74BF369A8BA2728444AAA80B3D22C39C* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B (*) (Dictionary_2_t5B0B823A74BF369A8BA2728444AAA80B3D22C39C*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m866DC6D478308614FFCE0750CDBCE7981295C1DD_gshared)(__this, method);
}
inline KeyValuePair_2_tA75B083C5C7F9CE6237B200BC4A36B820A24C5C8 Enumerator_get_Current_m0066B93625BCFB48A397FBDD68007AAB78C628E8_inline (Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tA75B083C5C7F9CE6237B200BC4A36B820A24C5C8 (*) (Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B*, const RuntimeMethod*))Enumerator_get_Current_m0066B93625BCFB48A397FBDD68007AAB78C628E8_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mFD341E92CF254C87FE8A00B192EF91521DD704D7 (Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B*, const RuntimeMethod*))Enumerator_MoveNext_mFD341E92CF254C87FE8A00B192EF91521DD704D7_gshared)(__this, method);
}
inline void Enumerator_Dispose_mB78F9BEC4B28EBE0919BC71D6451D716A5787E2B (Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B*, const RuntimeMethod*))Enumerator_Dispose_mB78F9BEC4B28EBE0919BC71D6451D716A5787E2B_gshared)(__this, method);
}
inline void U3CEnumerateU3Ed__17__ctor_m89A3352B6AF327E5ECC6B7F2AF8E61B9ED03E291 (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749*, int32_t, const RuntimeMethod*))U3CEnumerateU3Ed__17__ctor_m89A3352B6AF327E5ECC6B7F2AF8E61B9ED03E291_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline RuntimeObject* U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_GetEnumerator_m74BEE0528CC325DBDE6B183458D33A27D446D700 (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749*, const RuntimeMethod*))U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_GetEnumerator_m74BEE0528CC325DBDE6B183458D33A27D446D700_gshared)(__this, method);
}
inline void U3CEnumerateU3Ed__17_U3CU3Em__Finally1_m087AF99316F92F40C7069B54D25CC750C6B5C5A6 (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C*, const RuntimeMethod*))U3CEnumerateU3Ed__17_U3CU3Em__Finally1_m087AF99316F92F40C7069B54D25CC750C6B5C5A6_gshared)(__this, method);
}
inline void U3CEnumerateU3Ed__17_System_IDisposable_Dispose_m1DFF7D1D3CE54878B6BA86061DDB22AF6946ED80 (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C*, const RuntimeMethod*))U3CEnumerateU3Ed__17_System_IDisposable_Dispose_m1DFF7D1D3CE54878B6BA86061DDB22AF6946ED80_gshared)(__this, method);
}
inline Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1 Dictionary_2_GetEnumerator_mC7D738C9E3A5C4928A1372118A07812193CAFBC5 (Dictionary_2_tC90C3EE20FDA713BD1E7D78ED8E5EBA6B529306A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1 (*) (Dictionary_2_tC90C3EE20FDA713BD1E7D78ED8E5EBA6B529306A*, const RuntimeMethod*))Dictionary_2_GetEnumerator_mC7D738C9E3A5C4928A1372118A07812193CAFBC5_gshared)(__this, method);
}
inline KeyValuePair_2_t9E936A9C063E78E3C06E01B1A28CAB03B4C51221 Enumerator_get_Current_mA2D3EE07E11DDC88DEA69B2580EAD5218FE78599_inline (Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t9E936A9C063E78E3C06E01B1A28CAB03B4C51221 (*) (Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1*, const RuntimeMethod*))Enumerator_get_Current_mA2D3EE07E11DDC88DEA69B2580EAD5218FE78599_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mF71888B7382F2EAF7606858E54551944779DC622 (Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1*, const RuntimeMethod*))Enumerator_MoveNext_mF71888B7382F2EAF7606858E54551944779DC622_gshared)(__this, method);
}
inline void Enumerator_Dispose_m4F6BFA345E68F3F0A7F8875FFD149A55D5240FD1 (Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1*, const RuntimeMethod*))Enumerator_Dispose_m4F6BFA345E68F3F0A7F8875FFD149A55D5240FD1_gshared)(__this, method);
}
inline void U3CEnumerateU3Ed__17__ctor_mECCA51413CF3890A35F5092E595CEC7473A48CF1 (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C*, int32_t, const RuntimeMethod*))U3CEnumerateU3Ed__17__ctor_mECCA51413CF3890A35F5092E595CEC7473A48CF1_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline RuntimeObject* U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_GetEnumerator_m085EEDE4BD6482A57C28B47622AF54C02BFFA8E9 (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C*, const RuntimeMethod*))U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_GetEnumerator_m085EEDE4BD6482A57C28B47622AF54C02BFFA8E9_gshared)(__this, method);
}
inline int32_t Segment_get_FreezeOffset_m402D47C4B47FF6B763734B006DA71BA5DBC42582 (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*, const RuntimeMethod*))Segment_get_FreezeOffset_m402D47C4B47FF6B763734B006DA71BA5DBC42582_gshared)(__this, method);
}
inline RuntimeObject* ConcurrentQueue_1_GetItemWhenAvailable_m8CD12D6BE7E6FAE430B1FDF9DC5673FA0542C7F9 (ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* __this, Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* ___0_segment, int32_t ___1_i, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4*, Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*, int32_t, const RuntimeMethod*))ConcurrentQueue_1_GetItemWhenAvailable_m8CD12D6BE7E6FAE430B1FDF9DC5673FA0542C7F9_gshared)(__this, ___0_segment, ___1_i, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___0_status, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopHelper_AddContinuation_m5B8F03E45A820D91B17CFA56AA93E7444BEC17E0 (int32_t ___0_timing, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_continuation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskScheduler_PublishUnobservedTaskException_m9F6352174ED5654B0A9FB5562B6FF25A788B27D3 (Exception_t* ___0_ex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*, const RuntimeMethod*))Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_gshared_inline)(__this, ___0_task, method);
}
inline int32_t UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*, const RuntimeMethod*))UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_gshared_inline)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__11__ctor_m98F3A5A7309EB7CAC69EB18DCA8905AA7B3DE2E8_gshared (U3CDisposeAsyncU3Ed__11_t89ED05E58A55A277A6F97431EE3CCFD448F9257F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__11_MoveNext_m31668881A8859F8617C7522D40E13AEA4828CD3C_gshared (U3CDisposeAsyncU3Ed__11_t89ED05E58A55A277A6F97431EE3CCFD448F9257F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CDisposeAsyncU3Ed__11_t89ED05E58A55A277A6F97431EE3CCFD448F9257F* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	Exception_t* V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014_1;
			}
		}
		{
			goto IL_0019_1;
		}

IL_0012_1:
		{
			goto IL_0077_1;
		}

IL_0014_1:
		{
			goto IL_00fd_1;
		}

IL_0019_1:
		{
			_Queue_tECDD01C33751DFE4942831EF0C7D9FB09C499871* L_3 = __this->___U3CU3E4__this;
			NullCheck(L_3);
			RuntimeObject* L_4 = L_3->___sourceEnumerator;
			V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_009c_1;
			}
		}
		{
			_Queue_tECDD01C33751DFE4942831EF0C7D9FB09C499871* L_6 = __this->___U3CU3E4__this;
			NullCheck(L_6);
			RuntimeObject* L_7 = L_6->___sourceEnumerator;
			NullCheck((RuntimeObject*)L_7);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_8;
			L_8 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
			V_3 = L_8;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_9;
			L_9 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_9;
			bool L_10;
			L_10 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_10)
			{
				goto IL_0093_1;
			}
		}
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->___U3CU3E1__state = L_11;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_12 = V_2;
			__this->___U3CU3Eu__1 = L_12;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_13 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__11_t89ED05E58A55A277A6F97431EE3CCFD448F9257F**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_13, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0190;
		}

IL_0077_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_14 = __this->___U3CU3Eu__1;
			V_2 = L_14;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_15 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_15, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->___U3CU3E1__state = L_16;
		}

IL_0093_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_009c_1:
		{
			_Queue_tECDD01C33751DFE4942831EF0C7D9FB09C499871* L_17 = __this->___U3CU3E4__this;
			NullCheck(L_17);
			RuntimeObject* L_18 = L_17->___channelEnumerator;
			V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_18) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_19 = V_5;
			if (!L_19)
			{
				goto IL_0123_1;
			}
		}
		{
			_Queue_tECDD01C33751DFE4942831EF0C7D9FB09C499871* L_20 = __this->___U3CU3E4__this;
			NullCheck(L_20);
			RuntimeObject* L_21 = L_20->___channelEnumerator;
			NullCheck((RuntimeObject*)L_21);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_22;
			L_22 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_21);
			V_3 = L_22;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_23;
			L_23 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_6 = L_23;
			bool L_24;
			L_24 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_6), NULL);
			if (L_24)
			{
				goto IL_011a_1;
			}
		}
		{
			int32_t L_25 = 1;
			V_0 = L_25;
			__this->___U3CU3E1__state = L_25;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_26 = V_6;
			__this->___U3CU3Eu__1 = L_26;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_27 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__11_t89ED05E58A55A277A6F97431EE3CCFD448F9257F**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_27, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0190;
		}

IL_00fd_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_28 = __this->___U3CU3Eu__1;
			V_6 = L_28;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_29 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_29, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_30 = (-1);
			V_0 = L_30;
			__this->___U3CU3E1__state = L_30;
		}

IL_011a_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_6), NULL);
		}

IL_0123_1:
		{
			_Queue_tECDD01C33751DFE4942831EF0C7D9FB09C499871* L_31 = __this->___U3CU3E4__this;
			NullCheck(L_31);
			bool L_32 = L_31->___channelClosed;
			V_7 = (bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
			bool L_33 = V_7;
			if (!L_33)
			{
				goto IL_0160_1;
			}
		}
		{
			_Queue_tECDD01C33751DFE4942831EF0C7D9FB09C499871* L_34 = __this->___U3CU3E4__this;
			NullCheck(L_34);
			L_34->___channelClosed = (bool)1;
			_Queue_tECDD01C33751DFE4942831EF0C7D9FB09C499871* L_35 = __this->___U3CU3E4__this;
			NullCheck(L_35);
			Channel_1_t196AC538B8F832BAE1683ED47BFBECF0CC815252* L_36 = L_35->___channel;
			NullCheck((Channel_2_t063677A10473E8126C159B5E3FC31FB43E1122A7*)L_36);
			ChannelWriter_1_t1209690B768C24565769C0EC929D8E49E3C09877* L_37;
			L_37 = ((  ChannelWriter_1_t1209690B768C24565769C0EC929D8E49E3C09877* (*) (Channel_2_t063677A10473E8126C159B5E3FC31FB43E1122A7*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))((Channel_2_t063677A10473E8126C159B5E3FC31FB43E1122A7*)L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
			OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_38 = (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)il2cpp_codegen_object_new(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
			OperationCanceledException__ctor_m2F34C3B8AEE2AA6C7EB2BB77AE5E0289101293E4(L_38, NULL);
			NullCheck(L_37);
			bool L_39;
			L_39 = VirtualFuncInvoker1< bool, Exception_t* >::Invoke(5, L_37, (Exception_t*)L_38);
		}

IL_0160_1:
		{
			goto IL_017c;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0162;
		}
		throw e;
	}

CATCH_0162:
	{
		Exception_t* L_40 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_8 = L_40;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_41 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_42 = V_8;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_41, L_42, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0190;
	}

IL_017c:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_43 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_43, NULL);
	}

IL_0190:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__11_SetStateMachine_m645C7B3B07D49DE209FCE5480EBDA2612878ECD7_gshared (U3CDisposeAsyncU3Ed__11_t89ED05E58A55A277A6F97431EE3CCFD448F9257F* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__115__ctor_mFA254244F53E87162A046737A66B7FBD1F341CD5_gshared (U3CDisposeAsyncU3Ed__115_tE6A33D2F8D25185A2D66A391E0021E1A3E00CF17* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__115_MoveNext_m40D2BF0FEE1234F41323B24B4C23967232AD375E_gshared (U3CDisposeAsyncU3Ed__115_tE6A33D2F8D25185A2D66A391E0021E1A3E00CF17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CDisposeAsyncU3Ed__115_tE6A33D2F8D25185A2D66A391E0021E1A3E00CF17* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	bool V_15 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_18;
	memset((&V_18), 0, sizeof(V_18));
	bool V_19 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_24;
	memset((&V_24), 0, sizeof(V_24));
	bool V_25 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_26;
	memset((&V_26), 0, sizeof(V_26));
	bool V_27 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_28;
	memset((&V_28), 0, sizeof(V_28));
	Exception_t* V_29 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_0043_1;
				}
				case 1:
				{
					goto IL_0048_1;
				}
				case 2:
				{
					goto IL_004d_1;
				}
				case 3:
				{
					goto IL_0052_1;
				}
				case 4:
				{
					goto IL_0057_1;
				}
				case 5:
				{
					goto IL_005c_1;
				}
				case 6:
				{
					goto IL_0061_1;
				}
				case 7:
				{
					goto IL_0066_1;
				}
				case 8:
				{
					goto IL_006b_1;
				}
				case 9:
				{
					goto IL_0070_1;
				}
				case 10:
				{
					goto IL_0075_1;
				}
				case 11:
				{
					goto IL_007a_1;
				}
				case 12:
				{
					goto IL_007f_1;
				}
			}
		}
		{
			goto IL_0084_1;
		}

IL_0043_1:
		{
			goto IL_00e2_1;
		}

IL_0048_1:
		{
			goto IL_0168_1;
		}

IL_004d_1:
		{
			goto IL_01ef_1;
		}

IL_0052_1:
		{
			goto IL_0276_1;
		}

IL_0057_1:
		{
			goto IL_02fd_1;
		}

IL_005c_1:
		{
			goto IL_0384_1;
		}

IL_0061_1:
		{
			goto IL_040b_1;
		}

IL_0066_1:
		{
			goto IL_0492_1;
		}

IL_006b_1:
		{
			goto IL_0519_1;
		}

IL_0070_1:
		{
			goto IL_05a1_1;
		}

IL_0075_1:
		{
			goto IL_0629_1;
		}

IL_007a_1:
		{
			goto IL_06b1_1;
		}

IL_007f_1:
		{
			goto IL_0736_1;
		}

IL_0084_1:
		{
			_CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0* L_2 = __this->___U3CU3E4__this;
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),29));
			V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_0107_1;
			}
		}
		{
			_CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0* L_5 = __this->___U3CU3E4__this;
			RuntimeObject* L_6 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),29));
			NullCheck((RuntimeObject*)L_6);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
			L_7 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			V_3 = L_7;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_8;
			L_8 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_9)
			{
				goto IL_00fe_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state = L_10;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_11 = V_2;
			__this->___U3CU3Eu__1 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_12 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__115_tE6A33D2F8D25185A2D66A391E0021E1A3E00CF17**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_12, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_078c;
		}

IL_00e2_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13 = __this->___U3CU3Eu__1;
			V_2 = L_13;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_14 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_14, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state = L_15;
		}

IL_00fe_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_0107_1:
		{
			_CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0* L_16 = __this->___U3CU3E4__this;
			RuntimeObject* L_17 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),34));
			V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_18 = V_5;
			if (!L_18)
			{
				goto IL_018e_1;
			}
		}
		{
			_CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0* L_19 = __this->___U3CU3E4__this;
			RuntimeObject* L_20 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),34));
			NullCheck((RuntimeObject*)L_20);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_21;
			L_21 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
			V_3 = L_21;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_22;
			L_22 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_6 = L_22;
			bool L_23;
			L_23 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_6), NULL);
			if (L_23)
			{
				goto IL_0185_1;
			}
		}
		{
			int32_t L_24 = 1;
			V_0 = L_24;
			__this->___U3CU3E1__state = L_24;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_25 = V_6;
			__this->___U3CU3Eu__1 = L_25;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_26 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__115_tE6A33D2F8D25185A2D66A391E0021E1A3E00CF17**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_26, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_078c;
		}

IL_0168_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_27 = __this->___U3CU3Eu__1;
			V_6 = L_27;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_28 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_28, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_29 = (-1);
			V_0 = L_29;
			__this->___U3CU3E1__state = L_29;
		}

IL_0185_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_6), NULL);
		}

IL_018e_1:
		{
			_CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0* L_30 = __this->___U3CU3E4__this;
			RuntimeObject* L_31 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),39));
			V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_31) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_32 = V_7;
			if (!L_32)
			{
				goto IL_0215_1;
			}
		}
		{
			_CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0* L_33 = __this->___U3CU3E4__this;
			RuntimeObject* L_34 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_33, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),39));
			NullCheck((RuntimeObject*)L_34);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_35;
			L_35 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
			V_3 = L_35;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36;
			L_36 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_8 = L_36;
			bool L_37;
			L_37 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_8), NULL);
			if (L_37)
			{
				goto IL_020c_1;
			}
		}
		{
			int32_t L_38 = 2;
			V_0 = L_38;
			__this->___U3CU3E1__state = L_38;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39 = V_8;
			__this->___U3CU3Eu__1 = L_39;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_40 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__115_tE6A33D2F8D25185A2D66A391E0021E1A3E00CF17**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_40, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_078c;
		}

IL_01ef_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_41 = __this->___U3CU3Eu__1;
			V_8 = L_41;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_42 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_42, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_43 = (-1);
			V_0 = L_43;
			__this->___U3CU3E1__state = L_43;
		}

IL_020c_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_8), NULL);
		}

IL_0215_1:
		{
			_CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0* L_44 = __this->___U3CU3E4__this;
			RuntimeObject* L_45 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),44));
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_45) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_46 = V_9;
			if (!L_46)
			{
				goto IL_029c_1;
			}
		}
		{
			_CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0* L_47 = __this->___U3CU3E4__this;
			RuntimeObject* L_48 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_47, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),44));
			NullCheck((RuntimeObject*)L_48);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_49;
			L_49 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_48);
			V_3 = L_49;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50;
			L_50 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_10 = L_50;
			bool L_51;
			L_51 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_51)
			{
				goto IL_0293_1;
			}
		}
		{
			int32_t L_52 = 3;
			V_0 = L_52;
			__this->___U3CU3E1__state = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_53 = V_10;
			__this->___U3CU3Eu__1 = L_53;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_54 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__115_tE6A33D2F8D25185A2D66A391E0021E1A3E00CF17**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_54, (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_078c;
		}

IL_0276_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_55 = __this->___U3CU3Eu__1;
			V_10 = L_55;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_56 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_56, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_57 = (-1);
			V_0 = L_57;
			__this->___U3CU3E1__state = L_57;
		}

IL_0293_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_029c_1:
		{
			_CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0* L_58 = __this->___U3CU3E4__this;
			RuntimeObject* L_59 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_58, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),49));
			V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_60 = V_11;
			if (!L_60)
			{
				goto IL_0323_1;
			}
		}
		{
			_CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0* L_61 = __this->___U3CU3E4__this;
			RuntimeObject* L_62 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_61, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),49));
			NullCheck((RuntimeObject*)L_62);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_63;
			L_63 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_62);
			V_3 = L_63;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_64;
			L_64 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_12 = L_64;
			bool L_65;
			L_65 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_12), NULL);
			if (L_65)
			{
				goto IL_031a_1;
			}
		}
		{
			int32_t L_66 = 4;
			V_0 = L_66;
			__this->___U3CU3E1__state = L_66;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_67 = V_12;
			__this->___U3CU3Eu__1 = L_67;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_68 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__115_tE6A33D2F8D25185A2D66A391E0021E1A3E00CF17**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_68, (&V_12), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_078c;
		}

IL_02fd_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_69 = __this->___U3CU3Eu__1;
			V_12 = L_69;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_70 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_70, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_71 = (-1);
			V_0 = L_71;
			__this->___U3CU3E1__state = L_71;
		}

IL_031a_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_12), NULL);
		}

IL_0323_1:
		{
			_CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0* L_72 = __this->___U3CU3E4__this;
			RuntimeObject* L_73 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_72, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),54));
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_73) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_74 = V_13;
			if (!L_74)
			{
				goto IL_03aa_1;
			}
		}
		{
			_CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0* L_75 = __this->___U3CU3E4__this;
			RuntimeObject* L_76 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_75, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),54));
			NullCheck((RuntimeObject*)L_76);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_77;
			L_77 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_76);
			V_3 = L_77;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_78;
			L_78 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_14 = L_78;
			bool L_79;
			L_79 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_79)
			{
				goto IL_03a1_1;
			}
		}
		{
			int32_t L_80 = 5;
			V_0 = L_80;
			__this->___U3CU3E1__state = L_80;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_81 = V_14;
			__this->___U3CU3Eu__1 = L_81;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_82 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__115_tE6A33D2F8D25185A2D66A391E0021E1A3E00CF17**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_82, (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_078c;
		}

IL_0384_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_83 = __this->___U3CU3Eu__1;
			V_14 = L_83;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_84 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_84, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_85 = (-1);
			V_0 = L_85;
			__this->___U3CU3E1__state = L_85;
		}

IL_03a1_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_03aa_1:
		{
			_CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0* L_86 = __this->___U3CU3E4__this;
			RuntimeObject* L_87 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_86, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),59));
			V_15 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_87) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_88 = V_15;
			if (!L_88)
			{
				goto IL_0431_1;
			}
		}
		{
			_CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0* L_89 = __this->___U3CU3E4__this;
			RuntimeObject* L_90 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_89, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),59));
			NullCheck((RuntimeObject*)L_90);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_91;
			L_91 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_90);
			V_3 = L_91;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_92;
			L_92 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_16 = L_92;
			bool L_93;
			L_93 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_16), NULL);
			if (L_93)
			{
				goto IL_0428_1;
			}
		}
		{
			int32_t L_94 = 6;
			V_0 = L_94;
			__this->___U3CU3E1__state = L_94;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_95 = V_16;
			__this->___U3CU3Eu__1 = L_95;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_96 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__115_tE6A33D2F8D25185A2D66A391E0021E1A3E00CF17**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_96, (&V_16), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_078c;
		}

IL_040b_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_97 = __this->___U3CU3Eu__1;
			V_16 = L_97;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_98 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_98, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_99 = (-1);
			V_0 = L_99;
			__this->___U3CU3E1__state = L_99;
		}

IL_0428_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_16), NULL);
		}

IL_0431_1:
		{
			_CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0* L_100 = __this->___U3CU3E4__this;
			RuntimeObject* L_101 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_100, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),64));
			V_17 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_101) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_102 = V_17;
			if (!L_102)
			{
				goto IL_04b8_1;
			}
		}
		{
			_CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0* L_103 = __this->___U3CU3E4__this;
			RuntimeObject* L_104 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_103, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),64));
			NullCheck((RuntimeObject*)L_104);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_105;
			L_105 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_104);
			V_3 = L_105;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_106;
			L_106 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_18 = L_106;
			bool L_107;
			L_107 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_18), NULL);
			if (L_107)
			{
				goto IL_04af_1;
			}
		}
		{
			int32_t L_108 = 7;
			V_0 = L_108;
			__this->___U3CU3E1__state = L_108;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_109 = V_18;
			__this->___U3CU3Eu__1 = L_109;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_110 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__115_tE6A33D2F8D25185A2D66A391E0021E1A3E00CF17**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_110, (&V_18), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_078c;
		}

IL_0492_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_111 = __this->___U3CU3Eu__1;
			V_18 = L_111;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_112 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_112, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_113 = (-1);
			V_0 = L_113;
			__this->___U3CU3E1__state = L_113;
		}

IL_04af_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_18), NULL);
		}

IL_04b8_1:
		{
			_CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0* L_114 = __this->___U3CU3E4__this;
			RuntimeObject* L_115 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_114, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),69));
			V_19 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_115) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_116 = V_19;
			if (!L_116)
			{
				goto IL_053f_1;
			}
		}
		{
			_CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0* L_117 = __this->___U3CU3E4__this;
			RuntimeObject* L_118 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_117, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),69));
			NullCheck((RuntimeObject*)L_118);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_119;
			L_119 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_118);
			V_3 = L_119;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_120;
			L_120 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_20 = L_120;
			bool L_121;
			L_121 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_20), NULL);
			if (L_121)
			{
				goto IL_0536_1;
			}
		}
		{
			int32_t L_122 = 8;
			V_0 = L_122;
			__this->___U3CU3E1__state = L_122;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_123 = V_20;
			__this->___U3CU3Eu__1 = L_123;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_124 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__115_tE6A33D2F8D25185A2D66A391E0021E1A3E00CF17**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_124, (&V_20), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_078c;
		}

IL_0519_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_125 = __this->___U3CU3Eu__1;
			V_20 = L_125;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_126 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_126, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_127 = (-1);
			V_0 = L_127;
			__this->___U3CU3E1__state = L_127;
		}

IL_0536_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_20), NULL);
		}

IL_053f_1:
		{
			_CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0* L_128 = __this->___U3CU3E4__this;
			RuntimeObject* L_129 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_128, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),74));
			V_21 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_129) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_130 = V_21;
			if (!L_130)
			{
				goto IL_05c7_1;
			}
		}
		{
			_CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0* L_131 = __this->___U3CU3E4__this;
			RuntimeObject* L_132 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_131, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),74));
			NullCheck((RuntimeObject*)L_132);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_133;
			L_133 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_132);
			V_3 = L_133;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_134;
			L_134 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_22 = L_134;
			bool L_135;
			L_135 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_22), NULL);
			if (L_135)
			{
				goto IL_05be_1;
			}
		}
		{
			int32_t L_136 = ((int32_t)9);
			V_0 = L_136;
			__this->___U3CU3E1__state = L_136;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_137 = V_22;
			__this->___U3CU3Eu__1 = L_137;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_138 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__115_tE6A33D2F8D25185A2D66A391E0021E1A3E00CF17**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_138, (&V_22), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_078c;
		}

IL_05a1_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_139 = __this->___U3CU3Eu__1;
			V_22 = L_139;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_140 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_140, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_141 = (-1);
			V_0 = L_141;
			__this->___U3CU3E1__state = L_141;
		}

IL_05be_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_22), NULL);
		}

IL_05c7_1:
		{
			_CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0* L_142 = __this->___U3CU3E4__this;
			RuntimeObject* L_143 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_142, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),79));
			V_23 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_143) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_144 = V_23;
			if (!L_144)
			{
				goto IL_064f_1;
			}
		}
		{
			_CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0* L_145 = __this->___U3CU3E4__this;
			RuntimeObject* L_146 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_145, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),79));
			NullCheck((RuntimeObject*)L_146);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_147;
			L_147 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_146);
			V_3 = L_147;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_148;
			L_148 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_24 = L_148;
			bool L_149;
			L_149 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_24), NULL);
			if (L_149)
			{
				goto IL_0646_1;
			}
		}
		{
			int32_t L_150 = ((int32_t)10);
			V_0 = L_150;
			__this->___U3CU3E1__state = L_150;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_151 = V_24;
			__this->___U3CU3Eu__1 = L_151;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_152 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__115_tE6A33D2F8D25185A2D66A391E0021E1A3E00CF17**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_152, (&V_24), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_078c;
		}

IL_0629_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_153 = __this->___U3CU3Eu__1;
			V_24 = L_153;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_154 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_154, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_155 = (-1);
			V_0 = L_155;
			__this->___U3CU3E1__state = L_155;
		}

IL_0646_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_24), NULL);
		}

IL_064f_1:
		{
			_CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0* L_156 = __this->___U3CU3E4__this;
			RuntimeObject* L_157 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_156, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),84));
			V_25 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_157) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_158 = V_25;
			if (!L_158)
			{
				goto IL_06d7_1;
			}
		}
		{
			_CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0* L_159 = __this->___U3CU3E4__this;
			RuntimeObject* L_160 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_159, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),84));
			NullCheck((RuntimeObject*)L_160);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_161;
			L_161 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_160);
			V_3 = L_161;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_162;
			L_162 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_26 = L_162;
			bool L_163;
			L_163 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_26), NULL);
			if (L_163)
			{
				goto IL_06ce_1;
			}
		}
		{
			int32_t L_164 = ((int32_t)11);
			V_0 = L_164;
			__this->___U3CU3E1__state = L_164;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_165 = V_26;
			__this->___U3CU3Eu__1 = L_165;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_166 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__115_tE6A33D2F8D25185A2D66A391E0021E1A3E00CF17**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_166, (&V_26), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_078c;
		}

IL_06b1_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_167 = __this->___U3CU3Eu__1;
			V_26 = L_167;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_168 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_168, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_169 = (-1);
			V_0 = L_169;
			__this->___U3CU3E1__state = L_169;
		}

IL_06ce_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_26), NULL);
		}

IL_06d7_1:
		{
			_CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0* L_170 = __this->___U3CU3E4__this;
			RuntimeObject* L_171 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_170, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),89));
			V_27 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_171) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_172 = V_27;
			if (!L_172)
			{
				goto IL_075c_1;
			}
		}
		{
			_CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0* L_173 = __this->___U3CU3E4__this;
			RuntimeObject* L_174 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_173, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),89));
			NullCheck((RuntimeObject*)L_174);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_175;
			L_175 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_174);
			V_3 = L_175;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_176;
			L_176 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_28 = L_176;
			bool L_177;
			L_177 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_28), NULL);
			if (L_177)
			{
				goto IL_0753_1;
			}
		}
		{
			int32_t L_178 = ((int32_t)12);
			V_0 = L_178;
			__this->___U3CU3E1__state = L_178;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_179 = V_28;
			__this->___U3CU3Eu__1 = L_179;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_180 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__115_tE6A33D2F8D25185A2D66A391E0021E1A3E00CF17**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_180, (&V_28), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_078c;
		}

IL_0736_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_181 = __this->___U3CU3Eu__1;
			V_28 = L_181;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_182 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_182, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_183 = (-1);
			V_0 = L_183;
			__this->___U3CU3E1__state = L_183;
		}

IL_0753_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_28), NULL);
		}

IL_075c_1:
		{
			goto IL_0778;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_075e;
		}
		throw e;
	}

CATCH_075e:
	{
		Exception_t* L_184 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_29 = L_184;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_185 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_186 = V_29;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_185, L_186, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_078c;
	}

IL_0778:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_187 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_187, NULL);
	}

IL_078c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__115_SetStateMachine_m85929788EF43F1B48E0F3FCC6F178155B48D79C4_gshared (U3CDisposeAsyncU3Ed__115_tE6A33D2F8D25185A2D66A391E0021E1A3E00CF17* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__12__ctor_m5537AA17EC5C81B20A2126F920829DF42AB94ABE_gshared (U3CDisposeAsyncU3Ed__12_tD4BC7F3AA975D6EBE8617518F0D399725605D361* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__12_MoveNext_m780A0CE6153C00A66BE3D0741201D94786BAF9BF_gshared (U3CDisposeAsyncU3Ed__12_tD4BC7F3AA975D6EBE8617518F0D399725605D361* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CDisposeAsyncU3Ed__12_tD4BC7F3AA975D6EBE8617518F0D399725605D361* V_4 = NULL;
	bool V_5 = false;
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_006c_1;
		}

IL_000e_1:
		{
			Enumerator_t15FA1624E3BE0AC1F3A918185439A63138D413F4* L_2 = __this->___U3CU3E4__this;
			NullCheck(L_2);
			RuntimeObject* L_3 = L_2->___channelEnumerator;
			V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_0091_1;
			}
		}
		{
			Enumerator_t15FA1624E3BE0AC1F3A918185439A63138D413F4* L_5 = __this->___U3CU3E4__this;
			NullCheck(L_5);
			RuntimeObject* L_6 = L_5->___channelEnumerator;
			NullCheck((RuntimeObject*)L_6);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
			L_7 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			V_3 = L_7;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_8;
			L_8 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_9)
			{
				goto IL_0088_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state = L_10;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_11 = V_2;
			__this->___U3CU3Eu__1 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_12 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__12_tD4BC7F3AA975D6EBE8617518F0D399725605D361**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_12, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0101;
		}

IL_006c_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13 = __this->___U3CU3Eu__1;
			V_2 = L_13;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_14 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_14, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state = L_15;
		}

IL_0088_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_0091_1:
		{
			Enumerator_t15FA1624E3BE0AC1F3A918185439A63138D413F4* L_16 = __this->___U3CU3E4__this;
			NullCheck(L_16);
			uint8_t L_17 = L_16->___state;
			V_5 = (bool)((((int32_t)((((int32_t)L_17) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_18 = V_5;
			if (!L_18)
			{
				goto IL_00d1_1;
			}
		}
		{
			Enumerator_t15FA1624E3BE0AC1F3A918185439A63138D413F4* L_19 = __this->___U3CU3E4__this;
			NullCheck(L_19);
			L_19->___state = (uint8_t)2;
			Enumerator_t15FA1624E3BE0AC1F3A918185439A63138D413F4* L_20 = __this->___U3CU3E4__this;
			NullCheck(L_20);
			Channel_1_t54EA6F93BD0DB668227D2390918ED6CFA7C02A80* L_21 = L_20->___channel;
			NullCheck((Channel_2_t45849CB0DDFE22F6DE89A3AEC42C6041EF634A9D*)L_21);
			ChannelWriter_1_tFA8B6F723BEB7DA7FFD8372A38D21E89F5A2E7D9* L_22;
			L_22 = ((  ChannelWriter_1_tFA8B6F723BEB7DA7FFD8372A38D21E89F5A2E7D9* (*) (Channel_2_t45849CB0DDFE22F6DE89A3AEC42C6041EF634A9D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))((Channel_2_t45849CB0DDFE22F6DE89A3AEC42C6041EF634A9D*)L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
			OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_23 = (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)il2cpp_codegen_object_new(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
			OperationCanceledException__ctor_m2F34C3B8AEE2AA6C7EB2BB77AE5E0289101293E4(L_23, NULL);
			NullCheck(L_22);
			bool L_24;
			L_24 = VirtualFuncInvoker1< bool, Exception_t* >::Invoke(5, L_22, (Exception_t*)L_23);
		}

IL_00d1_1:
		{
			goto IL_00ed;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d3;
		}
		throw e;
	}

CATCH_00d3:
	{
		Exception_t* L_25 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_6 = L_25;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_26 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_27 = V_6;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_26, L_27, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0101;
	}

IL_00ed:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_28 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_28, NULL);
	}

IL_0101:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__12_SetStateMachine_mA39387F120B0E253ACFC98909C405BC2DD5C4ACE_gshared (U3CDisposeAsyncU3Ed__12_tD4BC7F3AA975D6EBE8617518F0D399725605D361* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__123__ctor_m0B44DB0CF87B6136F7EFE3FA6142C8765109203E_gshared (U3CDisposeAsyncU3Ed__123_t97C3032A726967F35233D685AE984B8173C3EB8A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__123_MoveNext_mCCAB92DF245F13CE064A57217831ED787312396E_gshared (U3CDisposeAsyncU3Ed__123_t97C3032A726967F35233D685AE984B8173C3EB8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CDisposeAsyncU3Ed__123_t97C3032A726967F35233D685AE984B8173C3EB8A* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	bool V_15 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_18;
	memset((&V_18), 0, sizeof(V_18));
	bool V_19 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_24;
	memset((&V_24), 0, sizeof(V_24));
	bool V_25 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_26;
	memset((&V_26), 0, sizeof(V_26));
	bool V_27 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_28;
	memset((&V_28), 0, sizeof(V_28));
	bool V_29 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_30;
	memset((&V_30), 0, sizeof(V_30));
	Exception_t* V_31 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_0047_1;
				}
				case 1:
				{
					goto IL_004c_1;
				}
				case 2:
				{
					goto IL_0051_1;
				}
				case 3:
				{
					goto IL_0056_1;
				}
				case 4:
				{
					goto IL_005b_1;
				}
				case 5:
				{
					goto IL_0060_1;
				}
				case 6:
				{
					goto IL_0065_1;
				}
				case 7:
				{
					goto IL_006a_1;
				}
				case 8:
				{
					goto IL_006f_1;
				}
				case 9:
				{
					goto IL_0074_1;
				}
				case 10:
				{
					goto IL_0079_1;
				}
				case 11:
				{
					goto IL_007e_1;
				}
				case 12:
				{
					goto IL_0083_1;
				}
				case 13:
				{
					goto IL_0088_1;
				}
			}
		}
		{
			goto IL_008d_1;
		}

IL_0047_1:
		{
			goto IL_00eb_1;
		}

IL_004c_1:
		{
			goto IL_0171_1;
		}

IL_0051_1:
		{
			goto IL_01f8_1;
		}

IL_0056_1:
		{
			goto IL_027f_1;
		}

IL_005b_1:
		{
			goto IL_0306_1;
		}

IL_0060_1:
		{
			goto IL_038d_1;
		}

IL_0065_1:
		{
			goto IL_0414_1;
		}

IL_006a_1:
		{
			goto IL_049b_1;
		}

IL_006f_1:
		{
			goto IL_0522_1;
		}

IL_0074_1:
		{
			goto IL_05aa_1;
		}

IL_0079_1:
		{
			goto IL_0632_1;
		}

IL_007e_1:
		{
			goto IL_06ba_1;
		}

IL_0083_1:
		{
			goto IL_0742_1;
		}

IL_0088_1:
		{
			goto IL_07c7_1;
		}

IL_008d_1:
		{
			_CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09* L_2 = __this->___U3CU3E4__this;
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),31));
			V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_0110_1;
			}
		}
		{
			_CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09* L_5 = __this->___U3CU3E4__this;
			RuntimeObject* L_6 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),31));
			NullCheck((RuntimeObject*)L_6);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
			L_7 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			V_3 = L_7;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_8;
			L_8 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_9)
			{
				goto IL_0107_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state = L_10;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_11 = V_2;
			__this->___U3CU3Eu__1 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_12 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__123_t97C3032A726967F35233D685AE984B8173C3EB8A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_12, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_081d;
		}

IL_00eb_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13 = __this->___U3CU3Eu__1;
			V_2 = L_13;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_14 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_14, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state = L_15;
		}

IL_0107_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_0110_1:
		{
			_CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09* L_16 = __this->___U3CU3E4__this;
			RuntimeObject* L_17 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),36));
			V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_18 = V_5;
			if (!L_18)
			{
				goto IL_0197_1;
			}
		}
		{
			_CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09* L_19 = __this->___U3CU3E4__this;
			RuntimeObject* L_20 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),36));
			NullCheck((RuntimeObject*)L_20);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_21;
			L_21 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
			V_3 = L_21;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_22;
			L_22 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_6 = L_22;
			bool L_23;
			L_23 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_6), NULL);
			if (L_23)
			{
				goto IL_018e_1;
			}
		}
		{
			int32_t L_24 = 1;
			V_0 = L_24;
			__this->___U3CU3E1__state = L_24;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_25 = V_6;
			__this->___U3CU3Eu__1 = L_25;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_26 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__123_t97C3032A726967F35233D685AE984B8173C3EB8A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_26, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_081d;
		}

IL_0171_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_27 = __this->___U3CU3Eu__1;
			V_6 = L_27;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_28 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_28, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_29 = (-1);
			V_0 = L_29;
			__this->___U3CU3E1__state = L_29;
		}

IL_018e_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_6), NULL);
		}

IL_0197_1:
		{
			_CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09* L_30 = __this->___U3CU3E4__this;
			RuntimeObject* L_31 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),41));
			V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_31) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_32 = V_7;
			if (!L_32)
			{
				goto IL_021e_1;
			}
		}
		{
			_CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09* L_33 = __this->___U3CU3E4__this;
			RuntimeObject* L_34 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_33, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),41));
			NullCheck((RuntimeObject*)L_34);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_35;
			L_35 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
			V_3 = L_35;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36;
			L_36 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_8 = L_36;
			bool L_37;
			L_37 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_8), NULL);
			if (L_37)
			{
				goto IL_0215_1;
			}
		}
		{
			int32_t L_38 = 2;
			V_0 = L_38;
			__this->___U3CU3E1__state = L_38;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39 = V_8;
			__this->___U3CU3Eu__1 = L_39;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_40 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__123_t97C3032A726967F35233D685AE984B8173C3EB8A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_40, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_081d;
		}

IL_01f8_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_41 = __this->___U3CU3Eu__1;
			V_8 = L_41;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_42 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_42, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_43 = (-1);
			V_0 = L_43;
			__this->___U3CU3E1__state = L_43;
		}

IL_0215_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_8), NULL);
		}

IL_021e_1:
		{
			_CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09* L_44 = __this->___U3CU3E4__this;
			RuntimeObject* L_45 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),46));
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_45) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_46 = V_9;
			if (!L_46)
			{
				goto IL_02a5_1;
			}
		}
		{
			_CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09* L_47 = __this->___U3CU3E4__this;
			RuntimeObject* L_48 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_47, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),46));
			NullCheck((RuntimeObject*)L_48);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_49;
			L_49 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_48);
			V_3 = L_49;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50;
			L_50 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_10 = L_50;
			bool L_51;
			L_51 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_51)
			{
				goto IL_029c_1;
			}
		}
		{
			int32_t L_52 = 3;
			V_0 = L_52;
			__this->___U3CU3E1__state = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_53 = V_10;
			__this->___U3CU3Eu__1 = L_53;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_54 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__123_t97C3032A726967F35233D685AE984B8173C3EB8A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_54, (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_081d;
		}

IL_027f_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_55 = __this->___U3CU3Eu__1;
			V_10 = L_55;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_56 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_56, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_57 = (-1);
			V_0 = L_57;
			__this->___U3CU3E1__state = L_57;
		}

IL_029c_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_02a5_1:
		{
			_CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09* L_58 = __this->___U3CU3E4__this;
			RuntimeObject* L_59 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_58, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),51));
			V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_60 = V_11;
			if (!L_60)
			{
				goto IL_032c_1;
			}
		}
		{
			_CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09* L_61 = __this->___U3CU3E4__this;
			RuntimeObject* L_62 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_61, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),51));
			NullCheck((RuntimeObject*)L_62);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_63;
			L_63 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_62);
			V_3 = L_63;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_64;
			L_64 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_12 = L_64;
			bool L_65;
			L_65 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_12), NULL);
			if (L_65)
			{
				goto IL_0323_1;
			}
		}
		{
			int32_t L_66 = 4;
			V_0 = L_66;
			__this->___U3CU3E1__state = L_66;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_67 = V_12;
			__this->___U3CU3Eu__1 = L_67;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_68 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__123_t97C3032A726967F35233D685AE984B8173C3EB8A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_68, (&V_12), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_081d;
		}

IL_0306_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_69 = __this->___U3CU3Eu__1;
			V_12 = L_69;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_70 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_70, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_71 = (-1);
			V_0 = L_71;
			__this->___U3CU3E1__state = L_71;
		}

IL_0323_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_12), NULL);
		}

IL_032c_1:
		{
			_CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09* L_72 = __this->___U3CU3E4__this;
			RuntimeObject* L_73 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_72, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),56));
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_73) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_74 = V_13;
			if (!L_74)
			{
				goto IL_03b3_1;
			}
		}
		{
			_CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09* L_75 = __this->___U3CU3E4__this;
			RuntimeObject* L_76 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_75, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),56));
			NullCheck((RuntimeObject*)L_76);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_77;
			L_77 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_76);
			V_3 = L_77;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_78;
			L_78 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_14 = L_78;
			bool L_79;
			L_79 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_79)
			{
				goto IL_03aa_1;
			}
		}
		{
			int32_t L_80 = 5;
			V_0 = L_80;
			__this->___U3CU3E1__state = L_80;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_81 = V_14;
			__this->___U3CU3Eu__1 = L_81;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_82 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__123_t97C3032A726967F35233D685AE984B8173C3EB8A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_82, (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_081d;
		}

IL_038d_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_83 = __this->___U3CU3Eu__1;
			V_14 = L_83;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_84 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_84, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_85 = (-1);
			V_0 = L_85;
			__this->___U3CU3E1__state = L_85;
		}

IL_03aa_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_03b3_1:
		{
			_CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09* L_86 = __this->___U3CU3E4__this;
			RuntimeObject* L_87 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_86, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),61));
			V_15 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_87) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_88 = V_15;
			if (!L_88)
			{
				goto IL_043a_1;
			}
		}
		{
			_CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09* L_89 = __this->___U3CU3E4__this;
			RuntimeObject* L_90 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_89, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),61));
			NullCheck((RuntimeObject*)L_90);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_91;
			L_91 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_90);
			V_3 = L_91;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_92;
			L_92 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_16 = L_92;
			bool L_93;
			L_93 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_16), NULL);
			if (L_93)
			{
				goto IL_0431_1;
			}
		}
		{
			int32_t L_94 = 6;
			V_0 = L_94;
			__this->___U3CU3E1__state = L_94;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_95 = V_16;
			__this->___U3CU3Eu__1 = L_95;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_96 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__123_t97C3032A726967F35233D685AE984B8173C3EB8A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_96, (&V_16), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_081d;
		}

IL_0414_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_97 = __this->___U3CU3Eu__1;
			V_16 = L_97;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_98 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_98, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_99 = (-1);
			V_0 = L_99;
			__this->___U3CU3E1__state = L_99;
		}

IL_0431_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_16), NULL);
		}

IL_043a_1:
		{
			_CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09* L_100 = __this->___U3CU3E4__this;
			RuntimeObject* L_101 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_100, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),66));
			V_17 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_101) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_102 = V_17;
			if (!L_102)
			{
				goto IL_04c1_1;
			}
		}
		{
			_CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09* L_103 = __this->___U3CU3E4__this;
			RuntimeObject* L_104 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_103, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),66));
			NullCheck((RuntimeObject*)L_104);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_105;
			L_105 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_104);
			V_3 = L_105;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_106;
			L_106 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_18 = L_106;
			bool L_107;
			L_107 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_18), NULL);
			if (L_107)
			{
				goto IL_04b8_1;
			}
		}
		{
			int32_t L_108 = 7;
			V_0 = L_108;
			__this->___U3CU3E1__state = L_108;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_109 = V_18;
			__this->___U3CU3Eu__1 = L_109;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_110 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__123_t97C3032A726967F35233D685AE984B8173C3EB8A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_110, (&V_18), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_081d;
		}

IL_049b_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_111 = __this->___U3CU3Eu__1;
			V_18 = L_111;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_112 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_112, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_113 = (-1);
			V_0 = L_113;
			__this->___U3CU3E1__state = L_113;
		}

IL_04b8_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_18), NULL);
		}

IL_04c1_1:
		{
			_CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09* L_114 = __this->___U3CU3E4__this;
			RuntimeObject* L_115 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_114, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),71));
			V_19 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_115) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_116 = V_19;
			if (!L_116)
			{
				goto IL_0548_1;
			}
		}
		{
			_CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09* L_117 = __this->___U3CU3E4__this;
			RuntimeObject* L_118 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_117, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),71));
			NullCheck((RuntimeObject*)L_118);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_119;
			L_119 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_118);
			V_3 = L_119;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_120;
			L_120 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_20 = L_120;
			bool L_121;
			L_121 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_20), NULL);
			if (L_121)
			{
				goto IL_053f_1;
			}
		}
		{
			int32_t L_122 = 8;
			V_0 = L_122;
			__this->___U3CU3E1__state = L_122;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_123 = V_20;
			__this->___U3CU3Eu__1 = L_123;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_124 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__123_t97C3032A726967F35233D685AE984B8173C3EB8A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_124, (&V_20), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_081d;
		}

IL_0522_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_125 = __this->___U3CU3Eu__1;
			V_20 = L_125;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_126 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_126, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_127 = (-1);
			V_0 = L_127;
			__this->___U3CU3E1__state = L_127;
		}

IL_053f_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_20), NULL);
		}

IL_0548_1:
		{
			_CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09* L_128 = __this->___U3CU3E4__this;
			RuntimeObject* L_129 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_128, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),76));
			V_21 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_129) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_130 = V_21;
			if (!L_130)
			{
				goto IL_05d0_1;
			}
		}
		{
			_CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09* L_131 = __this->___U3CU3E4__this;
			RuntimeObject* L_132 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_131, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),76));
			NullCheck((RuntimeObject*)L_132);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_133;
			L_133 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_132);
			V_3 = L_133;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_134;
			L_134 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_22 = L_134;
			bool L_135;
			L_135 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_22), NULL);
			if (L_135)
			{
				goto IL_05c7_1;
			}
		}
		{
			int32_t L_136 = ((int32_t)9);
			V_0 = L_136;
			__this->___U3CU3E1__state = L_136;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_137 = V_22;
			__this->___U3CU3Eu__1 = L_137;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_138 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__123_t97C3032A726967F35233D685AE984B8173C3EB8A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_138, (&V_22), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_081d;
		}

IL_05aa_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_139 = __this->___U3CU3Eu__1;
			V_22 = L_139;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_140 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_140, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_141 = (-1);
			V_0 = L_141;
			__this->___U3CU3E1__state = L_141;
		}

IL_05c7_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_22), NULL);
		}

IL_05d0_1:
		{
			_CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09* L_142 = __this->___U3CU3E4__this;
			RuntimeObject* L_143 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_142, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),81));
			V_23 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_143) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_144 = V_23;
			if (!L_144)
			{
				goto IL_0658_1;
			}
		}
		{
			_CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09* L_145 = __this->___U3CU3E4__this;
			RuntimeObject* L_146 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_145, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),81));
			NullCheck((RuntimeObject*)L_146);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_147;
			L_147 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_146);
			V_3 = L_147;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_148;
			L_148 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_24 = L_148;
			bool L_149;
			L_149 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_24), NULL);
			if (L_149)
			{
				goto IL_064f_1;
			}
		}
		{
			int32_t L_150 = ((int32_t)10);
			V_0 = L_150;
			__this->___U3CU3E1__state = L_150;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_151 = V_24;
			__this->___U3CU3Eu__1 = L_151;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_152 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__123_t97C3032A726967F35233D685AE984B8173C3EB8A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_152, (&V_24), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_081d;
		}

IL_0632_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_153 = __this->___U3CU3Eu__1;
			V_24 = L_153;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_154 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_154, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_155 = (-1);
			V_0 = L_155;
			__this->___U3CU3E1__state = L_155;
		}

IL_064f_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_24), NULL);
		}

IL_0658_1:
		{
			_CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09* L_156 = __this->___U3CU3E4__this;
			RuntimeObject* L_157 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_156, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),86));
			V_25 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_157) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_158 = V_25;
			if (!L_158)
			{
				goto IL_06e0_1;
			}
		}
		{
			_CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09* L_159 = __this->___U3CU3E4__this;
			RuntimeObject* L_160 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_159, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),86));
			NullCheck((RuntimeObject*)L_160);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_161;
			L_161 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_160);
			V_3 = L_161;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_162;
			L_162 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_26 = L_162;
			bool L_163;
			L_163 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_26), NULL);
			if (L_163)
			{
				goto IL_06d7_1;
			}
		}
		{
			int32_t L_164 = ((int32_t)11);
			V_0 = L_164;
			__this->___U3CU3E1__state = L_164;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_165 = V_26;
			__this->___U3CU3Eu__1 = L_165;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_166 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__123_t97C3032A726967F35233D685AE984B8173C3EB8A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_166, (&V_26), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_081d;
		}

IL_06ba_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_167 = __this->___U3CU3Eu__1;
			V_26 = L_167;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_168 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_168, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_169 = (-1);
			V_0 = L_169;
			__this->___U3CU3E1__state = L_169;
		}

IL_06d7_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_26), NULL);
		}

IL_06e0_1:
		{
			_CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09* L_170 = __this->___U3CU3E4__this;
			RuntimeObject* L_171 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_170, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),91));
			V_27 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_171) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_172 = V_27;
			if (!L_172)
			{
				goto IL_0768_1;
			}
		}
		{
			_CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09* L_173 = __this->___U3CU3E4__this;
			RuntimeObject* L_174 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_173, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),91));
			NullCheck((RuntimeObject*)L_174);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_175;
			L_175 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_174);
			V_3 = L_175;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_176;
			L_176 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_28 = L_176;
			bool L_177;
			L_177 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_28), NULL);
			if (L_177)
			{
				goto IL_075f_1;
			}
		}
		{
			int32_t L_178 = ((int32_t)12);
			V_0 = L_178;
			__this->___U3CU3E1__state = L_178;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_179 = V_28;
			__this->___U3CU3Eu__1 = L_179;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_180 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__123_t97C3032A726967F35233D685AE984B8173C3EB8A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_180, (&V_28), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_081d;
		}

IL_0742_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_181 = __this->___U3CU3Eu__1;
			V_28 = L_181;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_182 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_182, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_183 = (-1);
			V_0 = L_183;
			__this->___U3CU3E1__state = L_183;
		}

IL_075f_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_28), NULL);
		}

IL_0768_1:
		{
			_CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09* L_184 = __this->___U3CU3E4__this;
			RuntimeObject* L_185 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_184, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),96));
			V_29 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_185) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_186 = V_29;
			if (!L_186)
			{
				goto IL_07ed_1;
			}
		}
		{
			_CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09* L_187 = __this->___U3CU3E4__this;
			RuntimeObject* L_188 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_187, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),96));
			NullCheck((RuntimeObject*)L_188);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_189;
			L_189 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_188);
			V_3 = L_189;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_190;
			L_190 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_30 = L_190;
			bool L_191;
			L_191 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_30), NULL);
			if (L_191)
			{
				goto IL_07e4_1;
			}
		}
		{
			int32_t L_192 = ((int32_t)13);
			V_0 = L_192;
			__this->___U3CU3E1__state = L_192;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_193 = V_30;
			__this->___U3CU3Eu__1 = L_193;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_194 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__123_t97C3032A726967F35233D685AE984B8173C3EB8A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_194, (&V_30), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_081d;
		}

IL_07c7_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_195 = __this->___U3CU3Eu__1;
			V_30 = L_195;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_196 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_196, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_197 = (-1);
			V_0 = L_197;
			__this->___U3CU3E1__state = L_197;
		}

IL_07e4_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_30), NULL);
		}

IL_07ed_1:
		{
			goto IL_0809;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_07ef;
		}
		throw e;
	}

CATCH_07ef:
	{
		Exception_t* L_198 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_31 = L_198;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_199 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_200 = V_31;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_199, L_200, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_081d;
	}

IL_0809:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_201 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_201, NULL);
	}

IL_081d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__123_SetStateMachine_mADEF93D1FD30A36E920740842E9782328CB06F1A_gshared (U3CDisposeAsyncU3Ed__123_t97C3032A726967F35233D685AE984B8173C3EB8A* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__13__ctor_m72864721AF1C9F46AA5471BDA6BD6D2CE6362770_gshared (U3CDisposeAsyncU3Ed__13_tF07A196D0F005E8E590005E278D170E301695DA4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__13_MoveNext_m8C8BE50729CFCD9F14B41BD50F1B4E08208788D9_gshared (U3CDisposeAsyncU3Ed__13_tF07A196D0F005E8E590005E278D170E301695DA4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CDisposeAsyncU3Ed__13_tF07A196D0F005E8E590005E278D170E301695DA4* V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_006c_1;
		}

IL_000e_1:
		{
			__this->___U3CiU3E5__1 = 0;
			goto IL_00a3_1;
		}

IL_001b_1:
		{
			_Merge_t1C2BA075B2CB4F56D213F2DD8A75FBF12D2F1F66* L_2 = __this->___U3CU3E4__this;
			IUniTaskAsyncEnumerator_1U5BU5D_t74C60CA0A3609180188EC969FD53DDB39021A752* L_3 = *(IUniTaskAsyncEnumerator_1U5BU5D_t74C60CA0A3609180188EC969FD53DDB39021A752**)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2));
			int32_t L_4 = __this->___U3CiU3E5__1;
			NullCheck(L_3);
			int32_t L_5 = L_4;
			RuntimeObject* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
			NullCheck((RuntimeObject*)L_6);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
			L_7 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			V_2 = L_7;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_8;
			L_8 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_2), NULL);
			V_1 = L_8;
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_1), NULL);
			if (L_9)
			{
				goto IL_0088_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state = L_10;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_11 = V_1;
			__this->___U3CU3Eu__1 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_3 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_12 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__13_tF07A196D0F005E8E590005E278D170E301695DA4**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_12, (&V_1), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_011d;
		}

IL_006c_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13 = __this->___U3CU3Eu__1;
			V_1 = L_13;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_14 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_14, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state = L_15;
		}

IL_0088_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_1), NULL);
			int32_t L_16 = __this->___U3CiU3E5__1;
			V_4 = L_16;
			int32_t L_17 = V_4;
			__this->___U3CiU3E5__1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		}

IL_00a3_1:
		{
			int32_t L_18 = __this->___U3CiU3E5__1;
			_Merge_t1C2BA075B2CB4F56D213F2DD8A75FBF12D2F1F66* L_19 = __this->___U3CU3E4__this;
			int32_t L_20 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1));
			V_5 = (bool)((((int32_t)L_18) < ((int32_t)L_20))? 1 : 0);
			bool L_21 = V_5;
			if (L_21)
			{
				goto IL_001b_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
			ArrayPool_1_tF2E5DAE4006A61B7DA16D5CD68CD0BA1C092BDEC* L_22 = ((ArrayPool_1_tF2E5DAE4006A61B7DA16D5CD68CD0BA1C092BDEC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 6)))->___Shared;
			_Merge_t1C2BA075B2CB4F56D213F2DD8A75FBF12D2F1F66* L_23 = __this->___U3CU3E4__this;
			MergeSourceStateU5BU5D_tB7812B44FA052830FF047FF969B894E7A33C7B63* L_24 = *(MergeSourceStateU5BU5D_tB7812B44FA052830FF047FF969B894E7A33C7B63**)il2cpp_codegen_get_instance_field_data_pointer(L_23, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3));
			NullCheck(L_22);
			((  void (*) (ArrayPool_1_tF2E5DAE4006A61B7DA16D5CD68CD0BA1C092BDEC*, MergeSourceStateU5BU5D_tB7812B44FA052830FF047FF969B894E7A33C7B63*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_22, L_24, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
			ArrayPool_1_tE643756749CF7C5070E5A8728438CB5B967E75AE* L_25 = ((ArrayPool_1_tE643756749CF7C5070E5A8728438CB5B967E75AE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 10)))->___Shared;
			_Merge_t1C2BA075B2CB4F56D213F2DD8A75FBF12D2F1F66* L_26 = __this->___U3CU3E4__this;
			IUniTaskAsyncEnumerator_1U5BU5D_t74C60CA0A3609180188EC969FD53DDB39021A752* L_27 = *(IUniTaskAsyncEnumerator_1U5BU5D_t74C60CA0A3609180188EC969FD53DDB39021A752**)il2cpp_codegen_get_instance_field_data_pointer(L_26, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2));
			NullCheck(L_25);
			((  void (*) (ArrayPool_1_tE643756749CF7C5070E5A8728438CB5B967E75AE*, IUniTaskAsyncEnumerator_1U5BU5D_t74C60CA0A3609180188EC969FD53DDB39021A752*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_25, L_27, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_0109;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ef;
		}
		throw e;
	}

CATCH_00ef:
	{
		Exception_t* L_28 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_6 = L_28;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_29 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_30 = V_6;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_29, L_30, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_011d;
	}

IL_0109:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_31 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_31, NULL);
	}

IL_011d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__13_SetStateMachine_mB29E89C5CBB4247637A31430D74C7E70F1CC5E3D_gshared (U3CDisposeAsyncU3Ed__13_tF07A196D0F005E8E590005E278D170E301695DA4* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__131__ctor_m3E6AC2C1C538382AB58BD5CDDC1F0C602844208B_gshared (U3CDisposeAsyncU3Ed__131_t9AD80AC2FC4252AC32C52066CE0CFE3ECDB08537* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__131_MoveNext_mBF40A7F3BEFD5D218F4D8055477158F64E17906A_gshared (U3CDisposeAsyncU3Ed__131_t9AD80AC2FC4252AC32C52066CE0CFE3ECDB08537* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CDisposeAsyncU3Ed__131_t9AD80AC2FC4252AC32C52066CE0CFE3ECDB08537* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	bool V_15 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_18;
	memset((&V_18), 0, sizeof(V_18));
	bool V_19 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_24;
	memset((&V_24), 0, sizeof(V_24));
	bool V_25 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_26;
	memset((&V_26), 0, sizeof(V_26));
	bool V_27 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_28;
	memset((&V_28), 0, sizeof(V_28));
	bool V_29 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_30;
	memset((&V_30), 0, sizeof(V_30));
	bool V_31 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_32;
	memset((&V_32), 0, sizeof(V_32));
	Exception_t* V_33 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_004b_1;
				}
				case 1:
				{
					goto IL_0050_1;
				}
				case 2:
				{
					goto IL_0055_1;
				}
				case 3:
				{
					goto IL_005a_1;
				}
				case 4:
				{
					goto IL_005f_1;
				}
				case 5:
				{
					goto IL_0064_1;
				}
				case 6:
				{
					goto IL_0069_1;
				}
				case 7:
				{
					goto IL_006e_1;
				}
				case 8:
				{
					goto IL_0073_1;
				}
				case 9:
				{
					goto IL_0078_1;
				}
				case 10:
				{
					goto IL_007d_1;
				}
				case 11:
				{
					goto IL_0082_1;
				}
				case 12:
				{
					goto IL_0087_1;
				}
				case 13:
				{
					goto IL_008c_1;
				}
				case 14:
				{
					goto IL_0091_1;
				}
			}
		}
		{
			goto IL_0096_1;
		}

IL_004b_1:
		{
			goto IL_00f4_1;
		}

IL_0050_1:
		{
			goto IL_017a_1;
		}

IL_0055_1:
		{
			goto IL_0201_1;
		}

IL_005a_1:
		{
			goto IL_0288_1;
		}

IL_005f_1:
		{
			goto IL_030f_1;
		}

IL_0064_1:
		{
			goto IL_0396_1;
		}

IL_0069_1:
		{
			goto IL_041d_1;
		}

IL_006e_1:
		{
			goto IL_04a4_1;
		}

IL_0073_1:
		{
			goto IL_052b_1;
		}

IL_0078_1:
		{
			goto IL_05b3_1;
		}

IL_007d_1:
		{
			goto IL_063b_1;
		}

IL_0082_1:
		{
			goto IL_06c3_1;
		}

IL_0087_1:
		{
			goto IL_074b_1;
		}

IL_008c_1:
		{
			goto IL_07d3_1;
		}

IL_0091_1:
		{
			goto IL_0858_1;
		}

IL_0096_1:
		{
			_CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA* L_2 = __this->___U3CU3E4__this;
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),33));
			V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_0119_1;
			}
		}
		{
			_CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA* L_5 = __this->___U3CU3E4__this;
			RuntimeObject* L_6 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),33));
			NullCheck((RuntimeObject*)L_6);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
			L_7 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			V_3 = L_7;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_8;
			L_8 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_9)
			{
				goto IL_0110_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state = L_10;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_11 = V_2;
			__this->___U3CU3Eu__1 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_12 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__131_t9AD80AC2FC4252AC32C52066CE0CFE3ECDB08537**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_12, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_08ae;
		}

IL_00f4_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13 = __this->___U3CU3Eu__1;
			V_2 = L_13;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_14 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_14, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state = L_15;
		}

IL_0110_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_0119_1:
		{
			_CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA* L_16 = __this->___U3CU3E4__this;
			RuntimeObject* L_17 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),38));
			V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_18 = V_5;
			if (!L_18)
			{
				goto IL_01a0_1;
			}
		}
		{
			_CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA* L_19 = __this->___U3CU3E4__this;
			RuntimeObject* L_20 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),38));
			NullCheck((RuntimeObject*)L_20);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_21;
			L_21 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
			V_3 = L_21;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_22;
			L_22 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_6 = L_22;
			bool L_23;
			L_23 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_6), NULL);
			if (L_23)
			{
				goto IL_0197_1;
			}
		}
		{
			int32_t L_24 = 1;
			V_0 = L_24;
			__this->___U3CU3E1__state = L_24;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_25 = V_6;
			__this->___U3CU3Eu__1 = L_25;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_26 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__131_t9AD80AC2FC4252AC32C52066CE0CFE3ECDB08537**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_26, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_08ae;
		}

IL_017a_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_27 = __this->___U3CU3Eu__1;
			V_6 = L_27;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_28 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_28, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_29 = (-1);
			V_0 = L_29;
			__this->___U3CU3E1__state = L_29;
		}

IL_0197_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_6), NULL);
		}

IL_01a0_1:
		{
			_CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA* L_30 = __this->___U3CU3E4__this;
			RuntimeObject* L_31 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),43));
			V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_31) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_32 = V_7;
			if (!L_32)
			{
				goto IL_0227_1;
			}
		}
		{
			_CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA* L_33 = __this->___U3CU3E4__this;
			RuntimeObject* L_34 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_33, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),43));
			NullCheck((RuntimeObject*)L_34);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_35;
			L_35 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
			V_3 = L_35;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36;
			L_36 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_8 = L_36;
			bool L_37;
			L_37 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_8), NULL);
			if (L_37)
			{
				goto IL_021e_1;
			}
		}
		{
			int32_t L_38 = 2;
			V_0 = L_38;
			__this->___U3CU3E1__state = L_38;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39 = V_8;
			__this->___U3CU3Eu__1 = L_39;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_40 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__131_t9AD80AC2FC4252AC32C52066CE0CFE3ECDB08537**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_40, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_08ae;
		}

IL_0201_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_41 = __this->___U3CU3Eu__1;
			V_8 = L_41;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_42 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_42, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_43 = (-1);
			V_0 = L_43;
			__this->___U3CU3E1__state = L_43;
		}

IL_021e_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_8), NULL);
		}

IL_0227_1:
		{
			_CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA* L_44 = __this->___U3CU3E4__this;
			RuntimeObject* L_45 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),48));
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_45) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_46 = V_9;
			if (!L_46)
			{
				goto IL_02ae_1;
			}
		}
		{
			_CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA* L_47 = __this->___U3CU3E4__this;
			RuntimeObject* L_48 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_47, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),48));
			NullCheck((RuntimeObject*)L_48);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_49;
			L_49 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_48);
			V_3 = L_49;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50;
			L_50 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_10 = L_50;
			bool L_51;
			L_51 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_51)
			{
				goto IL_02a5_1;
			}
		}
		{
			int32_t L_52 = 3;
			V_0 = L_52;
			__this->___U3CU3E1__state = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_53 = V_10;
			__this->___U3CU3Eu__1 = L_53;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_54 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__131_t9AD80AC2FC4252AC32C52066CE0CFE3ECDB08537**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_54, (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_08ae;
		}

IL_0288_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_55 = __this->___U3CU3Eu__1;
			V_10 = L_55;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_56 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_56, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_57 = (-1);
			V_0 = L_57;
			__this->___U3CU3E1__state = L_57;
		}

IL_02a5_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_02ae_1:
		{
			_CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA* L_58 = __this->___U3CU3E4__this;
			RuntimeObject* L_59 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_58, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),53));
			V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_60 = V_11;
			if (!L_60)
			{
				goto IL_0335_1;
			}
		}
		{
			_CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA* L_61 = __this->___U3CU3E4__this;
			RuntimeObject* L_62 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_61, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),53));
			NullCheck((RuntimeObject*)L_62);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_63;
			L_63 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_62);
			V_3 = L_63;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_64;
			L_64 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_12 = L_64;
			bool L_65;
			L_65 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_12), NULL);
			if (L_65)
			{
				goto IL_032c_1;
			}
		}
		{
			int32_t L_66 = 4;
			V_0 = L_66;
			__this->___U3CU3E1__state = L_66;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_67 = V_12;
			__this->___U3CU3Eu__1 = L_67;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_68 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__131_t9AD80AC2FC4252AC32C52066CE0CFE3ECDB08537**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_68, (&V_12), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_08ae;
		}

IL_030f_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_69 = __this->___U3CU3Eu__1;
			V_12 = L_69;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_70 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_70, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_71 = (-1);
			V_0 = L_71;
			__this->___U3CU3E1__state = L_71;
		}

IL_032c_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_12), NULL);
		}

IL_0335_1:
		{
			_CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA* L_72 = __this->___U3CU3E4__this;
			RuntimeObject* L_73 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_72, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),58));
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_73) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_74 = V_13;
			if (!L_74)
			{
				goto IL_03bc_1;
			}
		}
		{
			_CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA* L_75 = __this->___U3CU3E4__this;
			RuntimeObject* L_76 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_75, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),58));
			NullCheck((RuntimeObject*)L_76);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_77;
			L_77 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_76);
			V_3 = L_77;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_78;
			L_78 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_14 = L_78;
			bool L_79;
			L_79 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_79)
			{
				goto IL_03b3_1;
			}
		}
		{
			int32_t L_80 = 5;
			V_0 = L_80;
			__this->___U3CU3E1__state = L_80;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_81 = V_14;
			__this->___U3CU3Eu__1 = L_81;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_82 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__131_t9AD80AC2FC4252AC32C52066CE0CFE3ECDB08537**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_82, (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_08ae;
		}

IL_0396_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_83 = __this->___U3CU3Eu__1;
			V_14 = L_83;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_84 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_84, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_85 = (-1);
			V_0 = L_85;
			__this->___U3CU3E1__state = L_85;
		}

IL_03b3_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_03bc_1:
		{
			_CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA* L_86 = __this->___U3CU3E4__this;
			RuntimeObject* L_87 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_86, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),63));
			V_15 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_87) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_88 = V_15;
			if (!L_88)
			{
				goto IL_0443_1;
			}
		}
		{
			_CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA* L_89 = __this->___U3CU3E4__this;
			RuntimeObject* L_90 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_89, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),63));
			NullCheck((RuntimeObject*)L_90);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_91;
			L_91 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_90);
			V_3 = L_91;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_92;
			L_92 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_16 = L_92;
			bool L_93;
			L_93 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_16), NULL);
			if (L_93)
			{
				goto IL_043a_1;
			}
		}
		{
			int32_t L_94 = 6;
			V_0 = L_94;
			__this->___U3CU3E1__state = L_94;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_95 = V_16;
			__this->___U3CU3Eu__1 = L_95;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_96 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__131_t9AD80AC2FC4252AC32C52066CE0CFE3ECDB08537**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_96, (&V_16), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_08ae;
		}

IL_041d_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_97 = __this->___U3CU3Eu__1;
			V_16 = L_97;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_98 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_98, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_99 = (-1);
			V_0 = L_99;
			__this->___U3CU3E1__state = L_99;
		}

IL_043a_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_16), NULL);
		}

IL_0443_1:
		{
			_CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA* L_100 = __this->___U3CU3E4__this;
			RuntimeObject* L_101 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_100, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),68));
			V_17 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_101) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_102 = V_17;
			if (!L_102)
			{
				goto IL_04ca_1;
			}
		}
		{
			_CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA* L_103 = __this->___U3CU3E4__this;
			RuntimeObject* L_104 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_103, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),68));
			NullCheck((RuntimeObject*)L_104);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_105;
			L_105 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_104);
			V_3 = L_105;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_106;
			L_106 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_18 = L_106;
			bool L_107;
			L_107 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_18), NULL);
			if (L_107)
			{
				goto IL_04c1_1;
			}
		}
		{
			int32_t L_108 = 7;
			V_0 = L_108;
			__this->___U3CU3E1__state = L_108;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_109 = V_18;
			__this->___U3CU3Eu__1 = L_109;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_110 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__131_t9AD80AC2FC4252AC32C52066CE0CFE3ECDB08537**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_110, (&V_18), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_08ae;
		}

IL_04a4_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_111 = __this->___U3CU3Eu__1;
			V_18 = L_111;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_112 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_112, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_113 = (-1);
			V_0 = L_113;
			__this->___U3CU3E1__state = L_113;
		}

IL_04c1_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_18), NULL);
		}

IL_04ca_1:
		{
			_CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA* L_114 = __this->___U3CU3E4__this;
			RuntimeObject* L_115 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_114, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),73));
			V_19 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_115) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_116 = V_19;
			if (!L_116)
			{
				goto IL_0551_1;
			}
		}
		{
			_CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA* L_117 = __this->___U3CU3E4__this;
			RuntimeObject* L_118 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_117, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),73));
			NullCheck((RuntimeObject*)L_118);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_119;
			L_119 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_118);
			V_3 = L_119;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_120;
			L_120 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_20 = L_120;
			bool L_121;
			L_121 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_20), NULL);
			if (L_121)
			{
				goto IL_0548_1;
			}
		}
		{
			int32_t L_122 = 8;
			V_0 = L_122;
			__this->___U3CU3E1__state = L_122;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_123 = V_20;
			__this->___U3CU3Eu__1 = L_123;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_124 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__131_t9AD80AC2FC4252AC32C52066CE0CFE3ECDB08537**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_124, (&V_20), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_08ae;
		}

IL_052b_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_125 = __this->___U3CU3Eu__1;
			V_20 = L_125;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_126 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_126, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_127 = (-1);
			V_0 = L_127;
			__this->___U3CU3E1__state = L_127;
		}

IL_0548_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_20), NULL);
		}

IL_0551_1:
		{
			_CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA* L_128 = __this->___U3CU3E4__this;
			RuntimeObject* L_129 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_128, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),78));
			V_21 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_129) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_130 = V_21;
			if (!L_130)
			{
				goto IL_05d9_1;
			}
		}
		{
			_CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA* L_131 = __this->___U3CU3E4__this;
			RuntimeObject* L_132 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_131, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),78));
			NullCheck((RuntimeObject*)L_132);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_133;
			L_133 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_132);
			V_3 = L_133;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_134;
			L_134 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_22 = L_134;
			bool L_135;
			L_135 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_22), NULL);
			if (L_135)
			{
				goto IL_05d0_1;
			}
		}
		{
			int32_t L_136 = ((int32_t)9);
			V_0 = L_136;
			__this->___U3CU3E1__state = L_136;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_137 = V_22;
			__this->___U3CU3Eu__1 = L_137;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_138 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__131_t9AD80AC2FC4252AC32C52066CE0CFE3ECDB08537**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_138, (&V_22), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_08ae;
		}

IL_05b3_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_139 = __this->___U3CU3Eu__1;
			V_22 = L_139;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_140 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_140, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_141 = (-1);
			V_0 = L_141;
			__this->___U3CU3E1__state = L_141;
		}

IL_05d0_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_22), NULL);
		}

IL_05d9_1:
		{
			_CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA* L_142 = __this->___U3CU3E4__this;
			RuntimeObject* L_143 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_142, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),83));
			V_23 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_143) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_144 = V_23;
			if (!L_144)
			{
				goto IL_0661_1;
			}
		}
		{
			_CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA* L_145 = __this->___U3CU3E4__this;
			RuntimeObject* L_146 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_145, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),83));
			NullCheck((RuntimeObject*)L_146);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_147;
			L_147 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_146);
			V_3 = L_147;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_148;
			L_148 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_24 = L_148;
			bool L_149;
			L_149 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_24), NULL);
			if (L_149)
			{
				goto IL_0658_1;
			}
		}
		{
			int32_t L_150 = ((int32_t)10);
			V_0 = L_150;
			__this->___U3CU3E1__state = L_150;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_151 = V_24;
			__this->___U3CU3Eu__1 = L_151;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_152 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__131_t9AD80AC2FC4252AC32C52066CE0CFE3ECDB08537**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_152, (&V_24), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_08ae;
		}

IL_063b_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_153 = __this->___U3CU3Eu__1;
			V_24 = L_153;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_154 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_154, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_155 = (-1);
			V_0 = L_155;
			__this->___U3CU3E1__state = L_155;
		}

IL_0658_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_24), NULL);
		}

IL_0661_1:
		{
			_CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA* L_156 = __this->___U3CU3E4__this;
			RuntimeObject* L_157 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_156, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),88));
			V_25 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_157) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_158 = V_25;
			if (!L_158)
			{
				goto IL_06e9_1;
			}
		}
		{
			_CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA* L_159 = __this->___U3CU3E4__this;
			RuntimeObject* L_160 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_159, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),88));
			NullCheck((RuntimeObject*)L_160);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_161;
			L_161 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_160);
			V_3 = L_161;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_162;
			L_162 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_26 = L_162;
			bool L_163;
			L_163 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_26), NULL);
			if (L_163)
			{
				goto IL_06e0_1;
			}
		}
		{
			int32_t L_164 = ((int32_t)11);
			V_0 = L_164;
			__this->___U3CU3E1__state = L_164;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_165 = V_26;
			__this->___U3CU3Eu__1 = L_165;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_166 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__131_t9AD80AC2FC4252AC32C52066CE0CFE3ECDB08537**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_166, (&V_26), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_08ae;
		}

IL_06c3_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_167 = __this->___U3CU3Eu__1;
			V_26 = L_167;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_168 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_168, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_169 = (-1);
			V_0 = L_169;
			__this->___U3CU3E1__state = L_169;
		}

IL_06e0_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_26), NULL);
		}

IL_06e9_1:
		{
			_CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA* L_170 = __this->___U3CU3E4__this;
			RuntimeObject* L_171 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_170, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),93));
			V_27 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_171) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_172 = V_27;
			if (!L_172)
			{
				goto IL_0771_1;
			}
		}
		{
			_CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA* L_173 = __this->___U3CU3E4__this;
			RuntimeObject* L_174 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_173, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),93));
			NullCheck((RuntimeObject*)L_174);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_175;
			L_175 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_174);
			V_3 = L_175;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_176;
			L_176 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_28 = L_176;
			bool L_177;
			L_177 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_28), NULL);
			if (L_177)
			{
				goto IL_0768_1;
			}
		}
		{
			int32_t L_178 = ((int32_t)12);
			V_0 = L_178;
			__this->___U3CU3E1__state = L_178;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_179 = V_28;
			__this->___U3CU3Eu__1 = L_179;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_180 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__131_t9AD80AC2FC4252AC32C52066CE0CFE3ECDB08537**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_180, (&V_28), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_08ae;
		}

IL_074b_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_181 = __this->___U3CU3Eu__1;
			V_28 = L_181;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_182 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_182, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_183 = (-1);
			V_0 = L_183;
			__this->___U3CU3E1__state = L_183;
		}

IL_0768_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_28), NULL);
		}

IL_0771_1:
		{
			_CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA* L_184 = __this->___U3CU3E4__this;
			RuntimeObject* L_185 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_184, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),98));
			V_29 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_185) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_186 = V_29;
			if (!L_186)
			{
				goto IL_07f9_1;
			}
		}
		{
			_CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA* L_187 = __this->___U3CU3E4__this;
			RuntimeObject* L_188 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_187, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),98));
			NullCheck((RuntimeObject*)L_188);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_189;
			L_189 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_188);
			V_3 = L_189;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_190;
			L_190 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_30 = L_190;
			bool L_191;
			L_191 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_30), NULL);
			if (L_191)
			{
				goto IL_07f0_1;
			}
		}
		{
			int32_t L_192 = ((int32_t)13);
			V_0 = L_192;
			__this->___U3CU3E1__state = L_192;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_193 = V_30;
			__this->___U3CU3Eu__1 = L_193;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_194 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__131_t9AD80AC2FC4252AC32C52066CE0CFE3ECDB08537**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_194, (&V_30), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_08ae;
		}

IL_07d3_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_195 = __this->___U3CU3Eu__1;
			V_30 = L_195;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_196 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_196, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_197 = (-1);
			V_0 = L_197;
			__this->___U3CU3E1__state = L_197;
		}

IL_07f0_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_30), NULL);
		}

IL_07f9_1:
		{
			_CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA* L_198 = __this->___U3CU3E4__this;
			RuntimeObject* L_199 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_198, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),103));
			V_31 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_199) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_200 = V_31;
			if (!L_200)
			{
				goto IL_087e_1;
			}
		}
		{
			_CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA* L_201 = __this->___U3CU3E4__this;
			RuntimeObject* L_202 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_201, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),103));
			NullCheck((RuntimeObject*)L_202);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_203;
			L_203 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_202);
			V_3 = L_203;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_204;
			L_204 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_32 = L_204;
			bool L_205;
			L_205 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_32), NULL);
			if (L_205)
			{
				goto IL_0875_1;
			}
		}
		{
			int32_t L_206 = ((int32_t)14);
			V_0 = L_206;
			__this->___U3CU3E1__state = L_206;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_207 = V_32;
			__this->___U3CU3Eu__1 = L_207;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_208 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__131_t9AD80AC2FC4252AC32C52066CE0CFE3ECDB08537**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_208, (&V_32), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_08ae;
		}

IL_0858_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_209 = __this->___U3CU3Eu__1;
			V_32 = L_209;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_210 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_210, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_211 = (-1);
			V_0 = L_211;
			__this->___U3CU3E1__state = L_211;
		}

IL_0875_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_32), NULL);
		}

IL_087e_1:
		{
			goto IL_089a;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0880;
		}
		throw e;
	}

CATCH_0880:
	{
		Exception_t* L_212 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_33 = L_212;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_213 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_214 = V_33;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_213, L_214, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_08ae;
	}

IL_089a:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_215 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_215, NULL);
	}

IL_08ae:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__131_SetStateMachine_m0390560DE03E77B118422E05AC973943E877951C_gshared (U3CDisposeAsyncU3Ed__131_t9AD80AC2FC4252AC32C52066CE0CFE3ECDB08537* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__18__ctor_m36BE42DACEAF97025768C52E82ED609C7716FC6B_gshared (U3CDisposeAsyncU3Ed__18_tC188752CD4DB8F4F952875C44DD9980B06D167E3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__18_MoveNext_m4D8876AC537AE5F75457CFC6147DA6F652C59210_gshared (U3CDisposeAsyncU3Ed__18_tC188752CD4DB8F4F952875C44DD9980B06D167E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CDisposeAsyncU3Ed__18_tC188752CD4DB8F4F952875C44DD9980B06D167E3* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014_1;
			}
		}
		{
			goto IL_0019_1;
		}

IL_0012_1:
		{
			goto IL_0077_1;
		}

IL_0014_1:
		{
			goto IL_00fa_1;
		}

IL_0019_1:
		{
			_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_3 = __this->___U3CU3E4__this;
			RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6));
			V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_009c_1;
			}
		}
		{
			_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_6 = __this->___U3CU3E4__this;
			RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6));
			NullCheck((RuntimeObject*)L_7);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_8;
			L_8 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
			V_3 = L_8;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_9;
			L_9 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_9;
			bool L_10;
			L_10 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_10)
			{
				goto IL_0093_1;
			}
		}
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->___U3CU3E1__state = L_11;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_12 = V_2;
			__this->___U3CU3Eu__1 = L_12;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_13 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__18_tC188752CD4DB8F4F952875C44DD9980B06D167E3**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_13, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0150;
		}

IL_0077_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_14 = __this->___U3CU3Eu__1;
			V_2 = L_14;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_15 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_15, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->___U3CU3E1__state = L_16;
		}

IL_0093_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_009c_1:
		{
			_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_17 = __this->___U3CU3E4__this;
			RuntimeObject* L_18 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7));
			V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_18) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_19 = V_5;
			if (!L_19)
			{
				goto IL_0120_1;
			}
		}
		{
			_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_20 = __this->___U3CU3E4__this;
			RuntimeObject* L_21 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_20, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7));
			NullCheck((RuntimeObject*)L_21);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_22;
			L_22 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_21);
			V_3 = L_22;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_23;
			L_23 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_6 = L_23;
			bool L_24;
			L_24 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_6), NULL);
			if (L_24)
			{
				goto IL_0117_1;
			}
		}
		{
			int32_t L_25 = 1;
			V_0 = L_25;
			__this->___U3CU3E1__state = L_25;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_26 = V_6;
			__this->___U3CU3Eu__1 = L_26;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_27 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__18_tC188752CD4DB8F4F952875C44DD9980B06D167E3**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_27, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0150;
		}

IL_00fa_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_28 = __this->___U3CU3Eu__1;
			V_6 = L_28;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_29 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_29, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_30 = (-1);
			V_0 = L_30;
			__this->___U3CU3E1__state = L_30;
		}

IL_0117_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_6), NULL);
		}

IL_0120_1:
		{
			goto IL_013c;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0122;
		}
		throw e;
	}

CATCH_0122:
	{
		Exception_t* L_31 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_7 = L_31;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_32 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_33 = V_7;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_32, L_33, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0150;
	}

IL_013c:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_34 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_34, NULL);
	}

IL_0150:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__18_SetStateMachine_m22A95B5DD30D7569EC27D61505B74018312A6E99_gshared (U3CDisposeAsyncU3Ed__18_tC188752CD4DB8F4F952875C44DD9980B06D167E3* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__21__ctor_m20F57640EEA8F834C6065CD76C76EF1213851D75_gshared (U3CDisposeAsyncU3Ed__21_tAF4A35DE6FCC10CB592383716B6B90BB07B2020F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__21_MoveNext_m71E78E7F0D77F88461D46161BE399AA947B3D7C6_gshared (U3CDisposeAsyncU3Ed__21_tAF4A35DE6FCC10CB592383716B6B90BB07B2020F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CDisposeAsyncU3Ed__21_tAF4A35DE6FCC10CB592383716B6B90BB07B2020F* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014_1;
			}
		}
		{
			goto IL_0019_1;
		}

IL_0012_1:
		{
			goto IL_0077_1;
		}

IL_0014_1:
		{
			goto IL_00fa_1;
		}

IL_0019_1:
		{
			_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_3 = __this->___U3CU3E4__this;
			RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7));
			V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_009c_1;
			}
		}
		{
			_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_6 = __this->___U3CU3E4__this;
			RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7));
			NullCheck((RuntimeObject*)L_7);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_8;
			L_8 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
			V_3 = L_8;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_9;
			L_9 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_9;
			bool L_10;
			L_10 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_10)
			{
				goto IL_0093_1;
			}
		}
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->___U3CU3E1__state = L_11;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_12 = V_2;
			__this->___U3CU3Eu__1 = L_12;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_13 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__21_tAF4A35DE6FCC10CB592383716B6B90BB07B2020F**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_13, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0150;
		}

IL_0077_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_14 = __this->___U3CU3Eu__1;
			V_2 = L_14;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_15 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_15, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->___U3CU3E1__state = L_16;
		}

IL_0093_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_009c_1:
		{
			_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_17 = __this->___U3CU3E4__this;
			RuntimeObject* L_18 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),8));
			V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_18) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_19 = V_5;
			if (!L_19)
			{
				goto IL_0120_1;
			}
		}
		{
			_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_20 = __this->___U3CU3E4__this;
			RuntimeObject* L_21 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_20, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),8));
			NullCheck((RuntimeObject*)L_21);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_22;
			L_22 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_21);
			V_3 = L_22;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_23;
			L_23 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_6 = L_23;
			bool L_24;
			L_24 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_6), NULL);
			if (L_24)
			{
				goto IL_0117_1;
			}
		}
		{
			int32_t L_25 = 1;
			V_0 = L_25;
			__this->___U3CU3E1__state = L_25;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_26 = V_6;
			__this->___U3CU3Eu__1 = L_26;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_27 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__21_tAF4A35DE6FCC10CB592383716B6B90BB07B2020F**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_27, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0150;
		}

IL_00fa_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_28 = __this->___U3CU3Eu__1;
			V_6 = L_28;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_29 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_29, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_30 = (-1);
			V_0 = L_30;
			__this->___U3CU3E1__state = L_30;
		}

IL_0117_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_6), NULL);
		}

IL_0120_1:
		{
			goto IL_013c;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0122;
		}
		throw e;
	}

CATCH_0122:
	{
		Exception_t* L_31 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_7 = L_31;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_32 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_33 = V_7;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_32, L_33, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0150;
	}

IL_013c:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_34 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_34, NULL);
	}

IL_0150:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__21_SetStateMachine_m8D8BE376527CB95432CF0510B42EB620F2EBBC8F_gshared (U3CDisposeAsyncU3Ed__21_tAF4A35DE6FCC10CB592383716B6B90BB07B2020F* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__21__ctor_m02DC38B5D97C7CD26B1026F3008018AE935FE907_gshared (U3CDisposeAsyncU3Ed__21_t5D9637B25772A807FA1261F4A8EE36BA5CD7B716* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__21_MoveNext_m24AB22E692D4E2EE74F958EEF3CCF0AAD479B67F_gshared (U3CDisposeAsyncU3Ed__21_t5D9637B25772A807FA1261F4A8EE36BA5CD7B716* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CDisposeAsyncU3Ed__21_t5D9637B25772A807FA1261F4A8EE36BA5CD7B716* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014_1;
			}
		}
		{
			goto IL_0019_1;
		}

IL_0012_1:
		{
			goto IL_0077_1;
		}

IL_0014_1:
		{
			goto IL_00fa_1;
		}

IL_0019_1:
		{
			_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_3 = __this->___U3CU3E4__this;
			RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7));
			V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_009c_1;
			}
		}
		{
			_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_6 = __this->___U3CU3E4__this;
			RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7));
			NullCheck((RuntimeObject*)L_7);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_8;
			L_8 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
			V_3 = L_8;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_9;
			L_9 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_9;
			bool L_10;
			L_10 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_10)
			{
				goto IL_0093_1;
			}
		}
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->___U3CU3E1__state = L_11;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_12 = V_2;
			__this->___U3CU3Eu__1 = L_12;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_13 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__21_t5D9637B25772A807FA1261F4A8EE36BA5CD7B716**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_13, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0150;
		}

IL_0077_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_14 = __this->___U3CU3Eu__1;
			V_2 = L_14;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_15 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_15, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->___U3CU3E1__state = L_16;
		}

IL_0093_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_009c_1:
		{
			_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_17 = __this->___U3CU3E4__this;
			RuntimeObject* L_18 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),8));
			V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_18) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_19 = V_5;
			if (!L_19)
			{
				goto IL_0120_1;
			}
		}
		{
			_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_20 = __this->___U3CU3E4__this;
			RuntimeObject* L_21 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_20, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),8));
			NullCheck((RuntimeObject*)L_21);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_22;
			L_22 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_21);
			V_3 = L_22;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_23;
			L_23 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_6 = L_23;
			bool L_24;
			L_24 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_6), NULL);
			if (L_24)
			{
				goto IL_0117_1;
			}
		}
		{
			int32_t L_25 = 1;
			V_0 = L_25;
			__this->___U3CU3E1__state = L_25;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_26 = V_6;
			__this->___U3CU3Eu__1 = L_26;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_27 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__21_t5D9637B25772A807FA1261F4A8EE36BA5CD7B716**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_27, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0150;
		}

IL_00fa_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_28 = __this->___U3CU3Eu__1;
			V_6 = L_28;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_29 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_29, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_30 = (-1);
			V_0 = L_30;
			__this->___U3CU3E1__state = L_30;
		}

IL_0117_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_6), NULL);
		}

IL_0120_1:
		{
			goto IL_013c;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0122;
		}
		throw e;
	}

CATCH_0122:
	{
		Exception_t* L_31 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_7 = L_31;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_32 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_33 = V_7;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_32, L_33, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0150;
	}

IL_013c:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_34 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_34, NULL);
	}

IL_0150:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__21_SetStateMachine_mFCA14E5BBAF1DCA3E14C444C4BAA7DB2C77D5BDA_gshared (U3CDisposeAsyncU3Ed__21_t5D9637B25772A807FA1261F4A8EE36BA5CD7B716* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__26__ctor_mF9E737C2926FC09DE11F9B989627B82FAA662DF6_gshared (U3CDisposeAsyncU3Ed__26_t086ED907A1DA461850C7C13F38E40B6E2DC804E8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__26_MoveNext_mEAEA7707780166248E17790FD4A70D6460D18417_gshared (U3CDisposeAsyncU3Ed__26_t086ED907A1DA461850C7C13F38E40B6E2DC804E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CDisposeAsyncU3Ed__26_t086ED907A1DA461850C7C13F38E40B6E2DC804E8* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014_1;
			}
		}
		{
			goto IL_0019_1;
		}

IL_0012_1:
		{
			goto IL_0077_1;
		}

IL_0014_1:
		{
			goto IL_00fa_1;
		}

IL_0019_1:
		{
			_SelectMany_t5F0438964D43258A2404AE58C3E6CF2F6A05294A* L_3 = __this->___U3CU3E4__this;
			RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),11));
			V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_009c_1;
			}
		}
		{
			_SelectMany_t5F0438964D43258A2404AE58C3E6CF2F6A05294A* L_6 = __this->___U3CU3E4__this;
			RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),11));
			NullCheck((RuntimeObject*)L_7);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_8;
			L_8 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
			V_3 = L_8;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_9;
			L_9 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_9;
			bool L_10;
			L_10 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_10)
			{
				goto IL_0093_1;
			}
		}
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->___U3CU3E1__state = L_11;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_12 = V_2;
			__this->___U3CU3Eu__1 = L_12;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_13 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__26_t086ED907A1DA461850C7C13F38E40B6E2DC804E8**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_13, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0150;
		}

IL_0077_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_14 = __this->___U3CU3Eu__1;
			V_2 = L_14;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_15 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_15, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->___U3CU3E1__state = L_16;
		}

IL_0093_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_009c_1:
		{
			_SelectMany_t5F0438964D43258A2404AE58C3E6CF2F6A05294A* L_17 = __this->___U3CU3E4__this;
			RuntimeObject* L_18 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),10));
			V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_18) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_19 = V_5;
			if (!L_19)
			{
				goto IL_0120_1;
			}
		}
		{
			_SelectMany_t5F0438964D43258A2404AE58C3E6CF2F6A05294A* L_20 = __this->___U3CU3E4__this;
			RuntimeObject* L_21 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_20, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),10));
			NullCheck((RuntimeObject*)L_21);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_22;
			L_22 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_21);
			V_3 = L_22;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_23;
			L_23 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_6 = L_23;
			bool L_24;
			L_24 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_6), NULL);
			if (L_24)
			{
				goto IL_0117_1;
			}
		}
		{
			int32_t L_25 = 1;
			V_0 = L_25;
			__this->___U3CU3E1__state = L_25;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_26 = V_6;
			__this->___U3CU3Eu__1 = L_26;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_27 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__26_t086ED907A1DA461850C7C13F38E40B6E2DC804E8**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_27, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0150;
		}

IL_00fa_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_28 = __this->___U3CU3Eu__1;
			V_6 = L_28;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_29 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_29, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_30 = (-1);
			V_0 = L_30;
			__this->___U3CU3E1__state = L_30;
		}

IL_0117_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_6), NULL);
		}

IL_0120_1:
		{
			goto IL_013c;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0122;
		}
		throw e;
	}

CATCH_0122:
	{
		Exception_t* L_31 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_7 = L_31;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_32 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_33 = V_7;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_32, L_33, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0150;
	}

IL_013c:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_34 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_34, NULL);
	}

IL_0150:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__26_SetStateMachine_m32899D685ADDEB0E1BDC33289A5DF78CD4AFE6AB_gshared (U3CDisposeAsyncU3Ed__26_t086ED907A1DA461850C7C13F38E40B6E2DC804E8* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__27__ctor_m17C766E6CC1F328CB9DCFACA4B75B47A66DE2C8A_gshared (U3CDisposeAsyncU3Ed__27_t2E8ADE0520F9050280DC4DC1E0308C0F383AFCB5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__27_MoveNext_mF51D08064BB1337C857E7D848DAED1F5B4B6672C_gshared (U3CDisposeAsyncU3Ed__27_t2E8ADE0520F9050280DC4DC1E0308C0F383AFCB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CDisposeAsyncU3Ed__27_t2E8ADE0520F9050280DC4DC1E0308C0F383AFCB5* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014_1;
			}
		}
		{
			goto IL_0019_1;
		}

IL_0012_1:
		{
			goto IL_0077_1;
		}

IL_0014_1:
		{
			goto IL_00fa_1;
		}

IL_0019_1:
		{
			_CombineLatest_t140C724924F9D574B2C92DB7FA4E398102F083FC* L_3 = __this->___U3CU3E4__this;
			RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7));
			V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_009c_1;
			}
		}
		{
			_CombineLatest_t140C724924F9D574B2C92DB7FA4E398102F083FC* L_6 = __this->___U3CU3E4__this;
			RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7));
			NullCheck((RuntimeObject*)L_7);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_8;
			L_8 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
			V_3 = L_8;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_9;
			L_9 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_9;
			bool L_10;
			L_10 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_10)
			{
				goto IL_0093_1;
			}
		}
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->___U3CU3E1__state = L_11;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_12 = V_2;
			__this->___U3CU3Eu__1 = L_12;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_13 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__27_t2E8ADE0520F9050280DC4DC1E0308C0F383AFCB5**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_13, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0150;
		}

IL_0077_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_14 = __this->___U3CU3Eu__1;
			V_2 = L_14;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_15 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_15, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->___U3CU3E1__state = L_16;
		}

IL_0093_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_009c_1:
		{
			_CombineLatest_t140C724924F9D574B2C92DB7FA4E398102F083FC* L_17 = __this->___U3CU3E4__this;
			RuntimeObject* L_18 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),12));
			V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_18) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_19 = V_5;
			if (!L_19)
			{
				goto IL_0120_1;
			}
		}
		{
			_CombineLatest_t140C724924F9D574B2C92DB7FA4E398102F083FC* L_20 = __this->___U3CU3E4__this;
			RuntimeObject* L_21 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_20, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),12));
			NullCheck((RuntimeObject*)L_21);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_22;
			L_22 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_21);
			V_3 = L_22;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_23;
			L_23 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_6 = L_23;
			bool L_24;
			L_24 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_6), NULL);
			if (L_24)
			{
				goto IL_0117_1;
			}
		}
		{
			int32_t L_25 = 1;
			V_0 = L_25;
			__this->___U3CU3E1__state = L_25;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_26 = V_6;
			__this->___U3CU3Eu__1 = L_26;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_27 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__27_t2E8ADE0520F9050280DC4DC1E0308C0F383AFCB5**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_27, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0150;
		}

IL_00fa_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_28 = __this->___U3CU3Eu__1;
			V_6 = L_28;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_29 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_29, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_30 = (-1);
			V_0 = L_30;
			__this->___U3CU3E1__state = L_30;
		}

IL_0117_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_6), NULL);
		}

IL_0120_1:
		{
			goto IL_013c;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0122;
		}
		throw e;
	}

CATCH_0122:
	{
		Exception_t* L_31 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_7 = L_31;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_32 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_33 = V_7;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_32, L_33, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0150;
	}

IL_013c:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_34 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_34, NULL);
	}

IL_0150:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__27_SetStateMachine_mA57C6FEBF29E65ABA816A313AE93A894DCCC9A91_gshared (U3CDisposeAsyncU3Ed__27_t2E8ADE0520F9050280DC4DC1E0308C0F383AFCB5* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__32__ctor_m8974CC215356CA153DF0299BD56FFDFEF4F5B2DA_gshared (U3CDisposeAsyncU3Ed__32_tECFB4179B2FF468D59B2DC3FD696B89B031F5919* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__32_MoveNext_m939061E691D55244B0778DC94C4A525A86608982_gshared (U3CDisposeAsyncU3Ed__32_tECFB4179B2FF468D59B2DC3FD696B89B031F5919* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CDisposeAsyncU3Ed__32_tECFB4179B2FF468D59B2DC3FD696B89B031F5919* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014_1;
			}
		}
		{
			goto IL_0019_1;
		}

IL_0012_1:
		{
			goto IL_0077_1;
		}

IL_0014_1:
		{
			goto IL_00fa_1;
		}

IL_0019_1:
		{
			_SelectManyAwaitWithCancellation_t1377CB768DDFCBBEF8FA7E5B60EA9376D3DCDE53* L_3 = __this->___U3CU3E4__this;
			RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),13));
			V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_009c_1;
			}
		}
		{
			_SelectManyAwaitWithCancellation_t1377CB768DDFCBBEF8FA7E5B60EA9376D3DCDE53* L_6 = __this->___U3CU3E4__this;
			RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),13));
			NullCheck((RuntimeObject*)L_7);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_8;
			L_8 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
			V_3 = L_8;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_9;
			L_9 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_9;
			bool L_10;
			L_10 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_10)
			{
				goto IL_0093_1;
			}
		}
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->___U3CU3E1__state = L_11;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_12 = V_2;
			__this->___U3CU3Eu__1 = L_12;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_13 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__32_tECFB4179B2FF468D59B2DC3FD696B89B031F5919**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_13, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0150;
		}

IL_0077_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_14 = __this->___U3CU3Eu__1;
			V_2 = L_14;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_15 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_15, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->___U3CU3E1__state = L_16;
		}

IL_0093_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_009c_1:
		{
			_SelectManyAwaitWithCancellation_t1377CB768DDFCBBEF8FA7E5B60EA9376D3DCDE53* L_17 = __this->___U3CU3E4__this;
			RuntimeObject* L_18 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),12));
			V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_18) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_19 = V_5;
			if (!L_19)
			{
				goto IL_0120_1;
			}
		}
		{
			_SelectManyAwaitWithCancellation_t1377CB768DDFCBBEF8FA7E5B60EA9376D3DCDE53* L_20 = __this->___U3CU3E4__this;
			RuntimeObject* L_21 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_20, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),12));
			NullCheck((RuntimeObject*)L_21);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_22;
			L_22 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_21);
			V_3 = L_22;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_23;
			L_23 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_6 = L_23;
			bool L_24;
			L_24 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_6), NULL);
			if (L_24)
			{
				goto IL_0117_1;
			}
		}
		{
			int32_t L_25 = 1;
			V_0 = L_25;
			__this->___U3CU3E1__state = L_25;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_26 = V_6;
			__this->___U3CU3Eu__1 = L_26;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_27 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__32_tECFB4179B2FF468D59B2DC3FD696B89B031F5919**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_27, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0150;
		}

IL_00fa_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_28 = __this->___U3CU3Eu__1;
			V_6 = L_28;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_29 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_29, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_30 = (-1);
			V_0 = L_30;
			__this->___U3CU3E1__state = L_30;
		}

IL_0117_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_6), NULL);
		}

IL_0120_1:
		{
			goto IL_013c;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0122;
		}
		throw e;
	}

CATCH_0122:
	{
		Exception_t* L_31 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_7 = L_31;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_32 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_33 = V_7;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_32, L_33, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0150;
	}

IL_013c:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_34 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_34, NULL);
	}

IL_0150:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__32_SetStateMachine_mF29868C0A56FA6FD521B59CFAD39302E596455F3_gshared (U3CDisposeAsyncU3Ed__32_tECFB4179B2FF468D59B2DC3FD696B89B031F5919* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__32__ctor_m0289CA2DAB3D7B61EB3D07EF8753E20A28D1C565_gshared (U3CDisposeAsyncU3Ed__32_tF67F132D423CFDCC63994B7BFE4A33CB72970ACC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__32_MoveNext_m6841B3586C1883B894BDBA0602091CC7246B2A58_gshared (U3CDisposeAsyncU3Ed__32_tF67F132D423CFDCC63994B7BFE4A33CB72970ACC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CDisposeAsyncU3Ed__32_tF67F132D423CFDCC63994B7BFE4A33CB72970ACC* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014_1;
			}
		}
		{
			goto IL_0019_1;
		}

IL_0012_1:
		{
			goto IL_0077_1;
		}

IL_0014_1:
		{
			goto IL_00fa_1;
		}

IL_0019_1:
		{
			_SelectManyAwait_t40659A3A53837DAC9BBAB1389D01501F6486E45D* L_3 = __this->___U3CU3E4__this;
			RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),13));
			V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_009c_1;
			}
		}
		{
			_SelectManyAwait_t40659A3A53837DAC9BBAB1389D01501F6486E45D* L_6 = __this->___U3CU3E4__this;
			RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),13));
			NullCheck((RuntimeObject*)L_7);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_8;
			L_8 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
			V_3 = L_8;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_9;
			L_9 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_9;
			bool L_10;
			L_10 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_10)
			{
				goto IL_0093_1;
			}
		}
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->___U3CU3E1__state = L_11;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_12 = V_2;
			__this->___U3CU3Eu__1 = L_12;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_13 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__32_tF67F132D423CFDCC63994B7BFE4A33CB72970ACC**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_13, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0150;
		}

IL_0077_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_14 = __this->___U3CU3Eu__1;
			V_2 = L_14;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_15 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_15, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->___U3CU3E1__state = L_16;
		}

IL_0093_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_009c_1:
		{
			_SelectManyAwait_t40659A3A53837DAC9BBAB1389D01501F6486E45D* L_17 = __this->___U3CU3E4__this;
			RuntimeObject* L_18 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),12));
			V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_18) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_19 = V_5;
			if (!L_19)
			{
				goto IL_0120_1;
			}
		}
		{
			_SelectManyAwait_t40659A3A53837DAC9BBAB1389D01501F6486E45D* L_20 = __this->___U3CU3E4__this;
			RuntimeObject* L_21 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_20, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),12));
			NullCheck((RuntimeObject*)L_21);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_22;
			L_22 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_21);
			V_3 = L_22;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_23;
			L_23 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_6 = L_23;
			bool L_24;
			L_24 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_6), NULL);
			if (L_24)
			{
				goto IL_0117_1;
			}
		}
		{
			int32_t L_25 = 1;
			V_0 = L_25;
			__this->___U3CU3E1__state = L_25;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_26 = V_6;
			__this->___U3CU3Eu__1 = L_26;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_27 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__32_tF67F132D423CFDCC63994B7BFE4A33CB72970ACC**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_27, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0150;
		}

IL_00fa_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_28 = __this->___U3CU3Eu__1;
			V_6 = L_28;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_29 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_29, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_30 = (-1);
			V_0 = L_30;
			__this->___U3CU3E1__state = L_30;
		}

IL_0117_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_6), NULL);
		}

IL_0120_1:
		{
			goto IL_013c;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0122;
		}
		throw e;
	}

CATCH_0122:
	{
		Exception_t* L_31 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_7 = L_31;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_32 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_33 = V_7;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_32, L_33, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0150;
	}

IL_013c:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_34 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_34, NULL);
	}

IL_0150:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__32_SetStateMachine_mD560A98216A79B4B9685D58A831EF830D35B1602_gshared (U3CDisposeAsyncU3Ed__32_tF67F132D423CFDCC63994B7BFE4A33CB72970ACC* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__35__ctor_m6C5E2499AEFB1FF77BB71C25FB7A4AC3782C246D_gshared (U3CDisposeAsyncU3Ed__35_t7213626E6322D3418A0C77E40B45F74AD357EC49* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__35_MoveNext_m92E741126041C22F5D4DAAF1E6AAC2F0D9394F17_gshared (U3CDisposeAsyncU3Ed__35_t7213626E6322D3418A0C77E40B45F74AD357EC49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CDisposeAsyncU3Ed__35_t7213626E6322D3418A0C77E40B45F74AD357EC49* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t* V_9 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_001b_1;
				}
				case 1:
				{
					goto IL_001d_1;
				}
				case 2:
				{
					goto IL_0022_1;
				}
			}
		}
		{
			goto IL_0027_1;
		}

IL_001b_1:
		{
			goto IL_0085_1;
		}

IL_001d_1:
		{
			goto IL_010b_1;
		}

IL_0022_1:
		{
			goto IL_018f_1;
		}

IL_0027_1:
		{
			_CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354* L_2 = __this->___U3CU3E4__this;
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9));
			V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_00aa_1;
			}
		}
		{
			_CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354* L_5 = __this->___U3CU3E4__this;
			RuntimeObject* L_6 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9));
			NullCheck((RuntimeObject*)L_6);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
			L_7 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			V_3 = L_7;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_8;
			L_8 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_9)
			{
				goto IL_00a1_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state = L_10;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_11 = V_2;
			__this->___U3CU3Eu__1 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_12 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__35_t7213626E6322D3418A0C77E40B45F74AD357EC49**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_12, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_01e5;
		}

IL_0085_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13 = __this->___U3CU3Eu__1;
			V_2 = L_13;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_14 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_14, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state = L_15;
		}

IL_00a1_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_00aa_1:
		{
			_CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354* L_16 = __this->___U3CU3E4__this;
			RuntimeObject* L_17 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),14));
			V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_18 = V_5;
			if (!L_18)
			{
				goto IL_0131_1;
			}
		}
		{
			_CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354* L_19 = __this->___U3CU3E4__this;
			RuntimeObject* L_20 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),14));
			NullCheck((RuntimeObject*)L_20);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_21;
			L_21 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
			V_3 = L_21;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_22;
			L_22 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_6 = L_22;
			bool L_23;
			L_23 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_6), NULL);
			if (L_23)
			{
				goto IL_0128_1;
			}
		}
		{
			int32_t L_24 = 1;
			V_0 = L_24;
			__this->___U3CU3E1__state = L_24;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_25 = V_6;
			__this->___U3CU3Eu__1 = L_25;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_26 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__35_t7213626E6322D3418A0C77E40B45F74AD357EC49**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_26, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_01e5;
		}

IL_010b_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_27 = __this->___U3CU3Eu__1;
			V_6 = L_27;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_28 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_28, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_29 = (-1);
			V_0 = L_29;
			__this->___U3CU3E1__state = L_29;
		}

IL_0128_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_6), NULL);
		}

IL_0131_1:
		{
			_CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354* L_30 = __this->___U3CU3E4__this;
			RuntimeObject* L_31 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),19));
			V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_31) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_32 = V_7;
			if (!L_32)
			{
				goto IL_01b5_1;
			}
		}
		{
			_CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354* L_33 = __this->___U3CU3E4__this;
			RuntimeObject* L_34 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_33, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),19));
			NullCheck((RuntimeObject*)L_34);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_35;
			L_35 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
			V_3 = L_35;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36;
			L_36 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_8 = L_36;
			bool L_37;
			L_37 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_8), NULL);
			if (L_37)
			{
				goto IL_01ac_1;
			}
		}
		{
			int32_t L_38 = 2;
			V_0 = L_38;
			__this->___U3CU3E1__state = L_38;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39 = V_8;
			__this->___U3CU3Eu__1 = L_39;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_40 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__35_t7213626E6322D3418A0C77E40B45F74AD357EC49**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_40, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_01e5;
		}

IL_018f_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_41 = __this->___U3CU3Eu__1;
			V_8 = L_41;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_42 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_42, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_43 = (-1);
			V_0 = L_43;
			__this->___U3CU3E1__state = L_43;
		}

IL_01ac_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_8), NULL);
		}

IL_01b5_1:
		{
			goto IL_01d1;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01b7;
		}
		throw e;
	}

CATCH_01b7:
	{
		Exception_t* L_44 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_9 = L_44;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_45 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_46 = V_9;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_45, L_46, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_01e5;
	}

IL_01d1:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_47 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_47, NULL);
	}

IL_01e5:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__35_SetStateMachine_mEE6697DE80AA4AA95B31E6DCBCE511A77FE9789C_gshared (U3CDisposeAsyncU3Ed__35_t7213626E6322D3418A0C77E40B45F74AD357EC49* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__43__ctor_mD8F2F451ACA63AC450D3BAEF2664C61F9E00D160_gshared (U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__43_MoveNext_m79E18DB64BBD84C44BCE21CB5E931EEC42C7F018_gshared (U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Exception_t* V_11 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_001f_1;
				}
				case 1:
				{
					goto IL_0021_1;
				}
				case 2:
				{
					goto IL_0026_1;
				}
				case 3:
				{
					goto IL_002b_1;
				}
			}
		}
		{
			goto IL_0030_1;
		}

IL_001f_1:
		{
			goto IL_008e_1;
		}

IL_0021_1:
		{
			goto IL_0114_1;
		}

IL_0026_1:
		{
			goto IL_019b_1;
		}

IL_002b_1:
		{
			goto IL_021f_1;
		}

IL_0030_1:
		{
			_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746* L_2 = __this->___U3CU3E4__this;
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),11));
			V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_00b3_1;
			}
		}
		{
			_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746* L_5 = __this->___U3CU3E4__this;
			RuntimeObject* L_6 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),11));
			NullCheck((RuntimeObject*)L_6);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
			L_7 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			V_3 = L_7;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_8;
			L_8 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_9)
			{
				goto IL_00aa_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state = L_10;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_11 = V_2;
			__this->___U3CU3Eu__1 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_12 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_12, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0275;
		}

IL_008e_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13 = __this->___U3CU3Eu__1;
			V_2 = L_13;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_14 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_14, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state = L_15;
		}

IL_00aa_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_00b3_1:
		{
			_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746* L_16 = __this->___U3CU3E4__this;
			RuntimeObject* L_17 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),16));
			V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_18 = V_5;
			if (!L_18)
			{
				goto IL_013a_1;
			}
		}
		{
			_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746* L_19 = __this->___U3CU3E4__this;
			RuntimeObject* L_20 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),16));
			NullCheck((RuntimeObject*)L_20);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_21;
			L_21 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
			V_3 = L_21;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_22;
			L_22 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_6 = L_22;
			bool L_23;
			L_23 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_6), NULL);
			if (L_23)
			{
				goto IL_0131_1;
			}
		}
		{
			int32_t L_24 = 1;
			V_0 = L_24;
			__this->___U3CU3E1__state = L_24;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_25 = V_6;
			__this->___U3CU3Eu__1 = L_25;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_26 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_26, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0275;
		}

IL_0114_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_27 = __this->___U3CU3Eu__1;
			V_6 = L_27;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_28 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_28, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_29 = (-1);
			V_0 = L_29;
			__this->___U3CU3E1__state = L_29;
		}

IL_0131_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_6), NULL);
		}

IL_013a_1:
		{
			_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746* L_30 = __this->___U3CU3E4__this;
			RuntimeObject* L_31 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),21));
			V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_31) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_32 = V_7;
			if (!L_32)
			{
				goto IL_01c1_1;
			}
		}
		{
			_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746* L_33 = __this->___U3CU3E4__this;
			RuntimeObject* L_34 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_33, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),21));
			NullCheck((RuntimeObject*)L_34);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_35;
			L_35 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
			V_3 = L_35;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36;
			L_36 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_8 = L_36;
			bool L_37;
			L_37 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_8), NULL);
			if (L_37)
			{
				goto IL_01b8_1;
			}
		}
		{
			int32_t L_38 = 2;
			V_0 = L_38;
			__this->___U3CU3E1__state = L_38;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39 = V_8;
			__this->___U3CU3Eu__1 = L_39;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_40 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_40, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0275;
		}

IL_019b_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_41 = __this->___U3CU3Eu__1;
			V_8 = L_41;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_42 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_42, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_43 = (-1);
			V_0 = L_43;
			__this->___U3CU3E1__state = L_43;
		}

IL_01b8_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_8), NULL);
		}

IL_01c1_1:
		{
			_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746* L_44 = __this->___U3CU3E4__this;
			RuntimeObject* L_45 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),26));
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_45) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_46 = V_9;
			if (!L_46)
			{
				goto IL_0245_1;
			}
		}
		{
			_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746* L_47 = __this->___U3CU3E4__this;
			RuntimeObject* L_48 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_47, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),26));
			NullCheck((RuntimeObject*)L_48);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_49;
			L_49 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_48);
			V_3 = L_49;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50;
			L_50 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_10 = L_50;
			bool L_51;
			L_51 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_51)
			{
				goto IL_023c_1;
			}
		}
		{
			int32_t L_52 = 3;
			V_0 = L_52;
			__this->___U3CU3E1__state = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_53 = V_10;
			__this->___U3CU3Eu__1 = L_53;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_54 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_54, (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0275;
		}

IL_021f_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_55 = __this->___U3CU3Eu__1;
			V_10 = L_55;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_56 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_56, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_57 = (-1);
			V_0 = L_57;
			__this->___U3CU3E1__state = L_57;
		}

IL_023c_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_0245_1:
		{
			goto IL_0261;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0247;
		}
		throw e;
	}

CATCH_0247:
	{
		Exception_t* L_58 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_11 = L_58;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_59 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_60 = V_11;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_59, L_60, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0275;
	}

IL_0261:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_61 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_61, NULL);
	}

IL_0275:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__43_SetStateMachine_mB6DE621EBDACB0E99BF082D1DD72A2F1B7965852_gshared (U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__51__ctor_mC7188B04673057444B62F7B98E0F4EB3334F581C_gshared (U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__51_MoveNext_m6747B58A7222104C4DE48291A234CE200C094187_gshared (U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t* V_13 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_0023_1;
				}
				case 1:
				{
					goto IL_0025_1;
				}
				case 2:
				{
					goto IL_002a_1;
				}
				case 3:
				{
					goto IL_002f_1;
				}
				case 4:
				{
					goto IL_0034_1;
				}
			}
		}
		{
			goto IL_0039_1;
		}

IL_0023_1:
		{
			goto IL_0097_1;
		}

IL_0025_1:
		{
			goto IL_011d_1;
		}

IL_002a_1:
		{
			goto IL_01a4_1;
		}

IL_002f_1:
		{
			goto IL_022b_1;
		}

IL_0034_1:
		{
			goto IL_02af_1;
		}

IL_0039_1:
		{
			_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E* L_2 = __this->___U3CU3E4__this;
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),13));
			V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_00bc_1;
			}
		}
		{
			_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E* L_5 = __this->___U3CU3E4__this;
			RuntimeObject* L_6 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),13));
			NullCheck((RuntimeObject*)L_6);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
			L_7 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			V_3 = L_7;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_8;
			L_8 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_9)
			{
				goto IL_00b3_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state = L_10;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_11 = V_2;
			__this->___U3CU3Eu__1 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_12 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_12, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0305;
		}

IL_0097_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13 = __this->___U3CU3Eu__1;
			V_2 = L_13;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_14 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_14, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state = L_15;
		}

IL_00b3_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_00bc_1:
		{
			_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E* L_16 = __this->___U3CU3E4__this;
			RuntimeObject* L_17 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),18));
			V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_18 = V_5;
			if (!L_18)
			{
				goto IL_0143_1;
			}
		}
		{
			_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E* L_19 = __this->___U3CU3E4__this;
			RuntimeObject* L_20 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),18));
			NullCheck((RuntimeObject*)L_20);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_21;
			L_21 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
			V_3 = L_21;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_22;
			L_22 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_6 = L_22;
			bool L_23;
			L_23 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_6), NULL);
			if (L_23)
			{
				goto IL_013a_1;
			}
		}
		{
			int32_t L_24 = 1;
			V_0 = L_24;
			__this->___U3CU3E1__state = L_24;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_25 = V_6;
			__this->___U3CU3Eu__1 = L_25;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_26 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_26, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0305;
		}

IL_011d_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_27 = __this->___U3CU3Eu__1;
			V_6 = L_27;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_28 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_28, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_29 = (-1);
			V_0 = L_29;
			__this->___U3CU3E1__state = L_29;
		}

IL_013a_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_6), NULL);
		}

IL_0143_1:
		{
			_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E* L_30 = __this->___U3CU3E4__this;
			RuntimeObject* L_31 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),23));
			V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_31) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_32 = V_7;
			if (!L_32)
			{
				goto IL_01ca_1;
			}
		}
		{
			_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E* L_33 = __this->___U3CU3E4__this;
			RuntimeObject* L_34 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_33, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),23));
			NullCheck((RuntimeObject*)L_34);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_35;
			L_35 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
			V_3 = L_35;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36;
			L_36 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_8 = L_36;
			bool L_37;
			L_37 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_8), NULL);
			if (L_37)
			{
				goto IL_01c1_1;
			}
		}
		{
			int32_t L_38 = 2;
			V_0 = L_38;
			__this->___U3CU3E1__state = L_38;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39 = V_8;
			__this->___U3CU3Eu__1 = L_39;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_40 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_40, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0305;
		}

IL_01a4_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_41 = __this->___U3CU3Eu__1;
			V_8 = L_41;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_42 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_42, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_43 = (-1);
			V_0 = L_43;
			__this->___U3CU3E1__state = L_43;
		}

IL_01c1_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_8), NULL);
		}

IL_01ca_1:
		{
			_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E* L_44 = __this->___U3CU3E4__this;
			RuntimeObject* L_45 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),28));
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_45) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_46 = V_9;
			if (!L_46)
			{
				goto IL_0251_1;
			}
		}
		{
			_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E* L_47 = __this->___U3CU3E4__this;
			RuntimeObject* L_48 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_47, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),28));
			NullCheck((RuntimeObject*)L_48);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_49;
			L_49 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_48);
			V_3 = L_49;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50;
			L_50 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_10 = L_50;
			bool L_51;
			L_51 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_51)
			{
				goto IL_0248_1;
			}
		}
		{
			int32_t L_52 = 3;
			V_0 = L_52;
			__this->___U3CU3E1__state = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_53 = V_10;
			__this->___U3CU3Eu__1 = L_53;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_54 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_54, (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0305;
		}

IL_022b_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_55 = __this->___U3CU3Eu__1;
			V_10 = L_55;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_56 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_56, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_57 = (-1);
			V_0 = L_57;
			__this->___U3CU3E1__state = L_57;
		}

IL_0248_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_0251_1:
		{
			_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E* L_58 = __this->___U3CU3E4__this;
			RuntimeObject* L_59 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_58, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),33));
			V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_60 = V_11;
			if (!L_60)
			{
				goto IL_02d5_1;
			}
		}
		{
			_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E* L_61 = __this->___U3CU3E4__this;
			RuntimeObject* L_62 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_61, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),33));
			NullCheck((RuntimeObject*)L_62);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_63;
			L_63 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_62);
			V_3 = L_63;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_64;
			L_64 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_12 = L_64;
			bool L_65;
			L_65 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_12), NULL);
			if (L_65)
			{
				goto IL_02cc_1;
			}
		}
		{
			int32_t L_66 = 4;
			V_0 = L_66;
			__this->___U3CU3E1__state = L_66;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_67 = V_12;
			__this->___U3CU3Eu__1 = L_67;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_68 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_68, (&V_12), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0305;
		}

IL_02af_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_69 = __this->___U3CU3Eu__1;
			V_12 = L_69;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_70 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_70, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_71 = (-1);
			V_0 = L_71;
			__this->___U3CU3E1__state = L_71;
		}

IL_02cc_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_12), NULL);
		}

IL_02d5_1:
		{
			goto IL_02f1;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02d7;
		}
		throw e;
	}

CATCH_02d7:
	{
		Exception_t* L_72 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_13 = L_72;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_73 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_74 = V_13;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_73, L_74, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0305;
	}

IL_02f1:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_75 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_75, NULL);
	}

IL_0305:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__51_SetStateMachine_mB79230474B032B0D2214B68CA20D6DCEA9CC311F_gshared (U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__59__ctor_mC4423DD814E88B67F82EBA64A9310D85773AA8E5_gshared (U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__59_MoveNext_m852D658098E0579F717289D951C48C3E1F1B9DDF_gshared (U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	Exception_t* V_15 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_0027_1;
				}
				case 1:
				{
					goto IL_0029_1;
				}
				case 2:
				{
					goto IL_002e_1;
				}
				case 3:
				{
					goto IL_0033_1;
				}
				case 4:
				{
					goto IL_0038_1;
				}
				case 5:
				{
					goto IL_003d_1;
				}
			}
		}
		{
			goto IL_0042_1;
		}

IL_0027_1:
		{
			goto IL_00a0_1;
		}

IL_0029_1:
		{
			goto IL_0126_1;
		}

IL_002e_1:
		{
			goto IL_01ad_1;
		}

IL_0033_1:
		{
			goto IL_0234_1;
		}

IL_0038_1:
		{
			goto IL_02bb_1;
		}

IL_003d_1:
		{
			goto IL_033f_1;
		}

IL_0042_1:
		{
			_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_2 = __this->___U3CU3E4__this;
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),15));
			V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_00c5_1;
			}
		}
		{
			_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_5 = __this->___U3CU3E4__this;
			RuntimeObject* L_6 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),15));
			NullCheck((RuntimeObject*)L_6);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
			L_7 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			V_3 = L_7;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_8;
			L_8 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_9)
			{
				goto IL_00bc_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state = L_10;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_11 = V_2;
			__this->___U3CU3Eu__1 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_12 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_12, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0395;
		}

IL_00a0_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13 = __this->___U3CU3Eu__1;
			V_2 = L_13;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_14 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_14, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state = L_15;
		}

IL_00bc_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_00c5_1:
		{
			_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_16 = __this->___U3CU3E4__this;
			RuntimeObject* L_17 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),20));
			V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_18 = V_5;
			if (!L_18)
			{
				goto IL_014c_1;
			}
		}
		{
			_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_19 = __this->___U3CU3E4__this;
			RuntimeObject* L_20 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),20));
			NullCheck((RuntimeObject*)L_20);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_21;
			L_21 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
			V_3 = L_21;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_22;
			L_22 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_6 = L_22;
			bool L_23;
			L_23 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_6), NULL);
			if (L_23)
			{
				goto IL_0143_1;
			}
		}
		{
			int32_t L_24 = 1;
			V_0 = L_24;
			__this->___U3CU3E1__state = L_24;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_25 = V_6;
			__this->___U3CU3Eu__1 = L_25;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_26 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_26, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0395;
		}

IL_0126_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_27 = __this->___U3CU3Eu__1;
			V_6 = L_27;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_28 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_28, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_29 = (-1);
			V_0 = L_29;
			__this->___U3CU3E1__state = L_29;
		}

IL_0143_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_6), NULL);
		}

IL_014c_1:
		{
			_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_30 = __this->___U3CU3E4__this;
			RuntimeObject* L_31 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),25));
			V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_31) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_32 = V_7;
			if (!L_32)
			{
				goto IL_01d3_1;
			}
		}
		{
			_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_33 = __this->___U3CU3E4__this;
			RuntimeObject* L_34 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_33, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),25));
			NullCheck((RuntimeObject*)L_34);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_35;
			L_35 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
			V_3 = L_35;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36;
			L_36 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_8 = L_36;
			bool L_37;
			L_37 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_8), NULL);
			if (L_37)
			{
				goto IL_01ca_1;
			}
		}
		{
			int32_t L_38 = 2;
			V_0 = L_38;
			__this->___U3CU3E1__state = L_38;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39 = V_8;
			__this->___U3CU3Eu__1 = L_39;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_40 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_40, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0395;
		}

IL_01ad_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_41 = __this->___U3CU3Eu__1;
			V_8 = L_41;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_42 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_42, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_43 = (-1);
			V_0 = L_43;
			__this->___U3CU3E1__state = L_43;
		}

IL_01ca_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_8), NULL);
		}

IL_01d3_1:
		{
			_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_44 = __this->___U3CU3E4__this;
			RuntimeObject* L_45 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),30));
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_45) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_46 = V_9;
			if (!L_46)
			{
				goto IL_025a_1;
			}
		}
		{
			_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_47 = __this->___U3CU3E4__this;
			RuntimeObject* L_48 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_47, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),30));
			NullCheck((RuntimeObject*)L_48);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_49;
			L_49 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_48);
			V_3 = L_49;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50;
			L_50 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_10 = L_50;
			bool L_51;
			L_51 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_51)
			{
				goto IL_0251_1;
			}
		}
		{
			int32_t L_52 = 3;
			V_0 = L_52;
			__this->___U3CU3E1__state = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_53 = V_10;
			__this->___U3CU3Eu__1 = L_53;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_54 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_54, (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0395;
		}

IL_0234_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_55 = __this->___U3CU3Eu__1;
			V_10 = L_55;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_56 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_56, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_57 = (-1);
			V_0 = L_57;
			__this->___U3CU3E1__state = L_57;
		}

IL_0251_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_025a_1:
		{
			_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_58 = __this->___U3CU3E4__this;
			RuntimeObject* L_59 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_58, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),35));
			V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_60 = V_11;
			if (!L_60)
			{
				goto IL_02e1_1;
			}
		}
		{
			_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_61 = __this->___U3CU3E4__this;
			RuntimeObject* L_62 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_61, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),35));
			NullCheck((RuntimeObject*)L_62);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_63;
			L_63 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_62);
			V_3 = L_63;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_64;
			L_64 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_12 = L_64;
			bool L_65;
			L_65 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_12), NULL);
			if (L_65)
			{
				goto IL_02d8_1;
			}
		}
		{
			int32_t L_66 = 4;
			V_0 = L_66;
			__this->___U3CU3E1__state = L_66;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_67 = V_12;
			__this->___U3CU3Eu__1 = L_67;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_68 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_68, (&V_12), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0395;
		}

IL_02bb_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_69 = __this->___U3CU3Eu__1;
			V_12 = L_69;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_70 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_70, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_71 = (-1);
			V_0 = L_71;
			__this->___U3CU3E1__state = L_71;
		}

IL_02d8_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_12), NULL);
		}

IL_02e1_1:
		{
			_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_72 = __this->___U3CU3E4__this;
			RuntimeObject* L_73 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_72, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),40));
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_73) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_74 = V_13;
			if (!L_74)
			{
				goto IL_0365_1;
			}
		}
		{
			_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_75 = __this->___U3CU3E4__this;
			RuntimeObject* L_76 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_75, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),40));
			NullCheck((RuntimeObject*)L_76);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_77;
			L_77 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_76);
			V_3 = L_77;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_78;
			L_78 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_14 = L_78;
			bool L_79;
			L_79 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_79)
			{
				goto IL_035c_1;
			}
		}
		{
			int32_t L_80 = 5;
			V_0 = L_80;
			__this->___U3CU3E1__state = L_80;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_81 = V_14;
			__this->___U3CU3Eu__1 = L_81;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_82 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_82, (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0395;
		}

IL_033f_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_83 = __this->___U3CU3Eu__1;
			V_14 = L_83;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_84 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_84, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_85 = (-1);
			V_0 = L_85;
			__this->___U3CU3E1__state = L_85;
		}

IL_035c_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_0365_1:
		{
			goto IL_0381;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0367;
		}
		throw e;
	}

CATCH_0367:
	{
		Exception_t* L_86 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_15 = L_86;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_87 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_88 = V_15;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_87, L_88, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0395;
	}

IL_0381:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_89 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_89, NULL);
	}

IL_0395:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__59_SetStateMachine_mDC9395DD1141C0FBD68B4FD2C82DC867667B1057_gshared (U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__67__ctor_mDC2C1D8DD47D04617301DD587D99BB4E572ACE2A_gshared (U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__67_MoveNext_mB9947FCCE314F8D414996F3AB194F69E97BDD81F_gshared (U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	bool V_15 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Exception_t* V_17 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_002b_1;
				}
				case 1:
				{
					goto IL_002d_1;
				}
				case 2:
				{
					goto IL_0032_1;
				}
				case 3:
				{
					goto IL_0037_1;
				}
				case 4:
				{
					goto IL_003c_1;
				}
				case 5:
				{
					goto IL_0041_1;
				}
				case 6:
				{
					goto IL_0046_1;
				}
			}
		}
		{
			goto IL_004b_1;
		}

IL_002b_1:
		{
			goto IL_00a9_1;
		}

IL_002d_1:
		{
			goto IL_012f_1;
		}

IL_0032_1:
		{
			goto IL_01b6_1;
		}

IL_0037_1:
		{
			goto IL_023d_1;
		}

IL_003c_1:
		{
			goto IL_02c4_1;
		}

IL_0041_1:
		{
			goto IL_034b_1;
		}

IL_0046_1:
		{
			goto IL_03cf_1;
		}

IL_004b_1:
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_2 = __this->___U3CU3E4__this;
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),17));
			V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_00ce_1;
			}
		}
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_5 = __this->___U3CU3E4__this;
			RuntimeObject* L_6 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),17));
			NullCheck((RuntimeObject*)L_6);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
			L_7 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			V_3 = L_7;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_8;
			L_8 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_9)
			{
				goto IL_00c5_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state = L_10;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_11 = V_2;
			__this->___U3CU3Eu__1 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_12 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_12, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0425;
		}

IL_00a9_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13 = __this->___U3CU3Eu__1;
			V_2 = L_13;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_14 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_14, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state = L_15;
		}

IL_00c5_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_00ce_1:
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_16 = __this->___U3CU3E4__this;
			RuntimeObject* L_17 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),22));
			V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_18 = V_5;
			if (!L_18)
			{
				goto IL_0155_1;
			}
		}
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_19 = __this->___U3CU3E4__this;
			RuntimeObject* L_20 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),22));
			NullCheck((RuntimeObject*)L_20);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_21;
			L_21 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
			V_3 = L_21;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_22;
			L_22 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_6 = L_22;
			bool L_23;
			L_23 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_6), NULL);
			if (L_23)
			{
				goto IL_014c_1;
			}
		}
		{
			int32_t L_24 = 1;
			V_0 = L_24;
			__this->___U3CU3E1__state = L_24;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_25 = V_6;
			__this->___U3CU3Eu__1 = L_25;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_26 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_26, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0425;
		}

IL_012f_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_27 = __this->___U3CU3Eu__1;
			V_6 = L_27;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_28 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_28, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_29 = (-1);
			V_0 = L_29;
			__this->___U3CU3E1__state = L_29;
		}

IL_014c_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_6), NULL);
		}

IL_0155_1:
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_30 = __this->___U3CU3E4__this;
			RuntimeObject* L_31 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),27));
			V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_31) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_32 = V_7;
			if (!L_32)
			{
				goto IL_01dc_1;
			}
		}
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_33 = __this->___U3CU3E4__this;
			RuntimeObject* L_34 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_33, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),27));
			NullCheck((RuntimeObject*)L_34);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_35;
			L_35 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
			V_3 = L_35;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36;
			L_36 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_8 = L_36;
			bool L_37;
			L_37 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_8), NULL);
			if (L_37)
			{
				goto IL_01d3_1;
			}
		}
		{
			int32_t L_38 = 2;
			V_0 = L_38;
			__this->___U3CU3E1__state = L_38;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39 = V_8;
			__this->___U3CU3Eu__1 = L_39;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_40 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_40, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0425;
		}

IL_01b6_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_41 = __this->___U3CU3Eu__1;
			V_8 = L_41;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_42 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_42, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_43 = (-1);
			V_0 = L_43;
			__this->___U3CU3E1__state = L_43;
		}

IL_01d3_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_8), NULL);
		}

IL_01dc_1:
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_44 = __this->___U3CU3E4__this;
			RuntimeObject* L_45 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),32));
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_45) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_46 = V_9;
			if (!L_46)
			{
				goto IL_0263_1;
			}
		}
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_47 = __this->___U3CU3E4__this;
			RuntimeObject* L_48 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_47, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),32));
			NullCheck((RuntimeObject*)L_48);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_49;
			L_49 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_48);
			V_3 = L_49;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50;
			L_50 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_10 = L_50;
			bool L_51;
			L_51 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_51)
			{
				goto IL_025a_1;
			}
		}
		{
			int32_t L_52 = 3;
			V_0 = L_52;
			__this->___U3CU3E1__state = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_53 = V_10;
			__this->___U3CU3Eu__1 = L_53;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_54 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_54, (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0425;
		}

IL_023d_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_55 = __this->___U3CU3Eu__1;
			V_10 = L_55;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_56 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_56, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_57 = (-1);
			V_0 = L_57;
			__this->___U3CU3E1__state = L_57;
		}

IL_025a_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_0263_1:
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_58 = __this->___U3CU3E4__this;
			RuntimeObject* L_59 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_58, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),37));
			V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_60 = V_11;
			if (!L_60)
			{
				goto IL_02ea_1;
			}
		}
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_61 = __this->___U3CU3E4__this;
			RuntimeObject* L_62 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_61, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),37));
			NullCheck((RuntimeObject*)L_62);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_63;
			L_63 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_62);
			V_3 = L_63;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_64;
			L_64 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_12 = L_64;
			bool L_65;
			L_65 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_12), NULL);
			if (L_65)
			{
				goto IL_02e1_1;
			}
		}
		{
			int32_t L_66 = 4;
			V_0 = L_66;
			__this->___U3CU3E1__state = L_66;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_67 = V_12;
			__this->___U3CU3Eu__1 = L_67;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_68 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_68, (&V_12), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0425;
		}

IL_02c4_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_69 = __this->___U3CU3Eu__1;
			V_12 = L_69;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_70 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_70, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_71 = (-1);
			V_0 = L_71;
			__this->___U3CU3E1__state = L_71;
		}

IL_02e1_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_12), NULL);
		}

IL_02ea_1:
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_72 = __this->___U3CU3E4__this;
			RuntimeObject* L_73 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_72, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),42));
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_73) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_74 = V_13;
			if (!L_74)
			{
				goto IL_0371_1;
			}
		}
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_75 = __this->___U3CU3E4__this;
			RuntimeObject* L_76 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_75, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),42));
			NullCheck((RuntimeObject*)L_76);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_77;
			L_77 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_76);
			V_3 = L_77;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_78;
			L_78 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_14 = L_78;
			bool L_79;
			L_79 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_79)
			{
				goto IL_0368_1;
			}
		}
		{
			int32_t L_80 = 5;
			V_0 = L_80;
			__this->___U3CU3E1__state = L_80;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_81 = V_14;
			__this->___U3CU3Eu__1 = L_81;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_82 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_82, (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0425;
		}

IL_034b_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_83 = __this->___U3CU3Eu__1;
			V_14 = L_83;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_84 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_84, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_85 = (-1);
			V_0 = L_85;
			__this->___U3CU3E1__state = L_85;
		}

IL_0368_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_0371_1:
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_86 = __this->___U3CU3E4__this;
			RuntimeObject* L_87 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_86, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),47));
			V_15 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_87) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_88 = V_15;
			if (!L_88)
			{
				goto IL_03f5_1;
			}
		}
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_89 = __this->___U3CU3E4__this;
			RuntimeObject* L_90 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_89, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),47));
			NullCheck((RuntimeObject*)L_90);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_91;
			L_91 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_90);
			V_3 = L_91;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_92;
			L_92 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_16 = L_92;
			bool L_93;
			L_93 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_16), NULL);
			if (L_93)
			{
				goto IL_03ec_1;
			}
		}
		{
			int32_t L_94 = 6;
			V_0 = L_94;
			__this->___U3CU3E1__state = L_94;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_95 = V_16;
			__this->___U3CU3Eu__1 = L_95;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_96 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_96, (&V_16), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0425;
		}

IL_03cf_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_97 = __this->___U3CU3Eu__1;
			V_16 = L_97;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_98 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_98, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_99 = (-1);
			V_0 = L_99;
			__this->___U3CU3E1__state = L_99;
		}

IL_03ec_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_16), NULL);
		}

IL_03f5_1:
		{
			goto IL_0411;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_03f7;
		}
		throw e;
	}

CATCH_03f7:
	{
		Exception_t* L_100 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_17 = L_100;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_101 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_102 = V_17;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_101, L_102, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0425;
	}

IL_0411:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_103 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_103, NULL);
	}

IL_0425:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__67_SetStateMachine_mB0E1FB565A6DFC136435068EBD90FC135F5C3C93_gshared (U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__75__ctor_m9AA30765C7E6A7E1D5B44541C56F62CB9DEBE594_gshared (U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__75_MoveNext_m71F6284CC2A780676AD535B5EA4FCE4D2DA1DA8E_gshared (U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	bool V_15 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_18;
	memset((&V_18), 0, sizeof(V_18));
	Exception_t* V_19 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_002f_1;
				}
				case 1:
				{
					goto IL_0034_1;
				}
				case 2:
				{
					goto IL_0039_1;
				}
				case 3:
				{
					goto IL_003e_1;
				}
				case 4:
				{
					goto IL_0043_1;
				}
				case 5:
				{
					goto IL_0048_1;
				}
				case 6:
				{
					goto IL_004d_1;
				}
				case 7:
				{
					goto IL_0052_1;
				}
			}
		}
		{
			goto IL_0057_1;
		}

IL_002f_1:
		{
			goto IL_00b5_1;
		}

IL_0034_1:
		{
			goto IL_013b_1;
		}

IL_0039_1:
		{
			goto IL_01c2_1;
		}

IL_003e_1:
		{
			goto IL_0249_1;
		}

IL_0043_1:
		{
			goto IL_02d0_1;
		}

IL_0048_1:
		{
			goto IL_0357_1;
		}

IL_004d_1:
		{
			goto IL_03de_1;
		}

IL_0052_1:
		{
			goto IL_0462_1;
		}

IL_0057_1:
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_2 = __this->___U3CU3E4__this;
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),19));
			V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_00da_1;
			}
		}
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_5 = __this->___U3CU3E4__this;
			RuntimeObject* L_6 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),19));
			NullCheck((RuntimeObject*)L_6);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
			L_7 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			V_3 = L_7;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_8;
			L_8 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_9)
			{
				goto IL_00d1_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state = L_10;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_11 = V_2;
			__this->___U3CU3Eu__1 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_12 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_12, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_04b8;
		}

IL_00b5_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13 = __this->___U3CU3Eu__1;
			V_2 = L_13;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_14 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_14, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state = L_15;
		}

IL_00d1_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_00da_1:
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_16 = __this->___U3CU3E4__this;
			RuntimeObject* L_17 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),24));
			V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_18 = V_5;
			if (!L_18)
			{
				goto IL_0161_1;
			}
		}
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_19 = __this->___U3CU3E4__this;
			RuntimeObject* L_20 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),24));
			NullCheck((RuntimeObject*)L_20);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_21;
			L_21 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
			V_3 = L_21;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_22;
			L_22 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_6 = L_22;
			bool L_23;
			L_23 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_6), NULL);
			if (L_23)
			{
				goto IL_0158_1;
			}
		}
		{
			int32_t L_24 = 1;
			V_0 = L_24;
			__this->___U3CU3E1__state = L_24;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_25 = V_6;
			__this->___U3CU3Eu__1 = L_25;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_26 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_26, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_04b8;
		}

IL_013b_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_27 = __this->___U3CU3Eu__1;
			V_6 = L_27;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_28 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_28, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_29 = (-1);
			V_0 = L_29;
			__this->___U3CU3E1__state = L_29;
		}

IL_0158_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_6), NULL);
		}

IL_0161_1:
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_30 = __this->___U3CU3E4__this;
			RuntimeObject* L_31 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),29));
			V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_31) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_32 = V_7;
			if (!L_32)
			{
				goto IL_01e8_1;
			}
		}
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_33 = __this->___U3CU3E4__this;
			RuntimeObject* L_34 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_33, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),29));
			NullCheck((RuntimeObject*)L_34);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_35;
			L_35 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
			V_3 = L_35;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36;
			L_36 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_8 = L_36;
			bool L_37;
			L_37 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_8), NULL);
			if (L_37)
			{
				goto IL_01df_1;
			}
		}
		{
			int32_t L_38 = 2;
			V_0 = L_38;
			__this->___U3CU3E1__state = L_38;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39 = V_8;
			__this->___U3CU3Eu__1 = L_39;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_40 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_40, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_04b8;
		}

IL_01c2_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_41 = __this->___U3CU3Eu__1;
			V_8 = L_41;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_42 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_42, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_43 = (-1);
			V_0 = L_43;
			__this->___U3CU3E1__state = L_43;
		}

IL_01df_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_8), NULL);
		}

IL_01e8_1:
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_44 = __this->___U3CU3E4__this;
			RuntimeObject* L_45 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),34));
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_45) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_46 = V_9;
			if (!L_46)
			{
				goto IL_026f_1;
			}
		}
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_47 = __this->___U3CU3E4__this;
			RuntimeObject* L_48 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_47, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),34));
			NullCheck((RuntimeObject*)L_48);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_49;
			L_49 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_48);
			V_3 = L_49;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50;
			L_50 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_10 = L_50;
			bool L_51;
			L_51 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_51)
			{
				goto IL_0266_1;
			}
		}
		{
			int32_t L_52 = 3;
			V_0 = L_52;
			__this->___U3CU3E1__state = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_53 = V_10;
			__this->___U3CU3Eu__1 = L_53;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_54 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_54, (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_04b8;
		}

IL_0249_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_55 = __this->___U3CU3Eu__1;
			V_10 = L_55;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_56 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_56, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_57 = (-1);
			V_0 = L_57;
			__this->___U3CU3E1__state = L_57;
		}

IL_0266_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_026f_1:
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_58 = __this->___U3CU3E4__this;
			RuntimeObject* L_59 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_58, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),39));
			V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_60 = V_11;
			if (!L_60)
			{
				goto IL_02f6_1;
			}
		}
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_61 = __this->___U3CU3E4__this;
			RuntimeObject* L_62 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_61, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),39));
			NullCheck((RuntimeObject*)L_62);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_63;
			L_63 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_62);
			V_3 = L_63;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_64;
			L_64 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_12 = L_64;
			bool L_65;
			L_65 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_12), NULL);
			if (L_65)
			{
				goto IL_02ed_1;
			}
		}
		{
			int32_t L_66 = 4;
			V_0 = L_66;
			__this->___U3CU3E1__state = L_66;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_67 = V_12;
			__this->___U3CU3Eu__1 = L_67;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_68 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_68, (&V_12), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_04b8;
		}

IL_02d0_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_69 = __this->___U3CU3Eu__1;
			V_12 = L_69;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_70 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_70, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_71 = (-1);
			V_0 = L_71;
			__this->___U3CU3E1__state = L_71;
		}

IL_02ed_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_12), NULL);
		}

IL_02f6_1:
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_72 = __this->___U3CU3E4__this;
			RuntimeObject* L_73 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_72, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),44));
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_73) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_74 = V_13;
			if (!L_74)
			{
				goto IL_037d_1;
			}
		}
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_75 = __this->___U3CU3E4__this;
			RuntimeObject* L_76 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_75, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),44));
			NullCheck((RuntimeObject*)L_76);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_77;
			L_77 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_76);
			V_3 = L_77;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_78;
			L_78 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_14 = L_78;
			bool L_79;
			L_79 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_79)
			{
				goto IL_0374_1;
			}
		}
		{
			int32_t L_80 = 5;
			V_0 = L_80;
			__this->___U3CU3E1__state = L_80;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_81 = V_14;
			__this->___U3CU3Eu__1 = L_81;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_82 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_82, (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_04b8;
		}

IL_0357_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_83 = __this->___U3CU3Eu__1;
			V_14 = L_83;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_84 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_84, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_85 = (-1);
			V_0 = L_85;
			__this->___U3CU3E1__state = L_85;
		}

IL_0374_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_037d_1:
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_86 = __this->___U3CU3E4__this;
			RuntimeObject* L_87 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_86, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),49));
			V_15 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_87) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_88 = V_15;
			if (!L_88)
			{
				goto IL_0404_1;
			}
		}
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_89 = __this->___U3CU3E4__this;
			RuntimeObject* L_90 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_89, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),49));
			NullCheck((RuntimeObject*)L_90);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_91;
			L_91 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_90);
			V_3 = L_91;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_92;
			L_92 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_16 = L_92;
			bool L_93;
			L_93 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_16), NULL);
			if (L_93)
			{
				goto IL_03fb_1;
			}
		}
		{
			int32_t L_94 = 6;
			V_0 = L_94;
			__this->___U3CU3E1__state = L_94;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_95 = V_16;
			__this->___U3CU3Eu__1 = L_95;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_96 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_96, (&V_16), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_04b8;
		}

IL_03de_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_97 = __this->___U3CU3Eu__1;
			V_16 = L_97;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_98 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_98, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_99 = (-1);
			V_0 = L_99;
			__this->___U3CU3E1__state = L_99;
		}

IL_03fb_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_16), NULL);
		}

IL_0404_1:
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_100 = __this->___U3CU3E4__this;
			RuntimeObject* L_101 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_100, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),54));
			V_17 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_101) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_102 = V_17;
			if (!L_102)
			{
				goto IL_0488_1;
			}
		}
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_103 = __this->___U3CU3E4__this;
			RuntimeObject* L_104 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_103, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),54));
			NullCheck((RuntimeObject*)L_104);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_105;
			L_105 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_104);
			V_3 = L_105;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_106;
			L_106 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_18 = L_106;
			bool L_107;
			L_107 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_18), NULL);
			if (L_107)
			{
				goto IL_047f_1;
			}
		}
		{
			int32_t L_108 = 7;
			V_0 = L_108;
			__this->___U3CU3E1__state = L_108;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_109 = V_18;
			__this->___U3CU3Eu__1 = L_109;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_110 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_110, (&V_18), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_04b8;
		}

IL_0462_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_111 = __this->___U3CU3Eu__1;
			V_18 = L_111;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_112 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_112, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_113 = (-1);
			V_0 = L_113;
			__this->___U3CU3E1__state = L_113;
		}

IL_047f_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_18), NULL);
		}

IL_0488_1:
		{
			goto IL_04a4;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_048a;
		}
		throw e;
	}

CATCH_048a:
	{
		Exception_t* L_114 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_19 = L_114;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_115 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_116 = V_19;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_115, L_116, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_04b8;
	}

IL_04a4:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_117 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_117, NULL);
	}

IL_04b8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__75_SetStateMachine_m246B27D91AD4F21882A434948582961383E62C60_gshared (U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__83__ctor_m5124CBB4E5140DD1314AAA4136C137F41F552A5F_gshared (U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__83_MoveNext_m5B64682110385671F077C12F78F384A9DC747417_gshared (U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	bool V_15 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_18;
	memset((&V_18), 0, sizeof(V_18));
	bool V_19 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_20;
	memset((&V_20), 0, sizeof(V_20));
	Exception_t* V_21 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_0033_1;
				}
				case 1:
				{
					goto IL_0038_1;
				}
				case 2:
				{
					goto IL_003d_1;
				}
				case 3:
				{
					goto IL_0042_1;
				}
				case 4:
				{
					goto IL_0047_1;
				}
				case 5:
				{
					goto IL_004c_1;
				}
				case 6:
				{
					goto IL_0051_1;
				}
				case 7:
				{
					goto IL_0056_1;
				}
				case 8:
				{
					goto IL_005b_1;
				}
			}
		}
		{
			goto IL_0060_1;
		}

IL_0033_1:
		{
			goto IL_00be_1;
		}

IL_0038_1:
		{
			goto IL_0144_1;
		}

IL_003d_1:
		{
			goto IL_01cb_1;
		}

IL_0042_1:
		{
			goto IL_0252_1;
		}

IL_0047_1:
		{
			goto IL_02d9_1;
		}

IL_004c_1:
		{
			goto IL_0360_1;
		}

IL_0051_1:
		{
			goto IL_03e7_1;
		}

IL_0056_1:
		{
			goto IL_046e_1;
		}

IL_005b_1:
		{
			goto IL_04f2_1;
		}

IL_0060_1:
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_2 = __this->___U3CU3E4__this;
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),21));
			V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_00e3_1;
			}
		}
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_5 = __this->___U3CU3E4__this;
			RuntimeObject* L_6 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),21));
			NullCheck((RuntimeObject*)L_6);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
			L_7 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			V_3 = L_7;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_8;
			L_8 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_9)
			{
				goto IL_00da_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state = L_10;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_11 = V_2;
			__this->___U3CU3Eu__1 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_12 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_12, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0548;
		}

IL_00be_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13 = __this->___U3CU3Eu__1;
			V_2 = L_13;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_14 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_14, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state = L_15;
		}

IL_00da_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_00e3_1:
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_16 = __this->___U3CU3E4__this;
			RuntimeObject* L_17 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),26));
			V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_18 = V_5;
			if (!L_18)
			{
				goto IL_016a_1;
			}
		}
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_19 = __this->___U3CU3E4__this;
			RuntimeObject* L_20 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),26));
			NullCheck((RuntimeObject*)L_20);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_21;
			L_21 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
			V_3 = L_21;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_22;
			L_22 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_6 = L_22;
			bool L_23;
			L_23 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_6), NULL);
			if (L_23)
			{
				goto IL_0161_1;
			}
		}
		{
			int32_t L_24 = 1;
			V_0 = L_24;
			__this->___U3CU3E1__state = L_24;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_25 = V_6;
			__this->___U3CU3Eu__1 = L_25;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_26 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_26, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0548;
		}

IL_0144_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_27 = __this->___U3CU3Eu__1;
			V_6 = L_27;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_28 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_28, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_29 = (-1);
			V_0 = L_29;
			__this->___U3CU3E1__state = L_29;
		}

IL_0161_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_6), NULL);
		}

IL_016a_1:
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_30 = __this->___U3CU3E4__this;
			RuntimeObject* L_31 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),31));
			V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_31) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_32 = V_7;
			if (!L_32)
			{
				goto IL_01f1_1;
			}
		}
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_33 = __this->___U3CU3E4__this;
			RuntimeObject* L_34 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_33, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),31));
			NullCheck((RuntimeObject*)L_34);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_35;
			L_35 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
			V_3 = L_35;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36;
			L_36 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_8 = L_36;
			bool L_37;
			L_37 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_8), NULL);
			if (L_37)
			{
				goto IL_01e8_1;
			}
		}
		{
			int32_t L_38 = 2;
			V_0 = L_38;
			__this->___U3CU3E1__state = L_38;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39 = V_8;
			__this->___U3CU3Eu__1 = L_39;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_40 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_40, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0548;
		}

IL_01cb_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_41 = __this->___U3CU3Eu__1;
			V_8 = L_41;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_42 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_42, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_43 = (-1);
			V_0 = L_43;
			__this->___U3CU3E1__state = L_43;
		}

IL_01e8_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_8), NULL);
		}

IL_01f1_1:
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_44 = __this->___U3CU3E4__this;
			RuntimeObject* L_45 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),36));
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_45) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_46 = V_9;
			if (!L_46)
			{
				goto IL_0278_1;
			}
		}
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_47 = __this->___U3CU3E4__this;
			RuntimeObject* L_48 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_47, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),36));
			NullCheck((RuntimeObject*)L_48);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_49;
			L_49 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_48);
			V_3 = L_49;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50;
			L_50 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_10 = L_50;
			bool L_51;
			L_51 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_51)
			{
				goto IL_026f_1;
			}
		}
		{
			int32_t L_52 = 3;
			V_0 = L_52;
			__this->___U3CU3E1__state = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_53 = V_10;
			__this->___U3CU3Eu__1 = L_53;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_54 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_54, (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0548;
		}

IL_0252_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_55 = __this->___U3CU3Eu__1;
			V_10 = L_55;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_56 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_56, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_57 = (-1);
			V_0 = L_57;
			__this->___U3CU3E1__state = L_57;
		}

IL_026f_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_0278_1:
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_58 = __this->___U3CU3E4__this;
			RuntimeObject* L_59 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_58, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),41));
			V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_60 = V_11;
			if (!L_60)
			{
				goto IL_02ff_1;
			}
		}
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_61 = __this->___U3CU3E4__this;
			RuntimeObject* L_62 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_61, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),41));
			NullCheck((RuntimeObject*)L_62);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_63;
			L_63 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_62);
			V_3 = L_63;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_64;
			L_64 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_12 = L_64;
			bool L_65;
			L_65 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_12), NULL);
			if (L_65)
			{
				goto IL_02f6_1;
			}
		}
		{
			int32_t L_66 = 4;
			V_0 = L_66;
			__this->___U3CU3E1__state = L_66;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_67 = V_12;
			__this->___U3CU3Eu__1 = L_67;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_68 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_68, (&V_12), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0548;
		}

IL_02d9_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_69 = __this->___U3CU3Eu__1;
			V_12 = L_69;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_70 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_70, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_71 = (-1);
			V_0 = L_71;
			__this->___U3CU3E1__state = L_71;
		}

IL_02f6_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_12), NULL);
		}

IL_02ff_1:
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_72 = __this->___U3CU3E4__this;
			RuntimeObject* L_73 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_72, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),46));
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_73) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_74 = V_13;
			if (!L_74)
			{
				goto IL_0386_1;
			}
		}
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_75 = __this->___U3CU3E4__this;
			RuntimeObject* L_76 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_75, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),46));
			NullCheck((RuntimeObject*)L_76);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_77;
			L_77 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_76);
			V_3 = L_77;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_78;
			L_78 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_14 = L_78;
			bool L_79;
			L_79 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_79)
			{
				goto IL_037d_1;
			}
		}
		{
			int32_t L_80 = 5;
			V_0 = L_80;
			__this->___U3CU3E1__state = L_80;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_81 = V_14;
			__this->___U3CU3Eu__1 = L_81;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_82 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_82, (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0548;
		}

IL_0360_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_83 = __this->___U3CU3Eu__1;
			V_14 = L_83;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_84 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_84, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_85 = (-1);
			V_0 = L_85;
			__this->___U3CU3E1__state = L_85;
		}

IL_037d_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_0386_1:
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_86 = __this->___U3CU3E4__this;
			RuntimeObject* L_87 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_86, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),51));
			V_15 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_87) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_88 = V_15;
			if (!L_88)
			{
				goto IL_040d_1;
			}
		}
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_89 = __this->___U3CU3E4__this;
			RuntimeObject* L_90 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_89, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),51));
			NullCheck((RuntimeObject*)L_90);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_91;
			L_91 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_90);
			V_3 = L_91;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_92;
			L_92 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_16 = L_92;
			bool L_93;
			L_93 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_16), NULL);
			if (L_93)
			{
				goto IL_0404_1;
			}
		}
		{
			int32_t L_94 = 6;
			V_0 = L_94;
			__this->___U3CU3E1__state = L_94;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_95 = V_16;
			__this->___U3CU3Eu__1 = L_95;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_96 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_96, (&V_16), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0548;
		}

IL_03e7_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_97 = __this->___U3CU3Eu__1;
			V_16 = L_97;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_98 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_98, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_99 = (-1);
			V_0 = L_99;
			__this->___U3CU3E1__state = L_99;
		}

IL_0404_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_16), NULL);
		}

IL_040d_1:
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_100 = __this->___U3CU3E4__this;
			RuntimeObject* L_101 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_100, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),56));
			V_17 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_101) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_102 = V_17;
			if (!L_102)
			{
				goto IL_0494_1;
			}
		}
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_103 = __this->___U3CU3E4__this;
			RuntimeObject* L_104 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_103, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),56));
			NullCheck((RuntimeObject*)L_104);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_105;
			L_105 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_104);
			V_3 = L_105;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_106;
			L_106 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_18 = L_106;
			bool L_107;
			L_107 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_18), NULL);
			if (L_107)
			{
				goto IL_048b_1;
			}
		}
		{
			int32_t L_108 = 7;
			V_0 = L_108;
			__this->___U3CU3E1__state = L_108;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_109 = V_18;
			__this->___U3CU3Eu__1 = L_109;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_110 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_110, (&V_18), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0548;
		}

IL_046e_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_111 = __this->___U3CU3Eu__1;
			V_18 = L_111;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_112 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_112, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_113 = (-1);
			V_0 = L_113;
			__this->___U3CU3E1__state = L_113;
		}

IL_048b_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_18), NULL);
		}

IL_0494_1:
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_114 = __this->___U3CU3E4__this;
			RuntimeObject* L_115 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_114, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),61));
			V_19 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_115) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_116 = V_19;
			if (!L_116)
			{
				goto IL_0518_1;
			}
		}
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_117 = __this->___U3CU3E4__this;
			RuntimeObject* L_118 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_117, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),61));
			NullCheck((RuntimeObject*)L_118);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_119;
			L_119 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_118);
			V_3 = L_119;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_120;
			L_120 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_20 = L_120;
			bool L_121;
			L_121 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_20), NULL);
			if (L_121)
			{
				goto IL_050f_1;
			}
		}
		{
			int32_t L_122 = 8;
			V_0 = L_122;
			__this->___U3CU3E1__state = L_122;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_123 = V_20;
			__this->___U3CU3Eu__1 = L_123;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_124 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_124, (&V_20), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0548;
		}

IL_04f2_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_125 = __this->___U3CU3Eu__1;
			V_20 = L_125;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_126 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_126, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_127 = (-1);
			V_0 = L_127;
			__this->___U3CU3E1__state = L_127;
		}

IL_050f_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_20), NULL);
		}

IL_0518_1:
		{
			goto IL_0534;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_051a;
		}
		throw e;
	}

CATCH_051a:
	{
		Exception_t* L_128 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_21 = L_128;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_129 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_130 = V_21;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_129, L_130, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0548;
	}

IL_0534:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_131 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_131, NULL);
	}

IL_0548:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__83_SetStateMachine_m69221B80D068EA6C4129F6AFF6DDCEE2525FAE7E_gshared (U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__91__ctor_mCD1D521AEDCC71F3A76DCDDD3FACD29E656E232F_gshared (U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__91_MoveNext_m6E24865B6DDEE6F25D7FB6EC3E0978177A776239_gshared (U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	bool V_15 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_18;
	memset((&V_18), 0, sizeof(V_18));
	bool V_19 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_22;
	memset((&V_22), 0, sizeof(V_22));
	Exception_t* V_23 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_0037_1;
				}
				case 1:
				{
					goto IL_003c_1;
				}
				case 2:
				{
					goto IL_0041_1;
				}
				case 3:
				{
					goto IL_0046_1;
				}
				case 4:
				{
					goto IL_004b_1;
				}
				case 5:
				{
					goto IL_0050_1;
				}
				case 6:
				{
					goto IL_0055_1;
				}
				case 7:
				{
					goto IL_005a_1;
				}
				case 8:
				{
					goto IL_005f_1;
				}
				case 9:
				{
					goto IL_0064_1;
				}
			}
		}
		{
			goto IL_0069_1;
		}

IL_0037_1:
		{
			goto IL_00c7_1;
		}

IL_003c_1:
		{
			goto IL_014d_1;
		}

IL_0041_1:
		{
			goto IL_01d4_1;
		}

IL_0046_1:
		{
			goto IL_025b_1;
		}

IL_004b_1:
		{
			goto IL_02e2_1;
		}

IL_0050_1:
		{
			goto IL_0369_1;
		}

IL_0055_1:
		{
			goto IL_03f0_1;
		}

IL_005a_1:
		{
			goto IL_0477_1;
		}

IL_005f_1:
		{
			goto IL_04fe_1;
		}

IL_0064_1:
		{
			goto IL_0583_1;
		}

IL_0069_1:
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_2 = __this->___U3CU3E4__this;
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),23));
			V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_00ec_1;
			}
		}
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_5 = __this->___U3CU3E4__this;
			RuntimeObject* L_6 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),23));
			NullCheck((RuntimeObject*)L_6);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
			L_7 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			V_3 = L_7;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_8;
			L_8 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_9)
			{
				goto IL_00e3_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state = L_10;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_11 = V_2;
			__this->___U3CU3Eu__1 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_12 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_12, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_05d9;
		}

IL_00c7_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13 = __this->___U3CU3Eu__1;
			V_2 = L_13;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_14 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_14, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state = L_15;
		}

IL_00e3_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_00ec_1:
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_16 = __this->___U3CU3E4__this;
			RuntimeObject* L_17 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),28));
			V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_18 = V_5;
			if (!L_18)
			{
				goto IL_0173_1;
			}
		}
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_19 = __this->___U3CU3E4__this;
			RuntimeObject* L_20 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),28));
			NullCheck((RuntimeObject*)L_20);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_21;
			L_21 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
			V_3 = L_21;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_22;
			L_22 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_6 = L_22;
			bool L_23;
			L_23 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_6), NULL);
			if (L_23)
			{
				goto IL_016a_1;
			}
		}
		{
			int32_t L_24 = 1;
			V_0 = L_24;
			__this->___U3CU3E1__state = L_24;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_25 = V_6;
			__this->___U3CU3Eu__1 = L_25;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_26 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_26, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_05d9;
		}

IL_014d_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_27 = __this->___U3CU3Eu__1;
			V_6 = L_27;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_28 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_28, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_29 = (-1);
			V_0 = L_29;
			__this->___U3CU3E1__state = L_29;
		}

IL_016a_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_6), NULL);
		}

IL_0173_1:
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_30 = __this->___U3CU3E4__this;
			RuntimeObject* L_31 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),33));
			V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_31) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_32 = V_7;
			if (!L_32)
			{
				goto IL_01fa_1;
			}
		}
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_33 = __this->___U3CU3E4__this;
			RuntimeObject* L_34 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_33, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),33));
			NullCheck((RuntimeObject*)L_34);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_35;
			L_35 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
			V_3 = L_35;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36;
			L_36 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_8 = L_36;
			bool L_37;
			L_37 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_8), NULL);
			if (L_37)
			{
				goto IL_01f1_1;
			}
		}
		{
			int32_t L_38 = 2;
			V_0 = L_38;
			__this->___U3CU3E1__state = L_38;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39 = V_8;
			__this->___U3CU3Eu__1 = L_39;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_40 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_40, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_05d9;
		}

IL_01d4_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_41 = __this->___U3CU3Eu__1;
			V_8 = L_41;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_42 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_42, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_43 = (-1);
			V_0 = L_43;
			__this->___U3CU3E1__state = L_43;
		}

IL_01f1_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_8), NULL);
		}

IL_01fa_1:
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_44 = __this->___U3CU3E4__this;
			RuntimeObject* L_45 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),38));
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_45) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_46 = V_9;
			if (!L_46)
			{
				goto IL_0281_1;
			}
		}
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_47 = __this->___U3CU3E4__this;
			RuntimeObject* L_48 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_47, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),38));
			NullCheck((RuntimeObject*)L_48);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_49;
			L_49 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_48);
			V_3 = L_49;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50;
			L_50 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_10 = L_50;
			bool L_51;
			L_51 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_51)
			{
				goto IL_0278_1;
			}
		}
		{
			int32_t L_52 = 3;
			V_0 = L_52;
			__this->___U3CU3E1__state = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_53 = V_10;
			__this->___U3CU3Eu__1 = L_53;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_54 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_54, (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_05d9;
		}

IL_025b_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_55 = __this->___U3CU3Eu__1;
			V_10 = L_55;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_56 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_56, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_57 = (-1);
			V_0 = L_57;
			__this->___U3CU3E1__state = L_57;
		}

IL_0278_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_0281_1:
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_58 = __this->___U3CU3E4__this;
			RuntimeObject* L_59 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_58, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),43));
			V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_60 = V_11;
			if (!L_60)
			{
				goto IL_0308_1;
			}
		}
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_61 = __this->___U3CU3E4__this;
			RuntimeObject* L_62 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_61, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),43));
			NullCheck((RuntimeObject*)L_62);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_63;
			L_63 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_62);
			V_3 = L_63;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_64;
			L_64 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_12 = L_64;
			bool L_65;
			L_65 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_12), NULL);
			if (L_65)
			{
				goto IL_02ff_1;
			}
		}
		{
			int32_t L_66 = 4;
			V_0 = L_66;
			__this->___U3CU3E1__state = L_66;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_67 = V_12;
			__this->___U3CU3Eu__1 = L_67;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_68 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_68, (&V_12), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_05d9;
		}

IL_02e2_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_69 = __this->___U3CU3Eu__1;
			V_12 = L_69;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_70 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_70, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_71 = (-1);
			V_0 = L_71;
			__this->___U3CU3E1__state = L_71;
		}

IL_02ff_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_12), NULL);
		}

IL_0308_1:
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_72 = __this->___U3CU3E4__this;
			RuntimeObject* L_73 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_72, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),48));
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_73) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_74 = V_13;
			if (!L_74)
			{
				goto IL_038f_1;
			}
		}
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_75 = __this->___U3CU3E4__this;
			RuntimeObject* L_76 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_75, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),48));
			NullCheck((RuntimeObject*)L_76);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_77;
			L_77 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_76);
			V_3 = L_77;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_78;
			L_78 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_14 = L_78;
			bool L_79;
			L_79 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_79)
			{
				goto IL_0386_1;
			}
		}
		{
			int32_t L_80 = 5;
			V_0 = L_80;
			__this->___U3CU3E1__state = L_80;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_81 = V_14;
			__this->___U3CU3Eu__1 = L_81;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_82 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_82, (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_05d9;
		}

IL_0369_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_83 = __this->___U3CU3Eu__1;
			V_14 = L_83;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_84 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_84, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_85 = (-1);
			V_0 = L_85;
			__this->___U3CU3E1__state = L_85;
		}

IL_0386_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_038f_1:
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_86 = __this->___U3CU3E4__this;
			RuntimeObject* L_87 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_86, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),53));
			V_15 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_87) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_88 = V_15;
			if (!L_88)
			{
				goto IL_0416_1;
			}
		}
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_89 = __this->___U3CU3E4__this;
			RuntimeObject* L_90 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_89, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),53));
			NullCheck((RuntimeObject*)L_90);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_91;
			L_91 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_90);
			V_3 = L_91;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_92;
			L_92 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_16 = L_92;
			bool L_93;
			L_93 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_16), NULL);
			if (L_93)
			{
				goto IL_040d_1;
			}
		}
		{
			int32_t L_94 = 6;
			V_0 = L_94;
			__this->___U3CU3E1__state = L_94;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_95 = V_16;
			__this->___U3CU3Eu__1 = L_95;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_96 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_96, (&V_16), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_05d9;
		}

IL_03f0_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_97 = __this->___U3CU3Eu__1;
			V_16 = L_97;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_98 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_98, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_99 = (-1);
			V_0 = L_99;
			__this->___U3CU3E1__state = L_99;
		}

IL_040d_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_16), NULL);
		}

IL_0416_1:
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_100 = __this->___U3CU3E4__this;
			RuntimeObject* L_101 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_100, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),58));
			V_17 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_101) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_102 = V_17;
			if (!L_102)
			{
				goto IL_049d_1;
			}
		}
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_103 = __this->___U3CU3E4__this;
			RuntimeObject* L_104 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_103, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),58));
			NullCheck((RuntimeObject*)L_104);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_105;
			L_105 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_104);
			V_3 = L_105;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_106;
			L_106 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_18 = L_106;
			bool L_107;
			L_107 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_18), NULL);
			if (L_107)
			{
				goto IL_0494_1;
			}
		}
		{
			int32_t L_108 = 7;
			V_0 = L_108;
			__this->___U3CU3E1__state = L_108;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_109 = V_18;
			__this->___U3CU3Eu__1 = L_109;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_110 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_110, (&V_18), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_05d9;
		}

IL_0477_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_111 = __this->___U3CU3Eu__1;
			V_18 = L_111;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_112 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_112, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_113 = (-1);
			V_0 = L_113;
			__this->___U3CU3E1__state = L_113;
		}

IL_0494_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_18), NULL);
		}

IL_049d_1:
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_114 = __this->___U3CU3E4__this;
			RuntimeObject* L_115 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_114, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),63));
			V_19 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_115) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_116 = V_19;
			if (!L_116)
			{
				goto IL_0524_1;
			}
		}
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_117 = __this->___U3CU3E4__this;
			RuntimeObject* L_118 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_117, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),63));
			NullCheck((RuntimeObject*)L_118);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_119;
			L_119 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_118);
			V_3 = L_119;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_120;
			L_120 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_20 = L_120;
			bool L_121;
			L_121 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_20), NULL);
			if (L_121)
			{
				goto IL_051b_1;
			}
		}
		{
			int32_t L_122 = 8;
			V_0 = L_122;
			__this->___U3CU3E1__state = L_122;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_123 = V_20;
			__this->___U3CU3Eu__1 = L_123;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_124 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_124, (&V_20), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_05d9;
		}

IL_04fe_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_125 = __this->___U3CU3Eu__1;
			V_20 = L_125;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_126 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_126, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_127 = (-1);
			V_0 = L_127;
			__this->___U3CU3E1__state = L_127;
		}

IL_051b_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_20), NULL);
		}

IL_0524_1:
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_128 = __this->___U3CU3E4__this;
			RuntimeObject* L_129 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_128, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),68));
			V_21 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_129) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_130 = V_21;
			if (!L_130)
			{
				goto IL_05a9_1;
			}
		}
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_131 = __this->___U3CU3E4__this;
			RuntimeObject* L_132 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_131, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),68));
			NullCheck((RuntimeObject*)L_132);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_133;
			L_133 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_132);
			V_3 = L_133;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_134;
			L_134 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_22 = L_134;
			bool L_135;
			L_135 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_22), NULL);
			if (L_135)
			{
				goto IL_05a0_1;
			}
		}
		{
			int32_t L_136 = ((int32_t)9);
			V_0 = L_136;
			__this->___U3CU3E1__state = L_136;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_137 = V_22;
			__this->___U3CU3Eu__1 = L_137;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_138 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_138, (&V_22), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_05d9;
		}

IL_0583_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_139 = __this->___U3CU3Eu__1;
			V_22 = L_139;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_140 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_140, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_141 = (-1);
			V_0 = L_141;
			__this->___U3CU3E1__state = L_141;
		}

IL_05a0_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_22), NULL);
		}

IL_05a9_1:
		{
			goto IL_05c5;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_05ab;
		}
		throw e;
	}

CATCH_05ab:
	{
		Exception_t* L_142 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_23 = L_142;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_143 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_144 = V_23;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_143, L_144, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_05d9;
	}

IL_05c5:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_145 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_145, NULL);
	}

IL_05d9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__91_SetStateMachine_mF01C12850C3AAE88CA4D46591C69C50F297E2F1A_gshared (U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__99__ctor_mDDE17D8D7C999DD8877DD3D12BA1B73C99BA43AF_gshared (U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__99_MoveNext_mAAD6C965218E1A6E9B8792FD998EFF562FCAF460_gshared (U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	bool V_15 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_18;
	memset((&V_18), 0, sizeof(V_18));
	bool V_19 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_24;
	memset((&V_24), 0, sizeof(V_24));
	Exception_t* V_25 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_003b_1;
				}
				case 1:
				{
					goto IL_0040_1;
				}
				case 2:
				{
					goto IL_0045_1;
				}
				case 3:
				{
					goto IL_004a_1;
				}
				case 4:
				{
					goto IL_004f_1;
				}
				case 5:
				{
					goto IL_0054_1;
				}
				case 6:
				{
					goto IL_0059_1;
				}
				case 7:
				{
					goto IL_005e_1;
				}
				case 8:
				{
					goto IL_0063_1;
				}
				case 9:
				{
					goto IL_0068_1;
				}
				case 10:
				{
					goto IL_006d_1;
				}
			}
		}
		{
			goto IL_0072_1;
		}

IL_003b_1:
		{
			goto IL_00d0_1;
		}

IL_0040_1:
		{
			goto IL_0156_1;
		}

IL_0045_1:
		{
			goto IL_01dd_1;
		}

IL_004a_1:
		{
			goto IL_0264_1;
		}

IL_004f_1:
		{
			goto IL_02eb_1;
		}

IL_0054_1:
		{
			goto IL_0372_1;
		}

IL_0059_1:
		{
			goto IL_03f9_1;
		}

IL_005e_1:
		{
			goto IL_0480_1;
		}

IL_0063_1:
		{
			goto IL_0507_1;
		}

IL_0068_1:
		{
			goto IL_058f_1;
		}

IL_006d_1:
		{
			goto IL_0614_1;
		}

IL_0072_1:
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_2 = __this->___U3CU3E4__this;
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),25));
			V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_00f5_1;
			}
		}
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_5 = __this->___U3CU3E4__this;
			RuntimeObject* L_6 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),25));
			NullCheck((RuntimeObject*)L_6);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
			L_7 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			V_3 = L_7;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_8;
			L_8 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_9)
			{
				goto IL_00ec_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state = L_10;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_11 = V_2;
			__this->___U3CU3Eu__1 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_12 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_12, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_066a;
		}

IL_00d0_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13 = __this->___U3CU3Eu__1;
			V_2 = L_13;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_14 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_14, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state = L_15;
		}

IL_00ec_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_00f5_1:
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_16 = __this->___U3CU3E4__this;
			RuntimeObject* L_17 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),30));
			V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_18 = V_5;
			if (!L_18)
			{
				goto IL_017c_1;
			}
		}
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_19 = __this->___U3CU3E4__this;
			RuntimeObject* L_20 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),30));
			NullCheck((RuntimeObject*)L_20);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_21;
			L_21 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
			V_3 = L_21;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_22;
			L_22 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_6 = L_22;
			bool L_23;
			L_23 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_6), NULL);
			if (L_23)
			{
				goto IL_0173_1;
			}
		}
		{
			int32_t L_24 = 1;
			V_0 = L_24;
			__this->___U3CU3E1__state = L_24;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_25 = V_6;
			__this->___U3CU3Eu__1 = L_25;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_26 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_26, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_066a;
		}

IL_0156_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_27 = __this->___U3CU3Eu__1;
			V_6 = L_27;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_28 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_28, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_29 = (-1);
			V_0 = L_29;
			__this->___U3CU3E1__state = L_29;
		}

IL_0173_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_6), NULL);
		}

IL_017c_1:
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_30 = __this->___U3CU3E4__this;
			RuntimeObject* L_31 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),35));
			V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_31) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_32 = V_7;
			if (!L_32)
			{
				goto IL_0203_1;
			}
		}
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_33 = __this->___U3CU3E4__this;
			RuntimeObject* L_34 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_33, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),35));
			NullCheck((RuntimeObject*)L_34);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_35;
			L_35 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
			V_3 = L_35;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36;
			L_36 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_8 = L_36;
			bool L_37;
			L_37 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_8), NULL);
			if (L_37)
			{
				goto IL_01fa_1;
			}
		}
		{
			int32_t L_38 = 2;
			V_0 = L_38;
			__this->___U3CU3E1__state = L_38;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39 = V_8;
			__this->___U3CU3Eu__1 = L_39;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_40 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_40, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_066a;
		}

IL_01dd_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_41 = __this->___U3CU3Eu__1;
			V_8 = L_41;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_42 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_42, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_43 = (-1);
			V_0 = L_43;
			__this->___U3CU3E1__state = L_43;
		}

IL_01fa_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_8), NULL);
		}

IL_0203_1:
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_44 = __this->___U3CU3E4__this;
			RuntimeObject* L_45 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),40));
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_45) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_46 = V_9;
			if (!L_46)
			{
				goto IL_028a_1;
			}
		}
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_47 = __this->___U3CU3E4__this;
			RuntimeObject* L_48 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_47, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),40));
			NullCheck((RuntimeObject*)L_48);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_49;
			L_49 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_48);
			V_3 = L_49;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50;
			L_50 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_10 = L_50;
			bool L_51;
			L_51 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_51)
			{
				goto IL_0281_1;
			}
		}
		{
			int32_t L_52 = 3;
			V_0 = L_52;
			__this->___U3CU3E1__state = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_53 = V_10;
			__this->___U3CU3Eu__1 = L_53;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_54 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_54, (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_066a;
		}

IL_0264_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_55 = __this->___U3CU3Eu__1;
			V_10 = L_55;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_56 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_56, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_57 = (-1);
			V_0 = L_57;
			__this->___U3CU3E1__state = L_57;
		}

IL_0281_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_028a_1:
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_58 = __this->___U3CU3E4__this;
			RuntimeObject* L_59 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_58, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),45));
			V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_60 = V_11;
			if (!L_60)
			{
				goto IL_0311_1;
			}
		}
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_61 = __this->___U3CU3E4__this;
			RuntimeObject* L_62 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_61, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),45));
			NullCheck((RuntimeObject*)L_62);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_63;
			L_63 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_62);
			V_3 = L_63;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_64;
			L_64 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_12 = L_64;
			bool L_65;
			L_65 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_12), NULL);
			if (L_65)
			{
				goto IL_0308_1;
			}
		}
		{
			int32_t L_66 = 4;
			V_0 = L_66;
			__this->___U3CU3E1__state = L_66;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_67 = V_12;
			__this->___U3CU3Eu__1 = L_67;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_68 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_68, (&V_12), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_066a;
		}

IL_02eb_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_69 = __this->___U3CU3Eu__1;
			V_12 = L_69;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_70 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_70, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_71 = (-1);
			V_0 = L_71;
			__this->___U3CU3E1__state = L_71;
		}

IL_0308_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_12), NULL);
		}

IL_0311_1:
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_72 = __this->___U3CU3E4__this;
			RuntimeObject* L_73 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_72, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),50));
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_73) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_74 = V_13;
			if (!L_74)
			{
				goto IL_0398_1;
			}
		}
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_75 = __this->___U3CU3E4__this;
			RuntimeObject* L_76 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_75, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),50));
			NullCheck((RuntimeObject*)L_76);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_77;
			L_77 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_76);
			V_3 = L_77;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_78;
			L_78 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_14 = L_78;
			bool L_79;
			L_79 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_79)
			{
				goto IL_038f_1;
			}
		}
		{
			int32_t L_80 = 5;
			V_0 = L_80;
			__this->___U3CU3E1__state = L_80;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_81 = V_14;
			__this->___U3CU3Eu__1 = L_81;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_82 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_82, (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_066a;
		}

IL_0372_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_83 = __this->___U3CU3Eu__1;
			V_14 = L_83;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_84 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_84, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_85 = (-1);
			V_0 = L_85;
			__this->___U3CU3E1__state = L_85;
		}

IL_038f_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_0398_1:
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_86 = __this->___U3CU3E4__this;
			RuntimeObject* L_87 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_86, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),55));
			V_15 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_87) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_88 = V_15;
			if (!L_88)
			{
				goto IL_041f_1;
			}
		}
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_89 = __this->___U3CU3E4__this;
			RuntimeObject* L_90 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_89, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),55));
			NullCheck((RuntimeObject*)L_90);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_91;
			L_91 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_90);
			V_3 = L_91;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_92;
			L_92 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_16 = L_92;
			bool L_93;
			L_93 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_16), NULL);
			if (L_93)
			{
				goto IL_0416_1;
			}
		}
		{
			int32_t L_94 = 6;
			V_0 = L_94;
			__this->___U3CU3E1__state = L_94;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_95 = V_16;
			__this->___U3CU3Eu__1 = L_95;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_96 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_96, (&V_16), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_066a;
		}

IL_03f9_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_97 = __this->___U3CU3Eu__1;
			V_16 = L_97;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_98 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_98, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_99 = (-1);
			V_0 = L_99;
			__this->___U3CU3E1__state = L_99;
		}

IL_0416_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_16), NULL);
		}

IL_041f_1:
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_100 = __this->___U3CU3E4__this;
			RuntimeObject* L_101 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_100, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),60));
			V_17 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_101) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_102 = V_17;
			if (!L_102)
			{
				goto IL_04a6_1;
			}
		}
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_103 = __this->___U3CU3E4__this;
			RuntimeObject* L_104 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_103, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),60));
			NullCheck((RuntimeObject*)L_104);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_105;
			L_105 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_104);
			V_3 = L_105;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_106;
			L_106 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_18 = L_106;
			bool L_107;
			L_107 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_18), NULL);
			if (L_107)
			{
				goto IL_049d_1;
			}
		}
		{
			int32_t L_108 = 7;
			V_0 = L_108;
			__this->___U3CU3E1__state = L_108;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_109 = V_18;
			__this->___U3CU3Eu__1 = L_109;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_110 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_110, (&V_18), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_066a;
		}

IL_0480_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_111 = __this->___U3CU3Eu__1;
			V_18 = L_111;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_112 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_112, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_113 = (-1);
			V_0 = L_113;
			__this->___U3CU3E1__state = L_113;
		}

IL_049d_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_18), NULL);
		}

IL_04a6_1:
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_114 = __this->___U3CU3E4__this;
			RuntimeObject* L_115 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_114, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),65));
			V_19 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_115) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_116 = V_19;
			if (!L_116)
			{
				goto IL_052d_1;
			}
		}
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_117 = __this->___U3CU3E4__this;
			RuntimeObject* L_118 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_117, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),65));
			NullCheck((RuntimeObject*)L_118);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_119;
			L_119 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_118);
			V_3 = L_119;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_120;
			L_120 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_20 = L_120;
			bool L_121;
			L_121 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_20), NULL);
			if (L_121)
			{
				goto IL_0524_1;
			}
		}
		{
			int32_t L_122 = 8;
			V_0 = L_122;
			__this->___U3CU3E1__state = L_122;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_123 = V_20;
			__this->___U3CU3Eu__1 = L_123;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_124 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_124, (&V_20), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_066a;
		}

IL_0507_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_125 = __this->___U3CU3Eu__1;
			V_20 = L_125;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_126 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_126, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_127 = (-1);
			V_0 = L_127;
			__this->___U3CU3E1__state = L_127;
		}

IL_0524_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_20), NULL);
		}

IL_052d_1:
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_128 = __this->___U3CU3E4__this;
			RuntimeObject* L_129 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_128, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),70));
			V_21 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_129) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_130 = V_21;
			if (!L_130)
			{
				goto IL_05b5_1;
			}
		}
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_131 = __this->___U3CU3E4__this;
			RuntimeObject* L_132 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_131, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),70));
			NullCheck((RuntimeObject*)L_132);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_133;
			L_133 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_132);
			V_3 = L_133;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_134;
			L_134 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_22 = L_134;
			bool L_135;
			L_135 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_22), NULL);
			if (L_135)
			{
				goto IL_05ac_1;
			}
		}
		{
			int32_t L_136 = ((int32_t)9);
			V_0 = L_136;
			__this->___U3CU3E1__state = L_136;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_137 = V_22;
			__this->___U3CU3Eu__1 = L_137;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_138 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_138, (&V_22), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_066a;
		}

IL_058f_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_139 = __this->___U3CU3Eu__1;
			V_22 = L_139;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_140 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_140, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_141 = (-1);
			V_0 = L_141;
			__this->___U3CU3E1__state = L_141;
		}

IL_05ac_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_22), NULL);
		}

IL_05b5_1:
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_142 = __this->___U3CU3E4__this;
			RuntimeObject* L_143 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_142, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),75));
			V_23 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_143) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_144 = V_23;
			if (!L_144)
			{
				goto IL_063a_1;
			}
		}
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_145 = __this->___U3CU3E4__this;
			RuntimeObject* L_146 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_145, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),75));
			NullCheck((RuntimeObject*)L_146);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_147;
			L_147 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_146);
			V_3 = L_147;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_148;
			L_148 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_24 = L_148;
			bool L_149;
			L_149 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_24), NULL);
			if (L_149)
			{
				goto IL_0631_1;
			}
		}
		{
			int32_t L_150 = ((int32_t)10);
			V_0 = L_150;
			__this->___U3CU3E1__state = L_150;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_151 = V_24;
			__this->___U3CU3Eu__1 = L_151;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_152 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_152, (&V_24), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_066a;
		}

IL_0614_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_153 = __this->___U3CU3Eu__1;
			V_24 = L_153;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_154 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_154, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_155 = (-1);
			V_0 = L_155;
			__this->___U3CU3E1__state = L_155;
		}

IL_0631_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_24), NULL);
		}

IL_063a_1:
		{
			goto IL_0656;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_063c;
		}
		throw e;
	}

CATCH_063c:
	{
		Exception_t* L_156 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_25 = L_156;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_157 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_158 = V_25;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_157, L_158, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_066a;
	}

IL_0656:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_159 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_159, NULL);
	}

IL_066a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__99_SetStateMachine_mA022DED331E002C198D4A75B3449CB92F42C74F1_gshared (U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1__ctor_m708FAF31FDC19E6FDE5E944A9128A9AEF1F161F2_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_mB5D43C4A18D1C039180B81EB91FD0156BB04A99F_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
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
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{
				U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mBE6FC6D3BFB3183D106C6DE3A94F3D52D38C5CED(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				return;
			}
		});
		try
		{
			goto IL_001a;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDistinctIteratorU3Ed__68_1_MoveNext_m71018DB904767E3714DDBFDC0FABA18EE46DCBC9_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_009a:
			{
				U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_mB5D43C4A18D1C039180B81EB91FD0156BB04A99F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				return;
			}
		});
		try
		{
			{
				int32_t L_0 = __this->___U3CU3E1__state;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0015_1;
				}
			}
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0074_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00a1;
			}

IL_0015_1:
			{
				__this->___U3CU3E1__state = (-1);
				RuntimeObject* L_3 = __this->___comparer;
				Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF* L_4 = (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
				Set_1__ctor_mB7F0167922AAC91B3E4FCF3843619F460CFF987E(L_4, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
				__this->___U3CsetU3E5__2 = L_4;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsetU3E5__2), (void*)L_4);
				RuntimeObject* L_5 = __this->___source;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
				__this->___U3CU3E7__wrap2 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2), (void*)L_6);
				__this->___U3CU3E1__state = ((int32_t)-3);
				goto IL_007c_1;
			}

IL_0048_1:
			{
				RuntimeObject* L_7 = __this->___U3CU3E7__wrap2;
				NullCheck(L_7);
				int32_t L_8;
				L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_7);
				V_2 = L_8;
				Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF* L_9 = __this->___U3CsetU3E5__2;
				int32_t L_10 = V_2;
				NullCheck(L_9);
				bool L_11;
				L_11 = Set_1_Add_m04B0E9DF64E76BF3ED1C5ECFDC36BFA3555A0287(L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				if (!L_11)
				{
					goto IL_007c_1;
				}
			}
			{
				int32_t L_12 = V_2;
				__this->___U3CU3E2__current = L_12;
				__this->___U3CU3E1__state = 1;
				V_0 = (bool)1;
				goto IL_00a1;
			}

IL_0074_1:
			{
				__this->___U3CU3E1__state = ((int32_t)-3);
			}

IL_007c_1:
			{
				RuntimeObject* L_13 = __this->___U3CU3E7__wrap2;
				NullCheck((RuntimeObject*)L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
				if (L_14)
				{
					goto IL_0048_1;
				}
			}
			{
				U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mBE6FC6D3BFB3183D106C6DE3A94F3D52D38C5CED(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				__this->___U3CU3E7__wrap2 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2), (void*)(RuntimeObject*)NULL);
				V_0 = (bool)0;
				goto IL_00a1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a1:
	{
		bool L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mBE6FC6D3BFB3183D106C6DE3A94F3D52D38C5CED_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state = (-1);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap2;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CU3E7__wrap2;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m5DD7A29942ED3250E0CF69B661DC15557287A56B_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_System_Collections_IEnumerator_Reset_mE9BA5D2810F8D9F857C8326A32B722D1AD74C115_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_IEnumerator_get_Current_m8E114F6E6FB648D34A8F14ACEBAA0A916BDCAD7E_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CU3E2__current;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_mD2812ADD8FA30AB5E393A694274076C91F11D02E_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method) 
{
	U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* L_3 = (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		U3CDistinctIteratorU3Ed__68_1__ctor_m708FAF31FDC19E6FDE5E944A9128A9AEF1F161F2(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
	}

IL_0029:
	{
		U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* L_4 = V_0;
		RuntimeObject* L_5 = __this->___U3CU3E3__source;
		NullCheck(L_4);
		L_4->___source = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___source), (void*)L_5);
		U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* L_6 = V_0;
		RuntimeObject* L_7 = __this->___U3CU3E3__comparer;
		NullCheck(L_6);
		L_6->___comparer = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___comparer), (void*)L_7);
		U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* L_8 = V_0;
		return (RuntimeObject*)L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_IEnumerable_GetEnumerator_m2EDBA71EEF5F9AB8F5D74D95545A81F245DADA01_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_mD2812ADD8FA30AB5E393A694274076C91F11D02E(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return (RuntimeObject*)L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1__ctor_m86F87231C35710F52679F2D970FEDC4F70710B0A_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_m8392F600C3472440C079089D02C19C85711BAE38_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
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
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{
				U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mCFD862B8E1AE48B3A2B7C3D64EFE43012DADE748(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				return;
			}
		});
		try
		{
			goto IL_001a;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDistinctIteratorU3Ed__68_1_MoveNext_mFC5166BA9B542CE7604CF321AD2D1815FA542014_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_009a:
			{
				U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_m8392F600C3472440C079089D02C19C85711BAE38(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				return;
			}
		});
		try
		{
			{
				int32_t L_0 = __this->___U3CU3E1__state;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0015_1;
				}
			}
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0074_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00a1;
			}

IL_0015_1:
			{
				__this->___U3CU3E1__state = (-1);
				RuntimeObject* L_3 = __this->___comparer;
				Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921* L_4 = (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
				Set_1__ctor_mC96DA58C0B3189E9298064337C1F05A5803C1727(L_4, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
				__this->___U3CsetU3E5__2 = L_4;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsetU3E5__2), (void*)L_4);
				RuntimeObject* L_5 = __this->___source;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
				__this->___U3CU3E7__wrap2 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2), (void*)L_6);
				__this->___U3CU3E1__state = ((int32_t)-3);
				goto IL_007c_1;
			}

IL_0048_1:
			{
				RuntimeObject* L_7 = __this->___U3CU3E7__wrap2;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_7);
				V_2 = L_8;
				Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921* L_9 = __this->___U3CsetU3E5__2;
				RuntimeObject* L_10 = V_2;
				NullCheck(L_9);
				bool L_11;
				L_11 = Set_1_Add_m8646609CFE62CC764D05B694DC78391745C077F4(L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				if (!L_11)
				{
					goto IL_007c_1;
				}
			}
			{
				RuntimeObject* L_12 = V_2;
				__this->___U3CU3E2__current = L_12;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_12);
				__this->___U3CU3E1__state = 1;
				V_0 = (bool)1;
				goto IL_00a1;
			}

IL_0074_1:
			{
				__this->___U3CU3E1__state = ((int32_t)-3);
			}

IL_007c_1:
			{
				RuntimeObject* L_13 = __this->___U3CU3E7__wrap2;
				NullCheck((RuntimeObject*)L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
				if (L_14)
				{
					goto IL_0048_1;
				}
			}
			{
				U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mCFD862B8E1AE48B3A2B7C3D64EFE43012DADE748(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				__this->___U3CU3E7__wrap2 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2), (void*)(RuntimeObject*)NULL);
				V_0 = (bool)0;
				goto IL_00a1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a1:
	{
		bool L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mCFD862B8E1AE48B3A2B7C3D64EFE43012DADE748_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state = (-1);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap2;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CU3E7__wrap2;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m3BFCE33D1A0FBE4E6C2CA2B5E6C5A9AAB7C75F48_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_System_Collections_IEnumerator_Reset_m77617FBFE6426263EAC2102317FD15B7F240BA6F_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_IEnumerator_get_Current_mCEBDDAB868A1A3C17A9493A0E5A37F0B2F334F14_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m7B0039E6CC03FB4B20E61AEE0C9527FAE46C4377_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method) 
{
	U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* L_3 = (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		U3CDistinctIteratorU3Ed__68_1__ctor_m86F87231C35710F52679F2D970FEDC4F70710B0A(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
	}

IL_0029:
	{
		U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* L_4 = V_0;
		RuntimeObject* L_5 = __this->___U3CU3E3__source;
		NullCheck(L_4);
		L_4->___source = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___source), (void*)L_5);
		U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* L_6 = V_0;
		RuntimeObject* L_7 = __this->___U3CU3E3__comparer;
		NullCheck(L_6);
		L_6->___comparer = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___comparer), (void*)L_7);
		U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* L_8 = V_0;
		return (RuntimeObject*)L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_IEnumerable_GetEnumerator_mC95300C41D98D3718D870CCE3DBE94F81C68D8A9_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m7B0039E6CC03FB4B20E61AEE0C9527FAE46C4377(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return (RuntimeObject*)L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1__ctor_m368FD54689A4B23022D54E56433A64F47D8BDE65_gshared (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_mB922A1DC8578B57729E78C9CD83A184147743656_gshared (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
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
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{
				((  void (*) (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				return;
			}
		});
		try
		{
			goto IL_001a;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDistinctIteratorU3Ed__68_1_MoveNext_m8DAF2B7D90B558C2BDBBE8E2F2BF0058D054CD6D_gshared (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
	const Il2CppFullySharedGenericAny L_12 = L_8;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
	bool V_0 = false;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
	memset(V_2, 0, SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_009a:
			{
				((  void (*) (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				return;
			}
		});
		try
		{
			{
				int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0015_1;
				}
			}
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0074_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00a1;
			}

IL_0015_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
				RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D* L_4 = (Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
				((  void (*) (Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_4, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
				il2cpp_codegen_write_instance_field_data<Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_4);
				RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_6);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
				goto IL_007c_1;
			}

IL_0048_1:
			{
				RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
				NullCheck(L_7);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_7, (Il2CppFullySharedGenericAny*)L_8);
				il2cpp_codegen_memcpy(V_2, L_8, SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
				Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D* L_9 = *(Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				il2cpp_codegen_memcpy(L_10, V_2, SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
				NullCheck(L_9);
				bool L_11;
				L_11 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_10: *(void**)L_10));
				if (!L_11)
				{
					goto IL_007c_1;
				}
			}
			{
				il2cpp_codegen_memcpy(L_12, V_2, SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_12, SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
				V_0 = (bool)1;
				goto IL_00a1;
			}

IL_0074_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
			}

IL_007c_1:
			{
				RuntimeObject* L_13 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
				NullCheck((RuntimeObject*)L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
				if (L_14)
				{
					goto IL_0048_1;
				}
			}
			{
				((  void (*) (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), (RuntimeObject*)NULL);
				V_0 = (bool)0;
				goto IL_00a1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a1:
	{
		bool L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_m3A1915C2D0E1F2A53DCCC453913870C5987B3622_gshared (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m4F2FD638E67166E5D6467B8C6F3D8C0F236B8945_gshared (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_System_Collections_IEnumerator_Reset_mA5510FD78835228D46F445739E3B48F864F15CB2_gshared (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_IEnumerator_get_Current_m7AD240D5FF03DFA83B0112F97CC62CF8527123FA_gshared (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m853907FC376AB6563EFE8D67DBE362224708D80F_gshared (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* __this, const RuntimeMethod* method) 
{
	U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* V_0 = NULL;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* L_3 = (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
	}

IL_0029:
	{
		U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* L_4 = V_0;
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_4);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_5);
		U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* L_6 = V_0;
		RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NullCheck(L_6);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_7);
		U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* L_8 = V_0;
		return (RuntimeObject*)L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_IEnumerable_GetEnumerator_m7B14B90057F6FF2EF898076D378CA123AE70559C_gshared (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return (RuntimeObject*)L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CElementAtAsyncU3Ed__0_1__ctor_mEE48BFC8B654923D2537DBFBBC7607D6A2982F55_gshared (U3CElementAtAsyncU3Ed__0_1_t828967E53B1F0CA7BDCEF9D605C46215C4EC3044* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CElementAtAsyncU3Ed__0_1_MoveNext_mF3A132B42132382A29A4A773B67D6A0A04C881C8_gshared (U3CElementAtAsyncU3Ed__0_1_t828967E53B1F0CA7BDCEF9D605C46215C4EC3044* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tC99DD9D6ED21E46999BB135D89FD8A305F36B94C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TSource_tC99DD9D6ED21E46999BB135D89FD8A305F36B94C);
	const Il2CppFullySharedGenericAny L_49 = L_13;
	const Il2CppFullySharedGenericAny L_52 = L_13;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tC99DD9D6ED21E46999BB135D89FD8A305F36B94C);
	memset(V_1, 0, SizeOf_TSource_tC99DD9D6ED21E46999BB135D89FD8A305F36B94C);
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_6;
	memset((&V_6), 0, sizeof(V_6));
	U3CElementAtAsyncU3Ed__0_1_t828967E53B1F0CA7BDCEF9D605C46215C4EC3044* V_7 = NULL;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t* V_13 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014_1;
			}
		}
		{
			goto IL_0019_1;
		}

IL_0012_1:
		{
			goto IL_003f_1;
		}

IL_0014_1:
		{
			goto IL_01a0_1;
		}

IL_0019_1:
		{
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_5);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), NULL);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), 0);
		}

IL_003f_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_0045_2;
				}
			}
			{
				goto IL_004a_2;
			}

IL_0045_2:
			{
				goto IL_00d2_2;
			}

IL_004a_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), 0);
				goto IL_008a_2;
			}

IL_0054_2:
			{
				int32_t L_7 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
				V_3 = L_7;
				int32_t L_8 = V_3;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), ((int32_t)il2cpp_codegen_add(L_8, 1)));
				int32_t L_9 = V_3;
				int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				V_2 = (bool)((((int32_t)L_9) == ((int32_t)L_10))? 1 : 0);
				bool L_11 = V_2;
				if (!L_11)
				{
					goto IL_0089_2;
				}
			}
			{
				RuntimeObject* L_12 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_12);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_12, (Il2CppFullySharedGenericAny*)L_13);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_13, SizeOf_TSource_tC99DD9D6ED21E46999BB135D89FD8A305F36B94C);
				goto IL_0132_2;
			}

IL_0089_2:
			{
			}

IL_008a_2:
			{
				RuntimeObject* L_14 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_14);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_15;
				L_15 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_14);
				V_6 = L_15;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_16;
				L_16 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_6), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_5 = L_16;
				bool L_17;
				L_17 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_5), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_00ef_2;
				}
			}
			{
				int32_t L_18 = 0;
				V_0 = L_18;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_18);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_19 = V_5;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_19);
				V_7 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CElementAtAsyncU3Ed__0_1_t828967E53B1F0CA7BDCEF9D605C46215C4EC3044**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_5), (&V_7), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_025f;
			}

IL_00d2_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_20 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12));
				V_5 = L_20;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_21 = (-1);
				V_0 = L_21;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_21);
			}

IL_00ef_2:
			{
				bool L_22;
				L_22 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_5), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_22);
				bool L_23 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
				V_4 = L_23;
				bool L_24 = V_4;
				if (L_24)
				{
					goto IL_0054_2;
				}
			}
			{
				bool L_25 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				V_8 = L_25;
				bool L_26 = V_8;
				if (!L_26)
				{
					goto IL_0126_2;
				}
			}
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), SizeOf_TSource_tC99DD9D6ED21E46999BB135D89FD8A305F36B94C);
				goto IL_0132_2;
			}

IL_0126_2:
			{
				Exception_t* L_27;
				L_27 = Error_ArgumentOutOfRange_mB12CA2A5A28BE69DF8EFD9AB4FBD5DDD4C27AD13_inline(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, method);
			}

IL_0132_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), 1);
				goto IL_0147_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_013b_1;
			}
			throw e;
		}

CATCH_013b_1:
		{
			RuntimeObject* L_28 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_9 = L_28;
			RuntimeObject* L_29 = V_9;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_29);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0147_1;
		}

IL_0147_1:
		{
			RuntimeObject* L_30 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_30) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_31 = V_10;
			if (!L_31)
			{
				goto IL_01c6_1;
			}
		}
		{
			RuntimeObject* L_32 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			NullCheck((RuntimeObject*)L_32);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_33;
			L_33 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			V_12 = L_33;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_34;
			L_34 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_34;
			bool L_35;
			L_35 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_35)
			{
				goto IL_01bd_1;
			}
		}
		{
			int32_t L_36 = 1;
			V_0 = L_36;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_36);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_37 = V_11;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_37);
			V_7 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CElementAtAsyncU3Ed__0_1_t828967E53B1F0CA7BDCEF9D605C46215C4EC3044**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_11), (&V_7), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_025f;
		}

IL_01a0_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_38 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
			V_11 = L_38;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_39 = (-1);
			V_0 = L_39;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_39);
		}

IL_01bd_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_01c6_1:
		{
			RuntimeObject* L_40 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_9 = L_40;
			RuntimeObject* L_41 = V_9;
			if (!L_41)
			{
				goto IL_01f0_1;
			}
		}
		{
			RuntimeObject* L_42 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_42, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_43 = V_13;
			if (L_43)
			{
				goto IL_01e3_1;
			}
		}
		{
			RuntimeObject* L_44 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
		}

IL_01e3_1:
		{
			Exception_t* L_45 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_46;
			L_46 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_45, NULL);
			NullCheck(L_46);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_46, NULL);
		}

IL_01f0_1:
		{
			int32_t L_47 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			V_3 = L_47;
			int32_t L_48 = V_3;
			if ((((int32_t)L_48) == ((int32_t)1)))
			{
				goto IL_01fd_1;
			}
		}
		{
			goto IL_0206_1;
		}

IL_01fd_1:
		{
			il2cpp_codegen_memcpy(L_49, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_TSource_tC99DD9D6ED21E46999BB135D89FD8A305F36B94C);
			il2cpp_codegen_memcpy(V_1, L_49, SizeOf_TSource_tC99DD9D6ED21E46999BB135D89FD8A305F36B94C);
			goto IL_0243;
		}

IL_0206_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), SizeOf_TSource_tC99DD9D6ED21E46999BB135D89FD8A305F36B94C);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
			goto IL_0243;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0222;
		}
		throw e;
	}

CATCH_0222:
	{
		Exception_t* L_50 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_13 = L_50;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		Exception_t* L_51 = V_13;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_51, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_025f;
	}

IL_0243:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_52, V_1, SizeOf_TSource_tC99DD9D6ED21E46999BB135D89FD8A305F36B94C);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_52: *(void**)L_52));
	}

IL_025f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CElementAtAsyncU3Ed__0_1_SetStateMachine_m772AA47359A2DE747F4370474D80A73ECA45E2BF_gshared (U3CElementAtAsyncU3Ed__0_1_t828967E53B1F0CA7BDCEF9D605C46215C4EC3044* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17__ctor_mB0746BB971E5BD52B247C27D67966E85F8B8065E_gshared (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_System_IDisposable_Dispose_m822AD9373E981AF92EC773A7775471E70F195AF4_gshared (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0017:
			{
				U3CEnumerateU3Ed__17_U3CU3Em__Finally1_m9B2FA6B08FF9E722DA36557FF1E6B6718C9792F9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				return;
			}
		});
		try
		{
			goto IL_001e;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		goto IL_0020;
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnumerateU3Ed__17_MoveNext_mA717D9C530C08DED70D7D393629107585E95BAE1_gshared (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00a8:
			{
				U3CEnumerateU3Ed__17_System_IDisposable_Dispose_m822AD9373E981AF92EC773A7775471E70F195AF4(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				return;
			}
		});
		try
		{
			{
				int32_t L_0 = __this->___U3CU3E1__state;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_000c_1;
			}

IL_000c_1:
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0016_1;
			}

IL_0012_1:
			{
				goto IL_001d_1;
			}

IL_0014_1:
			{
				goto IL_006f_1;
			}

IL_0016_1:
			{
				V_0 = (bool)0;
				goto IL_00b0;
			}

IL_001d_1:
			{
				__this->___U3CU3E1__state = (-1);
				ProfilerFrameData_2_t2E78C7937AD59869D299687F5F9D8FFB343F688A* L_3 = __this->___U3CU3E4__this;
				NullCheck(L_3);
				Dictionary_2_t647DF567ADBEEEC3E77B6353D82BF2D62976B39C* L_4 = L_3->___m_Data;
				NullCheck(L_4);
				Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6 L_5;
				L_5 = Dictionary_2_GetEnumerator_m0A39AE57744872DEC70B8ADE8E70EC36D30626ED(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
				__this->___U3CU3Es__1 = L_5;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Es__1))->____dictionary), (void*)NULL);
				__this->___U3CU3E1__state = ((int32_t)-3);
				goto IL_0084_1;
			}

IL_0046_1:
			{
				Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6* L_6 = (Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6*)(&__this->___U3CU3Es__1);
				KeyValuePair_2_tC3AC829C78D0C95AC43F29F601558266274BB956 L_7;
				L_7 = Enumerator_get_Current_m0FECBAC967E8393562F8A3672F8E4749569DC02E_inline(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				__this->___U3CpairU3E5__2 = L_7;
				KeyValuePair_2_tC3AC829C78D0C95AC43F29F601558266274BB956 L_8 = __this->___U3CpairU3E5__2;
				__this->___U3CU3E2__current = L_8;
				__this->___U3CU3E1__state = 1;
				V_0 = (bool)1;
				goto IL_00b0;
			}

IL_006f_1:
			{
				__this->___U3CU3E1__state = ((int32_t)-3);
				KeyValuePair_2_tC3AC829C78D0C95AC43F29F601558266274BB956* L_9 = (KeyValuePair_2_tC3AC829C78D0C95AC43F29F601558266274BB956*)(&__this->___U3CpairU3E5__2);
				il2cpp_codegen_initobj(L_9, sizeof(KeyValuePair_2_tC3AC829C78D0C95AC43F29F601558266274BB956));
			}

IL_0084_1:
			{
				Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6* L_10 = (Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6*)(&__this->___U3CU3Es__1);
				bool L_11;
				L_11 = Enumerator_MoveNext_m66EFFC104228A48B97687285B55584759E52AF22(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				if (L_11)
				{
					goto IL_0046_1;
				}
			}
			{
				U3CEnumerateU3Ed__17_U3CU3Em__Finally1_m9B2FA6B08FF9E722DA36557FF1E6B6718C9792F9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6* L_12 = (Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6*)(&__this->___U3CU3Es__1);
				il2cpp_codegen_initobj(L_12, sizeof(Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6));
				V_0 = (bool)0;
				goto IL_00b0;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b0:
	{
		bool L_13 = V_0;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_U3CU3Em__Finally1_m9B2FA6B08FF9E722DA36557FF1E6B6718C9792F9_gshared (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* __this, const RuntimeMethod* method) 
{
	{
		__this->___U3CU3E1__state = (-1);
		Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6* L_0 = (Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6*)(&__this->___U3CU3Es__1);
		Enumerator_Dispose_m76E478BB04060042CC11D4F77BA9460C222F01CD(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tC3AC829C78D0C95AC43F29F601558266274BB956 U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_get_Current_m7D5C5612B72B335CC0B6C69AA0A1EB9C66249674_gshared (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tC3AC829C78D0C95AC43F29F601558266274BB956 L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_System_Collections_IEnumerator_Reset_m5D560D3DF7444315EF9E6A93ECA68EE60C9C4682_gshared (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__17_System_Collections_IEnumerator_get_Current_m55FE24180FE5F56934515841415D6D4908C3BEE3_gshared (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tC3AC829C78D0C95AC43F29F601558266274BB956 L_0 = __this->___U3CU3E2__current;
		KeyValuePair_2_tC3AC829C78D0C95AC43F29F601558266274BB956 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_GetEnumerator_m320EC44570181958F62125A4F84F70EFA610AB28_gshared (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* __this, const RuntimeMethod* method) 
{
	U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* L_3 = (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		U3CEnumerateU3Ed__17__ctor_mB0746BB971E5BD52B247C27D67966E85F8B8065E(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* L_4 = V_0;
		ProfilerFrameData_2_t2E78C7937AD59869D299687F5F9D8FFB343F688A* L_5 = __this->___U3CU3E4__this;
		NullCheck(L_4);
		L_4->___U3CU3E4__this = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this), (void*)L_5);
	}

IL_0035:
	{
		U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* L_6 = V_0;
		return (RuntimeObject*)L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__17_System_Collections_IEnumerable_GetEnumerator_mBD12BBB66C65446E0E44BDCE5A22E7D8D4464E34_gshared (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_GetEnumerator_m320EC44570181958F62125A4F84F70EFA610AB28(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return (RuntimeObject*)L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17__ctor_m89A3352B6AF327E5ECC6B7F2AF8E61B9ED03E291_gshared (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_System_IDisposable_Dispose_m685BD7E009413A3367133F7EC4D6C9A723DAB161_gshared (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0017:
			{
				U3CEnumerateU3Ed__17_U3CU3Em__Finally1_m4262D37C649DD5BC0B49ABE69C4A3AD28C907D22(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				return;
			}
		});
		try
		{
			goto IL_001e;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		goto IL_0020;
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnumerateU3Ed__17_MoveNext_mDC2C7BE711D6F424BC81A8E80F2C5848A5AACAD3_gshared (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00a8:
			{
				U3CEnumerateU3Ed__17_System_IDisposable_Dispose_m685BD7E009413A3367133F7EC4D6C9A723DAB161(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				return;
			}
		});
		try
		{
			{
				int32_t L_0 = __this->___U3CU3E1__state;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_000c_1;
			}

IL_000c_1:
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0016_1;
			}

IL_0012_1:
			{
				goto IL_001d_1;
			}

IL_0014_1:
			{
				goto IL_006f_1;
			}

IL_0016_1:
			{
				V_0 = (bool)0;
				goto IL_00b0;
			}

IL_001d_1:
			{
				__this->___U3CU3E1__state = (-1);
				ProfilerFrameData_2_t950D70A7F1D73DADC9A90BCD19091AF31D8F5CE4* L_3 = __this->___U3CU3E4__this;
				NullCheck(L_3);
				Dictionary_2_t5B0B823A74BF369A8BA2728444AAA80B3D22C39C* L_4 = L_3->___m_Data;
				NullCheck(L_4);
				Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B L_5;
				L_5 = Dictionary_2_GetEnumerator_m866DC6D478308614FFCE0750CDBCE7981295C1DD(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
				__this->___U3CU3Es__1 = L_5;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Es__1))->____dictionary), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Es__1))->____current))->___key), (void*)NULL);
				#endif
				__this->___U3CU3E1__state = ((int32_t)-3);
				goto IL_0084_1;
			}

IL_0046_1:
			{
				Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B* L_6 = (Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B*)(&__this->___U3CU3Es__1);
				KeyValuePair_2_tA75B083C5C7F9CE6237B200BC4A36B820A24C5C8 L_7;
				L_7 = Enumerator_get_Current_m0066B93625BCFB48A397FBDD68007AAB78C628E8_inline(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				__this->___U3CpairU3E5__2 = L_7;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CpairU3E5__2))->___key), (void*)NULL);
				KeyValuePair_2_tA75B083C5C7F9CE6237B200BC4A36B820A24C5C8 L_8 = __this->___U3CpairU3E5__2;
				__this->___U3CU3E2__current = L_8;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___key), (void*)NULL);
				__this->___U3CU3E1__state = 1;
				V_0 = (bool)1;
				goto IL_00b0;
			}

IL_006f_1:
			{
				__this->___U3CU3E1__state = ((int32_t)-3);
				KeyValuePair_2_tA75B083C5C7F9CE6237B200BC4A36B820A24C5C8* L_9 = (KeyValuePair_2_tA75B083C5C7F9CE6237B200BC4A36B820A24C5C8*)(&__this->___U3CpairU3E5__2);
				il2cpp_codegen_initobj(L_9, sizeof(KeyValuePair_2_tA75B083C5C7F9CE6237B200BC4A36B820A24C5C8));
			}

IL_0084_1:
			{
				Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B* L_10 = (Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B*)(&__this->___U3CU3Es__1);
				bool L_11;
				L_11 = Enumerator_MoveNext_mFD341E92CF254C87FE8A00B192EF91521DD704D7(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				if (L_11)
				{
					goto IL_0046_1;
				}
			}
			{
				U3CEnumerateU3Ed__17_U3CU3Em__Finally1_m4262D37C649DD5BC0B49ABE69C4A3AD28C907D22(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B* L_12 = (Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B*)(&__this->___U3CU3Es__1);
				il2cpp_codegen_initobj(L_12, sizeof(Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B));
				V_0 = (bool)0;
				goto IL_00b0;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b0:
	{
		bool L_13 = V_0;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_U3CU3Em__Finally1_m4262D37C649DD5BC0B49ABE69C4A3AD28C907D22_gshared (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* __this, const RuntimeMethod* method) 
{
	{
		__this->___U3CU3E1__state = (-1);
		Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B* L_0 = (Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B*)(&__this->___U3CU3Es__1);
		Enumerator_Dispose_mB78F9BEC4B28EBE0919BC71D6451D716A5787E2B(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tA75B083C5C7F9CE6237B200BC4A36B820A24C5C8 U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_get_Current_mD5AB5723C5B9D637B852088B2833EE70E88FDC61_gshared (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tA75B083C5C7F9CE6237B200BC4A36B820A24C5C8 L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_System_Collections_IEnumerator_Reset_m6721B23D52B46D0717FA52012766502C87BCB846_gshared (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__17_System_Collections_IEnumerator_get_Current_mE2A3BE5B48B7EC1E1D788FDED04C7A28CB07FD8B_gshared (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tA75B083C5C7F9CE6237B200BC4A36B820A24C5C8 L_0 = __this->___U3CU3E2__current;
		KeyValuePair_2_tA75B083C5C7F9CE6237B200BC4A36B820A24C5C8 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_GetEnumerator_m74BEE0528CC325DBDE6B183458D33A27D446D700_gshared (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* __this, const RuntimeMethod* method) 
{
	U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* L_3 = (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		U3CEnumerateU3Ed__17__ctor_m89A3352B6AF327E5ECC6B7F2AF8E61B9ED03E291(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* L_4 = V_0;
		ProfilerFrameData_2_t950D70A7F1D73DADC9A90BCD19091AF31D8F5CE4* L_5 = __this->___U3CU3E4__this;
		NullCheck(L_4);
		L_4->___U3CU3E4__this = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this), (void*)L_5);
	}

IL_0035:
	{
		U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* L_6 = V_0;
		return (RuntimeObject*)L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__17_System_Collections_IEnumerable_GetEnumerator_m9413116E336456778A666DB7F2886A49136A6133_gshared (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_GetEnumerator_m74BEE0528CC325DBDE6B183458D33A27D446D700(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return (RuntimeObject*)L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17__ctor_mECCA51413CF3890A35F5092E595CEC7473A48CF1_gshared (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_System_IDisposable_Dispose_m1DFF7D1D3CE54878B6BA86061DDB22AF6946ED80_gshared (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0017:
			{
				U3CEnumerateU3Ed__17_U3CU3Em__Finally1_m087AF99316F92F40C7069B54D25CC750C6B5C5A6(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				return;
			}
		});
		try
		{
			goto IL_001e;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		goto IL_0020;
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnumerateU3Ed__17_MoveNext_m219AE2786B2F71F02B53975C820AF4F3335AE5FD_gshared (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00a8:
			{
				U3CEnumerateU3Ed__17_System_IDisposable_Dispose_m1DFF7D1D3CE54878B6BA86061DDB22AF6946ED80(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				return;
			}
		});
		try
		{
			{
				int32_t L_0 = __this->___U3CU3E1__state;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_000c_1;
			}

IL_000c_1:
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0016_1;
			}

IL_0012_1:
			{
				goto IL_001d_1;
			}

IL_0014_1:
			{
				goto IL_006f_1;
			}

IL_0016_1:
			{
				V_0 = (bool)0;
				goto IL_00b0;
			}

IL_001d_1:
			{
				__this->___U3CU3E1__state = (-1);
				ProfilerFrameData_2_t7F0801E253606F118877F93100B39DE68DD80138* L_3 = __this->___U3CU3E4__this;
				NullCheck(L_3);
				Dictionary_2_tC90C3EE20FDA713BD1E7D78ED8E5EBA6B529306A* L_4 = L_3->___m_Data;
				NullCheck(L_4);
				Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1 L_5;
				L_5 = Dictionary_2_GetEnumerator_mC7D738C9E3A5C4928A1372118A07812193CAFBC5(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
				__this->___U3CU3Es__1 = L_5;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Es__1))->____dictionary), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Es__1))->____current))->___key), (void*)NULL);
				#endif
				__this->___U3CU3E1__state = ((int32_t)-3);
				goto IL_0084_1;
			}

IL_0046_1:
			{
				Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1* L_6 = (Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1*)(&__this->___U3CU3Es__1);
				KeyValuePair_2_t9E936A9C063E78E3C06E01B1A28CAB03B4C51221 L_7;
				L_7 = Enumerator_get_Current_mA2D3EE07E11DDC88DEA69B2580EAD5218FE78599_inline(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				__this->___U3CpairU3E5__2 = L_7;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CpairU3E5__2))->___key), (void*)NULL);
				KeyValuePair_2_t9E936A9C063E78E3C06E01B1A28CAB03B4C51221 L_8 = __this->___U3CpairU3E5__2;
				__this->___U3CU3E2__current = L_8;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___key), (void*)NULL);
				__this->___U3CU3E1__state = 1;
				V_0 = (bool)1;
				goto IL_00b0;
			}

IL_006f_1:
			{
				__this->___U3CU3E1__state = ((int32_t)-3);
				KeyValuePair_2_t9E936A9C063E78E3C06E01B1A28CAB03B4C51221* L_9 = (KeyValuePair_2_t9E936A9C063E78E3C06E01B1A28CAB03B4C51221*)(&__this->___U3CpairU3E5__2);
				il2cpp_codegen_initobj(L_9, sizeof(KeyValuePair_2_t9E936A9C063E78E3C06E01B1A28CAB03B4C51221));
			}

IL_0084_1:
			{
				Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1* L_10 = (Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1*)(&__this->___U3CU3Es__1);
				bool L_11;
				L_11 = Enumerator_MoveNext_mF71888B7382F2EAF7606858E54551944779DC622(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				if (L_11)
				{
					goto IL_0046_1;
				}
			}
			{
				U3CEnumerateU3Ed__17_U3CU3Em__Finally1_m087AF99316F92F40C7069B54D25CC750C6B5C5A6(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1* L_12 = (Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1*)(&__this->___U3CU3Es__1);
				il2cpp_codegen_initobj(L_12, sizeof(Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1));
				V_0 = (bool)0;
				goto IL_00b0;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b0:
	{
		bool L_13 = V_0;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_U3CU3Em__Finally1_m087AF99316F92F40C7069B54D25CC750C6B5C5A6_gshared (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* __this, const RuntimeMethod* method) 
{
	{
		__this->___U3CU3E1__state = (-1);
		Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1* L_0 = (Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1*)(&__this->___U3CU3Es__1);
		Enumerator_Dispose_m4F6BFA345E68F3F0A7F8875FFD149A55D5240FD1(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t9E936A9C063E78E3C06E01B1A28CAB03B4C51221 U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_get_Current_m10EBF0B6F309BF47BD4BB6E4934F1B84E60B1583_gshared (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_t9E936A9C063E78E3C06E01B1A28CAB03B4C51221 L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_System_Collections_IEnumerator_Reset_m456801A2A043B72A54B308B56A0EC0C7F940B1A6_gshared (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__17_System_Collections_IEnumerator_get_Current_m53B926A3A184B625BF0A7083B42AE4DD4F27CAEB_gshared (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_t9E936A9C063E78E3C06E01B1A28CAB03B4C51221 L_0 = __this->___U3CU3E2__current;
		KeyValuePair_2_t9E936A9C063E78E3C06E01B1A28CAB03B4C51221 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_GetEnumerator_m085EEDE4BD6482A57C28B47622AF54C02BFFA8E9_gshared (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* __this, const RuntimeMethod* method) 
{
	U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* L_3 = (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		U3CEnumerateU3Ed__17__ctor_mECCA51413CF3890A35F5092E595CEC7473A48CF1(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* L_4 = V_0;
		ProfilerFrameData_2_t7F0801E253606F118877F93100B39DE68DD80138* L_5 = __this->___U3CU3E4__this;
		NullCheck(L_4);
		L_4->___U3CU3E4__this = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this), (void*)L_5);
	}

IL_0035:
	{
		U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* L_6 = V_0;
		return (RuntimeObject*)L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__17_System_Collections_IEnumerable_GetEnumerator_mDF0908D4BE258D4CF82A648467F3F7646F4066A1_gshared (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_GetEnumerator_m085EEDE4BD6482A57C28B47622AF54C02BFFA8E9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return (RuntimeObject*)L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17__ctor_m076C884FEB931F8060B1CD68EB355198F5158D71_gshared (U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_System_IDisposable_Dispose_m17E57E0CBEA1AC6F738C61F5BFF4AFEB8357B76E_gshared (U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0017:
			{
				((  void (*) (U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				return;
			}
		});
		try
		{
			goto IL_001e;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		goto IL_0020;
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnumerateU3Ed__17_MoveNext_mC83EBFB765E03A05A29A32DAE0A1AA8960720C89_gshared (U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tEF43E74215101CD3EF3C6503AF2192E5A7FB8316 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const uint32_t SizeOf_KeyValuePair_2_tDC6086B19045C9363D2B4E9EA11FD556620040C0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_5 = alloca(SizeOf_Enumerator_tEF43E74215101CD3EF3C6503AF2192E5A7FB8316);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_6 = alloca(SizeOf_KeyValuePair_2_tDC6086B19045C9363D2B4E9EA11FD556620040C0);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_7 = alloca(SizeOf_KeyValuePair_2_tDC6086B19045C9363D2B4E9EA11FD556620040C0);
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00a8:
			{
				((  void (*) (U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				return;
			}
		});
		try
		{
			{
				int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_000c_1;
			}

IL_000c_1:
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0016_1;
			}

IL_0012_1:
			{
				goto IL_001d_1;
			}

IL_0014_1:
			{
				goto IL_006f_1;
			}

IL_0016_1:
			{
				V_0 = (bool)0;
				goto IL_00b0;
			}

IL_001d_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
				ProfilerFrameData_2_t55016382651482A079353ABFAEBEA16AC98DA7F0* L_3 = *(ProfilerFrameData_2_t55016382651482A079353ABFAEBEA16AC98DA7F0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				NullCheck(L_3);
				Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_4 = L_3->___m_Data;
				NullCheck(L_4);
				InvokerActionInvoker1< Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_4, (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_5);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_5, SizeOf_Enumerator_tEF43E74215101CD3EF3C6503AF2192E5A7FB8316);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
				goto IL_0084_1;
			}

IL_0046_1:
			{
				InvokerActionInvoker1< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), (((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)))), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_6);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_6, SizeOf_KeyValuePair_2_tDC6086B19045C9363D2B4E9EA11FD556620040C0);
				il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)), SizeOf_KeyValuePair_2_tDC6086B19045C9363D2B4E9EA11FD556620040C0);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_7, SizeOf_KeyValuePair_2_tDC6086B19045C9363D2B4E9EA11FD556620040C0);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
				V_0 = (bool)1;
				goto IL_00b0;
			}

IL_006f_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
				il2cpp_codegen_initobj((((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), SizeOf_KeyValuePair_2_tDC6086B19045C9363D2B4E9EA11FD556620040C0);
			}

IL_0084_1:
			{
				bool L_8;
				L_8 = ((  bool (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)))), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				if (L_8)
				{
					goto IL_0046_1;
				}
			}
			{
				((  void (*) (U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				il2cpp_codegen_initobj((((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)))), SizeOf_Enumerator_tEF43E74215101CD3EF3C6503AF2192E5A7FB8316);
				V_0 = (bool)0;
				goto IL_00b0;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b0:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_U3CU3Em__Finally1_mCE55908EEDDEC5DFCC15234FD02024F4DA64BA03_gshared (U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1* __this, const RuntimeMethod* method) 
{
	void* L_0 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		ConstrainedActionInvoker0::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 5), il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_0, (void*)(((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_get_Current_m71E030CACE91532747D8EF5BBA4F5D34F5A8FEF6_gshared (U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_tDC6086B19045C9363D2B4E9EA11FD556620040C0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_0 = alloca(SizeOf_KeyValuePair_2_tDC6086B19045C9363D2B4E9EA11FD556620040C0);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_KeyValuePair_2_tDC6086B19045C9363D2B4E9EA11FD556620040C0);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_KeyValuePair_2_tDC6086B19045C9363D2B4E9EA11FD556620040C0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_System_Collections_IEnumerator_Reset_m1FD090BD076FB90BE5250E90EC3BC492CAFB31AE_gshared (U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__17_System_Collections_IEnumerator_get_Current_m6447D50F7E91B0FD718748AE0EC194EC154CECCF_gshared (U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_tDC6086B19045C9363D2B4E9EA11FD556620040C0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_0 = alloca(SizeOf_KeyValuePair_2_tDC6086B19045C9363D2B4E9EA11FD556620040C0);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_KeyValuePair_2_tDC6086B19045C9363D2B4E9EA11FD556620040C0);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_GetEnumerator_mC7FBDA6DA6EF4769AD3133AC86459F47125D1A5D_gshared (U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1* __this, const RuntimeMethod* method) 
{
	U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1* V_0 = NULL;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1* L_3 = (U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1* L_4 = V_0;
		ProfilerFrameData_2_t55016382651482A079353ABFAEBEA16AC98DA7F0* L_5 = *(ProfilerFrameData_2_t55016382651482A079353ABFAEBEA16AC98DA7F0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		NullCheck(L_4);
		il2cpp_codegen_write_instance_field_data<ProfilerFrameData_2_t55016382651482A079353ABFAEBEA16AC98DA7F0*>(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_5);
	}

IL_0035:
	{
		U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1* L_6 = V_0;
		return (RuntimeObject*)L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__17_System_Collections_IEnumerable_GetEnumerator_mC971E8601E6FCC39F0077989B54EFDBEF805FDDF_gshared (U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return (RuntimeObject*)L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__28__ctor_m12DD4367CAA863C7406D2DC6FD650C53ADA44B29_gshared (U3CEnumerateU3Ed__28_t0208D88B19E67F3B47A3ACACCAF0810D4DA5D4AE* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__28_System_IDisposable_Dispose_m7F3C235DED9F5C67BFED8EE8DAC4D498087E1128_gshared (U3CEnumerateU3Ed__28_t0208D88B19E67F3B47A3ACACCAF0810D4DA5D4AE* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnumerateU3Ed__28_MoveNext_m24EF17AF62C347EE7811C8DBA7617B3A352BE4D6_gshared (U3CEnumerateU3Ed__28_t0208D88B19E67F3B47A3ACACCAF0810D4DA5D4AE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* V_1 = NULL;
	int32_t V_2 = 0;
	U3CEnumerateU3Ed__28_t0208D88B19E67F3B47A3ACACCAF0810D4DA5D4AE* G_B4_0 = NULL;
	U3CEnumerateU3Ed__28_t0208D88B19E67F3B47A3ACACCAF0810D4DA5D4AE* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	U3CEnumerateU3Ed__28_t0208D88B19E67F3B47A3ACACCAF0810D4DA5D4AE* G_B5_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002e;
			}
			case 1:
			{
				goto IL_00f0;
			}
			case 2:
			{
				goto IL_0149;
			}
			case 3:
			{
				goto IL_019f;
			}
			case 4:
			{
				goto IL_0237;
			}
			case 5:
			{
				goto IL_02c7;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002e:
	{
		__this->___U3CU3E1__state = (-1);
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_3 = __this->___head;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_4 = __this->___tail;
		if ((((RuntimeObject*)(Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)L_3) == ((RuntimeObject*)(Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)L_4)))
		{
			G_B4_0 = __this;
			goto IL_005b;
		}
		G_B3_0 = __this;
	}
	{
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_5 = __this->___head;
		NullCheck(L_5);
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_6 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&L_5->____headAndTail);
		int32_t* L_7 = (int32_t*)(&L_6->___Tail);
		int32_t L_8;
		L_8 = VolatileRead(L_7);
		G_B5_0 = L_8;
		G_B5_1 = G_B3_0;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_9 = __this->___tailTail;
		G_B5_0 = L_9;
		G_B5_1 = G_B4_0;
	}

IL_0061:
	{
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_10 = __this->___head;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Segment_get_FreezeOffset_m402D47C4B47FF6B763734B006DA71BA5DBC42582(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		NullCheck(G_B5_1);
		G_B5_1->___U3CheadTailU3E5__2 = ((int32_t)il2cpp_codegen_subtract(G_B5_0, L_11));
		int32_t L_12 = __this->___headHead;
		int32_t L_13 = __this->___U3CheadTailU3E5__2;
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_01c4;
		}
	}
	{
		int32_t L_14 = __this->___headHead;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_15 = __this->___head;
		NullCheck(L_15);
		int32_t L_16 = L_15->____slotsMask;
		__this->___headHead = ((int32_t)(L_14&L_16));
		int32_t L_17 = __this->___U3CheadTailU3E5__2;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_18 = __this->___head;
		NullCheck(L_18);
		int32_t L_19 = L_18->____slotsMask;
		__this->___U3CheadTailU3E5__2 = ((int32_t)(L_17&L_19));
		int32_t L_20 = __this->___headHead;
		int32_t L_21 = __this->___U3CheadTailU3E5__2;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_011a;
		}
	}
	{
		int32_t L_22 = __this->___headHead;
		__this->___U3CiU3E5__3 = L_22;
		goto IL_0107;
	}

IL_00cf:
	{
		ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* L_23 = V_1;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_24 = __this->___head;
		int32_t L_25 = __this->___U3CiU3E5__3;
		NullCheck(L_23);
		RuntimeObject* L_26;
		L_26 = ConcurrentQueue_1_GetItemWhenAvailable_m8CD12D6BE7E6FAE430B1FDF9DC5673FA0542C7F9(L_23, L_24, L_25, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_26);
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_00f0:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_27 = __this->___U3CiU3E5__3;
		V_2 = L_27;
		int32_t L_28 = V_2;
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0107:
	{
		int32_t L_29 = __this->___U3CiU3E5__3;
		int32_t L_30 = __this->___U3CheadTailU3E5__2;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_00cf;
		}
	}
	{
		goto IL_01c4;
	}

IL_011a:
	{
		int32_t L_31 = __this->___headHead;
		__this->___U3CiU3E5__3 = L_31;
		goto IL_0160;
	}

IL_0128:
	{
		ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* L_32 = V_1;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_33 = __this->___head;
		int32_t L_34 = __this->___U3CiU3E5__3;
		NullCheck(L_32);
		RuntimeObject* L_35;
		L_35 = ConcurrentQueue_1_GetItemWhenAvailable_m8CD12D6BE7E6FAE430B1FDF9DC5673FA0542C7F9(L_32, L_33, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_35);
		__this->___U3CU3E1__state = 2;
		return (bool)1;
	}

IL_0149:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_36 = __this->___U3CiU3E5__3;
		V_2 = L_36;
		int32_t L_37 = V_2;
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_0160:
	{
		int32_t L_38 = __this->___U3CiU3E5__3;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_39 = __this->___head;
		NullCheck(L_39);
		SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B* L_40 = L_39->____slots;
		NullCheck(L_40);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0128;
		}
	}
	{
		__this->___U3CiU3E5__3 = 0;
		goto IL_01b6;
	}

IL_017e:
	{
		ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* L_41 = V_1;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_42 = __this->___head;
		int32_t L_43 = __this->___U3CiU3E5__3;
		NullCheck(L_41);
		RuntimeObject* L_44;
		L_44 = ConcurrentQueue_1_GetItemWhenAvailable_m8CD12D6BE7E6FAE430B1FDF9DC5673FA0542C7F9(L_41, L_42, L_43, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_44);
		__this->___U3CU3E1__state = 3;
		return (bool)1;
	}

IL_019f:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_45 = __this->___U3CiU3E5__3;
		V_2 = L_45;
		int32_t L_46 = V_2;
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_01b6:
	{
		int32_t L_47 = __this->___U3CiU3E5__3;
		int32_t L_48 = __this->___U3CheadTailU3E5__2;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_017e;
		}
	}

IL_01c4:
	{
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_49 = __this->___head;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_50 = __this->___tail;
		if ((((RuntimeObject*)(Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)L_49) == ((RuntimeObject*)(Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)L_50)))
		{
			goto IL_02ec;
		}
	}
	{
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_51 = __this->___head;
		NullCheck(L_51);
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_52 = L_51->____nextSegment;
		__this->___U3CsU3E5__4 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsU3E5__4), (void*)L_52);
		goto IL_026d;
	}

IL_01eb:
	{
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_53 = __this->___U3CsU3E5__4;
		NullCheck(L_53);
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_54 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&L_53->____headAndTail);
		int32_t L_55 = L_54->___Tail;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_56 = __this->___U3CsU3E5__4;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = Segment_get_FreezeOffset_m402D47C4B47FF6B763734B006DA71BA5DBC42582(L_56, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_subtract(L_55, L_57));
		__this->___U3CiU3E5__5 = 0;
		goto IL_024e;
	}

IL_0216:
	{
		ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* L_58 = V_1;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_59 = __this->___U3CsU3E5__4;
		int32_t L_60 = __this->___U3CiU3E5__5;
		NullCheck(L_58);
		RuntimeObject* L_61;
		L_61 = ConcurrentQueue_1_GetItemWhenAvailable_m8CD12D6BE7E6FAE430B1FDF9DC5673FA0542C7F9(L_58, L_59, L_60, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_61);
		__this->___U3CU3E1__state = 4;
		return (bool)1;
	}

IL_0237:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_62 = __this->___U3CiU3E5__5;
		V_2 = L_62;
		int32_t L_63 = V_2;
		__this->___U3CiU3E5__5 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_024e:
	{
		int32_t L_64 = __this->___U3CiU3E5__5;
		int32_t L_65 = __this->___U3CiU3E5__3;
		if ((((int32_t)L_64) < ((int32_t)L_65)))
		{
			goto IL_0216;
		}
	}
	{
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_66 = __this->___U3CsU3E5__4;
		NullCheck(L_66);
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_67 = L_66->____nextSegment;
		__this->___U3CsU3E5__4 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsU3E5__4), (void*)L_67);
	}

IL_026d:
	{
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_68 = __this->___U3CsU3E5__4;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_69 = __this->___tail;
		if ((!(((RuntimeObject*)(Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)L_68) == ((RuntimeObject*)(Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)L_69))))
		{
			goto IL_01eb;
		}
	}
	{
		__this->___U3CsU3E5__4 = (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsU3E5__4), (void*)(Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)NULL);
		int32_t L_70 = __this->___tailTail;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_71 = __this->___tail;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = Segment_get_FreezeOffset_m402D47C4B47FF6B763734B006DA71BA5DBC42582(L_71, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___tailTail = ((int32_t)il2cpp_codegen_subtract(L_70, L_72));
		__this->___U3CiU3E5__3 = 0;
		goto IL_02de;
	}

IL_02a6:
	{
		ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* L_73 = V_1;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_74 = __this->___tail;
		int32_t L_75 = __this->___U3CiU3E5__3;
		NullCheck(L_73);
		RuntimeObject* L_76;
		L_76 = ConcurrentQueue_1_GetItemWhenAvailable_m8CD12D6BE7E6FAE430B1FDF9DC5673FA0542C7F9(L_73, L_74, L_75, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_76;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_76);
		__this->___U3CU3E1__state = 5;
		return (bool)1;
	}

IL_02c7:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_77 = __this->___U3CiU3E5__3;
		V_2 = L_77;
		int32_t L_78 = V_2;
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_02de:
	{
		int32_t L_79 = __this->___U3CiU3E5__3;
		int32_t L_80 = __this->___tailTail;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_02a6;
		}
	}

IL_02ec:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__28_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m84BECA6DF0B1FA053625DDD4C7F14FB7520459A4_gshared (U3CEnumerateU3Ed__28_t0208D88B19E67F3B47A3ACACCAF0810D4DA5D4AE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__28_System_Collections_IEnumerator_Reset_m68AE1F12C3C1172ED67AD685F2336A6310D34A32_gshared (U3CEnumerateU3Ed__28_t0208D88B19E67F3B47A3ACACCAF0810D4DA5D4AE* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__28_System_Collections_IEnumerator_get_Current_mCED4D7E00A51D4748A517FECEE680910607F64A8_gshared (U3CEnumerateU3Ed__28_t0208D88B19E67F3B47A3ACACCAF0810D4DA5D4AE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__28__ctor_m90C63EAD01B9D30ACBA9EFE4F8B4A494ED163BBE_gshared (U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__28_System_IDisposable_Dispose_mB208AC15CAF92C72AA0E6CFE0D30F692F28C89DC_gshared (U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnumerateU3Ed__28_MoveNext_m2D1C05F0DFABA87FCCD19464553AA9D0341D6677_gshared (U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2);
	const Il2CppFullySharedGenericAny L_35 = L_26;
	const Il2CppFullySharedGenericAny L_44 = L_26;
	const Il2CppFullySharedGenericAny L_61 = L_26;
	const Il2CppFullySharedGenericAny L_76 = L_26;
	int32_t V_0 = 0;
	ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56* V_1 = NULL;
	int32_t V_2 = 0;
	U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12* G_B4_0 = NULL;
	U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12* G_B5_1 = NULL;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
		ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56* L_1 = *(ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002e;
			}
			case 1:
			{
				goto IL_00f0;
			}
			case 2:
			{
				goto IL_0149;
			}
			case 3:
			{
				goto IL_019f;
			}
			case 4:
			{
				goto IL_0237;
			}
			case 5:
			{
				goto IL_02c7;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002e:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_3 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_4 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		if ((((RuntimeObject*)(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*)L_3) == ((RuntimeObject*)(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*)L_4)))
		{
			G_B4_0 = ((U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12*)__this);
			goto IL_005b;
		}
		G_B3_0 = ((U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12*)__this);
	}
	{
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_5 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_5);
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_6 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&L_5->____headAndTail);
		int32_t* L_7 = (int32_t*)(&L_6->___Tail);
		int32_t L_8;
		L_8 = VolatileRead(L_7);
		G_B5_0 = L_8;
		G_B5_1 = ((U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12*)G_B3_0);
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_9 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		G_B5_0 = L_9;
		G_B5_1 = ((U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12*)G_B4_0);
	}

IL_0061:
	{
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_10 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_10);
		int32_t L_11;
		L_11 = ((  int32_t (*) (Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		NullCheck(G_B5_1);
		il2cpp_codegen_write_instance_field_data<int32_t>(G_B5_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), ((int32_t)il2cpp_codegen_subtract(G_B5_0, L_11)));
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_13 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_01c4;
		}
	}
	{
		int32_t L_14 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_15 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_15);
		int32_t L_16 = L_15->____slotsMask;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), ((int32_t)(L_14&L_16)));
		int32_t L_17 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_18 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_18);
		int32_t L_19 = L_18->____slotsMask;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), ((int32_t)(L_17&L_19)));
		int32_t L_20 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_21 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_011a;
		}
	}
	{
		int32_t L_22 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_22);
		goto IL_0107;
	}

IL_00cf:
	{
		ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56* L_23 = V_1;
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_24 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		int32_t L_25 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		NullCheck(L_23);
		InvokerActionInvoker3< Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*, int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_23, L_24, L_25, (Il2CppFullySharedGenericAny*)L_26);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_26, SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
		return (bool)1;
	}

IL_00f0:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		int32_t L_27 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		V_2 = L_27;
		int32_t L_28 = V_2;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), ((int32_t)il2cpp_codegen_add(L_28, 1)));
	}

IL_0107:
	{
		int32_t L_29 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		int32_t L_30 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_00cf;
		}
	}
	{
		goto IL_01c4;
	}

IL_011a:
	{
		int32_t L_31 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_31);
		goto IL_0160;
	}

IL_0128:
	{
		ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56* L_32 = V_1;
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_33 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		int32_t L_34 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		NullCheck(L_32);
		InvokerActionInvoker3< Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*, int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_32, L_33, L_34, (Il2CppFullySharedGenericAny*)L_35);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_35, SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 2);
		return (bool)1;
	}

IL_0149:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		int32_t L_36 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		V_2 = L_36;
		int32_t L_37 = V_2;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), ((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_0160:
	{
		int32_t L_38 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_39 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_39);
		SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* L_40 = L_39->____slots;
		NullCheck(L_40);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0128;
		}
	}
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), 0);
		goto IL_01b6;
	}

IL_017e:
	{
		ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56* L_41 = V_1;
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_42 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		int32_t L_43 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		NullCheck(L_41);
		InvokerActionInvoker3< Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*, int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_41, L_42, L_43, (Il2CppFullySharedGenericAny*)L_44);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_44, SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 3);
		return (bool)1;
	}

IL_019f:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		int32_t L_45 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		V_2 = L_45;
		int32_t L_46 = V_2;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), ((int32_t)il2cpp_codegen_add(L_46, 1)));
	}

IL_01b6:
	{
		int32_t L_47 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		int32_t L_48 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_017e;
		}
	}

IL_01c4:
	{
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_49 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_50 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		if ((((RuntimeObject*)(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*)L_49) == ((RuntimeObject*)(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*)L_50)))
		{
			goto IL_02ec;
		}
	}
	{
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_51 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_51);
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_52 = L_51->____nextSegment;
		il2cpp_codegen_write_instance_field_data<Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_52);
		goto IL_026d;
	}

IL_01eb:
	{
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_53 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
		NullCheck(L_53);
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_54 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&L_53->____headAndTail);
		int32_t L_55 = L_54->___Tail;
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_56 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
		NullCheck(L_56);
		int32_t L_57;
		L_57 = ((  int32_t (*) (Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_56, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), ((int32_t)il2cpp_codegen_subtract(L_55, L_57)));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), 0);
		goto IL_024e;
	}

IL_0216:
	{
		ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56* L_58 = V_1;
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_59 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
		int32_t L_60 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
		NullCheck(L_58);
		InvokerActionInvoker3< Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*, int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_58, L_59, L_60, (Il2CppFullySharedGenericAny*)L_61);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_61, SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 4);
		return (bool)1;
	}

IL_0237:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		int32_t L_62 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
		V_2 = L_62;
		int32_t L_63 = V_2;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), ((int32_t)il2cpp_codegen_add(L_63, 1)));
	}

IL_024e:
	{
		int32_t L_64 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
		int32_t L_65 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		if ((((int32_t)L_64) < ((int32_t)L_65)))
		{
			goto IL_0216;
		}
	}
	{
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_66 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
		NullCheck(L_66);
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_67 = L_66->____nextSegment;
		il2cpp_codegen_write_instance_field_data<Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_67);
	}

IL_026d:
	{
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_68 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_69 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		if ((!(((RuntimeObject*)(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*)L_68) == ((RuntimeObject*)(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*)L_69))))
		{
			goto IL_01eb;
		}
	}
	{
		il2cpp_codegen_write_instance_field_data<Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), (Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*)NULL);
		int32_t L_70 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_71 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		NullCheck(L_71);
		int32_t L_72;
		L_72 = ((  int32_t (*) (Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_71, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), ((int32_t)il2cpp_codegen_subtract(L_70, L_72)));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), 0);
		goto IL_02de;
	}

IL_02a6:
	{
		ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56* L_73 = V_1;
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_74 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		int32_t L_75 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		NullCheck(L_73);
		InvokerActionInvoker3< Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*, int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_73, L_74, L_75, (Il2CppFullySharedGenericAny*)L_76);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_76, SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 5);
		return (bool)1;
	}

IL_02c7:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		int32_t L_77 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		V_2 = L_77;
		int32_t L_78 = V_2;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), ((int32_t)il2cpp_codegen_add(L_78, 1)));
	}

IL_02de:
	{
		int32_t L_79 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		int32_t L_80 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_02a6;
		}
	}

IL_02ec:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__28_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m321E3E9E233E620C618C2ED08276C1B266EAA0F3_gshared (U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__28_System_Collections_IEnumerator_Reset_m2322CF1E526EE56112B1E47D4993E3F38B1E6C72_gshared (U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__28_System_Collections_IEnumerator_get_Current_m29969B60AE4D04B38591795F77E8666BB8D6613A_gshared (U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), L_0);
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEveryNthU3Ed__1_1__ctor_m83020BDE380BDECEB8C81B76F3D73D86F107758F_gshared (U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEveryNthU3Ed__1_1_System_IDisposable_Dispose_mACF982461EFDD3C872B732FC8ED07667324EF48C_gshared (U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0017:
			{
				((  void (*) (U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				return;
			}
		});
		try
		{
			goto IL_001e;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		goto IL_0020;
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEveryNthU3Ed__1_1_MoveNext_mC29A2ECF605856496D4A6DC159E9EE8B883E25A7_gshared (U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_t53E11A36C1D9630F0FE393EE81A246C527126CB0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_t53E11A36C1D9630F0FE393EE81A246C527126CB0);
	const Il2CppFullySharedGenericAny L_16 = L_6;
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0100:
			{
				((  void (*) (U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
				return;
			}
		});
		try
		{
			{
				int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_000c_1;
			}

IL_000c_1:
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0019_1;
			}

IL_0012_1:
			{
				goto IL_0020_1;
			}

IL_0014_1:
			{
				goto IL_00b9_1;
			}

IL_0019_1:
			{
				V_0 = (bool)0;
				goto IL_0108;
			}

IL_0020_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), 0);
				RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				NullCheck(L_3);
				RuntimeObject* L_4;
				L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_4);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
				goto IL_00de_1;
			}

IL_004e_1:
			{
				RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
				NullCheck(L_5);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_5, (Il2CppFullySharedGenericAny*)L_6);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_6, SizeOf_TValue_t53E11A36C1D9630F0FE393EE81A246C527126CB0);
				int32_t L_7 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
				int32_t L_8 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				V_2 = (bool)((((int32_t)L_7) < ((int32_t)L_8))? 1 : 0);
				bool L_9 = V_2;
				if (!L_9)
				{
					goto IL_0085_1;
				}
			}
			{
				int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
				V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
				int32_t L_11 = V_3;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_11);
				goto IL_00de_1;
			}

IL_0085_1:
			{
				int32_t L_12 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
				int32_t L_13 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				int32_t L_14 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				V_4 = (bool)((((int32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(L_12, L_13))%L_14))) == ((int32_t)0))? 1 : 0);
				bool L_15 = V_4;
				if (!L_15)
				{
					goto IL_00c1_1;
				}
			}
			{
				il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)), SizeOf_TValue_t53E11A36C1D9630F0FE393EE81A246C527126CB0);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_16, SizeOf_TValue_t53E11A36C1D9630F0FE393EE81A246C527126CB0);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
				V_0 = (bool)1;
				goto IL_0108;
			}

IL_00b9_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
			}

IL_00c1_1:
			{
				int32_t L_17 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
				V_3 = ((int32_t)il2cpp_codegen_add(L_17, 1));
				int32_t L_18 = V_3;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_18);
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)))), SizeOf_TValue_t53E11A36C1D9630F0FE393EE81A246C527126CB0);
			}

IL_00de_1:
			{
				RuntimeObject* L_19 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
				NullCheck((RuntimeObject*)L_19);
				bool L_20;
				L_20 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
				if (L_20)
				{
					goto IL_004e_1;
				}
			}
			{
				((  void (*) (U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), (RuntimeObject*)NULL);
				V_0 = (bool)0;
				goto IL_0108;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0108:
	{
		bool L_21 = V_0;
		return L_21;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEveryNthU3Ed__1_1_U3CU3Em__Finally1_m5CE8C92DC026A0B55F168BFA6EC59D31D825A678_gshared (U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_001b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEveryNthU3Ed__1_1_System_Collections_Generic_IEnumeratorU3CTValueU3E_get_Current_m6547AA0002A26DA67542FE3DC5F94AE99C129D7E_gshared (U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t53E11A36C1D9630F0FE393EE81A246C527126CB0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_t53E11A36C1D9630F0FE393EE81A246C527126CB0);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TValue_t53E11A36C1D9630F0FE393EE81A246C527126CB0);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TValue_t53E11A36C1D9630F0FE393EE81A246C527126CB0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEveryNthU3Ed__1_1_System_Collections_IEnumerator_Reset_mFE5F6C27694FD5759C5D413C18158F1B2EDBC2C3_gshared (U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEveryNthU3Ed__1_1_System_Collections_IEnumerator_get_Current_mBDB3266201F9D87AFFE0EEC471D79EFAB4FC0ABC_gshared (U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t53E11A36C1D9630F0FE393EE81A246C527126CB0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_t53E11A36C1D9630F0FE393EE81A246C527126CB0);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TValue_t53E11A36C1D9630F0FE393EE81A246C527126CB0);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEveryNthU3Ed__1_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mF4D087EDAFBA3E3DDF66BA23FA013B179CF1F167_gshared (U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518* __this, const RuntimeMethod* method) 
{
	U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518* V_0 = NULL;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518* L_3 = (U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_3;
	}

IL_0029:
	{
		U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518* L_4 = V_0;
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NullCheck(L_4);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_5);
		U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518* L_6 = V_0;
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_6);
		il2cpp_codegen_write_instance_field_data<int32_t>(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_7);
		U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518* L_8 = V_0;
		int32_t L_9 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		NullCheck(L_8);
		il2cpp_codegen_write_instance_field_data<int32_t>(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_9);
		U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518* L_10 = V_0;
		return (RuntimeObject*)L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEveryNthU3Ed__1_1_System_Collections_IEnumerable_GetEnumerator_m0FAF8954BEDAEE89A42C1939B2639327CC19974B_gshared (U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return (RuntimeObject*)L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExceptIteratorU3Ed__77_1__ctor_m0A788BEF06BC0B7F2ECF387041EB9F0D2E7D485D_gshared (U3CExceptIteratorU3Ed__77_1_t6DFBE5664B7AA81AE88BBB32A4CE8A105F05FB25* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExceptIteratorU3Ed__77_1_System_IDisposable_Dispose_m554DCC6453A664AAF484A2358951789608A2A3DD_gshared (U3CExceptIteratorU3Ed__77_1_t6DFBE5664B7AA81AE88BBB32A4CE8A105F05FB25* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
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
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{
				((  void (*) (U3CExceptIteratorU3Ed__77_1_t6DFBE5664B7AA81AE88BBB32A4CE8A105F05FB25*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				return;
			}
		});
		try
		{
			goto IL_001a;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CExceptIteratorU3Ed__77_1_MoveNext_mC80F447EE2E612132191B685058608B2ED212113_gshared (U3CExceptIteratorU3Ed__77_1_t6DFBE5664B7AA81AE88BBB32A4CE8A105F05FB25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tE967D1BA8CA00781B8F695FA112AD70C48CB6878 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_tE967D1BA8CA00781B8F695FA112AD70C48CB6878);
	const Il2CppFullySharedGenericAny L_19 = L_10;
	const Il2CppFullySharedGenericAny L_23 = L_10;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_tE967D1BA8CA00781B8F695FA112AD70C48CB6878);
	const Il2CppFullySharedGenericAny L_21 = L_12;
	bool V_0 = false;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_TSource_tE967D1BA8CA00781B8F695FA112AD70C48CB6878);
	memset(V_3, 0, SizeOf_TSource_tE967D1BA8CA00781B8F695FA112AD70C48CB6878);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_TSource_tE967D1BA8CA00781B8F695FA112AD70C48CB6878);
	memset(V_4, 0, SizeOf_TSource_tE967D1BA8CA00781B8F695FA112AD70C48CB6878);
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00d6:
			{
				((  void (*) (U3CExceptIteratorU3Ed__77_1_t6DFBE5664B7AA81AE88BBB32A4CE8A105F05FB25*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				return;
			}
		});
		try
		{
			{
				int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0018_1;
				}
			}
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_00b0_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00dd;
			}

IL_0018_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
				RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D* L_4 = (Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
				((  void (*) (Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_4, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
				il2cpp_codegen_write_instance_field_data<Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_4);
				RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_005c_1:
					{
						{
							RuntimeObject* L_7 = V_2;
							if (!L_7)
							{
								goto IL_0065_1;
							}
						}
						{
							RuntimeObject* L_8 = V_2;
							NullCheck((RuntimeObject*)L_8);
							InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
						}

IL_0065_1:
						{
							return;
						}
					}
				});
				try
				{
					{
						goto IL_0052_2;
					}

IL_003e_2:
					{
						RuntimeObject* L_9 = V_2;
						NullCheck(L_9);
						InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_9, (Il2CppFullySharedGenericAny*)L_10);
						il2cpp_codegen_memcpy(V_3, L_10, SizeOf_TSource_tE967D1BA8CA00781B8F695FA112AD70C48CB6878);
						Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D* L_11 = *(Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
						il2cpp_codegen_memcpy(L_12, V_3, SizeOf_TSource_tE967D1BA8CA00781B8F695FA112AD70C48CB6878);
						NullCheck(L_11);
						bool L_13;
						L_13 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_12: *(void**)L_12));
					}

IL_0052_2:
					{
						RuntimeObject* L_14 = V_2;
						NullCheck((RuntimeObject*)L_14);
						bool L_15;
						L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
						if (L_15)
						{
							goto IL_003e_2;
						}
					}
					{
						goto IL_0066_1;
					}
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0066_1:
			{
				RuntimeObject* L_16 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck(L_16);
				RuntimeObject* L_17;
				L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_16);
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_17);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
				goto IL_00b8_1;
			}

IL_0081_1:
			{
				RuntimeObject* L_18 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
				NullCheck(L_18);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_18, (Il2CppFullySharedGenericAny*)L_19);
				il2cpp_codegen_memcpy(V_4, L_19, SizeOf_TSource_tE967D1BA8CA00781B8F695FA112AD70C48CB6878);
				Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D* L_20 = *(Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
				il2cpp_codegen_memcpy(L_21, V_4, SizeOf_TSource_tE967D1BA8CA00781B8F695FA112AD70C48CB6878);
				NullCheck(L_20);
				bool L_22;
				L_22 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_21: *(void**)L_21));
				if (!L_22)
				{
					goto IL_00b8_1;
				}
			}
			{
				il2cpp_codegen_memcpy(L_23, V_4, SizeOf_TSource_tE967D1BA8CA00781B8F695FA112AD70C48CB6878);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_23, SizeOf_TSource_tE967D1BA8CA00781B8F695FA112AD70C48CB6878);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
				V_0 = (bool)1;
				goto IL_00dd;
			}

IL_00b0_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
			}

IL_00b8_1:
			{
				RuntimeObject* L_24 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
				NullCheck((RuntimeObject*)L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_24);
				if (L_25)
				{
					goto IL_0081_1;
				}
			}
			{
				((  void (*) (U3CExceptIteratorU3Ed__77_1_t6DFBE5664B7AA81AE88BBB32A4CE8A105F05FB25*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), (RuntimeObject*)NULL);
				V_0 = (bool)0;
				goto IL_00dd;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00dd:
	{
		bool L_26 = V_0;
		return L_26;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExceptIteratorU3Ed__77_1_U3CU3Em__Finally1_m8BD6143A7BECEC79A195A44D49D84CAC7D499410_gshared (U3CExceptIteratorU3Ed__77_1_t6DFBE5664B7AA81AE88BBB32A4CE8A105F05FB25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExceptIteratorU3Ed__77_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_mC2EB2F60A6A51F4DF272237D6113B19BDB7B6512_gshared (U3CExceptIteratorU3Ed__77_1_t6DFBE5664B7AA81AE88BBB32A4CE8A105F05FB25* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tE967D1BA8CA00781B8F695FA112AD70C48CB6878 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_tE967D1BA8CA00781B8F695FA112AD70C48CB6878);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TSource_tE967D1BA8CA00781B8F695FA112AD70C48CB6878);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TSource_tE967D1BA8CA00781B8F695FA112AD70C48CB6878);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExceptIteratorU3Ed__77_1_System_Collections_IEnumerator_Reset_m82EBCDDAE83A2EBAA7501704ADB5952880C8EC1F_gshared (U3CExceptIteratorU3Ed__77_1_t6DFBE5664B7AA81AE88BBB32A4CE8A105F05FB25* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExceptIteratorU3Ed__77_1_System_Collections_IEnumerator_get_Current_m1757B6371364003DEF6D393D59341911216DEF36_gshared (U3CExceptIteratorU3Ed__77_1_t6DFBE5664B7AA81AE88BBB32A4CE8A105F05FB25* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tE967D1BA8CA00781B8F695FA112AD70C48CB6878 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_tE967D1BA8CA00781B8F695FA112AD70C48CB6878);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TSource_tE967D1BA8CA00781B8F695FA112AD70C48CB6878);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExceptIteratorU3Ed__77_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m5D6FCAEFD2BF9B33EEB5867092314E2F2F67023E_gshared (U3CExceptIteratorU3Ed__77_1_t6DFBE5664B7AA81AE88BBB32A4CE8A105F05FB25* __this, const RuntimeMethod* method) 
{
	U3CExceptIteratorU3Ed__77_1_t6DFBE5664B7AA81AE88BBB32A4CE8A105F05FB25* V_0 = NULL;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CExceptIteratorU3Ed__77_1_t6DFBE5664B7AA81AE88BBB32A4CE8A105F05FB25* L_3 = (U3CExceptIteratorU3Ed__77_1_t6DFBE5664B7AA81AE88BBB32A4CE8A105F05FB25*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (U3CExceptIteratorU3Ed__77_1_t6DFBE5664B7AA81AE88BBB32A4CE8A105F05FB25*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
	}

IL_0029:
	{
		U3CExceptIteratorU3Ed__77_1_t6DFBE5664B7AA81AE88BBB32A4CE8A105F05FB25* L_4 = V_0;
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		NullCheck(L_4);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_5);
		U3CExceptIteratorU3Ed__77_1_t6DFBE5664B7AA81AE88BBB32A4CE8A105F05FB25* L_6 = V_0;
		RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_6);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_7);
		U3CExceptIteratorU3Ed__77_1_t6DFBE5664B7AA81AE88BBB32A4CE8A105F05FB25* L_8 = V_0;
		RuntimeObject* L_9 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NullCheck(L_8);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_9);
		U3CExceptIteratorU3Ed__77_1_t6DFBE5664B7AA81AE88BBB32A4CE8A105F05FB25* L_10 = V_0;
		return (RuntimeObject*)L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExceptIteratorU3Ed__77_1_System_Collections_IEnumerable_GetEnumerator_m85E186EEBD024BDA5E103EA2E95DCE75483570A6_gshared (U3CExceptIteratorU3Ed__77_1_t6DFBE5664B7AA81AE88BBB32A4CE8A105F05FB25* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (U3CExceptIteratorU3Ed__77_1_t6DFBE5664B7AA81AE88BBB32A4CE8A105F05FB25*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return (RuntimeObject*)L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireU3Ed__3_1__ctor_m75ED698F212A9759FB198F5329BECE087125227B_gshared (U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireU3Ed__3_1_MoveNext_m6719FED98EB8735D4CA65DF67DC2D92CE5A0534C_gshared (U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Awaiter_tC37849E9D98CF99D3C15447094E67C3063E2D07F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const uint32_t SizeOf_T_tE148242C2B31EEB009974A2D4D9A4AB5F95B20C5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_tE148242C2B31EEB009974A2D4D9A4AB5F95B20C5);
	const Il2CppFullySharedGenericAny L_16 = L_9;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_tE148242C2B31EEB009974A2D4D9A4AB5F95B20C5);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_3 = alloca(SizeOf_Awaiter_tC37849E9D98CF99D3C15447094E67C3063E2D07F);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_6 = L_3;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_7 = L_3;
	int32_t V_0 = 0;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_1 = alloca(SizeOf_Awaiter_tC37849E9D98CF99D3C15447094E67C3063E2D07F);
	memset(V_1, 0, SizeOf_Awaiter_tC37849E9D98CF99D3C15447094E67C3063E2D07F);
	U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_000f_1;
		}

IL_000e_1:
		{
		}

IL_000f_1:
		{
		}
		try
		{
			{
				int32_t L_2 = V_0;
				if (!L_2)
				{
					goto IL_0015_2;
				}
			}
			{
				goto IL_0017_2;
			}

IL_0015_2:
			{
				goto IL_0054_2;
			}

IL_0017_2:
			{
				InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)), il2cpp_rgctx_method(method->klass->rgctx_data, 2), (((UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_3);
				il2cpp_codegen_memcpy(V_1, L_3, SizeOf_Awaiter_tC37849E9D98CF99D3C15447094E67C3063E2D07F);
				bool L_4;
				L_4 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
				if (L_4)
				{
					goto IL_0070_2;
				}
			}
			{
				int32_t L_5 = 0;
				V_0 = L_5;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_5);
				il2cpp_codegen_memcpy(L_6, V_1, SizeOf_Awaiter_tC37849E9D98CF99D3C15447094E67C3063E2D07F);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_6, SizeOf_Awaiter_tC37849E9D98CF99D3C15447094E67C3063E2D07F);
				V_2 = __this;
				((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1, (&V_2), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
				goto IL_0119;
			}

IL_0054_2:
			{
				il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)), SizeOf_Awaiter_tC37849E9D98CF99D3C15447094E67C3063E2D07F);
				il2cpp_codegen_memcpy(V_1, L_7, SizeOf_Awaiter_tC37849E9D98CF99D3C15447094E67C3063E2D07F);
				il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), SizeOf_Awaiter_tC37849E9D98CF99D3C15447094E67C3063E2D07F);
				int32_t L_8 = (-1);
				V_0 = L_8;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_8);
			}

IL_0070_2:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1, (Il2CppFullySharedGenericAny*)L_9);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_9, SizeOf_T_tE148242C2B31EEB009974A2D4D9A4AB5F95B20C5);
				il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)), SizeOf_T_tE148242C2B31EEB009974A2D4D9A4AB5F95B20C5);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_10, SizeOf_T_tE148242C2B31EEB009974A2D4D9A4AB5F95B20C5);
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), SizeOf_T_tE148242C2B31EEB009974A2D4D9A4AB5F95B20C5);
				goto IL_00b5_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0098_1;
			}
			throw e;
		}

CATCH_0098_1:
		{
			Exception_t* L_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_3 = L_11;
			Exception_t* L_12 = V_3;
			il2cpp_codegen_write_instance_field_data<Exception_t*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_12);
			AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773* L_13 = *(AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			Exception_t* L_14 = *(Exception_t**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			NullCheck(L_13);
			((  void (*) (AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(L_13, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_00f9;
		}

IL_00b5_1:
		{
			AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773* L_15 = *(AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)), SizeOf_T_tE148242C2B31EEB009974A2D4D9A4AB5F95B20C5);
			NullCheck(L_15);
			InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_16: *(void**)L_16));
			AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773* L_17 = *(AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			NullCheck(L_17);
			((  void (*) (AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			goto IL_00f9;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		Exception_t* L_18 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_3 = L_18;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)))), SizeOf_T_tE148242C2B31EEB009974A2D4D9A4AB5F95B20C5);
		Exception_t* L_19 = V_3;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_19, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0119;
	}

IL_00f9:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)))), SizeOf_T_tE148242C2B31EEB009974A2D4D9A4AB5F95B20C5);
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), NULL);
	}

IL_0119:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireU3Ed__3_1_SetStateMachine_m2CBEEECCFA1E1A28787CAB7FA7ADAA080EB9DE6C_gshared (U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAsyncU3Ed__0_1__ctor_m009D40DA01088A7F7030B160D52FF7BEF548DA07_gshared (U3CFirstAsyncU3Ed__0_1_t8FEFBA058854F78C0D1DDC66BF35661E1FF7B142* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAsyncU3Ed__0_1_MoveNext_m006D5CE3EE55C1CC5D54847F42FC9B1721CD23D4_gshared (U3CFirstAsyncU3Ed__0_1_t8FEFBA058854F78C0D1DDC66BF35661E1FF7B142* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t7A71E2418CCC1033FE6D93351A565292D483E203 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_TSource_t7A71E2418CCC1033FE6D93351A565292D483E203);
	const Il2CppFullySharedGenericAny L_44 = L_19;
	const Il2CppFullySharedGenericAny L_47 = L_19;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t7A71E2418CCC1033FE6D93351A565292D483E203);
	memset(V_1, 0, SizeOf_TSource_t7A71E2418CCC1033FE6D93351A565292D483E203);
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CFirstAsyncU3Ed__0_1_t8FEFBA058854F78C0D1DDC66BF35661E1FF7B142* V_5 = NULL;
	bool V_6 = false;
	RuntimeObject* V_7 = NULL;
	bool V_8 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Exception_t* V_11 = NULL;
	int32_t V_12 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014_1;
			}
		}
		{
			goto IL_0019_1;
		}

IL_0012_1:
		{
			goto IL_003f_1;
		}

IL_0014_1:
		{
			goto IL_0166_1;
		}

IL_0019_1:
		{
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_5);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), NULL);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), 0);
		}

IL_003f_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_0045_2;
				}
			}
			{
				goto IL_0047_2;
			}

IL_0045_2:
			{
				goto IL_008e_2;
			}

IL_0047_2:
			{
				RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				NullCheck(L_7);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_8;
				L_8 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_7);
				V_4 = L_8;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_9;
				L_9 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_3 = L_9;
				bool L_10;
				L_10 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_3), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_00aa_2;
				}
			}
			{
				int32_t L_11 = 0;
				V_0 = L_11;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_11);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_12 = V_3;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_12);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CFirstAsyncU3Ed__0_1_t8FEFBA058854F78C0D1DDC66BF35661E1FF7B142**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				goto IL_0227;
			}

IL_008e_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_13 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
				V_3 = L_13;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_14 = (-1);
				V_0 = L_14;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_14);
			}

IL_00aa_2:
			{
				bool L_15;
				L_15 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_15);
				bool L_16 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
				V_2 = L_16;
				bool L_17 = V_2;
				if (!L_17)
				{
					goto IL_00d5_2;
				}
			}
			{
				RuntimeObject* L_18 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				NullCheck(L_18);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_18, (Il2CppFullySharedGenericAny*)L_19);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_19, SizeOf_TSource_t7A71E2418CCC1033FE6D93351A565292D483E203);
				goto IL_00f8_2;
			}

IL_00d5_2:
			{
				bool L_20 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
				V_6 = L_20;
				bool L_21 = V_6;
				if (!L_21)
				{
					goto IL_00f1_2;
				}
			}
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8)))), SizeOf_TSource_t7A71E2418CCC1033FE6D93351A565292D483E203);
				goto IL_00f8_2;
			}

IL_00f1_2:
			{
				Exception_t* L_22;
				L_22 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
			}

IL_00f8_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), 1);
				goto IL_010d_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0101_1;
			}
			throw e;
		}

CATCH_0101_1:
		{
			RuntimeObject* L_23 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_7 = L_23;
			RuntimeObject* L_24 = V_7;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_24);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_010d_1;
		}

IL_010d_1:
		{
			RuntimeObject* L_25 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
			V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_25) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_26 = V_8;
			if (!L_26)
			{
				goto IL_018c_1;
			}
		}
		{
			RuntimeObject* L_27 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
			NullCheck((RuntimeObject*)L_27);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_28;
			L_28 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
			V_10 = L_28;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_29;
			L_29 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_10), NULL);
			V_9 = L_29;
			bool L_30;
			L_30 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_9), NULL);
			if (L_30)
			{
				goto IL_0183_1;
			}
		}
		{
			int32_t L_31 = 1;
			V_0 = L_31;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_31);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_32 = V_9;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_32);
			V_5 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CFirstAsyncU3Ed__0_1_t8FEFBA058854F78C0D1DDC66BF35661E1FF7B142**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_9), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_0227;
		}

IL_0166_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_33 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
			V_9 = L_33;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_34 = (-1);
			V_0 = L_34;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_34);
		}

IL_0183_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_9), NULL);
		}

IL_018c_1:
		{
			RuntimeObject* L_35 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			V_7 = L_35;
			RuntimeObject* L_36 = V_7;
			if (!L_36)
			{
				goto IL_01b6_1;
			}
		}
		{
			RuntimeObject* L_37 = V_7;
			V_11 = ((Exception_t*)IsInstClass((RuntimeObject*)L_37, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_38 = V_11;
			if (L_38)
			{
				goto IL_01a9_1;
			}
		}
		{
			RuntimeObject* L_39 = V_7;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, method);
		}

IL_01a9_1:
		{
			Exception_t* L_40 = V_11;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_41;
			L_41 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_40, NULL);
			NullCheck(L_41);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_41, NULL);
		}

IL_01b6_1:
		{
			int32_t L_42 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_12 = L_42;
			int32_t L_43 = V_12;
			if ((((int32_t)L_43) == ((int32_t)1)))
			{
				goto IL_01c5_1;
			}
		}
		{
			goto IL_01ce_1;
		}

IL_01c5_1:
		{
			il2cpp_codegen_memcpy(L_44, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8)), SizeOf_TSource_t7A71E2418CCC1033FE6D93351A565292D483E203);
			il2cpp_codegen_memcpy(V_1, L_44, SizeOf_TSource_t7A71E2418CCC1033FE6D93351A565292D483E203);
			goto IL_020b;
		}

IL_01ce_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8)))), SizeOf_TSource_t7A71E2418CCC1033FE6D93351A565292D483E203);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), (RuntimeObject*)NULL);
			goto IL_020b;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01ea;
		}
		throw e;
	}

CATCH_01ea:
	{
		Exception_t* L_45 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_11 = L_45;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), (RuntimeObject*)NULL);
		Exception_t* L_46 = V_11;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_46, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0227;
	}

IL_020b:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_47, V_1, SizeOf_TSource_t7A71E2418CCC1033FE6D93351A565292D483E203);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10)) ? L_47: *(void**)L_47));
	}

IL_0227:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAsyncU3Ed__0_1_SetStateMachine_m50C58E315DE6AA980A260D2BE94E777E605C859D_gshared (U3CFirstAsyncU3Ed__0_1_t8FEFBA058854F78C0D1DDC66BF35661E1FF7B142* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAsyncU3Ed__1_1__ctor_mA01D72E913E5E4344C5166E14E36431C6A1CB5F8_gshared (U3CFirstAsyncU3Ed__1_1_tDD5E86442F853ED2127AA888C9B23F5CF897E394* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAsyncU3Ed__1_1_MoveNext_mCFF0B2EDAE27FB9979A2ACB6B2C406045FEF6D5C_gshared (U3CFirstAsyncU3Ed__1_1_tDD5E86442F853ED2127AA888C9B23F5CF897E394* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
	const Il2CppFullySharedGenericAny L_13 = L_8;
	const Il2CppFullySharedGenericAny L_49 = L_8;
	const Il2CppFullySharedGenericAny L_52 = L_8;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
	memset(V_1, 0, SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
	bool V_2 = false;
	bool V_3 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_4;
	memset((&V_4), 0, sizeof(V_4));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_5;
	memset((&V_5), 0, sizeof(V_5));
	U3CFirstAsyncU3Ed__1_1_tDD5E86442F853ED2127AA888C9B23F5CF897E394* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
	memset((&V_10), 0, sizeof(V_10));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Exception_t* V_12 = NULL;
	int32_t V_13 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014_1;
			}
		}
		{
			goto IL_0019_1;
		}

IL_0012_1:
		{
			goto IL_003f_1;
		}

IL_0014_1:
		{
			goto IL_01a2_1;
		}

IL_0019_1:
		{
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_5);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), NULL);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), 0);
		}

IL_003f_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_0045_2;
				}
			}
			{
				goto IL_004a_2;
			}

IL_0045_2:
			{
				goto IL_00db_2;
			}

IL_004a_2:
			{
				goto IL_0093_2;
			}

IL_004d_2:
			{
				RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_7);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_7, (Il2CppFullySharedGenericAny*)L_8);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_8, SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
				Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_9 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
				NullCheck(L_9);
				bool L_11;
				L_11 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_10: *(void**)L_10));
				V_2 = L_11;
				bool L_12 = V_2;
				if (!L_12)
				{
					goto IL_0086_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_13, SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
				goto IL_0134_2;
			}

IL_0086_2:
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)))), SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
			}

IL_0093_2:
			{
				RuntimeObject* L_14 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_14);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_15;
				L_15 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_14);
				V_5 = L_15;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_16;
				L_16 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_5), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_4 = L_16;
				bool L_17;
				L_17 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_4), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_00f8_2;
				}
			}
			{
				int32_t L_18 = 0;
				V_0 = L_18;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_18);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_19 = V_4;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_19);
				V_6 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CFirstAsyncU3Ed__1_1_tDD5E86442F853ED2127AA888C9B23F5CF897E394**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_4), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				goto IL_0263;
			}

IL_00db_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_20 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12));
				V_4 = L_20;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_21 = (-1);
				V_0 = L_21;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_21);
			}

IL_00f8_2:
			{
				bool L_22;
				L_22 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_4), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_22);
				bool L_23 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
				V_3 = L_23;
				bool L_24 = V_3;
				if (L_24)
				{
					goto IL_004d_2;
				}
			}
			{
				bool L_25 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				V_7 = L_25;
				bool L_26 = V_7;
				if (!L_26)
				{
					goto IL_012d_2;
				}
			}
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
				goto IL_0134_2;
			}

IL_012d_2:
			{
				Exception_t* L_27;
				L_27 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, method);
			}

IL_0134_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), 1);
				goto IL_0149_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_013d_1;
			}
			throw e;
		}

CATCH_013d_1:
		{
			RuntimeObject* L_28 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_8 = L_28;
			RuntimeObject* L_29 = V_8;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_29);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0149_1;
		}

IL_0149_1:
		{
			RuntimeObject* L_30 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_30) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_31 = V_9;
			if (!L_31)
			{
				goto IL_01c8_1;
			}
		}
		{
			RuntimeObject* L_32 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			NullCheck((RuntimeObject*)L_32);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_33;
			L_33 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			V_11 = L_33;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_34;
			L_34 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_11), NULL);
			V_10 = L_34;
			bool L_35;
			L_35 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_35)
			{
				goto IL_01bf_1;
			}
		}
		{
			int32_t L_36 = 1;
			V_0 = L_36;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_36);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_37 = V_10;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_37);
			V_6 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CFirstAsyncU3Ed__1_1_tDD5E86442F853ED2127AA888C9B23F5CF897E394**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_10), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
			goto IL_0263;
		}

IL_01a2_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_38 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
			V_10 = L_38;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_39 = (-1);
			V_0 = L_39;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_39);
		}

IL_01bf_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_01c8_1:
		{
			RuntimeObject* L_40 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_8 = L_40;
			RuntimeObject* L_41 = V_8;
			if (!L_41)
			{
				goto IL_01f2_1;
			}
		}
		{
			RuntimeObject* L_42 = V_8;
			V_12 = ((Exception_t*)IsInstClass((RuntimeObject*)L_42, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_43 = V_12;
			if (L_43)
			{
				goto IL_01e5_1;
			}
		}
		{
			RuntimeObject* L_44 = V_8;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
		}

IL_01e5_1:
		{
			Exception_t* L_45 = V_12;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_46;
			L_46 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_45, NULL);
			NullCheck(L_46);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_46, NULL);
		}

IL_01f2_1:
		{
			int32_t L_47 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			V_13 = L_47;
			int32_t L_48 = V_13;
			if ((((int32_t)L_48) == ((int32_t)1)))
			{
				goto IL_0201_1;
			}
		}
		{
			goto IL_020a_1;
		}

IL_0201_1:
		{
			il2cpp_codegen_memcpy(L_49, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
			il2cpp_codegen_memcpy(V_1, L_49, SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
			goto IL_0247;
		}

IL_020a_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
			goto IL_0247;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0226;
		}
		throw e;
	}

CATCH_0226:
	{
		Exception_t* L_50 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_12 = L_50;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		Exception_t* L_51 = V_12;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_51, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0263;
	}

IL_0247:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_52, V_1, SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_52: *(void**)L_52));
	}

IL_0263:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAsyncU3Ed__1_1_SetStateMachine_m4C2963307707B9AAA2856175B345D82FB84922A4_gshared (U3CFirstAsyncU3Ed__1_1_tDD5E86442F853ED2127AA888C9B23F5CF897E394* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) 
{
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline((&L_0), __this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270*)(&__this->___task);
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline(L_0, NULL);
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270*)(&__this->___task);
		RuntimeObject* L_1 = L_0->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		goto IL_0031;
	}

IL_0015:
	{
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_3 = (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270*)(&__this->___task);
		RuntimeObject* L_4 = L_3->___source;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_5 = (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270*)(&__this->___task);
		int16_t L_6 = L_5->___token;
		NullCheck(L_4);
		InterfaceActionInvoker1< int16_t >::Invoke(2, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, L_4, L_6);
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___runnerPromise;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Exception_t* L_2 = ___0_exception;
		__this->___ex = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ex), (void*)L_2);
		goto IL_0028;
	}

IL_0019:
	{
		RuntimeObject* L_3 = __this->___runnerPromise;
		Exception_t* L_4 = ___0_exception;
		NullCheck(L_3);
		InterfaceActionInvoker1< Exception_t* >::Invoke(3, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_3, L_4);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___runnerPromise;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = __this->___runnerPromise;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(2, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_2);
	}

IL_001c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Error_ArgumentOutOfRange_mB12CA2A5A28BE69DF8EFD9AB4FBD5DDD4C27AD13_inline (String_t* ___0_paramName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	{
		String_t* L_0 = ___0_paramName;
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		Exception_t* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___runner;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_2 = __this->___runner;
		NullCheck(L_2);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3;
		L_3 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(2, IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var, L_2);
		il2cpp_codegen_runtime_class_init_inline(PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		PlayerLoopHelper_AddContinuation_m5B8F03E45A820D91B17CFA56AA93E7444BEC17E0(((int32_t)13), L_3, NULL);
		__this->___runner = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runner), (void*)(RuntimeObject*)NULL);
	}

IL_002a:
	{
		Exception_t* L_4 = ___0_exception;
		il2cpp_codegen_runtime_class_init_inline(UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var);
		UniTaskScheduler_PublishUnobservedTaskException_m9F6352174ED5654B0A9FB5562B6FF25A788B27D3(L_4, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___runner;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_2 = __this->___runner;
		NullCheck(L_2);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3;
		L_3 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(2, IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var, L_2);
		il2cpp_codegen_runtime_class_init_inline(PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		PlayerLoopHelper_AddContinuation_m5B8F03E45A820D91B17CFA56AA93E7444BEC17E0(((int32_t)13), L_3, NULL);
		__this->___runner = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runner), (void*)(RuntimeObject*)NULL);
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF26C76B1728491A2D7039EBFC35CFDE0D352C43A);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, _stringLiteralF26C76B1728491A2D7039EBFC35CFDE0D352C43A, NULL);
		V_0 = L_0;
		goto IL_000e;
	}

IL_000e:
	{
		Exception_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) 
{
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_inline((&L_0), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_0 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_0 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task);
		RuntimeObject* L_1 = L_0->___source;
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_4 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task);
		bool L_5 = L_4->___result;
		V_2 = L_5;
		goto IL_0039;
	}

IL_0024:
	{
		RuntimeObject* L_6 = V_0;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_7 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task);
		int16_t L_8 = L_7->___token;
		NullCheck(L_6);
		bool L_9;
		L_9 = InterfaceFuncInvoker1< bool, int16_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_6, L_8);
		V_2 = L_9;
		goto IL_0039;
	}

IL_0039:
	{
		bool L_10 = V_2;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tC3AC829C78D0C95AC43F29F601558266274BB956 Enumerator_get_Current_m0FECBAC967E8393562F8A3672F8E4749569DC02E_gshared_inline (Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tC3AC829C78D0C95AC43F29F601558266274BB956 L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tA75B083C5C7F9CE6237B200BC4A36B820A24C5C8 Enumerator_get_Current_m0066B93625BCFB48A397FBDD68007AAB78C628E8_gshared_inline (Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tA75B083C5C7F9CE6237B200BC4A36B820A24C5C8 L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t9E936A9C063E78E3C06E01B1A28CAB03B4C51221 Enumerator_get_Current_mA2D3EE07E11DDC88DEA69B2580EAD5218FE78599_gshared_inline (Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_t9E936A9C063E78E3C06E01B1A28CAB03B4C51221 L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* ___0_task, const RuntimeMethod* method) 
{
	{
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = ___0_task;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_1 = (*(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270*)L_0);
		__this->___task = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task))->___source), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		V_1 = 1;
		goto IL_0026;
	}

IL_0012:
	{
		RuntimeObject* L_2 = __this->___source;
		int16_t L_3 = __this->___token;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, L_2, L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___0_status, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___0_status;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0008;
	}

IL_0008:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* ___0_task, const RuntimeMethod* method) 
{
	{
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_0 = ___0_task;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1 = (*(UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)L_0);
		__this->___task = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task))->___source), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_1 = __this->___source;
		int16_t L_2 = __this->___token;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_1, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0020;
	}

IL_0020:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
