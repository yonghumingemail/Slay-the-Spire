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
template <typename R, typename T1>
struct VirtualFuncInvoker1Invoker;
template <typename R, typename T1>
struct VirtualFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
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
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct U3CComputeKeysAsyncU3Ed__6_t05F7E082AD91DEFE2013D21589463D5F7112880B;
struct U3CComputeKeysAsyncU3Ed__7_t83EF08CF36301999BB89CDD0FCC73050D402AF5E;
struct U3CConcatIteratorU3Ed__59_1_tD9D477DEE32E1B031B3CAC6DFC6BA3E1A542317F;
struct U3CConsumeAllU3Ed__10_tFB1157CEA1D45D775B8AEC194C943DAB24B242C9;
struct U3CConsumeEnumeratorU3Ed__7_tDE615CB78260934B3BC38AC5EA5DC59891F2EE45;
struct U3CConsumeEnumeratorU3Ed__8_t5574F9D88DE605598642C11E1A5A65987359B2FC;
struct U3CContainsAsyncU3Ed__0_1_t1AD73E4858CE144ECF35A6093C886D4681473EE2;
struct U3CContinueWithU3Ed__54_1_tD0D37E8AA6D35EEB7B61C173B67342626DFE4FB8;
struct U3CContinueWithU3Ed__55_1_t53E0E39563FC69851BAB6B3B3BA7B4FDAA61950F;
struct U3CContinueWithU3Ed__56_2_t5BFF82E4C4260878AD209EB58142358B213FF7FC;
struct U3CContinueWithU3Ed__57_2_t683DABF100C962A48190A893689C5CBBBF3317B4;
struct U3CContinueWithU3Ed__60_1_t00A582DE27BE6086D3507289DB20E974D8C3F0F6;
struct U3CContinueWithU3Ed__61_1_tC8BE8753CEE7AFABC9AE1B27EAB8ABE8A9F85AA5;
struct U3CCountAsyncU3Ed__0_1_t1B3F667604D233DFA8519E75F1ADAD93C9E46CD6;
struct U3CCountAsyncU3Ed__1_1_t40DB3FBC2BFC853EBF4815B21403CBDD16C7C98A;
struct U3CCountAwaitAsyncU3Ed__2_1_t287315198B91FA723973B7E1F763E526C60C14C7;
struct U3CCountAwaitWithCancellationAsyncU3Ed__3_1_tE27B9C445E0CC8458525CC3EA335D3CA6BC36113;
struct U3CCreateAsyncU3Ed__6_t2A7AD0388339CB1C21AA28B337F57D32A5F3892F;
struct U3CCreateAsyncU3Ed__7_1_tE29DB9CBD0DF6878F31E81C972C45F100EDF5FD5;
struct U3CCreateAsyncU3Ed__8_t0C64F4FE57A9C75AD5210AE14D784610D48E95DA;
struct U3CCreateAsyncU3Ed__9_1_t8D857D642EC297DA25800C7CE32606608FB31681;
struct U3CCreateInnerHashSetU3Ed__20_t1C56D471A9F8D74323CBEAB683B030C706473649;
struct U3CCreateInnerHashSetU3Ed__24_t4F6BC8B7F57F2F2F58D85E1E7E69238304C20E83;
struct U3CCreateInnerHashSetU3Ed__24_t8988A92676D7D3C0966EA74E342C1C197132A9A9;
struct U3CCreateLookupU3Ed__12_t9B1FBFFEF24CF6EF91DF65A99C2623F65D07CAC6;
struct U3CCreateLookupU3Ed__12_t4279811B8BECB2C54D94A4B9C62D6DE6C1B47099;
struct U3CCreateLookupU3Ed__12_t255CBAF26A869773CBEB063E3CCBEF9ECE0AB18A;
struct U3CCreateLookupU3Ed__13_t1E15D58CD37A11C240299F73CD31787ACFE1F0C3;
struct U3CCreateLookupU3Ed__15_t243B512786DD88119A935BB8ED1B9B645CB16FBB;
struct U3CCreateLookupU3Ed__15_tA4E5BADCF7A0DE68CB37A6CC47700505A62221F0;
struct U3CCreateLookupU3Ed__17_tCF191A09107DCE70D8B2B5BABBB95217D96CFB35;
struct U3CCreateLookupU3Ed__22_t117204D4DCCB155E1400E8E552A4C316016FD73F;
struct U3CCreateLookupU3Ed__22_t52FEE97F9E84A95DF02A8DD82869F7CF441FA381;
struct U3CCreateSortSourceU3Ed__11_tE37775A1D7E4D9D536C4E9E086D8647565BC3A28;
struct U3CDefaultIfEmptyIteratorU3Ed__95_1_t6FBABBB9FB21D2096813D56B80A09AAFE8E11EBD;
struct U3CDepthFirstTraversalOfTypeU3Ed__86_1_t39CB7AE01B1B7DE8D693608B77B395D20B2D9A71;
struct U3CDepthFirstTraversalOfTypeU3Ed__86_1_tF362322B92CA850368B354C1AD0FD4AB371CAFA5;
struct U3CDisposeAsyncU3Ed__107_tD04CC1D80F31D2D929A97B0686DF8DA8FC71CB10;
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
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
struct AsyncEnumerableSorter_1_tB12E111BEE1BE3928D42C95E823E309905F94836;
struct AsyncSelectorWithCancellationEnumerableSorter_2_tEA4F3B707024ACFA35A53FBC2CE88D64E9C59EA7;
struct ChannelReader_1_tE4C2ED9FCB41C91487968797823CEF77B1CF781E;
struct ChannelReader_1_t2ECD38FFB796290865D3F1EAC478976ECBD61318;
struct ChannelWriter_1_tFA8B6F723BEB7DA7FFD8372A38D21E89F5A2E7D9;
struct ChannelWriter_1_t1209690B768C24565769C0EC929D8E49E3C09877;
struct Channel_1_t54EA6F93BD0DB668227D2390918ED6CFA7C02A80;
struct Channel_1_t196AC538B8F832BAE1683ED47BFBECF0CC815252;
struct Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF;
struct Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C;
struct Enumerator_t15FA1624E3BE0AC1F3A918185439A63138D413F4;
struct Func_1_tBAE452E06E04175D6A1F37BAA4412688F5DBD769;
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431;
struct Func_13_tE101A692FD4236AF4A000F671236FB217F1D07EA;
struct Func_14_t832E7C41FBD1EA2EB64BB25F9998F63A0BB0DC05;
struct Func_15_tFDDF27082827311281C23A24DC1AA2B68498702D;
struct Func_16_t85C77A6ADF6A16E184BCE73A1B6011F4D7217BBD;
struct Func_2_t84BAF71E391705D6E17965340D139A05C9BFF4A0;
struct Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C;
struct Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2;
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
struct Func_2_tB9800595B3251D2492E40667A6C05061784D48FB;
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
struct Func_3_t553B3B84157D8B6CC58EEDFFDD56DE456A4B18A5;
struct Func_3_tA7E06E01A9E24ADCFD5FDF90F63DB44745325DB6;
struct Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814;
struct Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E;
struct Func_3_tF6C1103031BE014E11B9FAB50F2B76FD767638EE;
struct Func_3_t025EADE05AD46B78D6372153E7AB6141B48C6D40;
struct Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4;
struct Func_4_t7C491DFD27D80B8CF4B5AD712FB3F26041581471;
struct Func_4_tACF12340039B5BCFBB5ED953C0B2BF68B8F74D25;
struct Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD;
struct IComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA;
struct IEnumerable_1_tC98E76738AF0A72F03879344D977819749AF8DB0;
struct IEnumerable_1_tB526EBFC83BD70FAB543DE8DE30AD8D729CC0E4D;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_tF742E85673756F0B02FF588D4DD8B832677FA339;
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
struct IEnumerator_1_tA2E0B454CD5402DE9DA3E98624BD4F0A37A46AD6;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IGrouping_2_t6485033266F07DCCDEBAFAEBC5894E6A5F04989C;
struct ILookup_2_t7643E95E6C6A7B6C76A169909706381F742FAD91;
struct IStateMachineRunnerPromise_1_t7F4FDD8FCD48C309B4A4285A908F22FB906FC801;
struct IStateMachineRunnerPromise_1_tE89ECD2876CAE5961DE51F0E207D9EE40476C855;
struct IStateMachineRunnerPromise_1_t4D71EE585F49FBECBCB54253A802F3C93921778B;
struct IStateMachineRunnerPromise_1_t33359314377828B79D5AB55278350F65F2237DD9;
struct ITriggerHandler_1_t53BCC826B29B27388A8A63C9E80F17313AB22E2C;
struct IUniTaskAsyncEnumerable_1_tB465D2725680B21CF3074178AECADD1D24C24A74;
struct IUniTaskAsyncEnumerator_1_t821F594EE7A9A9AD50A4AD8E2BCA1FDC7F4D9FDC;
struct IUniTaskAsyncEnumerator_1_t256C7409E6B13FF3224A57D2DD1A4D52A2C40092;
struct IUniTaskSource_1_t99E76DE33D8FCF842C124AFBF69A7D7CBC9F9A37;
struct IUniTaskSource_1_t73D353340306AF280806C94D5F68012B593AD1E2;
struct IUniTaskSource_1_tD2881AEFFB4C46DFAB665B8E6A2D8B0957ECBACC;
struct IUniTaskSource_1_tB6B218F9BB467453A6CBAEE053820D3B3E8F891C;
struct IUniTaskSource_1_tDC639FD163E4613AFE1D3F2749CA5B177DC702F5;
struct IUniTaskSource_1_tA27C284FF17E3AAB5B5D07A7E4DE207B56F764AB;
struct KeyCollection_tE53001EC275D55E29356668BAC393C766E05ED55;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_tB2C6D4B4157C82CB21F3F38699A0DB89617A0645;
struct List_1_tD3D747E0D515CE6C8FA445F30223785AFEA65813;
struct List_1_t0ED5DB81DE0D43C5B1FADC6B861B3F3EAC459ABB;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F;
struct List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF;
struct List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485;
struct Lookup_2_t578DFDDA13AC7D1AE589489B483A819824BFB703;
struct OrderedAsyncEnumerable_1_t2D0E5E8D745681DE86B1F1335B815A354DD1F373;
struct Publish_1_tF4C3835092EF34C1E4B6D4FFCCBBB6FF76918965;
struct Queue_1_tB71496D5BB569A08499E4DD743B80E80679BD01F;
struct ReadOnlyAsyncReactiveProperty_1_tB7349A20B00D8047434C5CDE4CB7EC263380B1E9;
struct SyncSelectorAsyncEnumerableSorter_2_tC80A112E82BEADDBEA5613561DBBCC5544867AA0;
struct ValueCollection_tB3DFA8CA7643041B67240FCAFE60E8B8DF8C69C2;
struct _CombineLatest_t140C724924F9D574B2C92DB7FA4E398102F083FC;
struct _CombineLatest_t6CC2B27A82E42CA6E1A599EA5F4E0079CBA6AEA7;
struct _CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0;
struct _CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09;
struct _CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA;
struct _GroupBy_t8D488B8D809A5FD9DFDCDF04A872BB73FE238224;
struct _GroupBy_tDE775CC0DFFFA50E17CB88EEDFE3239F9B89BAB3;
struct _GroupByAwait_tEDF064FED26670CF693F54177C09CA52A8D4D84F;
struct _GroupByAwait_t875670920DFAF93150B1D58C4DCE41A5247EDF57;
struct _GroupByAwaitWithCancellation_tFC36FE8CD3108D1F603A71C78CCFC1432D72AE8A;
struct _GroupByAwaitWithCancellation_t5CC459EB7122BFBA5314A46D6838F75D56E4DF99;
struct _GroupJoin_t734D3302E218D4ECE12303A6CF715BDD63386431;
struct _GroupJoinAwait_t0BCE0F1B4A33E3F3CA25EE17EAB7464F6A19A651;
struct _GroupJoinAwaitWithCancellation_tC2259281E375832F749FBE2646A414525A72B39D;
struct _Join_t2B08BE3F971A67950398FE1A19975D847E43E6DD;
struct _JoinAwait_t939A4D66861F2D36F05248D774DAA0F6B1A9FC18;
struct _JoinAwaitWithCancellation_t93DC76FB4125B8A8802BC513685E8FADBF00DD45;
struct _Merge_t1C2BA075B2CB4F56D213F2DD8A75FBF12D2F1F66;
struct _OrderedAsyncEnumerator_tE95008AEB4F55AFA2DE331CCD81FBAC9638B7A63;
struct _Queue_tECDD01C33751DFE4942831EF0C7D9FB09C499871;
struct _SelectMany_t5F0438964D43258A2404AE58C3E6CF2F6A05294A;
struct _Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622;
struct _ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE;
struct _ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD;
struct EntryU5BU5D_t3F873D6B83BB3F6D8139C1573A939FF3818DEF54;
struct IUniTaskAsyncEnumerator_1U5BU5D_t74C60CA0A3609180188EC969FD53DDB39021A752;
struct MergeSourceStateU5BU5D_tB7812B44FA052830FF047FF969B894E7A33C7B63;
struct MinimumQueue_1U5BU5D_tE16F7898DFAEB90D2149852F6D7F0100867C311F;
struct MinimumQueue_1U5BU5D_tBBD328725F04A9EA5D6D9D8102F82B63D7E69F59;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct SpinLockU5BU5D_tC91183DF6C9CC1830ADAA8476AC2819F1433A5E7;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Exception_t;
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148;
struct IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B;
struct IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D;
struct MethodInfo_t;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428;
struct UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A;
struct VisualElementAsset_t558B207D551F8C727D1CD0F443F7211D095C3FA9;
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tB526EBFC83BD70FAB543DE8DE30AD8D729CC0E4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tA2E0B454CD5402DE9DA3E98624BD4F0A37A46AD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_m58A82551C6D037CFF5E62E436BCC9E01A7B68E15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_mB0A28B7856D62D6CAACC58520DB7146F4F20902D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_m6153FD0524F5E68CFF73D2DA3C404F8A24AA62AA_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct IUniTaskAsyncEnumerator_1U5BU5D_t74C60CA0A3609180188EC969FD53DDB39021A752;
struct MergeSourceStateU5BU5D_tB7812B44FA052830FF047FF969B894E7A33C7B63;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CConcatIteratorU3Ed__59_1_tD9D477DEE32E1B031B3CAC6DFC6BA3E1A542317F : public RuntimeObject {};
struct U3CDefaultIfEmptyIteratorU3Ed__95_1_t6FBABBB9FB21D2096813D56B80A09AAFE8E11EBD : public RuntimeObject {};
struct U3CDepthFirstTraversalOfTypeU3Ed__86_1_t39CB7AE01B1B7DE8D693608B77B395D20B2D9A71  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	int32_t ___U3CU3El__initialThreadId;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___U3CU3E4__this;
	RuntimeObject* ___U3CU3E7__wrap1;
};
struct U3CDepthFirstTraversalOfTypeU3Ed__86_1_tF362322B92CA850368B354C1AD0FD4AB371CAFA5 : public RuntimeObject {};
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
struct AsyncEnumerableSorter_1_tB12E111BEE1BE3928D42C95E823E309905F94836  : public RuntimeObject
{
};
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
struct Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t3F873D6B83BB3F6D8139C1573A939FF3818DEF54* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tE53001EC275D55E29356668BAC393C766E05ED55* ____keys;
	ValueCollection_tB3DFA8CA7643041B67240FCAFE60E8B8DF8C69C2* ____values;
	RuntimeObject* ____syncRoot;
};
struct Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD : public RuntimeObject {};
struct Lookup_2_t578DFDDA13AC7D1AE589489B483A819824BFB703  : public RuntimeObject
{
	Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C* ___dict;
};
struct OrderedAsyncEnumerable_1_t2D0E5E8D745681DE86B1F1335B815A354DD1F373  : public RuntimeObject
{
	RuntimeObject* ___source;
};
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757  : public RuntimeObject
{
	Exception_t* ___m_Exception;
	RuntimeObject* ___m_stackTrace;
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
struct ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____array;
	int32_t ____offset;
	int32_t ____count;
};
struct AsyncUniTaskMethodBuilder_1_tC4D6EED0D569FD53BACBD70A8EB0AF3AC98A3208 
{
	RuntimeObject* ___runnerPromise;
	Exception_t* ___ex;
	Lookup_2_t578DFDDA13AC7D1AE589489B483A819824BFB703* ___result;
	RuntimeObject* ___debuggingId;
};
struct AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 
{
	RuntimeObject* ___runnerPromise;
	Exception_t* ___ex;
	bool ___result;
	RuntimeObject* ___debuggingId;
};
struct AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E 
{
	RuntimeObject* ___runnerPromise;
	Exception_t* ___ex;
	int32_t ___result;
	RuntimeObject* ___debuggingId;
};
typedef Il2CppFullySharedGenericStruct AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52;
struct Channel_1_t54EA6F93BD0DB668227D2390918ED6CFA7C02A80  : public Channel_2_t45849CB0DDFE22F6DE89A3AEC42C6041EF634A9D
{
};
struct Channel_1_t196AC538B8F832BAE1683ED47BFBECF0CC815252  : public Channel_2_t063677A10473E8126C159B5E3FC31FB43E1122A7
{
};
struct SyncSelectorAsyncEnumerableSorter_2_tC80A112E82BEADDBEA5613561DBBCC5544867AA0  : public AsyncEnumerableSorter_1_tB12E111BEE1BE3928D42C95E823E309905F94836
{
	Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___keySelector;
	RuntimeObject* ___comparer;
	bool ___descending;
	AsyncEnumerableSorter_1_tB12E111BEE1BE3928D42C95E823E309905F94836* ___next;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___keys;
};
struct TriggerEvent_1_t4D603DB487DB30F0FBD2EE01A6AF71CA4F4476E0 
{
	RuntimeObject* ___head;
	RuntimeObject* ___iteratingHead;
	RuntimeObject* ___iteratingNode;
};
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
struct UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 
{
	RuntimeObject* ___source;
	RuntimeObject* ___result;
	int16_t ___token;
};
struct UniTask_1_t2C72A70EFDBF65F178685DE3BA64E3103AB12EB9 
{
	RuntimeObject* ___source;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___result;
	int16_t ___token;
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
struct UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 
{
	RuntimeObject* ___source;
	RuntimeObject* ___result;
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
struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 
{
	RuntimeObject* ___source;
	int16_t ___token;
};
struct UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B 
{
	String_t* ___prefix;
	String_t* ___resolvedNamespace;
};
struct UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B_marshaled_pinvoke
{
	char* ___prefix;
	char* ___resolvedNamespace;
};
struct UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B_marshaled_com
{
	Il2CppChar* ___prefix;
	Il2CppChar* ___resolvedNamespace;
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
struct AsyncSelectorWithCancellationEnumerableSorter_2_tEA4F3B707024ACFA35A53FBC2CE88D64E9C59EA7  : public AsyncEnumerableSorter_1_tB12E111BEE1BE3928D42C95E823E309905F94836
{
	Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E* ___keySelector;
	RuntimeObject* ___comparer;
	bool ___descending;
	AsyncEnumerableSorter_1_tB12E111BEE1BE3928D42C95E823E309905F94836* ___next;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___keys;
};
struct Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 
{
	UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 ___task;
};
struct Awaiter_tDDA9C37E31FF3B86EA8F52785A4D13E171A98A1B 
{
	UniTask_1_t2C72A70EFDBF65F178685DE3BA64E3103AB12EB9 ___task;
};
struct Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C 
{
	UniTask_1_tF1161044B03B89C690A1FB77CF673B0EDEE8B5BD ___task;
};
struct Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 
{
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 ___task;
};
struct Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 
{
	UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 ___task;
};
typedef Il2CppFullySharedGenericStruct Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C;
struct MergeSourceState_t6578EE0635EFE21DED16CA6FB2A21EFA1DC03E69 
{
	int32_t ___value__;
};
struct Publish_1_tF4C3835092EF34C1E4B6D4FFCCBBB6FF76918965  : public RuntimeObject
{
	RuntimeObject* ___source;
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___cancellationTokenSource;
	TriggerEvent_1_t4D603DB487DB30F0FBD2EE01A6AF71CA4F4476E0 ___trigger;
	RuntimeObject* ___enumerator;
	RuntimeObject* ___connectedDisposable;
	bool ___isCompleted;
};
struct ReadOnlyAsyncReactiveProperty_1_tB7349A20B00D8047434C5CDE4CB7EC263380B1E9 : public RuntimeObject {};
struct _Queue_tECDD01C33751DFE4942831EF0C7D9FB09C499871  : public RuntimeObject
{
	RuntimeObject* ___source;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	Channel_1_t196AC538B8F832BAE1683ED47BFBECF0CC815252* ___channel;
	RuntimeObject* ___channelEnumerator;
	RuntimeObject* ___sourceEnumerator;
	bool ___channelClosed;
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
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct PlayerLoopTiming_tA0561E77DCF3749CC535F4F45642F515BDF040C2 
{
	int32_t ___value__;
};
struct UniTaskStatus_tC898C29839EBB5DB7055C3DF299A2C276237CB70 
{
	int32_t ___value__;
};
struct UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A  : public RuntimeObject
{
	String_t* ___m_FullTypeName;
	UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B ___m_XmlNamespace;
	int32_t ___m_Id;
	UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A* ___m_Parent;
	List_1_tB2C6D4B4157C82CB21F3F38699A0DB89617A0645* ___m_Children;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___m_VisualTreeAsset;
	List_1_tD3D747E0D515CE6C8FA445F30223785AFEA65813* ___m_NamespaceDefinitions;
	List_1_t0ED5DB81DE0D43C5B1FADC6B861B3F3EAC459ABB* ___m_Properties;
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
struct U3CComputeKeysAsyncU3Ed__6_t05F7E082AD91DEFE2013D21589463D5F7112880B  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___elements;
	int32_t ___count;
	SyncSelectorAsyncEnumerableSorter_2_tC80A112E82BEADDBEA5613561DBBCC5544867AA0* ___U3CU3E4__this;
	int32_t ___U3CiU3E5__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CComputeKeysAsyncU3Ed__7_t83EF08CF36301999BB89CDD0FCC73050D402AF5E : public RuntimeObject {};
struct U3CConsumeAllU3Ed__10_tFB1157CEA1D45D775B8AEC194C943DAB24B242C9  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B ___U3CU3Et__builder;
	_Queue_tECDD01C33751DFE4942831EF0C7D9FB09C499871* ___self;
	RuntimeObject* ___enumerator;
	ChannelWriter_1_t1209690B768C24565769C0EC929D8E49E3C09877* ___writer;
	RuntimeObject* ___U3CU3Es__1;
	int32_t ___U3CU3Es__2;
	bool ___U3CU3Es__3;
	Exception_t* ___U3CexU3E5__4;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CConsumeEnumeratorU3Ed__7_tDE615CB78260934B3BC38AC5EA5DC59891F2EE45 : public RuntimeObject {};
struct U3CConsumeEnumeratorU3Ed__8_t5574F9D88DE605598642C11E1A5A65987359B2FC  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B ___U3CU3Et__builder;
	Publish_1_tF4C3835092EF34C1E4B6D4FFCCBBB6FF76918965* ___U3CU3E4__this;
	RuntimeObject* ___U3CU3Es__1;
	int32_t ___U3CU3Es__2;
	bool ___U3CU3Es__3;
	Exception_t* ___U3CexU3E5__4;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CContainsAsyncU3Ed__0_1_t1AD73E4858CE144ECF35A6093C886D4681473EE2 : public RuntimeObject {};
struct U3CContinueWithU3Ed__54_1_tD0D37E8AA6D35EEB7B61C173B67342626DFE4FB8 : public RuntimeObject {};
struct U3CContinueWithU3Ed__55_1_t53E0E39563FC69851BAB6B3B3BA7B4FDAA61950F : public RuntimeObject {};
struct U3CContinueWithU3Ed__56_2_t5BFF82E4C4260878AD209EB58142358B213FF7FC : public RuntimeObject {};
struct U3CContinueWithU3Ed__57_2_t683DABF100C962A48190A893689C5CBBBF3317B4 : public RuntimeObject {};
struct U3CContinueWithU3Ed__60_1_t00A582DE27BE6086D3507289DB20E974D8C3F0F6 : public RuntimeObject {};
struct U3CContinueWithU3Ed__61_1_tC8BE8753CEE7AFABC9AE1B27EAB8ABE8A9F85AA5 : public RuntimeObject {};
struct U3CCountAsyncU3Ed__0_1_t1B3F667604D233DFA8519E75F1ADAD93C9E46CD6  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E ___U3CU3Et__builder;
	RuntimeObject* ___source;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	int32_t ___U3CcountU3E5__1;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3Es__3;
	int32_t ___U3CU3Es__4;
	bool ___U3CU3Es__5;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CCountAsyncU3Ed__1_1_t40DB3FBC2BFC853EBF4815B21403CBDD16C7C98A  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	int32_t ___U3CcountU3E5__1;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3Es__3;
	int32_t ___U3CU3Es__4;
	bool ___U3CU3Es__5;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CCountAwaitAsyncU3Ed__2_1_t287315198B91FA723973B7E1F763E526C60C14C7  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C* ___predicate;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	int32_t ___U3CcountU3E5__1;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3Es__3;
	int32_t ___U3CU3Es__4;
	bool ___U3CU3Es__5;
	bool ___U3CU3Es__6;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CCountAwaitWithCancellationAsyncU3Ed__3_1_tE27B9C445E0CC8458525CC3EA335D3CA6BC36113  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814* ___predicate;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	int32_t ___U3CcountU3E5__1;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3Es__3;
	int32_t ___U3CU3Es__4;
	bool ___U3CU3Es__5;
	bool ___U3CU3Es__6;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CCreateAsyncU3Ed__6_t2A7AD0388339CB1C21AA28B337F57D32A5F3892F : public RuntimeObject {};
struct U3CCreateAsyncU3Ed__7_1_tE29DB9CBD0DF6878F31E81C972C45F100EDF5FD5 : public RuntimeObject {};
struct U3CCreateAsyncU3Ed__8_t0C64F4FE57A9C75AD5210AE14D784610D48E95DA : public RuntimeObject {};
struct U3CCreateAsyncU3Ed__9_1_t8D857D642EC297DA25800C7CE32606608FB31681 : public RuntimeObject {};
struct U3CCreateInnerHashSetU3Ed__20_t1C56D471A9F8D74323CBEAB683B030C706473649  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B ___U3CU3Et__builder;
	_Join_t2B08BE3F971A67950398FE1A19975D847E43E6DD* ___U3CU3E4__this;
	RuntimeObject* ___U3CU3Es__1;
	Exception_t* ___U3CexU3E5__2;
	Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 ___U3CU3Eu__1;
};
struct U3CCreateInnerHashSetU3Ed__24_t4F6BC8B7F57F2F2F58D85E1E7E69238304C20E83  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B ___U3CU3Et__builder;
	_JoinAwaitWithCancellation_t93DC76FB4125B8A8802BC513685E8FADBF00DD45* ___U3CU3E4__this;
	RuntimeObject* ___U3CU3Es__1;
	Exception_t* ___U3CexU3E5__2;
	Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 ___U3CU3Eu__1;
};
struct U3CCreateInnerHashSetU3Ed__24_t8988A92676D7D3C0966EA74E342C1C197132A9A9  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B ___U3CU3Et__builder;
	_JoinAwait_t939A4D66861F2D36F05248D774DAA0F6B1A9FC18* ___U3CU3E4__this;
	RuntimeObject* ___U3CU3Es__1;
	Exception_t* ___U3CexU3E5__2;
	Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 ___U3CU3Eu__1;
};
struct U3CCreateLookupU3Ed__12_t9B1FBFFEF24CF6EF91DF65A99C2623F65D07CAC6  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B ___U3CU3Et__builder;
	_GroupByAwaitWithCancellation_tFC36FE8CD3108D1F603A71C78CCFC1432D72AE8A* ___U3CU3E4__this;
	RuntimeObject* ___U3ClookupU3E5__1;
	RuntimeObject* ___U3CU3Es__2;
	Exception_t* ___U3CexU3E5__3;
	Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 ___U3CU3Eu__1;
};
struct U3CCreateLookupU3Ed__12_t4279811B8BECB2C54D94A4B9C62D6DE6C1B47099  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B ___U3CU3Et__builder;
	_GroupByAwait_tEDF064FED26670CF693F54177C09CA52A8D4D84F* ___U3CU3E4__this;
	RuntimeObject* ___U3ClookupU3E5__1;
	RuntimeObject* ___U3CU3Es__2;
	Exception_t* ___U3CexU3E5__3;
	Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 ___U3CU3Eu__1;
};
struct U3CCreateLookupU3Ed__12_t255CBAF26A869773CBEB063E3CCBEF9ECE0AB18A  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B ___U3CU3Et__builder;
	_GroupBy_t8D488B8D809A5FD9DFDCDF04A872BB73FE238224* ___U3CU3E4__this;
	RuntimeObject* ___U3ClookupU3E5__1;
	RuntimeObject* ___U3CU3Es__2;
	Exception_t* ___U3CexU3E5__3;
	Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 ___U3CU3Eu__1;
};
struct U3CCreateLookupU3Ed__13_t1E15D58CD37A11C240299F73CD31787ACFE1F0C3  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B ___U3CU3Et__builder;
	_GroupBy_tDE775CC0DFFFA50E17CB88EEDFE3239F9B89BAB3* ___U3CU3E4__this;
	RuntimeObject* ___U3ClookupU3E5__1;
	RuntimeObject* ___U3CU3Es__2;
	Exception_t* ___U3CexU3E5__3;
	Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 ___U3CU3Eu__1;
};
struct U3CCreateLookupU3Ed__15_t243B512786DD88119A935BB8ED1B9B645CB16FBB  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B ___U3CU3Et__builder;
	_GroupByAwaitWithCancellation_t5CC459EB7122BFBA5314A46D6838F75D56E4DF99* ___U3CU3E4__this;
	RuntimeObject* ___U3ClookupU3E5__1;
	RuntimeObject* ___U3CU3Es__2;
	Exception_t* ___U3CexU3E5__3;
	Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 ___U3CU3Eu__1;
};
struct U3CCreateLookupU3Ed__15_tA4E5BADCF7A0DE68CB37A6CC47700505A62221F0  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B ___U3CU3Et__builder;
	_GroupByAwait_t875670920DFAF93150B1D58C4DCE41A5247EDF57* ___U3CU3E4__this;
	RuntimeObject* ___U3ClookupU3E5__1;
	RuntimeObject* ___U3CU3Es__2;
	Exception_t* ___U3CexU3E5__3;
	Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 ___U3CU3Eu__1;
};
struct U3CCreateLookupU3Ed__17_tCF191A09107DCE70D8B2B5BABBB95217D96CFB35  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B ___U3CU3Et__builder;
	_GroupJoin_t734D3302E218D4ECE12303A6CF715BDD63386431* ___U3CU3E4__this;
	RuntimeObject* ___U3CU3Es__1;
	Exception_t* ___U3CexU3E5__2;
	Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 ___U3CU3Eu__1;
};
struct U3CCreateLookupU3Ed__22_t117204D4DCCB155E1400E8E552A4C316016FD73F  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B ___U3CU3Et__builder;
	_GroupJoinAwaitWithCancellation_tC2259281E375832F749FBE2646A414525A72B39D* ___U3CU3E4__this;
	RuntimeObject* ___U3CU3Es__1;
	Exception_t* ___U3CexU3E5__2;
	Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 ___U3CU3Eu__1;
};
struct U3CCreateLookupU3Ed__22_t52FEE97F9E84A95DF02A8DD82869F7CF441FA381  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B ___U3CU3Et__builder;
	_GroupJoinAwait_t0BCE0F1B4A33E3F3CA25EE17EAB7464F6A19A651* ___U3CU3E4__this;
	RuntimeObject* ___U3CU3Es__1;
	Exception_t* ___U3CexU3E5__2;
	Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 ___U3CU3Eu__1;
};
struct U3CCreateSortSourceU3Ed__11_tE37775A1D7E4D9D536C4E9E086D8647565BC3A28  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B ___U3CU3Et__builder;
	_OrderedAsyncEnumerator_tE95008AEB4F55AFA2DE331CCD81FBAC9638B7A63* ___U3CU3E4__this;
	AsyncEnumerableSorter_1_tB12E111BEE1BE3928D42C95E823E309905F94836* ___U3CsorterU3E5__1;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___U3CU3Es__2;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CU3Es__3;
	Exception_t* ___U3CexU3E5__4;
	Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C ___U3CU3Eu__1;
	Awaiter_tDDA9C37E31FF3B86EA8F52785A4D13E171A98A1B ___U3CU3Eu__2;
};
struct U3CDisposeAsyncU3Ed__107_tD04CC1D80F31D2D929A97B0686DF8DA8FC71CB10  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_CombineLatest_t6CC2B27A82E42CA6E1A599EA5F4E0079CBA6AEA7* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
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
struct Enumerator_t15FA1624E3BE0AC1F3A918185439A63138D413F4  : public RuntimeObject
{
	RuntimeObject* ___source;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	Channel_1_t54EA6F93BD0DB668227D2390918ED6CFA7C02A80* ___channel;
	RuntimeObject* ___channelEnumerator;
	int32_t ___completeCount;
	uint8_t ___state;
};
struct _CombineLatest_t140C724924F9D574B2C92DB7FA4E398102F083FC : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_t6CC2B27A82E42CA6E1A599EA5F4E0079CBA6AEA7 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _GroupBy_t8D488B8D809A5FD9DFDCDF04A872BB73FE238224  : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5
{
	RuntimeObject* ___source;
	Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___keySelector;
	Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___elementSelector;
	RuntimeObject* ___comparer;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	RuntimeObject* ___groupEnumerator;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct _GroupBy_tDE775CC0DFFFA50E17CB88EEDFE3239F9B89BAB3 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _GroupByAwait_tEDF064FED26670CF693F54177C09CA52A8D4D84F  : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5
{
	RuntimeObject* ___source;
	Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2* ___keySelector;
	Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2* ___elementSelector;
	RuntimeObject* ___comparer;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	RuntimeObject* ___groupEnumerator;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct _GroupByAwait_t875670920DFAF93150B1D58C4DCE41A5247EDF57 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _GroupByAwaitWithCancellation_tFC36FE8CD3108D1F603A71C78CCFC1432D72AE8A  : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5
{
	RuntimeObject* ___source;
	Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E* ___keySelector;
	Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E* ___elementSelector;
	RuntimeObject* ___comparer;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	RuntimeObject* ___groupEnumerator;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct _GroupByAwaitWithCancellation_t5CC459EB7122BFBA5314A46D6838F75D56E4DF99 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _GroupJoin_t734D3302E218D4ECE12303A6CF715BDD63386431 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _GroupJoinAwait_t0BCE0F1B4A33E3F3CA25EE17EAB7464F6A19A651 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _GroupJoinAwaitWithCancellation_tC2259281E375832F749FBE2646A414525A72B39D : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _Join_t2B08BE3F971A67950398FE1A19975D847E43E6DD : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _JoinAwait_t939A4D66861F2D36F05248D774DAA0F6B1A9FC18 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _JoinAwaitWithCancellation_t93DC76FB4125B8A8802BC513685E8FADBF00DD45 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _Merge_t1C2BA075B2CB4F56D213F2DD8A75FBF12D2F1F66 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _OrderedAsyncEnumerator_tE95008AEB4F55AFA2DE331CCD81FBAC9638B7A63 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _SelectMany_t5F0438964D43258A2404AE58C3E6CF2F6A05294A : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
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
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};
struct Func_1_tBAE452E06E04175D6A1F37BAA4412688F5DBD769  : public MulticastDelegate_t
{
};
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431  : public MulticastDelegate_t
{
};
struct Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C  : public MulticastDelegate_t
{
};
struct Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2  : public MulticastDelegate_t
{
};
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};
struct Func_2_tB9800595B3251D2492E40667A6C05061784D48FB  : public MulticastDelegate_t
{
};
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};
struct Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814  : public MulticastDelegate_t
{
};
struct Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E  : public MulticastDelegate_t
{
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ____cancellationToken;
};
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	bool ___m_ImportedWithErrors;
	bool ___m_HasEditorElements;
	bool ___m_HasUpdatedUrls;
	bool ___m_ImportedWithWarnings;
	List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* ___m_Usings;
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___inlineSheet;
	VisualElementAsset_t558B207D551F8C727D1CD0F443F7211D095C3FA9* ___m_VisualTree;
	List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* ___m_AssetEntries;
	List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* ___m_Slots;
	int32_t ___m_ContentContainerId;
	int32_t ___m_ContentHash;
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
struct Lookup_2_t578DFDDA13AC7D1AE589489B483A819824BFB703_StaticFields
{
	Lookup_2_t578DFDDA13AC7D1AE589489B483A819824BFB703* ___empty;
};
struct ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178_StaticFields
{
	ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178 ___U3CEmptyU3Ek__BackingField;
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
struct ReadOnlyAsyncReactiveProperty_1_tB7349A20B00D8047434C5CDE4CB7EC263380B1E9_StaticFields
{
	bool ___isValueType;
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
struct _CombineLatest_t6CC2B27A82E42CA6E1A599EA5F4E0079CBA6AEA7_StaticFields
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
struct _GroupByAwait_t875670920DFAF93150B1D58C4DCE41A5247EDF57_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___ResultSelectCoreDelegate;
};
struct _GroupByAwaitWithCancellation_t5CC459EB7122BFBA5314A46D6838F75D56E4DF99_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___ResultSelectCoreDelegate;
};
struct _GroupJoin_t734D3302E218D4ECE12303A6CF715BDD63386431_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___MoveNextCoreDelegate;
};
struct _GroupJoinAwait_t0BCE0F1B4A33E3F3CA25EE17EAB7464F6A19A651_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___MoveNextCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___ResultSelectCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___OuterKeySelectCoreDelegate;
};
struct _GroupJoinAwaitWithCancellation_tC2259281E375832F749FBE2646A414525A72B39D_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___MoveNextCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___ResultSelectCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___OuterKeySelectCoreDelegate;
};
struct _Join_t2B08BE3F971A67950398FE1A19975D847E43E6DD_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___MoveNextCoreDelegate;
};
struct _JoinAwait_t939A4D66861F2D36F05248D774DAA0F6B1A9FC18_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___MoveNextCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___OuterSelectCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___ResultSelectCoreDelegate;
};
struct _JoinAwaitWithCancellation_t93DC76FB4125B8A8802BC513685E8FADBF00DD45_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___MoveNextCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___OuterSelectCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___ResultSelectCoreDelegate;
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
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB_StaticFields
{
	String_t* ___NoRegisteredFactoryErrorMessage;
	Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF* ___s_TemporarySlotInsertionPoints;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___s_VeaIdsPath;
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
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
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


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_gshared_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_gshared_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, bool ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_gshared_inline (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_gshared_inline (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* __this, int32_t ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_gshared (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, Exception_t* ___0_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_gshared (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, bool ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 UniTask_1_GetAwaiter_m8F3FFCADC2A1177E31B359D162E7784C30F8DC5E_gshared_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m64CB466F8C142312263397E37C6298E842139126_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Awaiter_GetResult_mD47D2D1B93A9A867CBEDAC2D7033F31DBCE10C3B_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDepthFirstTraversalOfTypeU3Ed__86_1_U3CU3Em__Finally1_mCB1CEEB59301FE807E970901ACD0A6C0761B2E38_gshared (U3CDepthFirstTraversalOfTypeU3Ed__86_1_t39CB7AE01B1B7DE8D693608B77B395D20B2D9A71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDepthFirstTraversalOfTypeU3Ed__86_1_System_IDisposable_Dispose_mBD56CC077668B5B6DB4AC7D4F39AE07E43D2C6B2_gshared (U3CDepthFirstTraversalOfTypeU3Ed__86_1_t39CB7AE01B1B7DE8D693608B77B395D20B2D9A71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDepthFirstTraversalOfTypeU3Ed__86_1__ctor_m02EEDBBEA6A39CEF905807939111564C877CA989_gshared (U3CDepthFirstTraversalOfTypeU3Ed__86_1_t39CB7AE01B1B7DE8D693608B77B395D20B2D9A71* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDepthFirstTraversalOfTypeU3Ed__86_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mF28C565FBADE3D30BB0C34FF77FF82E7609A3D08_gshared (U3CDepthFirstTraversalOfTypeU3Ed__86_1_t39CB7AE01B1B7DE8D693608B77B395D20B2D9A71* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mA4F4E868662E0BD80C0BB0E125DEC5A22CEE886E_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_gshared_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803 (Exception_t* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330 (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) ;
inline void AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, bool ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, bool, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_gshared_inline)(__this, ___0_result, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_inline (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_inline (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* __this, int32_t ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, int32_t, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_gshared_inline)(__this, ___0_result, method);
}
inline bool UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6 (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, Exception_t* ___0_error, const RuntimeMethod* method)
{
	return ((  bool (*) (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*, Exception_t*, const RuntimeMethod*))UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_gshared)(__this, ___0_error, method);
}
inline bool UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037 (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, bool ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*, bool, const RuntimeMethod*))UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_gshared)(__this, ___0_result, method);
}
inline Awaiter_tDDA9C37E31FF3B86EA8F52785A4D13E171A98A1B UniTask_1_GetAwaiter_m6153FD0524F5E68CFF73D2DA3C404F8A24AA62AA_inline (UniTask_1_t2C72A70EFDBF65F178685DE3BA64E3103AB12EB9* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_tDDA9C37E31FF3B86EA8F52785A4D13E171A98A1B (*) (UniTask_1_t2C72A70EFDBF65F178685DE3BA64E3103AB12EB9*, const RuntimeMethod*))UniTask_1_GetAwaiter_m8F3FFCADC2A1177E31B359D162E7784C30F8DC5E_gshared_inline)(__this, method);
}
inline bool Awaiter_get_IsCompleted_mB0A28B7856D62D6CAACC58520DB7146F4F20902D_inline (Awaiter_tDDA9C37E31FF3B86EA8F52785A4D13E171A98A1B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_tDDA9C37E31FF3B86EA8F52785A4D13E171A98A1B*, const RuntimeMethod*))Awaiter_get_IsCompleted_m64CB466F8C142312263397E37C6298E842139126_gshared_inline)(__this, method);
}
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Awaiter_GetResult_m58A82551C6D037CFF5E62E436BCC9E01A7B68E15_inline (Awaiter_tDDA9C37E31FF3B86EA8F52785A4D13E171A98A1B* __this, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (Awaiter_tDDA9C37E31FF3B86EA8F52785A4D13E171A98A1B*, const RuntimeMethod*))Awaiter_GetResult_mD47D2D1B93A9A867CBEDAC2D7033F31DBCE10C3B_gshared_inline)(__this, method);
}
inline void U3CDepthFirstTraversalOfTypeU3Ed__86_1_U3CU3Em__Finally1_mCB1CEEB59301FE807E970901ACD0A6C0761B2E38 (U3CDepthFirstTraversalOfTypeU3Ed__86_1_t39CB7AE01B1B7DE8D693608B77B395D20B2D9A71* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDepthFirstTraversalOfTypeU3Ed__86_1_t39CB7AE01B1B7DE8D693608B77B395D20B2D9A71*, const RuntimeMethod*))U3CDepthFirstTraversalOfTypeU3Ed__86_1_U3CU3Em__Finally1_mCB1CEEB59301FE807E970901ACD0A6C0761B2E38_gshared)(__this, method);
}
inline void U3CDepthFirstTraversalOfTypeU3Ed__86_1_System_IDisposable_Dispose_mBD56CC077668B5B6DB4AC7D4F39AE07E43D2C6B2 (U3CDepthFirstTraversalOfTypeU3Ed__86_1_t39CB7AE01B1B7DE8D693608B77B395D20B2D9A71* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDepthFirstTraversalOfTypeU3Ed__86_1_t39CB7AE01B1B7DE8D693608B77B395D20B2D9A71*, const RuntimeMethod*))U3CDepthFirstTraversalOfTypeU3Ed__86_1_System_IDisposable_Dispose_mBD56CC077668B5B6DB4AC7D4F39AE07E43D2C6B2_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualTreeAsset_DepthFirstTraversal_m940C9EA200F4D9EC650E509E323902855EF4323C (VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* __this, const RuntimeMethod* method) ;
inline void U3CDepthFirstTraversalOfTypeU3Ed__86_1__ctor_m02EEDBBEA6A39CEF905807939111564C877CA989 (U3CDepthFirstTraversalOfTypeU3Ed__86_1_t39CB7AE01B1B7DE8D693608B77B395D20B2D9A71* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CDepthFirstTraversalOfTypeU3Ed__86_1_t39CB7AE01B1B7DE8D693608B77B395D20B2D9A71*, int32_t, const RuntimeMethod*))U3CDepthFirstTraversalOfTypeU3Ed__86_1__ctor_m02EEDBBEA6A39CEF905807939111564C877CA989_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline RuntimeObject* U3CDepthFirstTraversalOfTypeU3Ed__86_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mF28C565FBADE3D30BB0C34FF77FF82E7609A3D08 (U3CDepthFirstTraversalOfTypeU3Ed__86_1_t39CB7AE01B1B7DE8D693608B77B395D20B2D9A71* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (U3CDepthFirstTraversalOfTypeU3Ed__86_1_t39CB7AE01B1B7DE8D693608B77B395D20B2D9A71*, const RuntimeMethod*))U3CDepthFirstTraversalOfTypeU3Ed__86_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mF28C565FBADE3D30BB0C34FF77FF82E7609A3D08_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperationCanceledException__ctor_m2F34C3B8AEE2AA6C7EB2BB77AE5E0289101293E4 (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___0_status, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopHelper_AddContinuation_m5B8F03E45A820D91B17CFA56AA93E7444BEC17E0 (int32_t ___0_timing, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_continuation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskScheduler_PublishUnobservedTaskException_m9F6352174ED5654B0A9FB5562B6FF25A788B27D3 (Exception_t* ___0_ex, const RuntimeMethod* method) ;
inline void Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*, const RuntimeMethod*))Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_gshared_inline)(__this, ___0_task, method);
}
inline int32_t UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*, const RuntimeMethod*))UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_gshared_inline)(__this, method);
}
inline void Awaiter__ctor_mA4F4E868662E0BD80C0BB0E125DEC5A22CEE886E_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101*, UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*, const RuntimeMethod*))Awaiter__ctor_mA4F4E868662E0BD80C0BB0E125DEC5A22CEE886E_gshared_inline)(__this, ___0_task, method);
}
inline int32_t UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*, const RuntimeMethod*))UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_gshared_inline)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CComputeKeysAsyncU3Ed__6__ctor_m60177EC4808171FD171A090EE5AFE3ECC6D2026A_gshared (U3CComputeKeysAsyncU3Ed__6_t05F7E082AD91DEFE2013D21589463D5F7112880B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CComputeKeysAsyncU3Ed__6_MoveNext_mBF3209CD4920AA7B67A25F862E493E58C1032B7B_gshared (U3CComputeKeysAsyncU3Ed__6_t05F7E082AD91DEFE2013D21589463D5F7112880B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TElement_tBDD34509625397CEBD10B190A33F17DF03561B81 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const uint32_t SizeOf_TKey_t88E0E6D5F784CD259D24985ECBE6670C90DBCEE6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TElement_tBDD34509625397CEBD10B190A33F17DF03561B81);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TKey_t88E0E6D5F784CD259D24985ECBE6670C90DBCEE6);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_4;
	memset((&V_4), 0, sizeof(V_4));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_5;
	memset((&V_5), 0, sizeof(V_5));
	U3CComputeKeysAsyncU3Ed__6_t05F7E082AD91DEFE2013D21589463D5F7112880B* V_6 = NULL;
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
			goto IL_0011_1;
		}

IL_000c_1:
		{
			goto IL_00f2_1;
		}

IL_0011_1:
		{
			SyncSelectorAsyncEnumerableSorter_2_tC80A112E82BEADDBEA5613561DBBCC5544867AA0* L_2 = __this->___U3CU3E4__this;
			int32_t L_3 = __this->___count;
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)L_3);
			NullCheck(L_2);
			L_2->___keys = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&L_2->___keys), (void*)L_4);
			__this->___U3CiU3E5__1 = 0;
			goto IL_0078_1;
		}

IL_0031_1:
		{
			SyncSelectorAsyncEnumerableSorter_2_tC80A112E82BEADDBEA5613561DBBCC5544867AA0* L_5 = __this->___U3CU3E4__this;
			NullCheck(L_5);
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = L_5->___keys;
			int32_t L_7 = __this->___U3CiU3E5__1;
			SyncSelectorAsyncEnumerableSorter_2_tC80A112E82BEADDBEA5613561DBBCC5544867AA0* L_8 = __this->___U3CU3E4__this;
			NullCheck(L_8);
			Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_9 = L_8->___keySelector;
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = __this->___elements;
			int32_t L_11 = __this->___U3CiU3E5__1;
			NullCheck(L_10);
			int32_t L_12 = L_11;
			il2cpp_codegen_memcpy(L_13, (L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)), SizeOf_TElement_tBDD34509625397CEBD10B190A33F17DF03561B81);
			NullCheck(L_9);
			InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_13: *(void**)L_13), (Il2CppFullySharedGenericAny*)L_14);
			NullCheck(L_6);
			il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_14, SizeOf_TKey_t88E0E6D5F784CD259D24985ECBE6670C90DBCEE6);
			Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 8), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_14);
			int32_t L_15 = __this->___U3CiU3E5__1;
			V_1 = L_15;
			int32_t L_16 = V_1;
			__this->___U3CiU3E5__1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		}

IL_0078_1:
		{
			int32_t L_17 = __this->___U3CiU3E5__1;
			int32_t L_18 = __this->___count;
			V_2 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
			bool L_19 = V_2;
			if (L_19)
			{
				goto IL_0031_1;
			}
		}
		{
			SyncSelectorAsyncEnumerableSorter_2_tC80A112E82BEADDBEA5613561DBBCC5544867AA0* L_20 = __this->___U3CU3E4__this;
			NullCheck(L_20);
			AsyncEnumerableSorter_1_tB12E111BEE1BE3928D42C95E823E309905F94836* L_21 = L_20->___next;
			V_3 = (bool)((!(((RuntimeObject*)(AsyncEnumerableSorter_1_tB12E111BEE1BE3928D42C95E823E309905F94836*)L_21) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_22 = V_3;
			if (!L_22)
			{
				goto IL_0117_1;
			}
		}
		{
			SyncSelectorAsyncEnumerableSorter_2_tC80A112E82BEADDBEA5613561DBBCC5544867AA0* L_23 = __this->___U3CU3E4__this;
			NullCheck(L_23);
			AsyncEnumerableSorter_1_tB12E111BEE1BE3928D42C95E823E309905F94836* L_24 = L_23->___next;
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_25 = __this->___elements;
			int32_t L_26 = __this->___count;
			NullCheck(L_24);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_27;
			L_27 = VirtualFuncInvoker2< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(4, L_24, L_25, L_26);
			V_5 = L_27;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_28;
			L_28 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_5), NULL);
			V_4 = L_28;
			bool L_29;
			L_29 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_4), NULL);
			if (L_29)
			{
				goto IL_010f_1;
			}
		}
		{
			int32_t L_30 = 0;
			V_0 = L_30;
			__this->___U3CU3E1__state = L_30;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_31 = V_4;
			__this->___U3CU3Eu__1 = L_31;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_6 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_32 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CComputeKeysAsyncU3Ed__6_t05F7E082AD91DEFE2013D21589463D5F7112880B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_32, (&V_4), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_0147;
		}

IL_00f2_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_33 = __this->___U3CU3Eu__1;
			V_4 = L_33;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_34 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_34, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_35 = (-1);
			V_0 = L_35;
			__this->___U3CU3E1__state = L_35;
		}

IL_010f_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_4), NULL);
		}

IL_0117_1:
		{
			goto IL_0133;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0119;
		}
		throw e;
	}

CATCH_0119:
	{
		Exception_t* L_36 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_7 = L_36;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_37 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_38 = V_7;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_37, L_38, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0147;
	}

IL_0133:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_39 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_39, NULL);
	}

IL_0147:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CComputeKeysAsyncU3Ed__6_SetStateMachine_m35C9880F83677B3DB7244EA93CFB94CAC558609B_gshared (U3CComputeKeysAsyncU3Ed__6_t05F7E082AD91DEFE2013D21589463D5F7112880B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CComputeKeysAsyncU3Ed__7__ctor_m2F5394C6F3A65434DEF4B4AF3FFDEE935704ACA6_gshared (U3CComputeKeysAsyncU3Ed__7_t83EF08CF36301999BB89CDD0FCC73050D402AF5E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CComputeKeysAsyncU3Ed__7_MoveNext_mDEB8450EC3FDBA10EEF931F009E740516C90D190_gshared (U3CComputeKeysAsyncU3Ed__7_t83EF08CF36301999BB89CDD0FCC73050D402AF5E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_Awaiter_t8085BE09F63E6F0CD1E6671C73B4E9910BD73D09 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_UniTask_1_t680354A095D5606EC18D0DA691BFD04C2C516C96 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const uint32_t SizeOf_TElement_t39A411920D465DDCEEC71B7354A635050AF99D36 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const uint32_t SizeOf_TKey_t5F0A83DD71DA82F446BC41CB3AD3F42F727E3A48 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TElement_t39A411920D465DDCEEC71B7354A635050AF99D36);
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_TKey_t5F0A83DD71DA82F446BC41CB3AD3F42F727E3A48);
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_TKey_t5F0A83DD71DA82F446BC41CB3AD3F42F727E3A48);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_18 = alloca(SizeOf_Awaiter_t8085BE09F63E6F0CD1E6671C73B4E9910BD73D09);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_21 = L_18;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_22 = L_18;
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_17 = alloca(SizeOf_UniTask_1_t680354A095D5606EC18D0DA691BFD04C2C516C96);
	int32_t V_0 = 0;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_1 = alloca(SizeOf_Awaiter_t8085BE09F63E6F0CD1E6671C73B4E9910BD73D09);
	memset(V_1, 0, SizeOf_Awaiter_t8085BE09F63E6F0CD1E6671C73B4E9910BD73D09);
	UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 V_2 = alloca(SizeOf_UniTask_1_t680354A095D5606EC18D0DA691BFD04C2C516C96);
	memset(V_2, 0, SizeOf_UniTask_1_t680354A095D5606EC18D0DA691BFD04C2C516C96);
	U3CComputeKeysAsyncU3Ed__7_t83EF08CF36301999BB89CDD0FCC73050D402AF5E* V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t* V_9 = NULL;
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
				goto IL_0017_1;
			}
		}
		{
			goto IL_001c_1;
		}

IL_0012_1:
		{
			goto IL_00c1_1;
		}

IL_0017_1:
		{
			goto IL_01a6_1;
		}

IL_001c_1:
		{
			AsyncSelectorWithCancellationEnumerableSorter_2_tEA4F3B707024ACFA35A53FBC2CE88D64E9C59EA7* L_3 = *(AsyncSelectorWithCancellationEnumerableSorter_2_tEA4F3B707024ACFA35A53FBC2CE88D64E9C59EA7**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			int32_t L_4 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)L_4);
			NullCheck(L_3);
			L_3->___keys = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&L_3->___keys), (void*)L_5);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), 0);
			goto IL_0126_1;
		}

IL_003f_1:
		{
			AsyncSelectorWithCancellationEnumerableSorter_2_tEA4F3B707024ACFA35A53FBC2CE88D64E9C59EA7* L_6 = *(AsyncSelectorWithCancellationEnumerableSorter_2_tEA4F3B707024ACFA35A53FBC2CE88D64E9C59EA7**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			NullCheck(L_6);
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = L_6->___keys;
			il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_7);
			int32_t L_8 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_8);
			AsyncSelectorWithCancellationEnumerableSorter_2_tEA4F3B707024ACFA35A53FBC2CE88D64E9C59EA7* L_9 = *(AsyncSelectorWithCancellationEnumerableSorter_2_tEA4F3B707024ACFA35A53FBC2CE88D64E9C59EA7**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			NullCheck(L_9);
			Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E* L_10 = L_9->___keySelector;
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			int32_t L_12 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
			NullCheck(L_11);
			int32_t L_13 = L_12;
			il2cpp_codegen_memcpy(L_14, (L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), SizeOf_TElement_t39A411920D465DDCEEC71B7354A635050AF99D36);
			AsyncSelectorWithCancellationEnumerableSorter_2_tEA4F3B707024ACFA35A53FBC2CE88D64E9C59EA7* L_15 = *(AsyncSelectorWithCancellationEnumerableSorter_2_tEA4F3B707024ACFA35A53FBC2CE88D64E9C59EA7**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			NullCheck(L_15);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_16 = L_15->___cancellationToken;
			NullCheck(L_10);
			InvokerActionInvoker3< Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_14: *(void**)L_14), L_16, (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_17);
			il2cpp_codegen_memcpy(V_2, L_17, SizeOf_UniTask_1_t680354A095D5606EC18D0DA691BFD04C2C516C96);
			InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)V_2, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_18);
			il2cpp_codegen_memcpy(V_1, L_18, SizeOf_Awaiter_t8085BE09F63E6F0CD1E6671C73B4E9910BD73D09);
			bool L_19;
			L_19 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			if (L_19)
			{
				goto IL_00dd_1;
			}
		}
		{
			int32_t L_20 = 0;
			V_0 = L_20;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_20);
			il2cpp_codegen_memcpy(L_21, V_1, SizeOf_Awaiter_t8085BE09F63E6F0CD1E6671C73B4E9910BD73D09);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_21, SizeOf_Awaiter_t8085BE09F63E6F0CD1E6671C73B4E9910BD73D09);
			V_3 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CComputeKeysAsyncU3Ed__7_t83EF08CF36301999BB89CDD0FCC73050D402AF5E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))((((AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1, (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
			goto IL_01fb;
		}

IL_00c1_1:
		{
			il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_Awaiter_t8085BE09F63E6F0CD1E6671C73B4E9910BD73D09);
			il2cpp_codegen_memcpy(V_1, L_22, SizeOf_Awaiter_t8085BE09F63E6F0CD1E6671C73B4E9910BD73D09);
			il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), SizeOf_Awaiter_t8085BE09F63E6F0CD1E6671C73B4E9910BD73D09);
			int32_t L_23 = (-1);
			V_0 = L_23;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_23);
		}

IL_00dd_1:
		{
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 17), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1, (Il2CppFullySharedGenericAny*)L_24);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_24, SizeOf_TKey_t5F0A83DD71DA82F446BC41CB3AD3F42F727E3A48);
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_25 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			int32_t L_26 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			il2cpp_codegen_memcpy(L_27, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8)), SizeOf_TKey_t5F0A83DD71DA82F446BC41CB3AD3F42F727E3A48);
			NullCheck(L_25);
			il2cpp_codegen_memcpy((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)), L_27, SizeOf_TKey_t5F0A83DD71DA82F446BC41CB3AD3F42F727E3A48);
			Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 18), (void**)(L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)), (void*)L_27);
			il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8)))), SizeOf_TKey_t5F0A83DD71DA82F446BC41CB3AD3F42F727E3A48);
			int32_t L_28 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
			V_4 = L_28;
			int32_t L_29 = V_4;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), ((int32_t)il2cpp_codegen_add(L_29, 1)));
		}

IL_0126_1:
		{
			int32_t L_30 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
			int32_t L_31 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
			V_5 = (bool)((((int32_t)L_30) < ((int32_t)L_31))? 1 : 0);
			bool L_32 = V_5;
			if (L_32)
			{
				goto IL_003f_1;
			}
		}
		{
			AsyncSelectorWithCancellationEnumerableSorter_2_tEA4F3B707024ACFA35A53FBC2CE88D64E9C59EA7* L_33 = *(AsyncSelectorWithCancellationEnumerableSorter_2_tEA4F3B707024ACFA35A53FBC2CE88D64E9C59EA7**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			NullCheck(L_33);
			AsyncEnumerableSorter_1_tB12E111BEE1BE3928D42C95E823E309905F94836* L_34 = L_33->___next;
			V_6 = (bool)((!(((RuntimeObject*)(AsyncEnumerableSorter_1_tB12E111BEE1BE3928D42C95E823E309905F94836*)L_34) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_35 = V_6;
			if (!L_35)
			{
				goto IL_01cb_1;
			}
		}
		{
			AsyncSelectorWithCancellationEnumerableSorter_2_tEA4F3B707024ACFA35A53FBC2CE88D64E9C59EA7* L_36 = *(AsyncSelectorWithCancellationEnumerableSorter_2_tEA4F3B707024ACFA35A53FBC2CE88D64E9C59EA7**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			NullCheck(L_36);
			AsyncEnumerableSorter_1_tB12E111BEE1BE3928D42C95E823E309905F94836* L_37 = L_36->___next;
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_38 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			int32_t L_39 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
			NullCheck(L_37);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_40;
			L_40 = VirtualFuncInvoker2< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(4, L_37, L_38, L_39);
			V_8 = L_40;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_41;
			L_41 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_8), NULL);
			V_7 = L_41;
			bool L_42;
			L_42 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_7), NULL);
			if (L_42)
			{
				goto IL_01c3_1;
			}
		}
		{
			int32_t L_43 = 1;
			V_0 = L_43;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_43);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_44 = V_7;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_44);
			V_3 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CComputeKeysAsyncU3Ed__7_t83EF08CF36301999BB89CDD0FCC73050D402AF5E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))((((AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_7), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
			goto IL_01fb;
		}

IL_01a6_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_45 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
			V_7 = L_45;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_46 = (-1);
			V_0 = L_46;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_46);
		}

IL_01c3_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_7), NULL);
		}

IL_01cb_1:
		{
			goto IL_01e7;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01cd;
		}
		throw e;
	}

CATCH_01cd:
	{
		Exception_t* L_47 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_9 = L_47;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		Exception_t* L_48 = V_9;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline((((AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_48, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_01fb;
	}

IL_01e7:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline((((AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), NULL);
	}

IL_01fb:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CComputeKeysAsyncU3Ed__7_SetStateMachine_mE88DE116A924E5286869B2AA45FDF091A8C89130_gshared (U3CComputeKeysAsyncU3Ed__7_t83EF08CF36301999BB89CDD0FCC73050D402AF5E* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConcatIteratorU3Ed__59_1__ctor_m85FAFABF364CFB018A3AD74C4B73553BC011A8CD_gshared (U3CConcatIteratorU3Ed__59_1_tD9D477DEE32E1B031B3CAC6DFC6BA3E1A542317F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConcatIteratorU3Ed__59_1_System_IDisposable_Dispose_m570E631B87B135A277656668F7BE091B959AE20C_gshared (U3CConcatIteratorU3Ed__59_1_tD9D477DEE32E1B031B3CAC6DFC6BA3E1A542317F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_1, ((int32_t)-4))))
		{
			case 0:
			{
				goto IL_0037;
			}
			case 1:
			{
				goto IL_002d;
			}
			case 2:
			{
				goto IL_0041;
			}
			case 3:
			{
				goto IL_0041;
			}
			case 4:
			{
				goto IL_0041;
			}
			case 5:
			{
				goto IL_002d;
			}
			case 6:
			{
				goto IL_0037;
			}
		}
	}
	{
		return;
	}

IL_002d:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				((  void (*) (U3CConcatIteratorU3Ed__59_1_tD9D477DEE32E1B031B3CAC6DFC6BA3E1A542317F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				return;
			}
		});
		try
		{
			goto IL_0041;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{
				((  void (*) (U3CConcatIteratorU3Ed__59_1_tD9D477DEE32E1B031B3CAC6DFC6BA3E1A542317F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
				return;
			}
		});
		try
		{
			goto IL_0041;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CConcatIteratorU3Ed__59_1_MoveNext_m537D124DB8119B382C0942D28C2EC48C48E4E40E_gshared (U3CConcatIteratorU3Ed__59_1_tD9D477DEE32E1B031B3CAC6DFC6BA3E1A542317F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t77C0F1441A61CA737E90F29C2D4D86A97A3592B5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TSource_t77C0F1441A61CA737E90F29C2D4D86A97A3592B5);
	const Il2CppFullySharedGenericAny L_12 = L_5;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TSource_t77C0F1441A61CA737E90F29C2D4D86A97A3592B5);
	const Il2CppFullySharedGenericAny L_13 = L_6;
	bool V_0 = false;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TSource_t77C0F1441A61CA737E90F29C2D4D86A97A3592B5);
	memset(V_2, 0, SizeOf_TSource_t77C0F1441A61CA737E90F29C2D4D86A97A3592B5);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_TSource_t77C0F1441A61CA737E90F29C2D4D86A97A3592B5);
	memset(V_3, 0, SizeOf_TSource_t77C0F1441A61CA737E90F29C2D4D86A97A3592B5);
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00e4:
			{
				((  void (*) (U3CConcatIteratorU3Ed__59_1_tD9D477DEE32E1B031B3CAC6DFC6BA3E1A542317F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
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
						goto IL_0063_1;
					}
					case 2:
					{
						goto IL_00be_1;
					}
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00eb;
			}

IL_0020_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
				RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				NullCheck(L_2);
				RuntimeObject* L_3;
				L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_2);
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_3);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
				goto IL_006b_1;
			}

IL_0042_1:
			{
				RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck(L_4);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_4, (Il2CppFullySharedGenericAny*)L_5);
				il2cpp_codegen_memcpy(V_2, L_5, SizeOf_TSource_t77C0F1441A61CA737E90F29C2D4D86A97A3592B5);
				il2cpp_codegen_memcpy(L_6, V_2, SizeOf_TSource_t77C0F1441A61CA737E90F29C2D4D86A97A3592B5);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_6, SizeOf_TSource_t77C0F1441A61CA737E90F29C2D4D86A97A3592B5);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
				V_0 = (bool)1;
				goto IL_00eb;
			}

IL_0063_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
			}

IL_006b_1:
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
				((  void (*) (U3CConcatIteratorU3Ed__59_1_tD9D477DEE32E1B031B3CAC6DFC6BA3E1A542317F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), (RuntimeObject*)NULL);
				RuntimeObject* L_9 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				NullCheck(L_9);
				RuntimeObject* L_10;
				L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9);
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_10);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-4));
				goto IL_00c6_1;
			}

IL_00a0_1:
			{
				RuntimeObject* L_11 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck(L_11);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_11, (Il2CppFullySharedGenericAny*)L_12);
				il2cpp_codegen_memcpy(V_3, L_12, SizeOf_TSource_t77C0F1441A61CA737E90F29C2D4D86A97A3592B5);
				il2cpp_codegen_memcpy(L_13, V_3, SizeOf_TSource_t77C0F1441A61CA737E90F29C2D4D86A97A3592B5);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_13, SizeOf_TSource_t77C0F1441A61CA737E90F29C2D4D86A97A3592B5);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 2);
				V_0 = (bool)1;
				goto IL_00eb;
			}

IL_00be_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-4));
			}

IL_00c6_1:
			{
				RuntimeObject* L_14 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck((RuntimeObject*)L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
				if (L_15)
				{
					goto IL_00a0_1;
				}
			}
			{
				((  void (*) (U3CConcatIteratorU3Ed__59_1_tD9D477DEE32E1B031B3CAC6DFC6BA3E1A542317F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), (RuntimeObject*)NULL);
				V_0 = (bool)0;
				goto IL_00eb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00eb:
	{
		bool L_16 = V_0;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConcatIteratorU3Ed__59_1_U3CU3Em__Finally1_m3FB39804582C22CA19C65ACD1A20DDF1D3C713DD_gshared (U3CConcatIteratorU3Ed__59_1_tD9D477DEE32E1B031B3CAC6DFC6BA3E1A542317F* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConcatIteratorU3Ed__59_1_U3CU3Em__Finally2_mB2B17B698F72EE30BB664808D63F1995016C52FB_gshared (U3CConcatIteratorU3Ed__59_1_tD9D477DEE32E1B031B3CAC6DFC6BA3E1A542317F* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConcatIteratorU3Ed__59_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_mD140052B248D791D03FDF888158393B6AFAD4361_gshared (U3CConcatIteratorU3Ed__59_1_tD9D477DEE32E1B031B3CAC6DFC6BA3E1A542317F* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t77C0F1441A61CA737E90F29C2D4D86A97A3592B5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t77C0F1441A61CA737E90F29C2D4D86A97A3592B5);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TSource_t77C0F1441A61CA737E90F29C2D4D86A97A3592B5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TSource_t77C0F1441A61CA737E90F29C2D4D86A97A3592B5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConcatIteratorU3Ed__59_1_System_Collections_IEnumerator_Reset_m9122A5B061641AF8105B972D371188F103CCC449_gshared (U3CConcatIteratorU3Ed__59_1_tD9D477DEE32E1B031B3CAC6DFC6BA3E1A542317F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CConcatIteratorU3Ed__59_1_System_Collections_IEnumerator_get_Current_m02C88FF5B065D51DAC768EE5EA4FE5DAE5B4626F_gshared (U3CConcatIteratorU3Ed__59_1_tD9D477DEE32E1B031B3CAC6DFC6BA3E1A542317F* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t77C0F1441A61CA737E90F29C2D4D86A97A3592B5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t77C0F1441A61CA737E90F29C2D4D86A97A3592B5);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TSource_t77C0F1441A61CA737E90F29C2D4D86A97A3592B5);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CConcatIteratorU3Ed__59_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m3EA50E45561C7E91B484EF607562B3C9CE67E522_gshared (U3CConcatIteratorU3Ed__59_1_tD9D477DEE32E1B031B3CAC6DFC6BA3E1A542317F* __this, const RuntimeMethod* method) 
{
	U3CConcatIteratorU3Ed__59_1_tD9D477DEE32E1B031B3CAC6DFC6BA3E1A542317F* V_0 = NULL;
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
		U3CConcatIteratorU3Ed__59_1_tD9D477DEE32E1B031B3CAC6DFC6BA3E1A542317F* L_3 = (U3CConcatIteratorU3Ed__59_1_tD9D477DEE32E1B031B3CAC6DFC6BA3E1A542317F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (U3CConcatIteratorU3Ed__59_1_tD9D477DEE32E1B031B3CAC6DFC6BA3E1A542317F*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		V_0 = L_3;
	}

IL_0029:
	{
		U3CConcatIteratorU3Ed__59_1_tD9D477DEE32E1B031B3CAC6DFC6BA3E1A542317F* L_4 = V_0;
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NullCheck(L_4);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_5);
		U3CConcatIteratorU3Ed__59_1_tD9D477DEE32E1B031B3CAC6DFC6BA3E1A542317F* L_6 = V_0;
		RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_6);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_7);
		U3CConcatIteratorU3Ed__59_1_tD9D477DEE32E1B031B3CAC6DFC6BA3E1A542317F* L_8 = V_0;
		return (RuntimeObject*)L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CConcatIteratorU3Ed__59_1_System_Collections_IEnumerable_GetEnumerator_m63451596ADCCCBCAD89C95A7CF3AE28BAC6223F9_gshared (U3CConcatIteratorU3Ed__59_1_tD9D477DEE32E1B031B3CAC6DFC6BA3E1A542317F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (U3CConcatIteratorU3Ed__59_1_tD9D477DEE32E1B031B3CAC6DFC6BA3E1A542317F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConsumeAllU3Ed__10__ctor_mCEBE84EA8747E2C9519FB5295BB621E8A816CE76_gshared (U3CConsumeAllU3Ed__10_tFB1157CEA1D45D775B8AEC194C943DAB24B242C9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConsumeAllU3Ed__10_MoveNext_mDAF0160DF09AA1DE10C4A37AAEFD9B08F62D29AF_gshared (U3CConsumeAllU3Ed__10_tFB1157CEA1D45D775B8AEC194C943DAB24B242C9* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_tDED4B7424497BE28BC6C26913846AD103963E817 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TSource_tDED4B7424497BE28BC6C26913846AD103963E817);
	int32_t V_0 = 0;
	bool V_1 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CConsumeAllU3Ed__10_tFB1157CEA1D45D775B8AEC194C943DAB24B242C9* V_4 = NULL;
	Exception_t* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_8;
	memset((&V_8), 0, sizeof(V_8));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 3> __active_exceptions;
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
			goto IL_0028_1;
		}

IL_0014_1:
		{
			goto IL_0162_1;
		}

IL_0019_1:
		{
			__this->___U3CU3Es__1 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1), (void*)NULL);
			__this->___U3CU3Es__2 = 0;
		}

IL_0028_1:
		{
		}
		try
		{
			{
				int32_t L_3 = V_0;
				if (!L_3)
				{
					goto IL_002e_2;
				}
			}
			{
				goto IL_0030_2;
			}

IL_002e_2:
			{
				goto IL_0030_2;
			}

IL_0030_2:
			{
			}
			try
			{
				{
					int32_t L_4 = V_0;
					if (!L_4)
					{
						goto IL_0036_3;
					}
				}
				{
					goto IL_0038_3;
				}

IL_0036_3:
				{
					goto IL_0099_3;
				}

IL_0038_3:
				{
					goto IL_0054_3;
				}

IL_003b_3:
				{
					ChannelWriter_1_t1209690B768C24565769C0EC929D8E49E3C09877* L_5 = __this->___writer;
					RuntimeObject* L_6 = __this->___enumerator;
					NullCheck(L_6);
					InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_6, (Il2CppFullySharedGenericAny*)L_7);
					NullCheck(L_5);
					bool L_8;
					L_8 = VirtualFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(4, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_7: *(void**)L_7));
				}

IL_0054_3:
				{
					RuntimeObject* L_9 = __this->___enumerator;
					NullCheck(L_9);
					UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_10;
					L_10 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_9);
					V_3 = L_10;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_11;
					L_11 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_3), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
					V_2 = L_11;
					bool L_12;
					L_12 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_2), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
					if (L_12)
					{
						goto IL_00b5_3;
					}
				}
				{
					int32_t L_13 = 0;
					V_0 = L_13;
					__this->___U3CU3E1__state = L_13;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_14 = V_2;
					__this->___U3CU3Eu__1 = L_14;
					Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
					V_4 = __this;
					AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_15 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
					((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CConsumeAllU3Ed__10_tFB1157CEA1D45D775B8AEC194C943DAB24B242C9**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_15, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
					goto IL_01ef;
				}

IL_0099_3:
				{
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_16 = __this->___U3CU3Eu__1;
					V_2 = L_16;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_17 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
					il2cpp_codegen_initobj(L_17, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
					int32_t L_18 = (-1);
					V_0 = L_18;
					__this->___U3CU3E1__state = L_18;
				}

IL_00b5_3:
				{
					bool L_19;
					L_19 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_2), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
					__this->___U3CU3Es__3 = L_19;
					bool L_20 = __this->___U3CU3Es__3;
					V_1 = L_20;
					bool L_21 = V_1;
					if (L_21)
					{
						goto IL_003b_3;
					}
				}
				{
					ChannelWriter_1_t1209690B768C24565769C0EC929D8E49E3C09877* L_22 = __this->___writer;
					NullCheck(L_22);
					bool L_23;
					L_23 = VirtualFuncInvoker1< bool, Exception_t* >::Invoke(5, L_22, (Exception_t*)NULL);
					goto IL_00ff_2;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00df_2;
				}
				throw e;
			}

CATCH_00df_2:
			{
				Exception_t* L_24 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
				V_5 = L_24;
				Exception_t* L_25 = V_5;
				__this->___U3CexU3E5__4 = L_25;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__4), (void*)L_25);
				ChannelWriter_1_t1209690B768C24565769C0EC929D8E49E3C09877* L_26 = __this->___writer;
				Exception_t* L_27 = __this->___U3CexU3E5__4;
				NullCheck(L_26);
				bool L_28;
				L_28 = VirtualFuncInvoker1< bool, Exception_t* >::Invoke(5, L_26, L_27);
				IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
				goto IL_00ff_2;
			}

IL_00ff_2:
			{
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
			RuntimeObject* L_29 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_6 = L_29;
			RuntimeObject* L_30 = V_6;
			__this->___U3CU3Es__1 = L_30;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1), (void*)L_30);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_010d_1;
		}

IL_010d_1:
		{
			_Queue_tECDD01C33751DFE4942831EF0C7D9FB09C499871* L_31 = __this->___self;
			NullCheck(L_31);
			L_31->___channelClosed = (bool)1;
			RuntimeObject* L_32 = __this->___enumerator;
			NullCheck((RuntimeObject*)L_32);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_33;
			L_33 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			V_8 = L_33;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_34;
			L_34 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_8), NULL);
			V_7 = L_34;
			bool L_35;
			L_35 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_7), NULL);
			if (L_35)
			{
				goto IL_017f_1;
			}
		}
		{
			int32_t L_36 = 1;
			V_0 = L_36;
			__this->___U3CU3E1__state = L_36;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_37 = V_7;
			__this->___U3CU3Eu__2 = L_37;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_38 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CConsumeAllU3Ed__10_tFB1157CEA1D45D775B8AEC194C943DAB24B242C9**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_38, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_01ef;
		}

IL_0162_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39 = __this->___U3CU3Eu__2;
			V_7 = L_39;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_40 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_40, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_41 = (-1);
			V_0 = L_41;
			__this->___U3CU3E1__state = L_41;
		}

IL_017f_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_7), NULL);
			RuntimeObject* L_42 = __this->___U3CU3Es__1;
			V_6 = L_42;
			RuntimeObject* L_43 = V_6;
			if (!L_43)
			{
				goto IL_01b1_1;
			}
		}
		{
			RuntimeObject* L_44 = V_6;
			V_5 = ((Exception_t*)IsInstClass((RuntimeObject*)L_44, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_45 = V_5;
			if (L_45)
			{
				goto IL_01a4_1;
			}
		}
		{
			RuntimeObject* L_46 = V_6;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_46, method);
		}

IL_01a4_1:
		{
			Exception_t* L_47 = V_5;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_48;
			L_48 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_47, NULL);
			NullCheck(L_48);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_48, NULL);
		}

IL_01b1_1:
		{
			int32_t L_49 = __this->___U3CU3Es__2;
			__this->___U3CU3Es__1 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1), (void*)NULL);
			goto IL_01db;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01c1;
		}
		throw e;
	}

CATCH_01c1:
	{
		Exception_t* L_50 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_5 = L_50;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_51 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
		Exception_t* L_52 = V_5;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline(L_51, L_52, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_01ef;
	}

IL_01db:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_53 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline(L_53, NULL);
	}

IL_01ef:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConsumeAllU3Ed__10_SetStateMachine_m2AF34D71F9AC2A2BB4B06173DF122E1E379DB046_gshared (U3CConsumeAllU3Ed__10_tFB1157CEA1D45D775B8AEC194C943DAB24B242C9* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConsumeEnumeratorU3Ed__7__ctor_mFAB96956D4E9E7EE414BC3528C4DD373511AAE44_gshared (U3CConsumeEnumeratorU3Ed__7_tDE615CB78260934B3BC38AC5EA5DC59891F2EE45* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConsumeEnumeratorU3Ed__7_MoveNext_m2B8AB2310EE27D45CE5B9FA50C1FDBAF6EB7BD47_gshared (U3CConsumeEnumeratorU3Ed__7_tDE615CB78260934B3BC38AC5EA5DC59891F2EE45* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_T_t58BBBA591976C117B8C8F60CFF6500CABBCF924F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t58BBBA591976C117B8C8F60CFF6500CABBCF924F);
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T_t58BBBA591976C117B8C8F60CFF6500CABBCF924F);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T_t58BBBA591976C117B8C8F60CFF6500CABBCF924F);
	int32_t V_0 = 0;
	bool V_1 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CConsumeEnumeratorU3Ed__7_tDE615CB78260934B3BC38AC5EA5DC59891F2EE45* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Exception_t* V_8 = NULL;
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
			goto IL_0044_1;
		}

IL_0014_1:
		{
			goto IL_017b_1;
		}

IL_0019_1:
		{
			ReadOnlyAsyncReactiveProperty_1_tB7349A20B00D8047434C5CDE4CB7EC263380B1E9* L_3 = *(ReadOnlyAsyncReactiveProperty_1_tB7349A20B00D8047434C5CDE4CB7EC263380B1E9**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_4, L_5);
			NullCheck(L_3);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2), L_6);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), NULL);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), 0);
		}

IL_0044_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_004a_2;
				}
			}
			{
				goto IL_004f_2;
			}

IL_004a_2:
			{
				goto IL_00e8_2;
			}

IL_004f_2:
			{
				goto IL_009e_2;
			}

IL_0052_2:
			{
				ReadOnlyAsyncReactiveProperty_1_tB7349A20B00D8047434C5CDE4CB7EC263380B1E9* L_8 = *(ReadOnlyAsyncReactiveProperty_1_tB7349A20B00D8047434C5CDE4CB7EC263380B1E9**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
				RuntimeObject* L_9 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2));
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_9, (Il2CppFullySharedGenericAny*)L_10);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_10, SizeOf_T_t58BBBA591976C117B8C8F60CFF6500CABBCF924F);
				ReadOnlyAsyncReactiveProperty_1_tB7349A20B00D8047434C5CDE4CB7EC263380B1E9* L_11 = *(ReadOnlyAsyncReactiveProperty_1_tB7349A20B00D8047434C5CDE4CB7EC263380B1E9**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
				il2cpp_codegen_memcpy(L_12, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)), SizeOf_T_t58BBBA591976C117B8C8F60CFF6500CABBCF924F);
				NullCheck(L_11);
				il2cpp_codegen_write_instance_field_data(L_11, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1), L_12, SizeOf_T_t58BBBA591976C117B8C8F60CFF6500CABBCF924F);
				ReadOnlyAsyncReactiveProperty_1_tB7349A20B00D8047434C5CDE4CB7EC263380B1E9* L_13 = *(ReadOnlyAsyncReactiveProperty_1_tB7349A20B00D8047434C5CDE4CB7EC263380B1E9**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
				il2cpp_codegen_memcpy(L_14, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)), SizeOf_T_t58BBBA591976C117B8C8F60CFF6500CABBCF924F);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (((TriggerEvent_1_t4D603DB487DB30F0FBD2EE01A6AF71CA4F4476E0*)il2cpp_codegen_get_instance_field_data_pointer(L_13, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_14: *(void**)L_14));
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), SizeOf_T_t58BBBA591976C117B8C8F60CFF6500CABBCF924F);
			}

IL_009e_2:
			{
				ReadOnlyAsyncReactiveProperty_1_tB7349A20B00D8047434C5CDE4CB7EC263380B1E9* L_15 = *(ReadOnlyAsyncReactiveProperty_1_tB7349A20B00D8047434C5CDE4CB7EC263380B1E9**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
				RuntimeObject* L_16 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_15, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2));
				NullCheck(L_16);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_17;
				L_17 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_16);
				V_3 = L_17;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_18;
				L_18 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_3), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_2 = L_18;
				bool L_19;
				L_19 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_2), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_0104_2;
				}
			}
			{
				int32_t L_20 = 0;
				V_0 = L_20;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_20);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_21 = V_2;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_21);
				V_4 = __this;
				((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CConsumeEnumeratorU3Ed__7_tDE615CB78260934B3BC38AC5EA5DC59891F2EE45**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0214;
			}

IL_00e8_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_22 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
				V_2 = L_22;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_23 = (-1);
				V_0 = L_23;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_23);
			}

IL_0104_2:
			{
				bool L_24;
				L_24 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_2), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_24);
				bool L_25 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
				V_1 = L_25;
				bool L_26 = V_1;
				if (L_26)
				{
					goto IL_0052_2;
				}
			}
			{
				goto IL_012d_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0121_1;
			}
			throw e;
		}

CATCH_0121_1:
		{
			RuntimeObject* L_27 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_5 = L_27;
			RuntimeObject* L_28 = V_5;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_28);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_012d_1;
		}

IL_012d_1:
		{
			ReadOnlyAsyncReactiveProperty_1_tB7349A20B00D8047434C5CDE4CB7EC263380B1E9* L_29 = *(ReadOnlyAsyncReactiveProperty_1_tB7349A20B00D8047434C5CDE4CB7EC263380B1E9**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			RuntimeObject* L_30 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_29, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2));
			NullCheck((RuntimeObject*)L_30);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_31;
			L_31 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_30);
			V_7 = L_31;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_32;
			L_32 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_7), NULL);
			V_6 = L_32;
			bool L_33;
			L_33 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_6), NULL);
			if (L_33)
			{
				goto IL_0198_1;
			}
		}
		{
			int32_t L_34 = 1;
			V_0 = L_34;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_34);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_35 = V_6;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_35);
			V_4 = __this;
			((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CConsumeEnumeratorU3Ed__7_tDE615CB78260934B3BC38AC5EA5DC59891F2EE45**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
			goto IL_0214;
		}

IL_017b_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
			V_6 = L_36;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_37 = (-1);
			V_0 = L_37;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_37);
		}

IL_0198_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_6), NULL);
			ReadOnlyAsyncReactiveProperty_1_tB7349A20B00D8047434C5CDE4CB7EC263380B1E9* L_38 = *(ReadOnlyAsyncReactiveProperty_1_tB7349A20B00D8047434C5CDE4CB7EC263380B1E9**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			NullCheck(L_38);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_38, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2), (RuntimeObject*)NULL);
			RuntimeObject* L_39 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
			V_5 = L_39;
			RuntimeObject* L_40 = V_5;
			if (!L_40)
			{
				goto IL_01d6_1;
			}
		}
		{
			RuntimeObject* L_41 = V_5;
			V_8 = ((Exception_t*)IsInstClass((RuntimeObject*)L_41, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_42 = V_8;
			if (L_42)
			{
				goto IL_01c9_1;
			}
		}
		{
			RuntimeObject* L_43 = V_5;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, method);
		}

IL_01c9_1:
		{
			Exception_t* L_44 = V_8;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_45;
			L_45 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_44, NULL);
			NullCheck(L_45);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_45, NULL);
		}

IL_01d6_1:
		{
			int32_t L_46 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), NULL);
			goto IL_0200;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01e6;
		}
		throw e;
	}

CATCH_01e6:
	{
		Exception_t* L_47 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_8 = L_47;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		Exception_t* L_48 = V_8;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_48, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0214;
	}

IL_0200:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), NULL);
	}

IL_0214:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConsumeEnumeratorU3Ed__7_SetStateMachine_mEC5276D2D046A454BEA9B61F3B5E48D63392F02F_gshared (U3CConsumeEnumeratorU3Ed__7_tDE615CB78260934B3BC38AC5EA5DC59891F2EE45* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConsumeEnumeratorU3Ed__8__ctor_mD023A758720203157CDB384316849F834BDB4ACA_gshared (U3CConsumeEnumeratorU3Ed__8_t5574F9D88DE605598642C11E1A5A65987359B2FC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConsumeEnumeratorU3Ed__8_MoveNext_m7CB58BBB80D2382BEE32E2D7383DDD8AAA4FCFE2_gshared (U3CConsumeEnumeratorU3Ed__8_t5574F9D88DE605598642C11E1A5A65987359B2FC* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_tC2150F913900F463D7BF90CCB332239D08875200 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_tC2150F913900F463D7BF90CCB332239D08875200);
	int32_t V_0 = 0;
	bool V_1 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CConsumeEnumeratorU3Ed__8_t5574F9D88DE605598642C11E1A5A65987359B2FC* V_4 = NULL;
	Exception_t* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_8;
	memset((&V_8), 0, sizeof(V_8));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 3> __active_exceptions;
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
			goto IL_0028_1;
		}

IL_0014_1:
		{
			goto IL_0181_1;
		}

IL_0019_1:
		{
			__this->___U3CU3Es__1 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1), (void*)NULL);
			__this->___U3CU3Es__2 = 0;
		}

IL_0028_1:
		{
		}
		try
		{
			{
				int32_t L_3 = V_0;
				if (!L_3)
				{
					goto IL_002e_2;
				}
			}
			{
				goto IL_0030_2;
			}

IL_002e_2:
			{
				goto IL_0031_2;
			}

IL_0030_2:
			{
			}

IL_0031_2:
			{
			}
			try
			{
				{
					int32_t L_4 = V_0;
					if (!L_4)
					{
						goto IL_0037_3;
					}
				}
				{
					goto IL_0039_3;
				}

IL_0037_3:
				{
					goto IL_00a9_3;
				}

IL_0039_3:
				{
					goto IL_005f_3;
				}

IL_003c_3:
				{
					Publish_1_tF4C3835092EF34C1E4B6D4FFCCBBB6FF76918965* L_5 = __this->___U3CU3E4__this;
					NullCheck(L_5);
					TriggerEvent_1_t4D603DB487DB30F0FBD2EE01A6AF71CA4F4476E0* L_6 = (TriggerEvent_1_t4D603DB487DB30F0FBD2EE01A6AF71CA4F4476E0*)(&L_5->___trigger);
					Publish_1_tF4C3835092EF34C1E4B6D4FFCCBBB6FF76918965* L_7 = __this->___U3CU3E4__this;
					NullCheck(L_7);
					RuntimeObject* L_8 = L_7->___enumerator;
					NullCheck(L_8);
					InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
					InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_9: *(void**)L_9));
				}

IL_005f_3:
				{
					Publish_1_tF4C3835092EF34C1E4B6D4FFCCBBB6FF76918965* L_10 = __this->___U3CU3E4__this;
					NullCheck(L_10);
					RuntimeObject* L_11 = L_10->___enumerator;
					NullCheck(L_11);
					UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_12;
					L_12 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_11);
					V_3 = L_12;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_13;
					L_13 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_3), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
					V_2 = L_13;
					bool L_14;
					L_14 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_2), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
					if (L_14)
					{
						goto IL_00c5_3;
					}
				}
				{
					int32_t L_15 = 0;
					V_0 = L_15;
					__this->___U3CU3E1__state = L_15;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_16 = V_2;
					__this->___U3CU3Eu__1 = L_16;
					Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
					V_4 = __this;
					AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_17 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
					((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CConsumeEnumeratorU3Ed__8_t5574F9D88DE605598642C11E1A5A65987359B2FC**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_17, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
					goto IL_020e;
				}

IL_00a9_3:
				{
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_18 = __this->___U3CU3Eu__1;
					V_2 = L_18;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_19 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
					il2cpp_codegen_initobj(L_19, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
					int32_t L_20 = (-1);
					V_0 = L_20;
					__this->___U3CU3E1__state = L_20;
				}

IL_00c5_3:
				{
					bool L_21;
					L_21 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_2), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
					__this->___U3CU3Es__3 = L_21;
					bool L_22 = __this->___U3CU3Es__3;
					V_1 = L_22;
					bool L_23 = V_1;
					if (L_23)
					{
						goto IL_003c_3;
					}
				}
				{
					Publish_1_tF4C3835092EF34C1E4B6D4FFCCBBB6FF76918965* L_24 = __this->___U3CU3E4__this;
					NullCheck(L_24);
					TriggerEvent_1_t4D603DB487DB30F0FBD2EE01A6AF71CA4F4476E0* L_25 = (TriggerEvent_1_t4D603DB487DB30F0FBD2EE01A6AF71CA4F4476E0*)(&L_24->___trigger);
					((  void (*) (TriggerEvent_1_t4D603DB487DB30F0FBD2EE01A6AF71CA4F4476E0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_25, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
					goto IL_0118_2;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00f3_2;
				}
				throw e;
			}

CATCH_00f3_2:
			{
				Exception_t* L_26 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
				V_5 = L_26;
				Exception_t* L_27 = V_5;
				__this->___U3CexU3E5__4 = L_27;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__4), (void*)L_27);
				Publish_1_tF4C3835092EF34C1E4B6D4FFCCBBB6FF76918965* L_28 = __this->___U3CU3E4__this;
				NullCheck(L_28);
				TriggerEvent_1_t4D603DB487DB30F0FBD2EE01A6AF71CA4F4476E0* L_29 = (TriggerEvent_1_t4D603DB487DB30F0FBD2EE01A6AF71CA4F4476E0*)(&L_28->___trigger);
				Exception_t* L_30 = __this->___U3CexU3E5__4;
				((  void (*) (TriggerEvent_1_t4D603DB487DB30F0FBD2EE01A6AF71CA4F4476E0*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_29, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
				IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
				goto IL_0118_2;
			}

IL_0118_2:
			{
				goto IL_0127_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_011b_1;
			}
			throw e;
		}

CATCH_011b_1:
		{
			RuntimeObject* L_31 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_6 = L_31;
			RuntimeObject* L_32 = V_6;
			__this->___U3CU3Es__1 = L_32;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1), (void*)L_32);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0127_1;
		}

IL_0127_1:
		{
			Publish_1_tF4C3835092EF34C1E4B6D4FFCCBBB6FF76918965* L_33 = __this->___U3CU3E4__this;
			NullCheck(L_33);
			L_33->___isCompleted = (bool)1;
			Publish_1_tF4C3835092EF34C1E4B6D4FFCCBBB6FF76918965* L_34 = __this->___U3CU3E4__this;
			NullCheck(L_34);
			RuntimeObject* L_35 = L_34->___enumerator;
			NullCheck((RuntimeObject*)L_35);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_36;
			L_36 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_35);
			V_8 = L_36;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_37;
			L_37 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_8), NULL);
			V_7 = L_37;
			bool L_38;
			L_38 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_7), NULL);
			if (L_38)
			{
				goto IL_019e_1;
			}
		}
		{
			int32_t L_39 = 1;
			V_0 = L_39;
			__this->___U3CU3E1__state = L_39;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_40 = V_7;
			__this->___U3CU3Eu__2 = L_40;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_41 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CConsumeEnumeratorU3Ed__8_t5574F9D88DE605598642C11E1A5A65987359B2FC**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(L_41, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
			goto IL_020e;
		}

IL_0181_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_42 = __this->___U3CU3Eu__2;
			V_7 = L_42;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_43 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_43, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_44 = (-1);
			V_0 = L_44;
			__this->___U3CU3E1__state = L_44;
		}

IL_019e_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_7), NULL);
			RuntimeObject* L_45 = __this->___U3CU3Es__1;
			V_6 = L_45;
			RuntimeObject* L_46 = V_6;
			if (!L_46)
			{
				goto IL_01d0_1;
			}
		}
		{
			RuntimeObject* L_47 = V_6;
			V_5 = ((Exception_t*)IsInstClass((RuntimeObject*)L_47, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_48 = V_5;
			if (L_48)
			{
				goto IL_01c3_1;
			}
		}
		{
			RuntimeObject* L_49 = V_6;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_49, method);
		}

IL_01c3_1:
		{
			Exception_t* L_50 = V_5;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_51;
			L_51 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_50, NULL);
			NullCheck(L_51);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_51, NULL);
		}

IL_01d0_1:
		{
			int32_t L_52 = __this->___U3CU3Es__2;
			__this->___U3CU3Es__1 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1), (void*)NULL);
			goto IL_01fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01e0;
		}
		throw e;
	}

CATCH_01e0:
	{
		Exception_t* L_53 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_5 = L_53;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_54 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
		Exception_t* L_55 = V_5;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline(L_54, L_55, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_020e;
	}

IL_01fa:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_56 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline(L_56, NULL);
	}

IL_020e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConsumeEnumeratorU3Ed__8_SetStateMachine_m18621D80DDE148DBF37BA67BA7EBAFF33B6DDF37_gshared (U3CConsumeEnumeratorU3Ed__8_t5574F9D88DE605598642C11E1A5A65987359B2FC* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CContainsAsyncU3Ed__0_1__ctor_m6861483BE4BD7943EEE04E607A2D378D54AED902_gshared (U3CContainsAsyncU3Ed__0_1_t1AD73E4858CE144ECF35A6093C886D4681473EE2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CContainsAsyncU3Ed__0_1_MoveNext_m0F2D4FADF80E9C70AD1DCCA90A5B9E1D894214B9_gshared (U3CContainsAsyncU3Ed__0_1_t1AD73E4858CE144ECF35A6093C886D4681473EE2* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t66CAC34C96D781E2995E1A7C4679F921A57DAE7D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TSource_t66CAC34C96D781E2995E1A7C4679F921A57DAE7D);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t66CAC34C96D781E2995E1A7C4679F921A57DAE7D);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_4;
	memset((&V_4), 0, sizeof(V_4));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_5;
	memset((&V_5), 0, sizeof(V_5));
	U3CContainsAsyncU3Ed__0_1_t1AD73E4858CE144ECF35A6093C886D4681473EE2* V_6 = NULL;
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
			goto IL_016f_1;
		}

IL_0019_1:
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
				goto IL_00c1_2;
			}

IL_0047_2:
			{
				goto IL_0079_2;
			}

IL_004a_2:
			{
				RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
				il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3)), SizeOf_TSource_t66CAC34C96D781E2995E1A7C4679F921A57DAE7D);
				RuntimeObject* L_9 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_7);
				bool L_11;
				L_11 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_8: *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_10: *(void**)L_10));
				V_2 = L_11;
				bool L_12 = V_2;
				if (!L_12)
				{
					goto IL_0078_2;
				}
			}
			{
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), (bool)1);
				goto IL_0101_2;
			}

IL_0078_2:
			{
			}

IL_0079_2:
			{
				RuntimeObject* L_13 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_13);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_14;
				L_14 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_13);
				V_5 = L_14;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_15;
				L_15 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_5), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_4 = L_15;
				bool L_16;
				L_16 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_4), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_00de_2;
				}
			}
			{
				int32_t L_17 = 0;
				V_0 = L_17;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_17);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_18 = V_4;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_18);
				V_6 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CContainsAsyncU3Ed__0_1_t1AD73E4858CE144ECF35A6093C886D4681473EE2**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((((AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_4), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_0224;
			}

IL_00c1_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_19 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
				V_4 = L_19;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_20 = (-1);
				V_0 = L_20;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_20);
			}

IL_00de_2:
			{
				bool L_21;
				L_21 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_4), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_21);
				bool L_22 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
				V_3 = L_22;
				bool L_23 = V_3;
				if (L_23)
				{
					goto IL_004a_2;
				}
			}
			{
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), (bool)0);
				goto IL_0101_2;
			}

IL_0101_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), 1);
				goto IL_0116_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_010a_1;
			}
			throw e;
		}

CATCH_010a_1:
		{
			RuntimeObject* L_24 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_7 = L_24;
			RuntimeObject* L_25 = V_7;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_25);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0116_1;
		}

IL_0116_1:
		{
			RuntimeObject* L_26 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_26) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_27 = V_8;
			if (!L_27)
			{
				goto IL_0195_1;
			}
		}
		{
			RuntimeObject* L_28 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			NullCheck((RuntimeObject*)L_28);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_29;
			L_29 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_28);
			V_10 = L_29;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_30;
			L_30 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_10), NULL);
			V_9 = L_30;
			bool L_31;
			L_31 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_9), NULL);
			if (L_31)
			{
				goto IL_018c_1;
			}
		}
		{
			int32_t L_32 = 1;
			V_0 = L_32;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_32);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_33 = V_9;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_33);
			V_6 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CContainsAsyncU3Ed__0_1_t1AD73E4858CE144ECF35A6093C886D4681473EE2**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))((((AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_9), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_0224;
		}

IL_016f_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_34 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12));
			V_9 = L_34;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_35 = (-1);
			V_0 = L_35;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_35);
		}

IL_018c_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_9), NULL);
		}

IL_0195_1:
		{
			RuntimeObject* L_36 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_7 = L_36;
			RuntimeObject* L_37 = V_7;
			if (!L_37)
			{
				goto IL_01bf_1;
			}
		}
		{
			RuntimeObject* L_38 = V_7;
			V_11 = ((Exception_t*)IsInstClass((RuntimeObject*)L_38, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_39 = V_11;
			if (L_39)
			{
				goto IL_01b2_1;
			}
		}
		{
			RuntimeObject* L_40 = V_7;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, method);
		}

IL_01b2_1:
		{
			Exception_t* L_41 = V_11;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_42;
			L_42 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_41, NULL);
			NullCheck(L_42);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_42, NULL);
		}

IL_01bf_1:
		{
			int32_t L_43 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			V_12 = L_43;
			int32_t L_44 = V_12;
			if ((((int32_t)L_44) == ((int32_t)1)))
			{
				goto IL_01ce_1;
			}
		}
		{
			goto IL_01d7_1;
		}

IL_01ce_1:
		{
			bool L_45 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
			V_1 = L_45;
			goto IL_0208;
		}

IL_01d7_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), NULL);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
			goto IL_0208;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01e7;
		}
		throw e;
	}

CATCH_01e7:
	{
		Exception_t* L_46 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_11 = L_46;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		Exception_t* L_47 = V_11;
		AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_inline((((AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_47, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0224;
	}

IL_0208:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		bool L_48 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_inline((((AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_48, AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
	}

IL_0224:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CContainsAsyncU3Ed__0_1_SetStateMachine_m6DBC801FD345109FF494D30F43E84F8B4190B8FA_gshared (U3CContainsAsyncU3Ed__0_1_t1AD73E4858CE144ECF35A6093C886D4681473EE2* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CContinueWithU3Ed__54_1__ctor_m73A79B6CC99EB9CF46322BC008D88F7D750566F8_gshared (U3CContinueWithU3Ed__54_1_tD0D37E8AA6D35EEB7B61C173B67342626DFE4FB8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CContinueWithU3Ed__54_1_MoveNext_m03DF3F4FAA2EB70F5848E08936329C1FAF148B80_gshared (U3CContinueWithU3Ed__54_1_tD0D37E8AA6D35EEB7B61C173B67342626DFE4FB8* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Awaiter_tC5B5FC582CA52BAD4C926E26E94E0A1C02BD766E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const uint32_t SizeOf_T_t87E18815341B9134884C069380DC433D558C9DDC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t87E18815341B9134884C069380DC433D558C9DDC);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t87E18815341B9134884C069380DC433D558C9DDC);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_3 = alloca(SizeOf_Awaiter_tC5B5FC582CA52BAD4C926E26E94E0A1C02BD766E);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_6 = L_3;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_7 = L_3;
	int32_t V_0 = 0;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_1 = alloca(SizeOf_Awaiter_tC5B5FC582CA52BAD4C926E26E94E0A1C02BD766E);
	memset(V_1, 0, SizeOf_Awaiter_tC5B5FC582CA52BAD4C926E26E94E0A1C02BD766E);
	U3CContinueWithU3Ed__54_1_tD0D37E8AA6D35EEB7B61C173B67342626DFE4FB8* V_2 = NULL;
	Exception_t* V_3 = NULL;
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
			goto IL_0054_1;
		}

IL_000e_1:
		{
			Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_2 = *(Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
			il2cpp_codegen_write_instance_field_data<Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_2);
			InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)), il2cpp_rgctx_method(method->klass->rgctx_data, 3), (((UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_3);
			il2cpp_codegen_memcpy(V_1, L_3, SizeOf_Awaiter_tC5B5FC582CA52BAD4C926E26E94E0A1C02BD766E);
			bool L_4;
			L_4 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
			if (L_4)
			{
				goto IL_0070_1;
			}
		}
		{
			int32_t L_5 = 0;
			V_0 = L_5;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_5);
			il2cpp_codegen_memcpy(L_6, V_1, SizeOf_Awaiter_tC5B5FC582CA52BAD4C926E26E94E0A1C02BD766E);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_6, SizeOf_Awaiter_tC5B5FC582CA52BAD4C926E26E94E0A1C02BD766E);
			V_2 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CContinueWithU3Ed__54_1_tD0D37E8AA6D35EEB7B61C173B67342626DFE4FB8**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))((((AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1, (&V_2), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			goto IL_00d0;
		}

IL_0054_1:
		{
			il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6)), SizeOf_Awaiter_tC5B5FC582CA52BAD4C926E26E94E0A1C02BD766E);
			il2cpp_codegen_memcpy(V_1, L_7, SizeOf_Awaiter_tC5B5FC582CA52BAD4C926E26E94E0A1C02BD766E);
			il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6)))), SizeOf_Awaiter_tC5B5FC582CA52BAD4C926E26E94E0A1C02BD766E);
			int32_t L_8 = (-1);
			V_0 = L_8;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_8);
		}

IL_0070_1:
		{
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1, (Il2CppFullySharedGenericAny*)L_9);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_9, SizeOf_T_t87E18815341B9134884C069380DC433D558C9DDC);
			Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_10 = *(Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)), SizeOf_T_t87E18815341B9134884C069380DC433D558C9DDC);
			NullCheck(L_10);
			InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_11: *(void**)L_11));
			il2cpp_codegen_write_instance_field_data<Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), SizeOf_T_t87E18815341B9134884C069380DC433D558C9DDC);
			goto IL_00bc;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a4;
		}
		throw e;
	}

CATCH_00a4:
	{
		Exception_t* L_12 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_3 = L_12;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		Exception_t* L_13 = V_3;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline((((AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_13, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00d0;
	}

IL_00bc:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline((((AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), NULL);
	}

IL_00d0:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CContinueWithU3Ed__54_1_SetStateMachine_m3DFF26057F2DB34E05B07286193265D23D1D20FB_gshared (U3CContinueWithU3Ed__54_1_tD0D37E8AA6D35EEB7B61C173B67342626DFE4FB8* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CContinueWithU3Ed__55_1__ctor_m48ED371616FB94483865D28D00473055BFB92B1B_gshared (U3CContinueWithU3Ed__55_1_t53E0E39563FC69851BAB6B3B3BA7B4FDAA61950F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CContinueWithU3Ed__55_1_MoveNext_mCBF8459D27461CF7500054A5E4871ED1EE11530F_gshared (U3CContinueWithU3Ed__55_1_t53E0E39563FC69851BAB6B3B3BA7B4FDAA61950F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_Awaiter_t2CF675BFE50679BD4FF24F6AAD8799530FCF2AC2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const uint32_t SizeOf_T_t06FA98F80A554C91B828F7163EEE1AA4A3DDD4C4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t06FA98F80A554C91B828F7163EEE1AA4A3DDD4C4);
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T_t06FA98F80A554C91B828F7163EEE1AA4A3DDD4C4);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_4 = alloca(SizeOf_Awaiter_t2CF675BFE50679BD4FF24F6AAD8799530FCF2AC2);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_7 = L_4;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_8 = L_4;
	int32_t V_0 = 0;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_1 = alloca(SizeOf_Awaiter_t2CF675BFE50679BD4FF24F6AAD8799530FCF2AC2);
	memset(V_1, 0, SizeOf_Awaiter_t2CF675BFE50679BD4FF24F6AAD8799530FCF2AC2);
	U3CContinueWithU3Ed__55_1_t53E0E39563FC69851BAB6B3B3BA7B4FDAA61950F* V_2 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_4;
	memset((&V_4), 0, sizeof(V_4));
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
			goto IL_0062_1;
		}

IL_0014_1:
		{
			goto IL_00d3_1;
		}

IL_0019_1:
		{
			Func_2_tB9800595B3251D2492E40667A6C05061784D48FB* L_3 = *(Func_2_tB9800595B3251D2492E40667A6C05061784D48FB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
			il2cpp_codegen_write_instance_field_data<Func_2_tB9800595B3251D2492E40667A6C05061784D48FB*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_3);
			InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)), il2cpp_rgctx_method(method->klass->rgctx_data, 3), (((UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_4);
			il2cpp_codegen_memcpy(V_1, L_4, SizeOf_Awaiter_t2CF675BFE50679BD4FF24F6AAD8799530FCF2AC2);
			bool L_5;
			L_5 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
			if (L_5)
			{
				goto IL_007e_1;
			}
		}
		{
			int32_t L_6 = 0;
			V_0 = L_6;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_6);
			il2cpp_codegen_memcpy(L_7, V_1, SizeOf_Awaiter_t2CF675BFE50679BD4FF24F6AAD8799530FCF2AC2);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_7, SizeOf_Awaiter_t2CF675BFE50679BD4FF24F6AAD8799530FCF2AC2);
			V_2 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CContinueWithU3Ed__55_1_t53E0E39563FC69851BAB6B3B3BA7B4FDAA61950F**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))((((AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1, (&V_2), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			goto IL_013a;
		}

IL_0062_1:
		{
			il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6)), SizeOf_Awaiter_t2CF675BFE50679BD4FF24F6AAD8799530FCF2AC2);
			il2cpp_codegen_memcpy(V_1, L_8, SizeOf_Awaiter_t2CF675BFE50679BD4FF24F6AAD8799530FCF2AC2);
			il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6)))), SizeOf_Awaiter_t2CF675BFE50679BD4FF24F6AAD8799530FCF2AC2);
			int32_t L_9 = (-1);
			V_0 = L_9;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_9);
		}

IL_007e_1:
		{
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1, (Il2CppFullySharedGenericAny*)L_10);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_10, SizeOf_T_t06FA98F80A554C91B828F7163EEE1AA4A3DDD4C4);
			Func_2_tB9800595B3251D2492E40667A6C05061784D48FB* L_11 = *(Func_2_tB9800595B3251D2492E40667A6C05061784D48FB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			il2cpp_codegen_memcpy(L_12, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)), SizeOf_T_t06FA98F80A554C91B828F7163EEE1AA4A3DDD4C4);
			NullCheck(L_11);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_13;
			L_13 = InvokerFuncInvoker1< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_12: *(void**)L_12));
			V_4 = L_13;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_14;
			L_14 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_4), NULL);
			V_3 = L_14;
			bool L_15;
			L_15 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_3), NULL);
			if (L_15)
			{
				goto IL_00ef_1;
			}
		}
		{
			int32_t L_16 = 1;
			V_0 = L_16;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_16);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_17 = V_3;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_17);
			V_2 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CContinueWithU3Ed__55_1_t53E0E39563FC69851BAB6B3B3BA7B4FDAA61950F**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))((((AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_3), (&V_2), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
			goto IL_013a;
		}

IL_00d3_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_18 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_3 = L_18;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_19 = (-1);
			V_0 = L_19;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_19);
		}

IL_00ef_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_3), NULL);
			il2cpp_codegen_write_instance_field_data<Func_2_tB9800595B3251D2492E40667A6C05061784D48FB*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), (Func_2_tB9800595B3251D2492E40667A6C05061784D48FB*)NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), SizeOf_T_t06FA98F80A554C91B828F7163EEE1AA4A3DDD4C4);
			goto IL_0126;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_010c;
		}
		throw e;
	}

CATCH_010c:
	{
		Exception_t* L_20 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_5 = L_20;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		Exception_t* L_21 = V_5;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline((((AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_21, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_013a;
	}

IL_0126:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline((((AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), NULL);
	}

IL_013a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CContinueWithU3Ed__55_1_SetStateMachine_m17A7881C228497B8D1A24017115E0E27EF602DBD_gshared (U3CContinueWithU3Ed__55_1_t53E0E39563FC69851BAB6B3B3BA7B4FDAA61950F* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CContinueWithU3Ed__56_2__ctor_m113622FC943C9C0E1733882B89DC71841ED5FB01_gshared (U3CContinueWithU3Ed__56_2_t5BFF82E4C4260878AD209EB58142358B213FF7FC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CContinueWithU3Ed__56_2_MoveNext_mC16C587F5FEB36C65DB58251758F7E28FC3232DC_gshared (U3CContinueWithU3Ed__56_2_t5BFF82E4C4260878AD209EB58142358B213FF7FC* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TR_t1875D411D7155D8690C1DDA6A685A2E2E4BFC4B4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
	const uint32_t SizeOf_Awaiter_t30886F5AFE493452F2F42AB735F86DCB77B09D8C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const uint32_t SizeOf_T_t29195E0C03D37534040BF324ED49111DAF3A6C65 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t29195E0C03D37534040BF324ED49111DAF3A6C65);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t29195E0C03D37534040BF324ED49111DAF3A6C65);
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TR_t1875D411D7155D8690C1DDA6A685A2E2E4BFC4B4);
	const Il2CppFullySharedGenericAny L_15 = L_12;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_3 = alloca(SizeOf_Awaiter_t30886F5AFE493452F2F42AB735F86DCB77B09D8C);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_6 = L_3;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_7 = L_3;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TR_t1875D411D7155D8690C1DDA6A685A2E2E4BFC4B4);
	memset(V_1, 0, SizeOf_TR_t1875D411D7155D8690C1DDA6A685A2E2E4BFC4B4);
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_2 = alloca(SizeOf_Awaiter_t30886F5AFE493452F2F42AB735F86DCB77B09D8C);
	memset(V_2, 0, SizeOf_Awaiter_t30886F5AFE493452F2F42AB735F86DCB77B09D8C);
	U3CContinueWithU3Ed__56_2_t5BFF82E4C4260878AD209EB58142358B213FF7FC* V_3 = NULL;
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
			goto IL_0054_1;
		}

IL_000e_1:
		{
			Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
			il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_2);
			InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)), il2cpp_rgctx_method(method->klass->rgctx_data, 3), (((UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_3);
			il2cpp_codegen_memcpy(V_2, L_3, SizeOf_Awaiter_t30886F5AFE493452F2F42AB735F86DCB77B09D8C);
			bool L_4;
			L_4 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
			if (L_4)
			{
				goto IL_0070_1;
			}
		}
		{
			int32_t L_5 = 0;
			V_0 = L_5;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_5);
			il2cpp_codegen_memcpy(L_6, V_2, SizeOf_Awaiter_t30886F5AFE493452F2F42AB735F86DCB77B09D8C);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_6, SizeOf_Awaiter_t30886F5AFE493452F2F42AB735F86DCB77B09D8C);
			V_3 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CContinueWithU3Ed__56_2_t5BFF82E4C4260878AD209EB58142358B213FF7FC**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			goto IL_00c0;
		}

IL_0054_1:
		{
			il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6)), SizeOf_Awaiter_t30886F5AFE493452F2F42AB735F86DCB77B09D8C);
			il2cpp_codegen_memcpy(V_2, L_7, SizeOf_Awaiter_t30886F5AFE493452F2F42AB735F86DCB77B09D8C);
			il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6)))), SizeOf_Awaiter_t30886F5AFE493452F2F42AB735F86DCB77B09D8C);
			int32_t L_8 = (-1);
			V_0 = L_8;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_8);
		}

IL_0070_1:
		{
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, (Il2CppFullySharedGenericAny*)L_9);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_9, SizeOf_T_t29195E0C03D37534040BF324ED49111DAF3A6C65);
			Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_10 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)), SizeOf_T_t29195E0C03D37534040BF324ED49111DAF3A6C65);
			NullCheck(L_10);
			InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12);
			il2cpp_codegen_memcpy(V_1, L_12, SizeOf_TR_t1875D411D7155D8690C1DDA6A685A2E2E4BFC4B4);
			goto IL_00ab;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0091;
		}
		throw e;
	}

CATCH_0091:
	{
		Exception_t* L_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_4 = L_13;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		Exception_t* L_14 = V_4;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00c0;
	}

IL_00ab:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_memcpy(L_15, V_1, SizeOf_TR_t1875D411D7155D8690C1DDA6A685A2E2E4BFC4B4);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)) ? L_15: *(void**)L_15));
	}

IL_00c0:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CContinueWithU3Ed__56_2_SetStateMachine_mFBB726441652B60C86152D3ADF15E4815C116C5F_gshared (U3CContinueWithU3Ed__56_2_t5BFF82E4C4260878AD209EB58142358B213FF7FC* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CContinueWithU3Ed__57_2__ctor_m4589DCDADA57F23BFF28297C977BB1B659B1FE0F_gshared (U3CContinueWithU3Ed__57_2_t683DABF100C962A48190A893689C5CBBBF3317B4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CContinueWithU3Ed__57_2_MoveNext_m0E766AD18979D686EDFF868C28E5E5B32AB45D7D_gshared (U3CContinueWithU3Ed__57_2_t683DABF100C962A48190A893689C5CBBBF3317B4* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TR_tC4D387103E76B695344DB8DA1EB1B858E2C8396B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25));
	const uint32_t SizeOf_Awaiter_t8F3893A8D93E6187691DBFF3186FA5063EB2B05C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const uint32_t SizeOf_Awaiter_t110E665F1F9C8FE795C600778C33CFC7B5AAF4FE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const uint32_t SizeOf_UniTask_1_t64544CB25CAD074BCB267C9FA9697D52BA70368A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
	const uint32_t SizeOf_T_t48CFB856144918FCC77C0CD22ACEF30A6166AF58 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t48CFB856144918FCC77C0CD22ACEF30A6166AF58);
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T_t48CFB856144918FCC77C0CD22ACEF30A6166AF58);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TR_tC4D387103E76B695344DB8DA1EB1B858E2C8396B);
	const Il2CppFullySharedGenericAny L_24 = L_20;
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_TR_tC4D387103E76B695344DB8DA1EB1B858E2C8396B);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_4 = alloca(SizeOf_Awaiter_t8F3893A8D93E6187691DBFF3186FA5063EB2B05C);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_7 = L_4;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_8 = L_4;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_14 = alloca(SizeOf_Awaiter_t110E665F1F9C8FE795C600778C33CFC7B5AAF4FE);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_17 = L_14;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_18 = L_14;
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_13 = alloca(SizeOf_UniTask_1_t64544CB25CAD074BCB267C9FA9697D52BA70368A);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TR_tC4D387103E76B695344DB8DA1EB1B858E2C8396B);
	memset(V_1, 0, SizeOf_TR_tC4D387103E76B695344DB8DA1EB1B858E2C8396B);
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_2 = alloca(SizeOf_Awaiter_t8F3893A8D93E6187691DBFF3186FA5063EB2B05C);
	memset(V_2, 0, SizeOf_Awaiter_t8F3893A8D93E6187691DBFF3186FA5063EB2B05C);
	U3CContinueWithU3Ed__57_2_t683DABF100C962A48190A893689C5CBBBF3317B4* V_3 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_4 = alloca(SizeOf_Awaiter_t110E665F1F9C8FE795C600778C33CFC7B5AAF4FE);
	memset(V_4, 0, SizeOf_Awaiter_t110E665F1F9C8FE795C600778C33CFC7B5AAF4FE);
	UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 V_5 = alloca(SizeOf_UniTask_1_t64544CB25CAD074BCB267C9FA9697D52BA70368A);
	memset(V_5, 0, SizeOf_UniTask_1_t64544CB25CAD074BCB267C9FA9697D52BA70368A);
	Exception_t* V_6 = NULL;
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
			goto IL_0062_1;
		}

IL_0014_1:
		{
			goto IL_00d5_1;
		}

IL_0019_1:
		{
			Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2* L_3 = *(Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
			il2cpp_codegen_write_instance_field_data<Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_3);
			InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)), il2cpp_rgctx_method(method->klass->rgctx_data, 3), (((UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_4);
			il2cpp_codegen_memcpy(V_2, L_4, SizeOf_Awaiter_t8F3893A8D93E6187691DBFF3186FA5063EB2B05C);
			bool L_5;
			L_5 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
			if (L_5)
			{
				goto IL_007e_1;
			}
		}
		{
			int32_t L_6 = 0;
			V_0 = L_6;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_6);
			il2cpp_codegen_memcpy(L_7, V_2, SizeOf_Awaiter_t8F3893A8D93E6187691DBFF3186FA5063EB2B05C);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_7, SizeOf_Awaiter_t8F3893A8D93E6187691DBFF3186FA5063EB2B05C);
			V_3 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CContinueWithU3Ed__57_2_t683DABF100C962A48190A893689C5CBBBF3317B4**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			goto IL_014a;
		}

IL_0062_1:
		{
			il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)), SizeOf_Awaiter_t8F3893A8D93E6187691DBFF3186FA5063EB2B05C);
			il2cpp_codegen_memcpy(V_2, L_8, SizeOf_Awaiter_t8F3893A8D93E6187691DBFF3186FA5063EB2B05C);
			il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), SizeOf_Awaiter_t8F3893A8D93E6187691DBFF3186FA5063EB2B05C);
			int32_t L_9 = (-1);
			V_0 = L_9;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_9);
		}

IL_007e_1:
		{
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, (Il2CppFullySharedGenericAny*)L_10);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_10, SizeOf_T_t48CFB856144918FCC77C0CD22ACEF30A6166AF58);
			Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2* L_11 = *(Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
			il2cpp_codegen_memcpy(L_12, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6)), SizeOf_T_t48CFB856144918FCC77C0CD22ACEF30A6166AF58);
			NullCheck(L_11);
			InvokerActionInvoker2< Il2CppFullySharedGenericAny, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_12: *(void**)L_12), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_13);
			il2cpp_codegen_memcpy(V_5, L_13, SizeOf_UniTask_1_t64544CB25CAD074BCB267C9FA9697D52BA70368A);
			InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 17), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)V_5, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_14);
			il2cpp_codegen_memcpy(V_4, L_14, SizeOf_Awaiter_t110E665F1F9C8FE795C600778C33CFC7B5AAF4FE);
			bool L_15;
			L_15 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_4, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
			if (L_15)
			{
				goto IL_00f2_1;
			}
		}
		{
			int32_t L_16 = 1;
			V_0 = L_16;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_16);
			il2cpp_codegen_memcpy(L_17, V_4, SizeOf_Awaiter_t110E665F1F9C8FE795C600778C33CFC7B5AAF4FE);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_17, SizeOf_Awaiter_t110E665F1F9C8FE795C600778C33CFC7B5AAF4FE);
			V_3 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CContinueWithU3Ed__57_2_t683DABF100C962A48190A893689C5CBBBF3317B4**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_4, (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
			goto IL_014a;
		}

IL_00d5_1:
		{
			il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8)), SizeOf_Awaiter_t110E665F1F9C8FE795C600778C33CFC7B5AAF4FE);
			il2cpp_codegen_memcpy(V_4, L_18, SizeOf_Awaiter_t110E665F1F9C8FE795C600778C33CFC7B5AAF4FE);
			il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8)))), SizeOf_Awaiter_t110E665F1F9C8FE795C600778C33CFC7B5AAF4FE);
			int32_t L_19 = (-1);
			V_0 = L_19;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_19);
		}

IL_00f2_1:
		{
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)), il2cpp_rgctx_method(method->klass->rgctx_data, 24), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_4, (Il2CppFullySharedGenericAny*)L_20);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_20, SizeOf_TR_tC4D387103E76B695344DB8DA1EB1B858E2C8396B);
			il2cpp_codegen_write_instance_field_data<Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), (Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2*)NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6)))), SizeOf_T_t48CFB856144918FCC77C0CD22ACEF30A6166AF58);
			il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)), SizeOf_TR_tC4D387103E76B695344DB8DA1EB1B858E2C8396B);
			il2cpp_codegen_memcpy(V_1, L_21, SizeOf_TR_tC4D387103E76B695344DB8DA1EB1B858E2C8396B);
			goto IL_0135;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_011b;
		}
		throw e;
	}

CATCH_011b:
	{
		Exception_t* L_22 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_6 = L_22;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		Exception_t* L_23 = V_6;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_014a;
	}

IL_0135:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_memcpy(L_24, V_1, SizeOf_TR_tC4D387103E76B695344DB8DA1EB1B858E2C8396B);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)), il2cpp_rgctx_method(method->klass->rgctx_data, 27), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25)) ? L_24: *(void**)L_24));
	}

IL_014a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CContinueWithU3Ed__57_2_SetStateMachine_m62CCC23F27C313D273A8AF3064085C6A0F2B5433_gshared (U3CContinueWithU3Ed__57_2_t683DABF100C962A48190A893689C5CBBBF3317B4* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CContinueWithU3Ed__60_1__ctor_m1C7A306396D87F2A83628F91FF6BA4C101EF537A_gshared (U3CContinueWithU3Ed__60_1_t00A582DE27BE6086D3507289DB20E974D8C3F0F6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CContinueWithU3Ed__60_1_MoveNext_m766439AC84EFADFCBE8A7F2ECF3B4C65CCCDC05A_gshared (U3CContinueWithU3Ed__60_1_t00A582DE27BE6086D3507289DB20E974D8C3F0F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t7C99699352312AD9F753A4E4B194E2758D5C4AF3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t7C99699352312AD9F753A4E4B194E2758D5C4AF3);
	const Il2CppFullySharedGenericAny L_12 = L_9;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t7C99699352312AD9F753A4E4B194E2758D5C4AF3);
	memset(V_1, 0, SizeOf_T_t7C99699352312AD9F753A4E4B194E2758D5C4AF3);
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CContinueWithU3Ed__60_1_t00A582DE27BE6086D3507289DB20E974D8C3F0F6* V_3 = NULL;
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
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_2;
			L_2 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((((UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))), NULL);
			V_2 = L_2;
			bool L_3;
			L_3 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_3)
			{
				goto IL_0064_1;
			}
		}
		{
			int32_t L_4 = 0;
			V_0 = L_4;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_4);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_5 = V_2;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_5);
			V_3 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CContinueWithU3Ed__60_1_t00A582DE27BE6086D3507289DB20E974D8C3F0F6**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_2), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 2));
			goto IL_00a9;
		}

IL_0048_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_6 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			V_2 = L_6;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_7 = (-1);
			V_0 = L_7;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_7);
		}

IL_0064_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
			Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* L_8 = *(Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
			NullCheck(L_8);
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_8, (Il2CppFullySharedGenericAny*)L_9);
			il2cpp_codegen_memcpy(V_1, L_9, SizeOf_T_t7C99699352312AD9F753A4E4B194E2758D5C4AF3);
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
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00a9;
	}

IL_0094:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_memcpy(L_12, V_1, SizeOf_T_t7C99699352312AD9F753A4E4B194E2758D5C4AF3);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_12: *(void**)L_12));
	}

IL_00a9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CContinueWithU3Ed__60_1_SetStateMachine_mF0DE2C0D65D5D928CC4DA3F2376A4BAF14D2E1E2_gshared (U3CContinueWithU3Ed__60_1_t00A582DE27BE6086D3507289DB20E974D8C3F0F6* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CContinueWithU3Ed__61_1__ctor_m3E1ED1F79CB7E68802DCB99C3D675FF62B29A54C_gshared (U3CContinueWithU3Ed__61_1_tC8BE8753CEE7AFABC9AE1B27EAB8ABE8A9F85AA5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CContinueWithU3Ed__61_1_MoveNext_mF2F9A4D30BDD2624F015F2BAFEDE5FD365B32DC4_gshared (U3CContinueWithU3Ed__61_1_tC8BE8753CEE7AFABC9AE1B27EAB8ABE8A9F85AA5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t0B1E28F286F578AEF51C4AE78F786F95F4BE8DD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
	const uint32_t SizeOf_Awaiter_tA5F5EE9A1DE41895130E6F1765B69457F29D17E0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const uint32_t SizeOf_UniTask_1_t72A0AA700BC3C561935BF96326D6E539B26CA7E4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T_t0B1E28F286F578AEF51C4AE78F786F95F4BE8DD7);
	const Il2CppFullySharedGenericAny L_21 = L_17;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T_t0B1E28F286F578AEF51C4AE78F786F95F4BE8DD7);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_11 = alloca(SizeOf_Awaiter_tA5F5EE9A1DE41895130E6F1765B69457F29D17E0);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_14 = L_11;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_15 = L_11;
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_10 = alloca(SizeOf_UniTask_1_t72A0AA700BC3C561935BF96326D6E539B26CA7E4);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t0B1E28F286F578AEF51C4AE78F786F95F4BE8DD7);
	memset(V_1, 0, SizeOf_T_t0B1E28F286F578AEF51C4AE78F786F95F4BE8DD7);
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CContinueWithU3Ed__61_1_tC8BE8753CEE7AFABC9AE1B27EAB8ABE8A9F85AA5* V_3 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_4 = alloca(SizeOf_Awaiter_tA5F5EE9A1DE41895130E6F1765B69457F29D17E0);
	memset(V_4, 0, SizeOf_Awaiter_tA5F5EE9A1DE41895130E6F1765B69457F29D17E0);
	UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 V_5 = alloca(SizeOf_UniTask_1_t72A0AA700BC3C561935BF96326D6E539B26CA7E4);
	memset(V_5, 0, SizeOf_UniTask_1_t72A0AA700BC3C561935BF96326D6E539B26CA7E4);
	Exception_t* V_6 = NULL;
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
			goto IL_00be_1;
		}

IL_0019_1:
		{
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_3;
			L_3 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((((UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))), NULL);
			V_2 = L_3;
			bool L_4;
			L_4 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_4)
			{
				goto IL_0072_1;
			}
		}
		{
			int32_t L_5 = 0;
			V_0 = L_5;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_5);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_6 = V_2;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_6);
			V_3 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CContinueWithU3Ed__61_1_tC8BE8753CEE7AFABC9AE1B27EAB8ABE8A9F85AA5**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_2), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 2));
			goto IL_0120;
		}

IL_0056_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_7 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
			V_2 = L_7;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_8 = (-1);
			V_0 = L_8;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_8);
		}

IL_0072_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
			Func_1_tBAE452E06E04175D6A1F37BAA4412688F5DBD769* L_9 = *(Func_1_tBAE452E06E04175D6A1F37BAA4412688F5DBD769**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
			NullCheck(L_9);
			InvokerActionInvoker1< UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_9, (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_10);
			il2cpp_codegen_memcpy(V_5, L_10, SizeOf_UniTask_1_t72A0AA700BC3C561935BF96326D6E539B26CA7E4);
			InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)V_5, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_11);
			il2cpp_codegen_memcpy(V_4, L_11, SizeOf_Awaiter_tA5F5EE9A1DE41895130E6F1765B69457F29D17E0);
			bool L_12;
			L_12 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_4, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			if (L_12)
			{
				goto IL_00db_1;
			}
		}
		{
			int32_t L_13 = 1;
			V_0 = L_13;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_13);
			il2cpp_codegen_memcpy(L_14, V_4, SizeOf_Awaiter_tA5F5EE9A1DE41895130E6F1765B69457F29D17E0);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_14, SizeOf_Awaiter_tA5F5EE9A1DE41895130E6F1765B69457F29D17E0);
			V_3 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CContinueWithU3Ed__61_1_tC8BE8753CEE7AFABC9AE1B27EAB8ABE8A9F85AA5**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_4, (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
			goto IL_0120;
		}

IL_00be_1:
		{
			il2cpp_codegen_memcpy(L_15, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6)), SizeOf_Awaiter_tA5F5EE9A1DE41895130E6F1765B69457F29D17E0);
			il2cpp_codegen_memcpy(V_4, L_15, SizeOf_Awaiter_tA5F5EE9A1DE41895130E6F1765B69457F29D17E0);
			il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6)))), SizeOf_Awaiter_tA5F5EE9A1DE41895130E6F1765B69457F29D17E0);
			int32_t L_16 = (-1);
			V_0 = L_16;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_16);
		}

IL_00db_1:
		{
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_4, (Il2CppFullySharedGenericAny*)L_17);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_17, SizeOf_T_t0B1E28F286F578AEF51C4AE78F786F95F4BE8DD7);
			il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)), SizeOf_T_t0B1E28F286F578AEF51C4AE78F786F95F4BE8DD7);
			il2cpp_codegen_memcpy(V_1, L_18, SizeOf_T_t0B1E28F286F578AEF51C4AE78F786F95F4BE8DD7);
			goto IL_010b;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00f1;
		}
		throw e;
	}

CATCH_00f1:
	{
		Exception_t* L_19 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_6 = L_19;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		Exception_t* L_20 = V_6;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0120;
	}

IL_010b:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_memcpy(L_21, V_1, SizeOf_T_t0B1E28F286F578AEF51C4AE78F786F95F4BE8DD7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)) ? L_21: *(void**)L_21));
	}

IL_0120:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CContinueWithU3Ed__61_1_SetStateMachine_m9CF6516050753056B57B3E6E2564DF00E87A5762_gshared (U3CContinueWithU3Ed__61_1_tC8BE8753CEE7AFABC9AE1B27EAB8ABE8A9F85AA5* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountAsyncU3Ed__0_1__ctor_m33DC943D3AFF524D0C3D49CA883C597960A37D6A_gshared (U3CCountAsyncU3Ed__0_1_t1B3F667604D233DFA8519E75F1ADAD93C9E46CD6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountAsyncU3Ed__0_1_MoveNext_m29DDDC1E80AA29E13F007F21030D0BBE80D0ECFE_gshared (U3CCountAsyncU3Ed__0_1_t1B3F667604D233DFA8519E75F1ADAD93C9E46CD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_4;
	memset((&V_4), 0, sizeof(V_4));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_5;
	memset((&V_5), 0, sizeof(V_5));
	U3CCountAsyncU3Ed__0_1_t1B3F667604D233DFA8519E75F1ADAD93C9E46CD6* V_6 = NULL;
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
			goto IL_0046_1;
		}

IL_0014_1:
		{
			goto IL_014c_1;
		}

IL_0019_1:
		{
			__this->___U3CcountU3E5__1 = 0;
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

IL_0046_1:
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
				goto IL_004e_2;
			}

IL_004c_2:
			{
				goto IL_00ad_2;
			}

IL_004e_2:
			{
				goto IL_0065_2;
			}

IL_0051_2:
			{
				int32_t L_7 = __this->___U3CcountU3E5__1;
				V_2 = L_7;
				int32_t L_8 = V_2;
				if (((int64_t)L_8 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_8 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
			}

IL_0065_2:
			{
				RuntimeObject* L_9 = __this->___U3CeU3E5__2;
				NullCheck(L_9);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_10;
				L_10 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9);
				V_5 = L_10;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_11;
				L_11 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_5), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_4 = L_11;
				bool L_12;
				L_12 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_4), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_00ca_2;
				}
			}
			{
				int32_t L_13 = 0;
				V_0 = L_13;
				__this->___U3CU3E1__state = L_13;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_14 = V_4;
				__this->___U3CU3Eu__1 = L_14;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_6 = __this;
				AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_15 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CCountAsyncU3Ed__0_1_t1B3F667604D233DFA8519E75F1ADAD93C9E46CD6**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_15, (&V_4), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
				goto IL_01f0;
			}

IL_00ad_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_16 = __this->___U3CU3Eu__1;
				V_4 = L_16;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_17 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_17, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_18 = (-1);
				V_0 = L_18;
				__this->___U3CU3E1__state = L_18;
			}

IL_00ca_2:
			{
				bool L_19;
				L_19 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_4), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5 = L_19;
				bool L_20 = __this->___U3CU3Es__5;
				V_3 = L_20;
				bool L_21 = V_3;
				if (L_21)
				{
					goto IL_0051_2;
				}
			}
			{
				goto IL_00f3_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00e7_1;
			}
			throw e;
		}

CATCH_00e7_1:
		{
			RuntimeObject* L_22 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_7 = L_22;
			RuntimeObject* L_23 = V_7;
			__this->___U3CU3Es__3 = L_23;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_23);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_00f3_1;
		}

IL_00f3_1:
		{
			RuntimeObject* L_24 = __this->___U3CeU3E5__2;
			V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_24) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_25 = V_8;
			if (!L_25)
			{
				goto IL_0172_1;
			}
		}
		{
			RuntimeObject* L_26 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_26);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_27;
			L_27 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_26);
			V_10 = L_27;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_28;
			L_28 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_10), NULL);
			V_9 = L_28;
			bool L_29;
			L_29 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_9), NULL);
			if (L_29)
			{
				goto IL_0169_1;
			}
		}
		{
			int32_t L_30 = 1;
			V_0 = L_30;
			__this->___U3CU3E1__state = L_30;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_31 = V_9;
			__this->___U3CU3Eu__2 = L_31;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
			V_6 = __this;
			AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_32 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CCountAsyncU3Ed__0_1_t1B3F667604D233DFA8519E75F1ADAD93C9E46CD6**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_32, (&V_9), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
			goto IL_01f0;
		}

IL_014c_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_33 = __this->___U3CU3Eu__2;
			V_9 = L_33;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_34 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_34, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_35 = (-1);
			V_0 = L_35;
			__this->___U3CU3E1__state = L_35;
		}

IL_0169_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_9), NULL);
		}

IL_0172_1:
		{
			RuntimeObject* L_36 = __this->___U3CU3Es__3;
			V_7 = L_36;
			RuntimeObject* L_37 = V_7;
			if (!L_37)
			{
				goto IL_019c_1;
			}
		}
		{
			RuntimeObject* L_38 = V_7;
			V_11 = ((Exception_t*)IsInstClass((RuntimeObject*)L_38, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_39 = V_11;
			if (L_39)
			{
				goto IL_018f_1;
			}
		}
		{
			RuntimeObject* L_40 = V_7;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, method);
		}

IL_018f_1:
		{
			Exception_t* L_41 = V_11;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_42;
			L_42 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_41, NULL);
			NullCheck(L_42);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_42, NULL);
		}

IL_019c_1:
		{
			int32_t L_43 = __this->___U3CU3Es__4;
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			int32_t L_44 = __this->___U3CcountU3E5__1;
			V_1 = L_44;
			goto IL_01d4;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01b3;
		}
		throw e;
	}

CATCH_01b3:
	{
		Exception_t* L_45 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_11 = L_45;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_46 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder);
		Exception_t* L_47 = V_11;
		AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_inline(L_46, L_47, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_01f0;
	}

IL_01d4:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_48 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder);
		int32_t L_49 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_inline(L_48, L_49, AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_RuntimeMethod_var);
	}

IL_01f0:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountAsyncU3Ed__0_1_SetStateMachine_mCE7F3E3082A85D68E6E36698A0D550B175EC5F7C_gshared (U3CCountAsyncU3Ed__0_1_t1B3F667604D233DFA8519E75F1ADAD93C9E46CD6* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountAsyncU3Ed__1_1__ctor_m5EF9FCAC18A31FF9CA10BE5CBD719D8F2F4FB2DF_gshared (U3CCountAsyncU3Ed__1_1_t40DB3FBC2BFC853EBF4815B21403CBDD16C7C98A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountAsyncU3Ed__1_1_MoveNext_mF7A6110811E3D6BBB299FD6B65E600DAF970C5BE_gshared (U3CCountAsyncU3Ed__1_1_t40DB3FBC2BFC853EBF4815B21403CBDD16C7C98A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t7B164191819EDCEF57D93620276FD35C37629C16 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_t7B164191819EDCEF57D93620276FD35C37629C16);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_6;
	memset((&V_6), 0, sizeof(V_6));
	U3CCountAsyncU3Ed__1_1_t40DB3FBC2BFC853EBF4815B21403CBDD16C7C98A* V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
	memset((&V_10), 0, sizeof(V_10));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Exception_t* V_12 = NULL;
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
			goto IL_0046_1;
		}

IL_0014_1:
		{
			goto IL_016a_1;
		}

IL_0019_1:
		{
			__this->___U3CcountU3E5__1 = 0;
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

IL_0046_1:
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
				goto IL_004e_2;
			}

IL_004c_2:
			{
				goto IL_00c9_2;
			}

IL_004e_2:
			{
				goto IL_0081_2;
			}

IL_0051_2:
			{
				Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = __this->___predicate;
				RuntimeObject* L_8 = __this->___U3CeU3E5__2;
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				NullCheck(L_7);
				bool L_10;
				L_10 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_9: *(void**)L_9));
				V_2 = L_10;
				bool L_11 = V_2;
				if (!L_11)
				{
					goto IL_0080_2;
				}
			}
			{
				int32_t L_12 = __this->___U3CcountU3E5__1;
				V_3 = L_12;
				int32_t L_13 = V_3;
				if (((int64_t)L_13 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_13 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
			}

IL_0080_2:
			{
			}

IL_0081_2:
			{
				RuntimeObject* L_14 = __this->___U3CeU3E5__2;
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
					goto IL_00e6_2;
				}
			}
			{
				int32_t L_18 = 0;
				V_0 = L_18;
				__this->___U3CU3E1__state = L_18;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_19 = V_5;
				__this->___U3CU3Eu__1 = L_19;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_7 = __this;
				AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_20 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CCountAsyncU3Ed__1_1_t40DB3FBC2BFC853EBF4815B21403CBDD16C7C98A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_20, (&V_5), (&V_7), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_020e;
			}

IL_00c9_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_21 = __this->___U3CU3Eu__1;
				V_5 = L_21;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_22 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_22, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_23 = (-1);
				V_0 = L_23;
				__this->___U3CU3E1__state = L_23;
			}

IL_00e6_2:
			{
				bool L_24;
				L_24 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_5), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5 = L_24;
				bool L_25 = __this->___U3CU3Es__5;
				V_4 = L_25;
				bool L_26 = V_4;
				if (L_26)
				{
					goto IL_0051_2;
				}
			}
			{
				goto IL_0111_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0105_1;
			}
			throw e;
		}

CATCH_0105_1:
		{
			RuntimeObject* L_27 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_8 = L_27;
			RuntimeObject* L_28 = V_8;
			__this->___U3CU3Es__3 = L_28;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_28);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0111_1;
		}

IL_0111_1:
		{
			RuntimeObject* L_29 = __this->___U3CeU3E5__2;
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_29) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_30 = V_9;
			if (!L_30)
			{
				goto IL_0190_1;
			}
		}
		{
			RuntimeObject* L_31 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_31);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_32;
			L_32 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_31);
			V_11 = L_32;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_33;
			L_33 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_11), NULL);
			V_10 = L_33;
			bool L_34;
			L_34 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_34)
			{
				goto IL_0187_1;
			}
		}
		{
			int32_t L_35 = 1;
			V_0 = L_35;
			__this->___U3CU3E1__state = L_35;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36 = V_10;
			__this->___U3CU3Eu__2 = L_36;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
			V_7 = __this;
			AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_37 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CCountAsyncU3Ed__1_1_t40DB3FBC2BFC853EBF4815B21403CBDD16C7C98A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_37, (&V_10), (&V_7), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_020e;
		}

IL_016a_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_38 = __this->___U3CU3Eu__2;
			V_10 = L_38;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_39 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_39, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_40 = (-1);
			V_0 = L_40;
			__this->___U3CU3E1__state = L_40;
		}

IL_0187_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_0190_1:
		{
			RuntimeObject* L_41 = __this->___U3CU3Es__3;
			V_8 = L_41;
			RuntimeObject* L_42 = V_8;
			if (!L_42)
			{
				goto IL_01ba_1;
			}
		}
		{
			RuntimeObject* L_43 = V_8;
			V_12 = ((Exception_t*)IsInstClass((RuntimeObject*)L_43, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_44 = V_12;
			if (L_44)
			{
				goto IL_01ad_1;
			}
		}
		{
			RuntimeObject* L_45 = V_8;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, method);
		}

IL_01ad_1:
		{
			Exception_t* L_46 = V_12;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_47;
			L_47 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_46, NULL);
			NullCheck(L_47);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_47, NULL);
		}

IL_01ba_1:
		{
			int32_t L_48 = __this->___U3CU3Es__4;
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			int32_t L_49 = __this->___U3CcountU3E5__1;
			V_1 = L_49;
			goto IL_01f2;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01d1;
		}
		throw e;
	}

CATCH_01d1:
	{
		Exception_t* L_50 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_12 = L_50;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_51 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder);
		Exception_t* L_52 = V_12;
		AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_inline(L_51, L_52, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_020e;
	}

IL_01f2:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_53 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder);
		int32_t L_54 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_inline(L_53, L_54, AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_RuntimeMethod_var);
	}

IL_020e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountAsyncU3Ed__1_1_SetStateMachine_mFA7AA24B4C1066A7E59C73FEA47AC58CC958BFBF_gshared (U3CCountAsyncU3Ed__1_1_t40DB3FBC2BFC853EBF4815B21403CBDD16C7C98A* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountAwaitAsyncU3Ed__2_1__ctor_m5C8792A53CE7F0933FBF724138A565D208473269_gshared (U3CCountAwaitAsyncU3Ed__2_1_t287315198B91FA723973B7E1F763E526C60C14C7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountAwaitAsyncU3Ed__2_1_MoveNext_mC6F9ABCE0C6BE75654B3CB2E4B62BF77406DBDA9_gshared (U3CCountAwaitAsyncU3Ed__2_1_t287315198B91FA723973B7E1F763E526C60C14C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t819535C8EFA8C83514B62FEEC39309C2657D560F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t819535C8EFA8C83514B62FEEC39309C2657D560F);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CCountAwaitAsyncU3Ed__2_1_t287315198B91FA723973B7E1F763E526C60C14C7* V_5 = NULL;
	int32_t V_6 = 0;
	bool V_7 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_8;
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
			goto IL_0047_1;
		}

IL_0015_1:
		{
			goto IL_01e5_1;
		}

IL_001a_1:
		{
			__this->___U3CcountU3E5__1 = 0;
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
				if (!L_6)
				{
					goto IL_0053_2;
				}
			}
			{
				goto IL_004d_2;
			}

IL_004d_2:
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_0055_2;
				}
			}
			{
				goto IL_005a_2;
			}

IL_0053_2:
			{
				goto IL_00b2_2;
			}

IL_0055_2:
			{
				goto IL_0144_2;
			}

IL_005a_2:
			{
				goto IL_00fc_2;
			}

IL_0060_2:
			{
				Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C* L_8 = __this->___predicate;
				RuntimeObject* L_9 = __this->___U3CeU3E5__2;
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
					goto IL_00ce_2;
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
				AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_16 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CCountAwaitAsyncU3Ed__2_1_t287315198B91FA723973B7E1F763E526C60C14C7**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_16, (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0289;
			}

IL_00b2_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_17 = __this->___U3CU3Eu__1;
				V_3 = L_17;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_18 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_18, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state = L_19;
			}

IL_00ce_2:
			{
				bool L_20;
				L_20 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5 = L_20;
				bool L_21 = __this->___U3CU3Es__5;
				V_2 = L_21;
				bool L_22 = V_2;
				if (!L_22)
				{
					goto IL_00fb_2;
				}
			}
			{
				int32_t L_23 = __this->___U3CcountU3E5__1;
				V_6 = L_23;
				int32_t L_24 = V_6;
				if (((int64_t)L_24 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_24 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
			}

IL_00fb_2:
			{
			}

IL_00fc_2:
			{
				RuntimeObject* L_25 = __this->___U3CeU3E5__2;
				NullCheck(L_25);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_26;
				L_26 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_25);
				V_4 = L_26;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_27;
				L_27 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_8 = L_27;
				bool L_28;
				L_28 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_8), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_28)
				{
					goto IL_0161_2;
				}
			}
			{
				int32_t L_29 = 1;
				V_0 = L_29;
				__this->___U3CU3E1__state = L_29;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_30 = V_8;
				__this->___U3CU3Eu__1 = L_30;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_31 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CCountAwaitAsyncU3Ed__2_1_t287315198B91FA723973B7E1F763E526C60C14C7**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_31, (&V_8), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0289;
			}

IL_0144_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_32 = __this->___U3CU3Eu__1;
				V_8 = L_32;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_33 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_33, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_34 = (-1);
				V_0 = L_34;
				__this->___U3CU3E1__state = L_34;
			}

IL_0161_2:
			{
				bool L_35;
				L_35 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_8), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_35;
				bool L_36 = __this->___U3CU3Es__6;
				V_7 = L_36;
				bool L_37 = V_7;
				if (L_37)
				{
					goto IL_0060_2;
				}
			}
			{
				goto IL_018c_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0180_1;
			}
			throw e;
		}

CATCH_0180_1:
		{
			RuntimeObject* L_38 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_9 = L_38;
			RuntimeObject* L_39 = V_9;
			__this->___U3CU3Es__3 = L_39;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_39);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_018c_1;
		}

IL_018c_1:
		{
			RuntimeObject* L_40 = __this->___U3CeU3E5__2;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_40) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_41 = V_10;
			if (!L_41)
			{
				goto IL_020b_1;
			}
		}
		{
			RuntimeObject* L_42 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_42);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_43;
			L_43 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_42);
			V_12 = L_43;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_44;
			L_44 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_44;
			bool L_45;
			L_45 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_45)
			{
				goto IL_0202_1;
			}
		}
		{
			int32_t L_46 = 2;
			V_0 = L_46;
			__this->___U3CU3E1__state = L_46;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47 = V_11;
			__this->___U3CU3Eu__2 = L_47;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
			V_5 = __this;
			AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_48 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CCountAwaitAsyncU3Ed__2_1_t287315198B91FA723973B7E1F763E526C60C14C7**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_48, (&V_11), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_0289;
		}

IL_01e5_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_49 = __this->___U3CU3Eu__2;
			V_11 = L_49;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_50 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_50, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_51 = (-1);
			V_0 = L_51;
			__this->___U3CU3E1__state = L_51;
		}

IL_0202_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_020b_1:
		{
			RuntimeObject* L_52 = __this->___U3CU3Es__3;
			V_9 = L_52;
			RuntimeObject* L_53 = V_9;
			if (!L_53)
			{
				goto IL_0235_1;
			}
		}
		{
			RuntimeObject* L_54 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_54, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_55 = V_13;
			if (L_55)
			{
				goto IL_0228_1;
			}
		}
		{
			RuntimeObject* L_56 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_56, method);
		}

IL_0228_1:
		{
			Exception_t* L_57 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_58;
			L_58 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_57, NULL);
			NullCheck(L_58);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_58, NULL);
		}

IL_0235_1:
		{
			int32_t L_59 = __this->___U3CU3Es__4;
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			int32_t L_60 = __this->___U3CcountU3E5__1;
			V_1 = L_60;
			goto IL_026d;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_024c;
		}
		throw e;
	}

CATCH_024c:
	{
		Exception_t* L_61 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_13 = L_61;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_62 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder);
		Exception_t* L_63 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_inline(L_62, L_63, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0289;
	}

IL_026d:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_64 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder);
		int32_t L_65 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_inline(L_64, L_65, AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_RuntimeMethod_var);
	}

IL_0289:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountAwaitAsyncU3Ed__2_1_SetStateMachine_m77DEB53C53D7A062A5AE500B119898BF71C09783_gshared (U3CCountAwaitAsyncU3Ed__2_1_t287315198B91FA723973B7E1F763E526C60C14C7* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountAwaitWithCancellationAsyncU3Ed__3_1__ctor_m7042EEACE4E8DD204BCB509C8858FBC7EDC0794F_gshared (U3CCountAwaitWithCancellationAsyncU3Ed__3_1_tE27B9C445E0CC8458525CC3EA335D3CA6BC36113* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountAwaitWithCancellationAsyncU3Ed__3_1_MoveNext_mB049FD8DE1A26D721D9ABDC164F20B0C17E6123E_gshared (U3CCountAwaitWithCancellationAsyncU3Ed__3_1_tE27B9C445E0CC8458525CC3EA335D3CA6BC36113* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t1F1A52724E28F4DFCAA7A05FAC342D8F534777FD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t1F1A52724E28F4DFCAA7A05FAC342D8F534777FD);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CCountAwaitWithCancellationAsyncU3Ed__3_1_tE27B9C445E0CC8458525CC3EA335D3CA6BC36113* V_5 = NULL;
	int32_t V_6 = 0;
	bool V_7 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_8;
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
			goto IL_0047_1;
		}

IL_0015_1:
		{
			goto IL_01eb_1;
		}

IL_001a_1:
		{
			__this->___U3CcountU3E5__1 = 0;
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
				if (!L_6)
				{
					goto IL_0053_2;
				}
			}
			{
				goto IL_004d_2;
			}

IL_004d_2:
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_0055_2;
				}
			}
			{
				goto IL_005a_2;
			}

IL_0053_2:
			{
				goto IL_00b8_2;
			}

IL_0055_2:
			{
				goto IL_014a_2;
			}

IL_005a_2:
			{
				goto IL_0102_2;
			}

IL_0060_2:
			{
				Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814* L_8 = __this->___predicate;
				RuntimeObject* L_9 = __this->___U3CeU3E5__2;
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
					goto IL_00d4_2;
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
				AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_17 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CCountAwaitWithCancellationAsyncU3Ed__3_1_tE27B9C445E0CC8458525CC3EA335D3CA6BC36113**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_028f;
			}

IL_00b8_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_18 = __this->___U3CU3Eu__1;
				V_3 = L_18;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_19 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state = L_20;
			}

IL_00d4_2:
			{
				bool L_21;
				L_21 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5 = L_21;
				bool L_22 = __this->___U3CU3Es__5;
				V_2 = L_22;
				bool L_23 = V_2;
				if (!L_23)
				{
					goto IL_0101_2;
				}
			}
			{
				int32_t L_24 = __this->___U3CcountU3E5__1;
				V_6 = L_24;
				int32_t L_25 = V_6;
				if (((int64_t)L_25 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_25 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
			}

IL_0101_2:
			{
			}

IL_0102_2:
			{
				RuntimeObject* L_26 = __this->___U3CeU3E5__2;
				NullCheck(L_26);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_27;
				L_27 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_26);
				V_4 = L_27;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28;
				L_28 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_8 = L_28;
				bool L_29;
				L_29 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_8), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_0167_2;
				}
			}
			{
				int32_t L_30 = 1;
				V_0 = L_30;
				__this->___U3CU3E1__state = L_30;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_31 = V_8;
				__this->___U3CU3Eu__1 = L_31;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_32 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CCountAwaitWithCancellationAsyncU3Ed__3_1_tE27B9C445E0CC8458525CC3EA335D3CA6BC36113**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_32, (&V_8), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_028f;
			}

IL_014a_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_33 = __this->___U3CU3Eu__1;
				V_8 = L_33;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_34, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_35 = (-1);
				V_0 = L_35;
				__this->___U3CU3E1__state = L_35;
			}

IL_0167_2:
			{
				bool L_36;
				L_36 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_8), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_36;
				bool L_37 = __this->___U3CU3Es__6;
				V_7 = L_37;
				bool L_38 = V_7;
				if (L_38)
				{
					goto IL_0060_2;
				}
			}
			{
				goto IL_0192_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0186_1;
			}
			throw e;
		}

CATCH_0186_1:
		{
			RuntimeObject* L_39 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_9 = L_39;
			RuntimeObject* L_40 = V_9;
			__this->___U3CU3Es__3 = L_40;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_40);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0192_1;
		}

IL_0192_1:
		{
			RuntimeObject* L_41 = __this->___U3CeU3E5__2;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_41) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_42 = V_10;
			if (!L_42)
			{
				goto IL_0211_1;
			}
		}
		{
			RuntimeObject* L_43 = __this->___U3CeU3E5__2;
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
				goto IL_0208_1;
			}
		}
		{
			int32_t L_47 = 2;
			V_0 = L_47;
			__this->___U3CU3E1__state = L_47;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_48 = V_11;
			__this->___U3CU3Eu__2 = L_48;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
			V_5 = __this;
			AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_49 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CCountAwaitWithCancellationAsyncU3Ed__3_1_tE27B9C445E0CC8458525CC3EA335D3CA6BC36113**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_49, (&V_11), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_028f;
		}

IL_01eb_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50 = __this->___U3CU3Eu__2;
			V_11 = L_50;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_51 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_51, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_52 = (-1);
			V_0 = L_52;
			__this->___U3CU3E1__state = L_52;
		}

IL_0208_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_0211_1:
		{
			RuntimeObject* L_53 = __this->___U3CU3Es__3;
			V_9 = L_53;
			RuntimeObject* L_54 = V_9;
			if (!L_54)
			{
				goto IL_023b_1;
			}
		}
		{
			RuntimeObject* L_55 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_55, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_56 = V_13;
			if (L_56)
			{
				goto IL_022e_1;
			}
		}
		{
			RuntimeObject* L_57 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_57, method);
		}

IL_022e_1:
		{
			Exception_t* L_58 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_59;
			L_59 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_58, NULL);
			NullCheck(L_59);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_59, NULL);
		}

IL_023b_1:
		{
			int32_t L_60 = __this->___U3CU3Es__4;
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			int32_t L_61 = __this->___U3CcountU3E5__1;
			V_1 = L_61;
			goto IL_0273;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0252;
		}
		throw e;
	}

CATCH_0252:
	{
		Exception_t* L_62 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_13 = L_62;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_63 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder);
		Exception_t* L_64 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_inline(L_63, L_64, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_028f;
	}

IL_0273:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_65 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder);
		int32_t L_66 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_inline(L_65, L_66, AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_RuntimeMethod_var);
	}

IL_028f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountAwaitWithCancellationAsyncU3Ed__3_1_SetStateMachine_m207B62F8124715686A570B51AFF044D2CA3C9069_gshared (U3CCountAwaitWithCancellationAsyncU3Ed__3_1_tE27B9C445E0CC8458525CC3EA335D3CA6BC36113* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateAsyncU3Ed__6__ctor_mB022DB24BBA55FD047CEAC23A4F29C508102E350_gshared (U3CCreateAsyncU3Ed__6_t2A7AD0388339CB1C21AA28B337F57D32A5F3892F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateAsyncU3Ed__6_MoveNext_m922BA9FB4A1A6213A8C48AC22E450586CB0AA94E_gshared (U3CCreateAsyncU3Ed__6_t2A7AD0388339CB1C21AA28B337F57D32A5F3892F* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Awaiter_t171F75AA3109A10E9DFE1FE8317BF2ACCC9DEC22 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
	const uint32_t SizeOf_UniTask_1_tF633D478EFDF97E37F5A92A0353534B172580C19 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const uint32_t SizeOf_TElement_t0AA8EFAEEA80BF74391A61BEB912C2DE586B9049 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TKey_tFA2AF7648AD0EB56A885B75163B6D4B484192558 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25));
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_TKey_tFA2AF7648AD0EB56A885B75163B6D4B484192558);
	const Il2CppFullySharedGenericAny L_25 = L_19;
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TKey_tFA2AF7648AD0EB56A885B75163B6D4B484192558);
	const Il2CppFullySharedGenericAny L_28 = L_20;
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_TKey_tFA2AF7648AD0EB56A885B75163B6D4B484192558);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TElement_t0AA8EFAEEA80BF74391A61BEB912C2DE586B9049);
	const Il2CppFullySharedGenericAny L_34 = L_11;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_13 = alloca(SizeOf_Awaiter_t171F75AA3109A10E9DFE1FE8317BF2ACCC9DEC22);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_16 = L_13;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_17 = L_13;
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_12 = alloca(SizeOf_UniTask_1_tF633D478EFDF97E37F5A92A0353534B172580C19);
	int32_t V_0 = 0;
	Lookup_2_t578DFDDA13AC7D1AE589489B483A819824BFB703* V_1 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_2 = alloca(SizeOf_Awaiter_t171F75AA3109A10E9DFE1FE8317BF2ACCC9DEC22);
	memset(V_2, 0, SizeOf_Awaiter_t171F75AA3109A10E9DFE1FE8317BF2ACCC9DEC22);
	UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 V_3 = alloca(SizeOf_UniTask_1_tF633D478EFDF97E37F5A92A0353534B172580C19);
	memset(V_3, 0, SizeOf_UniTask_1_tF633D478EFDF97E37F5A92A0353534B172580C19);
	U3CCreateAsyncU3Ed__6_t2A7AD0388339CB1C21AA28B337F57D32A5F3892F* V_4 = NULL;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	Exception_t* V_8 = NULL;
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
			goto IL_0011_1;
		}

IL_000c_1:
		{
			goto IL_00b2_1;
		}

IL_0011_1:
		{
			RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C* L_3 = (Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
			((  void (*) (Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			il2cpp_codegen_write_instance_field_data<Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_3);
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4;
			L_4 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((((ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
			il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_4);
			int32_t L_5;
			L_5 = ((  int32_t (*) (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))((((ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_5);
			int32_t L_6;
			L_6 = ((  int32_t (*) (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((((ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_6);
			goto IL_0181_1;
		}

IL_005b_1:
		{
			Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2* L_7 = *(Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			int32_t L_9 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			NullCheck(L_8);
			int32_t L_10 = L_9;
			il2cpp_codegen_memcpy(L_11, (L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_TElement_t0AA8EFAEEA80BF74391A61BEB912C2DE586B9049);
			NullCheck(L_7);
			InvokerActionInvoker2< Il2CppFullySharedGenericAny, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_11: *(void**)L_11), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_12);
			il2cpp_codegen_memcpy(V_3, L_12, SizeOf_UniTask_1_tF633D478EFDF97E37F5A92A0353534B172580C19);
			InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)V_3, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_13);
			il2cpp_codegen_memcpy(V_2, L_13, SizeOf_Awaiter_t171F75AA3109A10E9DFE1FE8317BF2ACCC9DEC22);
			bool L_14;
			L_14 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
			if (L_14)
			{
				goto IL_00ce_1;
			}
		}
		{
			int32_t L_15 = 0;
			V_0 = L_15;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_15);
			il2cpp_codegen_memcpy(L_16, V_2, SizeOf_Awaiter_t171F75AA3109A10E9DFE1FE8317BF2ACCC9DEC22);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_16, SizeOf_Awaiter_t171F75AA3109A10E9DFE1FE8317BF2ACCC9DEC22);
			V_4 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_tC4D6EED0D569FD53BACBD70A8EB0AF3AC98A3208*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CCreateAsyncU3Ed__6_t2A7AD0388339CB1C21AA28B337F57D32A5F3892F**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))((((AsyncUniTaskMethodBuilder_1_tC4D6EED0D569FD53BACBD70A8EB0AF3AC98A3208*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
			goto IL_01f1;
		}

IL_00b2_1:
		{
			il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_Awaiter_t171F75AA3109A10E9DFE1FE8317BF2ACCC9DEC22);
			il2cpp_codegen_memcpy(V_2, L_17, SizeOf_Awaiter_t171F75AA3109A10E9DFE1FE8317BF2ACCC9DEC22);
			il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)))), SizeOf_Awaiter_t171F75AA3109A10E9DFE1FE8317BF2ACCC9DEC22);
			int32_t L_18 = (-1);
			V_0 = L_18;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_18);
		}

IL_00ce_1:
		{
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)), il2cpp_rgctx_method(method->klass->rgctx_data, 24), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, (Il2CppFullySharedGenericAny*)L_19);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_19, SizeOf_TKey_tFA2AF7648AD0EB56A885B75163B6D4B484192558);
			il2cpp_codegen_memcpy(L_20, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)), SizeOf_TKey_tFA2AF7648AD0EB56A885B75163B6D4B484192558);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_20, SizeOf_TKey_tFA2AF7648AD0EB56A885B75163B6D4B484192558);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)))), SizeOf_TKey_tFA2AF7648AD0EB56A885B75163B6D4B484192558);
			Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C* L_21 = *(Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
			il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_TKey_tFA2AF7648AD0EB56A885B75163B6D4B484192558);
			NullCheck(L_21);
			bool L_23;
			L_23 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD** >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)), il2cpp_rgctx_method(method->klass->rgctx_data, 27), L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25)) ? L_22: *(void**)L_22), (((Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)))));
			V_5 = (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
			bool L_24 = V_5;
			if (!L_24)
			{
				goto IL_013e_1;
			}
		}
		{
			il2cpp_codegen_memcpy(L_25, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_TKey_tFA2AF7648AD0EB56A885B75163B6D4B484192558);
			Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD* L_26 = (Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 26));
			InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)), il2cpp_rgctx_method(method->klass->rgctx_data, 29), L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25)) ? L_25: *(void**)L_25));
			il2cpp_codegen_write_instance_field_data<Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_26);
			Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C* L_27 = *(Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
			il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_TKey_tFA2AF7648AD0EB56A885B75163B6D4B484192558);
			Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD* L_29 = *(Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
			NullCheck(L_27);
			InvokerActionInvoker2< Il2CppFullySharedGenericAny, Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25)) ? L_28: *(void**)L_28), L_29);
		}

IL_013e_1:
		{
			Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD* L_30 = *(Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_31 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			int32_t L_32 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			NullCheck(L_31);
			int32_t L_33 = L_32;
			il2cpp_codegen_memcpy(L_34, (L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)), SizeOf_TElement_t0AA8EFAEEA80BF74391A61BEB912C2DE586B9049);
			NullCheck(L_30);
			InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)), il2cpp_rgctx_method(method->klass->rgctx_data, 31), L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_34: *(void**)L_34));
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), SizeOf_TKey_tFA2AF7648AD0EB56A885B75163B6D4B484192558);
			il2cpp_codegen_write_instance_field_data<Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), (Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD*)NULL);
			int32_t L_35 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			V_6 = L_35;
			int32_t L_36 = V_6;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), ((int32_t)il2cpp_codegen_add(L_36, 1)));
		}

IL_0181_1:
		{
			int32_t L_37 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			int32_t L_38 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_7 = (bool)((((int32_t)L_37) < ((int32_t)L_38))? 1 : 0);
			bool L_39 = V_7;
			if (L_39)
			{
				goto IL_005b_1;
			}
		}
		{
			Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C* L_40 = *(Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
			Lookup_2_t578DFDDA13AC7D1AE589489B483A819824BFB703* L_41 = (Lookup_2_t578DFDDA13AC7D1AE589489B483A819824BFB703*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 32));
			((  void (*) (Lookup_2_t578DFDDA13AC7D1AE589489B483A819824BFB703*, Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(L_41, L_40, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
			V_1 = L_41;
			goto IL_01ce;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01a6;
		}
		throw e;
	}

CATCH_01a6:
	{
		Exception_t* L_42 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_8 = L_42;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), (Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C*)NULL);
		il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL);
		Exception_t* L_43 = V_8;
		((  void (*) (AsyncUniTaskMethodBuilder_1_tC4D6EED0D569FD53BACBD70A8EB0AF3AC98A3208*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)))((((AsyncUniTaskMethodBuilder_1_tC4D6EED0D569FD53BACBD70A8EB0AF3AC98A3208*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_43, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_01f1;
	}

IL_01ce:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), (Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C*)NULL);
		il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL);
		Lookup_2_t578DFDDA13AC7D1AE589489B483A819824BFB703* L_44 = V_1;
		InvokerActionInvoker1< Lookup_2_t578DFDDA13AC7D1AE589489B483A819824BFB703* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)), il2cpp_rgctx_method(method->klass->rgctx_data, 35), (((AsyncUniTaskMethodBuilder_1_tC4D6EED0D569FD53BACBD70A8EB0AF3AC98A3208*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_44);
	}

IL_01f1:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateAsyncU3Ed__6_SetStateMachine_mF9248DB78845F34B2CE53FD5F7C02BDB490C8A2A_gshared (U3CCreateAsyncU3Ed__6_t2A7AD0388339CB1C21AA28B337F57D32A5F3892F* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateAsyncU3Ed__7_1__ctor_mFED042C9E89678EC12070658418272FF2DF6B980_gshared (U3CCreateAsyncU3Ed__7_1_tE29DB9CBD0DF6878F31E81C972C45F100EDF5FD5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateAsyncU3Ed__7_1_MoveNext_m4B5E5E5916D81E33CF20B69380B856970D90F9C8_gshared (U3CCreateAsyncU3Ed__7_1_tE29DB9CBD0DF6878F31E81C972C45F100EDF5FD5* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Awaiter_tC524EFB3B888F8BDCDCC9B5540DF872682F577E5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
	const uint32_t SizeOf_UniTask_1_t9ADA52FF81B7503B54B918D03B9A5106D5E26BDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const uint32_t SizeOf_Awaiter_tD1A916F060808E8A16DB2FDC07A650FE301D23C9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31));
	const uint32_t SizeOf_UniTask_1_tEC91376FFAA16EAB9872176F5A4D69286E3D3464 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 28));
	const uint32_t SizeOf_TSource_tCFA4D8F872E410CF93BB70C972965C7F9DD94B5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TKey_t6C3017DC262157D5BB0EAB11D1CCD4FCD59C18C4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25));
	const uint32_t SizeOf_TElement_t2C20FC9916E58D24B2E82887EB9B3A270EF4EA41 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 37));
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TKey_t6C3017DC262157D5BB0EAB11D1CCD4FCD59C18C4);
	const Il2CppFullySharedGenericAny L_37 = L_20;
	const Il2CppFullySharedGenericAny L_40 = L_20;
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_TKey_t6C3017DC262157D5BB0EAB11D1CCD4FCD59C18C4);
	const Il2CppFullySharedGenericAny L_43 = L_21;
	const Il2CppFullySharedGenericAny L_34 = alloca(SizeOf_TElement_t2C20FC9916E58D24B2E82887EB9B3A270EF4EA41);
	const Il2CppFullySharedGenericAny L_46 = L_34;
	const Il2CppFullySharedGenericAny L_35 = alloca(SizeOf_TElement_t2C20FC9916E58D24B2E82887EB9B3A270EF4EA41);
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_tCFA4D8F872E410CF93BB70C972965C7F9DD94B5E);
	const Il2CppFullySharedGenericAny L_26 = L_12;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_14 = alloca(SizeOf_Awaiter_tC524EFB3B888F8BDCDCC9B5540DF872682F577E5);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_17 = L_14;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_18 = L_14;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_28 = alloca(SizeOf_Awaiter_tD1A916F060808E8A16DB2FDC07A650FE301D23C9);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_31 = L_28;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_32 = L_28;
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_13 = alloca(SizeOf_UniTask_1_t9ADA52FF81B7503B54B918D03B9A5106D5E26BDB);
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_27 = alloca(SizeOf_UniTask_1_tEC91376FFAA16EAB9872176F5A4D69286E3D3464);
	int32_t V_0 = 0;
	Lookup_2_t578DFDDA13AC7D1AE589489B483A819824BFB703* V_1 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_2 = alloca(SizeOf_Awaiter_tC524EFB3B888F8BDCDCC9B5540DF872682F577E5);
	memset(V_2, 0, SizeOf_Awaiter_tC524EFB3B888F8BDCDCC9B5540DF872682F577E5);
	UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 V_3 = alloca(SizeOf_UniTask_1_t9ADA52FF81B7503B54B918D03B9A5106D5E26BDB);
	memset(V_3, 0, SizeOf_UniTask_1_t9ADA52FF81B7503B54B918D03B9A5106D5E26BDB);
	U3CCreateAsyncU3Ed__7_1_tE29DB9CBD0DF6878F31E81C972C45F100EDF5FD5* V_4 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_5 = alloca(SizeOf_Awaiter_tD1A916F060808E8A16DB2FDC07A650FE301D23C9);
	memset(V_5, 0, SizeOf_Awaiter_tD1A916F060808E8A16DB2FDC07A650FE301D23C9);
	UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 V_6 = alloca(SizeOf_UniTask_1_tEC91376FFAA16EAB9872176F5A4D69286E3D3464);
	memset(V_6, 0, SizeOf_UniTask_1_tEC91376FFAA16EAB9872176F5A4D69286E3D3464);
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	Exception_t* V_10 = NULL;
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
				goto IL_0017_1;
			}
		}
		{
			goto IL_001c_1;
		}

IL_0012_1:
		{
			goto IL_00bd_1;
		}

IL_0017_1:
		{
			goto IL_0157_1;
		}

IL_001c_1:
		{
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
			Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C* L_4 = (Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
			((  void (*) (Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_4, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			il2cpp_codegen_write_instance_field_data<Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_4);
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5;
			L_5 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((((ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
			il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_5);
			int32_t L_6;
			L_6 = ((  int32_t (*) (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))((((ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_6);
			int32_t L_7;
			L_7 = ((  int32_t (*) (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((((ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_7);
			goto IL_0228_1;
		}

IL_0066_1:
		{
			Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2* L_8 = *(Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
			NullCheck(L_9);
			int32_t L_11 = L_10;
			il2cpp_codegen_memcpy(L_12, (L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), SizeOf_TSource_tCFA4D8F872E410CF93BB70C972965C7F9DD94B5E);
			NullCheck(L_8);
			InvokerActionInvoker2< Il2CppFullySharedGenericAny, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_12: *(void**)L_12), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_13);
			il2cpp_codegen_memcpy(V_3, L_13, SizeOf_UniTask_1_t9ADA52FF81B7503B54B918D03B9A5106D5E26BDB);
			InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)V_3, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_14);
			il2cpp_codegen_memcpy(V_2, L_14, SizeOf_Awaiter_tC524EFB3B888F8BDCDCC9B5540DF872682F577E5);
			bool L_15;
			L_15 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
			if (L_15)
			{
				goto IL_00d9_1;
			}
		}
		{
			int32_t L_16 = 0;
			V_0 = L_16;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_16);
			il2cpp_codegen_memcpy(L_17, V_2, SizeOf_Awaiter_tC524EFB3B888F8BDCDCC9B5540DF872682F577E5);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15), L_17, SizeOf_Awaiter_tC524EFB3B888F8BDCDCC9B5540DF872682F577E5);
			V_4 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_tC4D6EED0D569FD53BACBD70A8EB0AF3AC98A3208*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CCreateAsyncU3Ed__7_1_tE29DB9CBD0DF6878F31E81C972C45F100EDF5FD5**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))((((AsyncUniTaskMethodBuilder_1_tC4D6EED0D569FD53BACBD70A8EB0AF3AC98A3208*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
			goto IL_0298;
		}

IL_00bd_1:
		{
			il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15)), SizeOf_Awaiter_tC524EFB3B888F8BDCDCC9B5540DF872682F577E5);
			il2cpp_codegen_memcpy(V_2, L_18, SizeOf_Awaiter_tC524EFB3B888F8BDCDCC9B5540DF872682F577E5);
			il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15)))), SizeOf_Awaiter_tC524EFB3B888F8BDCDCC9B5540DF872682F577E5);
			int32_t L_19 = (-1);
			V_0 = L_19;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_19);
		}

IL_00d9_1:
		{
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)), il2cpp_rgctx_method(method->klass->rgctx_data, 24), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, (Il2CppFullySharedGenericAny*)L_20);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_20, SizeOf_TKey_t6C3017DC262157D5BB0EAB11D1CCD4FCD59C18C4);
			il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)), SizeOf_TKey_t6C3017DC262157D5BB0EAB11D1CCD4FCD59C18C4);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_21, SizeOf_TKey_t6C3017DC262157D5BB0EAB11D1CCD4FCD59C18C4);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)))), SizeOf_TKey_t6C3017DC262157D5BB0EAB11D1CCD4FCD59C18C4);
			Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2* L_22 = *(Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			int32_t L_24 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
			NullCheck(L_23);
			int32_t L_25 = L_24;
			il2cpp_codegen_memcpy(L_26, (L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)), SizeOf_TSource_tCFA4D8F872E410CF93BB70C972965C7F9DD94B5E);
			NullCheck(L_22);
			InvokerActionInvoker2< Il2CppFullySharedGenericAny, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)), il2cpp_rgctx_method(method->klass->rgctx_data, 27), L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_26: *(void**)L_26), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_27);
			il2cpp_codegen_memcpy(V_6, L_27, SizeOf_UniTask_1_tEC91376FFAA16EAB9872176F5A4D69286E3D3464);
			InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)), il2cpp_rgctx_method(method->klass->rgctx_data, 29), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)V_6, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_28);
			il2cpp_codegen_memcpy(V_5, L_28, SizeOf_Awaiter_tD1A916F060808E8A16DB2FDC07A650FE301D23C9);
			bool L_29;
			L_29 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_5, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
			if (L_29)
			{
				goto IL_0174_1;
			}
		}
		{
			int32_t L_30 = 1;
			V_0 = L_30;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_30);
			il2cpp_codegen_memcpy(L_31, V_5, SizeOf_Awaiter_tD1A916F060808E8A16DB2FDC07A650FE301D23C9);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16), L_31, SizeOf_Awaiter_tD1A916F060808E8A16DB2FDC07A650FE301D23C9);
			V_4 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_tC4D6EED0D569FD53BACBD70A8EB0AF3AC98A3208*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CCreateAsyncU3Ed__7_1_tE29DB9CBD0DF6878F31E81C972C45F100EDF5FD5**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)))((((AsyncUniTaskMethodBuilder_1_tC4D6EED0D569FD53BACBD70A8EB0AF3AC98A3208*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_5, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 34));
			goto IL_0298;
		}

IL_0157_1:
		{
			il2cpp_codegen_memcpy(L_32, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16)), SizeOf_Awaiter_tD1A916F060808E8A16DB2FDC07A650FE301D23C9);
			il2cpp_codegen_memcpy(V_5, L_32, SizeOf_Awaiter_tD1A916F060808E8A16DB2FDC07A650FE301D23C9);
			il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16)))), SizeOf_Awaiter_tD1A916F060808E8A16DB2FDC07A650FE301D23C9);
			int32_t L_33 = (-1);
			V_0 = L_33;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_33);
		}

IL_0174_1:
		{
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)), il2cpp_rgctx_method(method->klass->rgctx_data, 36), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_5, (Il2CppFullySharedGenericAny*)L_34);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14), L_34, SizeOf_TElement_t2C20FC9916E58D24B2E82887EB9B3A270EF4EA41);
			il2cpp_codegen_memcpy(L_35, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14)), SizeOf_TElement_t2C20FC9916E58D24B2E82887EB9B3A270EF4EA41);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_35, SizeOf_TElement_t2C20FC9916E58D24B2E82887EB9B3A270EF4EA41);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14)))), SizeOf_TElement_t2C20FC9916E58D24B2E82887EB9B3A270EF4EA41);
			Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C* L_36 = *(Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			il2cpp_codegen_memcpy(L_37, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TKey_t6C3017DC262157D5BB0EAB11D1CCD4FCD59C18C4);
			NullCheck(L_36);
			bool L_38;
			L_38 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD** >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)), il2cpp_rgctx_method(method->klass->rgctx_data, 39), L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25)) ? L_37: *(void**)L_37), (((Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)))));
			V_7 = (bool)((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
			bool L_39 = V_7;
			if (!L_39)
			{
				goto IL_01e4_1;
			}
		}
		{
			il2cpp_codegen_memcpy(L_40, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TKey_t6C3017DC262157D5BB0EAB11D1CCD4FCD59C18C4);
			Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD* L_41 = (Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 38));
			InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)), il2cpp_rgctx_method(method->klass->rgctx_data, 41), L_41, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25)) ? L_40: *(void**)L_40));
			il2cpp_codegen_write_instance_field_data<Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_41);
			Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C* L_42 = *(Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			il2cpp_codegen_memcpy(L_43, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TKey_t6C3017DC262157D5BB0EAB11D1CCD4FCD59C18C4);
			Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD* L_44 = *(Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12));
			NullCheck(L_42);
			InvokerActionInvoker2< Il2CppFullySharedGenericAny, Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)), il2cpp_rgctx_method(method->klass->rgctx_data, 42), L_42, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25)) ? L_43: *(void**)L_43), L_44);
		}

IL_01e4_1:
		{
			Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD* L_45 = *(Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12));
			il2cpp_codegen_memcpy(L_46, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)), SizeOf_TElement_t2C20FC9916E58D24B2E82887EB9B3A270EF4EA41);
			NullCheck(L_45);
			InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)), il2cpp_rgctx_method(method->klass->rgctx_data, 43), L_45, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 37)) ? L_46: *(void**)L_46));
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)))), SizeOf_TKey_t6C3017DC262157D5BB0EAB11D1CCD4FCD59C18C4);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)))), SizeOf_TElement_t2C20FC9916E58D24B2E82887EB9B3A270EF4EA41);
			il2cpp_codegen_write_instance_field_data<Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), (Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD*)NULL);
			int32_t L_47 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
			V_8 = L_47;
			int32_t L_48 = V_8;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), ((int32_t)il2cpp_codegen_add(L_48, 1)));
		}

IL_0228_1:
		{
			int32_t L_49 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
			int32_t L_50 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			V_9 = (bool)((((int32_t)L_49) < ((int32_t)L_50))? 1 : 0);
			bool L_51 = V_9;
			if (L_51)
			{
				goto IL_0066_1;
			}
		}
		{
			Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C* L_52 = *(Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			Lookup_2_t578DFDDA13AC7D1AE589489B483A819824BFB703* L_53 = (Lookup_2_t578DFDDA13AC7D1AE589489B483A819824BFB703*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 44));
			((  void (*) (Lookup_2_t578DFDDA13AC7D1AE589489B483A819824BFB703*, Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(L_53, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
			V_1 = L_53;
			goto IL_0275;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_024d;
		}
		throw e;
	}

CATCH_024d:
	{
		Exception_t* L_54 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_10 = L_54;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C*)NULL);
		il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL);
		Exception_t* L_55 = V_10;
		((  void (*) (AsyncUniTaskMethodBuilder_1_tC4D6EED0D569FD53BACBD70A8EB0AF3AC98A3208*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))((((AsyncUniTaskMethodBuilder_1_tC4D6EED0D569FD53BACBD70A8EB0AF3AC98A3208*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_55, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0298;
	}

IL_0275:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C*)NULL);
		il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL);
		Lookup_2_t578DFDDA13AC7D1AE589489B483A819824BFB703* L_56 = V_1;
		InvokerActionInvoker1< Lookup_2_t578DFDDA13AC7D1AE589489B483A819824BFB703* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)), il2cpp_rgctx_method(method->klass->rgctx_data, 47), (((AsyncUniTaskMethodBuilder_1_tC4D6EED0D569FD53BACBD70A8EB0AF3AC98A3208*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_56);
	}

IL_0298:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateAsyncU3Ed__7_1_SetStateMachine_m390FACCE4EA52F5976674587A618AFF934ACA715_gshared (U3CCreateAsyncU3Ed__7_1_tE29DB9CBD0DF6878F31E81C972C45F100EDF5FD5* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateAsyncU3Ed__8__ctor_m4FAE78BFFE0835C4876F13AA1ABB628BAFE9253A_gshared (U3CCreateAsyncU3Ed__8_t0C64F4FE57A9C75AD5210AE14D784610D48E95DA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateAsyncU3Ed__8_MoveNext_m26FD931671D6904504428B3A1F446A72D7DC460A_gshared (U3CCreateAsyncU3Ed__8_t0C64F4FE57A9C75AD5210AE14D784610D48E95DA* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Awaiter_tD7DB648850C7564DCE4115478CD8E4DB39B7A0B6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
	const uint32_t SizeOf_UniTask_1_t6C559AB0E65F326E187E927B319C33E1C04716FF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const uint32_t SizeOf_TElement_t40EFFCF065CAF1515C03C1C9F0CFA3F9F0A8217E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TKey_tB31E65F3895B340527F0AAE057C85A0C705AF219 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25));
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TKey_tB31E65F3895B340527F0AAE057C85A0C705AF219);
	const Il2CppFullySharedGenericAny L_26 = L_20;
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_TKey_tB31E65F3895B340527F0AAE057C85A0C705AF219);
	const Il2CppFullySharedGenericAny L_29 = L_21;
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_TKey_tB31E65F3895B340527F0AAE057C85A0C705AF219);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TElement_t40EFFCF065CAF1515C03C1C9F0CFA3F9F0A8217E);
	const Il2CppFullySharedGenericAny L_35 = L_11;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_14 = alloca(SizeOf_Awaiter_tD7DB648850C7564DCE4115478CD8E4DB39B7A0B6);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_17 = L_14;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_18 = L_14;
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_13 = alloca(SizeOf_UniTask_1_t6C559AB0E65F326E187E927B319C33E1C04716FF);
	int32_t V_0 = 0;
	Lookup_2_t578DFDDA13AC7D1AE589489B483A819824BFB703* V_1 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_2 = alloca(SizeOf_Awaiter_tD7DB648850C7564DCE4115478CD8E4DB39B7A0B6);
	memset(V_2, 0, SizeOf_Awaiter_tD7DB648850C7564DCE4115478CD8E4DB39B7A0B6);
	UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 V_3 = alloca(SizeOf_UniTask_1_t6C559AB0E65F326E187E927B319C33E1C04716FF);
	memset(V_3, 0, SizeOf_UniTask_1_t6C559AB0E65F326E187E927B319C33E1C04716FF);
	U3CCreateAsyncU3Ed__8_t0C64F4FE57A9C75AD5210AE14D784610D48E95DA* V_4 = NULL;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	Exception_t* V_8 = NULL;
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
			goto IL_0011_1;
		}

IL_000c_1:
		{
			goto IL_00b8_1;
		}

IL_0011_1:
		{
			RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C* L_3 = (Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
			((  void (*) (Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			il2cpp_codegen_write_instance_field_data<Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_3);
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4;
			L_4 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((((ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
			il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_4);
			int32_t L_5;
			L_5 = ((  int32_t (*) (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))((((ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_5);
			int32_t L_6;
			L_6 = ((  int32_t (*) (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((((ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_6);
			goto IL_0187_1;
		}

IL_005b_1:
		{
			Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E* L_7 = *(Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			int32_t L_9 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
			NullCheck(L_8);
			int32_t L_10 = L_9;
			il2cpp_codegen_memcpy(L_11, (L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_TElement_t40EFFCF065CAF1515C03C1C9F0CFA3F9F0A8217E);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
			NullCheck(L_7);
			InvokerActionInvoker3< Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_11: *(void**)L_11), L_12, (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_13);
			il2cpp_codegen_memcpy(V_3, L_13, SizeOf_UniTask_1_t6C559AB0E65F326E187E927B319C33E1C04716FF);
			InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)V_3, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_14);
			il2cpp_codegen_memcpy(V_2, L_14, SizeOf_Awaiter_tD7DB648850C7564DCE4115478CD8E4DB39B7A0B6);
			bool L_15;
			L_15 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
			if (L_15)
			{
				goto IL_00d4_1;
			}
		}
		{
			int32_t L_16 = 0;
			V_0 = L_16;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_16);
			il2cpp_codegen_memcpy(L_17, V_2, SizeOf_Awaiter_tD7DB648850C7564DCE4115478CD8E4DB39B7A0B6);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_17, SizeOf_Awaiter_tD7DB648850C7564DCE4115478CD8E4DB39B7A0B6);
			V_4 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_tC4D6EED0D569FD53BACBD70A8EB0AF3AC98A3208*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CCreateAsyncU3Ed__8_t0C64F4FE57A9C75AD5210AE14D784610D48E95DA**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))((((AsyncUniTaskMethodBuilder_1_tC4D6EED0D569FD53BACBD70A8EB0AF3AC98A3208*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
			goto IL_01f7;
		}

IL_00b8_1:
		{
			il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)), SizeOf_Awaiter_tD7DB648850C7564DCE4115478CD8E4DB39B7A0B6);
			il2cpp_codegen_memcpy(V_2, L_18, SizeOf_Awaiter_tD7DB648850C7564DCE4115478CD8E4DB39B7A0B6);
			il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)))), SizeOf_Awaiter_tD7DB648850C7564DCE4115478CD8E4DB39B7A0B6);
			int32_t L_19 = (-1);
			V_0 = L_19;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_19);
		}

IL_00d4_1:
		{
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)), il2cpp_rgctx_method(method->klass->rgctx_data, 24), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, (Il2CppFullySharedGenericAny*)L_20);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_20, SizeOf_TKey_tB31E65F3895B340527F0AAE057C85A0C705AF219);
			il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_TKey_tB31E65F3895B340527F0AAE057C85A0C705AF219);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_21, SizeOf_TKey_tB31E65F3895B340527F0AAE057C85A0C705AF219);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)))), SizeOf_TKey_tB31E65F3895B340527F0AAE057C85A0C705AF219);
			Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C* L_22 = *(Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			il2cpp_codegen_memcpy(L_23, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TKey_tB31E65F3895B340527F0AAE057C85A0C705AF219);
			NullCheck(L_22);
			bool L_24;
			L_24 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD** >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)), il2cpp_rgctx_method(method->klass->rgctx_data, 27), L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25)) ? L_23: *(void**)L_23), (((Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)))));
			V_5 = (bool)((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
			bool L_25 = V_5;
			if (!L_25)
			{
				goto IL_0144_1;
			}
		}
		{
			il2cpp_codegen_memcpy(L_26, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TKey_tB31E65F3895B340527F0AAE057C85A0C705AF219);
			Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD* L_27 = (Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 26));
			InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)), il2cpp_rgctx_method(method->klass->rgctx_data, 29), L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25)) ? L_26: *(void**)L_26));
			il2cpp_codegen_write_instance_field_data<Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_27);
			Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C* L_28 = *(Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			il2cpp_codegen_memcpy(L_29, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TKey_tB31E65F3895B340527F0AAE057C85A0C705AF219);
			Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD* L_30 = *(Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
			NullCheck(L_28);
			InvokerActionInvoker2< Il2CppFullySharedGenericAny, Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), L_28, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25)) ? L_29: *(void**)L_29), L_30);
		}

IL_0144_1:
		{
			Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD* L_31 = *(Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_32 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			int32_t L_33 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
			NullCheck(L_32);
			int32_t L_34 = L_33;
			il2cpp_codegen_memcpy(L_35, (L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)), SizeOf_TElement_t40EFFCF065CAF1515C03C1C9F0CFA3F9F0A8217E);
			NullCheck(L_31);
			InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)), il2cpp_rgctx_method(method->klass->rgctx_data, 31), L_31, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_35: *(void**)L_35));
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)))), SizeOf_TKey_tB31E65F3895B340527F0AAE057C85A0C705AF219);
			il2cpp_codegen_write_instance_field_data<Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), (Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD*)NULL);
			int32_t L_36 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
			V_6 = L_36;
			int32_t L_37 = V_6;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), ((int32_t)il2cpp_codegen_add(L_37, 1)));
		}

IL_0187_1:
		{
			int32_t L_38 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
			int32_t L_39 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			V_7 = (bool)((((int32_t)L_38) < ((int32_t)L_39))? 1 : 0);
			bool L_40 = V_7;
			if (L_40)
			{
				goto IL_005b_1;
			}
		}
		{
			Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C* L_41 = *(Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			Lookup_2_t578DFDDA13AC7D1AE589489B483A819824BFB703* L_42 = (Lookup_2_t578DFDDA13AC7D1AE589489B483A819824BFB703*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 32));
			((  void (*) (Lookup_2_t578DFDDA13AC7D1AE589489B483A819824BFB703*, Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(L_42, L_41, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
			V_1 = L_42;
			goto IL_01d4;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01ac;
		}
		throw e;
	}

CATCH_01ac:
	{
		Exception_t* L_43 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_8 = L_43;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C*)NULL);
		il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL);
		Exception_t* L_44 = V_8;
		((  void (*) (AsyncUniTaskMethodBuilder_1_tC4D6EED0D569FD53BACBD70A8EB0AF3AC98A3208*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)))((((AsyncUniTaskMethodBuilder_1_tC4D6EED0D569FD53BACBD70A8EB0AF3AC98A3208*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_44, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_01f7;
	}

IL_01d4:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C*)NULL);
		il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL);
		Lookup_2_t578DFDDA13AC7D1AE589489B483A819824BFB703* L_45 = V_1;
		InvokerActionInvoker1< Lookup_2_t578DFDDA13AC7D1AE589489B483A819824BFB703* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)), il2cpp_rgctx_method(method->klass->rgctx_data, 35), (((AsyncUniTaskMethodBuilder_1_tC4D6EED0D569FD53BACBD70A8EB0AF3AC98A3208*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_45);
	}

IL_01f7:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateAsyncU3Ed__8_SetStateMachine_m72D4CEF5AF8F011578EFB3C85750BD2DF7D88B64_gshared (U3CCreateAsyncU3Ed__8_t0C64F4FE57A9C75AD5210AE14D784610D48E95DA* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateAsyncU3Ed__9_1__ctor_m227341D8657EF8470A290AB873E77353B7C848B6_gshared (U3CCreateAsyncU3Ed__9_1_t8D857D642EC297DA25800C7CE32606608FB31681* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateAsyncU3Ed__9_1_MoveNext_m0545A84090F0925A578037FE75740620C25134DC_gshared (U3CCreateAsyncU3Ed__9_1_t8D857D642EC297DA25800C7CE32606608FB31681* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Awaiter_t8AA8C317ED399880D6B88FCACA3660B994CC8A0F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
	const uint32_t SizeOf_UniTask_1_t18B20E22AC9D0506A965CA63BB68397429877988 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const uint32_t SizeOf_Awaiter_t33FD46746481F040A35B3F7225A7BDA38F011C4F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31));
	const uint32_t SizeOf_UniTask_1_tDD7034836927260D57F9204099209140BE092E82 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 28));
	const uint32_t SizeOf_TSource_t95DB801D870AE5C10F05FDF31D8A2BF9679A4ABB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TKey_t0FB46093F46EA34886B2D23AA3050C7A13E0A64D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25));
	const uint32_t SizeOf_TElement_t59DFC725971C1B0FF0F82E1E19AEFAA3F4A47897 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 37));
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_TKey_t0FB46093F46EA34886B2D23AA3050C7A13E0A64D);
	const Il2CppFullySharedGenericAny L_39 = L_21;
	const Il2CppFullySharedGenericAny L_42 = L_21;
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_TKey_t0FB46093F46EA34886B2D23AA3050C7A13E0A64D);
	const Il2CppFullySharedGenericAny L_45 = L_22;
	const Il2CppFullySharedGenericAny L_36 = alloca(SizeOf_TElement_t59DFC725971C1B0FF0F82E1E19AEFAA3F4A47897);
	const Il2CppFullySharedGenericAny L_48 = L_36;
	const Il2CppFullySharedGenericAny L_37 = alloca(SizeOf_TElement_t59DFC725971C1B0FF0F82E1E19AEFAA3F4A47897);
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_t95DB801D870AE5C10F05FDF31D8A2BF9679A4ABB);
	const Il2CppFullySharedGenericAny L_27 = L_12;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_15 = alloca(SizeOf_Awaiter_t8AA8C317ED399880D6B88FCACA3660B994CC8A0F);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_18 = L_15;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_19 = L_15;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_30 = alloca(SizeOf_Awaiter_t33FD46746481F040A35B3F7225A7BDA38F011C4F);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_33 = L_30;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_34 = L_30;
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_14 = alloca(SizeOf_UniTask_1_t18B20E22AC9D0506A965CA63BB68397429877988);
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_29 = alloca(SizeOf_UniTask_1_tDD7034836927260D57F9204099209140BE092E82);
	int32_t V_0 = 0;
	Lookup_2_t578DFDDA13AC7D1AE589489B483A819824BFB703* V_1 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_2 = alloca(SizeOf_Awaiter_t8AA8C317ED399880D6B88FCACA3660B994CC8A0F);
	memset(V_2, 0, SizeOf_Awaiter_t8AA8C317ED399880D6B88FCACA3660B994CC8A0F);
	UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 V_3 = alloca(SizeOf_UniTask_1_t18B20E22AC9D0506A965CA63BB68397429877988);
	memset(V_3, 0, SizeOf_UniTask_1_t18B20E22AC9D0506A965CA63BB68397429877988);
	U3CCreateAsyncU3Ed__9_1_t8D857D642EC297DA25800C7CE32606608FB31681* V_4 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_5 = alloca(SizeOf_Awaiter_t33FD46746481F040A35B3F7225A7BDA38F011C4F);
	memset(V_5, 0, SizeOf_Awaiter_t33FD46746481F040A35B3F7225A7BDA38F011C4F);
	UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 V_6 = alloca(SizeOf_UniTask_1_tDD7034836927260D57F9204099209140BE092E82);
	memset(V_6, 0, SizeOf_UniTask_1_tDD7034836927260D57F9204099209140BE092E82);
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	Exception_t* V_10 = NULL;
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
				goto IL_0017_1;
			}
		}
		{
			goto IL_001c_1;
		}

IL_0012_1:
		{
			goto IL_00c3_1;
		}

IL_0017_1:
		{
			goto IL_0163_1;
		}

IL_001c_1:
		{
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
			Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C* L_4 = (Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
			((  void (*) (Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_4, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			il2cpp_codegen_write_instance_field_data<Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_4);
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5;
			L_5 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((((ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
			il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_5);
			int32_t L_6;
			L_6 = ((  int32_t (*) (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))((((ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_6);
			int32_t L_7;
			L_7 = ((  int32_t (*) (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((((ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_7);
			goto IL_0234_1;
		}

IL_0066_1:
		{
			Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E* L_8 = *(Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
			NullCheck(L_9);
			int32_t L_11 = L_10;
			il2cpp_codegen_memcpy(L_12, (L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), SizeOf_TSource_t95DB801D870AE5C10F05FDF31D8A2BF9679A4ABB);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_13 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			NullCheck(L_8);
			InvokerActionInvoker3< Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_12: *(void**)L_12), L_13, (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_14);
			il2cpp_codegen_memcpy(V_3, L_14, SizeOf_UniTask_1_t18B20E22AC9D0506A965CA63BB68397429877988);
			InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)V_3, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_15);
			il2cpp_codegen_memcpy(V_2, L_15, SizeOf_Awaiter_t8AA8C317ED399880D6B88FCACA3660B994CC8A0F);
			bool L_16;
			L_16 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
			if (L_16)
			{
				goto IL_00df_1;
			}
		}
		{
			int32_t L_17 = 0;
			V_0 = L_17;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_17);
			il2cpp_codegen_memcpy(L_18, V_2, SizeOf_Awaiter_t8AA8C317ED399880D6B88FCACA3660B994CC8A0F);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16), L_18, SizeOf_Awaiter_t8AA8C317ED399880D6B88FCACA3660B994CC8A0F);
			V_4 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_tC4D6EED0D569FD53BACBD70A8EB0AF3AC98A3208*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CCreateAsyncU3Ed__9_1_t8D857D642EC297DA25800C7CE32606608FB31681**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))((((AsyncUniTaskMethodBuilder_1_tC4D6EED0D569FD53BACBD70A8EB0AF3AC98A3208*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
			goto IL_02a4;
		}

IL_00c3_1:
		{
			il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16)), SizeOf_Awaiter_t8AA8C317ED399880D6B88FCACA3660B994CC8A0F);
			il2cpp_codegen_memcpy(V_2, L_19, SizeOf_Awaiter_t8AA8C317ED399880D6B88FCACA3660B994CC8A0F);
			il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16)))), SizeOf_Awaiter_t8AA8C317ED399880D6B88FCACA3660B994CC8A0F);
			int32_t L_20 = (-1);
			V_0 = L_20;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_20);
		}

IL_00df_1:
		{
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)), il2cpp_rgctx_method(method->klass->rgctx_data, 24), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, (Il2CppFullySharedGenericAny*)L_21);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14), L_21, SizeOf_TKey_t0FB46093F46EA34886B2D23AA3050C7A13E0A64D);
			il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14)), SizeOf_TKey_t0FB46093F46EA34886B2D23AA3050C7A13E0A64D);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_22, SizeOf_TKey_t0FB46093F46EA34886B2D23AA3050C7A13E0A64D);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14)))), SizeOf_TKey_t0FB46093F46EA34886B2D23AA3050C7A13E0A64D);
			Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E* L_23 = *(Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_24 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			int32_t L_25 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
			NullCheck(L_24);
			int32_t L_26 = L_25;
			il2cpp_codegen_memcpy(L_27, (L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)), SizeOf_TSource_t95DB801D870AE5C10F05FDF31D8A2BF9679A4ABB);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_28 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			NullCheck(L_23);
			InvokerActionInvoker3< Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)), il2cpp_rgctx_method(method->klass->rgctx_data, 27), L_23, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_27: *(void**)L_27), L_28, (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_29);
			il2cpp_codegen_memcpy(V_6, L_29, SizeOf_UniTask_1_tDD7034836927260D57F9204099209140BE092E82);
			InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)), il2cpp_rgctx_method(method->klass->rgctx_data, 29), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)V_6, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_30);
			il2cpp_codegen_memcpy(V_5, L_30, SizeOf_Awaiter_t33FD46746481F040A35B3F7225A7BDA38F011C4F);
			bool L_31;
			L_31 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_5, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
			if (L_31)
			{
				goto IL_0180_1;
			}
		}
		{
			int32_t L_32 = 1;
			V_0 = L_32;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_32);
			il2cpp_codegen_memcpy(L_33, V_5, SizeOf_Awaiter_t33FD46746481F040A35B3F7225A7BDA38F011C4F);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),17), L_33, SizeOf_Awaiter_t33FD46746481F040A35B3F7225A7BDA38F011C4F);
			V_4 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_tC4D6EED0D569FD53BACBD70A8EB0AF3AC98A3208*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CCreateAsyncU3Ed__9_1_t8D857D642EC297DA25800C7CE32606608FB31681**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)))((((AsyncUniTaskMethodBuilder_1_tC4D6EED0D569FD53BACBD70A8EB0AF3AC98A3208*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_5, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 34));
			goto IL_02a4;
		}

IL_0163_1:
		{
			il2cpp_codegen_memcpy(L_34, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),17)), SizeOf_Awaiter_t33FD46746481F040A35B3F7225A7BDA38F011C4F);
			il2cpp_codegen_memcpy(V_5, L_34, SizeOf_Awaiter_t33FD46746481F040A35B3F7225A7BDA38F011C4F);
			il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),17)))), SizeOf_Awaiter_t33FD46746481F040A35B3F7225A7BDA38F011C4F);
			int32_t L_35 = (-1);
			V_0 = L_35;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_35);
		}

IL_0180_1:
		{
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)), il2cpp_rgctx_method(method->klass->rgctx_data, 36), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_5, (Il2CppFullySharedGenericAny*)L_36);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15), L_36, SizeOf_TElement_t59DFC725971C1B0FF0F82E1E19AEFAA3F4A47897);
			il2cpp_codegen_memcpy(L_37, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15)), SizeOf_TElement_t59DFC725971C1B0FF0F82E1E19AEFAA3F4A47897);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_37, SizeOf_TElement_t59DFC725971C1B0FF0F82E1E19AEFAA3F4A47897);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15)))), SizeOf_TElement_t59DFC725971C1B0FF0F82E1E19AEFAA3F4A47897);
			Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C* L_38 = *(Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			il2cpp_codegen_memcpy(L_39, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)), SizeOf_TKey_t0FB46093F46EA34886B2D23AA3050C7A13E0A64D);
			NullCheck(L_38);
			bool L_40;
			L_40 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD** >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)), il2cpp_rgctx_method(method->klass->rgctx_data, 39), L_38, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25)) ? L_39: *(void**)L_39), (((Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)))));
			V_7 = (bool)((((int32_t)L_40) == ((int32_t)0))? 1 : 0);
			bool L_41 = V_7;
			if (!L_41)
			{
				goto IL_01f0_1;
			}
		}
		{
			il2cpp_codegen_memcpy(L_42, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)), SizeOf_TKey_t0FB46093F46EA34886B2D23AA3050C7A13E0A64D);
			Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD* L_43 = (Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 38));
			InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)), il2cpp_rgctx_method(method->klass->rgctx_data, 41), L_43, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25)) ? L_42: *(void**)L_42));
			il2cpp_codegen_write_instance_field_data<Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_43);
			Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C* L_44 = *(Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			il2cpp_codegen_memcpy(L_45, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)), SizeOf_TKey_t0FB46093F46EA34886B2D23AA3050C7A13E0A64D);
			Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD* L_46 = *(Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
			NullCheck(L_44);
			InvokerActionInvoker2< Il2CppFullySharedGenericAny, Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)), il2cpp_rgctx_method(method->klass->rgctx_data, 42), L_44, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25)) ? L_45: *(void**)L_45), L_46);
		}

IL_01f0_1:
		{
			Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD* L_47 = *(Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
			il2cpp_codegen_memcpy(L_48, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_TElement_t59DFC725971C1B0FF0F82E1E19AEFAA3F4A47897);
			NullCheck(L_47);
			InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)), il2cpp_rgctx_method(method->klass->rgctx_data, 43), L_47, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 37)) ? L_48: *(void**)L_48));
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)))), SizeOf_TKey_t0FB46093F46EA34886B2D23AA3050C7A13E0A64D);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)))), SizeOf_TElement_t59DFC725971C1B0FF0F82E1E19AEFAA3F4A47897);
			il2cpp_codegen_write_instance_field_data<Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), (Grouping_2_tFA5CD231873E6540EFA382C20F53691A5D5503AD*)NULL);
			int32_t L_49 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
			V_8 = L_49;
			int32_t L_50 = V_8;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), ((int32_t)il2cpp_codegen_add(L_50, 1)));
		}

IL_0234_1:
		{
			int32_t L_51 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
			int32_t L_52 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
			V_9 = (bool)((((int32_t)L_51) < ((int32_t)L_52))? 1 : 0);
			bool L_53 = V_9;
			if (L_53)
			{
				goto IL_0066_1;
			}
		}
		{
			Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C* L_54 = *(Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			Lookup_2_t578DFDDA13AC7D1AE589489B483A819824BFB703* L_55 = (Lookup_2_t578DFDDA13AC7D1AE589489B483A819824BFB703*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 44));
			((  void (*) (Lookup_2_t578DFDDA13AC7D1AE589489B483A819824BFB703*, Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(L_55, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
			V_1 = L_55;
			goto IL_0281;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0259;
		}
		throw e;
	}

CATCH_0259:
	{
		Exception_t* L_56 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_10 = L_56;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), (Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C*)NULL);
		il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL);
		Exception_t* L_57 = V_10;
		((  void (*) (AsyncUniTaskMethodBuilder_1_tC4D6EED0D569FD53BACBD70A8EB0AF3AC98A3208*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))((((AsyncUniTaskMethodBuilder_1_tC4D6EED0D569FD53BACBD70A8EB0AF3AC98A3208*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_57, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_02a4;
	}

IL_0281:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), (Dictionary_2_t0AE2EE02AB295C8051F5B1C561E18BCECFA0CF7C*)NULL);
		il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL);
		Lookup_2_t578DFDDA13AC7D1AE589489B483A819824BFB703* L_58 = V_1;
		InvokerActionInvoker1< Lookup_2_t578DFDDA13AC7D1AE589489B483A819824BFB703* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)), il2cpp_rgctx_method(method->klass->rgctx_data, 47), (((AsyncUniTaskMethodBuilder_1_tC4D6EED0D569FD53BACBD70A8EB0AF3AC98A3208*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_58);
	}

IL_02a4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateAsyncU3Ed__9_1_SetStateMachine_m734D6F65BB735BFE0E74AAE6F900E6F5223BE8F9_gshared (U3CCreateAsyncU3Ed__9_1_t8D857D642EC297DA25800C7CE32606608FB31681* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateInnerHashSetU3Ed__20__ctor_mBB6E3075AD0D2CF4B055B0129EC912AE510310D9_gshared (U3CCreateInnerHashSetU3Ed__20_t1C56D471A9F8D74323CBEAB683B030C706473649* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateInnerHashSetU3Ed__20_MoveNext_mE1CD41D91E5B6D1CDD93555FDFD3459E268C21AC_gshared (U3CCreateInnerHashSetU3Ed__20_t1C56D471A9F8D74323CBEAB683B030C706473649* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CCreateInnerHashSetU3Ed__20_t1C56D471A9F8D74323CBEAB683B030C706473649* V_3 = NULL;
	Exception_t* V_4 = NULL;
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
				goto IL_0082_2;
			}

IL_0017_2:
			{
				_Join_t2B08BE3F971A67950398FE1A19975D847E43E6DD* L_3 = __this->___U3CU3E4__this;
				RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2));
				_Join_t2B08BE3F971A67950398FE1A19975D847E43E6DD* L_5 = __this->___U3CU3E4__this;
				Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_6 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),4));
				_Join_t2B08BE3F971A67950398FE1A19975D847E43E6DD* L_7 = __this->___U3CU3E4__this;
				RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6));
				_Join_t2B08BE3F971A67950398FE1A19975D847E43E6DD* L_9 = __this->___U3CU3E4__this;
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_10 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7));
				UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 L_11;
				L_11 = ((  UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 (*) (RuntimeObject*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_4, L_6, L_8, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
				V_2 = L_11;
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 L_12;
				L_12 = InvokerFuncInvoker0< Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), (&V_2));
				V_1 = L_12;
				bool L_13;
				L_13 = ((  bool (*) (Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				if (L_13)
				{
					goto IL_009e_2;
				}
			}
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->___U3CU3E1__state = L_14;
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 L_15 = V_1;
				__this->___U3CU3Eu__1 = L_15;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___result), (void*)NULL);
				#endif
				V_3 = __this;
				AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_16 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868*, U3CCreateInnerHashSetU3Ed__20_t1C56D471A9F8D74323CBEAB683B030C706473649**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_16, (&V_1), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
				goto IL_014c;
			}

IL_0082_2:
			{
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 L_17 = __this->___U3CU3Eu__1;
				V_1 = L_17;
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868* L_18 = (Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_18, sizeof(Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state = L_19;
			}

IL_009e_2:
			{
				RuntimeObject* L_20;
				L_20 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), (&V_1));
				__this->___U3CU3Es__1 = L_20;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1), (void*)L_20);
				_Join_t2B08BE3F971A67950398FE1A19975D847E43E6DD* L_21 = __this->___U3CU3E4__this;
				RuntimeObject* L_22 = __this->___U3CU3Es__1;
				NullCheck(L_21);
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_21, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),8), L_22);
				__this->___U3CU3Es__1 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1), (void*)(RuntimeObject*)NULL);
				_Join_t2B08BE3F971A67950398FE1A19975D847E43E6DD* L_23 = __this->___U3CU3E4__this;
				_Join_t2B08BE3F971A67950398FE1A19975D847E43E6DD* L_24 = __this->___U3CU3E4__this;
				RuntimeObject* L_25 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_24, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1));
				_Join_t2B08BE3F971A67950398FE1A19975D847E43E6DD* L_26 = __this->___U3CU3E4__this;
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_27 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_26, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7));
				NullCheck(L_25);
				RuntimeObject* L_28;
				L_28 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), L_25, L_27);
				NullCheck(L_23);
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_23, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9), L_28);
				goto IL_0110_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00ec_1;
			}
			throw e;
		}

CATCH_00ec_1:
		{
			Exception_t* L_29 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_4 = L_29;
			Exception_t* L_30 = V_4;
			__this->___U3CexU3E5__2 = L_30;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__2), (void*)L_30);
			_Join_t2B08BE3F971A67950398FE1A19975D847E43E6DD* L_31 = __this->___U3CU3E4__this;
			NullCheck(L_31);
			UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_32 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_31)->___completionSource);
			Exception_t* L_33 = __this->___U3CexU3E5__2;
			bool L_34;
			L_34 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_32, L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0138;
		}

IL_0110_1:
		{
			_Join_t2B08BE3F971A67950398FE1A19975D847E43E6DD* L_35 = __this->___U3CU3E4__this;
			NullCheck(L_35);
			((  void (*) (_Join_t2B08BE3F971A67950398FE1A19975D847E43E6DD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(L_35, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
			goto IL_0138;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_011e;
		}
		throw e;
	}

CATCH_011e:
	{
		Exception_t* L_36 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_4 = L_36;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_37 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
		Exception_t* L_38 = V_4;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline(L_37, L_38, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_014c;
	}

IL_0138:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_39 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline(L_39, NULL);
	}

IL_014c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateInnerHashSetU3Ed__20_SetStateMachine_mBECC9490454680C4541F5E9DB912958EB00A6CAB_gshared (U3CCreateInnerHashSetU3Ed__20_t1C56D471A9F8D74323CBEAB683B030C706473649* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateInnerHashSetU3Ed__24__ctor_mBE7434E52791166294646241AA8983C01ED5C245_gshared (U3CCreateInnerHashSetU3Ed__24_t4F6BC8B7F57F2F2F58D85E1E7E69238304C20E83* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateInnerHashSetU3Ed__24_MoveNext_m99E2B40E8C7B6DD5BF4F5FE5784365CE73C60ADE_gshared (U3CCreateInnerHashSetU3Ed__24_t4F6BC8B7F57F2F2F58D85E1E7E69238304C20E83* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CCreateInnerHashSetU3Ed__24_t4F6BC8B7F57F2F2F58D85E1E7E69238304C20E83* V_3 = NULL;
	Exception_t* V_4 = NULL;
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
				goto IL_0082_2;
			}

IL_0017_2:
			{
				_JoinAwaitWithCancellation_t93DC76FB4125B8A8802BC513685E8FADBF00DD45* L_3 = __this->___U3CU3E4__this;
				RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),4));
				_JoinAwaitWithCancellation_t93DC76FB4125B8A8802BC513685E8FADBF00DD45* L_5 = __this->___U3CU3E4__this;
				Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E* L_6 = *(Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6));
				_JoinAwaitWithCancellation_t93DC76FB4125B8A8802BC513685E8FADBF00DD45* L_7 = __this->___U3CU3E4__this;
				RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),8));
				_JoinAwaitWithCancellation_t93DC76FB4125B8A8802BC513685E8FADBF00DD45* L_9 = __this->___U3CU3E4__this;
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_10 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9));
				UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 L_11;
				L_11 = ((  UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 (*) (RuntimeObject*, Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_4, L_6, L_8, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
				V_2 = L_11;
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 L_12;
				L_12 = InvokerFuncInvoker0< Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), (&V_2));
				V_1 = L_12;
				bool L_13;
				L_13 = ((  bool (*) (Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				if (L_13)
				{
					goto IL_009e_2;
				}
			}
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->___U3CU3E1__state = L_14;
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 L_15 = V_1;
				__this->___U3CU3Eu__1 = L_15;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___result), (void*)NULL);
				#endif
				V_3 = __this;
				AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_16 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868*, U3CCreateInnerHashSetU3Ed__24_t4F6BC8B7F57F2F2F58D85E1E7E69238304C20E83**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_16, (&V_1), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
				goto IL_014c;
			}

IL_0082_2:
			{
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 L_17 = __this->___U3CU3Eu__1;
				V_1 = L_17;
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868* L_18 = (Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_18, sizeof(Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state = L_19;
			}

IL_009e_2:
			{
				RuntimeObject* L_20;
				L_20 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), (&V_1));
				__this->___U3CU3Es__1 = L_20;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1), (void*)L_20);
				_JoinAwaitWithCancellation_t93DC76FB4125B8A8802BC513685E8FADBF00DD45* L_21 = __this->___U3CU3E4__this;
				RuntimeObject* L_22 = __this->___U3CU3Es__1;
				NullCheck(L_21);
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_21, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),10), L_22);
				__this->___U3CU3Es__1 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1), (void*)(RuntimeObject*)NULL);
				_JoinAwaitWithCancellation_t93DC76FB4125B8A8802BC513685E8FADBF00DD45* L_23 = __this->___U3CU3E4__this;
				_JoinAwaitWithCancellation_t93DC76FB4125B8A8802BC513685E8FADBF00DD45* L_24 = __this->___U3CU3E4__this;
				RuntimeObject* L_25 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_24, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3));
				_JoinAwaitWithCancellation_t93DC76FB4125B8A8802BC513685E8FADBF00DD45* L_26 = __this->___U3CU3E4__this;
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_27 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_26, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9));
				NullCheck(L_25);
				RuntimeObject* L_28;
				L_28 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), L_25, L_27);
				NullCheck(L_23);
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_23, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),11), L_28);
				goto IL_0110_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00ec_1;
			}
			throw e;
		}

CATCH_00ec_1:
		{
			Exception_t* L_29 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_4 = L_29;
			Exception_t* L_30 = V_4;
			__this->___U3CexU3E5__2 = L_30;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__2), (void*)L_30);
			_JoinAwaitWithCancellation_t93DC76FB4125B8A8802BC513685E8FADBF00DD45* L_31 = __this->___U3CU3E4__this;
			NullCheck(L_31);
			UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_32 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_31)->___completionSource);
			Exception_t* L_33 = __this->___U3CexU3E5__2;
			bool L_34;
			L_34 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_32, L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0138;
		}

IL_0110_1:
		{
			_JoinAwaitWithCancellation_t93DC76FB4125B8A8802BC513685E8FADBF00DD45* L_35 = __this->___U3CU3E4__this;
			NullCheck(L_35);
			((  void (*) (_JoinAwaitWithCancellation_t93DC76FB4125B8A8802BC513685E8FADBF00DD45*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(L_35, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
			goto IL_0138;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_011e;
		}
		throw e;
	}

CATCH_011e:
	{
		Exception_t* L_36 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_4 = L_36;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_37 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
		Exception_t* L_38 = V_4;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline(L_37, L_38, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_014c;
	}

IL_0138:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_39 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline(L_39, NULL);
	}

IL_014c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateInnerHashSetU3Ed__24_SetStateMachine_m978BD5724E66166EFC1080499D0C7C59380C7EF8_gshared (U3CCreateInnerHashSetU3Ed__24_t4F6BC8B7F57F2F2F58D85E1E7E69238304C20E83* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateInnerHashSetU3Ed__24__ctor_m869FC9C986D0B6F28AE56902D968B07E0B9775A3_gshared (U3CCreateInnerHashSetU3Ed__24_t8988A92676D7D3C0966EA74E342C1C197132A9A9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateInnerHashSetU3Ed__24_MoveNext_m19376E5D2427E8E190AF23D0047AF7147200C837_gshared (U3CCreateInnerHashSetU3Ed__24_t8988A92676D7D3C0966EA74E342C1C197132A9A9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CCreateInnerHashSetU3Ed__24_t8988A92676D7D3C0966EA74E342C1C197132A9A9* V_3 = NULL;
	Exception_t* V_4 = NULL;
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
				goto IL_0082_2;
			}

IL_0017_2:
			{
				_JoinAwait_t939A4D66861F2D36F05248D774DAA0F6B1A9FC18* L_3 = __this->___U3CU3E4__this;
				RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),4));
				_JoinAwait_t939A4D66861F2D36F05248D774DAA0F6B1A9FC18* L_5 = __this->___U3CU3E4__this;
				Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2* L_6 = *(Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6));
				_JoinAwait_t939A4D66861F2D36F05248D774DAA0F6B1A9FC18* L_7 = __this->___U3CU3E4__this;
				RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),8));
				_JoinAwait_t939A4D66861F2D36F05248D774DAA0F6B1A9FC18* L_9 = __this->___U3CU3E4__this;
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_10 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9));
				UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 L_11;
				L_11 = ((  UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 (*) (RuntimeObject*, Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_4, L_6, L_8, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
				V_2 = L_11;
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 L_12;
				L_12 = InvokerFuncInvoker0< Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), (&V_2));
				V_1 = L_12;
				bool L_13;
				L_13 = ((  bool (*) (Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				if (L_13)
				{
					goto IL_009e_2;
				}
			}
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->___U3CU3E1__state = L_14;
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 L_15 = V_1;
				__this->___U3CU3Eu__1 = L_15;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___result), (void*)NULL);
				#endif
				V_3 = __this;
				AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_16 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868*, U3CCreateInnerHashSetU3Ed__24_t8988A92676D7D3C0966EA74E342C1C197132A9A9**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_16, (&V_1), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
				goto IL_014c;
			}

IL_0082_2:
			{
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 L_17 = __this->___U3CU3Eu__1;
				V_1 = L_17;
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868* L_18 = (Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_18, sizeof(Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state = L_19;
			}

IL_009e_2:
			{
				RuntimeObject* L_20;
				L_20 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), (&V_1));
				__this->___U3CU3Es__1 = L_20;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1), (void*)L_20);
				_JoinAwait_t939A4D66861F2D36F05248D774DAA0F6B1A9FC18* L_21 = __this->___U3CU3E4__this;
				RuntimeObject* L_22 = __this->___U3CU3Es__1;
				NullCheck(L_21);
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_21, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),10), L_22);
				__this->___U3CU3Es__1 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1), (void*)(RuntimeObject*)NULL);
				_JoinAwait_t939A4D66861F2D36F05248D774DAA0F6B1A9FC18* L_23 = __this->___U3CU3E4__this;
				_JoinAwait_t939A4D66861F2D36F05248D774DAA0F6B1A9FC18* L_24 = __this->___U3CU3E4__this;
				RuntimeObject* L_25 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_24, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3));
				_JoinAwait_t939A4D66861F2D36F05248D774DAA0F6B1A9FC18* L_26 = __this->___U3CU3E4__this;
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_27 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_26, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9));
				NullCheck(L_25);
				RuntimeObject* L_28;
				L_28 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), L_25, L_27);
				NullCheck(L_23);
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_23, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),11), L_28);
				goto IL_0110_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00ec_1;
			}
			throw e;
		}

CATCH_00ec_1:
		{
			Exception_t* L_29 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_4 = L_29;
			Exception_t* L_30 = V_4;
			__this->___U3CexU3E5__2 = L_30;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__2), (void*)L_30);
			_JoinAwait_t939A4D66861F2D36F05248D774DAA0F6B1A9FC18* L_31 = __this->___U3CU3E4__this;
			NullCheck(L_31);
			UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_32 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_31)->___completionSource);
			Exception_t* L_33 = __this->___U3CexU3E5__2;
			bool L_34;
			L_34 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_32, L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0138;
		}

IL_0110_1:
		{
			_JoinAwait_t939A4D66861F2D36F05248D774DAA0F6B1A9FC18* L_35 = __this->___U3CU3E4__this;
			NullCheck(L_35);
			((  void (*) (_JoinAwait_t939A4D66861F2D36F05248D774DAA0F6B1A9FC18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(L_35, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
			goto IL_0138;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_011e;
		}
		throw e;
	}

CATCH_011e:
	{
		Exception_t* L_36 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_4 = L_36;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_37 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
		Exception_t* L_38 = V_4;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline(L_37, L_38, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_014c;
	}

IL_0138:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_39 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline(L_39, NULL);
	}

IL_014c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateInnerHashSetU3Ed__24_SetStateMachine_m1B1661624B73414C8860A042107912BE52C0A796_gshared (U3CCreateInnerHashSetU3Ed__24_t8988A92676D7D3C0966EA74E342C1C197132A9A9* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateLookupU3Ed__12__ctor_mD3B7D5F8E7F280F4BA923432C77CD3519DE009D9_gshared (U3CCreateLookupU3Ed__12_t9B1FBFFEF24CF6EF91DF65A99C2623F65D07CAC6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateLookupU3Ed__12_MoveNext_mBF3CB7FD011F0BF28AB7E045B278EC17F888A037_gshared (U3CCreateLookupU3Ed__12_t9B1FBFFEF24CF6EF91DF65A99C2623F65D07CAC6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CCreateLookupU3Ed__12_t9B1FBFFEF24CF6EF91DF65A99C2623F65D07CAC6* V_3 = NULL;
	Exception_t* V_4 = NULL;
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
				goto IL_008d_2;
			}

IL_0017_2:
			{
				_GroupByAwaitWithCancellation_tFC36FE8CD3108D1F603A71C78CCFC1432D72AE8A* L_3 = __this->___U3CU3E4__this;
				NullCheck(L_3);
				RuntimeObject* L_4 = L_3->___source;
				_GroupByAwaitWithCancellation_tFC36FE8CD3108D1F603A71C78CCFC1432D72AE8A* L_5 = __this->___U3CU3E4__this;
				NullCheck(L_5);
				Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E* L_6 = L_5->___keySelector;
				_GroupByAwaitWithCancellation_tFC36FE8CD3108D1F603A71C78CCFC1432D72AE8A* L_7 = __this->___U3CU3E4__this;
				NullCheck(L_7);
				Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E* L_8 = L_7->___elementSelector;
				_GroupByAwaitWithCancellation_tFC36FE8CD3108D1F603A71C78CCFC1432D72AE8A* L_9 = __this->___U3CU3E4__this;
				NullCheck(L_9);
				RuntimeObject* L_10 = L_9->___comparer;
				_GroupByAwaitWithCancellation_tFC36FE8CD3108D1F603A71C78CCFC1432D72AE8A* L_11 = __this->___U3CU3E4__this;
				NullCheck(L_11);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12 = L_11->___cancellationToken;
				UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 L_13;
				L_13 = ((  UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 (*) (RuntimeObject*, Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E*, Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_4, L_6, L_8, L_10, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				V_2 = L_13;
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 L_14;
				L_14 = InvokerFuncInvoker0< Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (&V_2));
				V_1 = L_14;
				bool L_15;
				L_15 = ((  bool (*) (Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				if (L_15)
				{
					goto IL_00a9_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->___U3CU3E1__state = L_16;
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 L_17 = V_1;
				__this->___U3CU3Eu__1 = L_17;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___result), (void*)NULL);
				#endif
				V_3 = __this;
				AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_18 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868*, U3CCreateLookupU3Ed__12_t9B1FBFFEF24CF6EF91DF65A99C2623F65D07CAC6**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(L_18, (&V_1), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				goto IL_0149;
			}

IL_008d_2:
			{
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 L_19 = __this->___U3CU3Eu__1;
				V_1 = L_19;
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868* L_20 = (Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state = L_21;
			}

IL_00a9_2:
			{
				RuntimeObject* L_22;
				L_22 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), (&V_1));
				__this->___U3CU3Es__2 = L_22;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)L_22);
				RuntimeObject* L_23 = __this->___U3CU3Es__2;
				__this->___U3ClookupU3E5__1 = L_23;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClookupU3E5__1), (void*)L_23);
				__this->___U3CU3Es__2 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)(RuntimeObject*)NULL);
				_GroupByAwaitWithCancellation_tFC36FE8CD3108D1F603A71C78CCFC1432D72AE8A* L_24 = __this->___U3CU3E4__this;
				RuntimeObject* L_25 = __this->___U3ClookupU3E5__1;
				NullCheck((RuntimeObject*)L_25);
				RuntimeObject* L_26;
				L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 18), (RuntimeObject*)L_25);
				NullCheck(L_24);
				L_24->___groupEnumerator = L_26;
				Il2CppCodeGenWriteBarrier((void**)(&L_24->___groupEnumerator), (void*)L_26);
				__this->___U3ClookupU3E5__1 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClookupU3E5__1), (void*)(RuntimeObject*)NULL);
				goto IL_010d_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00e9_1;
			}
			throw e;
		}

CATCH_00e9_1:
		{
			Exception_t* L_27 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_4 = L_27;
			Exception_t* L_28 = V_4;
			__this->___U3CexU3E5__3 = L_28;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__3), (void*)L_28);
			_GroupByAwaitWithCancellation_tFC36FE8CD3108D1F603A71C78CCFC1432D72AE8A* L_29 = __this->___U3CU3E4__this;
			NullCheck(L_29);
			UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_30 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_29)->___completionSource);
			Exception_t* L_31 = __this->___U3CexU3E5__3;
			bool L_32;
			L_32 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_30, L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0135;
		}

IL_010d_1:
		{
			_GroupByAwaitWithCancellation_tFC36FE8CD3108D1F603A71C78CCFC1432D72AE8A* L_33 = __this->___U3CU3E4__this;
			NullCheck(L_33);
			((  void (*) (_GroupByAwaitWithCancellation_tFC36FE8CD3108D1F603A71C78CCFC1432D72AE8A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
			goto IL_0135;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_011b;
		}
		throw e;
	}

CATCH_011b:
	{
		Exception_t* L_34 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_4 = L_34;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_35 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
		Exception_t* L_36 = V_4;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline(L_35, L_36, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0149;
	}

IL_0135:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_37 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline(L_37, NULL);
	}

IL_0149:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateLookupU3Ed__12_SetStateMachine_mFE1150FA60BADDD1C260A9E45B92715E11A578E6_gshared (U3CCreateLookupU3Ed__12_t9B1FBFFEF24CF6EF91DF65A99C2623F65D07CAC6* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateLookupU3Ed__12__ctor_m8C14C3E37FF51B51461B37C7A08261F059AC90A2_gshared (U3CCreateLookupU3Ed__12_t4279811B8BECB2C54D94A4B9C62D6DE6C1B47099* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateLookupU3Ed__12_MoveNext_m8C129AC413393C44CD673DE6113472B57DC1659B_gshared (U3CCreateLookupU3Ed__12_t4279811B8BECB2C54D94A4B9C62D6DE6C1B47099* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CCreateLookupU3Ed__12_t4279811B8BECB2C54D94A4B9C62D6DE6C1B47099* V_3 = NULL;
	Exception_t* V_4 = NULL;
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
				goto IL_008d_2;
			}

IL_0017_2:
			{
				_GroupByAwait_tEDF064FED26670CF693F54177C09CA52A8D4D84F* L_3 = __this->___U3CU3E4__this;
				NullCheck(L_3);
				RuntimeObject* L_4 = L_3->___source;
				_GroupByAwait_tEDF064FED26670CF693F54177C09CA52A8D4D84F* L_5 = __this->___U3CU3E4__this;
				NullCheck(L_5);
				Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2* L_6 = L_5->___keySelector;
				_GroupByAwait_tEDF064FED26670CF693F54177C09CA52A8D4D84F* L_7 = __this->___U3CU3E4__this;
				NullCheck(L_7);
				Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2* L_8 = L_7->___elementSelector;
				_GroupByAwait_tEDF064FED26670CF693F54177C09CA52A8D4D84F* L_9 = __this->___U3CU3E4__this;
				NullCheck(L_9);
				RuntimeObject* L_10 = L_9->___comparer;
				_GroupByAwait_tEDF064FED26670CF693F54177C09CA52A8D4D84F* L_11 = __this->___U3CU3E4__this;
				NullCheck(L_11);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12 = L_11->___cancellationToken;
				UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 L_13;
				L_13 = ((  UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 (*) (RuntimeObject*, Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2*, Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_4, L_6, L_8, L_10, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				V_2 = L_13;
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 L_14;
				L_14 = InvokerFuncInvoker0< Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (&V_2));
				V_1 = L_14;
				bool L_15;
				L_15 = ((  bool (*) (Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				if (L_15)
				{
					goto IL_00a9_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->___U3CU3E1__state = L_16;
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 L_17 = V_1;
				__this->___U3CU3Eu__1 = L_17;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___result), (void*)NULL);
				#endif
				V_3 = __this;
				AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_18 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868*, U3CCreateLookupU3Ed__12_t4279811B8BECB2C54D94A4B9C62D6DE6C1B47099**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(L_18, (&V_1), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				goto IL_0149;
			}

IL_008d_2:
			{
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 L_19 = __this->___U3CU3Eu__1;
				V_1 = L_19;
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868* L_20 = (Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state = L_21;
			}

IL_00a9_2:
			{
				RuntimeObject* L_22;
				L_22 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), (&V_1));
				__this->___U3CU3Es__2 = L_22;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)L_22);
				RuntimeObject* L_23 = __this->___U3CU3Es__2;
				__this->___U3ClookupU3E5__1 = L_23;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClookupU3E5__1), (void*)L_23);
				__this->___U3CU3Es__2 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)(RuntimeObject*)NULL);
				_GroupByAwait_tEDF064FED26670CF693F54177C09CA52A8D4D84F* L_24 = __this->___U3CU3E4__this;
				RuntimeObject* L_25 = __this->___U3ClookupU3E5__1;
				NullCheck((RuntimeObject*)L_25);
				RuntimeObject* L_26;
				L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 18), (RuntimeObject*)L_25);
				NullCheck(L_24);
				L_24->___groupEnumerator = L_26;
				Il2CppCodeGenWriteBarrier((void**)(&L_24->___groupEnumerator), (void*)L_26);
				__this->___U3ClookupU3E5__1 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClookupU3E5__1), (void*)(RuntimeObject*)NULL);
				goto IL_010d_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00e9_1;
			}
			throw e;
		}

CATCH_00e9_1:
		{
			Exception_t* L_27 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_4 = L_27;
			Exception_t* L_28 = V_4;
			__this->___U3CexU3E5__3 = L_28;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__3), (void*)L_28);
			_GroupByAwait_tEDF064FED26670CF693F54177C09CA52A8D4D84F* L_29 = __this->___U3CU3E4__this;
			NullCheck(L_29);
			UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_30 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_29)->___completionSource);
			Exception_t* L_31 = __this->___U3CexU3E5__3;
			bool L_32;
			L_32 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_30, L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0135;
		}

IL_010d_1:
		{
			_GroupByAwait_tEDF064FED26670CF693F54177C09CA52A8D4D84F* L_33 = __this->___U3CU3E4__this;
			NullCheck(L_33);
			((  void (*) (_GroupByAwait_tEDF064FED26670CF693F54177C09CA52A8D4D84F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
			goto IL_0135;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_011b;
		}
		throw e;
	}

CATCH_011b:
	{
		Exception_t* L_34 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_4 = L_34;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_35 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
		Exception_t* L_36 = V_4;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline(L_35, L_36, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0149;
	}

IL_0135:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_37 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline(L_37, NULL);
	}

IL_0149:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateLookupU3Ed__12_SetStateMachine_m0AC2819232577F92D76D4E024076803CB142611E_gshared (U3CCreateLookupU3Ed__12_t4279811B8BECB2C54D94A4B9C62D6DE6C1B47099* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateLookupU3Ed__12__ctor_mBB237B064F99209B9EEDD24772802440E31CB72A_gshared (U3CCreateLookupU3Ed__12_t255CBAF26A869773CBEB063E3CCBEF9ECE0AB18A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateLookupU3Ed__12_MoveNext_m9D7D83F063AF8A813D0501C46AD5D87138B091E9_gshared (U3CCreateLookupU3Ed__12_t255CBAF26A869773CBEB063E3CCBEF9ECE0AB18A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CCreateLookupU3Ed__12_t255CBAF26A869773CBEB063E3CCBEF9ECE0AB18A* V_3 = NULL;
	Exception_t* V_4 = NULL;
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
				goto IL_008d_2;
			}

IL_0017_2:
			{
				_GroupBy_t8D488B8D809A5FD9DFDCDF04A872BB73FE238224* L_3 = __this->___U3CU3E4__this;
				NullCheck(L_3);
				RuntimeObject* L_4 = L_3->___source;
				_GroupBy_t8D488B8D809A5FD9DFDCDF04A872BB73FE238224* L_5 = __this->___U3CU3E4__this;
				NullCheck(L_5);
				Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_6 = L_5->___keySelector;
				_GroupBy_t8D488B8D809A5FD9DFDCDF04A872BB73FE238224* L_7 = __this->___U3CU3E4__this;
				NullCheck(L_7);
				Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_8 = L_7->___elementSelector;
				_GroupBy_t8D488B8D809A5FD9DFDCDF04A872BB73FE238224* L_9 = __this->___U3CU3E4__this;
				NullCheck(L_9);
				RuntimeObject* L_10 = L_9->___comparer;
				_GroupBy_t8D488B8D809A5FD9DFDCDF04A872BB73FE238224* L_11 = __this->___U3CU3E4__this;
				NullCheck(L_11);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12 = L_11->___cancellationToken;
				UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 L_13;
				L_13 = ((  UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 (*) (RuntimeObject*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_4, L_6, L_8, L_10, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				V_2 = L_13;
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 L_14;
				L_14 = InvokerFuncInvoker0< Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (&V_2));
				V_1 = L_14;
				bool L_15;
				L_15 = ((  bool (*) (Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				if (L_15)
				{
					goto IL_00a9_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->___U3CU3E1__state = L_16;
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 L_17 = V_1;
				__this->___U3CU3Eu__1 = L_17;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___result), (void*)NULL);
				#endif
				V_3 = __this;
				AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_18 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868*, U3CCreateLookupU3Ed__12_t255CBAF26A869773CBEB063E3CCBEF9ECE0AB18A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(L_18, (&V_1), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				goto IL_0149;
			}

IL_008d_2:
			{
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 L_19 = __this->___U3CU3Eu__1;
				V_1 = L_19;
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868* L_20 = (Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state = L_21;
			}

IL_00a9_2:
			{
				RuntimeObject* L_22;
				L_22 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), (&V_1));
				__this->___U3CU3Es__2 = L_22;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)L_22);
				RuntimeObject* L_23 = __this->___U3CU3Es__2;
				__this->___U3ClookupU3E5__1 = L_23;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClookupU3E5__1), (void*)L_23);
				__this->___U3CU3Es__2 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)(RuntimeObject*)NULL);
				_GroupBy_t8D488B8D809A5FD9DFDCDF04A872BB73FE238224* L_24 = __this->___U3CU3E4__this;
				RuntimeObject* L_25 = __this->___U3ClookupU3E5__1;
				NullCheck((RuntimeObject*)L_25);
				RuntimeObject* L_26;
				L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 18), (RuntimeObject*)L_25);
				NullCheck(L_24);
				L_24->___groupEnumerator = L_26;
				Il2CppCodeGenWriteBarrier((void**)(&L_24->___groupEnumerator), (void*)L_26);
				__this->___U3ClookupU3E5__1 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClookupU3E5__1), (void*)(RuntimeObject*)NULL);
				goto IL_010d_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00e9_1;
			}
			throw e;
		}

CATCH_00e9_1:
		{
			Exception_t* L_27 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_4 = L_27;
			Exception_t* L_28 = V_4;
			__this->___U3CexU3E5__3 = L_28;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__3), (void*)L_28);
			_GroupBy_t8D488B8D809A5FD9DFDCDF04A872BB73FE238224* L_29 = __this->___U3CU3E4__this;
			NullCheck(L_29);
			UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_30 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_29)->___completionSource);
			Exception_t* L_31 = __this->___U3CexU3E5__3;
			bool L_32;
			L_32 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_30, L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0135;
		}

IL_010d_1:
		{
			_GroupBy_t8D488B8D809A5FD9DFDCDF04A872BB73FE238224* L_33 = __this->___U3CU3E4__this;
			NullCheck(L_33);
			((  void (*) (_GroupBy_t8D488B8D809A5FD9DFDCDF04A872BB73FE238224*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
			goto IL_0135;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_011b;
		}
		throw e;
	}

CATCH_011b:
	{
		Exception_t* L_34 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_4 = L_34;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_35 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
		Exception_t* L_36 = V_4;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline(L_35, L_36, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0149;
	}

IL_0135:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_37 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline(L_37, NULL);
	}

IL_0149:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateLookupU3Ed__12_SetStateMachine_m26AEA0FC840E345C0D0521A4CCF1BBFA5699D0FC_gshared (U3CCreateLookupU3Ed__12_t255CBAF26A869773CBEB063E3CCBEF9ECE0AB18A* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateLookupU3Ed__13__ctor_m699AD7D8C4A515B4C5BB6E08E30EF2FB4FF59639_gshared (U3CCreateLookupU3Ed__13_t1E15D58CD37A11C240299F73CD31787ACFE1F0C3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateLookupU3Ed__13_MoveNext_mA4938EF3E1A7BAFE11CE02951C93139D777A92C0_gshared (U3CCreateLookupU3Ed__13_t1E15D58CD37A11C240299F73CD31787ACFE1F0C3* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CCreateLookupU3Ed__13_t1E15D58CD37A11C240299F73CD31787ACFE1F0C3* V_3 = NULL;
	Exception_t* V_4 = NULL;
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
				goto IL_008d_2;
			}

IL_0017_2:
			{
				_GroupBy_tDE775CC0DFFFA50E17CB88EEDFE3239F9B89BAB3* L_3 = __this->___U3CU3E4__this;
				RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0));
				_GroupBy_tDE775CC0DFFFA50E17CB88EEDFE3239F9B89BAB3* L_5 = __this->___U3CU3E4__this;
				Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_6 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1));
				_GroupBy_tDE775CC0DFFFA50E17CB88EEDFE3239F9B89BAB3* L_7 = __this->___U3CU3E4__this;
				Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_8 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2));
				_GroupBy_tDE775CC0DFFFA50E17CB88EEDFE3239F9B89BAB3* L_9 = __this->___U3CU3E4__this;
				RuntimeObject* L_10 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),4));
				_GroupBy_tDE775CC0DFFFA50E17CB88EEDFE3239F9B89BAB3* L_11 = __this->___U3CU3E4__this;
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_11, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),5));
				UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 L_13;
				L_13 = ((  UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 (*) (RuntimeObject*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_4, L_6, L_8, L_10, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				V_2 = L_13;
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 L_14;
				L_14 = InvokerFuncInvoker0< Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (&V_2));
				V_1 = L_14;
				bool L_15;
				L_15 = ((  bool (*) (Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				if (L_15)
				{
					goto IL_00a9_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->___U3CU3E1__state = L_16;
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 L_17 = V_1;
				__this->___U3CU3Eu__1 = L_17;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___result), (void*)NULL);
				#endif
				V_3 = __this;
				AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_18 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868*, U3CCreateLookupU3Ed__13_t1E15D58CD37A11C240299F73CD31787ACFE1F0C3**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(L_18, (&V_1), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				goto IL_0149;
			}

IL_008d_2:
			{
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 L_19 = __this->___U3CU3Eu__1;
				V_1 = L_19;
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868* L_20 = (Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state = L_21;
			}

IL_00a9_2:
			{
				RuntimeObject* L_22;
				L_22 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), (&V_1));
				__this->___U3CU3Es__2 = L_22;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)L_22);
				RuntimeObject* L_23 = __this->___U3CU3Es__2;
				__this->___U3ClookupU3E5__1 = L_23;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClookupU3E5__1), (void*)L_23);
				__this->___U3CU3Es__2 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)(RuntimeObject*)NULL);
				_GroupBy_tDE775CC0DFFFA50E17CB88EEDFE3239F9B89BAB3* L_24 = __this->___U3CU3E4__this;
				RuntimeObject* L_25 = __this->___U3ClookupU3E5__1;
				NullCheck((RuntimeObject*)L_25);
				RuntimeObject* L_26;
				L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 18), (RuntimeObject*)L_25);
				NullCheck(L_24);
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_24, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6), L_26);
				__this->___U3ClookupU3E5__1 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClookupU3E5__1), (void*)(RuntimeObject*)NULL);
				goto IL_010d_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00e9_1;
			}
			throw e;
		}

CATCH_00e9_1:
		{
			Exception_t* L_27 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_4 = L_27;
			Exception_t* L_28 = V_4;
			__this->___U3CexU3E5__3 = L_28;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__3), (void*)L_28);
			_GroupBy_tDE775CC0DFFFA50E17CB88EEDFE3239F9B89BAB3* L_29 = __this->___U3CU3E4__this;
			NullCheck(L_29);
			UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_30 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_29)->___completionSource);
			Exception_t* L_31 = __this->___U3CexU3E5__3;
			bool L_32;
			L_32 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_30, L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0135;
		}

IL_010d_1:
		{
			_GroupBy_tDE775CC0DFFFA50E17CB88EEDFE3239F9B89BAB3* L_33 = __this->___U3CU3E4__this;
			NullCheck(L_33);
			((  void (*) (_GroupBy_tDE775CC0DFFFA50E17CB88EEDFE3239F9B89BAB3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
			goto IL_0135;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_011b;
		}
		throw e;
	}

CATCH_011b:
	{
		Exception_t* L_34 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_4 = L_34;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_35 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
		Exception_t* L_36 = V_4;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline(L_35, L_36, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0149;
	}

IL_0135:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_37 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline(L_37, NULL);
	}

IL_0149:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateLookupU3Ed__13_SetStateMachine_m9913F523AE0F9D56D159B53A819180DC577F75EB_gshared (U3CCreateLookupU3Ed__13_t1E15D58CD37A11C240299F73CD31787ACFE1F0C3* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateLookupU3Ed__15__ctor_mD4295ACEECB82FDB97DE84FB890E4C7FE784F0D1_gshared (U3CCreateLookupU3Ed__15_t243B512786DD88119A935BB8ED1B9B645CB16FBB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateLookupU3Ed__15_MoveNext_m433CE7C5DBF8F451A7CD800FF53F49DF9EE66653_gshared (U3CCreateLookupU3Ed__15_t243B512786DD88119A935BB8ED1B9B645CB16FBB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CCreateLookupU3Ed__15_t243B512786DD88119A935BB8ED1B9B645CB16FBB* V_3 = NULL;
	Exception_t* V_4 = NULL;
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
				goto IL_008d_2;
			}

IL_0017_2:
			{
				_GroupByAwaitWithCancellation_t5CC459EB7122BFBA5314A46D6838F75D56E4DF99* L_3 = __this->___U3CU3E4__this;
				RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1));
				_GroupByAwaitWithCancellation_t5CC459EB7122BFBA5314A46D6838F75D56E4DF99* L_5 = __this->___U3CU3E4__this;
				Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E* L_6 = *(Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2));
				_GroupByAwaitWithCancellation_t5CC459EB7122BFBA5314A46D6838F75D56E4DF99* L_7 = __this->___U3CU3E4__this;
				Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E* L_8 = *(Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E**)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3));
				_GroupByAwaitWithCancellation_t5CC459EB7122BFBA5314A46D6838F75D56E4DF99* L_9 = __this->___U3CU3E4__this;
				RuntimeObject* L_10 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),5));
				_GroupByAwaitWithCancellation_t5CC459EB7122BFBA5314A46D6838F75D56E4DF99* L_11 = __this->___U3CU3E4__this;
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_11, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6));
				UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 L_13;
				L_13 = ((  UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 (*) (RuntimeObject*, Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E*, Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_4, L_6, L_8, L_10, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				V_2 = L_13;
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 L_14;
				L_14 = InvokerFuncInvoker0< Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (&V_2));
				V_1 = L_14;
				bool L_15;
				L_15 = ((  bool (*) (Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				if (L_15)
				{
					goto IL_00a9_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->___U3CU3E1__state = L_16;
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 L_17 = V_1;
				__this->___U3CU3Eu__1 = L_17;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___result), (void*)NULL);
				#endif
				V_3 = __this;
				AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_18 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868*, U3CCreateLookupU3Ed__15_t243B512786DD88119A935BB8ED1B9B645CB16FBB**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(L_18, (&V_1), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				goto IL_0149;
			}

IL_008d_2:
			{
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 L_19 = __this->___U3CU3Eu__1;
				V_1 = L_19;
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868* L_20 = (Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state = L_21;
			}

IL_00a9_2:
			{
				RuntimeObject* L_22;
				L_22 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), (&V_1));
				__this->___U3CU3Es__2 = L_22;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)L_22);
				RuntimeObject* L_23 = __this->___U3CU3Es__2;
				__this->___U3ClookupU3E5__1 = L_23;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClookupU3E5__1), (void*)L_23);
				__this->___U3CU3Es__2 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)(RuntimeObject*)NULL);
				_GroupByAwaitWithCancellation_t5CC459EB7122BFBA5314A46D6838F75D56E4DF99* L_24 = __this->___U3CU3E4__this;
				RuntimeObject* L_25 = __this->___U3ClookupU3E5__1;
				NullCheck((RuntimeObject*)L_25);
				RuntimeObject* L_26;
				L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 18), (RuntimeObject*)L_25);
				NullCheck(L_24);
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_24, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7), L_26);
				__this->___U3ClookupU3E5__1 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClookupU3E5__1), (void*)(RuntimeObject*)NULL);
				goto IL_010d_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00e9_1;
			}
			throw e;
		}

CATCH_00e9_1:
		{
			Exception_t* L_27 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_4 = L_27;
			Exception_t* L_28 = V_4;
			__this->___U3CexU3E5__3 = L_28;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__3), (void*)L_28);
			_GroupByAwaitWithCancellation_t5CC459EB7122BFBA5314A46D6838F75D56E4DF99* L_29 = __this->___U3CU3E4__this;
			NullCheck(L_29);
			UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_30 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_29)->___completionSource);
			Exception_t* L_31 = __this->___U3CexU3E5__3;
			bool L_32;
			L_32 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_30, L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0135;
		}

IL_010d_1:
		{
			_GroupByAwaitWithCancellation_t5CC459EB7122BFBA5314A46D6838F75D56E4DF99* L_33 = __this->___U3CU3E4__this;
			NullCheck(L_33);
			((  void (*) (_GroupByAwaitWithCancellation_t5CC459EB7122BFBA5314A46D6838F75D56E4DF99*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
			goto IL_0135;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_011b;
		}
		throw e;
	}

CATCH_011b:
	{
		Exception_t* L_34 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_4 = L_34;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_35 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
		Exception_t* L_36 = V_4;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline(L_35, L_36, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0149;
	}

IL_0135:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_37 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline(L_37, NULL);
	}

IL_0149:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateLookupU3Ed__15_SetStateMachine_mB1D28F4AA363025C9583747F7C1C6529EFED0ACC_gshared (U3CCreateLookupU3Ed__15_t243B512786DD88119A935BB8ED1B9B645CB16FBB* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateLookupU3Ed__15__ctor_m5B8F7300A30E2D77FB716B0A5F6F3541B48A349C_gshared (U3CCreateLookupU3Ed__15_tA4E5BADCF7A0DE68CB37A6CC47700505A62221F0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateLookupU3Ed__15_MoveNext_m4BA92CD05A19D0FCCC5EF7C6F2F0B80675E7BB76_gshared (U3CCreateLookupU3Ed__15_tA4E5BADCF7A0DE68CB37A6CC47700505A62221F0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CCreateLookupU3Ed__15_tA4E5BADCF7A0DE68CB37A6CC47700505A62221F0* V_3 = NULL;
	Exception_t* V_4 = NULL;
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
				goto IL_008d_2;
			}

IL_0017_2:
			{
				_GroupByAwait_t875670920DFAF93150B1D58C4DCE41A5247EDF57* L_3 = __this->___U3CU3E4__this;
				RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1));
				_GroupByAwait_t875670920DFAF93150B1D58C4DCE41A5247EDF57* L_5 = __this->___U3CU3E4__this;
				Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2* L_6 = *(Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2));
				_GroupByAwait_t875670920DFAF93150B1D58C4DCE41A5247EDF57* L_7 = __this->___U3CU3E4__this;
				Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2* L_8 = *(Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2**)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3));
				_GroupByAwait_t875670920DFAF93150B1D58C4DCE41A5247EDF57* L_9 = __this->___U3CU3E4__this;
				RuntimeObject* L_10 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),5));
				_GroupByAwait_t875670920DFAF93150B1D58C4DCE41A5247EDF57* L_11 = __this->___U3CU3E4__this;
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_11, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6));
				UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 L_13;
				L_13 = ((  UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 (*) (RuntimeObject*, Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2*, Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_4, L_6, L_8, L_10, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				V_2 = L_13;
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 L_14;
				L_14 = InvokerFuncInvoker0< Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (&V_2));
				V_1 = L_14;
				bool L_15;
				L_15 = ((  bool (*) (Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				if (L_15)
				{
					goto IL_00a9_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->___U3CU3E1__state = L_16;
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 L_17 = V_1;
				__this->___U3CU3Eu__1 = L_17;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___result), (void*)NULL);
				#endif
				V_3 = __this;
				AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_18 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868*, U3CCreateLookupU3Ed__15_tA4E5BADCF7A0DE68CB37A6CC47700505A62221F0**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(L_18, (&V_1), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				goto IL_0149;
			}

IL_008d_2:
			{
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 L_19 = __this->___U3CU3Eu__1;
				V_1 = L_19;
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868* L_20 = (Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state = L_21;
			}

IL_00a9_2:
			{
				RuntimeObject* L_22;
				L_22 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), (&V_1));
				__this->___U3CU3Es__2 = L_22;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)L_22);
				RuntimeObject* L_23 = __this->___U3CU3Es__2;
				__this->___U3ClookupU3E5__1 = L_23;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClookupU3E5__1), (void*)L_23);
				__this->___U3CU3Es__2 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)(RuntimeObject*)NULL);
				_GroupByAwait_t875670920DFAF93150B1D58C4DCE41A5247EDF57* L_24 = __this->___U3CU3E4__this;
				RuntimeObject* L_25 = __this->___U3ClookupU3E5__1;
				NullCheck((RuntimeObject*)L_25);
				RuntimeObject* L_26;
				L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 18), (RuntimeObject*)L_25);
				NullCheck(L_24);
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_24, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7), L_26);
				__this->___U3ClookupU3E5__1 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClookupU3E5__1), (void*)(RuntimeObject*)NULL);
				goto IL_010d_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00e9_1;
			}
			throw e;
		}

CATCH_00e9_1:
		{
			Exception_t* L_27 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_4 = L_27;
			Exception_t* L_28 = V_4;
			__this->___U3CexU3E5__3 = L_28;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__3), (void*)L_28);
			_GroupByAwait_t875670920DFAF93150B1D58C4DCE41A5247EDF57* L_29 = __this->___U3CU3E4__this;
			NullCheck(L_29);
			UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_30 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_29)->___completionSource);
			Exception_t* L_31 = __this->___U3CexU3E5__3;
			bool L_32;
			L_32 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_30, L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0135;
		}

IL_010d_1:
		{
			_GroupByAwait_t875670920DFAF93150B1D58C4DCE41A5247EDF57* L_33 = __this->___U3CU3E4__this;
			NullCheck(L_33);
			((  void (*) (_GroupByAwait_t875670920DFAF93150B1D58C4DCE41A5247EDF57*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
			goto IL_0135;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_011b;
		}
		throw e;
	}

CATCH_011b:
	{
		Exception_t* L_34 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_4 = L_34;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_35 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
		Exception_t* L_36 = V_4;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline(L_35, L_36, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0149;
	}

IL_0135:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_37 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline(L_37, NULL);
	}

IL_0149:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateLookupU3Ed__15_SetStateMachine_m343E0DFCE23402F4DD1AD86BC1A44043C4520C0A_gshared (U3CCreateLookupU3Ed__15_tA4E5BADCF7A0DE68CB37A6CC47700505A62221F0* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateLookupU3Ed__17__ctor_m5B6E7E7807F4F4B22C74F78DEC63CC80A0CFFE77_gshared (U3CCreateLookupU3Ed__17_tCF191A09107DCE70D8B2B5BABBB95217D96CFB35* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateLookupU3Ed__17_MoveNext_m0FEF2A8BF56EFC13AFF570B71339C40A913F751E_gshared (U3CCreateLookupU3Ed__17_tCF191A09107DCE70D8B2B5BABBB95217D96CFB35* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CCreateLookupU3Ed__17_tCF191A09107DCE70D8B2B5BABBB95217D96CFB35* V_3 = NULL;
	Exception_t* V_4 = NULL;
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
				goto IL_0082_2;
			}

IL_0017_2:
			{
				_GroupJoin_t734D3302E218D4ECE12303A6CF715BDD63386431* L_3 = __this->___U3CU3E4__this;
				RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2));
				_GroupJoin_t734D3302E218D4ECE12303A6CF715BDD63386431* L_5 = __this->___U3CU3E4__this;
				Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_6 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),4));
				_GroupJoin_t734D3302E218D4ECE12303A6CF715BDD63386431* L_7 = __this->___U3CU3E4__this;
				RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6));
				_GroupJoin_t734D3302E218D4ECE12303A6CF715BDD63386431* L_9 = __this->___U3CU3E4__this;
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_10 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7));
				UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 L_11;
				L_11 = ((  UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 (*) (RuntimeObject*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_4, L_6, L_8, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
				V_2 = L_11;
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 L_12;
				L_12 = InvokerFuncInvoker0< Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), (&V_2));
				V_1 = L_12;
				bool L_13;
				L_13 = ((  bool (*) (Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				if (L_13)
				{
					goto IL_009e_2;
				}
			}
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->___U3CU3E1__state = L_14;
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 L_15 = V_1;
				__this->___U3CU3Eu__1 = L_15;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___result), (void*)NULL);
				#endif
				V_3 = __this;
				AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_16 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868*, U3CCreateLookupU3Ed__17_tCF191A09107DCE70D8B2B5BABBB95217D96CFB35**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_16, (&V_1), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
				goto IL_014c;
			}

IL_0082_2:
			{
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 L_17 = __this->___U3CU3Eu__1;
				V_1 = L_17;
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868* L_18 = (Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_18, sizeof(Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state = L_19;
			}

IL_009e_2:
			{
				RuntimeObject* L_20;
				L_20 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), (&V_1));
				__this->___U3CU3Es__1 = L_20;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1), (void*)L_20);
				_GroupJoin_t734D3302E218D4ECE12303A6CF715BDD63386431* L_21 = __this->___U3CU3E4__this;
				RuntimeObject* L_22 = __this->___U3CU3Es__1;
				NullCheck(L_21);
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_21, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),8), L_22);
				__this->___U3CU3Es__1 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1), (void*)(RuntimeObject*)NULL);
				_GroupJoin_t734D3302E218D4ECE12303A6CF715BDD63386431* L_23 = __this->___U3CU3E4__this;
				_GroupJoin_t734D3302E218D4ECE12303A6CF715BDD63386431* L_24 = __this->___U3CU3E4__this;
				RuntimeObject* L_25 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_24, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1));
				_GroupJoin_t734D3302E218D4ECE12303A6CF715BDD63386431* L_26 = __this->___U3CU3E4__this;
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_27 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_26, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7));
				NullCheck(L_25);
				RuntimeObject* L_28;
				L_28 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), L_25, L_27);
				NullCheck(L_23);
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_23, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9), L_28);
				goto IL_0110_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00ec_1;
			}
			throw e;
		}

CATCH_00ec_1:
		{
			Exception_t* L_29 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_4 = L_29;
			Exception_t* L_30 = V_4;
			__this->___U3CexU3E5__2 = L_30;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__2), (void*)L_30);
			_GroupJoin_t734D3302E218D4ECE12303A6CF715BDD63386431* L_31 = __this->___U3CU3E4__this;
			NullCheck(L_31);
			UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_32 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_31)->___completionSource);
			Exception_t* L_33 = __this->___U3CexU3E5__2;
			bool L_34;
			L_34 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_32, L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0138;
		}

IL_0110_1:
		{
			_GroupJoin_t734D3302E218D4ECE12303A6CF715BDD63386431* L_35 = __this->___U3CU3E4__this;
			NullCheck(L_35);
			((  void (*) (_GroupJoin_t734D3302E218D4ECE12303A6CF715BDD63386431*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(L_35, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
			goto IL_0138;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_011e;
		}
		throw e;
	}

CATCH_011e:
	{
		Exception_t* L_36 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_4 = L_36;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_37 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
		Exception_t* L_38 = V_4;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline(L_37, L_38, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_014c;
	}

IL_0138:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_39 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline(L_39, NULL);
	}

IL_014c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateLookupU3Ed__17_SetStateMachine_mA0A9901E6F6609A766C541488D7BD90F9EB332DA_gshared (U3CCreateLookupU3Ed__17_tCF191A09107DCE70D8B2B5BABBB95217D96CFB35* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateLookupU3Ed__22__ctor_m4FC5225C423EA89EC3EF57A97F2D2AABF615DAB0_gshared (U3CCreateLookupU3Ed__22_t117204D4DCCB155E1400E8E552A4C316016FD73F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateLookupU3Ed__22_MoveNext_m9F0D6292B23E962F6C349A62625ABF6B11B3373C_gshared (U3CCreateLookupU3Ed__22_t117204D4DCCB155E1400E8E552A4C316016FD73F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CCreateLookupU3Ed__22_t117204D4DCCB155E1400E8E552A4C316016FD73F* V_3 = NULL;
	Exception_t* V_4 = NULL;
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
				goto IL_0082_2;
			}

IL_0017_2:
			{
				_GroupJoinAwaitWithCancellation_tC2259281E375832F749FBE2646A414525A72B39D* L_3 = __this->___U3CU3E4__this;
				RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),4));
				_GroupJoinAwaitWithCancellation_tC2259281E375832F749FBE2646A414525A72B39D* L_5 = __this->___U3CU3E4__this;
				Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E* L_6 = *(Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6));
				_GroupJoinAwaitWithCancellation_tC2259281E375832F749FBE2646A414525A72B39D* L_7 = __this->___U3CU3E4__this;
				RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),8));
				_GroupJoinAwaitWithCancellation_tC2259281E375832F749FBE2646A414525A72B39D* L_9 = __this->___U3CU3E4__this;
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_10 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9));
				UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 L_11;
				L_11 = ((  UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 (*) (RuntimeObject*, Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_4, L_6, L_8, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
				V_2 = L_11;
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 L_12;
				L_12 = InvokerFuncInvoker0< Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), (&V_2));
				V_1 = L_12;
				bool L_13;
				L_13 = ((  bool (*) (Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				if (L_13)
				{
					goto IL_009e_2;
				}
			}
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->___U3CU3E1__state = L_14;
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 L_15 = V_1;
				__this->___U3CU3Eu__1 = L_15;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___result), (void*)NULL);
				#endif
				V_3 = __this;
				AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_16 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868*, U3CCreateLookupU3Ed__22_t117204D4DCCB155E1400E8E552A4C316016FD73F**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_16, (&V_1), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
				goto IL_014c;
			}

IL_0082_2:
			{
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 L_17 = __this->___U3CU3Eu__1;
				V_1 = L_17;
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868* L_18 = (Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_18, sizeof(Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state = L_19;
			}

IL_009e_2:
			{
				RuntimeObject* L_20;
				L_20 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), (&V_1));
				__this->___U3CU3Es__1 = L_20;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1), (void*)L_20);
				_GroupJoinAwaitWithCancellation_tC2259281E375832F749FBE2646A414525A72B39D* L_21 = __this->___U3CU3E4__this;
				RuntimeObject* L_22 = __this->___U3CU3Es__1;
				NullCheck(L_21);
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_21, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),10), L_22);
				__this->___U3CU3Es__1 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1), (void*)(RuntimeObject*)NULL);
				_GroupJoinAwaitWithCancellation_tC2259281E375832F749FBE2646A414525A72B39D* L_23 = __this->___U3CU3E4__this;
				_GroupJoinAwaitWithCancellation_tC2259281E375832F749FBE2646A414525A72B39D* L_24 = __this->___U3CU3E4__this;
				RuntimeObject* L_25 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_24, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3));
				_GroupJoinAwaitWithCancellation_tC2259281E375832F749FBE2646A414525A72B39D* L_26 = __this->___U3CU3E4__this;
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_27 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_26, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9));
				NullCheck(L_25);
				RuntimeObject* L_28;
				L_28 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), L_25, L_27);
				NullCheck(L_23);
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_23, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),11), L_28);
				goto IL_0110_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00ec_1;
			}
			throw e;
		}

CATCH_00ec_1:
		{
			Exception_t* L_29 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_4 = L_29;
			Exception_t* L_30 = V_4;
			__this->___U3CexU3E5__2 = L_30;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__2), (void*)L_30);
			_GroupJoinAwaitWithCancellation_tC2259281E375832F749FBE2646A414525A72B39D* L_31 = __this->___U3CU3E4__this;
			NullCheck(L_31);
			UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_32 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_31)->___completionSource);
			Exception_t* L_33 = __this->___U3CexU3E5__2;
			bool L_34;
			L_34 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_32, L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0138;
		}

IL_0110_1:
		{
			_GroupJoinAwaitWithCancellation_tC2259281E375832F749FBE2646A414525A72B39D* L_35 = __this->___U3CU3E4__this;
			NullCheck(L_35);
			((  void (*) (_GroupJoinAwaitWithCancellation_tC2259281E375832F749FBE2646A414525A72B39D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(L_35, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
			goto IL_0138;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_011e;
		}
		throw e;
	}

CATCH_011e:
	{
		Exception_t* L_36 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_4 = L_36;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_37 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
		Exception_t* L_38 = V_4;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline(L_37, L_38, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_014c;
	}

IL_0138:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_39 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline(L_39, NULL);
	}

IL_014c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateLookupU3Ed__22_SetStateMachine_mE37420A64E4EEBB20345C0AA0274C70EB555B343_gshared (U3CCreateLookupU3Ed__22_t117204D4DCCB155E1400E8E552A4C316016FD73F* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateLookupU3Ed__22__ctor_m7D1DA11750DBDDD7BC4C2B6DFCEECBABBE956C5B_gshared (U3CCreateLookupU3Ed__22_t52FEE97F9E84A95DF02A8DD82869F7CF441FA381* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateLookupU3Ed__22_MoveNext_mE94030A89707A9343EC5B81C8861585FB3345087_gshared (U3CCreateLookupU3Ed__22_t52FEE97F9E84A95DF02A8DD82869F7CF441FA381* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CCreateLookupU3Ed__22_t52FEE97F9E84A95DF02A8DD82869F7CF441FA381* V_3 = NULL;
	Exception_t* V_4 = NULL;
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
				goto IL_0082_2;
			}

IL_0017_2:
			{
				_GroupJoinAwait_t0BCE0F1B4A33E3F3CA25EE17EAB7464F6A19A651* L_3 = __this->___U3CU3E4__this;
				RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),4));
				_GroupJoinAwait_t0BCE0F1B4A33E3F3CA25EE17EAB7464F6A19A651* L_5 = __this->___U3CU3E4__this;
				Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2* L_6 = *(Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6));
				_GroupJoinAwait_t0BCE0F1B4A33E3F3CA25EE17EAB7464F6A19A651* L_7 = __this->___U3CU3E4__this;
				RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),8));
				_GroupJoinAwait_t0BCE0F1B4A33E3F3CA25EE17EAB7464F6A19A651* L_9 = __this->___U3CU3E4__this;
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_10 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9));
				UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 L_11;
				L_11 = ((  UniTask_1_t456B25C1C059998C8C7E53E188BBABA2596DC155 (*) (RuntimeObject*, Func_2_t6638324C45785CAE3F420E04BBBE7E5A8C7744A2*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_4, L_6, L_8, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
				V_2 = L_11;
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 L_12;
				L_12 = InvokerFuncInvoker0< Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), (&V_2));
				V_1 = L_12;
				bool L_13;
				L_13 = ((  bool (*) (Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				if (L_13)
				{
					goto IL_009e_2;
				}
			}
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->___U3CU3E1__state = L_14;
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 L_15 = V_1;
				__this->___U3CU3Eu__1 = L_15;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___result), (void*)NULL);
				#endif
				V_3 = __this;
				AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_16 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868*, U3CCreateLookupU3Ed__22_t52FEE97F9E84A95DF02A8DD82869F7CF441FA381**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_16, (&V_1), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
				goto IL_014c;
			}

IL_0082_2:
			{
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868 L_17 = __this->___U3CU3Eu__1;
				V_1 = L_17;
				Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868* L_18 = (Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_18, sizeof(Awaiter_t3A066C1930C36C7F11CFF41951B2E023B1D2B868));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state = L_19;
			}

IL_009e_2:
			{
				RuntimeObject* L_20;
				L_20 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), (&V_1));
				__this->___U3CU3Es__1 = L_20;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1), (void*)L_20);
				_GroupJoinAwait_t0BCE0F1B4A33E3F3CA25EE17EAB7464F6A19A651* L_21 = __this->___U3CU3E4__this;
				RuntimeObject* L_22 = __this->___U3CU3Es__1;
				NullCheck(L_21);
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_21, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),10), L_22);
				__this->___U3CU3Es__1 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1), (void*)(RuntimeObject*)NULL);
				_GroupJoinAwait_t0BCE0F1B4A33E3F3CA25EE17EAB7464F6A19A651* L_23 = __this->___U3CU3E4__this;
				_GroupJoinAwait_t0BCE0F1B4A33E3F3CA25EE17EAB7464F6A19A651* L_24 = __this->___U3CU3E4__this;
				RuntimeObject* L_25 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_24, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3));
				_GroupJoinAwait_t0BCE0F1B4A33E3F3CA25EE17EAB7464F6A19A651* L_26 = __this->___U3CU3E4__this;
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_27 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_26, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9));
				NullCheck(L_25);
				RuntimeObject* L_28;
				L_28 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), L_25, L_27);
				NullCheck(L_23);
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_23, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),11), L_28);
				goto IL_0110_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00ec_1;
			}
			throw e;
		}

CATCH_00ec_1:
		{
			Exception_t* L_29 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_4 = L_29;
			Exception_t* L_30 = V_4;
			__this->___U3CexU3E5__2 = L_30;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__2), (void*)L_30);
			_GroupJoinAwait_t0BCE0F1B4A33E3F3CA25EE17EAB7464F6A19A651* L_31 = __this->___U3CU3E4__this;
			NullCheck(L_31);
			UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_32 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_31)->___completionSource);
			Exception_t* L_33 = __this->___U3CexU3E5__2;
			bool L_34;
			L_34 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_32, L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0138;
		}

IL_0110_1:
		{
			_GroupJoinAwait_t0BCE0F1B4A33E3F3CA25EE17EAB7464F6A19A651* L_35 = __this->___U3CU3E4__this;
			NullCheck(L_35);
			((  void (*) (_GroupJoinAwait_t0BCE0F1B4A33E3F3CA25EE17EAB7464F6A19A651*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(L_35, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
			goto IL_0138;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_011e;
		}
		throw e;
	}

CATCH_011e:
	{
		Exception_t* L_36 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_4 = L_36;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_37 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
		Exception_t* L_38 = V_4;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline(L_37, L_38, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_014c;
	}

IL_0138:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_39 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline(L_39, NULL);
	}

IL_014c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateLookupU3Ed__22_SetStateMachine_m6E83C090EBBED7A91EB35DF321D6DFB2B1A85338_gshared (U3CCreateLookupU3Ed__22_t52FEE97F9E84A95DF02A8DD82869F7CF441FA381* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateSortSourceU3Ed__11__ctor_m2B0B6E257DF9662CA3EC7ADFEDA3840841A9B798_gshared (U3CCreateSortSourceU3Ed__11_tE37775A1D7E4D9D536C4E9E086D8647565BC3A28* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateSortSourceU3Ed__11_MoveNext_mD75F668122D2796D85043C9EAFA74BE0167F17D2_gshared (U3CCreateSortSourceU3Ed__11_tE37775A1D7E4D9D536C4E9E086D8647565BC3A28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m58A82551C6D037CFF5E62E436BCC9E01A7B68E15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_mB0A28B7856D62D6CAACC58520DB7146F4F20902D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m6153FD0524F5E68CFF73D2DA3C404F8A24AA62AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TElement_t64CDA871448A573035731FB68F0FC89F020919FE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_61 = alloca(SizeOf_TElement_t64CDA871448A573035731FB68F0FC89F020919FE);
	int32_t V_0 = 0;
	Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C V_1;
	memset((&V_1), 0, sizeof(V_1));
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tF1161044B03B89C690A1FB77CF673B0EDEE8B5BD V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CCreateSortSourceU3Ed__11_tE37775A1D7E4D9D536C4E9E086D8647565BC3A28* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tDDA9C37E31FF3B86EA8F52785A4D13E171A98A1B V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_t2C72A70EFDBF65F178685DE3BA64E3103AB12EB9 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	Exception_t* V_9 = NULL;
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
				goto IL_000d_1;
			}
		}
		{
			goto IL_000f_1;
		}

IL_000d_1:
		{
			goto IL_0010_1;
		}

IL_000f_1:
		{
		}

IL_0010_1:
		{
		}
		try
		{
			{
				int32_t L_2 = V_0;
				if (!L_2)
				{
					goto IL_001c_2;
				}
			}
			{
				goto IL_0016_2;
			}

IL_0016_2:
			{
				int32_t L_3 = V_0;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_001e_2;
				}
			}
			{
				goto IL_0023_2;
			}

IL_001c_2:
			{
				goto IL_007c_2;
			}

IL_001e_2:
			{
				goto IL_016c_2;
			}

IL_0023_2:
			{
				_OrderedAsyncEnumerator_tE95008AEB4F55AFA2DE331CCD81FBAC9638B7A63* L_4 = __this->___U3CU3E4__this;
				OrderedAsyncEnumerable_1_t2D0E5E8D745681DE86B1F1335B815A354DD1F373* L_5 = *(OrderedAsyncEnumerable_1_t2D0E5E8D745681DE86B1F1335B815A354DD1F373**)il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0));
				NullCheck(L_5);
				RuntimeObject* L_6 = L_5->___source;
				il2cpp_codegen_initobj((&V_2), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_7 = V_2;
				UniTask_1_tF1161044B03B89C690A1FB77CF673B0EDEE8B5BD L_8;
				L_8 = ((  UniTask_1_tF1161044B03B89C690A1FB77CF673B0EDEE8B5BD (*) (RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
				V_3 = L_8;
				Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C L_9;
				L_9 = InvokerFuncInvoker0< Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), (&V_3));
				V_1 = L_9;
				bool L_10;
				L_10 = ((  bool (*) (Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				if (L_10)
				{
					goto IL_0098_2;
				}
			}
			{
				int32_t L_11 = 0;
				V_0 = L_11;
				__this->___U3CU3E1__state = L_11;
				Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C L_12 = V_1;
				__this->___U3CU3Eu__1 = L_12;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___result), (void*)NULL);
				#endif
				V_4 = __this;
				AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_13 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C*, U3CCreateSortSourceU3Ed__11_tE37775A1D7E4D9D536C4E9E086D8647565BC3A28**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_13, (&V_1), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_026b;
			}

IL_007c_2:
			{
				Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C L_14 = __this->___U3CU3Eu__1;
				V_1 = L_14;
				Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C* L_15 = (Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_15, sizeof(Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C));
				int32_t L_16 = (-1);
				V_0 = L_16;
				__this->___U3CU3E1__state = L_16;
			}

IL_0098_2:
			{
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17;
				L_17 = InvokerFuncInvoker0< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), (&V_1));
				__this->___U3CU3Es__2 = L_17;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)L_17);
				_OrderedAsyncEnumerator_tE95008AEB4F55AFA2DE331CCD81FBAC9638B7A63* L_18 = __this->___U3CU3E4__this;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19 = __this->___U3CU3Es__2;
				NullCheck(L_18);
				il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_18, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2), L_19);
				__this->___U3CU3Es__2 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL);
				_OrderedAsyncEnumerator_tE95008AEB4F55AFA2DE331CCD81FBAC9638B7A63* L_20 = __this->___U3CU3E4__this;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(L_20, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2));
				NullCheck(L_21);
				V_5 = (bool)((((int32_t)(((RuntimeArray*)L_21)->max_length)) == ((int32_t)0))? 1 : 0);
				bool L_22 = V_5;
				if (!L_22)
				{
					goto IL_00ea_2;
				}
			}
			{
				_OrderedAsyncEnumerator_tE95008AEB4F55AFA2DE331CCD81FBAC9638B7A63* L_23 = __this->___U3CU3E4__this;
				NullCheck(L_23);
				UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_24 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_23)->___completionSource);
				bool L_25;
				L_25 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_24, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
				goto IL_0257;
			}

IL_00ea_2:
			{
				_OrderedAsyncEnumerator_tE95008AEB4F55AFA2DE331CCD81FBAC9638B7A63* L_26 = __this->___U3CU3E4__this;
				OrderedAsyncEnumerable_1_t2D0E5E8D745681DE86B1F1335B815A354DD1F373* L_27 = *(OrderedAsyncEnumerable_1_t2D0E5E8D745681DE86B1F1335B815A354DD1F373**)il2cpp_codegen_get_instance_field_data_pointer(L_26, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0));
				_OrderedAsyncEnumerator_tE95008AEB4F55AFA2DE331CCD81FBAC9638B7A63* L_28 = __this->___U3CU3E4__this;
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_29 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_28, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1));
				NullCheck(L_27);
				AsyncEnumerableSorter_1_tB12E111BEE1BE3928D42C95E823E309905F94836* L_30;
				L_30 = VirtualFuncInvoker2< AsyncEnumerableSorter_1_tB12E111BEE1BE3928D42C95E823E309905F94836*, AsyncEnumerableSorter_1_tB12E111BEE1BE3928D42C95E823E309905F94836*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(8, L_27, (AsyncEnumerableSorter_1_tB12E111BEE1BE3928D42C95E823E309905F94836*)NULL, L_29);
				__this->___U3CsorterU3E5__1 = L_30;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsorterU3E5__1), (void*)L_30);
				AsyncEnumerableSorter_1_tB12E111BEE1BE3928D42C95E823E309905F94836* L_31 = __this->___U3CsorterU3E5__1;
				_OrderedAsyncEnumerator_tE95008AEB4F55AFA2DE331CCD81FBAC9638B7A63* L_32 = __this->___U3CU3E4__this;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_33 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(L_32, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2));
				_OrderedAsyncEnumerator_tE95008AEB4F55AFA2DE331CCD81FBAC9638B7A63* L_34 = __this->___U3CU3E4__this;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_35 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(L_34, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2));
				NullCheck(L_35);
				NullCheck(L_31);
				UniTask_1_t2C72A70EFDBF65F178685DE3BA64E3103AB12EB9 L_36;
				L_36 = ((  UniTask_1_t2C72A70EFDBF65F178685DE3BA64E3103AB12EB9 (*) (AsyncEnumerableSorter_1_tB12E111BEE1BE3928D42C95E823E309905F94836*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_31, L_33, ((int32_t)(((RuntimeArray*)L_35)->max_length)), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
				V_7 = L_36;
				Awaiter_tDDA9C37E31FF3B86EA8F52785A4D13E171A98A1B L_37;
				L_37 = UniTask_1_GetAwaiter_m6153FD0524F5E68CFF73D2DA3C404F8A24AA62AA_inline((&V_7), UniTask_1_GetAwaiter_m6153FD0524F5E68CFF73D2DA3C404F8A24AA62AA_RuntimeMethod_var);
				V_6 = L_37;
				bool L_38;
				L_38 = Awaiter_get_IsCompleted_mB0A28B7856D62D6CAACC58520DB7146F4F20902D_inline((&V_6), Awaiter_get_IsCompleted_mB0A28B7856D62D6CAACC58520DB7146F4F20902D_RuntimeMethod_var);
				if (L_38)
				{
					goto IL_0189_2;
				}
			}
			{
				int32_t L_39 = 1;
				V_0 = L_39;
				__this->___U3CU3E1__state = L_39;
				Awaiter_tDDA9C37E31FF3B86EA8F52785A4D13E171A98A1B L_40 = V_6;
				__this->___U3CU3Eu__2 = L_40;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___result), (void*)NULL);
				#endif
				V_4 = __this;
				AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_41 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tDDA9C37E31FF3B86EA8F52785A4D13E171A98A1B*, U3CCreateSortSourceU3Ed__11_tE37775A1D7E4D9D536C4E9E086D8647565BC3A28**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_41, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
				goto IL_026b;
			}

IL_016c_2:
			{
				Awaiter_tDDA9C37E31FF3B86EA8F52785A4D13E171A98A1B L_42 = __this->___U3CU3Eu__2;
				V_6 = L_42;
				Awaiter_tDDA9C37E31FF3B86EA8F52785A4D13E171A98A1B* L_43 = (Awaiter_tDDA9C37E31FF3B86EA8F52785A4D13E171A98A1B*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_43, sizeof(Awaiter_tDDA9C37E31FF3B86EA8F52785A4D13E171A98A1B));
				int32_t L_44 = (-1);
				V_0 = L_44;
				__this->___U3CU3E1__state = L_44;
			}

IL_0189_2:
			{
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45;
				L_45 = Awaiter_GetResult_m58A82551C6D037CFF5E62E436BCC9E01A7B68E15_inline((&V_6), Awaiter_GetResult_m58A82551C6D037CFF5E62E436BCC9E01A7B68E15_RuntimeMethod_var);
				__this->___U3CU3Es__3 = L_45;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_45);
				_OrderedAsyncEnumerator_tE95008AEB4F55AFA2DE331CCD81FBAC9638B7A63* L_46 = __this->___U3CU3E4__this;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = __this->___U3CU3Es__3;
				NullCheck(L_46);
				il2cpp_codegen_write_instance_field_data<Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*>(L_46, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3), L_47);
				__this->___U3CU3Es__3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
				__this->___U3CsorterU3E5__1 = (AsyncEnumerableSorter_1_tB12E111BEE1BE3928D42C95E823E309905F94836*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsorterU3E5__1), (void*)(AsyncEnumerableSorter_1_tB12E111BEE1BE3928D42C95E823E309905F94836*)NULL);
				_OrderedAsyncEnumerator_tE95008AEB4F55AFA2DE331CCD81FBAC9638B7A63* L_48 = __this->___U3CU3E4__this;
				_OrderedAsyncEnumerator_tE95008AEB4F55AFA2DE331CCD81FBAC9638B7A63* L_49 = __this->___U3CU3E4__this;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_50 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(L_49, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2));
				_OrderedAsyncEnumerator_tE95008AEB4F55AFA2DE331CCD81FBAC9638B7A63* L_51 = __this->___U3CU3E4__this;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = *(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**)il2cpp_codegen_get_instance_field_data_pointer(L_51, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3));
				_OrderedAsyncEnumerator_tE95008AEB4F55AFA2DE331CCD81FBAC9638B7A63* L_53 = __this->___U3CU3E4__this;
				_OrderedAsyncEnumerator_tE95008AEB4F55AFA2DE331CCD81FBAC9638B7A63* L_54 = __this->___U3CU3E4__this;
				int32_t L_55 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_54, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),4));
				V_8 = L_55;
				int32_t L_56 = V_8;
				NullCheck(L_53);
				il2cpp_codegen_write_instance_field_data<int32_t>(L_53, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),4), ((int32_t)il2cpp_codegen_add(L_56, 1)));
				int32_t L_57 = V_8;
				NullCheck(L_52);
				int32_t L_58 = L_57;
				int32_t L_59 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
				NullCheck(L_50);
				int32_t L_60 = L_59;
				il2cpp_codegen_memcpy(L_61, (L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_60)), SizeOf_TElement_t64CDA871448A573035731FB68F0FC89F020919FE);
				NullCheck(L_48);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), L_48, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_61: *(void**)L_61));
				__this->___U3CsorterU3E5__1 = (AsyncEnumerableSorter_1_tB12E111BEE1BE3928D42C95E823E309905F94836*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsorterU3E5__1), (void*)(AsyncEnumerableSorter_1_tB12E111BEE1BE3928D42C95E823E309905F94836*)NULL);
				goto IL_0229_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0205_1;
			}
			throw e;
		}

CATCH_0205_1:
		{
			Exception_t* L_62 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_9 = L_62;
			Exception_t* L_63 = V_9;
			__this->___U3CexU3E5__4 = L_63;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__4), (void*)L_63);
			_OrderedAsyncEnumerator_tE95008AEB4F55AFA2DE331CCD81FBAC9638B7A63* L_64 = __this->___U3CU3E4__this;
			NullCheck(L_64);
			UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_65 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_64)->___completionSource);
			Exception_t* L_66 = __this->___U3CexU3E5__4;
			bool L_67;
			L_67 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_65, L_66, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0257;
		}

IL_0229_1:
		{
			_OrderedAsyncEnumerator_tE95008AEB4F55AFA2DE331CCD81FBAC9638B7A63* L_68 = __this->___U3CU3E4__this;
			NullCheck(L_68);
			UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_69 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_68)->___completionSource);
			bool L_70;
			L_70 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_69, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
			goto IL_0257;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_023d;
		}
		throw e;
	}

CATCH_023d:
	{
		Exception_t* L_71 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_9 = L_71;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_72 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
		Exception_t* L_73 = V_9;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline(L_72, L_73, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_026b;
	}

IL_0257:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_74 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline(L_74, NULL);
	}

IL_026b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateSortSourceU3Ed__11_SetStateMachine_m9F1BC34196D51D372CBEAD4C25D26BB5E6A05E4A_gshared (U3CCreateSortSourceU3Ed__11_tE37775A1D7E4D9D536C4E9E086D8647565BC3A28* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefaultIfEmptyIteratorU3Ed__95_1__ctor_mC274E311ADB2EB8821758946E935EED82FD661F5_gshared (U3CDefaultIfEmptyIteratorU3Ed__95_1_t6FBABBB9FB21D2096813D56B80A09AAFE8E11EBD* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefaultIfEmptyIteratorU3Ed__95_1_System_IDisposable_Dispose_m3A5505D385063A8527E4EC90EDA6FA3CD1B41F17_gshared (U3CDefaultIfEmptyIteratorU3Ed__95_1_t6FBABBB9FB21D2096813D56B80A09AAFE8E11EBD* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(L_2, 1))) <= ((uint32_t)1))))
		{
			goto IL_001c;
		}
	}

IL_0012:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0015:
			{
				((  void (*) (U3CDefaultIfEmptyIteratorU3Ed__95_1_t6FBABBB9FB21D2096813D56B80A09AAFE8E11EBD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				return;
			}
		});
		try
		{
			goto IL_001c;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDefaultIfEmptyIteratorU3Ed__95_1_MoveNext_m5D08269B15A7481EF4D9E4D7C34D34171957DCB3_gshared (U3CDefaultIfEmptyIteratorU3Ed__95_1_t6FBABBB9FB21D2096813D56B80A09AAFE8E11EBD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t978D054B95BA77A89501556C10956D2FEE1C6AD6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TSource_t978D054B95BA77A89501556C10956D2FEE1C6AD6);
	const Il2CppFullySharedGenericAny L_10 = L_7;
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00b0:
			{
				((  void (*) (U3CDefaultIfEmptyIteratorU3Ed__95_1_t6FBABBB9FB21D2096813D56B80A09AAFE8E11EBD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
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
						goto IL_0069_1;
					}
					case 2:
					{
						goto IL_0097_1;
					}
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00b7;
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
				RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck((RuntimeObject*)L_4);
				bool L_5;
				L_5 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				if (!L_5)
				{
					goto IL_0080_1;
				}
			}

IL_004d_1:
			{
				RuntimeObject* L_6 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck(L_6);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_6, (Il2CppFullySharedGenericAny*)L_7);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_7, SizeOf_TSource_t978D054B95BA77A89501556C10956D2FEE1C6AD6);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
				V_0 = (bool)1;
				goto IL_00b7;
			}

IL_0069_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
				RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_004d_1;
				}
			}
			{
				goto IL_009f_1;
			}

IL_0080_1:
			{
				il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)), SizeOf_TSource_t978D054B95BA77A89501556C10956D2FEE1C6AD6);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_10, SizeOf_TSource_t978D054B95BA77A89501556C10956D2FEE1C6AD6);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 2);
				V_0 = (bool)1;
				goto IL_00b7;
			}

IL_0097_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
			}

IL_009f_1:
			{
				((  void (*) (U3CDefaultIfEmptyIteratorU3Ed__95_1_t6FBABBB9FB21D2096813D56B80A09AAFE8E11EBD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), (RuntimeObject*)NULL);
				V_0 = (bool)0;
				goto IL_00b7;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b7:
	{
		bool L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefaultIfEmptyIteratorU3Ed__95_1_U3CU3Em__Finally1_m11F6B42C48E284B68340CE555429B89291F634E2_gshared (U3CDefaultIfEmptyIteratorU3Ed__95_1_t6FBABBB9FB21D2096813D56B80A09AAFE8E11EBD* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefaultIfEmptyIteratorU3Ed__95_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m8E57C0BD4FE2D8E3A37A5CD70988CC2D279C90F9_gshared (U3CDefaultIfEmptyIteratorU3Ed__95_1_t6FBABBB9FB21D2096813D56B80A09AAFE8E11EBD* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t978D054B95BA77A89501556C10956D2FEE1C6AD6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t978D054B95BA77A89501556C10956D2FEE1C6AD6);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TSource_t978D054B95BA77A89501556C10956D2FEE1C6AD6);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TSource_t978D054B95BA77A89501556C10956D2FEE1C6AD6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefaultIfEmptyIteratorU3Ed__95_1_System_Collections_IEnumerator_Reset_m64983D7F6700DA82B390FF058EEA8947794CA028_gshared (U3CDefaultIfEmptyIteratorU3Ed__95_1_t6FBABBB9FB21D2096813D56B80A09AAFE8E11EBD* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDefaultIfEmptyIteratorU3Ed__95_1_System_Collections_IEnumerator_get_Current_m141327F685AFC9AD539E8125A3DFCF13AACB98C6_gshared (U3CDefaultIfEmptyIteratorU3Ed__95_1_t6FBABBB9FB21D2096813D56B80A09AAFE8E11EBD* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t978D054B95BA77A89501556C10956D2FEE1C6AD6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t978D054B95BA77A89501556C10956D2FEE1C6AD6);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TSource_t978D054B95BA77A89501556C10956D2FEE1C6AD6);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDefaultIfEmptyIteratorU3Ed__95_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m1700ADF83480C120198E522217526668537A6635_gshared (U3CDefaultIfEmptyIteratorU3Ed__95_1_t6FBABBB9FB21D2096813D56B80A09AAFE8E11EBD* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t978D054B95BA77A89501556C10956D2FEE1C6AD6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TSource_t978D054B95BA77A89501556C10956D2FEE1C6AD6);
	U3CDefaultIfEmptyIteratorU3Ed__95_1_t6FBABBB9FB21D2096813D56B80A09AAFE8E11EBD* V_0 = NULL;
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
		U3CDefaultIfEmptyIteratorU3Ed__95_1_t6FBABBB9FB21D2096813D56B80A09AAFE8E11EBD* L_3 = (U3CDefaultIfEmptyIteratorU3Ed__95_1_t6FBABBB9FB21D2096813D56B80A09AAFE8E11EBD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (U3CDefaultIfEmptyIteratorU3Ed__95_1_t6FBABBB9FB21D2096813D56B80A09AAFE8E11EBD*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_3;
	}

IL_0029:
	{
		U3CDefaultIfEmptyIteratorU3Ed__95_1_t6FBABBB9FB21D2096813D56B80A09AAFE8E11EBD* L_4 = V_0;
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NullCheck(L_4);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_5);
		U3CDefaultIfEmptyIteratorU3Ed__95_1_t6FBABBB9FB21D2096813D56B80A09AAFE8E11EBD* L_6 = V_0;
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6)), SizeOf_TSource_t978D054B95BA77A89501556C10956D2FEE1C6AD6);
		NullCheck(L_6);
		il2cpp_codegen_write_instance_field_data(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_7, SizeOf_TSource_t978D054B95BA77A89501556C10956D2FEE1C6AD6);
		U3CDefaultIfEmptyIteratorU3Ed__95_1_t6FBABBB9FB21D2096813D56B80A09AAFE8E11EBD* L_8 = V_0;
		return (RuntimeObject*)L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDefaultIfEmptyIteratorU3Ed__95_1_System_Collections_IEnumerable_GetEnumerator_m69DBA14DB18A6525A27390FD355296AE2AAE33EC_gshared (U3CDefaultIfEmptyIteratorU3Ed__95_1_t6FBABBB9FB21D2096813D56B80A09AAFE8E11EBD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (U3CDefaultIfEmptyIteratorU3Ed__95_1_t6FBABBB9FB21D2096813D56B80A09AAFE8E11EBD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDepthFirstTraversalOfTypeU3Ed__86_1__ctor_m02EEDBBEA6A39CEF905807939111564C877CA989_gshared (U3CDepthFirstTraversalOfTypeU3Ed__86_1_t39CB7AE01B1B7DE8D693608B77B395D20B2D9A71* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDepthFirstTraversalOfTypeU3Ed__86_1_System_IDisposable_Dispose_mBD56CC077668B5B6DB4AC7D4F39AE07E43D2C6B2_gshared (U3CDepthFirstTraversalOfTypeU3Ed__86_1_t39CB7AE01B1B7DE8D693608B77B395D20B2D9A71* __this, const RuntimeMethod* method) 
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
				U3CDepthFirstTraversalOfTypeU3Ed__86_1_U3CU3Em__Finally1_mCB1CEEB59301FE807E970901ACD0A6C0761B2E38(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDepthFirstTraversalOfTypeU3Ed__86_1_MoveNext_m1CC3B83348E6BCC2DAD8434D73ED99B05FF91859_gshared (U3CDepthFirstTraversalOfTypeU3Ed__86_1_t39CB7AE01B1B7DE8D693608B77B395D20B2D9A71* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB526EBFC83BD70FAB543DE8DE30AD8D729CC0E4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tA2E0B454CD5402DE9DA3E98624BD4F0A37A46AD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_009d:
			{
				U3CDepthFirstTraversalOfTypeU3Ed__86_1_System_IDisposable_Dispose_mBD56CC077668B5B6DB4AC7D4F39AE07E43D2C6B2(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
				return;
			}
		});
		try
		{
			{
				int32_t L_0 = __this->___U3CU3E1__state;
				V_1 = L_0;
				VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* L_1 = __this->___U3CU3E4__this;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_001c_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_0077_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00a4;
			}

IL_001c_1:
			{
				__this->___U3CU3E1__state = (-1);
				VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* L_4 = V_2;
				NullCheck(L_4);
				RuntimeObject* L_5;
				L_5 = VisualTreeAsset_DepthFirstTraversal_m940C9EA200F4D9EC650E509E323902855EF4323C(L_4, NULL);
				V_3 = L_5;
				RuntimeObject* L_6 = V_3;
				NullCheck(L_6);
				RuntimeObject* L_7;
				L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB526EBFC83BD70FAB543DE8DE30AD8D729CC0E4D_il2cpp_TypeInfo_var, L_6);
				__this->___U3CU3E7__wrap1 = L_7;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1), (void*)L_7);
				__this->___U3CU3E1__state = ((int32_t)-3);
				goto IL_007f_1;
			}

IL_0040_1:
			{
				RuntimeObject* L_8 = __this->___U3CU3E7__wrap1;
				NullCheck(L_8);
				UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A* L_9;
				L_9 = InterfaceFuncInvoker0< UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A* >::Invoke(0, IEnumerator_1_tA2E0B454CD5402DE9DA3E98624BD4F0A37A46AD6_il2cpp_TypeInfo_var, L_8);
				V_4 = L_9;
				UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A* L_10 = V_4;
				if (!((RuntimeObject*)IsInst((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 2))))
				{
					goto IL_007f_1;
				}
			}
			{
				UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A* L_11 = V_4;
				V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_11, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
				RuntimeObject* L_12 = V_5;
				__this->___U3CU3E2__current = L_12;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_12);
				__this->___U3CU3E1__state = 1;
				V_0 = (bool)1;
				goto IL_00a4;
			}

IL_0077_1:
			{
				__this->___U3CU3E1__state = ((int32_t)-3);
			}

IL_007f_1:
			{
				RuntimeObject* L_13 = __this->___U3CU3E7__wrap1;
				NullCheck((RuntimeObject*)L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
				if (L_14)
				{
					goto IL_0040_1;
				}
			}
			{
				U3CDepthFirstTraversalOfTypeU3Ed__86_1_U3CU3Em__Finally1_mCB1CEEB59301FE807E970901ACD0A6C0761B2E38(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				__this->___U3CU3E7__wrap1 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1), (void*)(RuntimeObject*)NULL);
				V_0 = (bool)0;
				goto IL_00a4;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a4:
	{
		bool L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDepthFirstTraversalOfTypeU3Ed__86_1_U3CU3Em__Finally1_mCB1CEEB59301FE807E970901ACD0A6C0761B2E38_gshared (U3CDepthFirstTraversalOfTypeU3Ed__86_1_t39CB7AE01B1B7DE8D693608B77B395D20B2D9A71* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state = (-1);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap1;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CU3E7__wrap1;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDepthFirstTraversalOfTypeU3Ed__86_1_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m98DAD664147489699B7E26E5CF998B92295742F1_gshared (U3CDepthFirstTraversalOfTypeU3Ed__86_1_t39CB7AE01B1B7DE8D693608B77B395D20B2D9A71* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDepthFirstTraversalOfTypeU3Ed__86_1_System_Collections_IEnumerator_Reset_m69A57A6A21D1F38CA4EE01C6FDC4195327A92979_gshared (U3CDepthFirstTraversalOfTypeU3Ed__86_1_t39CB7AE01B1B7DE8D693608B77B395D20B2D9A71* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDepthFirstTraversalOfTypeU3Ed__86_1_System_Collections_IEnumerator_get_Current_mD6A0B1CE5823906FE26FFABDB40A7543142DB862_gshared (U3CDepthFirstTraversalOfTypeU3Ed__86_1_t39CB7AE01B1B7DE8D693608B77B395D20B2D9A71* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDepthFirstTraversalOfTypeU3Ed__86_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mF28C565FBADE3D30BB0C34FF77FF82E7609A3D08_gshared (U3CDepthFirstTraversalOfTypeU3Ed__86_1_t39CB7AE01B1B7DE8D693608B77B395D20B2D9A71* __this, const RuntimeMethod* method) 
{
	U3CDepthFirstTraversalOfTypeU3Ed__86_1_t39CB7AE01B1B7DE8D693608B77B395D20B2D9A71* V_0 = NULL;
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
		U3CDepthFirstTraversalOfTypeU3Ed__86_1_t39CB7AE01B1B7DE8D693608B77B395D20B2D9A71* L_3 = (U3CDepthFirstTraversalOfTypeU3Ed__86_1_t39CB7AE01B1B7DE8D693608B77B395D20B2D9A71*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		U3CDepthFirstTraversalOfTypeU3Ed__86_1__ctor_m02EEDBBEA6A39CEF905807939111564C877CA989(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_3;
		U3CDepthFirstTraversalOfTypeU3Ed__86_1_t39CB7AE01B1B7DE8D693608B77B395D20B2D9A71* L_4 = V_0;
		VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* L_5 = __this->___U3CU3E4__this;
		NullCheck(L_4);
		L_4->___U3CU3E4__this = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this), (void*)L_5);
	}

IL_0035:
	{
		U3CDepthFirstTraversalOfTypeU3Ed__86_1_t39CB7AE01B1B7DE8D693608B77B395D20B2D9A71* L_6 = V_0;
		return (RuntimeObject*)L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDepthFirstTraversalOfTypeU3Ed__86_1_System_Collections_IEnumerable_GetEnumerator_mC86004CE0FB0081AC250EA3A0981CF1AB96E9373_gshared (U3CDepthFirstTraversalOfTypeU3Ed__86_1_t39CB7AE01B1B7DE8D693608B77B395D20B2D9A71* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CDepthFirstTraversalOfTypeU3Ed__86_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mF28C565FBADE3D30BB0C34FF77FF82E7609A3D08(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDepthFirstTraversalOfTypeU3Ed__86_1__ctor_m4FE861E518D923A92D98975BE4BC324AB1D102A3_gshared (U3CDepthFirstTraversalOfTypeU3Ed__86_1_tF362322B92CA850368B354C1AD0FD4AB371CAFA5* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDepthFirstTraversalOfTypeU3Ed__86_1_System_IDisposable_Dispose_m811564507AF8AD8BAFFEE5596E67B45CED7B6254_gshared (U3CDepthFirstTraversalOfTypeU3Ed__86_1_tF362322B92CA850368B354C1AD0FD4AB371CAFA5* __this, const RuntimeMethod* method) 
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
				((  void (*) (U3CDepthFirstTraversalOfTypeU3Ed__86_1_tF362322B92CA850368B354C1AD0FD4AB371CAFA5*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDepthFirstTraversalOfTypeU3Ed__86_1_MoveNext_m223911242F036371D8DF86145B73C2D56DCDBBDB_gshared (U3CDepthFirstTraversalOfTypeU3Ed__86_1_tF362322B92CA850368B354C1AD0FD4AB371CAFA5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB526EBFC83BD70FAB543DE8DE30AD8D729CC0E4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tA2E0B454CD5402DE9DA3E98624BD4F0A37A46AD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t8E6E468C520CD50AE0B72C572FC5FA4CAEA18A5A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T_t8E6E468C520CD50AE0B72C572FC5FA4CAEA18A5A);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T_t8E6E468C520CD50AE0B72C572FC5FA4CAEA18A5A);
	bool V_0 = false;
	int32_t V_1 = 0;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A* V_4 = NULL;
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_T_t8E6E468C520CD50AE0B72C572FC5FA4CAEA18A5A);
	memset(V_5, 0, SizeOf_T_t8E6E468C520CD50AE0B72C572FC5FA4CAEA18A5A);
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_009d:
			{
				((  void (*) (U3CDepthFirstTraversalOfTypeU3Ed__86_1_tF362322B92CA850368B354C1AD0FD4AB371CAFA5*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
				return;
			}
		});
		try
		{
			{
				int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
				V_1 = L_0;
				VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* L_1 = *(VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_001c_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_0077_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00a4;
			}

IL_001c_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
				VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* L_4 = V_2;
				NullCheck(L_4);
				RuntimeObject* L_5;
				L_5 = VisualTreeAsset_DepthFirstTraversal_m940C9EA200F4D9EC650E509E323902855EF4323C(L_4, NULL);
				V_3 = L_5;
				RuntimeObject* L_6 = V_3;
				NullCheck(L_6);
				RuntimeObject* L_7;
				L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB526EBFC83BD70FAB543DE8DE30AD8D729CC0E4D_il2cpp_TypeInfo_var, L_6);
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_7);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
				goto IL_007f_1;
			}

IL_0040_1:
			{
				RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
				NullCheck(L_8);
				UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A* L_9;
				L_9 = InterfaceFuncInvoker0< UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A* >::Invoke(0, IEnumerator_1_tA2E0B454CD5402DE9DA3E98624BD4F0A37A46AD6_il2cpp_TypeInfo_var, L_8);
				V_4 = L_9;
				UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A* L_10 = V_4;
				if (!((RuntimeObject*)IsInst((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 2))))
				{
					goto IL_007f_1;
				}
			}
			{
				UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A* L_11 = V_4;
				void* L_13 = UnBox_Any(((RuntimeObject*)IsInst((RuntimeObject*)L_11, il2cpp_rgctx_data(method->klass->rgctx_data, 2))), il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_12);
				il2cpp_codegen_memcpy(V_5, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_13)), SizeOf_T_t8E6E468C520CD50AE0B72C572FC5FA4CAEA18A5A);
				il2cpp_codegen_memcpy(L_14, V_5, SizeOf_T_t8E6E468C520CD50AE0B72C572FC5FA4CAEA18A5A);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_14, SizeOf_T_t8E6E468C520CD50AE0B72C572FC5FA4CAEA18A5A);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
				V_0 = (bool)1;
				goto IL_00a4;
			}

IL_0077_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
			}

IL_007f_1:
			{
				RuntimeObject* L_15 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
				NullCheck((RuntimeObject*)L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0040_1;
				}
			}
			{
				((  void (*) (U3CDepthFirstTraversalOfTypeU3Ed__86_1_tF362322B92CA850368B354C1AD0FD4AB371CAFA5*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), (RuntimeObject*)NULL);
				V_0 = (bool)0;
				goto IL_00a4;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a4:
	{
		bool L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDepthFirstTraversalOfTypeU3Ed__86_1_U3CU3Em__Finally1_mA188F1C035512A4F01CA432C2DFF1B021674D228_gshared (U3CDepthFirstTraversalOfTypeU3Ed__86_1_tF362322B92CA850368B354C1AD0FD4AB371CAFA5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDepthFirstTraversalOfTypeU3Ed__86_1_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m17E4B09E2AE82A92558722854657FBFBFDF44AD7_gshared (U3CDepthFirstTraversalOfTypeU3Ed__86_1_tF362322B92CA850368B354C1AD0FD4AB371CAFA5* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8E6E468C520CD50AE0B72C572FC5FA4CAEA18A5A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t8E6E468C520CD50AE0B72C572FC5FA4CAEA18A5A);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T_t8E6E468C520CD50AE0B72C572FC5FA4CAEA18A5A);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t8E6E468C520CD50AE0B72C572FC5FA4CAEA18A5A);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDepthFirstTraversalOfTypeU3Ed__86_1_System_Collections_IEnumerator_Reset_m9DD83D9F8E13A608CE093CD938784524E345CC57_gshared (U3CDepthFirstTraversalOfTypeU3Ed__86_1_tF362322B92CA850368B354C1AD0FD4AB371CAFA5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDepthFirstTraversalOfTypeU3Ed__86_1_System_Collections_IEnumerator_get_Current_mAB6E4565B91F59D1418F58225D0BAD12A2D6AA50_gshared (U3CDepthFirstTraversalOfTypeU3Ed__86_1_tF362322B92CA850368B354C1AD0FD4AB371CAFA5* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8E6E468C520CD50AE0B72C572FC5FA4CAEA18A5A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t8E6E468C520CD50AE0B72C572FC5FA4CAEA18A5A);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T_t8E6E468C520CD50AE0B72C572FC5FA4CAEA18A5A);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDepthFirstTraversalOfTypeU3Ed__86_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m0EA5721F413A0B9C25CA28ED131BB34C575C0576_gshared (U3CDepthFirstTraversalOfTypeU3Ed__86_1_tF362322B92CA850368B354C1AD0FD4AB371CAFA5* __this, const RuntimeMethod* method) 
{
	U3CDepthFirstTraversalOfTypeU3Ed__86_1_tF362322B92CA850368B354C1AD0FD4AB371CAFA5* V_0 = NULL;
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
		U3CDepthFirstTraversalOfTypeU3Ed__86_1_tF362322B92CA850368B354C1AD0FD4AB371CAFA5* L_3 = (U3CDepthFirstTraversalOfTypeU3Ed__86_1_tF362322B92CA850368B354C1AD0FD4AB371CAFA5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (U3CDepthFirstTraversalOfTypeU3Ed__86_1_tF362322B92CA850368B354C1AD0FD4AB371CAFA5*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_3;
		U3CDepthFirstTraversalOfTypeU3Ed__86_1_tF362322B92CA850368B354C1AD0FD4AB371CAFA5* L_4 = V_0;
		VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* L_5 = *(VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		NullCheck(L_4);
		il2cpp_codegen_write_instance_field_data<VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB*>(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_5);
	}

IL_0035:
	{
		U3CDepthFirstTraversalOfTypeU3Ed__86_1_tF362322B92CA850368B354C1AD0FD4AB371CAFA5* L_6 = V_0;
		return (RuntimeObject*)L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDepthFirstTraversalOfTypeU3Ed__86_1_System_Collections_IEnumerable_GetEnumerator_m848CCF2AF8D5787B0742FCC6BFBD08DE285C2D79_gshared (U3CDepthFirstTraversalOfTypeU3Ed__86_1_tF362322B92CA850368B354C1AD0FD4AB371CAFA5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (U3CDepthFirstTraversalOfTypeU3Ed__86_1_tF362322B92CA850368B354C1AD0FD4AB371CAFA5*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__107__ctor_m63D55AF1005652F99B1AFB65402AC247223B7261_gshared (U3CDisposeAsyncU3Ed__107_tD04CC1D80F31D2D929A97B0686DF8DA8FC71CB10* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__107_MoveNext_m48F921F81C73B4D414D5D5236054688B85D2FF09_gshared (U3CDisposeAsyncU3Ed__107_tD04CC1D80F31D2D929A97B0686DF8DA8FC71CB10* __this, const RuntimeMethod* method) 
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
	U3CDisposeAsyncU3Ed__107_tD04CC1D80F31D2D929A97B0686DF8DA8FC71CB10* V_4 = NULL;
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
	Exception_t* V_27 = NULL;
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
					goto IL_003f_1;
				}
				case 1:
				{
					goto IL_0044_1;
				}
				case 2:
				{
					goto IL_0049_1;
				}
				case 3:
				{
					goto IL_004e_1;
				}
				case 4:
				{
					goto IL_0053_1;
				}
				case 5:
				{
					goto IL_0058_1;
				}
				case 6:
				{
					goto IL_005d_1;
				}
				case 7:
				{
					goto IL_0062_1;
				}
				case 8:
				{
					goto IL_0067_1;
				}
				case 9:
				{
					goto IL_006c_1;
				}
				case 10:
				{
					goto IL_0071_1;
				}
				case 11:
				{
					goto IL_0076_1;
				}
			}
		}
		{
			goto IL_007b_1;
		}

IL_003f_1:
		{
			goto IL_00d9_1;
		}

IL_0044_1:
		{
			goto IL_015f_1;
		}

IL_0049_1:
		{
			goto IL_01e6_1;
		}

IL_004e_1:
		{
			goto IL_026d_1;
		}

IL_0053_1:
		{
			goto IL_02f4_1;
		}

IL_0058_1:
		{
			goto IL_037b_1;
		}

IL_005d_1:
		{
			goto IL_0402_1;
		}

IL_0062_1:
		{
			goto IL_0489_1;
		}

IL_0067_1:
		{
			goto IL_0510_1;
		}

IL_006c_1:
		{
			goto IL_0598_1;
		}

IL_0071_1:
		{
			goto IL_0620_1;
		}

IL_0076_1:
		{
			goto IL_06a5_1;
		}

IL_007b_1:
		{
			_CombineLatest_t6CC2B27A82E42CA6E1A599EA5F4E0079CBA6AEA7* L_2 = __this->___U3CU3E4__this;
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),27));
			V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_00fe_1;
			}
		}
		{
			_CombineLatest_t6CC2B27A82E42CA6E1A599EA5F4E0079CBA6AEA7* L_5 = __this->___U3CU3E4__this;
			RuntimeObject* L_6 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),27));
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
				goto IL_00f5_1;
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
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__107_tD04CC1D80F31D2D929A97B0686DF8DA8FC71CB10**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_12, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_06fb;
		}

IL_00d9_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13 = __this->___U3CU3Eu__1;
			V_2 = L_13;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_14 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_14, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state = L_15;
		}

IL_00f5_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_00fe_1:
		{
			_CombineLatest_t6CC2B27A82E42CA6E1A599EA5F4E0079CBA6AEA7* L_16 = __this->___U3CU3E4__this;
			RuntimeObject* L_17 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),32));
			V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_18 = V_5;
			if (!L_18)
			{
				goto IL_0185_1;
			}
		}
		{
			_CombineLatest_t6CC2B27A82E42CA6E1A599EA5F4E0079CBA6AEA7* L_19 = __this->___U3CU3E4__this;
			RuntimeObject* L_20 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),32));
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
				goto IL_017c_1;
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
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__107_tD04CC1D80F31D2D929A97B0686DF8DA8FC71CB10**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_26, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_06fb;
		}

IL_015f_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_27 = __this->___U3CU3Eu__1;
			V_6 = L_27;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_28 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_28, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_29 = (-1);
			V_0 = L_29;
			__this->___U3CU3E1__state = L_29;
		}

IL_017c_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_6), NULL);
		}

IL_0185_1:
		{
			_CombineLatest_t6CC2B27A82E42CA6E1A599EA5F4E0079CBA6AEA7* L_30 = __this->___U3CU3E4__this;
			RuntimeObject* L_31 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),37));
			V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_31) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_32 = V_7;
			if (!L_32)
			{
				goto IL_020c_1;
			}
		}
		{
			_CombineLatest_t6CC2B27A82E42CA6E1A599EA5F4E0079CBA6AEA7* L_33 = __this->___U3CU3E4__this;
			RuntimeObject* L_34 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_33, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),37));
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
				goto IL_0203_1;
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
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__107_tD04CC1D80F31D2D929A97B0686DF8DA8FC71CB10**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_40, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_06fb;
		}

IL_01e6_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_41 = __this->___U3CU3Eu__1;
			V_8 = L_41;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_42 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_42, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_43 = (-1);
			V_0 = L_43;
			__this->___U3CU3E1__state = L_43;
		}

IL_0203_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_8), NULL);
		}

IL_020c_1:
		{
			_CombineLatest_t6CC2B27A82E42CA6E1A599EA5F4E0079CBA6AEA7* L_44 = __this->___U3CU3E4__this;
			RuntimeObject* L_45 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),42));
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_45) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_46 = V_9;
			if (!L_46)
			{
				goto IL_0293_1;
			}
		}
		{
			_CombineLatest_t6CC2B27A82E42CA6E1A599EA5F4E0079CBA6AEA7* L_47 = __this->___U3CU3E4__this;
			RuntimeObject* L_48 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_47, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),42));
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
				goto IL_028a_1;
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
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__107_tD04CC1D80F31D2D929A97B0686DF8DA8FC71CB10**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_54, (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_06fb;
		}

IL_026d_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_55 = __this->___U3CU3Eu__1;
			V_10 = L_55;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_56 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_56, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_57 = (-1);
			V_0 = L_57;
			__this->___U3CU3E1__state = L_57;
		}

IL_028a_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_0293_1:
		{
			_CombineLatest_t6CC2B27A82E42CA6E1A599EA5F4E0079CBA6AEA7* L_58 = __this->___U3CU3E4__this;
			RuntimeObject* L_59 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_58, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),47));
			V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_60 = V_11;
			if (!L_60)
			{
				goto IL_031a_1;
			}
		}
		{
			_CombineLatest_t6CC2B27A82E42CA6E1A599EA5F4E0079CBA6AEA7* L_61 = __this->___U3CU3E4__this;
			RuntimeObject* L_62 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_61, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),47));
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
				goto IL_0311_1;
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
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__107_tD04CC1D80F31D2D929A97B0686DF8DA8FC71CB10**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_68, (&V_12), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_06fb;
		}

IL_02f4_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_69 = __this->___U3CU3Eu__1;
			V_12 = L_69;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_70 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_70, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_71 = (-1);
			V_0 = L_71;
			__this->___U3CU3E1__state = L_71;
		}

IL_0311_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_12), NULL);
		}

IL_031a_1:
		{
			_CombineLatest_t6CC2B27A82E42CA6E1A599EA5F4E0079CBA6AEA7* L_72 = __this->___U3CU3E4__this;
			RuntimeObject* L_73 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_72, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),52));
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_73) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_74 = V_13;
			if (!L_74)
			{
				goto IL_03a1_1;
			}
		}
		{
			_CombineLatest_t6CC2B27A82E42CA6E1A599EA5F4E0079CBA6AEA7* L_75 = __this->___U3CU3E4__this;
			RuntimeObject* L_76 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_75, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),52));
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
				goto IL_0398_1;
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
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__107_tD04CC1D80F31D2D929A97B0686DF8DA8FC71CB10**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_82, (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_06fb;
		}

IL_037b_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_83 = __this->___U3CU3Eu__1;
			V_14 = L_83;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_84 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_84, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_85 = (-1);
			V_0 = L_85;
			__this->___U3CU3E1__state = L_85;
		}

IL_0398_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_03a1_1:
		{
			_CombineLatest_t6CC2B27A82E42CA6E1A599EA5F4E0079CBA6AEA7* L_86 = __this->___U3CU3E4__this;
			RuntimeObject* L_87 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_86, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),57));
			V_15 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_87) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_88 = V_15;
			if (!L_88)
			{
				goto IL_0428_1;
			}
		}
		{
			_CombineLatest_t6CC2B27A82E42CA6E1A599EA5F4E0079CBA6AEA7* L_89 = __this->___U3CU3E4__this;
			RuntimeObject* L_90 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_89, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),57));
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
				goto IL_041f_1;
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
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__107_tD04CC1D80F31D2D929A97B0686DF8DA8FC71CB10**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_96, (&V_16), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_06fb;
		}

IL_0402_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_97 = __this->___U3CU3Eu__1;
			V_16 = L_97;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_98 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_98, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_99 = (-1);
			V_0 = L_99;
			__this->___U3CU3E1__state = L_99;
		}

IL_041f_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_16), NULL);
		}

IL_0428_1:
		{
			_CombineLatest_t6CC2B27A82E42CA6E1A599EA5F4E0079CBA6AEA7* L_100 = __this->___U3CU3E4__this;
			RuntimeObject* L_101 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_100, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),62));
			V_17 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_101) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_102 = V_17;
			if (!L_102)
			{
				goto IL_04af_1;
			}
		}
		{
			_CombineLatest_t6CC2B27A82E42CA6E1A599EA5F4E0079CBA6AEA7* L_103 = __this->___U3CU3E4__this;
			RuntimeObject* L_104 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_103, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),62));
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
				goto IL_04a6_1;
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
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__107_tD04CC1D80F31D2D929A97B0686DF8DA8FC71CB10**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_110, (&V_18), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_06fb;
		}

IL_0489_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_111 = __this->___U3CU3Eu__1;
			V_18 = L_111;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_112 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_112, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_113 = (-1);
			V_0 = L_113;
			__this->___U3CU3E1__state = L_113;
		}

IL_04a6_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_18), NULL);
		}

IL_04af_1:
		{
			_CombineLatest_t6CC2B27A82E42CA6E1A599EA5F4E0079CBA6AEA7* L_114 = __this->___U3CU3E4__this;
			RuntimeObject* L_115 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_114, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),67));
			V_19 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_115) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_116 = V_19;
			if (!L_116)
			{
				goto IL_0536_1;
			}
		}
		{
			_CombineLatest_t6CC2B27A82E42CA6E1A599EA5F4E0079CBA6AEA7* L_117 = __this->___U3CU3E4__this;
			RuntimeObject* L_118 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_117, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),67));
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
				goto IL_052d_1;
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
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__107_tD04CC1D80F31D2D929A97B0686DF8DA8FC71CB10**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_124, (&V_20), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_06fb;
		}

IL_0510_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_125 = __this->___U3CU3Eu__1;
			V_20 = L_125;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_126 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_126, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_127 = (-1);
			V_0 = L_127;
			__this->___U3CU3E1__state = L_127;
		}

IL_052d_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_20), NULL);
		}

IL_0536_1:
		{
			_CombineLatest_t6CC2B27A82E42CA6E1A599EA5F4E0079CBA6AEA7* L_128 = __this->___U3CU3E4__this;
			RuntimeObject* L_129 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_128, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),72));
			V_21 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_129) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_130 = V_21;
			if (!L_130)
			{
				goto IL_05be_1;
			}
		}
		{
			_CombineLatest_t6CC2B27A82E42CA6E1A599EA5F4E0079CBA6AEA7* L_131 = __this->___U3CU3E4__this;
			RuntimeObject* L_132 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_131, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),72));
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
				goto IL_05b5_1;
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
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__107_tD04CC1D80F31D2D929A97B0686DF8DA8FC71CB10**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_138, (&V_22), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_06fb;
		}

IL_0598_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_139 = __this->___U3CU3Eu__1;
			V_22 = L_139;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_140 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_140, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_141 = (-1);
			V_0 = L_141;
			__this->___U3CU3E1__state = L_141;
		}

IL_05b5_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_22), NULL);
		}

IL_05be_1:
		{
			_CombineLatest_t6CC2B27A82E42CA6E1A599EA5F4E0079CBA6AEA7* L_142 = __this->___U3CU3E4__this;
			RuntimeObject* L_143 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_142, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),77));
			V_23 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_143) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_144 = V_23;
			if (!L_144)
			{
				goto IL_0646_1;
			}
		}
		{
			_CombineLatest_t6CC2B27A82E42CA6E1A599EA5F4E0079CBA6AEA7* L_145 = __this->___U3CU3E4__this;
			RuntimeObject* L_146 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_145, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),77));
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
				goto IL_063d_1;
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
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__107_tD04CC1D80F31D2D929A97B0686DF8DA8FC71CB10**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_152, (&V_24), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_06fb;
		}

IL_0620_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_153 = __this->___U3CU3Eu__1;
			V_24 = L_153;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_154 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_154, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_155 = (-1);
			V_0 = L_155;
			__this->___U3CU3E1__state = L_155;
		}

IL_063d_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_24), NULL);
		}

IL_0646_1:
		{
			_CombineLatest_t6CC2B27A82E42CA6E1A599EA5F4E0079CBA6AEA7* L_156 = __this->___U3CU3E4__this;
			RuntimeObject* L_157 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_156, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),82));
			V_25 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_157) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_158 = V_25;
			if (!L_158)
			{
				goto IL_06cb_1;
			}
		}
		{
			_CombineLatest_t6CC2B27A82E42CA6E1A599EA5F4E0079CBA6AEA7* L_159 = __this->___U3CU3E4__this;
			RuntimeObject* L_160 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_159, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),82));
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
				goto IL_06c2_1;
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
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__107_tD04CC1D80F31D2D929A97B0686DF8DA8FC71CB10**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_166, (&V_26), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_06fb;
		}

IL_06a5_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_167 = __this->___U3CU3Eu__1;
			V_26 = L_167;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_168 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_168, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_169 = (-1);
			V_0 = L_169;
			__this->___U3CU3E1__state = L_169;
		}

IL_06c2_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_26), NULL);
		}

IL_06cb_1:
		{
			goto IL_06e7;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_06cd;
		}
		throw e;
	}

CATCH_06cd:
	{
		Exception_t* L_170 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_27 = L_170;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_171 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_172 = V_27;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_171, L_172, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_06fb;
	}

IL_06e7:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_173 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_173, NULL);
	}

IL_06fb:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__107_SetStateMachine_m69A180E0D4FD83EBFC2DB46A1B8D4F5693053910_gshared (U3CDisposeAsyncU3Ed__107_tD04CC1D80F31D2D929A97B0686DF8DA8FC71CB10* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 UniTask_1_GetAwaiter_m8F3FFCADC2A1177E31B359D162E7784C30F8DC5E_gshared_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method) 
{
	Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_mA4F4E868662E0BD80C0BB0E125DEC5A22CEE886E_inline((&L_0), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m64CB466F8C142312263397E37C6298E842139126_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_0 = (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)(&__this->___task);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Awaiter_GetResult_mD47D2D1B93A9A867CBEDAC2D7033F31DBCE10C3B_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_0 = (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)(&__this->___task);
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
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_4 = (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)(&__this->___task);
		RuntimeObject* L_5 = L_4->___result;
		V_2 = L_5;
		goto IL_0039;
	}

IL_0024:
	{
		RuntimeObject* L_6 = V_0;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_7 = (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)(&__this->___task);
		int16_t L_8 = L_7->___token;
		NullCheck(L_6);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker1< RuntimeObject*, int16_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_6, L_8);
		V_2 = L_9;
		goto IL_0039;
	}

IL_0039:
	{
		RuntimeObject* L_10 = V_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mA4F4E868662E0BD80C0BB0E125DEC5A22CEE886E_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* ___0_task, const RuntimeMethod* method) 
{
	{
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_0 = ___0_task;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 L_1 = (*(UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)L_0);
		__this->___task = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task))->___source), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task))->___result), (void*)NULL);
		#endif
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_gshared_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method) 
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
