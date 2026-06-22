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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
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
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
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

struct U3CMinAwaitAsyncU3Ed__10_1_t59820433093B8B93E0CD237A3DCBF00D86E675FB;
struct U3CMinAwaitAsyncU3Ed__14_1_tF53AB5FD4C2AC74717B795E0FE57445D1EF5BC18;
struct U3CMinAwaitAsyncU3Ed__18_1_tF6608C6A8D7CBAA934B58E0404F9528434C42BEC;
struct U3CMinAwaitAsyncU3Ed__22_1_t1E9C108B86F55D9612796A1B182EB7337EF45A20;
struct U3CMinAwaitAsyncU3Ed__26_1_t32B9C5BC573E86FF0E3D6AE2ADDA0A33F17E1959;
struct U3CMinAwaitAsyncU3Ed__2_2_tC4C04F1FA6926939951BAE8BE0B35F525D3CBF06;
struct U3CMinAwaitAsyncU3Ed__30_1_t5A3847356FEB27C6D92F487EE95082E800D96591;
struct U3CMinAwaitAsyncU3Ed__34_1_t68A8606EE27F3962E5D68168CF31BC0D359DB041;
struct U3CMinAwaitAsyncU3Ed__38_1_t0ABAF5F704BB15DC51A1D769D504B631F649F927;
struct U3CMinAwaitAsyncU3Ed__42_1_tC25E8DC6D95DDD60994DF050EE60BEAF598A5CD4;
struct U3CMinAwaitAsyncU3Ed__6_1_t0723AEB6AF5877867C68F89565108EE947DA35FB;
struct U3CMinAwaitWithCancellationAsyncU3Ed__11_1_t87BAE1F5754DF87CD354C8D64FA9AFCAA4A72FCA;
struct U3CMinAwaitWithCancellationAsyncU3Ed__15_1_t671839B639CE41E851CEA13C3E4BF0266B468F90;
struct U3CMinAwaitWithCancellationAsyncU3Ed__19_1_tFD68B66ACCC41046F7697071B6978A6140527418;
struct U3CMinAwaitWithCancellationAsyncU3Ed__23_1_t56364C68BFED293EA7A45B37CD7056C742942F89;
struct U3CMinAwaitWithCancellationAsyncU3Ed__27_1_tA45E1E004A2DB3D5167CEE8595F6FC1BEB82C361;
struct U3CMinAwaitWithCancellationAsyncU3Ed__31_1_t1EE73BF3740F1CDA20ACB71BFF7968ABDF9CB05B;
struct U3CMinAwaitWithCancellationAsyncU3Ed__35_1_tDA26EBC4AC4C6FCEC8955255F2D13374C1B67B9F;
struct U3CMinAwaitWithCancellationAsyncU3Ed__39_1_tCC06919BA4B305801CB9B222385A3E035B22D81C;
struct U3CMinAwaitWithCancellationAsyncU3Ed__3_2_t5C25FEB674967FD9889E050F607D9DBBC7246C37;
struct U3CMinAwaitWithCancellationAsyncU3Ed__43_1_t388FF276C28AACAF91B54EE3DFF3016D0690C0CF;
struct U3CMinAwaitWithCancellationAsyncU3Ed__7_1_tD013D28F83ADDE9E45AEE1903E28D2EFEF7602FC;
struct U3CMoveNextAsyncU3Ed__7_t5C3858D5A215C27F7ACD70F743712EFAC46E1002;
struct U3CMoveNextAsyncU3Ed__7_t018B4EF6E63587BA5822F2E50A302D4708BEE18B;
struct U3CMoveNextAsyncU3Ed__9_tD4F96CC8D5992FC80B36C4997D089E2FA5FAA70E;
struct U3COfTypeIteratorU3Ed__97_1_tA58F5D2CD323EE897A20F9D68301309FDB3598BA;
struct U3CPrependIteratorU3Ed__63_1_t3F7B129C2B64E42C7D112B951CFC32BF1A4ABF7D;
struct U3CReadAsyncCoreU3Ed__5_tFC66DFEB527BFA020AB057E4D877130EC75A2E86;
struct U3CRepeatIteratorU3Ed__117_1_t8553BD45B7127819B147EC6E07C693639BA931D3;
struct U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC;
struct U3CReverseIteratorU3Ed__79_1_t654E1731541179CF0738EB017E50AF14F2F8561C;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct ChannelReader_1_t2ECD38FFB796290865D3F1EAC478976ECBD61318;
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB;
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
struct Func_2_t041ABB3F33302FF5B428FF832CE110343F4DA4C6;
struct Func_2_tEBD22D2F4376CEDF9152BDE05B6E363699F0C7E1;
struct Func_2_tCD782F33543995850D4A4AF7569D83504640F79F;
struct Func_2_t898AEF8B0AC8B5CB054F91316F69A4739DB2E5B6;
struct Func_2_t9F80A31065CD628F063DA0D192A111706F695666;
struct Func_2_tD6766C7D6227AC2A45F7EDFC827BDFC58C8EFE78;
struct Func_2_tF452F3FF30306E919291E498D051B5F208EB38CF;
struct Func_2_t6561E0DBB0FBFCB8DBFA46F392A86C31706164F5;
struct Func_2_t04742C32F6BEF8B1199EACA5BD7F68C041603B6D;
struct Func_2_t844387A4F32860587989B5D1B9F3950D6D5901DE;
struct Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2;
struct Func_3_t428A771ED20C241CDDC6BDF17284D499B16CBD70;
struct Func_3_tD24255148664E4908FBCB566B787F36A4988A2BB;
struct Func_3_tA0DEFAEF785E5E0D32E2CABA4CBDB7F9D34C2B8D;
struct Func_3_t4111B7EAAEBCF4004223B4E554711FE862E5C3B2;
struct Func_3_t5604379C942DED2B342DEED029BC1AB35C5A06A1;
struct Func_3_tE135AFB66CDB73C25CDE9CDD97913EE0CF6337D7;
struct Func_3_tB356387A25DA85D9F4DDAAEEFD39A96B3F81FA95;
struct Func_3_t4B0BED2CC5C1B3C74670633A89F91C13C1A0F1E4;
struct Func_3_t76BD268388DCE8B514D513440272B79CC88C6413;
struct Func_3_t79F461272893123C05C047A343D70B9B775827E4;
struct Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IStateMachineRunnerPromise_1_t8D57C4F4548F3BCD478D68C0B1214D4BF62AA68D;
struct IStateMachineRunnerPromise_1_t51E154A16BAD95B7D398B5F0702C3E66265C53DA;
struct IStateMachineRunnerPromise_1_tBE2C23E7E2B62C56C552514DE41331D016E88894;
struct IStateMachineRunnerPromise_1_t2CCBC9102ABF89E60F08B479B9A9F8E564FDCE5B;
struct IStateMachineRunnerPromise_1_t1AB0B5E2CA50004E9184B2F5382B9C646CD88F94;
struct IStateMachineRunnerPromise_1_tE89ECD2876CAE5961DE51F0E207D9EE40476C855;
struct IStateMachineRunnerPromise_1_t9061D15A609C242C57AE7E2186438B3A765049A0;
struct IStateMachineRunnerPromise_1_t60C36DF27100A1AAC871929239A758A920192D30;
struct IStateMachineRunnerPromise_1_t4D71EE585F49FBECBCB54253A802F3C93921778B;
struct IStateMachineRunnerPromise_1_tFE8A013B1056925F687501E7EA6E1D49D1DE4BE2;
struct IStateMachineRunnerPromise_1_t13A438173E94750804DBD5134EB865935FADCFD8;
struct IStateMachineRunnerPromise_1_t33359314377828B79D5AB55278350F65F2237DD9;
struct IUniTaskAsyncEnumerable_1_tB465D2725680B21CF3074178AECADD1D24C24A74;
struct IUniTaskAsyncEnumerator_1_t256C7409E6B13FF3224A57D2DD1A4D52A2C40092;
struct IUniTaskSource_1_t485459C6F6CB25D26E56105B8D0749F0FAD63B61;
struct IUniTaskSource_1_tCE4346B1A4E6A33744233A2262F33E59C6306CA1;
struct IUniTaskSource_1_tED8322E8A8E850EEDF72FF9B9F242963B2ECE7FE;
struct IUniTaskSource_1_tE3D8C7FB2D80191B4F79AF51153AD33F56C16C37;
struct IUniTaskSource_1_t5F2BFA96825F2DFE4BA08A68BC159258E438D103;
struct IUniTaskSource_1_tD2881AEFFB4C46DFAB665B8E6A2D8B0957ECBACC;
struct IUniTaskSource_1_tB6B218F9BB467453A6CBAEE053820D3B3E8F891C;
struct IUniTaskSource_1_t43ECD5543FAA73E407F28F30300FAA39B7D954B0;
struct IUniTaskSource_1_t7B60863D376A1004EF4553185A8DC483A70F720C;
struct IUniTaskSource_1_t8F97352CA996D0781DB009E630AB2143DE1614D3;
struct IUniTaskSource_1_tE897B7736A4F7A6923CE32E4D43E3506188EE795;
struct IUniTaskSource_1_tD745CD56EC6E5CB710B56755B2E0F56C83FD8F2F;
struct IUniTaskSource_1_tA27C284FF17E3AAB5B5D07A7E4DE207B56F764AB;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
struct TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D;
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9;
struct _Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC;
struct _ToUniTaskAsyncEnumerableTask_t96E01945EE26D2019409887F85016296E285563B;
struct _ToUniTaskAsyncEnumerableUniTask_tB862AC47790A98CF42A70910BC9237C8764CF9E5;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct ChannelClosedException_tC3080D80CFCAF35852566A33108F4533DB025F0C;
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Exception_t;
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MethodInfo_t;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
struct String_t;
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChannelClosedException_tC3080D80CFCAF35852566A33108F4533DB025F0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralF26C76B1728491A2D7039EBFC35CFDE0D352C43A;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m668B0B683F2B4B7005D076DE9400F32B1702673B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_mAEE718F60708F1A917C5379F94447C8090707CE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_mE8C5BA18D2449D6BD546630CE70DE315F5F91FCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m5E0E26E389BF8D15A8935BC741FAADEFF1617158_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m79D800118F9BCD740C939B134E630A8AB93AA606_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_RuntimeMethod_var;
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
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
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

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3COfTypeIteratorU3Ed__97_1_tA58F5D2CD323EE897A20F9D68301309FDB3598BA : public RuntimeObject {};
struct U3CPrependIteratorU3Ed__63_1_t3F7B129C2B64E42C7D112B951CFC32BF1A4ABF7D : public RuntimeObject {};
struct U3CRepeatIteratorU3Ed__117_1_t8553BD45B7127819B147EC6E07C693639BA931D3 : public RuntimeObject {};
struct ChannelReader_1_t2ECD38FFB796290865D3F1EAC478976ECBD61318  : public RuntimeObject
{
};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB  : public RuntimeObject
{
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
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	int32_t ___m_taskId;
	Delegate_t* ___m_action;
	RuntimeObject* ___m_stateObject;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent;
	int32_t ___m_stateFlags;
	RuntimeObject* ___m_continuationObject;
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties;
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
struct AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E 
{
	RuntimeObject* ___runnerPromise;
	Exception_t* ___ex;
	int32_t ___result;
	RuntimeObject* ___debuggingId;
};
struct AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6 
{
	RuntimeObject* ___runnerPromise;
	Exception_t* ___ex;
	int64_t ___result;
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
struct Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___items;
	int32_t ___count;
};
struct Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___items;
	int32_t ___count;
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
struct TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___m_task;
};
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572 {};
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
struct UniTask_1_tF1161044B03B89C690A1FB77CF673B0EDEE8B5BD 
{
	RuntimeObject* ___source;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___result;
	int16_t ___token;
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
struct U3CMoveNextAsyncU3Ed__7_t5C3858D5A215C27F7ACD70F743712EFAC46E1002 : public RuntimeObject {};
struct U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	int32_t ___U3CU3El__initialThreadId;
	RuntimeObject* ___source;
	RuntimeObject* ___U3CU3E3__source;
	Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59 ___U3CbufferU3E5__2;
	int32_t ___U3CiU3E5__3;
};
struct U3CReverseIteratorU3Ed__79_1_t654E1731541179CF0738EB017E50AF14F2F8561C : public RuntimeObject {};
struct AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438 
{
	RuntimeObject* ___runnerPromise;
	Exception_t* ___ex;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___result;
	RuntimeObject* ___debuggingId;
};
struct AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B 
{
	RuntimeObject* ___runnerPromise;
	Exception_t* ___ex;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___result;
	RuntimeObject* ___debuggingId;
};
struct AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED 
{
	RuntimeObject* ___runnerPromise;
	Exception_t* ___ex;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___result;
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
struct Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C 
{
	UniTask_1_tF1161044B03B89C690A1FB77CF673B0EDEE8B5BD ___task;
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
struct _ToUniTaskAsyncEnumerableTask_t96E01945EE26D2019409887F85016296E285563B : public RuntimeObject {};
struct _ToUniTaskAsyncEnumerableUniTask_tB862AC47790A98CF42A70910BC9237C8764CF9E5 : public RuntimeObject {};
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
struct U3CMinAwaitAsyncU3Ed__10_1_t59820433093B8B93E0CD237A3DCBF00D86E675FB  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_t04742C32F6BEF8B1199EACA5BD7F68C041603B6D* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	int64_t ___U3CvalueU3E5__1;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3Es__3;
	int32_t ___U3CU3Es__4;
	int64_t ___U3CU3Es__5;
	bool ___U3CU3Es__6;
	int64_t ___U3CxU3E5__7;
	int64_t ___U3CU3Es__8;
	bool ___U3CU3Es__9;
	Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3;
};
struct U3CMinAwaitAsyncU3Ed__14_1_tF53AB5FD4C2AC74717B795E0FE57445D1EF5BC18  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_t844387A4F32860587989B5D1B9F3950D6D5901DE* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	float ___U3CvalueU3E5__1;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3Es__3;
	int32_t ___U3CU3Es__4;
	float ___U3CU3Es__5;
	bool ___U3CU3Es__6;
	float ___U3CxU3E5__7;
	float ___U3CU3Es__8;
	bool ___U3CU3Es__9;
	Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3;
};
struct U3CMinAwaitAsyncU3Ed__18_1_tF6608C6A8D7CBAA934B58E0404F9528434C42BEC  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_tF452F3FF30306E919291E498D051B5F208EB38CF* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	double ___U3CvalueU3E5__1;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3Es__3;
	int32_t ___U3CU3Es__4;
	double ___U3CU3Es__5;
	bool ___U3CU3Es__6;
	double ___U3CxU3E5__7;
	double ___U3CU3Es__8;
	bool ___U3CU3Es__9;
	Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3;
};
struct U3CMinAwaitAsyncU3Ed__2_2_tC4C04F1FA6926939951BAE8BE0B35F525D3CBF06 : public RuntimeObject {};
struct U3CMinAwaitAsyncU3Ed__6_1_t0723AEB6AF5877867C68F89565108EE947DA35FB  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_t6561E0DBB0FBFCB8DBFA46F392A86C31706164F5* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	int32_t ___U3CvalueU3E5__1;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3Es__3;
	int32_t ___U3CU3Es__4;
	int32_t ___U3CU3Es__5;
	bool ___U3CU3Es__6;
	int32_t ___U3CxU3E5__7;
	int32_t ___U3CU3Es__8;
	bool ___U3CU3Es__9;
	Awaiter_t8953594D03299DE782894F4A865CED79F2504266 ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3;
};
struct U3CMinAwaitWithCancellationAsyncU3Ed__11_1_t87BAE1F5754DF87CD354C8D64FA9AFCAA4A72FCA  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_3_t76BD268388DCE8B514D513440272B79CC88C6413* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	int64_t ___U3CvalueU3E5__1;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3Es__3;
	int32_t ___U3CU3Es__4;
	int64_t ___U3CU3Es__5;
	bool ___U3CU3Es__6;
	int64_t ___U3CxU3E5__7;
	int64_t ___U3CU3Es__8;
	bool ___U3CU3Es__9;
	Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3;
};
struct U3CMinAwaitWithCancellationAsyncU3Ed__15_1_t671839B639CE41E851CEA13C3E4BF0266B468F90  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_3_t79F461272893123C05C047A343D70B9B775827E4* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	float ___U3CvalueU3E5__1;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3Es__3;
	int32_t ___U3CU3Es__4;
	float ___U3CU3Es__5;
	bool ___U3CU3Es__6;
	float ___U3CxU3E5__7;
	float ___U3CU3Es__8;
	bool ___U3CU3Es__9;
	Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3;
};
struct U3CMinAwaitWithCancellationAsyncU3Ed__19_1_tFD68B66ACCC41046F7697071B6978A6140527418  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_3_tB356387A25DA85D9F4DDAAEEFD39A96B3F81FA95* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	double ___U3CvalueU3E5__1;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3Es__3;
	int32_t ___U3CU3Es__4;
	double ___U3CU3Es__5;
	bool ___U3CU3Es__6;
	double ___U3CxU3E5__7;
	double ___U3CU3Es__8;
	bool ___U3CU3Es__9;
	Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3;
};
struct U3CMinAwaitWithCancellationAsyncU3Ed__3_2_t5C25FEB674967FD9889E050F607D9DBBC7246C37 : public RuntimeObject {};
struct U3CMinAwaitWithCancellationAsyncU3Ed__7_1_tD013D28F83ADDE9E45AEE1903E28D2EFEF7602FC  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_3_t4B0BED2CC5C1B3C74670633A89F91C13C1A0F1E4* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	int32_t ___U3CvalueU3E5__1;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3Es__3;
	int32_t ___U3CU3Es__4;
	int32_t ___U3CU3Es__5;
	bool ___U3CU3Es__6;
	int32_t ___U3CxU3E5__7;
	int32_t ___U3CU3Es__8;
	bool ___U3CU3Es__9;
	Awaiter_t8953594D03299DE782894F4A865CED79F2504266 ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3;
};
struct U3CMoveNextAsyncU3Ed__7_t018B4EF6E63587BA5822F2E50A302D4708BEE18B : public RuntimeObject {};
struct U3CMoveNextAsyncU3Ed__9_tD4F96CC8D5992FC80B36C4997D089E2FA5FAA70E  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 ___U3CU3Et__builder;
	_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC* ___U3CU3E4__this;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___U3CU3Es__1;
	Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C ___U3CU3Eu__1;
};
struct U3CReadAsyncCoreU3Ed__5_tFC66DFEB527BFA020AB057E4D877130EC75A2E86 : public RuntimeObject {};
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
struct _Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
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
struct U3CMinAwaitAsyncU3Ed__22_1_t1E9C108B86F55D9612796A1B182EB7337EF45A20  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_tD6766C7D6227AC2A45F7EDFC827BDFC58C8EFE78* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CvalueU3E5__1;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3Es__3;
	int32_t ___U3CU3Es__4;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CU3Es__5;
	bool ___U3CU3Es__6;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CxU3E5__7;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CU3Es__8;
	bool ___U3CU3Es__9;
	Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3;
};
struct U3CMinAwaitAsyncU3Ed__26_1_t32B9C5BC573E86FF0E3D6AE2ADDA0A33F17E1959  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_tCD782F33543995850D4A4AF7569D83504640F79F* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CvalueU3E5__1;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3Es__3;
	int32_t ___U3CU3Es__4;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CU3Es__5;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CU3Es__6;
	bool ___U3CU3Es__7;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CxU3E5__8;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CU3Es__9;
	bool ___U3CU3Es__10;
	Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3;
};
struct U3CMinAwaitAsyncU3Ed__30_1_t5A3847356FEB27C6D92F487EE95082E800D96591  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_t898AEF8B0AC8B5CB054F91316F69A4739DB2E5B6* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CvalueU3E5__1;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3Es__3;
	int32_t ___U3CU3Es__4;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CU3Es__5;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CU3Es__6;
	bool ___U3CU3Es__7;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CxU3E5__8;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CU3Es__9;
	bool ___U3CU3Es__10;
	Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3;
};
struct U3CMinAwaitAsyncU3Ed__34_1_t68A8606EE27F3962E5D68168CF31BC0D359DB041  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_t9F80A31065CD628F063DA0D192A111706F695666* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CvalueU3E5__1;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3Es__3;
	int32_t ___U3CU3Es__4;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CU3Es__5;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CU3Es__6;
	bool ___U3CU3Es__7;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CxU3E5__8;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CU3Es__9;
	bool ___U3CU3Es__10;
	Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3;
};
struct U3CMinAwaitAsyncU3Ed__38_1_t0ABAF5F704BB15DC51A1D769D504B631F649F927  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_tEBD22D2F4376CEDF9152BDE05B6E363699F0C7E1* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CvalueU3E5__1;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3Es__3;
	int32_t ___U3CU3Es__4;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CU3Es__5;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CU3Es__6;
	bool ___U3CU3Es__7;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CxU3E5__8;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CU3Es__9;
	bool ___U3CU3Es__10;
	Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3;
};
struct U3CMinAwaitWithCancellationAsyncU3Ed__23_1_t56364C68BFED293EA7A45B37CD7056C742942F89  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_3_tE135AFB66CDB73C25CDE9CDD97913EE0CF6337D7* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CvalueU3E5__1;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3Es__3;
	int32_t ___U3CU3Es__4;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CU3Es__5;
	bool ___U3CU3Es__6;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CxU3E5__7;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CU3Es__8;
	bool ___U3CU3Es__9;
	Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3;
};
struct U3CMinAwaitWithCancellationAsyncU3Ed__27_1_tA45E1E004A2DB3D5167CEE8595F6FC1BEB82C361  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_3_tA0DEFAEF785E5E0D32E2CABA4CBDB7F9D34C2B8D* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CvalueU3E5__1;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3Es__3;
	int32_t ___U3CU3Es__4;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CU3Es__5;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CU3Es__6;
	bool ___U3CU3Es__7;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CxU3E5__8;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CU3Es__9;
	bool ___U3CU3Es__10;
	Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3;
};
struct U3CMinAwaitWithCancellationAsyncU3Ed__31_1_t1EE73BF3740F1CDA20ACB71BFF7968ABDF9CB05B  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_3_t4111B7EAAEBCF4004223B4E554711FE862E5C3B2* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CvalueU3E5__1;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3Es__3;
	int32_t ___U3CU3Es__4;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CU3Es__5;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CU3Es__6;
	bool ___U3CU3Es__7;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CxU3E5__8;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CU3Es__9;
	bool ___U3CU3Es__10;
	Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3;
};
struct U3CMinAwaitWithCancellationAsyncU3Ed__35_1_tDA26EBC4AC4C6FCEC8955255F2D13374C1B67B9F  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_3_t5604379C942DED2B342DEED029BC1AB35C5A06A1* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CvalueU3E5__1;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3Es__3;
	int32_t ___U3CU3Es__4;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CU3Es__5;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CU3Es__6;
	bool ___U3CU3Es__7;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CxU3E5__8;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CU3Es__9;
	bool ___U3CU3Es__10;
	Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3;
};
struct U3CMinAwaitWithCancellationAsyncU3Ed__39_1_tCC06919BA4B305801CB9B222385A3E035B22D81C  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_3_tD24255148664E4908FBCB566B787F36A4988A2BB* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CvalueU3E5__1;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3Es__3;
	int32_t ___U3CU3Es__4;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CU3Es__5;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CU3Es__6;
	bool ___U3CU3Es__7;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CxU3E5__8;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CU3Es__9;
	bool ___U3CU3Es__10;
	Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3;
};
struct Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 
{
	UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F ___task;
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
struct Func_3_t428A771ED20C241CDDC6BDF17284D499B16CBD70  : public MulticastDelegate_t
{
};
struct Func_3_tD24255148664E4908FBCB566B787F36A4988A2BB  : public MulticastDelegate_t
{
};
struct Func_3_tA0DEFAEF785E5E0D32E2CABA4CBDB7F9D34C2B8D  : public MulticastDelegate_t
{
};
struct Func_3_t4111B7EAAEBCF4004223B4E554711FE862E5C3B2  : public MulticastDelegate_t
{
};
struct Func_3_t5604379C942DED2B342DEED029BC1AB35C5A06A1  : public MulticastDelegate_t
{
};
struct Func_3_tE135AFB66CDB73C25CDE9CDD97913EE0CF6337D7  : public MulticastDelegate_t
{
};
struct Func_3_tB356387A25DA85D9F4DDAAEEFD39A96B3F81FA95  : public MulticastDelegate_t
{
};
struct Func_3_t4B0BED2CC5C1B3C74670633A89F91C13C1A0F1E4  : public MulticastDelegate_t
{
};
struct Func_3_t76BD268388DCE8B514D513440272B79CC88C6413  : public MulticastDelegate_t
{
};
struct Func_3_t79F461272893123C05C047A343D70B9B775827E4  : public MulticastDelegate_t
{
};
struct Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E  : public MulticastDelegate_t
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct U3CMinAwaitAsyncU3Ed__42_1_tC25E8DC6D95DDD60994DF050EE60BEAF598A5CD4  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_t041ABB3F33302FF5B428FF832CE110343F4DA4C6* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CvalueU3E5__1;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3Es__3;
	int32_t ___U3CU3Es__4;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CU3Es__5;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CU3Es__6;
	bool ___U3CU3Es__7;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CxU3E5__8;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CU3Es__9;
	bool ___U3CU3Es__10;
	Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3;
};
struct U3CMinAwaitWithCancellationAsyncU3Ed__43_1_t388FF276C28AACAF91B54EE3DFF3016D0690C0CF  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_3_t428A771ED20C241CDDC6BDF17284D499B16CBD70* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CvalueU3E5__1;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3Es__3;
	int32_t ___U3CU3Es__4;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CU3Es__5;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CU3Es__6;
	bool ___U3CU3Es__7;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CxU3E5__8;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CU3Es__9;
	bool ___U3CU3Es__10;
	Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3;
};
struct ChannelClosedException_tC3080D80CFCAF35852566A33108F4533DB025F0C  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB_StaticFields
{
	Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* ___defaultComparer;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9_StaticFields
{
	TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D* ___s_defaultFactory;
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


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E UniTask_1_GetAwaiter_m610A766CD8038A109B21E2F02CF093096F9226D7_gshared_inline (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_gshared_inline (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_gshared_inline (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_mAEE718F60708F1A917C5379F94447C8090707CE7_gshared_inline (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_gshared_inline (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* __this, int64_t ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_gshared_inline (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_gshared_inline (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_gshared_inline (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_gshared_inline (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_gshared_inline (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* __this, float ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 UniTask_1_GetAwaiter_m68E768B22932F4C553E8F96F1DEDC7361DC02133_gshared_inline (UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mFC4A614AA0B1C8D41A05840FAA981FAF10FC99C8_gshared_inline (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_gshared_inline (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_gshared_inline (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_gshared_inline (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* __this, double ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 UniTask_1_GetAwaiter_mE4F348E45E23B27DC05E89090C2C334B99FECBD4_gshared_inline (UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mDD8356C2BFB8EBB175763FE2D92A4B0BEBDAEE94_gshared_inline (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_gshared_inline (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_gshared_inline (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_gshared_inline (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_gshared_inline (UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_gshared_inline (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_gshared_inline (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_mE8C5BA18D2449D6BD546630CE70DE315F5F91FCE_gshared_inline (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m5E0E26E389BF8D15A8935BC741FAADEFF1617158_gshared_inline (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_gshared_inline (UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_gshared_inline (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_gshared_inline (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m668B0B683F2B4B7005D076DE9400F32B1702673B_gshared_inline (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m79D800118F9BCD740C939B134E630A8AB93AA606_gshared_inline (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* __this, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_gshared_inline (UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_gshared_inline (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_gshared_inline (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_gshared_inline (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_gshared_inline (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* __this, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_gshared_inline (UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_gshared_inline (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_gshared_inline (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_gshared_inline (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_gshared_inline (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_gshared_inline (UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_gshared_inline (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_gshared_inline (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_gshared_inline (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_gshared_inline (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_gshared_inline (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_gshared_inline (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* __this, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t8953594D03299DE782894F4A865CED79F2504266 UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_gshared_inline (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_gshared_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_gshared_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_gshared_inline (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_gshared_inline (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* __this, int32_t ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_gshared_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_gshared_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, bool ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_1__ctor_m072DE84AEC969582EB5760D4835747F9DC0C02AF_gshared (Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReverseIteratorU3Ed__79_1__ctor_m685BB5646EEC473221EEEEB5198F7F021741E8FE_gshared (U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReverseIteratorU3Ed__79_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m11F12AD959FE78FE9411817870AE1DF7BE612689_gshared (U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_1__ctor_m55137EEF7AF9E0883A438776A066DA5520FFDE49_gshared (Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m2F2F413B4B8E320AC83D464DE19E5B81D8616185_gshared_inline (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* __this, UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m621A3ED628D31F42C69A04584E93A8A02E381117_gshared_inline (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* __this, const RuntimeMethod* method) ;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mB257E1F06754BE00907B9F223E1CED109BE0A9E9_gshared_inline (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* __this, UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m5810EA6A8A912CF428FDABFDD39E978F898ABCF6_gshared_inline (UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m9D5EF23B6F3F4362E6DA714FE205E179615A6485_gshared_inline (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* __this, UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m364E955D88F0ED41DD3142E30E5C1FC3992A4320_gshared_inline (UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m411324A17AA6E44DD7F24A60FF2A75F2E7F27F53_gshared_inline (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* __this, UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m0DC9F6711B39ED08865F0CF67538D05129880C94_gshared_inline (UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m2D382159CB5D690EEEDB435E6183DBDBD9560CA3_gshared_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m688D534E5DE535F713C9D2C84744BB51F95416F5_gshared_inline (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803 (Exception_t* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330 (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) ;
inline void AsyncUniTaskMethodBuilder_1_SetException_mAEE718F60708F1A917C5379F94447C8090707CE7_inline (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_mAEE718F60708F1A917C5379F94447C8090707CE7_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_inline (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* __this, int64_t ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, int64_t, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_gshared_inline)(__this, ___0_result, method);
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
inline void AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_inline (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_inline (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* __this, float ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, float, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_gshared_inline)(__this, ___0_result, method);
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
inline void AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_inline (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_inline (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* __this, double ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, double, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_gshared_inline)(__this, ___0_result, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Decimal_op_GreaterThan_m549F09BF0C53D8611E550CA9CCB53543D6DAF717 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_d1, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___1_d2, const RuntimeMethod* method) ;
inline void AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_inline (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_inline (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_gshared_inline)(__this, ___0_result, method);
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
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
inline int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline)(__this, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetException_mE8C5BA18D2449D6BD546630CE70DE315F5F91FCE_inline (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_mE8C5BA18D2449D6BD546630CE70DE315F5F91FCE_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_m5E0E26E389BF8D15A8935BC741FAADEFF1617158_inline (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m5E0E26E389BF8D15A8935BC741FAADEFF1617158_gshared_inline)(__this, ___0_result, method);
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
inline bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, const RuntimeMethod*))Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline)(__this, method);
}
inline int64_t Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_gshared_inline)(__this, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetException_m668B0B683F2B4B7005D076DE9400F32B1702673B_inline (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m668B0B683F2B4B7005D076DE9400F32B1702673B_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_m79D800118F9BCD740C939B134E630A8AB93AA606_inline (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* __this, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m79D800118F9BCD740C939B134E630A8AB93AA606_gshared_inline)(__this, ___0_result, method);
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
inline bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline)(__this, method);
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
inline bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline)(__this, method);
}
inline double Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  double (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_gshared_inline)(__this, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_inline (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_inline (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_gshared_inline)(__this, ___0_result, method);
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
inline bool Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*, const RuntimeMethod*))Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_gshared_inline)(__this, method);
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
inline void AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_inline (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_inline (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* __this, int32_t ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, int32_t, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_gshared_inline)(__this, ___0_result, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelClosedException__ctor_m96AAB202638FADBEE698B834F10976A0690C7D94 (ChannelClosedException_tC3080D80CFCAF35852566A33108F4533DB025F0C* __this, const RuntimeMethod* method) ;
inline void Buffer_1__ctor_m072DE84AEC969582EB5760D4835747F9DC0C02AF (Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59* __this, RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59*, RuntimeObject*, const RuntimeMethod*))Buffer_1__ctor_m072DE84AEC969582EB5760D4835747F9DC0C02AF_gshared)(__this, ___0_source, method);
}
inline void U3CReverseIteratorU3Ed__79_1__ctor_m685BB5646EEC473221EEEEB5198F7F021741E8FE (U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC*, int32_t, const RuntimeMethod*))U3CReverseIteratorU3Ed__79_1__ctor_m685BB5646EEC473221EEEEB5198F7F021741E8FE_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline RuntimeObject* U3CReverseIteratorU3Ed__79_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m11F12AD959FE78FE9411817870AE1DF7BE612689 (U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC*, const RuntimeMethod*))U3CReverseIteratorU3Ed__79_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m11F12AD959FE78FE9411817870AE1DF7BE612689_gshared)(__this, method);
}
inline void Buffer_1__ctor_m55137EEF7AF9E0883A438776A066DA5520FFDE49 (Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697* __this, RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697*, RuntimeObject*, const RuntimeMethod*))Buffer_1__ctor_m55137EEF7AF9E0883A438776A066DA5520FFDE49_gshared)(__this, ___0_source, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___0_status, const RuntimeMethod* method) ;
inline void Awaiter__ctor_m2F2F413B4B8E320AC83D464DE19E5B81D8616185_inline (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* __this, UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E*, UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72*, const RuntimeMethod*))Awaiter__ctor_m2F2F413B4B8E320AC83D464DE19E5B81D8616185_gshared_inline)(__this, ___0_task, method);
}
inline int32_t UniTask_1_get_Status_m621A3ED628D31F42C69A04584E93A8A02E381117_inline (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72*, const RuntimeMethod*))UniTask_1_get_Status_m621A3ED628D31F42C69A04584E93A8A02E381117_gshared_inline)(__this, method);
}
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
inline void Awaiter__ctor_m2D382159CB5D690EEEDB435E6183DBDBD9560CA3_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t8953594D03299DE782894F4A865CED79F2504266*, UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48*, const RuntimeMethod*))Awaiter__ctor_m2D382159CB5D690EEEDB435E6183DBDBD9560CA3_gshared_inline)(__this, ___0_task, method);
}
inline int32_t UniTask_1_get_Status_m688D534E5DE535F713C9D2C84744BB51F95416F5_inline (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48*, const RuntimeMethod*))UniTask_1_get_Status_m688D534E5DE535F713C9D2C84744BB51F95416F5_gshared_inline)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__10_1__ctor_mA4983FEB7E11E8C7D531B2B57D5C57E62103DEAD_gshared (U3CMinAwaitAsyncU3Ed__10_1_t59820433093B8B93E0CD237A3DCBF00D86E675FB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__10_1_MoveNext_m8DA08C799369608D1F0D8B992915A9FFB3CBF491_gshared (U3CMinAwaitAsyncU3Ed__10_1_t59820433093B8B93E0CD237A3DCBF00D86E675FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_RuntimeMethod_var);
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
	const uint32_t SizeOf_TSource_t3F326E34679285F513B17800F91809488CC8CCA9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_t3F326E34679285F513B17800F91809488CC8CCA9);
	const Il2CppFullySharedGenericAny L_37 = L_9;
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CMinAwaitAsyncU3Ed__10_1_t59820433093B8B93E0CD237A3DCBF00D86E675FB* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_11;
	memset((&V_11), 0, sizeof(V_11));
	RuntimeObject* V_12 = NULL;
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Exception_t* V_16 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0048_1;
		}

IL_0015_1:
		{
			goto IL_0325_1;
		}

IL_001a_1:
		{
			__this->___U3CvalueU3E5__1 = ((int64_t)0);
			RuntimeObject* L_3 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = __this->___cancellationToken;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__2 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)L_5);
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			__this->___U3CU3Es__4 = 0;
		}

IL_0048_1:
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
						goto IL_0061_2;
					}
					case 1:
					{
						goto IL_0063_2;
					}
					case 2:
					{
						goto IL_0068_2;
					}
					case 3:
					{
						goto IL_006d_2;
					}
				}
			}
			{
				goto IL_0072_2;
			}

IL_0061_2:
			{
				goto IL_00c9_2;
			}

IL_0063_2:
			{
				goto IL_014b_2;
			}

IL_0068_2:
			{
				goto IL_01e3_2;
			}

IL_006d_2:
			{
				goto IL_0284_2;
			}

IL_0072_2:
			{
				goto IL_0103_2;
			}

IL_0078_2:
			{
				Func_2_t04742C32F6BEF8B1199EACA5BD7F68C041603B6D* L_7 = __this->___selector;
				RuntimeObject* L_8 = __this->___U3CeU3E5__2;
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				NullCheck(L_7);
				UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72 L_10;
				L_10 = InvokerFuncInvoker1< UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_9: *(void**)L_9));
				V_3 = L_10;
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E L_11;
				L_11 = UniTask_1_GetAwaiter_m610A766CD8038A109B21E2F02CF093096F9226D7_inline((&V_3), UniTask_1_GetAwaiter_m610A766CD8038A109B21E2F02CF093096F9226D7_RuntimeMethod_var);
				V_2 = L_11;
				bool L_12;
				L_12 = Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_inline((&V_2), Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_00e5_2;
				}
			}
			{
				int32_t L_13 = 0;
				V_0 = L_13;
				__this->___U3CU3E1__state = L_13;
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E L_14 = V_2;
				__this->___U3CU3Eu__1 = L_14;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_15 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E*, U3CMinAwaitAsyncU3Ed__10_1_t59820433093B8B93E0CD237A3DCBF00D86E675FB**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_15, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_03c9;
			}

IL_00c9_2:
			{
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E L_16 = __this->___U3CU3Eu__1;
				V_2 = L_16;
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* L_17 = (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_17, sizeof(Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E));
				int32_t L_18 = (-1);
				V_0 = L_18;
				__this->___U3CU3E1__state = L_18;
			}

IL_00e5_2:
			{
				int64_t L_19;
				L_19 = Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_inline((&V_2), Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_RuntimeMethod_var);
				__this->___U3CU3Es__5 = L_19;
				int64_t L_20 = __this->___U3CU3Es__5;
				__this->___U3CvalueU3E5__1 = L_20;
				goto IL_018a_2;
			}

IL_0103_2:
			{
				RuntimeObject* L_21 = __this->___U3CeU3E5__2;
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
					goto IL_0168_2;
				}
			}
			{
				int32_t L_25 = 1;
				V_0 = L_25;
				__this->___U3CU3E1__state = L_25;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_26 = V_6;
				__this->___U3CU3Eu__2 = L_26;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_27 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitAsyncU3Ed__10_1_t59820433093B8B93E0CD237A3DCBF00D86E675FB**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_27, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_03c9;
			}

IL_014b_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28 = __this->___U3CU3Eu__2;
				V_6 = L_28;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_29 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_29, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_30 = (-1);
				V_0 = L_30;
				__this->___U3CU3E1__state = L_30;
			}

IL_0168_2:
			{
				bool L_31;
				L_31 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_31;
				bool L_32 = __this->___U3CU3Es__6;
				V_5 = L_32;
				bool L_33 = V_5;
				if (L_33)
				{
					goto IL_0078_2;
				}
			}
			{
				Exception_t* L_34;
				L_34 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, method);
			}

IL_018a_2:
			{
				goto IL_023c_2;
			}

IL_0190_2:
			{
				Func_2_t04742C32F6BEF8B1199EACA5BD7F68C041603B6D* L_35 = __this->___selector;
				RuntimeObject* L_36 = __this->___U3CeU3E5__2;
				NullCheck(L_36);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_36, (Il2CppFullySharedGenericAny*)L_37);
				NullCheck(L_35);
				UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72 L_38;
				L_38 = InvokerFuncInvoker1< UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_35, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_37: *(void**)L_37));
				V_3 = L_38;
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E L_39;
				L_39 = UniTask_1_GetAwaiter_m610A766CD8038A109B21E2F02CF093096F9226D7_inline((&V_3), UniTask_1_GetAwaiter_m610A766CD8038A109B21E2F02CF093096F9226D7_RuntimeMethod_var);
				V_8 = L_39;
				bool L_40;
				L_40 = Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_inline((&V_8), Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_RuntimeMethod_var);
				if (L_40)
				{
					goto IL_0200_2;
				}
			}
			{
				int32_t L_41 = 2;
				V_0 = L_41;
				__this->___U3CU3E1__state = L_41;
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E L_42 = V_8;
				__this->___U3CU3Eu__1 = L_42;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_43 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E*, U3CMinAwaitAsyncU3Ed__10_1_t59820433093B8B93E0CD237A3DCBF00D86E675FB**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_43, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_03c9;
			}

IL_01e3_2:
			{
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E L_44 = __this->___U3CU3Eu__1;
				V_8 = L_44;
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* L_45 = (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_45, sizeof(Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E));
				int32_t L_46 = (-1);
				V_0 = L_46;
				__this->___U3CU3E1__state = L_46;
			}

IL_0200_2:
			{
				int64_t L_47;
				L_47 = Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_inline((&V_8), Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_RuntimeMethod_var);
				__this->___U3CU3Es__8 = L_47;
				int64_t L_48 = __this->___U3CU3Es__8;
				__this->___U3CxU3E5__7 = L_48;
				int64_t L_49 = __this->___U3CvalueU3E5__1;
				int64_t L_50 = __this->___U3CxU3E5__7;
				V_9 = (bool)((((int64_t)L_49) > ((int64_t)L_50))? 1 : 0);
				bool L_51 = V_9;
				if (!L_51)
				{
					goto IL_023b_2;
				}
			}
			{
				int64_t L_52 = __this->___U3CxU3E5__7;
				__this->___U3CvalueU3E5__1 = L_52;
			}

IL_023b_2:
			{
			}

IL_023c_2:
			{
				RuntimeObject* L_53 = __this->___U3CeU3E5__2;
				NullCheck(L_53);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_54;
				L_54 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_53);
				V_7 = L_54;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_55;
				L_55 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_11 = L_55;
				bool L_56;
				L_56 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_11), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_56)
				{
					goto IL_02a1_2;
				}
			}
			{
				int32_t L_57 = 3;
				V_0 = L_57;
				__this->___U3CU3E1__state = L_57;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_58 = V_11;
				__this->___U3CU3Eu__2 = L_58;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_59 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitAsyncU3Ed__10_1_t59820433093B8B93E0CD237A3DCBF00D86E675FB**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_59, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_03c9;
			}

IL_0284_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_60 = __this->___U3CU3Eu__2;
				V_11 = L_60;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_61 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_61, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_62 = (-1);
				V_0 = L_62;
				__this->___U3CU3E1__state = L_62;
			}

IL_02a1_2:
			{
				bool L_63;
				L_63 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_11), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__9 = L_63;
				bool L_64 = __this->___U3CU3Es__9;
				V_10 = L_64;
				bool L_65 = V_10;
				if (L_65)
				{
					goto IL_0190_2;
				}
			}
			{
				goto IL_02cc_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_02c0_1;
			}
			throw e;
		}

CATCH_02c0_1:
		{
			RuntimeObject* L_66 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_12 = L_66;
			RuntimeObject* L_67 = V_12;
			__this->___U3CU3Es__3 = L_67;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_67);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_02cc_1;
		}

IL_02cc_1:
		{
			RuntimeObject* L_68 = __this->___U3CeU3E5__2;
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_68) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_69 = V_13;
			if (!L_69)
			{
				goto IL_034b_1;
			}
		}
		{
			RuntimeObject* L_70 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_70);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_71;
			L_71 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_70);
			V_15 = L_71;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_72;
			L_72 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_15), NULL);
			V_14 = L_72;
			bool L_73;
			L_73 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_73)
			{
				goto IL_0342_1;
			}
		}
		{
			int32_t L_74 = 4;
			V_0 = L_74;
			__this->___U3CU3E1__state = L_74;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_75 = V_14;
			__this->___U3CU3Eu__3 = L_75;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_76 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitAsyncU3Ed__10_1_t59820433093B8B93E0CD237A3DCBF00D86E675FB**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_76, (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_03c9;
		}

IL_0325_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_77 = __this->___U3CU3Eu__3;
			V_14 = L_77;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_78 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3);
			il2cpp_codegen_initobj(L_78, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_79 = (-1);
			V_0 = L_79;
			__this->___U3CU3E1__state = L_79;
		}

IL_0342_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_034b_1:
		{
			RuntimeObject* L_80 = __this->___U3CU3Es__3;
			V_12 = L_80;
			RuntimeObject* L_81 = V_12;
			if (!L_81)
			{
				goto IL_0375_1;
			}
		}
		{
			RuntimeObject* L_82 = V_12;
			V_16 = ((Exception_t*)IsInstClass((RuntimeObject*)L_82, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_83 = V_16;
			if (L_83)
			{
				goto IL_0368_1;
			}
		}
		{
			RuntimeObject* L_84 = V_12;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_84, method);
		}

IL_0368_1:
		{
			Exception_t* L_85 = V_16;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_86;
			L_86 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_85, NULL);
			NullCheck(L_86);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_86, NULL);
		}

IL_0375_1:
		{
			int32_t L_87 = __this->___U3CU3Es__4;
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			int64_t L_88 = __this->___U3CvalueU3E5__1;
			V_1 = L_88;
			goto IL_03ad;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_038c;
		}
		throw e;
	}

CATCH_038c:
	{
		Exception_t* L_89 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_16 = L_89;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_90 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder);
		Exception_t* L_91 = V_16;
		AsyncUniTaskMethodBuilder_1_SetException_mAEE718F60708F1A917C5379F94447C8090707CE7_inline(L_90, L_91, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mAEE718F60708F1A917C5379F94447C8090707CE7_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_03c9;
	}

IL_03ad:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_92 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder);
		int64_t L_93 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_inline(L_92, L_93, AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_RuntimeMethod_var);
	}

IL_03c9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__10_1_SetStateMachine_mE3EB980227AE7A711AAFC6DEE4D122BD0BC0D073_gshared (U3CMinAwaitAsyncU3Ed__10_1_t59820433093B8B93E0CD237A3DCBF00D86E675FB* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__14_1__ctor_m9F31A1DEE32AAF3BBD8232DE8CD1B4AB258275B8_gshared (U3CMinAwaitAsyncU3Ed__14_1_tF53AB5FD4C2AC74717B795E0FE57445D1EF5BC18* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__14_1_MoveNext_m86B5218DA0A875EAD9A754DD16D436D392D1F9EB_gshared (U3CMinAwaitAsyncU3Ed__14_1_tF53AB5FD4C2AC74717B795E0FE57445D1EF5BC18* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t73A05B9877A6FA32E101292854C9E83CDED65097 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_t73A05B9877A6FA32E101292854C9E83CDED65097);
	const Il2CppFullySharedGenericAny L_37 = L_9;
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CMinAwaitAsyncU3Ed__14_1_tF53AB5FD4C2AC74717B795E0FE57445D1EF5BC18* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_11;
	memset((&V_11), 0, sizeof(V_11));
	RuntimeObject* V_12 = NULL;
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Exception_t* V_16 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_004b_1;
		}

IL_0015_1:
		{
			goto IL_0328_1;
		}

IL_001a_1:
		{
			__this->___U3CvalueU3E5__1 = (0.0f);
			RuntimeObject* L_3 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = __this->___cancellationToken;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__2 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)L_5);
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			__this->___U3CU3Es__4 = 0;
		}

IL_004b_1:
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
						goto IL_0064_2;
					}
					case 1:
					{
						goto IL_0066_2;
					}
					case 2:
					{
						goto IL_006b_2;
					}
					case 3:
					{
						goto IL_0070_2;
					}
				}
			}
			{
				goto IL_0075_2;
			}

IL_0064_2:
			{
				goto IL_00cc_2;
			}

IL_0066_2:
			{
				goto IL_014e_2;
			}

IL_006b_2:
			{
				goto IL_01e6_2;
			}

IL_0070_2:
			{
				goto IL_0287_2;
			}

IL_0075_2:
			{
				goto IL_0106_2;
			}

IL_007b_2:
			{
				Func_2_t844387A4F32860587989B5D1B9F3950D6D5901DE* L_7 = __this->___selector;
				RuntimeObject* L_8 = __this->___U3CeU3E5__2;
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				NullCheck(L_7);
				UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1 L_10;
				L_10 = InvokerFuncInvoker1< UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_9: *(void**)L_9));
				V_3 = L_10;
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_11;
				L_11 = UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_inline((&V_3), UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_RuntimeMethod_var);
				V_2 = L_11;
				bool L_12;
				L_12 = Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_inline((&V_2), Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_00e8_2;
				}
			}
			{
				int32_t L_13 = 0;
				V_0 = L_13;
				__this->___U3CU3E1__state = L_13;
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_14 = V_2;
				__this->___U3CU3Eu__1 = L_14;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_15 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D*, U3CMinAwaitAsyncU3Ed__14_1_tF53AB5FD4C2AC74717B795E0FE57445D1EF5BC18**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_15, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_03cc;
			}

IL_00cc_2:
			{
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_16 = __this->___U3CU3Eu__1;
				V_2 = L_16;
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* L_17 = (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_17, sizeof(Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D));
				int32_t L_18 = (-1);
				V_0 = L_18;
				__this->___U3CU3E1__state = L_18;
			}

IL_00e8_2:
			{
				float L_19;
				L_19 = Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_inline((&V_2), Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_RuntimeMethod_var);
				__this->___U3CU3Es__5 = L_19;
				float L_20 = __this->___U3CU3Es__5;
				__this->___U3CvalueU3E5__1 = L_20;
				goto IL_018d_2;
			}

IL_0106_2:
			{
				RuntimeObject* L_21 = __this->___U3CeU3E5__2;
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
					goto IL_016b_2;
				}
			}
			{
				int32_t L_25 = 1;
				V_0 = L_25;
				__this->___U3CU3E1__state = L_25;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_26 = V_6;
				__this->___U3CU3Eu__2 = L_26;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_27 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitAsyncU3Ed__14_1_tF53AB5FD4C2AC74717B795E0FE57445D1EF5BC18**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_27, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_03cc;
			}

IL_014e_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28 = __this->___U3CU3Eu__2;
				V_6 = L_28;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_29 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_29, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_30 = (-1);
				V_0 = L_30;
				__this->___U3CU3E1__state = L_30;
			}

IL_016b_2:
			{
				bool L_31;
				L_31 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_31;
				bool L_32 = __this->___U3CU3Es__6;
				V_5 = L_32;
				bool L_33 = V_5;
				if (L_33)
				{
					goto IL_007b_2;
				}
			}
			{
				Exception_t* L_34;
				L_34 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, method);
			}

IL_018d_2:
			{
				goto IL_023f_2;
			}

IL_0193_2:
			{
				Func_2_t844387A4F32860587989B5D1B9F3950D6D5901DE* L_35 = __this->___selector;
				RuntimeObject* L_36 = __this->___U3CeU3E5__2;
				NullCheck(L_36);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_36, (Il2CppFullySharedGenericAny*)L_37);
				NullCheck(L_35);
				UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1 L_38;
				L_38 = InvokerFuncInvoker1< UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_35, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_37: *(void**)L_37));
				V_3 = L_38;
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_39;
				L_39 = UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_inline((&V_3), UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_RuntimeMethod_var);
				V_8 = L_39;
				bool L_40;
				L_40 = Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_inline((&V_8), Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_RuntimeMethod_var);
				if (L_40)
				{
					goto IL_0203_2;
				}
			}
			{
				int32_t L_41 = 2;
				V_0 = L_41;
				__this->___U3CU3E1__state = L_41;
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_42 = V_8;
				__this->___U3CU3Eu__1 = L_42;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_43 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D*, U3CMinAwaitAsyncU3Ed__14_1_tF53AB5FD4C2AC74717B795E0FE57445D1EF5BC18**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_43, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_03cc;
			}

IL_01e6_2:
			{
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_44 = __this->___U3CU3Eu__1;
				V_8 = L_44;
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* L_45 = (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_45, sizeof(Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D));
				int32_t L_46 = (-1);
				V_0 = L_46;
				__this->___U3CU3E1__state = L_46;
			}

IL_0203_2:
			{
				float L_47;
				L_47 = Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_inline((&V_8), Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_RuntimeMethod_var);
				__this->___U3CU3Es__8 = L_47;
				float L_48 = __this->___U3CU3Es__8;
				__this->___U3CxU3E5__7 = L_48;
				float L_49 = __this->___U3CvalueU3E5__1;
				float L_50 = __this->___U3CxU3E5__7;
				V_9 = (bool)((((float)L_49) > ((float)L_50))? 1 : 0);
				bool L_51 = V_9;
				if (!L_51)
				{
					goto IL_023e_2;
				}
			}
			{
				float L_52 = __this->___U3CxU3E5__7;
				__this->___U3CvalueU3E5__1 = L_52;
			}

IL_023e_2:
			{
			}

IL_023f_2:
			{
				RuntimeObject* L_53 = __this->___U3CeU3E5__2;
				NullCheck(L_53);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_54;
				L_54 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_53);
				V_7 = L_54;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_55;
				L_55 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_11 = L_55;
				bool L_56;
				L_56 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_11), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_56)
				{
					goto IL_02a4_2;
				}
			}
			{
				int32_t L_57 = 3;
				V_0 = L_57;
				__this->___U3CU3E1__state = L_57;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_58 = V_11;
				__this->___U3CU3Eu__2 = L_58;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_59 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitAsyncU3Ed__14_1_tF53AB5FD4C2AC74717B795E0FE57445D1EF5BC18**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_59, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_03cc;
			}

IL_0287_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_60 = __this->___U3CU3Eu__2;
				V_11 = L_60;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_61 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_61, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_62 = (-1);
				V_0 = L_62;
				__this->___U3CU3E1__state = L_62;
			}

IL_02a4_2:
			{
				bool L_63;
				L_63 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_11), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__9 = L_63;
				bool L_64 = __this->___U3CU3Es__9;
				V_10 = L_64;
				bool L_65 = V_10;
				if (L_65)
				{
					goto IL_0193_2;
				}
			}
			{
				goto IL_02cf_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_02c3_1;
			}
			throw e;
		}

CATCH_02c3_1:
		{
			RuntimeObject* L_66 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_12 = L_66;
			RuntimeObject* L_67 = V_12;
			__this->___U3CU3Es__3 = L_67;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_67);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_02cf_1;
		}

IL_02cf_1:
		{
			RuntimeObject* L_68 = __this->___U3CeU3E5__2;
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_68) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_69 = V_13;
			if (!L_69)
			{
				goto IL_034e_1;
			}
		}
		{
			RuntimeObject* L_70 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_70);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_71;
			L_71 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_70);
			V_15 = L_71;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_72;
			L_72 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_15), NULL);
			V_14 = L_72;
			bool L_73;
			L_73 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_73)
			{
				goto IL_0345_1;
			}
		}
		{
			int32_t L_74 = 4;
			V_0 = L_74;
			__this->___U3CU3E1__state = L_74;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_75 = V_14;
			__this->___U3CU3Eu__3 = L_75;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_76 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitAsyncU3Ed__14_1_tF53AB5FD4C2AC74717B795E0FE57445D1EF5BC18**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_76, (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_03cc;
		}

IL_0328_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_77 = __this->___U3CU3Eu__3;
			V_14 = L_77;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_78 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3);
			il2cpp_codegen_initobj(L_78, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_79 = (-1);
			V_0 = L_79;
			__this->___U3CU3E1__state = L_79;
		}

IL_0345_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_034e_1:
		{
			RuntimeObject* L_80 = __this->___U3CU3Es__3;
			V_12 = L_80;
			RuntimeObject* L_81 = V_12;
			if (!L_81)
			{
				goto IL_0378_1;
			}
		}
		{
			RuntimeObject* L_82 = V_12;
			V_16 = ((Exception_t*)IsInstClass((RuntimeObject*)L_82, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_83 = V_16;
			if (L_83)
			{
				goto IL_036b_1;
			}
		}
		{
			RuntimeObject* L_84 = V_12;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_84, method);
		}

IL_036b_1:
		{
			Exception_t* L_85 = V_16;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_86;
			L_86 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_85, NULL);
			NullCheck(L_86);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_86, NULL);
		}

IL_0378_1:
		{
			int32_t L_87 = __this->___U3CU3Es__4;
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			float L_88 = __this->___U3CvalueU3E5__1;
			V_1 = L_88;
			goto IL_03b0;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_038f;
		}
		throw e;
	}

CATCH_038f:
	{
		Exception_t* L_89 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_16 = L_89;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_90 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder);
		Exception_t* L_91 = V_16;
		AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_inline(L_90, L_91, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_03cc;
	}

IL_03b0:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_92 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder);
		float L_93 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_inline(L_92, L_93, AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_RuntimeMethod_var);
	}

IL_03cc:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__14_1_SetStateMachine_mCF6E0BCE32905CA074FB56FAC2E9B1249E05E7E2_gshared (U3CMinAwaitAsyncU3Ed__14_1_tF53AB5FD4C2AC74717B795E0FE57445D1EF5BC18* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__18_1__ctor_mA9E78EAA44B076431A4B50E1ACE6F305BF1D35DF_gshared (U3CMinAwaitAsyncU3Ed__18_1_tF6608C6A8D7CBAA934B58E0404F9528434C42BEC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__18_1_MoveNext_m4CE9DCE610A844E1290DE1BE10047DAEA3F20642_gshared (U3CMinAwaitAsyncU3Ed__18_1_tF6608C6A8D7CBAA934B58E0404F9528434C42BEC* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t1C3A9BF8C25395CB30878DBFA2CDBF5F0910BFB5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_t1C3A9BF8C25395CB30878DBFA2CDBF5F0910BFB5);
	const Il2CppFullySharedGenericAny L_37 = L_9;
	int32_t V_0 = 0;
	double V_1 = 0.0;
	Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CMinAwaitAsyncU3Ed__18_1_tF6608C6A8D7CBAA934B58E0404F9528434C42BEC* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_11;
	memset((&V_11), 0, sizeof(V_11));
	RuntimeObject* V_12 = NULL;
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Exception_t* V_16 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
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
			goto IL_032c_1;
		}

IL_001a_1:
		{
			__this->___U3CvalueU3E5__1 = (0.0);
			RuntimeObject* L_3 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = __this->___cancellationToken;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__2 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)L_5);
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			__this->___U3CU3Es__4 = 0;
		}

IL_004f_1:
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
						goto IL_0068_2;
					}
					case 1:
					{
						goto IL_006a_2;
					}
					case 2:
					{
						goto IL_006f_2;
					}
					case 3:
					{
						goto IL_0074_2;
					}
				}
			}
			{
				goto IL_0079_2;
			}

IL_0068_2:
			{
				goto IL_00d0_2;
			}

IL_006a_2:
			{
				goto IL_0152_2;
			}

IL_006f_2:
			{
				goto IL_01ea_2;
			}

IL_0074_2:
			{
				goto IL_028b_2;
			}

IL_0079_2:
			{
				goto IL_010a_2;
			}

IL_007f_2:
			{
				Func_2_tF452F3FF30306E919291E498D051B5F208EB38CF* L_7 = __this->___selector;
				RuntimeObject* L_8 = __this->___U3CeU3E5__2;
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				NullCheck(L_7);
				UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C L_10;
				L_10 = InvokerFuncInvoker1< UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_9: *(void**)L_9));
				V_3 = L_10;
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_11;
				L_11 = UniTask_1_GetAwaiter_m68E768B22932F4C553E8F96F1DEDC7361DC02133_inline((&V_3), UniTask_1_GetAwaiter_m68E768B22932F4C553E8F96F1DEDC7361DC02133_RuntimeMethod_var);
				V_2 = L_11;
				bool L_12;
				L_12 = Awaiter_get_IsCompleted_mFC4A614AA0B1C8D41A05840FAA981FAF10FC99C8_inline((&V_2), Awaiter_get_IsCompleted_mFC4A614AA0B1C8D41A05840FAA981FAF10FC99C8_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_00ec_2;
				}
			}
			{
				int32_t L_13 = 0;
				V_0 = L_13;
				__this->___U3CU3E1__state = L_13;
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_14 = V_2;
				__this->___U3CU3Eu__1 = L_14;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_15 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88*, U3CMinAwaitAsyncU3Ed__18_1_tF6608C6A8D7CBAA934B58E0404F9528434C42BEC**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_15, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_03d0;
			}

IL_00d0_2:
			{
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_16 = __this->___U3CU3Eu__1;
				V_2 = L_16;
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88* L_17 = (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_17, sizeof(Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88));
				int32_t L_18 = (-1);
				V_0 = L_18;
				__this->___U3CU3E1__state = L_18;
			}

IL_00ec_2:
			{
				double L_19;
				L_19 = Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_inline((&V_2), Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_RuntimeMethod_var);
				__this->___U3CU3Es__5 = L_19;
				double L_20 = __this->___U3CU3Es__5;
				__this->___U3CvalueU3E5__1 = L_20;
				goto IL_0191_2;
			}

IL_010a_2:
			{
				RuntimeObject* L_21 = __this->___U3CeU3E5__2;
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
					goto IL_016f_2;
				}
			}
			{
				int32_t L_25 = 1;
				V_0 = L_25;
				__this->___U3CU3E1__state = L_25;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_26 = V_6;
				__this->___U3CU3Eu__2 = L_26;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_27 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitAsyncU3Ed__18_1_tF6608C6A8D7CBAA934B58E0404F9528434C42BEC**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_27, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_03d0;
			}

IL_0152_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28 = __this->___U3CU3Eu__2;
				V_6 = L_28;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_29 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_29, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_30 = (-1);
				V_0 = L_30;
				__this->___U3CU3E1__state = L_30;
			}

IL_016f_2:
			{
				bool L_31;
				L_31 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_31;
				bool L_32 = __this->___U3CU3Es__6;
				V_5 = L_32;
				bool L_33 = V_5;
				if (L_33)
				{
					goto IL_007f_2;
				}
			}
			{
				Exception_t* L_34;
				L_34 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, method);
			}

IL_0191_2:
			{
				goto IL_0243_2;
			}

IL_0197_2:
			{
				Func_2_tF452F3FF30306E919291E498D051B5F208EB38CF* L_35 = __this->___selector;
				RuntimeObject* L_36 = __this->___U3CeU3E5__2;
				NullCheck(L_36);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_36, (Il2CppFullySharedGenericAny*)L_37);
				NullCheck(L_35);
				UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C L_38;
				L_38 = InvokerFuncInvoker1< UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_35, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_37: *(void**)L_37));
				V_3 = L_38;
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_39;
				L_39 = UniTask_1_GetAwaiter_m68E768B22932F4C553E8F96F1DEDC7361DC02133_inline((&V_3), UniTask_1_GetAwaiter_m68E768B22932F4C553E8F96F1DEDC7361DC02133_RuntimeMethod_var);
				V_8 = L_39;
				bool L_40;
				L_40 = Awaiter_get_IsCompleted_mFC4A614AA0B1C8D41A05840FAA981FAF10FC99C8_inline((&V_8), Awaiter_get_IsCompleted_mFC4A614AA0B1C8D41A05840FAA981FAF10FC99C8_RuntimeMethod_var);
				if (L_40)
				{
					goto IL_0207_2;
				}
			}
			{
				int32_t L_41 = 2;
				V_0 = L_41;
				__this->___U3CU3E1__state = L_41;
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_42 = V_8;
				__this->___U3CU3Eu__1 = L_42;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_43 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88*, U3CMinAwaitAsyncU3Ed__18_1_tF6608C6A8D7CBAA934B58E0404F9528434C42BEC**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_43, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_03d0;
			}

IL_01ea_2:
			{
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_44 = __this->___U3CU3Eu__1;
				V_8 = L_44;
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88* L_45 = (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_45, sizeof(Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88));
				int32_t L_46 = (-1);
				V_0 = L_46;
				__this->___U3CU3E1__state = L_46;
			}

IL_0207_2:
			{
				double L_47;
				L_47 = Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_inline((&V_8), Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_RuntimeMethod_var);
				__this->___U3CU3Es__8 = L_47;
				double L_48 = __this->___U3CU3Es__8;
				__this->___U3CxU3E5__7 = L_48;
				double L_49 = __this->___U3CvalueU3E5__1;
				double L_50 = __this->___U3CxU3E5__7;
				V_9 = (bool)((((double)L_49) > ((double)L_50))? 1 : 0);
				bool L_51 = V_9;
				if (!L_51)
				{
					goto IL_0242_2;
				}
			}
			{
				double L_52 = __this->___U3CxU3E5__7;
				__this->___U3CvalueU3E5__1 = L_52;
			}

IL_0242_2:
			{
			}

IL_0243_2:
			{
				RuntimeObject* L_53 = __this->___U3CeU3E5__2;
				NullCheck(L_53);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_54;
				L_54 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_53);
				V_7 = L_54;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_55;
				L_55 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_11 = L_55;
				bool L_56;
				L_56 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_11), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_56)
				{
					goto IL_02a8_2;
				}
			}
			{
				int32_t L_57 = 3;
				V_0 = L_57;
				__this->___U3CU3E1__state = L_57;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_58 = V_11;
				__this->___U3CU3Eu__2 = L_58;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_59 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitAsyncU3Ed__18_1_tF6608C6A8D7CBAA934B58E0404F9528434C42BEC**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_59, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_03d0;
			}

IL_028b_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_60 = __this->___U3CU3Eu__2;
				V_11 = L_60;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_61 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_61, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_62 = (-1);
				V_0 = L_62;
				__this->___U3CU3E1__state = L_62;
			}

IL_02a8_2:
			{
				bool L_63;
				L_63 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_11), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__9 = L_63;
				bool L_64 = __this->___U3CU3Es__9;
				V_10 = L_64;
				bool L_65 = V_10;
				if (L_65)
				{
					goto IL_0197_2;
				}
			}
			{
				goto IL_02d3_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_02c7_1;
			}
			throw e;
		}

CATCH_02c7_1:
		{
			RuntimeObject* L_66 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_12 = L_66;
			RuntimeObject* L_67 = V_12;
			__this->___U3CU3Es__3 = L_67;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_67);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_02d3_1;
		}

IL_02d3_1:
		{
			RuntimeObject* L_68 = __this->___U3CeU3E5__2;
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_68) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_69 = V_13;
			if (!L_69)
			{
				goto IL_0352_1;
			}
		}
		{
			RuntimeObject* L_70 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_70);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_71;
			L_71 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_70);
			V_15 = L_71;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_72;
			L_72 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_15), NULL);
			V_14 = L_72;
			bool L_73;
			L_73 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_73)
			{
				goto IL_0349_1;
			}
		}
		{
			int32_t L_74 = 4;
			V_0 = L_74;
			__this->___U3CU3E1__state = L_74;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_75 = V_14;
			__this->___U3CU3Eu__3 = L_75;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_76 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitAsyncU3Ed__18_1_tF6608C6A8D7CBAA934B58E0404F9528434C42BEC**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_76, (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_03d0;
		}

IL_032c_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_77 = __this->___U3CU3Eu__3;
			V_14 = L_77;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_78 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3);
			il2cpp_codegen_initobj(L_78, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_79 = (-1);
			V_0 = L_79;
			__this->___U3CU3E1__state = L_79;
		}

IL_0349_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_0352_1:
		{
			RuntimeObject* L_80 = __this->___U3CU3Es__3;
			V_12 = L_80;
			RuntimeObject* L_81 = V_12;
			if (!L_81)
			{
				goto IL_037c_1;
			}
		}
		{
			RuntimeObject* L_82 = V_12;
			V_16 = ((Exception_t*)IsInstClass((RuntimeObject*)L_82, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_83 = V_16;
			if (L_83)
			{
				goto IL_036f_1;
			}
		}
		{
			RuntimeObject* L_84 = V_12;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_84, method);
		}

IL_036f_1:
		{
			Exception_t* L_85 = V_16;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_86;
			L_86 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_85, NULL);
			NullCheck(L_86);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_86, NULL);
		}

IL_037c_1:
		{
			int32_t L_87 = __this->___U3CU3Es__4;
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			double L_88 = __this->___U3CvalueU3E5__1;
			V_1 = L_88;
			goto IL_03b4;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0393;
		}
		throw e;
	}

CATCH_0393:
	{
		Exception_t* L_89 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_16 = L_89;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_90 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
		Exception_t* L_91 = V_16;
		AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_inline(L_90, L_91, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_03d0;
	}

IL_03b4:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_92 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
		double L_93 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_inline(L_92, L_93, AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
	}

IL_03d0:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__18_1_SetStateMachine_m6AB8B57250DCE3A3C7F82FC5A6D771446F341BA7_gshared (U3CMinAwaitAsyncU3Ed__18_1_tF6608C6A8D7CBAA934B58E0404F9528434C42BEC* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__22_1__ctor_mC4DC03030CDE18FE35DE5F921C4BED93F82ADF58_gshared (U3CMinAwaitAsyncU3Ed__22_1_t1E9C108B86F55D9612796A1B182EB7337EF45A20* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__22_1_MoveNext_mDABD837492801DC4260D4A28829F66F4872F34A8_gshared (U3CMinAwaitAsyncU3Ed__22_1_t1E9C108B86F55D9612796A1B182EB7337EF45A20* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_tF3774B0A821E0816F6705429E554B30157892D11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_tF3774B0A821E0816F6705429E554B30157892D11);
	const Il2CppFullySharedGenericAny L_38 = L_10;
	int32_t V_0 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CMinAwaitAsyncU3Ed__22_1_t1E9C108B86F55D9612796A1B182EB7337EF45A20* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_11;
	memset((&V_11), 0, sizeof(V_11));
	RuntimeObject* V_12 = NULL;
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Exception_t* V_16 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_004c_1;
		}

IL_0015_1:
		{
			goto IL_032c_1;
		}

IL_001a_1:
		{
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* L_3 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)(&__this->___U3CvalueU3E5__1);
			il2cpp_codegen_initobj(L_3, sizeof(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F));
			RuntimeObject* L_4 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = __this->___cancellationToken;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__2 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)L_6);
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			__this->___U3CU3Es__4 = 0;
		}

IL_004c_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				switch (L_7)
				{
					case 0:
					{
						goto IL_0065_2;
					}
					case 1:
					{
						goto IL_0067_2;
					}
					case 2:
					{
						goto IL_006c_2;
					}
					case 3:
					{
						goto IL_0071_2;
					}
				}
			}
			{
				goto IL_0076_2;
			}

IL_0065_2:
			{
				goto IL_00cd_2;
			}

IL_0067_2:
			{
				goto IL_014f_2;
			}

IL_006c_2:
			{
				goto IL_01e7_2;
			}

IL_0071_2:
			{
				goto IL_028b_2;
			}

IL_0076_2:
			{
				goto IL_0107_2;
			}

IL_007c_2:
			{
				Func_2_tD6766C7D6227AC2A45F7EDFC827BDFC58C8EFE78* L_8 = __this->___selector;
				RuntimeObject* L_9 = __this->___U3CeU3E5__2;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3 L_11;
				L_11 = InvokerFuncInvoker1< UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
				V_3 = L_11;
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 L_12;
				L_12 = UniTask_1_GetAwaiter_mE4F348E45E23B27DC05E89090C2C334B99FECBD4_inline((&V_3), UniTask_1_GetAwaiter_mE4F348E45E23B27DC05E89090C2C334B99FECBD4_RuntimeMethod_var);
				V_2 = L_12;
				bool L_13;
				L_13 = Awaiter_get_IsCompleted_mDD8356C2BFB8EBB175763FE2D92A4B0BEBDAEE94_inline((&V_2), Awaiter_get_IsCompleted_mDD8356C2BFB8EBB175763FE2D92A4B0BEBDAEE94_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_00e9_2;
				}
			}
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->___U3CU3E1__state = L_14;
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 L_15 = V_2;
				__this->___U3CU3Eu__1 = L_15;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_16 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8*, U3CMinAwaitAsyncU3Ed__22_1_t1E9C108B86F55D9612796A1B182EB7337EF45A20**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_16, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_03d0;
			}

IL_00cd_2:
			{
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 L_17 = __this->___U3CU3Eu__1;
				V_2 = L_17;
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8* L_18 = (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_18, sizeof(Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state = L_19;
			}

IL_00e9_2:
			{
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_20;
				L_20 = Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_inline((&V_2), Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_RuntimeMethod_var);
				__this->___U3CU3Es__5 = L_20;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_21 = __this->___U3CU3Es__5;
				__this->___U3CvalueU3E5__1 = L_21;
				goto IL_018e_2;
			}

IL_0107_2:
			{
				RuntimeObject* L_22 = __this->___U3CeU3E5__2;
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
					goto IL_016c_2;
				}
			}
			{
				int32_t L_26 = 1;
				V_0 = L_26;
				__this->___U3CU3E1__state = L_26;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_27 = V_6;
				__this->___U3CU3Eu__2 = L_27;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_28 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitAsyncU3Ed__22_1_t1E9C108B86F55D9612796A1B182EB7337EF45A20**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_28, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_03d0;
			}

IL_014f_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29 = __this->___U3CU3Eu__2;
				V_6 = L_29;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_30 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_30, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_31 = (-1);
				V_0 = L_31;
				__this->___U3CU3E1__state = L_31;
			}

IL_016c_2:
			{
				bool L_32;
				L_32 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_32;
				bool L_33 = __this->___U3CU3Es__6;
				V_5 = L_33;
				bool L_34 = V_5;
				if (L_34)
				{
					goto IL_007c_2;
				}
			}
			{
				Exception_t* L_35;
				L_35 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, method);
			}

IL_018e_2:
			{
				goto IL_0243_2;
			}

IL_0194_2:
			{
				Func_2_tD6766C7D6227AC2A45F7EDFC827BDFC58C8EFE78* L_36 = __this->___selector;
				RuntimeObject* L_37 = __this->___U3CeU3E5__2;
				NullCheck(L_37);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_37, (Il2CppFullySharedGenericAny*)L_38);
				NullCheck(L_36);
				UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3 L_39;
				L_39 = InvokerFuncInvoker1< UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_38: *(void**)L_38));
				V_3 = L_39;
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 L_40;
				L_40 = UniTask_1_GetAwaiter_mE4F348E45E23B27DC05E89090C2C334B99FECBD4_inline((&V_3), UniTask_1_GetAwaiter_mE4F348E45E23B27DC05E89090C2C334B99FECBD4_RuntimeMethod_var);
				V_8 = L_40;
				bool L_41;
				L_41 = Awaiter_get_IsCompleted_mDD8356C2BFB8EBB175763FE2D92A4B0BEBDAEE94_inline((&V_8), Awaiter_get_IsCompleted_mDD8356C2BFB8EBB175763FE2D92A4B0BEBDAEE94_RuntimeMethod_var);
				if (L_41)
				{
					goto IL_0204_2;
				}
			}
			{
				int32_t L_42 = 2;
				V_0 = L_42;
				__this->___U3CU3E1__state = L_42;
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 L_43 = V_8;
				__this->___U3CU3Eu__1 = L_43;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_44 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8*, U3CMinAwaitAsyncU3Ed__22_1_t1E9C108B86F55D9612796A1B182EB7337EF45A20**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_44, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_03d0;
			}

IL_01e7_2:
			{
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 L_45 = __this->___U3CU3Eu__1;
				V_8 = L_45;
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8* L_46 = (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_46, sizeof(Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8));
				int32_t L_47 = (-1);
				V_0 = L_47;
				__this->___U3CU3E1__state = L_47;
			}

IL_0204_2:
			{
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_48;
				L_48 = Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_inline((&V_8), Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_RuntimeMethod_var);
				__this->___U3CU3Es__8 = L_48;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_49 = __this->___U3CU3Es__8;
				__this->___U3CxU3E5__7 = L_49;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_50 = __this->___U3CvalueU3E5__1;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_51 = __this->___U3CxU3E5__7;
				il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
				bool L_52;
				L_52 = Decimal_op_GreaterThan_m549F09BF0C53D8611E550CA9CCB53543D6DAF717(L_50, L_51, NULL);
				V_9 = L_52;
				bool L_53 = V_9;
				if (!L_53)
				{
					goto IL_0242_2;
				}
			}
			{
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_54 = __this->___U3CxU3E5__7;
				__this->___U3CvalueU3E5__1 = L_54;
			}

IL_0242_2:
			{
			}

IL_0243_2:
			{
				RuntimeObject* L_55 = __this->___U3CeU3E5__2;
				NullCheck(L_55);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_56;
				L_56 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_55);
				V_7 = L_56;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_57;
				L_57 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_11 = L_57;
				bool L_58;
				L_58 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_11), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_58)
				{
					goto IL_02a8_2;
				}
			}
			{
				int32_t L_59 = 3;
				V_0 = L_59;
				__this->___U3CU3E1__state = L_59;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_60 = V_11;
				__this->___U3CU3Eu__2 = L_60;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_61 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitAsyncU3Ed__22_1_t1E9C108B86F55D9612796A1B182EB7337EF45A20**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_61, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_03d0;
			}

IL_028b_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_62 = __this->___U3CU3Eu__2;
				V_11 = L_62;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_63 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_63, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_64 = (-1);
				V_0 = L_64;
				__this->___U3CU3E1__state = L_64;
			}

IL_02a8_2:
			{
				bool L_65;
				L_65 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_11), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__9 = L_65;
				bool L_66 = __this->___U3CU3Es__9;
				V_10 = L_66;
				bool L_67 = V_10;
				if (L_67)
				{
					goto IL_0194_2;
				}
			}
			{
				goto IL_02d3_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_02c7_1;
			}
			throw e;
		}

CATCH_02c7_1:
		{
			RuntimeObject* L_68 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_12 = L_68;
			RuntimeObject* L_69 = V_12;
			__this->___U3CU3Es__3 = L_69;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_69);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_02d3_1;
		}

IL_02d3_1:
		{
			RuntimeObject* L_70 = __this->___U3CeU3E5__2;
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_70) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_71 = V_13;
			if (!L_71)
			{
				goto IL_0352_1;
			}
		}
		{
			RuntimeObject* L_72 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_72);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_73;
			L_73 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_72);
			V_15 = L_73;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_74;
			L_74 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_15), NULL);
			V_14 = L_74;
			bool L_75;
			L_75 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_75)
			{
				goto IL_0349_1;
			}
		}
		{
			int32_t L_76 = 4;
			V_0 = L_76;
			__this->___U3CU3E1__state = L_76;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_77 = V_14;
			__this->___U3CU3Eu__3 = L_77;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_78 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitAsyncU3Ed__22_1_t1E9C108B86F55D9612796A1B182EB7337EF45A20**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_78, (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_03d0;
		}

IL_032c_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_79 = __this->___U3CU3Eu__3;
			V_14 = L_79;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_80 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3);
			il2cpp_codegen_initobj(L_80, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_81 = (-1);
			V_0 = L_81;
			__this->___U3CU3E1__state = L_81;
		}

IL_0349_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_0352_1:
		{
			RuntimeObject* L_82 = __this->___U3CU3Es__3;
			V_12 = L_82;
			RuntimeObject* L_83 = V_12;
			if (!L_83)
			{
				goto IL_037c_1;
			}
		}
		{
			RuntimeObject* L_84 = V_12;
			V_16 = ((Exception_t*)IsInstClass((RuntimeObject*)L_84, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_85 = V_16;
			if (L_85)
			{
				goto IL_036f_1;
			}
		}
		{
			RuntimeObject* L_86 = V_12;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_86, method);
		}

IL_036f_1:
		{
			Exception_t* L_87 = V_16;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_88;
			L_88 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_87, NULL);
			NullCheck(L_88);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_88, NULL);
		}

IL_037c_1:
		{
			int32_t L_89 = __this->___U3CU3Es__4;
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_90 = __this->___U3CvalueU3E5__1;
			V_1 = L_90;
			goto IL_03b4;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0393;
		}
		throw e;
	}

CATCH_0393:
	{
		Exception_t* L_91 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_16 = L_91;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_92 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder);
		Exception_t* L_93 = V_16;
		AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_inline(L_92, L_93, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_03d0;
	}

IL_03b4:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_94 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_95 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_inline(L_94, L_95, AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_RuntimeMethod_var);
	}

IL_03d0:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__22_1_SetStateMachine_m6356A3EC2579ED9C6E09490A52EA6533F24FD955_gshared (U3CMinAwaitAsyncU3Ed__22_1_t1E9C108B86F55D9612796A1B182EB7337EF45A20* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__26_1__ctor_m9CF3D3BEABBCBD1EEFA1946F72E3C4EE39FD2ED9_gshared (U3CMinAwaitAsyncU3Ed__26_1_t32B9C5BC573E86FF0E3D6AE2ADDA0A33F17E1959* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__26_1_MoveNext_mDFBFA23C6078E2EF7823E8F65A2D51E098DE80D0_gshared (U3CMinAwaitAsyncU3Ed__26_1_t32B9C5BC573E86FF0E3D6AE2ADDA0A33F17E1959* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m5E0E26E389BF8D15A8935BC741FAADEFF1617158_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tDED4D85245B97D029051B4A45559E9A22B0E8A0A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_tDED4D85245B97D029051B4A45559E9A22B0E8A0A);
	const Il2CppFullySharedGenericAny L_42 = L_10;
	int32_t V_0 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CMinAwaitAsyncU3Ed__26_1_t32B9C5BC573E86FF0E3D6AE2ADDA0A33F17E1959* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_15;
	memset((&V_15), 0, sizeof(V_15));
	RuntimeObject* V_16 = NULL;
	bool V_17 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_18;
	memset((&V_18), 0, sizeof(V_18));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_19;
	memset((&V_19), 0, sizeof(V_19));
	Exception_t* V_20 = NULL;
	int32_t V_21 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_004c_1;
		}

IL_0015_1:
		{
			goto IL_03af_1;
		}

IL_001a_1:
		{
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_3 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CvalueU3E5__1);
			il2cpp_codegen_initobj(L_3, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
			RuntimeObject* L_4 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = __this->___cancellationToken;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__2 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)L_6);
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			__this->___U3CU3Es__4 = 0;
		}

IL_004c_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				switch (L_7)
				{
					case 0:
					{
						goto IL_0065_2;
					}
					case 1:
					{
						goto IL_0067_2;
					}
					case 2:
					{
						goto IL_006c_2;
					}
					case 3:
					{
						goto IL_0071_2;
					}
				}
			}
			{
				goto IL_0076_2;
			}

IL_0065_2:
			{
				goto IL_00cd_2;
			}

IL_0067_2:
			{
				goto IL_0171_2;
			}

IL_006c_2:
			{
				goto IL_0214_2;
			}

IL_0071_2:
			{
				goto IL_0305_2;
			}

IL_0076_2:
			{
				goto IL_0129_2;
			}

IL_007c_2:
			{
				Func_2_tCD782F33543995850D4A4AF7569D83504640F79F* L_8 = __this->___selector;
				RuntimeObject* L_9 = __this->___U3CeU3E5__2;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05 L_11;
				L_11 = InvokerFuncInvoker1< UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
				V_3 = L_11;
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 L_12;
				L_12 = UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_inline((&V_3), UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_RuntimeMethod_var);
				V_2 = L_12;
				bool L_13;
				L_13 = Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_inline((&V_2), Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_00e9_2;
				}
			}
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->___U3CU3E1__state = L_14;
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 L_15 = V_2;
				__this->___U3CU3Eu__1 = L_15;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_16 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*, Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9*, U3CMinAwaitAsyncU3Ed__26_1_t32B9C5BC573E86FF0E3D6AE2ADDA0A33F17E1959**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_16, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0470;
			}

IL_00cd_2:
			{
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 L_17 = __this->___U3CU3Eu__1;
				V_2 = L_17;
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9* L_18 = (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_18, sizeof(Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state = L_19;
			}

IL_00e9_2:
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_20;
				L_20 = Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_inline((&V_2), Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_20;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_21 = __this->___U3CU3Es__6;
				__this->___U3CvalueU3E5__1 = L_21;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_22 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CU3Es__6);
				il2cpp_codegen_initobj(L_22, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_23 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CvalueU3E5__1);
				bool L_24;
				L_24 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_23, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				V_5 = (bool)((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
				bool L_25 = V_5;
				if (!L_25)
				{
					goto IL_0124_2;
				}
			}
			{
				goto IL_0129_2;
			}

IL_0124_2:
			{
				goto IL_01bb_2;
			}

IL_0129_2:
			{
				RuntimeObject* L_26 = __this->___U3CeU3E5__2;
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
					goto IL_018e_2;
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
				AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_32 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitAsyncU3Ed__26_1_t32B9C5BC573E86FF0E3D6AE2ADDA0A33F17E1959**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_32, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0470;
			}

IL_0171_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_33 = __this->___U3CU3Eu__2;
				V_7 = L_33;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_34, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_35 = (-1);
				V_0 = L_35;
				__this->___U3CU3E1__state = L_35;
			}

IL_018e_2:
			{
				bool L_36;
				L_36 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7 = L_36;
				bool L_37 = __this->___U3CU3Es__7;
				V_6 = L_37;
				bool L_38 = V_6;
				if (L_38)
				{
					goto IL_007c_2;
				}
			}
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_39 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CU3Es__5);
				il2cpp_codegen_initobj(L_39, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				goto IL_0341_2;
			}

IL_01bb_2:
			{
				goto IL_02bd_2;
			}

IL_01c1_2:
			{
				Func_2_tCD782F33543995850D4A4AF7569D83504640F79F* L_40 = __this->___selector;
				RuntimeObject* L_41 = __this->___U3CeU3E5__2;
				NullCheck(L_41);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_41, (Il2CppFullySharedGenericAny*)L_42);
				NullCheck(L_40);
				UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05 L_43;
				L_43 = InvokerFuncInvoker1< UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_40, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_42: *(void**)L_42));
				V_3 = L_43;
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 L_44;
				L_44 = UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_inline((&V_3), UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_RuntimeMethod_var);
				V_9 = L_44;
				bool L_45;
				L_45 = Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_inline((&V_9), Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_RuntimeMethod_var);
				if (L_45)
				{
					goto IL_0231_2;
				}
			}
			{
				int32_t L_46 = 2;
				V_0 = L_46;
				__this->___U3CU3E1__state = L_46;
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 L_47 = V_9;
				__this->___U3CU3Eu__1 = L_47;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_48 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*, Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9*, U3CMinAwaitAsyncU3Ed__26_1_t32B9C5BC573E86FF0E3D6AE2ADDA0A33F17E1959**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_48, (&V_9), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0470;
			}

IL_0214_2:
			{
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 L_49 = __this->___U3CU3Eu__1;
				V_9 = L_49;
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9* L_50 = (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_50, sizeof(Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9));
				int32_t L_51 = (-1);
				V_0 = L_51;
				__this->___U3CU3E1__state = L_51;
			}

IL_0231_2:
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_52;
				L_52 = Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_inline((&V_9), Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_RuntimeMethod_var);
				__this->___U3CU3Es__9 = L_52;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_53 = __this->___U3CU3Es__9;
				__this->___U3CxU3E5__8 = L_53;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_54 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CU3Es__9);
				il2cpp_codegen_initobj(L_54, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_55 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CxU3E5__8);
				bool L_56;
				L_56 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_55, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				V_10 = (bool)((((int32_t)L_56) == ((int32_t)0))? 1 : 0);
				bool L_57 = V_10;
				if (!L_57)
				{
					goto IL_026c_2;
				}
			}
			{
				goto IL_02bd_2;
			}

IL_026c_2:
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_58 = __this->___U3CvalueU3E5__1;
				V_12 = L_58;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_59 = __this->___U3CxU3E5__8;
				V_13 = L_59;
				int32_t L_60;
				L_60 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_12), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
				int32_t L_61;
				L_61 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_13), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
				bool L_62;
				L_62 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_12), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				bool L_63;
				L_63 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_13), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				V_11 = (bool)((int32_t)(((((int32_t)L_60) > ((int32_t)L_61))? 1 : 0)&((int32_t)((int32_t)L_62&(int32_t)L_63))));
				bool L_64 = V_11;
				if (!L_64)
				{
					goto IL_02b0_2;
				}
			}
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_65 = __this->___U3CxU3E5__8;
				__this->___U3CvalueU3E5__1 = L_65;
			}

IL_02b0_2:
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_66 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CxU3E5__8);
				il2cpp_codegen_initobj(L_66, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
			}

IL_02bd_2:
			{
				RuntimeObject* L_67 = __this->___U3CeU3E5__2;
				NullCheck(L_67);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_68;
				L_68 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_67);
				V_8 = L_68;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_69;
				L_69 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_15 = L_69;
				bool L_70;
				L_70 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_15), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_70)
				{
					goto IL_0322_2;
				}
			}
			{
				int32_t L_71 = 3;
				V_0 = L_71;
				__this->___U3CU3E1__state = L_71;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_72 = V_15;
				__this->___U3CU3Eu__2 = L_72;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_73 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitAsyncU3Ed__26_1_t32B9C5BC573E86FF0E3D6AE2ADDA0A33F17E1959**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_73, (&V_15), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0470;
			}

IL_0305_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_74 = __this->___U3CU3Eu__2;
				V_15 = L_74;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_75 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_75, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_76 = (-1);
				V_0 = L_76;
				__this->___U3CU3E1__state = L_76;
			}

IL_0322_2:
			{
				bool L_77;
				L_77 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_15), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__10 = L_77;
				bool L_78 = __this->___U3CU3Es__10;
				V_14 = L_78;
				bool L_79 = V_14;
				if (L_79)
				{
					goto IL_01c1_2;
				}
			}
			{
				goto IL_0356_1;
			}

IL_0341_2:
			{
				__this->___U3CU3Es__4 = 1;
				goto IL_0356_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_034a_1;
			}
			throw e;
		}

CATCH_034a_1:
		{
			RuntimeObject* L_80 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_16 = L_80;
			RuntimeObject* L_81 = V_16;
			__this->___U3CU3Es__3 = L_81;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_81);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0356_1;
		}

IL_0356_1:
		{
			RuntimeObject* L_82 = __this->___U3CeU3E5__2;
			V_17 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_82) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_83 = V_17;
			if (!L_83)
			{
				goto IL_03d5_1;
			}
		}
		{
			RuntimeObject* L_84 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_84);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_85;
			L_85 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_84);
			V_19 = L_85;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_86;
			L_86 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_19), NULL);
			V_18 = L_86;
			bool L_87;
			L_87 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_18), NULL);
			if (L_87)
			{
				goto IL_03cc_1;
			}
		}
		{
			int32_t L_88 = 4;
			V_0 = L_88;
			__this->___U3CU3E1__state = L_88;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_89 = V_18;
			__this->___U3CU3Eu__3 = L_89;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_90 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitAsyncU3Ed__26_1_t32B9C5BC573E86FF0E3D6AE2ADDA0A33F17E1959**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_90, (&V_18), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_0470;
		}

IL_03af_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_91 = __this->___U3CU3Eu__3;
			V_18 = L_91;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_92 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3);
			il2cpp_codegen_initobj(L_92, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_93 = (-1);
			V_0 = L_93;
			__this->___U3CU3E1__state = L_93;
		}

IL_03cc_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_18), NULL);
		}

IL_03d5_1:
		{
			RuntimeObject* L_94 = __this->___U3CU3Es__3;
			V_16 = L_94;
			RuntimeObject* L_95 = V_16;
			if (!L_95)
			{
				goto IL_03ff_1;
			}
		}
		{
			RuntimeObject* L_96 = V_16;
			V_20 = ((Exception_t*)IsInstClass((RuntimeObject*)L_96, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_97 = V_20;
			if (L_97)
			{
				goto IL_03f2_1;
			}
		}
		{
			RuntimeObject* L_98 = V_16;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_98, method);
		}

IL_03f2_1:
		{
			Exception_t* L_99 = V_20;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_100;
			L_100 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_99, NULL);
			NullCheck(L_100);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_100, NULL);
		}

IL_03ff_1:
		{
			int32_t L_101 = __this->___U3CU3Es__4;
			V_21 = L_101;
			int32_t L_102 = V_21;
			if ((((int32_t)L_102) == ((int32_t)1)))
			{
				goto IL_040e_1;
			}
		}
		{
			goto IL_0417_1;
		}

IL_040e_1:
		{
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_103 = __this->___U3CU3Es__5;
			V_1 = L_103;
			goto IL_0454;
		}

IL_0417_1:
		{
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_104 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CU3Es__5);
			il2cpp_codegen_initobj(L_104, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_105 = __this->___U3CvalueU3E5__1;
			V_1 = L_105;
			goto IL_0454;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0433;
		}
		throw e;
	}

CATCH_0433:
	{
		Exception_t* L_106 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_20 = L_106;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_107 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder);
		Exception_t* L_108 = V_20;
		AsyncUniTaskMethodBuilder_1_SetException_mE8C5BA18D2449D6BD546630CE70DE315F5F91FCE_inline(L_107, L_108, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mE8C5BA18D2449D6BD546630CE70DE315F5F91FCE_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0470;
	}

IL_0454:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_109 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_110 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m5E0E26E389BF8D15A8935BC741FAADEFF1617158_inline(L_109, L_110, AsyncUniTaskMethodBuilder_1_SetResult_m5E0E26E389BF8D15A8935BC741FAADEFF1617158_RuntimeMethod_var);
	}

IL_0470:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__26_1_SetStateMachine_mED1ABEDE667D993F5FB2E769D2533969BDA9BABD_gshared (U3CMinAwaitAsyncU3Ed__26_1_t32B9C5BC573E86FF0E3D6AE2ADDA0A33F17E1959* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__2_2__ctor_m48D4C7C6C9AF9BED9F9F1B42EF3BC46E29BA8AE3_gshared (U3CMinAwaitAsyncU3Ed__2_2_tC4C04F1FA6926939951BAE8BE0B35F525D3CBF06* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__2_2_MoveNext_m2FE842EE1F6FE349E53E3376925C3CFCD3CC5453_gshared (U3CMinAwaitAsyncU3Ed__2_2_tC4C04F1FA6926939951BAE8BE0B35F525D3CBF06* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TResult_t50B6445785345128542A7E124427F6BA665FE33A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const uint32_t SizeOf_Awaiter_t9CF917D5AD9A2DBBBC42472F253D714E0ADC0A43 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const uint32_t SizeOf_UniTask_1_t38235A07ADDA950DEA71CF2D8A1125CF3898CA82 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const uint32_t SizeOf_TSource_tBFCA3C5F2030F474A0FC48166082CECEC91BC367 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_tBFCA3C5F2030F474A0FC48166082CECEC91BC367);
	const Il2CppFullySharedGenericAny L_34 = L_10;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_TResult_t50B6445785345128542A7E124427F6BA665FE33A);
	const Il2CppFullySharedGenericAny L_31 = L_18;
	const Il2CppFullySharedGenericAny L_42 = L_18;
	const Il2CppFullySharedGenericAny L_49 = L_18;
	const Il2CppFullySharedGenericAny L_82 = L_18;
	const Il2CppFullySharedGenericAny L_83 = L_18;
	const Il2CppFullySharedGenericAny L_86 = L_18;
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_TResult_t50B6445785345128542A7E124427F6BA665FE33A);
	const Il2CppFullySharedGenericAny L_43 = L_19;
	const Il2CppFullySharedGenericAny L_45 = alloca(SizeOf_TResult_t50B6445785345128542A7E124427F6BA665FE33A);
	const Il2CppFullySharedGenericAny L_46 = alloca(SizeOf_TResult_t50B6445785345128542A7E124427F6BA665FE33A);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_12 = alloca(SizeOf_Awaiter_t9CF917D5AD9A2DBBBC42472F253D714E0ADC0A43);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_15 = L_12;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_16 = L_12;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_36 = L_12;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_39 = L_12;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_40 = L_12;
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_11 = alloca(SizeOf_UniTask_1_t38235A07ADDA950DEA71CF2D8A1125CF3898CA82);
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_35 = L_11;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TResult_t50B6445785345128542A7E124427F6BA665FE33A);
	memset(V_1, 0, SizeOf_TResult_t50B6445785345128542A7E124427F6BA665FE33A);
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_2 = alloca(SizeOf_Awaiter_t9CF917D5AD9A2DBBBC42472F253D714E0ADC0A43);
	memset(V_2, 0, SizeOf_Awaiter_t9CF917D5AD9A2DBBBC42472F253D714E0ADC0A43);
	UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 V_3 = alloca(SizeOf_UniTask_1_t38235A07ADDA950DEA71CF2D8A1125CF3898CA82);
	memset(V_3, 0, SizeOf_UniTask_1_t38235A07ADDA950DEA71CF2D8A1125CF3898CA82);
	U3CMinAwaitAsyncU3Ed__2_2_tC4C04F1FA6926939951BAE8BE0B35F525D3CBF06* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_8 = alloca(SizeOf_Awaiter_t9CF917D5AD9A2DBBBC42472F253D714E0ADC0A43);
	memset(V_8, 0, SizeOf_Awaiter_t9CF917D5AD9A2DBBBC42472F253D714E0ADC0A43);
	bool V_9 = false;
	bool V_10 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_11;
	memset((&V_11), 0, sizeof(V_11));
	RuntimeObject* V_12 = NULL;
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Exception_t* V_16 = NULL;
	int32_t V_17 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
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
			goto IL_0378_1;
		}

IL_001a_1:
		{
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), SizeOf_TResult_t50B6445785345128542A7E124427F6BA665FE33A);
			Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_3;
			L_3 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
			il2cpp_codegen_write_instance_field_data<Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_3);
			RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_4, L_5);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_6);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), NULL);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), 0);
		}

IL_0057_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				switch (L_7)
				{
					case 0:
					{
						goto IL_0070_2;
					}
					case 1:
					{
						goto IL_0072_2;
					}
					case 2:
					{
						goto IL_0077_2;
					}
					case 3:
					{
						goto IL_007c_2;
					}
				}
			}
			{
				goto IL_0081_2;
			}

IL_0070_2:
			{
				goto IL_00d8_2;
			}

IL_0072_2:
			{
				goto IL_0166_2;
			}

IL_0077_2:
			{
				goto IL_0209_2;
			}

IL_007c_2:
			{
				goto IL_02ce_2;
			}

IL_0081_2:
			{
				goto IL_011e_2;
			}

IL_0087_2:
			{
				Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2* L_8 = *(Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				RuntimeObject* L_9 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				InvokerActionInvoker2< Il2CppFullySharedGenericAny, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10)) ? L_10: *(void**)L_10), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_11);
				il2cpp_codegen_memcpy(V_3, L_11, SizeOf_UniTask_1_t38235A07ADDA950DEA71CF2D8A1125CF3898CA82);
				InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)V_3, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_12);
				il2cpp_codegen_memcpy(V_2, L_12, SizeOf_Awaiter_t9CF917D5AD9A2DBBBC42472F253D714E0ADC0A43);
				bool L_13;
				L_13 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
				if (L_13)
				{
					goto IL_00f4_2;
				}
			}
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_14);
				il2cpp_codegen_memcpy(L_15, V_2, SizeOf_Awaiter_t9CF917D5AD9A2DBBBC42472F253D714E0ADC0A43);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16), L_15, SizeOf_Awaiter_t9CF917D5AD9A2DBBBC42472F253D714E0ADC0A43);
				V_4 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CMinAwaitAsyncU3Ed__2_2_tC4C04F1FA6926939951BAE8BE0B35F525D3CBF06**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
				goto IL_045f;
			}

IL_00d8_2:
			{
				il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16)), SizeOf_Awaiter_t9CF917D5AD9A2DBBBC42472F253D714E0ADC0A43);
				il2cpp_codegen_memcpy(V_2, L_16, SizeOf_Awaiter_t9CF917D5AD9A2DBBBC42472F253D714E0ADC0A43);
				il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16)))), SizeOf_Awaiter_t9CF917D5AD9A2DBBBC42472F253D714E0ADC0A43);
				int32_t L_17 = (-1);
				V_0 = L_17;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_17);
			}

IL_00f4_2:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)), il2cpp_rgctx_method(method->klass->rgctx_data, 23), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, (Il2CppFullySharedGenericAny*)L_18);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_18, SizeOf_TResult_t50B6445785345128542A7E124427F6BA665FE33A);
				il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)), SizeOf_TResult_t50B6445785345128542A7E124427F6BA665FE33A);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_19, SizeOf_TResult_t50B6445785345128542A7E124427F6BA665FE33A);
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)))), SizeOf_TResult_t50B6445785345128542A7E124427F6BA665FE33A);
				goto IL_01b0_2;
			}

IL_011e_2:
			{
				RuntimeObject* L_20 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck(L_20);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_21;
				L_21 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_20);
				V_7 = L_21;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_22;
				L_22 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_6 = L_22;
				bool L_23;
				L_23 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_6), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_23)
				{
					goto IL_0183_2;
				}
			}
			{
				int32_t L_24 = 1;
				V_0 = L_24;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_24);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_25 = V_6;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),17), L_25);
				V_4 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitAsyncU3Ed__2_2_tC4C04F1FA6926939951BAE8BE0B35F525D3CBF06**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 25));
				goto IL_045f;
			}

IL_0166_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_26 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),17));
				V_6 = L_26;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),17)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_27 = (-1);
				V_0 = L_27;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_27);
			}

IL_0183_2:
			{
				bool L_28;
				L_28 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_28);
				bool L_29 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12));
				V_5 = L_29;
				bool L_30 = V_5;
				if (L_30)
				{
					goto IL_0087_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)), SizeOf_TResult_t50B6445785345128542A7E124427F6BA665FE33A);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_31, SizeOf_TResult_t50B6445785345128542A7E124427F6BA665FE33A);
				goto IL_030a_2;
			}

IL_01b0_2:
			{
				goto IL_0286_2;
			}

IL_01b6_2:
			{
				Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2* L_32 = *(Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				RuntimeObject* L_33 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck(L_33);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_33, (Il2CppFullySharedGenericAny*)L_34);
				NullCheck(L_32);
				InvokerActionInvoker2< Il2CppFullySharedGenericAny, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_32, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10)) ? L_34: *(void**)L_34), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_35);
				il2cpp_codegen_memcpy(V_3, L_35, SizeOf_UniTask_1_t38235A07ADDA950DEA71CF2D8A1125CF3898CA82);
				InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)V_3, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_36);
				il2cpp_codegen_memcpy(V_8, L_36, SizeOf_Awaiter_t9CF917D5AD9A2DBBBC42472F253D714E0ADC0A43);
				bool L_37;
				L_37 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_8, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
				if (L_37)
				{
					goto IL_0226_2;
				}
			}
			{
				int32_t L_38 = 2;
				V_0 = L_38;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_38);
				il2cpp_codegen_memcpy(L_39, V_8, SizeOf_Awaiter_t9CF917D5AD9A2DBBBC42472F253D714E0ADC0A43);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16), L_39, SizeOf_Awaiter_t9CF917D5AD9A2DBBBC42472F253D714E0ADC0A43);
				V_4 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CMinAwaitAsyncU3Ed__2_2_tC4C04F1FA6926939951BAE8BE0B35F525D3CBF06**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_8, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
				goto IL_045f;
			}

IL_0209_2:
			{
				il2cpp_codegen_memcpy(L_40, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16)), SizeOf_Awaiter_t9CF917D5AD9A2DBBBC42472F253D714E0ADC0A43);
				il2cpp_codegen_memcpy(V_8, L_40, SizeOf_Awaiter_t9CF917D5AD9A2DBBBC42472F253D714E0ADC0A43);
				il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16)))), SizeOf_Awaiter_t9CF917D5AD9A2DBBBC42472F253D714E0ADC0A43);
				int32_t L_41 = (-1);
				V_0 = L_41;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_41);
			}

IL_0226_2:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)), il2cpp_rgctx_method(method->klass->rgctx_data, 23), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_8, (Il2CppFullySharedGenericAny*)L_42);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14), L_42, SizeOf_TResult_t50B6445785345128542A7E124427F6BA665FE33A);
				il2cpp_codegen_memcpy(L_43, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14)), SizeOf_TResult_t50B6445785345128542A7E124427F6BA665FE33A);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_43, SizeOf_TResult_t50B6445785345128542A7E124427F6BA665FE33A);
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14)))), SizeOf_TResult_t50B6445785345128542A7E124427F6BA665FE33A);
				Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_44 = *(Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				il2cpp_codegen_memcpy(L_45, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)), SizeOf_TResult_t50B6445785345128542A7E124427F6BA665FE33A);
				il2cpp_codegen_memcpy(L_46, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)), SizeOf_TResult_t50B6445785345128542A7E124427F6BA665FE33A);
				NullCheck(L_44);
				int32_t L_47;
				L_47 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_44, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_45: *(void**)L_45), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_46: *(void**)L_46));
				V_9 = (bool)((((int32_t)L_47) > ((int32_t)0))? 1 : 0);
				bool L_48 = V_9;
				if (!L_48)
				{
					goto IL_0279_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_49, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)), SizeOf_TResult_t50B6445785345128542A7E124427F6BA665FE33A);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_49, SizeOf_TResult_t50B6445785345128542A7E124427F6BA665FE33A);
			}

IL_0279_2:
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)))), SizeOf_TResult_t50B6445785345128542A7E124427F6BA665FE33A);
			}

IL_0286_2:
			{
				RuntimeObject* L_50 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck(L_50);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_51;
				L_51 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_50);
				V_7 = L_51;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_52;
				L_52 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_11 = L_52;
				bool L_53;
				L_53 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_11), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_53)
				{
					goto IL_02eb_2;
				}
			}
			{
				int32_t L_54 = 3;
				V_0 = L_54;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_54);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_55 = V_11;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),17), L_55);
				V_4 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitAsyncU3Ed__2_2_tC4C04F1FA6926939951BAE8BE0B35F525D3CBF06**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 25));
				goto IL_045f;
			}

IL_02ce_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_56 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),17));
				V_11 = L_56;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),17)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_57 = (-1);
				V_0 = L_57;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_57);
			}

IL_02eb_2:
			{
				bool L_58;
				L_58 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_11), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15), L_58);
				bool L_59 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15));
				V_10 = L_59;
				bool L_60 = V_10;
				if (L_60)
				{
					goto IL_01b6_2;
				}
			}
			{
				goto IL_031f_1;
			}

IL_030a_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), 1);
				goto IL_031f_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0313_1;
			}
			throw e;
		}

CATCH_0313_1:
		{
			RuntimeObject* L_61 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_12 = L_61;
			RuntimeObject* L_62 = V_12;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_62);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_031f_1;
		}

IL_031f_1:
		{
			RuntimeObject* L_63 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_63) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_64 = V_13;
			if (!L_64)
			{
				goto IL_039e_1;
			}
		}
		{
			RuntimeObject* L_65 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			NullCheck((RuntimeObject*)L_65);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_66;
			L_66 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_65);
			V_15 = L_66;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_67;
			L_67 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_15), NULL);
			V_14 = L_67;
			bool L_68;
			L_68 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_68)
			{
				goto IL_0395_1;
			}
		}
		{
			int32_t L_69 = 4;
			V_0 = L_69;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_69);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_70 = V_14;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),18), L_70);
			V_4 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitAsyncU3Ed__2_2_tC4C04F1FA6926939951BAE8BE0B35F525D3CBF06**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 27));
			goto IL_045f;
		}

IL_0378_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_71 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),18));
			V_14 = L_71;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),18)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_72 = (-1);
			V_0 = L_72;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_72);
		}

IL_0395_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_039e_1:
		{
			RuntimeObject* L_73 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			V_12 = L_73;
			RuntimeObject* L_74 = V_12;
			if (!L_74)
			{
				goto IL_03c8_1;
			}
		}
		{
			RuntimeObject* L_75 = V_12;
			V_16 = ((Exception_t*)IsInstClass((RuntimeObject*)L_75, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_76 = V_16;
			if (L_76)
			{
				goto IL_03bb_1;
			}
		}
		{
			RuntimeObject* L_77 = V_12;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_77, method);
		}

IL_03bb_1:
		{
			Exception_t* L_78 = V_16;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_79;
			L_79 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_78, NULL);
			NullCheck(L_79);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_79, NULL);
		}

IL_03c8_1:
		{
			int32_t L_80 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
			V_17 = L_80;
			int32_t L_81 = V_17;
			if ((((int32_t)L_81) == ((int32_t)1)))
			{
				goto IL_03d7_1;
			}
		}
		{
			goto IL_03e0_1;
		}

IL_03d7_1:
		{
			il2cpp_codegen_memcpy(L_82, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TResult_t50B6445785345128542A7E124427F6BA665FE33A);
			il2cpp_codegen_memcpy(V_1, L_82, SizeOf_TResult_t50B6445785345128542A7E124427F6BA665FE33A);
			goto IL_0430;
		}

IL_03e0_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)))), SizeOf_TResult_t50B6445785345128542A7E124427F6BA665FE33A);
			il2cpp_codegen_memcpy(L_83, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)), SizeOf_TResult_t50B6445785345128542A7E124427F6BA665FE33A);
			il2cpp_codegen_memcpy(V_1, L_83, SizeOf_TResult_t50B6445785345128542A7E124427F6BA665FE33A);
			goto IL_0430;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_03fc;
		}
		throw e;
	}

CATCH_03fc:
	{
		Exception_t* L_84 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_16 = L_84;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), SizeOf_TResult_t50B6445785345128542A7E124427F6BA665FE33A);
		il2cpp_codegen_write_instance_field_data<Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB*)NULL);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), (RuntimeObject*)NULL);
		Exception_t* L_85 = V_16;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_85, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_045f;
	}

IL_0430:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), SizeOf_TResult_t50B6445785345128542A7E124427F6BA665FE33A);
		il2cpp_codegen_write_instance_field_data<Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB*)NULL);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_86, V_1, SizeOf_TResult_t50B6445785345128542A7E124427F6BA665FE33A);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)), il2cpp_rgctx_method(method->klass->rgctx_data, 29), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_86: *(void**)L_86));
	}

IL_045f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__2_2_SetStateMachine_m2E252C89F72165F3206180D8B37316C76013B29D_gshared (U3CMinAwaitAsyncU3Ed__2_2_tC4C04F1FA6926939951BAE8BE0B35F525D3CBF06* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__30_1__ctor_m2B5CA8786AEA822B48E64573E730A638563D9813_gshared (U3CMinAwaitAsyncU3Ed__30_1_t5A3847356FEB27C6D92F487EE95082E800D96591* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__30_1_MoveNext_mA999B5EE7FE16DA69ABED27F74A1868D21A54472_gshared (U3CMinAwaitAsyncU3Ed__30_1_t5A3847356FEB27C6D92F487EE95082E800D96591* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m79D800118F9BCD740C939B134E630A8AB93AA606_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t40430AE0D6C3F51CB7BD11948E61CF36CEB6298B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t40430AE0D6C3F51CB7BD11948E61CF36CEB6298B);
	const Il2CppFullySharedGenericAny L_42 = L_10;
	int32_t V_0 = 0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CMinAwaitAsyncU3Ed__30_1_t5A3847356FEB27C6D92F487EE95082E800D96591* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_15;
	memset((&V_15), 0, sizeof(V_15));
	RuntimeObject* V_16 = NULL;
	bool V_17 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_18;
	memset((&V_18), 0, sizeof(V_18));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_19;
	memset((&V_19), 0, sizeof(V_19));
	Exception_t* V_20 = NULL;
	int32_t V_21 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_004c_1;
		}

IL_0015_1:
		{
			goto IL_03af_1;
		}

IL_001a_1:
		{
			Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_3 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CvalueU3E5__1);
			il2cpp_codegen_initobj(L_3, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
			RuntimeObject* L_4 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = __this->___cancellationToken;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__2 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)L_6);
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			__this->___U3CU3Es__4 = 0;
		}

IL_004c_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				switch (L_7)
				{
					case 0:
					{
						goto IL_0065_2;
					}
					case 1:
					{
						goto IL_0067_2;
					}
					case 2:
					{
						goto IL_006c_2;
					}
					case 3:
					{
						goto IL_0071_2;
					}
				}
			}
			{
				goto IL_0076_2;
			}

IL_0065_2:
			{
				goto IL_00cd_2;
			}

IL_0067_2:
			{
				goto IL_0171_2;
			}

IL_006c_2:
			{
				goto IL_0214_2;
			}

IL_0071_2:
			{
				goto IL_0305_2;
			}

IL_0076_2:
			{
				goto IL_0129_2;
			}

IL_007c_2:
			{
				Func_2_t898AEF8B0AC8B5CB054F91316F69A4739DB2E5B6* L_8 = __this->___selector;
				RuntimeObject* L_9 = __this->___U3CeU3E5__2;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C L_11;
				L_11 = InvokerFuncInvoker1< UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
				V_3 = L_11;
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB L_12;
				L_12 = UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_inline((&V_3), UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_RuntimeMethod_var);
				V_2 = L_12;
				bool L_13;
				L_13 = Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_inline((&V_2), Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_00e9_2;
				}
			}
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->___U3CU3E1__state = L_14;
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB L_15 = V_2;
				__this->___U3CU3Eu__1 = L_15;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_16 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*, Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB*, U3CMinAwaitAsyncU3Ed__30_1_t5A3847356FEB27C6D92F487EE95082E800D96591**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_16, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0470;
			}

IL_00cd_2:
			{
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB L_17 = __this->___U3CU3Eu__1;
				V_2 = L_17;
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB* L_18 = (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_18, sizeof(Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state = L_19;
			}

IL_00e9_2:
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_20;
				L_20 = Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_inline((&V_2), Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_20;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_21 = __this->___U3CU3Es__6;
				__this->___U3CvalueU3E5__1 = L_21;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_22 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CU3Es__6);
				il2cpp_codegen_initobj(L_22, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_23 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CvalueU3E5__1);
				bool L_24;
				L_24 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline(L_23, Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
				V_5 = (bool)((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
				bool L_25 = V_5;
				if (!L_25)
				{
					goto IL_0124_2;
				}
			}
			{
				goto IL_0129_2;
			}

IL_0124_2:
			{
				goto IL_01bb_2;
			}

IL_0129_2:
			{
				RuntimeObject* L_26 = __this->___U3CeU3E5__2;
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
					goto IL_018e_2;
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
				AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_32 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitAsyncU3Ed__30_1_t5A3847356FEB27C6D92F487EE95082E800D96591**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_32, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0470;
			}

IL_0171_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_33 = __this->___U3CU3Eu__2;
				V_7 = L_33;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_34, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_35 = (-1);
				V_0 = L_35;
				__this->___U3CU3E1__state = L_35;
			}

IL_018e_2:
			{
				bool L_36;
				L_36 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7 = L_36;
				bool L_37 = __this->___U3CU3Es__7;
				V_6 = L_37;
				bool L_38 = V_6;
				if (L_38)
				{
					goto IL_007c_2;
				}
			}
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_39 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CU3Es__5);
				il2cpp_codegen_initobj(L_39, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
				goto IL_0341_2;
			}

IL_01bb_2:
			{
				goto IL_02bd_2;
			}

IL_01c1_2:
			{
				Func_2_t898AEF8B0AC8B5CB054F91316F69A4739DB2E5B6* L_40 = __this->___selector;
				RuntimeObject* L_41 = __this->___U3CeU3E5__2;
				NullCheck(L_41);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_41, (Il2CppFullySharedGenericAny*)L_42);
				NullCheck(L_40);
				UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C L_43;
				L_43 = InvokerFuncInvoker1< UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_40, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_42: *(void**)L_42));
				V_3 = L_43;
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB L_44;
				L_44 = UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_inline((&V_3), UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_RuntimeMethod_var);
				V_9 = L_44;
				bool L_45;
				L_45 = Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_inline((&V_9), Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_RuntimeMethod_var);
				if (L_45)
				{
					goto IL_0231_2;
				}
			}
			{
				int32_t L_46 = 2;
				V_0 = L_46;
				__this->___U3CU3E1__state = L_46;
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB L_47 = V_9;
				__this->___U3CU3Eu__1 = L_47;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_48 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*, Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB*, U3CMinAwaitAsyncU3Ed__30_1_t5A3847356FEB27C6D92F487EE95082E800D96591**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_48, (&V_9), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0470;
			}

IL_0214_2:
			{
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB L_49 = __this->___U3CU3Eu__1;
				V_9 = L_49;
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB* L_50 = (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_50, sizeof(Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB));
				int32_t L_51 = (-1);
				V_0 = L_51;
				__this->___U3CU3E1__state = L_51;
			}

IL_0231_2:
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_52;
				L_52 = Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_inline((&V_9), Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_RuntimeMethod_var);
				__this->___U3CU3Es__9 = L_52;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_53 = __this->___U3CU3Es__9;
				__this->___U3CxU3E5__8 = L_53;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_54 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CU3Es__9);
				il2cpp_codegen_initobj(L_54, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_55 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CxU3E5__8);
				bool L_56;
				L_56 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline(L_55, Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
				V_10 = (bool)((((int32_t)L_56) == ((int32_t)0))? 1 : 0);
				bool L_57 = V_10;
				if (!L_57)
				{
					goto IL_026c_2;
				}
			}
			{
				goto IL_02bd_2;
			}

IL_026c_2:
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_58 = __this->___U3CvalueU3E5__1;
				V_12 = L_58;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_59 = __this->___U3CxU3E5__8;
				V_13 = L_59;
				int64_t L_60;
				L_60 = Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_inline((&V_12), Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
				int64_t L_61;
				L_61 = Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_inline((&V_13), Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
				bool L_62;
				L_62 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline((&V_12), Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
				bool L_63;
				L_63 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline((&V_13), Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
				V_11 = (bool)((int32_t)(((((int64_t)L_60) > ((int64_t)L_61))? 1 : 0)&((int32_t)((int32_t)L_62&(int32_t)L_63))));
				bool L_64 = V_11;
				if (!L_64)
				{
					goto IL_02b0_2;
				}
			}
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_65 = __this->___U3CxU3E5__8;
				__this->___U3CvalueU3E5__1 = L_65;
			}

IL_02b0_2:
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_66 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CxU3E5__8);
				il2cpp_codegen_initobj(L_66, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
			}

IL_02bd_2:
			{
				RuntimeObject* L_67 = __this->___U3CeU3E5__2;
				NullCheck(L_67);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_68;
				L_68 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_67);
				V_8 = L_68;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_69;
				L_69 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_15 = L_69;
				bool L_70;
				L_70 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_15), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_70)
				{
					goto IL_0322_2;
				}
			}
			{
				int32_t L_71 = 3;
				V_0 = L_71;
				__this->___U3CU3E1__state = L_71;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_72 = V_15;
				__this->___U3CU3Eu__2 = L_72;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_73 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitAsyncU3Ed__30_1_t5A3847356FEB27C6D92F487EE95082E800D96591**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_73, (&V_15), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0470;
			}

IL_0305_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_74 = __this->___U3CU3Eu__2;
				V_15 = L_74;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_75 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_75, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_76 = (-1);
				V_0 = L_76;
				__this->___U3CU3E1__state = L_76;
			}

IL_0322_2:
			{
				bool L_77;
				L_77 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_15), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__10 = L_77;
				bool L_78 = __this->___U3CU3Es__10;
				V_14 = L_78;
				bool L_79 = V_14;
				if (L_79)
				{
					goto IL_01c1_2;
				}
			}
			{
				goto IL_0356_1;
			}

IL_0341_2:
			{
				__this->___U3CU3Es__4 = 1;
				goto IL_0356_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_034a_1;
			}
			throw e;
		}

CATCH_034a_1:
		{
			RuntimeObject* L_80 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_16 = L_80;
			RuntimeObject* L_81 = V_16;
			__this->___U3CU3Es__3 = L_81;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_81);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0356_1;
		}

IL_0356_1:
		{
			RuntimeObject* L_82 = __this->___U3CeU3E5__2;
			V_17 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_82) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_83 = V_17;
			if (!L_83)
			{
				goto IL_03d5_1;
			}
		}
		{
			RuntimeObject* L_84 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_84);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_85;
			L_85 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_84);
			V_19 = L_85;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_86;
			L_86 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_19), NULL);
			V_18 = L_86;
			bool L_87;
			L_87 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_18), NULL);
			if (L_87)
			{
				goto IL_03cc_1;
			}
		}
		{
			int32_t L_88 = 4;
			V_0 = L_88;
			__this->___U3CU3E1__state = L_88;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_89 = V_18;
			__this->___U3CU3Eu__3 = L_89;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_90 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitAsyncU3Ed__30_1_t5A3847356FEB27C6D92F487EE95082E800D96591**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_90, (&V_18), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_0470;
		}

IL_03af_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_91 = __this->___U3CU3Eu__3;
			V_18 = L_91;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_92 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3);
			il2cpp_codegen_initobj(L_92, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_93 = (-1);
			V_0 = L_93;
			__this->___U3CU3E1__state = L_93;
		}

IL_03cc_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_18), NULL);
		}

IL_03d5_1:
		{
			RuntimeObject* L_94 = __this->___U3CU3Es__3;
			V_16 = L_94;
			RuntimeObject* L_95 = V_16;
			if (!L_95)
			{
				goto IL_03ff_1;
			}
		}
		{
			RuntimeObject* L_96 = V_16;
			V_20 = ((Exception_t*)IsInstClass((RuntimeObject*)L_96, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_97 = V_20;
			if (L_97)
			{
				goto IL_03f2_1;
			}
		}
		{
			RuntimeObject* L_98 = V_16;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_98, method);
		}

IL_03f2_1:
		{
			Exception_t* L_99 = V_20;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_100;
			L_100 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_99, NULL);
			NullCheck(L_100);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_100, NULL);
		}

IL_03ff_1:
		{
			int32_t L_101 = __this->___U3CU3Es__4;
			V_21 = L_101;
			int32_t L_102 = V_21;
			if ((((int32_t)L_102) == ((int32_t)1)))
			{
				goto IL_040e_1;
			}
		}
		{
			goto IL_0417_1;
		}

IL_040e_1:
		{
			Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_103 = __this->___U3CU3Es__5;
			V_1 = L_103;
			goto IL_0454;
		}

IL_0417_1:
		{
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_104 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CU3Es__5);
			il2cpp_codegen_initobj(L_104, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
			Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_105 = __this->___U3CvalueU3E5__1;
			V_1 = L_105;
			goto IL_0454;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0433;
		}
		throw e;
	}

CATCH_0433:
	{
		Exception_t* L_106 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_20 = L_106;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_107 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder);
		Exception_t* L_108 = V_20;
		AsyncUniTaskMethodBuilder_1_SetException_m668B0B683F2B4B7005D076DE9400F32B1702673B_inline(L_107, L_108, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m668B0B683F2B4B7005D076DE9400F32B1702673B_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0470;
	}

IL_0454:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_109 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder);
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_110 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m79D800118F9BCD740C939B134E630A8AB93AA606_inline(L_109, L_110, AsyncUniTaskMethodBuilder_1_SetResult_m79D800118F9BCD740C939B134E630A8AB93AA606_RuntimeMethod_var);
	}

IL_0470:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__30_1_SetStateMachine_m579088E2A8843BD9106BB9770C6950712A6CFBD4_gshared (U3CMinAwaitAsyncU3Ed__30_1_t5A3847356FEB27C6D92F487EE95082E800D96591* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__34_1__ctor_mD8B4F4A89BD92F364CFDE1E52E4F6D685C0DA38D_gshared (U3CMinAwaitAsyncU3Ed__34_1_t68A8606EE27F3962E5D68168CF31BC0D359DB041* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__34_1_MoveNext_mA28F0961BB0D212E4DDB7852D5D6C3BF299BFBFF_gshared (U3CMinAwaitAsyncU3Ed__34_1_t68A8606EE27F3962E5D68168CF31BC0D359DB041* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t5D719ED09E5EF8E04CFDB202C6FAAE0ECF7B0479 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t5D719ED09E5EF8E04CFDB202C6FAAE0ECF7B0479);
	const Il2CppFullySharedGenericAny L_42 = L_10;
	int32_t V_0 = 0;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CMinAwaitAsyncU3Ed__34_1_t68A8606EE27F3962E5D68168CF31BC0D359DB041* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_15;
	memset((&V_15), 0, sizeof(V_15));
	RuntimeObject* V_16 = NULL;
	bool V_17 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_18;
	memset((&V_18), 0, sizeof(V_18));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_19;
	memset((&V_19), 0, sizeof(V_19));
	Exception_t* V_20 = NULL;
	int32_t V_21 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_004c_1;
		}

IL_0015_1:
		{
			goto IL_03af_1;
		}

IL_001a_1:
		{
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_3 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CvalueU3E5__1);
			il2cpp_codegen_initobj(L_3, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
			RuntimeObject* L_4 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = __this->___cancellationToken;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__2 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)L_6);
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			__this->___U3CU3Es__4 = 0;
		}

IL_004c_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				switch (L_7)
				{
					case 0:
					{
						goto IL_0065_2;
					}
					case 1:
					{
						goto IL_0067_2;
					}
					case 2:
					{
						goto IL_006c_2;
					}
					case 3:
					{
						goto IL_0071_2;
					}
				}
			}
			{
				goto IL_0076_2;
			}

IL_0065_2:
			{
				goto IL_00cd_2;
			}

IL_0067_2:
			{
				goto IL_0171_2;
			}

IL_006c_2:
			{
				goto IL_0214_2;
			}

IL_0071_2:
			{
				goto IL_0305_2;
			}

IL_0076_2:
			{
				goto IL_0129_2;
			}

IL_007c_2:
			{
				Func_2_t9F80A31065CD628F063DA0D192A111706F695666* L_8 = __this->___selector;
				RuntimeObject* L_9 = __this->___U3CeU3E5__2;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46 L_11;
				L_11 = InvokerFuncInvoker1< UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
				V_3 = L_11;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_12;
				L_12 = UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_inline((&V_3), UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_RuntimeMethod_var);
				V_2 = L_12;
				bool L_13;
				L_13 = Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_inline((&V_2), Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_00e9_2;
				}
			}
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->___U3CU3E1__state = L_14;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_15 = V_2;
				__this->___U3CU3Eu__1 = L_15;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_16 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91*, U3CMinAwaitAsyncU3Ed__34_1_t68A8606EE27F3962E5D68168CF31BC0D359DB041**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_16, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0470;
			}

IL_00cd_2:
			{
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_17 = __this->___U3CU3Eu__1;
				V_2 = L_17;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* L_18 = (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_18, sizeof(Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state = L_19;
			}

IL_00e9_2:
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_20;
				L_20 = Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_inline((&V_2), Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_20;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_21 = __this->___U3CU3Es__6;
				__this->___U3CvalueU3E5__1 = L_21;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_22 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CU3Es__6);
				il2cpp_codegen_initobj(L_22, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_23 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CvalueU3E5__1);
				bool L_24;
				L_24 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline(L_23, Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
				V_5 = (bool)((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
				bool L_25 = V_5;
				if (!L_25)
				{
					goto IL_0124_2;
				}
			}
			{
				goto IL_0129_2;
			}

IL_0124_2:
			{
				goto IL_01bb_2;
			}

IL_0129_2:
			{
				RuntimeObject* L_26 = __this->___U3CeU3E5__2;
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
					goto IL_018e_2;
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
				AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_32 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitAsyncU3Ed__34_1_t68A8606EE27F3962E5D68168CF31BC0D359DB041**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_32, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0470;
			}

IL_0171_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_33 = __this->___U3CU3Eu__2;
				V_7 = L_33;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_34, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_35 = (-1);
				V_0 = L_35;
				__this->___U3CU3E1__state = L_35;
			}

IL_018e_2:
			{
				bool L_36;
				L_36 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7 = L_36;
				bool L_37 = __this->___U3CU3Es__7;
				V_6 = L_37;
				bool L_38 = V_6;
				if (L_38)
				{
					goto IL_007c_2;
				}
			}
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_39 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CU3Es__5);
				il2cpp_codegen_initobj(L_39, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
				goto IL_0341_2;
			}

IL_01bb_2:
			{
				goto IL_02bd_2;
			}

IL_01c1_2:
			{
				Func_2_t9F80A31065CD628F063DA0D192A111706F695666* L_40 = __this->___selector;
				RuntimeObject* L_41 = __this->___U3CeU3E5__2;
				NullCheck(L_41);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_41, (Il2CppFullySharedGenericAny*)L_42);
				NullCheck(L_40);
				UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46 L_43;
				L_43 = InvokerFuncInvoker1< UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_40, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_42: *(void**)L_42));
				V_3 = L_43;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_44;
				L_44 = UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_inline((&V_3), UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_RuntimeMethod_var);
				V_9 = L_44;
				bool L_45;
				L_45 = Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_inline((&V_9), Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_RuntimeMethod_var);
				if (L_45)
				{
					goto IL_0231_2;
				}
			}
			{
				int32_t L_46 = 2;
				V_0 = L_46;
				__this->___U3CU3E1__state = L_46;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_47 = V_9;
				__this->___U3CU3Eu__1 = L_47;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_48 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91*, U3CMinAwaitAsyncU3Ed__34_1_t68A8606EE27F3962E5D68168CF31BC0D359DB041**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_48, (&V_9), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0470;
			}

IL_0214_2:
			{
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_49 = __this->___U3CU3Eu__1;
				V_9 = L_49;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* L_50 = (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_50, sizeof(Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91));
				int32_t L_51 = (-1);
				V_0 = L_51;
				__this->___U3CU3E1__state = L_51;
			}

IL_0231_2:
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_52;
				L_52 = Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_inline((&V_9), Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_RuntimeMethod_var);
				__this->___U3CU3Es__9 = L_52;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_53 = __this->___U3CU3Es__9;
				__this->___U3CxU3E5__8 = L_53;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_54 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CU3Es__9);
				il2cpp_codegen_initobj(L_54, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_55 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CxU3E5__8);
				bool L_56;
				L_56 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline(L_55, Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
				V_10 = (bool)((((int32_t)L_56) == ((int32_t)0))? 1 : 0);
				bool L_57 = V_10;
				if (!L_57)
				{
					goto IL_026c_2;
				}
			}
			{
				goto IL_02bd_2;
			}

IL_026c_2:
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_58 = __this->___U3CvalueU3E5__1;
				V_12 = L_58;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_59 = __this->___U3CxU3E5__8;
				V_13 = L_59;
				float L_60;
				L_60 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline((&V_12), Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
				float L_61;
				L_61 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline((&V_13), Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
				bool L_62;
				L_62 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&V_12), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
				bool L_63;
				L_63 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&V_13), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
				V_11 = (bool)((int32_t)(((((float)L_60) > ((float)L_61))? 1 : 0)&((int32_t)((int32_t)L_62&(int32_t)L_63))));
				bool L_64 = V_11;
				if (!L_64)
				{
					goto IL_02b0_2;
				}
			}
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_65 = __this->___U3CxU3E5__8;
				__this->___U3CvalueU3E5__1 = L_65;
			}

IL_02b0_2:
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_66 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CxU3E5__8);
				il2cpp_codegen_initobj(L_66, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
			}

IL_02bd_2:
			{
				RuntimeObject* L_67 = __this->___U3CeU3E5__2;
				NullCheck(L_67);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_68;
				L_68 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_67);
				V_8 = L_68;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_69;
				L_69 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_15 = L_69;
				bool L_70;
				L_70 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_15), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_70)
				{
					goto IL_0322_2;
				}
			}
			{
				int32_t L_71 = 3;
				V_0 = L_71;
				__this->___U3CU3E1__state = L_71;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_72 = V_15;
				__this->___U3CU3Eu__2 = L_72;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_73 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitAsyncU3Ed__34_1_t68A8606EE27F3962E5D68168CF31BC0D359DB041**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_73, (&V_15), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0470;
			}

IL_0305_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_74 = __this->___U3CU3Eu__2;
				V_15 = L_74;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_75 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_75, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_76 = (-1);
				V_0 = L_76;
				__this->___U3CU3E1__state = L_76;
			}

IL_0322_2:
			{
				bool L_77;
				L_77 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_15), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__10 = L_77;
				bool L_78 = __this->___U3CU3Es__10;
				V_14 = L_78;
				bool L_79 = V_14;
				if (L_79)
				{
					goto IL_01c1_2;
				}
			}
			{
				goto IL_0356_1;
			}

IL_0341_2:
			{
				__this->___U3CU3Es__4 = 1;
				goto IL_0356_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_034a_1;
			}
			throw e;
		}

CATCH_034a_1:
		{
			RuntimeObject* L_80 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_16 = L_80;
			RuntimeObject* L_81 = V_16;
			__this->___U3CU3Es__3 = L_81;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_81);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0356_1;
		}

IL_0356_1:
		{
			RuntimeObject* L_82 = __this->___U3CeU3E5__2;
			V_17 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_82) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_83 = V_17;
			if (!L_83)
			{
				goto IL_03d5_1;
			}
		}
		{
			RuntimeObject* L_84 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_84);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_85;
			L_85 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_84);
			V_19 = L_85;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_86;
			L_86 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_19), NULL);
			V_18 = L_86;
			bool L_87;
			L_87 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_18), NULL);
			if (L_87)
			{
				goto IL_03cc_1;
			}
		}
		{
			int32_t L_88 = 4;
			V_0 = L_88;
			__this->___U3CU3E1__state = L_88;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_89 = V_18;
			__this->___U3CU3Eu__3 = L_89;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_90 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitAsyncU3Ed__34_1_t68A8606EE27F3962E5D68168CF31BC0D359DB041**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_90, (&V_18), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_0470;
		}

IL_03af_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_91 = __this->___U3CU3Eu__3;
			V_18 = L_91;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_92 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3);
			il2cpp_codegen_initobj(L_92, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_93 = (-1);
			V_0 = L_93;
			__this->___U3CU3E1__state = L_93;
		}

IL_03cc_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_18), NULL);
		}

IL_03d5_1:
		{
			RuntimeObject* L_94 = __this->___U3CU3Es__3;
			V_16 = L_94;
			RuntimeObject* L_95 = V_16;
			if (!L_95)
			{
				goto IL_03ff_1;
			}
		}
		{
			RuntimeObject* L_96 = V_16;
			V_20 = ((Exception_t*)IsInstClass((RuntimeObject*)L_96, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_97 = V_20;
			if (L_97)
			{
				goto IL_03f2_1;
			}
		}
		{
			RuntimeObject* L_98 = V_16;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_98, method);
		}

IL_03f2_1:
		{
			Exception_t* L_99 = V_20;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_100;
			L_100 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_99, NULL);
			NullCheck(L_100);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_100, NULL);
		}

IL_03ff_1:
		{
			int32_t L_101 = __this->___U3CU3Es__4;
			V_21 = L_101;
			int32_t L_102 = V_21;
			if ((((int32_t)L_102) == ((int32_t)1)))
			{
				goto IL_040e_1;
			}
		}
		{
			goto IL_0417_1;
		}

IL_040e_1:
		{
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_103 = __this->___U3CU3Es__5;
			V_1 = L_103;
			goto IL_0454;
		}

IL_0417_1:
		{
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_104 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CU3Es__5);
			il2cpp_codegen_initobj(L_104, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_105 = __this->___U3CvalueU3E5__1;
			V_1 = L_105;
			goto IL_0454;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0433;
		}
		throw e;
	}

CATCH_0433:
	{
		Exception_t* L_106 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_20 = L_106;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_107 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder);
		Exception_t* L_108 = V_20;
		AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_inline(L_107, L_108, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0470;
	}

IL_0454:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_109 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_110 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_inline(L_109, L_110, AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_RuntimeMethod_var);
	}

IL_0470:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__34_1_SetStateMachine_m9C2E48DB26ECDC7277C29C364A43DE2164C392F2_gshared (U3CMinAwaitAsyncU3Ed__34_1_t68A8606EE27F3962E5D68168CF31BC0D359DB041* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__38_1__ctor_m4A0EBAE03B1C15E66751D56E9E0D72D57FF8BB36_gshared (U3CMinAwaitAsyncU3Ed__38_1_t0ABAF5F704BB15DC51A1D769D504B631F649F927* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__38_1_MoveNext_m7F3EE18C5766B320961DF822F26E95822096E114_gshared (U3CMinAwaitAsyncU3Ed__38_1_t0ABAF5F704BB15DC51A1D769D504B631F649F927* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tBDDA13F848B5CFEF2436CD48420D092062B397B4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_tBDDA13F848B5CFEF2436CD48420D092062B397B4);
	const Il2CppFullySharedGenericAny L_42 = L_10;
	int32_t V_0 = 0;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CMinAwaitAsyncU3Ed__38_1_t0ABAF5F704BB15DC51A1D769D504B631F649F927* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_15;
	memset((&V_15), 0, sizeof(V_15));
	RuntimeObject* V_16 = NULL;
	bool V_17 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_18;
	memset((&V_18), 0, sizeof(V_18));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_19;
	memset((&V_19), 0, sizeof(V_19));
	Exception_t* V_20 = NULL;
	int32_t V_21 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_004c_1;
		}

IL_0015_1:
		{
			goto IL_03af_1;
		}

IL_001a_1:
		{
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_3 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CvalueU3E5__1);
			il2cpp_codegen_initobj(L_3, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
			RuntimeObject* L_4 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = __this->___cancellationToken;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__2 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)L_6);
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			__this->___U3CU3Es__4 = 0;
		}

IL_004c_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				switch (L_7)
				{
					case 0:
					{
						goto IL_0065_2;
					}
					case 1:
					{
						goto IL_0067_2;
					}
					case 2:
					{
						goto IL_006c_2;
					}
					case 3:
					{
						goto IL_0071_2;
					}
				}
			}
			{
				goto IL_0076_2;
			}

IL_0065_2:
			{
				goto IL_00cd_2;
			}

IL_0067_2:
			{
				goto IL_0171_2;
			}

IL_006c_2:
			{
				goto IL_0214_2;
			}

IL_0071_2:
			{
				goto IL_0305_2;
			}

IL_0076_2:
			{
				goto IL_0129_2;
			}

IL_007c_2:
			{
				Func_2_tEBD22D2F4376CEDF9152BDE05B6E363699F0C7E1* L_8 = __this->___selector;
				RuntimeObject* L_9 = __this->___U3CeU3E5__2;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E L_11;
				L_11 = InvokerFuncInvoker1< UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
				V_3 = L_11;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_12;
				L_12 = UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_inline((&V_3), UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_RuntimeMethod_var);
				V_2 = L_12;
				bool L_13;
				L_13 = Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_inline((&V_2), Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_00e9_2;
				}
			}
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->___U3CU3E1__state = L_14;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_15 = V_2;
				__this->___U3CU3Eu__1 = L_15;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_16 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0*, U3CMinAwaitAsyncU3Ed__38_1_t0ABAF5F704BB15DC51A1D769D504B631F649F927**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_16, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0470;
			}

IL_00cd_2:
			{
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_17 = __this->___U3CU3Eu__1;
				V_2 = L_17;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* L_18 = (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_18, sizeof(Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state = L_19;
			}

IL_00e9_2:
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_20;
				L_20 = Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_inline((&V_2), Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_20;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_21 = __this->___U3CU3Es__6;
				__this->___U3CvalueU3E5__1 = L_21;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_22 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CU3Es__6);
				il2cpp_codegen_initobj(L_22, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_23 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CvalueU3E5__1);
				bool L_24;
				L_24 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline(L_23, Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
				V_5 = (bool)((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
				bool L_25 = V_5;
				if (!L_25)
				{
					goto IL_0124_2;
				}
			}
			{
				goto IL_0129_2;
			}

IL_0124_2:
			{
				goto IL_01bb_2;
			}

IL_0129_2:
			{
				RuntimeObject* L_26 = __this->___U3CeU3E5__2;
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
					goto IL_018e_2;
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
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_32 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitAsyncU3Ed__38_1_t0ABAF5F704BB15DC51A1D769D504B631F649F927**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_32, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0470;
			}

IL_0171_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_33 = __this->___U3CU3Eu__2;
				V_7 = L_33;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_34, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_35 = (-1);
				V_0 = L_35;
				__this->___U3CU3E1__state = L_35;
			}

IL_018e_2:
			{
				bool L_36;
				L_36 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7 = L_36;
				bool L_37 = __this->___U3CU3Es__7;
				V_6 = L_37;
				bool L_38 = V_6;
				if (L_38)
				{
					goto IL_007c_2;
				}
			}
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_39 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CU3Es__5);
				il2cpp_codegen_initobj(L_39, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
				goto IL_0341_2;
			}

IL_01bb_2:
			{
				goto IL_02bd_2;
			}

IL_01c1_2:
			{
				Func_2_tEBD22D2F4376CEDF9152BDE05B6E363699F0C7E1* L_40 = __this->___selector;
				RuntimeObject* L_41 = __this->___U3CeU3E5__2;
				NullCheck(L_41);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_41, (Il2CppFullySharedGenericAny*)L_42);
				NullCheck(L_40);
				UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E L_43;
				L_43 = InvokerFuncInvoker1< UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_40, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_42: *(void**)L_42));
				V_3 = L_43;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_44;
				L_44 = UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_inline((&V_3), UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_RuntimeMethod_var);
				V_9 = L_44;
				bool L_45;
				L_45 = Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_inline((&V_9), Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_RuntimeMethod_var);
				if (L_45)
				{
					goto IL_0231_2;
				}
			}
			{
				int32_t L_46 = 2;
				V_0 = L_46;
				__this->___U3CU3E1__state = L_46;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_47 = V_9;
				__this->___U3CU3Eu__1 = L_47;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_48 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0*, U3CMinAwaitAsyncU3Ed__38_1_t0ABAF5F704BB15DC51A1D769D504B631F649F927**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_48, (&V_9), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0470;
			}

IL_0214_2:
			{
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_49 = __this->___U3CU3Eu__1;
				V_9 = L_49;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* L_50 = (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_50, sizeof(Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0));
				int32_t L_51 = (-1);
				V_0 = L_51;
				__this->___U3CU3E1__state = L_51;
			}

IL_0231_2:
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_52;
				L_52 = Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_inline((&V_9), Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_RuntimeMethod_var);
				__this->___U3CU3Es__9 = L_52;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_53 = __this->___U3CU3Es__9;
				__this->___U3CxU3E5__8 = L_53;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_54 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CU3Es__9);
				il2cpp_codegen_initobj(L_54, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_55 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CxU3E5__8);
				bool L_56;
				L_56 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline(L_55, Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
				V_10 = (bool)((((int32_t)L_56) == ((int32_t)0))? 1 : 0);
				bool L_57 = V_10;
				if (!L_57)
				{
					goto IL_026c_2;
				}
			}
			{
				goto IL_02bd_2;
			}

IL_026c_2:
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_58 = __this->___U3CvalueU3E5__1;
				V_12 = L_58;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_59 = __this->___U3CxU3E5__8;
				V_13 = L_59;
				double L_60;
				L_60 = Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_inline((&V_12), Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var);
				double L_61;
				L_61 = Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_inline((&V_13), Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var);
				bool L_62;
				L_62 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&V_12), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
				bool L_63;
				L_63 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&V_13), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
				V_11 = (bool)((int32_t)(((((double)L_60) > ((double)L_61))? 1 : 0)&((int32_t)((int32_t)L_62&(int32_t)L_63))));
				bool L_64 = V_11;
				if (!L_64)
				{
					goto IL_02b0_2;
				}
			}
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_65 = __this->___U3CxU3E5__8;
				__this->___U3CvalueU3E5__1 = L_65;
			}

IL_02b0_2:
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_66 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CxU3E5__8);
				il2cpp_codegen_initobj(L_66, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
			}

IL_02bd_2:
			{
				RuntimeObject* L_67 = __this->___U3CeU3E5__2;
				NullCheck(L_67);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_68;
				L_68 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_67);
				V_8 = L_68;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_69;
				L_69 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_15 = L_69;
				bool L_70;
				L_70 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_15), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_70)
				{
					goto IL_0322_2;
				}
			}
			{
				int32_t L_71 = 3;
				V_0 = L_71;
				__this->___U3CU3E1__state = L_71;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_72 = V_15;
				__this->___U3CU3Eu__2 = L_72;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_73 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitAsyncU3Ed__38_1_t0ABAF5F704BB15DC51A1D769D504B631F649F927**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_73, (&V_15), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0470;
			}

IL_0305_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_74 = __this->___U3CU3Eu__2;
				V_15 = L_74;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_75 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_75, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_76 = (-1);
				V_0 = L_76;
				__this->___U3CU3E1__state = L_76;
			}

IL_0322_2:
			{
				bool L_77;
				L_77 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_15), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__10 = L_77;
				bool L_78 = __this->___U3CU3Es__10;
				V_14 = L_78;
				bool L_79 = V_14;
				if (L_79)
				{
					goto IL_01c1_2;
				}
			}
			{
				goto IL_0356_1;
			}

IL_0341_2:
			{
				__this->___U3CU3Es__4 = 1;
				goto IL_0356_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_034a_1;
			}
			throw e;
		}

CATCH_034a_1:
		{
			RuntimeObject* L_80 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_16 = L_80;
			RuntimeObject* L_81 = V_16;
			__this->___U3CU3Es__3 = L_81;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_81);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0356_1;
		}

IL_0356_1:
		{
			RuntimeObject* L_82 = __this->___U3CeU3E5__2;
			V_17 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_82) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_83 = V_17;
			if (!L_83)
			{
				goto IL_03d5_1;
			}
		}
		{
			RuntimeObject* L_84 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_84);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_85;
			L_85 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_84);
			V_19 = L_85;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_86;
			L_86 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_19), NULL);
			V_18 = L_86;
			bool L_87;
			L_87 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_18), NULL);
			if (L_87)
			{
				goto IL_03cc_1;
			}
		}
		{
			int32_t L_88 = 4;
			V_0 = L_88;
			__this->___U3CU3E1__state = L_88;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_89 = V_18;
			__this->___U3CU3Eu__3 = L_89;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_90 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitAsyncU3Ed__38_1_t0ABAF5F704BB15DC51A1D769D504B631F649F927**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_90, (&V_18), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_0470;
		}

IL_03af_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_91 = __this->___U3CU3Eu__3;
			V_18 = L_91;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_92 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3);
			il2cpp_codegen_initobj(L_92, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_93 = (-1);
			V_0 = L_93;
			__this->___U3CU3E1__state = L_93;
		}

IL_03cc_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_18), NULL);
		}

IL_03d5_1:
		{
			RuntimeObject* L_94 = __this->___U3CU3Es__3;
			V_16 = L_94;
			RuntimeObject* L_95 = V_16;
			if (!L_95)
			{
				goto IL_03ff_1;
			}
		}
		{
			RuntimeObject* L_96 = V_16;
			V_20 = ((Exception_t*)IsInstClass((RuntimeObject*)L_96, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_97 = V_20;
			if (L_97)
			{
				goto IL_03f2_1;
			}
		}
		{
			RuntimeObject* L_98 = V_16;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_98, method);
		}

IL_03f2_1:
		{
			Exception_t* L_99 = V_20;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_100;
			L_100 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_99, NULL);
			NullCheck(L_100);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_100, NULL);
		}

IL_03ff_1:
		{
			int32_t L_101 = __this->___U3CU3Es__4;
			V_21 = L_101;
			int32_t L_102 = V_21;
			if ((((int32_t)L_102) == ((int32_t)1)))
			{
				goto IL_040e_1;
			}
		}
		{
			goto IL_0417_1;
		}

IL_040e_1:
		{
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_103 = __this->___U3CU3Es__5;
			V_1 = L_103;
			goto IL_0454;
		}

IL_0417_1:
		{
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_104 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CU3Es__5);
			il2cpp_codegen_initobj(L_104, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_105 = __this->___U3CvalueU3E5__1;
			V_1 = L_105;
			goto IL_0454;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0433;
		}
		throw e;
	}

CATCH_0433:
	{
		Exception_t* L_106 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_20 = L_106;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_107 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
		Exception_t* L_108 = V_20;
		AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_inline(L_107, L_108, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0470;
	}

IL_0454:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_109 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_110 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_inline(L_109, L_110, AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
	}

IL_0470:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__38_1_SetStateMachine_m61E486FAED5FA5E9BD4408956012BD42B388C6B1_gshared (U3CMinAwaitAsyncU3Ed__38_1_t0ABAF5F704BB15DC51A1D769D504B631F649F927* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__42_1__ctor_mDD7FACE6DB5E9F263ABF5A0158F290ECCC2C2976_gshared (U3CMinAwaitAsyncU3Ed__42_1_tC25E8DC6D95DDD60994DF050EE60BEAF598A5CD4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__42_1_MoveNext_m3516D4CA9101F66FA70A3BDC75BCE578D3B601A4_gshared (U3CMinAwaitAsyncU3Ed__42_1_tC25E8DC6D95DDD60994DF050EE60BEAF598A5CD4* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tCB2012D315D9A3AD39738A32DF04C656F8DA21EF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_tCB2012D315D9A3AD39738A32DF04C656F8DA21EF);
	const Il2CppFullySharedGenericAny L_42 = L_10;
	int32_t V_0 = 0;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CMinAwaitAsyncU3Ed__42_1_tC25E8DC6D95DDD60994DF050EE60BEAF598A5CD4* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_12;
	memset((&V_12), 0, sizeof(V_12));
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_15;
	memset((&V_15), 0, sizeof(V_15));
	RuntimeObject* V_16 = NULL;
	bool V_17 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_18;
	memset((&V_18), 0, sizeof(V_18));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_19;
	memset((&V_19), 0, sizeof(V_19));
	Exception_t* V_20 = NULL;
	int32_t V_21 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_004c_1;
		}

IL_0015_1:
		{
			goto IL_03b2_1;
		}

IL_001a_1:
		{
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_3 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CvalueU3E5__1);
			il2cpp_codegen_initobj(L_3, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
			RuntimeObject* L_4 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = __this->___cancellationToken;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__2 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)L_6);
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			__this->___U3CU3Es__4 = 0;
		}

IL_004c_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				switch (L_7)
				{
					case 0:
					{
						goto IL_0065_2;
					}
					case 1:
					{
						goto IL_0067_2;
					}
					case 2:
					{
						goto IL_006c_2;
					}
					case 3:
					{
						goto IL_0071_2;
					}
				}
			}
			{
				goto IL_0076_2;
			}

IL_0065_2:
			{
				goto IL_00cd_2;
			}

IL_0067_2:
			{
				goto IL_0171_2;
			}

IL_006c_2:
			{
				goto IL_0214_2;
			}

IL_0071_2:
			{
				goto IL_0308_2;
			}

IL_0076_2:
			{
				goto IL_0129_2;
			}

IL_007c_2:
			{
				Func_2_t041ABB3F33302FF5B428FF832CE110343F4DA4C6* L_8 = __this->___selector;
				RuntimeObject* L_9 = __this->___U3CeU3E5__2;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F L_11;
				L_11 = InvokerFuncInvoker1< UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
				V_3 = L_11;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_12;
				L_12 = UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_inline((&V_3), UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_RuntimeMethod_var);
				V_2 = L_12;
				bool L_13;
				L_13 = Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_inline((&V_2), Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_00e9_2;
				}
			}
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->___U3CU3E1__state = L_14;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_15 = V_2;
				__this->___U3CU3Eu__1 = L_15;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_16 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51*, U3CMinAwaitAsyncU3Ed__42_1_tC25E8DC6D95DDD60994DF050EE60BEAF598A5CD4**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_16, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0473;
			}

IL_00cd_2:
			{
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_17 = __this->___U3CU3Eu__1;
				V_2 = L_17;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* L_18 = (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_18, sizeof(Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state = L_19;
			}

IL_00e9_2:
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_20;
				L_20 = Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_inline((&V_2), Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_20;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_21 = __this->___U3CU3Es__6;
				__this->___U3CvalueU3E5__1 = L_21;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_22 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CU3Es__6);
				il2cpp_codegen_initobj(L_22, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_23 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CvalueU3E5__1);
				bool L_24;
				L_24 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline(L_23, Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
				V_5 = (bool)((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
				bool L_25 = V_5;
				if (!L_25)
				{
					goto IL_0124_2;
				}
			}
			{
				goto IL_0129_2;
			}

IL_0124_2:
			{
				goto IL_01bb_2;
			}

IL_0129_2:
			{
				RuntimeObject* L_26 = __this->___U3CeU3E5__2;
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
					goto IL_018e_2;
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
				AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_32 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitAsyncU3Ed__42_1_tC25E8DC6D95DDD60994DF050EE60BEAF598A5CD4**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_32, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0473;
			}

IL_0171_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_33 = __this->___U3CU3Eu__2;
				V_7 = L_33;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_34, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_35 = (-1);
				V_0 = L_35;
				__this->___U3CU3E1__state = L_35;
			}

IL_018e_2:
			{
				bool L_36;
				L_36 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7 = L_36;
				bool L_37 = __this->___U3CU3Es__7;
				V_6 = L_37;
				bool L_38 = V_6;
				if (L_38)
				{
					goto IL_007c_2;
				}
			}
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_39 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CU3Es__5);
				il2cpp_codegen_initobj(L_39, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
				goto IL_0344_2;
			}

IL_01bb_2:
			{
				goto IL_02c0_2;
			}

IL_01c1_2:
			{
				Func_2_t041ABB3F33302FF5B428FF832CE110343F4DA4C6* L_40 = __this->___selector;
				RuntimeObject* L_41 = __this->___U3CeU3E5__2;
				NullCheck(L_41);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_41, (Il2CppFullySharedGenericAny*)L_42);
				NullCheck(L_40);
				UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F L_43;
				L_43 = InvokerFuncInvoker1< UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_40, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_42: *(void**)L_42));
				V_3 = L_43;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_44;
				L_44 = UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_inline((&V_3), UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_RuntimeMethod_var);
				V_9 = L_44;
				bool L_45;
				L_45 = Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_inline((&V_9), Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_RuntimeMethod_var);
				if (L_45)
				{
					goto IL_0231_2;
				}
			}
			{
				int32_t L_46 = 2;
				V_0 = L_46;
				__this->___U3CU3E1__state = L_46;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_47 = V_9;
				__this->___U3CU3Eu__1 = L_47;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_48 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51*, U3CMinAwaitAsyncU3Ed__42_1_tC25E8DC6D95DDD60994DF050EE60BEAF598A5CD4**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_48, (&V_9), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0473;
			}

IL_0214_2:
			{
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_49 = __this->___U3CU3Eu__1;
				V_9 = L_49;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* L_50 = (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_50, sizeof(Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51));
				int32_t L_51 = (-1);
				V_0 = L_51;
				__this->___U3CU3E1__state = L_51;
			}

IL_0231_2:
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_52;
				L_52 = Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_inline((&V_9), Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_RuntimeMethod_var);
				__this->___U3CU3Es__9 = L_52;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_53 = __this->___U3CU3Es__9;
				__this->___U3CxU3E5__8 = L_53;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_54 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CU3Es__9);
				il2cpp_codegen_initobj(L_54, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_55 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CxU3E5__8);
				bool L_56;
				L_56 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline(L_55, Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
				V_10 = (bool)((((int32_t)L_56) == ((int32_t)0))? 1 : 0);
				bool L_57 = V_10;
				if (!L_57)
				{
					goto IL_026c_2;
				}
			}
			{
				goto IL_02c0_2;
			}

IL_026c_2:
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_58 = __this->___U3CvalueU3E5__1;
				V_12 = L_58;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_59 = __this->___U3CxU3E5__8;
				V_13 = L_59;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_60;
				L_60 = Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_inline((&V_12), Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_61;
				L_61 = Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_inline((&V_13), Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
				bool L_62;
				L_62 = Decimal_op_GreaterThan_m549F09BF0C53D8611E550CA9CCB53543D6DAF717(L_60, L_61, NULL);
				bool L_63;
				L_63 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline((&V_12), Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
				bool L_64;
				L_64 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline((&V_13), Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
				V_11 = (bool)((int32_t)((int32_t)L_62&((int32_t)((int32_t)L_63&(int32_t)L_64))));
				bool L_65 = V_11;
				if (!L_65)
				{
					goto IL_02b3_2;
				}
			}
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_66 = __this->___U3CxU3E5__8;
				__this->___U3CvalueU3E5__1 = L_66;
			}

IL_02b3_2:
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_67 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CxU3E5__8);
				il2cpp_codegen_initobj(L_67, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
			}

IL_02c0_2:
			{
				RuntimeObject* L_68 = __this->___U3CeU3E5__2;
				NullCheck(L_68);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_69;
				L_69 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_68);
				V_8 = L_69;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_70;
				L_70 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_15 = L_70;
				bool L_71;
				L_71 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_15), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_71)
				{
					goto IL_0325_2;
				}
			}
			{
				int32_t L_72 = 3;
				V_0 = L_72;
				__this->___U3CU3E1__state = L_72;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_73 = V_15;
				__this->___U3CU3Eu__2 = L_73;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_74 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitAsyncU3Ed__42_1_tC25E8DC6D95DDD60994DF050EE60BEAF598A5CD4**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_74, (&V_15), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0473;
			}

IL_0308_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_75 = __this->___U3CU3Eu__2;
				V_15 = L_75;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_76 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_76, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_77 = (-1);
				V_0 = L_77;
				__this->___U3CU3E1__state = L_77;
			}

IL_0325_2:
			{
				bool L_78;
				L_78 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_15), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__10 = L_78;
				bool L_79 = __this->___U3CU3Es__10;
				V_14 = L_79;
				bool L_80 = V_14;
				if (L_80)
				{
					goto IL_01c1_2;
				}
			}
			{
				goto IL_0359_1;
			}

IL_0344_2:
			{
				__this->___U3CU3Es__4 = 1;
				goto IL_0359_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_034d_1;
			}
			throw e;
		}

CATCH_034d_1:
		{
			RuntimeObject* L_81 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_16 = L_81;
			RuntimeObject* L_82 = V_16;
			__this->___U3CU3Es__3 = L_82;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_82);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0359_1;
		}

IL_0359_1:
		{
			RuntimeObject* L_83 = __this->___U3CeU3E5__2;
			V_17 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_83) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_84 = V_17;
			if (!L_84)
			{
				goto IL_03d8_1;
			}
		}
		{
			RuntimeObject* L_85 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_85);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_86;
			L_86 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_85);
			V_19 = L_86;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_87;
			L_87 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_19), NULL);
			V_18 = L_87;
			bool L_88;
			L_88 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_18), NULL);
			if (L_88)
			{
				goto IL_03cf_1;
			}
		}
		{
			int32_t L_89 = 4;
			V_0 = L_89;
			__this->___U3CU3E1__state = L_89;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_90 = V_18;
			__this->___U3CU3Eu__3 = L_90;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_91 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitAsyncU3Ed__42_1_tC25E8DC6D95DDD60994DF050EE60BEAF598A5CD4**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_91, (&V_18), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_0473;
		}

IL_03b2_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_92 = __this->___U3CU3Eu__3;
			V_18 = L_92;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_93 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3);
			il2cpp_codegen_initobj(L_93, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_94 = (-1);
			V_0 = L_94;
			__this->___U3CU3E1__state = L_94;
		}

IL_03cf_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_18), NULL);
		}

IL_03d8_1:
		{
			RuntimeObject* L_95 = __this->___U3CU3Es__3;
			V_16 = L_95;
			RuntimeObject* L_96 = V_16;
			if (!L_96)
			{
				goto IL_0402_1;
			}
		}
		{
			RuntimeObject* L_97 = V_16;
			V_20 = ((Exception_t*)IsInstClass((RuntimeObject*)L_97, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_98 = V_20;
			if (L_98)
			{
				goto IL_03f5_1;
			}
		}
		{
			RuntimeObject* L_99 = V_16;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_99, method);
		}

IL_03f5_1:
		{
			Exception_t* L_100 = V_20;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_101;
			L_101 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_100, NULL);
			NullCheck(L_101);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_101, NULL);
		}

IL_0402_1:
		{
			int32_t L_102 = __this->___U3CU3Es__4;
			V_21 = L_102;
			int32_t L_103 = V_21;
			if ((((int32_t)L_103) == ((int32_t)1)))
			{
				goto IL_0411_1;
			}
		}
		{
			goto IL_041a_1;
		}

IL_0411_1:
		{
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_104 = __this->___U3CU3Es__5;
			V_1 = L_104;
			goto IL_0457;
		}

IL_041a_1:
		{
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_105 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CU3Es__5);
			il2cpp_codegen_initobj(L_105, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_106 = __this->___U3CvalueU3E5__1;
			V_1 = L_106;
			goto IL_0457;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0436;
		}
		throw e;
	}

CATCH_0436:
	{
		Exception_t* L_107 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_20 = L_107;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_108 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder);
		Exception_t* L_109 = V_20;
		AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_inline(L_108, L_109, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0473;
	}

IL_0457:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_110 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder);
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_111 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_inline(L_110, L_111, AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_RuntimeMethod_var);
	}

IL_0473:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__42_1_SetStateMachine_mA07619B423D2F631BDBBCE626CACD792F741A952_gshared (U3CMinAwaitAsyncU3Ed__42_1_tC25E8DC6D95DDD60994DF050EE60BEAF598A5CD4* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__6_1__ctor_mEA871A695A4AB6B61760B2D2676ADD19272059C4_gshared (U3CMinAwaitAsyncU3Ed__6_1_t0723AEB6AF5877867C68F89565108EE947DA35FB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__6_1_MoveNext_m673DF017AB269756192F35C3DB040EF70875AC90_gshared (U3CMinAwaitAsyncU3Ed__6_1_t0723AEB6AF5877867C68F89565108EE947DA35FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_RuntimeMethod_var);
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
	const uint32_t SizeOf_TSource_t2CC8030BD92FCF44E3A4C8AF6F292427F6524731 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_t2CC8030BD92FCF44E3A4C8AF6F292427F6524731);
	const Il2CppFullySharedGenericAny L_37 = L_9;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Awaiter_t8953594D03299DE782894F4A865CED79F2504266 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CMinAwaitAsyncU3Ed__6_1_t0723AEB6AF5877867C68F89565108EE947DA35FB* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Awaiter_t8953594D03299DE782894F4A865CED79F2504266 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_11;
	memset((&V_11), 0, sizeof(V_11));
	RuntimeObject* V_12 = NULL;
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Exception_t* V_16 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0047_1;
		}

IL_0015_1:
		{
			goto IL_0324_1;
		}

IL_001a_1:
		{
			__this->___U3CvalueU3E5__1 = 0;
			RuntimeObject* L_3 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = __this->___cancellationToken;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__2 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)L_5);
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			__this->___U3CU3Es__4 = 0;
		}

IL_0047_1:
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
						goto IL_0060_2;
					}
					case 1:
					{
						goto IL_0062_2;
					}
					case 2:
					{
						goto IL_0067_2;
					}
					case 3:
					{
						goto IL_006c_2;
					}
				}
			}
			{
				goto IL_0071_2;
			}

IL_0060_2:
			{
				goto IL_00c8_2;
			}

IL_0062_2:
			{
				goto IL_014a_2;
			}

IL_0067_2:
			{
				goto IL_01e2_2;
			}

IL_006c_2:
			{
				goto IL_0283_2;
			}

IL_0071_2:
			{
				goto IL_0102_2;
			}

IL_0077_2:
			{
				Func_2_t6561E0DBB0FBFCB8DBFA46F392A86C31706164F5* L_7 = __this->___selector;
				RuntimeObject* L_8 = __this->___U3CeU3E5__2;
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				NullCheck(L_7);
				UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 L_10;
				L_10 = InvokerFuncInvoker1< UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_9: *(void**)L_9));
				V_3 = L_10;
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_11;
				L_11 = UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_inline((&V_3), UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_RuntimeMethod_var);
				V_2 = L_11;
				bool L_12;
				L_12 = Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_inline((&V_2), Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_00e4_2;
				}
			}
			{
				int32_t L_13 = 0;
				V_0 = L_13;
				__this->___U3CU3E1__state = L_13;
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_14 = V_2;
				__this->___U3CU3Eu__1 = L_14;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_15 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Awaiter_t8953594D03299DE782894F4A865CED79F2504266*, U3CMinAwaitAsyncU3Ed__6_1_t0723AEB6AF5877867C68F89565108EE947DA35FB**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_15, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_03c8;
			}

IL_00c8_2:
			{
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_16 = __this->___U3CU3Eu__1;
				V_2 = L_16;
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266* L_17 = (Awaiter_t8953594D03299DE782894F4A865CED79F2504266*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_17, sizeof(Awaiter_t8953594D03299DE782894F4A865CED79F2504266));
				int32_t L_18 = (-1);
				V_0 = L_18;
				__this->___U3CU3E1__state = L_18;
			}

IL_00e4_2:
			{
				int32_t L_19;
				L_19 = Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_inline((&V_2), Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_RuntimeMethod_var);
				__this->___U3CU3Es__5 = L_19;
				int32_t L_20 = __this->___U3CU3Es__5;
				__this->___U3CvalueU3E5__1 = L_20;
				goto IL_0189_2;
			}

IL_0102_2:
			{
				RuntimeObject* L_21 = __this->___U3CeU3E5__2;
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
					goto IL_0167_2;
				}
			}
			{
				int32_t L_25 = 1;
				V_0 = L_25;
				__this->___U3CU3E1__state = L_25;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_26 = V_6;
				__this->___U3CU3Eu__2 = L_26;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_27 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitAsyncU3Ed__6_1_t0723AEB6AF5877867C68F89565108EE947DA35FB**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_27, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_03c8;
			}

IL_014a_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28 = __this->___U3CU3Eu__2;
				V_6 = L_28;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_29 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_29, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_30 = (-1);
				V_0 = L_30;
				__this->___U3CU3E1__state = L_30;
			}

IL_0167_2:
			{
				bool L_31;
				L_31 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_31;
				bool L_32 = __this->___U3CU3Es__6;
				V_5 = L_32;
				bool L_33 = V_5;
				if (L_33)
				{
					goto IL_0077_2;
				}
			}
			{
				Exception_t* L_34;
				L_34 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, method);
			}

IL_0189_2:
			{
				goto IL_023b_2;
			}

IL_018f_2:
			{
				Func_2_t6561E0DBB0FBFCB8DBFA46F392A86C31706164F5* L_35 = __this->___selector;
				RuntimeObject* L_36 = __this->___U3CeU3E5__2;
				NullCheck(L_36);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_36, (Il2CppFullySharedGenericAny*)L_37);
				NullCheck(L_35);
				UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 L_38;
				L_38 = InvokerFuncInvoker1< UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_35, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_37: *(void**)L_37));
				V_3 = L_38;
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_39;
				L_39 = UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_inline((&V_3), UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_RuntimeMethod_var);
				V_8 = L_39;
				bool L_40;
				L_40 = Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_inline((&V_8), Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_RuntimeMethod_var);
				if (L_40)
				{
					goto IL_01ff_2;
				}
			}
			{
				int32_t L_41 = 2;
				V_0 = L_41;
				__this->___U3CU3E1__state = L_41;
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_42 = V_8;
				__this->___U3CU3Eu__1 = L_42;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_43 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Awaiter_t8953594D03299DE782894F4A865CED79F2504266*, U3CMinAwaitAsyncU3Ed__6_1_t0723AEB6AF5877867C68F89565108EE947DA35FB**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_43, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_03c8;
			}

IL_01e2_2:
			{
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_44 = __this->___U3CU3Eu__1;
				V_8 = L_44;
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266* L_45 = (Awaiter_t8953594D03299DE782894F4A865CED79F2504266*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_45, sizeof(Awaiter_t8953594D03299DE782894F4A865CED79F2504266));
				int32_t L_46 = (-1);
				V_0 = L_46;
				__this->___U3CU3E1__state = L_46;
			}

IL_01ff_2:
			{
				int32_t L_47;
				L_47 = Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_inline((&V_8), Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_RuntimeMethod_var);
				__this->___U3CU3Es__8 = L_47;
				int32_t L_48 = __this->___U3CU3Es__8;
				__this->___U3CxU3E5__7 = L_48;
				int32_t L_49 = __this->___U3CvalueU3E5__1;
				int32_t L_50 = __this->___U3CxU3E5__7;
				V_9 = (bool)((((int32_t)L_49) > ((int32_t)L_50))? 1 : 0);
				bool L_51 = V_9;
				if (!L_51)
				{
					goto IL_023a_2;
				}
			}
			{
				int32_t L_52 = __this->___U3CxU3E5__7;
				__this->___U3CvalueU3E5__1 = L_52;
			}

IL_023a_2:
			{
			}

IL_023b_2:
			{
				RuntimeObject* L_53 = __this->___U3CeU3E5__2;
				NullCheck(L_53);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_54;
				L_54 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_53);
				V_7 = L_54;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_55;
				L_55 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_11 = L_55;
				bool L_56;
				L_56 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_11), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_56)
				{
					goto IL_02a0_2;
				}
			}
			{
				int32_t L_57 = 3;
				V_0 = L_57;
				__this->___U3CU3E1__state = L_57;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_58 = V_11;
				__this->___U3CU3Eu__2 = L_58;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_59 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitAsyncU3Ed__6_1_t0723AEB6AF5877867C68F89565108EE947DA35FB**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_59, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_03c8;
			}

IL_0283_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_60 = __this->___U3CU3Eu__2;
				V_11 = L_60;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_61 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_61, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_62 = (-1);
				V_0 = L_62;
				__this->___U3CU3E1__state = L_62;
			}

IL_02a0_2:
			{
				bool L_63;
				L_63 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_11), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__9 = L_63;
				bool L_64 = __this->___U3CU3Es__9;
				V_10 = L_64;
				bool L_65 = V_10;
				if (L_65)
				{
					goto IL_018f_2;
				}
			}
			{
				goto IL_02cb_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_02bf_1;
			}
			throw e;
		}

CATCH_02bf_1:
		{
			RuntimeObject* L_66 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_12 = L_66;
			RuntimeObject* L_67 = V_12;
			__this->___U3CU3Es__3 = L_67;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_67);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_02cb_1;
		}

IL_02cb_1:
		{
			RuntimeObject* L_68 = __this->___U3CeU3E5__2;
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_68) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_69 = V_13;
			if (!L_69)
			{
				goto IL_034a_1;
			}
		}
		{
			RuntimeObject* L_70 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_70);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_71;
			L_71 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_70);
			V_15 = L_71;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_72;
			L_72 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_15), NULL);
			V_14 = L_72;
			bool L_73;
			L_73 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_73)
			{
				goto IL_0341_1;
			}
		}
		{
			int32_t L_74 = 4;
			V_0 = L_74;
			__this->___U3CU3E1__state = L_74;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_75 = V_14;
			__this->___U3CU3Eu__3 = L_75;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_76 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitAsyncU3Ed__6_1_t0723AEB6AF5877867C68F89565108EE947DA35FB**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_76, (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_03c8;
		}

IL_0324_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_77 = __this->___U3CU3Eu__3;
			V_14 = L_77;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_78 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3);
			il2cpp_codegen_initobj(L_78, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_79 = (-1);
			V_0 = L_79;
			__this->___U3CU3E1__state = L_79;
		}

IL_0341_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_034a_1:
		{
			RuntimeObject* L_80 = __this->___U3CU3Es__3;
			V_12 = L_80;
			RuntimeObject* L_81 = V_12;
			if (!L_81)
			{
				goto IL_0374_1;
			}
		}
		{
			RuntimeObject* L_82 = V_12;
			V_16 = ((Exception_t*)IsInstClass((RuntimeObject*)L_82, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_83 = V_16;
			if (L_83)
			{
				goto IL_0367_1;
			}
		}
		{
			RuntimeObject* L_84 = V_12;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_84, method);
		}

IL_0367_1:
		{
			Exception_t* L_85 = V_16;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_86;
			L_86 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_85, NULL);
			NullCheck(L_86);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_86, NULL);
		}

IL_0374_1:
		{
			int32_t L_87 = __this->___U3CU3Es__4;
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			int32_t L_88 = __this->___U3CvalueU3E5__1;
			V_1 = L_88;
			goto IL_03ac;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_038b;
		}
		throw e;
	}

CATCH_038b:
	{
		Exception_t* L_89 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_16 = L_89;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_90 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder);
		Exception_t* L_91 = V_16;
		AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_inline(L_90, L_91, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_03c8;
	}

IL_03ac:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_92 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder);
		int32_t L_93 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_inline(L_92, L_93, AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_RuntimeMethod_var);
	}

IL_03c8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__6_1_SetStateMachine_m271CD6BA0801D9750F0046E9EE099883E90CC552_gshared (U3CMinAwaitAsyncU3Ed__6_1_t0723AEB6AF5877867C68F89565108EE947DA35FB* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__11_1__ctor_mD0CF6CE7B7418B022856D6F56EB29B047D8C57E3_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__11_1_t87BAE1F5754DF87CD354C8D64FA9AFCAA4A72FCA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__11_1_MoveNext_mC9359B1FDAA4DD2CF91A1395D058D4B8820B1D18_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__11_1_t87BAE1F5754DF87CD354C8D64FA9AFCAA4A72FCA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_RuntimeMethod_var);
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
	const uint32_t SizeOf_TSource_tD819B10659A36AE3B52AB04F1F8D7C9A4C5B05AD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_tD819B10659A36AE3B52AB04F1F8D7C9A4C5B05AD);
	const Il2CppFullySharedGenericAny L_38 = L_9;
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CMinAwaitWithCancellationAsyncU3Ed__11_1_t87BAE1F5754DF87CD354C8D64FA9AFCAA4A72FCA* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_11;
	memset((&V_11), 0, sizeof(V_11));
	RuntimeObject* V_12 = NULL;
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Exception_t* V_16 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0048_1;
		}

IL_0015_1:
		{
			goto IL_0331_1;
		}

IL_001a_1:
		{
			__this->___U3CvalueU3E5__1 = ((int64_t)0);
			RuntimeObject* L_3 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = __this->___cancellationToken;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__2 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)L_5);
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			__this->___U3CU3Es__4 = 0;
		}

IL_0048_1:
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
						goto IL_0061_2;
					}
					case 1:
					{
						goto IL_0063_2;
					}
					case 2:
					{
						goto IL_0068_2;
					}
					case 3:
					{
						goto IL_006d_2;
					}
				}
			}
			{
				goto IL_0072_2;
			}

IL_0061_2:
			{
				goto IL_00cf_2;
			}

IL_0063_2:
			{
				goto IL_0151_2;
			}

IL_0068_2:
			{
				goto IL_01ef_2;
			}

IL_006d_2:
			{
				goto IL_0290_2;
			}

IL_0072_2:
			{
				goto IL_0109_2;
			}

IL_0078_2:
			{
				Func_3_t76BD268388DCE8B514D513440272B79CC88C6413* L_7 = __this->___selector;
				RuntimeObject* L_8 = __this->___U3CeU3E5__2;
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_10 = __this->___cancellationToken;
				NullCheck(L_7);
				UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72 L_11;
				L_11 = InvokerFuncInvoker2< UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_9: *(void**)L_9), L_10);
				V_3 = L_11;
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E L_12;
				L_12 = UniTask_1_GetAwaiter_m610A766CD8038A109B21E2F02CF093096F9226D7_inline((&V_3), UniTask_1_GetAwaiter_m610A766CD8038A109B21E2F02CF093096F9226D7_RuntimeMethod_var);
				V_2 = L_12;
				bool L_13;
				L_13 = Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_inline((&V_2), Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_00eb_2;
				}
			}
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->___U3CU3E1__state = L_14;
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E L_15 = V_2;
				__this->___U3CU3Eu__1 = L_15;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_16 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E*, U3CMinAwaitWithCancellationAsyncU3Ed__11_1_t87BAE1F5754DF87CD354C8D64FA9AFCAA4A72FCA**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_16, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_03d5;
			}

IL_00cf_2:
			{
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E L_17 = __this->___U3CU3Eu__1;
				V_2 = L_17;
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* L_18 = (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_18, sizeof(Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state = L_19;
			}

IL_00eb_2:
			{
				int64_t L_20;
				L_20 = Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_inline((&V_2), Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_RuntimeMethod_var);
				__this->___U3CU3Es__5 = L_20;
				int64_t L_21 = __this->___U3CU3Es__5;
				__this->___U3CvalueU3E5__1 = L_21;
				goto IL_0190_2;
			}

IL_0109_2:
			{
				RuntimeObject* L_22 = __this->___U3CeU3E5__2;
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
					goto IL_016e_2;
				}
			}
			{
				int32_t L_26 = 1;
				V_0 = L_26;
				__this->___U3CU3E1__state = L_26;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_27 = V_6;
				__this->___U3CU3Eu__2 = L_27;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_28 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__11_1_t87BAE1F5754DF87CD354C8D64FA9AFCAA4A72FCA**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_28, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_03d5;
			}

IL_0151_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29 = __this->___U3CU3Eu__2;
				V_6 = L_29;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_30 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_30, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_31 = (-1);
				V_0 = L_31;
				__this->___U3CU3E1__state = L_31;
			}

IL_016e_2:
			{
				bool L_32;
				L_32 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_32;
				bool L_33 = __this->___U3CU3Es__6;
				V_5 = L_33;
				bool L_34 = V_5;
				if (L_34)
				{
					goto IL_0078_2;
				}
			}
			{
				Exception_t* L_35;
				L_35 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, method);
			}

IL_0190_2:
			{
				goto IL_0248_2;
			}

IL_0196_2:
			{
				Func_3_t76BD268388DCE8B514D513440272B79CC88C6413* L_36 = __this->___selector;
				RuntimeObject* L_37 = __this->___U3CeU3E5__2;
				NullCheck(L_37);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_37, (Il2CppFullySharedGenericAny*)L_38);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_39 = __this->___cancellationToken;
				NullCheck(L_36);
				UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72 L_40;
				L_40 = InvokerFuncInvoker2< UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_38: *(void**)L_38), L_39);
				V_3 = L_40;
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E L_41;
				L_41 = UniTask_1_GetAwaiter_m610A766CD8038A109B21E2F02CF093096F9226D7_inline((&V_3), UniTask_1_GetAwaiter_m610A766CD8038A109B21E2F02CF093096F9226D7_RuntimeMethod_var);
				V_8 = L_41;
				bool L_42;
				L_42 = Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_inline((&V_8), Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_RuntimeMethod_var);
				if (L_42)
				{
					goto IL_020c_2;
				}
			}
			{
				int32_t L_43 = 2;
				V_0 = L_43;
				__this->___U3CU3E1__state = L_43;
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E L_44 = V_8;
				__this->___U3CU3Eu__1 = L_44;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_45 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E*, U3CMinAwaitWithCancellationAsyncU3Ed__11_1_t87BAE1F5754DF87CD354C8D64FA9AFCAA4A72FCA**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_45, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_03d5;
			}

IL_01ef_2:
			{
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E L_46 = __this->___U3CU3Eu__1;
				V_8 = L_46;
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* L_47 = (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_47, sizeof(Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E));
				int32_t L_48 = (-1);
				V_0 = L_48;
				__this->___U3CU3E1__state = L_48;
			}

IL_020c_2:
			{
				int64_t L_49;
				L_49 = Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_inline((&V_8), Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_RuntimeMethod_var);
				__this->___U3CU3Es__8 = L_49;
				int64_t L_50 = __this->___U3CU3Es__8;
				__this->___U3CxU3E5__7 = L_50;
				int64_t L_51 = __this->___U3CvalueU3E5__1;
				int64_t L_52 = __this->___U3CxU3E5__7;
				V_9 = (bool)((((int64_t)L_51) > ((int64_t)L_52))? 1 : 0);
				bool L_53 = V_9;
				if (!L_53)
				{
					goto IL_0247_2;
				}
			}
			{
				int64_t L_54 = __this->___U3CxU3E5__7;
				__this->___U3CvalueU3E5__1 = L_54;
			}

IL_0247_2:
			{
			}

IL_0248_2:
			{
				RuntimeObject* L_55 = __this->___U3CeU3E5__2;
				NullCheck(L_55);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_56;
				L_56 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_55);
				V_7 = L_56;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_57;
				L_57 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_11 = L_57;
				bool L_58;
				L_58 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_11), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_58)
				{
					goto IL_02ad_2;
				}
			}
			{
				int32_t L_59 = 3;
				V_0 = L_59;
				__this->___U3CU3E1__state = L_59;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_60 = V_11;
				__this->___U3CU3Eu__2 = L_60;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_61 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__11_1_t87BAE1F5754DF87CD354C8D64FA9AFCAA4A72FCA**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_61, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_03d5;
			}

IL_0290_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_62 = __this->___U3CU3Eu__2;
				V_11 = L_62;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_63 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_63, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_64 = (-1);
				V_0 = L_64;
				__this->___U3CU3E1__state = L_64;
			}

IL_02ad_2:
			{
				bool L_65;
				L_65 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_11), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__9 = L_65;
				bool L_66 = __this->___U3CU3Es__9;
				V_10 = L_66;
				bool L_67 = V_10;
				if (L_67)
				{
					goto IL_0196_2;
				}
			}
			{
				goto IL_02d8_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_02cc_1;
			}
			throw e;
		}

CATCH_02cc_1:
		{
			RuntimeObject* L_68 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_12 = L_68;
			RuntimeObject* L_69 = V_12;
			__this->___U3CU3Es__3 = L_69;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_69);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_02d8_1;
		}

IL_02d8_1:
		{
			RuntimeObject* L_70 = __this->___U3CeU3E5__2;
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_70) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_71 = V_13;
			if (!L_71)
			{
				goto IL_0357_1;
			}
		}
		{
			RuntimeObject* L_72 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_72);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_73;
			L_73 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_72);
			V_15 = L_73;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_74;
			L_74 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_15), NULL);
			V_14 = L_74;
			bool L_75;
			L_75 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_75)
			{
				goto IL_034e_1;
			}
		}
		{
			int32_t L_76 = 4;
			V_0 = L_76;
			__this->___U3CU3E1__state = L_76;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_77 = V_14;
			__this->___U3CU3Eu__3 = L_77;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_78 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitWithCancellationAsyncU3Ed__11_1_t87BAE1F5754DF87CD354C8D64FA9AFCAA4A72FCA**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_78, (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_03d5;
		}

IL_0331_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_79 = __this->___U3CU3Eu__3;
			V_14 = L_79;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_80 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3);
			il2cpp_codegen_initobj(L_80, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_81 = (-1);
			V_0 = L_81;
			__this->___U3CU3E1__state = L_81;
		}

IL_034e_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_0357_1:
		{
			RuntimeObject* L_82 = __this->___U3CU3Es__3;
			V_12 = L_82;
			RuntimeObject* L_83 = V_12;
			if (!L_83)
			{
				goto IL_0381_1;
			}
		}
		{
			RuntimeObject* L_84 = V_12;
			V_16 = ((Exception_t*)IsInstClass((RuntimeObject*)L_84, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_85 = V_16;
			if (L_85)
			{
				goto IL_0374_1;
			}
		}
		{
			RuntimeObject* L_86 = V_12;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_86, method);
		}

IL_0374_1:
		{
			Exception_t* L_87 = V_16;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_88;
			L_88 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_87, NULL);
			NullCheck(L_88);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_88, NULL);
		}

IL_0381_1:
		{
			int32_t L_89 = __this->___U3CU3Es__4;
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			int64_t L_90 = __this->___U3CvalueU3E5__1;
			V_1 = L_90;
			goto IL_03b9;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0398;
		}
		throw e;
	}

CATCH_0398:
	{
		Exception_t* L_91 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_16 = L_91;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_92 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder);
		Exception_t* L_93 = V_16;
		AsyncUniTaskMethodBuilder_1_SetException_mAEE718F60708F1A917C5379F94447C8090707CE7_inline(L_92, L_93, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mAEE718F60708F1A917C5379F94447C8090707CE7_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_03d5;
	}

IL_03b9:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_94 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder);
		int64_t L_95 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_inline(L_94, L_95, AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_RuntimeMethod_var);
	}

IL_03d5:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__11_1_SetStateMachine_m39DCF56852486FBCFA105FD81CF41D224AC013CA_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__11_1_t87BAE1F5754DF87CD354C8D64FA9AFCAA4A72FCA* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__15_1__ctor_m6B6F453A8F6B03C626A69E02B8DB536FCCC2C335_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__15_1_t671839B639CE41E851CEA13C3E4BF0266B468F90* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__15_1_MoveNext_mD89EFD4D7BCA20B2B85AFF454D7E41EBE67357C0_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__15_1_t671839B639CE41E851CEA13C3E4BF0266B468F90* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t46B26A47D68CDE9A969EE8CFF33319C708C5F110 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_t46B26A47D68CDE9A969EE8CFF33319C708C5F110);
	const Il2CppFullySharedGenericAny L_38 = L_9;
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CMinAwaitWithCancellationAsyncU3Ed__15_1_t671839B639CE41E851CEA13C3E4BF0266B468F90* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_11;
	memset((&V_11), 0, sizeof(V_11));
	RuntimeObject* V_12 = NULL;
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Exception_t* V_16 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_004b_1;
		}

IL_0015_1:
		{
			goto IL_0334_1;
		}

IL_001a_1:
		{
			__this->___U3CvalueU3E5__1 = (0.0f);
			RuntimeObject* L_3 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = __this->___cancellationToken;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__2 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)L_5);
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			__this->___U3CU3Es__4 = 0;
		}

IL_004b_1:
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
						goto IL_0064_2;
					}
					case 1:
					{
						goto IL_0066_2;
					}
					case 2:
					{
						goto IL_006b_2;
					}
					case 3:
					{
						goto IL_0070_2;
					}
				}
			}
			{
				goto IL_0075_2;
			}

IL_0064_2:
			{
				goto IL_00d2_2;
			}

IL_0066_2:
			{
				goto IL_0154_2;
			}

IL_006b_2:
			{
				goto IL_01f2_2;
			}

IL_0070_2:
			{
				goto IL_0293_2;
			}

IL_0075_2:
			{
				goto IL_010c_2;
			}

IL_007b_2:
			{
				Func_3_t79F461272893123C05C047A343D70B9B775827E4* L_7 = __this->___selector;
				RuntimeObject* L_8 = __this->___U3CeU3E5__2;
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_10 = __this->___cancellationToken;
				NullCheck(L_7);
				UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1 L_11;
				L_11 = InvokerFuncInvoker2< UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_9: *(void**)L_9), L_10);
				V_3 = L_11;
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_12;
				L_12 = UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_inline((&V_3), UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_RuntimeMethod_var);
				V_2 = L_12;
				bool L_13;
				L_13 = Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_inline((&V_2), Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_00ee_2;
				}
			}
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->___U3CU3E1__state = L_14;
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_15 = V_2;
				__this->___U3CU3Eu__1 = L_15;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_16 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D*, U3CMinAwaitWithCancellationAsyncU3Ed__15_1_t671839B639CE41E851CEA13C3E4BF0266B468F90**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_16, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_03d8;
			}

IL_00d2_2:
			{
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_17 = __this->___U3CU3Eu__1;
				V_2 = L_17;
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* L_18 = (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_18, sizeof(Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state = L_19;
			}

IL_00ee_2:
			{
				float L_20;
				L_20 = Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_inline((&V_2), Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_RuntimeMethod_var);
				__this->___U3CU3Es__5 = L_20;
				float L_21 = __this->___U3CU3Es__5;
				__this->___U3CvalueU3E5__1 = L_21;
				goto IL_0193_2;
			}

IL_010c_2:
			{
				RuntimeObject* L_22 = __this->___U3CeU3E5__2;
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
					goto IL_0171_2;
				}
			}
			{
				int32_t L_26 = 1;
				V_0 = L_26;
				__this->___U3CU3E1__state = L_26;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_27 = V_6;
				__this->___U3CU3Eu__2 = L_27;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_28 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__15_1_t671839B639CE41E851CEA13C3E4BF0266B468F90**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_28, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_03d8;
			}

IL_0154_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29 = __this->___U3CU3Eu__2;
				V_6 = L_29;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_30 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_30, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_31 = (-1);
				V_0 = L_31;
				__this->___U3CU3E1__state = L_31;
			}

IL_0171_2:
			{
				bool L_32;
				L_32 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_32;
				bool L_33 = __this->___U3CU3Es__6;
				V_5 = L_33;
				bool L_34 = V_5;
				if (L_34)
				{
					goto IL_007b_2;
				}
			}
			{
				Exception_t* L_35;
				L_35 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, method);
			}

IL_0193_2:
			{
				goto IL_024b_2;
			}

IL_0199_2:
			{
				Func_3_t79F461272893123C05C047A343D70B9B775827E4* L_36 = __this->___selector;
				RuntimeObject* L_37 = __this->___U3CeU3E5__2;
				NullCheck(L_37);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_37, (Il2CppFullySharedGenericAny*)L_38);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_39 = __this->___cancellationToken;
				NullCheck(L_36);
				UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1 L_40;
				L_40 = InvokerFuncInvoker2< UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_38: *(void**)L_38), L_39);
				V_3 = L_40;
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_41;
				L_41 = UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_inline((&V_3), UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_RuntimeMethod_var);
				V_8 = L_41;
				bool L_42;
				L_42 = Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_inline((&V_8), Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_RuntimeMethod_var);
				if (L_42)
				{
					goto IL_020f_2;
				}
			}
			{
				int32_t L_43 = 2;
				V_0 = L_43;
				__this->___U3CU3E1__state = L_43;
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_44 = V_8;
				__this->___U3CU3Eu__1 = L_44;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_45 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D*, U3CMinAwaitWithCancellationAsyncU3Ed__15_1_t671839B639CE41E851CEA13C3E4BF0266B468F90**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_45, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_03d8;
			}

IL_01f2_2:
			{
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_46 = __this->___U3CU3Eu__1;
				V_8 = L_46;
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* L_47 = (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_47, sizeof(Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D));
				int32_t L_48 = (-1);
				V_0 = L_48;
				__this->___U3CU3E1__state = L_48;
			}

IL_020f_2:
			{
				float L_49;
				L_49 = Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_inline((&V_8), Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_RuntimeMethod_var);
				__this->___U3CU3Es__8 = L_49;
				float L_50 = __this->___U3CU3Es__8;
				__this->___U3CxU3E5__7 = L_50;
				float L_51 = __this->___U3CvalueU3E5__1;
				float L_52 = __this->___U3CxU3E5__7;
				V_9 = (bool)((((float)L_51) > ((float)L_52))? 1 : 0);
				bool L_53 = V_9;
				if (!L_53)
				{
					goto IL_024a_2;
				}
			}
			{
				float L_54 = __this->___U3CxU3E5__7;
				__this->___U3CvalueU3E5__1 = L_54;
			}

IL_024a_2:
			{
			}

IL_024b_2:
			{
				RuntimeObject* L_55 = __this->___U3CeU3E5__2;
				NullCheck(L_55);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_56;
				L_56 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_55);
				V_7 = L_56;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_57;
				L_57 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_11 = L_57;
				bool L_58;
				L_58 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_11), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_58)
				{
					goto IL_02b0_2;
				}
			}
			{
				int32_t L_59 = 3;
				V_0 = L_59;
				__this->___U3CU3E1__state = L_59;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_60 = V_11;
				__this->___U3CU3Eu__2 = L_60;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_61 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__15_1_t671839B639CE41E851CEA13C3E4BF0266B468F90**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_61, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_03d8;
			}

IL_0293_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_62 = __this->___U3CU3Eu__2;
				V_11 = L_62;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_63 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_63, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_64 = (-1);
				V_0 = L_64;
				__this->___U3CU3E1__state = L_64;
			}

IL_02b0_2:
			{
				bool L_65;
				L_65 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_11), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__9 = L_65;
				bool L_66 = __this->___U3CU3Es__9;
				V_10 = L_66;
				bool L_67 = V_10;
				if (L_67)
				{
					goto IL_0199_2;
				}
			}
			{
				goto IL_02db_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_02cf_1;
			}
			throw e;
		}

CATCH_02cf_1:
		{
			RuntimeObject* L_68 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_12 = L_68;
			RuntimeObject* L_69 = V_12;
			__this->___U3CU3Es__3 = L_69;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_69);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_02db_1;
		}

IL_02db_1:
		{
			RuntimeObject* L_70 = __this->___U3CeU3E5__2;
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_70) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_71 = V_13;
			if (!L_71)
			{
				goto IL_035a_1;
			}
		}
		{
			RuntimeObject* L_72 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_72);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_73;
			L_73 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_72);
			V_15 = L_73;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_74;
			L_74 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_15), NULL);
			V_14 = L_74;
			bool L_75;
			L_75 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_75)
			{
				goto IL_0351_1;
			}
		}
		{
			int32_t L_76 = 4;
			V_0 = L_76;
			__this->___U3CU3E1__state = L_76;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_77 = V_14;
			__this->___U3CU3Eu__3 = L_77;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_78 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitWithCancellationAsyncU3Ed__15_1_t671839B639CE41E851CEA13C3E4BF0266B468F90**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_78, (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_03d8;
		}

IL_0334_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_79 = __this->___U3CU3Eu__3;
			V_14 = L_79;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_80 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3);
			il2cpp_codegen_initobj(L_80, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_81 = (-1);
			V_0 = L_81;
			__this->___U3CU3E1__state = L_81;
		}

IL_0351_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_035a_1:
		{
			RuntimeObject* L_82 = __this->___U3CU3Es__3;
			V_12 = L_82;
			RuntimeObject* L_83 = V_12;
			if (!L_83)
			{
				goto IL_0384_1;
			}
		}
		{
			RuntimeObject* L_84 = V_12;
			V_16 = ((Exception_t*)IsInstClass((RuntimeObject*)L_84, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_85 = V_16;
			if (L_85)
			{
				goto IL_0377_1;
			}
		}
		{
			RuntimeObject* L_86 = V_12;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_86, method);
		}

IL_0377_1:
		{
			Exception_t* L_87 = V_16;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_88;
			L_88 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_87, NULL);
			NullCheck(L_88);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_88, NULL);
		}

IL_0384_1:
		{
			int32_t L_89 = __this->___U3CU3Es__4;
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			float L_90 = __this->___U3CvalueU3E5__1;
			V_1 = L_90;
			goto IL_03bc;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_039b;
		}
		throw e;
	}

CATCH_039b:
	{
		Exception_t* L_91 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_16 = L_91;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_92 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder);
		Exception_t* L_93 = V_16;
		AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_inline(L_92, L_93, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_03d8;
	}

IL_03bc:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_94 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder);
		float L_95 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_inline(L_94, L_95, AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_RuntimeMethod_var);
	}

IL_03d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__15_1_SetStateMachine_mA4449F5F7BFF90AC3B89A3C820748129FEB9599E_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__15_1_t671839B639CE41E851CEA13C3E4BF0266B468F90* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__19_1__ctor_m5B53D90137E2B16C039A7781B7BA78055240CE36_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__19_1_tFD68B66ACCC41046F7697071B6978A6140527418* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__19_1_MoveNext_m1494317CB9A896C623CD87B04FADC4AA311CEB54_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__19_1_tFD68B66ACCC41046F7697071B6978A6140527418* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_tC84693F67A896985C7F7F0870B8B2ABA31CC30E0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_tC84693F67A896985C7F7F0870B8B2ABA31CC30E0);
	const Il2CppFullySharedGenericAny L_38 = L_9;
	int32_t V_0 = 0;
	double V_1 = 0.0;
	Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CMinAwaitWithCancellationAsyncU3Ed__19_1_tFD68B66ACCC41046F7697071B6978A6140527418* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_11;
	memset((&V_11), 0, sizeof(V_11));
	RuntimeObject* V_12 = NULL;
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Exception_t* V_16 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
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
			goto IL_0338_1;
		}

IL_001a_1:
		{
			__this->___U3CvalueU3E5__1 = (0.0);
			RuntimeObject* L_3 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = __this->___cancellationToken;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__2 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)L_5);
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			__this->___U3CU3Es__4 = 0;
		}

IL_004f_1:
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
						goto IL_0068_2;
					}
					case 1:
					{
						goto IL_006a_2;
					}
					case 2:
					{
						goto IL_006f_2;
					}
					case 3:
					{
						goto IL_0074_2;
					}
				}
			}
			{
				goto IL_0079_2;
			}

IL_0068_2:
			{
				goto IL_00d6_2;
			}

IL_006a_2:
			{
				goto IL_0158_2;
			}

IL_006f_2:
			{
				goto IL_01f6_2;
			}

IL_0074_2:
			{
				goto IL_0297_2;
			}

IL_0079_2:
			{
				goto IL_0110_2;
			}

IL_007f_2:
			{
				Func_3_tB356387A25DA85D9F4DDAAEEFD39A96B3F81FA95* L_7 = __this->___selector;
				RuntimeObject* L_8 = __this->___U3CeU3E5__2;
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_10 = __this->___cancellationToken;
				NullCheck(L_7);
				UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C L_11;
				L_11 = InvokerFuncInvoker2< UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_9: *(void**)L_9), L_10);
				V_3 = L_11;
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_12;
				L_12 = UniTask_1_GetAwaiter_m68E768B22932F4C553E8F96F1DEDC7361DC02133_inline((&V_3), UniTask_1_GetAwaiter_m68E768B22932F4C553E8F96F1DEDC7361DC02133_RuntimeMethod_var);
				V_2 = L_12;
				bool L_13;
				L_13 = Awaiter_get_IsCompleted_mFC4A614AA0B1C8D41A05840FAA981FAF10FC99C8_inline((&V_2), Awaiter_get_IsCompleted_mFC4A614AA0B1C8D41A05840FAA981FAF10FC99C8_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_00f2_2;
				}
			}
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->___U3CU3E1__state = L_14;
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_15 = V_2;
				__this->___U3CU3Eu__1 = L_15;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_16 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88*, U3CMinAwaitWithCancellationAsyncU3Ed__19_1_tFD68B66ACCC41046F7697071B6978A6140527418**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_16, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_03dc;
			}

IL_00d6_2:
			{
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_17 = __this->___U3CU3Eu__1;
				V_2 = L_17;
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88* L_18 = (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_18, sizeof(Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state = L_19;
			}

IL_00f2_2:
			{
				double L_20;
				L_20 = Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_inline((&V_2), Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_RuntimeMethod_var);
				__this->___U3CU3Es__5 = L_20;
				double L_21 = __this->___U3CU3Es__5;
				__this->___U3CvalueU3E5__1 = L_21;
				goto IL_0197_2;
			}

IL_0110_2:
			{
				RuntimeObject* L_22 = __this->___U3CeU3E5__2;
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
					goto IL_0175_2;
				}
			}
			{
				int32_t L_26 = 1;
				V_0 = L_26;
				__this->___U3CU3E1__state = L_26;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_27 = V_6;
				__this->___U3CU3Eu__2 = L_27;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_28 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__19_1_tFD68B66ACCC41046F7697071B6978A6140527418**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_28, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_03dc;
			}

IL_0158_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29 = __this->___U3CU3Eu__2;
				V_6 = L_29;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_30 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_30, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_31 = (-1);
				V_0 = L_31;
				__this->___U3CU3E1__state = L_31;
			}

IL_0175_2:
			{
				bool L_32;
				L_32 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_32;
				bool L_33 = __this->___U3CU3Es__6;
				V_5 = L_33;
				bool L_34 = V_5;
				if (L_34)
				{
					goto IL_007f_2;
				}
			}
			{
				Exception_t* L_35;
				L_35 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, method);
			}

IL_0197_2:
			{
				goto IL_024f_2;
			}

IL_019d_2:
			{
				Func_3_tB356387A25DA85D9F4DDAAEEFD39A96B3F81FA95* L_36 = __this->___selector;
				RuntimeObject* L_37 = __this->___U3CeU3E5__2;
				NullCheck(L_37);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_37, (Il2CppFullySharedGenericAny*)L_38);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_39 = __this->___cancellationToken;
				NullCheck(L_36);
				UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C L_40;
				L_40 = InvokerFuncInvoker2< UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_38: *(void**)L_38), L_39);
				V_3 = L_40;
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_41;
				L_41 = UniTask_1_GetAwaiter_m68E768B22932F4C553E8F96F1DEDC7361DC02133_inline((&V_3), UniTask_1_GetAwaiter_m68E768B22932F4C553E8F96F1DEDC7361DC02133_RuntimeMethod_var);
				V_8 = L_41;
				bool L_42;
				L_42 = Awaiter_get_IsCompleted_mFC4A614AA0B1C8D41A05840FAA981FAF10FC99C8_inline((&V_8), Awaiter_get_IsCompleted_mFC4A614AA0B1C8D41A05840FAA981FAF10FC99C8_RuntimeMethod_var);
				if (L_42)
				{
					goto IL_0213_2;
				}
			}
			{
				int32_t L_43 = 2;
				V_0 = L_43;
				__this->___U3CU3E1__state = L_43;
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_44 = V_8;
				__this->___U3CU3Eu__1 = L_44;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_45 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88*, U3CMinAwaitWithCancellationAsyncU3Ed__19_1_tFD68B66ACCC41046F7697071B6978A6140527418**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_45, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_03dc;
			}

IL_01f6_2:
			{
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_46 = __this->___U3CU3Eu__1;
				V_8 = L_46;
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88* L_47 = (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_47, sizeof(Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88));
				int32_t L_48 = (-1);
				V_0 = L_48;
				__this->___U3CU3E1__state = L_48;
			}

IL_0213_2:
			{
				double L_49;
				L_49 = Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_inline((&V_8), Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_RuntimeMethod_var);
				__this->___U3CU3Es__8 = L_49;
				double L_50 = __this->___U3CU3Es__8;
				__this->___U3CxU3E5__7 = L_50;
				double L_51 = __this->___U3CvalueU3E5__1;
				double L_52 = __this->___U3CxU3E5__7;
				V_9 = (bool)((((double)L_51) > ((double)L_52))? 1 : 0);
				bool L_53 = V_9;
				if (!L_53)
				{
					goto IL_024e_2;
				}
			}
			{
				double L_54 = __this->___U3CxU3E5__7;
				__this->___U3CvalueU3E5__1 = L_54;
			}

IL_024e_2:
			{
			}

IL_024f_2:
			{
				RuntimeObject* L_55 = __this->___U3CeU3E5__2;
				NullCheck(L_55);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_56;
				L_56 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_55);
				V_7 = L_56;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_57;
				L_57 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_11 = L_57;
				bool L_58;
				L_58 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_11), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_58)
				{
					goto IL_02b4_2;
				}
			}
			{
				int32_t L_59 = 3;
				V_0 = L_59;
				__this->___U3CU3E1__state = L_59;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_60 = V_11;
				__this->___U3CU3Eu__2 = L_60;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_61 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__19_1_tFD68B66ACCC41046F7697071B6978A6140527418**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_61, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_03dc;
			}

IL_0297_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_62 = __this->___U3CU3Eu__2;
				V_11 = L_62;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_63 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_63, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_64 = (-1);
				V_0 = L_64;
				__this->___U3CU3E1__state = L_64;
			}

IL_02b4_2:
			{
				bool L_65;
				L_65 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_11), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__9 = L_65;
				bool L_66 = __this->___U3CU3Es__9;
				V_10 = L_66;
				bool L_67 = V_10;
				if (L_67)
				{
					goto IL_019d_2;
				}
			}
			{
				goto IL_02df_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_02d3_1;
			}
			throw e;
		}

CATCH_02d3_1:
		{
			RuntimeObject* L_68 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_12 = L_68;
			RuntimeObject* L_69 = V_12;
			__this->___U3CU3Es__3 = L_69;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_69);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_02df_1;
		}

IL_02df_1:
		{
			RuntimeObject* L_70 = __this->___U3CeU3E5__2;
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_70) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_71 = V_13;
			if (!L_71)
			{
				goto IL_035e_1;
			}
		}
		{
			RuntimeObject* L_72 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_72);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_73;
			L_73 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_72);
			V_15 = L_73;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_74;
			L_74 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_15), NULL);
			V_14 = L_74;
			bool L_75;
			L_75 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_75)
			{
				goto IL_0355_1;
			}
		}
		{
			int32_t L_76 = 4;
			V_0 = L_76;
			__this->___U3CU3E1__state = L_76;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_77 = V_14;
			__this->___U3CU3Eu__3 = L_77;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_78 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitWithCancellationAsyncU3Ed__19_1_tFD68B66ACCC41046F7697071B6978A6140527418**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_78, (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_03dc;
		}

IL_0338_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_79 = __this->___U3CU3Eu__3;
			V_14 = L_79;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_80 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3);
			il2cpp_codegen_initobj(L_80, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_81 = (-1);
			V_0 = L_81;
			__this->___U3CU3E1__state = L_81;
		}

IL_0355_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_035e_1:
		{
			RuntimeObject* L_82 = __this->___U3CU3Es__3;
			V_12 = L_82;
			RuntimeObject* L_83 = V_12;
			if (!L_83)
			{
				goto IL_0388_1;
			}
		}
		{
			RuntimeObject* L_84 = V_12;
			V_16 = ((Exception_t*)IsInstClass((RuntimeObject*)L_84, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_85 = V_16;
			if (L_85)
			{
				goto IL_037b_1;
			}
		}
		{
			RuntimeObject* L_86 = V_12;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_86, method);
		}

IL_037b_1:
		{
			Exception_t* L_87 = V_16;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_88;
			L_88 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_87, NULL);
			NullCheck(L_88);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_88, NULL);
		}

IL_0388_1:
		{
			int32_t L_89 = __this->___U3CU3Es__4;
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			double L_90 = __this->___U3CvalueU3E5__1;
			V_1 = L_90;
			goto IL_03c0;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_039f;
		}
		throw e;
	}

CATCH_039f:
	{
		Exception_t* L_91 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_16 = L_91;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_92 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
		Exception_t* L_93 = V_16;
		AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_inline(L_92, L_93, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_03dc;
	}

IL_03c0:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_94 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
		double L_95 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_inline(L_94, L_95, AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
	}

IL_03dc:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__19_1_SetStateMachine_mA5A083BC5EE440A070B9F3066D46715FFAAA6755_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__19_1_tFD68B66ACCC41046F7697071B6978A6140527418* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__23_1__ctor_m21DF0E6526668941EB798D72EB9EB0A62460D049_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__23_1_t56364C68BFED293EA7A45B37CD7056C742942F89* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__23_1_MoveNext_m3460B4B908F1F85F8F7DA1F321A76939BD91289C_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__23_1_t56364C68BFED293EA7A45B37CD7056C742942F89* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_tD0D04062FAB00B8103221019885B52BF69955AEB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_tD0D04062FAB00B8103221019885B52BF69955AEB);
	const Il2CppFullySharedGenericAny L_39 = L_10;
	int32_t V_0 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CMinAwaitWithCancellationAsyncU3Ed__23_1_t56364C68BFED293EA7A45B37CD7056C742942F89* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_11;
	memset((&V_11), 0, sizeof(V_11));
	RuntimeObject* V_12 = NULL;
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Exception_t* V_16 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_004c_1;
		}

IL_0015_1:
		{
			goto IL_0338_1;
		}

IL_001a_1:
		{
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* L_3 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)(&__this->___U3CvalueU3E5__1);
			il2cpp_codegen_initobj(L_3, sizeof(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F));
			RuntimeObject* L_4 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = __this->___cancellationToken;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__2 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)L_6);
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			__this->___U3CU3Es__4 = 0;
		}

IL_004c_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				switch (L_7)
				{
					case 0:
					{
						goto IL_0065_2;
					}
					case 1:
					{
						goto IL_0067_2;
					}
					case 2:
					{
						goto IL_006c_2;
					}
					case 3:
					{
						goto IL_0071_2;
					}
				}
			}
			{
				goto IL_0076_2;
			}

IL_0065_2:
			{
				goto IL_00d3_2;
			}

IL_0067_2:
			{
				goto IL_0155_2;
			}

IL_006c_2:
			{
				goto IL_01f3_2;
			}

IL_0071_2:
			{
				goto IL_0297_2;
			}

IL_0076_2:
			{
				goto IL_010d_2;
			}

IL_007c_2:
			{
				Func_3_tE135AFB66CDB73C25CDE9CDD97913EE0CF6337D7* L_8 = __this->___selector;
				RuntimeObject* L_9 = __this->___U3CeU3E5__2;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_11 = __this->___cancellationToken;
				NullCheck(L_8);
				UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3 L_12;
				L_12 = InvokerFuncInvoker2< UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10), L_11);
				V_3 = L_12;
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 L_13;
				L_13 = UniTask_1_GetAwaiter_mE4F348E45E23B27DC05E89090C2C334B99FECBD4_inline((&V_3), UniTask_1_GetAwaiter_mE4F348E45E23B27DC05E89090C2C334B99FECBD4_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_mDD8356C2BFB8EBB175763FE2D92A4B0BEBDAEE94_inline((&V_2), Awaiter_get_IsCompleted_mDD8356C2BFB8EBB175763FE2D92A4B0BEBDAEE94_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00ef_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->___U3CU3E1__state = L_15;
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 L_16 = V_2;
				__this->___U3CU3Eu__1 = L_16;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_17 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8*, U3CMinAwaitWithCancellationAsyncU3Ed__23_1_t56364C68BFED293EA7A45B37CD7056C742942F89**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_03dc;
			}

IL_00d3_2:
			{
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 L_18 = __this->___U3CU3Eu__1;
				V_2 = L_18;
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8* L_19 = (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state = L_20;
			}

IL_00ef_2:
			{
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_21;
				L_21 = Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_inline((&V_2), Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_RuntimeMethod_var);
				__this->___U3CU3Es__5 = L_21;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_22 = __this->___U3CU3Es__5;
				__this->___U3CvalueU3E5__1 = L_22;
				goto IL_0194_2;
			}

IL_010d_2:
			{
				RuntimeObject* L_23 = __this->___U3CeU3E5__2;
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
					goto IL_0172_2;
				}
			}
			{
				int32_t L_27 = 1;
				V_0 = L_27;
				__this->___U3CU3E1__state = L_27;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28 = V_6;
				__this->___U3CU3Eu__2 = L_28;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_29 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__23_1_t56364C68BFED293EA7A45B37CD7056C742942F89**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_29, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_03dc;
			}

IL_0155_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_30 = __this->___U3CU3Eu__2;
				V_6 = L_30;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_31 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_31, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_32 = (-1);
				V_0 = L_32;
				__this->___U3CU3E1__state = L_32;
			}

IL_0172_2:
			{
				bool L_33;
				L_33 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_33;
				bool L_34 = __this->___U3CU3Es__6;
				V_5 = L_34;
				bool L_35 = V_5;
				if (L_35)
				{
					goto IL_007c_2;
				}
			}
			{
				Exception_t* L_36;
				L_36 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, method);
			}

IL_0194_2:
			{
				goto IL_024f_2;
			}

IL_019a_2:
			{
				Func_3_tE135AFB66CDB73C25CDE9CDD97913EE0CF6337D7* L_37 = __this->___selector;
				RuntimeObject* L_38 = __this->___U3CeU3E5__2;
				NullCheck(L_38);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_38, (Il2CppFullySharedGenericAny*)L_39);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_40 = __this->___cancellationToken;
				NullCheck(L_37);
				UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3 L_41;
				L_41 = InvokerFuncInvoker2< UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_37, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_39: *(void**)L_39), L_40);
				V_3 = L_41;
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 L_42;
				L_42 = UniTask_1_GetAwaiter_mE4F348E45E23B27DC05E89090C2C334B99FECBD4_inline((&V_3), UniTask_1_GetAwaiter_mE4F348E45E23B27DC05E89090C2C334B99FECBD4_RuntimeMethod_var);
				V_8 = L_42;
				bool L_43;
				L_43 = Awaiter_get_IsCompleted_mDD8356C2BFB8EBB175763FE2D92A4B0BEBDAEE94_inline((&V_8), Awaiter_get_IsCompleted_mDD8356C2BFB8EBB175763FE2D92A4B0BEBDAEE94_RuntimeMethod_var);
				if (L_43)
				{
					goto IL_0210_2;
				}
			}
			{
				int32_t L_44 = 2;
				V_0 = L_44;
				__this->___U3CU3E1__state = L_44;
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 L_45 = V_8;
				__this->___U3CU3Eu__1 = L_45;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_46 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8*, U3CMinAwaitWithCancellationAsyncU3Ed__23_1_t56364C68BFED293EA7A45B37CD7056C742942F89**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_46, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_03dc;
			}

IL_01f3_2:
			{
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 L_47 = __this->___U3CU3Eu__1;
				V_8 = L_47;
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8* L_48 = (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_48, sizeof(Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8));
				int32_t L_49 = (-1);
				V_0 = L_49;
				__this->___U3CU3E1__state = L_49;
			}

IL_0210_2:
			{
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_50;
				L_50 = Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_inline((&V_8), Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_RuntimeMethod_var);
				__this->___U3CU3Es__8 = L_50;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_51 = __this->___U3CU3Es__8;
				__this->___U3CxU3E5__7 = L_51;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_52 = __this->___U3CvalueU3E5__1;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_53 = __this->___U3CxU3E5__7;
				il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
				bool L_54;
				L_54 = Decimal_op_GreaterThan_m549F09BF0C53D8611E550CA9CCB53543D6DAF717(L_52, L_53, NULL);
				V_9 = L_54;
				bool L_55 = V_9;
				if (!L_55)
				{
					goto IL_024e_2;
				}
			}
			{
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_56 = __this->___U3CxU3E5__7;
				__this->___U3CvalueU3E5__1 = L_56;
			}

IL_024e_2:
			{
			}

IL_024f_2:
			{
				RuntimeObject* L_57 = __this->___U3CeU3E5__2;
				NullCheck(L_57);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_58;
				L_58 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_57);
				V_7 = L_58;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_59;
				L_59 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_11 = L_59;
				bool L_60;
				L_60 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_11), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_60)
				{
					goto IL_02b4_2;
				}
			}
			{
				int32_t L_61 = 3;
				V_0 = L_61;
				__this->___U3CU3E1__state = L_61;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_62 = V_11;
				__this->___U3CU3Eu__2 = L_62;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_63 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__23_1_t56364C68BFED293EA7A45B37CD7056C742942F89**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_63, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_03dc;
			}

IL_0297_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_64 = __this->___U3CU3Eu__2;
				V_11 = L_64;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_65 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_65, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_66 = (-1);
				V_0 = L_66;
				__this->___U3CU3E1__state = L_66;
			}

IL_02b4_2:
			{
				bool L_67;
				L_67 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_11), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__9 = L_67;
				bool L_68 = __this->___U3CU3Es__9;
				V_10 = L_68;
				bool L_69 = V_10;
				if (L_69)
				{
					goto IL_019a_2;
				}
			}
			{
				goto IL_02df_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_02d3_1;
			}
			throw e;
		}

CATCH_02d3_1:
		{
			RuntimeObject* L_70 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_12 = L_70;
			RuntimeObject* L_71 = V_12;
			__this->___U3CU3Es__3 = L_71;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_71);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_02df_1;
		}

IL_02df_1:
		{
			RuntimeObject* L_72 = __this->___U3CeU3E5__2;
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_72) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_73 = V_13;
			if (!L_73)
			{
				goto IL_035e_1;
			}
		}
		{
			RuntimeObject* L_74 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_74);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_75;
			L_75 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_74);
			V_15 = L_75;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_76;
			L_76 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_15), NULL);
			V_14 = L_76;
			bool L_77;
			L_77 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_77)
			{
				goto IL_0355_1;
			}
		}
		{
			int32_t L_78 = 4;
			V_0 = L_78;
			__this->___U3CU3E1__state = L_78;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_79 = V_14;
			__this->___U3CU3Eu__3 = L_79;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_80 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitWithCancellationAsyncU3Ed__23_1_t56364C68BFED293EA7A45B37CD7056C742942F89**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_80, (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_03dc;
		}

IL_0338_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_81 = __this->___U3CU3Eu__3;
			V_14 = L_81;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_82 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3);
			il2cpp_codegen_initobj(L_82, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_83 = (-1);
			V_0 = L_83;
			__this->___U3CU3E1__state = L_83;
		}

IL_0355_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_035e_1:
		{
			RuntimeObject* L_84 = __this->___U3CU3Es__3;
			V_12 = L_84;
			RuntimeObject* L_85 = V_12;
			if (!L_85)
			{
				goto IL_0388_1;
			}
		}
		{
			RuntimeObject* L_86 = V_12;
			V_16 = ((Exception_t*)IsInstClass((RuntimeObject*)L_86, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_87 = V_16;
			if (L_87)
			{
				goto IL_037b_1;
			}
		}
		{
			RuntimeObject* L_88 = V_12;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_88, method);
		}

IL_037b_1:
		{
			Exception_t* L_89 = V_16;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_90;
			L_90 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_89, NULL);
			NullCheck(L_90);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_90, NULL);
		}

IL_0388_1:
		{
			int32_t L_91 = __this->___U3CU3Es__4;
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_92 = __this->___U3CvalueU3E5__1;
			V_1 = L_92;
			goto IL_03c0;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_039f;
		}
		throw e;
	}

CATCH_039f:
	{
		Exception_t* L_93 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_16 = L_93;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_94 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder);
		Exception_t* L_95 = V_16;
		AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_inline(L_94, L_95, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_03dc;
	}

IL_03c0:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_96 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_97 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_inline(L_96, L_97, AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_RuntimeMethod_var);
	}

IL_03dc:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__23_1_SetStateMachine_m0CDC2F5247FDF64CDAB6511DAFFE4539EB8C4713_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__23_1_t56364C68BFED293EA7A45B37CD7056C742942F89* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__27_1__ctor_m2D3FD1783B190B0499F0F3A45A0B0056DA5B0335_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__27_1_tA45E1E004A2DB3D5167CEE8595F6FC1BEB82C361* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__27_1_MoveNext_m6CEF4B3B1D2DC1DDF2B5CC7BF19F51D38A7F418C_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__27_1_tA45E1E004A2DB3D5167CEE8595F6FC1BEB82C361* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m5E0E26E389BF8D15A8935BC741FAADEFF1617158_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t6136090ADB939205A5C676DDD4CFC430A4F569BE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t6136090ADB939205A5C676DDD4CFC430A4F569BE);
	const Il2CppFullySharedGenericAny L_43 = L_10;
	int32_t V_0 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CMinAwaitWithCancellationAsyncU3Ed__27_1_tA45E1E004A2DB3D5167CEE8595F6FC1BEB82C361* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_15;
	memset((&V_15), 0, sizeof(V_15));
	RuntimeObject* V_16 = NULL;
	bool V_17 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_18;
	memset((&V_18), 0, sizeof(V_18));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_19;
	memset((&V_19), 0, sizeof(V_19));
	Exception_t* V_20 = NULL;
	int32_t V_21 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_004c_1;
		}

IL_0015_1:
		{
			goto IL_03bb_1;
		}

IL_001a_1:
		{
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_3 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CvalueU3E5__1);
			il2cpp_codegen_initobj(L_3, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
			RuntimeObject* L_4 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = __this->___cancellationToken;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__2 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)L_6);
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			__this->___U3CU3Es__4 = 0;
		}

IL_004c_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				switch (L_7)
				{
					case 0:
					{
						goto IL_0065_2;
					}
					case 1:
					{
						goto IL_0067_2;
					}
					case 2:
					{
						goto IL_006c_2;
					}
					case 3:
					{
						goto IL_0071_2;
					}
				}
			}
			{
				goto IL_0076_2;
			}

IL_0065_2:
			{
				goto IL_00d3_2;
			}

IL_0067_2:
			{
				goto IL_0177_2;
			}

IL_006c_2:
			{
				goto IL_0220_2;
			}

IL_0071_2:
			{
				goto IL_0311_2;
			}

IL_0076_2:
			{
				goto IL_012f_2;
			}

IL_007c_2:
			{
				Func_3_tA0DEFAEF785E5E0D32E2CABA4CBDB7F9D34C2B8D* L_8 = __this->___selector;
				RuntimeObject* L_9 = __this->___U3CeU3E5__2;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_11 = __this->___cancellationToken;
				NullCheck(L_8);
				UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05 L_12;
				L_12 = InvokerFuncInvoker2< UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10), L_11);
				V_3 = L_12;
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 L_13;
				L_13 = UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_inline((&V_3), UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_inline((&V_2), Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00ef_2;
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
				AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_17 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*, Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9*, U3CMinAwaitWithCancellationAsyncU3Ed__27_1_tA45E1E004A2DB3D5167CEE8595F6FC1BEB82C361**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_047c;
			}

IL_00d3_2:
			{
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 L_18 = __this->___U3CU3Eu__1;
				V_2 = L_18;
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9* L_19 = (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state = L_20;
			}

IL_00ef_2:
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_21;
				L_21 = Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_inline((&V_2), Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_21;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_22 = __this->___U3CU3Es__6;
				__this->___U3CvalueU3E5__1 = L_22;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_23 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CU3Es__6);
				il2cpp_codegen_initobj(L_23, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_24 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CvalueU3E5__1);
				bool L_25;
				L_25 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_24, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				V_5 = (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
				bool L_26 = V_5;
				if (!L_26)
				{
					goto IL_012a_2;
				}
			}
			{
				goto IL_012f_2;
			}

IL_012a_2:
			{
				goto IL_01c1_2;
			}

IL_012f_2:
			{
				RuntimeObject* L_27 = __this->___U3CeU3E5__2;
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
					goto IL_0194_2;
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
				AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_33 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__27_1_tA45E1E004A2DB3D5167CEE8595F6FC1BEB82C361**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_33, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_047c;
			}

IL_0177_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_34 = __this->___U3CU3Eu__2;
				V_7 = L_34;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_35 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_35, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_36 = (-1);
				V_0 = L_36;
				__this->___U3CU3E1__state = L_36;
			}

IL_0194_2:
			{
				bool L_37;
				L_37 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7 = L_37;
				bool L_38 = __this->___U3CU3Es__7;
				V_6 = L_38;
				bool L_39 = V_6;
				if (L_39)
				{
					goto IL_007c_2;
				}
			}
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_40 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CU3Es__5);
				il2cpp_codegen_initobj(L_40, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				goto IL_034d_2;
			}

IL_01c1_2:
			{
				goto IL_02c9_2;
			}

IL_01c7_2:
			{
				Func_3_tA0DEFAEF785E5E0D32E2CABA4CBDB7F9D34C2B8D* L_41 = __this->___selector;
				RuntimeObject* L_42 = __this->___U3CeU3E5__2;
				NullCheck(L_42);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_42, (Il2CppFullySharedGenericAny*)L_43);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_44 = __this->___cancellationToken;
				NullCheck(L_41);
				UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05 L_45;
				L_45 = InvokerFuncInvoker2< UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_41, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_43: *(void**)L_43), L_44);
				V_3 = L_45;
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 L_46;
				L_46 = UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_inline((&V_3), UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_RuntimeMethod_var);
				V_9 = L_46;
				bool L_47;
				L_47 = Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_inline((&V_9), Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_RuntimeMethod_var);
				if (L_47)
				{
					goto IL_023d_2;
				}
			}
			{
				int32_t L_48 = 2;
				V_0 = L_48;
				__this->___U3CU3E1__state = L_48;
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 L_49 = V_9;
				__this->___U3CU3Eu__1 = L_49;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_50 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*, Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9*, U3CMinAwaitWithCancellationAsyncU3Ed__27_1_tA45E1E004A2DB3D5167CEE8595F6FC1BEB82C361**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_50, (&V_9), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_047c;
			}

IL_0220_2:
			{
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 L_51 = __this->___U3CU3Eu__1;
				V_9 = L_51;
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9* L_52 = (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_52, sizeof(Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9));
				int32_t L_53 = (-1);
				V_0 = L_53;
				__this->___U3CU3E1__state = L_53;
			}

IL_023d_2:
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_54;
				L_54 = Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_inline((&V_9), Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_RuntimeMethod_var);
				__this->___U3CU3Es__9 = L_54;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_55 = __this->___U3CU3Es__9;
				__this->___U3CxU3E5__8 = L_55;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_56 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CU3Es__9);
				il2cpp_codegen_initobj(L_56, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_57 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CxU3E5__8);
				bool L_58;
				L_58 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_57, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				V_10 = (bool)((((int32_t)L_58) == ((int32_t)0))? 1 : 0);
				bool L_59 = V_10;
				if (!L_59)
				{
					goto IL_0278_2;
				}
			}
			{
				goto IL_02c9_2;
			}

IL_0278_2:
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_60 = __this->___U3CvalueU3E5__1;
				V_12 = L_60;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_61 = __this->___U3CxU3E5__8;
				V_13 = L_61;
				int32_t L_62;
				L_62 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_12), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
				int32_t L_63;
				L_63 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_13), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
				bool L_64;
				L_64 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_12), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				bool L_65;
				L_65 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_13), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				V_11 = (bool)((int32_t)(((((int32_t)L_62) > ((int32_t)L_63))? 1 : 0)&((int32_t)((int32_t)L_64&(int32_t)L_65))));
				bool L_66 = V_11;
				if (!L_66)
				{
					goto IL_02bc_2;
				}
			}
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_67 = __this->___U3CxU3E5__8;
				__this->___U3CvalueU3E5__1 = L_67;
			}

IL_02bc_2:
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_68 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CxU3E5__8);
				il2cpp_codegen_initobj(L_68, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
			}

IL_02c9_2:
			{
				RuntimeObject* L_69 = __this->___U3CeU3E5__2;
				NullCheck(L_69);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_70;
				L_70 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_69);
				V_8 = L_70;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_71;
				L_71 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_15 = L_71;
				bool L_72;
				L_72 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_15), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_72)
				{
					goto IL_032e_2;
				}
			}
			{
				int32_t L_73 = 3;
				V_0 = L_73;
				__this->___U3CU3E1__state = L_73;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_74 = V_15;
				__this->___U3CU3Eu__2 = L_74;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_75 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__27_1_tA45E1E004A2DB3D5167CEE8595F6FC1BEB82C361**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_75, (&V_15), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_047c;
			}

IL_0311_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_76 = __this->___U3CU3Eu__2;
				V_15 = L_76;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_77 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_77, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_78 = (-1);
				V_0 = L_78;
				__this->___U3CU3E1__state = L_78;
			}

IL_032e_2:
			{
				bool L_79;
				L_79 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_15), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__10 = L_79;
				bool L_80 = __this->___U3CU3Es__10;
				V_14 = L_80;
				bool L_81 = V_14;
				if (L_81)
				{
					goto IL_01c7_2;
				}
			}
			{
				goto IL_0362_1;
			}

IL_034d_2:
			{
				__this->___U3CU3Es__4 = 1;
				goto IL_0362_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0356_1;
			}
			throw e;
		}

CATCH_0356_1:
		{
			RuntimeObject* L_82 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_16 = L_82;
			RuntimeObject* L_83 = V_16;
			__this->___U3CU3Es__3 = L_83;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_83);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0362_1;
		}

IL_0362_1:
		{
			RuntimeObject* L_84 = __this->___U3CeU3E5__2;
			V_17 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_84) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_85 = V_17;
			if (!L_85)
			{
				goto IL_03e1_1;
			}
		}
		{
			RuntimeObject* L_86 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_86);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_87;
			L_87 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_86);
			V_19 = L_87;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_88;
			L_88 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_19), NULL);
			V_18 = L_88;
			bool L_89;
			L_89 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_18), NULL);
			if (L_89)
			{
				goto IL_03d8_1;
			}
		}
		{
			int32_t L_90 = 4;
			V_0 = L_90;
			__this->___U3CU3E1__state = L_90;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_91 = V_18;
			__this->___U3CU3Eu__3 = L_91;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_92 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitWithCancellationAsyncU3Ed__27_1_tA45E1E004A2DB3D5167CEE8595F6FC1BEB82C361**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_92, (&V_18), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_047c;
		}

IL_03bb_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_93 = __this->___U3CU3Eu__3;
			V_18 = L_93;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_94 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3);
			il2cpp_codegen_initobj(L_94, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_95 = (-1);
			V_0 = L_95;
			__this->___U3CU3E1__state = L_95;
		}

IL_03d8_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_18), NULL);
		}

IL_03e1_1:
		{
			RuntimeObject* L_96 = __this->___U3CU3Es__3;
			V_16 = L_96;
			RuntimeObject* L_97 = V_16;
			if (!L_97)
			{
				goto IL_040b_1;
			}
		}
		{
			RuntimeObject* L_98 = V_16;
			V_20 = ((Exception_t*)IsInstClass((RuntimeObject*)L_98, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_99 = V_20;
			if (L_99)
			{
				goto IL_03fe_1;
			}
		}
		{
			RuntimeObject* L_100 = V_16;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_100, method);
		}

IL_03fe_1:
		{
			Exception_t* L_101 = V_20;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_102;
			L_102 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_101, NULL);
			NullCheck(L_102);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_102, NULL);
		}

IL_040b_1:
		{
			int32_t L_103 = __this->___U3CU3Es__4;
			V_21 = L_103;
			int32_t L_104 = V_21;
			if ((((int32_t)L_104) == ((int32_t)1)))
			{
				goto IL_041a_1;
			}
		}
		{
			goto IL_0423_1;
		}

IL_041a_1:
		{
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_105 = __this->___U3CU3Es__5;
			V_1 = L_105;
			goto IL_0460;
		}

IL_0423_1:
		{
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_106 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CU3Es__5);
			il2cpp_codegen_initobj(L_106, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_107 = __this->___U3CvalueU3E5__1;
			V_1 = L_107;
			goto IL_0460;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_043f;
		}
		throw e;
	}

CATCH_043f:
	{
		Exception_t* L_108 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_20 = L_108;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_109 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder);
		Exception_t* L_110 = V_20;
		AsyncUniTaskMethodBuilder_1_SetException_mE8C5BA18D2449D6BD546630CE70DE315F5F91FCE_inline(L_109, L_110, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mE8C5BA18D2449D6BD546630CE70DE315F5F91FCE_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_047c;
	}

IL_0460:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_111 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_112 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m5E0E26E389BF8D15A8935BC741FAADEFF1617158_inline(L_111, L_112, AsyncUniTaskMethodBuilder_1_SetResult_m5E0E26E389BF8D15A8935BC741FAADEFF1617158_RuntimeMethod_var);
	}

IL_047c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__27_1_SetStateMachine_m7725E3B9B6941A673914B2485EAAD5F0ADF7EF2D_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__27_1_tA45E1E004A2DB3D5167CEE8595F6FC1BEB82C361* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__31_1__ctor_m588937A29D7A758F34A6490EE61463D1B2310702_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__31_1_t1EE73BF3740F1CDA20ACB71BFF7968ABDF9CB05B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__31_1_MoveNext_m927E3CDB3E3081D74C0CE8885A306AA45156B218_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__31_1_t1EE73BF3740F1CDA20ACB71BFF7968ABDF9CB05B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m79D800118F9BCD740C939B134E630A8AB93AA606_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t40FE473D71FA7D3DFFFE890BF16D07676E158CEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t40FE473D71FA7D3DFFFE890BF16D07676E158CEC);
	const Il2CppFullySharedGenericAny L_43 = L_10;
	int32_t V_0 = 0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CMinAwaitWithCancellationAsyncU3Ed__31_1_t1EE73BF3740F1CDA20ACB71BFF7968ABDF9CB05B* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_15;
	memset((&V_15), 0, sizeof(V_15));
	RuntimeObject* V_16 = NULL;
	bool V_17 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_18;
	memset((&V_18), 0, sizeof(V_18));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_19;
	memset((&V_19), 0, sizeof(V_19));
	Exception_t* V_20 = NULL;
	int32_t V_21 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_004c_1;
		}

IL_0015_1:
		{
			goto IL_03bb_1;
		}

IL_001a_1:
		{
			Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_3 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CvalueU3E5__1);
			il2cpp_codegen_initobj(L_3, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
			RuntimeObject* L_4 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = __this->___cancellationToken;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__2 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)L_6);
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			__this->___U3CU3Es__4 = 0;
		}

IL_004c_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				switch (L_7)
				{
					case 0:
					{
						goto IL_0065_2;
					}
					case 1:
					{
						goto IL_0067_2;
					}
					case 2:
					{
						goto IL_006c_2;
					}
					case 3:
					{
						goto IL_0071_2;
					}
				}
			}
			{
				goto IL_0076_2;
			}

IL_0065_2:
			{
				goto IL_00d3_2;
			}

IL_0067_2:
			{
				goto IL_0177_2;
			}

IL_006c_2:
			{
				goto IL_0220_2;
			}

IL_0071_2:
			{
				goto IL_0311_2;
			}

IL_0076_2:
			{
				goto IL_012f_2;
			}

IL_007c_2:
			{
				Func_3_t4111B7EAAEBCF4004223B4E554711FE862E5C3B2* L_8 = __this->___selector;
				RuntimeObject* L_9 = __this->___U3CeU3E5__2;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_11 = __this->___cancellationToken;
				NullCheck(L_8);
				UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C L_12;
				L_12 = InvokerFuncInvoker2< UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10), L_11);
				V_3 = L_12;
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB L_13;
				L_13 = UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_inline((&V_3), UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_inline((&V_2), Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00ef_2;
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
				AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_17 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*, Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB*, U3CMinAwaitWithCancellationAsyncU3Ed__31_1_t1EE73BF3740F1CDA20ACB71BFF7968ABDF9CB05B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_047c;
			}

IL_00d3_2:
			{
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB L_18 = __this->___U3CU3Eu__1;
				V_2 = L_18;
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB* L_19 = (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state = L_20;
			}

IL_00ef_2:
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_21;
				L_21 = Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_inline((&V_2), Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_21;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_22 = __this->___U3CU3Es__6;
				__this->___U3CvalueU3E5__1 = L_22;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_23 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CU3Es__6);
				il2cpp_codegen_initobj(L_23, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_24 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CvalueU3E5__1);
				bool L_25;
				L_25 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline(L_24, Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
				V_5 = (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
				bool L_26 = V_5;
				if (!L_26)
				{
					goto IL_012a_2;
				}
			}
			{
				goto IL_012f_2;
			}

IL_012a_2:
			{
				goto IL_01c1_2;
			}

IL_012f_2:
			{
				RuntimeObject* L_27 = __this->___U3CeU3E5__2;
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
					goto IL_0194_2;
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
				AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_33 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__31_1_t1EE73BF3740F1CDA20ACB71BFF7968ABDF9CB05B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_33, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_047c;
			}

IL_0177_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_34 = __this->___U3CU3Eu__2;
				V_7 = L_34;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_35 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_35, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_36 = (-1);
				V_0 = L_36;
				__this->___U3CU3E1__state = L_36;
			}

IL_0194_2:
			{
				bool L_37;
				L_37 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7 = L_37;
				bool L_38 = __this->___U3CU3Es__7;
				V_6 = L_38;
				bool L_39 = V_6;
				if (L_39)
				{
					goto IL_007c_2;
				}
			}
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_40 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CU3Es__5);
				il2cpp_codegen_initobj(L_40, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
				goto IL_034d_2;
			}

IL_01c1_2:
			{
				goto IL_02c9_2;
			}

IL_01c7_2:
			{
				Func_3_t4111B7EAAEBCF4004223B4E554711FE862E5C3B2* L_41 = __this->___selector;
				RuntimeObject* L_42 = __this->___U3CeU3E5__2;
				NullCheck(L_42);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_42, (Il2CppFullySharedGenericAny*)L_43);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_44 = __this->___cancellationToken;
				NullCheck(L_41);
				UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C L_45;
				L_45 = InvokerFuncInvoker2< UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_41, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_43: *(void**)L_43), L_44);
				V_3 = L_45;
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB L_46;
				L_46 = UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_inline((&V_3), UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_RuntimeMethod_var);
				V_9 = L_46;
				bool L_47;
				L_47 = Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_inline((&V_9), Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_RuntimeMethod_var);
				if (L_47)
				{
					goto IL_023d_2;
				}
			}
			{
				int32_t L_48 = 2;
				V_0 = L_48;
				__this->___U3CU3E1__state = L_48;
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB L_49 = V_9;
				__this->___U3CU3Eu__1 = L_49;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_50 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*, Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB*, U3CMinAwaitWithCancellationAsyncU3Ed__31_1_t1EE73BF3740F1CDA20ACB71BFF7968ABDF9CB05B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_50, (&V_9), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_047c;
			}

IL_0220_2:
			{
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB L_51 = __this->___U3CU3Eu__1;
				V_9 = L_51;
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB* L_52 = (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_52, sizeof(Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB));
				int32_t L_53 = (-1);
				V_0 = L_53;
				__this->___U3CU3E1__state = L_53;
			}

IL_023d_2:
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_54;
				L_54 = Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_inline((&V_9), Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_RuntimeMethod_var);
				__this->___U3CU3Es__9 = L_54;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_55 = __this->___U3CU3Es__9;
				__this->___U3CxU3E5__8 = L_55;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_56 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CU3Es__9);
				il2cpp_codegen_initobj(L_56, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_57 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CxU3E5__8);
				bool L_58;
				L_58 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline(L_57, Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
				V_10 = (bool)((((int32_t)L_58) == ((int32_t)0))? 1 : 0);
				bool L_59 = V_10;
				if (!L_59)
				{
					goto IL_0278_2;
				}
			}
			{
				goto IL_02c9_2;
			}

IL_0278_2:
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_60 = __this->___U3CvalueU3E5__1;
				V_12 = L_60;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_61 = __this->___U3CxU3E5__8;
				V_13 = L_61;
				int64_t L_62;
				L_62 = Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_inline((&V_12), Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
				int64_t L_63;
				L_63 = Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_inline((&V_13), Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
				bool L_64;
				L_64 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline((&V_12), Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
				bool L_65;
				L_65 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline((&V_13), Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
				V_11 = (bool)((int32_t)(((((int64_t)L_62) > ((int64_t)L_63))? 1 : 0)&((int32_t)((int32_t)L_64&(int32_t)L_65))));
				bool L_66 = V_11;
				if (!L_66)
				{
					goto IL_02bc_2;
				}
			}
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_67 = __this->___U3CxU3E5__8;
				__this->___U3CvalueU3E5__1 = L_67;
			}

IL_02bc_2:
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_68 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CxU3E5__8);
				il2cpp_codegen_initobj(L_68, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
			}

IL_02c9_2:
			{
				RuntimeObject* L_69 = __this->___U3CeU3E5__2;
				NullCheck(L_69);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_70;
				L_70 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_69);
				V_8 = L_70;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_71;
				L_71 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_15 = L_71;
				bool L_72;
				L_72 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_15), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_72)
				{
					goto IL_032e_2;
				}
			}
			{
				int32_t L_73 = 3;
				V_0 = L_73;
				__this->___U3CU3E1__state = L_73;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_74 = V_15;
				__this->___U3CU3Eu__2 = L_74;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_75 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__31_1_t1EE73BF3740F1CDA20ACB71BFF7968ABDF9CB05B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_75, (&V_15), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_047c;
			}

IL_0311_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_76 = __this->___U3CU3Eu__2;
				V_15 = L_76;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_77 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_77, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_78 = (-1);
				V_0 = L_78;
				__this->___U3CU3E1__state = L_78;
			}

IL_032e_2:
			{
				bool L_79;
				L_79 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_15), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__10 = L_79;
				bool L_80 = __this->___U3CU3Es__10;
				V_14 = L_80;
				bool L_81 = V_14;
				if (L_81)
				{
					goto IL_01c7_2;
				}
			}
			{
				goto IL_0362_1;
			}

IL_034d_2:
			{
				__this->___U3CU3Es__4 = 1;
				goto IL_0362_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0356_1;
			}
			throw e;
		}

CATCH_0356_1:
		{
			RuntimeObject* L_82 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_16 = L_82;
			RuntimeObject* L_83 = V_16;
			__this->___U3CU3Es__3 = L_83;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_83);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0362_1;
		}

IL_0362_1:
		{
			RuntimeObject* L_84 = __this->___U3CeU3E5__2;
			V_17 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_84) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_85 = V_17;
			if (!L_85)
			{
				goto IL_03e1_1;
			}
		}
		{
			RuntimeObject* L_86 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_86);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_87;
			L_87 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_86);
			V_19 = L_87;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_88;
			L_88 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_19), NULL);
			V_18 = L_88;
			bool L_89;
			L_89 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_18), NULL);
			if (L_89)
			{
				goto IL_03d8_1;
			}
		}
		{
			int32_t L_90 = 4;
			V_0 = L_90;
			__this->___U3CU3E1__state = L_90;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_91 = V_18;
			__this->___U3CU3Eu__3 = L_91;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_92 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitWithCancellationAsyncU3Ed__31_1_t1EE73BF3740F1CDA20ACB71BFF7968ABDF9CB05B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_92, (&V_18), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_047c;
		}

IL_03bb_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_93 = __this->___U3CU3Eu__3;
			V_18 = L_93;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_94 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3);
			il2cpp_codegen_initobj(L_94, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_95 = (-1);
			V_0 = L_95;
			__this->___U3CU3E1__state = L_95;
		}

IL_03d8_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_18), NULL);
		}

IL_03e1_1:
		{
			RuntimeObject* L_96 = __this->___U3CU3Es__3;
			V_16 = L_96;
			RuntimeObject* L_97 = V_16;
			if (!L_97)
			{
				goto IL_040b_1;
			}
		}
		{
			RuntimeObject* L_98 = V_16;
			V_20 = ((Exception_t*)IsInstClass((RuntimeObject*)L_98, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_99 = V_20;
			if (L_99)
			{
				goto IL_03fe_1;
			}
		}
		{
			RuntimeObject* L_100 = V_16;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_100, method);
		}

IL_03fe_1:
		{
			Exception_t* L_101 = V_20;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_102;
			L_102 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_101, NULL);
			NullCheck(L_102);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_102, NULL);
		}

IL_040b_1:
		{
			int32_t L_103 = __this->___U3CU3Es__4;
			V_21 = L_103;
			int32_t L_104 = V_21;
			if ((((int32_t)L_104) == ((int32_t)1)))
			{
				goto IL_041a_1;
			}
		}
		{
			goto IL_0423_1;
		}

IL_041a_1:
		{
			Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_105 = __this->___U3CU3Es__5;
			V_1 = L_105;
			goto IL_0460;
		}

IL_0423_1:
		{
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_106 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CU3Es__5);
			il2cpp_codegen_initobj(L_106, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
			Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_107 = __this->___U3CvalueU3E5__1;
			V_1 = L_107;
			goto IL_0460;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_043f;
		}
		throw e;
	}

CATCH_043f:
	{
		Exception_t* L_108 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_20 = L_108;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_109 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder);
		Exception_t* L_110 = V_20;
		AsyncUniTaskMethodBuilder_1_SetException_m668B0B683F2B4B7005D076DE9400F32B1702673B_inline(L_109, L_110, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m668B0B683F2B4B7005D076DE9400F32B1702673B_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_047c;
	}

IL_0460:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_111 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder);
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_112 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m79D800118F9BCD740C939B134E630A8AB93AA606_inline(L_111, L_112, AsyncUniTaskMethodBuilder_1_SetResult_m79D800118F9BCD740C939B134E630A8AB93AA606_RuntimeMethod_var);
	}

IL_047c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__31_1_SetStateMachine_mD5EDA055A8159EE42672FE03BF0B7BD662B91F84_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__31_1_t1EE73BF3740F1CDA20ACB71BFF7968ABDF9CB05B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__35_1__ctor_m0BE4A470A014DCA5E8C9287CC990AC064CC9D11B_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__35_1_tDA26EBC4AC4C6FCEC8955255F2D13374C1B67B9F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__35_1_MoveNext_mC5B2F5E7EC60BA8E9AED03AC23D100D4561F2AE6_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__35_1_tDA26EBC4AC4C6FCEC8955255F2D13374C1B67B9F* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t49127EBD4DEB782B6A4C477C2382B9B7F172A854 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t49127EBD4DEB782B6A4C477C2382B9B7F172A854);
	const Il2CppFullySharedGenericAny L_43 = L_10;
	int32_t V_0 = 0;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CMinAwaitWithCancellationAsyncU3Ed__35_1_tDA26EBC4AC4C6FCEC8955255F2D13374C1B67B9F* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_15;
	memset((&V_15), 0, sizeof(V_15));
	RuntimeObject* V_16 = NULL;
	bool V_17 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_18;
	memset((&V_18), 0, sizeof(V_18));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_19;
	memset((&V_19), 0, sizeof(V_19));
	Exception_t* V_20 = NULL;
	int32_t V_21 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_004c_1;
		}

IL_0015_1:
		{
			goto IL_03bb_1;
		}

IL_001a_1:
		{
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_3 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CvalueU3E5__1);
			il2cpp_codegen_initobj(L_3, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
			RuntimeObject* L_4 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = __this->___cancellationToken;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__2 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)L_6);
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			__this->___U3CU3Es__4 = 0;
		}

IL_004c_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				switch (L_7)
				{
					case 0:
					{
						goto IL_0065_2;
					}
					case 1:
					{
						goto IL_0067_2;
					}
					case 2:
					{
						goto IL_006c_2;
					}
					case 3:
					{
						goto IL_0071_2;
					}
				}
			}
			{
				goto IL_0076_2;
			}

IL_0065_2:
			{
				goto IL_00d3_2;
			}

IL_0067_2:
			{
				goto IL_0177_2;
			}

IL_006c_2:
			{
				goto IL_0220_2;
			}

IL_0071_2:
			{
				goto IL_0311_2;
			}

IL_0076_2:
			{
				goto IL_012f_2;
			}

IL_007c_2:
			{
				Func_3_t5604379C942DED2B342DEED029BC1AB35C5A06A1* L_8 = __this->___selector;
				RuntimeObject* L_9 = __this->___U3CeU3E5__2;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_11 = __this->___cancellationToken;
				NullCheck(L_8);
				UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46 L_12;
				L_12 = InvokerFuncInvoker2< UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10), L_11);
				V_3 = L_12;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_13;
				L_13 = UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_inline((&V_3), UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_inline((&V_2), Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00ef_2;
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
				((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91*, U3CMinAwaitWithCancellationAsyncU3Ed__35_1_tDA26EBC4AC4C6FCEC8955255F2D13374C1B67B9F**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_047c;
			}

IL_00d3_2:
			{
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_18 = __this->___U3CU3Eu__1;
				V_2 = L_18;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* L_19 = (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state = L_20;
			}

IL_00ef_2:
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_21;
				L_21 = Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_inline((&V_2), Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_21;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_22 = __this->___U3CU3Es__6;
				__this->___U3CvalueU3E5__1 = L_22;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_23 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CU3Es__6);
				il2cpp_codegen_initobj(L_23, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_24 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CvalueU3E5__1);
				bool L_25;
				L_25 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline(L_24, Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
				V_5 = (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
				bool L_26 = V_5;
				if (!L_26)
				{
					goto IL_012a_2;
				}
			}
			{
				goto IL_012f_2;
			}

IL_012a_2:
			{
				goto IL_01c1_2;
			}

IL_012f_2:
			{
				RuntimeObject* L_27 = __this->___U3CeU3E5__2;
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
					goto IL_0194_2;
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
				AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_33 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__35_1_tDA26EBC4AC4C6FCEC8955255F2D13374C1B67B9F**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_33, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_047c;
			}

IL_0177_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_34 = __this->___U3CU3Eu__2;
				V_7 = L_34;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_35 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_35, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_36 = (-1);
				V_0 = L_36;
				__this->___U3CU3E1__state = L_36;
			}

IL_0194_2:
			{
				bool L_37;
				L_37 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7 = L_37;
				bool L_38 = __this->___U3CU3Es__7;
				V_6 = L_38;
				bool L_39 = V_6;
				if (L_39)
				{
					goto IL_007c_2;
				}
			}
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_40 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CU3Es__5);
				il2cpp_codegen_initobj(L_40, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
				goto IL_034d_2;
			}

IL_01c1_2:
			{
				goto IL_02c9_2;
			}

IL_01c7_2:
			{
				Func_3_t5604379C942DED2B342DEED029BC1AB35C5A06A1* L_41 = __this->___selector;
				RuntimeObject* L_42 = __this->___U3CeU3E5__2;
				NullCheck(L_42);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_42, (Il2CppFullySharedGenericAny*)L_43);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_44 = __this->___cancellationToken;
				NullCheck(L_41);
				UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46 L_45;
				L_45 = InvokerFuncInvoker2< UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_41, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_43: *(void**)L_43), L_44);
				V_3 = L_45;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_46;
				L_46 = UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_inline((&V_3), UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_RuntimeMethod_var);
				V_9 = L_46;
				bool L_47;
				L_47 = Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_inline((&V_9), Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_RuntimeMethod_var);
				if (L_47)
				{
					goto IL_023d_2;
				}
			}
			{
				int32_t L_48 = 2;
				V_0 = L_48;
				__this->___U3CU3E1__state = L_48;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_49 = V_9;
				__this->___U3CU3Eu__1 = L_49;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_50 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91*, U3CMinAwaitWithCancellationAsyncU3Ed__35_1_tDA26EBC4AC4C6FCEC8955255F2D13374C1B67B9F**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_50, (&V_9), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_047c;
			}

IL_0220_2:
			{
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_51 = __this->___U3CU3Eu__1;
				V_9 = L_51;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* L_52 = (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_52, sizeof(Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91));
				int32_t L_53 = (-1);
				V_0 = L_53;
				__this->___U3CU3E1__state = L_53;
			}

IL_023d_2:
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_54;
				L_54 = Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_inline((&V_9), Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_RuntimeMethod_var);
				__this->___U3CU3Es__9 = L_54;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_55 = __this->___U3CU3Es__9;
				__this->___U3CxU3E5__8 = L_55;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_56 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CU3Es__9);
				il2cpp_codegen_initobj(L_56, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_57 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CxU3E5__8);
				bool L_58;
				L_58 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline(L_57, Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
				V_10 = (bool)((((int32_t)L_58) == ((int32_t)0))? 1 : 0);
				bool L_59 = V_10;
				if (!L_59)
				{
					goto IL_0278_2;
				}
			}
			{
				goto IL_02c9_2;
			}

IL_0278_2:
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_60 = __this->___U3CvalueU3E5__1;
				V_12 = L_60;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_61 = __this->___U3CxU3E5__8;
				V_13 = L_61;
				float L_62;
				L_62 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline((&V_12), Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
				float L_63;
				L_63 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline((&V_13), Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
				bool L_64;
				L_64 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&V_12), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
				bool L_65;
				L_65 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&V_13), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
				V_11 = (bool)((int32_t)(((((float)L_62) > ((float)L_63))? 1 : 0)&((int32_t)((int32_t)L_64&(int32_t)L_65))));
				bool L_66 = V_11;
				if (!L_66)
				{
					goto IL_02bc_2;
				}
			}
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_67 = __this->___U3CxU3E5__8;
				__this->___U3CvalueU3E5__1 = L_67;
			}

IL_02bc_2:
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_68 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CxU3E5__8);
				il2cpp_codegen_initobj(L_68, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
			}

IL_02c9_2:
			{
				RuntimeObject* L_69 = __this->___U3CeU3E5__2;
				NullCheck(L_69);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_70;
				L_70 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_69);
				V_8 = L_70;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_71;
				L_71 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_15 = L_71;
				bool L_72;
				L_72 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_15), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_72)
				{
					goto IL_032e_2;
				}
			}
			{
				int32_t L_73 = 3;
				V_0 = L_73;
				__this->___U3CU3E1__state = L_73;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_74 = V_15;
				__this->___U3CU3Eu__2 = L_74;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_75 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__35_1_tDA26EBC4AC4C6FCEC8955255F2D13374C1B67B9F**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_75, (&V_15), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_047c;
			}

IL_0311_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_76 = __this->___U3CU3Eu__2;
				V_15 = L_76;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_77 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_77, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_78 = (-1);
				V_0 = L_78;
				__this->___U3CU3E1__state = L_78;
			}

IL_032e_2:
			{
				bool L_79;
				L_79 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_15), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__10 = L_79;
				bool L_80 = __this->___U3CU3Es__10;
				V_14 = L_80;
				bool L_81 = V_14;
				if (L_81)
				{
					goto IL_01c7_2;
				}
			}
			{
				goto IL_0362_1;
			}

IL_034d_2:
			{
				__this->___U3CU3Es__4 = 1;
				goto IL_0362_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0356_1;
			}
			throw e;
		}

CATCH_0356_1:
		{
			RuntimeObject* L_82 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_16 = L_82;
			RuntimeObject* L_83 = V_16;
			__this->___U3CU3Es__3 = L_83;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_83);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0362_1;
		}

IL_0362_1:
		{
			RuntimeObject* L_84 = __this->___U3CeU3E5__2;
			V_17 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_84) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_85 = V_17;
			if (!L_85)
			{
				goto IL_03e1_1;
			}
		}
		{
			RuntimeObject* L_86 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_86);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_87;
			L_87 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_86);
			V_19 = L_87;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_88;
			L_88 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_19), NULL);
			V_18 = L_88;
			bool L_89;
			L_89 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_18), NULL);
			if (L_89)
			{
				goto IL_03d8_1;
			}
		}
		{
			int32_t L_90 = 4;
			V_0 = L_90;
			__this->___U3CU3E1__state = L_90;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_91 = V_18;
			__this->___U3CU3Eu__3 = L_91;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_92 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitWithCancellationAsyncU3Ed__35_1_tDA26EBC4AC4C6FCEC8955255F2D13374C1B67B9F**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_92, (&V_18), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_047c;
		}

IL_03bb_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_93 = __this->___U3CU3Eu__3;
			V_18 = L_93;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_94 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3);
			il2cpp_codegen_initobj(L_94, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_95 = (-1);
			V_0 = L_95;
			__this->___U3CU3E1__state = L_95;
		}

IL_03d8_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_18), NULL);
		}

IL_03e1_1:
		{
			RuntimeObject* L_96 = __this->___U3CU3Es__3;
			V_16 = L_96;
			RuntimeObject* L_97 = V_16;
			if (!L_97)
			{
				goto IL_040b_1;
			}
		}
		{
			RuntimeObject* L_98 = V_16;
			V_20 = ((Exception_t*)IsInstClass((RuntimeObject*)L_98, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_99 = V_20;
			if (L_99)
			{
				goto IL_03fe_1;
			}
		}
		{
			RuntimeObject* L_100 = V_16;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_100, method);
		}

IL_03fe_1:
		{
			Exception_t* L_101 = V_20;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_102;
			L_102 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_101, NULL);
			NullCheck(L_102);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_102, NULL);
		}

IL_040b_1:
		{
			int32_t L_103 = __this->___U3CU3Es__4;
			V_21 = L_103;
			int32_t L_104 = V_21;
			if ((((int32_t)L_104) == ((int32_t)1)))
			{
				goto IL_041a_1;
			}
		}
		{
			goto IL_0423_1;
		}

IL_041a_1:
		{
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_105 = __this->___U3CU3Es__5;
			V_1 = L_105;
			goto IL_0460;
		}

IL_0423_1:
		{
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_106 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CU3Es__5);
			il2cpp_codegen_initobj(L_106, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_107 = __this->___U3CvalueU3E5__1;
			V_1 = L_107;
			goto IL_0460;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_043f;
		}
		throw e;
	}

CATCH_043f:
	{
		Exception_t* L_108 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_20 = L_108;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_109 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder);
		Exception_t* L_110 = V_20;
		AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_inline(L_109, L_110, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_047c;
	}

IL_0460:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_111 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_112 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_inline(L_111, L_112, AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_RuntimeMethod_var);
	}

IL_047c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__35_1_SetStateMachine_mDB757158B0D10C9CC9E09F482A55B377A1879F3A_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__35_1_tDA26EBC4AC4C6FCEC8955255F2D13374C1B67B9F* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__39_1__ctor_m1982E7260318500BC3CD8D3214B4A679EA0CC3BB_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__39_1_tCC06919BA4B305801CB9B222385A3E035B22D81C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__39_1_MoveNext_mD19F86B9A04953D70B7D5D501BF66011EB16BF00_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__39_1_tCC06919BA4B305801CB9B222385A3E035B22D81C* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tF0EE76F69176BD0EF1614AC3595BD917CD4D4D6F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_tF0EE76F69176BD0EF1614AC3595BD917CD4D4D6F);
	const Il2CppFullySharedGenericAny L_43 = L_10;
	int32_t V_0 = 0;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CMinAwaitWithCancellationAsyncU3Ed__39_1_tCC06919BA4B305801CB9B222385A3E035B22D81C* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_15;
	memset((&V_15), 0, sizeof(V_15));
	RuntimeObject* V_16 = NULL;
	bool V_17 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_18;
	memset((&V_18), 0, sizeof(V_18));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_19;
	memset((&V_19), 0, sizeof(V_19));
	Exception_t* V_20 = NULL;
	int32_t V_21 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_004c_1;
		}

IL_0015_1:
		{
			goto IL_03bb_1;
		}

IL_001a_1:
		{
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_3 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CvalueU3E5__1);
			il2cpp_codegen_initobj(L_3, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
			RuntimeObject* L_4 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = __this->___cancellationToken;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__2 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)L_6);
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			__this->___U3CU3Es__4 = 0;
		}

IL_004c_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				switch (L_7)
				{
					case 0:
					{
						goto IL_0065_2;
					}
					case 1:
					{
						goto IL_0067_2;
					}
					case 2:
					{
						goto IL_006c_2;
					}
					case 3:
					{
						goto IL_0071_2;
					}
				}
			}
			{
				goto IL_0076_2;
			}

IL_0065_2:
			{
				goto IL_00d3_2;
			}

IL_0067_2:
			{
				goto IL_0177_2;
			}

IL_006c_2:
			{
				goto IL_0220_2;
			}

IL_0071_2:
			{
				goto IL_0311_2;
			}

IL_0076_2:
			{
				goto IL_012f_2;
			}

IL_007c_2:
			{
				Func_3_tD24255148664E4908FBCB566B787F36A4988A2BB* L_8 = __this->___selector;
				RuntimeObject* L_9 = __this->___U3CeU3E5__2;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_11 = __this->___cancellationToken;
				NullCheck(L_8);
				UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E L_12;
				L_12 = InvokerFuncInvoker2< UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10), L_11);
				V_3 = L_12;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_13;
				L_13 = UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_inline((&V_3), UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_inline((&V_2), Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00ef_2;
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
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0*, U3CMinAwaitWithCancellationAsyncU3Ed__39_1_tCC06919BA4B305801CB9B222385A3E035B22D81C**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_047c;
			}

IL_00d3_2:
			{
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_18 = __this->___U3CU3Eu__1;
				V_2 = L_18;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* L_19 = (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state = L_20;
			}

IL_00ef_2:
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_21;
				L_21 = Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_inline((&V_2), Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_21;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_22 = __this->___U3CU3Es__6;
				__this->___U3CvalueU3E5__1 = L_22;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_23 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CU3Es__6);
				il2cpp_codegen_initobj(L_23, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_24 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CvalueU3E5__1);
				bool L_25;
				L_25 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline(L_24, Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
				V_5 = (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
				bool L_26 = V_5;
				if (!L_26)
				{
					goto IL_012a_2;
				}
			}
			{
				goto IL_012f_2;
			}

IL_012a_2:
			{
				goto IL_01c1_2;
			}

IL_012f_2:
			{
				RuntimeObject* L_27 = __this->___U3CeU3E5__2;
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
					goto IL_0194_2;
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
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_33 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__39_1_tCC06919BA4B305801CB9B222385A3E035B22D81C**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_33, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_047c;
			}

IL_0177_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_34 = __this->___U3CU3Eu__2;
				V_7 = L_34;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_35 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_35, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_36 = (-1);
				V_0 = L_36;
				__this->___U3CU3E1__state = L_36;
			}

IL_0194_2:
			{
				bool L_37;
				L_37 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7 = L_37;
				bool L_38 = __this->___U3CU3Es__7;
				V_6 = L_38;
				bool L_39 = V_6;
				if (L_39)
				{
					goto IL_007c_2;
				}
			}
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_40 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CU3Es__5);
				il2cpp_codegen_initobj(L_40, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
				goto IL_034d_2;
			}

IL_01c1_2:
			{
				goto IL_02c9_2;
			}

IL_01c7_2:
			{
				Func_3_tD24255148664E4908FBCB566B787F36A4988A2BB* L_41 = __this->___selector;
				RuntimeObject* L_42 = __this->___U3CeU3E5__2;
				NullCheck(L_42);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_42, (Il2CppFullySharedGenericAny*)L_43);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_44 = __this->___cancellationToken;
				NullCheck(L_41);
				UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E L_45;
				L_45 = InvokerFuncInvoker2< UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_41, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_43: *(void**)L_43), L_44);
				V_3 = L_45;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_46;
				L_46 = UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_inline((&V_3), UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_RuntimeMethod_var);
				V_9 = L_46;
				bool L_47;
				L_47 = Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_inline((&V_9), Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_RuntimeMethod_var);
				if (L_47)
				{
					goto IL_023d_2;
				}
			}
			{
				int32_t L_48 = 2;
				V_0 = L_48;
				__this->___U3CU3E1__state = L_48;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_49 = V_9;
				__this->___U3CU3Eu__1 = L_49;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_50 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0*, U3CMinAwaitWithCancellationAsyncU3Ed__39_1_tCC06919BA4B305801CB9B222385A3E035B22D81C**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_50, (&V_9), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_047c;
			}

IL_0220_2:
			{
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_51 = __this->___U3CU3Eu__1;
				V_9 = L_51;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* L_52 = (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_52, sizeof(Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0));
				int32_t L_53 = (-1);
				V_0 = L_53;
				__this->___U3CU3E1__state = L_53;
			}

IL_023d_2:
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_54;
				L_54 = Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_inline((&V_9), Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_RuntimeMethod_var);
				__this->___U3CU3Es__9 = L_54;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_55 = __this->___U3CU3Es__9;
				__this->___U3CxU3E5__8 = L_55;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_56 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CU3Es__9);
				il2cpp_codegen_initobj(L_56, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_57 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CxU3E5__8);
				bool L_58;
				L_58 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline(L_57, Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
				V_10 = (bool)((((int32_t)L_58) == ((int32_t)0))? 1 : 0);
				bool L_59 = V_10;
				if (!L_59)
				{
					goto IL_0278_2;
				}
			}
			{
				goto IL_02c9_2;
			}

IL_0278_2:
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_60 = __this->___U3CvalueU3E5__1;
				V_12 = L_60;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_61 = __this->___U3CxU3E5__8;
				V_13 = L_61;
				double L_62;
				L_62 = Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_inline((&V_12), Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var);
				double L_63;
				L_63 = Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_inline((&V_13), Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var);
				bool L_64;
				L_64 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&V_12), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
				bool L_65;
				L_65 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&V_13), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
				V_11 = (bool)((int32_t)(((((double)L_62) > ((double)L_63))? 1 : 0)&((int32_t)((int32_t)L_64&(int32_t)L_65))));
				bool L_66 = V_11;
				if (!L_66)
				{
					goto IL_02bc_2;
				}
			}
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_67 = __this->___U3CxU3E5__8;
				__this->___U3CvalueU3E5__1 = L_67;
			}

IL_02bc_2:
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_68 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CxU3E5__8);
				il2cpp_codegen_initobj(L_68, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
			}

IL_02c9_2:
			{
				RuntimeObject* L_69 = __this->___U3CeU3E5__2;
				NullCheck(L_69);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_70;
				L_70 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_69);
				V_8 = L_70;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_71;
				L_71 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_15 = L_71;
				bool L_72;
				L_72 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_15), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_72)
				{
					goto IL_032e_2;
				}
			}
			{
				int32_t L_73 = 3;
				V_0 = L_73;
				__this->___U3CU3E1__state = L_73;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_74 = V_15;
				__this->___U3CU3Eu__2 = L_74;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_75 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__39_1_tCC06919BA4B305801CB9B222385A3E035B22D81C**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_75, (&V_15), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_047c;
			}

IL_0311_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_76 = __this->___U3CU3Eu__2;
				V_15 = L_76;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_77 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_77, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_78 = (-1);
				V_0 = L_78;
				__this->___U3CU3E1__state = L_78;
			}

IL_032e_2:
			{
				bool L_79;
				L_79 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_15), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__10 = L_79;
				bool L_80 = __this->___U3CU3Es__10;
				V_14 = L_80;
				bool L_81 = V_14;
				if (L_81)
				{
					goto IL_01c7_2;
				}
			}
			{
				goto IL_0362_1;
			}

IL_034d_2:
			{
				__this->___U3CU3Es__4 = 1;
				goto IL_0362_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0356_1;
			}
			throw e;
		}

CATCH_0356_1:
		{
			RuntimeObject* L_82 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_16 = L_82;
			RuntimeObject* L_83 = V_16;
			__this->___U3CU3Es__3 = L_83;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_83);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0362_1;
		}

IL_0362_1:
		{
			RuntimeObject* L_84 = __this->___U3CeU3E5__2;
			V_17 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_84) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_85 = V_17;
			if (!L_85)
			{
				goto IL_03e1_1;
			}
		}
		{
			RuntimeObject* L_86 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_86);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_87;
			L_87 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_86);
			V_19 = L_87;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_88;
			L_88 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_19), NULL);
			V_18 = L_88;
			bool L_89;
			L_89 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_18), NULL);
			if (L_89)
			{
				goto IL_03d8_1;
			}
		}
		{
			int32_t L_90 = 4;
			V_0 = L_90;
			__this->___U3CU3E1__state = L_90;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_91 = V_18;
			__this->___U3CU3Eu__3 = L_91;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_92 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitWithCancellationAsyncU3Ed__39_1_tCC06919BA4B305801CB9B222385A3E035B22D81C**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_92, (&V_18), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_047c;
		}

IL_03bb_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_93 = __this->___U3CU3Eu__3;
			V_18 = L_93;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_94 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3);
			il2cpp_codegen_initobj(L_94, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_95 = (-1);
			V_0 = L_95;
			__this->___U3CU3E1__state = L_95;
		}

IL_03d8_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_18), NULL);
		}

IL_03e1_1:
		{
			RuntimeObject* L_96 = __this->___U3CU3Es__3;
			V_16 = L_96;
			RuntimeObject* L_97 = V_16;
			if (!L_97)
			{
				goto IL_040b_1;
			}
		}
		{
			RuntimeObject* L_98 = V_16;
			V_20 = ((Exception_t*)IsInstClass((RuntimeObject*)L_98, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_99 = V_20;
			if (L_99)
			{
				goto IL_03fe_1;
			}
		}
		{
			RuntimeObject* L_100 = V_16;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_100, method);
		}

IL_03fe_1:
		{
			Exception_t* L_101 = V_20;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_102;
			L_102 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_101, NULL);
			NullCheck(L_102);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_102, NULL);
		}

IL_040b_1:
		{
			int32_t L_103 = __this->___U3CU3Es__4;
			V_21 = L_103;
			int32_t L_104 = V_21;
			if ((((int32_t)L_104) == ((int32_t)1)))
			{
				goto IL_041a_1;
			}
		}
		{
			goto IL_0423_1;
		}

IL_041a_1:
		{
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_105 = __this->___U3CU3Es__5;
			V_1 = L_105;
			goto IL_0460;
		}

IL_0423_1:
		{
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_106 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CU3Es__5);
			il2cpp_codegen_initobj(L_106, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_107 = __this->___U3CvalueU3E5__1;
			V_1 = L_107;
			goto IL_0460;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_043f;
		}
		throw e;
	}

CATCH_043f:
	{
		Exception_t* L_108 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_20 = L_108;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_109 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
		Exception_t* L_110 = V_20;
		AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_inline(L_109, L_110, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_047c;
	}

IL_0460:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_111 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_112 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_inline(L_111, L_112, AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
	}

IL_047c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__39_1_SetStateMachine_mACBC1321E2F157A1EF2C1B4470C0875CCF3F2E6B_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__39_1_tCC06919BA4B305801CB9B222385A3E035B22D81C* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__3_2__ctor_mC147F24AF2D81E83F322218C47C84F6A01944163_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__3_2_t5C25FEB674967FD9889E050F607D9DBBC7246C37* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__3_2_MoveNext_m75A619333F8C13EE8FA464C8B93CBF3668142D50_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__3_2_t5C25FEB674967FD9889E050F607D9DBBC7246C37* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const uint32_t SizeOf_Awaiter_t75F23FB82976A80FB0120A07A522EFD858868D90 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const uint32_t SizeOf_UniTask_1_tDEB736AD713D0478C6934989DAB2BEE934E1C784 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const uint32_t SizeOf_TSource_t0B368FBFA2E02C9B28A3A57F83AAC6BBBCB106D2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t0B368FBFA2E02C9B28A3A57F83AAC6BBBCB106D2);
	const Il2CppFullySharedGenericAny L_35 = L_10;
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
	const Il2CppFullySharedGenericAny L_32 = L_19;
	const Il2CppFullySharedGenericAny L_44 = L_19;
	const Il2CppFullySharedGenericAny L_51 = L_19;
	const Il2CppFullySharedGenericAny L_84 = L_19;
	const Il2CppFullySharedGenericAny L_85 = L_19;
	const Il2CppFullySharedGenericAny L_88 = L_19;
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
	const Il2CppFullySharedGenericAny L_45 = L_20;
	const Il2CppFullySharedGenericAny L_47 = alloca(SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
	const Il2CppFullySharedGenericAny L_48 = alloca(SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_13 = alloca(SizeOf_Awaiter_t75F23FB82976A80FB0120A07A522EFD858868D90);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_16 = L_13;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_17 = L_13;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_38 = L_13;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_41 = L_13;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_42 = L_13;
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_12 = alloca(SizeOf_UniTask_1_tDEB736AD713D0478C6934989DAB2BEE934E1C784);
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_37 = L_12;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
	memset(V_1, 0, SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_2 = alloca(SizeOf_Awaiter_t75F23FB82976A80FB0120A07A522EFD858868D90);
	memset(V_2, 0, SizeOf_Awaiter_t75F23FB82976A80FB0120A07A522EFD858868D90);
	UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 V_3 = alloca(SizeOf_UniTask_1_tDEB736AD713D0478C6934989DAB2BEE934E1C784);
	memset(V_3, 0, SizeOf_UniTask_1_tDEB736AD713D0478C6934989DAB2BEE934E1C784);
	U3CMinAwaitWithCancellationAsyncU3Ed__3_2_t5C25FEB674967FD9889E050F607D9DBBC7246C37* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_8 = alloca(SizeOf_Awaiter_t75F23FB82976A80FB0120A07A522EFD858868D90);
	memset(V_8, 0, SizeOf_Awaiter_t75F23FB82976A80FB0120A07A522EFD858868D90);
	bool V_9 = false;
	bool V_10 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_11;
	memset((&V_11), 0, sizeof(V_11));
	RuntimeObject* V_12 = NULL;
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Exception_t* V_16 = NULL;
	int32_t V_17 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
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
			goto IL_0384_1;
		}

IL_001a_1:
		{
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
			Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_3;
			L_3 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
			il2cpp_codegen_write_instance_field_data<Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_3);
			RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_4, L_5);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_6);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), NULL);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), 0);
		}

IL_0057_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				switch (L_7)
				{
					case 0:
					{
						goto IL_0070_2;
					}
					case 1:
					{
						goto IL_0072_2;
					}
					case 2:
					{
						goto IL_0077_2;
					}
					case 3:
					{
						goto IL_007c_2;
					}
				}
			}
			{
				goto IL_0081_2;
			}

IL_0070_2:
			{
				goto IL_00de_2;
			}

IL_0072_2:
			{
				goto IL_016c_2;
			}

IL_0077_2:
			{
				goto IL_0215_2;
			}

IL_007c_2:
			{
				goto IL_02da_2;
			}

IL_0081_2:
			{
				goto IL_0124_2;
			}

IL_0087_2:
			{
				Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E* L_8 = *(Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				RuntimeObject* L_9 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_9, (Il2CppFullySharedGenericAny*)L_10);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_11 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
				NullCheck(L_8);
				InvokerActionInvoker3< Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10)) ? L_10: *(void**)L_10), L_11, (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_12);
				il2cpp_codegen_memcpy(V_3, L_12, SizeOf_UniTask_1_tDEB736AD713D0478C6934989DAB2BEE934E1C784);
				InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)V_3, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_13);
				il2cpp_codegen_memcpy(V_2, L_13, SizeOf_Awaiter_t75F23FB82976A80FB0120A07A522EFD858868D90);
				bool L_14;
				L_14 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
				if (L_14)
				{
					goto IL_00fa_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_15);
				il2cpp_codegen_memcpy(L_16, V_2, SizeOf_Awaiter_t75F23FB82976A80FB0120A07A522EFD858868D90);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16), L_16, SizeOf_Awaiter_t75F23FB82976A80FB0120A07A522EFD858868D90);
				V_4 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CMinAwaitWithCancellationAsyncU3Ed__3_2_t5C25FEB674967FD9889E050F607D9DBBC7246C37**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
				goto IL_046b;
			}

IL_00de_2:
			{
				il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16)), SizeOf_Awaiter_t75F23FB82976A80FB0120A07A522EFD858868D90);
				il2cpp_codegen_memcpy(V_2, L_17, SizeOf_Awaiter_t75F23FB82976A80FB0120A07A522EFD858868D90);
				il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16)))), SizeOf_Awaiter_t75F23FB82976A80FB0120A07A522EFD858868D90);
				int32_t L_18 = (-1);
				V_0 = L_18;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_18);
			}

IL_00fa_2:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)), il2cpp_rgctx_method(method->klass->rgctx_data, 23), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, (Il2CppFullySharedGenericAny*)L_19);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_19, SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
				il2cpp_codegen_memcpy(L_20, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)), SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_20, SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)))), SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
				goto IL_01b6_2;
			}

IL_0124_2:
			{
				RuntimeObject* L_21 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck(L_21);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_22;
				L_22 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_21);
				V_7 = L_22;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_23;
				L_23 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_6 = L_23;
				bool L_24;
				L_24 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_6), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_24)
				{
					goto IL_0189_2;
				}
			}
			{
				int32_t L_25 = 1;
				V_0 = L_25;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_25);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_26 = V_6;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),17), L_26);
				V_4 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__3_2_t5C25FEB674967FD9889E050F607D9DBBC7246C37**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 25));
				goto IL_046b;
			}

IL_016c_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_27 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),17));
				V_6 = L_27;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),17)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_28 = (-1);
				V_0 = L_28;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_28);
			}

IL_0189_2:
			{
				bool L_29;
				L_29 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_29);
				bool L_30 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12));
				V_5 = L_30;
				bool L_31 = V_5;
				if (L_31)
				{
					goto IL_0087_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_32, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)), SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_32, SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
				goto IL_0316_2;
			}

IL_01b6_2:
			{
				goto IL_0292_2;
			}

IL_01bc_2:
			{
				Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E* L_33 = *(Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				RuntimeObject* L_34 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck(L_34);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_34, (Il2CppFullySharedGenericAny*)L_35);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_36 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
				NullCheck(L_33);
				InvokerActionInvoker3< Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_33, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10)) ? L_35: *(void**)L_35), L_36, (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_37);
				il2cpp_codegen_memcpy(V_3, L_37, SizeOf_UniTask_1_tDEB736AD713D0478C6934989DAB2BEE934E1C784);
				InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)V_3, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_38);
				il2cpp_codegen_memcpy(V_8, L_38, SizeOf_Awaiter_t75F23FB82976A80FB0120A07A522EFD858868D90);
				bool L_39;
				L_39 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_8, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
				if (L_39)
				{
					goto IL_0232_2;
				}
			}
			{
				int32_t L_40 = 2;
				V_0 = L_40;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_40);
				il2cpp_codegen_memcpy(L_41, V_8, SizeOf_Awaiter_t75F23FB82976A80FB0120A07A522EFD858868D90);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16), L_41, SizeOf_Awaiter_t75F23FB82976A80FB0120A07A522EFD858868D90);
				V_4 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CMinAwaitWithCancellationAsyncU3Ed__3_2_t5C25FEB674967FD9889E050F607D9DBBC7246C37**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_8, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
				goto IL_046b;
			}

IL_0215_2:
			{
				il2cpp_codegen_memcpy(L_42, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16)), SizeOf_Awaiter_t75F23FB82976A80FB0120A07A522EFD858868D90);
				il2cpp_codegen_memcpy(V_8, L_42, SizeOf_Awaiter_t75F23FB82976A80FB0120A07A522EFD858868D90);
				il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16)))), SizeOf_Awaiter_t75F23FB82976A80FB0120A07A522EFD858868D90);
				int32_t L_43 = (-1);
				V_0 = L_43;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_43);
			}

IL_0232_2:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)), il2cpp_rgctx_method(method->klass->rgctx_data, 23), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_8, (Il2CppFullySharedGenericAny*)L_44);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14), L_44, SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
				il2cpp_codegen_memcpy(L_45, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14)), SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_45, SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14)))), SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
				Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_46 = *(Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				il2cpp_codegen_memcpy(L_47, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)), SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
				il2cpp_codegen_memcpy(L_48, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)), SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
				NullCheck(L_46);
				int32_t L_49;
				L_49 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_46, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_47: *(void**)L_47), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_48: *(void**)L_48));
				V_9 = (bool)((((int32_t)L_49) > ((int32_t)0))? 1 : 0);
				bool L_50 = V_9;
				if (!L_50)
				{
					goto IL_0285_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_51, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)), SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_51, SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
			}

IL_0285_2:
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)))), SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
			}

IL_0292_2:
			{
				RuntimeObject* L_52 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck(L_52);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_53;
				L_53 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_52);
				V_7 = L_53;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_54;
				L_54 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_11 = L_54;
				bool L_55;
				L_55 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_11), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_55)
				{
					goto IL_02f7_2;
				}
			}
			{
				int32_t L_56 = 3;
				V_0 = L_56;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_56);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_57 = V_11;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),17), L_57);
				V_4 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__3_2_t5C25FEB674967FD9889E050F607D9DBBC7246C37**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 25));
				goto IL_046b;
			}

IL_02da_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_58 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),17));
				V_11 = L_58;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),17)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_59 = (-1);
				V_0 = L_59;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_59);
			}

IL_02f7_2:
			{
				bool L_60;
				L_60 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_11), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15), L_60);
				bool L_61 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15));
				V_10 = L_61;
				bool L_62 = V_10;
				if (L_62)
				{
					goto IL_01bc_2;
				}
			}
			{
				goto IL_032b_1;
			}

IL_0316_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), 1);
				goto IL_032b_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_031f_1;
			}
			throw e;
		}

CATCH_031f_1:
		{
			RuntimeObject* L_63 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_12 = L_63;
			RuntimeObject* L_64 = V_12;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_64);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_032b_1;
		}

IL_032b_1:
		{
			RuntimeObject* L_65 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_66 = V_13;
			if (!L_66)
			{
				goto IL_03aa_1;
			}
		}
		{
			RuntimeObject* L_67 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			NullCheck((RuntimeObject*)L_67);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_68;
			L_68 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_67);
			V_15 = L_68;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_69;
			L_69 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_15), NULL);
			V_14 = L_69;
			bool L_70;
			L_70 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_70)
			{
				goto IL_03a1_1;
			}
		}
		{
			int32_t L_71 = 4;
			V_0 = L_71;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_71);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_72 = V_14;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),18), L_72);
			V_4 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitWithCancellationAsyncU3Ed__3_2_t5C25FEB674967FD9889E050F607D9DBBC7246C37**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 27));
			goto IL_046b;
		}

IL_0384_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_73 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),18));
			V_14 = L_73;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),18)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_74 = (-1);
			V_0 = L_74;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_74);
		}

IL_03a1_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_03aa_1:
		{
			RuntimeObject* L_75 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			V_12 = L_75;
			RuntimeObject* L_76 = V_12;
			if (!L_76)
			{
				goto IL_03d4_1;
			}
		}
		{
			RuntimeObject* L_77 = V_12;
			V_16 = ((Exception_t*)IsInstClass((RuntimeObject*)L_77, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_78 = V_16;
			if (L_78)
			{
				goto IL_03c7_1;
			}
		}
		{
			RuntimeObject* L_79 = V_12;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_79, method);
		}

IL_03c7_1:
		{
			Exception_t* L_80 = V_16;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_81;
			L_81 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_80, NULL);
			NullCheck(L_81);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_81, NULL);
		}

IL_03d4_1:
		{
			int32_t L_82 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
			V_17 = L_82;
			int32_t L_83 = V_17;
			if ((((int32_t)L_83) == ((int32_t)1)))
			{
				goto IL_03e3_1;
			}
		}
		{
			goto IL_03ec_1;
		}

IL_03e3_1:
		{
			il2cpp_codegen_memcpy(L_84, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
			il2cpp_codegen_memcpy(V_1, L_84, SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
			goto IL_043c;
		}

IL_03ec_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)))), SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
			il2cpp_codegen_memcpy(L_85, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)), SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
			il2cpp_codegen_memcpy(V_1, L_85, SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
			goto IL_043c;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0408;
		}
		throw e;
	}

CATCH_0408:
	{
		Exception_t* L_86 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_16 = L_86;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
		il2cpp_codegen_write_instance_field_data<Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB*)NULL);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), (RuntimeObject*)NULL);
		Exception_t* L_87 = V_16;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_87, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_046b;
	}

IL_043c:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
		il2cpp_codegen_write_instance_field_data<Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB*)NULL);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_88, V_1, SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)), il2cpp_rgctx_method(method->klass->rgctx_data, 29), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_88: *(void**)L_88));
	}

IL_046b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__3_2_SetStateMachine_mC2D00F2FFC1FEB720931834EA6A5A0C7FD8452DC_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__3_2_t5C25FEB674967FD9889E050F607D9DBBC7246C37* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__43_1__ctor_m7FFEBB991CDBC37379FBC53CE8D0840104A83108_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__43_1_t388FF276C28AACAF91B54EE3DFF3016D0690C0CF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__43_1_MoveNext_mD298F257851881A25C4FCB8716702B243926AB26_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__43_1_t388FF276C28AACAF91B54EE3DFF3016D0690C0CF* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t29A422289A1A206529648DAA7A48462081B46B77 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t29A422289A1A206529648DAA7A48462081B46B77);
	const Il2CppFullySharedGenericAny L_43 = L_10;
	int32_t V_0 = 0;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CMinAwaitWithCancellationAsyncU3Ed__43_1_t388FF276C28AACAF91B54EE3DFF3016D0690C0CF* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_12;
	memset((&V_12), 0, sizeof(V_12));
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_15;
	memset((&V_15), 0, sizeof(V_15));
	RuntimeObject* V_16 = NULL;
	bool V_17 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_18;
	memset((&V_18), 0, sizeof(V_18));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_19;
	memset((&V_19), 0, sizeof(V_19));
	Exception_t* V_20 = NULL;
	int32_t V_21 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_004c_1;
		}

IL_0015_1:
		{
			goto IL_03be_1;
		}

IL_001a_1:
		{
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_3 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CvalueU3E5__1);
			il2cpp_codegen_initobj(L_3, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
			RuntimeObject* L_4 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = __this->___cancellationToken;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__2 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)L_6);
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			__this->___U3CU3Es__4 = 0;
		}

IL_004c_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				switch (L_7)
				{
					case 0:
					{
						goto IL_0065_2;
					}
					case 1:
					{
						goto IL_0067_2;
					}
					case 2:
					{
						goto IL_006c_2;
					}
					case 3:
					{
						goto IL_0071_2;
					}
				}
			}
			{
				goto IL_0076_2;
			}

IL_0065_2:
			{
				goto IL_00d3_2;
			}

IL_0067_2:
			{
				goto IL_0177_2;
			}

IL_006c_2:
			{
				goto IL_0220_2;
			}

IL_0071_2:
			{
				goto IL_0314_2;
			}

IL_0076_2:
			{
				goto IL_012f_2;
			}

IL_007c_2:
			{
				Func_3_t428A771ED20C241CDDC6BDF17284D499B16CBD70* L_8 = __this->___selector;
				RuntimeObject* L_9 = __this->___U3CeU3E5__2;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_11 = __this->___cancellationToken;
				NullCheck(L_8);
				UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F L_12;
				L_12 = InvokerFuncInvoker2< UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10), L_11);
				V_3 = L_12;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_13;
				L_13 = UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_inline((&V_3), UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_inline((&V_2), Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00ef_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->___U3CU3E1__state = L_15;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_16 = V_2;
				__this->___U3CU3Eu__1 = L_16;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_17 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51*, U3CMinAwaitWithCancellationAsyncU3Ed__43_1_t388FF276C28AACAF91B54EE3DFF3016D0690C0CF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_047f;
			}

IL_00d3_2:
			{
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_18 = __this->___U3CU3Eu__1;
				V_2 = L_18;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* L_19 = (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state = L_20;
			}

IL_00ef_2:
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_21;
				L_21 = Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_inline((&V_2), Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_21;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_22 = __this->___U3CU3Es__6;
				__this->___U3CvalueU3E5__1 = L_22;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_23 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CU3Es__6);
				il2cpp_codegen_initobj(L_23, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_24 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CvalueU3E5__1);
				bool L_25;
				L_25 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline(L_24, Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
				V_5 = (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
				bool L_26 = V_5;
				if (!L_26)
				{
					goto IL_012a_2;
				}
			}
			{
				goto IL_012f_2;
			}

IL_012a_2:
			{
				goto IL_01c1_2;
			}

IL_012f_2:
			{
				RuntimeObject* L_27 = __this->___U3CeU3E5__2;
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
					goto IL_0194_2;
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
				AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_33 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__43_1_t388FF276C28AACAF91B54EE3DFF3016D0690C0CF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_33, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_047f;
			}

IL_0177_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_34 = __this->___U3CU3Eu__2;
				V_7 = L_34;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_35 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_35, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_36 = (-1);
				V_0 = L_36;
				__this->___U3CU3E1__state = L_36;
			}

IL_0194_2:
			{
				bool L_37;
				L_37 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7 = L_37;
				bool L_38 = __this->___U3CU3Es__7;
				V_6 = L_38;
				bool L_39 = V_6;
				if (L_39)
				{
					goto IL_007c_2;
				}
			}
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_40 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CU3Es__5);
				il2cpp_codegen_initobj(L_40, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
				goto IL_0350_2;
			}

IL_01c1_2:
			{
				goto IL_02cc_2;
			}

IL_01c7_2:
			{
				Func_3_t428A771ED20C241CDDC6BDF17284D499B16CBD70* L_41 = __this->___selector;
				RuntimeObject* L_42 = __this->___U3CeU3E5__2;
				NullCheck(L_42);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_42, (Il2CppFullySharedGenericAny*)L_43);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_44 = __this->___cancellationToken;
				NullCheck(L_41);
				UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F L_45;
				L_45 = InvokerFuncInvoker2< UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_41, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_43: *(void**)L_43), L_44);
				V_3 = L_45;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_46;
				L_46 = UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_inline((&V_3), UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_RuntimeMethod_var);
				V_9 = L_46;
				bool L_47;
				L_47 = Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_inline((&V_9), Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_RuntimeMethod_var);
				if (L_47)
				{
					goto IL_023d_2;
				}
			}
			{
				int32_t L_48 = 2;
				V_0 = L_48;
				__this->___U3CU3E1__state = L_48;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_49 = V_9;
				__this->___U3CU3Eu__1 = L_49;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_50 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51*, U3CMinAwaitWithCancellationAsyncU3Ed__43_1_t388FF276C28AACAF91B54EE3DFF3016D0690C0CF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_50, (&V_9), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_047f;
			}

IL_0220_2:
			{
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_51 = __this->___U3CU3Eu__1;
				V_9 = L_51;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* L_52 = (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_52, sizeof(Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51));
				int32_t L_53 = (-1);
				V_0 = L_53;
				__this->___U3CU3E1__state = L_53;
			}

IL_023d_2:
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_54;
				L_54 = Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_inline((&V_9), Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_RuntimeMethod_var);
				__this->___U3CU3Es__9 = L_54;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_55 = __this->___U3CU3Es__9;
				__this->___U3CxU3E5__8 = L_55;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_56 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CU3Es__9);
				il2cpp_codegen_initobj(L_56, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_57 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CxU3E5__8);
				bool L_58;
				L_58 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline(L_57, Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
				V_10 = (bool)((((int32_t)L_58) == ((int32_t)0))? 1 : 0);
				bool L_59 = V_10;
				if (!L_59)
				{
					goto IL_0278_2;
				}
			}
			{
				goto IL_02cc_2;
			}

IL_0278_2:
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_60 = __this->___U3CvalueU3E5__1;
				V_12 = L_60;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_61 = __this->___U3CxU3E5__8;
				V_13 = L_61;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_62;
				L_62 = Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_inline((&V_12), Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_63;
				L_63 = Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_inline((&V_13), Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
				bool L_64;
				L_64 = Decimal_op_GreaterThan_m549F09BF0C53D8611E550CA9CCB53543D6DAF717(L_62, L_63, NULL);
				bool L_65;
				L_65 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline((&V_12), Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
				bool L_66;
				L_66 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline((&V_13), Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
				V_11 = (bool)((int32_t)((int32_t)L_64&((int32_t)((int32_t)L_65&(int32_t)L_66))));
				bool L_67 = V_11;
				if (!L_67)
				{
					goto IL_02bf_2;
				}
			}
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_68 = __this->___U3CxU3E5__8;
				__this->___U3CvalueU3E5__1 = L_68;
			}

IL_02bf_2:
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_69 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CxU3E5__8);
				il2cpp_codegen_initobj(L_69, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
			}

IL_02cc_2:
			{
				RuntimeObject* L_70 = __this->___U3CeU3E5__2;
				NullCheck(L_70);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_71;
				L_71 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_70);
				V_8 = L_71;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_72;
				L_72 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_15 = L_72;
				bool L_73;
				L_73 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_15), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_73)
				{
					goto IL_0331_2;
				}
			}
			{
				int32_t L_74 = 3;
				V_0 = L_74;
				__this->___U3CU3E1__state = L_74;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_75 = V_15;
				__this->___U3CU3Eu__2 = L_75;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_76 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__43_1_t388FF276C28AACAF91B54EE3DFF3016D0690C0CF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_76, (&V_15), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_047f;
			}

IL_0314_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_77 = __this->___U3CU3Eu__2;
				V_15 = L_77;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_78 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_78, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_79 = (-1);
				V_0 = L_79;
				__this->___U3CU3E1__state = L_79;
			}

IL_0331_2:
			{
				bool L_80;
				L_80 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_15), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__10 = L_80;
				bool L_81 = __this->___U3CU3Es__10;
				V_14 = L_81;
				bool L_82 = V_14;
				if (L_82)
				{
					goto IL_01c7_2;
				}
			}
			{
				goto IL_0365_1;
			}

IL_0350_2:
			{
				__this->___U3CU3Es__4 = 1;
				goto IL_0365_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0359_1;
			}
			throw e;
		}

CATCH_0359_1:
		{
			RuntimeObject* L_83 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_16 = L_83;
			RuntimeObject* L_84 = V_16;
			__this->___U3CU3Es__3 = L_84;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_84);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0365_1;
		}

IL_0365_1:
		{
			RuntimeObject* L_85 = __this->___U3CeU3E5__2;
			V_17 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_85) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_86 = V_17;
			if (!L_86)
			{
				goto IL_03e4_1;
			}
		}
		{
			RuntimeObject* L_87 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_87);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_88;
			L_88 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_87);
			V_19 = L_88;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_89;
			L_89 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_19), NULL);
			V_18 = L_89;
			bool L_90;
			L_90 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_18), NULL);
			if (L_90)
			{
				goto IL_03db_1;
			}
		}
		{
			int32_t L_91 = 4;
			V_0 = L_91;
			__this->___U3CU3E1__state = L_91;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_92 = V_18;
			__this->___U3CU3Eu__3 = L_92;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_93 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitWithCancellationAsyncU3Ed__43_1_t388FF276C28AACAF91B54EE3DFF3016D0690C0CF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_93, (&V_18), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_047f;
		}

IL_03be_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_94 = __this->___U3CU3Eu__3;
			V_18 = L_94;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_95 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3);
			il2cpp_codegen_initobj(L_95, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_96 = (-1);
			V_0 = L_96;
			__this->___U3CU3E1__state = L_96;
		}

IL_03db_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_18), NULL);
		}

IL_03e4_1:
		{
			RuntimeObject* L_97 = __this->___U3CU3Es__3;
			V_16 = L_97;
			RuntimeObject* L_98 = V_16;
			if (!L_98)
			{
				goto IL_040e_1;
			}
		}
		{
			RuntimeObject* L_99 = V_16;
			V_20 = ((Exception_t*)IsInstClass((RuntimeObject*)L_99, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_100 = V_20;
			if (L_100)
			{
				goto IL_0401_1;
			}
		}
		{
			RuntimeObject* L_101 = V_16;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_101, method);
		}

IL_0401_1:
		{
			Exception_t* L_102 = V_20;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_103;
			L_103 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_102, NULL);
			NullCheck(L_103);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_103, NULL);
		}

IL_040e_1:
		{
			int32_t L_104 = __this->___U3CU3Es__4;
			V_21 = L_104;
			int32_t L_105 = V_21;
			if ((((int32_t)L_105) == ((int32_t)1)))
			{
				goto IL_041d_1;
			}
		}
		{
			goto IL_0426_1;
		}

IL_041d_1:
		{
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_106 = __this->___U3CU3Es__5;
			V_1 = L_106;
			goto IL_0463;
		}

IL_0426_1:
		{
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_107 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CU3Es__5);
			il2cpp_codegen_initobj(L_107, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_108 = __this->___U3CvalueU3E5__1;
			V_1 = L_108;
			goto IL_0463;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0442;
		}
		throw e;
	}

CATCH_0442:
	{
		Exception_t* L_109 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_20 = L_109;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_110 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder);
		Exception_t* L_111 = V_20;
		AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_inline(L_110, L_111, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_047f;
	}

IL_0463:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_112 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder);
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_113 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_inline(L_112, L_113, AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_RuntimeMethod_var);
	}

IL_047f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__43_1_SetStateMachine_m8BF6AE5E859F6ADACBBA3965DEFDA42EDE9DEFF1_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__43_1_t388FF276C28AACAF91B54EE3DFF3016D0690C0CF* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__7_1__ctor_mFDC900DCED34D0F482FEADEC51D1FFA02FF0BAAB_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__7_1_tD013D28F83ADDE9E45AEE1903E28D2EFEF7602FC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__7_1_MoveNext_m00C3153FAC0324FD3AE8D36F8CAD5F43C360CE03_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__7_1_tD013D28F83ADDE9E45AEE1903E28D2EFEF7602FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_RuntimeMethod_var);
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
	const uint32_t SizeOf_TSource_t30177FCA5261AB4655280352C011F16B71F333BC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_t30177FCA5261AB4655280352C011F16B71F333BC);
	const Il2CppFullySharedGenericAny L_38 = L_9;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Awaiter_t8953594D03299DE782894F4A865CED79F2504266 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CMinAwaitWithCancellationAsyncU3Ed__7_1_tD013D28F83ADDE9E45AEE1903E28D2EFEF7602FC* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Awaiter_t8953594D03299DE782894F4A865CED79F2504266 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_11;
	memset((&V_11), 0, sizeof(V_11));
	RuntimeObject* V_12 = NULL;
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Exception_t* V_16 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0047_1;
		}

IL_0015_1:
		{
			goto IL_0330_1;
		}

IL_001a_1:
		{
			__this->___U3CvalueU3E5__1 = 0;
			RuntimeObject* L_3 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = __this->___cancellationToken;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__2 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)L_5);
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			__this->___U3CU3Es__4 = 0;
		}

IL_0047_1:
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
						goto IL_0060_2;
					}
					case 1:
					{
						goto IL_0062_2;
					}
					case 2:
					{
						goto IL_0067_2;
					}
					case 3:
					{
						goto IL_006c_2;
					}
				}
			}
			{
				goto IL_0071_2;
			}

IL_0060_2:
			{
				goto IL_00ce_2;
			}

IL_0062_2:
			{
				goto IL_0150_2;
			}

IL_0067_2:
			{
				goto IL_01ee_2;
			}

IL_006c_2:
			{
				goto IL_028f_2;
			}

IL_0071_2:
			{
				goto IL_0108_2;
			}

IL_0077_2:
			{
				Func_3_t4B0BED2CC5C1B3C74670633A89F91C13C1A0F1E4* L_7 = __this->___selector;
				RuntimeObject* L_8 = __this->___U3CeU3E5__2;
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_10 = __this->___cancellationToken;
				NullCheck(L_7);
				UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 L_11;
				L_11 = InvokerFuncInvoker2< UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_9: *(void**)L_9), L_10);
				V_3 = L_11;
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_12;
				L_12 = UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_inline((&V_3), UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_RuntimeMethod_var);
				V_2 = L_12;
				bool L_13;
				L_13 = Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_inline((&V_2), Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_00ea_2;
				}
			}
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->___U3CU3E1__state = L_14;
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_15 = V_2;
				__this->___U3CU3Eu__1 = L_15;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_16 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Awaiter_t8953594D03299DE782894F4A865CED79F2504266*, U3CMinAwaitWithCancellationAsyncU3Ed__7_1_tD013D28F83ADDE9E45AEE1903E28D2EFEF7602FC**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_16, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_03d4;
			}

IL_00ce_2:
			{
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_17 = __this->___U3CU3Eu__1;
				V_2 = L_17;
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266* L_18 = (Awaiter_t8953594D03299DE782894F4A865CED79F2504266*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_18, sizeof(Awaiter_t8953594D03299DE782894F4A865CED79F2504266));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state = L_19;
			}

IL_00ea_2:
			{
				int32_t L_20;
				L_20 = Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_inline((&V_2), Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_RuntimeMethod_var);
				__this->___U3CU3Es__5 = L_20;
				int32_t L_21 = __this->___U3CU3Es__5;
				__this->___U3CvalueU3E5__1 = L_21;
				goto IL_018f_2;
			}

IL_0108_2:
			{
				RuntimeObject* L_22 = __this->___U3CeU3E5__2;
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
					goto IL_016d_2;
				}
			}
			{
				int32_t L_26 = 1;
				V_0 = L_26;
				__this->___U3CU3E1__state = L_26;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_27 = V_6;
				__this->___U3CU3Eu__2 = L_27;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_28 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__7_1_tD013D28F83ADDE9E45AEE1903E28D2EFEF7602FC**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_28, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_03d4;
			}

IL_0150_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29 = __this->___U3CU3Eu__2;
				V_6 = L_29;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_30 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_30, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_31 = (-1);
				V_0 = L_31;
				__this->___U3CU3E1__state = L_31;
			}

IL_016d_2:
			{
				bool L_32;
				L_32 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_32;
				bool L_33 = __this->___U3CU3Es__6;
				V_5 = L_33;
				bool L_34 = V_5;
				if (L_34)
				{
					goto IL_0077_2;
				}
			}
			{
				Exception_t* L_35;
				L_35 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, method);
			}

IL_018f_2:
			{
				goto IL_0247_2;
			}

IL_0195_2:
			{
				Func_3_t4B0BED2CC5C1B3C74670633A89F91C13C1A0F1E4* L_36 = __this->___selector;
				RuntimeObject* L_37 = __this->___U3CeU3E5__2;
				NullCheck(L_37);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_37, (Il2CppFullySharedGenericAny*)L_38);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_39 = __this->___cancellationToken;
				NullCheck(L_36);
				UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 L_40;
				L_40 = InvokerFuncInvoker2< UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_38: *(void**)L_38), L_39);
				V_3 = L_40;
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_41;
				L_41 = UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_inline((&V_3), UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_RuntimeMethod_var);
				V_8 = L_41;
				bool L_42;
				L_42 = Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_inline((&V_8), Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_RuntimeMethod_var);
				if (L_42)
				{
					goto IL_020b_2;
				}
			}
			{
				int32_t L_43 = 2;
				V_0 = L_43;
				__this->___U3CU3E1__state = L_43;
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_44 = V_8;
				__this->___U3CU3Eu__1 = L_44;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_45 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Awaiter_t8953594D03299DE782894F4A865CED79F2504266*, U3CMinAwaitWithCancellationAsyncU3Ed__7_1_tD013D28F83ADDE9E45AEE1903E28D2EFEF7602FC**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_45, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_03d4;
			}

IL_01ee_2:
			{
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_46 = __this->___U3CU3Eu__1;
				V_8 = L_46;
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266* L_47 = (Awaiter_t8953594D03299DE782894F4A865CED79F2504266*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_47, sizeof(Awaiter_t8953594D03299DE782894F4A865CED79F2504266));
				int32_t L_48 = (-1);
				V_0 = L_48;
				__this->___U3CU3E1__state = L_48;
			}

IL_020b_2:
			{
				int32_t L_49;
				L_49 = Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_inline((&V_8), Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_RuntimeMethod_var);
				__this->___U3CU3Es__8 = L_49;
				int32_t L_50 = __this->___U3CU3Es__8;
				__this->___U3CxU3E5__7 = L_50;
				int32_t L_51 = __this->___U3CvalueU3E5__1;
				int32_t L_52 = __this->___U3CxU3E5__7;
				V_9 = (bool)((((int32_t)L_51) > ((int32_t)L_52))? 1 : 0);
				bool L_53 = V_9;
				if (!L_53)
				{
					goto IL_0246_2;
				}
			}
			{
				int32_t L_54 = __this->___U3CxU3E5__7;
				__this->___U3CvalueU3E5__1 = L_54;
			}

IL_0246_2:
			{
			}

IL_0247_2:
			{
				RuntimeObject* L_55 = __this->___U3CeU3E5__2;
				NullCheck(L_55);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_56;
				L_56 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_55);
				V_7 = L_56;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_57;
				L_57 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_11 = L_57;
				bool L_58;
				L_58 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_11), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_58)
				{
					goto IL_02ac_2;
				}
			}
			{
				int32_t L_59 = 3;
				V_0 = L_59;
				__this->___U3CU3E1__state = L_59;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_60 = V_11;
				__this->___U3CU3Eu__2 = L_60;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_61 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__7_1_tD013D28F83ADDE9E45AEE1903E28D2EFEF7602FC**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_61, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_03d4;
			}

IL_028f_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_62 = __this->___U3CU3Eu__2;
				V_11 = L_62;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_63 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_63, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_64 = (-1);
				V_0 = L_64;
				__this->___U3CU3E1__state = L_64;
			}

IL_02ac_2:
			{
				bool L_65;
				L_65 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_11), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__9 = L_65;
				bool L_66 = __this->___U3CU3Es__9;
				V_10 = L_66;
				bool L_67 = V_10;
				if (L_67)
				{
					goto IL_0195_2;
				}
			}
			{
				goto IL_02d7_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_02cb_1;
			}
			throw e;
		}

CATCH_02cb_1:
		{
			RuntimeObject* L_68 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_12 = L_68;
			RuntimeObject* L_69 = V_12;
			__this->___U3CU3Es__3 = L_69;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_69);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_02d7_1;
		}

IL_02d7_1:
		{
			RuntimeObject* L_70 = __this->___U3CeU3E5__2;
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_70) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_71 = V_13;
			if (!L_71)
			{
				goto IL_0356_1;
			}
		}
		{
			RuntimeObject* L_72 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_72);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_73;
			L_73 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_72);
			V_15 = L_73;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_74;
			L_74 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_15), NULL);
			V_14 = L_74;
			bool L_75;
			L_75 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_75)
			{
				goto IL_034d_1;
			}
		}
		{
			int32_t L_76 = 4;
			V_0 = L_76;
			__this->___U3CU3E1__state = L_76;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_77 = V_14;
			__this->___U3CU3Eu__3 = L_77;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_78 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitWithCancellationAsyncU3Ed__7_1_tD013D28F83ADDE9E45AEE1903E28D2EFEF7602FC**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_78, (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_03d4;
		}

IL_0330_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_79 = __this->___U3CU3Eu__3;
			V_14 = L_79;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_80 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3);
			il2cpp_codegen_initobj(L_80, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_81 = (-1);
			V_0 = L_81;
			__this->___U3CU3E1__state = L_81;
		}

IL_034d_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_0356_1:
		{
			RuntimeObject* L_82 = __this->___U3CU3Es__3;
			V_12 = L_82;
			RuntimeObject* L_83 = V_12;
			if (!L_83)
			{
				goto IL_0380_1;
			}
		}
		{
			RuntimeObject* L_84 = V_12;
			V_16 = ((Exception_t*)IsInstClass((RuntimeObject*)L_84, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_85 = V_16;
			if (L_85)
			{
				goto IL_0373_1;
			}
		}
		{
			RuntimeObject* L_86 = V_12;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_86, method);
		}

IL_0373_1:
		{
			Exception_t* L_87 = V_16;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_88;
			L_88 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_87, NULL);
			NullCheck(L_88);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_88, NULL);
		}

IL_0380_1:
		{
			int32_t L_89 = __this->___U3CU3Es__4;
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			int32_t L_90 = __this->___U3CvalueU3E5__1;
			V_1 = L_90;
			goto IL_03b8;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0397;
		}
		throw e;
	}

CATCH_0397:
	{
		Exception_t* L_91 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_16 = L_91;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_92 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder);
		Exception_t* L_93 = V_16;
		AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_inline(L_92, L_93, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_03d4;
	}

IL_03b8:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_94 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder);
		int32_t L_95 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_inline(L_94, L_95, AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_RuntimeMethod_var);
	}

IL_03d4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__7_1_SetStateMachine_m20FBDB6D4128525E00FD2207A5B4BE45781E2CCB_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__7_1_tD013D28F83ADDE9E45AEE1903E28D2EFEF7602FC* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveNextAsyncU3Ed__7__ctor_m294EC88949D437A93DA925822F5313DFBADFE871_gshared (U3CMoveNextAsyncU3Ed__7_t5C3858D5A215C27F7ACD70F743712EFAC46E1002* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveNextAsyncU3Ed__7_MoveNext_mD305E84389F5A0E5BBDB5CA663D7262B75CEF244_gshared (U3CMoveNextAsyncU3Ed__7_t5C3858D5A215C27F7ACD70F743712EFAC46E1002* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t4C0B519678B913AD1F0B3DB721B18FA114695044 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T_t4C0B519678B913AD1F0B3DB721B18FA114695044);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T_t4C0B519678B913AD1F0B3DB721B18FA114695044);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CMoveNextAsyncU3Ed__7_t5C3858D5A215C27F7ACD70F743712EFAC46E1002* V_4 = NULL;
	Exception_t* V_5 = NULL;
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
			goto IL_0082_1;
		}

IL_000e_1:
		{
			_ToUniTaskAsyncEnumerableTask_t96E01945EE26D2019409887F85016296E285563B* L_2 = *(_ToUniTaskAsyncEnumerableTask_t96E01945EE26D2019409887F85016296E285563B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
			CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1)))), NULL);
			_ToUniTaskAsyncEnumerableTask_t96E01945EE26D2019409887F85016296E285563B* L_3 = *(_ToUniTaskAsyncEnumerableTask_t96E01945EE26D2019409887F85016296E285563B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			bool L_4 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3));
			V_2 = L_4;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_0037_1;
			}
		}
		{
			V_1 = (bool)0;
			goto IL_00e6;
		}

IL_0037_1:
		{
			_ToUniTaskAsyncEnumerableTask_t96E01945EE26D2019409887F85016296E285563B* L_6 = *(_ToUniTaskAsyncEnumerableTask_t96E01945EE26D2019409887F85016296E285563B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			NullCheck(L_6);
			il2cpp_codegen_write_instance_field_data<bool>(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3), (bool)1);
			_ToUniTaskAsyncEnumerableTask_t96E01945EE26D2019409887F85016296E285563B* L_7 = *(_ToUniTaskAsyncEnumerableTask_t96E01945EE26D2019409887F85016296E285563B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_8 = *(Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9**)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0));
			NullCheck(L_8);
			TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 L_9;
			L_9 = ((  TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 (*) (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			V_3 = L_9;
			bool L_10;
			L_10 = ((  bool (*) (TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
			if (L_10)
			{
				goto IL_009e_1;
			}
		}
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_11);
			TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 L_12 = V_3;
			il2cpp_codegen_write_instance_field_data<TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_12);
			V_4 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*, U3CMoveNextAsyncU3Ed__7_t5C3858D5A215C27F7ACD70F743712EFAC46E1002**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))((((AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_3), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
			goto IL_00fb;
		}

IL_0082_1:
		{
			TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 L_13 = *(TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			V_3 = L_13;
			il2cpp_codegen_initobj((((TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)))), sizeof(TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8));
			int32_t L_14 = (-1);
			V_0 = L_14;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_14);
		}

IL_009e_1:
		{
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), (&V_3), (Il2CppFullySharedGenericAny*)L_15);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_15, SizeOf_T_t4C0B519678B913AD1F0B3DB721B18FA114695044);
			_ToUniTaskAsyncEnumerableTask_t96E01945EE26D2019409887F85016296E285563B* L_16 = *(_ToUniTaskAsyncEnumerableTask_t96E01945EE26D2019409887F85016296E285563B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3)), SizeOf_T_t4C0B519678B913AD1F0B3DB721B18FA114695044);
			NullCheck(L_16);
			il2cpp_codegen_write_instance_field_data(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2), L_17, SizeOf_T_t4C0B519678B913AD1F0B3DB721B18FA114695044);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3)))), SizeOf_T_t4C0B519678B913AD1F0B3DB721B18FA114695044);
			V_1 = (bool)1;
			goto IL_00e6;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00cc;
		}
		throw e;
	}

CATCH_00cc:
	{
		Exception_t* L_18 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_5 = L_18;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		Exception_t* L_19 = V_5;
		AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_inline((((AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00fb;
	}

IL_00e6:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		bool L_20 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_inline((((AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_20, AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
	}

IL_00fb:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveNextAsyncU3Ed__7_SetStateMachine_m0D96CCF0D3B78DFBB0A96D89AE4FBBD7DB545E33_gshared (U3CMoveNextAsyncU3Ed__7_t5C3858D5A215C27F7ACD70F743712EFAC46E1002* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveNextAsyncU3Ed__7__ctor_mF0FF4251796DC8403CA1CFBF61F5214E9ECA2D47_gshared (U3CMoveNextAsyncU3Ed__7_t018B4EF6E63587BA5822F2E50A302D4708BEE18B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveNextAsyncU3Ed__7_MoveNext_mF633DEA17FE4C81C628A9CB18C421B5C52F78E0B_gshared (U3CMoveNextAsyncU3Ed__7_t018B4EF6E63587BA5822F2E50A302D4708BEE18B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_Awaiter_tEE50C5BAF6AC468FF565AEF70B6927760483678D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const uint32_t SizeOf_T_tAB0391C39BAD0952FDF4CD0D33611826FE1A202A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T_tAB0391C39BAD0952FDF4CD0D33611826FE1A202A);
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T_tAB0391C39BAD0952FDF4CD0D33611826FE1A202A);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_8 = alloca(SizeOf_Awaiter_tEE50C5BAF6AC468FF565AEF70B6927760483678D);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_11 = L_8;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_12 = L_8;
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_3 = alloca(SizeOf_Awaiter_tEE50C5BAF6AC468FF565AEF70B6927760483678D);
	memset(V_3, 0, SizeOf_Awaiter_tEE50C5BAF6AC468FF565AEF70B6927760483678D);
	U3CMoveNextAsyncU3Ed__7_t018B4EF6E63587BA5822F2E50A302D4708BEE18B* V_4 = NULL;
	Exception_t* V_5 = NULL;
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
			goto IL_0082_1;
		}

IL_000e_1:
		{
			_ToUniTaskAsyncEnumerableUniTask_tB862AC47790A98CF42A70910BC9237C8764CF9E5* L_2 = *(_ToUniTaskAsyncEnumerableUniTask_tB862AC47790A98CF42A70910BC9237C8764CF9E5**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
			CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1)))), NULL);
			_ToUniTaskAsyncEnumerableUniTask_tB862AC47790A98CF42A70910BC9237C8764CF9E5* L_3 = *(_ToUniTaskAsyncEnumerableUniTask_tB862AC47790A98CF42A70910BC9237C8764CF9E5**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			bool L_4 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3));
			V_2 = L_4;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_0037_1;
			}
		}
		{
			V_1 = (bool)0;
			goto IL_00e6;
		}

IL_0037_1:
		{
			_ToUniTaskAsyncEnumerableUniTask_tB862AC47790A98CF42A70910BC9237C8764CF9E5* L_6 = *(_ToUniTaskAsyncEnumerableUniTask_tB862AC47790A98CF42A70910BC9237C8764CF9E5**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			NullCheck(L_6);
			il2cpp_codegen_write_instance_field_data<bool>(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3), (bool)1);
			_ToUniTaskAsyncEnumerableUniTask_tB862AC47790A98CF42A70910BC9237C8764CF9E5* L_7 = *(_ToUniTaskAsyncEnumerableUniTask_tB862AC47790A98CF42A70910BC9237C8764CF9E5**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)), il2cpp_rgctx_method(method->klass->rgctx_data, 3), (((UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_8);
			il2cpp_codegen_memcpy(V_3, L_8, SizeOf_Awaiter_tEE50C5BAF6AC468FF565AEF70B6927760483678D);
			bool L_9;
			L_9 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_3, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
			if (L_9)
			{
				goto IL_009e_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_10);
			il2cpp_codegen_memcpy(L_11, V_3, SizeOf_Awaiter_tEE50C5BAF6AC468FF565AEF70B6927760483678D);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_11, SizeOf_Awaiter_tEE50C5BAF6AC468FF565AEF70B6927760483678D);
			V_4 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CMoveNextAsyncU3Ed__7_t018B4EF6E63587BA5822F2E50A302D4708BEE18B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))((((AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_3, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			goto IL_00fb;
		}

IL_0082_1:
		{
			il2cpp_codegen_memcpy(L_12, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)), SizeOf_Awaiter_tEE50C5BAF6AC468FF565AEF70B6927760483678D);
			il2cpp_codegen_memcpy(V_3, L_12, SizeOf_Awaiter_tEE50C5BAF6AC468FF565AEF70B6927760483678D);
			il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)))), SizeOf_Awaiter_tEE50C5BAF6AC468FF565AEF70B6927760483678D);
			int32_t L_13 = (-1);
			V_0 = L_13;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_13);
		}

IL_009e_1:
		{
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_3, (Il2CppFullySharedGenericAny*)L_14);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_14, SizeOf_T_tAB0391C39BAD0952FDF4CD0D33611826FE1A202A);
			_ToUniTaskAsyncEnumerableUniTask_tB862AC47790A98CF42A70910BC9237C8764CF9E5* L_15 = *(_ToUniTaskAsyncEnumerableUniTask_tB862AC47790A98CF42A70910BC9237C8764CF9E5**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3)), SizeOf_T_tAB0391C39BAD0952FDF4CD0D33611826FE1A202A);
			NullCheck(L_15);
			il2cpp_codegen_write_instance_field_data(L_15, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2), L_16, SizeOf_T_tAB0391C39BAD0952FDF4CD0D33611826FE1A202A);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3)))), SizeOf_T_tAB0391C39BAD0952FDF4CD0D33611826FE1A202A);
			V_1 = (bool)1;
			goto IL_00e6;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00cc;
		}
		throw e;
	}

CATCH_00cc:
	{
		Exception_t* L_17 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_5 = L_17;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		Exception_t* L_18 = V_5;
		AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_inline((((AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00fb;
	}

IL_00e6:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		bool L_19 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_inline((((AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_19, AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
	}

IL_00fb:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveNextAsyncU3Ed__7_SetStateMachine_mCAD37CA3CA5BAA3C53FB2FE7E661B295493BAFCA_gshared (U3CMoveNextAsyncU3Ed__7_t018B4EF6E63587BA5822F2E50A302D4708BEE18B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveNextAsyncU3Ed__9__ctor_m47E90AE212E79248A92A86BA877ACC9B2ACABDBF_gshared (U3CMoveNextAsyncU3Ed__9_tD4F96CC8D5992FC80B36C4997D089E2FA5FAA70E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveNextAsyncU3Ed__9_MoveNext_m55A2520E95B10480DE53C9572AA29187C580E4DA_gshared (U3CMoveNextAsyncU3Ed__9_tD4F96CC8D5992FC80B36C4997D089E2FA5FAA70E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t7EB2ECB1DE05FD0EB0D1B4458032474E8363BA85 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_34 = alloca(SizeOf_TSource_t7EB2ECB1DE05FD0EB0D1B4458032474E8363BA85);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tF1161044B03B89C690A1FB77CF673B0EDEE8B5BD V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CMoveNextAsyncU3Ed__9_tD4F96CC8D5992FC80B36C4997D089E2FA5FAA70E* V_5 = NULL;
	bool V_6 = false;
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
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_008c_1;
		}

IL_000e_1:
		{
			_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC* L_2 = __this->___U3CU3E4__this;
			il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
			CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1)))), NULL);
			_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC* L_3 = __this->___U3CU3E4__this;
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2));
			V_2 = (bool)((((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_4) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_00e8_1;
			}
		}
		{
			_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC* L_6 = __this->___U3CU3E4__this;
			RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0));
			_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC* L_8 = __this->___U3CU3E4__this;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_9 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1));
			UniTask_1_tF1161044B03B89C690A1FB77CF673B0EDEE8B5BD L_10;
			L_10 = ((  UniTask_1_tF1161044B03B89C690A1FB77CF673B0EDEE8B5BD (*) (RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_7, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
			V_4 = L_10;
			Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C L_11;
			L_11 = InvokerFuncInvoker0< Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), (&V_4));
			V_3 = L_11;
			bool L_12;
			L_12 = ((  bool (*) (Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			if (L_12)
			{
				goto IL_00a8_1;
			}
		}
		{
			int32_t L_13 = 0;
			V_0 = L_13;
			__this->___U3CU3E1__state = L_13;
			Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C L_14 = V_3;
			__this->___U3CU3Eu__1 = L_14;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___result), (void*)NULL);
			#endif
			V_5 = __this;
			AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_15 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C*, U3CMoveNextAsyncU3Ed__9_tD4F96CC8D5992FC80B36C4997D089E2FA5FAA70E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_15, (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_0177;
		}

IL_008c_1:
		{
			Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C L_16 = __this->___U3CU3Eu__1;
			V_3 = L_16;
			Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C* L_17 = (Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_17, sizeof(Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C));
			int32_t L_18 = (-1);
			V_0 = L_18;
			__this->___U3CU3E1__state = L_18;
		}

IL_00a8_1:
		{
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19;
			L_19 = InvokerFuncInvoker0< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), (&V_3));
			__this->___U3CU3Es__1 = L_19;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1), (void*)L_19);
			_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC* L_20 = __this->___U3CU3E4__this;
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = __this->___U3CU3Es__1;
			NullCheck(L_20);
			il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_20, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2), L_21);
			__this->___U3CU3Es__1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1), (void*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL);
			_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC* L_22 = __this->___U3CU3E4__this;
			_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC* L_23 = __this->___U3CU3E4__this;
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_24 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(L_23, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2));
			NullCheck(L_24);
			NullCheck(L_22);
			il2cpp_codegen_write_instance_field_data<int32_t>(L_22, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3), ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_24)->max_length)), 1)));
		}

IL_00e8_1:
		{
			_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC* L_25 = __this->___U3CU3E4__this;
			int32_t L_26 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_25, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3));
			V_6 = (bool)((((int32_t)((((int32_t)L_26) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_27 = V_6;
			if (!L_27)
			{
				goto IL_0143_1;
			}
		}
		{
			_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC* L_28 = __this->___U3CU3E4__this;
			_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC* L_29 = __this->___U3CU3E4__this;
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_30 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(L_29, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2));
			_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC* L_31 = __this->___U3CU3E4__this;
			int32_t L_32 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_31, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3));
			NullCheck(L_30);
			int32_t L_33 = L_32;
			il2cpp_codegen_memcpy(L_34, (L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)), SizeOf_TSource_t7EB2ECB1DE05FD0EB0D1B4458032474E8363BA85);
			NullCheck(L_28);
			InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), L_28, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_34: *(void**)L_34));
			_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC* L_35 = __this->___U3CU3E4__this;
			_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC* L_36 = __this->___U3CU3E4__this;
			int32_t L_37 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_36, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3));
			NullCheck(L_35);
			il2cpp_codegen_write_instance_field_data<int32_t>(L_35, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3), ((int32_t)il2cpp_codegen_subtract(L_37, 1)));
			V_1 = (bool)1;
			goto IL_0162;
		}

IL_0143_1:
		{
			V_1 = (bool)0;
			goto IL_0162;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0148;
		}
		throw e;
	}

CATCH_0148:
	{
		Exception_t* L_38 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_7 = L_38;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_39 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder);
		Exception_t* L_40 = V_7;
		AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_inline(L_39, L_40, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0177;
	}

IL_0162:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_41 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder);
		bool L_42 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_inline(L_41, L_42, AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
	}

IL_0177:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveNextAsyncU3Ed__9_SetStateMachine_mA467E3079A88F0E5D61260DF936B2BB7725D53BA_gshared (U3CMoveNextAsyncU3Ed__9_tD4F96CC8D5992FC80B36C4997D089E2FA5FAA70E* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COfTypeIteratorU3Ed__97_1__ctor_m44457ABF7B94FB4534DDF41AF42C24AAB96CE440_gshared (U3COfTypeIteratorU3Ed__97_1_tA58F5D2CD323EE897A20F9D68301309FDB3598BA* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COfTypeIteratorU3Ed__97_1_System_IDisposable_Dispose_m8151CC858589D34D0BC7492C16554EA6CDBD2C3D_gshared (U3COfTypeIteratorU3Ed__97_1_tA58F5D2CD323EE897A20F9D68301309FDB3598BA* __this, const RuntimeMethod* method) 
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
				((  void (*) (U3COfTypeIteratorU3Ed__97_1_tA58F5D2CD323EE897A20F9D68301309FDB3598BA*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COfTypeIteratorU3Ed__97_1_MoveNext_m1B79C4AD1CD861C0A6559EE767D1508F0975CB44_gshared (U3COfTypeIteratorU3Ed__97_1_tA58F5D2CD323EE897A20F9D68301309FDB3598BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TResult_tA8A7CAD2AC9A233B36167F67648BEC91BB0C0055 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TResult_tA8A7CAD2AC9A233B36167F67648BEC91BB0C0055);
	bool V_0 = false;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0085:
			{
				((  void (*) (U3COfTypeIteratorU3Ed__97_1_tA58F5D2CD323EE897A20F9D68301309FDB3598BA*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
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
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_005f_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_008c;
			}

IL_0012_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
				RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				NullCheck(L_3);
				RuntimeObject* L_4;
				L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_3);
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_4);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
				goto IL_0067_1;
			}

IL_0034_1:
			{
				RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				V_2 = L_6;
				RuntimeObject* L_7 = V_2;
				if (!((RuntimeObject*)IsInst((RuntimeObject*)L_7, il2cpp_rgctx_data(method->klass->rgctx_data, 2))))
				{
					goto IL_0067_1;
				}
			}
			{
				RuntimeObject* L_8 = V_2;
				void* L_10 = UnBox_Any(L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_9);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_10)), SizeOf_TResult_tA8A7CAD2AC9A233B36167F67648BEC91BB0C0055);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
				V_0 = (bool)1;
				goto IL_008c;
			}

IL_005f_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
			}

IL_0067_1:
			{
				RuntimeObject* L_11 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_0034_1;
				}
			}
			{
				((  void (*) (U3COfTypeIteratorU3Ed__97_1_tA58F5D2CD323EE897A20F9D68301309FDB3598BA*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), (RuntimeObject*)NULL);
				V_0 = (bool)0;
				goto IL_008c;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008c:
	{
		bool L_13 = V_0;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COfTypeIteratorU3Ed__97_1_U3CU3Em__Finally1_m02195C56E6E694D4403FE8E8B2CE4A221A48D48D_gshared (U3COfTypeIteratorU3Ed__97_1_tA58F5D2CD323EE897A20F9D68301309FDB3598BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
	}

IL_001c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COfTypeIteratorU3Ed__97_1_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_mC64759C999FB3344A9DF32F74E6A7E24564DB7B0_gshared (U3COfTypeIteratorU3Ed__97_1_tA58F5D2CD323EE897A20F9D68301309FDB3598BA* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TResult_tA8A7CAD2AC9A233B36167F67648BEC91BB0C0055 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_tA8A7CAD2AC9A233B36167F67648BEC91BB0C0055);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TResult_tA8A7CAD2AC9A233B36167F67648BEC91BB0C0055);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TResult_tA8A7CAD2AC9A233B36167F67648BEC91BB0C0055);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COfTypeIteratorU3Ed__97_1_System_Collections_IEnumerator_Reset_mAC70039DEDE1A20CD65B5CB570FA598F53A41F28_gshared (U3COfTypeIteratorU3Ed__97_1_tA58F5D2CD323EE897A20F9D68301309FDB3598BA* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COfTypeIteratorU3Ed__97_1_System_Collections_IEnumerator_get_Current_m65B9F112E0A0042410D3CC1A1940D4D449054369_gshared (U3COfTypeIteratorU3Ed__97_1_tA58F5D2CD323EE897A20F9D68301309FDB3598BA* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TResult_tA8A7CAD2AC9A233B36167F67648BEC91BB0C0055 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_tA8A7CAD2AC9A233B36167F67648BEC91BB0C0055);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TResult_tA8A7CAD2AC9A233B36167F67648BEC91BB0C0055);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COfTypeIteratorU3Ed__97_1_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m6B0CC09410F057E39C91E16562DA103DF294F162_gshared (U3COfTypeIteratorU3Ed__97_1_tA58F5D2CD323EE897A20F9D68301309FDB3598BA* __this, const RuntimeMethod* method) 
{
	U3COfTypeIteratorU3Ed__97_1_tA58F5D2CD323EE897A20F9D68301309FDB3598BA* V_0 = NULL;
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
		U3COfTypeIteratorU3Ed__97_1_tA58F5D2CD323EE897A20F9D68301309FDB3598BA* L_3 = (U3COfTypeIteratorU3Ed__97_1_tA58F5D2CD323EE897A20F9D68301309FDB3598BA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (U3COfTypeIteratorU3Ed__97_1_tA58F5D2CD323EE897A20F9D68301309FDB3598BA*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_3;
	}

IL_0029:
	{
		U3COfTypeIteratorU3Ed__97_1_tA58F5D2CD323EE897A20F9D68301309FDB3598BA* L_4 = V_0;
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NullCheck(L_4);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_5);
		U3COfTypeIteratorU3Ed__97_1_tA58F5D2CD323EE897A20F9D68301309FDB3598BA* L_6 = V_0;
		return (RuntimeObject*)L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COfTypeIteratorU3Ed__97_1_System_Collections_IEnumerable_GetEnumerator_mAF3438B14B39DB5B5651B3964A5163DE741D3BDB_gshared (U3COfTypeIteratorU3Ed__97_1_tA58F5D2CD323EE897A20F9D68301309FDB3598BA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (U3COfTypeIteratorU3Ed__97_1_tA58F5D2CD323EE897A20F9D68301309FDB3598BA*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrependIteratorU3Ed__63_1__ctor_m6053FC280E41A07FAEED4F2B7F8794F743E343CD_gshared (U3CPrependIteratorU3Ed__63_1_t3F7B129C2B64E42C7D112B951CFC32BF1A4ABF7D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrependIteratorU3Ed__63_1_System_IDisposable_Dispose_m33FC7C7D8C229613B32E5AEDE24C5D9B8DD5327D_gshared (U3CPrependIteratorU3Ed__63_1_t3F7B129C2B64E42C7D112B951CFC32BF1A4ABF7D* __this, const RuntimeMethod* method) 
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
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
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
				((  void (*) (U3CPrependIteratorU3Ed__63_1_t3F7B129C2B64E42C7D112B951CFC32BF1A4ABF7D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPrependIteratorU3Ed__63_1_MoveNext_mBE29D8152AD77D625E8DBC26A11220530ED5D111_gshared (U3CPrependIteratorU3Ed__63_1_t3F7B129C2B64E42C7D112B951CFC32BF1A4ABF7D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t0CCB816922E5762EDAB322062314EE1EF2E2B1D1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TSource_t0CCB816922E5762EDAB322062314EE1EF2E2B1D1);
	const Il2CppFullySharedGenericAny L_6 = L_2;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TSource_t0CCB816922E5762EDAB322062314EE1EF2E2B1D1);
	bool V_0 = false;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TSource_t0CCB816922E5762EDAB322062314EE1EF2E2B1D1);
	memset(V_2, 0, SizeOf_TSource_t0CCB816922E5762EDAB322062314EE1EF2E2B1D1);
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00a4:
			{
				((  void (*) (U3CPrependIteratorU3Ed__63_1_t3F7B129C2B64E42C7D112B951CFC32BF1A4ABF7D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
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
						goto IL_003e_1;
					}
					case 2:
					{
						goto IL_007e_1;
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
				il2cpp_codegen_memcpy(L_2, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3)), SizeOf_TSource_t0CCB816922E5762EDAB322062314EE1EF2E2B1D1);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_2, SizeOf_TSource_t0CCB816922E5762EDAB322062314EE1EF2E2B1D1);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
				V_0 = (bool)1;
				goto IL_00ab;
			}

IL_003e_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
				RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				NullCheck(L_3);
				RuntimeObject* L_4;
				L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_3);
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_4);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
				goto IL_0086_1;
			}

IL_0060_1:
			{
				RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck(L_5);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5, (Il2CppFullySharedGenericAny*)L_6);
				il2cpp_codegen_memcpy(V_2, L_6, SizeOf_TSource_t0CCB816922E5762EDAB322062314EE1EF2E2B1D1);
				il2cpp_codegen_memcpy(L_7, V_2, SizeOf_TSource_t0CCB816922E5762EDAB322062314EE1EF2E2B1D1);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_7, SizeOf_TSource_t0CCB816922E5762EDAB322062314EE1EF2E2B1D1);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 2);
				V_0 = (bool)1;
				goto IL_00ab;
			}

IL_007e_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
			}

IL_0086_1:
			{
				RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0060_1;
				}
			}
			{
				((  void (*) (U3CPrependIteratorU3Ed__63_1_t3F7B129C2B64E42C7D112B951CFC32BF1A4ABF7D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), (RuntimeObject*)NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrependIteratorU3Ed__63_1_U3CU3Em__Finally1_m6D4A81BE5468387FCFD23228AF4F45139511131D_gshared (U3CPrependIteratorU3Ed__63_1_t3F7B129C2B64E42C7D112B951CFC32BF1A4ABF7D* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrependIteratorU3Ed__63_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_mC2FE458C29C73ABD17C733C572C3913148A3F3F9_gshared (U3CPrependIteratorU3Ed__63_1_t3F7B129C2B64E42C7D112B951CFC32BF1A4ABF7D* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t0CCB816922E5762EDAB322062314EE1EF2E2B1D1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t0CCB816922E5762EDAB322062314EE1EF2E2B1D1);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TSource_t0CCB816922E5762EDAB322062314EE1EF2E2B1D1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TSource_t0CCB816922E5762EDAB322062314EE1EF2E2B1D1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrependIteratorU3Ed__63_1_System_Collections_IEnumerator_Reset_m90174946F4DA4B253F2BEAA13DEF8BE02DF583FD_gshared (U3CPrependIteratorU3Ed__63_1_t3F7B129C2B64E42C7D112B951CFC32BF1A4ABF7D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPrependIteratorU3Ed__63_1_System_Collections_IEnumerator_get_Current_m53DF677382464114727349D14D697B7EA6527889_gshared (U3CPrependIteratorU3Ed__63_1_t3F7B129C2B64E42C7D112B951CFC32BF1A4ABF7D* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t0CCB816922E5762EDAB322062314EE1EF2E2B1D1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t0CCB816922E5762EDAB322062314EE1EF2E2B1D1);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TSource_t0CCB816922E5762EDAB322062314EE1EF2E2B1D1);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPrependIteratorU3Ed__63_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m76D8286C23722D4C8909554278304AC5B1A37EC2_gshared (U3CPrependIteratorU3Ed__63_1_t3F7B129C2B64E42C7D112B951CFC32BF1A4ABF7D* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t0CCB816922E5762EDAB322062314EE1EF2E2B1D1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TSource_t0CCB816922E5762EDAB322062314EE1EF2E2B1D1);
	U3CPrependIteratorU3Ed__63_1_t3F7B129C2B64E42C7D112B951CFC32BF1A4ABF7D* V_0 = NULL;
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
		U3CPrependIteratorU3Ed__63_1_t3F7B129C2B64E42C7D112B951CFC32BF1A4ABF7D* L_3 = (U3CPrependIteratorU3Ed__63_1_t3F7B129C2B64E42C7D112B951CFC32BF1A4ABF7D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (U3CPrependIteratorU3Ed__63_1_t3F7B129C2B64E42C7D112B951CFC32BF1A4ABF7D*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_3;
	}

IL_0029:
	{
		U3CPrependIteratorU3Ed__63_1_t3F7B129C2B64E42C7D112B951CFC32BF1A4ABF7D* L_4 = V_0;
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_4);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_5);
		U3CPrependIteratorU3Ed__63_1_t3F7B129C2B64E42C7D112B951CFC32BF1A4ABF7D* L_6 = V_0;
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)), SizeOf_TSource_t0CCB816922E5762EDAB322062314EE1EF2E2B1D1);
		NullCheck(L_6);
		il2cpp_codegen_write_instance_field_data(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_7, SizeOf_TSource_t0CCB816922E5762EDAB322062314EE1EF2E2B1D1);
		U3CPrependIteratorU3Ed__63_1_t3F7B129C2B64E42C7D112B951CFC32BF1A4ABF7D* L_8 = V_0;
		return (RuntimeObject*)L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPrependIteratorU3Ed__63_1_System_Collections_IEnumerable_GetEnumerator_mE48580D1C79F1ED25540E0660CC42DAB0C27EEDB_gshared (U3CPrependIteratorU3Ed__63_1_t3F7B129C2B64E42C7D112B951CFC32BF1A4ABF7D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (U3CPrependIteratorU3Ed__63_1_t3F7B129C2B64E42C7D112B951CFC32BF1A4ABF7D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadAsyncCoreU3Ed__5__ctor_m78CB6574171611B334F3B4EA4F441968969BF15E_gshared (U3CReadAsyncCoreU3Ed__5_tFC66DFEB527BFA020AB057E4D877130EC75A2E86* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadAsyncCoreU3Ed__5_MoveNext_m883B404EBEAA78A149CA7AA98EA2E7CFE1950F25_gshared (U3CReadAsyncCoreU3Ed__5_tFC66DFEB527BFA020AB057E4D877130EC75A2E86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t0B182A9D005B13C01362153EC02CA729F416A55D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T_t0B182A9D005B13C01362153EC02CA729F416A55D);
	const Il2CppFullySharedGenericAny L_21 = L_17;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t0B182A9D005B13C01362153EC02CA729F416A55D);
	memset(V_1, 0, SizeOf_T_t0B182A9D005B13C01362153EC02CA729F416A55D);
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CReadAsyncCoreU3Ed__5_tFC66DFEB527BFA020AB057E4D877130EC75A2E86* V_5 = NULL;
	bool V_6 = false;
	Exception_t* V_7 = NULL;
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
			goto IL_005b_1;
		}

IL_000e_1:
		{
			ChannelReader_1_t2ECD38FFB796290865D3F1EAC478976ECBD61318* L_2 = *(ChannelReader_1_t2ECD38FFB796290865D3F1EAC478976ECBD61318**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			NullCheck(L_2);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_4;
			L_4 = VirtualFuncInvoker1< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(5, L_2, L_3);
			V_4 = L_4;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_5;
			L_5 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			V_3 = L_5;
			bool L_6;
			L_6 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_3), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0077_1;
			}
		}
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_7);
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_8 = V_3;
			il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_8);
			V_5 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CReadAsyncCoreU3Ed__5_tFC66DFEB527BFA020AB057E4D877130EC75A2E86**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
			goto IL_00f2;
		}

IL_005b_1:
		{
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_9 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			V_3 = L_9;
			il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
			int32_t L_10 = (-1);
			V_0 = L_10;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_10);
		}

IL_0077_1:
		{
			bool L_11;
			L_11 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
			il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_11);
			bool L_12 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			V_2 = L_12;
			bool L_13 = V_2;
			if (!L_13)
			{
				goto IL_00bd_1;
			}
		}
		{
			ChannelReader_1_t2ECD38FFB796290865D3F1EAC478976ECBD61318* L_14 = *(ChannelReader_1_t2ECD38FFB796290865D3F1EAC478976ECBD61318**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
			NullCheck(L_14);
			bool L_15;
			L_15 = VirtualFuncInvoker1< bool, Il2CppFullySharedGenericAny* >::Invoke(4, L_14, (((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))));
			V_6 = L_15;
			bool L_16 = V_6;
			if (!L_16)
			{
				goto IL_00b0_1;
			}
		}
		{
			il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)), SizeOf_T_t0B182A9D005B13C01362153EC02CA729F416A55D);
			il2cpp_codegen_memcpy(V_1, L_17, SizeOf_T_t0B182A9D005B13C01362153EC02CA729F416A55D);
			goto IL_00dd;
		}

IL_00b0_1:
		{
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), SizeOf_T_t0B182A9D005B13C01362153EC02CA729F416A55D);
		}

IL_00bd_1:
		{
			ChannelClosedException_tC3080D80CFCAF35852566A33108F4533DB025F0C* L_18 = (ChannelClosedException_tC3080D80CFCAF35852566A33108F4533DB025F0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChannelClosedException_tC3080D80CFCAF35852566A33108F4533DB025F0C_il2cpp_TypeInfo_var)));
			ChannelClosedException__ctor_m96AAB202638FADBEE698B834F10976A0690C7D94(L_18, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, method);
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c3;
		}
		throw e;
	}

CATCH_00c3:
	{
		Exception_t* L_19 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_7 = L_19;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		Exception_t* L_20 = V_7;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00f2;
	}

IL_00dd:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_memcpy(L_21, V_1, SizeOf_T_t0B182A9D005B13C01362153EC02CA729F416A55D);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_21: *(void**)L_21));
	}

IL_00f2:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadAsyncCoreU3Ed__5_SetStateMachine_m4D7D301E0291B7435DBF133EA0AEAC47F7E5993E_gshared (U3CReadAsyncCoreU3Ed__5_tFC66DFEB527BFA020AB057E4D877130EC75A2E86* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRepeatIteratorU3Ed__117_1__ctor_mB6F2727263850E0E4DFA4627C504560081FE5CBC_gshared (U3CRepeatIteratorU3Ed__117_1_t8553BD45B7127819B147EC6E07C693639BA931D3* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRepeatIteratorU3Ed__117_1_System_IDisposable_Dispose_mD7FBB0E6EB4E9E39DA695BB0BDB7B59BBB2AB32E_gshared (U3CRepeatIteratorU3Ed__117_1_t8553BD45B7127819B147EC6E07C693639BA931D3* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRepeatIteratorU3Ed__117_1_MoveNext_m7F495C96395CAA13C3900C140A49DAA5A95021BB_gshared (U3CRepeatIteratorU3Ed__117_1_t8553BD45B7127819B147EC6E07C693639BA931D3* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TResult_tDF0FD4CCA5C3596D3FBECE0DCFD999037F0B72BB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TResult_tDF0FD4CCA5C3596D3FBECE0DCFD999037F0B72BB);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0035;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), 0);
		goto IL_004c;
	}

IL_0020:
	{
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3)), SizeOf_TResult_tDF0FD4CCA5C3596D3FBECE0DCFD999037F0B72BB);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_3, SizeOf_TResult_tDF0FD4CCA5C3596D3FBECE0DCFD999037F0B72BB);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
		return (bool)1;
	}

IL_0035:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		V_1 = L_4;
		int32_t L_5 = V_1;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), ((int32_t)il2cpp_codegen_add(L_5, 1)));
	}

IL_004c:
	{
		int32_t L_6 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0020;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRepeatIteratorU3Ed__117_1_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m468ED31E7CD66DC8A8C89A53DBD96856E88743C3_gshared (U3CRepeatIteratorU3Ed__117_1_t8553BD45B7127819B147EC6E07C693639BA931D3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TResult_tDF0FD4CCA5C3596D3FBECE0DCFD999037F0B72BB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_tDF0FD4CCA5C3596D3FBECE0DCFD999037F0B72BB);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TResult_tDF0FD4CCA5C3596D3FBECE0DCFD999037F0B72BB);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TResult_tDF0FD4CCA5C3596D3FBECE0DCFD999037F0B72BB);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRepeatIteratorU3Ed__117_1_System_Collections_IEnumerator_Reset_m3FD842AA9A33840E6EA1D33C41690A9B8516860A_gshared (U3CRepeatIteratorU3Ed__117_1_t8553BD45B7127819B147EC6E07C693639BA931D3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRepeatIteratorU3Ed__117_1_System_Collections_IEnumerator_get_Current_mFB7E40F7C3EA53866BEC9017A7E0573AB85A9FFD_gshared (U3CRepeatIteratorU3Ed__117_1_t8553BD45B7127819B147EC6E07C693639BA931D3* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TResult_tDF0FD4CCA5C3596D3FBECE0DCFD999037F0B72BB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_tDF0FD4CCA5C3596D3FBECE0DCFD999037F0B72BB);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TResult_tDF0FD4CCA5C3596D3FBECE0DCFD999037F0B72BB);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRepeatIteratorU3Ed__117_1_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_mD01C4322F1005F2A0466727069F2E8F6DD1A03EB_gshared (U3CRepeatIteratorU3Ed__117_1_t8553BD45B7127819B147EC6E07C693639BA931D3* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TResult_tDF0FD4CCA5C3596D3FBECE0DCFD999037F0B72BB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TResult_tDF0FD4CCA5C3596D3FBECE0DCFD999037F0B72BB);
	U3CRepeatIteratorU3Ed__117_1_t8553BD45B7127819B147EC6E07C693639BA931D3* V_0 = NULL;
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
		U3CRepeatIteratorU3Ed__117_1_t8553BD45B7127819B147EC6E07C693639BA931D3* L_3 = (U3CRepeatIteratorU3Ed__117_1_t8553BD45B7127819B147EC6E07C693639BA931D3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (U3CRepeatIteratorU3Ed__117_1_t8553BD45B7127819B147EC6E07C693639BA931D3*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_0 = L_3;
	}

IL_0029:
	{
		U3CRepeatIteratorU3Ed__117_1_t8553BD45B7127819B147EC6E07C693639BA931D3* L_4 = V_0;
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)), SizeOf_TResult_tDF0FD4CCA5C3596D3FBECE0DCFD999037F0B72BB);
		NullCheck(L_4);
		il2cpp_codegen_write_instance_field_data(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_5, SizeOf_TResult_tDF0FD4CCA5C3596D3FBECE0DCFD999037F0B72BB);
		U3CRepeatIteratorU3Ed__117_1_t8553BD45B7127819B147EC6E07C693639BA931D3* L_6 = V_0;
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_6);
		il2cpp_codegen_write_instance_field_data<int32_t>(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_7);
		U3CRepeatIteratorU3Ed__117_1_t8553BD45B7127819B147EC6E07C693639BA931D3* L_8 = V_0;
		return (RuntimeObject*)L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRepeatIteratorU3Ed__117_1_System_Collections_IEnumerable_GetEnumerator_m29BE5A2ABB280248A1DF4FEDEB423B440662CDA5_gshared (U3CRepeatIteratorU3Ed__117_1_t8553BD45B7127819B147EC6E07C693639BA931D3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (U3CRepeatIteratorU3Ed__117_1_t8553BD45B7127819B147EC6E07C693639BA931D3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReverseIteratorU3Ed__79_1__ctor_m685BB5646EEC473221EEEEB5198F7F021741E8FE_gshared (U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReverseIteratorU3Ed__79_1_System_IDisposable_Dispose_m95DB0EDD0B03E8F220004B8F3888E117A6D28F02_gshared (U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CReverseIteratorU3Ed__79_1_MoveNext_m12DED18709B627A74D8F47B8A812FCF9A876E985_gshared (U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0062;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state = (-1);
		RuntimeObject* L_3 = __this->___source;
		Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Buffer_1__ctor_m072DE84AEC969582EB5760D4835747F9DC0C02AF((&L_4), L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___U3CbufferU3E5__2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CbufferU3E5__2))->___items), (void*)NULL);
		Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59* L_5 = (Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59*)(&__this->___U3CbufferU3E5__2);
		int32_t L_6 = L_5->___count;
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		goto IL_0079;
	}

IL_003d:
	{
		Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59* L_7 = (Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59*)(&__this->___U3CbufferU3E5__2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7->___items;
		int32_t L_9 = __this->___U3CiU3E5__3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		__this->___U3CU3E2__current = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_11);
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_0062:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_12 = __this->___U3CiU3E5__3;
		V_1 = L_12;
		int32_t L_13 = V_1;
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_0079:
	{
		int32_t L_14 = __this->___U3CiU3E5__3;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReverseIteratorU3Ed__79_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m75696348EEFA01E44E736C4D672C4781F9112C97_gshared (U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReverseIteratorU3Ed__79_1_System_Collections_IEnumerator_Reset_m392917A398D3B9A7504623C7A64DA5FF2DD27776_gshared (U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReverseIteratorU3Ed__79_1_System_Collections_IEnumerator_get_Current_m084D571AA48B30598569C39DD567560AF28B4299_gshared (U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReverseIteratorU3Ed__79_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m11F12AD959FE78FE9411817870AE1DF7BE612689_gshared (U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC* __this, const RuntimeMethod* method) 
{
	U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC* V_0 = NULL;
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
		U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC* L_3 = (U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		U3CReverseIteratorU3Ed__79_1__ctor_m685BB5646EEC473221EEEEB5198F7F021741E8FE(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_0 = L_3;
	}

IL_0029:
	{
		U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC* L_4 = V_0;
		RuntimeObject* L_5 = __this->___U3CU3E3__source;
		NullCheck(L_4);
		L_4->___source = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___source), (void*)L_5);
		U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC* L_6 = V_0;
		return (RuntimeObject*)L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReverseIteratorU3Ed__79_1_System_Collections_IEnumerable_GetEnumerator_m55D0E38CA8974898032F1AEC136A1295F2A2861B_gshared (U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CReverseIteratorU3Ed__79_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m11F12AD959FE78FE9411817870AE1DF7BE612689(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReverseIteratorU3Ed__79_1__ctor_m639C26764B0F8A95FC823E188D4E677BBCBAEBBF_gshared (U3CReverseIteratorU3Ed__79_1_t654E1731541179CF0738EB017E50AF14F2F8561C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReverseIteratorU3Ed__79_1_System_IDisposable_Dispose_m616CC450AE3CCB0E19EF5EF0322BA28D7B10FF27_gshared (U3CReverseIteratorU3Ed__79_1_t654E1731541179CF0738EB017E50AF14F2F8561C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CReverseIteratorU3Ed__79_1_MoveNext_mA94377EE3E1EFF886C524A69811E833DD52BBDE0_gshared (U3CReverseIteratorU3Ed__79_1_t654E1731541179CF0738EB017E50AF14F2F8561C* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t01203F084DA9F3831FB1E3C86D77E984536413DC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_t01203F084DA9F3831FB1E3C86D77E984536413DC);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0062;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Buffer_1__ctor_m55137EEF7AF9E0883A438776A066DA5520FFDE49((&L_4), L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		il2cpp_codegen_write_instance_field_data<Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_4);
		int32_t L_5 = (((Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5))))->___count;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), ((int32_t)il2cpp_codegen_subtract(L_5, 1)));
		goto IL_0079;
	}

IL_003d:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = (((Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5))))->___items;
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_TSource_t01203F084DA9F3831FB1E3C86D77E984536413DC);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_9, SizeOf_TSource_t01203F084DA9F3831FB1E3C86D77E984536413DC);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
		return (bool)1;
	}

IL_0062:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		V_1 = L_10;
		int32_t L_11 = V_1;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), ((int32_t)il2cpp_codegen_subtract(L_11, 1)));
	}

IL_0079:
	{
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReverseIteratorU3Ed__79_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_mFC1C69581F882D10F5FAFE8DB286372B18384513_gshared (U3CReverseIteratorU3Ed__79_1_t654E1731541179CF0738EB017E50AF14F2F8561C* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t01203F084DA9F3831FB1E3C86D77E984536413DC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t01203F084DA9F3831FB1E3C86D77E984536413DC);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TSource_t01203F084DA9F3831FB1E3C86D77E984536413DC);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TSource_t01203F084DA9F3831FB1E3C86D77E984536413DC);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReverseIteratorU3Ed__79_1_System_Collections_IEnumerator_Reset_m9DA8206FDC9C981753CFF6DF031942FDD99BDB8E_gshared (U3CReverseIteratorU3Ed__79_1_t654E1731541179CF0738EB017E50AF14F2F8561C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReverseIteratorU3Ed__79_1_System_Collections_IEnumerator_get_Current_m3BE7F74CDD48F448DAA3A03216887A4B9BAA78F3_gshared (U3CReverseIteratorU3Ed__79_1_t654E1731541179CF0738EB017E50AF14F2F8561C* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t01203F084DA9F3831FB1E3C86D77E984536413DC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t01203F084DA9F3831FB1E3C86D77E984536413DC);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TSource_t01203F084DA9F3831FB1E3C86D77E984536413DC);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReverseIteratorU3Ed__79_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_mFD5E16F72AA153BCCD35C7D655AC956B1CDDED04_gshared (U3CReverseIteratorU3Ed__79_1_t654E1731541179CF0738EB017E50AF14F2F8561C* __this, const RuntimeMethod* method) 
{
	U3CReverseIteratorU3Ed__79_1_t654E1731541179CF0738EB017E50AF14F2F8561C* V_0 = NULL;
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
		U3CReverseIteratorU3Ed__79_1_t654E1731541179CF0738EB017E50AF14F2F8561C* L_3 = (U3CReverseIteratorU3Ed__79_1_t654E1731541179CF0738EB017E50AF14F2F8561C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (U3CReverseIteratorU3Ed__79_1_t654E1731541179CF0738EB017E50AF14F2F8561C*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_0 = L_3;
	}

IL_0029:
	{
		U3CReverseIteratorU3Ed__79_1_t654E1731541179CF0738EB017E50AF14F2F8561C* L_4 = V_0;
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NullCheck(L_4);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_5);
		U3CReverseIteratorU3Ed__79_1_t654E1731541179CF0738EB017E50AF14F2F8561C* L_6 = V_0;
		return (RuntimeObject*)L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReverseIteratorU3Ed__79_1_System_Collections_IEnumerable_GetEnumerator_m0E458C7FA95A7FBFF906D13D55ED5AE46E8E8406_gshared (U3CReverseIteratorU3Ed__79_1_t654E1731541179CF0738EB017E50AF14F2F8561C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (U3CReverseIteratorU3Ed__79_1_t654E1731541179CF0738EB017E50AF14F2F8561C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_mAEE718F60708F1A917C5379F94447C8090707CE7_gshared_inline (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_gshared_inline (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* __this, int64_t ___0_result, const RuntimeMethod* method) 
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
		int64_t L_2 = ___0_result;
		__this->___result = L_2;
		goto IL_0028;
	}

IL_0019:
	{
		RuntimeObject* L_3 = __this->___runnerPromise;
		int64_t L_4 = ___0_result;
		NullCheck(L_3);
		InterfaceActionInvoker1< int64_t >::Invoke(2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_mE8C5BA18D2449D6BD546630CE70DE315F5F91FCE_gshared_inline (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m5E0E26E389BF8D15A8935BC741FAADEFF1617158_gshared_inline (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_result, const RuntimeMethod* method) 
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
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_2 = ___0_result;
		__this->___result = L_2;
		goto IL_0028;
	}

IL_0019:
	{
		RuntimeObject* L_3 = __this->___runnerPromise;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_4 = ___0_result;
		NullCheck(L_3);
		InterfaceActionInvoker1< Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 >::Invoke(2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
	}

IL_0028:
	{
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m668B0B683F2B4B7005D076DE9400F32B1702673B_gshared_inline (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m79D800118F9BCD740C939B134E630A8AB93AA606_gshared_inline (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* __this, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___0_result, const RuntimeMethod* method) 
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
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_2 = ___0_result;
		__this->___result = L_2;
		goto IL_0028;
	}

IL_0019:
	{
		RuntimeObject* L_3 = __this->___runnerPromise;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_4 = ___0_result;
		NullCheck(L_3);
		InterfaceActionInvoker1< Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 >::Invoke(2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
	}

IL_0028:
	{
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_gshared_inline (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_gshared_inline (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* __this, int32_t ___0_result, const RuntimeMethod* method) 
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
		int32_t L_2 = ___0_result;
		__this->___result = L_2;
		goto IL_0028;
	}

IL_0019:
	{
		RuntimeObject* L_3 = __this->___runnerPromise;
		int32_t L_4 = ___0_result;
		NullCheck(L_3);
		InterfaceActionInvoker1< int32_t >::Invoke(2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
	}

IL_0028:
	{
		return;
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
