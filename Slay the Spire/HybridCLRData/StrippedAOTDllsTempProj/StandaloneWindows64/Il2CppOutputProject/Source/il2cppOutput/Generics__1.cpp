#include "pch-cpp.hpp"





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
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
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
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
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
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct U3CAggregateAsyncU3Ed__2_3_t53B01CBA4B6238A2F5D21D1E4FEFF0F2248CBDA3;
struct U3CAggregateAwaitAsyncU3Ed__3_1_tFD8CCD48951F976147B284BA20BF8B7AE6485EB2;
struct U3CAggregateAwaitAsyncU3Ed__4_2_t3A8545F883C47270A41BD33A992F9E8FEAFBC6DC;
struct U3CAggregateAwaitAsyncU3Ed__5_3_t2CE30508A0C0C3772524DDFD2432747DF048D232;
struct U3CAggregateAwaitWithCancellationAsyncU3Ed__6_1_t910F89A2A66D5D4293E85DF546B8E2506498522E;
struct U3CAggregateAwaitWithCancellationAsyncU3Ed__7_2_tA8B0F9E903ED8F53A4425E81A17DF1953F32043A;
struct U3CAggregateAwaitWithCancellationAsyncU3Ed__8_3_tC4A4A9DE2B534A7D5648BC4098FE4801348C8EB8;
struct U3CAllAsyncU3Ed__0_1_t4DB60B2ED4D6871EE5403E4F5BAA6ABABD50E200;
struct U3CAllAwaitAsyncU3Ed__1_1_t90324070882EB71F231EAEC0E4C1BB75C7ACDF24;
struct U3CAllAwaitWithCancellationAsyncU3Ed__2_1_t8B671C9A66D49DAEBEFE05284EE359265A8BBC8A;
struct U3CAnyAsyncU3Ed__0_1_tC5A26A942407B0F559D11031DC5D9E153A3C25AE;
struct U3CAnyAsyncU3Ed__1_1_t8E72A4C00F10B48E01D1E28C464D980B19ACDCAB;
struct U3CAnyAwaitAsyncU3Ed__2_1_t35E2FF0F0EA95D7A7F26DFCCEF9BF7694904DD25;
struct U3CAnyAwaitWithCancellationAsyncU3Ed__3_1_t80086595F6A0BBAFC39EF20D2C66D9AB55BF1411;
struct U3CAppendIteratorU3Ed__61_1_t189BA8793B4F2C40AE8EFF13EFA1B16235067FD8;
struct U3CApplyResultSelectorU3Ed__13_1_tBECF9560301CC66C0385B10259B6E6D26D332917;
struct U3CAsUniTaskU3Ed__1_1_t6767011C86F9746C34592640121E6D154BA12A95;
struct U3CAsUniTaskU3Ed__2_1_t4D4E6946A5FECEDFA62172C94A86FBA99E3AF82A;
struct U3CAverageAsyncU3Ed__13_1_tF4497F5FC4DE74DA6C196678ED361D0D2A97A2A6;
struct U3CAverageAsyncU3Ed__17_1_tAD8B4205081C02C2594BCB614DAB236500FBB75E;
struct U3CAverageAsyncU3Ed__1_1_t159C2C09DDCD5B3BF8254D77B69FBB0B77FE048B;
struct U3CAverageAsyncU3Ed__21_1_t1332FF70F0A3589494CB18B96F4F4A731100690A;
struct U3CAverageAsyncU3Ed__25_1_t50DC0406CEF02DAB876282D754EA66F5781A80BF;
struct U3CAverageAsyncU3Ed__29_1_t022577A8DD5BDABA432E986818E1E4B759AE6B49;
struct U3CAverageAsyncU3Ed__33_1_tB5ED8AAD653CC1552876093A060CB51E7A2235BF;
struct U3CAverageAsyncU3Ed__37_1_tF6158B69B5E1C0CFF9AA07D2DB76CA10B145EC26;
struct U3CAverageAsyncU3Ed__5_1_t84BCC31CD3BC2E5D922564232FEDCBDFF53E19E2;
struct U3CAverageAsyncU3Ed__9_1_tF35F45927FD2FC27A65CF71EACCFEEB439F2B87D;
struct U3CAverageAwaitAsyncU3Ed__10_1_t5D0FB99AA9FEC1C73FBC2EE8C59B3E58BF40C867;
struct U3CAverageAwaitAsyncU3Ed__14_1_t9A8C09FDAF75D12C8D248536BF9A707B18D66F63;
struct U3CAverageAwaitAsyncU3Ed__18_1_t6FB452C63FD8B313DCD340AEAC77F48F395F0D14;
struct U3CAverageAwaitAsyncU3Ed__22_1_t6ACF89349A1ADA4A61F83D20FFB2D385035CE624;
struct U3CAverageAwaitAsyncU3Ed__26_1_t4A064A93DEC1BE815476E1B98F2EC9981EC964E5;
struct U3CAverageAwaitAsyncU3Ed__2_1_t3241690F59243BF1EC03264EFCC40C3C82718B77;
struct U3CAverageAwaitAsyncU3Ed__30_1_t1B91FA738692CE65DB747C8606C4EFA4FBC2C97C;
struct U3CAverageAwaitAsyncU3Ed__34_1_t53FE7D4236A524E65C4060CD9DF2F5BD6112ED2A;
struct U3CAverageAwaitAsyncU3Ed__38_1_t033B46F89946CC1CA0F521A8F9086B9E2458454B;
struct U3CAverageAwaitAsyncU3Ed__6_1_t3691944FA8BC631E4794C68710C761652161B0BF;
struct U3CAverageAwaitWithCancellationAsyncU3Ed__11_1_tDA0926F879D4DFE9E9196F374B8E80FA70547103;
struct U3CAverageAwaitWithCancellationAsyncU3Ed__15_1_tB093D6BB8EF29AA4A5EA8BC6B7371EB332077809;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Awaitable_1_t7F2FEF7F3E53E010671259DFBDCF40FEA65869CE;
struct Func_2_t02AAAA5ED63E37D8013889ECE551ED5172A9F7A4;
struct Func_2_tB9099E603733365FA636ABD4F1512E954C883863;
struct Func_2_t0DE0378A8A90F3B8204450750A771096D0F75A98;
struct Func_2_tFC0477C87E7518136DEE345DCF44B6ACA22E24F0;
struct Func_2_tCDF39BBC1094782C50BE631779E8FD895BFEAF32;
struct Func_2_t041ABB3F33302FF5B428FF832CE110343F4DA4C6;
struct Func_2_tEBD22D2F4376CEDF9152BDE05B6E363699F0C7E1;
struct Func_2_tCD782F33543995850D4A4AF7569D83504640F79F;
struct Func_2_t898AEF8B0AC8B5CB054F91316F69A4739DB2E5B6;
struct Func_2_t9F80A31065CD628F063DA0D192A111706F695666;
struct Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C;
struct Func_2_tD6766C7D6227AC2A45F7EDFC827BDFC58C8EFE78;
struct Func_2_tF452F3FF30306E919291E498D051B5F208EB38CF;
struct Func_2_t6561E0DBB0FBFCB8DBFA46F392A86C31706164F5;
struct Func_2_t04742C32F6BEF8B1199EACA5BD7F68C041603B6D;
struct Func_2_t844387A4F32860587989B5D1B9F3950D6D5901DE;
struct Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2;
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
struct Func_2_t5ABD904FFCFC84BA711C9261A36E9482990A6CA7;
struct Func_2_tF36C7D1152BF6807C03112D4A053E5038A13A6EB;
struct Func_2_t8DB808B3690BFDBD7B936631B430453B90DBBDE7;
struct Func_2_t08AB71331BE9C65EB982154CBB27F90B5B62A771;
struct Func_2_tFAB3D8EFCE4F55CAB3F80EABAB10F8226D7FEBF6;
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
struct Func_3_tA7E06E01A9E24ADCFD5FDF90F63DB44745325DB6;
struct Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814;
struct Func_3_tB356387A25DA85D9F4DDAAEEFD39A96B3F81FA95;
struct Func_3_t79F461272893123C05C047A343D70B9B775827E4;
struct Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E;
struct Func_3_t025EADE05AD46B78D6372153E7AB6141B48C6D40;
struct Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4;
struct Func_4_tACF12340039B5BCFBB5ED953C0B2BF68B8F74D25;
struct Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IStateMachineRunnerPromise_1_t8D57C4F4548F3BCD478D68C0B1214D4BF62AA68D;
struct IStateMachineRunnerPromise_1_t51E154A16BAD95B7D398B5F0702C3E66265C53DA;
struct IStateMachineRunnerPromise_1_t1AB0B5E2CA50004E9184B2F5382B9C646CD88F94;
struct IStateMachineRunnerPromise_1_tE89ECD2876CAE5961DE51F0E207D9EE40476C855;
struct IStateMachineRunnerPromise_1_t9061D15A609C242C57AE7E2186438B3A765049A0;
struct IStateMachineRunnerPromise_1_t60C36DF27100A1AAC871929239A758A920192D30;
struct IStateMachineRunnerPromise_1_t13A438173E94750804DBD5134EB865935FADCFD8;
struct IStateMachineRunnerPromise_1_t33359314377828B79D5AB55278350F65F2237DD9;
struct IUniTaskAsyncEnumerable_1_tB465D2725680B21CF3074178AECADD1D24C24A74;
struct IUniTaskAsyncEnumerator_1_t256C7409E6B13FF3224A57D2DD1A4D52A2C40092;
struct IUniTaskSource_1_t485459C6F6CB25D26E56105B8D0749F0FAD63B61;
struct IUniTaskSource_1_tCE4346B1A4E6A33744233A2262F33E59C6306CA1;
struct IUniTaskSource_1_tED8322E8A8E850EEDF72FF9B9F242963B2ECE7FE;
struct IUniTaskSource_1_tE3D8C7FB2D80191B4F79AF51153AD33F56C16C37;
struct IUniTaskSource_1_t5F2BFA96825F2DFE4BA08A68BC159258E438D103;
struct IUniTaskSource_1_tB6B218F9BB467453A6CBAEE053820D3B3E8F891C;
struct IUniTaskSource_1_t43ECD5543FAA73E407F28F30300FAA39B7D954B0;
struct IUniTaskSource_1_t7B60863D376A1004EF4553185A8DC483A70F720C;
struct IUniTaskSource_1_t8F97352CA996D0781DB009E630AB2143DE1614D3;
struct IUniTaskSource_1_tE897B7736A4F7A6923CE32E4D43E3506188EE795;
struct IUniTaskSource_1_tD745CD56EC6E5CB710B56755B2E0F56C83FD8F2F;
struct IUniTaskSource_1_tA27C284FF17E3AAB5B5D07A7E4DE207B56F764AB;
struct Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332;
struct ThreadLocal_1_tAC3F42EDBD62D63937FEA3228C049A88854C4C9D;
struct GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Exception_t;
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MethodInfo_t;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralF26C76B1728491A2D7039EBFC35CFDE0D352C43A;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_mDD8356C2BFB8EBB175763FE2D92A4B0BEBDAEE94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_mFC4A614AA0B1C8D41A05840FAA981FAF10FC99C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m33574CDAA01061AEA24434F9DE51A5B4F03A18A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_m610A766CD8038A109B21E2F02CF093096F9226D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_m68E768B22932F4C553E8F96F1DEDC7361DC02133_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_mE4F348E45E23B27DC05E89090C2C334B99FECBD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CAppendIteratorU3Ed__61_1_t189BA8793B4F2C40AE8EFF13EFA1B16235067FD8 : public RuntimeObject {};
struct U3CApplyResultSelectorU3Ed__13_1_tBECF9560301CC66C0385B10259B6E6D26D332917 : public RuntimeObject {};
struct Awaitable_1_t7F2FEF7F3E53E010671259DFBDCF40FEA65869CE : public RuntimeObject {};
struct Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2 : public RuntimeObject {};
struct Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332  : public RuntimeObject
{
	RuntimeObject* ___comparer;
	GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* ___groupings;
	Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* ___lastGrouping;
	int32_t ___count;
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
struct AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 
{
	RuntimeObject* ___runnerPromise;
	Exception_t* ___ex;
	bool ___result;
	RuntimeObject* ___debuggingId;
};
struct AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408 
{
	RuntimeObject* ___runnerPromise;
	Exception_t* ___ex;
	double ___result;
	RuntimeObject* ___debuggingId;
};
struct AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3 
{
	RuntimeObject* ___runnerPromise;
	Exception_t* ___ex;
	float ___result;
	RuntimeObject* ___debuggingId;
};
typedef Il2CppFullySharedGenericStruct AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52;
struct Awaiter_t85BED53FDB903195E7807CDF912212A136462405 
{
	Awaitable_1_t7F2FEF7F3E53E010671259DFBDCF40FEA65869CE* ____coroutine;
};
struct Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 
{
	bool ___hasValue;
	double ___value;
};
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	bool ___hasValue;
	int32_t ___value;
};
struct Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 
{
	bool ___hasValue;
	int64_t ___value;
};
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	bool ___hasValue;
	float ___value;
};
struct UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 
{
	RuntimeObject* ___source;
	bool ___result;
	int16_t ___token;
};
struct UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C 
{
	RuntimeObject* ___source;
	double ___result;
	int16_t ___token;
};
struct UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 
{
	RuntimeObject* ___source;
	int32_t ___result;
	int16_t ___token;
};
struct UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72 
{
	RuntimeObject* ___source;
	int64_t ___result;
	int16_t ___token;
};
struct UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1 
{
	RuntimeObject* ___source;
	float ___result;
	int16_t ___token;
};
typedef Il2CppFullySharedGenericStruct UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483;
typedef Il2CppFullySharedGenericStruct ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7;
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
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___flags;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_OffsetPadding[4];
			int32_t ___hi;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_OffsetPadding[8];
			int32_t ___lo;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_OffsetPadding[12];
			int32_t ___mid;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_OffsetPadding[8];
			uint64_t ___ulomidLE;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_forAlignmentOnly;
		};
	};
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
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
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
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
struct U3CAsUniTaskU3Ed__1_1_t6767011C86F9746C34592640121E6D154BA12A95 : public RuntimeObject {};
struct AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438 
{
	RuntimeObject* ___runnerPromise;
	Exception_t* ___ex;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___result;
	RuntimeObject* ___debuggingId;
};
struct AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88 
{
	RuntimeObject* ___runnerPromise;
	Exception_t* ___ex;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___result;
	RuntimeObject* ___debuggingId;
};
struct AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166 
{
	RuntimeObject* ___runnerPromise;
	Exception_t* ___ex;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___result;
	RuntimeObject* ___debuggingId;
};
struct Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 
{
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 ___task;
};
struct Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 
{
	UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C ___task;
};
struct Awaiter_t8953594D03299DE782894F4A865CED79F2504266 
{
	UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 ___task;
};
struct Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E 
{
	UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72 ___task;
};
struct Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D 
{
	UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1 ___task;
};
typedef Il2CppFullySharedGenericStruct Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C;
struct Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB 
{
	bool ___hasValue;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value;
};
struct UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E 
{
	RuntimeObject* ___source;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___result;
	int16_t ___token;
};
struct UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05 
{
	RuntimeObject* ___source;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___result;
	int16_t ___token;
};
struct UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C 
{
	RuntimeObject* ___source;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___result;
	int16_t ___token;
};
struct UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46 
{
	RuntimeObject* ___source;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___result;
	int16_t ___token;
};
struct UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3 
{
	RuntimeObject* ___source;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___result;
	int16_t ___token;
};
typedef Il2CppFullySharedGenericStruct ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C;
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
struct UniTaskStatus_tC898C29839EBB5DB7055C3DF299A2C276237CB70 
{
	int32_t ___value__;
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
struct U3CAggregateAsyncU3Ed__2_3_t53B01CBA4B6238A2F5D21D1E4FEFF0F2248CBDA3 : public RuntimeObject {};
struct U3CAggregateAwaitAsyncU3Ed__3_1_tFD8CCD48951F976147B284BA20BF8B7AE6485EB2 : public RuntimeObject {};
struct U3CAggregateAwaitAsyncU3Ed__4_2_t3A8545F883C47270A41BD33A992F9E8FEAFBC6DC : public RuntimeObject {};
struct U3CAggregateAwaitAsyncU3Ed__5_3_t2CE30508A0C0C3772524DDFD2432747DF048D232 : public RuntimeObject {};
struct U3CAggregateAwaitWithCancellationAsyncU3Ed__6_1_t910F89A2A66D5D4293E85DF546B8E2506498522E : public RuntimeObject {};
struct U3CAggregateAwaitWithCancellationAsyncU3Ed__7_2_tA8B0F9E903ED8F53A4425E81A17DF1953F32043A : public RuntimeObject {};
struct U3CAggregateAwaitWithCancellationAsyncU3Ed__8_3_tC4A4A9DE2B534A7D5648BC4098FE4801348C8EB8 : public RuntimeObject {};
struct U3CAllAsyncU3Ed__0_1_t4DB60B2ED4D6871EE5403E4F5BAA6ABABD50E200  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	RuntimeObject* ___U3CeU3E5__1;
	RuntimeObject* ___U3CU3Es__2;
	int32_t ___U3CU3Es__3;
	bool ___U3CU3Es__4;
	bool ___U3CU3Es__5;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CAllAwaitAsyncU3Ed__1_1_t90324070882EB71F231EAEC0E4C1BB75C7ACDF24  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C* ___predicate;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	RuntimeObject* ___U3CeU3E5__1;
	RuntimeObject* ___U3CU3Es__2;
	int32_t ___U3CU3Es__3;
	bool ___U3CU3Es__4;
	bool ___U3CU3Es__5;
	bool ___U3CU3Es__6;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CAllAwaitWithCancellationAsyncU3Ed__2_1_t8B671C9A66D49DAEBEFE05284EE359265A8BBC8A  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814* ___predicate;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	RuntimeObject* ___U3CeU3E5__1;
	RuntimeObject* ___U3CU3Es__2;
	int32_t ___U3CU3Es__3;
	bool ___U3CU3Es__4;
	bool ___U3CU3Es__5;
	bool ___U3CU3Es__6;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CAnyAsyncU3Ed__0_1_tC5A26A942407B0F559D11031DC5D9E153A3C25AE  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	RuntimeObject* ___U3CeU3E5__1;
	RuntimeObject* ___U3CU3Es__2;
	int32_t ___U3CU3Es__3;
	bool ___U3CU3Es__4;
	bool ___U3CU3Es__5;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CAnyAsyncU3Ed__1_1_t8E72A4C00F10B48E01D1E28C464D980B19ACDCAB  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	RuntimeObject* ___U3CeU3E5__1;
	RuntimeObject* ___U3CU3Es__2;
	int32_t ___U3CU3Es__3;
	bool ___U3CU3Es__4;
	bool ___U3CU3Es__5;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CAnyAwaitAsyncU3Ed__2_1_t35E2FF0F0EA95D7A7F26DFCCEF9BF7694904DD25  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C* ___predicate;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	RuntimeObject* ___U3CeU3E5__1;
	RuntimeObject* ___U3CU3Es__2;
	int32_t ___U3CU3Es__3;
	bool ___U3CU3Es__4;
	bool ___U3CU3Es__5;
	bool ___U3CU3Es__6;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CAnyAwaitWithCancellationAsyncU3Ed__3_1_t80086595F6A0BBAFC39EF20D2C66D9AB55BF1411  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814* ___predicate;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	RuntimeObject* ___U3CeU3E5__1;
	RuntimeObject* ___U3CU3Es__2;
	int32_t ___U3CU3Es__3;
	bool ___U3CU3Es__4;
	bool ___U3CU3Es__5;
	bool ___U3CU3Es__6;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CAsUniTaskU3Ed__2_1_t4D4E6946A5FECEDFA62172C94A86FBA99E3AF82A : public RuntimeObject {};
struct U3CAverageAsyncU3Ed__13_1_tF4497F5FC4DE74DA6C196678ED361D0D2A97A2A6  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_tF36C7D1152BF6807C03112D4A053E5038A13A6EB* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	int64_t ___U3CcountU3E5__1;
	double ___U3CsumU3E5__2;
	RuntimeObject* ___U3CeU3E5__3;
	RuntimeObject* ___U3CU3Es__4;
	int32_t ___U3CU3Es__5;
	bool ___U3CU3Es__6;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CAverageAsyncU3Ed__17_1_tAD8B4205081C02C2594BCB614DAB236500FBB75E  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_t5ABD904FFCFC84BA711C9261A36E9482990A6CA7* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	int64_t ___U3CcountU3E5__1;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CsumU3E5__2;
	RuntimeObject* ___U3CeU3E5__3;
	RuntimeObject* ___U3CU3Es__4;
	int32_t ___U3CU3Es__5;
	bool ___U3CU3Es__6;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CAverageAsyncU3Ed__1_1_t159C2C09DDCD5B3BF8254D77B69FBB0B77FE048B  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_t8DB808B3690BFDBD7B936631B430453B90DBBDE7* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	int64_t ___U3CcountU3E5__1;
	int32_t ___U3CsumU3E5__2;
	RuntimeObject* ___U3CeU3E5__3;
	RuntimeObject* ___U3CU3Es__4;
	int32_t ___U3CU3Es__5;
	bool ___U3CU3Es__6;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CAverageAsyncU3Ed__21_1_t1332FF70F0A3589494CB18B96F4F4A731100690A  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_t0DE0378A8A90F3B8204450750A771096D0F75A98* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	int64_t ___U3CcountU3E5__1;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CsumU3E5__2;
	RuntimeObject* ___U3CeU3E5__3;
	RuntimeObject* ___U3CU3Es__4;
	int32_t ___U3CU3Es__5;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CvU3E5__6;
	bool ___U3CU3Es__7;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CAverageAsyncU3Ed__25_1_t50DC0406CEF02DAB876282D754EA66F5781A80BF  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_tFC0477C87E7518136DEE345DCF44B6ACA22E24F0* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	int64_t ___U3CcountU3E5__1;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CsumU3E5__2;
	RuntimeObject* ___U3CeU3E5__3;
	RuntimeObject* ___U3CU3Es__4;
	int32_t ___U3CU3Es__5;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CvU3E5__6;
	bool ___U3CU3Es__7;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CAverageAsyncU3Ed__29_1_t022577A8DD5BDABA432E986818E1E4B759AE6B49  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_tCDF39BBC1094782C50BE631779E8FD895BFEAF32* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	int64_t ___U3CcountU3E5__1;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CsumU3E5__2;
	RuntimeObject* ___U3CeU3E5__3;
	RuntimeObject* ___U3CU3Es__4;
	int32_t ___U3CU3Es__5;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CvU3E5__6;
	bool ___U3CU3Es__7;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CAverageAsyncU3Ed__33_1_tB5ED8AAD653CC1552876093A060CB51E7A2235BF  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_tB9099E603733365FA636ABD4F1512E954C883863* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	int64_t ___U3CcountU3E5__1;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CsumU3E5__2;
	RuntimeObject* ___U3CeU3E5__3;
	RuntimeObject* ___U3CU3Es__4;
	int32_t ___U3CU3Es__5;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CvU3E5__6;
	bool ___U3CU3Es__7;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CAverageAsyncU3Ed__5_1_t84BCC31CD3BC2E5D922564232FEDCBDFF53E19E2  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_t08AB71331BE9C65EB982154CBB27F90B5B62A771* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	int64_t ___U3CcountU3E5__1;
	int64_t ___U3CsumU3E5__2;
	RuntimeObject* ___U3CeU3E5__3;
	RuntimeObject* ___U3CU3Es__4;
	int32_t ___U3CU3Es__5;
	bool ___U3CU3Es__6;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CAverageAsyncU3Ed__9_1_tF35F45927FD2FC27A65CF71EACCFEEB439F2B87D  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_tFAB3D8EFCE4F55CAB3F80EABAB10F8226D7FEBF6* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	int64_t ___U3CcountU3E5__1;
	float ___U3CsumU3E5__2;
	RuntimeObject* ___U3CeU3E5__3;
	RuntimeObject* ___U3CU3Es__4;
	int32_t ___U3CU3Es__5;
	bool ___U3CU3Es__6;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CAverageAwaitAsyncU3Ed__10_1_t5D0FB99AA9FEC1C73FBC2EE8C59B3E58BF40C867  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_t844387A4F32860587989B5D1B9F3950D6D5901DE* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	int64_t ___U3CcountU3E5__1;
	float ___U3CsumU3E5__2;
	RuntimeObject* ___U3CeU3E5__3;
	RuntimeObject* ___U3CU3Es__4;
	int32_t ___U3CU3Es__5;
	float ___U3CU3Es__6;
	float ___U3CU3Es__7;
	bool ___U3CU3Es__8;
	Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3;
};
struct U3CAverageAwaitAsyncU3Ed__14_1_t9A8C09FDAF75D12C8D248536BF9A707B18D66F63  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_tF452F3FF30306E919291E498D051B5F208EB38CF* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	int64_t ___U3CcountU3E5__1;
	double ___U3CsumU3E5__2;
	RuntimeObject* ___U3CeU3E5__3;
	RuntimeObject* ___U3CU3Es__4;
	int32_t ___U3CU3Es__5;
	double ___U3CU3Es__6;
	double ___U3CU3Es__7;
	bool ___U3CU3Es__8;
	Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3;
};
struct U3CAverageAwaitAsyncU3Ed__2_1_t3241690F59243BF1EC03264EFCC40C3C82718B77  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_t6561E0DBB0FBFCB8DBFA46F392A86C31706164F5* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	int64_t ___U3CcountU3E5__1;
	int32_t ___U3CsumU3E5__2;
	RuntimeObject* ___U3CeU3E5__3;
	RuntimeObject* ___U3CU3Es__4;
	int32_t ___U3CU3Es__5;
	int32_t ___U3CU3Es__6;
	int32_t ___U3CU3Es__7;
	bool ___U3CU3Es__8;
	Awaiter_t8953594D03299DE782894F4A865CED79F2504266 ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3;
};
struct U3CAverageAwaitAsyncU3Ed__6_1_t3691944FA8BC631E4794C68710C761652161B0BF  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_t04742C32F6BEF8B1199EACA5BD7F68C041603B6D* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	int64_t ___U3CcountU3E5__1;
	int64_t ___U3CsumU3E5__2;
	RuntimeObject* ___U3CeU3E5__3;
	RuntimeObject* ___U3CU3Es__4;
	int32_t ___U3CU3Es__5;
	int64_t ___U3CU3Es__6;
	int64_t ___U3CU3Es__7;
	bool ___U3CU3Es__8;
	Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3;
};
struct U3CAverageAwaitWithCancellationAsyncU3Ed__11_1_tDA0926F879D4DFE9E9196F374B8E80FA70547103  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_3_t79F461272893123C05C047A343D70B9B775827E4* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	int64_t ___U3CcountU3E5__1;
	float ___U3CsumU3E5__2;
	RuntimeObject* ___U3CeU3E5__3;
	RuntimeObject* ___U3CU3Es__4;
	int32_t ___U3CU3Es__5;
	float ___U3CU3Es__6;
	float ___U3CU3Es__7;
	bool ___U3CU3Es__8;
	Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3;
};
struct U3CAverageAwaitWithCancellationAsyncU3Ed__15_1_tB093D6BB8EF29AA4A5EA8BC6B7371EB332077809  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_3_tB356387A25DA85D9F4DDAAEEFD39A96B3F81FA95* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	int64_t ___U3CcountU3E5__1;
	double ___U3CsumU3E5__2;
	RuntimeObject* ___U3CeU3E5__3;
	RuntimeObject* ___U3CU3Es__4;
	int32_t ___U3CU3Es__5;
	double ___U3CU3Es__6;
	double ___U3CU3Es__7;
	bool ___U3CU3Es__8;
	Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3;
};
struct AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285 
{
	RuntimeObject* ___runnerPromise;
	Exception_t* ___ex;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___result;
	RuntimeObject* ___debuggingId;
};
struct Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 
{
	UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E ___task;
};
struct Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 
{
	UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05 ___task;
};
struct Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB 
{
	UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C ___task;
};
struct Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 
{
	UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46 ___task;
};
struct Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 
{
	UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3 ___task;
};
struct UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F 
{
	RuntimeObject* ___source;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___result;
	int16_t ___token;
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
struct U3CAverageAsyncU3Ed__37_1_tF6158B69B5E1C0CFF9AA07D2DB76CA10B145EC26  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_t02AAAA5ED63E37D8013889ECE551ED5172A9F7A4* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	int64_t ___U3CcountU3E5__1;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CsumU3E5__2;
	RuntimeObject* ___U3CeU3E5__3;
	RuntimeObject* ___U3CU3Es__4;
	int32_t ___U3CU3Es__5;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CvU3E5__6;
	bool ___U3CU3Es__7;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CAverageAwaitAsyncU3Ed__18_1_t6FB452C63FD8B313DCD340AEAC77F48F395F0D14  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_tD6766C7D6227AC2A45F7EDFC827BDFC58C8EFE78* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	int64_t ___U3CcountU3E5__1;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CsumU3E5__2;
	RuntimeObject* ___U3CeU3E5__3;
	RuntimeObject* ___U3CU3Es__4;
	int32_t ___U3CU3Es__5;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CU3Es__6;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CU3Es__7;
	bool ___U3CU3Es__8;
	Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3;
};
struct U3CAverageAwaitAsyncU3Ed__22_1_t6ACF89349A1ADA4A61F83D20FFB2D385035CE624  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_tCD782F33543995850D4A4AF7569D83504640F79F* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	int64_t ___U3CcountU3E5__1;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CsumU3E5__2;
	RuntimeObject* ___U3CeU3E5__3;
	RuntimeObject* ___U3CU3Es__4;
	int32_t ___U3CU3Es__5;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CvU3E5__6;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CU3Es__7;
	bool ___U3CU3Es__8;
	Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3;
};
struct U3CAverageAwaitAsyncU3Ed__26_1_t4A064A93DEC1BE815476E1B98F2EC9981EC964E5  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_t898AEF8B0AC8B5CB054F91316F69A4739DB2E5B6* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	int64_t ___U3CcountU3E5__1;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CsumU3E5__2;
	RuntimeObject* ___U3CeU3E5__3;
	RuntimeObject* ___U3CU3Es__4;
	int32_t ___U3CU3Es__5;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CvU3E5__6;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CU3Es__7;
	bool ___U3CU3Es__8;
	Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3;
};
struct U3CAverageAwaitAsyncU3Ed__30_1_t1B91FA738692CE65DB747C8606C4EFA4FBC2C97C  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_t9F80A31065CD628F063DA0D192A111706F695666* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	int64_t ___U3CcountU3E5__1;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CsumU3E5__2;
	RuntimeObject* ___U3CeU3E5__3;
	RuntimeObject* ___U3CU3Es__4;
	int32_t ___U3CU3Es__5;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CvU3E5__6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CU3Es__7;
	bool ___U3CU3Es__8;
	Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3;
};
struct U3CAverageAwaitAsyncU3Ed__34_1_t53FE7D4236A524E65C4060CD9DF2F5BD6112ED2A  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_tEBD22D2F4376CEDF9152BDE05B6E363699F0C7E1* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	int64_t ___U3CcountU3E5__1;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CsumU3E5__2;
	RuntimeObject* ___U3CeU3E5__3;
	RuntimeObject* ___U3CU3Es__4;
	int32_t ___U3CU3Es__5;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CvU3E5__6;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CU3Es__7;
	bool ___U3CU3Es__8;
	Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3;
};
struct Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 
{
	UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F ___task;
};
struct Func_2_t02AAAA5ED63E37D8013889ECE551ED5172A9F7A4  : public MulticastDelegate_t
{
};
struct Func_2_tB9099E603733365FA636ABD4F1512E954C883863  : public MulticastDelegate_t
{
};
struct Func_2_t0DE0378A8A90F3B8204450750A771096D0F75A98  : public MulticastDelegate_t
{
};
struct Func_2_tFC0477C87E7518136DEE345DCF44B6ACA22E24F0  : public MulticastDelegate_t
{
};
struct Func_2_tCDF39BBC1094782C50BE631779E8FD895BFEAF32  : public MulticastDelegate_t
{
};
struct Func_2_t041ABB3F33302FF5B428FF832CE110343F4DA4C6  : public MulticastDelegate_t
{
};
struct Func_2_tEBD22D2F4376CEDF9152BDE05B6E363699F0C7E1  : public MulticastDelegate_t
{
};
struct Func_2_tCD782F33543995850D4A4AF7569D83504640F79F  : public MulticastDelegate_t
{
};
struct Func_2_t898AEF8B0AC8B5CB054F91316F69A4739DB2E5B6  : public MulticastDelegate_t
{
};
struct Func_2_t9F80A31065CD628F063DA0D192A111706F695666  : public MulticastDelegate_t
{
};
struct Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C  : public MulticastDelegate_t
{
};
struct Func_2_tD6766C7D6227AC2A45F7EDFC827BDFC58C8EFE78  : public MulticastDelegate_t
{
};
struct Func_2_tF452F3FF30306E919291E498D051B5F208EB38CF  : public MulticastDelegate_t
{
};
struct Func_2_t6561E0DBB0FBFCB8DBFA46F392A86C31706164F5  : public MulticastDelegate_t
{
};
struct Func_2_t04742C32F6BEF8B1199EACA5BD7F68C041603B6D  : public MulticastDelegate_t
{
};
struct Func_2_t844387A4F32860587989B5D1B9F3950D6D5901DE  : public MulticastDelegate_t
{
};
struct Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2  : public MulticastDelegate_t
{
};
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};
struct Func_2_t5ABD904FFCFC84BA711C9261A36E9482990A6CA7  : public MulticastDelegate_t
{
};
struct Func_2_tF36C7D1152BF6807C03112D4A053E5038A13A6EB  : public MulticastDelegate_t
{
};
struct Func_2_t8DB808B3690BFDBD7B936631B430453B90DBBDE7  : public MulticastDelegate_t
{
};
struct Func_2_t08AB71331BE9C65EB982154CBB27F90B5B62A771  : public MulticastDelegate_t
{
};
struct Func_2_tFAB3D8EFCE4F55CAB3F80EABAB10F8226D7FEBF6  : public MulticastDelegate_t
{
};
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};
struct Func_3_tA7E06E01A9E24ADCFD5FDF90F63DB44745325DB6  : public MulticastDelegate_t
{
};
struct Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814  : public MulticastDelegate_t
{
};
struct Func_3_tB356387A25DA85D9F4DDAAEEFD39A96B3F81FA95  : public MulticastDelegate_t
{
};
struct Func_3_t79F461272893123C05C047A343D70B9B775827E4  : public MulticastDelegate_t
{
};
struct Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E  : public MulticastDelegate_t
{
};
struct Func_3_t025EADE05AD46B78D6372153E7AB6141B48C6D40  : public MulticastDelegate_t
{
};
struct Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4  : public MulticastDelegate_t
{
};
struct Func_4_tACF12340039B5BCFBB5ED953C0B2BF68B8F74D25  : public MulticastDelegate_t
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct U3CAverageAwaitAsyncU3Ed__38_1_t033B46F89946CC1CA0F521A8F9086B9E2458454B  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_t041ABB3F33302FF5B428FF832CE110343F4DA4C6* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	int64_t ___U3CcountU3E5__1;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CsumU3E5__2;
	RuntimeObject* ___U3CeU3E5__3;
	RuntimeObject* ___U3CU3Es__4;
	int32_t ___U3CU3Es__5;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CvU3E5__6;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CU3Es__7;
	bool ___U3CU3Es__8;
	Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3;
};
struct Awaitable_1_t7F2FEF7F3E53E010671259DFBDCF40FEA65869CE_StaticFields
{
	ThreadLocal_1_tAC3F42EDBD62D63937FEA3228C049A88854C4C9D* ____pool;
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
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
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


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_gshared_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_gshared_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, bool ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_gshared_inline (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_gshared_inline (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* __this, double ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_gshared_inline (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_gshared_inline (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_gshared (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, double ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_gshared_inline (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_gshared_inline (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_gshared (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, int64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_gshared (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_gshared (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_gshared (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_gshared_inline (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_gshared_inline (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* __this, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_gshared (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7_gshared (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_gshared_inline (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Nullable_1_get_Value_m33574CDAA01061AEA24434F9DE51A5B4F03A18A2_gshared (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_gshared_inline (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_gshared_inline (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_gshared_inline (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* __this, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_gshared_inline (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_gshared_inline (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* __this, float ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_gshared_inline (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_gshared_inline (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_gshared_inline (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 UniTask_1_GetAwaiter_m68E768B22932F4C553E8F96F1DEDC7361DC02133_gshared_inline (UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mFC4A614AA0B1C8D41A05840FAA981FAF10FC99C8_gshared_inline (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_gshared_inline (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 UniTask_1_GetAwaiter_mE4F348E45E23B27DC05E89090C2C334B99FECBD4_gshared_inline (UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mDD8356C2BFB8EBB175763FE2D92A4B0BEBDAEE94_gshared_inline (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_gshared_inline (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_gshared_inline (UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_gshared_inline (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_gshared_inline (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_gshared_inline (UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_gshared_inline (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_gshared_inline (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t8953594D03299DE782894F4A865CED79F2504266 UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_gshared_inline (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_gshared_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_gshared_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_gshared_inline (UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_gshared_inline (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_gshared_inline (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_gshared_inline (UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_gshared_inline (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_gshared_inline (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_gshared_inline (UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_gshared_inline (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_gshared_inline (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E UniTask_1_GetAwaiter_m610A766CD8038A109B21E2F02CF093096F9226D7_gshared_inline (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_gshared_inline (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_gshared_inline (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m65B703CDA0E48F294713CCCF06A7B5AF705D8E1F_gshared_inline (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* __this, UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mD1C383B359BDB954321BC6C44DA1631270CC29A6_gshared_inline (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m6F9092F52BBF30A9F5F0E23DE3EC280EF9EB161F_gshared_inline (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88* __this, UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m9A2BC9ECAC9AB86D3B937A70152799E4B8A45F04_gshared_inline (UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m8581AFDBBB66C89C57A4AF21C6DA72286C674EEE_gshared_inline (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8* __this, UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mD2B1B68F55469700BFCCE4B030BB08CDEFCFB5BE_gshared_inline (UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m43ADCACEE034092BE0485AC2039932F41B068645_gshared_inline (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9* __this, UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mD3993C707FF463A5E5150B823D0F2C2F63D38AED_gshared_inline (UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m1A781E603FA4535B04661E93F415BD20AD7E562B_gshared_inline (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB* __this, UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m668DE5FADE457B216736782DC297E4C3B141BC19_gshared_inline (UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m2D382159CB5D690EEEDB435E6183DBDBD9560CA3_gshared_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m688D534E5DE535F713C9D2C84744BB51F95416F5_gshared_inline (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mB257E1F06754BE00907B9F223E1CED109BE0A9E9_gshared_inline (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* __this, UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m5810EA6A8A912CF428FDABFDD39E978F898ABCF6_gshared_inline (UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m9D5EF23B6F3F4362E6DA714FE205E179615A6485_gshared_inline (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* __this, UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m364E955D88F0ED41DD3142E30E5C1FC3992A4320_gshared_inline (UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m411324A17AA6E44DD7F24A60FF2A75F2E7F27F53_gshared_inline (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* __this, UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m0DC9F6711B39ED08865F0CF67538D05129880C94_gshared_inline (UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m2F2F413B4B8E320AC83D464DE19E5B81D8616185_gshared_inline (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* __this, UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m621A3ED628D31F42C69A04584E93A8A02E381117_gshared_inline (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803 (Exception_t* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330 (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline (const RuntimeMethod* method) ;
inline void AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, bool ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, bool, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_gshared_inline)(__this, ___0_result, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
inline void AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_inline (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_inline (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* __this, double ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, double, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_gshared_inline)(__this, ___0_result, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Addition_m878AC5E15D13F205BCB6AE9747B2C0D950BD2EF7 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_d1, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___1_d2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Implicit_m8F9A38760D01B23E6DFF77EA760CCE5111F3656D (int64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Division_mA0BD25988CA8010A3F8EA2F6A534F9F2D812D2AC (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_d1, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___1_d2, const RuntimeMethod* method) ;
inline void AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_inline (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_inline (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_gshared_inline)(__this, ___0_result, method);
}
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared)(__this, ___0_value, method);
}
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
inline int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared)(__this, method);
}
inline int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline)(__this, method);
}
inline void Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, double ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, double, const RuntimeMethod*))Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_gshared)(__this, ___0_value, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_inline (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_inline (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_gshared_inline)(__this, ___0_result, method);
}
inline void Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1 (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, int64_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, int64_t, const RuntimeMethod*))Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_gshared)(__this, ___0_value, method);
}
inline bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, const RuntimeMethod*))Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline)(__this, method);
}
inline int64_t Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, const RuntimeMethod*))Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_gshared)(__this, method);
}
inline int64_t Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_gshared_inline)(__this, method);
}
inline void Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420 (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, float ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, float, const RuntimeMethod*))Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_gshared)(__this, ___0_value, method);
}
inline bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline)(__this, method);
}
inline float Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_gshared)(__this, method);
}
inline float Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_gshared_inline)(__this, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_inline (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_inline (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* __this, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_gshared_inline)(__this, ___0_result, method);
}
inline bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline)(__this, method);
}
inline double Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1 (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  double (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_gshared)(__this, method);
}
inline double Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  double (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_gshared_inline)(__this, method);
}
inline void Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7 (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F, const RuntimeMethod*))Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7_gshared)(__this, ___0_value, method);
}
inline bool Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*, const RuntimeMethod*))Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_gshared_inline)(__this, method);
}
inline Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Nullable_1_get_Value_m33574CDAA01061AEA24434F9DE51A5B4F03A18A2 (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, const RuntimeMethod* method)
{
	return ((  Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F (*) (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*, const RuntimeMethod*))Nullable_1_get_Value_m33574CDAA01061AEA24434F9DE51A5B4F03A18A2_gshared)(__this, method);
}
inline Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_inline (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, const RuntimeMethod* method)
{
	return ((  Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F (*) (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_gshared_inline)(__this, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_inline (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_inline (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* __this, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_gshared_inline)(__this, ___0_result, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_inline (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_inline (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* __this, float ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, float, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_gshared_inline)(__this, ___0_result, method);
}
inline Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_inline (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D (*) (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1*, const RuntimeMethod*))UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_gshared_inline)(__this, method);
}
inline bool Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_inline (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D*, const RuntimeMethod*))Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_gshared_inline)(__this, method);
}
inline float Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_inline (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D*, const RuntimeMethod*))Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_gshared_inline)(__this, method);
}
inline Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 UniTask_1_GetAwaiter_m68E768B22932F4C553E8F96F1DEDC7361DC02133_inline (UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 (*) (UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C*, const RuntimeMethod*))UniTask_1_GetAwaiter_m68E768B22932F4C553E8F96F1DEDC7361DC02133_gshared_inline)(__this, method);
}
inline bool Awaiter_get_IsCompleted_mFC4A614AA0B1C8D41A05840FAA981FAF10FC99C8_inline (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88*, const RuntimeMethod*))Awaiter_get_IsCompleted_mFC4A614AA0B1C8D41A05840FAA981FAF10FC99C8_gshared_inline)(__this, method);
}
inline double Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_inline (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88* __this, const RuntimeMethod* method)
{
	return ((  double (*) (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88*, const RuntimeMethod*))Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_gshared_inline)(__this, method);
}
inline Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 UniTask_1_GetAwaiter_mE4F348E45E23B27DC05E89090C2C334B99FECBD4_inline (UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 (*) (UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3*, const RuntimeMethod*))UniTask_1_GetAwaiter_mE4F348E45E23B27DC05E89090C2C334B99FECBD4_gshared_inline)(__this, method);
}
inline bool Awaiter_get_IsCompleted_mDD8356C2BFB8EBB175763FE2D92A4B0BEBDAEE94_inline (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8*, const RuntimeMethod*))Awaiter_get_IsCompleted_mDD8356C2BFB8EBB175763FE2D92A4B0BEBDAEE94_gshared_inline)(__this, method);
}
inline Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_inline (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8* __this, const RuntimeMethod* method)
{
	return ((  Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F (*) (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8*, const RuntimeMethod*))Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_gshared_inline)(__this, method);
}
inline Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_inline (UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 (*) (UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05*, const RuntimeMethod*))UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_gshared_inline)(__this, method);
}
inline bool Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_inline (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9*, const RuntimeMethod*))Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_gshared_inline)(__this, method);
}
inline Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_inline (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9* __this, const RuntimeMethod* method)
{
	return ((  Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 (*) (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9*, const RuntimeMethod*))Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_gshared_inline)(__this, method);
}
inline Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_inline (UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB (*) (UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C*, const RuntimeMethod*))UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_gshared_inline)(__this, method);
}
inline bool Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_inline (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB*, const RuntimeMethod*))Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_gshared_inline)(__this, method);
}
inline Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_inline (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB* __this, const RuntimeMethod* method)
{
	return ((  Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 (*) (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB*, const RuntimeMethod*))Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_gshared_inline)(__this, method);
}
inline Awaiter_t8953594D03299DE782894F4A865CED79F2504266 UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_inline (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_t8953594D03299DE782894F4A865CED79F2504266 (*) (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48*, const RuntimeMethod*))UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_gshared_inline)(__this, method);
}
inline bool Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t8953594D03299DE782894F4A865CED79F2504266*, const RuntimeMethod*))Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_gshared_inline)(__this, method);
}
inline int32_t Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Awaiter_t8953594D03299DE782894F4A865CED79F2504266*, const RuntimeMethod*))Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_gshared_inline)(__this, method);
}
inline Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_inline (UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 (*) (UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46*, const RuntimeMethod*))UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_gshared_inline)(__this, method);
}
inline bool Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_inline (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91*, const RuntimeMethod*))Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_gshared_inline)(__this, method);
}
inline Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_inline (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* __this, const RuntimeMethod* method)
{
	return ((  Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 (*) (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91*, const RuntimeMethod*))Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_gshared_inline)(__this, method);
}
inline Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_inline (UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 (*) (UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E*, const RuntimeMethod*))UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_gshared_inline)(__this, method);
}
inline bool Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_inline (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0*, const RuntimeMethod*))Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_gshared_inline)(__this, method);
}
inline Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_inline (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* __this, const RuntimeMethod* method)
{
	return ((  Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 (*) (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0*, const RuntimeMethod*))Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_gshared_inline)(__this, method);
}
inline Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_inline (UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 (*) (UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F*, const RuntimeMethod*))UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_gshared_inline)(__this, method);
}
inline bool Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_inline (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51*, const RuntimeMethod*))Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_gshared_inline)(__this, method);
}
inline Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_inline (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* __this, const RuntimeMethod* method)
{
	return ((  Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB (*) (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51*, const RuntimeMethod*))Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_gshared_inline)(__this, method);
}
inline Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E UniTask_1_GetAwaiter_m610A766CD8038A109B21E2F02CF093096F9226D7_inline (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E (*) (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72*, const RuntimeMethod*))UniTask_1_GetAwaiter_m610A766CD8038A109B21E2F02CF093096F9226D7_gshared_inline)(__this, method);
}
inline bool Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_inline (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E*, const RuntimeMethod*))Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_gshared_inline)(__this, method);
}
inline int64_t Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_inline (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E*, const RuntimeMethod*))Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___0_status, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*, const RuntimeMethod*))Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_gshared_inline)(__this, ___0_task, method);
}
inline int32_t UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*, const RuntimeMethod*))UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_gshared_inline)(__this, method);
}
inline void Awaiter__ctor_m65B703CDA0E48F294713CCCF06A7B5AF705D8E1F_inline (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* __this, UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D*, UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1*, const RuntimeMethod*))Awaiter__ctor_m65B703CDA0E48F294713CCCF06A7B5AF705D8E1F_gshared_inline)(__this, ___0_task, method);
}
inline int32_t UniTask_1_get_Status_mD1C383B359BDB954321BC6C44DA1631270CC29A6_inline (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1*, const RuntimeMethod*))UniTask_1_get_Status_mD1C383B359BDB954321BC6C44DA1631270CC29A6_gshared_inline)(__this, method);
}
inline void Awaiter__ctor_m6F9092F52BBF30A9F5F0E23DE3EC280EF9EB161F_inline (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88* __this, UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88*, UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C*, const RuntimeMethod*))Awaiter__ctor_m6F9092F52BBF30A9F5F0E23DE3EC280EF9EB161F_gshared_inline)(__this, ___0_task, method);
}
inline int32_t UniTask_1_get_Status_m9A2BC9ECAC9AB86D3B937A70152799E4B8A45F04_inline (UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C*, const RuntimeMethod*))UniTask_1_get_Status_m9A2BC9ECAC9AB86D3B937A70152799E4B8A45F04_gshared_inline)(__this, method);
}
inline void Awaiter__ctor_m8581AFDBBB66C89C57A4AF21C6DA72286C674EEE_inline (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8* __this, UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8*, UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3*, const RuntimeMethod*))Awaiter__ctor_m8581AFDBBB66C89C57A4AF21C6DA72286C674EEE_gshared_inline)(__this, ___0_task, method);
}
inline int32_t UniTask_1_get_Status_mD2B1B68F55469700BFCCE4B030BB08CDEFCFB5BE_inline (UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3*, const RuntimeMethod*))UniTask_1_get_Status_mD2B1B68F55469700BFCCE4B030BB08CDEFCFB5BE_gshared_inline)(__this, method);
}
inline void Awaiter__ctor_m43ADCACEE034092BE0485AC2039932F41B068645_inline (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9* __this, UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9*, UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05*, const RuntimeMethod*))Awaiter__ctor_m43ADCACEE034092BE0485AC2039932F41B068645_gshared_inline)(__this, ___0_task, method);
}
inline int32_t UniTask_1_get_Status_mD3993C707FF463A5E5150B823D0F2C2F63D38AED_inline (UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05*, const RuntimeMethod*))UniTask_1_get_Status_mD3993C707FF463A5E5150B823D0F2C2F63D38AED_gshared_inline)(__this, method);
}
inline void Awaiter__ctor_m1A781E603FA4535B04661E93F415BD20AD7E562B_inline (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB* __this, UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB*, UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C*, const RuntimeMethod*))Awaiter__ctor_m1A781E603FA4535B04661E93F415BD20AD7E562B_gshared_inline)(__this, ___0_task, method);
}
inline int32_t UniTask_1_get_Status_m668DE5FADE457B216736782DC297E4C3B141BC19_inline (UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C*, const RuntimeMethod*))UniTask_1_get_Status_m668DE5FADE457B216736782DC297E4C3B141BC19_gshared_inline)(__this, method);
}
inline void Awaiter__ctor_m2D382159CB5D690EEEDB435E6183DBDBD9560CA3_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t8953594D03299DE782894F4A865CED79F2504266*, UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48*, const RuntimeMethod*))Awaiter__ctor_m2D382159CB5D690EEEDB435E6183DBDBD9560CA3_gshared_inline)(__this, ___0_task, method);
}
inline int32_t UniTask_1_get_Status_m688D534E5DE535F713C9D2C84744BB51F95416F5_inline (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48*, const RuntimeMethod*))UniTask_1_get_Status_m688D534E5DE535F713C9D2C84744BB51F95416F5_gshared_inline)(__this, method);
}
inline void Awaiter__ctor_mB257E1F06754BE00907B9F223E1CED109BE0A9E9_inline (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* __this, UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91*, UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46*, const RuntimeMethod*))Awaiter__ctor_mB257E1F06754BE00907B9F223E1CED109BE0A9E9_gshared_inline)(__this, ___0_task, method);
}
inline int32_t UniTask_1_get_Status_m5810EA6A8A912CF428FDABFDD39E978F898ABCF6_inline (UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46*, const RuntimeMethod*))UniTask_1_get_Status_m5810EA6A8A912CF428FDABFDD39E978F898ABCF6_gshared_inline)(__this, method);
}
inline void Awaiter__ctor_m9D5EF23B6F3F4362E6DA714FE205E179615A6485_inline (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* __this, UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0*, UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E*, const RuntimeMethod*))Awaiter__ctor_m9D5EF23B6F3F4362E6DA714FE205E179615A6485_gshared_inline)(__this, ___0_task, method);
}
inline int32_t UniTask_1_get_Status_m364E955D88F0ED41DD3142E30E5C1FC3992A4320_inline (UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E*, const RuntimeMethod*))UniTask_1_get_Status_m364E955D88F0ED41DD3142E30E5C1FC3992A4320_gshared_inline)(__this, method);
}
inline void Awaiter__ctor_m411324A17AA6E44DD7F24A60FF2A75F2E7F27F53_inline (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* __this, UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51*, UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F*, const RuntimeMethod*))Awaiter__ctor_m411324A17AA6E44DD7F24A60FF2A75F2E7F27F53_gshared_inline)(__this, ___0_task, method);
}
inline int32_t UniTask_1_get_Status_m0DC9F6711B39ED08865F0CF67538D05129880C94_inline (UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F*, const RuntimeMethod*))UniTask_1_get_Status_m0DC9F6711B39ED08865F0CF67538D05129880C94_gshared_inline)(__this, method);
}
inline void Awaiter__ctor_m2F2F413B4B8E320AC83D464DE19E5B81D8616185_inline (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* __this, UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E*, UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72*, const RuntimeMethod*))Awaiter__ctor_m2F2F413B4B8E320AC83D464DE19E5B81D8616185_gshared_inline)(__this, ___0_task, method);
}
inline int32_t UniTask_1_get_Status_m621A3ED628D31F42C69A04584E93A8A02E381117_inline (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72*, const RuntimeMethod*))UniTask_1_get_Status_m621A3ED628D31F42C69A04584E93A8A02E381117_gshared_inline)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAggregateAsyncU3Ed__2_3__ctor_m7F32A947902C970943B8AFAB927DCE194E7B1A5D_gshared (U3CAggregateAsyncU3Ed__2_3_t53B01CBA4B6238A2F5D21D1E4FEFF0F2248CBDA3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAggregateAsyncU3Ed__2_3_MoveNext_mCEA9D60DFADBDC075674FE6A9DEDAA729A8FB310_gshared (U3CAggregateAsyncU3Ed__2_3_t53B01CBA4B6238A2F5D21D1E4FEFF0F2248CBDA3* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TResult_t591F7BA346B0ACB8E1CF68542D7769E7A265EAF0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
	const uint32_t SizeOf_TAccumulate_t03654349A5E6BC508CBC69A9BE187A3B4C986C3E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const uint32_t SizeOf_TSource_t75412BF96D28533729600349732A397195B17B51 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t75412BF96D28533729600349732A397195B17B51);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TAccumulate_t03654349A5E6BC508CBC69A9BE187A3B4C986C3E);
	const Il2CppFullySharedGenericAny L_9 = L_7;
	const Il2CppFullySharedGenericAny L_25 = L_7;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TAccumulate_t03654349A5E6BC508CBC69A9BE187A3B4C986C3E);
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_TResult_t591F7BA346B0ACB8E1CF68542D7769E7A265EAF0);
	const Il2CppFullySharedGenericAny L_48 = L_26;
	const Il2CppFullySharedGenericAny L_51 = L_26;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TResult_t591F7BA346B0ACB8E1CF68542D7769E7A265EAF0);
	memset(V_1, 0, SizeOf_TResult_t591F7BA346B0ACB8E1CF68542D7769E7A265EAF0);
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CAggregateAsyncU3Ed__2_3_t53B01CBA4B6238A2F5D21D1E4FEFF0F2248CBDA3* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t* V_10 = NULL;
	int32_t V_11 = 0;
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
			goto IL_017d_1;
		}

IL_0019_1:
		{
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_5);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), NULL);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), 0);
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
				goto IL_00c0_2;
			}

IL_0047_2:
			{
				il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3)), SizeOf_TAccumulate_t03654349A5E6BC508CBC69A9BE187A3B4C986C3E);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_7, SizeOf_TAccumulate_t03654349A5E6BC508CBC69A9BE187A3B4C986C3E);
				goto IL_007a_2;
			}

IL_0056_2:
			{
				Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* L_8 = *(Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
				il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)), SizeOf_TAccumulate_t03654349A5E6BC508CBC69A9BE187A3B4C986C3E);
				RuntimeObject* L_10 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				NullCheck(L_8);
				InvokerActionInvoker3< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_9: *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_12, SizeOf_TAccumulate_t03654349A5E6BC508CBC69A9BE187A3B4C986C3E);
			}

IL_007a_2:
			{
				RuntimeObject* L_13 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck(L_13);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_14;
				L_14 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_13);
				V_4 = L_14;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_15;
				L_15 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_3 = L_15;
				bool L_16;
				L_16 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_3), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_00dc_2;
				}
			}
			{
				int32_t L_17 = 0;
				V_0 = L_17;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_17);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_18 = V_3;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_18);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAggregateAsyncU3Ed__2_3_t53B01CBA4B6238A2F5D21D1E4FEFF0F2248CBDA3**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_023e;
			}

IL_00c0_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_19 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
				V_3 = L_19;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_20 = (-1);
				V_0 = L_20;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_20);
			}

IL_00dc_2:
			{
				bool L_21;
				L_21 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_21);
				bool L_22 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12));
				V_2 = L_22;
				bool L_23 = V_2;
				if (L_23)
				{
					goto IL_0056_2;
				}
			}
			{
				Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_24 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				il2cpp_codegen_memcpy(L_25, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)), SizeOf_TAccumulate_t03654349A5E6BC508CBC69A9BE187A3B4C986C3E);
				NullCheck(L_24);
				InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), L_24, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_25: *(void**)L_25), (Il2CppFullySharedGenericAny*)L_26);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_26, SizeOf_TResult_t591F7BA346B0ACB8E1CF68542D7769E7A265EAF0);
				goto IL_010f_2;
			}

IL_010f_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), 1);
				goto IL_0124_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0118_1;
			}
			throw e;
		}

CATCH_0118_1:
		{
			RuntimeObject* L_27 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_6 = L_27;
			RuntimeObject* L_28 = V_6;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_28);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0124_1;
		}

IL_0124_1:
		{
			RuntimeObject* L_29 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_29) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_30 = V_7;
			if (!L_30)
			{
				goto IL_01a3_1;
			}
		}
		{
			RuntimeObject* L_31 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			NullCheck((RuntimeObject*)L_31);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_32;
			L_32 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_31);
			V_9 = L_32;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_33;
			L_33 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_9), NULL);
			V_8 = L_33;
			bool L_34;
			L_34 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_8), NULL);
			if (L_34)
			{
				goto IL_019a_1;
			}
		}
		{
			int32_t L_35 = 1;
			V_0 = L_35;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_35);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36 = V_8;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14), L_36);
			V_5 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAggregateAsyncU3Ed__2_3_t53B01CBA4B6238A2F5D21D1E4FEFF0F2248CBDA3**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_8), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 17));
			goto IL_023e;
		}

IL_017d_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_37 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
			V_8 = L_37;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_38 = (-1);
			V_0 = L_38;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_38);
		}

IL_019a_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_8), NULL);
		}

IL_01a3_1:
		{
			RuntimeObject* L_39 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			V_6 = L_39;
			RuntimeObject* L_40 = V_6;
			if (!L_40)
			{
				goto IL_01cd_1;
			}
		}
		{
			RuntimeObject* L_41 = V_6;
			V_10 = ((Exception_t*)IsInstClass((RuntimeObject*)L_41, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_42 = V_10;
			if (L_42)
			{
				goto IL_01c0_1;
			}
		}
		{
			RuntimeObject* L_43 = V_6;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, method);
		}

IL_01c0_1:
		{
			Exception_t* L_44 = V_10;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_45;
			L_45 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_44, NULL);
			NullCheck(L_45);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_45, NULL);
		}

IL_01cd_1:
		{
			int32_t L_46 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
			V_11 = L_46;
			int32_t L_47 = V_11;
			if ((((int32_t)L_47) == ((int32_t)1)))
			{
				goto IL_01dc_1;
			}
		}
		{
			goto IL_01e5_1;
		}

IL_01dc_1:
		{
			il2cpp_codegen_memcpy(L_48, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TResult_t591F7BA346B0ACB8E1CF68542D7769E7A265EAF0);
			il2cpp_codegen_memcpy(V_1, L_48, SizeOf_TResult_t591F7BA346B0ACB8E1CF68542D7769E7A265EAF0);
			goto IL_0222;
		}

IL_01e5_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)))), SizeOf_TResult_t591F7BA346B0ACB8E1CF68542D7769E7A265EAF0);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), (RuntimeObject*)NULL);
			goto IL_0222;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0201;
		}
		throw e;
	}

CATCH_0201:
	{
		Exception_t* L_49 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_10 = L_49;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), (RuntimeObject*)NULL);
		Exception_t* L_50 = V_10;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_50, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_023e;
	}

IL_0222:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_51, V_1, SizeOf_TResult_t591F7BA346B0ACB8E1CF68542D7769E7A265EAF0);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)), il2cpp_rgctx_method(method->klass->rgctx_data, 19), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)) ? L_51: *(void**)L_51));
	}

IL_023e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAggregateAsyncU3Ed__2_3_SetStateMachine_mDAE099593AE1466D4A99BD81A1C039DA4B56A8E0_gshared (U3CAggregateAsyncU3Ed__2_3_t53B01CBA4B6238A2F5D21D1E4FEFF0F2248CBDA3* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAggregateAwaitAsyncU3Ed__3_1__ctor_m3268E0E77D123CE54150067F4A7E6F5E9CBCF8D5_gshared (U3CAggregateAwaitAsyncU3Ed__3_1_tFD8CCD48951F976147B284BA20BF8B7AE6485EB2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAggregateAwaitAsyncU3Ed__3_1_MoveNext_m1C3EE311AD5635552873132599A39D408DBA9FAE_gshared (U3CAggregateAwaitAsyncU3Ed__3_1_tFD8CCD48951F976147B284BA20BF8B7AE6485EB2* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_tFE97843F14FDB941FF60ACF01164E33CA2A7804A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const uint32_t SizeOf_Awaiter_tDCF89F9FE2DADA216F844ED9D02178D61691DB66 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
	const uint32_t SizeOf_UniTask_1_t748AEB0C06D6AEC490C870962AAFDD8A8385133D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_TSource_tFE97843F14FDB941FF60ACF01164E33CA2A7804A);
	const Il2CppFullySharedGenericAny L_22 = L_19;
	const Il2CppFullySharedGenericAny L_32 = L_19;
	const Il2CppFullySharedGenericAny L_45 = L_19;
	const Il2CppFullySharedGenericAny L_67 = L_19;
	const Il2CppFullySharedGenericAny L_70 = L_19;
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_TSource_tFE97843F14FDB941FF60ACF01164E33CA2A7804A);
	const Il2CppFullySharedGenericAny L_33 = L_24;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_26 = alloca(SizeOf_Awaiter_tDCF89F9FE2DADA216F844ED9D02178D61691DB66);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_29 = L_26;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_30 = L_26;
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_25 = alloca(SizeOf_UniTask_1_t748AEB0C06D6AEC490C870962AAFDD8A8385133D);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tFE97843F14FDB941FF60ACF01164E33CA2A7804A);
	memset(V_1, 0, SizeOf_TSource_tFE97843F14FDB941FF60ACF01164E33CA2A7804A);
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CAggregateAwaitAsyncU3Ed__3_1_tFD8CCD48951F976147B284BA20BF8B7AE6485EB2* V_5 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_6 = alloca(SizeOf_Awaiter_tDCF89F9FE2DADA216F844ED9D02178D61691DB66);
	memset(V_6, 0, SizeOf_Awaiter_tDCF89F9FE2DADA216F844ED9D02178D61691DB66);
	UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 V_7 = alloca(SizeOf_UniTask_1_t748AEB0C06D6AEC490C870962AAFDD8A8385133D);
	memset(V_7, 0, SizeOf_UniTask_1_t748AEB0C06D6AEC490C870962AAFDD8A8385133D);
	bool V_8 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_9;
	memset((&V_9), 0, sizeof(V_9));
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_12;
	memset((&V_12), 0, sizeof(V_12));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_13;
	memset((&V_13), 0, sizeof(V_13));
	Exception_t* V_14 = NULL;
	int32_t V_15 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)2))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)3)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0040_1;
		}

IL_0015_1:
		{
			goto IL_0296_1;
		}

IL_001a_1:
		{
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_5);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), NULL);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), 0);
		}

IL_0040_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				switch (L_6)
				{
					case 0:
					{
						goto IL_0055_2;
					}
					case 1:
					{
						goto IL_0057_2;
					}
					case 2:
					{
						goto IL_005c_2;
					}
				}
			}
			{
				goto IL_0061_2;
			}

IL_0055_2:
			{
				goto IL_00a8_2;
			}

IL_0057_2:
			{
				goto IL_0156_2;
			}

IL_005c_2:
			{
				goto IL_01e1_2;
			}

IL_0061_2:
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
					goto IL_00c4_2;
				}
			}
			{
				int32_t L_11 = 0;
				V_0 = L_11;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_11);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_12 = V_3;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_12);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAggregateAwaitAsyncU3Ed__3_1_tFD8CCD48951F976147B284BA20BF8B7AE6485EB2**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				goto IL_0357;
			}

IL_00a8_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_13 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
				V_3 = L_13;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_14 = (-1);
				V_0 = L_14;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_14);
			}

IL_00c4_2:
			{
				bool L_15;
				L_15 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_15);
				bool L_16 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
				V_2 = L_16;
				bool L_17 = V_2;
				if (!L_17)
				{
					goto IL_00f0_2;
				}
			}
			{
				RuntimeObject* L_18 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				NullCheck(L_18);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_18, (Il2CppFullySharedGenericAny*)L_19);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_19, SizeOf_TSource_tFE97843F14FDB941FF60ACF01164E33CA2A7804A);
				goto IL_00f7_2;
			}

IL_00f0_2:
			{
				Exception_t* L_20;
				L_20 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
			}

IL_00f7_2:
			{
				goto IL_0199_2;
			}

IL_00fc_2:
			{
				Func_3_t025EADE05AD46B78D6372153E7AB6141B48C6D40* L_21 = *(Func_3_t025EADE05AD46B78D6372153E7AB6141B48C6D40**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_TSource_tFE97843F14FDB941FF60ACF01164E33CA2A7804A);
				RuntimeObject* L_23 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				NullCheck(L_23);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_23, (Il2CppFullySharedGenericAny*)L_24);
				NullCheck(L_21);
				InvokerActionInvoker3< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10)) ? L_22: *(void**)L_22), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10)) ? L_24: *(void**)L_24), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_25);
				il2cpp_codegen_memcpy(V_7, L_25, SizeOf_UniTask_1_t748AEB0C06D6AEC490C870962AAFDD8A8385133D);
				InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)V_7, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_26);
				il2cpp_codegen_memcpy(V_6, L_26, SizeOf_Awaiter_tDCF89F9FE2DADA216F844ED9D02178D61691DB66);
				bool L_27;
				L_27 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_6, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
				if (L_27)
				{
					goto IL_0173_2;
				}
			}
			{
				int32_t L_28 = 1;
				V_0 = L_28;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_28);
				il2cpp_codegen_memcpy(L_29, V_6, SizeOf_Awaiter_tDCF89F9FE2DADA216F844ED9D02178D61691DB66);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14), L_29, SizeOf_Awaiter_tDCF89F9FE2DADA216F844ED9D02178D61691DB66);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CAggregateAwaitAsyncU3Ed__3_1_tFD8CCD48951F976147B284BA20BF8B7AE6485EB2**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_6, (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
				goto IL_0357;
			}

IL_0156_2:
			{
				il2cpp_codegen_memcpy(L_30, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14)), SizeOf_Awaiter_tDCF89F9FE2DADA216F844ED9D02178D61691DB66);
				il2cpp_codegen_memcpy(V_6, L_30, SizeOf_Awaiter_tDCF89F9FE2DADA216F844ED9D02178D61691DB66);
				il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14)))), SizeOf_Awaiter_tDCF89F9FE2DADA216F844ED9D02178D61691DB66);
				int32_t L_31 = (-1);
				V_0 = L_31;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_31);
			}

IL_0173_2:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_6, (Il2CppFullySharedGenericAny*)L_32);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_32, SizeOf_TSource_tFE97843F14FDB941FF60ACF01164E33CA2A7804A);
				il2cpp_codegen_memcpy(L_33, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)), SizeOf_TSource_tFE97843F14FDB941FF60ACF01164E33CA2A7804A);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_33, SizeOf_TSource_tFE97843F14FDB941FF60ACF01164E33CA2A7804A);
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)))), SizeOf_TSource_tFE97843F14FDB941FF60ACF01164E33CA2A7804A);
			}

IL_0199_2:
			{
				RuntimeObject* L_34 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				NullCheck(L_34);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_35;
				L_35 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_34);
				V_4 = L_35;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_36;
				L_36 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_9 = L_36;
				bool L_37;
				L_37 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_9), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_37)
				{
					goto IL_01fe_2;
				}
			}
			{
				int32_t L_38 = 2;
				V_0 = L_38;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_38);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_39 = V_9;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_39);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAggregateAwaitAsyncU3Ed__3_1_tFD8CCD48951F976147B284BA20BF8B7AE6485EB2**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_9), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				goto IL_0357;
			}

IL_01e1_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_40 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
				V_9 = L_40;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_41 = (-1);
				V_0 = L_41;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_41);
			}

IL_01fe_2:
			{
				bool L_42;
				L_42 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_9), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_42);
				bool L_43 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12));
				V_8 = L_43;
				bool L_44 = V_8;
				if (L_44)
				{
					goto IL_00fc_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_45, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_TSource_tFE97843F14FDB941FF60ACF01164E33CA2A7804A);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_45, SizeOf_TSource_tFE97843F14FDB941FF60ACF01164E33CA2A7804A);
				goto IL_0228_2;
			}

IL_0228_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), 1);
				goto IL_023d_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0231_1;
			}
			throw e;
		}

CATCH_0231_1:
		{
			RuntimeObject* L_46 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_10 = L_46;
			RuntimeObject* L_47 = V_10;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_47);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_023d_1;
		}

IL_023d_1:
		{
			RuntimeObject* L_48 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
			V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_48) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_49 = V_11;
			if (!L_49)
			{
				goto IL_02bc_1;
			}
		}
		{
			RuntimeObject* L_50 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
			NullCheck((RuntimeObject*)L_50);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_51;
			L_51 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_50);
			V_13 = L_51;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_52;
			L_52 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_13), NULL);
			V_12 = L_52;
			bool L_53;
			L_53 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_12), NULL);
			if (L_53)
			{
				goto IL_02b3_1;
			}
		}
		{
			int32_t L_54 = 3;
			V_0 = L_54;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_54);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_55 = V_12;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15), L_55);
			V_5 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAggregateAwaitAsyncU3Ed__3_1_tFD8CCD48951F976147B284BA20BF8B7AE6485EB2**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_12), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
			goto IL_0357;
		}

IL_0296_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_56 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15));
			V_12 = L_56;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_57 = (-1);
			V_0 = L_57;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_57);
		}

IL_02b3_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_12), NULL);
		}

IL_02bc_1:
		{
			RuntimeObject* L_58 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			V_10 = L_58;
			RuntimeObject* L_59 = V_10;
			if (!L_59)
			{
				goto IL_02e6_1;
			}
		}
		{
			RuntimeObject* L_60 = V_10;
			V_14 = ((Exception_t*)IsInstClass((RuntimeObject*)L_60, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_61 = V_14;
			if (L_61)
			{
				goto IL_02d9_1;
			}
		}
		{
			RuntimeObject* L_62 = V_10;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_62, method);
		}

IL_02d9_1:
		{
			Exception_t* L_63 = V_14;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_64;
			L_64 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_63, NULL);
			NullCheck(L_64);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_64, NULL);
		}

IL_02e6_1:
		{
			int32_t L_65 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_15 = L_65;
			int32_t L_66 = V_15;
			if ((((int32_t)L_66) == ((int32_t)1)))
			{
				goto IL_02f5_1;
			}
		}
		{
			goto IL_02fe_1;
		}

IL_02f5_1:
		{
			il2cpp_codegen_memcpy(L_67, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8)), SizeOf_TSource_tFE97843F14FDB941FF60ACF01164E33CA2A7804A);
			il2cpp_codegen_memcpy(V_1, L_67, SizeOf_TSource_tFE97843F14FDB941FF60ACF01164E33CA2A7804A);
			goto IL_033b;
		}

IL_02fe_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8)))), SizeOf_TSource_tFE97843F14FDB941FF60ACF01164E33CA2A7804A);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), (RuntimeObject*)NULL);
			goto IL_033b;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_031a;
		}
		throw e;
	}

CATCH_031a:
	{
		Exception_t* L_68 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_14 = L_68;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), (RuntimeObject*)NULL);
		Exception_t* L_69 = V_14;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_69, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0357;
	}

IL_033b:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_70, V_1, SizeOf_TSource_tFE97843F14FDB941FF60ACF01164E33CA2A7804A);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)), il2cpp_rgctx_method(method->klass->rgctx_data, 24), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10)) ? L_70: *(void**)L_70));
	}

IL_0357:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAggregateAwaitAsyncU3Ed__3_1_SetStateMachine_m80D7EBAC6236E78CA90BE26A5252A50E30B58B13_gshared (U3CAggregateAwaitAsyncU3Ed__3_1_tFD8CCD48951F976147B284BA20BF8B7AE6485EB2* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAggregateAwaitAsyncU3Ed__4_2__ctor_mE77951F273253F62B0ABC1BA7DE449947B5E6164_gshared (U3CAggregateAwaitAsyncU3Ed__4_2_t3A8545F883C47270A41BD33A992F9E8FEAFBC6DC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAggregateAwaitAsyncU3Ed__4_2_MoveNext_mE07E852FC689D27CE7BE7D34E51C1E36C5C67B7F_gshared (U3CAggregateAwaitAsyncU3Ed__4_2_t3A8545F883C47270A41BD33A992F9E8FEAFBC6DC* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TAccumulate_t7AC0FAD5E0D0871FC6A9280A537B7A1D0335F5BD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const uint32_t SizeOf_Awaiter_t8E1B0F2F2DAABCB16BC195477F0BC749E1ED9153 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const uint32_t SizeOf_UniTask_1_tDE9CC44F3ECB6A215BA094047140795979ADFB02 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const uint32_t SizeOf_TSource_tEDD0E339E2D78DEC03FEC9A19C563A24140C7D98 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_tEDD0E339E2D78DEC03FEC9A19C563A24140C7D98);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TAccumulate_t7AC0FAD5E0D0871FC6A9280A537B7A1D0335F5BD);
	const Il2CppFullySharedGenericAny L_10 = L_8;
	const Il2CppFullySharedGenericAny L_20 = L_8;
	const Il2CppFullySharedGenericAny L_33 = L_8;
	const Il2CppFullySharedGenericAny L_55 = L_8;
	const Il2CppFullySharedGenericAny L_58 = L_8;
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_TAccumulate_t7AC0FAD5E0D0871FC6A9280A537B7A1D0335F5BD);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_14 = alloca(SizeOf_Awaiter_t8E1B0F2F2DAABCB16BC195477F0BC749E1ED9153);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_17 = L_14;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_18 = L_14;
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_13 = alloca(SizeOf_UniTask_1_tDE9CC44F3ECB6A215BA094047140795979ADFB02);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TAccumulate_t7AC0FAD5E0D0871FC6A9280A537B7A1D0335F5BD);
	memset(V_1, 0, SizeOf_TAccumulate_t7AC0FAD5E0D0871FC6A9280A537B7A1D0335F5BD);
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_2 = alloca(SizeOf_Awaiter_t8E1B0F2F2DAABCB16BC195477F0BC749E1ED9153);
	memset(V_2, 0, SizeOf_Awaiter_t8E1B0F2F2DAABCB16BC195477F0BC749E1ED9153);
	UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 V_3 = alloca(SizeOf_UniTask_1_tDE9CC44F3ECB6A215BA094047140795979ADFB02);
	memset(V_3, 0, SizeOf_UniTask_1_tDE9CC44F3ECB6A215BA094047140795979ADFB02);
	U3CAggregateAwaitAsyncU3Ed__4_2_t3A8545F883C47270A41BD33A992F9E8FEAFBC6DC* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
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
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0040_1;
		}

IL_0015_1:
		{
			goto IL_01fb_1;
		}

IL_001a_1:
		{
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_5);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), NULL);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), 0);
		}

IL_0040_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_004c_2;
				}
			}
			{
				goto IL_0046_2;
			}

IL_0046_2:
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_004e_2;
				}
			}
			{
				goto IL_0053_2;
			}

IL_004c_2:
			{
				goto IL_00bc_2;
			}

IL_004e_2:
			{
				goto IL_0146_2;
			}

IL_0053_2:
			{
				il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3)), SizeOf_TAccumulate_t7AC0FAD5E0D0871FC6A9280A537B7A1D0335F5BD);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_8, SizeOf_TAccumulate_t7AC0FAD5E0D0871FC6A9280A537B7A1D0335F5BD);
				goto IL_00fe_2;
			}

IL_0065_2:
			{
				Func_3_t025EADE05AD46B78D6372153E7AB6141B48C6D40* L_9 = *(Func_3_t025EADE05AD46B78D6372153E7AB6141B48C6D40**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
				il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TAccumulate_t7AC0FAD5E0D0871FC6A9280A537B7A1D0335F5BD);
				RuntimeObject* L_11 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_11);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_11, (Il2CppFullySharedGenericAny*)L_12);
				NullCheck(L_9);
				InvokerActionInvoker3< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_12: *(void**)L_12), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_13);
				il2cpp_codegen_memcpy(V_3, L_13, SizeOf_UniTask_1_tDE9CC44F3ECB6A215BA094047140795979ADFB02);
				InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)V_3, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_14);
				il2cpp_codegen_memcpy(V_2, L_14, SizeOf_Awaiter_t8E1B0F2F2DAABCB16BC195477F0BC749E1ED9153);
				bool L_15;
				L_15 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				if (L_15)
				{
					goto IL_00d8_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_16);
				il2cpp_codegen_memcpy(L_17, V_2, SizeOf_Awaiter_t8E1B0F2F2DAABCB16BC195477F0BC749E1ED9153);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_17, SizeOf_Awaiter_t8E1B0F2F2DAABCB16BC195477F0BC749E1ED9153);
				V_4 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CAggregateAwaitAsyncU3Ed__4_2_t3A8545F883C47270A41BD33A992F9E8FEAFBC6DC**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
				goto IL_02bc;
			}

IL_00bc_2:
			{
				il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)), SizeOf_Awaiter_t8E1B0F2F2DAABCB16BC195477F0BC749E1ED9153);
				il2cpp_codegen_memcpy(V_2, L_18, SizeOf_Awaiter_t8E1B0F2F2DAABCB16BC195477F0BC749E1ED9153);
				il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)))), SizeOf_Awaiter_t8E1B0F2F2DAABCB16BC195477F0BC749E1ED9153);
				int32_t L_19 = (-1);
				V_0 = L_19;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_19);
			}

IL_00d8_2:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, (Il2CppFullySharedGenericAny*)L_20);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_20, SizeOf_TAccumulate_t7AC0FAD5E0D0871FC6A9280A537B7A1D0335F5BD);
				il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)), SizeOf_TAccumulate_t7AC0FAD5E0D0871FC6A9280A537B7A1D0335F5BD);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_21, SizeOf_TAccumulate_t7AC0FAD5E0D0871FC6A9280A537B7A1D0335F5BD);
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)))), SizeOf_TAccumulate_t7AC0FAD5E0D0871FC6A9280A537B7A1D0335F5BD);
			}

IL_00fe_2:
			{
				RuntimeObject* L_22 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_22);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_23;
				L_23 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_22);
				V_7 = L_23;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_24;
				L_24 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_6 = L_24;
				bool L_25;
				L_25 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_6), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_25)
				{
					goto IL_0163_2;
				}
			}
			{
				int32_t L_26 = 1;
				V_0 = L_26;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_26);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_27 = V_6;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14), L_27);
				V_4 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAggregateAwaitAsyncU3Ed__4_2_t3A8545F883C47270A41BD33A992F9E8FEAFBC6DC**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				goto IL_02bc;
			}

IL_0146_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
				V_6 = L_28;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_29 = (-1);
				V_0 = L_29;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_29);
			}

IL_0163_2:
			{
				bool L_30;
				L_30 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_30);
				bool L_31 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12));
				V_5 = L_31;
				bool L_32 = V_5;
				if (L_32)
				{
					goto IL_0065_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_33, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TAccumulate_t7AC0FAD5E0D0871FC6A9280A537B7A1D0335F5BD);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_33, SizeOf_TAccumulate_t7AC0FAD5E0D0871FC6A9280A537B7A1D0335F5BD);
				goto IL_018d_2;
			}

IL_018d_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), 1);
				goto IL_01a2_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0196_1;
			}
			throw e;
		}

CATCH_0196_1:
		{
			RuntimeObject* L_34 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_8 = L_34;
			RuntimeObject* L_35 = V_8;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_35);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_01a2_1;
		}

IL_01a2_1:
		{
			RuntimeObject* L_36 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_36) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_37 = V_9;
			if (!L_37)
			{
				goto IL_0221_1;
			}
		}
		{
			RuntimeObject* L_38 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			NullCheck((RuntimeObject*)L_38);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_39;
			L_39 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_38);
			V_11 = L_39;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_40;
			L_40 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_11), NULL);
			V_10 = L_40;
			bool L_41;
			L_41 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_41)
			{
				goto IL_0218_1;
			}
		}
		{
			int32_t L_42 = 2;
			V_0 = L_42;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_42);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_43 = V_10;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15), L_43);
			V_4 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAggregateAwaitAsyncU3Ed__4_2_t3A8545F883C47270A41BD33A992F9E8FEAFBC6DC**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
			goto IL_02bc;
		}

IL_01fb_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_44 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15));
			V_10 = L_44;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_45 = (-1);
			V_0 = L_45;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_45);
		}

IL_0218_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_0221_1:
		{
			RuntimeObject* L_46 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_8 = L_46;
			RuntimeObject* L_47 = V_8;
			if (!L_47)
			{
				goto IL_024b_1;
			}
		}
		{
			RuntimeObject* L_48 = V_8;
			V_12 = ((Exception_t*)IsInstClass((RuntimeObject*)L_48, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_49 = V_12;
			if (L_49)
			{
				goto IL_023e_1;
			}
		}
		{
			RuntimeObject* L_50 = V_8;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_50, method);
		}

IL_023e_1:
		{
			Exception_t* L_51 = V_12;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_52;
			L_52 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_51, NULL);
			NullCheck(L_52);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_52, NULL);
		}

IL_024b_1:
		{
			int32_t L_53 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			V_13 = L_53;
			int32_t L_54 = V_13;
			if ((((int32_t)L_54) == ((int32_t)1)))
			{
				goto IL_025a_1;
			}
		}
		{
			goto IL_0263_1;
		}

IL_025a_1:
		{
			il2cpp_codegen_memcpy(L_55, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_TAccumulate_t7AC0FAD5E0D0871FC6A9280A537B7A1D0335F5BD);
			il2cpp_codegen_memcpy(V_1, L_55, SizeOf_TAccumulate_t7AC0FAD5E0D0871FC6A9280A537B7A1D0335F5BD);
			goto IL_02a0;
		}

IL_0263_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), SizeOf_TAccumulate_t7AC0FAD5E0D0871FC6A9280A537B7A1D0335F5BD);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
			goto IL_02a0;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_027f;
		}
		throw e;
	}

CATCH_027f:
	{
		Exception_t* L_56 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_12 = L_56;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		Exception_t* L_57 = V_12;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_57, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_02bc;
	}

IL_02a0:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_58, V_1, SizeOf_TAccumulate_t7AC0FAD5E0D0871FC6A9280A537B7A1D0335F5BD);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)), il2cpp_rgctx_method(method->klass->rgctx_data, 25), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_58: *(void**)L_58));
	}

IL_02bc:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAggregateAwaitAsyncU3Ed__4_2_SetStateMachine_mF81A33BBC26382E98ACB2F8EAD0BD44E3C86A5A5_gshared (U3CAggregateAwaitAsyncU3Ed__4_2_t3A8545F883C47270A41BD33A992F9E8FEAFBC6DC* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAggregateAwaitAsyncU3Ed__5_3__ctor_m81B890DAF960581119BCB0C4C83AEF4A682A36E5_gshared (U3CAggregateAwaitAsyncU3Ed__5_3_t2CE30508A0C0C3772524DDFD2432747DF048D232* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAggregateAwaitAsyncU3Ed__5_3_MoveNext_m823E76A549773539E4777BAB833D20F5D0A200B1_gshared (U3CAggregateAwaitAsyncU3Ed__5_3_t2CE30508A0C0C3772524DDFD2432747DF048D232* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TResult_tFE023AFA2BEBA63840559E422FCD10EA6F904CCA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 34));
	const uint32_t SizeOf_Awaiter_t87BFDB7E9A58065BF4072447696E7D624ABFF2AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const uint32_t SizeOf_UniTask_1_t985FEFE3F8BABDAE2F16A4EA0F12690484F4899F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const uint32_t SizeOf_Awaiter_t650A74188DDC91BF7FF0322F14F7B114D65782A2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 28));
	const uint32_t SizeOf_UniTask_1_t2B837E4302748E95843BEE57A82DD1F7F70FF880 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25));
	const uint32_t SizeOf_TAccumulate_t5FE8FFC1AB2A17208C79AC7E29B61C17798E8FAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const uint32_t SizeOf_TSource_tAAD85573F75942E0774343B092CF07D9E6ACFF19 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_tAAD85573F75942E0774343B092CF07D9E6ACFF19);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TAccumulate_t5FE8FFC1AB2A17208C79AC7E29B61C17798E8FAA);
	const Il2CppFullySharedGenericAny L_9 = L_7;
	const Il2CppFullySharedGenericAny L_19 = L_7;
	const Il2CppFullySharedGenericAny L_33 = L_7;
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TAccumulate_t5FE8FFC1AB2A17208C79AC7E29B61C17798E8FAA);
	const Il2CppFullySharedGenericAny L_41 = alloca(SizeOf_TResult_tFE023AFA2BEBA63840559E422FCD10EA6F904CCA);
	const Il2CppFullySharedGenericAny L_64 = L_41;
	const Il2CppFullySharedGenericAny L_67 = L_41;
	const Il2CppFullySharedGenericAny L_42 = alloca(SizeOf_TResult_tFE023AFA2BEBA63840559E422FCD10EA6F904CCA);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_13 = alloca(SizeOf_Awaiter_t87BFDB7E9A58065BF4072447696E7D624ABFF2AE);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_16 = L_13;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_17 = L_13;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_35 = alloca(SizeOf_Awaiter_t650A74188DDC91BF7FF0322F14F7B114D65782A2);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_38 = L_35;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_39 = L_35;
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_12 = alloca(SizeOf_UniTask_1_t985FEFE3F8BABDAE2F16A4EA0F12690484F4899F);
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_34 = alloca(SizeOf_UniTask_1_t2B837E4302748E95843BEE57A82DD1F7F70FF880);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TResult_tFE023AFA2BEBA63840559E422FCD10EA6F904CCA);
	memset(V_1, 0, SizeOf_TResult_tFE023AFA2BEBA63840559E422FCD10EA6F904CCA);
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_2 = alloca(SizeOf_Awaiter_t87BFDB7E9A58065BF4072447696E7D624ABFF2AE);
	memset(V_2, 0, SizeOf_Awaiter_t87BFDB7E9A58065BF4072447696E7D624ABFF2AE);
	UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 V_3 = alloca(SizeOf_UniTask_1_t985FEFE3F8BABDAE2F16A4EA0F12690484F4899F);
	memset(V_3, 0, SizeOf_UniTask_1_t985FEFE3F8BABDAE2F16A4EA0F12690484F4899F);
	U3CAggregateAwaitAsyncU3Ed__5_3_t2CE30508A0C0C3772524DDFD2432747DF048D232* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_8 = alloca(SizeOf_Awaiter_t650A74188DDC91BF7FF0322F14F7B114D65782A2);
	memset(V_8, 0, SizeOf_Awaiter_t650A74188DDC91BF7FF0322F14F7B114D65782A2);
	UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 V_9 = alloca(SizeOf_UniTask_1_t2B837E4302748E95843BEE57A82DD1F7F70FF880);
	memset(V_9, 0, SizeOf_UniTask_1_t2B837E4302748E95843BEE57A82DD1F7F70FF880);
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_12;
	memset((&V_12), 0, sizeof(V_12));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_13;
	memset((&V_13), 0, sizeof(V_13));
	Exception_t* V_14 = NULL;
	int32_t V_15 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)2))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)3)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0040_1;
		}

IL_0015_1:
		{
			goto IL_0281_1;
		}

IL_001a_1:
		{
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_5);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), NULL);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), 0);
		}

IL_0040_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				switch (L_6)
				{
					case 0:
					{
						goto IL_0055_2;
					}
					case 1:
					{
						goto IL_0057_2;
					}
					case 2:
					{
						goto IL_005c_2;
					}
				}
			}
			{
				goto IL_0061_2;
			}

IL_0055_2:
			{
				goto IL_00ca_2;
			}

IL_0057_2:
			{
				goto IL_0154_2;
			}

IL_005c_2:
			{
				goto IL_01db_2;
			}

IL_0061_2:
			{
				il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3)), SizeOf_TAccumulate_t5FE8FFC1AB2A17208C79AC7E29B61C17798E8FAA);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_7, SizeOf_TAccumulate_t5FE8FFC1AB2A17208C79AC7E29B61C17798E8FAA);
				goto IL_010c_2;
			}

IL_0073_2:
			{
				Func_3_t025EADE05AD46B78D6372153E7AB6141B48C6D40* L_8 = *(Func_3_t025EADE05AD46B78D6372153E7AB6141B48C6D40**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
				il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)), SizeOf_TAccumulate_t5FE8FFC1AB2A17208C79AC7E29B61C17798E8FAA);
				RuntimeObject* L_10 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				NullCheck(L_8);
				InvokerActionInvoker3< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_9: *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_11: *(void**)L_11), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_12);
				il2cpp_codegen_memcpy(V_3, L_12, SizeOf_UniTask_1_t985FEFE3F8BABDAE2F16A4EA0F12690484F4899F);
				InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)V_3, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_13);
				il2cpp_codegen_memcpy(V_2, L_13, SizeOf_Awaiter_t87BFDB7E9A58065BF4072447696E7D624ABFF2AE);
				bool L_14;
				L_14 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				if (L_14)
				{
					goto IL_00e6_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_15);
				il2cpp_codegen_memcpy(L_16, V_2, SizeOf_Awaiter_t87BFDB7E9A58065BF4072447696E7D624ABFF2AE);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15), L_16, SizeOf_Awaiter_t87BFDB7E9A58065BF4072447696E7D624ABFF2AE);
				V_4 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CAggregateAwaitAsyncU3Ed__5_3_t2CE30508A0C0C3772524DDFD2432747DF048D232**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
				goto IL_0342;
			}

IL_00ca_2:
			{
				il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15)), SizeOf_Awaiter_t87BFDB7E9A58065BF4072447696E7D624ABFF2AE);
				il2cpp_codegen_memcpy(V_2, L_17, SizeOf_Awaiter_t87BFDB7E9A58065BF4072447696E7D624ABFF2AE);
				il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15)))), SizeOf_Awaiter_t87BFDB7E9A58065BF4072447696E7D624ABFF2AE);
				int32_t L_18 = (-1);
				V_0 = L_18;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_18);
			}

IL_00e6_2:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, (Il2CppFullySharedGenericAny*)L_19);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_19, SizeOf_TAccumulate_t5FE8FFC1AB2A17208C79AC7E29B61C17798E8FAA);
				il2cpp_codegen_memcpy(L_20, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_TAccumulate_t5FE8FFC1AB2A17208C79AC7E29B61C17798E8FAA);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_20, SizeOf_TAccumulate_t5FE8FFC1AB2A17208C79AC7E29B61C17798E8FAA);
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)))), SizeOf_TAccumulate_t5FE8FFC1AB2A17208C79AC7E29B61C17798E8FAA);
			}

IL_010c_2:
			{
				RuntimeObject* L_21 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck(L_21);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_22;
				L_22 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_21);
				V_7 = L_22;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_23;
				L_23 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_6 = L_23;
				bool L_24;
				L_24 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_6), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_24)
				{
					goto IL_0171_2;
				}
			}
			{
				int32_t L_25 = 1;
				V_0 = L_25;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_25);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_26 = V_6;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16), L_26);
				V_4 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAggregateAwaitAsyncU3Ed__5_3_t2CE30508A0C0C3772524DDFD2432747DF048D232**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				goto IL_0342;
			}

IL_0154_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_27 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16));
				V_6 = L_27;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_28 = (-1);
				V_0 = L_28;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_28);
			}

IL_0171_2:
			{
				bool L_29;
				L_29 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_29);
				bool L_30 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
				V_5 = L_30;
				bool L_31 = V_5;
				if (L_31)
				{
					goto IL_0073_2;
				}
			}
			{
				Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2* L_32 = *(Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				il2cpp_codegen_memcpy(L_33, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)), SizeOf_TAccumulate_t5FE8FFC1AB2A17208C79AC7E29B61C17798E8FAA);
				NullCheck(L_32);
				InvokerActionInvoker2< Il2CppFullySharedGenericAny, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)), il2cpp_rgctx_method(method->klass->rgctx_data, 24), L_32, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_33: *(void**)L_33), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_34);
				il2cpp_codegen_memcpy(V_9, L_34, SizeOf_UniTask_1_t2B837E4302748E95843BEE57A82DD1F7F70FF880);
				InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)), il2cpp_rgctx_method(method->klass->rgctx_data, 26), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)V_9, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_35);
				il2cpp_codegen_memcpy(V_8, L_35, SizeOf_Awaiter_t650A74188DDC91BF7FF0322F14F7B114D65782A2);
				bool L_36;
				L_36 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_8, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
				if (L_36)
				{
					goto IL_01f8_2;
				}
			}
			{
				int32_t L_37 = 2;
				V_0 = L_37;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_37);
				il2cpp_codegen_memcpy(L_38, V_8, SizeOf_Awaiter_t650A74188DDC91BF7FF0322F14F7B114D65782A2);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),17), L_38, SizeOf_Awaiter_t650A74188DDC91BF7FF0322F14F7B114D65782A2);
				V_4 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CAggregateAwaitAsyncU3Ed__5_3_t2CE30508A0C0C3772524DDFD2432747DF048D232**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_8, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 31));
				goto IL_0342;
			}

IL_01db_2:
			{
				il2cpp_codegen_memcpy(L_39, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),17)), SizeOf_Awaiter_t650A74188DDC91BF7FF0322F14F7B114D65782A2);
				il2cpp_codegen_memcpy(V_8, L_39, SizeOf_Awaiter_t650A74188DDC91BF7FF0322F14F7B114D65782A2);
				il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),17)))), SizeOf_Awaiter_t650A74188DDC91BF7FF0322F14F7B114D65782A2);
				int32_t L_40 = (-1);
				V_0 = L_40;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_40);
			}

IL_01f8_2:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)), il2cpp_rgctx_method(method->klass->rgctx_data, 33), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_8, (Il2CppFullySharedGenericAny*)L_41);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14), L_41, SizeOf_TResult_tFE023AFA2BEBA63840559E422FCD10EA6F904CCA);
				il2cpp_codegen_memcpy(L_42, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14)), SizeOf_TResult_tFE023AFA2BEBA63840559E422FCD10EA6F904CCA);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_42, SizeOf_TResult_tFE023AFA2BEBA63840559E422FCD10EA6F904CCA);
				goto IL_0213_2;
			}

IL_0213_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), 1);
				goto IL_0228_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_021c_1;
			}
			throw e;
		}

CATCH_021c_1:
		{
			RuntimeObject* L_43 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_10 = L_43;
			RuntimeObject* L_44 = V_10;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_44);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0228_1;
		}

IL_0228_1:
		{
			RuntimeObject* L_45 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_45) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_46 = V_11;
			if (!L_46)
			{
				goto IL_02a7_1;
			}
		}
		{
			RuntimeObject* L_47 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			NullCheck((RuntimeObject*)L_47);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_48;
			L_48 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_47);
			V_13 = L_48;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_49;
			L_49 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_13), NULL);
			V_12 = L_49;
			bool L_50;
			L_50 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_12), NULL);
			if (L_50)
			{
				goto IL_029e_1;
			}
		}
		{
			int32_t L_51 = 3;
			V_0 = L_51;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_51);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_52 = V_12;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),18), L_52);
			V_4 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAggregateAwaitAsyncU3Ed__5_3_t2CE30508A0C0C3772524DDFD2432747DF048D232**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_12), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 35));
			goto IL_0342;
		}

IL_0281_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_53 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),18));
			V_12 = L_53;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),18)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_54 = (-1);
			V_0 = L_54;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_54);
		}

IL_029e_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_12), NULL);
		}

IL_02a7_1:
		{
			RuntimeObject* L_55 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			V_10 = L_55;
			RuntimeObject* L_56 = V_10;
			if (!L_56)
			{
				goto IL_02d1_1;
			}
		}
		{
			RuntimeObject* L_57 = V_10;
			V_14 = ((Exception_t*)IsInstClass((RuntimeObject*)L_57, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_58 = V_14;
			if (L_58)
			{
				goto IL_02c4_1;
			}
		}
		{
			RuntimeObject* L_59 = V_10;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_59, method);
		}

IL_02c4_1:
		{
			Exception_t* L_60 = V_14;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_61;
			L_61 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_60, NULL);
			NullCheck(L_61);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_61, NULL);
		}

IL_02d1_1:
		{
			int32_t L_62 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
			V_15 = L_62;
			int32_t L_63 = V_15;
			if ((((int32_t)L_63) == ((int32_t)1)))
			{
				goto IL_02e0_1;
			}
		}
		{
			goto IL_02e9_1;
		}

IL_02e0_1:
		{
			il2cpp_codegen_memcpy(L_64, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TResult_tFE023AFA2BEBA63840559E422FCD10EA6F904CCA);
			il2cpp_codegen_memcpy(V_1, L_64, SizeOf_TResult_tFE023AFA2BEBA63840559E422FCD10EA6F904CCA);
			goto IL_0326;
		}

IL_02e9_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)))), SizeOf_TResult_tFE023AFA2BEBA63840559E422FCD10EA6F904CCA);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), (RuntimeObject*)NULL);
			goto IL_0326;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0305;
		}
		throw e;
	}

CATCH_0305:
	{
		Exception_t* L_65 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_14 = L_65;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), (RuntimeObject*)NULL);
		Exception_t* L_66 = V_14;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_66, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0342;
	}

IL_0326:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_67, V_1, SizeOf_TResult_tFE023AFA2BEBA63840559E422FCD10EA6F904CCA);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)), il2cpp_rgctx_method(method->klass->rgctx_data, 37), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 34)) ? L_67: *(void**)L_67));
	}

IL_0342:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAggregateAwaitAsyncU3Ed__5_3_SetStateMachine_m9A5334EAC4D8CBE83B862E819C714646E3C2DCC6_gshared (U3CAggregateAwaitAsyncU3Ed__5_3_t2CE30508A0C0C3772524DDFD2432747DF048D232* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAggregateAwaitWithCancellationAsyncU3Ed__6_1__ctor_m1ECF20E3F953623B2C2261ED9509C55340866C79_gshared (U3CAggregateAwaitWithCancellationAsyncU3Ed__6_1_t910F89A2A66D5D4293E85DF546B8E2506498522E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAggregateAwaitWithCancellationAsyncU3Ed__6_1_MoveNext_m995489C5A3D4719BF45F7AF033F0D43D0011663E_gshared (U3CAggregateAwaitWithCancellationAsyncU3Ed__6_1_t910F89A2A66D5D4293E85DF546B8E2506498522E* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t5C4182A5332A75AD343860A649F3C470A6C81E35 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const uint32_t SizeOf_Awaiter_t3002A8B2D17EB5F269DDDB1B4CDF150252E70ABB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
	const uint32_t SizeOf_UniTask_1_tE7B5A5BFFB049D90EEC325B79950684C25CF0FC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_TSource_t5C4182A5332A75AD343860A649F3C470A6C81E35);
	const Il2CppFullySharedGenericAny L_22 = L_19;
	const Il2CppFullySharedGenericAny L_33 = L_19;
	const Il2CppFullySharedGenericAny L_46 = L_19;
	const Il2CppFullySharedGenericAny L_68 = L_19;
	const Il2CppFullySharedGenericAny L_71 = L_19;
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_TSource_t5C4182A5332A75AD343860A649F3C470A6C81E35);
	const Il2CppFullySharedGenericAny L_34 = L_24;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_27 = alloca(SizeOf_Awaiter_t3002A8B2D17EB5F269DDDB1B4CDF150252E70ABB);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_30 = L_27;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_31 = L_27;
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_26 = alloca(SizeOf_UniTask_1_tE7B5A5BFFB049D90EEC325B79950684C25CF0FC7);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t5C4182A5332A75AD343860A649F3C470A6C81E35);
	memset(V_1, 0, SizeOf_TSource_t5C4182A5332A75AD343860A649F3C470A6C81E35);
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CAggregateAwaitWithCancellationAsyncU3Ed__6_1_t910F89A2A66D5D4293E85DF546B8E2506498522E* V_5 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_6 = alloca(SizeOf_Awaiter_t3002A8B2D17EB5F269DDDB1B4CDF150252E70ABB);
	memset(V_6, 0, SizeOf_Awaiter_t3002A8B2D17EB5F269DDDB1B4CDF150252E70ABB);
	UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 V_7 = alloca(SizeOf_UniTask_1_tE7B5A5BFFB049D90EEC325B79950684C25CF0FC7);
	memset(V_7, 0, SizeOf_UniTask_1_tE7B5A5BFFB049D90EEC325B79950684C25CF0FC7);
	bool V_8 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_9;
	memset((&V_9), 0, sizeof(V_9));
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_12;
	memset((&V_12), 0, sizeof(V_12));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_13;
	memset((&V_13), 0, sizeof(V_13));
	Exception_t* V_14 = NULL;
	int32_t V_15 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)2))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)3)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0040_1;
		}

IL_0015_1:
		{
			goto IL_029c_1;
		}

IL_001a_1:
		{
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_5);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), NULL);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), 0);
		}

IL_0040_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				switch (L_6)
				{
					case 0:
					{
						goto IL_0055_2;
					}
					case 1:
					{
						goto IL_0057_2;
					}
					case 2:
					{
						goto IL_005c_2;
					}
				}
			}
			{
				goto IL_0061_2;
			}

IL_0055_2:
			{
				goto IL_00a8_2;
			}

IL_0057_2:
			{
				goto IL_015c_2;
			}

IL_005c_2:
			{
				goto IL_01e7_2;
			}

IL_0061_2:
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
					goto IL_00c4_2;
				}
			}
			{
				int32_t L_11 = 0;
				V_0 = L_11;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_11);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_12 = V_3;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_12);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAggregateAwaitWithCancellationAsyncU3Ed__6_1_t910F89A2A66D5D4293E85DF546B8E2506498522E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				goto IL_035d;
			}

IL_00a8_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_13 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
				V_3 = L_13;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_14 = (-1);
				V_0 = L_14;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_14);
			}

IL_00c4_2:
			{
				bool L_15;
				L_15 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_15);
				bool L_16 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
				V_2 = L_16;
				bool L_17 = V_2;
				if (!L_17)
				{
					goto IL_00f0_2;
				}
			}
			{
				RuntimeObject* L_18 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				NullCheck(L_18);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_18, (Il2CppFullySharedGenericAny*)L_19);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_19, SizeOf_TSource_t5C4182A5332A75AD343860A649F3C470A6C81E35);
				goto IL_00f7_2;
			}

IL_00f0_2:
			{
				Exception_t* L_20;
				L_20 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
			}

IL_00f7_2:
			{
				goto IL_019f_2;
			}

IL_00fc_2:
			{
				Func_4_tACF12340039B5BCFBB5ED953C0B2BF68B8F74D25* L_21 = *(Func_4_tACF12340039B5BCFBB5ED953C0B2BF68B8F74D25**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_TSource_t5C4182A5332A75AD343860A649F3C470A6C81E35);
				RuntimeObject* L_23 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				NullCheck(L_23);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_23, (Il2CppFullySharedGenericAny*)L_24);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_25 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
				NullCheck(L_21);
				InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10)) ? L_22: *(void**)L_22), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10)) ? L_24: *(void**)L_24), L_25, (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_26);
				il2cpp_codegen_memcpy(V_7, L_26, SizeOf_UniTask_1_tE7B5A5BFFB049D90EEC325B79950684C25CF0FC7);
				InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)V_7, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_27);
				il2cpp_codegen_memcpy(V_6, L_27, SizeOf_Awaiter_t3002A8B2D17EB5F269DDDB1B4CDF150252E70ABB);
				bool L_28;
				L_28 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_6, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
				if (L_28)
				{
					goto IL_0179_2;
				}
			}
			{
				int32_t L_29 = 1;
				V_0 = L_29;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_29);
				il2cpp_codegen_memcpy(L_30, V_6, SizeOf_Awaiter_t3002A8B2D17EB5F269DDDB1B4CDF150252E70ABB);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14), L_30, SizeOf_Awaiter_t3002A8B2D17EB5F269DDDB1B4CDF150252E70ABB);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CAggregateAwaitWithCancellationAsyncU3Ed__6_1_t910F89A2A66D5D4293E85DF546B8E2506498522E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_6, (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
				goto IL_035d;
			}

IL_015c_2:
			{
				il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14)), SizeOf_Awaiter_t3002A8B2D17EB5F269DDDB1B4CDF150252E70ABB);
				il2cpp_codegen_memcpy(V_6, L_31, SizeOf_Awaiter_t3002A8B2D17EB5F269DDDB1B4CDF150252E70ABB);
				il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14)))), SizeOf_Awaiter_t3002A8B2D17EB5F269DDDB1B4CDF150252E70ABB);
				int32_t L_32 = (-1);
				V_0 = L_32;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_32);
			}

IL_0179_2:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_6, (Il2CppFullySharedGenericAny*)L_33);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_33, SizeOf_TSource_t5C4182A5332A75AD343860A649F3C470A6C81E35);
				il2cpp_codegen_memcpy(L_34, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)), SizeOf_TSource_t5C4182A5332A75AD343860A649F3C470A6C81E35);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_34, SizeOf_TSource_t5C4182A5332A75AD343860A649F3C470A6C81E35);
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)))), SizeOf_TSource_t5C4182A5332A75AD343860A649F3C470A6C81E35);
			}

IL_019f_2:
			{
				RuntimeObject* L_35 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				NullCheck(L_35);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_36;
				L_36 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_35);
				V_4 = L_36;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_37;
				L_37 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_9 = L_37;
				bool L_38;
				L_38 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_9), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_38)
				{
					goto IL_0204_2;
				}
			}
			{
				int32_t L_39 = 2;
				V_0 = L_39;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_39);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_40 = V_9;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_40);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAggregateAwaitWithCancellationAsyncU3Ed__6_1_t910F89A2A66D5D4293E85DF546B8E2506498522E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_9), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				goto IL_035d;
			}

IL_01e7_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_41 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
				V_9 = L_41;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_42 = (-1);
				V_0 = L_42;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_42);
			}

IL_0204_2:
			{
				bool L_43;
				L_43 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_9), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_43);
				bool L_44 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12));
				V_8 = L_44;
				bool L_45 = V_8;
				if (L_45)
				{
					goto IL_00fc_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_46, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_TSource_t5C4182A5332A75AD343860A649F3C470A6C81E35);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_46, SizeOf_TSource_t5C4182A5332A75AD343860A649F3C470A6C81E35);
				goto IL_022e_2;
			}

IL_022e_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), 1);
				goto IL_0243_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0237_1;
			}
			throw e;
		}

CATCH_0237_1:
		{
			RuntimeObject* L_47 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_10 = L_47;
			RuntimeObject* L_48 = V_10;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_48);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0243_1;
		}

IL_0243_1:
		{
			RuntimeObject* L_49 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
			V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_49) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_50 = V_11;
			if (!L_50)
			{
				goto IL_02c2_1;
			}
		}
		{
			RuntimeObject* L_51 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
			NullCheck((RuntimeObject*)L_51);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_52;
			L_52 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_51);
			V_13 = L_52;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_53;
			L_53 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_13), NULL);
			V_12 = L_53;
			bool L_54;
			L_54 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_12), NULL);
			if (L_54)
			{
				goto IL_02b9_1;
			}
		}
		{
			int32_t L_55 = 3;
			V_0 = L_55;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_55);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_56 = V_12;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15), L_56);
			V_5 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAggregateAwaitWithCancellationAsyncU3Ed__6_1_t910F89A2A66D5D4293E85DF546B8E2506498522E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_12), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
			goto IL_035d;
		}

IL_029c_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_57 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15));
			V_12 = L_57;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_58 = (-1);
			V_0 = L_58;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_58);
		}

IL_02b9_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_12), NULL);
		}

IL_02c2_1:
		{
			RuntimeObject* L_59 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			V_10 = L_59;
			RuntimeObject* L_60 = V_10;
			if (!L_60)
			{
				goto IL_02ec_1;
			}
		}
		{
			RuntimeObject* L_61 = V_10;
			V_14 = ((Exception_t*)IsInstClass((RuntimeObject*)L_61, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_62 = V_14;
			if (L_62)
			{
				goto IL_02df_1;
			}
		}
		{
			RuntimeObject* L_63 = V_10;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_63, method);
		}

IL_02df_1:
		{
			Exception_t* L_64 = V_14;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_65;
			L_65 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_64, NULL);
			NullCheck(L_65);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_65, NULL);
		}

IL_02ec_1:
		{
			int32_t L_66 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_15 = L_66;
			int32_t L_67 = V_15;
			if ((((int32_t)L_67) == ((int32_t)1)))
			{
				goto IL_02fb_1;
			}
		}
		{
			goto IL_0304_1;
		}

IL_02fb_1:
		{
			il2cpp_codegen_memcpy(L_68, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8)), SizeOf_TSource_t5C4182A5332A75AD343860A649F3C470A6C81E35);
			il2cpp_codegen_memcpy(V_1, L_68, SizeOf_TSource_t5C4182A5332A75AD343860A649F3C470A6C81E35);
			goto IL_0341;
		}

IL_0304_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8)))), SizeOf_TSource_t5C4182A5332A75AD343860A649F3C470A6C81E35);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), (RuntimeObject*)NULL);
			goto IL_0341;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0320;
		}
		throw e;
	}

CATCH_0320:
	{
		Exception_t* L_69 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_14 = L_69;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), (RuntimeObject*)NULL);
		Exception_t* L_70 = V_14;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_70, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_035d;
	}

IL_0341:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_71, V_1, SizeOf_TSource_t5C4182A5332A75AD343860A649F3C470A6C81E35);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)), il2cpp_rgctx_method(method->klass->rgctx_data, 24), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10)) ? L_71: *(void**)L_71));
	}

IL_035d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAggregateAwaitWithCancellationAsyncU3Ed__6_1_SetStateMachine_mF12DAC35EEB89273AAB8938EA4DB832C53F9CB7D_gshared (U3CAggregateAwaitWithCancellationAsyncU3Ed__6_1_t910F89A2A66D5D4293E85DF546B8E2506498522E* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAggregateAwaitWithCancellationAsyncU3Ed__7_2__ctor_m1EDD873BCB6B14922E4866C5F095123523C3657C_gshared (U3CAggregateAwaitWithCancellationAsyncU3Ed__7_2_tA8B0F9E903ED8F53A4425E81A17DF1953F32043A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAggregateAwaitWithCancellationAsyncU3Ed__7_2_MoveNext_mD38C86D7CB4301ECB19B425A0D92A48A375A67EE_gshared (U3CAggregateAwaitWithCancellationAsyncU3Ed__7_2_tA8B0F9E903ED8F53A4425E81A17DF1953F32043A* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TAccumulate_t6855DE928726072C2F7537B65ADAD5C8F4C1CAE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const uint32_t SizeOf_Awaiter_tB723924F1949CC89ACB6FF15EB5C0F02E50922C9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const uint32_t SizeOf_UniTask_1_tCD4B54A3C9972A4D81AB5B822395DAE9A20785C0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const uint32_t SizeOf_TSource_t0D44E34255C5B9EC53E29267325E55D2D08C34A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_t0D44E34255C5B9EC53E29267325E55D2D08C34A1);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TAccumulate_t6855DE928726072C2F7537B65ADAD5C8F4C1CAE3);
	const Il2CppFullySharedGenericAny L_10 = L_8;
	const Il2CppFullySharedGenericAny L_21 = L_8;
	const Il2CppFullySharedGenericAny L_34 = L_8;
	const Il2CppFullySharedGenericAny L_56 = L_8;
	const Il2CppFullySharedGenericAny L_59 = L_8;
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_TAccumulate_t6855DE928726072C2F7537B65ADAD5C8F4C1CAE3);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_15 = alloca(SizeOf_Awaiter_tB723924F1949CC89ACB6FF15EB5C0F02E50922C9);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_18 = L_15;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_19 = L_15;
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_14 = alloca(SizeOf_UniTask_1_tCD4B54A3C9972A4D81AB5B822395DAE9A20785C0);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TAccumulate_t6855DE928726072C2F7537B65ADAD5C8F4C1CAE3);
	memset(V_1, 0, SizeOf_TAccumulate_t6855DE928726072C2F7537B65ADAD5C8F4C1CAE3);
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_2 = alloca(SizeOf_Awaiter_tB723924F1949CC89ACB6FF15EB5C0F02E50922C9);
	memset(V_2, 0, SizeOf_Awaiter_tB723924F1949CC89ACB6FF15EB5C0F02E50922C9);
	UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 V_3 = alloca(SizeOf_UniTask_1_tCD4B54A3C9972A4D81AB5B822395DAE9A20785C0);
	memset(V_3, 0, SizeOf_UniTask_1_tCD4B54A3C9972A4D81AB5B822395DAE9A20785C0);
	U3CAggregateAwaitWithCancellationAsyncU3Ed__7_2_tA8B0F9E903ED8F53A4425E81A17DF1953F32043A* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
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
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0040_1;
		}

IL_0015_1:
		{
			goto IL_0201_1;
		}

IL_001a_1:
		{
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_5);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), NULL);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), 0);
		}

IL_0040_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_004c_2;
				}
			}
			{
				goto IL_0046_2;
			}

IL_0046_2:
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_004e_2;
				}
			}
			{
				goto IL_0053_2;
			}

IL_004c_2:
			{
				goto IL_00c2_2;
			}

IL_004e_2:
			{
				goto IL_014c_2;
			}

IL_0053_2:
			{
				il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3)), SizeOf_TAccumulate_t6855DE928726072C2F7537B65ADAD5C8F4C1CAE3);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_8, SizeOf_TAccumulate_t6855DE928726072C2F7537B65ADAD5C8F4C1CAE3);
				goto IL_0104_2;
			}

IL_0065_2:
			{
				Func_4_tACF12340039B5BCFBB5ED953C0B2BF68B8F74D25* L_9 = *(Func_4_tACF12340039B5BCFBB5ED953C0B2BF68B8F74D25**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
				il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TAccumulate_t6855DE928726072C2F7537B65ADAD5C8F4C1CAE3);
				RuntimeObject* L_11 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_11);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_11, (Il2CppFullySharedGenericAny*)L_12);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_13 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				NullCheck(L_9);
				InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_12: *(void**)L_12), L_13, (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_14);
				il2cpp_codegen_memcpy(V_3, L_14, SizeOf_UniTask_1_tCD4B54A3C9972A4D81AB5B822395DAE9A20785C0);
				InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)V_3, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_15);
				il2cpp_codegen_memcpy(V_2, L_15, SizeOf_Awaiter_tB723924F1949CC89ACB6FF15EB5C0F02E50922C9);
				bool L_16;
				L_16 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				if (L_16)
				{
					goto IL_00de_2;
				}
			}
			{
				int32_t L_17 = 0;
				V_0 = L_17;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_17);
				il2cpp_codegen_memcpy(L_18, V_2, SizeOf_Awaiter_tB723924F1949CC89ACB6FF15EB5C0F02E50922C9);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_18, SizeOf_Awaiter_tB723924F1949CC89ACB6FF15EB5C0F02E50922C9);
				V_4 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CAggregateAwaitWithCancellationAsyncU3Ed__7_2_tA8B0F9E903ED8F53A4425E81A17DF1953F32043A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
				goto IL_02c2;
			}

IL_00c2_2:
			{
				il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)), SizeOf_Awaiter_tB723924F1949CC89ACB6FF15EB5C0F02E50922C9);
				il2cpp_codegen_memcpy(V_2, L_19, SizeOf_Awaiter_tB723924F1949CC89ACB6FF15EB5C0F02E50922C9);
				il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)))), SizeOf_Awaiter_tB723924F1949CC89ACB6FF15EB5C0F02E50922C9);
				int32_t L_20 = (-1);
				V_0 = L_20;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_20);
			}

IL_00de_2:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, (Il2CppFullySharedGenericAny*)L_21);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_21, SizeOf_TAccumulate_t6855DE928726072C2F7537B65ADAD5C8F4C1CAE3);
				il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)), SizeOf_TAccumulate_t6855DE928726072C2F7537B65ADAD5C8F4C1CAE3);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_22, SizeOf_TAccumulate_t6855DE928726072C2F7537B65ADAD5C8F4C1CAE3);
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)))), SizeOf_TAccumulate_t6855DE928726072C2F7537B65ADAD5C8F4C1CAE3);
			}

IL_0104_2:
			{
				RuntimeObject* L_23 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_23);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_24;
				L_24 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_23);
				V_7 = L_24;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_25;
				L_25 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_6 = L_25;
				bool L_26;
				L_26 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_6), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_26)
				{
					goto IL_0169_2;
				}
			}
			{
				int32_t L_27 = 1;
				V_0 = L_27;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_27);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28 = V_6;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14), L_28);
				V_4 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAggregateAwaitWithCancellationAsyncU3Ed__7_2_tA8B0F9E903ED8F53A4425E81A17DF1953F32043A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				goto IL_02c2;
			}

IL_014c_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
				V_6 = L_29;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_30 = (-1);
				V_0 = L_30;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_30);
			}

IL_0169_2:
			{
				bool L_31;
				L_31 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_31);
				bool L_32 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12));
				V_5 = L_32;
				bool L_33 = V_5;
				if (L_33)
				{
					goto IL_0065_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_34, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TAccumulate_t6855DE928726072C2F7537B65ADAD5C8F4C1CAE3);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_34, SizeOf_TAccumulate_t6855DE928726072C2F7537B65ADAD5C8F4C1CAE3);
				goto IL_0193_2;
			}

IL_0193_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), 1);
				goto IL_01a8_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_019c_1;
			}
			throw e;
		}

CATCH_019c_1:
		{
			RuntimeObject* L_35 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_8 = L_35;
			RuntimeObject* L_36 = V_8;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_36);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_01a8_1;
		}

IL_01a8_1:
		{
			RuntimeObject* L_37 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_37) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_38 = V_9;
			if (!L_38)
			{
				goto IL_0227_1;
			}
		}
		{
			RuntimeObject* L_39 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			NullCheck((RuntimeObject*)L_39);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_40;
			L_40 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_39);
			V_11 = L_40;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_41;
			L_41 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_11), NULL);
			V_10 = L_41;
			bool L_42;
			L_42 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_42)
			{
				goto IL_021e_1;
			}
		}
		{
			int32_t L_43 = 2;
			V_0 = L_43;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_43);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_44 = V_10;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15), L_44);
			V_4 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAggregateAwaitWithCancellationAsyncU3Ed__7_2_tA8B0F9E903ED8F53A4425E81A17DF1953F32043A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
			goto IL_02c2;
		}

IL_0201_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_45 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15));
			V_10 = L_45;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_46 = (-1);
			V_0 = L_46;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_46);
		}

IL_021e_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_0227_1:
		{
			RuntimeObject* L_47 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_8 = L_47;
			RuntimeObject* L_48 = V_8;
			if (!L_48)
			{
				goto IL_0251_1;
			}
		}
		{
			RuntimeObject* L_49 = V_8;
			V_12 = ((Exception_t*)IsInstClass((RuntimeObject*)L_49, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_50 = V_12;
			if (L_50)
			{
				goto IL_0244_1;
			}
		}
		{
			RuntimeObject* L_51 = V_8;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_51, method);
		}

IL_0244_1:
		{
			Exception_t* L_52 = V_12;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_53;
			L_53 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_52, NULL);
			NullCheck(L_53);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_53, NULL);
		}

IL_0251_1:
		{
			int32_t L_54 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			V_13 = L_54;
			int32_t L_55 = V_13;
			if ((((int32_t)L_55) == ((int32_t)1)))
			{
				goto IL_0260_1;
			}
		}
		{
			goto IL_0269_1;
		}

IL_0260_1:
		{
			il2cpp_codegen_memcpy(L_56, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_TAccumulate_t6855DE928726072C2F7537B65ADAD5C8F4C1CAE3);
			il2cpp_codegen_memcpy(V_1, L_56, SizeOf_TAccumulate_t6855DE928726072C2F7537B65ADAD5C8F4C1CAE3);
			goto IL_02a6;
		}

IL_0269_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), SizeOf_TAccumulate_t6855DE928726072C2F7537B65ADAD5C8F4C1CAE3);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
			goto IL_02a6;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0285;
		}
		throw e;
	}

CATCH_0285:
	{
		Exception_t* L_57 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_12 = L_57;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		Exception_t* L_58 = V_12;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_58, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_02c2;
	}

IL_02a6:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_59, V_1, SizeOf_TAccumulate_t6855DE928726072C2F7537B65ADAD5C8F4C1CAE3);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)), il2cpp_rgctx_method(method->klass->rgctx_data, 25), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_59: *(void**)L_59));
	}

IL_02c2:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAggregateAwaitWithCancellationAsyncU3Ed__7_2_SetStateMachine_m6DAC7506A0545AE3A3DA573A8C668E8EFA56551F_gshared (U3CAggregateAwaitWithCancellationAsyncU3Ed__7_2_tA8B0F9E903ED8F53A4425E81A17DF1953F32043A* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAggregateAwaitWithCancellationAsyncU3Ed__8_3__ctor_m5B4F309AA1D6E68E6077770AD3F865D04609395B_gshared (U3CAggregateAwaitWithCancellationAsyncU3Ed__8_3_tC4A4A9DE2B534A7D5648BC4098FE4801348C8EB8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAggregateAwaitWithCancellationAsyncU3Ed__8_3_MoveNext_m78BAC02460BFB1A4223397FA887462B7D2E5CD9B_gshared (U3CAggregateAwaitWithCancellationAsyncU3Ed__8_3_tC4A4A9DE2B534A7D5648BC4098FE4801348C8EB8* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TResult_tC4BDA9A19F0D02B02782D35A9E207E7978CFB286 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 34));
	const uint32_t SizeOf_Awaiter_t0A2D40435396195AB2B11D0300E3980437E399CF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const uint32_t SizeOf_UniTask_1_t07C57FFC0B987EA6C028805D16E51285DEBAF004 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const uint32_t SizeOf_Awaiter_t5B0ECB50DAB658DA44F358F226B3490BCF55592E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 28));
	const uint32_t SizeOf_UniTask_1_t7765F4F34D35658914F6DD2D6828A4F0D46D64C2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25));
	const uint32_t SizeOf_TAccumulate_tDCC353F21C7743622DE29FBC9E50AA60CB028A9D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const uint32_t SizeOf_TSource_t34F6246F46516419EB1D27619E4DC7C3E5512DC1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t34F6246F46516419EB1D27619E4DC7C3E5512DC1);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TAccumulate_tDCC353F21C7743622DE29FBC9E50AA60CB028A9D);
	const Il2CppFullySharedGenericAny L_9 = L_7;
	const Il2CppFullySharedGenericAny L_20 = L_7;
	const Il2CppFullySharedGenericAny L_34 = L_7;
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_TAccumulate_tDCC353F21C7743622DE29FBC9E50AA60CB028A9D);
	const Il2CppFullySharedGenericAny L_43 = alloca(SizeOf_TResult_tC4BDA9A19F0D02B02782D35A9E207E7978CFB286);
	const Il2CppFullySharedGenericAny L_66 = L_43;
	const Il2CppFullySharedGenericAny L_69 = L_43;
	const Il2CppFullySharedGenericAny L_44 = alloca(SizeOf_TResult_tC4BDA9A19F0D02B02782D35A9E207E7978CFB286);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_14 = alloca(SizeOf_Awaiter_t0A2D40435396195AB2B11D0300E3980437E399CF);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_17 = L_14;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_18 = L_14;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_37 = alloca(SizeOf_Awaiter_t5B0ECB50DAB658DA44F358F226B3490BCF55592E);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_40 = L_37;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_41 = L_37;
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_13 = alloca(SizeOf_UniTask_1_t07C57FFC0B987EA6C028805D16E51285DEBAF004);
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_36 = alloca(SizeOf_UniTask_1_t7765F4F34D35658914F6DD2D6828A4F0D46D64C2);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TResult_tC4BDA9A19F0D02B02782D35A9E207E7978CFB286);
	memset(V_1, 0, SizeOf_TResult_tC4BDA9A19F0D02B02782D35A9E207E7978CFB286);
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_2 = alloca(SizeOf_Awaiter_t0A2D40435396195AB2B11D0300E3980437E399CF);
	memset(V_2, 0, SizeOf_Awaiter_t0A2D40435396195AB2B11D0300E3980437E399CF);
	UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 V_3 = alloca(SizeOf_UniTask_1_t07C57FFC0B987EA6C028805D16E51285DEBAF004);
	memset(V_3, 0, SizeOf_UniTask_1_t07C57FFC0B987EA6C028805D16E51285DEBAF004);
	U3CAggregateAwaitWithCancellationAsyncU3Ed__8_3_tC4A4A9DE2B534A7D5648BC4098FE4801348C8EB8* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_8 = alloca(SizeOf_Awaiter_t5B0ECB50DAB658DA44F358F226B3490BCF55592E);
	memset(V_8, 0, SizeOf_Awaiter_t5B0ECB50DAB658DA44F358F226B3490BCF55592E);
	UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 V_9 = alloca(SizeOf_UniTask_1_t7765F4F34D35658914F6DD2D6828A4F0D46D64C2);
	memset(V_9, 0, SizeOf_UniTask_1_t7765F4F34D35658914F6DD2D6828A4F0D46D64C2);
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_12;
	memset((&V_12), 0, sizeof(V_12));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_13;
	memset((&V_13), 0, sizeof(V_13));
	Exception_t* V_14 = NULL;
	int32_t V_15 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)2))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)3)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0040_1;
		}

IL_0015_1:
		{
			goto IL_028d_1;
		}

IL_001a_1:
		{
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_5);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), NULL);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), 0);
		}

IL_0040_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				switch (L_6)
				{
					case 0:
					{
						goto IL_0055_2;
					}
					case 1:
					{
						goto IL_0057_2;
					}
					case 2:
					{
						goto IL_005c_2;
					}
				}
			}
			{
				goto IL_0061_2;
			}

IL_0055_2:
			{
				goto IL_00d0_2;
			}

IL_0057_2:
			{
				goto IL_015a_2;
			}

IL_005c_2:
			{
				goto IL_01e7_2;
			}

IL_0061_2:
			{
				il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3)), SizeOf_TAccumulate_tDCC353F21C7743622DE29FBC9E50AA60CB028A9D);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_7, SizeOf_TAccumulate_tDCC353F21C7743622DE29FBC9E50AA60CB028A9D);
				goto IL_0112_2;
			}

IL_0073_2:
			{
				Func_4_tACF12340039B5BCFBB5ED953C0B2BF68B8F74D25* L_8 = *(Func_4_tACF12340039B5BCFBB5ED953C0B2BF68B8F74D25**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
				il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)), SizeOf_TAccumulate_tDCC353F21C7743622DE29FBC9E50AA60CB028A9D);
				RuntimeObject* L_10 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_8);
				InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_9: *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_11: *(void**)L_11), L_12, (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_13);
				il2cpp_codegen_memcpy(V_3, L_13, SizeOf_UniTask_1_t07C57FFC0B987EA6C028805D16E51285DEBAF004);
				InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)V_3, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_14);
				il2cpp_codegen_memcpy(V_2, L_14, SizeOf_Awaiter_t0A2D40435396195AB2B11D0300E3980437E399CF);
				bool L_15;
				L_15 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				if (L_15)
				{
					goto IL_00ec_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_16);
				il2cpp_codegen_memcpy(L_17, V_2, SizeOf_Awaiter_t0A2D40435396195AB2B11D0300E3980437E399CF);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15), L_17, SizeOf_Awaiter_t0A2D40435396195AB2B11D0300E3980437E399CF);
				V_4 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CAggregateAwaitWithCancellationAsyncU3Ed__8_3_tC4A4A9DE2B534A7D5648BC4098FE4801348C8EB8**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
				goto IL_034e;
			}

IL_00d0_2:
			{
				il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15)), SizeOf_Awaiter_t0A2D40435396195AB2B11D0300E3980437E399CF);
				il2cpp_codegen_memcpy(V_2, L_18, SizeOf_Awaiter_t0A2D40435396195AB2B11D0300E3980437E399CF);
				il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15)))), SizeOf_Awaiter_t0A2D40435396195AB2B11D0300E3980437E399CF);
				int32_t L_19 = (-1);
				V_0 = L_19;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_19);
			}

IL_00ec_2:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, (Il2CppFullySharedGenericAny*)L_20);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_20, SizeOf_TAccumulate_tDCC353F21C7743622DE29FBC9E50AA60CB028A9D);
				il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_TAccumulate_tDCC353F21C7743622DE29FBC9E50AA60CB028A9D);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_21, SizeOf_TAccumulate_tDCC353F21C7743622DE29FBC9E50AA60CB028A9D);
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)))), SizeOf_TAccumulate_tDCC353F21C7743622DE29FBC9E50AA60CB028A9D);
			}

IL_0112_2:
			{
				RuntimeObject* L_22 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck(L_22);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_23;
				L_23 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_22);
				V_7 = L_23;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_24;
				L_24 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_6 = L_24;
				bool L_25;
				L_25 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_6), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_25)
				{
					goto IL_0177_2;
				}
			}
			{
				int32_t L_26 = 1;
				V_0 = L_26;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_26);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_27 = V_6;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16), L_27);
				V_4 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAggregateAwaitWithCancellationAsyncU3Ed__8_3_tC4A4A9DE2B534A7D5648BC4098FE4801348C8EB8**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				goto IL_034e;
			}

IL_015a_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16));
				V_6 = L_28;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_29 = (-1);
				V_0 = L_29;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_29);
			}

IL_0177_2:
			{
				bool L_30;
				L_30 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_30);
				bool L_31 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
				V_5 = L_31;
				bool L_32 = V_5;
				if (L_32)
				{
					goto IL_0073_2;
				}
			}
			{
				Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E* L_33 = *(Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				il2cpp_codegen_memcpy(L_34, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)), SizeOf_TAccumulate_tDCC353F21C7743622DE29FBC9E50AA60CB028A9D);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_35 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_33);
				InvokerActionInvoker3< Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)), il2cpp_rgctx_method(method->klass->rgctx_data, 24), L_33, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_34: *(void**)L_34), L_35, (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_36);
				il2cpp_codegen_memcpy(V_9, L_36, SizeOf_UniTask_1_t7765F4F34D35658914F6DD2D6828A4F0D46D64C2);
				InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)), il2cpp_rgctx_method(method->klass->rgctx_data, 26), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)V_9, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_37);
				il2cpp_codegen_memcpy(V_8, L_37, SizeOf_Awaiter_t5B0ECB50DAB658DA44F358F226B3490BCF55592E);
				bool L_38;
				L_38 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_8, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
				if (L_38)
				{
					goto IL_0204_2;
				}
			}
			{
				int32_t L_39 = 2;
				V_0 = L_39;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_39);
				il2cpp_codegen_memcpy(L_40, V_8, SizeOf_Awaiter_t5B0ECB50DAB658DA44F358F226B3490BCF55592E);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),17), L_40, SizeOf_Awaiter_t5B0ECB50DAB658DA44F358F226B3490BCF55592E);
				V_4 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CAggregateAwaitWithCancellationAsyncU3Ed__8_3_tC4A4A9DE2B534A7D5648BC4098FE4801348C8EB8**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_8, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 31));
				goto IL_034e;
			}

IL_01e7_2:
			{
				il2cpp_codegen_memcpy(L_41, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),17)), SizeOf_Awaiter_t5B0ECB50DAB658DA44F358F226B3490BCF55592E);
				il2cpp_codegen_memcpy(V_8, L_41, SizeOf_Awaiter_t5B0ECB50DAB658DA44F358F226B3490BCF55592E);
				il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),17)))), SizeOf_Awaiter_t5B0ECB50DAB658DA44F358F226B3490BCF55592E);
				int32_t L_42 = (-1);
				V_0 = L_42;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_42);
			}

IL_0204_2:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)), il2cpp_rgctx_method(method->klass->rgctx_data, 33), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_8, (Il2CppFullySharedGenericAny*)L_43);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14), L_43, SizeOf_TResult_tC4BDA9A19F0D02B02782D35A9E207E7978CFB286);
				il2cpp_codegen_memcpy(L_44, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14)), SizeOf_TResult_tC4BDA9A19F0D02B02782D35A9E207E7978CFB286);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_44, SizeOf_TResult_tC4BDA9A19F0D02B02782D35A9E207E7978CFB286);
				goto IL_021f_2;
			}

IL_021f_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), 1);
				goto IL_0234_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0228_1;
			}
			throw e;
		}

CATCH_0228_1:
		{
			RuntimeObject* L_45 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_10 = L_45;
			RuntimeObject* L_46 = V_10;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_46);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0234_1;
		}

IL_0234_1:
		{
			RuntimeObject* L_47 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_47) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_48 = V_11;
			if (!L_48)
			{
				goto IL_02b3_1;
			}
		}
		{
			RuntimeObject* L_49 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			NullCheck((RuntimeObject*)L_49);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_50;
			L_50 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_49);
			V_13 = L_50;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_51;
			L_51 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_13), NULL);
			V_12 = L_51;
			bool L_52;
			L_52 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_12), NULL);
			if (L_52)
			{
				goto IL_02aa_1;
			}
		}
		{
			int32_t L_53 = 3;
			V_0 = L_53;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_53);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_54 = V_12;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),18), L_54);
			V_4 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAggregateAwaitWithCancellationAsyncU3Ed__8_3_tC4A4A9DE2B534A7D5648BC4098FE4801348C8EB8**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_12), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 35));
			goto IL_034e;
		}

IL_028d_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_55 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),18));
			V_12 = L_55;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),18)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_56 = (-1);
			V_0 = L_56;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_56);
		}

IL_02aa_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_12), NULL);
		}

IL_02b3_1:
		{
			RuntimeObject* L_57 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			V_10 = L_57;
			RuntimeObject* L_58 = V_10;
			if (!L_58)
			{
				goto IL_02dd_1;
			}
		}
		{
			RuntimeObject* L_59 = V_10;
			V_14 = ((Exception_t*)IsInstClass((RuntimeObject*)L_59, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_60 = V_14;
			if (L_60)
			{
				goto IL_02d0_1;
			}
		}
		{
			RuntimeObject* L_61 = V_10;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_61, method);
		}

IL_02d0_1:
		{
			Exception_t* L_62 = V_14;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_63;
			L_63 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_62, NULL);
			NullCheck(L_63);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_63, NULL);
		}

IL_02dd_1:
		{
			int32_t L_64 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
			V_15 = L_64;
			int32_t L_65 = V_15;
			if ((((int32_t)L_65) == ((int32_t)1)))
			{
				goto IL_02ec_1;
			}
		}
		{
			goto IL_02f5_1;
		}

IL_02ec_1:
		{
			il2cpp_codegen_memcpy(L_66, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TResult_tC4BDA9A19F0D02B02782D35A9E207E7978CFB286);
			il2cpp_codegen_memcpy(V_1, L_66, SizeOf_TResult_tC4BDA9A19F0D02B02782D35A9E207E7978CFB286);
			goto IL_0332;
		}

IL_02f5_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)))), SizeOf_TResult_tC4BDA9A19F0D02B02782D35A9E207E7978CFB286);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), (RuntimeObject*)NULL);
			goto IL_0332;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0311;
		}
		throw e;
	}

CATCH_0311:
	{
		Exception_t* L_67 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_14 = L_67;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), (RuntimeObject*)NULL);
		Exception_t* L_68 = V_14;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_68, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_034e;
	}

IL_0332:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_69, V_1, SizeOf_TResult_tC4BDA9A19F0D02B02782D35A9E207E7978CFB286);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)), il2cpp_rgctx_method(method->klass->rgctx_data, 37), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 34)) ? L_69: *(void**)L_69));
	}

IL_034e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAggregateAwaitWithCancellationAsyncU3Ed__8_3_SetStateMachine_mD3B016764663D8A25BC1C4DBBF95D73286B5D7CE_gshared (U3CAggregateAwaitWithCancellationAsyncU3Ed__8_3_tC4A4A9DE2B534A7D5648BC4098FE4801348C8EB8* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAllAsyncU3Ed__0_1__ctor_mADA20233D07DBF5F3E281E7C672D5D5797B57FA2_gshared (U3CAllAsyncU3Ed__0_1_t4DB60B2ED4D6871EE5403E4F5BAA6ABABD50E200* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAllAsyncU3Ed__0_1_MoveNext_m7E28E7BA88C555808956A611A129D13E1363F14E_gshared (U3CAllAsyncU3Ed__0_1_t4DB60B2ED4D6871EE5403E4F5BAA6ABABD50E200* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tE113B06A1DE6E1321891E630B7D20460C3D39436 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_tE113B06A1DE6E1321891E630B7D20460C3D39436);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_4;
	memset((&V_4), 0, sizeof(V_4));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_5;
	memset((&V_5), 0, sizeof(V_5));
	U3CAllAsyncU3Ed__0_1_t4DB60B2ED4D6871EE5403E4F5BAA6ABABD50E200* V_6 = NULL;
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
			goto IL_003f_1;
		}

IL_0014_1:
		{
			goto IL_016c_1;
		}

IL_0019_1:
		{
			RuntimeObject* L_3 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = __this->___cancellationToken;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__1 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)L_5);
			__this->___U3CU3Es__2 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)NULL);
			__this->___U3CU3Es__3 = 0;
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
				goto IL_00be_2;
			}

IL_0047_2:
			{
				goto IL_0076_2;
			}

IL_004a_2:
			{
				Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = __this->___predicate;
				RuntimeObject* L_8 = __this->___U3CeU3E5__1;
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				NullCheck(L_7);
				bool L_10;
				L_10 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_9: *(void**)L_9));
				V_2 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
				bool L_11 = V_2;
				if (!L_11)
				{
					goto IL_0075_2;
				}
			}
			{
				__this->___U3CU3Es__4 = (bool)0;
				goto IL_00fe_2;
			}

IL_0075_2:
			{
			}

IL_0076_2:
			{
				RuntimeObject* L_12 = __this->___U3CeU3E5__1;
				NullCheck(L_12);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_13;
				L_13 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_12);
				V_5 = L_13;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_14;
				L_14 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_5), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_4 = L_14;
				bool L_15;
				L_15 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_4), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_00db_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->___U3CU3E1__state = L_16;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_17 = V_4;
				__this->___U3CU3Eu__1 = L_17;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_6 = __this;
				AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_18 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAllAsyncU3Ed__0_1_t4DB60B2ED4D6871EE5403E4F5BAA6ABABD50E200**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_18, (&V_4), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_0221;
			}

IL_00be_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_19 = __this->___U3CU3Eu__1;
				V_4 = L_19;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_20 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state = L_21;
			}

IL_00db_2:
			{
				bool L_22;
				L_22 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_4), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5 = L_22;
				bool L_23 = __this->___U3CU3Es__5;
				V_3 = L_23;
				bool L_24 = V_3;
				if (L_24)
				{
					goto IL_004a_2;
				}
			}
			{
				__this->___U3CU3Es__4 = (bool)1;
				goto IL_00fe_2;
			}

IL_00fe_2:
			{
				__this->___U3CU3Es__3 = 1;
				goto IL_0113_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0107_1;
			}
			throw e;
		}

CATCH_0107_1:
		{
			RuntimeObject* L_25 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_7 = L_25;
			RuntimeObject* L_26 = V_7;
			__this->___U3CU3Es__2 = L_26;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)L_26);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0113_1;
		}

IL_0113_1:
		{
			RuntimeObject* L_27 = __this->___U3CeU3E5__1;
			V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_27) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_28 = V_8;
			if (!L_28)
			{
				goto IL_0192_1;
			}
		}
		{
			RuntimeObject* L_29 = __this->___U3CeU3E5__1;
			NullCheck((RuntimeObject*)L_29);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_30;
			L_30 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
			V_10 = L_30;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_31;
			L_31 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_10), NULL);
			V_9 = L_31;
			bool L_32;
			L_32 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_9), NULL);
			if (L_32)
			{
				goto IL_0189_1;
			}
		}
		{
			int32_t L_33 = 1;
			V_0 = L_33;
			__this->___U3CU3E1__state = L_33;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_34 = V_9;
			__this->___U3CU3Eu__2 = L_34;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
			V_6 = __this;
			AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_35 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAllAsyncU3Ed__0_1_t4DB60B2ED4D6871EE5403E4F5BAA6ABABD50E200**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_35, (&V_9), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_0221;
		}

IL_016c_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36 = __this->___U3CU3Eu__2;
			V_9 = L_36;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_37 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_37, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_38 = (-1);
			V_0 = L_38;
			__this->___U3CU3E1__state = L_38;
		}

IL_0189_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_9), NULL);
		}

IL_0192_1:
		{
			RuntimeObject* L_39 = __this->___U3CU3Es__2;
			V_7 = L_39;
			RuntimeObject* L_40 = V_7;
			if (!L_40)
			{
				goto IL_01bc_1;
			}
		}
		{
			RuntimeObject* L_41 = V_7;
			V_11 = ((Exception_t*)IsInstClass((RuntimeObject*)L_41, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_42 = V_11;
			if (L_42)
			{
				goto IL_01af_1;
			}
		}
		{
			RuntimeObject* L_43 = V_7;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, method);
		}

IL_01af_1:
		{
			Exception_t* L_44 = V_11;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_45;
			L_45 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_44, NULL);
			NullCheck(L_45);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_45, NULL);
		}

IL_01bc_1:
		{
			int32_t L_46 = __this->___U3CU3Es__3;
			V_12 = L_46;
			int32_t L_47 = V_12;
			if ((((int32_t)L_47) == ((int32_t)1)))
			{
				goto IL_01cb_1;
			}
		}
		{
			goto IL_01d4_1;
		}

IL_01cb_1:
		{
			bool L_48 = __this->___U3CU3Es__4;
			V_1 = L_48;
			goto IL_0205;
		}

IL_01d4_1:
		{
			__this->___U3CU3Es__2 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)NULL);
			__this->___U3CeU3E5__1 = (RuntimeObject*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)(RuntimeObject*)NULL);
			goto IL_0205;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01e4;
		}
		throw e;
	}

CATCH_01e4:
	{
		Exception_t* L_49 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_11 = L_49;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__1 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_50 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder);
		Exception_t* L_51 = V_11;
		AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_inline(L_50, L_51, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0221;
	}

IL_0205:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__1 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_52 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder);
		bool L_53 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_inline(L_52, L_53, AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
	}

IL_0221:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAllAsyncU3Ed__0_1_SetStateMachine_m13CD59CD99D394220C40F594D348E67C735BFE5E_gshared (U3CAllAsyncU3Ed__0_1_t4DB60B2ED4D6871EE5403E4F5BAA6ABABD50E200* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAllAwaitAsyncU3Ed__1_1__ctor_m8922BAE952964FE14A1CD0352926C7E12D3E3425_gshared (U3CAllAwaitAsyncU3Ed__1_1_t90324070882EB71F231EAEC0E4C1BB75C7ACDF24* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAllAwaitAsyncU3Ed__1_1_MoveNext_m5A476706C3029EB06681DAAC296AB6673D3515F9_gshared (U3CAllAwaitAsyncU3Ed__1_1_t90324070882EB71F231EAEC0E4C1BB75C7ACDF24* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t2F6714835CF118627D392EC85CD82E938E6DE72B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t2F6714835CF118627D392EC85CD82E938E6DE72B);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CAllAwaitAsyncU3Ed__1_1_t90324070882EB71F231EAEC0E4C1BB75C7ACDF24* V_5 = NULL;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
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
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0040_1;
		}

IL_0015_1:
		{
			goto IL_01e7_1;
		}

IL_001a_1:
		{
			RuntimeObject* L_3 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = __this->___cancellationToken;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__1 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)L_5);
			__this->___U3CU3Es__2 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)NULL);
			__this->___U3CU3Es__3 = 0;
		}

IL_0040_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_004c_2;
				}
			}
			{
				goto IL_0046_2;
			}

IL_0046_2:
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_004e_2;
				}
			}
			{
				goto IL_0053_2;
			}

IL_004c_2:
			{
				goto IL_00ab_2;
			}

IL_004e_2:
			{
				goto IL_0137_2;
			}

IL_0053_2:
			{
				goto IL_00ef_2;
			}

IL_0059_2:
			{
				Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C* L_8 = __this->___predicate;
				RuntimeObject* L_9 = __this->___U3CeU3E5__1;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_11;
				L_11 = InvokerFuncInvoker1< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
				V_4 = L_11;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_12;
				L_12 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_3 = L_12;
				bool L_13;
				L_13 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_3), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_00c7_2;
				}
			}
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->___U3CU3E1__state = L_14;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_15 = V_3;
				__this->___U3CU3Eu__1 = L_15;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_16 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAllAwaitAsyncU3Ed__1_1_t90324070882EB71F231EAEC0E4C1BB75C7ACDF24**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_16, (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_029c;
			}

IL_00ab_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_17 = __this->___U3CU3Eu__1;
				V_3 = L_17;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_18 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_18, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state = L_19;
			}

IL_00c7_2:
			{
				bool L_20;
				L_20 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5 = L_20;
				bool L_21 = __this->___U3CU3Es__5;
				V_2 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
				bool L_22 = V_2;
				if (!L_22)
				{
					goto IL_00ee_2;
				}
			}
			{
				__this->___U3CU3Es__4 = (bool)0;
				goto IL_0179_2;
			}

IL_00ee_2:
			{
			}

IL_00ef_2:
			{
				RuntimeObject* L_23 = __this->___U3CeU3E5__1;
				NullCheck(L_23);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_24;
				L_24 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_23);
				V_4 = L_24;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_25;
				L_25 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_7 = L_25;
				bool L_26;
				L_26 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_26)
				{
					goto IL_0154_2;
				}
			}
			{
				int32_t L_27 = 1;
				V_0 = L_27;
				__this->___U3CU3E1__state = L_27;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28 = V_7;
				__this->___U3CU3Eu__1 = L_28;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_29 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAllAwaitAsyncU3Ed__1_1_t90324070882EB71F231EAEC0E4C1BB75C7ACDF24**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_29, (&V_7), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_029c;
			}

IL_0137_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_30 = __this->___U3CU3Eu__1;
				V_7 = L_30;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_31 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_31, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_32 = (-1);
				V_0 = L_32;
				__this->___U3CU3E1__state = L_32;
			}

IL_0154_2:
			{
				bool L_33;
				L_33 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_33;
				bool L_34 = __this->___U3CU3Es__6;
				V_6 = L_34;
				bool L_35 = V_6;
				if (L_35)
				{
					goto IL_0059_2;
				}
			}
			{
				__this->___U3CU3Es__4 = (bool)1;
				goto IL_0179_2;
			}

IL_0179_2:
			{
				__this->___U3CU3Es__3 = 1;
				goto IL_018e_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0182_1;
			}
			throw e;
		}

CATCH_0182_1:
		{
			RuntimeObject* L_36 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_8 = L_36;
			RuntimeObject* L_37 = V_8;
			__this->___U3CU3Es__2 = L_37;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)L_37);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_018e_1;
		}

IL_018e_1:
		{
			RuntimeObject* L_38 = __this->___U3CeU3E5__1;
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_38) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_39 = V_9;
			if (!L_39)
			{
				goto IL_020d_1;
			}
		}
		{
			RuntimeObject* L_40 = __this->___U3CeU3E5__1;
			NullCheck((RuntimeObject*)L_40);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_41;
			L_41 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_40);
			V_11 = L_41;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_42;
			L_42 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_11), NULL);
			V_10 = L_42;
			bool L_43;
			L_43 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_43)
			{
				goto IL_0204_1;
			}
		}
		{
			int32_t L_44 = 2;
			V_0 = L_44;
			__this->___U3CU3E1__state = L_44;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_45 = V_10;
			__this->___U3CU3Eu__2 = L_45;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
			V_5 = __this;
			AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_46 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAllAwaitAsyncU3Ed__1_1_t90324070882EB71F231EAEC0E4C1BB75C7ACDF24**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_46, (&V_10), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_029c;
		}

IL_01e7_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47 = __this->___U3CU3Eu__2;
			V_10 = L_47;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_48 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_48, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_49 = (-1);
			V_0 = L_49;
			__this->___U3CU3E1__state = L_49;
		}

IL_0204_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_020d_1:
		{
			RuntimeObject* L_50 = __this->___U3CU3Es__2;
			V_8 = L_50;
			RuntimeObject* L_51 = V_8;
			if (!L_51)
			{
				goto IL_0237_1;
			}
		}
		{
			RuntimeObject* L_52 = V_8;
			V_12 = ((Exception_t*)IsInstClass((RuntimeObject*)L_52, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_53 = V_12;
			if (L_53)
			{
				goto IL_022a_1;
			}
		}
		{
			RuntimeObject* L_54 = V_8;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_54, method);
		}

IL_022a_1:
		{
			Exception_t* L_55 = V_12;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_56;
			L_56 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_55, NULL);
			NullCheck(L_56);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_56, NULL);
		}

IL_0237_1:
		{
			int32_t L_57 = __this->___U3CU3Es__3;
			V_13 = L_57;
			int32_t L_58 = V_13;
			if ((((int32_t)L_58) == ((int32_t)1)))
			{
				goto IL_0246_1;
			}
		}
		{
			goto IL_024f_1;
		}

IL_0246_1:
		{
			bool L_59 = __this->___U3CU3Es__4;
			V_1 = L_59;
			goto IL_0280;
		}

IL_024f_1:
		{
			__this->___U3CU3Es__2 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)NULL);
			__this->___U3CeU3E5__1 = (RuntimeObject*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)(RuntimeObject*)NULL);
			goto IL_0280;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_025f;
		}
		throw e;
	}

CATCH_025f:
	{
		Exception_t* L_60 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_12 = L_60;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__1 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_61 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder);
		Exception_t* L_62 = V_12;
		AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_inline(L_61, L_62, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_029c;
	}

IL_0280:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__1 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_63 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder);
		bool L_64 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_inline(L_63, L_64, AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
	}

IL_029c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAllAwaitAsyncU3Ed__1_1_SetStateMachine_m831D0FC6841EEF4CC97CC52F0D11F21B89E757E3_gshared (U3CAllAwaitAsyncU3Ed__1_1_t90324070882EB71F231EAEC0E4C1BB75C7ACDF24* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAllAwaitWithCancellationAsyncU3Ed__2_1__ctor_m26A328C61D40BC4A8FC636BC07CC79B15C10AFA7_gshared (U3CAllAwaitWithCancellationAsyncU3Ed__2_1_t8B671C9A66D49DAEBEFE05284EE359265A8BBC8A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAllAwaitWithCancellationAsyncU3Ed__2_1_MoveNext_mFB99D0EA2F31D6BD120726348CE202C17F57A395_gshared (U3CAllAwaitWithCancellationAsyncU3Ed__2_1_t8B671C9A66D49DAEBEFE05284EE359265A8BBC8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t772ABD16774E474502EEF5A0DFB5592ABFA9D43D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t772ABD16774E474502EEF5A0DFB5592ABFA9D43D);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CAllAwaitWithCancellationAsyncU3Ed__2_1_t8B671C9A66D49DAEBEFE05284EE359265A8BBC8A* V_5 = NULL;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
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
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0040_1;
		}

IL_0015_1:
		{
			goto IL_01ed_1;
		}

IL_001a_1:
		{
			RuntimeObject* L_3 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = __this->___cancellationToken;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__1 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)L_5);
			__this->___U3CU3Es__2 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)NULL);
			__this->___U3CU3Es__3 = 0;
		}

IL_0040_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_004c_2;
				}
			}
			{
				goto IL_0046_2;
			}

IL_0046_2:
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_004e_2;
				}
			}
			{
				goto IL_0053_2;
			}

IL_004c_2:
			{
				goto IL_00b1_2;
			}

IL_004e_2:
			{
				goto IL_013d_2;
			}

IL_0053_2:
			{
				goto IL_00f5_2;
			}

IL_0059_2:
			{
				Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814* L_8 = __this->___predicate;
				RuntimeObject* L_9 = __this->___U3CeU3E5__1;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_11 = __this->___cancellationToken;
				NullCheck(L_8);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_12;
				L_12 = InvokerFuncInvoker2< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10), L_11);
				V_4 = L_12;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_13;
				L_13 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_3 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_3), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00cd_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->___U3CU3E1__state = L_15;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_16 = V_3;
				__this->___U3CU3Eu__1 = L_16;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_17 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAllAwaitWithCancellationAsyncU3Ed__2_1_t8B671C9A66D49DAEBEFE05284EE359265A8BBC8A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_02a2;
			}

IL_00b1_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_18 = __this->___U3CU3Eu__1;
				V_3 = L_18;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_19 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state = L_20;
			}

IL_00cd_2:
			{
				bool L_21;
				L_21 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5 = L_21;
				bool L_22 = __this->___U3CU3Es__5;
				V_2 = (bool)((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
				bool L_23 = V_2;
				if (!L_23)
				{
					goto IL_00f4_2;
				}
			}
			{
				__this->___U3CU3Es__4 = (bool)0;
				goto IL_017f_2;
			}

IL_00f4_2:
			{
			}

IL_00f5_2:
			{
				RuntimeObject* L_24 = __this->___U3CeU3E5__1;
				NullCheck(L_24);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_25;
				L_25 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_24);
				V_4 = L_25;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_26;
				L_26 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_7 = L_26;
				bool L_27;
				L_27 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_27)
				{
					goto IL_015a_2;
				}
			}
			{
				int32_t L_28 = 1;
				V_0 = L_28;
				__this->___U3CU3E1__state = L_28;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29 = V_7;
				__this->___U3CU3Eu__1 = L_29;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_30 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAllAwaitWithCancellationAsyncU3Ed__2_1_t8B671C9A66D49DAEBEFE05284EE359265A8BBC8A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_30, (&V_7), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_02a2;
			}

IL_013d_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_31 = __this->___U3CU3Eu__1;
				V_7 = L_31;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_32 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_32, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_33 = (-1);
				V_0 = L_33;
				__this->___U3CU3E1__state = L_33;
			}

IL_015a_2:
			{
				bool L_34;
				L_34 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_34;
				bool L_35 = __this->___U3CU3Es__6;
				V_6 = L_35;
				bool L_36 = V_6;
				if (L_36)
				{
					goto IL_0059_2;
				}
			}
			{
				__this->___U3CU3Es__4 = (bool)1;
				goto IL_017f_2;
			}

IL_017f_2:
			{
				__this->___U3CU3Es__3 = 1;
				goto IL_0194_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0188_1;
			}
			throw e;
		}

CATCH_0188_1:
		{
			RuntimeObject* L_37 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_8 = L_37;
			RuntimeObject* L_38 = V_8;
			__this->___U3CU3Es__2 = L_38;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)L_38);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0194_1;
		}

IL_0194_1:
		{
			RuntimeObject* L_39 = __this->___U3CeU3E5__1;
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_39) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_40 = V_9;
			if (!L_40)
			{
				goto IL_0213_1;
			}
		}
		{
			RuntimeObject* L_41 = __this->___U3CeU3E5__1;
			NullCheck((RuntimeObject*)L_41);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_42;
			L_42 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
			V_11 = L_42;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_43;
			L_43 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_11), NULL);
			V_10 = L_43;
			bool L_44;
			L_44 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_44)
			{
				goto IL_020a_1;
			}
		}
		{
			int32_t L_45 = 2;
			V_0 = L_45;
			__this->___U3CU3E1__state = L_45;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_46 = V_10;
			__this->___U3CU3Eu__2 = L_46;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
			V_5 = __this;
			AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_47 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAllAwaitWithCancellationAsyncU3Ed__2_1_t8B671C9A66D49DAEBEFE05284EE359265A8BBC8A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_47, (&V_10), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_02a2;
		}

IL_01ed_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_48 = __this->___U3CU3Eu__2;
			V_10 = L_48;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_49 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_49, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_50 = (-1);
			V_0 = L_50;
			__this->___U3CU3E1__state = L_50;
		}

IL_020a_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_0213_1:
		{
			RuntimeObject* L_51 = __this->___U3CU3Es__2;
			V_8 = L_51;
			RuntimeObject* L_52 = V_8;
			if (!L_52)
			{
				goto IL_023d_1;
			}
		}
		{
			RuntimeObject* L_53 = V_8;
			V_12 = ((Exception_t*)IsInstClass((RuntimeObject*)L_53, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_54 = V_12;
			if (L_54)
			{
				goto IL_0230_1;
			}
		}
		{
			RuntimeObject* L_55 = V_8;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_55, method);
		}

IL_0230_1:
		{
			Exception_t* L_56 = V_12;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_57;
			L_57 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_56, NULL);
			NullCheck(L_57);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_57, NULL);
		}

IL_023d_1:
		{
			int32_t L_58 = __this->___U3CU3Es__3;
			V_13 = L_58;
			int32_t L_59 = V_13;
			if ((((int32_t)L_59) == ((int32_t)1)))
			{
				goto IL_024c_1;
			}
		}
		{
			goto IL_0255_1;
		}

IL_024c_1:
		{
			bool L_60 = __this->___U3CU3Es__4;
			V_1 = L_60;
			goto IL_0286;
		}

IL_0255_1:
		{
			__this->___U3CU3Es__2 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)NULL);
			__this->___U3CeU3E5__1 = (RuntimeObject*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)(RuntimeObject*)NULL);
			goto IL_0286;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0265;
		}
		throw e;
	}

CATCH_0265:
	{
		Exception_t* L_61 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_12 = L_61;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__1 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_62 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder);
		Exception_t* L_63 = V_12;
		AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_inline(L_62, L_63, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_02a2;
	}

IL_0286:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__1 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_64 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder);
		bool L_65 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_inline(L_64, L_65, AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
	}

IL_02a2:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAllAwaitWithCancellationAsyncU3Ed__2_1_SetStateMachine_m13876C0CE0AA67C762791E08386022E9ADFB0A45_gshared (U3CAllAwaitWithCancellationAsyncU3Ed__2_1_t8B671C9A66D49DAEBEFE05284EE359265A8BBC8A* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnyAsyncU3Ed__0_1__ctor_m1F9E11D0EC7F2D4AC5B7B88AE2A8D84492F5279B_gshared (U3CAnyAsyncU3Ed__0_1_tC5A26A942407B0F559D11031DC5D9E153A3C25AE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnyAsyncU3Ed__0_1_MoveNext_m5AC2432EA1ED3C8F7653E9B4CAACB0E9DC09F8CC_gshared (U3CAnyAsyncU3Ed__0_1_tC5A26A942407B0F559D11031DC5D9E153A3C25AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CAnyAsyncU3Ed__0_1_tC5A26A942407B0F559D11031DC5D9E153A3C25AE* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t* V_10 = NULL;
	int32_t V_11 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
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
			goto IL_003f_1;
		}

IL_0014_1:
		{
			goto IL_0142_1;
		}

IL_0019_1:
		{
			RuntimeObject* L_3 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = __this->___cancellationToken;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__1 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)L_5);
			__this->___U3CU3Es__2 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)NULL);
			__this->___U3CU3Es__3 = 0;
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
				RuntimeObject* L_7 = __this->___U3CeU3E5__1;
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
				__this->___U3CU3E1__state = L_11;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_12 = V_3;
				__this->___U3CU3Eu__1 = L_12;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_13 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAnyAsyncU3Ed__0_1_tC5A26A942407B0F559D11031DC5D9E153A3C25AE**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_13, (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
				goto IL_01f7;
			}

IL_008e_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_14 = __this->___U3CU3Eu__1;
				V_3 = L_14;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_15 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_15, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_16 = (-1);
				V_0 = L_16;
				__this->___U3CU3E1__state = L_16;
			}

IL_00aa_2:
			{
				bool L_17;
				L_17 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5 = L_17;
				bool L_18 = __this->___U3CU3Es__5;
				V_2 = L_18;
				bool L_19 = V_2;
				if (!L_19)
				{
					goto IL_00cb_2;
				}
			}
			{
				__this->___U3CU3Es__4 = (bool)1;
				goto IL_00d4_2;
			}

IL_00cb_2:
			{
				__this->___U3CU3Es__4 = (bool)0;
				goto IL_00d4_2;
			}

IL_00d4_2:
			{
				__this->___U3CU3Es__3 = 1;
				goto IL_00e9_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00dd_1;
			}
			throw e;
		}

CATCH_00dd_1:
		{
			RuntimeObject* L_20 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_6 = L_20;
			RuntimeObject* L_21 = V_6;
			__this->___U3CU3Es__2 = L_21;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)L_21);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_00e9_1;
		}

IL_00e9_1:
		{
			RuntimeObject* L_22 = __this->___U3CeU3E5__1;
			V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_22) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_23 = V_7;
			if (!L_23)
			{
				goto IL_0168_1;
			}
		}
		{
			RuntimeObject* L_24 = __this->___U3CeU3E5__1;
			NullCheck((RuntimeObject*)L_24);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_25;
			L_25 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_24);
			V_9 = L_25;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_26;
			L_26 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_9), NULL);
			V_8 = L_26;
			bool L_27;
			L_27 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_8), NULL);
			if (L_27)
			{
				goto IL_015f_1;
			}
		}
		{
			int32_t L_28 = 1;
			V_0 = L_28;
			__this->___U3CU3E1__state = L_28;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_29 = V_8;
			__this->___U3CU3Eu__2 = L_29;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
			V_5 = __this;
			AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_30 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAnyAsyncU3Ed__0_1_tC5A26A942407B0F559D11031DC5D9E153A3C25AE**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_30, (&V_8), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
			goto IL_01f7;
		}

IL_0142_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_31 = __this->___U3CU3Eu__2;
			V_8 = L_31;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_32 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_32, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_33 = (-1);
			V_0 = L_33;
			__this->___U3CU3E1__state = L_33;
		}

IL_015f_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_8), NULL);
		}

IL_0168_1:
		{
			RuntimeObject* L_34 = __this->___U3CU3Es__2;
			V_6 = L_34;
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_0192_1;
			}
		}
		{
			RuntimeObject* L_36 = V_6;
			V_10 = ((Exception_t*)IsInstClass((RuntimeObject*)L_36, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_37 = V_10;
			if (L_37)
			{
				goto IL_0185_1;
			}
		}
		{
			RuntimeObject* L_38 = V_6;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_38, method);
		}

IL_0185_1:
		{
			Exception_t* L_39 = V_10;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_40;
			L_40 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_39, NULL);
			NullCheck(L_40);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_40, NULL);
		}

IL_0192_1:
		{
			int32_t L_41 = __this->___U3CU3Es__3;
			V_11 = L_41;
			int32_t L_42 = V_11;
			if ((((int32_t)L_42) == ((int32_t)1)))
			{
				goto IL_01a1_1;
			}
		}
		{
			goto IL_01aa_1;
		}

IL_01a1_1:
		{
			bool L_43 = __this->___U3CU3Es__4;
			V_1 = L_43;
			goto IL_01db;
		}

IL_01aa_1:
		{
			__this->___U3CU3Es__2 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)NULL);
			__this->___U3CeU3E5__1 = (RuntimeObject*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)(RuntimeObject*)NULL);
			goto IL_01db;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01ba;
		}
		throw e;
	}

CATCH_01ba:
	{
		Exception_t* L_44 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_10 = L_44;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__1 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_45 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder);
		Exception_t* L_46 = V_10;
		AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_inline(L_45, L_46, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_01f7;
	}

IL_01db:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__1 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_47 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder);
		bool L_48 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_inline(L_47, L_48, AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
	}

IL_01f7:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnyAsyncU3Ed__0_1_SetStateMachine_m1B18C84FC24307E14F4D3CE49D3F0A76E68C6E04_gshared (U3CAnyAsyncU3Ed__0_1_tC5A26A942407B0F559D11031DC5D9E153A3C25AE* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnyAsyncU3Ed__1_1__ctor_m27ED3B80A0E11C68BDF706EFEADAB49BF391F8F6_gshared (U3CAnyAsyncU3Ed__1_1_t8E72A4C00F10B48E01D1E28C464D980B19ACDCAB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnyAsyncU3Ed__1_1_MoveNext_m955DF517A87E5982C49E847A450D0D86F7D9F84A_gshared (U3CAnyAsyncU3Ed__1_1_t8E72A4C00F10B48E01D1E28C464D980B19ACDCAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tFE2C2BD199A52F141D8920CBB996FA9087889629 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_tFE2C2BD199A52F141D8920CBB996FA9087889629);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_4;
	memset((&V_4), 0, sizeof(V_4));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_5;
	memset((&V_5), 0, sizeof(V_5));
	U3CAnyAsyncU3Ed__1_1_t8E72A4C00F10B48E01D1E28C464D980B19ACDCAB* V_6 = NULL;
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
			goto IL_003f_1;
		}

IL_0014_1:
		{
			goto IL_0169_1;
		}

IL_0019_1:
		{
			RuntimeObject* L_3 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = __this->___cancellationToken;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__1 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)L_5);
			__this->___U3CU3Es__2 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)NULL);
			__this->___U3CU3Es__3 = 0;
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
				goto IL_00bb_2;
			}

IL_0047_2:
			{
				goto IL_0073_2;
			}

IL_004a_2:
			{
				Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = __this->___predicate;
				RuntimeObject* L_8 = __this->___U3CeU3E5__1;
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				NullCheck(L_7);
				bool L_10;
				L_10 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_9: *(void**)L_9));
				V_2 = L_10;
				bool L_11 = V_2;
				if (!L_11)
				{
					goto IL_0072_2;
				}
			}
			{
				__this->___U3CU3Es__4 = (bool)1;
				goto IL_00fb_2;
			}

IL_0072_2:
			{
			}

IL_0073_2:
			{
				RuntimeObject* L_12 = __this->___U3CeU3E5__1;
				NullCheck(L_12);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_13;
				L_13 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_12);
				V_5 = L_13;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_14;
				L_14 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_5), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_4 = L_14;
				bool L_15;
				L_15 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_4), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_00d8_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->___U3CU3E1__state = L_16;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_17 = V_4;
				__this->___U3CU3Eu__1 = L_17;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_6 = __this;
				AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_18 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAnyAsyncU3Ed__1_1_t8E72A4C00F10B48E01D1E28C464D980B19ACDCAB**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_18, (&V_4), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_021e;
			}

IL_00bb_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_19 = __this->___U3CU3Eu__1;
				V_4 = L_19;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_20 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state = L_21;
			}

IL_00d8_2:
			{
				bool L_22;
				L_22 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_4), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5 = L_22;
				bool L_23 = __this->___U3CU3Es__5;
				V_3 = L_23;
				bool L_24 = V_3;
				if (L_24)
				{
					goto IL_004a_2;
				}
			}
			{
				__this->___U3CU3Es__4 = (bool)0;
				goto IL_00fb_2;
			}

IL_00fb_2:
			{
				__this->___U3CU3Es__3 = 1;
				goto IL_0110_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0104_1;
			}
			throw e;
		}

CATCH_0104_1:
		{
			RuntimeObject* L_25 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_7 = L_25;
			RuntimeObject* L_26 = V_7;
			__this->___U3CU3Es__2 = L_26;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)L_26);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0110_1;
		}

IL_0110_1:
		{
			RuntimeObject* L_27 = __this->___U3CeU3E5__1;
			V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_27) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_28 = V_8;
			if (!L_28)
			{
				goto IL_018f_1;
			}
		}
		{
			RuntimeObject* L_29 = __this->___U3CeU3E5__1;
			NullCheck((RuntimeObject*)L_29);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_30;
			L_30 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
			V_10 = L_30;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_31;
			L_31 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_10), NULL);
			V_9 = L_31;
			bool L_32;
			L_32 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_9), NULL);
			if (L_32)
			{
				goto IL_0186_1;
			}
		}
		{
			int32_t L_33 = 1;
			V_0 = L_33;
			__this->___U3CU3E1__state = L_33;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_34 = V_9;
			__this->___U3CU3Eu__2 = L_34;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
			V_6 = __this;
			AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_35 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAnyAsyncU3Ed__1_1_t8E72A4C00F10B48E01D1E28C464D980B19ACDCAB**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_35, (&V_9), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_021e;
		}

IL_0169_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36 = __this->___U3CU3Eu__2;
			V_9 = L_36;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_37 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_37, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_38 = (-1);
			V_0 = L_38;
			__this->___U3CU3E1__state = L_38;
		}

IL_0186_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_9), NULL);
		}

IL_018f_1:
		{
			RuntimeObject* L_39 = __this->___U3CU3Es__2;
			V_7 = L_39;
			RuntimeObject* L_40 = V_7;
			if (!L_40)
			{
				goto IL_01b9_1;
			}
		}
		{
			RuntimeObject* L_41 = V_7;
			V_11 = ((Exception_t*)IsInstClass((RuntimeObject*)L_41, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_42 = V_11;
			if (L_42)
			{
				goto IL_01ac_1;
			}
		}
		{
			RuntimeObject* L_43 = V_7;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, method);
		}

IL_01ac_1:
		{
			Exception_t* L_44 = V_11;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_45;
			L_45 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_44, NULL);
			NullCheck(L_45);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_45, NULL);
		}

IL_01b9_1:
		{
			int32_t L_46 = __this->___U3CU3Es__3;
			V_12 = L_46;
			int32_t L_47 = V_12;
			if ((((int32_t)L_47) == ((int32_t)1)))
			{
				goto IL_01c8_1;
			}
		}
		{
			goto IL_01d1_1;
		}

IL_01c8_1:
		{
			bool L_48 = __this->___U3CU3Es__4;
			V_1 = L_48;
			goto IL_0202;
		}

IL_01d1_1:
		{
			__this->___U3CU3Es__2 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)NULL);
			__this->___U3CeU3E5__1 = (RuntimeObject*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)(RuntimeObject*)NULL);
			goto IL_0202;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01e1;
		}
		throw e;
	}

CATCH_01e1:
	{
		Exception_t* L_49 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_11 = L_49;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__1 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_50 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder);
		Exception_t* L_51 = V_11;
		AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_inline(L_50, L_51, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_021e;
	}

IL_0202:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__1 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_52 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder);
		bool L_53 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_inline(L_52, L_53, AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
	}

IL_021e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnyAsyncU3Ed__1_1_SetStateMachine_m33B19B9901CB7FE5104F8A3DAA7C9A3F36F3E17C_gshared (U3CAnyAsyncU3Ed__1_1_t8E72A4C00F10B48E01D1E28C464D980B19ACDCAB* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnyAwaitAsyncU3Ed__2_1__ctor_m6D0BEF187FFD0841E025F8F1E79827D77DD8E1F3_gshared (U3CAnyAwaitAsyncU3Ed__2_1_t35E2FF0F0EA95D7A7F26DFCCEF9BF7694904DD25* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnyAwaitAsyncU3Ed__2_1_MoveNext_mA34CD6784BE2C959108502658029A90A57F723E0_gshared (U3CAnyAwaitAsyncU3Ed__2_1_t35E2FF0F0EA95D7A7F26DFCCEF9BF7694904DD25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tC1C140B65322C79E921DAD53C891831543F3EB34 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_tC1C140B65322C79E921DAD53C891831543F3EB34);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CAnyAwaitAsyncU3Ed__2_1_t35E2FF0F0EA95D7A7F26DFCCEF9BF7694904DD25* V_5 = NULL;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
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
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0040_1;
		}

IL_0015_1:
		{
			goto IL_01e4_1;
		}

IL_001a_1:
		{
			RuntimeObject* L_3 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = __this->___cancellationToken;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__1 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)L_5);
			__this->___U3CU3Es__2 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)NULL);
			__this->___U3CU3Es__3 = 0;
		}

IL_0040_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_004c_2;
				}
			}
			{
				goto IL_0046_2;
			}

IL_0046_2:
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_004e_2;
				}
			}
			{
				goto IL_0053_2;
			}

IL_004c_2:
			{
				goto IL_00ab_2;
			}

IL_004e_2:
			{
				goto IL_0134_2;
			}

IL_0053_2:
			{
				goto IL_00ec_2;
			}

IL_0059_2:
			{
				Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C* L_8 = __this->___predicate;
				RuntimeObject* L_9 = __this->___U3CeU3E5__1;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_11;
				L_11 = InvokerFuncInvoker1< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
				V_4 = L_11;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_12;
				L_12 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_3 = L_12;
				bool L_13;
				L_13 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_3), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_00c7_2;
				}
			}
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->___U3CU3E1__state = L_14;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_15 = V_3;
				__this->___U3CU3Eu__1 = L_15;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_16 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAnyAwaitAsyncU3Ed__2_1_t35E2FF0F0EA95D7A7F26DFCCEF9BF7694904DD25**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_16, (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0299;
			}

IL_00ab_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_17 = __this->___U3CU3Eu__1;
				V_3 = L_17;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_18 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_18, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state = L_19;
			}

IL_00c7_2:
			{
				bool L_20;
				L_20 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5 = L_20;
				bool L_21 = __this->___U3CU3Es__5;
				V_2 = L_21;
				bool L_22 = V_2;
				if (!L_22)
				{
					goto IL_00eb_2;
				}
			}
			{
				__this->___U3CU3Es__4 = (bool)1;
				goto IL_0176_2;
			}

IL_00eb_2:
			{
			}

IL_00ec_2:
			{
				RuntimeObject* L_23 = __this->___U3CeU3E5__1;
				NullCheck(L_23);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_24;
				L_24 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_23);
				V_4 = L_24;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_25;
				L_25 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_7 = L_25;
				bool L_26;
				L_26 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_26)
				{
					goto IL_0151_2;
				}
			}
			{
				int32_t L_27 = 1;
				V_0 = L_27;
				__this->___U3CU3E1__state = L_27;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28 = V_7;
				__this->___U3CU3Eu__1 = L_28;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_29 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAnyAwaitAsyncU3Ed__2_1_t35E2FF0F0EA95D7A7F26DFCCEF9BF7694904DD25**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_29, (&V_7), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0299;
			}

IL_0134_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_30 = __this->___U3CU3Eu__1;
				V_7 = L_30;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_31 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_31, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_32 = (-1);
				V_0 = L_32;
				__this->___U3CU3E1__state = L_32;
			}

IL_0151_2:
			{
				bool L_33;
				L_33 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_33;
				bool L_34 = __this->___U3CU3Es__6;
				V_6 = L_34;
				bool L_35 = V_6;
				if (L_35)
				{
					goto IL_0059_2;
				}
			}
			{
				__this->___U3CU3Es__4 = (bool)0;
				goto IL_0176_2;
			}

IL_0176_2:
			{
				__this->___U3CU3Es__3 = 1;
				goto IL_018b_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_017f_1;
			}
			throw e;
		}

CATCH_017f_1:
		{
			RuntimeObject* L_36 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_8 = L_36;
			RuntimeObject* L_37 = V_8;
			__this->___U3CU3Es__2 = L_37;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)L_37);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_018b_1;
		}

IL_018b_1:
		{
			RuntimeObject* L_38 = __this->___U3CeU3E5__1;
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_38) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_39 = V_9;
			if (!L_39)
			{
				goto IL_020a_1;
			}
		}
		{
			RuntimeObject* L_40 = __this->___U3CeU3E5__1;
			NullCheck((RuntimeObject*)L_40);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_41;
			L_41 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_40);
			V_11 = L_41;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_42;
			L_42 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_11), NULL);
			V_10 = L_42;
			bool L_43;
			L_43 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_43)
			{
				goto IL_0201_1;
			}
		}
		{
			int32_t L_44 = 2;
			V_0 = L_44;
			__this->___U3CU3E1__state = L_44;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_45 = V_10;
			__this->___U3CU3Eu__2 = L_45;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
			V_5 = __this;
			AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_46 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAnyAwaitAsyncU3Ed__2_1_t35E2FF0F0EA95D7A7F26DFCCEF9BF7694904DD25**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_46, (&V_10), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_0299;
		}

IL_01e4_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47 = __this->___U3CU3Eu__2;
			V_10 = L_47;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_48 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_48, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_49 = (-1);
			V_0 = L_49;
			__this->___U3CU3E1__state = L_49;
		}

IL_0201_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_020a_1:
		{
			RuntimeObject* L_50 = __this->___U3CU3Es__2;
			V_8 = L_50;
			RuntimeObject* L_51 = V_8;
			if (!L_51)
			{
				goto IL_0234_1;
			}
		}
		{
			RuntimeObject* L_52 = V_8;
			V_12 = ((Exception_t*)IsInstClass((RuntimeObject*)L_52, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_53 = V_12;
			if (L_53)
			{
				goto IL_0227_1;
			}
		}
		{
			RuntimeObject* L_54 = V_8;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_54, method);
		}

IL_0227_1:
		{
			Exception_t* L_55 = V_12;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_56;
			L_56 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_55, NULL);
			NullCheck(L_56);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_56, NULL);
		}

IL_0234_1:
		{
			int32_t L_57 = __this->___U3CU3Es__3;
			V_13 = L_57;
			int32_t L_58 = V_13;
			if ((((int32_t)L_58) == ((int32_t)1)))
			{
				goto IL_0243_1;
			}
		}
		{
			goto IL_024c_1;
		}

IL_0243_1:
		{
			bool L_59 = __this->___U3CU3Es__4;
			V_1 = L_59;
			goto IL_027d;
		}

IL_024c_1:
		{
			__this->___U3CU3Es__2 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)NULL);
			__this->___U3CeU3E5__1 = (RuntimeObject*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)(RuntimeObject*)NULL);
			goto IL_027d;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_025c;
		}
		throw e;
	}

CATCH_025c:
	{
		Exception_t* L_60 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_12 = L_60;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__1 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_61 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder);
		Exception_t* L_62 = V_12;
		AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_inline(L_61, L_62, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0299;
	}

IL_027d:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__1 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_63 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder);
		bool L_64 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_inline(L_63, L_64, AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
	}

IL_0299:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnyAwaitAsyncU3Ed__2_1_SetStateMachine_mF97AB56163246C709270D74216B2731ACD2D3F7A_gshared (U3CAnyAwaitAsyncU3Ed__2_1_t35E2FF0F0EA95D7A7F26DFCCEF9BF7694904DD25* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnyAwaitWithCancellationAsyncU3Ed__3_1__ctor_m87AEC15BA4A99B4316002E83085B85D19F2847D6_gshared (U3CAnyAwaitWithCancellationAsyncU3Ed__3_1_t80086595F6A0BBAFC39EF20D2C66D9AB55BF1411* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnyAwaitWithCancellationAsyncU3Ed__3_1_MoveNext_m5A9D735DD12532110AEFC0D245D72C2CED00B43B_gshared (U3CAnyAwaitWithCancellationAsyncU3Ed__3_1_t80086595F6A0BBAFC39EF20D2C66D9AB55BF1411* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t6FBF9150D602005A89F8B9AF5CD14285FF5DB88B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t6FBF9150D602005A89F8B9AF5CD14285FF5DB88B);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CAnyAwaitWithCancellationAsyncU3Ed__3_1_t80086595F6A0BBAFC39EF20D2C66D9AB55BF1411* V_5 = NULL;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
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
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0040_1;
		}

IL_0015_1:
		{
			goto IL_01ea_1;
		}

IL_001a_1:
		{
			RuntimeObject* L_3 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = __this->___cancellationToken;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__1 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)L_5);
			__this->___U3CU3Es__2 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)NULL);
			__this->___U3CU3Es__3 = 0;
		}

IL_0040_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_004c_2;
				}
			}
			{
				goto IL_0046_2;
			}

IL_0046_2:
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_004e_2;
				}
			}
			{
				goto IL_0053_2;
			}

IL_004c_2:
			{
				goto IL_00b1_2;
			}

IL_004e_2:
			{
				goto IL_013a_2;
			}

IL_0053_2:
			{
				goto IL_00f2_2;
			}

IL_0059_2:
			{
				Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814* L_8 = __this->___predicate;
				RuntimeObject* L_9 = __this->___U3CeU3E5__1;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_11 = __this->___cancellationToken;
				NullCheck(L_8);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_12;
				L_12 = InvokerFuncInvoker2< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10), L_11);
				V_4 = L_12;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_13;
				L_13 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_3 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_3), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00cd_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->___U3CU3E1__state = L_15;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_16 = V_3;
				__this->___U3CU3Eu__1 = L_16;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_17 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAnyAwaitWithCancellationAsyncU3Ed__3_1_t80086595F6A0BBAFC39EF20D2C66D9AB55BF1411**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_029f;
			}

IL_00b1_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_18 = __this->___U3CU3Eu__1;
				V_3 = L_18;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_19 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state = L_20;
			}

IL_00cd_2:
			{
				bool L_21;
				L_21 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5 = L_21;
				bool L_22 = __this->___U3CU3Es__5;
				V_2 = L_22;
				bool L_23 = V_2;
				if (!L_23)
				{
					goto IL_00f1_2;
				}
			}
			{
				__this->___U3CU3Es__4 = (bool)1;
				goto IL_017c_2;
			}

IL_00f1_2:
			{
			}

IL_00f2_2:
			{
				RuntimeObject* L_24 = __this->___U3CeU3E5__1;
				NullCheck(L_24);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_25;
				L_25 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_24);
				V_4 = L_25;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_26;
				L_26 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_7 = L_26;
				bool L_27;
				L_27 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_27)
				{
					goto IL_0157_2;
				}
			}
			{
				int32_t L_28 = 1;
				V_0 = L_28;
				__this->___U3CU3E1__state = L_28;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29 = V_7;
				__this->___U3CU3Eu__1 = L_29;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_30 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAnyAwaitWithCancellationAsyncU3Ed__3_1_t80086595F6A0BBAFC39EF20D2C66D9AB55BF1411**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_30, (&V_7), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_029f;
			}

IL_013a_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_31 = __this->___U3CU3Eu__1;
				V_7 = L_31;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_32 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_32, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_33 = (-1);
				V_0 = L_33;
				__this->___U3CU3E1__state = L_33;
			}

IL_0157_2:
			{
				bool L_34;
				L_34 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_34;
				bool L_35 = __this->___U3CU3Es__6;
				V_6 = L_35;
				bool L_36 = V_6;
				if (L_36)
				{
					goto IL_0059_2;
				}
			}
			{
				__this->___U3CU3Es__4 = (bool)0;
				goto IL_017c_2;
			}

IL_017c_2:
			{
				__this->___U3CU3Es__3 = 1;
				goto IL_0191_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0185_1;
			}
			throw e;
		}

CATCH_0185_1:
		{
			RuntimeObject* L_37 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_8 = L_37;
			RuntimeObject* L_38 = V_8;
			__this->___U3CU3Es__2 = L_38;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)L_38);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0191_1;
		}

IL_0191_1:
		{
			RuntimeObject* L_39 = __this->___U3CeU3E5__1;
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_39) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_40 = V_9;
			if (!L_40)
			{
				goto IL_0210_1;
			}
		}
		{
			RuntimeObject* L_41 = __this->___U3CeU3E5__1;
			NullCheck((RuntimeObject*)L_41);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_42;
			L_42 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
			V_11 = L_42;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_43;
			L_43 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_11), NULL);
			V_10 = L_43;
			bool L_44;
			L_44 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_44)
			{
				goto IL_0207_1;
			}
		}
		{
			int32_t L_45 = 2;
			V_0 = L_45;
			__this->___U3CU3E1__state = L_45;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_46 = V_10;
			__this->___U3CU3Eu__2 = L_46;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
			V_5 = __this;
			AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_47 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAnyAwaitWithCancellationAsyncU3Ed__3_1_t80086595F6A0BBAFC39EF20D2C66D9AB55BF1411**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_47, (&V_10), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_029f;
		}

IL_01ea_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_48 = __this->___U3CU3Eu__2;
			V_10 = L_48;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_49 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_49, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_50 = (-1);
			V_0 = L_50;
			__this->___U3CU3E1__state = L_50;
		}

IL_0207_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_0210_1:
		{
			RuntimeObject* L_51 = __this->___U3CU3Es__2;
			V_8 = L_51;
			RuntimeObject* L_52 = V_8;
			if (!L_52)
			{
				goto IL_023a_1;
			}
		}
		{
			RuntimeObject* L_53 = V_8;
			V_12 = ((Exception_t*)IsInstClass((RuntimeObject*)L_53, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_54 = V_12;
			if (L_54)
			{
				goto IL_022d_1;
			}
		}
		{
			RuntimeObject* L_55 = V_8;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_55, method);
		}

IL_022d_1:
		{
			Exception_t* L_56 = V_12;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_57;
			L_57 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_56, NULL);
			NullCheck(L_57);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_57, NULL);
		}

IL_023a_1:
		{
			int32_t L_58 = __this->___U3CU3Es__3;
			V_13 = L_58;
			int32_t L_59 = V_13;
			if ((((int32_t)L_59) == ((int32_t)1)))
			{
				goto IL_0249_1;
			}
		}
		{
			goto IL_0252_1;
		}

IL_0249_1:
		{
			bool L_60 = __this->___U3CU3Es__4;
			V_1 = L_60;
			goto IL_0283;
		}

IL_0252_1:
		{
			__this->___U3CU3Es__2 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)NULL);
			__this->___U3CeU3E5__1 = (RuntimeObject*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)(RuntimeObject*)NULL);
			goto IL_0283;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0262;
		}
		throw e;
	}

CATCH_0262:
	{
		Exception_t* L_61 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_12 = L_61;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__1 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_62 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder);
		Exception_t* L_63 = V_12;
		AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_inline(L_62, L_63, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_029f;
	}

IL_0283:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__1 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_64 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder);
		bool L_65 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_inline(L_64, L_65, AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
	}

IL_029f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnyAwaitWithCancellationAsyncU3Ed__3_1_SetStateMachine_mB6C6552E8E30501460531DA98FF48913A2D645E4_gshared (U3CAnyAwaitWithCancellationAsyncU3Ed__3_1_t80086595F6A0BBAFC39EF20D2C66D9AB55BF1411* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAppendIteratorU3Ed__61_1__ctor_m00A467FD2D1B81124A06FC84B4495F35D112E41B_gshared (U3CAppendIteratorU3Ed__61_1_t189BA8793B4F2C40AE8EFF13EFA1B16235067FD8* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAppendIteratorU3Ed__61_1_System_IDisposable_Dispose_m95B151CAA02EEC4DCE8980F1A7A3E5208D848C41_gshared (U3CAppendIteratorU3Ed__61_1_t189BA8793B4F2C40AE8EFF13EFA1B16235067FD8* __this, const RuntimeMethod* method) 
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
				((  void (*) (U3CAppendIteratorU3Ed__61_1_t189BA8793B4F2C40AE8EFF13EFA1B16235067FD8*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAppendIteratorU3Ed__61_1_MoveNext_m4F3C547079C00B668D1E1707837B8370CCB7FE87_gshared (U3CAppendIteratorU3Ed__61_1_t189BA8793B4F2C40AE8EFF13EFA1B16235067FD8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t403394A54FBDC40176C4274E7214FE78EDA273FD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TSource_t403394A54FBDC40176C4274E7214FE78EDA273FD);
	const Il2CppFullySharedGenericAny L_9 = L_5;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TSource_t403394A54FBDC40176C4274E7214FE78EDA273FD);
	bool V_0 = false;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TSource_t403394A54FBDC40176C4274E7214FE78EDA273FD);
	memset(V_2, 0, SizeOf_TSource_t403394A54FBDC40176C4274E7214FE78EDA273FD);
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00a4:
			{
				((  void (*) (U3CAppendIteratorU3Ed__61_1_t189BA8793B4F2C40AE8EFF13EFA1B16235067FD8*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
				return;
			}
		});
		try
		{
			{
				int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
				V_1 = L_0;
				int32_t L_1 = V_1;
				switch (L_1)
				{
					case 0:
					{
						goto IL_0020_1;
					}
					case 1:
					{
						goto IL_0060_1;
					}
					case 2:
					{
						goto IL_0099_1;
					}
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00ab;
			}

IL_0020_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
				RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				NullCheck(L_2);
				RuntimeObject* L_3;
				L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_2);
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_3);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
				goto IL_0068_1;
			}

IL_0042_1:
			{
				RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck(L_4);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_4, (Il2CppFullySharedGenericAny*)L_5);
				il2cpp_codegen_memcpy(V_2, L_5, SizeOf_TSource_t403394A54FBDC40176C4274E7214FE78EDA273FD);
				il2cpp_codegen_memcpy(L_6, V_2, SizeOf_TSource_t403394A54FBDC40176C4274E7214FE78EDA273FD);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_6, SizeOf_TSource_t403394A54FBDC40176C4274E7214FE78EDA273FD);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
				V_0 = (bool)1;
				goto IL_00ab;
			}

IL_0060_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
			}

IL_0068_1:
			{
				RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck((RuntimeObject*)L_7);
				bool L_8;
				L_8 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				if (L_8)
				{
					goto IL_0042_1;
				}
			}
			{
				((  void (*) (U3CAppendIteratorU3Ed__61_1_t189BA8793B4F2C40AE8EFF13EFA1B16235067FD8*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), (RuntimeObject*)NULL);
				il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)), SizeOf_TSource_t403394A54FBDC40176C4274E7214FE78EDA273FD);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_9, SizeOf_TSource_t403394A54FBDC40176C4274E7214FE78EDA273FD);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 2);
				V_0 = (bool)1;
				goto IL_00ab;
			}

IL_0099_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
				V_0 = (bool)0;
				goto IL_00ab;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ab:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAppendIteratorU3Ed__61_1_U3CU3Em__Finally1_m3A4213F4A2CE8FC270017F3F30FFC34F01E7BB5E_gshared (U3CAppendIteratorU3Ed__61_1_t189BA8793B4F2C40AE8EFF13EFA1B16235067FD8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAppendIteratorU3Ed__61_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_mF0FFE9BCE2AD8CA68CCE63048089124B7B5DD271_gshared (U3CAppendIteratorU3Ed__61_1_t189BA8793B4F2C40AE8EFF13EFA1B16235067FD8* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t403394A54FBDC40176C4274E7214FE78EDA273FD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t403394A54FBDC40176C4274E7214FE78EDA273FD);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TSource_t403394A54FBDC40176C4274E7214FE78EDA273FD);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TSource_t403394A54FBDC40176C4274E7214FE78EDA273FD);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAppendIteratorU3Ed__61_1_System_Collections_IEnumerator_Reset_mA50095C1BD7A2B2061075F6A1A06FC0FDEB08C0F_gshared (U3CAppendIteratorU3Ed__61_1_t189BA8793B4F2C40AE8EFF13EFA1B16235067FD8* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAppendIteratorU3Ed__61_1_System_Collections_IEnumerator_get_Current_m0AA712C83272110F8D20BCE67DD5D90DFF4A6040_gshared (U3CAppendIteratorU3Ed__61_1_t189BA8793B4F2C40AE8EFF13EFA1B16235067FD8* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t403394A54FBDC40176C4274E7214FE78EDA273FD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t403394A54FBDC40176C4274E7214FE78EDA273FD);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TSource_t403394A54FBDC40176C4274E7214FE78EDA273FD);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAppendIteratorU3Ed__61_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_mAA7E36D94409D7FC319867D0AF2FB6DAA16E0719_gshared (U3CAppendIteratorU3Ed__61_1_t189BA8793B4F2C40AE8EFF13EFA1B16235067FD8* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t403394A54FBDC40176C4274E7214FE78EDA273FD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TSource_t403394A54FBDC40176C4274E7214FE78EDA273FD);
	U3CAppendIteratorU3Ed__61_1_t189BA8793B4F2C40AE8EFF13EFA1B16235067FD8* V_0 = NULL;
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
		U3CAppendIteratorU3Ed__61_1_t189BA8793B4F2C40AE8EFF13EFA1B16235067FD8* L_3 = (U3CAppendIteratorU3Ed__61_1_t189BA8793B4F2C40AE8EFF13EFA1B16235067FD8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (U3CAppendIteratorU3Ed__61_1_t189BA8793B4F2C40AE8EFF13EFA1B16235067FD8*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_3;
	}

IL_0029:
	{
		U3CAppendIteratorU3Ed__61_1_t189BA8793B4F2C40AE8EFF13EFA1B16235067FD8* L_4 = V_0;
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NullCheck(L_4);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_5);
		U3CAppendIteratorU3Ed__61_1_t189BA8793B4F2C40AE8EFF13EFA1B16235067FD8* L_6 = V_0;
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6)), SizeOf_TSource_t403394A54FBDC40176C4274E7214FE78EDA273FD);
		NullCheck(L_6);
		il2cpp_codegen_write_instance_field_data(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_7, SizeOf_TSource_t403394A54FBDC40176C4274E7214FE78EDA273FD);
		U3CAppendIteratorU3Ed__61_1_t189BA8793B4F2C40AE8EFF13EFA1B16235067FD8* L_8 = V_0;
		return (RuntimeObject*)L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAppendIteratorU3Ed__61_1_System_Collections_IEnumerable_GetEnumerator_m7B4142B96EE32FEF036B94FC4E165A375CF584A2_gshared (U3CAppendIteratorU3Ed__61_1_t189BA8793B4F2C40AE8EFF13EFA1B16235067FD8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (U3CAppendIteratorU3Ed__61_1_t189BA8793B4F2C40AE8EFF13EFA1B16235067FD8*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CApplyResultSelectorU3Ed__13_1__ctor_mD8A3A243831E06D1CA7B34D06990D8B4B8386391_gshared (U3CApplyResultSelectorU3Ed__13_1_tBECF9560301CC66C0385B10259B6E6D26D332917* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CApplyResultSelectorU3Ed__13_1_System_IDisposable_Dispose_m4708BC0454969746CD09B0BA124F7ABE79660909_gshared (U3CApplyResultSelectorU3Ed__13_1_tBECF9560301CC66C0385B10259B6E6D26D332917* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CApplyResultSelectorU3Ed__13_1_MoveNext_m30C5D14D0299FE10ADEF3EED7407A46BF2772804_gshared (U3CApplyResultSelectorU3Ed__13_1_tBECF9560301CC66C0385B10259B6E6D26D332917* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tCD09B2B13D6AC27184D6C2545F63953FB53D9329 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const uint32_t SizeOf_TResult_tBA2D342526238F37EF3D63FD29E5B285C28D8076 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_TKey_tCD09B2B13D6AC27184D6C2545F63953FB53D9329);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_TResult_tBA2D342526238F37EF3D63FD29E5B285C28D8076);
	int32_t V_0 = 0;
	Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* V_1 = NULL;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
		Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* L_1 = *(Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00ae;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* L_4 = V_1;
		NullCheck(L_4);
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_5 = L_4->___lastGrouping;
		il2cpp_codegen_write_instance_field_data<Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_5);
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_6 = *(Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		if (!L_6)
		{
			goto IL_00c6;
		}
	}

IL_0038:
	{
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_7 = *(Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_8 = *(Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2**)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),5));
		il2cpp_codegen_write_instance_field_data<Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_8);
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_9 = *(Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),3));
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_11 = *(Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(L_11, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),2));
		NullCheck(L_12);
		if ((((int32_t)L_10) == ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_007e;
		}
	}
	{
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_13 = *(Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_14 = *(Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		int32_t L_15 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_14, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),3));
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(L_13, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),2)))), L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
	}

IL_007e:
	{
		Func_3_tA7E06E01A9E24ADCFD5FDF90F63DB44745325DB6* L_16 = *(Func_3_tA7E06E01A9E24ADCFD5FDF90F63DB44745325DB6**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_17 = *(Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_TKey_tCD09B2B13D6AC27184D6C2545F63953FB53D9329);
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_19 = *(Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),2));
		NullCheck(L_16);
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_18: *(void**)L_18), (RuntimeObject*)L_20, (Il2CppFullySharedGenericAny*)L_21);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_21, SizeOf_TResult_tBA2D342526238F37EF3D63FD29E5B285C28D8076);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
		return (bool)1;
	}

IL_00ae:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_22 = *(Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* L_23 = V_1;
		NullCheck(L_23);
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_24 = L_23->___lastGrouping;
		if ((!(((RuntimeObject*)(Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*)L_22) == ((RuntimeObject*)(Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*)L_24))))
		{
			goto IL_0038;
		}
	}

IL_00c6:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CApplyResultSelectorU3Ed__13_1_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_mD93E7515F408005C4171B50BE8D73C7BA1907D9B_gshared (U3CApplyResultSelectorU3Ed__13_1_tBECF9560301CC66C0385B10259B6E6D26D332917* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TResult_tBA2D342526238F37EF3D63FD29E5B285C28D8076 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_tBA2D342526238F37EF3D63FD29E5B285C28D8076);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TResult_tBA2D342526238F37EF3D63FD29E5B285C28D8076);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TResult_tBA2D342526238F37EF3D63FD29E5B285C28D8076);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CApplyResultSelectorU3Ed__13_1_System_Collections_IEnumerator_Reset_mB093C1A2AA6B5B44CFC261DDD226856BF40DA109_gshared (U3CApplyResultSelectorU3Ed__13_1_tBECF9560301CC66C0385B10259B6E6D26D332917* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CApplyResultSelectorU3Ed__13_1_System_Collections_IEnumerator_get_Current_mBF9FDB8AD63072BDF00A14198C054FD2CD073E11_gshared (U3CApplyResultSelectorU3Ed__13_1_tBECF9560301CC66C0385B10259B6E6D26D332917* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TResult_tBA2D342526238F37EF3D63FD29E5B285C28D8076 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_tBA2D342526238F37EF3D63FD29E5B285C28D8076);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TResult_tBA2D342526238F37EF3D63FD29E5B285C28D8076);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CApplyResultSelectorU3Ed__13_1_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m19372DE2C0F7CDC0F99D797A5E28DCC5E8258B1F_gshared (U3CApplyResultSelectorU3Ed__13_1_tBECF9560301CC66C0385B10259B6E6D26D332917* __this, const RuntimeMethod* method) 
{
	U3CApplyResultSelectorU3Ed__13_1_tBECF9560301CC66C0385B10259B6E6D26D332917* V_0 = NULL;
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
		U3CApplyResultSelectorU3Ed__13_1_tBECF9560301CC66C0385B10259B6E6D26D332917* L_3 = (U3CApplyResultSelectorU3Ed__13_1_tBECF9560301CC66C0385B10259B6E6D26D332917*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (U3CApplyResultSelectorU3Ed__13_1_tBECF9560301CC66C0385B10259B6E6D26D332917*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		V_0 = L_3;
		U3CApplyResultSelectorU3Ed__13_1_tBECF9560301CC66C0385B10259B6E6D26D332917* L_4 = V_0;
		Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* L_5 = *(Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		NullCheck(L_4);
		il2cpp_codegen_write_instance_field_data<Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332*>(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_5);
	}

IL_0035:
	{
		U3CApplyResultSelectorU3Ed__13_1_tBECF9560301CC66C0385B10259B6E6D26D332917* L_6 = V_0;
		Func_3_tA7E06E01A9E24ADCFD5FDF90F63DB44745325DB6* L_7 = *(Func_3_tA7E06E01A9E24ADCFD5FDF90F63DB44745325DB6**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		NullCheck(L_6);
		il2cpp_codegen_write_instance_field_data<Func_3_tA7E06E01A9E24ADCFD5FDF90F63DB44745325DB6*>(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_7);
		U3CApplyResultSelectorU3Ed__13_1_tBECF9560301CC66C0385B10259B6E6D26D332917* L_8 = V_0;
		return (RuntimeObject*)L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CApplyResultSelectorU3Ed__13_1_System_Collections_IEnumerable_GetEnumerator_m0D61B89A90194183C583918096CDF4A8681E22D8_gshared (U3CApplyResultSelectorU3Ed__13_1_tBECF9560301CC66C0385B10259B6E6D26D332917* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (U3CApplyResultSelectorU3Ed__13_1_tBECF9560301CC66C0385B10259B6E6D26D332917*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsUniTaskU3Ed__1_1__ctor_mEAF5A706A01646135508B64602C1CB0790BBF5D6_gshared (U3CAsUniTaskU3Ed__1_1_t6767011C86F9746C34592640121E6D154BA12A95* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsUniTaskU3Ed__1_1_MoveNext_m219E1D5E7F467A74E0DA1BB4AF520296809436E2_gshared (U3CAsUniTaskU3Ed__1_1_t6767011C86F9746C34592640121E6D154BA12A95* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF24050DF4E55F6CBBCECDA00F74CA363772949D9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_tF24050DF4E55F6CBBCECDA00F74CA363772949D9);
	const Il2CppFullySharedGenericAny L_13 = L_9;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_tF24050DF4E55F6CBBCECDA00F74CA363772949D9);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_tF24050DF4E55F6CBBCECDA00F74CA363772949D9);
	memset(V_1, 0, SizeOf_T_tF24050DF4E55F6CBBCECDA00F74CA363772949D9);
	Awaiter_t85BED53FDB903195E7807CDF912212A136462405 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CAsUniTaskU3Ed__1_1_t6767011C86F9746C34592640121E6D154BA12A95* V_3 = NULL;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
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
			goto IL_0048_1;
		}

IL_000e_1:
		{
			Awaitable_1_t7F2FEF7F3E53E010671259DFBDCF40FEA65869CE* L_2 = *(Awaitable_1_t7F2FEF7F3E53E010671259DFBDCF40FEA65869CE**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			NullCheck(L_2);
			Awaiter_t85BED53FDB903195E7807CDF912212A136462405 L_3;
			L_3 = ((  Awaiter_t85BED53FDB903195E7807CDF912212A136462405 (*) (Awaitable_1_t7F2FEF7F3E53E010671259DFBDCF40FEA65869CE*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
			V_2 = L_3;
			bool L_4;
			L_4 = ((  bool (*) (Awaiter_t85BED53FDB903195E7807CDF912212A136462405*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((&V_2), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
			if (L_4)
			{
				goto IL_0064_1;
			}
		}
		{
			int32_t L_5 = 0;
			V_0 = L_5;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_5);
			Awaiter_t85BED53FDB903195E7807CDF912212A136462405 L_6 = V_2;
			il2cpp_codegen_write_instance_field_data<Awaiter_t85BED53FDB903195E7807CDF912212A136462405>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_6);
			V_3 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_t85BED53FDB903195E7807CDF912212A136462405*, U3CAsUniTaskU3Ed__1_1_t6767011C86F9746C34592640121E6D154BA12A95**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_2), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
			goto IL_00a9;
		}

IL_0048_1:
		{
			Awaiter_t85BED53FDB903195E7807CDF912212A136462405 L_7 = *(Awaiter_t85BED53FDB903195E7807CDF912212A136462405*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			V_2 = L_7;
			il2cpp_codegen_initobj((((Awaiter_t85BED53FDB903195E7807CDF912212A136462405*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)))), sizeof(Awaiter_t85BED53FDB903195E7807CDF912212A136462405));
			int32_t L_8 = (-1);
			V_0 = L_8;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_8);
		}

IL_0064_1:
		{
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), (&V_2), (Il2CppFullySharedGenericAny*)L_9);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_9, SizeOf_T_tF24050DF4E55F6CBBCECDA00F74CA363772949D9);
			il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3)), SizeOf_T_tF24050DF4E55F6CBBCECDA00F74CA363772949D9);
			il2cpp_codegen_memcpy(V_1, L_10, SizeOf_T_tF24050DF4E55F6CBBCECDA00F74CA363772949D9);
			goto IL_0094;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007a;
		}
		throw e;
	}

CATCH_007a:
	{
		Exception_t* L_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_4 = L_11;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		Exception_t* L_12 = V_4;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00a9;
	}

IL_0094:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_memcpy(L_13, V_1, SizeOf_T_tF24050DF4E55F6CBBCECDA00F74CA363772949D9);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_13: *(void**)L_13));
	}

IL_00a9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsUniTaskU3Ed__1_1_SetStateMachine_m919DA1B242E3D89A27610011230768C295D5CA43_gshared (U3CAsUniTaskU3Ed__1_1_t6767011C86F9746C34592640121E6D154BA12A95* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsUniTaskU3Ed__2_1__ctor_mADD55058E453EB7A8A5355FFE379D367B64725F8_gshared (U3CAsUniTaskU3Ed__2_1_t4D4E6946A5FECEDFA62172C94A86FBA99E3AF82A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsUniTaskU3Ed__2_1_MoveNext_m34EF86DB0203A3B0CC7EE94A4A389B71F138295F_gshared (U3CAsUniTaskU3Ed__2_1_t4D4E6946A5FECEDFA62172C94A86FBA99E3AF82A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t9B85F172FC70B485610C69E517F9F86EEEA9ADC9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const uint32_t SizeOf_ValueTaskAwaiter_1_tA3847D2880571CA7CDB004B4D01EC5843BF18B97 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t9B85F172FC70B485610C69E517F9F86EEEA9ADC9);
	const Il2CppFullySharedGenericAny L_12 = L_8;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t9B85F172FC70B485610C69E517F9F86EEEA9ADC9);
	const ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C L_2 = alloca(SizeOf_ValueTaskAwaiter_1_tA3847D2880571CA7CDB004B4D01EC5843BF18B97);
	const ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C L_5 = L_2;
	const ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C L_6 = L_2;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t9B85F172FC70B485610C69E517F9F86EEEA9ADC9);
	memset(V_1, 0, SizeOf_T_t9B85F172FC70B485610C69E517F9F86EEEA9ADC9);
	ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C V_2 = alloca(SizeOf_ValueTaskAwaiter_1_tA3847D2880571CA7CDB004B4D01EC5843BF18B97);
	memset(V_2, 0, SizeOf_ValueTaskAwaiter_1_tA3847D2880571CA7CDB004B4D01EC5843BF18B97);
	U3CAsUniTaskU3Ed__2_1_t4D4E6946A5FECEDFA62172C94A86FBA99E3AF82A* V_3 = NULL;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
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
			goto IL_0048_1;
		}

IL_000e_1:
		{
			InvokerActionInvoker1< ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)), il2cpp_rgctx_method(method->klass->rgctx_data, 2), (((ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))), (ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C*)L_2);
			il2cpp_codegen_memcpy(V_2, L_2, SizeOf_ValueTaskAwaiter_1_tA3847D2880571CA7CDB004B4D01EC5843BF18B97);
			bool L_3;
			L_3 = ((  bool (*) (ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C*)V_2, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
			if (L_3)
			{
				goto IL_0064_1;
			}
		}
		{
			int32_t L_4 = 0;
			V_0 = L_4;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_4);
			il2cpp_codegen_memcpy(L_5, V_2, SizeOf_ValueTaskAwaiter_1_tA3847D2880571CA7CDB004B4D01EC5843BF18B97);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_5, SizeOf_ValueTaskAwaiter_1_tA3847D2880571CA7CDB004B4D01EC5843BF18B97);
			V_3 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C*, U3CAsUniTaskU3Ed__2_1_t4D4E6946A5FECEDFA62172C94A86FBA99E3AF82A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C*)V_2, (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			goto IL_00a9;
		}

IL_0048_1:
		{
			il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)), SizeOf_ValueTaskAwaiter_1_tA3847D2880571CA7CDB004B4D01EC5843BF18B97);
			il2cpp_codegen_memcpy(V_2, L_6, SizeOf_ValueTaskAwaiter_1_tA3847D2880571CA7CDB004B4D01EC5843BF18B97);
			il2cpp_codegen_initobj((((ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)))), SizeOf_ValueTaskAwaiter_1_tA3847D2880571CA7CDB004B4D01EC5843BF18B97);
			int32_t L_7 = (-1);
			V_0 = L_7;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_7);
		}

IL_0064_1:
		{
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), (ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C*)V_2, (Il2CppFullySharedGenericAny*)L_8);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_8, SizeOf_T_t9B85F172FC70B485610C69E517F9F86EEEA9ADC9);
			il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3)), SizeOf_T_t9B85F172FC70B485610C69E517F9F86EEEA9ADC9);
			il2cpp_codegen_memcpy(V_1, L_9, SizeOf_T_t9B85F172FC70B485610C69E517F9F86EEEA9ADC9);
			goto IL_0094;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007a;
		}
		throw e;
	}

CATCH_007a:
	{
		Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_4 = L_10;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		Exception_t* L_11 = V_4;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00a9;
	}

IL_0094:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_memcpy(L_12, V_1, SizeOf_T_t9B85F172FC70B485610C69E517F9F86EEEA9ADC9);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? L_12: *(void**)L_12));
	}

IL_00a9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsUniTaskU3Ed__2_1_SetStateMachine_m020C05BDA4B9FE3CA09624F2001D2DA790C0D99E_gshared (U3CAsUniTaskU3Ed__2_1_t4D4E6946A5FECEDFA62172C94A86FBA99E3AF82A* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__13_1__ctor_m4D3EF354CA018030CD4D7C80FE56FDC3928D707A_gshared (U3CAverageAsyncU3Ed__13_1_tF4497F5FC4DE74DA6C196678ED361D0D2A97A2A6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__13_1_MoveNext_mCFD411D90831FF200EE369042E5C505131C0AED1_gshared (U3CAverageAsyncU3Ed__13_1_tF4497F5FC4DE74DA6C196678ED361D0D2A97A2A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t234FA6A06B400063E41A9CAA8BB6402A42AED822 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t234FA6A06B400063E41A9CAA8BB6402A42AED822);
	int32_t V_0 = 0;
	double V_1 = 0.0;
	int64_t V_2 = 0;
	bool V_3 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_4;
	memset((&V_4), 0, sizeof(V_4));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_5;
	memset((&V_5), 0, sizeof(V_5));
	U3CAverageAsyncU3Ed__13_1_tF4497F5FC4DE74DA6C196678ED361D0D2A97A2A6* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	bool V_8 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Exception_t* V_11 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
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
			goto IL_0056_1;
		}

IL_0014_1:
		{
			goto IL_0183_1;
		}

IL_0019_1:
		{
			__this->___U3CcountU3E5__1 = ((int64_t)0);
			__this->___U3CsumU3E5__2 = (0.0);
			RuntimeObject* L_3 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = __this->___cancellationToken;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__3 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)L_5);
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			__this->___U3CU3Es__5 = 0;
		}

IL_0056_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_005c_2;
				}
			}
			{
				goto IL_0061_2;
			}

IL_005c_2:
			{
				goto IL_00e4_2;
			}

IL_0061_2:
			{
				goto IL_009c_2;
			}

IL_0064_2:
			{
				double L_7 = __this->___U3CsumU3E5__2;
				Func_2_tF36C7D1152BF6807C03112D4A053E5038A13A6EB* L_8 = __this->___selector;
				RuntimeObject* L_9 = __this->___U3CeU3E5__3;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				double L_11;
				L_11 = InvokerFuncInvoker1< double, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
				__this->___U3CsumU3E5__2 = ((double)il2cpp_codegen_add(L_7, L_11));
				int64_t L_12 = __this->___U3CcountU3E5__1;
				V_2 = L_12;
				int64_t L_13 = V_2;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_13, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1 = ((int64_t)il2cpp_codegen_add(L_13, ((int64_t)1)));
			}

IL_009c_2:
			{
				RuntimeObject* L_14 = __this->___U3CeU3E5__3;
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
					goto IL_0101_2;
				}
			}
			{
				int32_t L_18 = 0;
				V_0 = L_18;
				__this->___U3CU3E1__state = L_18;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_19 = V_4;
				__this->___U3CU3Eu__1 = L_19;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_6 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_20 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAsyncU3Ed__13_1_tF4497F5FC4DE74DA6C196678ED361D0D2A97A2A6**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_20, (&V_4), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_022f;
			}

IL_00e4_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_21 = __this->___U3CU3Eu__1;
				V_4 = L_21;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_22 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_22, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_23 = (-1);
				V_0 = L_23;
				__this->___U3CU3E1__state = L_23;
			}

IL_0101_2:
			{
				bool L_24;
				L_24 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_4), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_24;
				bool L_25 = __this->___U3CU3Es__6;
				V_3 = L_25;
				bool L_26 = V_3;
				if (L_26)
				{
					goto IL_0064_2;
				}
			}
			{
				goto IL_012a_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_011e_1;
			}
			throw e;
		}

CATCH_011e_1:
		{
			RuntimeObject* L_27 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_7 = L_27;
			RuntimeObject* L_28 = V_7;
			__this->___U3CU3Es__4 = L_28;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)L_28);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_012a_1;
		}

IL_012a_1:
		{
			RuntimeObject* L_29 = __this->___U3CeU3E5__3;
			V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_29) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_30 = V_8;
			if (!L_30)
			{
				goto IL_01a9_1;
			}
		}
		{
			RuntimeObject* L_31 = __this->___U3CeU3E5__3;
			NullCheck((RuntimeObject*)L_31);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_32;
			L_32 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_31);
			V_10 = L_32;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_33;
			L_33 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_10), NULL);
			V_9 = L_33;
			bool L_34;
			L_34 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_9), NULL);
			if (L_34)
			{
				goto IL_01a0_1;
			}
		}
		{
			int32_t L_35 = 1;
			V_0 = L_35;
			__this->___U3CU3E1__state = L_35;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36 = V_9;
			__this->___U3CU3Eu__2 = L_36;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
			V_6 = __this;
			AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_37 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAsyncU3Ed__13_1_tF4497F5FC4DE74DA6C196678ED361D0D2A97A2A6**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_37, (&V_9), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_022f;
		}

IL_0183_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_38 = __this->___U3CU3Eu__2;
			V_9 = L_38;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_39 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_39, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_40 = (-1);
			V_0 = L_40;
			__this->___U3CU3E1__state = L_40;
		}

IL_01a0_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_9), NULL);
		}

IL_01a9_1:
		{
			RuntimeObject* L_41 = __this->___U3CU3Es__4;
			V_7 = L_41;
			RuntimeObject* L_42 = V_7;
			if (!L_42)
			{
				goto IL_01d3_1;
			}
		}
		{
			RuntimeObject* L_43 = V_7;
			V_11 = ((Exception_t*)IsInstClass((RuntimeObject*)L_43, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_44 = V_11;
			if (L_44)
			{
				goto IL_01c6_1;
			}
		}
		{
			RuntimeObject* L_45 = V_7;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, method);
		}

IL_01c6_1:
		{
			Exception_t* L_46 = V_11;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_47;
			L_47 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_46, NULL);
			NullCheck(L_47);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_47, NULL);
		}

IL_01d3_1:
		{
			int32_t L_48 = __this->___U3CU3Es__5;
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			double L_49 = __this->___U3CsumU3E5__2;
			int64_t L_50 = __this->___U3CcountU3E5__1;
			V_1 = ((double)(L_49/((double)L_50)));
			goto IL_0213;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01f2;
		}
		throw e;
	}

CATCH_01f2:
	{
		Exception_t* L_51 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_11 = L_51;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_52 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
		Exception_t* L_53 = V_11;
		AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_inline(L_52, L_53, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_022f;
	}

IL_0213:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_54 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
		double L_55 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_inline(L_54, L_55, AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
	}

IL_022f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__13_1_SetStateMachine_m31630B986819ADEEB673FADF06BA12795EDEA859_gshared (U3CAverageAsyncU3Ed__13_1_tF4497F5FC4DE74DA6C196678ED361D0D2A97A2A6* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__17_1__ctor_m777409177DD68335662294AFF4DD072E04B76DBF_gshared (U3CAverageAsyncU3Ed__17_1_tAD8B4205081C02C2594BCB614DAB236500FBB75E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__17_1_MoveNext_m7BDD8A6886E29E0FFDFF8BEB96AB4B20F828C830_gshared (U3CAverageAsyncU3Ed__17_1_tAD8B4205081C02C2594BCB614DAB236500FBB75E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tAAAA30DB8EBC7226EB5113AC5BCC7417C05F2726 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_tAAAA30DB8EBC7226EB5113AC5BCC7417C05F2726);
	int32_t V_0 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_1;
	memset((&V_1), 0, sizeof(V_1));
	int64_t V_2 = 0;
	bool V_3 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_4;
	memset((&V_4), 0, sizeof(V_4));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_5;
	memset((&V_5), 0, sizeof(V_5));
	U3CAverageAsyncU3Ed__17_1_tAD8B4205081C02C2594BCB614DAB236500FBB75E* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	bool V_8 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Exception_t* V_11 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
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
			goto IL_0053_1;
		}

IL_0014_1:
		{
			goto IL_0184_1;
		}

IL_0019_1:
		{
			__this->___U3CcountU3E5__1 = ((int64_t)0);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* L_3 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)(&__this->___U3CsumU3E5__2);
			il2cpp_codegen_initobj(L_3, sizeof(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F));
			RuntimeObject* L_4 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = __this->___cancellationToken;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__3 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)L_6);
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			__this->___U3CU3Es__5 = 0;
		}

IL_0053_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0059_2;
				}
			}
			{
				goto IL_005e_2;
			}

IL_0059_2:
			{
				goto IL_00e5_2;
			}

IL_005e_2:
			{
				goto IL_009d_2;
			}

IL_0061_2:
			{
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_8 = __this->___U3CsumU3E5__2;
				Func_2_t5ABD904FFCFC84BA711C9261A36E9482990A6CA7* L_9 = __this->___selector;
				RuntimeObject* L_10 = __this->___U3CeU3E5__3;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				NullCheck(L_9);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_12;
				L_12 = InvokerFuncInvoker1< Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11));
				il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_13;
				L_13 = Decimal_op_Addition_m878AC5E15D13F205BCB6AE9747B2C0D950BD2EF7(L_8, L_12, NULL);
				__this->___U3CsumU3E5__2 = L_13;
				int64_t L_14 = __this->___U3CcountU3E5__1;
				V_2 = L_14;
				int64_t L_15 = V_2;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_15, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1 = ((int64_t)il2cpp_codegen_add(L_15, ((int64_t)1)));
			}

IL_009d_2:
			{
				RuntimeObject* L_16 = __this->___U3CeU3E5__3;
				NullCheck(L_16);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_17;
				L_17 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_16);
				V_5 = L_17;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_18;
				L_18 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_5), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_4 = L_18;
				bool L_19;
				L_19 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_4), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_0102_2;
				}
			}
			{
				int32_t L_20 = 0;
				V_0 = L_20;
				__this->___U3CU3E1__state = L_20;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_21 = V_4;
				__this->___U3CU3Eu__1 = L_21;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_6 = __this;
				AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_22 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAsyncU3Ed__17_1_tAD8B4205081C02C2594BCB614DAB236500FBB75E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_22, (&V_4), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_0238;
			}

IL_00e5_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_23 = __this->___U3CU3Eu__1;
				V_4 = L_23;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_24 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_24, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_25 = (-1);
				V_0 = L_25;
				__this->___U3CU3E1__state = L_25;
			}

IL_0102_2:
			{
				bool L_26;
				L_26 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_4), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_26;
				bool L_27 = __this->___U3CU3Es__6;
				V_3 = L_27;
				bool L_28 = V_3;
				if (L_28)
				{
					goto IL_0061_2;
				}
			}
			{
				goto IL_012b_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_011f_1;
			}
			throw e;
		}

CATCH_011f_1:
		{
			RuntimeObject* L_29 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_7 = L_29;
			RuntimeObject* L_30 = V_7;
			__this->___U3CU3Es__4 = L_30;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)L_30);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_012b_1;
		}

IL_012b_1:
		{
			RuntimeObject* L_31 = __this->___U3CeU3E5__3;
			V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_31) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_32 = V_8;
			if (!L_32)
			{
				goto IL_01aa_1;
			}
		}
		{
			RuntimeObject* L_33 = __this->___U3CeU3E5__3;
			NullCheck((RuntimeObject*)L_33);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_34;
			L_34 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_33);
			V_10 = L_34;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_35;
			L_35 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_10), NULL);
			V_9 = L_35;
			bool L_36;
			L_36 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_9), NULL);
			if (L_36)
			{
				goto IL_01a1_1;
			}
		}
		{
			int32_t L_37 = 1;
			V_0 = L_37;
			__this->___U3CU3E1__state = L_37;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_38 = V_9;
			__this->___U3CU3Eu__2 = L_38;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
			V_6 = __this;
			AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_39 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAsyncU3Ed__17_1_tAD8B4205081C02C2594BCB614DAB236500FBB75E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_39, (&V_9), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_0238;
		}

IL_0184_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_40 = __this->___U3CU3Eu__2;
			V_9 = L_40;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_41 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_41, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_42 = (-1);
			V_0 = L_42;
			__this->___U3CU3E1__state = L_42;
		}

IL_01a1_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_9), NULL);
		}

IL_01aa_1:
		{
			RuntimeObject* L_43 = __this->___U3CU3Es__4;
			V_7 = L_43;
			RuntimeObject* L_44 = V_7;
			if (!L_44)
			{
				goto IL_01d4_1;
			}
		}
		{
			RuntimeObject* L_45 = V_7;
			V_11 = ((Exception_t*)IsInstClass((RuntimeObject*)L_45, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_46 = V_11;
			if (L_46)
			{
				goto IL_01c7_1;
			}
		}
		{
			RuntimeObject* L_47 = V_7;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
		}

IL_01c7_1:
		{
			Exception_t* L_48 = V_11;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_49;
			L_49 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_48, NULL);
			NullCheck(L_49);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_49, NULL);
		}

IL_01d4_1:
		{
			int32_t L_50 = __this->___U3CU3Es__5;
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_51 = __this->___U3CsumU3E5__2;
			int64_t L_52 = __this->___U3CcountU3E5__1;
			il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_53;
			L_53 = Decimal_op_Implicit_m8F9A38760D01B23E6DFF77EA760CCE5111F3656D(L_52, NULL);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_54;
			L_54 = Decimal_op_Division_mA0BD25988CA8010A3F8EA2F6A534F9F2D812D2AC(L_51, L_53, NULL);
			V_1 = L_54;
			goto IL_021c;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01fb;
		}
		throw e;
	}

CATCH_01fb:
	{
		Exception_t* L_55 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_11 = L_55;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_56 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder);
		Exception_t* L_57 = V_11;
		AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_inline(L_56, L_57, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0238;
	}

IL_021c:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_58 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_59 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_inline(L_58, L_59, AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_RuntimeMethod_var);
	}

IL_0238:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__17_1_SetStateMachine_m29C7ADA91EC4B59EDBD12412957709ECBE41B54F_gshared (U3CAverageAsyncU3Ed__17_1_tAD8B4205081C02C2594BCB614DAB236500FBB75E* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__1_1__ctor_mB87A7D3EE55A4962B5577F16E101CE15384E3B02_gshared (U3CAverageAsyncU3Ed__1_1_t159C2C09DDCD5B3BF8254D77B69FBB0B77FE048B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__1_1_MoveNext_m124C226224B011FFCDEF7026C250771C9BD009DC_gshared (U3CAverageAsyncU3Ed__1_1_t159C2C09DDCD5B3BF8254D77B69FBB0B77FE048B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t03083B696DEB7B66918C0C7D95A668467ABF2A38 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t03083B696DEB7B66918C0C7D95A668467ABF2A38);
	int32_t V_0 = 0;
	double V_1 = 0.0;
	int64_t V_2 = 0;
	bool V_3 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_4;
	memset((&V_4), 0, sizeof(V_4));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_5;
	memset((&V_5), 0, sizeof(V_5));
	U3CAverageAsyncU3Ed__1_1_t159C2C09DDCD5B3BF8254D77B69FBB0B77FE048B* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	bool V_8 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Exception_t* V_11 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
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
			goto IL_004e_1;
		}

IL_0014_1:
		{
			goto IL_017b_1;
		}

IL_0019_1:
		{
			__this->___U3CcountU3E5__1 = ((int64_t)0);
			__this->___U3CsumU3E5__2 = 0;
			RuntimeObject* L_3 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = __this->___cancellationToken;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__3 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)L_5);
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			__this->___U3CU3Es__5 = 0;
		}

IL_004e_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_0054_2;
				}
			}
			{
				goto IL_0059_2;
			}

IL_0054_2:
			{
				goto IL_00dc_2;
			}

IL_0059_2:
			{
				goto IL_0094_2;
			}

IL_005c_2:
			{
				int32_t L_7 = __this->___U3CsumU3E5__2;
				Func_2_t8DB808B3690BFDBD7B936631B430453B90DBBDE7* L_8 = __this->___selector;
				RuntimeObject* L_9 = __this->___U3CeU3E5__3;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				int32_t L_11;
				L_11 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
				if (((int64_t)L_7 + (int64_t)L_11 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_7 + (int64_t)L_11 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CsumU3E5__2 = ((int32_t)il2cpp_codegen_add(L_7, L_11));
				int64_t L_12 = __this->___U3CcountU3E5__1;
				V_2 = L_12;
				int64_t L_13 = V_2;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_13, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1 = ((int64_t)il2cpp_codegen_add(L_13, ((int64_t)1)));
			}

IL_0094_2:
			{
				RuntimeObject* L_14 = __this->___U3CeU3E5__3;
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
					goto IL_00f9_2;
				}
			}
			{
				int32_t L_18 = 0;
				V_0 = L_18;
				__this->___U3CU3E1__state = L_18;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_19 = V_4;
				__this->___U3CU3Eu__1 = L_19;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_6 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_20 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAsyncU3Ed__1_1_t159C2C09DDCD5B3BF8254D77B69FBB0B77FE048B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_20, (&V_4), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_0228;
			}

IL_00dc_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_21 = __this->___U3CU3Eu__1;
				V_4 = L_21;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_22 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_22, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_23 = (-1);
				V_0 = L_23;
				__this->___U3CU3E1__state = L_23;
			}

IL_00f9_2:
			{
				bool L_24;
				L_24 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_4), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_24;
				bool L_25 = __this->___U3CU3Es__6;
				V_3 = L_25;
				bool L_26 = V_3;
				if (L_26)
				{
					goto IL_005c_2;
				}
			}
			{
				goto IL_0122_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0116_1;
			}
			throw e;
		}

CATCH_0116_1:
		{
			RuntimeObject* L_27 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_7 = L_27;
			RuntimeObject* L_28 = V_7;
			__this->___U3CU3Es__4 = L_28;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)L_28);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0122_1;
		}

IL_0122_1:
		{
			RuntimeObject* L_29 = __this->___U3CeU3E5__3;
			V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_29) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_30 = V_8;
			if (!L_30)
			{
				goto IL_01a1_1;
			}
		}
		{
			RuntimeObject* L_31 = __this->___U3CeU3E5__3;
			NullCheck((RuntimeObject*)L_31);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_32;
			L_32 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_31);
			V_10 = L_32;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_33;
			L_33 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_10), NULL);
			V_9 = L_33;
			bool L_34;
			L_34 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_9), NULL);
			if (L_34)
			{
				goto IL_0198_1;
			}
		}
		{
			int32_t L_35 = 1;
			V_0 = L_35;
			__this->___U3CU3E1__state = L_35;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36 = V_9;
			__this->___U3CU3Eu__2 = L_36;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
			V_6 = __this;
			AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_37 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAsyncU3Ed__1_1_t159C2C09DDCD5B3BF8254D77B69FBB0B77FE048B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_37, (&V_9), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_0228;
		}

IL_017b_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_38 = __this->___U3CU3Eu__2;
			V_9 = L_38;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_39 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_39, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_40 = (-1);
			V_0 = L_40;
			__this->___U3CU3E1__state = L_40;
		}

IL_0198_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_9), NULL);
		}

IL_01a1_1:
		{
			RuntimeObject* L_41 = __this->___U3CU3Es__4;
			V_7 = L_41;
			RuntimeObject* L_42 = V_7;
			if (!L_42)
			{
				goto IL_01cb_1;
			}
		}
		{
			RuntimeObject* L_43 = V_7;
			V_11 = ((Exception_t*)IsInstClass((RuntimeObject*)L_43, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_44 = V_11;
			if (L_44)
			{
				goto IL_01be_1;
			}
		}
		{
			RuntimeObject* L_45 = V_7;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, method);
		}

IL_01be_1:
		{
			Exception_t* L_46 = V_11;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_47;
			L_47 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_46, NULL);
			NullCheck(L_47);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_47, NULL);
		}

IL_01cb_1:
		{
			int32_t L_48 = __this->___U3CU3Es__5;
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			int32_t L_49 = __this->___U3CsumU3E5__2;
			int64_t L_50 = __this->___U3CcountU3E5__1;
			V_1 = ((double)(((double)L_49)/((double)L_50)));
			goto IL_020c;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01eb;
		}
		throw e;
	}

CATCH_01eb:
	{
		Exception_t* L_51 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_11 = L_51;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_52 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
		Exception_t* L_53 = V_11;
		AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_inline(L_52, L_53, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0228;
	}

IL_020c:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_54 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
		double L_55 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_inline(L_54, L_55, AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
	}

IL_0228:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__1_1_SetStateMachine_m0DC90CE4343333D1845291E269E370F687DFFDBB_gshared (U3CAverageAsyncU3Ed__1_1_t159C2C09DDCD5B3BF8254D77B69FBB0B77FE048B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__21_1__ctor_m82F2D8FE8A00723E85BB6174E24902891FC89F3E_gshared (U3CAverageAsyncU3Ed__21_1_t1332FF70F0A3589494CB18B96F4F4A731100690A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__21_1_MoveNext_mD076F796E197CD2F629597B1D742678CC638422D_gshared (U3CAverageAsyncU3Ed__21_1_t1332FF70F0A3589494CB18B96F4F4A731100690A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t90FA04E377BE19BFAB8B17D4F26DAE4141D914B4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t90FA04E377BE19BFAB8B17D4F26DAE4141D914B4);
	int32_t V_0 = 0;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int64_t V_6 = 0;
	bool V_7 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_9;
	memset((&V_9), 0, sizeof(V_9));
	U3CAverageAsyncU3Ed__21_1_t1332FF70F0A3589494CB18B96F4F4A731100690A* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_13;
	memset((&V_13), 0, sizeof(V_13));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_14;
	memset((&V_14), 0, sizeof(V_14));
	Exception_t* V_15 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	U3CAverageAsyncU3Ed__21_1_t1332FF70F0A3589494CB18B96F4F4A731100690A* G_B16_0 = NULL;
	U3CAverageAsyncU3Ed__21_1_t1332FF70F0A3589494CB18B96F4F4A731100690A* G_B15_0 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 G_B17_0;
	memset((&G_B17_0), 0, sizeof(G_B17_0));
	U3CAverageAsyncU3Ed__21_1_t1332FF70F0A3589494CB18B96F4F4A731100690A* G_B17_1 = NULL;
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
			goto IL_0053_1;
		}

IL_0014_1:
		{
			goto IL_01db_1;
		}

IL_0019_1:
		{
			__this->___U3CcountU3E5__1 = ((int64_t)0);
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_3;
			memset((&L_3), 0, sizeof(L_3));
			Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_3), 0, Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
			__this->___U3CsumU3E5__2 = L_3;
			RuntimeObject* L_4 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = __this->___cancellationToken;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__3 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)L_6);
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			__this->___U3CU3Es__5 = 0;
		}

IL_0053_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0059_2;
				}
			}
			{
				goto IL_005e_2;
			}

IL_0059_2:
			{
				goto IL_013a_2;
			}

IL_005e_2:
			{
				goto IL_00f2_2;
			}

IL_0064_2:
			{
				Func_2_t0DE0378A8A90F3B8204450750A771096D0F75A98* L_8 = __this->___selector;
				RuntimeObject* L_9 = __this->___U3CeU3E5__3;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_11;
				L_11 = InvokerFuncInvoker1< Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
				__this->___U3CvU3E5__6 = L_11;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_12 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CvU3E5__6);
				bool L_13;
				L_13 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_12, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14 = V_2;
				if (!L_14)
				{
					goto IL_00e5_2;
				}
			}
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_15 = __this->___U3CsumU3E5__2;
				V_3 = L_15;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_16 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CvU3E5__6);
				int32_t L_17;
				L_17 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA(L_16, Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
				V_4 = L_17;
				bool L_18;
				L_18 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_3), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				if (L_18)
				{
					G_B16_0 = __this;
					goto IL_00bc_2;
				}
				G_B15_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_19 = V_5;
				G_B17_0 = L_19;
				G_B17_1 = G_B15_0;
				goto IL_00cb_2;
			}

IL_00bc_2:
			{
				int32_t L_20;
				L_20 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_3), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
				int32_t L_21 = V_4;
				if (((int64_t)L_20 + (int64_t)L_21 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_20 + (int64_t)L_21 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_22;
				memset((&L_22), 0, sizeof(L_22));
				Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_22), ((int32_t)il2cpp_codegen_add(L_20, L_21)), Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
				G_B17_0 = L_22;
				G_B17_1 = G_B16_0;
			}

IL_00cb_2:
			{
				NullCheck(G_B17_1);
				G_B17_1->___U3CsumU3E5__2 = G_B17_0;
				int64_t L_23 = __this->___U3CcountU3E5__1;
				V_6 = L_23;
				int64_t L_24 = V_6;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_24, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1 = ((int64_t)il2cpp_codegen_add(L_24, ((int64_t)1)));
			}

IL_00e5_2:
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_25 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CvU3E5__6);
				il2cpp_codegen_initobj(L_25, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
			}

IL_00f2_2:
			{
				RuntimeObject* L_26 = __this->___U3CeU3E5__3;
				NullCheck(L_26);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_27;
				L_27 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_26);
				V_9 = L_27;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28;
				L_28 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_9), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_8 = L_28;
				bool L_29;
				L_29 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_8), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_0157_2;
				}
			}
			{
				int32_t L_30 = 0;
				V_0 = L_30;
				__this->___U3CU3E1__state = L_30;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_31 = V_8;
				__this->___U3CU3Eu__1 = L_31;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_10 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_32 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAsyncU3Ed__21_1_t1332FF70F0A3589494CB18B96F4F4A731100690A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_32, (&V_8), (&V_10), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_0292;
			}

IL_013a_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_33 = __this->___U3CU3Eu__1;
				V_8 = L_33;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_34, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_35 = (-1);
				V_0 = L_35;
				__this->___U3CU3E1__state = L_35;
			}

IL_0157_2:
			{
				bool L_36;
				L_36 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_8), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7 = L_36;
				bool L_37 = __this->___U3CU3Es__7;
				V_7 = L_37;
				bool L_38 = V_7;
				if (L_38)
				{
					goto IL_0064_2;
				}
			}
			{
				goto IL_0182_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0176_1;
			}
			throw e;
		}

CATCH_0176_1:
		{
			RuntimeObject* L_39 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_11 = L_39;
			RuntimeObject* L_40 = V_11;
			__this->___U3CU3Es__4 = L_40;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)L_40);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0182_1;
		}

IL_0182_1:
		{
			RuntimeObject* L_41 = __this->___U3CeU3E5__3;
			V_12 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_41) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_42 = V_12;
			if (!L_42)
			{
				goto IL_0201_1;
			}
		}
		{
			RuntimeObject* L_43 = __this->___U3CeU3E5__3;
			NullCheck((RuntimeObject*)L_43);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_44;
			L_44 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_43);
			V_14 = L_44;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_45;
			L_45 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_14), NULL);
			V_13 = L_45;
			bool L_46;
			L_46 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_13), NULL);
			if (L_46)
			{
				goto IL_01f8_1;
			}
		}
		{
			int32_t L_47 = 1;
			V_0 = L_47;
			__this->___U3CU3E1__state = L_47;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_48 = V_13;
			__this->___U3CU3Eu__2 = L_48;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
			V_10 = __this;
			AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_49 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAsyncU3Ed__21_1_t1332FF70F0A3589494CB18B96F4F4A731100690A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_49, (&V_13), (&V_10), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_0292;
		}

IL_01db_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50 = __this->___U3CU3Eu__2;
			V_13 = L_50;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_51 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_51, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_52 = (-1);
			V_0 = L_52;
			__this->___U3CU3E1__state = L_52;
		}

IL_01f8_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_13), NULL);
		}

IL_0201_1:
		{
			RuntimeObject* L_53 = __this->___U3CU3Es__4;
			V_11 = L_53;
			RuntimeObject* L_54 = V_11;
			if (!L_54)
			{
				goto IL_022b_1;
			}
		}
		{
			RuntimeObject* L_55 = V_11;
			V_15 = ((Exception_t*)IsInstClass((RuntimeObject*)L_55, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_56 = V_15;
			if (L_56)
			{
				goto IL_021e_1;
			}
		}
		{
			RuntimeObject* L_57 = V_11;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_57, method);
		}

IL_021e_1:
		{
			Exception_t* L_58 = V_15;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_59;
			L_59 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_58, NULL);
			NullCheck(L_59);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_59, NULL);
		}

IL_022b_1:
		{
			int32_t L_60 = __this->___U3CU3Es__5;
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_61 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CsumU3E5__2);
			int32_t L_62;
			L_62 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA(L_61, Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
			int64_t L_63 = __this->___U3CcountU3E5__1;
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_64;
			memset((&L_64), 0, sizeof(L_64));
			Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_64), ((double)(((double)L_62)/((double)L_63))), Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
			V_1 = L_64;
			goto IL_0276;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0255;
		}
		throw e;
	}

CATCH_0255:
	{
		Exception_t* L_65 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_15 = L_65;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_66 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
		Exception_t* L_67 = V_15;
		AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_inline(L_66, L_67, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0292;
	}

IL_0276:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_68 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_69 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_inline(L_68, L_69, AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
	}

IL_0292:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__21_1_SetStateMachine_m8866E1857F0D579E8F89DDD59F19A33BE84B7FC8_gshared (U3CAverageAsyncU3Ed__21_1_t1332FF70F0A3589494CB18B96F4F4A731100690A* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__25_1__ctor_mFF6C1FAF174323198C0B3B9DBDBA06CEA3F6E5DD_gshared (U3CAverageAsyncU3Ed__25_1_t50DC0406CEF02DAB876282D754EA66F5781A80BF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__25_1_MoveNext_m698BE63E46955F05A7E3BA5C4EE2A6FDC7E6355E_gshared (U3CAverageAsyncU3Ed__25_1_t50DC0406CEF02DAB876282D754EA66F5781A80BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t9028DD732BA1643117233AC1C36360CA2CA18767 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t9028DD732BA1643117233AC1C36360CA2CA18767);
	int32_t V_0 = 0;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int64_t V_4 = 0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	U3CAverageAsyncU3Ed__25_1_t50DC0406CEF02DAB876282D754EA66F5781A80BF* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_12;
	memset((&V_12), 0, sizeof(V_12));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_13;
	memset((&V_13), 0, sizeof(V_13));
	Exception_t* V_14 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	U3CAverageAsyncU3Ed__25_1_t50DC0406CEF02DAB876282D754EA66F5781A80BF* G_B16_0 = NULL;
	U3CAverageAsyncU3Ed__25_1_t50DC0406CEF02DAB876282D754EA66F5781A80BF* G_B15_0 = NULL;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 G_B17_0;
	memset((&G_B17_0), 0, sizeof(G_B17_0));
	U3CAverageAsyncU3Ed__25_1_t50DC0406CEF02DAB876282D754EA66F5781A80BF* G_B17_1 = NULL;
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
			goto IL_0054_1;
		}

IL_0014_1:
		{
			goto IL_01dc_1;
		}

IL_0019_1:
		{
			__this->___U3CcountU3E5__1 = ((int64_t)0);
			Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_3;
			memset((&L_3), 0, sizeof(L_3));
			Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_3), ((int64_t)0), Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
			__this->___U3CsumU3E5__2 = L_3;
			RuntimeObject* L_4 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = __this->___cancellationToken;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__3 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)L_6);
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			__this->___U3CU3Es__5 = 0;
		}

IL_0054_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_005a_2;
				}
			}
			{
				goto IL_005f_2;
			}

IL_005a_2:
			{
				goto IL_013b_2;
			}

IL_005f_2:
			{
				goto IL_00f3_2;
			}

IL_0065_2:
			{
				Func_2_tFC0477C87E7518136DEE345DCF44B6ACA22E24F0* L_8 = __this->___selector;
				RuntimeObject* L_9 = __this->___U3CeU3E5__3;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_11;
				L_11 = InvokerFuncInvoker1< Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
				__this->___U3CvU3E5__6 = L_11;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_12 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CvU3E5__6);
				bool L_13;
				L_13 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline(L_12, Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14 = V_2;
				if (!L_14)
				{
					goto IL_00e6_2;
				}
			}
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_15 = __this->___U3CsumU3E5__2;
				V_3 = L_15;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_16 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CvU3E5__6);
				int64_t L_17;
				L_17 = Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC(L_16, Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
				V_4 = L_17;
				bool L_18;
				L_18 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline((&V_3), Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
				if (L_18)
				{
					G_B16_0 = __this;
					goto IL_00bd_2;
				}
				G_B15_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_19 = V_5;
				G_B17_0 = L_19;
				G_B17_1 = G_B15_0;
				goto IL_00cc_2;
			}

IL_00bd_2:
			{
				int64_t L_20;
				L_20 = Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_inline((&V_3), Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
				int64_t L_21 = V_4;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_20, (int64_t)L_21))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_22;
				memset((&L_22), 0, sizeof(L_22));
				Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_22), ((int64_t)il2cpp_codegen_add(L_20, L_21)), Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
				G_B17_0 = L_22;
				G_B17_1 = G_B16_0;
			}

IL_00cc_2:
			{
				NullCheck(G_B17_1);
				G_B17_1->___U3CsumU3E5__2 = G_B17_0;
				int64_t L_23 = __this->___U3CcountU3E5__1;
				V_4 = L_23;
				int64_t L_24 = V_4;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_24, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1 = ((int64_t)il2cpp_codegen_add(L_24, ((int64_t)1)));
			}

IL_00e6_2:
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_25 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CvU3E5__6);
				il2cpp_codegen_initobj(L_25, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
			}

IL_00f3_2:
			{
				RuntimeObject* L_26 = __this->___U3CeU3E5__3;
				NullCheck(L_26);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_27;
				L_27 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_26);
				V_8 = L_27;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28;
				L_28 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_7 = L_28;
				bool L_29;
				L_29 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_0158_2;
				}
			}
			{
				int32_t L_30 = 0;
				V_0 = L_30;
				__this->___U3CU3E1__state = L_30;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_31 = V_7;
				__this->___U3CU3Eu__1 = L_31;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_9 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_32 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAsyncU3Ed__25_1_t50DC0406CEF02DAB876282D754EA66F5781A80BF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_32, (&V_7), (&V_9), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_0293;
			}

IL_013b_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_33 = __this->___U3CU3Eu__1;
				V_7 = L_33;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_34, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_35 = (-1);
				V_0 = L_35;
				__this->___U3CU3E1__state = L_35;
			}

IL_0158_2:
			{
				bool L_36;
				L_36 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7 = L_36;
				bool L_37 = __this->___U3CU3Es__7;
				V_6 = L_37;
				bool L_38 = V_6;
				if (L_38)
				{
					goto IL_0065_2;
				}
			}
			{
				goto IL_0183_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0177_1;
			}
			throw e;
		}

CATCH_0177_1:
		{
			RuntimeObject* L_39 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_10 = L_39;
			RuntimeObject* L_40 = V_10;
			__this->___U3CU3Es__4 = L_40;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)L_40);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0183_1;
		}

IL_0183_1:
		{
			RuntimeObject* L_41 = __this->___U3CeU3E5__3;
			V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_41) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_42 = V_11;
			if (!L_42)
			{
				goto IL_0202_1;
			}
		}
		{
			RuntimeObject* L_43 = __this->___U3CeU3E5__3;
			NullCheck((RuntimeObject*)L_43);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_44;
			L_44 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_43);
			V_13 = L_44;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_45;
			L_45 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_13), NULL);
			V_12 = L_45;
			bool L_46;
			L_46 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_12), NULL);
			if (L_46)
			{
				goto IL_01f9_1;
			}
		}
		{
			int32_t L_47 = 1;
			V_0 = L_47;
			__this->___U3CU3E1__state = L_47;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_48 = V_12;
			__this->___U3CU3Eu__2 = L_48;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
			V_9 = __this;
			AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_49 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAsyncU3Ed__25_1_t50DC0406CEF02DAB876282D754EA66F5781A80BF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_49, (&V_12), (&V_9), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_0293;
		}

IL_01dc_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50 = __this->___U3CU3Eu__2;
			V_12 = L_50;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_51 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_51, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_52 = (-1);
			V_0 = L_52;
			__this->___U3CU3E1__state = L_52;
		}

IL_01f9_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_12), NULL);
		}

IL_0202_1:
		{
			RuntimeObject* L_53 = __this->___U3CU3Es__4;
			V_10 = L_53;
			RuntimeObject* L_54 = V_10;
			if (!L_54)
			{
				goto IL_022c_1;
			}
		}
		{
			RuntimeObject* L_55 = V_10;
			V_14 = ((Exception_t*)IsInstClass((RuntimeObject*)L_55, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_56 = V_14;
			if (L_56)
			{
				goto IL_021f_1;
			}
		}
		{
			RuntimeObject* L_57 = V_10;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_57, method);
		}

IL_021f_1:
		{
			Exception_t* L_58 = V_14;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_59;
			L_59 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_58, NULL);
			NullCheck(L_59);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_59, NULL);
		}

IL_022c_1:
		{
			int32_t L_60 = __this->___U3CU3Es__5;
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_61 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CsumU3E5__2);
			int64_t L_62;
			L_62 = Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC(L_61, Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
			int64_t L_63 = __this->___U3CcountU3E5__1;
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_64;
			memset((&L_64), 0, sizeof(L_64));
			Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_64), ((double)(((double)L_62)/((double)L_63))), Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
			V_1 = L_64;
			goto IL_0277;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0256;
		}
		throw e;
	}

CATCH_0256:
	{
		Exception_t* L_65 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_14 = L_65;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_66 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
		Exception_t* L_67 = V_14;
		AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_inline(L_66, L_67, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0293;
	}

IL_0277:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_68 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_69 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_inline(L_68, L_69, AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
	}

IL_0293:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__25_1_SetStateMachine_mB110B552350E7BB006F0E93B65BD5763DD907376_gshared (U3CAverageAsyncU3Ed__25_1_t50DC0406CEF02DAB876282D754EA66F5781A80BF* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__29_1__ctor_mB8F387941AF1D3022FF29EF58AC6A4E4068C8B21_gshared (U3CAverageAsyncU3Ed__29_1_t022577A8DD5BDABA432E986818E1E4B759AE6B49* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__29_1_MoveNext_m1175F1DB4C75AA4D5525842948E3B3E4B8C3DF30_gshared (U3CAverageAsyncU3Ed__29_1_t022577A8DD5BDABA432E986818E1E4B759AE6B49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t68EAC8F3C776CC2E9C12E564D052A2E390B42A0F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t68EAC8F3C776CC2E9C12E564D052A2E390B42A0F);
	int32_t V_0 = 0;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int64_t V_6 = 0;
	bool V_7 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_9;
	memset((&V_9), 0, sizeof(V_9));
	U3CAverageAsyncU3Ed__29_1_t022577A8DD5BDABA432E986818E1E4B759AE6B49* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_13;
	memset((&V_13), 0, sizeof(V_13));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_14;
	memset((&V_14), 0, sizeof(V_14));
	Exception_t* V_15 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	U3CAverageAsyncU3Ed__29_1_t022577A8DD5BDABA432E986818E1E4B759AE6B49* G_B16_0 = NULL;
	U3CAverageAsyncU3Ed__29_1_t022577A8DD5BDABA432E986818E1E4B759AE6B49* G_B15_0 = NULL;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 G_B17_0;
	memset((&G_B17_0), 0, sizeof(G_B17_0));
	U3CAverageAsyncU3Ed__29_1_t022577A8DD5BDABA432E986818E1E4B759AE6B49* G_B17_1 = NULL;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 G_B37_0;
	memset((&G_B37_0), 0, sizeof(G_B37_0));
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
			goto IL_0057_1;
		}

IL_0014_1:
		{
			goto IL_01df_1;
		}

IL_0019_1:
		{
			__this->___U3CcountU3E5__1 = ((int64_t)0);
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_3;
			memset((&L_3), 0, sizeof(L_3));
			Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_3), (0.0f), Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
			__this->___U3CsumU3E5__2 = L_3;
			RuntimeObject* L_4 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = __this->___cancellationToken;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__3 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)L_6);
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			__this->___U3CU3Es__5 = 0;
		}

IL_0057_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_005d_2;
				}
			}
			{
				goto IL_0062_2;
			}

IL_005d_2:
			{
				goto IL_013e_2;
			}

IL_0062_2:
			{
				goto IL_00f6_2;
			}

IL_0068_2:
			{
				Func_2_tCDF39BBC1094782C50BE631779E8FD895BFEAF32* L_8 = __this->___selector;
				RuntimeObject* L_9 = __this->___U3CeU3E5__3;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_11;
				L_11 = InvokerFuncInvoker1< Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
				__this->___U3CvU3E5__6 = L_11;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_12 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CvU3E5__6);
				bool L_13;
				L_13 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline(L_12, Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14 = V_2;
				if (!L_14)
				{
					goto IL_00e9_2;
				}
			}
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_15 = __this->___U3CsumU3E5__2;
				V_3 = L_15;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_16 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CvU3E5__6);
				float L_17;
				L_17 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA(L_16, Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
				V_4 = L_17;
				bool L_18;
				L_18 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&V_3), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
				if (L_18)
				{
					G_B16_0 = __this;
					goto IL_00c0_2;
				}
				G_B15_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_19 = V_5;
				G_B17_0 = L_19;
				G_B17_1 = G_B15_0;
				goto IL_00cf_2;
			}

IL_00c0_2:
			{
				float L_20;
				L_20 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline((&V_3), Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
				float L_21 = V_4;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_22;
				memset((&L_22), 0, sizeof(L_22));
				Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_22), ((float)il2cpp_codegen_add(L_20, L_21)), Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
				G_B17_0 = L_22;
				G_B17_1 = G_B16_0;
			}

IL_00cf_2:
			{
				NullCheck(G_B17_1);
				G_B17_1->___U3CsumU3E5__2 = G_B17_0;
				int64_t L_23 = __this->___U3CcountU3E5__1;
				V_6 = L_23;
				int64_t L_24 = V_6;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_24, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1 = ((int64_t)il2cpp_codegen_add(L_24, ((int64_t)1)));
			}

IL_00e9_2:
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_25 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CvU3E5__6);
				il2cpp_codegen_initobj(L_25, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
			}

IL_00f6_2:
			{
				RuntimeObject* L_26 = __this->___U3CeU3E5__3;
				NullCheck(L_26);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_27;
				L_27 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_26);
				V_9 = L_27;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28;
				L_28 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_9), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_8 = L_28;
				bool L_29;
				L_29 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_8), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_015b_2;
				}
			}
			{
				int32_t L_30 = 0;
				V_0 = L_30;
				__this->___U3CU3E1__state = L_30;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_31 = V_8;
				__this->___U3CU3Eu__1 = L_31;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_10 = __this;
				AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_32 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAsyncU3Ed__29_1_t022577A8DD5BDABA432E986818E1E4B759AE6B49**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_32, (&V_8), (&V_10), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_02c0;
			}

IL_013e_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_33 = __this->___U3CU3Eu__1;
				V_8 = L_33;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_34, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_35 = (-1);
				V_0 = L_35;
				__this->___U3CU3E1__state = L_35;
			}

IL_015b_2:
			{
				bool L_36;
				L_36 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_8), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7 = L_36;
				bool L_37 = __this->___U3CU3Es__7;
				V_7 = L_37;
				bool L_38 = V_7;
				if (L_38)
				{
					goto IL_0068_2;
				}
			}
			{
				goto IL_0186_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_017a_1;
			}
			throw e;
		}

CATCH_017a_1:
		{
			RuntimeObject* L_39 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_11 = L_39;
			RuntimeObject* L_40 = V_11;
			__this->___U3CU3Es__4 = L_40;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)L_40);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0186_1;
		}

IL_0186_1:
		{
			RuntimeObject* L_41 = __this->___U3CeU3E5__3;
			V_12 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_41) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_42 = V_12;
			if (!L_42)
			{
				goto IL_0205_1;
			}
		}
		{
			RuntimeObject* L_43 = __this->___U3CeU3E5__3;
			NullCheck((RuntimeObject*)L_43);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_44;
			L_44 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_43);
			V_14 = L_44;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_45;
			L_45 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_14), NULL);
			V_13 = L_45;
			bool L_46;
			L_46 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_13), NULL);
			if (L_46)
			{
				goto IL_01fc_1;
			}
		}
		{
			int32_t L_47 = 1;
			V_0 = L_47;
			__this->___U3CU3E1__state = L_47;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_48 = V_13;
			__this->___U3CU3Eu__2 = L_48;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
			V_10 = __this;
			AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_49 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAsyncU3Ed__29_1_t022577A8DD5BDABA432E986818E1E4B759AE6B49**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_49, (&V_13), (&V_10), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_02c0;
		}

IL_01df_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50 = __this->___U3CU3Eu__2;
			V_13 = L_50;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_51 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_51, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_52 = (-1);
			V_0 = L_52;
			__this->___U3CU3E1__state = L_52;
		}

IL_01fc_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_13), NULL);
		}

IL_0205_1:
		{
			RuntimeObject* L_53 = __this->___U3CU3Es__4;
			V_11 = L_53;
			RuntimeObject* L_54 = V_11;
			if (!L_54)
			{
				goto IL_022f_1;
			}
		}
		{
			RuntimeObject* L_55 = V_11;
			V_15 = ((Exception_t*)IsInstClass((RuntimeObject*)L_55, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_56 = V_15;
			if (L_56)
			{
				goto IL_0222_1;
			}
		}
		{
			RuntimeObject* L_57 = V_11;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_57, method);
		}

IL_0222_1:
		{
			Exception_t* L_58 = V_15;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_59;
			L_59 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_58, NULL);
			NullCheck(L_59);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_59, NULL);
		}

IL_022f_1:
		{
			int32_t L_60 = __this->___U3CU3Es__5;
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_61 = __this->___U3CsumU3E5__2;
			V_3 = L_61;
			int64_t L_62 = __this->___U3CcountU3E5__1;
			V_4 = ((float)L_62);
			bool L_63;
			L_63 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&V_3), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
			if (L_63)
			{
				goto IL_0262_1;
			}
		}
		{
			il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_64 = V_5;
			G_B37_0 = L_64;
			goto IL_0271_1;
		}

IL_0262_1:
		{
			float L_65;
			L_65 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline((&V_3), Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
			float L_66 = V_4;
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_67;
			memset((&L_67), 0, sizeof(L_67));
			Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_67), ((float)(L_65/L_66)), Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
			G_B37_0 = L_67;
		}

IL_0271_1:
		{
			V_5 = G_B37_0;
			float L_68;
			L_68 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&V_5), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_69;
			memset((&L_69), 0, sizeof(L_69));
			Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_69), ((float)L_68), Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
			V_1 = L_69;
			goto IL_02a4;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0283;
		}
		throw e;
	}

CATCH_0283:
	{
		Exception_t* L_70 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_15 = L_70;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_71 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder);
		Exception_t* L_72 = V_15;
		AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_inline(L_71, L_72, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_02c0;
	}

IL_02a4:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_73 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_74 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_inline(L_73, L_74, AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_RuntimeMethod_var);
	}

IL_02c0:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__29_1_SetStateMachine_m8B6A5E58C4855A311D8D9F71CC23AB4B2BFEFCDF_gshared (U3CAverageAsyncU3Ed__29_1_t022577A8DD5BDABA432E986818E1E4B759AE6B49* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__33_1__ctor_m82F2D09BC133BD469C453ED6F57C39A07248C6DC_gshared (U3CAverageAsyncU3Ed__33_1_tB5ED8AAD653CC1552876093A060CB51E7A2235BF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__33_1_MoveNext_m076632920D43C836E3717E2CCEEDB8294D5A3612_gshared (U3CAverageAsyncU3Ed__33_1_tB5ED8AAD653CC1552876093A060CB51E7A2235BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tD30D2F59F765B6A03C3F07E4B469CFC3A37AF7A3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_tD30D2F59F765B6A03C3F07E4B469CFC3A37AF7A3);
	int32_t V_0 = 0;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_3;
	memset((&V_3), 0, sizeof(V_3));
	double V_4 = 0.0;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int64_t V_6 = 0;
	bool V_7 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_9;
	memset((&V_9), 0, sizeof(V_9));
	U3CAverageAsyncU3Ed__33_1_tB5ED8AAD653CC1552876093A060CB51E7A2235BF* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_13;
	memset((&V_13), 0, sizeof(V_13));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_14;
	memset((&V_14), 0, sizeof(V_14));
	Exception_t* V_15 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	U3CAverageAsyncU3Ed__33_1_tB5ED8AAD653CC1552876093A060CB51E7A2235BF* G_B16_0 = NULL;
	U3CAverageAsyncU3Ed__33_1_tB5ED8AAD653CC1552876093A060CB51E7A2235BF* G_B15_0 = NULL;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 G_B17_0;
	memset((&G_B17_0), 0, sizeof(G_B17_0));
	U3CAverageAsyncU3Ed__33_1_tB5ED8AAD653CC1552876093A060CB51E7A2235BF* G_B17_1 = NULL;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 G_B37_0;
	memset((&G_B37_0), 0, sizeof(G_B37_0));
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
			goto IL_005b_1;
		}

IL_0014_1:
		{
			goto IL_01e3_1;
		}

IL_0019_1:
		{
			__this->___U3CcountU3E5__1 = ((int64_t)0);
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_3;
			memset((&L_3), 0, sizeof(L_3));
			Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_3), (0.0), Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
			__this->___U3CsumU3E5__2 = L_3;
			RuntimeObject* L_4 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = __this->___cancellationToken;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__3 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)L_6);
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			__this->___U3CU3Es__5 = 0;
		}

IL_005b_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0061_2;
				}
			}
			{
				goto IL_0066_2;
			}

IL_0061_2:
			{
				goto IL_0142_2;
			}

IL_0066_2:
			{
				goto IL_00fa_2;
			}

IL_006c_2:
			{
				Func_2_tB9099E603733365FA636ABD4F1512E954C883863* L_8 = __this->___selector;
				RuntimeObject* L_9 = __this->___U3CeU3E5__3;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_11;
				L_11 = InvokerFuncInvoker1< Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
				__this->___U3CvU3E5__6 = L_11;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_12 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CvU3E5__6);
				bool L_13;
				L_13 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline(L_12, Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14 = V_2;
				if (!L_14)
				{
					goto IL_00ed_2;
				}
			}
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_15 = __this->___U3CsumU3E5__2;
				V_3 = L_15;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_16 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CvU3E5__6);
				double L_17;
				L_17 = Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1(L_16, Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
				V_4 = L_17;
				bool L_18;
				L_18 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&V_3), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
				if (L_18)
				{
					G_B16_0 = __this;
					goto IL_00c4_2;
				}
				G_B15_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_19 = V_5;
				G_B17_0 = L_19;
				G_B17_1 = G_B15_0;
				goto IL_00d3_2;
			}

IL_00c4_2:
			{
				double L_20;
				L_20 = Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_inline((&V_3), Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var);
				double L_21 = V_4;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_22;
				memset((&L_22), 0, sizeof(L_22));
				Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_22), ((double)il2cpp_codegen_add(L_20, L_21)), Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
				G_B17_0 = L_22;
				G_B17_1 = G_B16_0;
			}

IL_00d3_2:
			{
				NullCheck(G_B17_1);
				G_B17_1->___U3CsumU3E5__2 = G_B17_0;
				int64_t L_23 = __this->___U3CcountU3E5__1;
				V_6 = L_23;
				int64_t L_24 = V_6;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_24, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1 = ((int64_t)il2cpp_codegen_add(L_24, ((int64_t)1)));
			}

IL_00ed_2:
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_25 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CvU3E5__6);
				il2cpp_codegen_initobj(L_25, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
			}

IL_00fa_2:
			{
				RuntimeObject* L_26 = __this->___U3CeU3E5__3;
				NullCheck(L_26);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_27;
				L_27 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_26);
				V_9 = L_27;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28;
				L_28 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_9), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_8 = L_28;
				bool L_29;
				L_29 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_8), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_015f_2;
				}
			}
			{
				int32_t L_30 = 0;
				V_0 = L_30;
				__this->___U3CU3E1__state = L_30;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_31 = V_8;
				__this->___U3CU3Eu__1 = L_31;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_10 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_32 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAsyncU3Ed__33_1_tB5ED8AAD653CC1552876093A060CB51E7A2235BF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_32, (&V_8), (&V_10), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_02b5;
			}

IL_0142_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_33 = __this->___U3CU3Eu__1;
				V_8 = L_33;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_34, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_35 = (-1);
				V_0 = L_35;
				__this->___U3CU3E1__state = L_35;
			}

IL_015f_2:
			{
				bool L_36;
				L_36 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_8), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7 = L_36;
				bool L_37 = __this->___U3CU3Es__7;
				V_7 = L_37;
				bool L_38 = V_7;
				if (L_38)
				{
					goto IL_006c_2;
				}
			}
			{
				goto IL_018a_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_017e_1;
			}
			throw e;
		}

CATCH_017e_1:
		{
			RuntimeObject* L_39 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_11 = L_39;
			RuntimeObject* L_40 = V_11;
			__this->___U3CU3Es__4 = L_40;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)L_40);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_018a_1;
		}

IL_018a_1:
		{
			RuntimeObject* L_41 = __this->___U3CeU3E5__3;
			V_12 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_41) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_42 = V_12;
			if (!L_42)
			{
				goto IL_0209_1;
			}
		}
		{
			RuntimeObject* L_43 = __this->___U3CeU3E5__3;
			NullCheck((RuntimeObject*)L_43);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_44;
			L_44 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_43);
			V_14 = L_44;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_45;
			L_45 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_14), NULL);
			V_13 = L_45;
			bool L_46;
			L_46 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_13), NULL);
			if (L_46)
			{
				goto IL_0200_1;
			}
		}
		{
			int32_t L_47 = 1;
			V_0 = L_47;
			__this->___U3CU3E1__state = L_47;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_48 = V_13;
			__this->___U3CU3Eu__2 = L_48;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
			V_10 = __this;
			AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_49 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAsyncU3Ed__33_1_tB5ED8AAD653CC1552876093A060CB51E7A2235BF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_49, (&V_13), (&V_10), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_02b5;
		}

IL_01e3_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50 = __this->___U3CU3Eu__2;
			V_13 = L_50;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_51 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_51, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_52 = (-1);
			V_0 = L_52;
			__this->___U3CU3E1__state = L_52;
		}

IL_0200_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_13), NULL);
		}

IL_0209_1:
		{
			RuntimeObject* L_53 = __this->___U3CU3Es__4;
			V_11 = L_53;
			RuntimeObject* L_54 = V_11;
			if (!L_54)
			{
				goto IL_0233_1;
			}
		}
		{
			RuntimeObject* L_55 = V_11;
			V_15 = ((Exception_t*)IsInstClass((RuntimeObject*)L_55, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_56 = V_15;
			if (L_56)
			{
				goto IL_0226_1;
			}
		}
		{
			RuntimeObject* L_57 = V_11;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_57, method);
		}

IL_0226_1:
		{
			Exception_t* L_58 = V_15;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_59;
			L_59 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_58, NULL);
			NullCheck(L_59);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_59, NULL);
		}

IL_0233_1:
		{
			int32_t L_60 = __this->___U3CU3Es__5;
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_61 = __this->___U3CsumU3E5__2;
			V_3 = L_61;
			int64_t L_62 = __this->___U3CcountU3E5__1;
			V_4 = ((double)L_62);
			bool L_63;
			L_63 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&V_3), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
			if (L_63)
			{
				goto IL_0266_1;
			}
		}
		{
			il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_64 = V_5;
			G_B37_0 = L_64;
			goto IL_0275_1;
		}

IL_0266_1:
		{
			double L_65;
			L_65 = Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_inline((&V_3), Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var);
			double L_66 = V_4;
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_67;
			memset((&L_67), 0, sizeof(L_67));
			Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_67), ((double)(L_65/L_66)), Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
			G_B37_0 = L_67;
		}

IL_0275_1:
		{
			V_1 = G_B37_0;
			goto IL_0299;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0278;
		}
		throw e;
	}

CATCH_0278:
	{
		Exception_t* L_68 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_15 = L_68;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_69 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
		Exception_t* L_70 = V_15;
		AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_inline(L_69, L_70, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_02b5;
	}

IL_0299:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_71 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_72 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_inline(L_71, L_72, AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
	}

IL_02b5:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__33_1_SetStateMachine_m33DAB9D9CA791BF7A273F671DB6853207F7FC8D4_gshared (U3CAverageAsyncU3Ed__33_1_tB5ED8AAD653CC1552876093A060CB51E7A2235BF* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__37_1__ctor_m307CDE6184FCF7F4A67203547C8EC5CD21ACAB9F_gshared (U3CAverageAsyncU3Ed__37_1_tF6158B69B5E1C0CFF9AA07D2DB76CA10B145EC26* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__37_1_MoveNext_m1469CC9E61703181D118BA7049772BC3177912F5_gshared (U3CAverageAsyncU3Ed__37_1_tF6158B69B5E1C0CFF9AA07D2DB76CA10B145EC26* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m33574CDAA01061AEA24434F9DE51A5B4F03A18A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t1EB6263FF9A2EBCA804E4CF55AC44E1D84A116BB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t1EB6263FF9A2EBCA804E4CF55AC44E1D84A116BB);
	int32_t V_0 = 0;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_1;
	memset((&V_1), 0, sizeof(V_1));
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_4;
	memset((&V_4), 0, sizeof(V_4));
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_5;
	memset((&V_5), 0, sizeof(V_5));
	int64_t V_6 = 0;
	bool V_7 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_9;
	memset((&V_9), 0, sizeof(V_9));
	U3CAverageAsyncU3Ed__37_1_tF6158B69B5E1C0CFF9AA07D2DB76CA10B145EC26* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_13;
	memset((&V_13), 0, sizeof(V_13));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_14;
	memset((&V_14), 0, sizeof(V_14));
	Exception_t* V_15 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	U3CAverageAsyncU3Ed__37_1_tF6158B69B5E1C0CFF9AA07D2DB76CA10B145EC26* G_B16_0 = NULL;
	U3CAverageAsyncU3Ed__37_1_tF6158B69B5E1C0CFF9AA07D2DB76CA10B145EC26* G_B15_0 = NULL;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB G_B17_0;
	memset((&G_B17_0), 0, sizeof(G_B17_0));
	U3CAverageAsyncU3Ed__37_1_tF6158B69B5E1C0CFF9AA07D2DB76CA10B145EC26* G_B17_1 = NULL;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB G_B37_0;
	memset((&G_B37_0), 0, sizeof(G_B37_0));
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
			goto IL_005b_1;
		}

IL_0014_1:
		{
			goto IL_01e6_1;
		}

IL_0019_1:
		{
			__this->___U3CcountU3E5__1 = ((int64_t)0);
			il2cpp_codegen_initobj((&V_2), sizeof(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F));
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_3 = V_2;
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_4;
			memset((&L_4), 0, sizeof(L_4));
			Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7((&L_4), L_3, Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7_RuntimeMethod_var);
			__this->___U3CsumU3E5__2 = L_4;
			RuntimeObject* L_5 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_6 = __this->___cancellationToken;
			NullCheck(L_5);
			RuntimeObject* L_7;
			L_7 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_5, L_6);
			__this->___U3CeU3E5__3 = L_7;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)L_7);
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			__this->___U3CU3Es__5 = 0;
		}

IL_005b_1:
		{
		}
		try
		{
			{
				int32_t L_8 = V_0;
				if (!L_8)
				{
					goto IL_0061_2;
				}
			}
			{
				goto IL_0066_2;
			}

IL_0061_2:
			{
				goto IL_0145_2;
			}

IL_0066_2:
			{
				goto IL_00fd_2;
			}

IL_006c_2:
			{
				Func_2_t02AAAA5ED63E37D8013889ECE551ED5172A9F7A4* L_9 = __this->___selector;
				RuntimeObject* L_10 = __this->___U3CeU3E5__3;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				NullCheck(L_9);
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_12;
				L_12 = InvokerFuncInvoker1< Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11));
				__this->___U3CvU3E5__6 = L_12;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_13 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CvU3E5__6);
				bool L_14;
				L_14 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline(L_13, Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
				V_3 = L_14;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_00f0_2;
				}
			}
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_16 = __this->___U3CsumU3E5__2;
				V_4 = L_16;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_17 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CvU3E5__6);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_18;
				L_18 = Nullable_1_get_Value_m33574CDAA01061AEA24434F9DE51A5B4F03A18A2(L_17, Nullable_1_get_Value_m33574CDAA01061AEA24434F9DE51A5B4F03A18A2_RuntimeMethod_var);
				V_2 = L_18;
				bool L_19;
				L_19 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline((&V_4), Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
				if (L_19)
				{
					G_B16_0 = __this;
					goto IL_00c4_2;
				}
				G_B15_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_20 = V_5;
				G_B17_0 = L_20;
				G_B17_1 = G_B15_0;
				goto IL_00d6_2;
			}

IL_00c4_2:
			{
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_21;
				L_21 = Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_inline((&V_4), Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_22 = V_2;
				il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_23;
				L_23 = Decimal_op_Addition_m878AC5E15D13F205BCB6AE9747B2C0D950BD2EF7(L_21, L_22, NULL);
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_24;
				memset((&L_24), 0, sizeof(L_24));
				Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7((&L_24), L_23, Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7_RuntimeMethod_var);
				G_B17_0 = L_24;
				G_B17_1 = G_B16_0;
			}

IL_00d6_2:
			{
				NullCheck(G_B17_1);
				G_B17_1->___U3CsumU3E5__2 = G_B17_0;
				int64_t L_25 = __this->___U3CcountU3E5__1;
				V_6 = L_25;
				int64_t L_26 = V_6;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_26, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1 = ((int64_t)il2cpp_codegen_add(L_26, ((int64_t)1)));
			}

IL_00f0_2:
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_27 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CvU3E5__6);
				il2cpp_codegen_initobj(L_27, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
			}

IL_00fd_2:
			{
				RuntimeObject* L_28 = __this->___U3CeU3E5__3;
				NullCheck(L_28);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_29;
				L_29 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_28);
				V_9 = L_29;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_30;
				L_30 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_9), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_8 = L_30;
				bool L_31;
				L_31 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_8), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_31)
				{
					goto IL_0162_2;
				}
			}
			{
				int32_t L_32 = 0;
				V_0 = L_32;
				__this->___U3CU3E1__state = L_32;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_33 = V_8;
				__this->___U3CU3Eu__1 = L_33;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_10 = __this;
				AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_34 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAsyncU3Ed__37_1_tF6158B69B5E1C0CFF9AA07D2DB76CA10B145EC26**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_34, (&V_8), (&V_10), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_02bf;
			}

IL_0145_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_35 = __this->___U3CU3Eu__1;
				V_8 = L_35;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_36 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_36, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_37 = (-1);
				V_0 = L_37;
				__this->___U3CU3E1__state = L_37;
			}

IL_0162_2:
			{
				bool L_38;
				L_38 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_8), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7 = L_38;
				bool L_39 = __this->___U3CU3Es__7;
				V_7 = L_39;
				bool L_40 = V_7;
				if (L_40)
				{
					goto IL_006c_2;
				}
			}
			{
				goto IL_018d_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0181_1;
			}
			throw e;
		}

CATCH_0181_1:
		{
			RuntimeObject* L_41 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_11 = L_41;
			RuntimeObject* L_42 = V_11;
			__this->___U3CU3Es__4 = L_42;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)L_42);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_018d_1;
		}

IL_018d_1:
		{
			RuntimeObject* L_43 = __this->___U3CeU3E5__3;
			V_12 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_43) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_44 = V_12;
			if (!L_44)
			{
				goto IL_020c_1;
			}
		}
		{
			RuntimeObject* L_45 = __this->___U3CeU3E5__3;
			NullCheck((RuntimeObject*)L_45);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_46;
			L_46 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_45);
			V_14 = L_46;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47;
			L_47 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_14), NULL);
			V_13 = L_47;
			bool L_48;
			L_48 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_13), NULL);
			if (L_48)
			{
				goto IL_0203_1;
			}
		}
		{
			int32_t L_49 = 1;
			V_0 = L_49;
			__this->___U3CU3E1__state = L_49;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50 = V_13;
			__this->___U3CU3Eu__2 = L_50;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
			V_10 = __this;
			AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_51 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAsyncU3Ed__37_1_tF6158B69B5E1C0CFF9AA07D2DB76CA10B145EC26**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_51, (&V_13), (&V_10), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_02bf;
		}

IL_01e6_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_52 = __this->___U3CU3Eu__2;
			V_13 = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_53 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_53, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_54 = (-1);
			V_0 = L_54;
			__this->___U3CU3E1__state = L_54;
		}

IL_0203_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_13), NULL);
		}

IL_020c_1:
		{
			RuntimeObject* L_55 = __this->___U3CU3Es__4;
			V_11 = L_55;
			RuntimeObject* L_56 = V_11;
			if (!L_56)
			{
				goto IL_0236_1;
			}
		}
		{
			RuntimeObject* L_57 = V_11;
			V_15 = ((Exception_t*)IsInstClass((RuntimeObject*)L_57, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_58 = V_15;
			if (L_58)
			{
				goto IL_0229_1;
			}
		}
		{
			RuntimeObject* L_59 = V_11;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_59, method);
		}

IL_0229_1:
		{
			Exception_t* L_60 = V_15;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_61;
			L_61 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_60, NULL);
			NullCheck(L_61);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_61, NULL);
		}

IL_0236_1:
		{
			int32_t L_62 = __this->___U3CU3Es__5;
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_63 = __this->___U3CsumU3E5__2;
			V_4 = L_63;
			int64_t L_64 = __this->___U3CcountU3E5__1;
			il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_65;
			L_65 = Decimal_op_Implicit_m8F9A38760D01B23E6DFF77EA760CCE5111F3656D(L_64, NULL);
			V_2 = L_65;
			bool L_66;
			L_66 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline((&V_4), Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
			if (L_66)
			{
				goto IL_026d_1;
			}
		}
		{
			il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_67 = V_5;
			G_B37_0 = L_67;
			goto IL_027f_1;
		}

IL_026d_1:
		{
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_68;
			L_68 = Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_inline((&V_4), Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_69 = V_2;
			il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_70;
			L_70 = Decimal_op_Division_mA0BD25988CA8010A3F8EA2F6A534F9F2D812D2AC(L_68, L_69, NULL);
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_71;
			memset((&L_71), 0, sizeof(L_71));
			Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7((&L_71), L_70, Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7_RuntimeMethod_var);
			G_B37_0 = L_71;
		}

IL_027f_1:
		{
			V_1 = G_B37_0;
			goto IL_02a3;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0282;
		}
		throw e;
	}

CATCH_0282:
	{
		Exception_t* L_72 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_15 = L_72;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_73 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder);
		Exception_t* L_74 = V_15;
		AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_inline(L_73, L_74, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_02bf;
	}

IL_02a3:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_75 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder);
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_76 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_inline(L_75, L_76, AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_RuntimeMethod_var);
	}

IL_02bf:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__37_1_SetStateMachine_m7ADBC464A70F9A79B4873DE859CA949D69AEA5E6_gshared (U3CAverageAsyncU3Ed__37_1_tF6158B69B5E1C0CFF9AA07D2DB76CA10B145EC26* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__5_1__ctor_mB3A85C45B112E869225257A8EF7A7CD6483E96B6_gshared (U3CAverageAsyncU3Ed__5_1_t84BCC31CD3BC2E5D922564232FEDCBDFF53E19E2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__5_1_MoveNext_m56732FCD415A6273386FF464A776A239412FFD23_gshared (U3CAverageAsyncU3Ed__5_1_t84BCC31CD3BC2E5D922564232FEDCBDFF53E19E2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tC53BB519B4F6E411B7DD37198E8642AF6960ACA1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_tC53BB519B4F6E411B7DD37198E8642AF6960ACA1);
	int32_t V_0 = 0;
	double V_1 = 0.0;
	int64_t V_2 = 0;
	bool V_3 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_4;
	memset((&V_4), 0, sizeof(V_4));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_5;
	memset((&V_5), 0, sizeof(V_5));
	U3CAverageAsyncU3Ed__5_1_t84BCC31CD3BC2E5D922564232FEDCBDFF53E19E2* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	bool V_8 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Exception_t* V_11 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
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
			goto IL_004f_1;
		}

IL_0014_1:
		{
			goto IL_017c_1;
		}

IL_0019_1:
		{
			__this->___U3CcountU3E5__1 = ((int64_t)0);
			__this->___U3CsumU3E5__2 = ((int64_t)0);
			RuntimeObject* L_3 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = __this->___cancellationToken;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__3 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)L_5);
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			__this->___U3CU3Es__5 = 0;
		}

IL_004f_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_0055_2;
				}
			}
			{
				goto IL_005a_2;
			}

IL_0055_2:
			{
				goto IL_00dd_2;
			}

IL_005a_2:
			{
				goto IL_0095_2;
			}

IL_005d_2:
			{
				int64_t L_7 = __this->___U3CsumU3E5__2;
				Func_2_t08AB71331BE9C65EB982154CBB27F90B5B62A771* L_8 = __this->___selector;
				RuntimeObject* L_9 = __this->___U3CeU3E5__3;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				int64_t L_11;
				L_11 = InvokerFuncInvoker1< int64_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
				if (il2cpp_codegen_check_add_overflow((int64_t)L_7, (int64_t)L_11))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CsumU3E5__2 = ((int64_t)il2cpp_codegen_add(L_7, L_11));
				int64_t L_12 = __this->___U3CcountU3E5__1;
				V_2 = L_12;
				int64_t L_13 = V_2;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_13, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1 = ((int64_t)il2cpp_codegen_add(L_13, ((int64_t)1)));
			}

IL_0095_2:
			{
				RuntimeObject* L_14 = __this->___U3CeU3E5__3;
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
					goto IL_00fa_2;
				}
			}
			{
				int32_t L_18 = 0;
				V_0 = L_18;
				__this->___U3CU3E1__state = L_18;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_19 = V_4;
				__this->___U3CU3Eu__1 = L_19;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_6 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_20 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAsyncU3Ed__5_1_t84BCC31CD3BC2E5D922564232FEDCBDFF53E19E2**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_20, (&V_4), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_0229;
			}

IL_00dd_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_21 = __this->___U3CU3Eu__1;
				V_4 = L_21;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_22 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_22, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_23 = (-1);
				V_0 = L_23;
				__this->___U3CU3E1__state = L_23;
			}

IL_00fa_2:
			{
				bool L_24;
				L_24 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_4), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_24;
				bool L_25 = __this->___U3CU3Es__6;
				V_3 = L_25;
				bool L_26 = V_3;
				if (L_26)
				{
					goto IL_005d_2;
				}
			}
			{
				goto IL_0123_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0117_1;
			}
			throw e;
		}

CATCH_0117_1:
		{
			RuntimeObject* L_27 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_7 = L_27;
			RuntimeObject* L_28 = V_7;
			__this->___U3CU3Es__4 = L_28;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)L_28);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0123_1;
		}

IL_0123_1:
		{
			RuntimeObject* L_29 = __this->___U3CeU3E5__3;
			V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_29) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_30 = V_8;
			if (!L_30)
			{
				goto IL_01a2_1;
			}
		}
		{
			RuntimeObject* L_31 = __this->___U3CeU3E5__3;
			NullCheck((RuntimeObject*)L_31);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_32;
			L_32 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_31);
			V_10 = L_32;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_33;
			L_33 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_10), NULL);
			V_9 = L_33;
			bool L_34;
			L_34 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_9), NULL);
			if (L_34)
			{
				goto IL_0199_1;
			}
		}
		{
			int32_t L_35 = 1;
			V_0 = L_35;
			__this->___U3CU3E1__state = L_35;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36 = V_9;
			__this->___U3CU3Eu__2 = L_36;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
			V_6 = __this;
			AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_37 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAsyncU3Ed__5_1_t84BCC31CD3BC2E5D922564232FEDCBDFF53E19E2**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_37, (&V_9), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_0229;
		}

IL_017c_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_38 = __this->___U3CU3Eu__2;
			V_9 = L_38;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_39 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_39, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_40 = (-1);
			V_0 = L_40;
			__this->___U3CU3E1__state = L_40;
		}

IL_0199_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_9), NULL);
		}

IL_01a2_1:
		{
			RuntimeObject* L_41 = __this->___U3CU3Es__4;
			V_7 = L_41;
			RuntimeObject* L_42 = V_7;
			if (!L_42)
			{
				goto IL_01cc_1;
			}
		}
		{
			RuntimeObject* L_43 = V_7;
			V_11 = ((Exception_t*)IsInstClass((RuntimeObject*)L_43, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_44 = V_11;
			if (L_44)
			{
				goto IL_01bf_1;
			}
		}
		{
			RuntimeObject* L_45 = V_7;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, method);
		}

IL_01bf_1:
		{
			Exception_t* L_46 = V_11;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_47;
			L_47 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_46, NULL);
			NullCheck(L_47);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_47, NULL);
		}

IL_01cc_1:
		{
			int32_t L_48 = __this->___U3CU3Es__5;
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			int64_t L_49 = __this->___U3CsumU3E5__2;
			int64_t L_50 = __this->___U3CcountU3E5__1;
			V_1 = ((double)(((double)L_49)/((double)L_50)));
			goto IL_020d;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01ec;
		}
		throw e;
	}

CATCH_01ec:
	{
		Exception_t* L_51 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_11 = L_51;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_52 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
		Exception_t* L_53 = V_11;
		AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_inline(L_52, L_53, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0229;
	}

IL_020d:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_54 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
		double L_55 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_inline(L_54, L_55, AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
	}

IL_0229:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__5_1_SetStateMachine_m29DB96BAD9661356468D79A540852C7C8E919442_gshared (U3CAverageAsyncU3Ed__5_1_t84BCC31CD3BC2E5D922564232FEDCBDFF53E19E2* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__9_1__ctor_m6B5212EB9AE764321564996E03DBB8FCCA0E6ADF_gshared (U3CAverageAsyncU3Ed__9_1_tF35F45927FD2FC27A65CF71EACCFEEB439F2B87D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__9_1_MoveNext_mD4420EFCF2C4C723A18F31283250F44A489F9EE3_gshared (U3CAverageAsyncU3Ed__9_1_tF35F45927FD2FC27A65CF71EACCFEEB439F2B87D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tE193AB3B7B0F1D4E58BD70428D68C79AA6D39593 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_tE193AB3B7B0F1D4E58BD70428D68C79AA6D39593);
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int64_t V_2 = 0;
	bool V_3 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_4;
	memset((&V_4), 0, sizeof(V_4));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_5;
	memset((&V_5), 0, sizeof(V_5));
	U3CAverageAsyncU3Ed__9_1_tF35F45927FD2FC27A65CF71EACCFEEB439F2B87D* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	bool V_8 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Exception_t* V_11 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
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
			goto IL_0052_1;
		}

IL_0014_1:
		{
			goto IL_017f_1;
		}

IL_0019_1:
		{
			__this->___U3CcountU3E5__1 = ((int64_t)0);
			__this->___U3CsumU3E5__2 = (0.0f);
			RuntimeObject* L_3 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = __this->___cancellationToken;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__3 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)L_5);
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			__this->___U3CU3Es__5 = 0;
		}

IL_0052_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_0058_2;
				}
			}
			{
				goto IL_005d_2;
			}

IL_0058_2:
			{
				goto IL_00e0_2;
			}

IL_005d_2:
			{
				goto IL_0098_2;
			}

IL_0060_2:
			{
				float L_7 = __this->___U3CsumU3E5__2;
				Func_2_tFAB3D8EFCE4F55CAB3F80EABAB10F8226D7FEBF6* L_8 = __this->___selector;
				RuntimeObject* L_9 = __this->___U3CeU3E5__3;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				float L_11;
				L_11 = InvokerFuncInvoker1< float, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
				__this->___U3CsumU3E5__2 = ((float)il2cpp_codegen_add(L_7, L_11));
				int64_t L_12 = __this->___U3CcountU3E5__1;
				V_2 = L_12;
				int64_t L_13 = V_2;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_13, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1 = ((int64_t)il2cpp_codegen_add(L_13, ((int64_t)1)));
			}

IL_0098_2:
			{
				RuntimeObject* L_14 = __this->___U3CeU3E5__3;
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
					goto IL_00fd_2;
				}
			}
			{
				int32_t L_18 = 0;
				V_0 = L_18;
				__this->___U3CU3E1__state = L_18;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_19 = V_4;
				__this->___U3CU3Eu__1 = L_19;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_6 = __this;
				AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_20 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAsyncU3Ed__9_1_tF35F45927FD2FC27A65CF71EACCFEEB439F2B87D**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_20, (&V_4), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_022c;
			}

IL_00e0_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_21 = __this->___U3CU3Eu__1;
				V_4 = L_21;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_22 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_22, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_23 = (-1);
				V_0 = L_23;
				__this->___U3CU3E1__state = L_23;
			}

IL_00fd_2:
			{
				bool L_24;
				L_24 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_4), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_24;
				bool L_25 = __this->___U3CU3Es__6;
				V_3 = L_25;
				bool L_26 = V_3;
				if (L_26)
				{
					goto IL_0060_2;
				}
			}
			{
				goto IL_0126_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_011a_1;
			}
			throw e;
		}

CATCH_011a_1:
		{
			RuntimeObject* L_27 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_7 = L_27;
			RuntimeObject* L_28 = V_7;
			__this->___U3CU3Es__4 = L_28;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)L_28);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0126_1;
		}

IL_0126_1:
		{
			RuntimeObject* L_29 = __this->___U3CeU3E5__3;
			V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_29) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_30 = V_8;
			if (!L_30)
			{
				goto IL_01a5_1;
			}
		}
		{
			RuntimeObject* L_31 = __this->___U3CeU3E5__3;
			NullCheck((RuntimeObject*)L_31);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_32;
			L_32 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_31);
			V_10 = L_32;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_33;
			L_33 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_10), NULL);
			V_9 = L_33;
			bool L_34;
			L_34 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_9), NULL);
			if (L_34)
			{
				goto IL_019c_1;
			}
		}
		{
			int32_t L_35 = 1;
			V_0 = L_35;
			__this->___U3CU3E1__state = L_35;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36 = V_9;
			__this->___U3CU3Eu__2 = L_36;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
			V_6 = __this;
			AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_37 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAsyncU3Ed__9_1_tF35F45927FD2FC27A65CF71EACCFEEB439F2B87D**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_37, (&V_9), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_022c;
		}

IL_017f_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_38 = __this->___U3CU3Eu__2;
			V_9 = L_38;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_39 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_39, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_40 = (-1);
			V_0 = L_40;
			__this->___U3CU3E1__state = L_40;
		}

IL_019c_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_9), NULL);
		}

IL_01a5_1:
		{
			RuntimeObject* L_41 = __this->___U3CU3Es__4;
			V_7 = L_41;
			RuntimeObject* L_42 = V_7;
			if (!L_42)
			{
				goto IL_01cf_1;
			}
		}
		{
			RuntimeObject* L_43 = V_7;
			V_11 = ((Exception_t*)IsInstClass((RuntimeObject*)L_43, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_44 = V_11;
			if (L_44)
			{
				goto IL_01c2_1;
			}
		}
		{
			RuntimeObject* L_45 = V_7;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, method);
		}

IL_01c2_1:
		{
			Exception_t* L_46 = V_11;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_47;
			L_47 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_46, NULL);
			NullCheck(L_47);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_47, NULL);
		}

IL_01cf_1:
		{
			int32_t L_48 = __this->___U3CU3Es__5;
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			float L_49 = __this->___U3CsumU3E5__2;
			int64_t L_50 = __this->___U3CcountU3E5__1;
			V_1 = ((float)((float)(L_49/((float)L_50))));
			goto IL_0210;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01ef;
		}
		throw e;
	}

CATCH_01ef:
	{
		Exception_t* L_51 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_11 = L_51;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_52 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder);
		Exception_t* L_53 = V_11;
		AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_inline(L_52, L_53, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_022c;
	}

IL_0210:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_54 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder);
		float L_55 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_inline(L_54, L_55, AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_RuntimeMethod_var);
	}

IL_022c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__9_1_SetStateMachine_mF54F7B83A1D06CCEA4B5943E46D689587FA6B40F_gshared (U3CAverageAsyncU3Ed__9_1_tF35F45927FD2FC27A65CF71EACCFEEB439F2B87D* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__10_1__ctor_m56E22020FFF450B6D5A08245C6EC984402AAF62B_gshared (U3CAverageAwaitAsyncU3Ed__10_1_t5D0FB99AA9FEC1C73FBC2EE8C59B3E58BF40C867* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__10_1_MoveNext_m3B5B9E10E985D95AEFA1E1987EEE35D0DA6F7598_gshared (U3CAverageAwaitAsyncU3Ed__10_1_t5D0FB99AA9FEC1C73FBC2EE8C59B3E58BF40C867* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t2563F9C940212A720DF1D6B40281C4294EBC037C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t2563F9C940212A720DF1D6B40281C4294EBC037C);
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CAverageAwaitAsyncU3Ed__10_1_t5D0FB99AA9FEC1C73FBC2EE8C59B3E58BF40C867* V_4 = NULL;
	int64_t V_5 = 0;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t* V_13 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0053_1;
		}

IL_0015_1:
		{
			goto IL_0204_1;
		}

IL_001a_1:
		{
			__this->___U3CcountU3E5__1 = ((int64_t)0);
			__this->___U3CsumU3E5__2 = (0.0f);
			RuntimeObject* L_3 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = __this->___cancellationToken;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__3 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)L_5);
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			__this->___U3CU3Es__5 = 0;
		}

IL_0053_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_005f_2;
				}
			}
			{
				goto IL_0059_2;
			}

IL_0059_2:
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_0061_2;
				}
			}
			{
				goto IL_0066_2;
			}

IL_005f_2:
			{
				goto IL_00ca_2;
			}

IL_0061_2:
			{
				goto IL_0163_2;
			}

IL_0066_2:
			{
				goto IL_011b_2;
			}

IL_006c_2:
			{
				float L_8 = __this->___U3CsumU3E5__2;
				__this->___U3CU3Es__6 = L_8;
				Func_2_t844387A4F32860587989B5D1B9F3950D6D5901DE* L_9 = __this->___selector;
				RuntimeObject* L_10 = __this->___U3CeU3E5__3;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				NullCheck(L_9);
				UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1 L_12;
				L_12 = InvokerFuncInvoker1< UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11));
				V_3 = L_12;
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_13;
				L_13 = UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_inline((&V_3), UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_inline((&V_2), Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00e6_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->___U3CU3E1__state = L_15;
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_16 = V_2;
				__this->___U3CU3Eu__1 = L_16;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_17 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D*, U3CAverageAwaitAsyncU3Ed__10_1_t5D0FB99AA9FEC1C73FBC2EE8C59B3E58BF40C867**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_02b1;
			}

IL_00ca_2:
			{
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_18 = __this->___U3CU3Eu__1;
				V_2 = L_18;
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* L_19 = (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state = L_20;
			}

IL_00e6_2:
			{
				float L_21;
				L_21 = Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_inline((&V_2), Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_RuntimeMethod_var);
				__this->___U3CU3Es__7 = L_21;
				float L_22 = __this->___U3CU3Es__6;
				float L_23 = __this->___U3CU3Es__7;
				__this->___U3CsumU3E5__2 = ((float)il2cpp_codegen_add(L_22, L_23));
				int64_t L_24 = __this->___U3CcountU3E5__1;
				V_5 = L_24;
				int64_t L_25 = V_5;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_25, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1 = ((int64_t)il2cpp_codegen_add(L_25, ((int64_t)1)));
			}

IL_011b_2:
			{
				RuntimeObject* L_26 = __this->___U3CeU3E5__3;
				NullCheck(L_26);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_27;
				L_27 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_26);
				V_8 = L_27;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28;
				L_28 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_7 = L_28;
				bool L_29;
				L_29 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_0180_2;
				}
			}
			{
				int32_t L_30 = 1;
				V_0 = L_30;
				__this->___U3CU3E1__state = L_30;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_31 = V_7;
				__this->___U3CU3Eu__2 = L_31;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_32 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAwaitAsyncU3Ed__10_1_t5D0FB99AA9FEC1C73FBC2EE8C59B3E58BF40C867**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_32, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_02b1;
			}

IL_0163_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_33 = __this->___U3CU3Eu__2;
				V_7 = L_33;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_34, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_35 = (-1);
				V_0 = L_35;
				__this->___U3CU3E1__state = L_35;
			}

IL_0180_2:
			{
				bool L_36;
				L_36 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8 = L_36;
				bool L_37 = __this->___U3CU3Es__8;
				V_6 = L_37;
				bool L_38 = V_6;
				if (L_38)
				{
					goto IL_006c_2;
				}
			}
			{
				goto IL_01ab_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_019f_1;
			}
			throw e;
		}

CATCH_019f_1:
		{
			RuntimeObject* L_39 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_9 = L_39;
			RuntimeObject* L_40 = V_9;
			__this->___U3CU3Es__4 = L_40;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)L_40);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_01ab_1;
		}

IL_01ab_1:
		{
			RuntimeObject* L_41 = __this->___U3CeU3E5__3;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_41) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_42 = V_10;
			if (!L_42)
			{
				goto IL_022a_1;
			}
		}
		{
			RuntimeObject* L_43 = __this->___U3CeU3E5__3;
			NullCheck((RuntimeObject*)L_43);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_44;
			L_44 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_43);
			V_12 = L_44;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_45;
			L_45 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_45;
			bool L_46;
			L_46 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_46)
			{
				goto IL_0221_1;
			}
		}
		{
			int32_t L_47 = 2;
			V_0 = L_47;
			__this->___U3CU3E1__state = L_47;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_48 = V_11;
			__this->___U3CU3Eu__3 = L_48;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_49 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAwaitAsyncU3Ed__10_1_t5D0FB99AA9FEC1C73FBC2EE8C59B3E58BF40C867**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_49, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_02b1;
		}

IL_0204_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50 = __this->___U3CU3Eu__3;
			V_11 = L_50;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_51 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3);
			il2cpp_codegen_initobj(L_51, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_52 = (-1);
			V_0 = L_52;
			__this->___U3CU3E1__state = L_52;
		}

IL_0221_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_022a_1:
		{
			RuntimeObject* L_53 = __this->___U3CU3Es__4;
			V_9 = L_53;
			RuntimeObject* L_54 = V_9;
			if (!L_54)
			{
				goto IL_0254_1;
			}
		}
		{
			RuntimeObject* L_55 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_55, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_56 = V_13;
			if (L_56)
			{
				goto IL_0247_1;
			}
		}
		{
			RuntimeObject* L_57 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_57, method);
		}

IL_0247_1:
		{
			Exception_t* L_58 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_59;
			L_59 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_58, NULL);
			NullCheck(L_59);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_59, NULL);
		}

IL_0254_1:
		{
			int32_t L_60 = __this->___U3CU3Es__5;
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			float L_61 = __this->___U3CsumU3E5__2;
			int64_t L_62 = __this->___U3CcountU3E5__1;
			V_1 = ((float)((float)(L_61/((float)L_62))));
			goto IL_0295;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0274;
		}
		throw e;
	}

CATCH_0274:
	{
		Exception_t* L_63 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_13 = L_63;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_64 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder);
		Exception_t* L_65 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_inline(L_64, L_65, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_02b1;
	}

IL_0295:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_66 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder);
		float L_67 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_inline(L_66, L_67, AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_RuntimeMethod_var);
	}

IL_02b1:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__10_1_SetStateMachine_m5EB9145828EC95FE6B45E6FAAEDCB3157015F51F_gshared (U3CAverageAwaitAsyncU3Ed__10_1_t5D0FB99AA9FEC1C73FBC2EE8C59B3E58BF40C867* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__14_1__ctor_m37D1E8F504338F675BBA9BD25927E23899B3AB14_gshared (U3CAverageAwaitAsyncU3Ed__14_1_t9A8C09FDAF75D12C8D248536BF9A707B18D66F63* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__14_1_MoveNext_mE58BD8C3A0D377F9AD23A5812EB4E2181C143C36_gshared (U3CAverageAwaitAsyncU3Ed__14_1_t9A8C09FDAF75D12C8D248536BF9A707B18D66F63* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_mFC4A614AA0B1C8D41A05840FAA981FAF10FC99C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m68E768B22932F4C553E8F96F1DEDC7361DC02133_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t7E7A37E25008A62DAF47E61C9AA2D0EA9A9257C5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t7E7A37E25008A62DAF47E61C9AA2D0EA9A9257C5);
	int32_t V_0 = 0;
	double V_1 = 0.0;
	Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CAverageAwaitAsyncU3Ed__14_1_t9A8C09FDAF75D12C8D248536BF9A707B18D66F63* V_4 = NULL;
	int64_t V_5 = 0;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t* V_13 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0057_1;
		}

IL_0015_1:
		{
			goto IL_0208_1;
		}

IL_001a_1:
		{
			__this->___U3CcountU3E5__1 = ((int64_t)0);
			__this->___U3CsumU3E5__2 = (0.0);
			RuntimeObject* L_3 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = __this->___cancellationToken;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__3 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)L_5);
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			__this->___U3CU3Es__5 = 0;
		}

IL_0057_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_0063_2;
				}
			}
			{
				goto IL_005d_2;
			}

IL_005d_2:
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_0065_2;
				}
			}
			{
				goto IL_006a_2;
			}

IL_0063_2:
			{
				goto IL_00ce_2;
			}

IL_0065_2:
			{
				goto IL_0167_2;
			}

IL_006a_2:
			{
				goto IL_011f_2;
			}

IL_0070_2:
			{
				double L_8 = __this->___U3CsumU3E5__2;
				__this->___U3CU3Es__6 = L_8;
				Func_2_tF452F3FF30306E919291E498D051B5F208EB38CF* L_9 = __this->___selector;
				RuntimeObject* L_10 = __this->___U3CeU3E5__3;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				NullCheck(L_9);
				UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C L_12;
				L_12 = InvokerFuncInvoker1< UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11));
				V_3 = L_12;
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_13;
				L_13 = UniTask_1_GetAwaiter_m68E768B22932F4C553E8F96F1DEDC7361DC02133_inline((&V_3), UniTask_1_GetAwaiter_m68E768B22932F4C553E8F96F1DEDC7361DC02133_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_mFC4A614AA0B1C8D41A05840FAA981FAF10FC99C8_inline((&V_2), Awaiter_get_IsCompleted_mFC4A614AA0B1C8D41A05840FAA981FAF10FC99C8_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00ea_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->___U3CU3E1__state = L_15;
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_16 = V_2;
				__this->___U3CU3Eu__1 = L_16;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_17 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88*, U3CAverageAwaitAsyncU3Ed__14_1_t9A8C09FDAF75D12C8D248536BF9A707B18D66F63**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_02b4;
			}

IL_00ce_2:
			{
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_18 = __this->___U3CU3Eu__1;
				V_2 = L_18;
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88* L_19 = (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state = L_20;
			}

IL_00ea_2:
			{
				double L_21;
				L_21 = Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_inline((&V_2), Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_RuntimeMethod_var);
				__this->___U3CU3Es__7 = L_21;
				double L_22 = __this->___U3CU3Es__6;
				double L_23 = __this->___U3CU3Es__7;
				__this->___U3CsumU3E5__2 = ((double)il2cpp_codegen_add(L_22, L_23));
				int64_t L_24 = __this->___U3CcountU3E5__1;
				V_5 = L_24;
				int64_t L_25 = V_5;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_25, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1 = ((int64_t)il2cpp_codegen_add(L_25, ((int64_t)1)));
			}

IL_011f_2:
			{
				RuntimeObject* L_26 = __this->___U3CeU3E5__3;
				NullCheck(L_26);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_27;
				L_27 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_26);
				V_8 = L_27;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28;
				L_28 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_7 = L_28;
				bool L_29;
				L_29 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_0184_2;
				}
			}
			{
				int32_t L_30 = 1;
				V_0 = L_30;
				__this->___U3CU3E1__state = L_30;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_31 = V_7;
				__this->___U3CU3Eu__2 = L_31;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_32 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAwaitAsyncU3Ed__14_1_t9A8C09FDAF75D12C8D248536BF9A707B18D66F63**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_32, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_02b4;
			}

IL_0167_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_33 = __this->___U3CU3Eu__2;
				V_7 = L_33;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_34, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_35 = (-1);
				V_0 = L_35;
				__this->___U3CU3E1__state = L_35;
			}

IL_0184_2:
			{
				bool L_36;
				L_36 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8 = L_36;
				bool L_37 = __this->___U3CU3Es__8;
				V_6 = L_37;
				bool L_38 = V_6;
				if (L_38)
				{
					goto IL_0070_2;
				}
			}
			{
				goto IL_01af_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01a3_1;
			}
			throw e;
		}

CATCH_01a3_1:
		{
			RuntimeObject* L_39 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_9 = L_39;
			RuntimeObject* L_40 = V_9;
			__this->___U3CU3Es__4 = L_40;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)L_40);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_01af_1;
		}

IL_01af_1:
		{
			RuntimeObject* L_41 = __this->___U3CeU3E5__3;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_41) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_42 = V_10;
			if (!L_42)
			{
				goto IL_022e_1;
			}
		}
		{
			RuntimeObject* L_43 = __this->___U3CeU3E5__3;
			NullCheck((RuntimeObject*)L_43);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_44;
			L_44 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_43);
			V_12 = L_44;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_45;
			L_45 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_45;
			bool L_46;
			L_46 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_46)
			{
				goto IL_0225_1;
			}
		}
		{
			int32_t L_47 = 2;
			V_0 = L_47;
			__this->___U3CU3E1__state = L_47;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_48 = V_11;
			__this->___U3CU3Eu__3 = L_48;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_49 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAwaitAsyncU3Ed__14_1_t9A8C09FDAF75D12C8D248536BF9A707B18D66F63**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_49, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_02b4;
		}

IL_0208_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50 = __this->___U3CU3Eu__3;
			V_11 = L_50;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_51 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3);
			il2cpp_codegen_initobj(L_51, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_52 = (-1);
			V_0 = L_52;
			__this->___U3CU3E1__state = L_52;
		}

IL_0225_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_022e_1:
		{
			RuntimeObject* L_53 = __this->___U3CU3Es__4;
			V_9 = L_53;
			RuntimeObject* L_54 = V_9;
			if (!L_54)
			{
				goto IL_0258_1;
			}
		}
		{
			RuntimeObject* L_55 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_55, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_56 = V_13;
			if (L_56)
			{
				goto IL_024b_1;
			}
		}
		{
			RuntimeObject* L_57 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_57, method);
		}

IL_024b_1:
		{
			Exception_t* L_58 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_59;
			L_59 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_58, NULL);
			NullCheck(L_59);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_59, NULL);
		}

IL_0258_1:
		{
			int32_t L_60 = __this->___U3CU3Es__5;
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			double L_61 = __this->___U3CsumU3E5__2;
			int64_t L_62 = __this->___U3CcountU3E5__1;
			V_1 = ((double)(L_61/((double)L_62)));
			goto IL_0298;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0277;
		}
		throw e;
	}

CATCH_0277:
	{
		Exception_t* L_63 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_13 = L_63;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_64 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
		Exception_t* L_65 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_inline(L_64, L_65, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_02b4;
	}

IL_0298:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_66 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
		double L_67 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_inline(L_66, L_67, AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
	}

IL_02b4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__14_1_SetStateMachine_mE34D3C74493DAA18BFAA3FBC1E7040F2A103E288_gshared (U3CAverageAwaitAsyncU3Ed__14_1_t9A8C09FDAF75D12C8D248536BF9A707B18D66F63* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__18_1__ctor_m45A950D782926E371654420A45453D75CA1BC84E_gshared (U3CAverageAwaitAsyncU3Ed__18_1_t6FB452C63FD8B313DCD340AEAC77F48F395F0D14* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__18_1_MoveNext_m5D7598F5387962FF35C6A333E60917D85827BB85_gshared (U3CAverageAwaitAsyncU3Ed__18_1_t6FB452C63FD8B313DCD340AEAC77F48F395F0D14* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_mDD8356C2BFB8EBB175763FE2D92A4B0BEBDAEE94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mE4F348E45E23B27DC05E89090C2C334B99FECBD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tC3AF8744AA634AC2B31461C443AA64F5B3371BF2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_tC3AF8744AA634AC2B31461C443AA64F5B3371BF2);
	int32_t V_0 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CAverageAwaitAsyncU3Ed__18_1_t6FB452C63FD8B313DCD340AEAC77F48F395F0D14* V_4 = NULL;
	int64_t V_5 = 0;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t* V_13 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0054_1;
		}

IL_0015_1:
		{
			goto IL_0209_1;
		}

IL_001a_1:
		{
			__this->___U3CcountU3E5__1 = ((int64_t)0);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* L_3 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)(&__this->___U3CsumU3E5__2);
			il2cpp_codegen_initobj(L_3, sizeof(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F));
			RuntimeObject* L_4 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = __this->___cancellationToken;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__3 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)L_6);
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			__this->___U3CU3Es__5 = 0;
		}

IL_0054_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0060_2;
				}
			}
			{
				goto IL_005a_2;
			}

IL_005a_2:
			{
				int32_t L_8 = V_0;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_0062_2;
				}
			}
			{
				goto IL_0067_2;
			}

IL_0060_2:
			{
				goto IL_00cb_2;
			}

IL_0062_2:
			{
				goto IL_0168_2;
			}

IL_0067_2:
			{
				goto IL_0120_2;
			}

IL_006d_2:
			{
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_9 = __this->___U3CsumU3E5__2;
				__this->___U3CU3Es__6 = L_9;
				Func_2_tD6766C7D6227AC2A45F7EDFC827BDFC58C8EFE78* L_10 = __this->___selector;
				RuntimeObject* L_11 = __this->___U3CeU3E5__3;
				NullCheck(L_11);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_11, (Il2CppFullySharedGenericAny*)L_12);
				NullCheck(L_10);
				UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3 L_13;
				L_13 = InvokerFuncInvoker1< UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_12: *(void**)L_12));
				V_3 = L_13;
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 L_14;
				L_14 = UniTask_1_GetAwaiter_mE4F348E45E23B27DC05E89090C2C334B99FECBD4_inline((&V_3), UniTask_1_GetAwaiter_mE4F348E45E23B27DC05E89090C2C334B99FECBD4_RuntimeMethod_var);
				V_2 = L_14;
				bool L_15;
				L_15 = Awaiter_get_IsCompleted_mDD8356C2BFB8EBB175763FE2D92A4B0BEBDAEE94_inline((&V_2), Awaiter_get_IsCompleted_mDD8356C2BFB8EBB175763FE2D92A4B0BEBDAEE94_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_00e7_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->___U3CU3E1__state = L_16;
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 L_17 = V_2;
				__this->___U3CU3Eu__1 = L_17;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_18 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8*, U3CAverageAwaitAsyncU3Ed__18_1_t6FB452C63FD8B313DCD340AEAC77F48F395F0D14**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_18, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_02bd;
			}

IL_00cb_2:
			{
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 L_19 = __this->___U3CU3Eu__1;
				V_2 = L_19;
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8* L_20 = (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state = L_21;
			}

IL_00e7_2:
			{
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_22;
				L_22 = Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_inline((&V_2), Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_RuntimeMethod_var);
				__this->___U3CU3Es__7 = L_22;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_23 = __this->___U3CU3Es__6;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_24 = __this->___U3CU3Es__7;
				il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_25;
				L_25 = Decimal_op_Addition_m878AC5E15D13F205BCB6AE9747B2C0D950BD2EF7(L_23, L_24, NULL);
				__this->___U3CsumU3E5__2 = L_25;
				int64_t L_26 = __this->___U3CcountU3E5__1;
				V_5 = L_26;
				int64_t L_27 = V_5;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_27, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1 = ((int64_t)il2cpp_codegen_add(L_27, ((int64_t)1)));
			}

IL_0120_2:
			{
				RuntimeObject* L_28 = __this->___U3CeU3E5__3;
				NullCheck(L_28);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_29;
				L_29 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_28);
				V_8 = L_29;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_30;
				L_30 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_7 = L_30;
				bool L_31;
				L_31 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_31)
				{
					goto IL_0185_2;
				}
			}
			{
				int32_t L_32 = 1;
				V_0 = L_32;
				__this->___U3CU3E1__state = L_32;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_33 = V_7;
				__this->___U3CU3Eu__2 = L_33;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_34 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAwaitAsyncU3Ed__18_1_t6FB452C63FD8B313DCD340AEAC77F48F395F0D14**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_34, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_02bd;
			}

IL_0168_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_35 = __this->___U3CU3Eu__2;
				V_7 = L_35;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_36 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_36, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_37 = (-1);
				V_0 = L_37;
				__this->___U3CU3E1__state = L_37;
			}

IL_0185_2:
			{
				bool L_38;
				L_38 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8 = L_38;
				bool L_39 = __this->___U3CU3Es__8;
				V_6 = L_39;
				bool L_40 = V_6;
				if (L_40)
				{
					goto IL_006d_2;
				}
			}
			{
				goto IL_01b0_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01a4_1;
			}
			throw e;
		}

CATCH_01a4_1:
		{
			RuntimeObject* L_41 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_9 = L_41;
			RuntimeObject* L_42 = V_9;
			__this->___U3CU3Es__4 = L_42;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)L_42);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_01b0_1;
		}

IL_01b0_1:
		{
			RuntimeObject* L_43 = __this->___U3CeU3E5__3;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_43) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_44 = V_10;
			if (!L_44)
			{
				goto IL_022f_1;
			}
		}
		{
			RuntimeObject* L_45 = __this->___U3CeU3E5__3;
			NullCheck((RuntimeObject*)L_45);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_46;
			L_46 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_45);
			V_12 = L_46;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47;
			L_47 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_47;
			bool L_48;
			L_48 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_48)
			{
				goto IL_0226_1;
			}
		}
		{
			int32_t L_49 = 2;
			V_0 = L_49;
			__this->___U3CU3E1__state = L_49;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50 = V_11;
			__this->___U3CU3Eu__3 = L_50;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_51 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAwaitAsyncU3Ed__18_1_t6FB452C63FD8B313DCD340AEAC77F48F395F0D14**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_51, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_02bd;
		}

IL_0209_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_52 = __this->___U3CU3Eu__3;
			V_11 = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_53 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3);
			il2cpp_codegen_initobj(L_53, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_54 = (-1);
			V_0 = L_54;
			__this->___U3CU3E1__state = L_54;
		}

IL_0226_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_022f_1:
		{
			RuntimeObject* L_55 = __this->___U3CU3Es__4;
			V_9 = L_55;
			RuntimeObject* L_56 = V_9;
			if (!L_56)
			{
				goto IL_0259_1;
			}
		}
		{
			RuntimeObject* L_57 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_57, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_58 = V_13;
			if (L_58)
			{
				goto IL_024c_1;
			}
		}
		{
			RuntimeObject* L_59 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_59, method);
		}

IL_024c_1:
		{
			Exception_t* L_60 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_61;
			L_61 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_60, NULL);
			NullCheck(L_61);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_61, NULL);
		}

IL_0259_1:
		{
			int32_t L_62 = __this->___U3CU3Es__5;
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_63 = __this->___U3CsumU3E5__2;
			int64_t L_64 = __this->___U3CcountU3E5__1;
			il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_65;
			L_65 = Decimal_op_Implicit_m8F9A38760D01B23E6DFF77EA760CCE5111F3656D(L_64, NULL);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_66;
			L_66 = Decimal_op_Division_mA0BD25988CA8010A3F8EA2F6A534F9F2D812D2AC(L_63, L_65, NULL);
			V_1 = L_66;
			goto IL_02a1;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0280;
		}
		throw e;
	}

CATCH_0280:
	{
		Exception_t* L_67 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_13 = L_67;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_68 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder);
		Exception_t* L_69 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_inline(L_68, L_69, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_02bd;
	}

IL_02a1:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_70 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_71 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_inline(L_70, L_71, AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_RuntimeMethod_var);
	}

IL_02bd:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__18_1_SetStateMachine_m8593C82A2900B26F2C715EE1125D4D7F24AF8D7F_gshared (U3CAverageAwaitAsyncU3Ed__18_1_t6FB452C63FD8B313DCD340AEAC77F48F395F0D14* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__22_1__ctor_mEB3E8EFDEE3BA394545EF6EDA9AFD548DBC30998_gshared (U3CAverageAwaitAsyncU3Ed__22_1_t6ACF89349A1ADA4A61F83D20FFB2D385035CE624* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__22_1_MoveNext_mF1987EEABDD9A6AFCFFE2249CE823AB313FC7F7C_gshared (U3CAverageAwaitAsyncU3Ed__22_1_t6ACF89349A1ADA4A61F83D20FFB2D385035CE624* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t24FF97AC201EF2F86AA9819FFCB45442CEC068CC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t24FF97AC201EF2F86AA9819FFCB45442CEC068CC);
	int32_t V_0 = 0;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CAverageAwaitAsyncU3Ed__22_1_t6ACF89349A1ADA4A61F83D20FFB2D385035CE624* V_4 = NULL;
	bool V_5 = false;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_8;
	memset((&V_8), 0, sizeof(V_8));
	int64_t V_9 = 0;
	bool V_10 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_12;
	memset((&V_12), 0, sizeof(V_12));
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_15;
	memset((&V_15), 0, sizeof(V_15));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Exception_t* V_17 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	U3CAverageAwaitAsyncU3Ed__22_1_t6ACF89349A1ADA4A61F83D20FFB2D385035CE624* G_B22_0 = NULL;
	U3CAverageAwaitAsyncU3Ed__22_1_t6ACF89349A1ADA4A61F83D20FFB2D385035CE624* G_B21_0 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 G_B23_0;
	memset((&G_B23_0), 0, sizeof(G_B23_0));
	U3CAverageAwaitAsyncU3Ed__22_1_t6ACF89349A1ADA4A61F83D20FFB2D385035CE624* G_B23_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0054_1;
		}

IL_0015_1:
		{
			goto IL_025c_1;
		}

IL_001a_1:
		{
			__this->___U3CcountU3E5__1 = ((int64_t)0);
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_3;
			memset((&L_3), 0, sizeof(L_3));
			Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_3), 0, Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
			__this->___U3CsumU3E5__2 = L_3;
			RuntimeObject* L_4 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = __this->___cancellationToken;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__3 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)L_6);
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			__this->___U3CU3Es__5 = 0;
		}

IL_0054_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0060_2;
				}
			}
			{
				goto IL_005a_2;
			}

IL_005a_2:
			{
				int32_t L_8 = V_0;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_0062_2;
				}
			}
			{
				goto IL_0067_2;
			}

IL_0060_2:
			{
				goto IL_00be_2;
			}

IL_0062_2:
			{
				goto IL_01bb_2;
			}

IL_0067_2:
			{
				goto IL_0173_2;
			}

IL_006d_2:
			{
				Func_2_tCD782F33543995850D4A4AF7569D83504640F79F* L_9 = __this->___selector;
				RuntimeObject* L_10 = __this->___U3CeU3E5__3;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				NullCheck(L_9);
				UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05 L_12;
				L_12 = InvokerFuncInvoker1< UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11));
				V_3 = L_12;
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 L_13;
				L_13 = UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_inline((&V_3), UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_inline((&V_2), Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00da_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->___U3CU3E1__state = L_15;
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 L_16 = V_2;
				__this->___U3CU3Eu__1 = L_16;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_17 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9*, U3CAverageAwaitAsyncU3Ed__22_1_t6ACF89349A1ADA4A61F83D20FFB2D385035CE624**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0313;
			}

IL_00be_2:
			{
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 L_18 = __this->___U3CU3Eu__1;
				V_2 = L_18;
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9* L_19 = (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state = L_20;
			}

IL_00da_2:
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_21;
				L_21 = Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_inline((&V_2), Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_RuntimeMethod_var);
				__this->___U3CU3Es__7 = L_21;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_22 = __this->___U3CU3Es__7;
				__this->___U3CvU3E5__6 = L_22;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_23 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CU3Es__7);
				il2cpp_codegen_initobj(L_23, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_24 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CvU3E5__6);
				bool L_25;
				L_25 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_24, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				V_5 = L_25;
				bool L_26 = V_5;
				if (!L_26)
				{
					goto IL_0166_2;
				}
			}
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_27 = __this->___U3CsumU3E5__2;
				V_6 = L_27;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_28 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CvU3E5__6);
				int32_t L_29;
				L_29 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA(L_28, Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
				V_7 = L_29;
				bool L_30;
				L_30 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_6), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				if (L_30)
				{
					G_B22_0 = __this;
					goto IL_013d_2;
				}
				G_B21_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_31 = V_8;
				G_B23_0 = L_31;
				G_B23_1 = G_B21_0;
				goto IL_014c_2;
			}

IL_013d_2:
			{
				int32_t L_32;
				L_32 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_6), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
				int32_t L_33 = V_7;
				if (((int64_t)L_32 + (int64_t)L_33 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_32 + (int64_t)L_33 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_34;
				memset((&L_34), 0, sizeof(L_34));
				Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_34), ((int32_t)il2cpp_codegen_add(L_32, L_33)), Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
				G_B23_0 = L_34;
				G_B23_1 = G_B22_0;
			}

IL_014c_2:
			{
				NullCheck(G_B23_1);
				G_B23_1->___U3CsumU3E5__2 = G_B23_0;
				int64_t L_35 = __this->___U3CcountU3E5__1;
				V_9 = L_35;
				int64_t L_36 = V_9;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_36, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1 = ((int64_t)il2cpp_codegen_add(L_36, ((int64_t)1)));
			}

IL_0166_2:
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_37 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CvU3E5__6);
				il2cpp_codegen_initobj(L_37, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
			}

IL_0173_2:
			{
				RuntimeObject* L_38 = __this->___U3CeU3E5__3;
				NullCheck(L_38);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_39;
				L_39 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_38);
				V_12 = L_39;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_40;
				L_40 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_12), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_11 = L_40;
				bool L_41;
				L_41 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_11), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_41)
				{
					goto IL_01d8_2;
				}
			}
			{
				int32_t L_42 = 1;
				V_0 = L_42;
				__this->___U3CU3E1__state = L_42;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_43 = V_11;
				__this->___U3CU3Eu__2 = L_43;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_44 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAwaitAsyncU3Ed__22_1_t6ACF89349A1ADA4A61F83D20FFB2D385035CE624**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_44, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0313;
			}

IL_01bb_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_45 = __this->___U3CU3Eu__2;
				V_11 = L_45;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_46 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_46, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_47 = (-1);
				V_0 = L_47;
				__this->___U3CU3E1__state = L_47;
			}

IL_01d8_2:
			{
				bool L_48;
				L_48 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_11), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8 = L_48;
				bool L_49 = __this->___U3CU3Es__8;
				V_10 = L_49;
				bool L_50 = V_10;
				if (L_50)
				{
					goto IL_006d_2;
				}
			}
			{
				goto IL_0203_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01f7_1;
			}
			throw e;
		}

CATCH_01f7_1:
		{
			RuntimeObject* L_51 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_13 = L_51;
			RuntimeObject* L_52 = V_13;
			__this->___U3CU3Es__4 = L_52;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)L_52);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0203_1;
		}

IL_0203_1:
		{
			RuntimeObject* L_53 = __this->___U3CeU3E5__3;
			V_14 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_53) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_54 = V_14;
			if (!L_54)
			{
				goto IL_0282_1;
			}
		}
		{
			RuntimeObject* L_55 = __this->___U3CeU3E5__3;
			NullCheck((RuntimeObject*)L_55);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_56;
			L_56 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_55);
			V_16 = L_56;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_57;
			L_57 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_16), NULL);
			V_15 = L_57;
			bool L_58;
			L_58 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_15), NULL);
			if (L_58)
			{
				goto IL_0279_1;
			}
		}
		{
			int32_t L_59 = 2;
			V_0 = L_59;
			__this->___U3CU3E1__state = L_59;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_60 = V_15;
			__this->___U3CU3Eu__3 = L_60;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_61 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAwaitAsyncU3Ed__22_1_t6ACF89349A1ADA4A61F83D20FFB2D385035CE624**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_61, (&V_15), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_0313;
		}

IL_025c_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_62 = __this->___U3CU3Eu__3;
			V_15 = L_62;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_63 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3);
			il2cpp_codegen_initobj(L_63, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_64 = (-1);
			V_0 = L_64;
			__this->___U3CU3E1__state = L_64;
		}

IL_0279_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_15), NULL);
		}

IL_0282_1:
		{
			RuntimeObject* L_65 = __this->___U3CU3Es__4;
			V_13 = L_65;
			RuntimeObject* L_66 = V_13;
			if (!L_66)
			{
				goto IL_02ac_1;
			}
		}
		{
			RuntimeObject* L_67 = V_13;
			V_17 = ((Exception_t*)IsInstClass((RuntimeObject*)L_67, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_68 = V_17;
			if (L_68)
			{
				goto IL_029f_1;
			}
		}
		{
			RuntimeObject* L_69 = V_13;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_69, method);
		}

IL_029f_1:
		{
			Exception_t* L_70 = V_17;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_71;
			L_71 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_70, NULL);
			NullCheck(L_71);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_71, NULL);
		}

IL_02ac_1:
		{
			int32_t L_72 = __this->___U3CU3Es__5;
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_73 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CsumU3E5__2);
			int32_t L_74;
			L_74 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA(L_73, Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
			int64_t L_75 = __this->___U3CcountU3E5__1;
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_76;
			memset((&L_76), 0, sizeof(L_76));
			Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_76), ((double)(((double)L_74)/((double)L_75))), Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
			V_1 = L_76;
			goto IL_02f7;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02d6;
		}
		throw e;
	}

CATCH_02d6:
	{
		Exception_t* L_77 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_17 = L_77;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_78 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
		Exception_t* L_79 = V_17;
		AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_inline(L_78, L_79, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0313;
	}

IL_02f7:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_80 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_81 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_inline(L_80, L_81, AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
	}

IL_0313:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__22_1_SetStateMachine_m31F3806307FC671D0B7A637B80119A2C08B308C6_gshared (U3CAverageAwaitAsyncU3Ed__22_1_t6ACF89349A1ADA4A61F83D20FFB2D385035CE624* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__26_1__ctor_m18A64BC77BDA48C07C3B31365FF31C2BDBFB672E_gshared (U3CAverageAwaitAsyncU3Ed__26_1_t4A064A93DEC1BE815476E1B98F2EC9981EC964E5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__26_1_MoveNext_m867EAD987B7E8B29C13610D7D1BF31E7381155D4_gshared (U3CAverageAwaitAsyncU3Ed__26_1_t4A064A93DEC1BE815476E1B98F2EC9981EC964E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t3C59A1846660C577D55C9C7F94E2F1EB07A3325C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t3C59A1846660C577D55C9C7F94E2F1EB07A3325C);
	int32_t V_0 = 0;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CAverageAwaitAsyncU3Ed__26_1_t4A064A93DEC1BE815476E1B98F2EC9981EC964E5* V_4 = NULL;
	bool V_5 = false;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int64_t V_7 = 0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_10;
	memset((&V_10), 0, sizeof(V_10));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_11;
	memset((&V_11), 0, sizeof(V_11));
	RuntimeObject* V_12 = NULL;
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Exception_t* V_16 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	U3CAverageAwaitAsyncU3Ed__26_1_t4A064A93DEC1BE815476E1B98F2EC9981EC964E5* G_B22_0 = NULL;
	U3CAverageAwaitAsyncU3Ed__26_1_t4A064A93DEC1BE815476E1B98F2EC9981EC964E5* G_B21_0 = NULL;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 G_B23_0;
	memset((&G_B23_0), 0, sizeof(G_B23_0));
	U3CAverageAwaitAsyncU3Ed__26_1_t4A064A93DEC1BE815476E1B98F2EC9981EC964E5* G_B23_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0055_1;
		}

IL_0015_1:
		{
			goto IL_025d_1;
		}

IL_001a_1:
		{
			__this->___U3CcountU3E5__1 = ((int64_t)0);
			Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_3;
			memset((&L_3), 0, sizeof(L_3));
			Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_3), ((int64_t)0), Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
			__this->___U3CsumU3E5__2 = L_3;
			RuntimeObject* L_4 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = __this->___cancellationToken;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__3 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)L_6);
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			__this->___U3CU3Es__5 = 0;
		}

IL_0055_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0061_2;
				}
			}
			{
				goto IL_005b_2;
			}

IL_005b_2:
			{
				int32_t L_8 = V_0;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_0063_2;
				}
			}
			{
				goto IL_0068_2;
			}

IL_0061_2:
			{
				goto IL_00bf_2;
			}

IL_0063_2:
			{
				goto IL_01bc_2;
			}

IL_0068_2:
			{
				goto IL_0174_2;
			}

IL_006e_2:
			{
				Func_2_t898AEF8B0AC8B5CB054F91316F69A4739DB2E5B6* L_9 = __this->___selector;
				RuntimeObject* L_10 = __this->___U3CeU3E5__3;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				NullCheck(L_9);
				UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C L_12;
				L_12 = InvokerFuncInvoker1< UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11));
				V_3 = L_12;
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB L_13;
				L_13 = UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_inline((&V_3), UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_inline((&V_2), Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00db_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->___U3CU3E1__state = L_15;
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB L_16 = V_2;
				__this->___U3CU3Eu__1 = L_16;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_17 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB*, U3CAverageAwaitAsyncU3Ed__26_1_t4A064A93DEC1BE815476E1B98F2EC9981EC964E5**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0314;
			}

IL_00bf_2:
			{
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB L_18 = __this->___U3CU3Eu__1;
				V_2 = L_18;
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB* L_19 = (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state = L_20;
			}

IL_00db_2:
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_21;
				L_21 = Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_inline((&V_2), Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_RuntimeMethod_var);
				__this->___U3CU3Es__7 = L_21;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_22 = __this->___U3CU3Es__7;
				__this->___U3CvU3E5__6 = L_22;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_23 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CU3Es__7);
				il2cpp_codegen_initobj(L_23, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_24 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CvU3E5__6);
				bool L_25;
				L_25 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline(L_24, Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
				V_5 = L_25;
				bool L_26 = V_5;
				if (!L_26)
				{
					goto IL_0167_2;
				}
			}
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_27 = __this->___U3CsumU3E5__2;
				V_6 = L_27;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_28 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CvU3E5__6);
				int64_t L_29;
				L_29 = Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC(L_28, Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
				V_7 = L_29;
				bool L_30;
				L_30 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline((&V_6), Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
				if (L_30)
				{
					G_B22_0 = __this;
					goto IL_013e_2;
				}
				G_B21_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_31 = V_8;
				G_B23_0 = L_31;
				G_B23_1 = G_B21_0;
				goto IL_014d_2;
			}

IL_013e_2:
			{
				int64_t L_32;
				L_32 = Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_inline((&V_6), Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
				int64_t L_33 = V_7;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_32, (int64_t)L_33))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_34;
				memset((&L_34), 0, sizeof(L_34));
				Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_34), ((int64_t)il2cpp_codegen_add(L_32, L_33)), Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
				G_B23_0 = L_34;
				G_B23_1 = G_B22_0;
			}

IL_014d_2:
			{
				NullCheck(G_B23_1);
				G_B23_1->___U3CsumU3E5__2 = G_B23_0;
				int64_t L_35 = __this->___U3CcountU3E5__1;
				V_7 = L_35;
				int64_t L_36 = V_7;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_36, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1 = ((int64_t)il2cpp_codegen_add(L_36, ((int64_t)1)));
			}

IL_0167_2:
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_37 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CvU3E5__6);
				il2cpp_codegen_initobj(L_37, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
			}

IL_0174_2:
			{
				RuntimeObject* L_38 = __this->___U3CeU3E5__3;
				NullCheck(L_38);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_39;
				L_39 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_38);
				V_11 = L_39;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_40;
				L_40 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_11), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_10 = L_40;
				bool L_41;
				L_41 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_10), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_41)
				{
					goto IL_01d9_2;
				}
			}
			{
				int32_t L_42 = 1;
				V_0 = L_42;
				__this->___U3CU3E1__state = L_42;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_43 = V_10;
				__this->___U3CU3Eu__2 = L_43;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_44 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAwaitAsyncU3Ed__26_1_t4A064A93DEC1BE815476E1B98F2EC9981EC964E5**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_44, (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0314;
			}

IL_01bc_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_45 = __this->___U3CU3Eu__2;
				V_10 = L_45;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_46 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_46, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_47 = (-1);
				V_0 = L_47;
				__this->___U3CU3E1__state = L_47;
			}

IL_01d9_2:
			{
				bool L_48;
				L_48 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_10), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8 = L_48;
				bool L_49 = __this->___U3CU3Es__8;
				V_9 = L_49;
				bool L_50 = V_9;
				if (L_50)
				{
					goto IL_006e_2;
				}
			}
			{
				goto IL_0204_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01f8_1;
			}
			throw e;
		}

CATCH_01f8_1:
		{
			RuntimeObject* L_51 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_12 = L_51;
			RuntimeObject* L_52 = V_12;
			__this->___U3CU3Es__4 = L_52;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)L_52);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0204_1;
		}

IL_0204_1:
		{
			RuntimeObject* L_53 = __this->___U3CeU3E5__3;
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_53) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_54 = V_13;
			if (!L_54)
			{
				goto IL_0283_1;
			}
		}
		{
			RuntimeObject* L_55 = __this->___U3CeU3E5__3;
			NullCheck((RuntimeObject*)L_55);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_56;
			L_56 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_55);
			V_15 = L_56;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_57;
			L_57 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_15), NULL);
			V_14 = L_57;
			bool L_58;
			L_58 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_58)
			{
				goto IL_027a_1;
			}
		}
		{
			int32_t L_59 = 2;
			V_0 = L_59;
			__this->___U3CU3E1__state = L_59;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_60 = V_14;
			__this->___U3CU3Eu__3 = L_60;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_61 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAwaitAsyncU3Ed__26_1_t4A064A93DEC1BE815476E1B98F2EC9981EC964E5**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_61, (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_0314;
		}

IL_025d_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_62 = __this->___U3CU3Eu__3;
			V_14 = L_62;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_63 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3);
			il2cpp_codegen_initobj(L_63, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_64 = (-1);
			V_0 = L_64;
			__this->___U3CU3E1__state = L_64;
		}

IL_027a_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_0283_1:
		{
			RuntimeObject* L_65 = __this->___U3CU3Es__4;
			V_12 = L_65;
			RuntimeObject* L_66 = V_12;
			if (!L_66)
			{
				goto IL_02ad_1;
			}
		}
		{
			RuntimeObject* L_67 = V_12;
			V_16 = ((Exception_t*)IsInstClass((RuntimeObject*)L_67, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_68 = V_16;
			if (L_68)
			{
				goto IL_02a0_1;
			}
		}
		{
			RuntimeObject* L_69 = V_12;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_69, method);
		}

IL_02a0_1:
		{
			Exception_t* L_70 = V_16;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_71;
			L_71 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_70, NULL);
			NullCheck(L_71);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_71, NULL);
		}

IL_02ad_1:
		{
			int32_t L_72 = __this->___U3CU3Es__5;
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_73 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CsumU3E5__2);
			int64_t L_74;
			L_74 = Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC(L_73, Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
			int64_t L_75 = __this->___U3CcountU3E5__1;
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_76;
			memset((&L_76), 0, sizeof(L_76));
			Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_76), ((double)(((double)L_74)/((double)L_75))), Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
			V_1 = L_76;
			goto IL_02f8;
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
		Exception_t* L_77 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_16 = L_77;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_78 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
		Exception_t* L_79 = V_16;
		AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_inline(L_78, L_79, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0314;
	}

IL_02f8:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_80 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_81 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_inline(L_80, L_81, AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
	}

IL_0314:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__26_1_SetStateMachine_m9004963226B4C0CF559F0EF178EEB6E7E72D6CDD_gshared (U3CAverageAwaitAsyncU3Ed__26_1_t4A064A93DEC1BE815476E1B98F2EC9981EC964E5* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__2_1__ctor_mDACA45EF21898ACB56D307E0F02C580E59785B0B_gshared (U3CAverageAwaitAsyncU3Ed__2_1_t3241690F59243BF1EC03264EFCC40C3C82718B77* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__2_1_MoveNext_m9D1AACFA8530B15E7A6A91731940B8B2E3F5F2F5_gshared (U3CAverageAwaitAsyncU3Ed__2_1_t3241690F59243BF1EC03264EFCC40C3C82718B77* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t27452D19A086004B50D83ACE279F19F9E5376BA9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t27452D19A086004B50D83ACE279F19F9E5376BA9);
	int32_t V_0 = 0;
	double V_1 = 0.0;
	Awaiter_t8953594D03299DE782894F4A865CED79F2504266 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CAverageAwaitAsyncU3Ed__2_1_t3241690F59243BF1EC03264EFCC40C3C82718B77* V_4 = NULL;
	int64_t V_5 = 0;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t* V_13 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_004f_1;
		}

IL_0015_1:
		{
			goto IL_0200_1;
		}

IL_001a_1:
		{
			__this->___U3CcountU3E5__1 = ((int64_t)0);
			__this->___U3CsumU3E5__2 = 0;
			RuntimeObject* L_3 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = __this->___cancellationToken;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__3 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)L_5);
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			__this->___U3CU3Es__5 = 0;
		}

IL_004f_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_005b_2;
				}
			}
			{
				goto IL_0055_2;
			}

IL_0055_2:
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_005d_2;
				}
			}
			{
				goto IL_0062_2;
			}

IL_005b_2:
			{
				goto IL_00c6_2;
			}

IL_005d_2:
			{
				goto IL_015f_2;
			}

IL_0062_2:
			{
				goto IL_0117_2;
			}

IL_0068_2:
			{
				int32_t L_8 = __this->___U3CsumU3E5__2;
				__this->___U3CU3Es__6 = L_8;
				Func_2_t6561E0DBB0FBFCB8DBFA46F392A86C31706164F5* L_9 = __this->___selector;
				RuntimeObject* L_10 = __this->___U3CeU3E5__3;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				NullCheck(L_9);
				UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 L_12;
				L_12 = InvokerFuncInvoker1< UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11));
				V_3 = L_12;
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_13;
				L_13 = UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_inline((&V_3), UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_inline((&V_2), Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00e2_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->___U3CU3E1__state = L_15;
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_16 = V_2;
				__this->___U3CU3Eu__1 = L_16;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_17 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_t8953594D03299DE782894F4A865CED79F2504266*, U3CAverageAwaitAsyncU3Ed__2_1_t3241690F59243BF1EC03264EFCC40C3C82718B77**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_02ad;
			}

IL_00c6_2:
			{
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_18 = __this->___U3CU3Eu__1;
				V_2 = L_18;
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266* L_19 = (Awaiter_t8953594D03299DE782894F4A865CED79F2504266*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_t8953594D03299DE782894F4A865CED79F2504266));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state = L_20;
			}

IL_00e2_2:
			{
				int32_t L_21;
				L_21 = Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_inline((&V_2), Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_RuntimeMethod_var);
				__this->___U3CU3Es__7 = L_21;
				int32_t L_22 = __this->___U3CU3Es__6;
				int32_t L_23 = __this->___U3CU3Es__7;
				if (((int64_t)L_22 + (int64_t)L_23 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_22 + (int64_t)L_23 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CsumU3E5__2 = ((int32_t)il2cpp_codegen_add(L_22, L_23));
				int64_t L_24 = __this->___U3CcountU3E5__1;
				V_5 = L_24;
				int64_t L_25 = V_5;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_25, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1 = ((int64_t)il2cpp_codegen_add(L_25, ((int64_t)1)));
			}

IL_0117_2:
			{
				RuntimeObject* L_26 = __this->___U3CeU3E5__3;
				NullCheck(L_26);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_27;
				L_27 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_26);
				V_8 = L_27;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28;
				L_28 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_7 = L_28;
				bool L_29;
				L_29 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_017c_2;
				}
			}
			{
				int32_t L_30 = 1;
				V_0 = L_30;
				__this->___U3CU3E1__state = L_30;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_31 = V_7;
				__this->___U3CU3Eu__2 = L_31;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_32 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAwaitAsyncU3Ed__2_1_t3241690F59243BF1EC03264EFCC40C3C82718B77**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_32, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_02ad;
			}

IL_015f_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_33 = __this->___U3CU3Eu__2;
				V_7 = L_33;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_34, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_35 = (-1);
				V_0 = L_35;
				__this->___U3CU3E1__state = L_35;
			}

IL_017c_2:
			{
				bool L_36;
				L_36 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8 = L_36;
				bool L_37 = __this->___U3CU3Es__8;
				V_6 = L_37;
				bool L_38 = V_6;
				if (L_38)
				{
					goto IL_0068_2;
				}
			}
			{
				goto IL_01a7_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_019b_1;
			}
			throw e;
		}

CATCH_019b_1:
		{
			RuntimeObject* L_39 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_9 = L_39;
			RuntimeObject* L_40 = V_9;
			__this->___U3CU3Es__4 = L_40;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)L_40);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_01a7_1;
		}

IL_01a7_1:
		{
			RuntimeObject* L_41 = __this->___U3CeU3E5__3;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_41) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_42 = V_10;
			if (!L_42)
			{
				goto IL_0226_1;
			}
		}
		{
			RuntimeObject* L_43 = __this->___U3CeU3E5__3;
			NullCheck((RuntimeObject*)L_43);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_44;
			L_44 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_43);
			V_12 = L_44;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_45;
			L_45 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_45;
			bool L_46;
			L_46 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_46)
			{
				goto IL_021d_1;
			}
		}
		{
			int32_t L_47 = 2;
			V_0 = L_47;
			__this->___U3CU3E1__state = L_47;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_48 = V_11;
			__this->___U3CU3Eu__3 = L_48;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_49 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAwaitAsyncU3Ed__2_1_t3241690F59243BF1EC03264EFCC40C3C82718B77**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_49, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_02ad;
		}

IL_0200_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50 = __this->___U3CU3Eu__3;
			V_11 = L_50;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_51 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3);
			il2cpp_codegen_initobj(L_51, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_52 = (-1);
			V_0 = L_52;
			__this->___U3CU3E1__state = L_52;
		}

IL_021d_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_0226_1:
		{
			RuntimeObject* L_53 = __this->___U3CU3Es__4;
			V_9 = L_53;
			RuntimeObject* L_54 = V_9;
			if (!L_54)
			{
				goto IL_0250_1;
			}
		}
		{
			RuntimeObject* L_55 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_55, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_56 = V_13;
			if (L_56)
			{
				goto IL_0243_1;
			}
		}
		{
			RuntimeObject* L_57 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_57, method);
		}

IL_0243_1:
		{
			Exception_t* L_58 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_59;
			L_59 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_58, NULL);
			NullCheck(L_59);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_59, NULL);
		}

IL_0250_1:
		{
			int32_t L_60 = __this->___U3CU3Es__5;
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			int32_t L_61 = __this->___U3CsumU3E5__2;
			int64_t L_62 = __this->___U3CcountU3E5__1;
			V_1 = ((double)(((double)L_61)/((double)L_62)));
			goto IL_0291;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0270;
		}
		throw e;
	}

CATCH_0270:
	{
		Exception_t* L_63 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_13 = L_63;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_64 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
		Exception_t* L_65 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_inline(L_64, L_65, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_02ad;
	}

IL_0291:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_66 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
		double L_67 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_inline(L_66, L_67, AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
	}

IL_02ad:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__2_1_SetStateMachine_mD6246E2347394006CB9437B38D04491FF37DFD28_gshared (U3CAverageAwaitAsyncU3Ed__2_1_t3241690F59243BF1EC03264EFCC40C3C82718B77* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__30_1__ctor_m81A64C84B75505A80D7EF8B586CE1A913C08221C_gshared (U3CAverageAwaitAsyncU3Ed__30_1_t1B91FA738692CE65DB747C8606C4EFA4FBC2C97C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__30_1_MoveNext_mB41FF63918879C0434F1A45D8C71CB27D1E05830_gshared (U3CAverageAwaitAsyncU3Ed__30_1_t1B91FA738692CE65DB747C8606C4EFA4FBC2C97C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t998163EB9D71BD356431606B676A38AFC9732503 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t998163EB9D71BD356431606B676A38AFC9732503);
	int32_t V_0 = 0;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CAverageAwaitAsyncU3Ed__30_1_t1B91FA738692CE65DB747C8606C4EFA4FBC2C97C* V_4 = NULL;
	bool V_5 = false;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_8;
	memset((&V_8), 0, sizeof(V_8));
	int64_t V_9 = 0;
	bool V_10 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_12;
	memset((&V_12), 0, sizeof(V_12));
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_15;
	memset((&V_15), 0, sizeof(V_15));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Exception_t* V_17 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	U3CAverageAwaitAsyncU3Ed__30_1_t1B91FA738692CE65DB747C8606C4EFA4FBC2C97C* G_B22_0 = NULL;
	U3CAverageAwaitAsyncU3Ed__30_1_t1B91FA738692CE65DB747C8606C4EFA4FBC2C97C* G_B21_0 = NULL;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 G_B23_0;
	memset((&G_B23_0), 0, sizeof(G_B23_0));
	U3CAverageAwaitAsyncU3Ed__30_1_t1B91FA738692CE65DB747C8606C4EFA4FBC2C97C* G_B23_1 = NULL;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 G_B43_0;
	memset((&G_B43_0), 0, sizeof(G_B43_0));
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0058_1;
		}

IL_0015_1:
		{
			goto IL_0260_1;
		}

IL_001a_1:
		{
			__this->___U3CcountU3E5__1 = ((int64_t)0);
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_3;
			memset((&L_3), 0, sizeof(L_3));
			Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_3), (0.0f), Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
			__this->___U3CsumU3E5__2 = L_3;
			RuntimeObject* L_4 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = __this->___cancellationToken;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__3 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)L_6);
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			__this->___U3CU3Es__5 = 0;
		}

IL_0058_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0064_2;
				}
			}
			{
				goto IL_005e_2;
			}

IL_005e_2:
			{
				int32_t L_8 = V_0;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_0066_2;
				}
			}
			{
				goto IL_006b_2;
			}

IL_0064_2:
			{
				goto IL_00c2_2;
			}

IL_0066_2:
			{
				goto IL_01bf_2;
			}

IL_006b_2:
			{
				goto IL_0177_2;
			}

IL_0071_2:
			{
				Func_2_t9F80A31065CD628F063DA0D192A111706F695666* L_9 = __this->___selector;
				RuntimeObject* L_10 = __this->___U3CeU3E5__3;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				NullCheck(L_9);
				UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46 L_12;
				L_12 = InvokerFuncInvoker1< UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11));
				V_3 = L_12;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_13;
				L_13 = UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_inline((&V_3), UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_inline((&V_2), Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00de_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->___U3CU3E1__state = L_15;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_16 = V_2;
				__this->___U3CU3Eu__1 = L_16;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_17 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91*, U3CAverageAwaitAsyncU3Ed__30_1_t1B91FA738692CE65DB747C8606C4EFA4FBC2C97C**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0342;
			}

IL_00c2_2:
			{
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_18 = __this->___U3CU3Eu__1;
				V_2 = L_18;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* L_19 = (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state = L_20;
			}

IL_00de_2:
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_21;
				L_21 = Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_inline((&V_2), Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_RuntimeMethod_var);
				__this->___U3CU3Es__7 = L_21;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_22 = __this->___U3CU3Es__7;
				__this->___U3CvU3E5__6 = L_22;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_23 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CU3Es__7);
				il2cpp_codegen_initobj(L_23, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_24 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CvU3E5__6);
				bool L_25;
				L_25 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline(L_24, Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
				V_5 = L_25;
				bool L_26 = V_5;
				if (!L_26)
				{
					goto IL_016a_2;
				}
			}
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_27 = __this->___U3CsumU3E5__2;
				V_6 = L_27;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_28 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CvU3E5__6);
				float L_29;
				L_29 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA(L_28, Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
				V_7 = L_29;
				bool L_30;
				L_30 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&V_6), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
				if (L_30)
				{
					G_B22_0 = __this;
					goto IL_0141_2;
				}
				G_B21_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_31 = V_8;
				G_B23_0 = L_31;
				G_B23_1 = G_B21_0;
				goto IL_0150_2;
			}

IL_0141_2:
			{
				float L_32;
				L_32 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline((&V_6), Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
				float L_33 = V_7;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_34;
				memset((&L_34), 0, sizeof(L_34));
				Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_34), ((float)il2cpp_codegen_add(L_32, L_33)), Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
				G_B23_0 = L_34;
				G_B23_1 = G_B22_0;
			}

IL_0150_2:
			{
				NullCheck(G_B23_1);
				G_B23_1->___U3CsumU3E5__2 = G_B23_0;
				int64_t L_35 = __this->___U3CcountU3E5__1;
				V_9 = L_35;
				int64_t L_36 = V_9;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_36, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1 = ((int64_t)il2cpp_codegen_add(L_36, ((int64_t)1)));
			}

IL_016a_2:
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_37 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CvU3E5__6);
				il2cpp_codegen_initobj(L_37, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
			}

IL_0177_2:
			{
				RuntimeObject* L_38 = __this->___U3CeU3E5__3;
				NullCheck(L_38);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_39;
				L_39 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_38);
				V_12 = L_39;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_40;
				L_40 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_12), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_11 = L_40;
				bool L_41;
				L_41 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_11), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_41)
				{
					goto IL_01dc_2;
				}
			}
			{
				int32_t L_42 = 1;
				V_0 = L_42;
				__this->___U3CU3E1__state = L_42;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_43 = V_11;
				__this->___U3CU3Eu__2 = L_43;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_44 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAwaitAsyncU3Ed__30_1_t1B91FA738692CE65DB747C8606C4EFA4FBC2C97C**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_44, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0342;
			}

IL_01bf_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_45 = __this->___U3CU3Eu__2;
				V_11 = L_45;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_46 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_46, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_47 = (-1);
				V_0 = L_47;
				__this->___U3CU3E1__state = L_47;
			}

IL_01dc_2:
			{
				bool L_48;
				L_48 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_11), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8 = L_48;
				bool L_49 = __this->___U3CU3Es__8;
				V_10 = L_49;
				bool L_50 = V_10;
				if (L_50)
				{
					goto IL_0071_2;
				}
			}
			{
				goto IL_0207_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01fb_1;
			}
			throw e;
		}

CATCH_01fb_1:
		{
			RuntimeObject* L_51 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_13 = L_51;
			RuntimeObject* L_52 = V_13;
			__this->___U3CU3Es__4 = L_52;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)L_52);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0207_1;
		}

IL_0207_1:
		{
			RuntimeObject* L_53 = __this->___U3CeU3E5__3;
			V_14 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_53) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_54 = V_14;
			if (!L_54)
			{
				goto IL_0286_1;
			}
		}
		{
			RuntimeObject* L_55 = __this->___U3CeU3E5__3;
			NullCheck((RuntimeObject*)L_55);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_56;
			L_56 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_55);
			V_16 = L_56;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_57;
			L_57 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_16), NULL);
			V_15 = L_57;
			bool L_58;
			L_58 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_15), NULL);
			if (L_58)
			{
				goto IL_027d_1;
			}
		}
		{
			int32_t L_59 = 2;
			V_0 = L_59;
			__this->___U3CU3E1__state = L_59;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_60 = V_15;
			__this->___U3CU3Eu__3 = L_60;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_61 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAwaitAsyncU3Ed__30_1_t1B91FA738692CE65DB747C8606C4EFA4FBC2C97C**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_61, (&V_15), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_0342;
		}

IL_0260_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_62 = __this->___U3CU3Eu__3;
			V_15 = L_62;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_63 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3);
			il2cpp_codegen_initobj(L_63, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_64 = (-1);
			V_0 = L_64;
			__this->___U3CU3E1__state = L_64;
		}

IL_027d_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_15), NULL);
		}

IL_0286_1:
		{
			RuntimeObject* L_65 = __this->___U3CU3Es__4;
			V_13 = L_65;
			RuntimeObject* L_66 = V_13;
			if (!L_66)
			{
				goto IL_02b0_1;
			}
		}
		{
			RuntimeObject* L_67 = V_13;
			V_17 = ((Exception_t*)IsInstClass((RuntimeObject*)L_67, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_68 = V_17;
			if (L_68)
			{
				goto IL_02a3_1;
			}
		}
		{
			RuntimeObject* L_69 = V_13;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_69, method);
		}

IL_02a3_1:
		{
			Exception_t* L_70 = V_17;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_71;
			L_71 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_70, NULL);
			NullCheck(L_71);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_71, NULL);
		}

IL_02b0_1:
		{
			int32_t L_72 = __this->___U3CU3Es__5;
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_73 = __this->___U3CsumU3E5__2;
			V_6 = L_73;
			int64_t L_74 = __this->___U3CcountU3E5__1;
			V_7 = ((float)L_74);
			bool L_75;
			L_75 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&V_6), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
			if (L_75)
			{
				goto IL_02e4_1;
			}
		}
		{
			il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_76 = V_8;
			G_B43_0 = L_76;
			goto IL_02f3_1;
		}

IL_02e4_1:
		{
			float L_77;
			L_77 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline((&V_6), Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
			float L_78 = V_7;
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_79;
			memset((&L_79), 0, sizeof(L_79));
			Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_79), ((float)(L_77/L_78)), Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
			G_B43_0 = L_79;
		}

IL_02f3_1:
		{
			V_8 = G_B43_0;
			float L_80;
			L_80 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&V_8), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_81;
			memset((&L_81), 0, sizeof(L_81));
			Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_81), ((float)L_80), Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
			V_1 = L_81;
			goto IL_0326;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0305;
		}
		throw e;
	}

CATCH_0305:
	{
		Exception_t* L_82 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_17 = L_82;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_83 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder);
		Exception_t* L_84 = V_17;
		AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_inline(L_83, L_84, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0342;
	}

IL_0326:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_85 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_86 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_inline(L_85, L_86, AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_RuntimeMethod_var);
	}

IL_0342:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__30_1_SetStateMachine_m5FA9F174E74B178112E5D6D17722C078724C1AD7_gshared (U3CAverageAwaitAsyncU3Ed__30_1_t1B91FA738692CE65DB747C8606C4EFA4FBC2C97C* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__34_1__ctor_mEF5E7A74320B0326F0BF4CC4CBB8779DF1D77528_gshared (U3CAverageAwaitAsyncU3Ed__34_1_t53FE7D4236A524E65C4060CD9DF2F5BD6112ED2A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__34_1_MoveNext_mFE7A4A82EBEC57323934571B2282BC48716CCF27_gshared (U3CAverageAwaitAsyncU3Ed__34_1_t53FE7D4236A524E65C4060CD9DF2F5BD6112ED2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t26D5387B83C8FB851E8E90DAB31A3E00A6534284 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t26D5387B83C8FB851E8E90DAB31A3E00A6534284);
	int32_t V_0 = 0;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CAverageAwaitAsyncU3Ed__34_1_t53FE7D4236A524E65C4060CD9DF2F5BD6112ED2A* V_4 = NULL;
	bool V_5 = false;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_6;
	memset((&V_6), 0, sizeof(V_6));
	double V_7 = 0.0;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_8;
	memset((&V_8), 0, sizeof(V_8));
	int64_t V_9 = 0;
	bool V_10 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_12;
	memset((&V_12), 0, sizeof(V_12));
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_15;
	memset((&V_15), 0, sizeof(V_15));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Exception_t* V_17 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	U3CAverageAwaitAsyncU3Ed__34_1_t53FE7D4236A524E65C4060CD9DF2F5BD6112ED2A* G_B22_0 = NULL;
	U3CAverageAwaitAsyncU3Ed__34_1_t53FE7D4236A524E65C4060CD9DF2F5BD6112ED2A* G_B21_0 = NULL;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 G_B23_0;
	memset((&G_B23_0), 0, sizeof(G_B23_0));
	U3CAverageAwaitAsyncU3Ed__34_1_t53FE7D4236A524E65C4060CD9DF2F5BD6112ED2A* G_B23_1 = NULL;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 G_B43_0;
	memset((&G_B43_0), 0, sizeof(G_B43_0));
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_005c_1;
		}

IL_0015_1:
		{
			goto IL_0264_1;
		}

IL_001a_1:
		{
			__this->___U3CcountU3E5__1 = ((int64_t)0);
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_3;
			memset((&L_3), 0, sizeof(L_3));
			Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_3), (0.0), Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
			__this->___U3CsumU3E5__2 = L_3;
			RuntimeObject* L_4 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = __this->___cancellationToken;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__3 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)L_6);
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			__this->___U3CU3Es__5 = 0;
		}

IL_005c_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0068_2;
				}
			}
			{
				goto IL_0062_2;
			}

IL_0062_2:
			{
				int32_t L_8 = V_0;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_006a_2;
				}
			}
			{
				goto IL_006f_2;
			}

IL_0068_2:
			{
				goto IL_00c6_2;
			}

IL_006a_2:
			{
				goto IL_01c3_2;
			}

IL_006f_2:
			{
				goto IL_017b_2;
			}

IL_0075_2:
			{
				Func_2_tEBD22D2F4376CEDF9152BDE05B6E363699F0C7E1* L_9 = __this->___selector;
				RuntimeObject* L_10 = __this->___U3CeU3E5__3;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				NullCheck(L_9);
				UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E L_12;
				L_12 = InvokerFuncInvoker1< UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11));
				V_3 = L_12;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_13;
				L_13 = UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_inline((&V_3), UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_inline((&V_2), Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00e2_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->___U3CU3E1__state = L_15;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_16 = V_2;
				__this->___U3CU3Eu__1 = L_16;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_17 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0*, U3CAverageAwaitAsyncU3Ed__34_1_t53FE7D4236A524E65C4060CD9DF2F5BD6112ED2A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0337;
			}

IL_00c6_2:
			{
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_18 = __this->___U3CU3Eu__1;
				V_2 = L_18;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* L_19 = (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state = L_20;
			}

IL_00e2_2:
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_21;
				L_21 = Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_inline((&V_2), Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_RuntimeMethod_var);
				__this->___U3CU3Es__7 = L_21;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_22 = __this->___U3CU3Es__7;
				__this->___U3CvU3E5__6 = L_22;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_23 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CU3Es__7);
				il2cpp_codegen_initobj(L_23, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_24 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CvU3E5__6);
				bool L_25;
				L_25 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline(L_24, Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
				V_5 = L_25;
				bool L_26 = V_5;
				if (!L_26)
				{
					goto IL_016e_2;
				}
			}
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_27 = __this->___U3CsumU3E5__2;
				V_6 = L_27;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_28 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CvU3E5__6);
				double L_29;
				L_29 = Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1(L_28, Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
				V_7 = L_29;
				bool L_30;
				L_30 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&V_6), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
				if (L_30)
				{
					G_B22_0 = __this;
					goto IL_0145_2;
				}
				G_B21_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_31 = V_8;
				G_B23_0 = L_31;
				G_B23_1 = G_B21_0;
				goto IL_0154_2;
			}

IL_0145_2:
			{
				double L_32;
				L_32 = Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_inline((&V_6), Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var);
				double L_33 = V_7;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_34;
				memset((&L_34), 0, sizeof(L_34));
				Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_34), ((double)il2cpp_codegen_add(L_32, L_33)), Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
				G_B23_0 = L_34;
				G_B23_1 = G_B22_0;
			}

IL_0154_2:
			{
				NullCheck(G_B23_1);
				G_B23_1->___U3CsumU3E5__2 = G_B23_0;
				int64_t L_35 = __this->___U3CcountU3E5__1;
				V_9 = L_35;
				int64_t L_36 = V_9;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_36, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1 = ((int64_t)il2cpp_codegen_add(L_36, ((int64_t)1)));
			}

IL_016e_2:
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_37 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CvU3E5__6);
				il2cpp_codegen_initobj(L_37, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
			}

IL_017b_2:
			{
				RuntimeObject* L_38 = __this->___U3CeU3E5__3;
				NullCheck(L_38);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_39;
				L_39 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_38);
				V_12 = L_39;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_40;
				L_40 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_12), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_11 = L_40;
				bool L_41;
				L_41 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_11), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_41)
				{
					goto IL_01e0_2;
				}
			}
			{
				int32_t L_42 = 1;
				V_0 = L_42;
				__this->___U3CU3E1__state = L_42;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_43 = V_11;
				__this->___U3CU3Eu__2 = L_43;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_44 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAwaitAsyncU3Ed__34_1_t53FE7D4236A524E65C4060CD9DF2F5BD6112ED2A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_44, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0337;
			}

IL_01c3_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_45 = __this->___U3CU3Eu__2;
				V_11 = L_45;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_46 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_46, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_47 = (-1);
				V_0 = L_47;
				__this->___U3CU3E1__state = L_47;
			}

IL_01e0_2:
			{
				bool L_48;
				L_48 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_11), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8 = L_48;
				bool L_49 = __this->___U3CU3Es__8;
				V_10 = L_49;
				bool L_50 = V_10;
				if (L_50)
				{
					goto IL_0075_2;
				}
			}
			{
				goto IL_020b_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01ff_1;
			}
			throw e;
		}

CATCH_01ff_1:
		{
			RuntimeObject* L_51 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_13 = L_51;
			RuntimeObject* L_52 = V_13;
			__this->___U3CU3Es__4 = L_52;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)L_52);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_020b_1;
		}

IL_020b_1:
		{
			RuntimeObject* L_53 = __this->___U3CeU3E5__3;
			V_14 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_53) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_54 = V_14;
			if (!L_54)
			{
				goto IL_028a_1;
			}
		}
		{
			RuntimeObject* L_55 = __this->___U3CeU3E5__3;
			NullCheck((RuntimeObject*)L_55);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_56;
			L_56 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_55);
			V_16 = L_56;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_57;
			L_57 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_16), NULL);
			V_15 = L_57;
			bool L_58;
			L_58 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_15), NULL);
			if (L_58)
			{
				goto IL_0281_1;
			}
		}
		{
			int32_t L_59 = 2;
			V_0 = L_59;
			__this->___U3CU3E1__state = L_59;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_60 = V_15;
			__this->___U3CU3Eu__3 = L_60;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_61 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAwaitAsyncU3Ed__34_1_t53FE7D4236A524E65C4060CD9DF2F5BD6112ED2A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_61, (&V_15), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_0337;
		}

IL_0264_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_62 = __this->___U3CU3Eu__3;
			V_15 = L_62;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_63 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3);
			il2cpp_codegen_initobj(L_63, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_64 = (-1);
			V_0 = L_64;
			__this->___U3CU3E1__state = L_64;
		}

IL_0281_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_15), NULL);
		}

IL_028a_1:
		{
			RuntimeObject* L_65 = __this->___U3CU3Es__4;
			V_13 = L_65;
			RuntimeObject* L_66 = V_13;
			if (!L_66)
			{
				goto IL_02b4_1;
			}
		}
		{
			RuntimeObject* L_67 = V_13;
			V_17 = ((Exception_t*)IsInstClass((RuntimeObject*)L_67, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_68 = V_17;
			if (L_68)
			{
				goto IL_02a7_1;
			}
		}
		{
			RuntimeObject* L_69 = V_13;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_69, method);
		}

IL_02a7_1:
		{
			Exception_t* L_70 = V_17;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_71;
			L_71 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_70, NULL);
			NullCheck(L_71);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_71, NULL);
		}

IL_02b4_1:
		{
			int32_t L_72 = __this->___U3CU3Es__5;
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_73 = __this->___U3CsumU3E5__2;
			V_6 = L_73;
			int64_t L_74 = __this->___U3CcountU3E5__1;
			V_7 = ((double)L_74);
			bool L_75;
			L_75 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&V_6), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
			if (L_75)
			{
				goto IL_02e8_1;
			}
		}
		{
			il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_76 = V_8;
			G_B43_0 = L_76;
			goto IL_02f7_1;
		}

IL_02e8_1:
		{
			double L_77;
			L_77 = Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_inline((&V_6), Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var);
			double L_78 = V_7;
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_79;
			memset((&L_79), 0, sizeof(L_79));
			Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_79), ((double)(L_77/L_78)), Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
			G_B43_0 = L_79;
		}

IL_02f7_1:
		{
			V_1 = G_B43_0;
			goto IL_031b;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02fa;
		}
		throw e;
	}

CATCH_02fa:
	{
		Exception_t* L_80 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_17 = L_80;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_81 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
		Exception_t* L_82 = V_17;
		AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_inline(L_81, L_82, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0337;
	}

IL_031b:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_83 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_84 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_inline(L_83, L_84, AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
	}

IL_0337:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__34_1_SetStateMachine_mB90D650EEA9CB6F33046DA124856B01136A8C774_gshared (U3CAverageAwaitAsyncU3Ed__34_1_t53FE7D4236A524E65C4060CD9DF2F5BD6112ED2A* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__38_1__ctor_mC8EE162DEE68D5FBF04566CECA463A447B83209C_gshared (U3CAverageAwaitAsyncU3Ed__38_1_t033B46F89946CC1CA0F521A8F9086B9E2458454B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__38_1_MoveNext_m5C527F55A64B6251837169E5D694CB3DE995FE26_gshared (U3CAverageAwaitAsyncU3Ed__38_1_t033B46F89946CC1CA0F521A8F9086B9E2458454B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m33574CDAA01061AEA24434F9DE51A5B4F03A18A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t904261A7CDB85C106949C91581947F56F3340163 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_t904261A7CDB85C106949C91581947F56F3340163);
	int32_t V_0 = 0;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_1;
	memset((&V_1), 0, sizeof(V_1));
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_2;
	memset((&V_2), 0, sizeof(V_2));
	Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CAverageAwaitAsyncU3Ed__38_1_t033B46F89946CC1CA0F521A8F9086B9E2458454B* V_5 = NULL;
	bool V_6 = false;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_7;
	memset((&V_7), 0, sizeof(V_7));
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_8;
	memset((&V_8), 0, sizeof(V_8));
	int64_t V_9 = 0;
	bool V_10 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_12;
	memset((&V_12), 0, sizeof(V_12));
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_15;
	memset((&V_15), 0, sizeof(V_15));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Exception_t* V_17 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	U3CAverageAwaitAsyncU3Ed__38_1_t033B46F89946CC1CA0F521A8F9086B9E2458454B* G_B22_0 = NULL;
	U3CAverageAwaitAsyncU3Ed__38_1_t033B46F89946CC1CA0F521A8F9086B9E2458454B* G_B21_0 = NULL;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB G_B23_0;
	memset((&G_B23_0), 0, sizeof(G_B23_0));
	U3CAverageAwaitAsyncU3Ed__38_1_t033B46F89946CC1CA0F521A8F9086B9E2458454B* G_B23_1 = NULL;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB G_B43_0;
	memset((&G_B43_0), 0, sizeof(G_B43_0));
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_005c_1;
		}

IL_0015_1:
		{
			goto IL_0267_1;
		}

IL_001a_1:
		{
			__this->___U3CcountU3E5__1 = ((int64_t)0);
			il2cpp_codegen_initobj((&V_2), sizeof(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F));
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_3 = V_2;
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_4;
			memset((&L_4), 0, sizeof(L_4));
			Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7((&L_4), L_3, Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7_RuntimeMethod_var);
			__this->___U3CsumU3E5__2 = L_4;
			RuntimeObject* L_5 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_6 = __this->___cancellationToken;
			NullCheck(L_5);
			RuntimeObject* L_7;
			L_7 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_5, L_6);
			__this->___U3CeU3E5__3 = L_7;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)L_7);
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			__this->___U3CU3Es__5 = 0;
		}

IL_005c_1:
		{
		}
		try
		{
			{
				int32_t L_8 = V_0;
				if (!L_8)
				{
					goto IL_0068_2;
				}
			}
			{
				goto IL_0062_2;
			}

IL_0062_2:
			{
				int32_t L_9 = V_0;
				if ((((int32_t)L_9) == ((int32_t)1)))
				{
					goto IL_006a_2;
				}
			}
			{
				goto IL_006f_2;
			}

IL_0068_2:
			{
				goto IL_00c7_2;
			}

IL_006a_2:
			{
				goto IL_01c6_2;
			}

IL_006f_2:
			{
				goto IL_017e_2;
			}

IL_0075_2:
			{
				Func_2_t041ABB3F33302FF5B428FF832CE110343F4DA4C6* L_10 = __this->___selector;
				RuntimeObject* L_11 = __this->___U3CeU3E5__3;
				NullCheck(L_11);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_11, (Il2CppFullySharedGenericAny*)L_12);
				NullCheck(L_10);
				UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F L_13;
				L_13 = InvokerFuncInvoker1< UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_12: *(void**)L_12));
				V_4 = L_13;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_14;
				L_14 = UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_inline((&V_4), UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_RuntimeMethod_var);
				V_3 = L_14;
				bool L_15;
				L_15 = Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_inline((&V_3), Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_00e3_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->___U3CU3E1__state = L_16;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_17 = V_3;
				__this->___U3CU3Eu__1 = L_17;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_18 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51*, U3CAverageAwaitAsyncU3Ed__38_1_t033B46F89946CC1CA0F521A8F9086B9E2458454B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_18, (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0340;
			}

IL_00c7_2:
			{
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_19 = __this->___U3CU3Eu__1;
				V_3 = L_19;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* L_20 = (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state = L_21;
			}

IL_00e3_2:
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_22;
				L_22 = Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_inline((&V_3), Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_RuntimeMethod_var);
				__this->___U3CU3Es__7 = L_22;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_23 = __this->___U3CU3Es__7;
				__this->___U3CvU3E5__6 = L_23;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_24 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CU3Es__7);
				il2cpp_codegen_initobj(L_24, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_25 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CvU3E5__6);
				bool L_26;
				L_26 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline(L_25, Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
				V_6 = L_26;
				bool L_27 = V_6;
				if (!L_27)
				{
					goto IL_0171_2;
				}
			}
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_28 = __this->___U3CsumU3E5__2;
				V_7 = L_28;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_29 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CvU3E5__6);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_30;
				L_30 = Nullable_1_get_Value_m33574CDAA01061AEA24434F9DE51A5B4F03A18A2(L_29, Nullable_1_get_Value_m33574CDAA01061AEA24434F9DE51A5B4F03A18A2_RuntimeMethod_var);
				V_2 = L_30;
				bool L_31;
				L_31 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline((&V_7), Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
				if (L_31)
				{
					G_B22_0 = __this;
					goto IL_0145_2;
				}
				G_B21_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_32 = V_8;
				G_B23_0 = L_32;
				G_B23_1 = G_B21_0;
				goto IL_0157_2;
			}

IL_0145_2:
			{
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_33;
				L_33 = Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_inline((&V_7), Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_34 = V_2;
				il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_35;
				L_35 = Decimal_op_Addition_m878AC5E15D13F205BCB6AE9747B2C0D950BD2EF7(L_33, L_34, NULL);
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_36;
				memset((&L_36), 0, sizeof(L_36));
				Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7((&L_36), L_35, Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7_RuntimeMethod_var);
				G_B23_0 = L_36;
				G_B23_1 = G_B22_0;
			}

IL_0157_2:
			{
				NullCheck(G_B23_1);
				G_B23_1->___U3CsumU3E5__2 = G_B23_0;
				int64_t L_37 = __this->___U3CcountU3E5__1;
				V_9 = L_37;
				int64_t L_38 = V_9;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_38, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1 = ((int64_t)il2cpp_codegen_add(L_38, ((int64_t)1)));
			}

IL_0171_2:
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_39 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CvU3E5__6);
				il2cpp_codegen_initobj(L_39, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
			}

IL_017e_2:
			{
				RuntimeObject* L_40 = __this->___U3CeU3E5__3;
				NullCheck(L_40);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_41;
				L_41 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_40);
				V_12 = L_41;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_42;
				L_42 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_12), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_11 = L_42;
				bool L_43;
				L_43 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_11), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_43)
				{
					goto IL_01e3_2;
				}
			}
			{
				int32_t L_44 = 1;
				V_0 = L_44;
				__this->___U3CU3E1__state = L_44;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_45 = V_11;
				__this->___U3CU3Eu__2 = L_45;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_46 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAwaitAsyncU3Ed__38_1_t033B46F89946CC1CA0F521A8F9086B9E2458454B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_46, (&V_11), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0340;
			}

IL_01c6_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_47 = __this->___U3CU3Eu__2;
				V_11 = L_47;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_48 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_48, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_49 = (-1);
				V_0 = L_49;
				__this->___U3CU3E1__state = L_49;
			}

IL_01e3_2:
			{
				bool L_50;
				L_50 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_11), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8 = L_50;
				bool L_51 = __this->___U3CU3Es__8;
				V_10 = L_51;
				bool L_52 = V_10;
				if (L_52)
				{
					goto IL_0075_2;
				}
			}
			{
				goto IL_020e_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0202_1;
			}
			throw e;
		}

CATCH_0202_1:
		{
			RuntimeObject* L_53 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_13 = L_53;
			RuntimeObject* L_54 = V_13;
			__this->___U3CU3Es__4 = L_54;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)L_54);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_020e_1;
		}

IL_020e_1:
		{
			RuntimeObject* L_55 = __this->___U3CeU3E5__3;
			V_14 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_55) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_56 = V_14;
			if (!L_56)
			{
				goto IL_028d_1;
			}
		}
		{
			RuntimeObject* L_57 = __this->___U3CeU3E5__3;
			NullCheck((RuntimeObject*)L_57);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_58;
			L_58 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_57);
			V_16 = L_58;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_59;
			L_59 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_16), NULL);
			V_15 = L_59;
			bool L_60;
			L_60 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_15), NULL);
			if (L_60)
			{
				goto IL_0284_1;
			}
		}
		{
			int32_t L_61 = 2;
			V_0 = L_61;
			__this->___U3CU3E1__state = L_61;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_62 = V_15;
			__this->___U3CU3Eu__3 = L_62;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3))->___task))->___source), (void*)NULL);
			V_5 = __this;
			AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_63 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAwaitAsyncU3Ed__38_1_t033B46F89946CC1CA0F521A8F9086B9E2458454B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_63, (&V_15), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_0340;
		}

IL_0267_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_64 = __this->___U3CU3Eu__3;
			V_15 = L_64;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_65 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3);
			il2cpp_codegen_initobj(L_65, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_66 = (-1);
			V_0 = L_66;
			__this->___U3CU3E1__state = L_66;
		}

IL_0284_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_15), NULL);
		}

IL_028d_1:
		{
			RuntimeObject* L_67 = __this->___U3CU3Es__4;
			V_13 = L_67;
			RuntimeObject* L_68 = V_13;
			if (!L_68)
			{
				goto IL_02b7_1;
			}
		}
		{
			RuntimeObject* L_69 = V_13;
			V_17 = ((Exception_t*)IsInstClass((RuntimeObject*)L_69, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_70 = V_17;
			if (L_70)
			{
				goto IL_02aa_1;
			}
		}
		{
			RuntimeObject* L_71 = V_13;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_71, method);
		}

IL_02aa_1:
		{
			Exception_t* L_72 = V_17;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_73;
			L_73 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_72, NULL);
			NullCheck(L_73);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_73, NULL);
		}

IL_02b7_1:
		{
			int32_t L_74 = __this->___U3CU3Es__5;
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_75 = __this->___U3CsumU3E5__2;
			V_7 = L_75;
			int64_t L_76 = __this->___U3CcountU3E5__1;
			il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_77;
			L_77 = Decimal_op_Implicit_m8F9A38760D01B23E6DFF77EA760CCE5111F3656D(L_76, NULL);
			V_2 = L_77;
			bool L_78;
			L_78 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline((&V_7), Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
			if (L_78)
			{
				goto IL_02ee_1;
			}
		}
		{
			il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_79 = V_8;
			G_B43_0 = L_79;
			goto IL_0300_1;
		}

IL_02ee_1:
		{
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_80;
			L_80 = Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_inline((&V_7), Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_81 = V_2;
			il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_82;
			L_82 = Decimal_op_Division_mA0BD25988CA8010A3F8EA2F6A534F9F2D812D2AC(L_80, L_81, NULL);
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_83;
			memset((&L_83), 0, sizeof(L_83));
			Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7((&L_83), L_82, Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7_RuntimeMethod_var);
			G_B43_0 = L_83;
		}

IL_0300_1:
		{
			V_1 = G_B43_0;
			goto IL_0324;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0303;
		}
		throw e;
	}

CATCH_0303:
	{
		Exception_t* L_84 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_17 = L_84;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_85 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder);
		Exception_t* L_86 = V_17;
		AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_inline(L_85, L_86, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0340;
	}

IL_0324:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_87 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder);
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_88 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_inline(L_87, L_88, AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_RuntimeMethod_var);
	}

IL_0340:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__38_1_SetStateMachine_mA8B8E6A1093662812133675AB8286876D7672FCB_gshared (U3CAverageAwaitAsyncU3Ed__38_1_t033B46F89946CC1CA0F521A8F9086B9E2458454B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__6_1__ctor_m346E00854478FBAB753C6440753ED3AA763D0261_gshared (U3CAverageAwaitAsyncU3Ed__6_1_t3691944FA8BC631E4794C68710C761652161B0BF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__6_1_MoveNext_mC2BA269D56925D052077DA8865E77A7C7C03EAE3_gshared (U3CAverageAwaitAsyncU3Ed__6_1_t3691944FA8BC631E4794C68710C761652161B0BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m610A766CD8038A109B21E2F02CF093096F9226D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t7A788937E94FF27403A438FF8A5C35F70967CCBC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t7A788937E94FF27403A438FF8A5C35F70967CCBC);
	int32_t V_0 = 0;
	double V_1 = 0.0;
	Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CAverageAwaitAsyncU3Ed__6_1_t3691944FA8BC631E4794C68710C761652161B0BF* V_4 = NULL;
	int64_t V_5 = 0;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t* V_13 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0050_1;
		}

IL_0015_1:
		{
			goto IL_0201_1;
		}

IL_001a_1:
		{
			__this->___U3CcountU3E5__1 = ((int64_t)0);
			__this->___U3CsumU3E5__2 = ((int64_t)0);
			RuntimeObject* L_3 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = __this->___cancellationToken;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__3 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)L_5);
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			__this->___U3CU3Es__5 = 0;
		}

IL_0050_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_005c_2;
				}
			}
			{
				goto IL_0056_2;
			}

IL_0056_2:
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_005e_2;
				}
			}
			{
				goto IL_0063_2;
			}

IL_005c_2:
			{
				goto IL_00c7_2;
			}

IL_005e_2:
			{
				goto IL_0160_2;
			}

IL_0063_2:
			{
				goto IL_0118_2;
			}

IL_0069_2:
			{
				int64_t L_8 = __this->___U3CsumU3E5__2;
				__this->___U3CU3Es__6 = L_8;
				Func_2_t04742C32F6BEF8B1199EACA5BD7F68C041603B6D* L_9 = __this->___selector;
				RuntimeObject* L_10 = __this->___U3CeU3E5__3;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				NullCheck(L_9);
				UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72 L_12;
				L_12 = InvokerFuncInvoker1< UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11));
				V_3 = L_12;
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E L_13;
				L_13 = UniTask_1_GetAwaiter_m610A766CD8038A109B21E2F02CF093096F9226D7_inline((&V_3), UniTask_1_GetAwaiter_m610A766CD8038A109B21E2F02CF093096F9226D7_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_inline((&V_2), Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00e3_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->___U3CU3E1__state = L_15;
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E L_16 = V_2;
				__this->___U3CU3Eu__1 = L_16;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_17 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E*, U3CAverageAwaitAsyncU3Ed__6_1_t3691944FA8BC631E4794C68710C761652161B0BF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_02ae;
			}

IL_00c7_2:
			{
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E L_18 = __this->___U3CU3Eu__1;
				V_2 = L_18;
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* L_19 = (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state = L_20;
			}

IL_00e3_2:
			{
				int64_t L_21;
				L_21 = Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_inline((&V_2), Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_RuntimeMethod_var);
				__this->___U3CU3Es__7 = L_21;
				int64_t L_22 = __this->___U3CU3Es__6;
				int64_t L_23 = __this->___U3CU3Es__7;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_22, (int64_t)L_23))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CsumU3E5__2 = ((int64_t)il2cpp_codegen_add(L_22, L_23));
				int64_t L_24 = __this->___U3CcountU3E5__1;
				V_5 = L_24;
				int64_t L_25 = V_5;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_25, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1 = ((int64_t)il2cpp_codegen_add(L_25, ((int64_t)1)));
			}

IL_0118_2:
			{
				RuntimeObject* L_26 = __this->___U3CeU3E5__3;
				NullCheck(L_26);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_27;
				L_27 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_26);
				V_8 = L_27;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28;
				L_28 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_7 = L_28;
				bool L_29;
				L_29 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_017d_2;
				}
			}
			{
				int32_t L_30 = 1;
				V_0 = L_30;
				__this->___U3CU3E1__state = L_30;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_31 = V_7;
				__this->___U3CU3Eu__2 = L_31;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_32 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAwaitAsyncU3Ed__6_1_t3691944FA8BC631E4794C68710C761652161B0BF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_32, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_02ae;
			}

IL_0160_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_33 = __this->___U3CU3Eu__2;
				V_7 = L_33;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_34, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_35 = (-1);
				V_0 = L_35;
				__this->___U3CU3E1__state = L_35;
			}

IL_017d_2:
			{
				bool L_36;
				L_36 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8 = L_36;
				bool L_37 = __this->___U3CU3Es__8;
				V_6 = L_37;
				bool L_38 = V_6;
				if (L_38)
				{
					goto IL_0069_2;
				}
			}
			{
				goto IL_01a8_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_019c_1;
			}
			throw e;
		}

CATCH_019c_1:
		{
			RuntimeObject* L_39 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_9 = L_39;
			RuntimeObject* L_40 = V_9;
			__this->___U3CU3Es__4 = L_40;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)L_40);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_01a8_1;
		}

IL_01a8_1:
		{
			RuntimeObject* L_41 = __this->___U3CeU3E5__3;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_41) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_42 = V_10;
			if (!L_42)
			{
				goto IL_0227_1;
			}
		}
		{
			RuntimeObject* L_43 = __this->___U3CeU3E5__3;
			NullCheck((RuntimeObject*)L_43);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_44;
			L_44 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_43);
			V_12 = L_44;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_45;
			L_45 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_45;
			bool L_46;
			L_46 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_46)
			{
				goto IL_021e_1;
			}
		}
		{
			int32_t L_47 = 2;
			V_0 = L_47;
			__this->___U3CU3E1__state = L_47;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_48 = V_11;
			__this->___U3CU3Eu__3 = L_48;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_49 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAwaitAsyncU3Ed__6_1_t3691944FA8BC631E4794C68710C761652161B0BF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_49, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_02ae;
		}

IL_0201_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50 = __this->___U3CU3Eu__3;
			V_11 = L_50;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_51 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3);
			il2cpp_codegen_initobj(L_51, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_52 = (-1);
			V_0 = L_52;
			__this->___U3CU3E1__state = L_52;
		}

IL_021e_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_0227_1:
		{
			RuntimeObject* L_53 = __this->___U3CU3Es__4;
			V_9 = L_53;
			RuntimeObject* L_54 = V_9;
			if (!L_54)
			{
				goto IL_0251_1;
			}
		}
		{
			RuntimeObject* L_55 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_55, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_56 = V_13;
			if (L_56)
			{
				goto IL_0244_1;
			}
		}
		{
			RuntimeObject* L_57 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_57, method);
		}

IL_0244_1:
		{
			Exception_t* L_58 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_59;
			L_59 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_58, NULL);
			NullCheck(L_59);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_59, NULL);
		}

IL_0251_1:
		{
			int32_t L_60 = __this->___U3CU3Es__5;
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			int64_t L_61 = __this->___U3CsumU3E5__2;
			int64_t L_62 = __this->___U3CcountU3E5__1;
			V_1 = ((double)(((double)L_61)/((double)L_62)));
			goto IL_0292;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0271;
		}
		throw e;
	}

CATCH_0271:
	{
		Exception_t* L_63 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_13 = L_63;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_64 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
		Exception_t* L_65 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_inline(L_64, L_65, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_02ae;
	}

IL_0292:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_66 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
		double L_67 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_inline(L_66, L_67, AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
	}

IL_02ae:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__6_1_SetStateMachine_m2E3746254ED28EA6F39A386F66987D09245F8A00_gshared (U3CAverageAwaitAsyncU3Ed__6_1_t3691944FA8BC631E4794C68710C761652161B0BF* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitWithCancellationAsyncU3Ed__11_1__ctor_m10994F0F8582D304E1C213F724C7E2740DF5178F_gshared (U3CAverageAwaitWithCancellationAsyncU3Ed__11_1_tDA0926F879D4DFE9E9196F374B8E80FA70547103* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitWithCancellationAsyncU3Ed__11_1_MoveNext_m7E236AA2790225E098508F8CEED0869ABD1856DC_gshared (U3CAverageAwaitWithCancellationAsyncU3Ed__11_1_tDA0926F879D4DFE9E9196F374B8E80FA70547103* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t64209783EB09A867BD4BA2ED9E20F34A30E6A697 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t64209783EB09A867BD4BA2ED9E20F34A30E6A697);
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CAverageAwaitWithCancellationAsyncU3Ed__11_1_tDA0926F879D4DFE9E9196F374B8E80FA70547103* V_4 = NULL;
	int64_t V_5 = 0;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t* V_13 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0053_1;
		}

IL_0015_1:
		{
			goto IL_020a_1;
		}

IL_001a_1:
		{
			__this->___U3CcountU3E5__1 = ((int64_t)0);
			__this->___U3CsumU3E5__2 = (0.0f);
			RuntimeObject* L_3 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = __this->___cancellationToken;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__3 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)L_5);
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			__this->___U3CU3Es__5 = 0;
		}

IL_0053_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_005f_2;
				}
			}
			{
				goto IL_0059_2;
			}

IL_0059_2:
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_0061_2;
				}
			}
			{
				goto IL_0066_2;
			}

IL_005f_2:
			{
				goto IL_00d0_2;
			}

IL_0061_2:
			{
				goto IL_0169_2;
			}

IL_0066_2:
			{
				goto IL_0121_2;
			}

IL_006c_2:
			{
				float L_8 = __this->___U3CsumU3E5__2;
				__this->___U3CU3Es__6 = L_8;
				Func_3_t79F461272893123C05C047A343D70B9B775827E4* L_9 = __this->___selector;
				RuntimeObject* L_10 = __this->___U3CeU3E5__3;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12 = __this->___cancellationToken;
				NullCheck(L_9);
				UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1 L_13;
				L_13 = InvokerFuncInvoker2< UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11), L_12);
				V_3 = L_13;
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_14;
				L_14 = UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_inline((&V_3), UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_RuntimeMethod_var);
				V_2 = L_14;
				bool L_15;
				L_15 = Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_inline((&V_2), Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_00ec_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->___U3CU3E1__state = L_16;
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_17 = V_2;
				__this->___U3CU3Eu__1 = L_17;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_18 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D*, U3CAverageAwaitWithCancellationAsyncU3Ed__11_1_tDA0926F879D4DFE9E9196F374B8E80FA70547103**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_18, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_02b7;
			}

IL_00d0_2:
			{
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_19 = __this->___U3CU3Eu__1;
				V_2 = L_19;
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* L_20 = (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state = L_21;
			}

IL_00ec_2:
			{
				float L_22;
				L_22 = Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_inline((&V_2), Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_RuntimeMethod_var);
				__this->___U3CU3Es__7 = L_22;
				float L_23 = __this->___U3CU3Es__6;
				float L_24 = __this->___U3CU3Es__7;
				__this->___U3CsumU3E5__2 = ((float)il2cpp_codegen_add(L_23, L_24));
				int64_t L_25 = __this->___U3CcountU3E5__1;
				V_5 = L_25;
				int64_t L_26 = V_5;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_26, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1 = ((int64_t)il2cpp_codegen_add(L_26, ((int64_t)1)));
			}

IL_0121_2:
			{
				RuntimeObject* L_27 = __this->___U3CeU3E5__3;
				NullCheck(L_27);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_28;
				L_28 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_27);
				V_8 = L_28;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29;
				L_29 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_7 = L_29;
				bool L_30;
				L_30 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_30)
				{
					goto IL_0186_2;
				}
			}
			{
				int32_t L_31 = 1;
				V_0 = L_31;
				__this->___U3CU3E1__state = L_31;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_32 = V_7;
				__this->___U3CU3Eu__2 = L_32;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_33 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAwaitWithCancellationAsyncU3Ed__11_1_tDA0926F879D4DFE9E9196F374B8E80FA70547103**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_33, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_02b7;
			}

IL_0169_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_34 = __this->___U3CU3Eu__2;
				V_7 = L_34;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_35 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_35, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_36 = (-1);
				V_0 = L_36;
				__this->___U3CU3E1__state = L_36;
			}

IL_0186_2:
			{
				bool L_37;
				L_37 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8 = L_37;
				bool L_38 = __this->___U3CU3Es__8;
				V_6 = L_38;
				bool L_39 = V_6;
				if (L_39)
				{
					goto IL_006c_2;
				}
			}
			{
				goto IL_01b1_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01a5_1;
			}
			throw e;
		}

CATCH_01a5_1:
		{
			RuntimeObject* L_40 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_9 = L_40;
			RuntimeObject* L_41 = V_9;
			__this->___U3CU3Es__4 = L_41;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)L_41);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_01b1_1;
		}

IL_01b1_1:
		{
			RuntimeObject* L_42 = __this->___U3CeU3E5__3;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_42) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_43 = V_10;
			if (!L_43)
			{
				goto IL_0230_1;
			}
		}
		{
			RuntimeObject* L_44 = __this->___U3CeU3E5__3;
			NullCheck((RuntimeObject*)L_44);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_45;
			L_45 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
			V_12 = L_45;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_46;
			L_46 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_46;
			bool L_47;
			L_47 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_47)
			{
				goto IL_0227_1;
			}
		}
		{
			int32_t L_48 = 2;
			V_0 = L_48;
			__this->___U3CU3E1__state = L_48;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_49 = V_11;
			__this->___U3CU3Eu__3 = L_49;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_50 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAwaitWithCancellationAsyncU3Ed__11_1_tDA0926F879D4DFE9E9196F374B8E80FA70547103**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_50, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_02b7;
		}

IL_020a_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_51 = __this->___U3CU3Eu__3;
			V_11 = L_51;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_52 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3);
			il2cpp_codegen_initobj(L_52, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_53 = (-1);
			V_0 = L_53;
			__this->___U3CU3E1__state = L_53;
		}

IL_0227_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_0230_1:
		{
			RuntimeObject* L_54 = __this->___U3CU3Es__4;
			V_9 = L_54;
			RuntimeObject* L_55 = V_9;
			if (!L_55)
			{
				goto IL_025a_1;
			}
		}
		{
			RuntimeObject* L_56 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_56, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_57 = V_13;
			if (L_57)
			{
				goto IL_024d_1;
			}
		}
		{
			RuntimeObject* L_58 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_58, method);
		}

IL_024d_1:
		{
			Exception_t* L_59 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_60;
			L_60 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_59, NULL);
			NullCheck(L_60);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_60, NULL);
		}

IL_025a_1:
		{
			int32_t L_61 = __this->___U3CU3Es__5;
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			float L_62 = __this->___U3CsumU3E5__2;
			int64_t L_63 = __this->___U3CcountU3E5__1;
			V_1 = ((float)((float)(L_62/((float)L_63))));
			goto IL_029b;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_027a;
		}
		throw e;
	}

CATCH_027a:
	{
		Exception_t* L_64 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_13 = L_64;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_65 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder);
		Exception_t* L_66 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_inline(L_65, L_66, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_02b7;
	}

IL_029b:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_67 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder);
		float L_68 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_inline(L_67, L_68, AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_RuntimeMethod_var);
	}

IL_02b7:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitWithCancellationAsyncU3Ed__11_1_SetStateMachine_m496D93C7852BB7170756422C377FABA03159816B_gshared (U3CAverageAwaitWithCancellationAsyncU3Ed__11_1_tDA0926F879D4DFE9E9196F374B8E80FA70547103* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitWithCancellationAsyncU3Ed__15_1__ctor_m74EEA51F2EC3887BCE270E99A7FD58A04B9624C9_gshared (U3CAverageAwaitWithCancellationAsyncU3Ed__15_1_tB093D6BB8EF29AA4A5EA8BC6B7371EB332077809* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitWithCancellationAsyncU3Ed__15_1_MoveNext_m1C8EA8D55F2B9C1D861DB5605561F97EF5FDA9C6_gshared (U3CAverageAwaitWithCancellationAsyncU3Ed__15_1_tB093D6BB8EF29AA4A5EA8BC6B7371EB332077809* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_mFC4A614AA0B1C8D41A05840FAA981FAF10FC99C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m68E768B22932F4C553E8F96F1DEDC7361DC02133_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tC23F18F7A7344E8D1CBB1C3781DC26675047684F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_tC23F18F7A7344E8D1CBB1C3781DC26675047684F);
	int32_t V_0 = 0;
	double V_1 = 0.0;
	Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CAverageAwaitWithCancellationAsyncU3Ed__15_1_tB093D6BB8EF29AA4A5EA8BC6B7371EB332077809* V_4 = NULL;
	int64_t V_5 = 0;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t* V_13 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0057_1;
		}

IL_0015_1:
		{
			goto IL_020e_1;
		}

IL_001a_1:
		{
			__this->___U3CcountU3E5__1 = ((int64_t)0);
			__this->___U3CsumU3E5__2 = (0.0);
			RuntimeObject* L_3 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = __this->___cancellationToken;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__3 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)L_5);
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			__this->___U3CU3Es__5 = 0;
		}

IL_0057_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_0063_2;
				}
			}
			{
				goto IL_005d_2;
			}

IL_005d_2:
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_0065_2;
				}
			}
			{
				goto IL_006a_2;
			}

IL_0063_2:
			{
				goto IL_00d4_2;
			}

IL_0065_2:
			{
				goto IL_016d_2;
			}

IL_006a_2:
			{
				goto IL_0125_2;
			}

IL_0070_2:
			{
				double L_8 = __this->___U3CsumU3E5__2;
				__this->___U3CU3Es__6 = L_8;
				Func_3_tB356387A25DA85D9F4DDAAEEFD39A96B3F81FA95* L_9 = __this->___selector;
				RuntimeObject* L_10 = __this->___U3CeU3E5__3;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12 = __this->___cancellationToken;
				NullCheck(L_9);
				UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C L_13;
				L_13 = InvokerFuncInvoker2< UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11), L_12);
				V_3 = L_13;
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_14;
				L_14 = UniTask_1_GetAwaiter_m68E768B22932F4C553E8F96F1DEDC7361DC02133_inline((&V_3), UniTask_1_GetAwaiter_m68E768B22932F4C553E8F96F1DEDC7361DC02133_RuntimeMethod_var);
				V_2 = L_14;
				bool L_15;
				L_15 = Awaiter_get_IsCompleted_mFC4A614AA0B1C8D41A05840FAA981FAF10FC99C8_inline((&V_2), Awaiter_get_IsCompleted_mFC4A614AA0B1C8D41A05840FAA981FAF10FC99C8_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_00f0_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->___U3CU3E1__state = L_16;
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_17 = V_2;
				__this->___U3CU3Eu__1 = L_17;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_18 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88*, U3CAverageAwaitWithCancellationAsyncU3Ed__15_1_tB093D6BB8EF29AA4A5EA8BC6B7371EB332077809**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_18, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_02ba;
			}

IL_00d4_2:
			{
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_19 = __this->___U3CU3Eu__1;
				V_2 = L_19;
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88* L_20 = (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state = L_21;
			}

IL_00f0_2:
			{
				double L_22;
				L_22 = Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_inline((&V_2), Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_RuntimeMethod_var);
				__this->___U3CU3Es__7 = L_22;
				double L_23 = __this->___U3CU3Es__6;
				double L_24 = __this->___U3CU3Es__7;
				__this->___U3CsumU3E5__2 = ((double)il2cpp_codegen_add(L_23, L_24));
				int64_t L_25 = __this->___U3CcountU3E5__1;
				V_5 = L_25;
				int64_t L_26 = V_5;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_26, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1 = ((int64_t)il2cpp_codegen_add(L_26, ((int64_t)1)));
			}

IL_0125_2:
			{
				RuntimeObject* L_27 = __this->___U3CeU3E5__3;
				NullCheck(L_27);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_28;
				L_28 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_27);
				V_8 = L_28;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29;
				L_29 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_7 = L_29;
				bool L_30;
				L_30 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_30)
				{
					goto IL_018a_2;
				}
			}
			{
				int32_t L_31 = 1;
				V_0 = L_31;
				__this->___U3CU3E1__state = L_31;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_32 = V_7;
				__this->___U3CU3Eu__2 = L_32;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_33 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAwaitWithCancellationAsyncU3Ed__15_1_tB093D6BB8EF29AA4A5EA8BC6B7371EB332077809**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_33, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_02ba;
			}

IL_016d_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_34 = __this->___U3CU3Eu__2;
				V_7 = L_34;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_35 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_35, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_36 = (-1);
				V_0 = L_36;
				__this->___U3CU3E1__state = L_36;
			}

IL_018a_2:
			{
				bool L_37;
				L_37 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8 = L_37;
				bool L_38 = __this->___U3CU3Es__8;
				V_6 = L_38;
				bool L_39 = V_6;
				if (L_39)
				{
					goto IL_0070_2;
				}
			}
			{
				goto IL_01b5_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01a9_1;
			}
			throw e;
		}

CATCH_01a9_1:
		{
			RuntimeObject* L_40 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_9 = L_40;
			RuntimeObject* L_41 = V_9;
			__this->___U3CU3Es__4 = L_41;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)L_41);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_01b5_1;
		}

IL_01b5_1:
		{
			RuntimeObject* L_42 = __this->___U3CeU3E5__3;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_42) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_43 = V_10;
			if (!L_43)
			{
				goto IL_0234_1;
			}
		}
		{
			RuntimeObject* L_44 = __this->___U3CeU3E5__3;
			NullCheck((RuntimeObject*)L_44);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_45;
			L_45 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
			V_12 = L_45;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_46;
			L_46 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_46;
			bool L_47;
			L_47 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_47)
			{
				goto IL_022b_1;
			}
		}
		{
			int32_t L_48 = 2;
			V_0 = L_48;
			__this->___U3CU3E1__state = L_48;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_49 = V_11;
			__this->___U3CU3Eu__3 = L_49;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_50 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAwaitWithCancellationAsyncU3Ed__15_1_tB093D6BB8EF29AA4A5EA8BC6B7371EB332077809**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_50, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_02ba;
		}

IL_020e_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_51 = __this->___U3CU3Eu__3;
			V_11 = L_51;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_52 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3);
			il2cpp_codegen_initobj(L_52, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_53 = (-1);
			V_0 = L_53;
			__this->___U3CU3E1__state = L_53;
		}

IL_022b_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_0234_1:
		{
			RuntimeObject* L_54 = __this->___U3CU3Es__4;
			V_9 = L_54;
			RuntimeObject* L_55 = V_9;
			if (!L_55)
			{
				goto IL_025e_1;
			}
		}
		{
			RuntimeObject* L_56 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_56, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_57 = V_13;
			if (L_57)
			{
				goto IL_0251_1;
			}
		}
		{
			RuntimeObject* L_58 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_58, method);
		}

IL_0251_1:
		{
			Exception_t* L_59 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_60;
			L_60 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_59, NULL);
			NullCheck(L_60);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_60, NULL);
		}

IL_025e_1:
		{
			int32_t L_61 = __this->___U3CU3Es__5;
			__this->___U3CU3Es__4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)NULL);
			double L_62 = __this->___U3CsumU3E5__2;
			int64_t L_63 = __this->___U3CcountU3E5__1;
			V_1 = ((double)(L_62/((double)L_63)));
			goto IL_029e;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_027d;
		}
		throw e;
	}

CATCH_027d:
	{
		Exception_t* L_64 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_13 = L_64;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_65 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
		Exception_t* L_66 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_inline(L_65, L_66, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_02ba;
	}

IL_029e:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_67 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
		double L_68 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_inline(L_67, L_68, AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
	}

IL_02ba:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitWithCancellationAsyncU3Ed__15_1_SetStateMachine_m0C9A95AD5199F4BB021444924958BEA57E3963D0_gshared (U3CAverageAwaitWithCancellationAsyncU3Ed__15_1_tB093D6BB8EF29AA4A5EA8BC6B7371EB332077809* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_gshared_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
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
		InterfaceActionInvoker1< Exception_t* >::Invoke(3, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_gshared_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, bool ___0_result, const RuntimeMethod* method) 
{
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
		bool L_2 = ___0_result;
		__this->___result = L_2;
		goto IL_0028;
	}

IL_0019:
	{
		RuntimeObject* L_3 = __this->___runnerPromise;
		bool L_4 = ___0_result;
		NullCheck(L_3);
		InterfaceActionInvoker1< bool >::Invoke(2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_gshared_inline (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
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
		InterfaceActionInvoker1< Exception_t* >::Invoke(3, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_gshared_inline (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* __this, double ___0_result, const RuntimeMethod* method) 
{
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
		double L_2 = ___0_result;
		__this->___result = L_2;
		goto IL_0028;
	}

IL_0019:
	{
		RuntimeObject* L_3 = __this->___runnerPromise;
		double L_4 = ___0_result;
		NullCheck(L_3);
		InterfaceActionInvoker1< double >::Invoke(2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_gshared_inline (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
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
		InterfaceActionInvoker1< Exception_t* >::Invoke(3, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_gshared_inline (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_result, const RuntimeMethod* method) 
{
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
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_2 = ___0_result;
		__this->___result = L_2;
		goto IL_0028;
	}

IL_0019:
	{
		RuntimeObject* L_3 = __this->___runnerPromise;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_4 = ___0_result;
		NullCheck(L_3);
		InterfaceActionInvoker1< Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F >::Invoke(2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___hasValue;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_gshared_inline (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
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
		InterfaceActionInvoker1< Exception_t* >::Invoke(3, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_gshared_inline (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method) 
{
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
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_2 = ___0_result;
		__this->___result = L_2;
		goto IL_0028;
	}

IL_0019:
	{
		RuntimeObject* L_3 = __this->___runnerPromise;
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_4 = ___0_result;
		NullCheck(L_3);
		InterfaceActionInvoker1< Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 >::Invoke(2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___hasValue;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___hasValue;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_gshared_inline (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
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
		InterfaceActionInvoker1< Exception_t* >::Invoke(3, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_gshared_inline (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* __this, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___0_result, const RuntimeMethod* method) 
{
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
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_2 = ___0_result;
		__this->___result = L_2;
		goto IL_0028;
	}

IL_0019:
	{
		RuntimeObject* L_3 = __this->___runnerPromise;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_4 = ___0_result;
		NullCheck(L_3);
		InterfaceActionInvoker1< Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 >::Invoke(2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___hasValue;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_gshared_inline (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___hasValue;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_gshared_inline (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, const RuntimeMethod* method) 
{
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_gshared_inline (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
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
		InterfaceActionInvoker1< Exception_t* >::Invoke(3, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_gshared_inline (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* __this, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method) 
{
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
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_2 = ___0_result;
		__this->___result = L_2;
		goto IL_0028;
	}

IL_0019:
	{
		RuntimeObject* L_3 = __this->___runnerPromise;
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_4 = ___0_result;
		NullCheck(L_3);
		InterfaceActionInvoker1< Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB >::Invoke(2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_gshared_inline (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
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
		InterfaceActionInvoker1< Exception_t* >::Invoke(3, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_gshared_inline (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* __this, float ___0_result, const RuntimeMethod* method) 
{
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
		float L_2 = ___0_result;
		__this->___result = L_2;
		goto IL_0028;
	}

IL_0019:
	{
		RuntimeObject* L_3 = __this->___runnerPromise;
		float L_4 = ___0_result;
		NullCheck(L_3);
		InterfaceActionInvoker1< float >::Invoke(2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_gshared_inline (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* __this, const RuntimeMethod* method) 
{
	Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m65B703CDA0E48F294713CCCF06A7B5AF705D8E1F_inline((&L_0), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_gshared_inline (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* L_0 = (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1*)(&__this->___task);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_mD1C383B359BDB954321BC6C44DA1631270CC29A6_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_gshared_inline (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* L_0 = (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1*)(&__this->___task);
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
		UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* L_4 = (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1*)(&__this->___task);
		float L_5 = L_4->___result;
		V_2 = L_5;
		goto IL_0039;
	}

IL_0024:
	{
		RuntimeObject* L_6 = V_0;
		UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* L_7 = (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1*)(&__this->___task);
		int16_t L_8 = L_7->___token;
		NullCheck(L_6);
		float L_9;
		L_9 = InterfaceFuncInvoker1< float, int16_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_6, L_8);
		V_2 = L_9;
		goto IL_0039;
	}

IL_0039:
	{
		float L_10 = V_2;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 UniTask_1_GetAwaiter_m68E768B22932F4C553E8F96F1DEDC7361DC02133_gshared_inline (UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C* __this, const RuntimeMethod* method) 
{
	Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m6F9092F52BBF30A9F5F0E23DE3EC280EF9EB161F_inline((&L_0), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mFC4A614AA0B1C8D41A05840FAA981FAF10FC99C8_gshared_inline (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C* L_0 = (UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C*)(&__this->___task);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_m9A2BC9ECAC9AB86D3B937A70152799E4B8A45F04_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_gshared_inline (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	double V_2 = 0.0;
	{
		UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C* L_0 = (UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C*)(&__this->___task);
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
		UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C* L_4 = (UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C*)(&__this->___task);
		double L_5 = L_4->___result;
		V_2 = L_5;
		goto IL_0039;
	}

IL_0024:
	{
		RuntimeObject* L_6 = V_0;
		UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C* L_7 = (UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C*)(&__this->___task);
		int16_t L_8 = L_7->___token;
		NullCheck(L_6);
		double L_9;
		L_9 = InterfaceFuncInvoker1< double, int16_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_6, L_8);
		V_2 = L_9;
		goto IL_0039;
	}

IL_0039:
	{
		double L_10 = V_2;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 UniTask_1_GetAwaiter_mE4F348E45E23B27DC05E89090C2C334B99FECBD4_gshared_inline (UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3* __this, const RuntimeMethod* method) 
{
	Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m8581AFDBBB66C89C57A4AF21C6DA72286C674EEE_inline((&L_0), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mDD8356C2BFB8EBB175763FE2D92A4B0BEBDAEE94_gshared_inline (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3* L_0 = (UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3*)(&__this->___task);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_mD2B1B68F55469700BFCCE4B030BB08CDEFCFB5BE_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_gshared_inline (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3* L_0 = (UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3*)(&__this->___task);
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
		UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3* L_4 = (UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3*)(&__this->___task);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_5 = L_4->___result;
		V_2 = L_5;
		goto IL_0039;
	}

IL_0024:
	{
		RuntimeObject* L_6 = V_0;
		UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3* L_7 = (UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3*)(&__this->___task);
		int16_t L_8 = L_7->___token;
		NullCheck(L_6);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_9;
		L_9 = InterfaceFuncInvoker1< Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F, int16_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_6, L_8);
		V_2 = L_9;
		goto IL_0039;
	}

IL_0039:
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_10 = V_2;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_gshared_inline (UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05* __this, const RuntimeMethod* method) 
{
	Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m43ADCACEE034092BE0485AC2039932F41B068645_inline((&L_0), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_gshared_inline (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05* L_0 = (UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05*)(&__this->___task);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_mD3993C707FF463A5E5150B823D0F2C2F63D38AED_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_gshared_inline (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05* L_0 = (UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05*)(&__this->___task);
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
		UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05* L_4 = (UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05*)(&__this->___task);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_5 = L_4->___result;
		V_2 = L_5;
		goto IL_0039;
	}

IL_0024:
	{
		RuntimeObject* L_6 = V_0;
		UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05* L_7 = (UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05*)(&__this->___task);
		int16_t L_8 = L_7->___token;
		NullCheck(L_6);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_9;
		L_9 = InterfaceFuncInvoker1< Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, int16_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_6, L_8);
		V_2 = L_9;
		goto IL_0039;
	}

IL_0039:
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_10 = V_2;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_gshared_inline (UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C* __this, const RuntimeMethod* method) 
{
	Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m1A781E603FA4535B04661E93F415BD20AD7E562B_inline((&L_0), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_gshared_inline (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C* L_0 = (UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C*)(&__this->___task);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_m668DE5FADE457B216736782DC297E4C3B141BC19_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_gshared_inline (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C* L_0 = (UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C*)(&__this->___task);
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
		UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C* L_4 = (UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C*)(&__this->___task);
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_5 = L_4->___result;
		V_2 = L_5;
		goto IL_0039;
	}

IL_0024:
	{
		RuntimeObject* L_6 = V_0;
		UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C* L_7 = (UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C*)(&__this->___task);
		int16_t L_8 = L_7->___token;
		NullCheck(L_6);
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_9;
		L_9 = InterfaceFuncInvoker1< Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17, int16_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_6, L_8);
		V_2 = L_9;
		goto IL_0039;
	}

IL_0039:
	{
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_10 = V_2;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t8953594D03299DE782894F4A865CED79F2504266 UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_gshared_inline (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* __this, const RuntimeMethod* method) 
{
	Awaiter_t8953594D03299DE782894F4A865CED79F2504266 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m2D382159CB5D690EEEDB435E6183DBDBD9560CA3_inline((&L_0), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_gshared_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* L_0 = (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48*)(&__this->___task);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_m688D534E5DE535F713C9D2C84744BB51F95416F5_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_gshared_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* L_0 = (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48*)(&__this->___task);
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
		UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* L_4 = (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48*)(&__this->___task);
		int32_t L_5 = L_4->___result;
		V_2 = L_5;
		goto IL_0039;
	}

IL_0024:
	{
		RuntimeObject* L_6 = V_0;
		UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* L_7 = (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48*)(&__this->___task);
		int16_t L_8 = L_7->___token;
		NullCheck(L_6);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_6, L_8);
		V_2 = L_9;
		goto IL_0039;
	}

IL_0039:
	{
		int32_t L_10 = V_2;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_gshared_inline (UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46* __this, const RuntimeMethod* method) 
{
	Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_mB257E1F06754BE00907B9F223E1CED109BE0A9E9_inline((&L_0), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_gshared_inline (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46* L_0 = (UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46*)(&__this->___task);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_m5810EA6A8A912CF428FDABFDD39E978F898ABCF6_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_gshared_inline (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46* L_0 = (UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46*)(&__this->___task);
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
		UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46* L_4 = (UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46*)(&__this->___task);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_5 = L_4->___result;
		V_2 = L_5;
		goto IL_0039;
	}

IL_0024:
	{
		RuntimeObject* L_6 = V_0;
		UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46* L_7 = (UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46*)(&__this->___task);
		int16_t L_8 = L_7->___token;
		NullCheck(L_6);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_9;
		L_9 = InterfaceFuncInvoker1< Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75, int16_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_6, L_8);
		V_2 = L_9;
		goto IL_0039;
	}

IL_0039:
	{
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_10 = V_2;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_gshared_inline (UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E* __this, const RuntimeMethod* method) 
{
	Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m9D5EF23B6F3F4362E6DA714FE205E179615A6485_inline((&L_0), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_gshared_inline (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E* L_0 = (UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E*)(&__this->___task);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_m364E955D88F0ED41DD3142E30E5C1FC3992A4320_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_gshared_inline (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E* L_0 = (UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E*)(&__this->___task);
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
		UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E* L_4 = (UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E*)(&__this->___task);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_5 = L_4->___result;
		V_2 = L_5;
		goto IL_0039;
	}

IL_0024:
	{
		RuntimeObject* L_6 = V_0;
		UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E* L_7 = (UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E*)(&__this->___task);
		int16_t L_8 = L_7->___token;
		NullCheck(L_6);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_9;
		L_9 = InterfaceFuncInvoker1< Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165, int16_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_6, L_8);
		V_2 = L_9;
		goto IL_0039;
	}

IL_0039:
	{
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_10 = V_2;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_gshared_inline (UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F* __this, const RuntimeMethod* method) 
{
	Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m411324A17AA6E44DD7F24A60FF2A75F2E7F27F53_inline((&L_0), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_gshared_inline (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F* L_0 = (UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F*)(&__this->___task);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_m0DC9F6711B39ED08865F0CF67538D05129880C94_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_gshared_inline (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F* L_0 = (UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F*)(&__this->___task);
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
		UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F* L_4 = (UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F*)(&__this->___task);
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_5 = L_4->___result;
		V_2 = L_5;
		goto IL_0039;
	}

IL_0024:
	{
		RuntimeObject* L_6 = V_0;
		UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F* L_7 = (UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F*)(&__this->___task);
		int16_t L_8 = L_7->___token;
		NullCheck(L_6);
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_9;
		L_9 = InterfaceFuncInvoker1< Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB, int16_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_6, L_8);
		V_2 = L_9;
		goto IL_0039;
	}

IL_0039:
	{
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_10 = V_2;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E UniTask_1_GetAwaiter_m610A766CD8038A109B21E2F02CF093096F9226D7_gshared_inline (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* __this, const RuntimeMethod* method) 
{
	Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m2F2F413B4B8E320AC83D464DE19E5B81D8616185_inline((&L_0), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_gshared_inline (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* L_0 = (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72*)(&__this->___task);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_m621A3ED628D31F42C69A04584E93A8A02E381117_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_gshared_inline (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int64_t V_2 = 0;
	{
		UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* L_0 = (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72*)(&__this->___task);
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
		UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* L_4 = (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72*)(&__this->___task);
		int64_t L_5 = L_4->___result;
		V_2 = L_5;
		goto IL_0039;
	}

IL_0024:
	{
		RuntimeObject* L_6 = V_0;
		UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* L_7 = (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72*)(&__this->___task);
		int16_t L_8 = L_7->___token;
		NullCheck(L_6);
		int64_t L_9;
		L_9 = InterfaceFuncInvoker1< int64_t, int16_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_6, L_8);
		V_2 = L_9;
		goto IL_0039;
	}

IL_0039:
	{
		int64_t L_10 = V_2;
		return L_10;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m65B703CDA0E48F294713CCCF06A7B5AF705D8E1F_gshared_inline (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* __this, UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* ___0_task, const RuntimeMethod* method) 
{
	{
		UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* L_0 = ___0_task;
		UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1 L_1 = (*(UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1*)L_0);
		__this->___task = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task))->___source), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mD1C383B359BDB954321BC6C44DA1631270CC29A6_gshared_inline (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m6F9092F52BBF30A9F5F0E23DE3EC280EF9EB161F_gshared_inline (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88* __this, UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C* ___0_task, const RuntimeMethod* method) 
{
	{
		UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C* L_0 = ___0_task;
		UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C L_1 = (*(UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C*)L_0);
		__this->___task = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task))->___source), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m9A2BC9ECAC9AB86D3B937A70152799E4B8A45F04_gshared_inline (UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m8581AFDBBB66C89C57A4AF21C6DA72286C674EEE_gshared_inline (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8* __this, UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3* ___0_task, const RuntimeMethod* method) 
{
	{
		UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3* L_0 = ___0_task;
		UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3 L_1 = (*(UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3*)L_0);
		__this->___task = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task))->___source), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mD2B1B68F55469700BFCCE4B030BB08CDEFCFB5BE_gshared_inline (UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m43ADCACEE034092BE0485AC2039932F41B068645_gshared_inline (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9* __this, UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05* ___0_task, const RuntimeMethod* method) 
{
	{
		UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05* L_0 = ___0_task;
		UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05 L_1 = (*(UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05*)L_0);
		__this->___task = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task))->___source), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mD3993C707FF463A5E5150B823D0F2C2F63D38AED_gshared_inline (UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m1A781E603FA4535B04661E93F415BD20AD7E562B_gshared_inline (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB* __this, UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C* ___0_task, const RuntimeMethod* method) 
{
	{
		UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C* L_0 = ___0_task;
		UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C L_1 = (*(UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C*)L_0);
		__this->___task = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task))->___source), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m668DE5FADE457B216736782DC297E4C3B141BC19_gshared_inline (UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m2D382159CB5D690EEEDB435E6183DBDBD9560CA3_gshared_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* ___0_task, const RuntimeMethod* method) 
{
	{
		UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* L_0 = ___0_task;
		UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 L_1 = (*(UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48*)L_0);
		__this->___task = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task))->___source), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m688D534E5DE535F713C9D2C84744BB51F95416F5_gshared_inline (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mB257E1F06754BE00907B9F223E1CED109BE0A9E9_gshared_inline (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* __this, UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46* ___0_task, const RuntimeMethod* method) 
{
	{
		UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46* L_0 = ___0_task;
		UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46 L_1 = (*(UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46*)L_0);
		__this->___task = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task))->___source), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m5810EA6A8A912CF428FDABFDD39E978F898ABCF6_gshared_inline (UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m9D5EF23B6F3F4362E6DA714FE205E179615A6485_gshared_inline (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* __this, UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E* ___0_task, const RuntimeMethod* method) 
{
	{
		UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E* L_0 = ___0_task;
		UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E L_1 = (*(UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E*)L_0);
		__this->___task = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task))->___source), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m364E955D88F0ED41DD3142E30E5C1FC3992A4320_gshared_inline (UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m411324A17AA6E44DD7F24A60FF2A75F2E7F27F53_gshared_inline (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* __this, UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F* ___0_task, const RuntimeMethod* method) 
{
	{
		UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F* L_0 = ___0_task;
		UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F L_1 = (*(UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F*)L_0);
		__this->___task = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task))->___source), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m0DC9F6711B39ED08865F0CF67538D05129880C94_gshared_inline (UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m2F2F413B4B8E320AC83D464DE19E5B81D8616185_gshared_inline (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* __this, UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* ___0_task, const RuntimeMethod* method) 
{
	{
		UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* L_0 = ___0_task;
		UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72 L_1 = (*(UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72*)L_0);
		__this->___task = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task))->___source), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m621A3ED628D31F42C69A04584E93A8A02E381117_gshared_inline (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* __this, const RuntimeMethod* method) 
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
