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
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
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
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
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
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};

struct U3CFirstAwaitAsyncU3Ed__2_1_t0335CFF4BC1145B5DD127FA1D13432DEA6A0CE03;
struct U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_tF176CAA5FE54CFE4E1BABD507A0631D3E6AC89DC;
struct U3CForEachAsyncU3Ed__0_1_t9582606A1F1A2D59AA951BBAAAC83A1CC5679B2E;
struct U3CForEachAsyncU3Ed__1_1_t10C921BC3C792263B1FFEF9A54C79CD1EE8F4FD4;
struct U3CForEachAwaitAsyncU3Ed__2_1_t504B931A70EC737437DAD27DD1DEA64C25146E8B;
struct U3CForEachAwaitAsyncU3Ed__3_1_t8871DBC78D8823939DE765EB161709598260AC6A;
struct U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_t314B32851737E85A376C96788B004A73C45C8ED9;
struct U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_tF271ADEE88B008144D6D5CA57732E98C4D95A0E0;
struct U3CForgetCoreWithCatchU3Ed__21_1_tC1CCDBDBC539D1E312103E6683A61535E5D194E5;
struct U3CGetEnumeratorU3Ed__1_t428C31FE719799CD61A887870EE46ED9488AAFAC;
struct U3CGetEnumeratorU3Ed__1_t35287071076620851350DEE5A7358F21C466DA90;
struct U3CGetEnumeratorU3Ed__1_t20E5AEAF9BDC6069AD68C33A55C6648EFD31D186;
struct U3CGetEnumeratorU3Ed__1_t3DA927506BB3A75FB0C275BE0E1E951C2FA72436;
struct U3CGetEnumeratorU3Ed__1_t4481370B78AEBF7DBD954E502147D470C0F85ED0;
struct U3CGetEnumeratorU3Ed__1_t86CE4D514C7EA04C708491BC8E9D7FCB75DB8A9F;
struct U3CGetEnumeratorU3Ed__1_t6D4BC5B68087352E56482B91E7BADA70BEB38CD2;
struct U3CGetEnumeratorU3Ed__1_t0C0E1C4A0A69A2FDEE7A295C343DBFCB38E1E136;
struct U3CGetEnumeratorU3Ed__10_tC2CCC09794715D3A40FB005ED4800D913E46029A;
struct U3CGetEnumeratorU3Ed__10_t9346CA1CE8CF84ACA75D409CAE6DE9866AEE1B79;
struct U3CGetEnumeratorU3Ed__12_t5786B9631F2D28B78F4B69FD4A59FCE5AF8D9CC0;
struct U3CGetEnumeratorU3Ed__35_tFBB72033DD97EBEE1D1AB495DD3A0C1827242215;
struct U3CGetEnumeratorU3Ed__35_t5851A752199A6195E7EB427BC50C5FFCAB8D4E6E;
struct U3CGetEnumeratorU3Ed__46_t6EA4F0A44BEB531AC925F17E0723699D66738AFA;
struct U3CGetEnumeratorU3Ed__46_t20FC2A1ECE38773FDEF6C8B8F35293D3CBC5DE4A;
struct U3CGetEnumeratorU3Ed__46_t5A2636A2C410BE54A8AC8F1BE5E7E59294B26EE5;
struct U3CGetEnumeratorU3Ed__46_t18856EC86B980BAB08645469ED3896C6D5FC485A;
struct U3CGetEnumeratorU3Ed__46_t9A2B20F8159657645800A9F875378F7013A310EE;
struct U3CGetEnumeratorU3Ed__7_t810581FDA129E29DFDF7A45244DCF67D0B085FC6;
struct U3CGetEnumeratorU3Ed__7_tC36163D2BC0734D81ABC8A351F1FB7F21DBC2740;
struct U3CGetEnumeratorU3Ed__7_t02BCED185E0D88610DFFAA325C2AF1FC843DC083;
struct U3CGetEnumeratorU3Ed__7_t304805AB40FDB7AACAD6794711057294CDBB55EF;
struct U3CGetPropertiesEnumerableU3Ed__4_t8F5798B4CB49F6D3131C452F9AC30F58B94A0938;
struct U3CGetPropertiesEnumerableU3Ed__4_t5E4DFDB918CED8B1BD7311A434FA7762BBD6C390;
struct U3CGroupJoinIteratorU3Ed__41_4_t28C25E1DF3BA11F09812739D58AE5FC99151D7D6;
struct U3CIntersectIteratorU3Ed__74_1_tA436225973AFA7427C3BE15D97715957E1DA08B2;
struct U3CJoinIteratorU3Ed__38_4_t2025FF64669D4CCF0346C9EB83E984FD09EB532C;
struct U3CLastAsyncU3Ed__0_1_t38AFC35C81A53570FC7FA05BED4F1D9156275B70;
struct U3CLastAsyncU3Ed__1_1_t0FD9210854E67C87AE6374B78E7F411EE5178410;
struct U3CLastAwaitAsyncU3Ed__2_1_tC239805AACCC4C0F81C94B1270D7382B72745616;
struct U3CLastAwaitWithCancellationAsyncU3Ed__3_1_tE16CA9A4999761FA673AE43AC096DABBF15267E4;
struct U3CLongCountAsyncU3Ed__0_1_t669866756D43CCD2A56D30F8B27884E958EEE7D8;
struct U3CLongCountAsyncU3Ed__1_1_t9BCC201AA36FD39F4C9C0D5E3365B5C80DE5A3CF;
struct U3CLongCountAwaitAsyncU3Ed__2_1_t943648D574C784EBF11D71FCD9F05FC1B9F46CCB;
struct U3CLongCountAwaitWithCancellationAsyncU3Ed__3_1_tEC740CC65DA303052502C70CAD217A9BCF390D5D;
struct U3CMaxAsyncU3Ed__0_1_t5294E09AD867317EEACB8FB98CDF7D2FC6FC3CEB;
struct U3CMaxAsyncU3Ed__13_1_t127C47DE180A7E5E0833A81E4EF7FA82FD3B3405;
struct U3CMaxAsyncU3Ed__17_1_tDA11432E5B54E699AF5502AE7364400C88B087C1;
struct U3CMaxAsyncU3Ed__1_2_tEBF7F94D5200D91A6F68BD1F23DC56B03AD4F26F;
struct U3CMaxAsyncU3Ed__21_1_t0B5A2CCE38B228A403FC3505BB26CEA1F828A955;
struct U3CMaxAsyncU3Ed__25_1_t9EA54FEF86B5DF1390483F9E8FD1BE063590896D;
struct U3CMaxAsyncU3Ed__29_1_t9DA9DB413A115D29104F7EC27E0B4462B9894445;
struct U3CMaxAsyncU3Ed__33_1_tCDB8D719CC9635A8F99266A9531127882F7BD0E8;
struct U3CMaxAsyncU3Ed__37_1_t75AE786D8A2D63FBD14F0C1E526BDCBC87B9A51A;
struct U3CMaxAsyncU3Ed__41_1_t4C6F0F24A2D6C828C7E647306BBD8223AD55ED47;
struct Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
struct Action_2_t983A40F124DCF06E5CEB4DE585CE7204D7F7E25C;
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB;
struct ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF;
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812;
struct DataPointComparer_1_tF0903CA0DFACB1F9DE4EEBCB251A17389C66A3AC;
struct DataPointComparer_1_t6D6A7F31B80F30764311D46EB24354FE0BB642AF;
struct DataPointComparer_1_t7A8235814C27F7B4BC0C16929B07730C938100F8;
struct DataPointComparer_1_t9458D83FA880494AB6FE10A9293D600BD495E453;
struct DataPointComparer_1_t94F55841BF77FE070EA60DEDAAAB5DCD66F52407;
struct DelegateProperty_2_tEF04A831D1787C45A1B56C36935D689DB49E2266;
struct EnumerableSorter_1_tCEB88BCDB8FD518D48EECB11790C41C8C37FDD65;
struct EnumerableSorter_1_t5897E023ECB6DBE16092BDD0CD9397E8600CD0F5;
struct EnumerableSorter_1_t772456040AB1CD5F32AE1ACCF8BCBA3561A0CE67;
struct EnumerableSorter_1_t33B4B1FE8E6E19EEFB45A8EC216B39E6DDF2FDDD;
struct EnumerableSorter_1_tC7A6BA5636DB2028E64A6A8150BE0C33E308DBF0;
struct EnumerableSorter_1_t4439350BEBB5B5B9E8D43BBDBB271F1DC472270B;
struct EnumerableSorter_1_t9DF0BF2FF3A689EB41C9CE2B42D3A91F5776B3AD;
struct EnumerableSorter_1_t748424BBEB090E58B6D364ADABD271AC18B4C251;
struct Func_2_t02AAAA5ED63E37D8013889ECE551ED5172A9F7A4;
struct Func_2_tB9099E603733365FA636ABD4F1512E954C883863;
struct Func_2_t0DE0378A8A90F3B8204450750A771096D0F75A98;
struct Func_2_tFC0477C87E7518136DEE345DCF44B6ACA22E24F0;
struct Func_2_tCDF39BBC1094782C50BE631779E8FD895BFEAF32;
struct Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C;
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
struct Func_2_t5ABD904FFCFC84BA711C9261A36E9482990A6CA7;
struct Func_2_tF36C7D1152BF6807C03112D4A053E5038A13A6EB;
struct Func_2_tFAB3D8EFCE4F55CAB3F80EABAB10F8226D7FEBF6;
struct Func_2_tB9800595B3251D2492E40667A6C05061784D48FB;
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
struct Func_3_tA7E06E01A9E24ADCFD5FDF90F63DB44745325DB6;
struct Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814;
struct Func_3_tEBFC185F508D6150079151B2395F5DE7B54CC752;
struct Func_3_t132FDF1783142B71AC1D1F8BB2FF80D9FAC32BFC;
struct Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4;
struct Func_4_t06A967E03EDC626BCFB4875FDF8A19728ADC72BC;
struct Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2;
struct IEnumerable_1_tF87C02535F5ADDDE139D4D2EE4BD06652C1791A4;
struct IEnumerable_1_tBA4259158757D7E9A55293191376A3C4C288D5DC;
struct IEnumerable_1_tBC34148702FF6BECFD37516307B03670E3ED630E;
struct IEnumerable_1_tEC612AE46C64B901EC8843E9C1B95C7484E2D334;
struct IEnumerable_1_tB7C9DCA4590B9A348E3CCCAC2B2452EADE240188;
struct IEnumerable_1_tFBE064108F6FBA7C779E1916D7E9CEFD842D8C17;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_t049F50EE72A820353CFA1AE7371663E25CC71019;
struct IEnumerator_1_t45F3F7FD63BD81FEABDE4F646B59715C819D84FC;
struct IEnumerator_1_t44A5BD29425024C69D2E7244DFEEF3410CB1F4CC;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IGrouping_2_t6485033266F07DCCDEBAFAEBC5894E6A5F04989C;
struct IProperty_1_t7E923A2ABFB0D5D2AA4DC41FAD102C108DA0B904;
struct IProperty_1_t47DF8E7CFAFA47596FCFDA6775C02B5B3C05AAE5;
struct IStateMachineRunnerPromise_1_t8D57C4F4548F3BCD478D68C0B1214D4BF62AA68D;
struct IStateMachineRunnerPromise_1_t51E154A16BAD95B7D398B5F0702C3E66265C53DA;
struct IStateMachineRunnerPromise_1_tBE2C23E7E2B62C56C552514DE41331D016E88894;
struct IStateMachineRunnerPromise_1_t2CCBC9102ABF89E60F08B479B9A9F8E564FDCE5B;
struct IStateMachineRunnerPromise_1_t1AB0B5E2CA50004E9184B2F5382B9C646CD88F94;
struct IStateMachineRunnerPromise_1_t9061D15A609C242C57AE7E2186438B3A765049A0;
struct IStateMachineRunnerPromise_1_t60C36DF27100A1AAC871929239A758A920192D30;
struct IStateMachineRunnerPromise_1_tFE8A013B1056925F687501E7EA6E1D49D1DE4BE2;
struct IStateMachineRunnerPromise_1_t13A438173E94750804DBD5134EB865935FADCFD8;
struct IStateMachineRunnerPromise_1_t33359314377828B79D5AB55278350F65F2237DD9;
struct IUniTaskAsyncEnumerable_1_tB465D2725680B21CF3074178AECADD1D24C24A74;
struct IUniTaskAsyncEnumerator_1_t256C7409E6B13FF3224A57D2DD1A4D52A2C40092;
struct IUniTaskSource_1_tB6B218F9BB467453A6CBAEE053820D3B3E8F891C;
struct IUniTaskSource_1_tA27C284FF17E3AAB5B5D07A7E4DE207B56F764AB;
struct List_1_t541EE8DDCC1D53F6905C8DBD81D9127781986CA3;
struct List_1_tD9872A844B68161ADA39834AF99EB065DB91B8E3;
struct List_1_t9D22296249BE15200FF3C85F0ECC939FB09F55EA;
struct List_1_tD037C2F2F7A897D6A2C8A84A0B079A74AD9933D2;
struct List_1_t20C832540BA4E58AD237892E38A73E53966C5115;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332;
struct Node_t821211F0535E80E80FDC8FFB600F681E98286BF0;
struct Node_tC5111E77A2002D0AD173457666915D4D0BD59865;
struct OrderedEnumerable_1_t2F9F5060B969113C249D3BC84B7DA3D9C9DCD84B;
struct OrderedEnumerable_1_t8EEABC87399C51697FF13CC459FC26CA5A5857DA;
struct OrderedEnumerable_1_t49A81D3EAEB40201506836E577654DE2F8EC8941;
struct OrderedEnumerable_1_tFFE2D41E419F999B45E7C9636190F547FE16EA00;
struct OrderedEnumerable_1_t2CA7B89590CC51BDE981B85FB02BE2FC4175E2D6;
struct OrderedEnumerable_1_tA6269C578EE7D3423C79F32258D574795AEF1151;
struct OrderedEnumerable_1_t635FACC705EB8D479616971CD818376DC3A5AF51;
struct OrderedEnumerable_1_t9FC254A996960AAA55B70FA7417B36D16C123B28;
struct PropertyGetter_2_t2ACCDAC10DC9098C8661F0FCDBB09E9FD15E077A;
struct PropertySetter_2_tCFA404067EBB9024FD1CC49E6D183B911A47BB6D;
struct SetElementProperty_tD32144938E8C2B3852669AF6CB12C17FAB5056C1;
struct SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF;
struct Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D;
struct SplineData_1_tF29E811708B706899A292A38A9FFA70C7F10141C;
struct SplineData_1_t8108212EF9C2518D2EC261D68CDCE4DC31B6D1D7;
struct SplineData_1_t76C1101E75006280CD34A238E2294898514C06A6;
struct SplineData_1_t5A8AEB81C09C644A42275D7C08D086BF9B2F365E;
struct SplineData_1_t5E765EAB32A437A18736ABFCD420E397DC3E49DD;
struct SplinePath_1_t72CDDB4842573EC5B6F9AC5A495FF276FDB118A9;
struct SplinePath_1_t4A42A498CBF6AD8AD1108EACCC704F3EB561E767;
struct SplinePath_1_t513E9875170FA8324971223A4F061E8B99150990;
struct Tables_t14D3B197594232ACFA76B87EB205EB3661F6EAA6;
struct Tables_tD895B223685217918C345ED5D52074F7E29E5F95;
struct DataPoint_1U5BU5D_t9F63F6DDA285B3004F96EE9B38660732DA71AE0D;
struct DataPoint_1U5BU5D_t02DC8AE3C25283F27774302229E4F2A9C5000931;
struct DataPoint_1U5BU5D_tFAF0E13D7166CC6FF2CED34D8A0C81E81FF9E27E;
struct DataPoint_1U5BU5D_t3BA54E7D022CDB8ED107AE73ADFA89DECE6678C7;
struct DataPoint_1U5BU5D_tDF3873B603F57BC0406D76431305ADC806980A21;
struct GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B;
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct NodeU5BU5D_t2D9C2B502AE419E91BEF20D4861A838720732B76;
struct NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A;
struct SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427;
struct SplineSlice_1U5BU5D_tF9B09333D66FA55C57D3956FC46305B333F23AD2;
struct ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct MarkToBaseAdjustmentRecordU5BU5D_tECA7CEA6635E17961BB362A1BD69322800A15966;
struct MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911;
struct MarkToMarkAdjustmentRecordU5BU5D_tD0484B2268EBA1947BBA50456596875426ED9CDB;
struct MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
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
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148;
struct IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B;
struct IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MethodInfo_t;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t886E4934EB2332A59B1997F770130866B7054489_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t44A5BD29425024C69D2E7244DFEEF3410CB1F4CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralF26C76B1728491A2D7039EBFC35CFDE0D352C43A;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m668B0B683F2B4B7005D076DE9400F32B1702673B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_mAEE718F60708F1A917C5379F94447C8090707CE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_mE8C5BA18D2449D6BD546630CE70DE315F5F91FCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m5E0E26E389BF8D15A8935BC741FAADEFF1617158_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m79D800118F9BCD740C939B134E630A8AB93AA606_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var;
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
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct NodeU5BU5D_t2D9C2B502AE419E91BEF20D4861A838720732B76;
struct NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A;
struct SplineSlice_1U5BU5D_tF9B09333D66FA55C57D3956FC46305B333F23AD2;
struct ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962;
struct GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct MarkToBaseAdjustmentRecordU5BU5D_tECA7CEA6635E17961BB362A1BD69322800A15966;
struct MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911;
struct MarkToMarkAdjustmentRecordU5BU5D_tD0484B2268EBA1947BBA50456596875426ED9CDB;
struct MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CGetEnumeratorU3Ed__12_t5786B9631F2D28B78F4B69FD4A59FCE5AF8D9CC0  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* ___U3CU3E4__this;
	Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* ___U3CgU3E5__2;
};
struct U3CGetEnumeratorU3Ed__7_t304805AB40FDB7AACAD6794711057294CDBB55EF : public RuntimeObject {};
struct U3CGetPropertiesEnumerableU3Ed__4_t8F5798B4CB49F6D3131C452F9AC30F58B94A0938  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	int32_t ___U3CU3El__initialThreadId;
};
struct U3CGetPropertiesEnumerableU3Ed__4_t5E4DFDB918CED8B1BD7311A434FA7762BBD6C390 : public RuntimeObject {};
struct U3CGroupJoinIteratorU3Ed__41_4_t28C25E1DF3BA11F09812739D58AE5FC99151D7D6 : public RuntimeObject {};
struct U3CIntersectIteratorU3Ed__74_1_tA436225973AFA7427C3BE15D97715957E1DA08B2 : public RuntimeObject {};
struct U3CJoinIteratorU3Ed__38_4_t2025FF64669D4CCF0346C9EB83E984FD09EB532C : public RuntimeObject {};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB  : public RuntimeObject
{
};
struct ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF  : public RuntimeObject
{
	Tables_t14D3B197594232ACFA76B87EB205EB3661F6EAA6* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812  : public RuntimeObject
{
	Tables_tD895B223685217918C345ED5D52074F7E29E5F95* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct EnumerableSorter_1_tCEB88BCDB8FD518D48EECB11790C41C8C37FDD65  : public RuntimeObject
{
};
struct EnumerableSorter_1_t5897E023ECB6DBE16092BDD0CD9397E8600CD0F5  : public RuntimeObject
{
};
struct EnumerableSorter_1_t772456040AB1CD5F32AE1ACCF8BCBA3561A0CE67  : public RuntimeObject
{
};
struct EnumerableSorter_1_t33B4B1FE8E6E19EEFB45A8EC216B39E6DDF2FDDD  : public RuntimeObject
{
};
struct EnumerableSorter_1_tC7A6BA5636DB2028E64A6A8150BE0C33E308DBF0  : public RuntimeObject
{
};
struct EnumerableSorter_1_t4439350BEBB5B5B9E8D43BBDBB271F1DC472270B  : public RuntimeObject
{
};
struct EnumerableSorter_1_t9DF0BF2FF3A689EB41C9CE2B42D3A91F5776B3AD  : public RuntimeObject
{
};
struct EnumerableSorter_1_t748424BBEB090E58B6D364ADABD271AC18B4C251  : public RuntimeObject
{
};
struct Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2 : public RuntimeObject {};
struct List_1_t541EE8DDCC1D53F6905C8DBD81D9127781986CA3  : public RuntimeObject
{
	DataPoint_1U5BU5D_t9F63F6DDA285B3004F96EE9B38660732DA71AE0D* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tD9872A844B68161ADA39834AF99EB065DB91B8E3  : public RuntimeObject
{
	DataPoint_1U5BU5D_t02DC8AE3C25283F27774302229E4F2A9C5000931* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t9D22296249BE15200FF3C85F0ECC939FB09F55EA  : public RuntimeObject
{
	DataPoint_1U5BU5D_tFAF0E13D7166CC6FF2CED34D8A0C81E81FF9E27E* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tD037C2F2F7A897D6A2C8A84A0B079A74AD9933D2  : public RuntimeObject
{
	DataPoint_1U5BU5D_t3BA54E7D022CDB8ED107AE73ADFA89DECE6678C7* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t20C832540BA4E58AD237892E38A73E53966C5115  : public RuntimeObject
{
	DataPoint_1U5BU5D_tDF3873B603F57BC0406D76431305ADC806980A21* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332  : public RuntimeObject
{
	RuntimeObject* ___comparer;
	GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* ___groupings;
	Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* ___lastGrouping;
	int32_t ___count;
};
struct Node_t821211F0535E80E80FDC8FFB600F681E98286BF0  : public RuntimeObject
{
	RuntimeObject* ____key;
	RuntimeObject* ____value;
	Node_t821211F0535E80E80FDC8FFB600F681E98286BF0* ____next;
	int32_t ____hashcode;
};
struct Node_tC5111E77A2002D0AD173457666915D4D0BD59865 : public RuntimeObject {};
struct OrderedEnumerable_1_t2F9F5060B969113C249D3BC84B7DA3D9C9DCD84B  : public RuntimeObject
{
	RuntimeObject* ___source;
};
struct OrderedEnumerable_1_t8EEABC87399C51697FF13CC459FC26CA5A5857DA  : public RuntimeObject
{
	RuntimeObject* ___source;
};
struct OrderedEnumerable_1_t49A81D3EAEB40201506836E577654DE2F8EC8941  : public RuntimeObject
{
	RuntimeObject* ___source;
};
struct OrderedEnumerable_1_tFFE2D41E419F999B45E7C9636190F547FE16EA00  : public RuntimeObject
{
	RuntimeObject* ___source;
};
struct OrderedEnumerable_1_t2CA7B89590CC51BDE981B85FB02BE2FC4175E2D6  : public RuntimeObject
{
	RuntimeObject* ___source;
};
struct OrderedEnumerable_1_tA6269C578EE7D3423C79F32258D574795AEF1151  : public RuntimeObject
{
	RuntimeObject* ___source;
};
struct OrderedEnumerable_1_t635FACC705EB8D479616971CD818376DC3A5AF51  : public RuntimeObject
{
	RuntimeObject* ___source;
};
struct OrderedEnumerable_1_t9FC254A996960AAA55B70FA7417B36D16C123B28  : public RuntimeObject
{
	RuntimeObject* ___source;
};
struct Property_2_t510F1330267820F4F9653B2B5A0B3ED2E80B4046  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___buckets;
	SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* ___slots;
	int32_t ___count;
	int32_t ___freeList;
	RuntimeObject* ___comparer;
};
struct SplinePath_1_t72CDDB4842573EC5B6F9AC5A495FF276FDB118A9  : public RuntimeObject
{
	SplineSlice_1U5BU5D_tF9B09333D66FA55C57D3956FC46305B333F23AD2* ___m_Splines;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_Splits;
};
struct SplinePath_1_t4A42A498CBF6AD8AD1108EACCC704F3EB561E767  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_Splines;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_Splits;
};
struct SplinePath_1_t513E9875170FA8324971223A4F061E8B99150990  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___m_Splines;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_Splits;
};
struct Tables_t14D3B197594232ACFA76B87EB205EB3661F6EAA6  : public RuntimeObject
{
	NodeU5BU5D_t2D9C2B502AE419E91BEF20D4861A838720732B76* ____buckets;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____locks;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____countPerLock;
};
struct Tables_tD895B223685217918C345ED5D52074F7E29E5F95  : public RuntimeObject
{
	NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* ____buckets;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____locks;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____countPerLock;
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
struct AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408 
{
	RuntimeObject* ___runnerPromise;
	Exception_t* ___ex;
	double ___result;
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
struct Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD 
{
	ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* ___items;
	int32_t ___count;
};
struct Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10 
{
	GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ___items;
	int32_t ___count;
};
struct Buffer_1_tC5E38DD33641259569860E7D2521C0A65E11441B 
{
	MarkToBaseAdjustmentRecordU5BU5D_tECA7CEA6635E17961BB362A1BD69322800A15966* ___items;
	int32_t ___count;
};
struct Buffer_1_t78B6DF8A4894DAF17C243F0D271FBE2B62619A14 
{
	MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* ___items;
	int32_t ___count;
};
struct Buffer_1_t4791E2493D69BE78059DB64F5984BCEC79E91537 
{
	MarkToMarkAdjustmentRecordU5BU5D_tD0484B2268EBA1947BBA50456596875426ED9CDB* ___items;
	int32_t ___count;
};
struct Buffer_1_tCA1933430719B4829D9E8C1DB02C579B9C68E7CD 
{
	MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* ___items;
	int32_t ___count;
};
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
struct DataPoint_1_tC38A0A55D491338BA0D06FDD08D22F84E99773CE 
{
	float ___m_Index;
	int32_t ___m_Value;
};
struct DataPoint_1_tD1BFCB1B6A9F7919FCA0852C613D2B338AE88758 
{
	float ___m_Index;
	RuntimeObject* ___m_Value;
};
struct DataPoint_1_t6B7B80D91DA21439876F6D0784049FBEDDB60761 
{
	float ___m_Index;
	float ___m_Value;
};
typedef Il2CppFullySharedGenericStruct DataPoint_1_tB4B57FF5C045044B0B4FC8A968B685C6E30D9B71;
struct DelegateProperty_2_tEF04A831D1787C45A1B56C36935D689DB49E2266  : public Property_2_t510F1330267820F4F9653B2B5A0B3ED2E80B4046
{
	PropertyGetter_2_t2ACCDAC10DC9098C8661F0FCDBB09E9FD15E077A* ___m_Getter;
	PropertySetter_2_tCFA404067EBB9024FD1CC49E6D183B911A47BB6D* ___m_Setter;
	String_t* ___U3CNameU3Ek__BackingField;
};
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	RuntimeObject* ___key;
	RuntimeObject* ___value;
};
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
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
struct SetElementProperty_tD32144938E8C2B3852669AF6CB12C17FAB5056C1 : public Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3 {};
struct UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 
{
	RuntimeObject* ___source;
	bool ___result;
	int16_t ___token;
};
typedef Il2CppFullySharedGenericStruct UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483;
struct ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A 
{
	RuntimeObject* ___Item1;
	RuntimeObject* ___Item2;
};
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
struct GlyphAnchorPoint_t1E0A7753CCCC41F22D3C408C4F96DDEC70291929 
{
	float ___m_XCoordinate;
	float ___m_YCoordinate;
};
struct GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 
{
	float ___m_XCoordinate;
	float ___m_YCoordinate;
};
struct GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E 
{
	float ___m_XPlacement;
	float ___m_YPlacement;
	float ___m_XAdvance;
	float ___m_YAdvance;
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
struct MarkPositionAdjustment_tEE7CE316B8F61A7D6725524435B6363E849C62ED 
{
	float ___m_XPositionAdjustment;
	float ___m_YPositionAdjustment;
};
struct MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 
{
	float ___m_XPositionAdjustment;
	float ___m_YPositionAdjustment;
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
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E 
{
	float ___x;
	float ___y;
	float ___z;
};
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct U3CGetEnumeratorU3Ed__1_t428C31FE719799CD61A887870EE46ED9488AAFAC  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___U3CU3E2__current;
	OrderedEnumerable_1_t2F9F5060B969113C249D3BC84B7DA3D9C9DCD84B* ___U3CU3E4__this;
	Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD ___U3CbufferU3E5__2;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CmapU3E5__3;
	int32_t ___U3CiU3E5__4;
};
struct U3CGetEnumeratorU3Ed__1_t6D4BC5B68087352E56482B91E7BADA70BEB38CD2  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	OrderedEnumerable_1_t635FACC705EB8D479616971CD818376DC3A5AF51* ___U3CU3E4__this;
	Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59 ___U3CbufferU3E5__2;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CmapU3E5__3;
	int32_t ___U3CiU3E5__4;
};
struct U3CGetEnumeratorU3Ed__1_t0C0E1C4A0A69A2FDEE7A295C343DBFCB38E1E136 : public RuntimeObject {};
struct U3CGetEnumeratorU3Ed__35_tFBB72033DD97EBEE1D1AB495DD3A0C1827242215  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___U3CU3E2__current;
	ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* ___U3CU3E4__this;
	NodeU5BU5D_t2D9C2B502AE419E91BEF20D4861A838720732B76* ___U3CbucketsU3E5__2;
	int32_t ___U3CiU3E5__3;
	Node_t821211F0535E80E80FDC8FFB600F681E98286BF0* ___U3CcurrentU3E5__4;
};
struct U3CGetEnumeratorU3Ed__35_t5851A752199A6195E7EB427BC50C5FFCAB8D4E6E : public RuntimeObject {};
struct U3CGetEnumeratorU3Ed__46_t6EA4F0A44BEB531AC925F17E0723699D66738AFA  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	DataPoint_1_tC38A0A55D491338BA0D06FDD08D22F84E99773CE ___U3CU3E2__current;
	SplineData_1_tF29E811708B706899A292A38A9FFA70C7F10141C* ___U3CU3E4__this;
	int32_t ___U3CiU3E5__1;
	int32_t ___U3CcU3E5__2;
};
struct U3CGetEnumeratorU3Ed__46_t20FC2A1ECE38773FDEF6C8B8F35293D3CBC5DE4A  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	DataPoint_1_tD1BFCB1B6A9F7919FCA0852C613D2B338AE88758 ___U3CU3E2__current;
	SplineData_1_t8108212EF9C2518D2EC261D68CDCE4DC31B6D1D7* ___U3CU3E4__this;
	int32_t ___U3CiU3E5__1;
	int32_t ___U3CcU3E5__2;
};
struct U3CGetEnumeratorU3Ed__46_t5A2636A2C410BE54A8AC8F1BE5E7E59294B26EE5  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	DataPoint_1_t6B7B80D91DA21439876F6D0784049FBEDDB60761 ___U3CU3E2__current;
	SplineData_1_t76C1101E75006280CD34A238E2294898514C06A6* ___U3CU3E4__this;
	int32_t ___U3CiU3E5__1;
	int32_t ___U3CcU3E5__2;
};
struct U3CGetEnumeratorU3Ed__46_t18856EC86B980BAB08645469ED3896C6D5FC485A : public RuntimeObject {};
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
struct Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 
{
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 ___task;
};
typedef Il2CppFullySharedGenericStruct Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C;
struct DataPoint_1_t3259A8738D178774B1BF86D6B638F3A10EEC06F1 
{
	float ___m_Index;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___m_Value;
};
struct Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB 
{
	bool ___hasValue;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value;
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
struct FontFeatureLookupFlags_t2000121BA341A3CAE5E0D4FAC6AA4378FE14AE1B 
{
	int32_t ___value__;
};
struct GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 
{
	uint32_t ___m_GlyphIndex;
	GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E ___m_GlyphValueRecord;
};
struct InstantiationKind_t9B77929786BCA193B4A916F2F25793598CF0DF7D 
{
	int32_t ___value__;
};
struct MarkToBaseAdjustmentRecord_t03C041CB56601B46F025C69B899BBAB750201C71 
{
	uint32_t ___m_BaseGlyphID;
	GlyphAnchorPoint_t1E0A7753CCCC41F22D3C408C4F96DDEC70291929 ___m_BaseGlyphAnchorPoint;
	uint32_t ___m_MarkGlyphID;
	MarkPositionAdjustment_tEE7CE316B8F61A7D6725524435B6363E849C62ED ___m_MarkPositionAdjustment;
};
struct MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 
{
	uint32_t ___m_BaseGlyphID;
	GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 ___m_BaseGlyphAnchorPoint;
	uint32_t ___m_MarkGlyphID;
	MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 ___m_MarkPositionAdjustment;
};
struct MarkToMarkAdjustmentRecord_t5D12F757E4ECB2EA12EB404228D70FA4DDBD6654 
{
	uint32_t ___m_BaseMarkGlyphID;
	GlyphAnchorPoint_t1E0A7753CCCC41F22D3C408C4F96DDEC70291929 ___m_BaseMarkGlyphAnchorPoint;
	uint32_t ___m_CombiningMarkGlyphID;
	MarkPositionAdjustment_tEE7CE316B8F61A7D6725524435B6363E849C62ED ___m_CombiningMarkPositionAdjustment;
};
struct MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C 
{
	uint32_t ___m_BaseMarkGlyphID;
	GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 ___m_BaseMarkGlyphAnchorPoint;
	uint32_t ___m_CombiningMarkGlyphID;
	MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 ___m_CombiningMarkPositionAdjustment;
};
struct PathIndexUnit_tC19B7C072F33768FFBAF1E5697A874279A3FB1BD 
{
	int32_t ___value__;
};
struct PlayerLoopTiming_tA0561E77DCF3749CC535F4F45642F515BDF040C2 
{
	int32_t ___value__;
};
struct SliceDirection_tC6D012A0809816078970859D28C0FC921C9C8135 
{
	int32_t ___value__;
};
struct UniTaskStatus_tC898C29839EBB5DB7055C3DF299A2C276237CB70 
{
	int32_t ___value__;
};
struct float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c0;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c1;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c2;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c3;
};
struct quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___value;
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
struct U3CFirstAwaitAsyncU3Ed__2_1_t0335CFF4BC1145B5DD127FA1D13432DEA6A0CE03 : public RuntimeObject {};
struct U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_tF176CAA5FE54CFE4E1BABD507A0631D3E6AC89DC : public RuntimeObject {};
struct U3CForEachAsyncU3Ed__0_1_t9582606A1F1A2D59AA951BBAAAC83A1CC5679B2E  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___action;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	RuntimeObject* ___U3CeU3E5__1;
	RuntimeObject* ___U3CU3Es__2;
	int32_t ___U3CU3Es__3;
	bool ___U3CU3Es__4;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CForEachAsyncU3Ed__1_1_t10C921BC3C792263B1FFEF9A54C79CD1EE8F4FD4  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Action_2_t983A40F124DCF06E5CEB4DE585CE7204D7F7E25C* ___action;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	RuntimeObject* ___U3CeU3E5__1;
	RuntimeObject* ___U3CU3Es__2;
	int32_t ___U3CU3Es__3;
	int32_t ___U3CindexU3E5__4;
	bool ___U3CU3Es__5;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CForEachAwaitAsyncU3Ed__2_1_t504B931A70EC737437DAD27DD1DEA64C25146E8B  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_tB9800595B3251D2492E40667A6C05061784D48FB* ___action;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	RuntimeObject* ___U3CeU3E5__1;
	RuntimeObject* ___U3CU3Es__2;
	int32_t ___U3CU3Es__3;
	bool ___U3CU3Es__4;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
};
struct U3CForEachAwaitAsyncU3Ed__3_1_t8871DBC78D8823939DE765EB161709598260AC6A  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_3_t132FDF1783142B71AC1D1F8BB2FF80D9FAC32BFC* ___action;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	RuntimeObject* ___U3CeU3E5__1;
	RuntimeObject* ___U3CU3Es__2;
	int32_t ___U3CU3Es__3;
	int32_t ___U3CindexU3E5__4;
	bool ___U3CU3Es__5;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
};
struct U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_t314B32851737E85A376C96788B004A73C45C8ED9  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_3_tEBFC185F508D6150079151B2395F5DE7B54CC752* ___action;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	RuntimeObject* ___U3CeU3E5__1;
	RuntimeObject* ___U3CU3Es__2;
	int32_t ___U3CU3Es__3;
	bool ___U3CU3Es__4;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
};
struct U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_tF271ADEE88B008144D6D5CA57732E98C4D95A0E0  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_4_t06A967E03EDC626BCFB4875FDF8A19728ADC72BC* ___action;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	RuntimeObject* ___U3CeU3E5__1;
	RuntimeObject* ___U3CU3Es__2;
	int32_t ___U3CU3Es__3;
	int32_t ___U3CindexU3E5__4;
	bool ___U3CU3Es__5;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
};
struct U3CGetEnumeratorU3Ed__1_t20E5AEAF9BDC6069AD68C33A55C6648EFD31D186  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	MarkToBaseAdjustmentRecord_t03C041CB56601B46F025C69B899BBAB750201C71 ___U3CU3E2__current;
	OrderedEnumerable_1_t49A81D3EAEB40201506836E577654DE2F8EC8941* ___U3CU3E4__this;
	Buffer_1_tC5E38DD33641259569860E7D2521C0A65E11441B ___U3CbufferU3E5__2;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CmapU3E5__3;
	int32_t ___U3CiU3E5__4;
};
struct U3CGetEnumeratorU3Ed__1_t3DA927506BB3A75FB0C275BE0E1E951C2FA72436  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___U3CU3E2__current;
	OrderedEnumerable_1_tFFE2D41E419F999B45E7C9636190F547FE16EA00* ___U3CU3E4__this;
	Buffer_1_t78B6DF8A4894DAF17C243F0D271FBE2B62619A14 ___U3CbufferU3E5__2;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CmapU3E5__3;
	int32_t ___U3CiU3E5__4;
};
struct U3CGetEnumeratorU3Ed__1_t4481370B78AEBF7DBD954E502147D470C0F85ED0  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	MarkToMarkAdjustmentRecord_t5D12F757E4ECB2EA12EB404228D70FA4DDBD6654 ___U3CU3E2__current;
	OrderedEnumerable_1_t2CA7B89590CC51BDE981B85FB02BE2FC4175E2D6* ___U3CU3E4__this;
	Buffer_1_t4791E2493D69BE78059DB64F5984BCEC79E91537 ___U3CbufferU3E5__2;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CmapU3E5__3;
	int32_t ___U3CiU3E5__4;
};
struct U3CGetEnumeratorU3Ed__1_t86CE4D514C7EA04C708491BC8E9D7FCB75DB8A9F  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___U3CU3E2__current;
	OrderedEnumerable_1_tA6269C578EE7D3423C79F32258D574795AEF1151* ___U3CU3E4__this;
	Buffer_1_tCA1933430719B4829D9E8C1DB02C579B9C68E7CD ___U3CbufferU3E5__2;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CmapU3E5__3;
	int32_t ___U3CiU3E5__4;
};
struct U3CGetEnumeratorU3Ed__46_t9A2B20F8159657645800A9F875378F7013A310EE  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	DataPoint_1_t3259A8738D178774B1BF86D6B638F3A10EEC06F1 ___U3CU3E2__current;
	SplineData_1_t5E765EAB32A437A18736ABFCD420E397DC3E49DD* ___U3CU3E4__this;
	int32_t ___U3CiU3E5__1;
	int32_t ___U3CcU3E5__2;
};
struct U3CLastAsyncU3Ed__0_1_t38AFC35C81A53570FC7FA05BED4F1D9156275B70 : public RuntimeObject {};
struct U3CLastAsyncU3Ed__1_1_t0FD9210854E67C87AE6374B78E7F411EE5178410 : public RuntimeObject {};
struct U3CLastAwaitAsyncU3Ed__2_1_tC239805AACCC4C0F81C94B1270D7382B72745616 : public RuntimeObject {};
struct U3CLastAwaitWithCancellationAsyncU3Ed__3_1_tE16CA9A4999761FA673AE43AC096DABBF15267E4 : public RuntimeObject {};
struct U3CLongCountAsyncU3Ed__0_1_t669866756D43CCD2A56D30F8B27884E958EEE7D8  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	int64_t ___U3CcountU3E5__1;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3Es__3;
	int32_t ___U3CU3Es__4;
	bool ___U3CU3Es__5;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CLongCountAsyncU3Ed__1_1_t9BCC201AA36FD39F4C9C0D5E3365B5C80DE5A3CF  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	int64_t ___U3CcountU3E5__1;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3Es__3;
	int32_t ___U3CU3Es__4;
	bool ___U3CU3Es__5;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CLongCountAwaitAsyncU3Ed__2_1_t943648D574C784EBF11D71FCD9F05FC1B9F46CCB  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C* ___predicate;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	int64_t ___U3CcountU3E5__1;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3Es__3;
	int32_t ___U3CU3Es__4;
	bool ___U3CU3Es__5;
	bool ___U3CU3Es__6;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CLongCountAwaitWithCancellationAsyncU3Ed__3_1_tEC740CC65DA303052502C70CAD217A9BCF390D5D  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814* ___predicate;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	int64_t ___U3CcountU3E5__1;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3Es__3;
	int32_t ___U3CU3Es__4;
	bool ___U3CU3Es__5;
	bool ___U3CU3Es__6;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CMaxAsyncU3Ed__0_1_t5294E09AD867317EEACB8FB98CDF7D2FC6FC3CEB : public RuntimeObject {};
struct U3CMaxAsyncU3Ed__13_1_t127C47DE180A7E5E0833A81E4EF7FA82FD3B3405  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_tFAB3D8EFCE4F55CAB3F80EABAB10F8226D7FEBF6* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	float ___U3CvalueU3E5__1;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3Es__3;
	int32_t ___U3CU3Es__4;
	bool ___U3CU3Es__5;
	float ___U3CxU3E5__6;
	bool ___U3CU3Es__7;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CMaxAsyncU3Ed__17_1_tDA11432E5B54E699AF5502AE7364400C88B087C1  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_tF36C7D1152BF6807C03112D4A053E5038A13A6EB* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	double ___U3CvalueU3E5__1;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3Es__3;
	int32_t ___U3CU3Es__4;
	bool ___U3CU3Es__5;
	double ___U3CxU3E5__6;
	bool ___U3CU3Es__7;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CMaxAsyncU3Ed__1_2_tEBF7F94D5200D91A6F68BD1F23DC56B03AD4F26F : public RuntimeObject {};
struct U3CMaxAsyncU3Ed__21_1_t0B5A2CCE38B228A403FC3505BB26CEA1F828A955  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_t5ABD904FFCFC84BA711C9261A36E9482990A6CA7* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CvalueU3E5__1;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3Es__3;
	int32_t ___U3CU3Es__4;
	bool ___U3CU3Es__5;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CxU3E5__6;
	bool ___U3CU3Es__7;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CMaxAsyncU3Ed__25_1_t9EA54FEF86B5DF1390483F9E8FD1BE063590896D  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_t0DE0378A8A90F3B8204450750A771096D0F75A98* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CvalueU3E5__1;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3Es__3;
	int32_t ___U3CU3Es__4;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CU3Es__5;
	bool ___U3CU3Es__6;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CxU3E5__7;
	bool ___U3CU3Es__8;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CMaxAsyncU3Ed__29_1_t9DA9DB413A115D29104F7EC27E0B4462B9894445  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_tFC0477C87E7518136DEE345DCF44B6ACA22E24F0* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CvalueU3E5__1;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3Es__3;
	int32_t ___U3CU3Es__4;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CU3Es__5;
	bool ___U3CU3Es__6;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CxU3E5__7;
	bool ___U3CU3Es__8;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CMaxAsyncU3Ed__33_1_tCDB8D719CC9635A8F99266A9531127882F7BD0E8  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_tCDF39BBC1094782C50BE631779E8FD895BFEAF32* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CvalueU3E5__1;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3Es__3;
	int32_t ___U3CU3Es__4;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CU3Es__5;
	bool ___U3CU3Es__6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CxU3E5__7;
	bool ___U3CU3Es__8;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CMaxAsyncU3Ed__37_1_t75AE786D8A2D63FBD14F0C1E526BDCBC87B9A51A  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_tB9099E603733365FA636ABD4F1512E954C883863* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CvalueU3E5__1;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3Es__3;
	int32_t ___U3CU3Es__4;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CU3Es__5;
	bool ___U3CU3Es__6;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CxU3E5__7;
	bool ___U3CU3Es__8;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285 
{
	RuntimeObject* ___runnerPromise;
	Exception_t* ___ex;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___result;
	RuntimeObject* ___debuggingId;
};
struct PropertyBag_1_t9B0D7D63F90D24F16F87AF8413E98E8C803A81B9  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct SplineData_1_tF29E811708B706899A292A38A9FFA70C7F10141C  : public RuntimeObject
{
	int32_t ___m_IndexUnit;
	int32_t ___m_DefaultValue;
	List_1_t541EE8DDCC1D53F6905C8DBD81D9127781986CA3* ___m_DataPoints;
	bool ___m_NeedsSort;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___changed;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Changed;
};
struct SplineData_1_t8108212EF9C2518D2EC261D68CDCE4DC31B6D1D7  : public RuntimeObject
{
	int32_t ___m_IndexUnit;
	RuntimeObject* ___m_DefaultValue;
	List_1_tD9872A844B68161ADA39834AF99EB065DB91B8E3* ___m_DataPoints;
	bool ___m_NeedsSort;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___changed;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Changed;
};
struct SplineData_1_t76C1101E75006280CD34A238E2294898514C06A6  : public RuntimeObject
{
	int32_t ___m_IndexUnit;
	float ___m_DefaultValue;
	List_1_t9D22296249BE15200FF3C85F0ECC939FB09F55EA* ___m_DataPoints;
	bool ___m_NeedsSort;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___changed;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Changed;
};
struct SplineData_1_t5A8AEB81C09C644A42275D7C08D086BF9B2F365E : public RuntimeObject {};
struct SplineData_1_t5E765EAB32A437A18736ABFCD420E397DC3E49DD  : public RuntimeObject
{
	int32_t ___m_IndexUnit;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___m_DefaultValue;
	List_1_t20C832540BA4E58AD237892E38A73E53966C5115* ___m_DataPoints;
	bool ___m_NeedsSort;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___changed;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Changed;
};
struct BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___Position;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___TangentIn;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___TangentOut;
	quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___Rotation;
};
struct GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E 
{
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_FirstAdjustmentRecord;
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_SecondAdjustmentRecord;
	int32_t ___m_FeatureLookupFlags;
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
struct SplineRange_tCB51EBCFA5858BB48FEC33EF009AA4E0B75772B1 
{
	int32_t ___m_Start;
	int32_t ___m_Count;
	int32_t ___m_Direction;
};
struct SwitchToMainThreadAwaitable_t30D0968092E3CD2E8BAE2DEF136FC76A3695E9F8 
{
	int32_t ___playerLoopTiming;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
};
struct SwitchToMainThreadAwaitable_t30D0968092E3CD2E8BAE2DEF136FC76A3695E9F8_marshaled_pinvoke
{
	int32_t ___playerLoopTiming;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke ___cancellationToken;
};
struct SwitchToMainThreadAwaitable_t30D0968092E3CD2E8BAE2DEF136FC76A3695E9F8_marshaled_com
{
	int32_t ___playerLoopTiming;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com ___cancellationToken;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F 
{
	int32_t ___playerLoopTiming;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
};
struct Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F_marshaled_pinvoke
{
	int32_t ___playerLoopTiming;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke ___cancellationToken;
};
struct Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F_marshaled_com
{
	int32_t ___playerLoopTiming;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com ___cancellationToken;
};
struct U3CForgetCoreWithCatchU3Ed__21_1_tC1CCDBDBC539D1E312103E6683A61535E5D194E5 : public RuntimeObject {};
struct U3CGetEnumeratorU3Ed__1_t35287071076620851350DEE5A7358F21C466DA90  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___U3CU3E2__current;
	OrderedEnumerable_1_t8EEABC87399C51697FF13CC459FC26CA5A5857DA* ___U3CU3E4__this;
	Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10 ___U3CbufferU3E5__2;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CmapU3E5__3;
	int32_t ___U3CiU3E5__4;
};
struct U3CGetEnumeratorU3Ed__7_tC36163D2BC0734D81ABC8A351F1FB7F21DBC2740  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 ___U3CU3E2__current;
	SplinePath_1_t4A42A498CBF6AD8AD1108EACCC704F3EB561E767* ___U3CU3E4__this;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___U3CU3Es__1;
	int32_t ___U3CU3Es__2;
	RuntimeObject* ___U3CbranchU3E5__3;
	RuntimeObject* ___U3CU3Es__4;
	BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 ___U3CknotU3E5__5;
};
struct U3CGetEnumeratorU3Ed__7_t02BCED185E0D88610DFFAA325C2AF1FC843DC083 : public RuntimeObject {};
struct U3CMaxAsyncU3Ed__41_1_t4C6F0F24A2D6C828C7E647306BBD8223AD55ED47  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	Func_2_t02AAAA5ED63E37D8013889ECE551ED5172A9F7A4* ___selector;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CvalueU3E5__1;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3Es__3;
	int32_t ___U3CU3Es__4;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CU3Es__5;
	bool ___U3CU3Es__6;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CxU3E5__7;
	bool ___U3CU3Es__8;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04  : public MulticastDelegate_t
{
};
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};
struct Action_2_t983A40F124DCF06E5CEB4DE585CE7204D7F7E25C  : public MulticastDelegate_t
{
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
struct Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C  : public MulticastDelegate_t
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
struct Func_2_tFAB3D8EFCE4F55CAB3F80EABAB10F8226D7FEBF6  : public MulticastDelegate_t
{
};
struct Func_2_tB9800595B3251D2492E40667A6C05061784D48FB  : public MulticastDelegate_t
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
struct Func_3_tEBFC185F508D6150079151B2395F5DE7B54CC752  : public MulticastDelegate_t
{
};
struct Func_3_t132FDF1783142B71AC1D1F8BB2FF80D9FAC32BFC  : public MulticastDelegate_t
{
};
struct Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4  : public MulticastDelegate_t
{
};
struct Func_4_t06A967E03EDC626BCFB4875FDF8A19728ADC72BC  : public MulticastDelegate_t
{
};
struct KeyValuePairPropertyBag_2_t14F7E3ED1235C96F445409D9E1E028FC3090724E  : public PropertyBag_1_t9B0D7D63F90D24F16F87AF8413E98E8C803A81B9
{
};
struct SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF  : public PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409
{
	SetElementProperty_tD32144938E8C2B3852669AF6CB12C17FAB5056C1* ___m_Property;
};
struct SplineSlice_1_t11281F34A00C6D5212DE9E4D85BED17D2705BB32 
{
	RuntimeObject* ___Spline;
	SplineRange_tCB51EBCFA5858BB48FEC33EF009AA4E0B75772B1 ___Range;
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___Transform;
};
typedef Il2CppFullySharedGenericStruct SplineSlice_1_t648786FC04C18926A426A2F2872A7B8B2DEA4B99;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct U3CGetEnumeratorU3Ed__10_tC2CCC09794715D3A40FB005ED4800D913E46029A  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 ___U3CU3E2__current;
	SplineSlice_1_t11281F34A00C6D5212DE9E4D85BED17D2705BB32 ___U3CU3E4__this;
	int32_t ___U3CiU3E5__1;
	int32_t ___U3CcU3E5__2;
};
struct U3CGetEnumeratorU3Ed__10_t9346CA1CE8CF84ACA75D409CAE6DE9866AEE1B79 : public RuntimeObject {};
struct U3CGetEnumeratorU3Ed__7_t810581FDA129E29DFDF7A45244DCF67D0B085FC6  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 ___U3CU3E2__current;
	SplinePath_1_t72CDDB4842573EC5B6F9AC5A495FF276FDB118A9* ___U3CU3E4__this;
	SplineSlice_1U5BU5D_tF9B09333D66FA55C57D3956FC46305B333F23AD2* ___U3CU3Es__1;
	int32_t ___U3CU3Es__2;
	SplineSlice_1_t11281F34A00C6D5212DE9E4D85BED17D2705BB32 ___U3CbranchU3E5__3;
	RuntimeObject* ___U3CU3Es__4;
	BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 ___U3CknotU3E5__5;
};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB_StaticFields
{
	Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* ___defaultComparer;
};
struct ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct List_1_t541EE8DDCC1D53F6905C8DBD81D9127781986CA3_StaticFields
{
	DataPoint_1U5BU5D_t9F63F6DDA285B3004F96EE9B38660732DA71AE0D* ___s_emptyArray;
};
struct List_1_tD9872A844B68161ADA39834AF99EB065DB91B8E3_StaticFields
{
	DataPoint_1U5BU5D_t02DC8AE3C25283F27774302229E4F2A9C5000931* ___s_emptyArray;
};
struct List_1_t9D22296249BE15200FF3C85F0ECC939FB09F55EA_StaticFields
{
	DataPoint_1U5BU5D_tFAF0E13D7166CC6FF2CED34D8A0C81E81FF9E27E* ___s_emptyArray;
};
struct List_1_tD037C2F2F7A897D6A2C8A84A0B079A74AD9933D2_StaticFields
{
	DataPoint_1U5BU5D_t3BA54E7D022CDB8ED107AE73ADFA89DECE6678C7* ___s_emptyArray;
};
struct List_1_t20C832540BA4E58AD237892E38A73E53966C5115_StaticFields
{
	DataPoint_1U5BU5D_tDF3873B603F57BC0406D76431305ADC806980A21* ___s_emptyArray;
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
struct SplineData_1_tF29E811708B706899A292A38A9FFA70C7F10141C_StaticFields
{
	DataPointComparer_1_tF0903CA0DFACB1F9DE4EEBCB251A17389C66A3AC* ___k_DataPointComparer;
};
struct SplineData_1_t8108212EF9C2518D2EC261D68CDCE4DC31B6D1D7_StaticFields
{
	DataPointComparer_1_t6D6A7F31B80F30764311D46EB24354FE0BB642AF* ___k_DataPointComparer;
};
struct SplineData_1_t76C1101E75006280CD34A238E2294898514C06A6_StaticFields
{
	DataPointComparer_1_t7A8235814C27F7B4BC0C16929B07730C938100F8* ___k_DataPointComparer;
};
struct SplineData_1_t5A8AEB81C09C644A42275D7C08D086BF9B2F365E_StaticFields
{
	DataPointComparer_1_t9458D83FA880494AB6FE10A9293D600BD495E453* ___k_DataPointComparer;
};
struct SplineData_1_t5E765EAB32A437A18736ABFCD420E397DC3E49DD_StaticFields
{
	DataPointComparer_1_t94F55841BF77FE070EA60DEDAAAB5DCD66F52407* ___k_DataPointComparer;
};
struct KeyValuePairPropertyBag_2_t14F7E3ED1235C96F445409D9E1E028FC3090724E_StaticFields
{
	DelegateProperty_2_tEF04A831D1787C45A1B56C36935D689DB49E2266* ___s_KeyProperty;
	DelegateProperty_2_tEF04A831D1787C45A1B56C36935D689DB49E2266* ___s_ValueProperty;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962  : public RuntimeArray
{
	ALIGN_FIELD (8) ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A m_Items[1];

	inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item2), (void*)NULL);
		#endif
	}
	inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item2), (void*)NULL);
		#endif
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
struct GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7  : public RuntimeArray
{
	ALIGN_FIELD (8) GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E m_Items[1];

	inline GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E value)
	{
		m_Items[index] = value;
	}
};
struct MarkToBaseAdjustmentRecordU5BU5D_tECA7CEA6635E17961BB362A1BD69322800A15966  : public RuntimeArray
{
	ALIGN_FIELD (8) MarkToBaseAdjustmentRecord_t03C041CB56601B46F025C69B899BBAB750201C71 m_Items[1];

	inline MarkToBaseAdjustmentRecord_t03C041CB56601B46F025C69B899BBAB750201C71 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MarkToBaseAdjustmentRecord_t03C041CB56601B46F025C69B899BBAB750201C71* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MarkToBaseAdjustmentRecord_t03C041CB56601B46F025C69B899BBAB750201C71 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MarkToBaseAdjustmentRecord_t03C041CB56601B46F025C69B899BBAB750201C71 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MarkToBaseAdjustmentRecord_t03C041CB56601B46F025C69B899BBAB750201C71* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MarkToBaseAdjustmentRecord_t03C041CB56601B46F025C69B899BBAB750201C71 value)
	{
		m_Items[index] = value;
	}
};
struct MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911  : public RuntimeArray
{
	ALIGN_FIELD (8) MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 m_Items[1];

	inline MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 value)
	{
		m_Items[index] = value;
	}
};
struct MarkToMarkAdjustmentRecordU5BU5D_tD0484B2268EBA1947BBA50456596875426ED9CDB  : public RuntimeArray
{
	ALIGN_FIELD (8) MarkToMarkAdjustmentRecord_t5D12F757E4ECB2EA12EB404228D70FA4DDBD6654 m_Items[1];

	inline MarkToMarkAdjustmentRecord_t5D12F757E4ECB2EA12EB404228D70FA4DDBD6654 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MarkToMarkAdjustmentRecord_t5D12F757E4ECB2EA12EB404228D70FA4DDBD6654* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MarkToMarkAdjustmentRecord_t5D12F757E4ECB2EA12EB404228D70FA4DDBD6654 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MarkToMarkAdjustmentRecord_t5D12F757E4ECB2EA12EB404228D70FA4DDBD6654 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MarkToMarkAdjustmentRecord_t5D12F757E4ECB2EA12EB404228D70FA4DDBD6654* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MarkToMarkAdjustmentRecord_t5D12F757E4ECB2EA12EB404228D70FA4DDBD6654 value)
	{
		m_Items[index] = value;
	}
};
struct MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061  : public RuntimeArray
{
	ALIGN_FIELD (8) MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C m_Items[1];

	inline MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C value)
	{
		m_Items[index] = value;
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
struct NodeU5BU5D_t2D9C2B502AE419E91BEF20D4861A838720732B76  : public RuntimeArray
{
	ALIGN_FIELD (8) Node_t821211F0535E80E80FDC8FFB600F681E98286BF0* m_Items[1];

	inline Node_t821211F0535E80E80FDC8FFB600F681E98286BF0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Node_t821211F0535E80E80FDC8FFB600F681E98286BF0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Node_t821211F0535E80E80FDC8FFB600F681E98286BF0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Node_t821211F0535E80E80FDC8FFB600F681E98286BF0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Node_t821211F0535E80E80FDC8FFB600F681E98286BF0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Node_t821211F0535E80E80FDC8FFB600F681E98286BF0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A  : public RuntimeArray
{
	ALIGN_FIELD (8) Node_tC5111E77A2002D0AD173457666915D4D0BD59865* m_Items[1];

	inline Node_tC5111E77A2002D0AD173457666915D4D0BD59865* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Node_tC5111E77A2002D0AD173457666915D4D0BD59865** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Node_tC5111E77A2002D0AD173457666915D4D0BD59865* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Node_tC5111E77A2002D0AD173457666915D4D0BD59865* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Node_tC5111E77A2002D0AD173457666915D4D0BD59865** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Node_tC5111E77A2002D0AD173457666915D4D0BD59865* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct SplineSlice_1U5BU5D_tF9B09333D66FA55C57D3956FC46305B333F23AD2  : public RuntimeArray
{
	ALIGN_FIELD (8) SplineSlice_1_t11281F34A00C6D5212DE9E4D85BED17D2705BB32 m_Items[1];

	inline SplineSlice_1_t11281F34A00C6D5212DE9E4D85BED17D2705BB32 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SplineSlice_1_t11281F34A00C6D5212DE9E4D85BED17D2705BB32* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SplineSlice_1_t11281F34A00C6D5212DE9E4D85BED17D2705BB32 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Spline), (void*)NULL);
	}
	inline SplineSlice_1_t11281F34A00C6D5212DE9E4D85BED17D2705BB32 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SplineSlice_1_t11281F34A00C6D5212DE9E4D85BED17D2705BB32* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SplineSlice_1_t11281F34A00C6D5212DE9E4D85BED17D2705BB32 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Spline), (void*)NULL);
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_1__ctor_mE9AE2968725B445ABEBD61A3A7C93B5C2204928E_gshared (Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* EnumerableSorter_1_Sort_m893109DECEB392FD9D2D63B17FFF04EA3B8A6BEE_gshared (EnumerableSorter_1_tCEB88BCDB8FD518D48EECB11790C41C8C37FDD65* __this, ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* ___0_elements, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_1__ctor_mCA3CAB859EF638AEA56347DA74B5CABAAB17F76D_gshared (Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* EnumerableSorter_1_Sort_m76A2E3BB759F0B9F80B75384E4FB17875CA4829D_gshared (EnumerableSorter_1_t5897E023ECB6DBE16092BDD0CD9397E8600CD0F5* __this, GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ___0_elements, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_1__ctor_mA3365FB13DDC11386B51C7B5E691832DD7819F72_gshared (Buffer_1_tC5E38DD33641259569860E7D2521C0A65E11441B* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* EnumerableSorter_1_Sort_mA550496027F5BC19AE69FBFF439C86C3D45DD6C0_gshared (EnumerableSorter_1_t772456040AB1CD5F32AE1ACCF8BCBA3561A0CE67* __this, MarkToBaseAdjustmentRecordU5BU5D_tECA7CEA6635E17961BB362A1BD69322800A15966* ___0_elements, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_1__ctor_m086C12C5694E0D6EFB7A2B3FE005444773F1BC8B_gshared (Buffer_1_t78B6DF8A4894DAF17C243F0D271FBE2B62619A14* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* EnumerableSorter_1_Sort_m587E268B44E37C43725852E9B98275323B905602_gshared (EnumerableSorter_1_t33B4B1FE8E6E19EEFB45A8EC216B39E6DDF2FDDD* __this, MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* ___0_elements, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_1__ctor_m309F4E747F3CBF63BB9B6470E89A69B367B33FD5_gshared (Buffer_1_t4791E2493D69BE78059DB64F5984BCEC79E91537* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* EnumerableSorter_1_Sort_mD73192C61431355F9B7CEBBF1BD9BAA4615D95E8_gshared (EnumerableSorter_1_tC7A6BA5636DB2028E64A6A8150BE0C33E308DBF0* __this, MarkToMarkAdjustmentRecordU5BU5D_tD0484B2268EBA1947BBA50456596875426ED9CDB* ___0_elements, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_1__ctor_m9178E0FB078F890A98854B06AF9C08C14061F4AC_gshared (Buffer_1_tCA1933430719B4829D9E8C1DB02C579B9C68E7CD* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* EnumerableSorter_1_Sort_m0B1E1BD2E50D9C85A518873DD8F2D3109DDB872C_gshared (EnumerableSorter_1_t4439350BEBB5B5B9E8D43BBDBB271F1DC472270B* __this, MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* ___0_elements, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_1__ctor_m072DE84AEC969582EB5760D4835747F9DC0C02AF_gshared (Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* EnumerableSorter_1_Sort_m8685D15BDC4342DFFAE8D12488D213864CFDC321_gshared (EnumerableSorter_1_t9DF0BF2FF3A689EB41C9CE2B42D3A91F5776B3AD* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_elements, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_1__ctor_m55137EEF7AF9E0883A438776A066DA5520FFDE49_gshared (Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 SplineSlice_1_get_Item_m2C15FDA65345CC3F969F339B97892FD6C24BE237_gshared (SplineSlice_1_t11281F34A00C6D5212DE9E4D85BED17D2705BB32* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_gshared (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SplineData_1_get_Count_mE8FD1023A49410263923F7750AA1BA94E9E95853_gshared (SplineData_1_tF29E811708B706899A292A38A9FFA70C7F10141C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataPoint_1_tC38A0A55D491338BA0D06FDD08D22F84E99773CE List_1_get_Item_m562CD6C420F361C80C35FF6A0A932627ACB7B36F_gshared (List_1_t541EE8DDCC1D53F6905C8DBD81D9127781986CA3* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SplineData_1_get_Count_m79BA6F8A3AF83731A0B42186FF291721DD5E4B44_gshared (SplineData_1_t8108212EF9C2518D2EC261D68CDCE4DC31B6D1D7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataPoint_1_tD1BFCB1B6A9F7919FCA0852C613D2B338AE88758 List_1_get_Item_mF0989BF058FF6CB5979F305BB12B39B88DF87E75_gshared (List_1_tD9872A844B68161ADA39834AF99EB065DB91B8E3* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SplineData_1_get_Count_m9CA59F1EE706A934FF03BAD2322530CEF5811E10_gshared (SplineData_1_t76C1101E75006280CD34A238E2294898514C06A6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataPoint_1_t6B7B80D91DA21439876F6D0784049FBEDDB60761 List_1_get_Item_m535A9F0D144518B454D91B40D9753FF90B752B01_gshared (List_1_t9D22296249BE15200FF3C85F0ECC939FB09F55EA* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SplineData_1_get_Count_m8EED641C2214A2987EF1836D5F287071C67A38C7_gshared (SplineData_1_t5E765EAB32A437A18736ABFCD420E397DC3E49DD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataPoint_1_t3259A8738D178774B1BF86D6B638F3A10EEC06F1 List_1_get_Item_mDA20EFC26F62D2BDE4DAF5ADABA9912DFD8C873F_gshared (List_1_t20C832540BA4E58AD237892E38A73E53966C5115* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__7_U3CU3Em__Finally1_mED78C5E5996270A37EEAAC66923DF3E20AE5482D_gshared (U3CGetEnumeratorU3Ed__7_t810581FDA129E29DFDF7A45244DCF67D0B085FC6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__7_System_IDisposable_Dispose_mCEB34406B0F792844FCA69948EB262C85BFA8487_gshared (U3CGetEnumeratorU3Ed__7_t810581FDA129E29DFDF7A45244DCF67D0B085FC6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SplineSlice_1_GetEnumerator_mB7592E66C6CC33627ABD03647033C71321671C2D_gshared (SplineSlice_1_t11281F34A00C6D5212DE9E4D85BED17D2705BB32* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__7_U3CU3Em__Finally1_mCB6E085EAFBDF03FC9E434DE407A140EFFB67283_gshared (U3CGetEnumeratorU3Ed__7_tC36163D2BC0734D81ABC8A351F1FB7F21DBC2740* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__7_System_IDisposable_Dispose_m50822703134D56C09AE8B07C37FCBD5CF6E3465D_gshared (U3CGetEnumeratorU3Ed__7_tC36163D2BC0734D81ABC8A351F1FB7F21DBC2740* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_mAEE718F60708F1A917C5379F94447C8090707CE7_gshared_inline (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_gshared_inline (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* __this, int64_t ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_gshared_inline (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_gshared_inline (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* __this, float ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_gshared_inline (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_gshared_inline (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* __this, double ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_gshared_inline (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_gshared_inline (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_mE8C5BA18D2449D6BD546630CE70DE315F5F91FCE_gshared_inline (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m5E0E26E389BF8D15A8935BC741FAADEFF1617158_gshared_inline (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m668B0B683F2B4B7005D076DE9400F32B1702673B_gshared_inline (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m79D800118F9BCD740C939B134E630A8AB93AA606_gshared_inline (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* __this, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_gshared_inline (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_gshared_inline (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* __this, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_gshared_inline (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_gshared_inline (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_gshared_inline (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_gshared_inline (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_gshared_inline (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_gshared_inline (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* __this, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) ;

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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803 (Exception_t* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330 (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SwitchToMainThreadAwaitable_t30D0968092E3CD2E8BAE2DEF136FC76A3695E9F8 UniTask_SwitchToMainThread_mBC162C95F0ED605F8E5416A60CCA153E0993CBF1 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F SwitchToMainThreadAwaitable_GetAwaiter_m66A0F6F462885727A38028656D11B51CEA32BD29 (SwitchToMainThreadAwaitable_t30D0968092E3CD2E8BAE2DEF136FC76A3695E9F8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m8B4E3723A3CC1B1E8359E40C0766081C55A5BC37 (Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Awaiter_GetResult_m8383C6B4850150162ECAA6464603B95FD2231CB2 (Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F* __this, const RuntimeMethod* method) ;
inline void Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* __this, Exception_t* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*, Exception_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskScheduler_PublishUnobservedTaskException_m9F6352174ED5654B0A9FB5562B6FF25A788B27D3 (Exception_t* ___0_ex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) ;
inline void Buffer_1__ctor_mE9AE2968725B445ABEBD61A3A7C93B5C2204928E (Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD* __this, RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD*, RuntimeObject*, const RuntimeMethod*))Buffer_1__ctor_mE9AE2968725B445ABEBD61A3A7C93B5C2204928E_gshared)(__this, ___0_source, method);
}
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* EnumerableSorter_1_Sort_m893109DECEB392FD9D2D63B17FFF04EA3B8A6BEE (EnumerableSorter_1_tCEB88BCDB8FD518D48EECB11790C41C8C37FDD65* __this, ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* ___0_elements, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (EnumerableSorter_1_tCEB88BCDB8FD518D48EECB11790C41C8C37FDD65*, ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962*, int32_t, const RuntimeMethod*))EnumerableSorter_1_Sort_m893109DECEB392FD9D2D63B17FFF04EA3B8A6BEE_gshared)(__this, ___0_elements, ___1_count, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
inline void Buffer_1__ctor_mCA3CAB859EF638AEA56347DA74B5CABAAB17F76D (Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10* __this, RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10*, RuntimeObject*, const RuntimeMethod*))Buffer_1__ctor_mCA3CAB859EF638AEA56347DA74B5CABAAB17F76D_gshared)(__this, ___0_source, method);
}
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* EnumerableSorter_1_Sort_m76A2E3BB759F0B9F80B75384E4FB17875CA4829D (EnumerableSorter_1_t5897E023ECB6DBE16092BDD0CD9397E8600CD0F5* __this, GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ___0_elements, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (EnumerableSorter_1_t5897E023ECB6DBE16092BDD0CD9397E8600CD0F5*, GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7*, int32_t, const RuntimeMethod*))EnumerableSorter_1_Sort_m76A2E3BB759F0B9F80B75384E4FB17875CA4829D_gshared)(__this, ___0_elements, ___1_count, method);
}
inline void Buffer_1__ctor_mA3365FB13DDC11386B51C7B5E691832DD7819F72 (Buffer_1_tC5E38DD33641259569860E7D2521C0A65E11441B* __this, RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (Buffer_1_tC5E38DD33641259569860E7D2521C0A65E11441B*, RuntimeObject*, const RuntimeMethod*))Buffer_1__ctor_mA3365FB13DDC11386B51C7B5E691832DD7819F72_gshared)(__this, ___0_source, method);
}
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* EnumerableSorter_1_Sort_mA550496027F5BC19AE69FBFF439C86C3D45DD6C0 (EnumerableSorter_1_t772456040AB1CD5F32AE1ACCF8BCBA3561A0CE67* __this, MarkToBaseAdjustmentRecordU5BU5D_tECA7CEA6635E17961BB362A1BD69322800A15966* ___0_elements, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (EnumerableSorter_1_t772456040AB1CD5F32AE1ACCF8BCBA3561A0CE67*, MarkToBaseAdjustmentRecordU5BU5D_tECA7CEA6635E17961BB362A1BD69322800A15966*, int32_t, const RuntimeMethod*))EnumerableSorter_1_Sort_mA550496027F5BC19AE69FBFF439C86C3D45DD6C0_gshared)(__this, ___0_elements, ___1_count, method);
}
inline void Buffer_1__ctor_m086C12C5694E0D6EFB7A2B3FE005444773F1BC8B (Buffer_1_t78B6DF8A4894DAF17C243F0D271FBE2B62619A14* __this, RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (Buffer_1_t78B6DF8A4894DAF17C243F0D271FBE2B62619A14*, RuntimeObject*, const RuntimeMethod*))Buffer_1__ctor_m086C12C5694E0D6EFB7A2B3FE005444773F1BC8B_gshared)(__this, ___0_source, method);
}
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* EnumerableSorter_1_Sort_m587E268B44E37C43725852E9B98275323B905602 (EnumerableSorter_1_t33B4B1FE8E6E19EEFB45A8EC216B39E6DDF2FDDD* __this, MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* ___0_elements, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (EnumerableSorter_1_t33B4B1FE8E6E19EEFB45A8EC216B39E6DDF2FDDD*, MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911*, int32_t, const RuntimeMethod*))EnumerableSorter_1_Sort_m587E268B44E37C43725852E9B98275323B905602_gshared)(__this, ___0_elements, ___1_count, method);
}
inline void Buffer_1__ctor_m309F4E747F3CBF63BB9B6470E89A69B367B33FD5 (Buffer_1_t4791E2493D69BE78059DB64F5984BCEC79E91537* __this, RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (Buffer_1_t4791E2493D69BE78059DB64F5984BCEC79E91537*, RuntimeObject*, const RuntimeMethod*))Buffer_1__ctor_m309F4E747F3CBF63BB9B6470E89A69B367B33FD5_gshared)(__this, ___0_source, method);
}
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* EnumerableSorter_1_Sort_mD73192C61431355F9B7CEBBF1BD9BAA4615D95E8 (EnumerableSorter_1_tC7A6BA5636DB2028E64A6A8150BE0C33E308DBF0* __this, MarkToMarkAdjustmentRecordU5BU5D_tD0484B2268EBA1947BBA50456596875426ED9CDB* ___0_elements, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (EnumerableSorter_1_tC7A6BA5636DB2028E64A6A8150BE0C33E308DBF0*, MarkToMarkAdjustmentRecordU5BU5D_tD0484B2268EBA1947BBA50456596875426ED9CDB*, int32_t, const RuntimeMethod*))EnumerableSorter_1_Sort_mD73192C61431355F9B7CEBBF1BD9BAA4615D95E8_gshared)(__this, ___0_elements, ___1_count, method);
}
inline void Buffer_1__ctor_m9178E0FB078F890A98854B06AF9C08C14061F4AC (Buffer_1_tCA1933430719B4829D9E8C1DB02C579B9C68E7CD* __this, RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (Buffer_1_tCA1933430719B4829D9E8C1DB02C579B9C68E7CD*, RuntimeObject*, const RuntimeMethod*))Buffer_1__ctor_m9178E0FB078F890A98854B06AF9C08C14061F4AC_gshared)(__this, ___0_source, method);
}
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* EnumerableSorter_1_Sort_m0B1E1BD2E50D9C85A518873DD8F2D3109DDB872C (EnumerableSorter_1_t4439350BEBB5B5B9E8D43BBDBB271F1DC472270B* __this, MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* ___0_elements, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (EnumerableSorter_1_t4439350BEBB5B5B9E8D43BBDBB271F1DC472270B*, MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061*, int32_t, const RuntimeMethod*))EnumerableSorter_1_Sort_m0B1E1BD2E50D9C85A518873DD8F2D3109DDB872C_gshared)(__this, ___0_elements, ___1_count, method);
}
inline void Buffer_1__ctor_m072DE84AEC969582EB5760D4835747F9DC0C02AF (Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59* __this, RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59*, RuntimeObject*, const RuntimeMethod*))Buffer_1__ctor_m072DE84AEC969582EB5760D4835747F9DC0C02AF_gshared)(__this, ___0_source, method);
}
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* EnumerableSorter_1_Sort_m8685D15BDC4342DFFAE8D12488D213864CFDC321 (EnumerableSorter_1_t9DF0BF2FF3A689EB41C9CE2B42D3A91F5776B3AD* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_elements, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (EnumerableSorter_1_t9DF0BF2FF3A689EB41C9CE2B42D3A91F5776B3AD*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, const RuntimeMethod*))EnumerableSorter_1_Sort_m8685D15BDC4342DFFAE8D12488D213864CFDC321_gshared)(__this, ___0_elements, ___1_count, method);
}
inline void Buffer_1__ctor_m55137EEF7AF9E0883A438776A066DA5520FFDE49 (Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697* __this, RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697*, RuntimeObject*, const RuntimeMethod*))Buffer_1__ctor_m55137EEF7AF9E0883A438776A066DA5520FFDE49_gshared)(__this, ___0_source, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SplineRange_get_Count_m71E1A150F7E1896F91C2CE285E2CB86473D675A4_inline (SplineRange_tCB51EBCFA5858BB48FEC33EF009AA4E0B75772B1* __this, const RuntimeMethod* method) ;
inline BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 SplineSlice_1_get_Item_m2C15FDA65345CC3F969F339B97892FD6C24BE237 (SplineSlice_1_t11281F34A00C6D5212DE9E4D85BED17D2705BB32* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 (*) (SplineSlice_1_t11281F34A00C6D5212DE9E4D85BED17D2705BB32*, int32_t, const RuntimeMethod*))SplineSlice_1_get_Item_m2C15FDA65345CC3F969F339B97892FD6C24BE237_gshared)(__this, ___0_index, method);
}
inline void KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950 (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared)(__this, ___0_key, ___1_value, method);
}
inline void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_gshared)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, ___0_key, ___1_value, method);
}
inline int32_t SplineData_1_get_Count_mE8FD1023A49410263923F7750AA1BA94E9E95853 (SplineData_1_tF29E811708B706899A292A38A9FFA70C7F10141C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SplineData_1_tF29E811708B706899A292A38A9FFA70C7F10141C*, const RuntimeMethod*))SplineData_1_get_Count_mE8FD1023A49410263923F7750AA1BA94E9E95853_gshared)(__this, method);
}
inline DataPoint_1_tC38A0A55D491338BA0D06FDD08D22F84E99773CE List_1_get_Item_m562CD6C420F361C80C35FF6A0A932627ACB7B36F (List_1_t541EE8DDCC1D53F6905C8DBD81D9127781986CA3* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  DataPoint_1_tC38A0A55D491338BA0D06FDD08D22F84E99773CE (*) (List_1_t541EE8DDCC1D53F6905C8DBD81D9127781986CA3*, int32_t, const RuntimeMethod*))List_1_get_Item_m562CD6C420F361C80C35FF6A0A932627ACB7B36F_gshared)(__this, ___0_index, method);
}
inline int32_t SplineData_1_get_Count_m79BA6F8A3AF83731A0B42186FF291721DD5E4B44 (SplineData_1_t8108212EF9C2518D2EC261D68CDCE4DC31B6D1D7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SplineData_1_t8108212EF9C2518D2EC261D68CDCE4DC31B6D1D7*, const RuntimeMethod*))SplineData_1_get_Count_m79BA6F8A3AF83731A0B42186FF291721DD5E4B44_gshared)(__this, method);
}
inline DataPoint_1_tD1BFCB1B6A9F7919FCA0852C613D2B338AE88758 List_1_get_Item_mF0989BF058FF6CB5979F305BB12B39B88DF87E75 (List_1_tD9872A844B68161ADA39834AF99EB065DB91B8E3* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  DataPoint_1_tD1BFCB1B6A9F7919FCA0852C613D2B338AE88758 (*) (List_1_tD9872A844B68161ADA39834AF99EB065DB91B8E3*, int32_t, const RuntimeMethod*))List_1_get_Item_mF0989BF058FF6CB5979F305BB12B39B88DF87E75_gshared)(__this, ___0_index, method);
}
inline int32_t SplineData_1_get_Count_m9CA59F1EE706A934FF03BAD2322530CEF5811E10 (SplineData_1_t76C1101E75006280CD34A238E2294898514C06A6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SplineData_1_t76C1101E75006280CD34A238E2294898514C06A6*, const RuntimeMethod*))SplineData_1_get_Count_m9CA59F1EE706A934FF03BAD2322530CEF5811E10_gshared)(__this, method);
}
inline DataPoint_1_t6B7B80D91DA21439876F6D0784049FBEDDB60761 List_1_get_Item_m535A9F0D144518B454D91B40D9753FF90B752B01 (List_1_t9D22296249BE15200FF3C85F0ECC939FB09F55EA* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  DataPoint_1_t6B7B80D91DA21439876F6D0784049FBEDDB60761 (*) (List_1_t9D22296249BE15200FF3C85F0ECC939FB09F55EA*, int32_t, const RuntimeMethod*))List_1_get_Item_m535A9F0D144518B454D91B40D9753FF90B752B01_gshared)(__this, ___0_index, method);
}
inline int32_t SplineData_1_get_Count_m8EED641C2214A2987EF1836D5F287071C67A38C7 (SplineData_1_t5E765EAB32A437A18736ABFCD420E397DC3E49DD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SplineData_1_t5E765EAB32A437A18736ABFCD420E397DC3E49DD*, const RuntimeMethod*))SplineData_1_get_Count_m8EED641C2214A2987EF1836D5F287071C67A38C7_gshared)(__this, method);
}
inline DataPoint_1_t3259A8738D178774B1BF86D6B638F3A10EEC06F1 List_1_get_Item_mDA20EFC26F62D2BDE4DAF5ADABA9912DFD8C873F (List_1_t20C832540BA4E58AD237892E38A73E53966C5115* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  DataPoint_1_t3259A8738D178774B1BF86D6B638F3A10EEC06F1 (*) (List_1_t20C832540BA4E58AD237892E38A73E53966C5115*, int32_t, const RuntimeMethod*))List_1_get_Item_mDA20EFC26F62D2BDE4DAF5ADABA9912DFD8C873F_gshared)(__this, ___0_index, method);
}
inline void U3CGetEnumeratorU3Ed__7_U3CU3Em__Finally1_mED78C5E5996270A37EEAAC66923DF3E20AE5482D (U3CGetEnumeratorU3Ed__7_t810581FDA129E29DFDF7A45244DCF67D0B085FC6* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CGetEnumeratorU3Ed__7_t810581FDA129E29DFDF7A45244DCF67D0B085FC6*, const RuntimeMethod*))U3CGetEnumeratorU3Ed__7_U3CU3Em__Finally1_mED78C5E5996270A37EEAAC66923DF3E20AE5482D_gshared)(__this, method);
}
inline void U3CGetEnumeratorU3Ed__7_System_IDisposable_Dispose_mCEB34406B0F792844FCA69948EB262C85BFA8487 (U3CGetEnumeratorU3Ed__7_t810581FDA129E29DFDF7A45244DCF67D0B085FC6* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CGetEnumeratorU3Ed__7_t810581FDA129E29DFDF7A45244DCF67D0B085FC6*, const RuntimeMethod*))U3CGetEnumeratorU3Ed__7_System_IDisposable_Dispose_mCEB34406B0F792844FCA69948EB262C85BFA8487_gshared)(__this, method);
}
inline RuntimeObject* SplineSlice_1_GetEnumerator_mB7592E66C6CC33627ABD03647033C71321671C2D (SplineSlice_1_t11281F34A00C6D5212DE9E4D85BED17D2705BB32* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (SplineSlice_1_t11281F34A00C6D5212DE9E4D85BED17D2705BB32*, const RuntimeMethod*))SplineSlice_1_GetEnumerator_mB7592E66C6CC33627ABD03647033C71321671C2D_gshared)(__this, method);
}
inline void U3CGetEnumeratorU3Ed__7_U3CU3Em__Finally1_mCB6E085EAFBDF03FC9E434DE407A140EFFB67283 (U3CGetEnumeratorU3Ed__7_tC36163D2BC0734D81ABC8A351F1FB7F21DBC2740* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CGetEnumeratorU3Ed__7_tC36163D2BC0734D81ABC8A351F1FB7F21DBC2740*, const RuntimeMethod*))U3CGetEnumeratorU3Ed__7_U3CU3Em__Finally1_mCB6E085EAFBDF03FC9E434DE407A140EFFB67283_gshared)(__this, method);
}
inline void U3CGetEnumeratorU3Ed__7_System_IDisposable_Dispose_m50822703134D56C09AE8B07C37FCBD5CF6E3465D (U3CGetEnumeratorU3Ed__7_tC36163D2BC0734D81ABC8A351F1FB7F21DBC2740* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CGetEnumeratorU3Ed__7_tC36163D2BC0734D81ABC8A351F1FB7F21DBC2740*, const RuntimeMethod*))U3CGetEnumeratorU3Ed__7_System_IDisposable_Dispose_m50822703134D56C09AE8B07C37FCBD5CF6E3465D_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
inline void AsyncUniTaskMethodBuilder_1_SetException_mAEE718F60708F1A917C5379F94447C8090707CE7_inline (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_mAEE718F60708F1A917C5379F94447C8090707CE7_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_inline (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* __this, int64_t ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, int64_t, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_gshared_inline)(__this, ___0_result, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_inline (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_inline (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* __this, float ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, float, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_gshared_inline)(__this, ___0_result, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_inline (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_inline (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* __this, double ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, double, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_gshared_inline)(__this, ___0_result, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Decimal_op_LessThan_mEA888B7F0853F7700602254AAD4AD058C30552F5 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_d1, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___1_d2, const RuntimeMethod* method) ;
inline void AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_inline (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_inline (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_gshared_inline)(__this, ___0_result, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___0_status, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopHelper_AddContinuation_m5B8F03E45A820D91B17CFA56AA93E7444BEC17E0 (int32_t ___0_timing, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_continuation, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAwaitAsyncU3Ed__2_1__ctor_mE2F37CC531EED7708427833FFC31AF2520637555_gshared (U3CFirstAwaitAsyncU3Ed__2_1_t0335CFF4BC1145B5DD127FA1D13432DEA6A0CE03* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAwaitAsyncU3Ed__2_1_MoveNext_mF39D876B332E77B13C356528D7ADC31B2425F9EC_gshared (U3CFirstAwaitAsyncU3Ed__2_1_t0335CFF4BC1145B5DD127FA1D13432DEA6A0CE03* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
	const Il2CppFullySharedGenericAny L_22 = L_9;
	const Il2CppFullySharedGenericAny L_58 = L_9;
	const Il2CppFullySharedGenericAny L_61 = L_9;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
	memset(V_1, 0, SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CFirstAwaitAsyncU3Ed__2_1_t0335CFF4BC1145B5DD127FA1D13432DEA6A0CE03* V_5 = NULL;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t* V_13 = NULL;
	int32_t V_14 = 0;
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
			goto IL_021a_1;
		}

IL_001a_1:
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
				goto IL_00b7_2;
			}

IL_004e_2:
			{
				goto IL_0151_2;
			}

IL_0053_2:
			{
				goto IL_0109_2;
			}

IL_0059_2:
			{
				RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_9, SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
				Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C* L_10 = *(Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
				NullCheck(L_10);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_12;
				L_12 = InvokerFuncInvoker1< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_11: *(void**)L_11));
				V_4 = L_12;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_13;
				L_13 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_3 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_3), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00d3_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_15);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_16 = V_3;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_16);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CFirstAwaitAsyncU3Ed__2_1_t0335CFF4BC1145B5DD127FA1D13432DEA6A0CE03**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_02db;
			}

IL_00b7_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_17 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
				V_3 = L_17;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_18 = (-1);
				V_0 = L_18;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_18);
			}

IL_00d3_2:
			{
				bool L_19;
				L_19 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_19);
				bool L_20 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
				V_2 = L_20;
				bool L_21 = V_2;
				if (!L_21)
				{
					goto IL_00fc_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_22, SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
				goto IL_01ac_2;
			}

IL_00fc_2:
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)))), SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
			}

IL_0109_2:
			{
				RuntimeObject* L_23 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
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
					goto IL_016e_2;
				}
			}
			{
				int32_t L_27 = 1;
				V_0 = L_27;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_27);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28 = V_7;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_28);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CFirstAwaitAsyncU3Ed__2_1_t0335CFF4BC1145B5DD127FA1D13432DEA6A0CE03**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_7), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_02db;
			}

IL_0151_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
				V_7 = L_29;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_30 = (-1);
				V_0 = L_30;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_30);
			}

IL_016e_2:
			{
				bool L_31;
				L_31 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_31);
				bool L_32 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12));
				V_6 = L_32;
				bool L_33 = V_6;
				if (L_33)
				{
					goto IL_0059_2;
				}
			}
			{
				bool L_34 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				V_8 = L_34;
				bool L_35 = V_8;
				if (!L_35)
				{
					goto IL_01a5_2;
				}
			}
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
				goto IL_01ac_2;
			}

IL_01a5_2:
			{
				Exception_t* L_36;
				L_36 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, method);
			}

IL_01ac_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), 1);
				goto IL_01c1_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01b5_1;
			}
			throw e;
		}

CATCH_01b5_1:
		{
			RuntimeObject* L_37 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_9 = L_37;
			RuntimeObject* L_38 = V_9;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_38);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_01c1_1;
		}

IL_01c1_1:
		{
			RuntimeObject* L_39 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_39) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_40 = V_10;
			if (!L_40)
			{
				goto IL_0240_1;
			}
		}
		{
			RuntimeObject* L_41 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			NullCheck((RuntimeObject*)L_41);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_42;
			L_42 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
			V_12 = L_42;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_43;
			L_43 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_43;
			bool L_44;
			L_44 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_44)
			{
				goto IL_0237_1;
			}
		}
		{
			int32_t L_45 = 2;
			V_0 = L_45;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_45);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_46 = V_11;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14), L_46);
			V_5 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CFirstAwaitAsyncU3Ed__2_1_t0335CFF4BC1145B5DD127FA1D13432DEA6A0CE03**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_11), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
			goto IL_02db;
		}

IL_021a_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
			V_11 = L_47;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_48 = (-1);
			V_0 = L_48;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_48);
		}

IL_0237_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_0240_1:
		{
			RuntimeObject* L_49 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_9 = L_49;
			RuntimeObject* L_50 = V_9;
			if (!L_50)
			{
				goto IL_026a_1;
			}
		}
		{
			RuntimeObject* L_51 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_51, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_52 = V_13;
			if (L_52)
			{
				goto IL_025d_1;
			}
		}
		{
			RuntimeObject* L_53 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_53, method);
		}

IL_025d_1:
		{
			Exception_t* L_54 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_55;
			L_55 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_54, NULL);
			NullCheck(L_55);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_55, NULL);
		}

IL_026a_1:
		{
			int32_t L_56 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			V_14 = L_56;
			int32_t L_57 = V_14;
			if ((((int32_t)L_57) == ((int32_t)1)))
			{
				goto IL_0279_1;
			}
		}
		{
			goto IL_0282_1;
		}

IL_0279_1:
		{
			il2cpp_codegen_memcpy(L_58, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
			il2cpp_codegen_memcpy(V_1, L_58, SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
			goto IL_02bf;
		}

IL_0282_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
			goto IL_02bf;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_029e;
		}
		throw e;
	}

CATCH_029e:
	{
		Exception_t* L_59 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_13 = L_59;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		Exception_t* L_60 = V_13;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_60, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_02db;
	}

IL_02bf:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_61, V_1, SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_61: *(void**)L_61));
	}

IL_02db:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAwaitAsyncU3Ed__2_1_SetStateMachine_m3719BF86E2A45D69F38681458DAFC2FAF32380CB_gshared (U3CFirstAwaitAsyncU3Ed__2_1_t0335CFF4BC1145B5DD127FA1D13432DEA6A0CE03* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAwaitWithCancellationAsyncU3Ed__3_1__ctor_mA869972B6D9C397C040C800AC3CFE67FDB2D99BC_gshared (U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_tF176CAA5FE54CFE4E1BABD507A0631D3E6AC89DC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_MoveNext_mC9F9C7B3F3FA1D703FEF99A643098753C384EED2_gshared (U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_tF176CAA5FE54CFE4E1BABD507A0631D3E6AC89DC* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
	const Il2CppFullySharedGenericAny L_23 = L_9;
	const Il2CppFullySharedGenericAny L_59 = L_9;
	const Il2CppFullySharedGenericAny L_62 = L_9;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
	memset(V_1, 0, SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_tF176CAA5FE54CFE4E1BABD507A0631D3E6AC89DC* V_5 = NULL;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t* V_13 = NULL;
	int32_t V_14 = 0;
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
			goto IL_0220_1;
		}

IL_001a_1:
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
				goto IL_00bd_2;
			}

IL_004e_2:
			{
				goto IL_0157_2;
			}

IL_0053_2:
			{
				goto IL_010f_2;
			}

IL_0059_2:
			{
				RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_9, SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
				Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814* L_10 = *(Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
				NullCheck(L_10);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_13;
				L_13 = InvokerFuncInvoker2< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_11: *(void**)L_11), L_12);
				V_4 = L_13;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_14;
				L_14 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_3 = L_14;
				bool L_15;
				L_15 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_3), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_00d9_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_16);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_17 = V_3;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_17);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_tF176CAA5FE54CFE4E1BABD507A0631D3E6AC89DC**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_02e1;
			}

IL_00bd_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_18 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
				V_3 = L_18;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_19 = (-1);
				V_0 = L_19;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_19);
			}

IL_00d9_2:
			{
				bool L_20;
				L_20 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_20);
				bool L_21 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
				V_2 = L_21;
				bool L_22 = V_2;
				if (!L_22)
				{
					goto IL_0102_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_23, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_23, SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
				goto IL_01b2_2;
			}

IL_0102_2:
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)))), SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
			}

IL_010f_2:
			{
				RuntimeObject* L_24 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
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
					goto IL_0174_2;
				}
			}
			{
				int32_t L_28 = 1;
				V_0 = L_28;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_28);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29 = V_7;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_29);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_tF176CAA5FE54CFE4E1BABD507A0631D3E6AC89DC**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_7), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_02e1;
			}

IL_0157_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_30 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
				V_7 = L_30;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_31 = (-1);
				V_0 = L_31;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_31);
			}

IL_0174_2:
			{
				bool L_32;
				L_32 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_32);
				bool L_33 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12));
				V_6 = L_33;
				bool L_34 = V_6;
				if (L_34)
				{
					goto IL_0059_2;
				}
			}
			{
				bool L_35 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				V_8 = L_35;
				bool L_36 = V_8;
				if (!L_36)
				{
					goto IL_01ab_2;
				}
			}
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
				goto IL_01b2_2;
			}

IL_01ab_2:
			{
				Exception_t* L_37;
				L_37 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, method);
			}

IL_01b2_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), 1);
				goto IL_01c7_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01bb_1;
			}
			throw e;
		}

CATCH_01bb_1:
		{
			RuntimeObject* L_38 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_9 = L_38;
			RuntimeObject* L_39 = V_9;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_39);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_01c7_1;
		}

IL_01c7_1:
		{
			RuntimeObject* L_40 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_40) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_41 = V_10;
			if (!L_41)
			{
				goto IL_0246_1;
			}
		}
		{
			RuntimeObject* L_42 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
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
				goto IL_023d_1;
			}
		}
		{
			int32_t L_46 = 2;
			V_0 = L_46;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_46);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47 = V_11;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14), L_47);
			V_5 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_tF176CAA5FE54CFE4E1BABD507A0631D3E6AC89DC**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_11), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
			goto IL_02e1;
		}

IL_0220_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_48 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
			V_11 = L_48;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_49 = (-1);
			V_0 = L_49;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_49);
		}

IL_023d_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_0246_1:
		{
			RuntimeObject* L_50 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_9 = L_50;
			RuntimeObject* L_51 = V_9;
			if (!L_51)
			{
				goto IL_0270_1;
			}
		}
		{
			RuntimeObject* L_52 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_52, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_53 = V_13;
			if (L_53)
			{
				goto IL_0263_1;
			}
		}
		{
			RuntimeObject* L_54 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_54, method);
		}

IL_0263_1:
		{
			Exception_t* L_55 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_56;
			L_56 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_55, NULL);
			NullCheck(L_56);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_56, NULL);
		}

IL_0270_1:
		{
			int32_t L_57 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			V_14 = L_57;
			int32_t L_58 = V_14;
			if ((((int32_t)L_58) == ((int32_t)1)))
			{
				goto IL_027f_1;
			}
		}
		{
			goto IL_0288_1;
		}

IL_027f_1:
		{
			il2cpp_codegen_memcpy(L_59, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
			il2cpp_codegen_memcpy(V_1, L_59, SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
			goto IL_02c5;
		}

IL_0288_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
			goto IL_02c5;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02a4;
		}
		throw e;
	}

CATCH_02a4:
	{
		Exception_t* L_60 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_13 = L_60;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		Exception_t* L_61 = V_13;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_61, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_02e1;
	}

IL_02c5:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_62, V_1, SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_62: *(void**)L_62));
	}

IL_02e1:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_SetStateMachine_m16FFEE10989F2110AEA021F639FF419D2617FAAA_gshared (U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_tF176CAA5FE54CFE4E1BABD507A0631D3E6AC89DC* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAsyncU3Ed__0_1__ctor_m4C28CAF52CA5B3953851A2DA9F2ED4FBBA929887_gshared (U3CForEachAsyncU3Ed__0_1_t9582606A1F1A2D59AA951BBAAAC83A1CC5679B2E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAsyncU3Ed__0_1_MoveNext_m4F052A83E4B4A41B35BEE828958E3A7A4E290D56_gshared (U3CForEachAsyncU3Ed__0_1_t9582606A1F1A2D59AA951BBAAAC83A1CC5679B2E* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t234717223261E6827FBAB92FA5CC538705A41F3A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_t234717223261E6827FBAB92FA5CC538705A41F3A);
	int32_t V_0 = 0;
	bool V_1 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CForEachAsyncU3Ed__0_1_t9582606A1F1A2D59AA951BBAAAC83A1CC5679B2E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	bool V_6 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_8;
	memset((&V_8), 0, sizeof(V_8));
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
			goto IL_0146_1;
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
				goto IL_00a8_2;
			}

IL_0047_2:
			{
				goto IL_0063_2;
			}

IL_004a_2:
			{
				Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_7 = __this->___action;
				RuntimeObject* L_8 = __this->___U3CeU3E5__1;
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				NullCheck(L_7);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_9: *(void**)L_9));
			}

IL_0063_2:
			{
				RuntimeObject* L_10 = __this->___U3CeU3E5__1;
				NullCheck(L_10);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_11;
				L_11 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10);
				V_3 = L_11;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_12;
				L_12 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_3), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_2 = L_12;
				bool L_13;
				L_13 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_2), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_00c4_2;
				}
			}
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->___U3CU3E1__state = L_14;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_15 = V_2;
				__this->___U3CU3Eu__1 = L_15;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_16 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CForEachAsyncU3Ed__0_1_t9582606A1F1A2D59AA951BBAAAC83A1CC5679B2E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_16, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_01e2;
			}

IL_00a8_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_17 = __this->___U3CU3Eu__1;
				V_2 = L_17;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_18 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_18, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state = L_19;
			}

IL_00c4_2:
			{
				bool L_20;
				L_20 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_2), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__4 = L_20;
				bool L_21 = __this->___U3CU3Es__4;
				V_1 = L_21;
				bool L_22 = V_1;
				if (L_22)
				{
					goto IL_004a_2;
				}
			}
			{
				goto IL_00ed_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00e1_1;
			}
			throw e;
		}

CATCH_00e1_1:
		{
			RuntimeObject* L_23 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_5 = L_23;
			RuntimeObject* L_24 = V_5;
			__this->___U3CU3Es__2 = L_24;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)L_24);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_00ed_1;
		}

IL_00ed_1:
		{
			RuntimeObject* L_25 = __this->___U3CeU3E5__1;
			V_6 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_25) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_26 = V_6;
			if (!L_26)
			{
				goto IL_016c_1;
			}
		}
		{
			RuntimeObject* L_27 = __this->___U3CeU3E5__1;
			NullCheck((RuntimeObject*)L_27);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_28;
			L_28 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
			V_8 = L_28;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_29;
			L_29 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_8), NULL);
			V_7 = L_29;
			bool L_30;
			L_30 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_7), NULL);
			if (L_30)
			{
				goto IL_0163_1;
			}
		}
		{
			int32_t L_31 = 1;
			V_0 = L_31;
			__this->___U3CU3E1__state = L_31;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_32 = V_7;
			__this->___U3CU3Eu__2 = L_32;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_33 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CForEachAsyncU3Ed__0_1_t9582606A1F1A2D59AA951BBAAAC83A1CC5679B2E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_33, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_01e2;
		}

IL_0146_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_34 = __this->___U3CU3Eu__2;
			V_7 = L_34;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_35 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_35, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_36 = (-1);
			V_0 = L_36;
			__this->___U3CU3E1__state = L_36;
		}

IL_0163_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_7), NULL);
		}

IL_016c_1:
		{
			RuntimeObject* L_37 = __this->___U3CU3Es__2;
			V_5 = L_37;
			RuntimeObject* L_38 = V_5;
			if (!L_38)
			{
				goto IL_0196_1;
			}
		}
		{
			RuntimeObject* L_39 = V_5;
			V_9 = ((Exception_t*)IsInstClass((RuntimeObject*)L_39, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_40 = V_9;
			if (L_40)
			{
				goto IL_0189_1;
			}
		}
		{
			RuntimeObject* L_41 = V_5;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_41, method);
		}

IL_0189_1:
		{
			Exception_t* L_42 = V_9;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_43;
			L_43 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_42, NULL);
			NullCheck(L_43);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_43, NULL);
		}

IL_0196_1:
		{
			int32_t L_44 = __this->___U3CU3Es__3;
			__this->___U3CU3Es__2 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)NULL);
			goto IL_01c7;
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
		Exception_t* L_45 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_9 = L_45;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__1 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_46 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_47 = V_9;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_46, L_47, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_01e2;
	}

IL_01c7:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__1 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_48 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_48, NULL);
	}

IL_01e2:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAsyncU3Ed__0_1_SetStateMachine_m3FF806591B241DDE83FBBED156DF06FFA9993717_gshared (U3CForEachAsyncU3Ed__0_1_t9582606A1F1A2D59AA951BBAAAC83A1CC5679B2E* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAsyncU3Ed__1_1__ctor_m723F2F8D9736565EFF1BF38D8C4A2245A1A15C9A_gshared (U3CForEachAsyncU3Ed__1_1_t10C921BC3C792263B1FFEF9A54C79CD1EE8F4FD4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAsyncU3Ed__1_1_MoveNext_m7E8D05B5E6D8E93C27236422226ADCC0A52E6075_gshared (U3CForEachAsyncU3Ed__1_1_t10C921BC3C792263B1FFEF9A54C79CD1EE8F4FD4* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_tC851374995ABCEBCC7D418F2FC6D05B524D4B6EA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_tC851374995ABCEBCC7D418F2FC6D05B524D4B6EA);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CForEachAsyncU3Ed__1_1_t10C921BC3C792263B1FFEF9A54C79CD1EE8F4FD4* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t* V_10 = NULL;
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
			goto IL_015f_1;
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
				goto IL_00c1_2;
			}

IL_0047_2:
			{
				__this->___U3CindexU3E5__4 = 0;
				goto IL_007b_2;
			}

IL_0051_2:
			{
				Action_2_t983A40F124DCF06E5CEB4DE585CE7204D7F7E25C* L_7 = __this->___action;
				RuntimeObject* L_8 = __this->___U3CeU3E5__1;
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				int32_t L_10 = __this->___U3CindexU3E5__4;
				V_1 = L_10;
				int32_t L_11 = V_1;
				if (((int64_t)L_11 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_11 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CindexU3E5__4 = ((int32_t)il2cpp_codegen_add(L_11, 1));
				int32_t L_12 = V_1;
				NullCheck(L_7);
				InvokerActionInvoker2< Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_9: *(void**)L_9), L_12);
			}

IL_007b_2:
			{
				RuntimeObject* L_13 = __this->___U3CeU3E5__1;
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
					goto IL_00dd_2;
				}
			}
			{
				int32_t L_17 = 0;
				V_0 = L_17;
				__this->___U3CU3E1__state = L_17;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_18 = V_3;
				__this->___U3CU3Eu__1 = L_18;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_19 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CForEachAsyncU3Ed__1_1_t10C921BC3C792263B1FFEF9A54C79CD1EE8F4FD4**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_19, (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_01fb;
			}

IL_00c1_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_20 = __this->___U3CU3Eu__1;
				V_3 = L_20;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_21 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_21, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_22 = (-1);
				V_0 = L_22;
				__this->___U3CU3E1__state = L_22;
			}

IL_00dd_2:
			{
				bool L_23;
				L_23 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5 = L_23;
				bool L_24 = __this->___U3CU3Es__5;
				V_2 = L_24;
				bool L_25 = V_2;
				if (L_25)
				{
					goto IL_0051_2;
				}
			}
			{
				goto IL_0106_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00fa_1;
			}
			throw e;
		}

CATCH_00fa_1:
		{
			RuntimeObject* L_26 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_6 = L_26;
			RuntimeObject* L_27 = V_6;
			__this->___U3CU3Es__2 = L_27;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)L_27);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0106_1;
		}

IL_0106_1:
		{
			RuntimeObject* L_28 = __this->___U3CeU3E5__1;
			V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_28) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_29 = V_7;
			if (!L_29)
			{
				goto IL_0185_1;
			}
		}
		{
			RuntimeObject* L_30 = __this->___U3CeU3E5__1;
			NullCheck((RuntimeObject*)L_30);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_31;
			L_31 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_30);
			V_9 = L_31;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_32;
			L_32 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_9), NULL);
			V_8 = L_32;
			bool L_33;
			L_33 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_8), NULL);
			if (L_33)
			{
				goto IL_017c_1;
			}
		}
		{
			int32_t L_34 = 1;
			V_0 = L_34;
			__this->___U3CU3E1__state = L_34;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_35 = V_8;
			__this->___U3CU3Eu__2 = L_35;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
			V_5 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_36 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CForEachAsyncU3Ed__1_1_t10C921BC3C792263B1FFEF9A54C79CD1EE8F4FD4**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_36, (&V_8), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_01fb;
		}

IL_015f_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_37 = __this->___U3CU3Eu__2;
			V_8 = L_37;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_38 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_38, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_39 = (-1);
			V_0 = L_39;
			__this->___U3CU3E1__state = L_39;
		}

IL_017c_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_8), NULL);
		}

IL_0185_1:
		{
			RuntimeObject* L_40 = __this->___U3CU3Es__2;
			V_6 = L_40;
			RuntimeObject* L_41 = V_6;
			if (!L_41)
			{
				goto IL_01af_1;
			}
		}
		{
			RuntimeObject* L_42 = V_6;
			V_10 = ((Exception_t*)IsInstClass((RuntimeObject*)L_42, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_43 = V_10;
			if (L_43)
			{
				goto IL_01a2_1;
			}
		}
		{
			RuntimeObject* L_44 = V_6;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
		}

IL_01a2_1:
		{
			Exception_t* L_45 = V_10;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_46;
			L_46 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_45, NULL);
			NullCheck(L_46);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_46, NULL);
		}

IL_01af_1:
		{
			int32_t L_47 = __this->___U3CU3Es__3;
			__this->___U3CU3Es__2 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)NULL);
			goto IL_01e0;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01bf;
		}
		throw e;
	}

CATCH_01bf:
	{
		Exception_t* L_48 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_10 = L_48;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__1 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_49 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_50 = V_10;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_49, L_50, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_01fb;
	}

IL_01e0:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__1 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_51 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_51, NULL);
	}

IL_01fb:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAsyncU3Ed__1_1_SetStateMachine_mE9AB1183647B36CF22D576F5D7F6A7A619700F50_gshared (U3CForEachAsyncU3Ed__1_1_t10C921BC3C792263B1FFEF9A54C79CD1EE8F4FD4* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitAsyncU3Ed__2_1__ctor_m15851E5BF7B6D84F4F5309DAC9E0C19D25D34112_gshared (U3CForEachAwaitAsyncU3Ed__2_1_t504B931A70EC737437DAD27DD1DEA64C25146E8B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitAsyncU3Ed__2_1_MoveNext_mDAF92706194A6D06465D32775EE65629CBD1BDB5_gshared (U3CForEachAwaitAsyncU3Ed__2_1_t504B931A70EC737437DAD27DD1DEA64C25146E8B* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_tAE86725C28F4FF13E2996CFCF50CD81B341B6904 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_tAE86725C28F4FF13E2996CFCF50CD81B341B6904);
	int32_t V_0 = 0;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CForEachAwaitAsyncU3Ed__2_1_t504B931A70EC737437DAD27DD1DEA64C25146E8B* V_3 = NULL;
	bool V_4 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	bool V_8 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t* V_10 = NULL;
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
			goto IL_01b1_1;
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
				goto IL_00a6_2;
			}

IL_004e_2:
			{
				goto IL_0112_2;
			}

IL_0053_2:
			{
				goto IL_00cb_2;
			}

IL_0056_2:
			{
				Func_2_tB9800595B3251D2492E40667A6C05061784D48FB* L_8 = __this->___action;
				RuntimeObject* L_9 = __this->___U3CeU3E5__1;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_11;
				L_11 = InvokerFuncInvoker1< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
				V_2 = L_11;
				il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_12;
				L_12 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_2), NULL);
				V_1 = L_12;
				bool L_13;
				L_13 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_1), NULL);
				if (L_13)
				{
					goto IL_00c2_2;
				}
			}
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->___U3CU3E1__state = L_14;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_15 = V_1;
				__this->___U3CU3Eu__1 = L_15;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_3 = __this;
				AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_16 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CForEachAwaitAsyncU3Ed__2_1_t504B931A70EC737437DAD27DD1DEA64C25146E8B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_16, (&V_1), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_024d;
			}

IL_00a6_2:
			{
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_17 = __this->___U3CU3Eu__1;
				V_1 = L_17;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_18 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_18, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state = L_19;
			}

IL_00c2_2:
			{
				Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_1), NULL);
			}

IL_00cb_2:
			{
				RuntimeObject* L_20 = __this->___U3CeU3E5__1;
				NullCheck(L_20);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_21;
				L_21 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_20);
				V_6 = L_21;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_22;
				L_22 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_6), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_5 = L_22;
				bool L_23;
				L_23 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_5), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_23)
				{
					goto IL_012f_2;
				}
			}
			{
				int32_t L_24 = 1;
				V_0 = L_24;
				__this->___U3CU3E1__state = L_24;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_25 = V_5;
				__this->___U3CU3Eu__2 = L_25;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_3 = __this;
				AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_26 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CForEachAwaitAsyncU3Ed__2_1_t504B931A70EC737437DAD27DD1DEA64C25146E8B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_26, (&V_5), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_024d;
			}

IL_0112_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_27 = __this->___U3CU3Eu__2;
				V_5 = L_27;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_28 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_28, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_29 = (-1);
				V_0 = L_29;
				__this->___U3CU3E1__state = L_29;
			}

IL_012f_2:
			{
				bool L_30;
				L_30 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_5), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__4 = L_30;
				bool L_31 = __this->___U3CU3Es__4;
				V_4 = L_31;
				bool L_32 = V_4;
				if (L_32)
				{
					goto IL_0056_2;
				}
			}
			{
				goto IL_015a_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_014e_1;
			}
			throw e;
		}

CATCH_014e_1:
		{
			RuntimeObject* L_33 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_7 = L_33;
			RuntimeObject* L_34 = V_7;
			__this->___U3CU3Es__2 = L_34;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)L_34);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_015a_1;
		}

IL_015a_1:
		{
			RuntimeObject* L_35 = __this->___U3CeU3E5__1;
			V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_35) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_36 = V_8;
			if (!L_36)
			{
				goto IL_01d7_1;
			}
		}
		{
			RuntimeObject* L_37 = __this->___U3CeU3E5__1;
			NullCheck((RuntimeObject*)L_37);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_38;
			L_38 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_37);
			V_2 = L_38;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39;
			L_39 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_2), NULL);
			V_9 = L_39;
			bool L_40;
			L_40 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_9), NULL);
			if (L_40)
			{
				goto IL_01ce_1;
			}
		}
		{
			int32_t L_41 = 2;
			V_0 = L_41;
			__this->___U3CU3E1__state = L_41;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_42 = V_9;
			__this->___U3CU3Eu__1 = L_42;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_3 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_43 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CForEachAwaitAsyncU3Ed__2_1_t504B931A70EC737437DAD27DD1DEA64C25146E8B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_43, (&V_9), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			goto IL_024d;
		}

IL_01b1_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_44 = __this->___U3CU3Eu__1;
			V_9 = L_44;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_45 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_45, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_46 = (-1);
			V_0 = L_46;
			__this->___U3CU3E1__state = L_46;
		}

IL_01ce_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_9), NULL);
		}

IL_01d7_1:
		{
			RuntimeObject* L_47 = __this->___U3CU3Es__2;
			V_7 = L_47;
			RuntimeObject* L_48 = V_7;
			if (!L_48)
			{
				goto IL_0201_1;
			}
		}
		{
			RuntimeObject* L_49 = V_7;
			V_10 = ((Exception_t*)IsInstClass((RuntimeObject*)L_49, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_50 = V_10;
			if (L_50)
			{
				goto IL_01f4_1;
			}
		}
		{
			RuntimeObject* L_51 = V_7;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_51, method);
		}

IL_01f4_1:
		{
			Exception_t* L_52 = V_10;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_53;
			L_53 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_52, NULL);
			NullCheck(L_53);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_53, NULL);
		}

IL_0201_1:
		{
			int32_t L_54 = __this->___U3CU3Es__3;
			__this->___U3CU3Es__2 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)NULL);
			goto IL_0232;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0211;
		}
		throw e;
	}

CATCH_0211:
	{
		Exception_t* L_55 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_10 = L_55;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__1 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_56 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_57 = V_10;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_56, L_57, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_024d;
	}

IL_0232:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__1 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_58 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_58, NULL);
	}

IL_024d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitAsyncU3Ed__2_1_SetStateMachine_m81EE029F263E3D1F306E3AA845BD666F381ABCF0_gshared (U3CForEachAwaitAsyncU3Ed__2_1_t504B931A70EC737437DAD27DD1DEA64C25146E8B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitAsyncU3Ed__3_1__ctor_m6D5037F470F97994CF8043CE64A38D005F484F48_gshared (U3CForEachAwaitAsyncU3Ed__3_1_t8871DBC78D8823939DE765EB161709598260AC6A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitAsyncU3Ed__3_1_MoveNext_m23E092D8579185BD69ABC39F82704B4264233F66_gshared (U3CForEachAwaitAsyncU3Ed__3_1_t8871DBC78D8823939DE765EB161709598260AC6A* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t085062A704A7812483DCB5FBC66E0BD9FAB7F21F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t085062A704A7812483DCB5FBC66E0BD9FAB7F21F);
	int32_t V_0 = 0;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CForEachAwaitAsyncU3Ed__3_1_t8871DBC78D8823939DE765EB161709598260AC6A* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
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
			goto IL_01cf_1;
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
				goto IL_00c2_2;
			}

IL_004e_2:
			{
				goto IL_012f_2;
			}

IL_0053_2:
			{
				__this->___U3CindexU3E5__4 = 0;
				goto IL_00e7_2;
			}

IL_0060_2:
			{
				Func_3_t132FDF1783142B71AC1D1F8BB2FF80D9FAC32BFC* L_8 = __this->___action;
				RuntimeObject* L_9 = __this->___U3CeU3E5__1;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				int32_t L_11 = __this->___U3CindexU3E5__4;
				V_2 = L_11;
				int32_t L_12 = V_2;
				if (((int64_t)L_12 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_12 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CindexU3E5__4 = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				NullCheck(L_8);
				UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_14;
				L_14 = InvokerFuncInvoker2< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10), L_13);
				V_3 = L_14;
				il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_15;
				L_15 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
				V_1 = L_15;
				bool L_16;
				L_16 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_1), NULL);
				if (L_16)
				{
					goto IL_00de_2;
				}
			}
			{
				int32_t L_17 = 0;
				V_0 = L_17;
				__this->___U3CU3E1__state = L_17;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_18 = V_1;
				__this->___U3CU3Eu__1 = L_18;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_19 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CForEachAwaitAsyncU3Ed__3_1_t8871DBC78D8823939DE765EB161709598260AC6A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_19, (&V_1), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_026b;
			}

IL_00c2_2:
			{
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_20 = __this->___U3CU3Eu__1;
				V_1 = L_20;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_21 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_21, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
				int32_t L_22 = (-1);
				V_0 = L_22;
				__this->___U3CU3E1__state = L_22;
			}

IL_00de_2:
			{
				Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_1), NULL);
			}

IL_00e7_2:
			{
				RuntimeObject* L_23 = __this->___U3CeU3E5__1;
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
					goto IL_014c_2;
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
				AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_29 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CForEachAwaitAsyncU3Ed__3_1_t8871DBC78D8823939DE765EB161709598260AC6A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_29, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_026b;
			}

IL_012f_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_30 = __this->___U3CU3Eu__2;
				V_6 = L_30;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_31 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_31, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_32 = (-1);
				V_0 = L_32;
				__this->___U3CU3E1__state = L_32;
			}

IL_014c_2:
			{
				bool L_33;
				L_33 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5 = L_33;
				bool L_34 = __this->___U3CU3Es__5;
				V_5 = L_34;
				bool L_35 = V_5;
				if (L_35)
				{
					goto IL_0060_2;
				}
			}
			{
				goto IL_0177_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_016b_1;
			}
			throw e;
		}

CATCH_016b_1:
		{
			RuntimeObject* L_36 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_8 = L_36;
			RuntimeObject* L_37 = V_8;
			__this->___U3CU3Es__2 = L_37;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)L_37);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0177_1;
		}

IL_0177_1:
		{
			RuntimeObject* L_38 = __this->___U3CeU3E5__1;
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_38) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_39 = V_9;
			if (!L_39)
			{
				goto IL_01f5_1;
			}
		}
		{
			RuntimeObject* L_40 = __this->___U3CeU3E5__1;
			NullCheck((RuntimeObject*)L_40);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_41;
			L_41 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_40);
			V_3 = L_41;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_42;
			L_42 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_10 = L_42;
			bool L_43;
			L_43 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_43)
			{
				goto IL_01ec_1;
			}
		}
		{
			int32_t L_44 = 2;
			V_0 = L_44;
			__this->___U3CU3E1__state = L_44;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_45 = V_10;
			__this->___U3CU3Eu__1 = L_45;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_46 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CForEachAwaitAsyncU3Ed__3_1_t8871DBC78D8823939DE765EB161709598260AC6A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_46, (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			goto IL_026b;
		}

IL_01cf_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47 = __this->___U3CU3Eu__1;
			V_10 = L_47;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_48 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_48, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_49 = (-1);
			V_0 = L_49;
			__this->___U3CU3E1__state = L_49;
		}

IL_01ec_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_01f5_1:
		{
			RuntimeObject* L_50 = __this->___U3CU3Es__2;
			V_8 = L_50;
			RuntimeObject* L_51 = V_8;
			if (!L_51)
			{
				goto IL_021f_1;
			}
		}
		{
			RuntimeObject* L_52 = V_8;
			V_11 = ((Exception_t*)IsInstClass((RuntimeObject*)L_52, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_53 = V_11;
			if (L_53)
			{
				goto IL_0212_1;
			}
		}
		{
			RuntimeObject* L_54 = V_8;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_54, method);
		}

IL_0212_1:
		{
			Exception_t* L_55 = V_11;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_56;
			L_56 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_55, NULL);
			NullCheck(L_56);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_56, NULL);
		}

IL_021f_1:
		{
			int32_t L_57 = __this->___U3CU3Es__3;
			__this->___U3CU3Es__2 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)NULL);
			goto IL_0250;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_022f;
		}
		throw e;
	}

CATCH_022f:
	{
		Exception_t* L_58 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_11 = L_58;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__1 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_59 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_60 = V_11;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_59, L_60, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_026b;
	}

IL_0250:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__1 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_61 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_61, NULL);
	}

IL_026b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitAsyncU3Ed__3_1_SetStateMachine_m7375D396638472AF48EDC604B97572E53E155B96_gshared (U3CForEachAwaitAsyncU3Ed__3_1_t8871DBC78D8823939DE765EB161709598260AC6A* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitWithCancellationAsyncU3Ed__4_1__ctor_mE00B001B4EF4318A49491061CFE62AE1D62D48E7_gshared (U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_t314B32851737E85A376C96788B004A73C45C8ED9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_MoveNext_m7FAF7731DF32ECB0B8537E5EA3E8B790E79588A7_gshared (U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_t314B32851737E85A376C96788B004A73C45C8ED9* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t3316D7AB28E0550982C1DC4ACAC4FE6B62711280 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t3316D7AB28E0550982C1DC4ACAC4FE6B62711280);
	int32_t V_0 = 0;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_t314B32851737E85A376C96788B004A73C45C8ED9* V_3 = NULL;
	bool V_4 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	bool V_8 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t* V_10 = NULL;
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
			goto IL_01b7_1;
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
				goto IL_00ac_2;
			}

IL_004e_2:
			{
				goto IL_0118_2;
			}

IL_0053_2:
			{
				goto IL_00d1_2;
			}

IL_0056_2:
			{
				Func_3_tEBFC185F508D6150079151B2395F5DE7B54CC752* L_8 = __this->___action;
				RuntimeObject* L_9 = __this->___U3CeU3E5__1;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_11 = __this->___cancellationToken;
				NullCheck(L_8);
				UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_12;
				L_12 = InvokerFuncInvoker2< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10), L_11);
				V_2 = L_12;
				il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13;
				L_13 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_2), NULL);
				V_1 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_1), NULL);
				if (L_14)
				{
					goto IL_00c8_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->___U3CU3E1__state = L_15;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_16 = V_1;
				__this->___U3CU3Eu__1 = L_16;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_3 = __this;
				AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_17 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_t314B32851737E85A376C96788B004A73C45C8ED9**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_1), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0253;
			}

IL_00ac_2:
			{
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_18 = __this->___U3CU3Eu__1;
				V_1 = L_18;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_19 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state = L_20;
			}

IL_00c8_2:
			{
				Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_1), NULL);
			}

IL_00d1_2:
			{
				RuntimeObject* L_21 = __this->___U3CeU3E5__1;
				NullCheck(L_21);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_22;
				L_22 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_21);
				V_6 = L_22;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_23;
				L_23 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_6), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_5 = L_23;
				bool L_24;
				L_24 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_5), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_24)
				{
					goto IL_0135_2;
				}
			}
			{
				int32_t L_25 = 1;
				V_0 = L_25;
				__this->___U3CU3E1__state = L_25;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_26 = V_5;
				__this->___U3CU3Eu__2 = L_26;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_3 = __this;
				AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_27 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_t314B32851737E85A376C96788B004A73C45C8ED9**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_27, (&V_5), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0253;
			}

IL_0118_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28 = __this->___U3CU3Eu__2;
				V_5 = L_28;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_29 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_29, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_30 = (-1);
				V_0 = L_30;
				__this->___U3CU3E1__state = L_30;
			}

IL_0135_2:
			{
				bool L_31;
				L_31 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_5), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__4 = L_31;
				bool L_32 = __this->___U3CU3Es__4;
				V_4 = L_32;
				bool L_33 = V_4;
				if (L_33)
				{
					goto IL_0056_2;
				}
			}
			{
				goto IL_0160_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0154_1;
			}
			throw e;
		}

CATCH_0154_1:
		{
			RuntimeObject* L_34 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_7 = L_34;
			RuntimeObject* L_35 = V_7;
			__this->___U3CU3Es__2 = L_35;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)L_35);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0160_1;
		}

IL_0160_1:
		{
			RuntimeObject* L_36 = __this->___U3CeU3E5__1;
			V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_36) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_37 = V_8;
			if (!L_37)
			{
				goto IL_01dd_1;
			}
		}
		{
			RuntimeObject* L_38 = __this->___U3CeU3E5__1;
			NullCheck((RuntimeObject*)L_38);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_39;
			L_39 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_38);
			V_2 = L_39;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_40;
			L_40 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_2), NULL);
			V_9 = L_40;
			bool L_41;
			L_41 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_9), NULL);
			if (L_41)
			{
				goto IL_01d4_1;
			}
		}
		{
			int32_t L_42 = 2;
			V_0 = L_42;
			__this->___U3CU3E1__state = L_42;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_43 = V_9;
			__this->___U3CU3Eu__1 = L_43;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_3 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_44 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_t314B32851737E85A376C96788B004A73C45C8ED9**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_44, (&V_9), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			goto IL_0253;
		}

IL_01b7_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_45 = __this->___U3CU3Eu__1;
			V_9 = L_45;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_46 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_46, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_47 = (-1);
			V_0 = L_47;
			__this->___U3CU3E1__state = L_47;
		}

IL_01d4_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_9), NULL);
		}

IL_01dd_1:
		{
			RuntimeObject* L_48 = __this->___U3CU3Es__2;
			V_7 = L_48;
			RuntimeObject* L_49 = V_7;
			if (!L_49)
			{
				goto IL_0207_1;
			}
		}
		{
			RuntimeObject* L_50 = V_7;
			V_10 = ((Exception_t*)IsInstClass((RuntimeObject*)L_50, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_51 = V_10;
			if (L_51)
			{
				goto IL_01fa_1;
			}
		}
		{
			RuntimeObject* L_52 = V_7;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_52, method);
		}

IL_01fa_1:
		{
			Exception_t* L_53 = V_10;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_54;
			L_54 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_53, NULL);
			NullCheck(L_54);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_54, NULL);
		}

IL_0207_1:
		{
			int32_t L_55 = __this->___U3CU3Es__3;
			__this->___U3CU3Es__2 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)NULL);
			goto IL_0238;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0217;
		}
		throw e;
	}

CATCH_0217:
	{
		Exception_t* L_56 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_10 = L_56;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__1 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_57 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_58 = V_10;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_57, L_58, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0253;
	}

IL_0238:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__1 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_59 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_59, NULL);
	}

IL_0253:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_SetStateMachine_m322B18177F5E49B94A4753BEC9658B83DF745807_gshared (U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_t314B32851737E85A376C96788B004A73C45C8ED9* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitWithCancellationAsyncU3Ed__5_1__ctor_m355B9DF4CFD7C1E387DB313040C2B53B9550964A_gshared (U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_tF271ADEE88B008144D6D5CA57732E98C4D95A0E0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_MoveNext_mFBEC46E4D70CC9B8369872B43E6C5DC473E2856E_gshared (U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_tF271ADEE88B008144D6D5CA57732E98C4D95A0E0* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_tC5B0B70A7062FD8EC9E6FBE947AE22EEE3BF6346 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_tC5B0B70A7062FD8EC9E6FBE947AE22EEE3BF6346);
	int32_t V_0 = 0;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_tF271ADEE88B008144D6D5CA57732E98C4D95A0E0* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
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
			goto IL_01d5_1;
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
				goto IL_00c8_2;
			}

IL_004e_2:
			{
				goto IL_0135_2;
			}

IL_0053_2:
			{
				__this->___U3CindexU3E5__4 = 0;
				goto IL_00ed_2;
			}

IL_0060_2:
			{
				Func_4_t06A967E03EDC626BCFB4875FDF8A19728ADC72BC* L_8 = __this->___action;
				RuntimeObject* L_9 = __this->___U3CeU3E5__1;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				int32_t L_11 = __this->___U3CindexU3E5__4;
				V_2 = L_11;
				int32_t L_12 = V_2;
				if (((int64_t)L_12 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_12 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CindexU3E5__4 = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_14 = __this->___cancellationToken;
				NullCheck(L_8);
				UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_15;
				L_15 = InvokerFuncInvoker3< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270, Il2CppFullySharedGenericAny, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10), L_13, L_14);
				V_3 = L_15;
				il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_16;
				L_16 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
				V_1 = L_16;
				bool L_17;
				L_17 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_1), NULL);
				if (L_17)
				{
					goto IL_00e4_2;
				}
			}
			{
				int32_t L_18 = 0;
				V_0 = L_18;
				__this->___U3CU3E1__state = L_18;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_19 = V_1;
				__this->___U3CU3Eu__1 = L_19;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_20 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_tF271ADEE88B008144D6D5CA57732E98C4D95A0E0**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_20, (&V_1), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0271;
			}

IL_00c8_2:
			{
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_21 = __this->___U3CU3Eu__1;
				V_1 = L_21;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_22 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_22, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
				int32_t L_23 = (-1);
				V_0 = L_23;
				__this->___U3CU3E1__state = L_23;
			}

IL_00e4_2:
			{
				Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_1), NULL);
			}

IL_00ed_2:
			{
				RuntimeObject* L_24 = __this->___U3CeU3E5__1;
				NullCheck(L_24);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_25;
				L_25 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_24);
				V_7 = L_25;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_26;
				L_26 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_6 = L_26;
				bool L_27;
				L_27 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_6), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_27)
				{
					goto IL_0152_2;
				}
			}
			{
				int32_t L_28 = 1;
				V_0 = L_28;
				__this->___U3CU3E1__state = L_28;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29 = V_6;
				__this->___U3CU3Eu__2 = L_29;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_30 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_tF271ADEE88B008144D6D5CA57732E98C4D95A0E0**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_30, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0271;
			}

IL_0135_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_31 = __this->___U3CU3Eu__2;
				V_6 = L_31;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_32 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_32, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_33 = (-1);
				V_0 = L_33;
				__this->___U3CU3E1__state = L_33;
			}

IL_0152_2:
			{
				bool L_34;
				L_34 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5 = L_34;
				bool L_35 = __this->___U3CU3Es__5;
				V_5 = L_35;
				bool L_36 = V_5;
				if (L_36)
				{
					goto IL_0060_2;
				}
			}
			{
				goto IL_017d_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0171_1;
			}
			throw e;
		}

CATCH_0171_1:
		{
			RuntimeObject* L_37 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_8 = L_37;
			RuntimeObject* L_38 = V_8;
			__this->___U3CU3Es__2 = L_38;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)L_38);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_017d_1;
		}

IL_017d_1:
		{
			RuntimeObject* L_39 = __this->___U3CeU3E5__1;
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_39) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_40 = V_9;
			if (!L_40)
			{
				goto IL_01fb_1;
			}
		}
		{
			RuntimeObject* L_41 = __this->___U3CeU3E5__1;
			NullCheck((RuntimeObject*)L_41);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_42;
			L_42 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
			V_3 = L_42;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_43;
			L_43 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_10 = L_43;
			bool L_44;
			L_44 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_44)
			{
				goto IL_01f2_1;
			}
		}
		{
			int32_t L_45 = 2;
			V_0 = L_45;
			__this->___U3CU3E1__state = L_45;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_46 = V_10;
			__this->___U3CU3Eu__1 = L_46;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_47 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_tF271ADEE88B008144D6D5CA57732E98C4D95A0E0**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_47, (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			goto IL_0271;
		}

IL_01d5_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_48 = __this->___U3CU3Eu__1;
			V_10 = L_48;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_49 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_49, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_50 = (-1);
			V_0 = L_50;
			__this->___U3CU3E1__state = L_50;
		}

IL_01f2_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_01fb_1:
		{
			RuntimeObject* L_51 = __this->___U3CU3Es__2;
			V_8 = L_51;
			RuntimeObject* L_52 = V_8;
			if (!L_52)
			{
				goto IL_0225_1;
			}
		}
		{
			RuntimeObject* L_53 = V_8;
			V_11 = ((Exception_t*)IsInstClass((RuntimeObject*)L_53, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_54 = V_11;
			if (L_54)
			{
				goto IL_0218_1;
			}
		}
		{
			RuntimeObject* L_55 = V_8;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_55, method);
		}

IL_0218_1:
		{
			Exception_t* L_56 = V_11;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_57;
			L_57 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_56, NULL);
			NullCheck(L_57);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_57, NULL);
		}

IL_0225_1:
		{
			int32_t L_58 = __this->___U3CU3Es__3;
			__this->___U3CU3Es__2 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2), (void*)NULL);
			goto IL_0256;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0235;
		}
		throw e;
	}

CATCH_0235:
	{
		Exception_t* L_59 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_11 = L_59;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__1 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_60 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_61 = V_11;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_60, L_61, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0271;
	}

IL_0256:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__1 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_62 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_62, NULL);
	}

IL_0271:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_SetStateMachine_m75B19D2A925824D1C6E91A617B18EA5DC3DFFFDE_gshared (U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_tF271ADEE88B008144D6D5CA57732E98C4D95A0E0* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForgetCoreWithCatchU3Ed__21_1__ctor_mA53C69F3127D1E565469A4716882DD8B93E596B4_gshared (U3CForgetCoreWithCatchU3Ed__21_1_tC1CCDBDBC539D1E312103E6683A61535E5D194E5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForgetCoreWithCatchU3Ed__21_1_MoveNext_m9F14B88003F048396A218D1A650176D34CB0A0C3_gshared (U3CForgetCoreWithCatchU3Ed__21_1_tC1CCDBDBC539D1E312103E6683A61535E5D194E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_Awaiter_t51C2812C5DF11E890C6CC573112245991DB21D7E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const uint32_t SizeOf_T_t144F040A80D5B37B4FE0CB25BB2D7DC714430919 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t144F040A80D5B37B4FE0CB25BB2D7DC714430919);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_4 = alloca(SizeOf_Awaiter_t51C2812C5DF11E890C6CC573112245991DB21D7E);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_7 = L_4;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_8 = L_4;
	int32_t V_0 = 0;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_1 = alloca(SizeOf_Awaiter_t51C2812C5DF11E890C6CC573112245991DB21D7E);
	memset(V_1, 0, SizeOf_Awaiter_t51C2812C5DF11E890C6CC573112245991DB21D7E);
	U3CForgetCoreWithCatchU3Ed__21_1_tC1CCDBDBC539D1E312103E6683A61535E5D194E5* V_2 = NULL;
	Exception_t* V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F V_6;
	memset((&V_6), 0, sizeof(V_6));
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_7;
	memset((&V_7), 0, sizeof(V_7));
	SwitchToMainThreadAwaitable_t30D0968092E3CD2E8BAE2DEF136FC76A3695E9F8 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t* V_9 = NULL;
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
			goto IL_0021_1;
		}

IL_0014_1:
		{
			goto IL_00c2_1;
		}

IL_0019_1:
		{
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), 0);
		}

IL_0021_1:
		{
		}
		try
		{
			{
				int32_t L_3 = V_0;
				if (!L_3)
				{
					goto IL_0027_2;
				}
			}
			{
				goto IL_0029_2;
			}

IL_0027_2:
			{
				goto IL_0066_2;
			}

IL_0029_2:
			{
				InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)), il2cpp_rgctx_method(method->klass->rgctx_data, 2), (((UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_4);
				il2cpp_codegen_memcpy(V_1, L_4, SizeOf_Awaiter_t51C2812C5DF11E890C6CC573112245991DB21D7E);
				bool L_5;
				L_5 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
				if (L_5)
				{
					goto IL_0082_2;
				}
			}
			{
				int32_t L_6 = 0;
				V_0 = L_6;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_6);
				il2cpp_codegen_memcpy(L_7, V_1, SizeOf_Awaiter_t51C2812C5DF11E890C6CC573112245991DB21D7E);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_7, SizeOf_Awaiter_t51C2812C5DF11E890C6CC573112245991DB21D7E);
				V_2 = __this;
				((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CForgetCoreWithCatchU3Ed__21_1_tC1CCDBDBC539D1E312103E6683A61535E5D194E5**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1, (&V_2), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
				goto IL_01ba;
			}

IL_0066_2:
			{
				il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_Awaiter_t51C2812C5DF11E890C6CC573112245991DB21D7E);
				il2cpp_codegen_memcpy(V_1, L_8, SizeOf_Awaiter_t51C2812C5DF11E890C6CC573112245991DB21D7E);
				il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), SizeOf_Awaiter_t51C2812C5DF11E890C6CC573112245991DB21D7E);
				int32_t L_9 = (-1);
				V_0 = L_9;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_9);
			}

IL_0082_2:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1, (Il2CppFullySharedGenericAny*)L_10);
				goto IL_009e_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_008d_1;
			}
			throw e;
		}

CATCH_008d_1:
		{
			Exception_t* L_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_3 = L_11;
			Exception_t* L_12 = V_3;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), (RuntimeObject*)L_12);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), 1);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_009e_1;
		}

IL_009e_1:
		{
			int32_t L_13 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			V_4 = L_13;
			int32_t L_14 = V_4;
			if ((((int32_t)L_14) == ((int32_t)1)))
			{
				goto IL_00b0_1;
			}
		}
		{
			goto IL_0183_1;
		}

IL_00b0_1:
		{
			RuntimeObject* L_15 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
			il2cpp_codegen_write_instance_field_data<Exception_t*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), ((Exception_t*)CastclassClass((RuntimeObject*)L_15, Exception_t_il2cpp_TypeInfo_var)));
		}

IL_00c2_1:
		{
		}
		try
		{
			{
				int32_t L_16 = V_0;
				if ((((int32_t)L_16) == ((int32_t)1)))
				{
					goto IL_00c9_2;
				}
			}
			{
				goto IL_00cb_2;
			}

IL_00c9_2:
			{
				goto IL_0124_2;
			}

IL_00cb_2:
			{
				bool L_17 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
				V_5 = L_17;
				bool L_18 = V_5;
				if (!L_18)
				{
					goto IL_014a_2;
				}
			}
			{
				il2cpp_codegen_initobj((&V_7), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_19 = V_7;
				il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
				SwitchToMainThreadAwaitable_t30D0968092E3CD2E8BAE2DEF136FC76A3695E9F8 L_20;
				L_20 = UniTask_SwitchToMainThread_mBC162C95F0ED605F8E5416A60CCA153E0993CBF1(L_19, NULL);
				V_8 = L_20;
				Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F L_21;
				L_21 = SwitchToMainThreadAwaitable_GetAwaiter_m66A0F6F462885727A38028656D11B51CEA32BD29((&V_8), NULL);
				V_6 = L_21;
				bool L_22;
				L_22 = Awaiter_get_IsCompleted_m8B4E3723A3CC1B1E8359E40C0766081C55A5BC37((&V_6), NULL);
				if (L_22)
				{
					goto IL_0141_2;
				}
			}
			{
				int32_t L_23 = 1;
				V_0 = L_23;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_23);
				Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F L_24 = V_6;
				il2cpp_codegen_write_instance_field_data<Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_24);
				V_2 = __this;
				((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F*, U3CForgetCoreWithCatchU3Ed__21_1_tC1CCDBDBC539D1E312103E6683A61535E5D194E5**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_6), (&V_2), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
				goto IL_01ba;
			}

IL_0124_2:
			{
				Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F L_25 = *(Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
				V_6 = L_25;
				il2cpp_codegen_initobj((((Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)))), sizeof(Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F));
				int32_t L_26 = (-1);
				V_0 = L_26;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_26);
			}

IL_0141_2:
			{
				Awaiter_GetResult_m8383C6B4850150162ECAA6464603B95FD2231CB2((&V_6), NULL);
			}

IL_014a_2:
			{
				Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_27 = *(Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				Exception_t* L_28 = *(Exception_t**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck(L_27);
				Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline(L_27, L_28, NULL);
				goto IL_0179_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_015f_1;
			}
			throw e;
		}

CATCH_015f_1:
		{
			Exception_t* L_29 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_9 = L_29;
			Exception_t* L_30 = V_9;
			il2cpp_codegen_write_instance_field_data<Exception_t*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_30);
			Exception_t* L_31 = *(Exception_t**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var)));
			UniTaskScheduler_PublishUnobservedTaskException_m9F6352174ED5654B0A9FB5562B6FF25A788B27D3(L_31, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0179_1;
		}

IL_0179_1:
		{
			il2cpp_codegen_write_instance_field_data<Exception_t*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), (Exception_t*)NULL);
			goto IL_0183_1;
		}

IL_0183_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), NULL);
			goto IL_01a6;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_018c;
		}
		throw e;
	}

CATCH_018c:
	{
		Exception_t* L_32 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_9 = L_32;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		Exception_t* L_33 = V_9;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_33, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_01ba;
	}

IL_01a6:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), NULL);
	}

IL_01ba:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForgetCoreWithCatchU3Ed__21_1_SetStateMachine_mDF6FF9690FC9EAEAEADF0E55BF8E07AC45713250_gshared (U3CForgetCoreWithCatchU3Ed__21_1_tC1CCDBDBC539D1E312103E6683A61535E5D194E5* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1__ctor_mD15CB6FC710C8BEB221A532A20487ED1241A9815_gshared (U3CGetEnumeratorU3Ed__1_t428C31FE719799CD61A887870EE46ED9488AAFAC* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_m41A8DAE4F14656C560E5165A1964CC6FE5712E3A_gshared (U3CGetEnumeratorU3Ed__1_t428C31FE719799CD61A887870EE46ED9488AAFAC* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__1_MoveNext_m17AB7258D629B8D9CEC578FABBF86A8236C4EC6F_gshared (U3CGetEnumeratorU3Ed__1_t428C31FE719799CD61A887870EE46ED9488AAFAC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	OrderedEnumerable_1_t2F9F5060B969113C249D3BC84B7DA3D9C9DCD84B* V_1 = NULL;
	EnumerableSorter_1_tCEB88BCDB8FD518D48EECB11790C41C8C37FDD65* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		OrderedEnumerable_1_t2F9F5060B969113C249D3BC84B7DA3D9C9DCD84B* L_1 = __this->___U3CU3E4__this;
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
			goto IL_00a4;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state = (-1);
		OrderedEnumerable_1_t2F9F5060B969113C249D3BC84B7DA3D9C9DCD84B* L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___source;
		Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD L_6;
		memset((&L_6), 0, sizeof(L_6));
		Buffer_1__ctor_mE9AE2968725B445ABEBD61A3A7C93B5C2204928E((&L_6), L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CbufferU3E5__2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CbufferU3E5__2))->___items), (void*)NULL);
		Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD* L_7 = (Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD*)(&__this->___U3CbufferU3E5__2);
		int32_t L_8 = L_7->___count;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_00d5;
		}
	}
	{
		OrderedEnumerable_1_t2F9F5060B969113C249D3BC84B7DA3D9C9DCD84B* L_9 = V_1;
		NullCheck(L_9);
		EnumerableSorter_1_tCEB88BCDB8FD518D48EECB11790C41C8C37FDD65* L_10;
		L_10 = VirtualFuncInvoker1< EnumerableSorter_1_tCEB88BCDB8FD518D48EECB11790C41C8C37FDD65*, EnumerableSorter_1_tCEB88BCDB8FD518D48EECB11790C41C8C37FDD65* >::Invoke(7, L_9, (EnumerableSorter_1_tCEB88BCDB8FD518D48EECB11790C41C8C37FDD65*)NULL);
		V_2 = L_10;
		EnumerableSorter_1_tCEB88BCDB8FD518D48EECB11790C41C8C37FDD65* L_11 = V_2;
		Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD* L_12 = (Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD*)(&__this->___U3CbufferU3E5__2);
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_13 = L_12->___items;
		Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD* L_14 = (Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD*)(&__this->___U3CbufferU3E5__2);
		int32_t L_15 = L_14->___count;
		NullCheck(L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16;
		L_16 = EnumerableSorter_1_Sort_m893109DECEB392FD9D2D63B17FFF04EA3B8A6BEE(L_11, L_13, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___U3CmapU3E5__3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmapU3E5__3), (void*)L_16);
		V_2 = (EnumerableSorter_1_tCEB88BCDB8FD518D48EECB11790C41C8C37FDD65*)NULL;
		__this->___U3CiU3E5__4 = 0;
		goto IL_00bb;
	}

IL_0078:
	{
		Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD* L_17 = (Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD*)(&__this->___U3CbufferU3E5__2);
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_18 = L_17->___items;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = __this->___U3CmapU3E5__3;
		int32_t L_20 = __this->___U3CiU3E5__4;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_18);
		int32_t L_23 = L_22;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_24 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		__this->___U3CU3E2__current = L_24;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___Item2), (void*)NULL);
		#endif
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_00a4:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_25 = __this->___U3CiU3E5__4;
		V_3 = L_25;
		int32_t L_26 = V_3;
		__this->___U3CiU3E5__4 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00bb:
	{
		int32_t L_27 = __this->___U3CiU3E5__4;
		Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD* L_28 = (Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD*)(&__this->___U3CbufferU3E5__2);
		int32_t L_29 = L_28->___count;
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_0078;
		}
	}
	{
		__this->___U3CmapU3E5__3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmapU3E5__3), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d5:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CTElementU3E_get_Current_m0FF57B77A19BDC81427FD9B3FBEBF37BA283A90D_gshared (U3CGetEnumeratorU3Ed__1_t428C31FE719799CD61A887870EE46ED9488AAFAC* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m7495761E0952298D9D687578B235FD12E22A63FB_gshared (U3CGetEnumeratorU3Ed__1_t428C31FE719799CD61A887870EE46ED9488AAFAC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_m93F5769044EBC3A4587A2E6B65C8B0FEAB75E8F8_gshared (U3CGetEnumeratorU3Ed__1_t428C31FE719799CD61A887870EE46ED9488AAFAC* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = __this->___U3CU3E2__current;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_1);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1__ctor_m7D4E289FB3E0AC3B7870898DBABE01B7A01C0AE4_gshared (U3CGetEnumeratorU3Ed__1_t35287071076620851350DEE5A7358F21C466DA90* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_mE26C254B51721A2CDF4DC94D3CB711261F59C20E_gshared (U3CGetEnumeratorU3Ed__1_t35287071076620851350DEE5A7358F21C466DA90* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__1_MoveNext_mB0DB6AF383D4F3BEA55C80FF4A4E862863DEDBBA_gshared (U3CGetEnumeratorU3Ed__1_t35287071076620851350DEE5A7358F21C466DA90* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	OrderedEnumerable_1_t8EEABC87399C51697FF13CC459FC26CA5A5857DA* V_1 = NULL;
	EnumerableSorter_1_t5897E023ECB6DBE16092BDD0CD9397E8600CD0F5* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		OrderedEnumerable_1_t8EEABC87399C51697FF13CC459FC26CA5A5857DA* L_1 = __this->___U3CU3E4__this;
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
			goto IL_00a4;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state = (-1);
		OrderedEnumerable_1_t8EEABC87399C51697FF13CC459FC26CA5A5857DA* L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___source;
		Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Buffer_1__ctor_mCA3CAB859EF638AEA56347DA74B5CABAAB17F76D((&L_6), L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CbufferU3E5__2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CbufferU3E5__2))->___items), (void*)NULL);
		Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10* L_7 = (Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10*)(&__this->___U3CbufferU3E5__2);
		int32_t L_8 = L_7->___count;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_00d5;
		}
	}
	{
		OrderedEnumerable_1_t8EEABC87399C51697FF13CC459FC26CA5A5857DA* L_9 = V_1;
		NullCheck(L_9);
		EnumerableSorter_1_t5897E023ECB6DBE16092BDD0CD9397E8600CD0F5* L_10;
		L_10 = VirtualFuncInvoker1< EnumerableSorter_1_t5897E023ECB6DBE16092BDD0CD9397E8600CD0F5*, EnumerableSorter_1_t5897E023ECB6DBE16092BDD0CD9397E8600CD0F5* >::Invoke(7, L_9, (EnumerableSorter_1_t5897E023ECB6DBE16092BDD0CD9397E8600CD0F5*)NULL);
		V_2 = L_10;
		EnumerableSorter_1_t5897E023ECB6DBE16092BDD0CD9397E8600CD0F5* L_11 = V_2;
		Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10* L_12 = (Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10*)(&__this->___U3CbufferU3E5__2);
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_13 = L_12->___items;
		Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10* L_14 = (Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10*)(&__this->___U3CbufferU3E5__2);
		int32_t L_15 = L_14->___count;
		NullCheck(L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16;
		L_16 = EnumerableSorter_1_Sort_m76A2E3BB759F0B9F80B75384E4FB17875CA4829D(L_11, L_13, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___U3CmapU3E5__3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmapU3E5__3), (void*)L_16);
		V_2 = (EnumerableSorter_1_t5897E023ECB6DBE16092BDD0CD9397E8600CD0F5*)NULL;
		__this->___U3CiU3E5__4 = 0;
		goto IL_00bb;
	}

IL_0078:
	{
		Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10* L_17 = (Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10*)(&__this->___U3CbufferU3E5__2);
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_18 = L_17->___items;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = __this->___U3CmapU3E5__3;
		int32_t L_20 = __this->___U3CiU3E5__4;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_18);
		int32_t L_23 = L_22;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_24 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		__this->___U3CU3E2__current = L_24;
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_00a4:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_25 = __this->___U3CiU3E5__4;
		V_3 = L_25;
		int32_t L_26 = V_3;
		__this->___U3CiU3E5__4 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00bb:
	{
		int32_t L_27 = __this->___U3CiU3E5__4;
		Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10* L_28 = (Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10*)(&__this->___U3CbufferU3E5__2);
		int32_t L_29 = L_28->___count;
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_0078;
		}
	}
	{
		__this->___U3CmapU3E5__3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmapU3E5__3), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d5:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CTElementU3E_get_Current_m97BA4EBA4873197922F6C695F296D0CEFFC01068_gshared (U3CGetEnumeratorU3Ed__1_t35287071076620851350DEE5A7358F21C466DA90* __this, const RuntimeMethod* method) 
{
	{
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m4710AD2906AA9D8B1281D8A1C078204D762AC69F_gshared (U3CGetEnumeratorU3Ed__1_t35287071076620851350DEE5A7358F21C466DA90* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_m87F64C217ABC9797A9C49967E10BF4B0163CA7E9_gshared (U3CGetEnumeratorU3Ed__1_t35287071076620851350DEE5A7358F21C466DA90* __this, const RuntimeMethod* method) 
{
	{
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_0 = __this->___U3CU3E2__current;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_1);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1__ctor_mADD789EA0D6B37113B45C55D9941361164B16A45_gshared (U3CGetEnumeratorU3Ed__1_t20E5AEAF9BDC6069AD68C33A55C6648EFD31D186* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_m38AF1615EE2A6BF2CD578FA02DDE79BE7F35984F_gshared (U3CGetEnumeratorU3Ed__1_t20E5AEAF9BDC6069AD68C33A55C6648EFD31D186* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__1_MoveNext_m6D6DCAEB8E910740FAD32DEFE1E415B8C0AAD16B_gshared (U3CGetEnumeratorU3Ed__1_t20E5AEAF9BDC6069AD68C33A55C6648EFD31D186* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	OrderedEnumerable_1_t49A81D3EAEB40201506836E577654DE2F8EC8941* V_1 = NULL;
	EnumerableSorter_1_t772456040AB1CD5F32AE1ACCF8BCBA3561A0CE67* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		OrderedEnumerable_1_t49A81D3EAEB40201506836E577654DE2F8EC8941* L_1 = __this->___U3CU3E4__this;
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
			goto IL_00a4;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state = (-1);
		OrderedEnumerable_1_t49A81D3EAEB40201506836E577654DE2F8EC8941* L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___source;
		Buffer_1_tC5E38DD33641259569860E7D2521C0A65E11441B L_6;
		memset((&L_6), 0, sizeof(L_6));
		Buffer_1__ctor_mA3365FB13DDC11386B51C7B5E691832DD7819F72((&L_6), L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CbufferU3E5__2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CbufferU3E5__2))->___items), (void*)NULL);
		Buffer_1_tC5E38DD33641259569860E7D2521C0A65E11441B* L_7 = (Buffer_1_tC5E38DD33641259569860E7D2521C0A65E11441B*)(&__this->___U3CbufferU3E5__2);
		int32_t L_8 = L_7->___count;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_00d5;
		}
	}
	{
		OrderedEnumerable_1_t49A81D3EAEB40201506836E577654DE2F8EC8941* L_9 = V_1;
		NullCheck(L_9);
		EnumerableSorter_1_t772456040AB1CD5F32AE1ACCF8BCBA3561A0CE67* L_10;
		L_10 = VirtualFuncInvoker1< EnumerableSorter_1_t772456040AB1CD5F32AE1ACCF8BCBA3561A0CE67*, EnumerableSorter_1_t772456040AB1CD5F32AE1ACCF8BCBA3561A0CE67* >::Invoke(7, L_9, (EnumerableSorter_1_t772456040AB1CD5F32AE1ACCF8BCBA3561A0CE67*)NULL);
		V_2 = L_10;
		EnumerableSorter_1_t772456040AB1CD5F32AE1ACCF8BCBA3561A0CE67* L_11 = V_2;
		Buffer_1_tC5E38DD33641259569860E7D2521C0A65E11441B* L_12 = (Buffer_1_tC5E38DD33641259569860E7D2521C0A65E11441B*)(&__this->___U3CbufferU3E5__2);
		MarkToBaseAdjustmentRecordU5BU5D_tECA7CEA6635E17961BB362A1BD69322800A15966* L_13 = L_12->___items;
		Buffer_1_tC5E38DD33641259569860E7D2521C0A65E11441B* L_14 = (Buffer_1_tC5E38DD33641259569860E7D2521C0A65E11441B*)(&__this->___U3CbufferU3E5__2);
		int32_t L_15 = L_14->___count;
		NullCheck(L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16;
		L_16 = EnumerableSorter_1_Sort_mA550496027F5BC19AE69FBFF439C86C3D45DD6C0(L_11, L_13, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___U3CmapU3E5__3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmapU3E5__3), (void*)L_16);
		V_2 = (EnumerableSorter_1_t772456040AB1CD5F32AE1ACCF8BCBA3561A0CE67*)NULL;
		__this->___U3CiU3E5__4 = 0;
		goto IL_00bb;
	}

IL_0078:
	{
		Buffer_1_tC5E38DD33641259569860E7D2521C0A65E11441B* L_17 = (Buffer_1_tC5E38DD33641259569860E7D2521C0A65E11441B*)(&__this->___U3CbufferU3E5__2);
		MarkToBaseAdjustmentRecordU5BU5D_tECA7CEA6635E17961BB362A1BD69322800A15966* L_18 = L_17->___items;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = __this->___U3CmapU3E5__3;
		int32_t L_20 = __this->___U3CiU3E5__4;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_18);
		int32_t L_23 = L_22;
		MarkToBaseAdjustmentRecord_t03C041CB56601B46F025C69B899BBAB750201C71 L_24 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		__this->___U3CU3E2__current = L_24;
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_00a4:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_25 = __this->___U3CiU3E5__4;
		V_3 = L_25;
		int32_t L_26 = V_3;
		__this->___U3CiU3E5__4 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00bb:
	{
		int32_t L_27 = __this->___U3CiU3E5__4;
		Buffer_1_tC5E38DD33641259569860E7D2521C0A65E11441B* L_28 = (Buffer_1_tC5E38DD33641259569860E7D2521C0A65E11441B*)(&__this->___U3CbufferU3E5__2);
		int32_t L_29 = L_28->___count;
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_0078;
		}
	}
	{
		__this->___U3CmapU3E5__3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmapU3E5__3), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d5:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarkToBaseAdjustmentRecord_t03C041CB56601B46F025C69B899BBAB750201C71 U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CTElementU3E_get_Current_m91C72D71851155C57CC88A6324599ED87CB59336_gshared (U3CGetEnumeratorU3Ed__1_t20E5AEAF9BDC6069AD68C33A55C6648EFD31D186* __this, const RuntimeMethod* method) 
{
	{
		MarkToBaseAdjustmentRecord_t03C041CB56601B46F025C69B899BBAB750201C71 L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m5732B55E50D10C0AB6C737B34C3FC89EA84C00C5_gshared (U3CGetEnumeratorU3Ed__1_t20E5AEAF9BDC6069AD68C33A55C6648EFD31D186* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_mCD152C44F7AECDEA983DAC497E36A6D6762B22CF_gshared (U3CGetEnumeratorU3Ed__1_t20E5AEAF9BDC6069AD68C33A55C6648EFD31D186* __this, const RuntimeMethod* method) 
{
	{
		MarkToBaseAdjustmentRecord_t03C041CB56601B46F025C69B899BBAB750201C71 L_0 = __this->___U3CU3E2__current;
		MarkToBaseAdjustmentRecord_t03C041CB56601B46F025C69B899BBAB750201C71 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_1);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1__ctor_m7CDF2599C2FFAFFFC82473005F41D25C15D8BE3F_gshared (U3CGetEnumeratorU3Ed__1_t3DA927506BB3A75FB0C275BE0E1E951C2FA72436* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_m262816F0042566C2FA2B6C6F77A17A515D51EF79_gshared (U3CGetEnumeratorU3Ed__1_t3DA927506BB3A75FB0C275BE0E1E951C2FA72436* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__1_MoveNext_m53F24826AD3ADA7B424450DC60ACB29D9D932FE3_gshared (U3CGetEnumeratorU3Ed__1_t3DA927506BB3A75FB0C275BE0E1E951C2FA72436* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	OrderedEnumerable_1_tFFE2D41E419F999B45E7C9636190F547FE16EA00* V_1 = NULL;
	EnumerableSorter_1_t33B4B1FE8E6E19EEFB45A8EC216B39E6DDF2FDDD* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		OrderedEnumerable_1_tFFE2D41E419F999B45E7C9636190F547FE16EA00* L_1 = __this->___U3CU3E4__this;
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
			goto IL_00a4;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state = (-1);
		OrderedEnumerable_1_tFFE2D41E419F999B45E7C9636190F547FE16EA00* L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___source;
		Buffer_1_t78B6DF8A4894DAF17C243F0D271FBE2B62619A14 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Buffer_1__ctor_m086C12C5694E0D6EFB7A2B3FE005444773F1BC8B((&L_6), L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CbufferU3E5__2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CbufferU3E5__2))->___items), (void*)NULL);
		Buffer_1_t78B6DF8A4894DAF17C243F0D271FBE2B62619A14* L_7 = (Buffer_1_t78B6DF8A4894DAF17C243F0D271FBE2B62619A14*)(&__this->___U3CbufferU3E5__2);
		int32_t L_8 = L_7->___count;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_00d5;
		}
	}
	{
		OrderedEnumerable_1_tFFE2D41E419F999B45E7C9636190F547FE16EA00* L_9 = V_1;
		NullCheck(L_9);
		EnumerableSorter_1_t33B4B1FE8E6E19EEFB45A8EC216B39E6DDF2FDDD* L_10;
		L_10 = VirtualFuncInvoker1< EnumerableSorter_1_t33B4B1FE8E6E19EEFB45A8EC216B39E6DDF2FDDD*, EnumerableSorter_1_t33B4B1FE8E6E19EEFB45A8EC216B39E6DDF2FDDD* >::Invoke(7, L_9, (EnumerableSorter_1_t33B4B1FE8E6E19EEFB45A8EC216B39E6DDF2FDDD*)NULL);
		V_2 = L_10;
		EnumerableSorter_1_t33B4B1FE8E6E19EEFB45A8EC216B39E6DDF2FDDD* L_11 = V_2;
		Buffer_1_t78B6DF8A4894DAF17C243F0D271FBE2B62619A14* L_12 = (Buffer_1_t78B6DF8A4894DAF17C243F0D271FBE2B62619A14*)(&__this->___U3CbufferU3E5__2);
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_13 = L_12->___items;
		Buffer_1_t78B6DF8A4894DAF17C243F0D271FBE2B62619A14* L_14 = (Buffer_1_t78B6DF8A4894DAF17C243F0D271FBE2B62619A14*)(&__this->___U3CbufferU3E5__2);
		int32_t L_15 = L_14->___count;
		NullCheck(L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16;
		L_16 = EnumerableSorter_1_Sort_m587E268B44E37C43725852E9B98275323B905602(L_11, L_13, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___U3CmapU3E5__3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmapU3E5__3), (void*)L_16);
		V_2 = (EnumerableSorter_1_t33B4B1FE8E6E19EEFB45A8EC216B39E6DDF2FDDD*)NULL;
		__this->___U3CiU3E5__4 = 0;
		goto IL_00bb;
	}

IL_0078:
	{
		Buffer_1_t78B6DF8A4894DAF17C243F0D271FBE2B62619A14* L_17 = (Buffer_1_t78B6DF8A4894DAF17C243F0D271FBE2B62619A14*)(&__this->___U3CbufferU3E5__2);
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_18 = L_17->___items;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = __this->___U3CmapU3E5__3;
		int32_t L_20 = __this->___U3CiU3E5__4;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_18);
		int32_t L_23 = L_22;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_24 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		__this->___U3CU3E2__current = L_24;
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_00a4:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_25 = __this->___U3CiU3E5__4;
		V_3 = L_25;
		int32_t L_26 = V_3;
		__this->___U3CiU3E5__4 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00bb:
	{
		int32_t L_27 = __this->___U3CiU3E5__4;
		Buffer_1_t78B6DF8A4894DAF17C243F0D271FBE2B62619A14* L_28 = (Buffer_1_t78B6DF8A4894DAF17C243F0D271FBE2B62619A14*)(&__this->___U3CbufferU3E5__2);
		int32_t L_29 = L_28->___count;
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_0078;
		}
	}
	{
		__this->___U3CmapU3E5__3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmapU3E5__3), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d5:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CTElementU3E_get_Current_m672F346977DD33B67A2FC68B9F7BF48C49C9B1C3_gshared (U3CGetEnumeratorU3Ed__1_t3DA927506BB3A75FB0C275BE0E1E951C2FA72436* __this, const RuntimeMethod* method) 
{
	{
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m7653FFEE409E60E02766385A970C1176C951084B_gshared (U3CGetEnumeratorU3Ed__1_t3DA927506BB3A75FB0C275BE0E1E951C2FA72436* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_mF5D7899F74CC888243D77D87AF26D98ED21A2063_gshared (U3CGetEnumeratorU3Ed__1_t3DA927506BB3A75FB0C275BE0E1E951C2FA72436* __this, const RuntimeMethod* method) 
{
	{
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_0 = __this->___U3CU3E2__current;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_1);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1__ctor_m37F83C760575D71B217008924EB073B13AA8B2F3_gshared (U3CGetEnumeratorU3Ed__1_t4481370B78AEBF7DBD954E502147D470C0F85ED0* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_mE25D1975969C03B70F03DEEF59D6085716293E0E_gshared (U3CGetEnumeratorU3Ed__1_t4481370B78AEBF7DBD954E502147D470C0F85ED0* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__1_MoveNext_m7458C2C027EB1B8E80BDE54408B1C304F19D9F1A_gshared (U3CGetEnumeratorU3Ed__1_t4481370B78AEBF7DBD954E502147D470C0F85ED0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	OrderedEnumerable_1_t2CA7B89590CC51BDE981B85FB02BE2FC4175E2D6* V_1 = NULL;
	EnumerableSorter_1_tC7A6BA5636DB2028E64A6A8150BE0C33E308DBF0* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		OrderedEnumerable_1_t2CA7B89590CC51BDE981B85FB02BE2FC4175E2D6* L_1 = __this->___U3CU3E4__this;
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
			goto IL_00a4;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state = (-1);
		OrderedEnumerable_1_t2CA7B89590CC51BDE981B85FB02BE2FC4175E2D6* L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___source;
		Buffer_1_t4791E2493D69BE78059DB64F5984BCEC79E91537 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Buffer_1__ctor_m309F4E747F3CBF63BB9B6470E89A69B367B33FD5((&L_6), L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CbufferU3E5__2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CbufferU3E5__2))->___items), (void*)NULL);
		Buffer_1_t4791E2493D69BE78059DB64F5984BCEC79E91537* L_7 = (Buffer_1_t4791E2493D69BE78059DB64F5984BCEC79E91537*)(&__this->___U3CbufferU3E5__2);
		int32_t L_8 = L_7->___count;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_00d5;
		}
	}
	{
		OrderedEnumerable_1_t2CA7B89590CC51BDE981B85FB02BE2FC4175E2D6* L_9 = V_1;
		NullCheck(L_9);
		EnumerableSorter_1_tC7A6BA5636DB2028E64A6A8150BE0C33E308DBF0* L_10;
		L_10 = VirtualFuncInvoker1< EnumerableSorter_1_tC7A6BA5636DB2028E64A6A8150BE0C33E308DBF0*, EnumerableSorter_1_tC7A6BA5636DB2028E64A6A8150BE0C33E308DBF0* >::Invoke(7, L_9, (EnumerableSorter_1_tC7A6BA5636DB2028E64A6A8150BE0C33E308DBF0*)NULL);
		V_2 = L_10;
		EnumerableSorter_1_tC7A6BA5636DB2028E64A6A8150BE0C33E308DBF0* L_11 = V_2;
		Buffer_1_t4791E2493D69BE78059DB64F5984BCEC79E91537* L_12 = (Buffer_1_t4791E2493D69BE78059DB64F5984BCEC79E91537*)(&__this->___U3CbufferU3E5__2);
		MarkToMarkAdjustmentRecordU5BU5D_tD0484B2268EBA1947BBA50456596875426ED9CDB* L_13 = L_12->___items;
		Buffer_1_t4791E2493D69BE78059DB64F5984BCEC79E91537* L_14 = (Buffer_1_t4791E2493D69BE78059DB64F5984BCEC79E91537*)(&__this->___U3CbufferU3E5__2);
		int32_t L_15 = L_14->___count;
		NullCheck(L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16;
		L_16 = EnumerableSorter_1_Sort_mD73192C61431355F9B7CEBBF1BD9BAA4615D95E8(L_11, L_13, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___U3CmapU3E5__3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmapU3E5__3), (void*)L_16);
		V_2 = (EnumerableSorter_1_tC7A6BA5636DB2028E64A6A8150BE0C33E308DBF0*)NULL;
		__this->___U3CiU3E5__4 = 0;
		goto IL_00bb;
	}

IL_0078:
	{
		Buffer_1_t4791E2493D69BE78059DB64F5984BCEC79E91537* L_17 = (Buffer_1_t4791E2493D69BE78059DB64F5984BCEC79E91537*)(&__this->___U3CbufferU3E5__2);
		MarkToMarkAdjustmentRecordU5BU5D_tD0484B2268EBA1947BBA50456596875426ED9CDB* L_18 = L_17->___items;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = __this->___U3CmapU3E5__3;
		int32_t L_20 = __this->___U3CiU3E5__4;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_18);
		int32_t L_23 = L_22;
		MarkToMarkAdjustmentRecord_t5D12F757E4ECB2EA12EB404228D70FA4DDBD6654 L_24 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		__this->___U3CU3E2__current = L_24;
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_00a4:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_25 = __this->___U3CiU3E5__4;
		V_3 = L_25;
		int32_t L_26 = V_3;
		__this->___U3CiU3E5__4 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00bb:
	{
		int32_t L_27 = __this->___U3CiU3E5__4;
		Buffer_1_t4791E2493D69BE78059DB64F5984BCEC79E91537* L_28 = (Buffer_1_t4791E2493D69BE78059DB64F5984BCEC79E91537*)(&__this->___U3CbufferU3E5__2);
		int32_t L_29 = L_28->___count;
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_0078;
		}
	}
	{
		__this->___U3CmapU3E5__3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmapU3E5__3), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d5:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarkToMarkAdjustmentRecord_t5D12F757E4ECB2EA12EB404228D70FA4DDBD6654 U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CTElementU3E_get_Current_m14D86F9C9C641CA7BEC336E4AA2CB146C15AAB38_gshared (U3CGetEnumeratorU3Ed__1_t4481370B78AEBF7DBD954E502147D470C0F85ED0* __this, const RuntimeMethod* method) 
{
	{
		MarkToMarkAdjustmentRecord_t5D12F757E4ECB2EA12EB404228D70FA4DDBD6654 L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m5EDEC9814E9FEF6DFAEDEB0022F25F3ECA9CB3F5_gshared (U3CGetEnumeratorU3Ed__1_t4481370B78AEBF7DBD954E502147D470C0F85ED0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_m8F5337D4F107871D6A0BEE64456E6E8CC358A45A_gshared (U3CGetEnumeratorU3Ed__1_t4481370B78AEBF7DBD954E502147D470C0F85ED0* __this, const RuntimeMethod* method) 
{
	{
		MarkToMarkAdjustmentRecord_t5D12F757E4ECB2EA12EB404228D70FA4DDBD6654 L_0 = __this->___U3CU3E2__current;
		MarkToMarkAdjustmentRecord_t5D12F757E4ECB2EA12EB404228D70FA4DDBD6654 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_1);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1__ctor_m035A8063D3793CE9F8396850548DD6160D90DDE4_gshared (U3CGetEnumeratorU3Ed__1_t86CE4D514C7EA04C708491BC8E9D7FCB75DB8A9F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_m139A423927BBCC13B847B12CCE8F1DF1585A52B1_gshared (U3CGetEnumeratorU3Ed__1_t86CE4D514C7EA04C708491BC8E9D7FCB75DB8A9F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__1_MoveNext_mDE6F2E58734AFD387C9D46688D63894A1440A34F_gshared (U3CGetEnumeratorU3Ed__1_t86CE4D514C7EA04C708491BC8E9D7FCB75DB8A9F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	OrderedEnumerable_1_tA6269C578EE7D3423C79F32258D574795AEF1151* V_1 = NULL;
	EnumerableSorter_1_t4439350BEBB5B5B9E8D43BBDBB271F1DC472270B* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		OrderedEnumerable_1_tA6269C578EE7D3423C79F32258D574795AEF1151* L_1 = __this->___U3CU3E4__this;
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
			goto IL_00a4;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state = (-1);
		OrderedEnumerable_1_tA6269C578EE7D3423C79F32258D574795AEF1151* L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___source;
		Buffer_1_tCA1933430719B4829D9E8C1DB02C579B9C68E7CD L_6;
		memset((&L_6), 0, sizeof(L_6));
		Buffer_1__ctor_m9178E0FB078F890A98854B06AF9C08C14061F4AC((&L_6), L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CbufferU3E5__2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CbufferU3E5__2))->___items), (void*)NULL);
		Buffer_1_tCA1933430719B4829D9E8C1DB02C579B9C68E7CD* L_7 = (Buffer_1_tCA1933430719B4829D9E8C1DB02C579B9C68E7CD*)(&__this->___U3CbufferU3E5__2);
		int32_t L_8 = L_7->___count;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_00d5;
		}
	}
	{
		OrderedEnumerable_1_tA6269C578EE7D3423C79F32258D574795AEF1151* L_9 = V_1;
		NullCheck(L_9);
		EnumerableSorter_1_t4439350BEBB5B5B9E8D43BBDBB271F1DC472270B* L_10;
		L_10 = VirtualFuncInvoker1< EnumerableSorter_1_t4439350BEBB5B5B9E8D43BBDBB271F1DC472270B*, EnumerableSorter_1_t4439350BEBB5B5B9E8D43BBDBB271F1DC472270B* >::Invoke(7, L_9, (EnumerableSorter_1_t4439350BEBB5B5B9E8D43BBDBB271F1DC472270B*)NULL);
		V_2 = L_10;
		EnumerableSorter_1_t4439350BEBB5B5B9E8D43BBDBB271F1DC472270B* L_11 = V_2;
		Buffer_1_tCA1933430719B4829D9E8C1DB02C579B9C68E7CD* L_12 = (Buffer_1_tCA1933430719B4829D9E8C1DB02C579B9C68E7CD*)(&__this->___U3CbufferU3E5__2);
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_13 = L_12->___items;
		Buffer_1_tCA1933430719B4829D9E8C1DB02C579B9C68E7CD* L_14 = (Buffer_1_tCA1933430719B4829D9E8C1DB02C579B9C68E7CD*)(&__this->___U3CbufferU3E5__2);
		int32_t L_15 = L_14->___count;
		NullCheck(L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16;
		L_16 = EnumerableSorter_1_Sort_m0B1E1BD2E50D9C85A518873DD8F2D3109DDB872C(L_11, L_13, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___U3CmapU3E5__3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmapU3E5__3), (void*)L_16);
		V_2 = (EnumerableSorter_1_t4439350BEBB5B5B9E8D43BBDBB271F1DC472270B*)NULL;
		__this->___U3CiU3E5__4 = 0;
		goto IL_00bb;
	}

IL_0078:
	{
		Buffer_1_tCA1933430719B4829D9E8C1DB02C579B9C68E7CD* L_17 = (Buffer_1_tCA1933430719B4829D9E8C1DB02C579B9C68E7CD*)(&__this->___U3CbufferU3E5__2);
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_18 = L_17->___items;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = __this->___U3CmapU3E5__3;
		int32_t L_20 = __this->___U3CiU3E5__4;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_18);
		int32_t L_23 = L_22;
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C L_24 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		__this->___U3CU3E2__current = L_24;
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_00a4:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_25 = __this->___U3CiU3E5__4;
		V_3 = L_25;
		int32_t L_26 = V_3;
		__this->___U3CiU3E5__4 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00bb:
	{
		int32_t L_27 = __this->___U3CiU3E5__4;
		Buffer_1_tCA1933430719B4829D9E8C1DB02C579B9C68E7CD* L_28 = (Buffer_1_tCA1933430719B4829D9E8C1DB02C579B9C68E7CD*)(&__this->___U3CbufferU3E5__2);
		int32_t L_29 = L_28->___count;
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_0078;
		}
	}
	{
		__this->___U3CmapU3E5__3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmapU3E5__3), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d5:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CTElementU3E_get_Current_m4877DE59D6C3D03C652359E32516BA7991F04E67_gshared (U3CGetEnumeratorU3Ed__1_t86CE4D514C7EA04C708491BC8E9D7FCB75DB8A9F* __this, const RuntimeMethod* method) 
{
	{
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m3CFB64F6AEBD7E71CA5A2BE730332B9547C02843_gshared (U3CGetEnumeratorU3Ed__1_t86CE4D514C7EA04C708491BC8E9D7FCB75DB8A9F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_m2CB7BF4E3FE33BE56F048C01862F3AF0E175497B_gshared (U3CGetEnumeratorU3Ed__1_t86CE4D514C7EA04C708491BC8E9D7FCB75DB8A9F* __this, const RuntimeMethod* method) 
{
	{
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C L_0 = __this->___U3CU3E2__current;
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_1);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1__ctor_m9E33A6AB6E68676FE01C4F3ACE05CF805FC971AC_gshared (U3CGetEnumeratorU3Ed__1_t6D4BC5B68087352E56482B91E7BADA70BEB38CD2* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_mE9C6F11BF14488BD0B136A00A03DD1E3C30ED18C_gshared (U3CGetEnumeratorU3Ed__1_t6D4BC5B68087352E56482B91E7BADA70BEB38CD2* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__1_MoveNext_mAF290F5B9C23A195FED4423C55D740076C440461_gshared (U3CGetEnumeratorU3Ed__1_t6D4BC5B68087352E56482B91E7BADA70BEB38CD2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	OrderedEnumerable_1_t635FACC705EB8D479616971CD818376DC3A5AF51* V_1 = NULL;
	EnumerableSorter_1_t9DF0BF2FF3A689EB41C9CE2B42D3A91F5776B3AD* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		OrderedEnumerable_1_t635FACC705EB8D479616971CD818376DC3A5AF51* L_1 = __this->___U3CU3E4__this;
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
			goto IL_00a4;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state = (-1);
		OrderedEnumerable_1_t635FACC705EB8D479616971CD818376DC3A5AF51* L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___source;
		Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Buffer_1__ctor_m072DE84AEC969582EB5760D4835747F9DC0C02AF((&L_6), L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CbufferU3E5__2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CbufferU3E5__2))->___items), (void*)NULL);
		Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59* L_7 = (Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59*)(&__this->___U3CbufferU3E5__2);
		int32_t L_8 = L_7->___count;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_00d5;
		}
	}
	{
		OrderedEnumerable_1_t635FACC705EB8D479616971CD818376DC3A5AF51* L_9 = V_1;
		NullCheck(L_9);
		EnumerableSorter_1_t9DF0BF2FF3A689EB41C9CE2B42D3A91F5776B3AD* L_10;
		L_10 = VirtualFuncInvoker1< EnumerableSorter_1_t9DF0BF2FF3A689EB41C9CE2B42D3A91F5776B3AD*, EnumerableSorter_1_t9DF0BF2FF3A689EB41C9CE2B42D3A91F5776B3AD* >::Invoke(7, L_9, (EnumerableSorter_1_t9DF0BF2FF3A689EB41C9CE2B42D3A91F5776B3AD*)NULL);
		V_2 = L_10;
		EnumerableSorter_1_t9DF0BF2FF3A689EB41C9CE2B42D3A91F5776B3AD* L_11 = V_2;
		Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59* L_12 = (Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59*)(&__this->___U3CbufferU3E5__2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_12->___items;
		Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59* L_14 = (Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59*)(&__this->___U3CbufferU3E5__2);
		int32_t L_15 = L_14->___count;
		NullCheck(L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16;
		L_16 = EnumerableSorter_1_Sort_m8685D15BDC4342DFFAE8D12488D213864CFDC321(L_11, L_13, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___U3CmapU3E5__3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmapU3E5__3), (void*)L_16);
		V_2 = (EnumerableSorter_1_t9DF0BF2FF3A689EB41C9CE2B42D3A91F5776B3AD*)NULL;
		__this->___U3CiU3E5__4 = 0;
		goto IL_00bb;
	}

IL_0078:
	{
		Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59* L_17 = (Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59*)(&__this->___U3CbufferU3E5__2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_17->___items;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = __this->___U3CmapU3E5__3;
		int32_t L_20 = __this->___U3CiU3E5__4;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_18);
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		__this->___U3CU3E2__current = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_24);
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_00a4:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_25 = __this->___U3CiU3E5__4;
		V_3 = L_25;
		int32_t L_26 = V_3;
		__this->___U3CiU3E5__4 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00bb:
	{
		int32_t L_27 = __this->___U3CiU3E5__4;
		Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59* L_28 = (Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59*)(&__this->___U3CbufferU3E5__2);
		int32_t L_29 = L_28->___count;
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_0078;
		}
	}
	{
		__this->___U3CmapU3E5__3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmapU3E5__3), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d5:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CTElementU3E_get_Current_m0897AA37D3035A619F9DF0DD44EE8649A3B64799_gshared (U3CGetEnumeratorU3Ed__1_t6D4BC5B68087352E56482B91E7BADA70BEB38CD2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_mED39879DD4868C3CEF0CF2D2BCB7A5F4D16C87E5_gshared (U3CGetEnumeratorU3Ed__1_t6D4BC5B68087352E56482B91E7BADA70BEB38CD2* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_m3B856AEBDAD428E151FA5FCFFD49E3CFBDBAAF63_gshared (U3CGetEnumeratorU3Ed__1_t6D4BC5B68087352E56482B91E7BADA70BEB38CD2* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1__ctor_mF0F745619724BDF6636B7B0514E34BCBC80279E8_gshared (U3CGetEnumeratorU3Ed__1_t0C0E1C4A0A69A2FDEE7A295C343DBFCB38E1E136* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_mCE7E04EE9529ED4065E56E990020C03717535005_gshared (U3CGetEnumeratorU3Ed__1_t0C0E1C4A0A69A2FDEE7A295C343DBFCB38E1E136* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__1_MoveNext_mF7246BB82BCF175E60B056936F108905CA9E36BE_gshared (U3CGetEnumeratorU3Ed__1_t0C0E1C4A0A69A2FDEE7A295C343DBFCB38E1E136* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TElement_t7131B4894D970BCE712C2414419F0A27829AF29C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TElement_t7131B4894D970BCE712C2414419F0A27829AF29C);
	int32_t V_0 = 0;
	OrderedEnumerable_1_t9FC254A996960AAA55B70FA7417B36D16C123B28* V_1 = NULL;
	EnumerableSorter_1_t748424BBEB090E58B6D364ADABD271AC18B4C251* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
		OrderedEnumerable_1_t9FC254A996960AAA55B70FA7417B36D16C123B28* L_1 = *(OrderedEnumerable_1_t9FC254A996960AAA55B70FA7417B36D16C123B28**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
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
			goto IL_00a4;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		OrderedEnumerable_1_t9FC254A996960AAA55B70FA7417B36D16C123B28* L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___source;
		Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Buffer_1__ctor_m55137EEF7AF9E0883A438776A066DA5520FFDE49((&L_6), L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		il2cpp_codegen_write_instance_field_data<Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_6);
		int32_t L_7 = (((Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3))))->___count;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00d5;
		}
	}
	{
		OrderedEnumerable_1_t9FC254A996960AAA55B70FA7417B36D16C123B28* L_8 = V_1;
		NullCheck(L_8);
		EnumerableSorter_1_t748424BBEB090E58B6D364ADABD271AC18B4C251* L_9;
		L_9 = VirtualFuncInvoker1< EnumerableSorter_1_t748424BBEB090E58B6D364ADABD271AC18B4C251*, EnumerableSorter_1_t748424BBEB090E58B6D364ADABD271AC18B4C251* >::Invoke(7, L_8, (EnumerableSorter_1_t748424BBEB090E58B6D364ADABD271AC18B4C251*)NULL);
		V_2 = L_9;
		EnumerableSorter_1_t748424BBEB090E58B6D364ADABD271AC18B4C251* L_10 = V_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = (((Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3))))->___items;
		int32_t L_12 = (((Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3))))->___count;
		NullCheck(L_10);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13;
		L_13 = ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (EnumerableSorter_1_t748424BBEB090E58B6D364ADABD271AC18B4C251*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_10, L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		il2cpp_codegen_write_instance_field_data<Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_13);
		V_2 = (EnumerableSorter_1_t748424BBEB090E58B6D364ADABD271AC18B4C251*)NULL;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), 0);
		goto IL_00bb;
	}

IL_0078:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = (((Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3))))->___items;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = *(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		int32_t L_16 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		NullCheck(L_15);
		int32_t L_17 = L_16;
		int32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_14);
		int32_t L_19 = L_18;
		il2cpp_codegen_memcpy(L_20, (L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)), SizeOf_TElement_t7131B4894D970BCE712C2414419F0A27829AF29C);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_20, SizeOf_TElement_t7131B4894D970BCE712C2414419F0A27829AF29C);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
		return (bool)1;
	}

IL_00a4:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		int32_t L_21 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		V_3 = L_21;
		int32_t L_22 = V_3;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), ((int32_t)il2cpp_codegen_add(L_22, 1)));
	}

IL_00bb:
	{
		int32_t L_23 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_24 = (((Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3))))->___count;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0078;
		}
	}
	{
		il2cpp_codegen_write_instance_field_data<Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d5:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CTElementU3E_get_Current_mEE2A7BC907921D8ECB6DD8679B8AB0DE57942132_gshared (U3CGetEnumeratorU3Ed__1_t0C0E1C4A0A69A2FDEE7A295C343DBFCB38E1E136* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TElement_t7131B4894D970BCE712C2414419F0A27829AF29C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TElement_t7131B4894D970BCE712C2414419F0A27829AF29C);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TElement_t7131B4894D970BCE712C2414419F0A27829AF29C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TElement_t7131B4894D970BCE712C2414419F0A27829AF29C);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m0995698E264EEC53A69A42B9391105FEDFF8663B_gshared (U3CGetEnumeratorU3Ed__1_t0C0E1C4A0A69A2FDEE7A295C343DBFCB38E1E136* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_m0E4A0EA7748A5ED7A55D173736B833FFEB3867F0_gshared (U3CGetEnumeratorU3Ed__1_t0C0E1C4A0A69A2FDEE7A295C343DBFCB38E1E136* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TElement_t7131B4894D970BCE712C2414419F0A27829AF29C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TElement_t7131B4894D970BCE712C2414419F0A27829AF29C);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TElement_t7131B4894D970BCE712C2414419F0A27829AF29C);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__10__ctor_m2FC64C02D3B3631A7DC4B8ED028B59E546805632_gshared (U3CGetEnumeratorU3Ed__10_tC2CCC09794715D3A40FB005ED4800D913E46029A* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__10_System_IDisposable_Dispose_mCE46B1E7FA8C24946CFC4C1CAE445C96C7F52C15_gshared (U3CGetEnumeratorU3Ed__10_tC2CCC09794715D3A40FB005ED4800D913E46029A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__10_MoveNext_m258B33CAB073DA17C1B46151C1C4AC2AD298B0C5_gshared (U3CGetEnumeratorU3Ed__10_tC2CCC09794715D3A40FB005ED4800D913E46029A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_005f;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state = (-1);
		__this->___U3CiU3E5__1 = 0;
		SplineSlice_1_t11281F34A00C6D5212DE9E4D85BED17D2705BB32* L_3 = (SplineSlice_1_t11281F34A00C6D5212DE9E4D85BED17D2705BB32*)(&__this->___U3CU3E4__this);
		SplineRange_tCB51EBCFA5858BB48FEC33EF009AA4E0B75772B1* L_4 = (SplineRange_tCB51EBCFA5858BB48FEC33EF009AA4E0B75772B1*)(&L_3->___Range);
		int32_t L_5;
		L_5 = SplineRange_get_Count_m71E1A150F7E1896F91C2CE285E2CB86473D675A4_inline(L_4, NULL);
		__this->___U3CcU3E5__2 = L_5;
		goto IL_0076;
	}

IL_003f:
	{
		SplineSlice_1_t11281F34A00C6D5212DE9E4D85BED17D2705BB32* L_6 = (SplineSlice_1_t11281F34A00C6D5212DE9E4D85BED17D2705BB32*)(&__this->___U3CU3E4__this);
		int32_t L_7 = __this->___U3CiU3E5__1;
		BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 L_8;
		L_8 = SplineSlice_1_get_Item_m2C15FDA65345CC3F969F339B97892FD6C24BE237(L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		__this->___U3CU3E2__current = L_8;
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_005f:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_9 = __this->___U3CiU3E5__1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		int32_t L_10 = V_1;
		__this->___U3CiU3E5__1 = L_10;
	}

IL_0076:
	{
		int32_t L_11 = __this->___U3CiU3E5__1;
		int32_t L_12 = __this->___U3CcU3E5__2;
		V_2 = (bool)((((int32_t)L_11) < ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_2;
		if (L_13)
		{
			goto IL_003f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 U3CGetEnumeratorU3Ed__10_System_Collections_Generic_IEnumeratorU3CUnityEngine_Splines_BezierKnotU3E_get_Current_m1887750644D8DC8BC9E3B1709C50D02EA8E24F33_gshared (U3CGetEnumeratorU3Ed__10_tC2CCC09794715D3A40FB005ED4800D913E46029A* __this, const RuntimeMethod* method) 
{
	{
		BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__10_System_Collections_IEnumerator_Reset_mD64CED89C3141B4E3C104EBD8CC4513064BD7608_gshared (U3CGetEnumeratorU3Ed__10_tC2CCC09794715D3A40FB005ED4800D913E46029A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__10_System_Collections_IEnumerator_get_Current_m5470D12AD05B9643403FE02AB4C1193B75783A55_gshared (U3CGetEnumeratorU3Ed__10_tC2CCC09794715D3A40FB005ED4800D913E46029A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 L_0 = __this->___U3CU3E2__current;
		BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 L_1 = L_0;
		RuntimeObject* L_2 = Box(BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3_il2cpp_TypeInfo_var, &L_1);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__10__ctor_m51E800BBF90E00B831D9677E0B770CA60A3DF340_gshared (U3CGetEnumeratorU3Ed__10_t9346CA1CE8CF84ACA75D409CAE6DE9866AEE1B79* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__10_System_IDisposable_Dispose_mBB0FE0180EBAB25E8100AFD56EF55B36152FD65B_gshared (U3CGetEnumeratorU3Ed__10_t9346CA1CE8CF84ACA75D409CAE6DE9866AEE1B79* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__10_MoveNext_m838469249E98129B15D94E371D2E920FB837CE6E_gshared (U3CGetEnumeratorU3Ed__10_t9346CA1CE8CF84ACA75D409CAE6DE9866AEE1B79* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_005f;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), 0);
		int32_t L_3;
		L_3 = SplineRange_get_Count_m71E1A150F7E1896F91C2CE285E2CB86473D675A4_inline((((SplineRange_tCB51EBCFA5858BB48FEC33EF009AA4E0B75772B1*)il2cpp_codegen_get_instance_field_data_pointer((((SplineSlice_1_t648786FC04C18926A426A2F2872A7B8B2DEA4B99*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1)))), NULL);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_3);
		goto IL_0076;
	}

IL_003f:
	{
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 L_5;
		L_5 = ((  BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 (*) (SplineSlice_1_t648786FC04C18926A426A2F2872A7B8B2DEA4B99*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((((SplineSlice_1_t648786FC04C18926A426A2F2872A7B8B2DEA4B99*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))), L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		il2cpp_codegen_write_instance_field_data<BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_5);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
		return (bool)1;
	}

IL_005f:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		int32_t L_6 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_1;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_7);
	}

IL_0076:
	{
		int32_t L_8 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		int32_t L_9 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		V_2 = (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_2;
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 U3CGetEnumeratorU3Ed__10_System_Collections_Generic_IEnumeratorU3CUnityEngine_Splines_BezierKnotU3E_get_Current_m199B19B03C113F642CF0557E65AE81009AAEA4EC_gshared (U3CGetEnumeratorU3Ed__10_t9346CA1CE8CF84ACA75D409CAE6DE9866AEE1B79* __this, const RuntimeMethod* method) 
{
	{
		BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 L_0 = *(BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__10_System_Collections_IEnumerator_Reset_m6DBCA8E74FD790E41429C7052E837C8AA298E60C_gshared (U3CGetEnumeratorU3Ed__10_t9346CA1CE8CF84ACA75D409CAE6DE9866AEE1B79* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__10_System_Collections_IEnumerator_get_Current_mAC866D7B6E4D039A07F4D013161BB858CB006DA1_gshared (U3CGetEnumeratorU3Ed__10_t9346CA1CE8CF84ACA75D409CAE6DE9866AEE1B79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 L_0 = *(BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 L_1 = L_0;
		RuntimeObject* L_2 = Box(BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3_il2cpp_TypeInfo_var, &L_1);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__12__ctor_m953833D39380D4BB54F9C489EB5914C5BFF90E92_gshared (U3CGetEnumeratorU3Ed__12_t5786B9631F2D28B78F4B69FD4A59FCE5AF8D9CC0* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__12_System_IDisposable_Dispose_m5570DF2CA295872216B95CD085FBC0B553C2A1EF_gshared (U3CGetEnumeratorU3Ed__12_t5786B9631F2D28B78F4B69FD4A59FCE5AF8D9CC0* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__12_MoveNext_m10C5420B43CE12DE77AB5196786F67C48A6B8824_gshared (U3CGetEnumeratorU3Ed__12_t5786B9631F2D28B78F4B69FD4A59FCE5AF8D9CC0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state = (-1);
		Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* L_4 = V_1;
		NullCheck(L_4);
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_5 = L_4->___lastGrouping;
		__this->___U3CgU3E5__2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgU3E5__2), (void*)L_5);
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_6 = __this->___U3CgU3E5__2;
		if (!L_6)
		{
			goto IL_006d;
		}
	}

IL_0032:
	{
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_7 = __this->___U3CgU3E5__2;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_8 = *(Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2**)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),5));
		__this->___U3CgU3E5__2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgU3E5__2), (void*)L_8);
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_9 = __this->___U3CgU3E5__2;
		__this->___U3CU3E2__current = (RuntimeObject*)L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)(RuntimeObject*)L_9);
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state = (-1);
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_10 = __this->___U3CgU3E5__2;
		Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* L_11 = V_1;
		NullCheck(L_11);
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_12 = L_11->___lastGrouping;
		if ((!(((RuntimeObject*)(Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*)L_10) == ((RuntimeObject*)(Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*)L_12))))
		{
			goto IL_0032;
		}
	}

IL_006d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_Linq_IGroupingU3CTKeyU2CTElementU3EU3E_get_Current_m2305B1B8145EE2A62C7884E6CBC41AC0B1F7B697_gshared (U3CGetEnumeratorU3Ed__12_t5786B9631F2D28B78F4B69FD4A59FCE5AF8D9CC0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__12_System_Collections_IEnumerator_Reset_m64AC866CA0C7802D83A970E5D95F95F2F67EAA84_gshared (U3CGetEnumeratorU3Ed__12_t5786B9631F2D28B78F4B69FD4A59FCE5AF8D9CC0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__12_System_Collections_IEnumerator_get_Current_m08A6384AE654E0AAE70F7A43630AFA891EAA3C04_gshared (U3CGetEnumeratorU3Ed__12_t5786B9631F2D28B78F4B69FD4A59FCE5AF8D9CC0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__35__ctor_m081A1FE89C23793EF327B27268262718EDD11462_gshared (U3CGetEnumeratorU3Ed__35_tFBB72033DD97EBEE1D1AB495DD3A0C1827242215* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__35_System_IDisposable_Dispose_mC419C4B325BA00F95E941CFD9400EEC7B985DEB7_gshared (U3CGetEnumeratorU3Ed__35_tFBB72033DD97EBEE1D1AB495DD3A0C1827242215* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__35_MoveNext_m3D9E095DC37A90FDD234143F0DC7678CA8599CAA_gshared (U3CGetEnumeratorU3Ed__35_tFBB72033DD97EBEE1D1AB495DD3A0C1827242215* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0085;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state = (-1);
		ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* L_4 = V_1;
		NullCheck(L_4);
		Tables_t14D3B197594232ACFA76B87EB205EB3661F6EAA6* L_5 = L_4->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_5);
		NodeU5BU5D_t2D9C2B502AE419E91BEF20D4861A838720732B76* L_6 = L_5->____buckets;
		__this->___U3CbucketsU3E5__2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbucketsU3E5__2), (void*)L_6);
		__this->___U3CiU3E5__3 = 0;
		goto IL_00be;
	}

IL_003d:
	{
		NodeU5BU5D_t2D9C2B502AE419E91BEF20D4861A838720732B76* L_7 = __this->___U3CbucketsU3E5__2;
		int32_t L_8 = __this->___U3CiU3E5__3;
		NullCheck(L_7);
		Node_t821211F0535E80E80FDC8FFB600F681E98286BF0* L_9;
		L_9 = VolatileRead(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))));
		__this->___U3CcurrentU3E5__4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentU3E5__4), (void*)L_9);
		goto IL_009f;
	}

IL_005b:
	{
		Node_t821211F0535E80E80FDC8FFB600F681E98286BF0* L_10 = __this->___U3CcurrentU3E5__4;
		NullCheck(L_10);
		RuntimeObject* L_11 = L_10->____key;
		Node_t821211F0535E80E80FDC8FFB600F681E98286BF0* L_12 = __this->___U3CcurrentU3E5__4;
		NullCheck(L_12);
		RuntimeObject* L_13 = L_12->____value;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_14;
		memset((&L_14), 0, sizeof(L_14));
		KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950((&L_14), L_11, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		__this->___U3CU3E2__current = L_14;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___value), (void*)NULL);
		#endif
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_0085:
	{
		__this->___U3CU3E1__state = (-1);
		Node_t821211F0535E80E80FDC8FFB600F681E98286BF0* L_15 = __this->___U3CcurrentU3E5__4;
		NullCheck(L_15);
		Node_t821211F0535E80E80FDC8FFB600F681E98286BF0* L_16 = L_15->____next;
		il2cpp_codegen_memory_barrier();
		__this->___U3CcurrentU3E5__4 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentU3E5__4), (void*)L_16);
	}

IL_009f:
	{
		Node_t821211F0535E80E80FDC8FFB600F681E98286BF0* L_17 = __this->___U3CcurrentU3E5__4;
		if (L_17)
		{
			goto IL_005b;
		}
	}
	{
		__this->___U3CcurrentU3E5__4 = (Node_t821211F0535E80E80FDC8FFB600F681E98286BF0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentU3E5__4), (void*)(Node_t821211F0535E80E80FDC8FFB600F681E98286BF0*)NULL);
		int32_t L_18 = __this->___U3CiU3E5__3;
		V_2 = L_18;
		int32_t L_19 = V_2;
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_00be:
	{
		int32_t L_20 = __this->___U3CiU3E5__3;
		NodeU5BU5D_t2D9C2B502AE419E91BEF20D4861A838720732B76* L_21 = __this->___U3CbucketsU3E5__2;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 U3CGetEnumeratorU3Ed__35_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_Current_m4C814BB677DE72DABBD4F3FA5C18693DB4DF2C80_gshared (U3CGetEnumeratorU3Ed__35_tFBB72033DD97EBEE1D1AB495DD3A0C1827242215* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__35_System_Collections_IEnumerator_Reset_mC076EBC85BEA8C6BBD6000C7CDB836898EA57C86_gshared (U3CGetEnumeratorU3Ed__35_tFBB72033DD97EBEE1D1AB495DD3A0C1827242215* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__35_System_Collections_IEnumerator_get_Current_m2C50F6E9AB2D743BB0D2163CC0B8B59C0EEFA222_gshared (U3CGetEnumeratorU3Ed__35_tFBB72033DD97EBEE1D1AB495DD3A0C1827242215* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = __this->___U3CU3E2__current;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), &L_1);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__35__ctor_mAA657A1A6BB8899C8EA5794709BE50B2D31D17AD_gshared (U3CGetEnumeratorU3Ed__35_t5851A752199A6195E7EB427BC50C5FFCAB8D4E6E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__35_System_IDisposable_Dispose_m5E74525F9E0D828079C058474C9805E5406E8376_gshared (U3CGetEnumeratorU3Ed__35_t5851A752199A6195E7EB427BC50C5FFCAB8D4E6E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__35_MoveNext_m26BB00E5C3D192DD2E14E2DC62721C0286F5EF16_gshared (U3CGetEnumeratorU3Ed__35_t5851A752199A6195E7EB427BC50C5FFCAB8D4E6E* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tCC6B29F5B3ECDC48DA55B051B543697C7D8F0C10 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const uint32_t SizeOf_TValue_t4F488A851F73E55CB1E462A046C792E0B08BEF27 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const uint32_t SizeOf_KeyValuePair_2_tD9757DA6FC0F26A42D06A8ED5CE2FF855BD847C9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TKey_tCC6B29F5B3ECDC48DA55B051B543697C7D8F0C10);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TKey_tCC6B29F5B3ECDC48DA55B051B543697C7D8F0C10);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TValue_t4F488A851F73E55CB1E462A046C792E0B08BEF27);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_TValue_t4F488A851F73E55CB1E462A046C792E0B08BEF27);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_16 = alloca(SizeOf_KeyValuePair_2_tD9757DA6FC0F26A42D06A8ED5CE2FF855BD847C9);
	int32_t V_0 = 0;
	ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
		ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* L_1 = *(ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0085;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* L_4 = V_1;
		NullCheck(L_4);
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_5 = L_4->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_5);
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_6 = L_5->____buckets;
		il2cpp_codegen_write_instance_field_data<NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_6);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), 0);
		goto IL_00be;
	}

IL_003d:
	{
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_7 = *(NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		int32_t L_8 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NullCheck(L_7);
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_9;
		L_9 = ((  Node_tC5111E77A2002D0AD173457666915D4D0BD59865* (*) (Node_tC5111E77A2002D0AD173457666915D4D0BD59865**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		il2cpp_codegen_write_instance_field_data<Node_tC5111E77A2002D0AD173457666915D4D0BD59865*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_9);
		goto IL_009f;
	}

IL_005b:
	{
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_10 = *(Node_tC5111E77A2002D0AD173457666915D4D0BD59865**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(L_10, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),0)), SizeOf_TKey_tCC6B29F5B3ECDC48DA55B051B543697C7D8F0C10);
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_12 = *(Node_tC5111E77A2002D0AD173457666915D4D0BD59865**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),1)), SizeOf_TValue_t4F488A851F73E55CB1E462A046C792E0B08BEF27);
		memset(L_16, 0, SizeOf_KeyValuePair_2_tD9757DA6FC0F26A42D06A8ED5CE2FF855BD847C9);
		KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8)) ? il2cpp_codegen_memcpy(L_14, L_11, SizeOf_TKey_tCC6B29F5B3ECDC48DA55B051B543697C7D8F0C10): *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? il2cpp_codegen_memcpy(L_15, L_13, SizeOf_TValue_t4F488A851F73E55CB1E462A046C792E0B08BEF27): *(void**)L_13), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_16, SizeOf_KeyValuePair_2_tD9757DA6FC0F26A42D06A8ED5CE2FF855BD847C9);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
		return (bool)1;
	}

IL_0085:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_17 = *(Node_tC5111E77A2002D0AD173457666915D4D0BD59865**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_18 = *(Node_tC5111E77A2002D0AD173457666915D4D0BD59865**)il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),2));
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_write_instance_field_data<Node_tC5111E77A2002D0AD173457666915D4D0BD59865*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_18);
	}

IL_009f:
	{
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_19 = *(Node_tC5111E77A2002D0AD173457666915D4D0BD59865**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		if (L_19)
		{
			goto IL_005b;
		}
	}
	{
		il2cpp_codegen_write_instance_field_data<Node_tC5111E77A2002D0AD173457666915D4D0BD59865*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), (Node_tC5111E77A2002D0AD173457666915D4D0BD59865*)NULL);
		int32_t L_20 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		V_2 = L_20;
		int32_t L_21 = V_2;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), ((int32_t)il2cpp_codegen_add(L_21, 1)));
	}

IL_00be:
	{
		int32_t L_22 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_23 = *(NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__35_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_Current_mCEB6D17DD950C42AB064FB68FE2EF713618847BB_gshared (U3CGetEnumeratorU3Ed__35_t5851A752199A6195E7EB427BC50C5FFCAB8D4E6E* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_tD9757DA6FC0F26A42D06A8ED5CE2FF855BD847C9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_0 = alloca(SizeOf_KeyValuePair_2_tD9757DA6FC0F26A42D06A8ED5CE2FF855BD847C9);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_KeyValuePair_2_tD9757DA6FC0F26A42D06A8ED5CE2FF855BD847C9);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_KeyValuePair_2_tD9757DA6FC0F26A42D06A8ED5CE2FF855BD847C9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__35_System_Collections_IEnumerator_Reset_m327E18E2CCB7B70E31F4F6FA4D38001D581C577F_gshared (U3CGetEnumeratorU3Ed__35_t5851A752199A6195E7EB427BC50C5FFCAB8D4E6E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__35_System_Collections_IEnumerator_get_Current_mBF502423683D06AA24D587EF40D4DD9DC55B60A1_gshared (U3CGetEnumeratorU3Ed__35_t5851A752199A6195E7EB427BC50C5FFCAB8D4E6E* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_tD9757DA6FC0F26A42D06A8ED5CE2FF855BD847C9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_0 = alloca(SizeOf_KeyValuePair_2_tD9757DA6FC0F26A42D06A8ED5CE2FF855BD847C9);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_KeyValuePair_2_tD9757DA6FC0F26A42D06A8ED5CE2FF855BD847C9);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__46__ctor_mE024EF8576C0B926A6EF5C3417FA65A0183ECECB_gshared (U3CGetEnumeratorU3Ed__46_t6EA4F0A44BEB531AC925F17E0723699D66738AFA* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__46_System_IDisposable_Dispose_m0C3F574D2B6C145CCE53B33DB5582E1FBB70217E_gshared (U3CGetEnumeratorU3Ed__46_t6EA4F0A44BEB531AC925F17E0723699D66738AFA* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__46_MoveNext_m5FB073ED5E23B2371A2E162021DFC32A6C131D00_gshared (U3CGetEnumeratorU3Ed__46_t6EA4F0A44BEB531AC925F17E0723699D66738AFA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_005f;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state = (-1);
		__this->___U3CiU3E5__1 = 0;
		SplineData_1_tF29E811708B706899A292A38A9FFA70C7F10141C* L_3 = __this->___U3CU3E4__this;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SplineData_1_get_Count_mE8FD1023A49410263923F7750AA1BA94E9E95853(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		__this->___U3CcU3E5__2 = L_4;
		goto IL_0076;
	}

IL_003a:
	{
		SplineData_1_tF29E811708B706899A292A38A9FFA70C7F10141C* L_5 = __this->___U3CU3E4__this;
		NullCheck(L_5);
		List_1_t541EE8DDCC1D53F6905C8DBD81D9127781986CA3* L_6 = L_5->___m_DataPoints;
		int32_t L_7 = __this->___U3CiU3E5__1;
		NullCheck(L_6);
		DataPoint_1_tC38A0A55D491338BA0D06FDD08D22F84E99773CE L_8;
		L_8 = List_1_get_Item_m562CD6C420F361C80C35FF6A0A932627ACB7B36F(L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_8;
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_005f:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_9 = __this->___U3CiU3E5__1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		int32_t L_10 = V_1;
		__this->___U3CiU3E5__1 = L_10;
	}

IL_0076:
	{
		int32_t L_11 = __this->___U3CiU3E5__1;
		int32_t L_12 = __this->___U3CcU3E5__2;
		V_2 = (bool)((((int32_t)L_11) < ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_2;
		if (L_13)
		{
			goto IL_003a;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataPoint_1_tC38A0A55D491338BA0D06FDD08D22F84E99773CE U3CGetEnumeratorU3Ed__46_System_Collections_Generic_IEnumeratorU3CUnityEngine_Splines_DataPointU3CTU3EU3E_get_Current_mB3A085E22FC12FEB35BA2BAFFBF4C2B509FE35E6_gshared (U3CGetEnumeratorU3Ed__46_t6EA4F0A44BEB531AC925F17E0723699D66738AFA* __this, const RuntimeMethod* method) 
{
	{
		DataPoint_1_tC38A0A55D491338BA0D06FDD08D22F84E99773CE L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__46_System_Collections_IEnumerator_Reset_m644DAD2BD4D7B91587435662CA78C5887342FEEA_gshared (U3CGetEnumeratorU3Ed__46_t6EA4F0A44BEB531AC925F17E0723699D66738AFA* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__46_System_Collections_IEnumerator_get_Current_m195413F405922891BB9ABACF3B9C63E657817BF0_gshared (U3CGetEnumeratorU3Ed__46_t6EA4F0A44BEB531AC925F17E0723699D66738AFA* __this, const RuntimeMethod* method) 
{
	{
		DataPoint_1_tC38A0A55D491338BA0D06FDD08D22F84E99773CE L_0 = __this->___U3CU3E2__current;
		DataPoint_1_tC38A0A55D491338BA0D06FDD08D22F84E99773CE L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), &L_1);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__46__ctor_mBFC73DA7CC77F5563BBB9331CF039D1D69A2380E_gshared (U3CGetEnumeratorU3Ed__46_t20FC2A1ECE38773FDEF6C8B8F35293D3CBC5DE4A* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__46_System_IDisposable_Dispose_m92518D6AC9A654F3C17DC9817F6E6E92D4313EA4_gshared (U3CGetEnumeratorU3Ed__46_t20FC2A1ECE38773FDEF6C8B8F35293D3CBC5DE4A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__46_MoveNext_m3D22D1FC88B545E653D5C8B3C7A45F2CC7E433E4_gshared (U3CGetEnumeratorU3Ed__46_t20FC2A1ECE38773FDEF6C8B8F35293D3CBC5DE4A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_005f;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state = (-1);
		__this->___U3CiU3E5__1 = 0;
		SplineData_1_t8108212EF9C2518D2EC261D68CDCE4DC31B6D1D7* L_3 = __this->___U3CU3E4__this;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SplineData_1_get_Count_m79BA6F8A3AF83731A0B42186FF291721DD5E4B44(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		__this->___U3CcU3E5__2 = L_4;
		goto IL_0076;
	}

IL_003a:
	{
		SplineData_1_t8108212EF9C2518D2EC261D68CDCE4DC31B6D1D7* L_5 = __this->___U3CU3E4__this;
		NullCheck(L_5);
		List_1_tD9872A844B68161ADA39834AF99EB065DB91B8E3* L_6 = L_5->___m_DataPoints;
		int32_t L_7 = __this->___U3CiU3E5__1;
		NullCheck(L_6);
		DataPoint_1_tD1BFCB1B6A9F7919FCA0852C613D2B338AE88758 L_8;
		L_8 = List_1_get_Item_mF0989BF058FF6CB5979F305BB12B39B88DF87E75(L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_8;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___m_Value), (void*)NULL);
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_005f:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_9 = __this->___U3CiU3E5__1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		int32_t L_10 = V_1;
		__this->___U3CiU3E5__1 = L_10;
	}

IL_0076:
	{
		int32_t L_11 = __this->___U3CiU3E5__1;
		int32_t L_12 = __this->___U3CcU3E5__2;
		V_2 = (bool)((((int32_t)L_11) < ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_2;
		if (L_13)
		{
			goto IL_003a;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataPoint_1_tD1BFCB1B6A9F7919FCA0852C613D2B338AE88758 U3CGetEnumeratorU3Ed__46_System_Collections_Generic_IEnumeratorU3CUnityEngine_Splines_DataPointU3CTU3EU3E_get_Current_mB8E6B660576042D0803EC69DADA6EEDB0B6195BD_gshared (U3CGetEnumeratorU3Ed__46_t20FC2A1ECE38773FDEF6C8B8F35293D3CBC5DE4A* __this, const RuntimeMethod* method) 
{
	{
		DataPoint_1_tD1BFCB1B6A9F7919FCA0852C613D2B338AE88758 L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__46_System_Collections_IEnumerator_Reset_m419977753E9E363967C06DEB3205EF0CBD71C4F1_gshared (U3CGetEnumeratorU3Ed__46_t20FC2A1ECE38773FDEF6C8B8F35293D3CBC5DE4A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__46_System_Collections_IEnumerator_get_Current_m94650CDA17395335DCD22D1EAD3DFC866CF7DA9A_gshared (U3CGetEnumeratorU3Ed__46_t20FC2A1ECE38773FDEF6C8B8F35293D3CBC5DE4A* __this, const RuntimeMethod* method) 
{
	{
		DataPoint_1_tD1BFCB1B6A9F7919FCA0852C613D2B338AE88758 L_0 = __this->___U3CU3E2__current;
		DataPoint_1_tD1BFCB1B6A9F7919FCA0852C613D2B338AE88758 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), &L_1);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__46__ctor_m13D41E23E4EB6431F8194D22871918B397854D28_gshared (U3CGetEnumeratorU3Ed__46_t5A2636A2C410BE54A8AC8F1BE5E7E59294B26EE5* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__46_System_IDisposable_Dispose_mB9DA7BDC9D47BDDA9BE496BF9EF9B12AF54D4681_gshared (U3CGetEnumeratorU3Ed__46_t5A2636A2C410BE54A8AC8F1BE5E7E59294B26EE5* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__46_MoveNext_m3A3A7DB8921FF52A7FF792A06581E0C01AF6061A_gshared (U3CGetEnumeratorU3Ed__46_t5A2636A2C410BE54A8AC8F1BE5E7E59294B26EE5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_005f;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state = (-1);
		__this->___U3CiU3E5__1 = 0;
		SplineData_1_t76C1101E75006280CD34A238E2294898514C06A6* L_3 = __this->___U3CU3E4__this;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SplineData_1_get_Count_m9CA59F1EE706A934FF03BAD2322530CEF5811E10(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		__this->___U3CcU3E5__2 = L_4;
		goto IL_0076;
	}

IL_003a:
	{
		SplineData_1_t76C1101E75006280CD34A238E2294898514C06A6* L_5 = __this->___U3CU3E4__this;
		NullCheck(L_5);
		List_1_t9D22296249BE15200FF3C85F0ECC939FB09F55EA* L_6 = L_5->___m_DataPoints;
		int32_t L_7 = __this->___U3CiU3E5__1;
		NullCheck(L_6);
		DataPoint_1_t6B7B80D91DA21439876F6D0784049FBEDDB60761 L_8;
		L_8 = List_1_get_Item_m535A9F0D144518B454D91B40D9753FF90B752B01(L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_8;
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_005f:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_9 = __this->___U3CiU3E5__1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		int32_t L_10 = V_1;
		__this->___U3CiU3E5__1 = L_10;
	}

IL_0076:
	{
		int32_t L_11 = __this->___U3CiU3E5__1;
		int32_t L_12 = __this->___U3CcU3E5__2;
		V_2 = (bool)((((int32_t)L_11) < ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_2;
		if (L_13)
		{
			goto IL_003a;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataPoint_1_t6B7B80D91DA21439876F6D0784049FBEDDB60761 U3CGetEnumeratorU3Ed__46_System_Collections_Generic_IEnumeratorU3CUnityEngine_Splines_DataPointU3CTU3EU3E_get_Current_m8C5A5CF86FA4D8B70EFCA315082E51804286533D_gshared (U3CGetEnumeratorU3Ed__46_t5A2636A2C410BE54A8AC8F1BE5E7E59294B26EE5* __this, const RuntimeMethod* method) 
{
	{
		DataPoint_1_t6B7B80D91DA21439876F6D0784049FBEDDB60761 L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__46_System_Collections_IEnumerator_Reset_m821E968814529B8E91C0769CACA9DAC278FB50C3_gshared (U3CGetEnumeratorU3Ed__46_t5A2636A2C410BE54A8AC8F1BE5E7E59294B26EE5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__46_System_Collections_IEnumerator_get_Current_mB6C034CBB73FD93968361CA53F951DBCE49F4320_gshared (U3CGetEnumeratorU3Ed__46_t5A2636A2C410BE54A8AC8F1BE5E7E59294B26EE5* __this, const RuntimeMethod* method) 
{
	{
		DataPoint_1_t6B7B80D91DA21439876F6D0784049FBEDDB60761 L_0 = __this->___U3CU3E2__current;
		DataPoint_1_t6B7B80D91DA21439876F6D0784049FBEDDB60761 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), &L_1);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__46__ctor_m03D4D7B069A61166408F56CEA10D7B20C5F73E15_gshared (U3CGetEnumeratorU3Ed__46_t18856EC86B980BAB08645469ED3896C6D5FC485A* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__46_System_IDisposable_Dispose_m775084EDDF2450BD8F7E5AB278EF7CA2136493D7_gshared (U3CGetEnumeratorU3Ed__46_t18856EC86B980BAB08645469ED3896C6D5FC485A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__46_MoveNext_m23D0EDCE8012E67845DF706B2493CBB67020D1C4_gshared (U3CGetEnumeratorU3Ed__46_t18856EC86B980BAB08645469ED3896C6D5FC485A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_DataPoint_1_t53C68C59AB1D0F26CEF6553C5386EEF53526FCAE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const DataPoint_1_tB4B57FF5C045044B0B4FC8A968B685C6E30D9B71 L_8 = alloca(SizeOf_DataPoint_1_t53C68C59AB1D0F26CEF6553C5386EEF53526FCAE);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_005f;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), 0);
		SplineData_1_t5A8AEB81C09C644A42275D7C08D086BF9B2F365E* L_3 = *(SplineData_1_t5A8AEB81C09C644A42275D7C08D086BF9B2F365E**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_3);
		int32_t L_4;
		L_4 = ((  int32_t (*) (SplineData_1_t5A8AEB81C09C644A42275D7C08D086BF9B2F365E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_4);
		goto IL_0076;
	}

IL_003a:
	{
		SplineData_1_t5A8AEB81C09C644A42275D7C08D086BF9B2F365E* L_5 = *(SplineData_1_t5A8AEB81C09C644A42275D7C08D086BF9B2F365E**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		List_1_tD037C2F2F7A897D6A2C8A84A0B079A74AD9933D2* L_6 = *(List_1_tD037C2F2F7A897D6A2C8A84A0B079A74AD9933D2**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3));
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		NullCheck(L_6);
		InvokerActionInvoker2< int32_t, DataPoint_1_tB4B57FF5C045044B0B4FC8A968B685C6E30D9B71* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_6, L_7, (DataPoint_1_tB4B57FF5C045044B0B4FC8A968B685C6E30D9B71*)L_8);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_8, SizeOf_DataPoint_1_t53C68C59AB1D0F26CEF6553C5386EEF53526FCAE);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
		return (bool)1;
	}

IL_005f:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		int32_t L_9 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		int32_t L_10 = V_1;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_10);
	}

IL_0076:
	{
		int32_t L_11 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		V_2 = (bool)((((int32_t)L_11) < ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_2;
		if (L_13)
		{
			goto IL_003a;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__46_System_Collections_Generic_IEnumeratorU3CUnityEngine_Splines_DataPointU3CTU3EU3E_get_Current_mE54081F1DFDE321155478127B9394C4B91D456EC_gshared (U3CGetEnumeratorU3Ed__46_t18856EC86B980BAB08645469ED3896C6D5FC485A* __this, DataPoint_1_tB4B57FF5C045044B0B4FC8A968B685C6E30D9B71* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_DataPoint_1_t53C68C59AB1D0F26CEF6553C5386EEF53526FCAE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const DataPoint_1_tB4B57FF5C045044B0B4FC8A968B685C6E30D9B71 L_0 = alloca(SizeOf_DataPoint_1_t53C68C59AB1D0F26CEF6553C5386EEF53526FCAE);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_DataPoint_1_t53C68C59AB1D0F26CEF6553C5386EEF53526FCAE);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_DataPoint_1_t53C68C59AB1D0F26CEF6553C5386EEF53526FCAE);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__46_System_Collections_IEnumerator_Reset_m3DF330368F69E307A1DF54C61D69B0B4DA052776_gshared (U3CGetEnumeratorU3Ed__46_t18856EC86B980BAB08645469ED3896C6D5FC485A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__46_System_Collections_IEnumerator_get_Current_mC271E1EC660424838752E0878DA291CEB588BFBD_gshared (U3CGetEnumeratorU3Ed__46_t18856EC86B980BAB08645469ED3896C6D5FC485A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_DataPoint_1_t53C68C59AB1D0F26CEF6553C5386EEF53526FCAE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const DataPoint_1_tB4B57FF5C045044B0B4FC8A968B685C6E30D9B71 L_0 = alloca(SizeOf_DataPoint_1_t53C68C59AB1D0F26CEF6553C5386EEF53526FCAE);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_DataPoint_1_t53C68C59AB1D0F26CEF6553C5386EEF53526FCAE);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__46__ctor_mFB3D5DCC586EA47FD729862A3A85B2DB728F1814_gshared (U3CGetEnumeratorU3Ed__46_t9A2B20F8159657645800A9F875378F7013A310EE* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__46_System_IDisposable_Dispose_m1D94C945456D402E2E3EF104ED43894A8298E335_gshared (U3CGetEnumeratorU3Ed__46_t9A2B20F8159657645800A9F875378F7013A310EE* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__46_MoveNext_m563ABE55AE31A16BA193479E1A9259E576D1CC46_gshared (U3CGetEnumeratorU3Ed__46_t9A2B20F8159657645800A9F875378F7013A310EE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_005f;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state = (-1);
		__this->___U3CiU3E5__1 = 0;
		SplineData_1_t5E765EAB32A437A18736ABFCD420E397DC3E49DD* L_3 = __this->___U3CU3E4__this;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SplineData_1_get_Count_m8EED641C2214A2987EF1836D5F287071C67A38C7(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		__this->___U3CcU3E5__2 = L_4;
		goto IL_0076;
	}

IL_003a:
	{
		SplineData_1_t5E765EAB32A437A18736ABFCD420E397DC3E49DD* L_5 = __this->___U3CU3E4__this;
		NullCheck(L_5);
		List_1_t20C832540BA4E58AD237892E38A73E53966C5115* L_6 = L_5->___m_DataPoints;
		int32_t L_7 = __this->___U3CiU3E5__1;
		NullCheck(L_6);
		DataPoint_1_t3259A8738D178774B1BF86D6B638F3A10EEC06F1 L_8;
		L_8 = List_1_get_Item_mDA20EFC26F62D2BDE4DAF5ADABA9912DFD8C873F(L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_8;
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_005f:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_9 = __this->___U3CiU3E5__1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		int32_t L_10 = V_1;
		__this->___U3CiU3E5__1 = L_10;
	}

IL_0076:
	{
		int32_t L_11 = __this->___U3CiU3E5__1;
		int32_t L_12 = __this->___U3CcU3E5__2;
		V_2 = (bool)((((int32_t)L_11) < ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_2;
		if (L_13)
		{
			goto IL_003a;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataPoint_1_t3259A8738D178774B1BF86D6B638F3A10EEC06F1 U3CGetEnumeratorU3Ed__46_System_Collections_Generic_IEnumeratorU3CUnityEngine_Splines_DataPointU3CTU3EU3E_get_Current_mAD9518485A826113CA26424E7BC7F14B304CED92_gshared (U3CGetEnumeratorU3Ed__46_t9A2B20F8159657645800A9F875378F7013A310EE* __this, const RuntimeMethod* method) 
{
	{
		DataPoint_1_t3259A8738D178774B1BF86D6B638F3A10EEC06F1 L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__46_System_Collections_IEnumerator_Reset_m8ADB19F45E6A4009681EDAB2E5B9E1253DF167E2_gshared (U3CGetEnumeratorU3Ed__46_t9A2B20F8159657645800A9F875378F7013A310EE* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__46_System_Collections_IEnumerator_get_Current_mA18AA3DF74AEB2EAC516B3878175D305F36FD904_gshared (U3CGetEnumeratorU3Ed__46_t9A2B20F8159657645800A9F875378F7013A310EE* __this, const RuntimeMethod* method) 
{
	{
		DataPoint_1_t3259A8738D178774B1BF86D6B638F3A10EEC06F1 L_0 = __this->___U3CU3E2__current;
		DataPoint_1_t3259A8738D178774B1BF86D6B638F3A10EEC06F1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), &L_1);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__7__ctor_m928532858B6546F97B85E8D0AE9002CB8DF73C95_gshared (U3CGetEnumeratorU3Ed__7_t810581FDA129E29DFDF7A45244DCF67D0B085FC6* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__7_System_IDisposable_Dispose_mCEB34406B0F792844FCA69948EB262C85BFA8487_gshared (U3CGetEnumeratorU3Ed__7_t810581FDA129E29DFDF7A45244DCF67D0B085FC6* __this, const RuntimeMethod* method) 
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
				U3CGetEnumeratorU3Ed__7_U3CU3Em__Finally1_mED78C5E5996270A37EEAAC66923DF3E20AE5482D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__7_MoveNext_mE5DE75BCA437161D160BBFA78EE5AC612EC4AA81_gshared (U3CGetEnumeratorU3Ed__7_t810581FDA129E29DFDF7A45244DCF67D0B085FC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t44A5BD29425024C69D2E7244DFEEF3410CB1F4CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_010e:
			{
				U3CGetEnumeratorU3Ed__7_System_IDisposable_Dispose_mCEB34406B0F792844FCA69948EB262C85BFA8487(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
				goto IL_0019_1;
			}

IL_0012_1:
			{
				goto IL_0020_1;
			}

IL_0014_1:
			{
				goto IL_00a7_1;
			}

IL_0019_1:
			{
				V_0 = (bool)0;
				goto IL_0116;
			}

IL_0020_1:
			{
				__this->___U3CU3E1__state = (-1);
				SplinePath_1_t72CDDB4842573EC5B6F9AC5A495FF276FDB118A9* L_3 = __this->___U3CU3E4__this;
				NullCheck(L_3);
				SplineSlice_1U5BU5D_tF9B09333D66FA55C57D3956FC46305B333F23AD2* L_4 = L_3->___m_Splines;
				__this->___U3CU3Es__1 = L_4;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1), (void*)L_4);
				__this->___U3CU3Es__2 = 0;
				goto IL_00f0_1;
			}

IL_0046_1:
			{
				SplineSlice_1U5BU5D_tF9B09333D66FA55C57D3956FC46305B333F23AD2* L_5 = __this->___U3CU3Es__1;
				int32_t L_6 = __this->___U3CU3Es__2;
				NullCheck(L_5);
				int32_t L_7 = L_6;
				SplineSlice_1_t11281F34A00C6D5212DE9E4D85BED17D2705BB32 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
				__this->___U3CbranchU3E5__3 = L_8;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CbranchU3E5__3))->___Spline), (void*)NULL);
				SplineSlice_1_t11281F34A00C6D5212DE9E4D85BED17D2705BB32* L_9 = (SplineSlice_1_t11281F34A00C6D5212DE9E4D85BED17D2705BB32*)(&__this->___U3CbranchU3E5__3);
				RuntimeObject* L_10;
				L_10 = SplineSlice_1_GetEnumerator_mB7592E66C6CC33627ABD03647033C71321671C2D(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
				__this->___U3CU3Es__4 = L_10;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)L_10);
				__this->___U3CU3E1__state = ((int32_t)-3);
				goto IL_00bb_1;
			}

IL_007f_1:
			{
				RuntimeObject* L_11 = __this->___U3CU3Es__4;
				NullCheck(L_11);
				BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 L_12;
				L_12 = InterfaceFuncInvoker0< BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 >::Invoke(0, IEnumerator_1_t44A5BD29425024C69D2E7244DFEEF3410CB1F4CC_il2cpp_TypeInfo_var, L_11);
				__this->___U3CknotU3E5__5 = L_12;
				BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 L_13 = __this->___U3CknotU3E5__5;
				__this->___U3CU3E2__current = L_13;
				__this->___U3CU3E1__state = 1;
				V_0 = (bool)1;
				goto IL_0116;
			}

IL_00a7_1:
			{
				__this->___U3CU3E1__state = ((int32_t)-3);
				BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3* L_14 = (BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3*)(&__this->___U3CknotU3E5__5);
				il2cpp_codegen_initobj(L_14, sizeof(BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3));
			}

IL_00bb_1:
			{
				RuntimeObject* L_15 = __this->___U3CU3Es__4;
				NullCheck((RuntimeObject*)L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_007f_1;
				}
			}
			{
				U3CGetEnumeratorU3Ed__7_U3CU3Em__Finally1_mED78C5E5996270A37EEAAC66923DF3E20AE5482D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				__this->___U3CU3Es__4 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)(RuntimeObject*)NULL);
				SplineSlice_1_t11281F34A00C6D5212DE9E4D85BED17D2705BB32* L_17 = (SplineSlice_1_t11281F34A00C6D5212DE9E4D85BED17D2705BB32*)(&__this->___U3CbranchU3E5__3);
				il2cpp_codegen_initobj(L_17, sizeof(SplineSlice_1_t11281F34A00C6D5212DE9E4D85BED17D2705BB32));
				int32_t L_18 = __this->___U3CU3Es__2;
				__this->___U3CU3Es__2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
			}

IL_00f0_1:
			{
				int32_t L_19 = __this->___U3CU3Es__2;
				SplineSlice_1U5BU5D_tF9B09333D66FA55C57D3956FC46305B333F23AD2* L_20 = __this->___U3CU3Es__1;
				NullCheck(L_20);
				if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
				{
					goto IL_0046_1;
				}
			}
			{
				__this->___U3CU3Es__1 = (SplineSlice_1U5BU5D_tF9B09333D66FA55C57D3956FC46305B333F23AD2*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1), (void*)(SplineSlice_1U5BU5D_tF9B09333D66FA55C57D3956FC46305B333F23AD2*)NULL);
				V_0 = (bool)0;
				goto IL_0116;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0116:
	{
		bool L_21 = V_0;
		return L_21;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__7_U3CU3Em__Finally1_mED78C5E5996270A37EEAAC66923DF3E20AE5482D_gshared (U3CGetEnumeratorU3Ed__7_t810581FDA129E29DFDF7A45244DCF67D0B085FC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state = (-1);
		RuntimeObject* L_0 = __this->___U3CU3Es__4;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CU3Es__4;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_001b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 U3CGetEnumeratorU3Ed__7_System_Collections_Generic_IEnumeratorU3CUnityEngine_Splines_BezierKnotU3E_get_Current_m79B9B8F0B090E8DCF6AAE6C002BC4588BCDF8760_gshared (U3CGetEnumeratorU3Ed__7_t810581FDA129E29DFDF7A45244DCF67D0B085FC6* __this, const RuntimeMethod* method) 
{
	{
		BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__7_System_Collections_IEnumerator_Reset_mAEEE858F685E551E0BAAF8BF31A99303A6CF593B_gshared (U3CGetEnumeratorU3Ed__7_t810581FDA129E29DFDF7A45244DCF67D0B085FC6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__7_System_Collections_IEnumerator_get_Current_m3D266D03CD43F3A9510097361EC2A4C04ECF9397_gshared (U3CGetEnumeratorU3Ed__7_t810581FDA129E29DFDF7A45244DCF67D0B085FC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 L_0 = __this->___U3CU3E2__current;
		BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 L_1 = L_0;
		RuntimeObject* L_2 = Box(BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3_il2cpp_TypeInfo_var, &L_1);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__7__ctor_m0B6562F207BDECA67467C947620A74F9ED1C2502_gshared (U3CGetEnumeratorU3Ed__7_tC36163D2BC0734D81ABC8A351F1FB7F21DBC2740* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__7_System_IDisposable_Dispose_m50822703134D56C09AE8B07C37FCBD5CF6E3465D_gshared (U3CGetEnumeratorU3Ed__7_tC36163D2BC0734D81ABC8A351F1FB7F21DBC2740* __this, const RuntimeMethod* method) 
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
				U3CGetEnumeratorU3Ed__7_U3CU3Em__Finally1_mCB6E085EAFBDF03FC9E434DE407A140EFFB67283(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__7_MoveNext_m5E93F0AFDFFE488E8DD2365E61C7ADFADD810C8B_gshared (U3CGetEnumeratorU3Ed__7_tC36163D2BC0734D81ABC8A351F1FB7F21DBC2740* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t886E4934EB2332A59B1997F770130866B7054489_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t44A5BD29425024C69D2E7244DFEEF3410CB1F4CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_010e:
			{
				U3CGetEnumeratorU3Ed__7_System_IDisposable_Dispose_m50822703134D56C09AE8B07C37FCBD5CF6E3465D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
				goto IL_0019_1;
			}

IL_0012_1:
			{
				goto IL_0020_1;
			}

IL_0014_1:
			{
				goto IL_00a7_1;
			}

IL_0019_1:
			{
				V_0 = (bool)0;
				goto IL_0116;
			}

IL_0020_1:
			{
				__this->___U3CU3E1__state = (-1);
				SplinePath_1_t4A42A498CBF6AD8AD1108EACCC704F3EB561E767* L_3 = __this->___U3CU3E4__this;
				NullCheck(L_3);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3->___m_Splines;
				__this->___U3CU3Es__1 = L_4;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1), (void*)L_4);
				__this->___U3CU3Es__2 = 0;
				goto IL_00f0_1;
			}

IL_0046_1:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = __this->___U3CU3Es__1;
				int32_t L_6 = __this->___U3CU3Es__2;
				NullCheck(L_5);
				int32_t L_7 = L_6;
				RuntimeObject* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
				__this->___U3CbranchU3E5__3 = L_8;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbranchU3E5__3), (void*)L_8);
				RuntimeObject** L_9 = (RuntimeObject**)(&__this->___U3CbranchU3E5__3);
				NullCheck((RuntimeObject*)(*L_9));
				RuntimeObject* L_10;
				L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t886E4934EB2332A59B1997F770130866B7054489_il2cpp_TypeInfo_var, (RuntimeObject*)(*L_9));
				__this->___U3CU3Es__4 = L_10;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)L_10);
				__this->___U3CU3E1__state = ((int32_t)-3);
				goto IL_00bb_1;
			}

IL_007f_1:
			{
				RuntimeObject* L_11 = __this->___U3CU3Es__4;
				NullCheck(L_11);
				BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 L_12;
				L_12 = InterfaceFuncInvoker0< BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 >::Invoke(0, IEnumerator_1_t44A5BD29425024C69D2E7244DFEEF3410CB1F4CC_il2cpp_TypeInfo_var, L_11);
				__this->___U3CknotU3E5__5 = L_12;
				BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 L_13 = __this->___U3CknotU3E5__5;
				__this->___U3CU3E2__current = L_13;
				__this->___U3CU3E1__state = 1;
				V_0 = (bool)1;
				goto IL_0116;
			}

IL_00a7_1:
			{
				__this->___U3CU3E1__state = ((int32_t)-3);
				BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3* L_14 = (BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3*)(&__this->___U3CknotU3E5__5);
				il2cpp_codegen_initobj(L_14, sizeof(BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3));
			}

IL_00bb_1:
			{
				RuntimeObject* L_15 = __this->___U3CU3Es__4;
				NullCheck((RuntimeObject*)L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_007f_1;
				}
			}
			{
				U3CGetEnumeratorU3Ed__7_U3CU3Em__Finally1_mCB6E085EAFBDF03FC9E434DE407A140EFFB67283(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				__this->___U3CU3Es__4 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4), (void*)(RuntimeObject*)NULL);
				RuntimeObject** L_17 = (RuntimeObject**)(&__this->___U3CbranchU3E5__3);
				il2cpp_codegen_initobj(L_17, sizeof(RuntimeObject*));
				int32_t L_18 = __this->___U3CU3Es__2;
				__this->___U3CU3Es__2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
			}

IL_00f0_1:
			{
				int32_t L_19 = __this->___U3CU3Es__2;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = __this->___U3CU3Es__1;
				NullCheck(L_20);
				if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
				{
					goto IL_0046_1;
				}
			}
			{
				__this->___U3CU3Es__1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1), (void*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
				V_0 = (bool)0;
				goto IL_0116;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0116:
	{
		bool L_21 = V_0;
		return L_21;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__7_U3CU3Em__Finally1_mCB6E085EAFBDF03FC9E434DE407A140EFFB67283_gshared (U3CGetEnumeratorU3Ed__7_tC36163D2BC0734D81ABC8A351F1FB7F21DBC2740* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state = (-1);
		RuntimeObject* L_0 = __this->___U3CU3Es__4;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CU3Es__4;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_001b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 U3CGetEnumeratorU3Ed__7_System_Collections_Generic_IEnumeratorU3CUnityEngine_Splines_BezierKnotU3E_get_Current_m9C3C71C20FDCECDDE3029413EBE04B2B17F253F5_gshared (U3CGetEnumeratorU3Ed__7_tC36163D2BC0734D81ABC8A351F1FB7F21DBC2740* __this, const RuntimeMethod* method) 
{
	{
		BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__7_System_Collections_IEnumerator_Reset_mD804C13A1CC12EB92FE4AF6185C3BC28DC487A80_gshared (U3CGetEnumeratorU3Ed__7_tC36163D2BC0734D81ABC8A351F1FB7F21DBC2740* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__7_System_Collections_IEnumerator_get_Current_m819D4B8557ED977D3CDC776B132AAA924F48AE07_gshared (U3CGetEnumeratorU3Ed__7_tC36163D2BC0734D81ABC8A351F1FB7F21DBC2740* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 L_0 = __this->___U3CU3E2__current;
		BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 L_1 = L_0;
		RuntimeObject* L_2 = Box(BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3_il2cpp_TypeInfo_var, &L_1);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__7__ctor_m758896839DDB0071BE7328C04D0E7E181DC9C3C0_gshared (U3CGetEnumeratorU3Ed__7_t02BCED185E0D88610DFFAA325C2AF1FC843DC083* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__7_System_IDisposable_Dispose_m5A9258879A447F148A889452631812A0A7E301C0_gshared (U3CGetEnumeratorU3Ed__7_t02BCED185E0D88610DFFAA325C2AF1FC843DC083* __this, const RuntimeMethod* method) 
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
				((  void (*) (U3CGetEnumeratorU3Ed__7_t02BCED185E0D88610DFFAA325C2AF1FC843DC083*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__7_MoveNext_m7393D29DD9FBE6A102FA1F4FAC2EE6F958947A4F_gshared (U3CGetEnumeratorU3Ed__7_t02BCED185E0D88610DFFAA325C2AF1FC843DC083* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t44A5BD29425024C69D2E7244DFEEF3410CB1F4CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t0A09759E8DFA66411BC22D21C80EBD009A1E62BB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t0A09759E8DFA66411BC22D21C80EBD009A1E62BB);
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_010e:
			{
				((  void (*) (U3CGetEnumeratorU3Ed__7_t02BCED185E0D88610DFFAA325C2AF1FC843DC083*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
				goto IL_00a7_1;
			}

IL_0019_1:
			{
				V_0 = (bool)0;
				goto IL_0116;
			}

IL_0020_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
				SplinePath_1_t513E9875170FA8324971223A4F061E8B99150990* L_3 = *(SplinePath_1_t513E9875170FA8324971223A4F061E8B99150990**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
				NullCheck(L_3);
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = L_3->___m_Splines;
				il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_4);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), 0);
				goto IL_00f0_1;
			}

IL_0046_1:
			{
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				int32_t L_6 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
				NullCheck(L_5);
				int32_t L_7 = L_6;
				il2cpp_codegen_memcpy(L_8, (L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), SizeOf_T_t0A09759E8DFA66411BC22D21C80EBD009A1E62BB);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_8, SizeOf_T_t0A09759E8DFA66411BC22D21C80EBD009A1E62BB);
				RuntimeObject* L_10;
				L_10 = ConstrainedFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_9, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))));
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_10);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
				goto IL_00bb_1;
			}

IL_007f_1:
			{
				RuntimeObject* L_11 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_11);
				BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 L_12;
				L_12 = InterfaceFuncInvoker0< BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 >::Invoke(0, IEnumerator_1_t44A5BD29425024C69D2E7244DFEEF3410CB1F4CC_il2cpp_TypeInfo_var, L_11);
				il2cpp_codegen_write_instance_field_data<BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_12);
				BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 L_13 = *(BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				il2cpp_codegen_write_instance_field_data<BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_13);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
				V_0 = (bool)1;
				goto IL_0116;
			}

IL_00a7_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
				il2cpp_codegen_initobj((((BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), sizeof(BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3));
			}

IL_00bb_1:
			{
				RuntimeObject* L_14 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck((RuntimeObject*)L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
				if (L_15)
				{
					goto IL_007f_1;
				}
			}
			{
				((  void (*) (U3CGetEnumeratorU3Ed__7_t02BCED185E0D88610DFFAA325C2AF1FC843DC083*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), SizeOf_T_t0A09759E8DFA66411BC22D21C80EBD009A1E62BB);
				int32_t L_16 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), ((int32_t)il2cpp_codegen_add(L_16, 1)));
			}

IL_00f0_1:
			{
				int32_t L_17 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				NullCheck(L_18);
				if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
				{
					goto IL_0046_1;
				}
			}
			{
				il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL);
				V_0 = (bool)0;
				goto IL_0116;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0116:
	{
		bool L_19 = V_0;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__7_U3CU3Em__Finally1_mA363B8F761E01D6864C6A27E6BB8C4ADA2E7795F_gshared (U3CGetEnumeratorU3Ed__7_t02BCED185E0D88610DFFAA325C2AF1FC843DC083* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_001b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 U3CGetEnumeratorU3Ed__7_System_Collections_Generic_IEnumeratorU3CUnityEngine_Splines_BezierKnotU3E_get_Current_mFC15D34F7B47CD10B88C5167A1400E790DCC7B75_gshared (U3CGetEnumeratorU3Ed__7_t02BCED185E0D88610DFFAA325C2AF1FC843DC083* __this, const RuntimeMethod* method) 
{
	{
		BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 L_0 = *(BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__7_System_Collections_IEnumerator_Reset_m6D3BC5F76139CF2BB20467CD0BF54D0EB2A2E333_gshared (U3CGetEnumeratorU3Ed__7_t02BCED185E0D88610DFFAA325C2AF1FC843DC083* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__7_System_Collections_IEnumerator_get_Current_m6E052A016A75001A1FB90A50F552ED4CBF03D9B9_gshared (U3CGetEnumeratorU3Ed__7_t02BCED185E0D88610DFFAA325C2AF1FC843DC083* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 L_0 = *(BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3 L_1 = L_0;
		RuntimeObject* L_2 = Box(BezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3_il2cpp_TypeInfo_var, &L_1);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__7__ctor_mE7B5C9C214EF5E4DEEC45F29CB443E405D030B59_gshared (U3CGetEnumeratorU3Ed__7_t304805AB40FDB7AACAD6794711057294CDBB55EF* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__7_System_IDisposable_Dispose_m2551299F52F879FBBEFE877B872D139A9142C003_gshared (U3CGetEnumeratorU3Ed__7_t304805AB40FDB7AACAD6794711057294CDBB55EF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__7_MoveNext_mA7F732F2BB2469616F3D1D8BD5085EB78F1E90DB_gshared (U3CGetEnumeratorU3Ed__7_t304805AB40FDB7AACAD6794711057294CDBB55EF* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TElement_tF69803428ACAD34C846EA03225DD79A1A0F5B7A3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TElement_tF69803428ACAD34C846EA03225DD79A1A0F5B7A3);
	int32_t V_0 = 0;
	Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_1 = *(Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0047;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), 0);
		goto IL_005e;
	}

IL_0027:
	{
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_4 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2));
		int32_t L_6 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		NullCheck(L_5);
		int32_t L_7 = L_6;
		il2cpp_codegen_memcpy(L_8, (L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), SizeOf_TElement_tF69803428ACAD34C846EA03225DD79A1A0F5B7A3);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_8, SizeOf_TElement_tF69803428ACAD34C846EA03225DD79A1A0F5B7A3);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
		return (bool)1;
	}

IL_0047:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		int32_t L_9 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		V_2 = L_9;
		int32_t L_10 = V_2;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), ((int32_t)il2cpp_codegen_add(L_10, 1)));
	}

IL_005e:
	{
		int32_t L_11 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_12 = V_1;
		int32_t L_13 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3));
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0027;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__7_System_Collections_Generic_IEnumeratorU3CTElementU3E_get_Current_mD74548A46238986AEADD0534093EB3696CA6709C_gshared (U3CGetEnumeratorU3Ed__7_t304805AB40FDB7AACAD6794711057294CDBB55EF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TElement_tF69803428ACAD34C846EA03225DD79A1A0F5B7A3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TElement_tF69803428ACAD34C846EA03225DD79A1A0F5B7A3);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TElement_tF69803428ACAD34C846EA03225DD79A1A0F5B7A3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TElement_tF69803428ACAD34C846EA03225DD79A1A0F5B7A3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__7_System_Collections_IEnumerator_Reset_m40B332C17FBC9C91A5D5D59F5E11ADA949F06670_gshared (U3CGetEnumeratorU3Ed__7_t304805AB40FDB7AACAD6794711057294CDBB55EF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__7_System_Collections_IEnumerator_get_Current_m32139A40441D9A376FCAA0A358AF25F91C871987_gshared (U3CGetEnumeratorU3Ed__7_t304805AB40FDB7AACAD6794711057294CDBB55EF* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TElement_tF69803428ACAD34C846EA03225DD79A1A0F5B7A3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TElement_tF69803428ACAD34C846EA03225DD79A1A0F5B7A3);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TElement_tF69803428ACAD34C846EA03225DD79A1A0F5B7A3);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetPropertiesEnumerableU3Ed__4__ctor_m3CC84FB03E8062ED8979ABE86EE543992CA70A32_gshared (U3CGetPropertiesEnumerableU3Ed__4_t8F5798B4CB49F6D3131C452F9AC30F58B94A0938* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetPropertiesEnumerableU3Ed__4_System_IDisposable_Dispose_m1D108D0F2B8EEC92B16CB25EBEDF4D20B1D1283F_gshared (U3CGetPropertiesEnumerableU3Ed__4_t8F5798B4CB49F6D3131C452F9AC30F58B94A0938* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetPropertiesEnumerableU3Ed__4_MoveNext_m14978ABC48E77DD95E5FE6B64D6D609CFD31F6E3_gshared (U3CGetPropertiesEnumerableU3Ed__4_t8F5798B4CB49F6D3131C452F9AC30F58B94A0938* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_0021;
	}

IL_001b:
	{
		goto IL_0023;
	}

IL_001d:
	{
		goto IL_003f;
	}

IL_001f:
	{
		goto IL_005a;
	}

IL_0021:
	{
		return (bool)0;
	}

IL_0023:
	{
		__this->___U3CU3E1__state = (-1);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		DelegateProperty_2_tEF04A831D1787C45A1B56C36935D689DB49E2266* L_2 = ((KeyValuePairPropertyBag_2_t14F7E3ED1235C96F445409D9E1E028FC3090724E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___s_KeyProperty;
		__this->___U3CU3E2__current = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)(RuntimeObject*)L_2);
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_003f:
	{
		__this->___U3CU3E1__state = (-1);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		DelegateProperty_2_tEF04A831D1787C45A1B56C36935D689DB49E2266* L_3 = ((KeyValuePairPropertyBag_2_t14F7E3ED1235C96F445409D9E1E028FC3090724E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___s_ValueProperty;
		__this->___U3CU3E2__current = (RuntimeObject*)L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)(RuntimeObject*)L_3);
		__this->___U3CU3E1__state = 2;
		return (bool)1;
	}

IL_005a:
	{
		__this->___U3CU3E1__state = (-1);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetPropertiesEnumerableU3Ed__4_System_Collections_Generic_IEnumeratorU3CUnity_Properties_IPropertyU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3EU3E_get_Current_mD21C1C76152E8E7131682D98D08B039738234901_gshared (U3CGetPropertiesEnumerableU3Ed__4_t8F5798B4CB49F6D3131C452F9AC30F58B94A0938* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetPropertiesEnumerableU3Ed__4_System_Collections_IEnumerator_Reset_m9B7A2CD6635DA65C7C0981723F3DCD42E04223F3_gshared (U3CGetPropertiesEnumerableU3Ed__4_t8F5798B4CB49F6D3131C452F9AC30F58B94A0938* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetPropertiesEnumerableU3Ed__4_System_Collections_IEnumerator_get_Current_m8BE296F1C2A80C058561DDB3AFAD180FB92FF017_gshared (U3CGetPropertiesEnumerableU3Ed__4_t8F5798B4CB49F6D3131C452F9AC30F58B94A0938* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetPropertiesEnumerableU3Ed__4_System_Collections_Generic_IEnumerableU3CUnity_Properties_IPropertyU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3EU3E_GetEnumerator_m403A36E53754B0D940817782010E9FC3A11A7189_gshared (U3CGetPropertiesEnumerableU3Ed__4_t8F5798B4CB49F6D3131C452F9AC30F58B94A0938* __this, const RuntimeMethod* method) 
{
	U3CGetPropertiesEnumerableU3Ed__4_t8F5798B4CB49F6D3131C452F9AC30F58B94A0938* V_0 = NULL;
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
		U3CGetPropertiesEnumerableU3Ed__4_t8F5798B4CB49F6D3131C452F9AC30F58B94A0938* L_3 = (U3CGetPropertiesEnumerableU3Ed__4_t8F5798B4CB49F6D3131C452F9AC30F58B94A0938*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (U3CGetPropertiesEnumerableU3Ed__4_t8F5798B4CB49F6D3131C452F9AC30F58B94A0938*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_0 = L_3;
	}

IL_0029:
	{
		U3CGetPropertiesEnumerableU3Ed__4_t8F5798B4CB49F6D3131C452F9AC30F58B94A0938* L_4 = V_0;
		return (RuntimeObject*)L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetPropertiesEnumerableU3Ed__4_System_Collections_IEnumerable_GetEnumerator_m357F4D914D79AFFA86EC848F2F3A55E401A7FE3F_gshared (U3CGetPropertiesEnumerableU3Ed__4_t8F5798B4CB49F6D3131C452F9AC30F58B94A0938* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (U3CGetPropertiesEnumerableU3Ed__4_t8F5798B4CB49F6D3131C452F9AC30F58B94A0938*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetPropertiesEnumerableU3Ed__4__ctor_m003332C152CE1ACA2858A7B06F3258883191FFF1_gshared (U3CGetPropertiesEnumerableU3Ed__4_t5E4DFDB918CED8B1BD7311A434FA7762BBD6C390* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetPropertiesEnumerableU3Ed__4_System_IDisposable_Dispose_mEB94EAD89400B921C0ED6D63752AA651CD947B54_gshared (U3CGetPropertiesEnumerableU3Ed__4_t5E4DFDB918CED8B1BD7311A434FA7762BBD6C390* __this, const RuntimeMethod* method) 
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
				((  void (*) (U3CGetPropertiesEnumerableU3Ed__4_t5E4DFDB918CED8B1BD7311A434FA7762BBD6C390*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetPropertiesEnumerableU3Ed__4_MoveNext_m06942D8181C0A0A54F511E14B486C8C126D69B7A_gshared (U3CGetPropertiesEnumerableU3Ed__4_t5E4DFDB918CED8B1BD7311A434FA7762BBD6C390* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void* L_3 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
	const uint32_t SizeOf_TElement_t03B65337A741C137A009C8D5FB3E0A1B651215E6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TElement_t03B65337A741C137A009C8D5FB3E0A1B651215E6);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TElement_t03B65337A741C137A009C8D5FB3E0A1B651215E6);
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00bf:
			{
				((  void (*) (U3CGetPropertiesEnumerableU3Ed__4_t5E4DFDB918CED8B1BD7311A434FA7762BBD6C390*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
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
				goto IL_008b_1;
			}

IL_0016_1:
			{
				V_0 = (bool)0;
				goto IL_00c7;
			}

IL_001d_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
				RuntimeObject* L_4;
				L_4 = ConstrainedFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 2), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_3, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3)))));
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_4);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
				goto IL_00a0_1;
			}

IL_0047_1:
			{
				RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_5);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5, (Il2CppFullySharedGenericAny*)L_6);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_6, SizeOf_TElement_t03B65337A741C137A009C8D5FB3E0A1B651215E6);
				SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF* L_7 = *(SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				NullCheck(L_7);
				SetElementProperty_tD32144938E8C2B3852669AF6CB12C17FAB5056C1* L_8 = L_7->___m_Property;
				il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)), SizeOf_TElement_t03B65337A741C137A009C8D5FB3E0A1B651215E6);
				NullCheck(L_8);
				il2cpp_codegen_write_instance_field_data(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9),0), L_9, SizeOf_TElement_t03B65337A741C137A009C8D5FB3E0A1B651215E6);
				SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF* L_10 = *(SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				NullCheck(L_10);
				SetElementProperty_tD32144938E8C2B3852669AF6CB12C17FAB5056C1* L_11 = L_10->___m_Property;
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), (RuntimeObject*)L_11);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
				V_0 = (bool)1;
				goto IL_00c7;
			}

IL_008b_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), SizeOf_TElement_t03B65337A741C137A009C8D5FB3E0A1B651215E6);
			}

IL_00a0_1:
			{
				RuntimeObject* L_12 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_0047_1;
				}
			}
			{
				((  void (*) (U3CGetPropertiesEnumerableU3Ed__4_t5E4DFDB918CED8B1BD7311A434FA7762BBD6C390*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
				V_0 = (bool)0;
				goto IL_00c7;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c7:
	{
		bool L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetPropertiesEnumerableU3Ed__4_U3CU3Em__Finally1_mD992CBE4989A6E51861A4BF1095CF1811243718C_gshared (U3CGetPropertiesEnumerableU3Ed__4_t5E4DFDB918CED8B1BD7311A434FA7762BBD6C390* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_001b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetPropertiesEnumerableU3Ed__4_System_Collections_Generic_IEnumeratorU3CUnity_Properties_IPropertyU3CTSetU3EU3E_get_Current_mE9C2A5540667D30ADB6FB5ADCF173C6D8B150268_gshared (U3CGetPropertiesEnumerableU3Ed__4_t5E4DFDB918CED8B1BD7311A434FA7762BBD6C390* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetPropertiesEnumerableU3Ed__4_System_Collections_IEnumerator_Reset_mFB00B1C4429BA9EA5524A54C7A14023252A0D1E9_gshared (U3CGetPropertiesEnumerableU3Ed__4_t5E4DFDB918CED8B1BD7311A434FA7762BBD6C390* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetPropertiesEnumerableU3Ed__4_System_Collections_IEnumerator_get_Current_m9B84B9F2C9A56DA6D1C4F37577B5590D691A3001_gshared (U3CGetPropertiesEnumerableU3Ed__4_t5E4DFDB918CED8B1BD7311A434FA7762BBD6C390* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetPropertiesEnumerableU3Ed__4_System_Collections_Generic_IEnumerableU3CUnity_Properties_IPropertyU3CTSetU3EU3E_GetEnumerator_mA102A66C6F48AC175C04EE0F997B0F362CF46F55_gshared (U3CGetPropertiesEnumerableU3Ed__4_t5E4DFDB918CED8B1BD7311A434FA7762BBD6C390* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSet_t440C52C64A742D40E9F077954DE43600AAB88E8C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TSet_t440C52C64A742D40E9F077954DE43600AAB88E8C);
	U3CGetPropertiesEnumerableU3Ed__4_t5E4DFDB918CED8B1BD7311A434FA7762BBD6C390* V_0 = NULL;
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
		U3CGetPropertiesEnumerableU3Ed__4_t5E4DFDB918CED8B1BD7311A434FA7762BBD6C390* L_3 = (U3CGetPropertiesEnumerableU3Ed__4_t5E4DFDB918CED8B1BD7311A434FA7762BBD6C390*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (U3CGetPropertiesEnumerableU3Ed__4_t5E4DFDB918CED8B1BD7311A434FA7762BBD6C390*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		U3CGetPropertiesEnumerableU3Ed__4_t5E4DFDB918CED8B1BD7311A434FA7762BBD6C390* L_4 = V_0;
		SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF* L_5 = *(SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		NullCheck(L_4);
		il2cpp_codegen_write_instance_field_data<SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF*>(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_5);
	}

IL_0035:
	{
		U3CGetPropertiesEnumerableU3Ed__4_t5E4DFDB918CED8B1BD7311A434FA7762BBD6C390* L_6 = V_0;
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)), SizeOf_TSet_t440C52C64A742D40E9F077954DE43600AAB88E8C);
		NullCheck(L_6);
		il2cpp_codegen_write_instance_field_data(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_7, SizeOf_TSet_t440C52C64A742D40E9F077954DE43600AAB88E8C);
		U3CGetPropertiesEnumerableU3Ed__4_t5E4DFDB918CED8B1BD7311A434FA7762BBD6C390* L_8 = V_0;
		return (RuntimeObject*)L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetPropertiesEnumerableU3Ed__4_System_Collections_IEnumerable_GetEnumerator_mE018F68A2F81F901B6A19004AB249E3E85FFF856_gshared (U3CGetPropertiesEnumerableU3Ed__4_t5E4DFDB918CED8B1BD7311A434FA7762BBD6C390* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (U3CGetPropertiesEnumerableU3Ed__4_t5E4DFDB918CED8B1BD7311A434FA7762BBD6C390*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGroupJoinIteratorU3Ed__41_4__ctor_m3FB3B18D6849BCA668C6AE34924A89E9BF9570E1_gshared (U3CGroupJoinIteratorU3Ed__41_4_t28C25E1DF3BA11F09812739D58AE5FC99151D7D6* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGroupJoinIteratorU3Ed__41_4_System_IDisposable_Dispose_mD443D8A873BFA10C23E7A7135E93973914ABC31E_gshared (U3CGroupJoinIteratorU3Ed__41_4_t28C25E1DF3BA11F09812739D58AE5FC99151D7D6* __this, const RuntimeMethod* method) 
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
				((  void (*) (U3CGroupJoinIteratorU3Ed__41_4_t28C25E1DF3BA11F09812739D58AE5FC99151D7D6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGroupJoinIteratorU3Ed__41_4_MoveNext_m301FC143D969DFB04E4A3695C24A42B83146C5DA_gshared (U3CGroupJoinIteratorU3Ed__41_4_t28C25E1DF3BA11F09812739D58AE5FC99151D7D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TOuter_t4E61FA4F3F1682864C07B259CA8CC90637239758 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const uint32_t SizeOf_TResult_tCE44A474CE7338D9C1DC9EFAA020571900A96F3C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TOuter_t4E61FA4F3F1682864C07B259CA8CC90637239758);
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TOuter_t4E61FA4F3F1682864C07B259CA8CC90637239758);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_TOuter_t4E61FA4F3F1682864C07B259CA8CC90637239758);
	const uint32_t SizeOf_TKey_t3E04ACD4BA5E02AFF09440850A4FA9E4255F38CE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_TKey_t3E04ACD4BA5E02AFF09440850A4FA9E4255F38CE);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_TResult_tCE44A474CE7338D9C1DC9EFAA020571900A96F3C);
	bool V_0 = false;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TOuter_t4E61FA4F3F1682864C07B259CA8CC90637239758);
	memset(V_2, 0, SizeOf_TOuter_t4E61FA4F3F1682864C07B259CA8CC90637239758);
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00bd:
			{
				((  void (*) (U3CGroupJoinIteratorU3Ed__41_4_t28C25E1DF3BA11F09812739D58AE5FC99151D7D6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
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
					goto IL_0097_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00c4;
			}

IL_0018_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
				RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_4 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* L_6;
				L_6 = ((  Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* (*) (RuntimeObject*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
				il2cpp_codegen_write_instance_field_data<Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15), L_6);
				RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_7);
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16), L_8);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
				goto IL_009f_1;
			}

IL_0057_1:
			{
				RuntimeObject* L_9 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16));
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 10), L_9, (Il2CppFullySharedGenericAny*)L_10);
				il2cpp_codegen_memcpy(V_2, L_10, SizeOf_TOuter_t4E61FA4F3F1682864C07B259CA8CC90637239758);
				Func_3_tA7E06E01A9E24ADCFD5FDF90F63DB44745325DB6* L_11 = *(Func_3_tA7E06E01A9E24ADCFD5FDF90F63DB44745325DB6**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
				il2cpp_codegen_memcpy(L_12, V_2, SizeOf_TOuter_t4E61FA4F3F1682864C07B259CA8CC90637239758);
				Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* L_13 = *(Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15));
				Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_14 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
				il2cpp_codegen_memcpy(L_15, V_2, SizeOf_TOuter_t4E61FA4F3F1682864C07B259CA8CC90637239758);
				NullCheck(L_14);
				InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_15: *(void**)L_15), (Il2CppFullySharedGenericAny*)L_16);
				NullCheck(L_13);
				RuntimeObject* L_17;
				L_17 = InvokerFuncInvoker1< RuntimeObject*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 17), L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)) ? L_16: *(void**)L_16));
				NullCheck(L_11);
				InvokerActionInvoker3< Il2CppFullySharedGenericAny, RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_12: *(void**)L_12), L_17, (Il2CppFullySharedGenericAny*)L_18);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_18, SizeOf_TResult_tCE44A474CE7338D9C1DC9EFAA020571900A96F3C);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
				V_0 = (bool)1;
				goto IL_00c4;
			}

IL_0097_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
			}

IL_009f_1:
			{
				RuntimeObject* L_19 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16));
				NullCheck((RuntimeObject*)L_19);
				bool L_20;
				L_20 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
				if (L_20)
				{
					goto IL_0057_1;
				}
			}
			{
				((  void (*) (U3CGroupJoinIteratorU3Ed__41_4_t28C25E1DF3BA11F09812739D58AE5FC99151D7D6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16), (RuntimeObject*)NULL);
				V_0 = (bool)0;
				goto IL_00c4;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c4:
	{
		bool L_21 = V_0;
		return L_21;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGroupJoinIteratorU3Ed__41_4_U3CU3Em__Finally1_m5BA72A37FE4BB0DBADCBF4BFA4D14F0E90137656_gshared (U3CGroupJoinIteratorU3Ed__41_4_t28C25E1DF3BA11F09812739D58AE5FC99151D7D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16));
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16));
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGroupJoinIteratorU3Ed__41_4_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m63CE2379415D79A22300E9BC620D253CA5DDFF0A_gshared (U3CGroupJoinIteratorU3Ed__41_4_t28C25E1DF3BA11F09812739D58AE5FC99151D7D6* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TResult_tCE44A474CE7338D9C1DC9EFAA020571900A96F3C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_tCE44A474CE7338D9C1DC9EFAA020571900A96F3C);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TResult_tCE44A474CE7338D9C1DC9EFAA020571900A96F3C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TResult_tCE44A474CE7338D9C1DC9EFAA020571900A96F3C);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGroupJoinIteratorU3Ed__41_4_System_Collections_IEnumerator_Reset_mE628E8FF01068104DF227E7931BAF34449025B77_gshared (U3CGroupJoinIteratorU3Ed__41_4_t28C25E1DF3BA11F09812739D58AE5FC99151D7D6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGroupJoinIteratorU3Ed__41_4_System_Collections_IEnumerator_get_Current_mDAC87C236CDC413B35D9BD2FC4E51E5981C0499E_gshared (U3CGroupJoinIteratorU3Ed__41_4_t28C25E1DF3BA11F09812739D58AE5FC99151D7D6* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TResult_tCE44A474CE7338D9C1DC9EFAA020571900A96F3C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_tCE44A474CE7338D9C1DC9EFAA020571900A96F3C);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TResult_tCE44A474CE7338D9C1DC9EFAA020571900A96F3C);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGroupJoinIteratorU3Ed__41_4_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m420A0B23FC17A61714CAECE9E69575F3F79A6F54_gshared (U3CGroupJoinIteratorU3Ed__41_4_t28C25E1DF3BA11F09812739D58AE5FC99151D7D6* __this, const RuntimeMethod* method) 
{
	U3CGroupJoinIteratorU3Ed__41_4_t28C25E1DF3BA11F09812739D58AE5FC99151D7D6* V_0 = NULL;
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
		U3CGroupJoinIteratorU3Ed__41_4_t28C25E1DF3BA11F09812739D58AE5FC99151D7D6* L_3 = (U3CGroupJoinIteratorU3Ed__41_4_t28C25E1DF3BA11F09812739D58AE5FC99151D7D6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (U3CGroupJoinIteratorU3Ed__41_4_t28C25E1DF3BA11F09812739D58AE5FC99151D7D6*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_3;
	}

IL_0029:
	{
		U3CGroupJoinIteratorU3Ed__41_4_t28C25E1DF3BA11F09812739D58AE5FC99151D7D6* L_4 = V_0;
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
		NullCheck(L_4);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_5);
		U3CGroupJoinIteratorU3Ed__41_4_t28C25E1DF3BA11F09812739D58AE5FC99151D7D6* L_6 = V_0;
		RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NullCheck(L_6);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_7);
		U3CGroupJoinIteratorU3Ed__41_4_t28C25E1DF3BA11F09812739D58AE5FC99151D7D6* L_8 = V_0;
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_9 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
		NullCheck(L_8);
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_9);
		U3CGroupJoinIteratorU3Ed__41_4_t28C25E1DF3BA11F09812739D58AE5FC99151D7D6* L_10 = V_0;
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_11 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_10);
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(L_10, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_11);
		U3CGroupJoinIteratorU3Ed__41_4_t28C25E1DF3BA11F09812739D58AE5FC99151D7D6* L_12 = V_0;
		Func_3_tA7E06E01A9E24ADCFD5FDF90F63DB44745325DB6* L_13 = *(Func_3_tA7E06E01A9E24ADCFD5FDF90F63DB44745325DB6**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12));
		NullCheck(L_12);
		il2cpp_codegen_write_instance_field_data<Func_3_tA7E06E01A9E24ADCFD5FDF90F63DB44745325DB6*>(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_13);
		U3CGroupJoinIteratorU3Ed__41_4_t28C25E1DF3BA11F09812739D58AE5FC99151D7D6* L_14 = V_0;
		RuntimeObject* L_15 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		NullCheck(L_14);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_14, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_15);
		U3CGroupJoinIteratorU3Ed__41_4_t28C25E1DF3BA11F09812739D58AE5FC99151D7D6* L_16 = V_0;
		return (RuntimeObject*)L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGroupJoinIteratorU3Ed__41_4_System_Collections_IEnumerable_GetEnumerator_mE79BB14253428441CEB30A40D1CA25291CACE6BB_gshared (U3CGroupJoinIteratorU3Ed__41_4_t28C25E1DF3BA11F09812739D58AE5FC99151D7D6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (U3CGroupJoinIteratorU3Ed__41_4_t28C25E1DF3BA11F09812739D58AE5FC99151D7D6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIntersectIteratorU3Ed__74_1__ctor_m17BDD40E9F8304F411078F8F3215987B0690A955_gshared (U3CIntersectIteratorU3Ed__74_1_tA436225973AFA7427C3BE15D97715957E1DA08B2* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIntersectIteratorU3Ed__74_1_System_IDisposable_Dispose_m944A668170AEE1D8C683BB21882C981F730FC24A_gshared (U3CIntersectIteratorU3Ed__74_1_tA436225973AFA7427C3BE15D97715957E1DA08B2* __this, const RuntimeMethod* method) 
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
				((  void (*) (U3CIntersectIteratorU3Ed__74_1_tA436225973AFA7427C3BE15D97715957E1DA08B2*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CIntersectIteratorU3Ed__74_1_MoveNext_m0BD6B57A8DA08CBED78BF4EC1A82C568FD2666C4_gshared (U3CIntersectIteratorU3Ed__74_1_tA436225973AFA7427C3BE15D97715957E1DA08B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tDCAF710725335D32E24D8B43E60F1EDE63D7F2B6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_tDCAF710725335D32E24D8B43E60F1EDE63D7F2B6);
	const Il2CppFullySharedGenericAny L_19 = L_10;
	const Il2CppFullySharedGenericAny L_23 = L_10;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_tDCAF710725335D32E24D8B43E60F1EDE63D7F2B6);
	const Il2CppFullySharedGenericAny L_21 = L_12;
	bool V_0 = false;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_TSource_tDCAF710725335D32E24D8B43E60F1EDE63D7F2B6);
	memset(V_3, 0, SizeOf_TSource_tDCAF710725335D32E24D8B43E60F1EDE63D7F2B6);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_TSource_tDCAF710725335D32E24D8B43E60F1EDE63D7F2B6);
	memset(V_4, 0, SizeOf_TSource_tDCAF710725335D32E24D8B43E60F1EDE63D7F2B6);
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00d6:
			{
				((  void (*) (U3CIntersectIteratorU3Ed__74_1_tA436225973AFA7427C3BE15D97715957E1DA08B2*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
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
						il2cpp_codegen_memcpy(V_3, L_10, SizeOf_TSource_tDCAF710725335D32E24D8B43E60F1EDE63D7F2B6);
						Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D* L_11 = *(Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
						il2cpp_codegen_memcpy(L_12, V_3, SizeOf_TSource_tDCAF710725335D32E24D8B43E60F1EDE63D7F2B6);
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
				il2cpp_codegen_memcpy(V_4, L_19, SizeOf_TSource_tDCAF710725335D32E24D8B43E60F1EDE63D7F2B6);
				Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D* L_20 = *(Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
				il2cpp_codegen_memcpy(L_21, V_4, SizeOf_TSource_tDCAF710725335D32E24D8B43E60F1EDE63D7F2B6);
				NullCheck(L_20);
				bool L_22;
				L_22 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_21: *(void**)L_21));
				if (!L_22)
				{
					goto IL_00b8_1;
				}
			}
			{
				il2cpp_codegen_memcpy(L_23, V_4, SizeOf_TSource_tDCAF710725335D32E24D8B43E60F1EDE63D7F2B6);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_23, SizeOf_TSource_tDCAF710725335D32E24D8B43E60F1EDE63D7F2B6);
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
				((  void (*) (U3CIntersectIteratorU3Ed__74_1_tA436225973AFA7427C3BE15D97715957E1DA08B2*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIntersectIteratorU3Ed__74_1_U3CU3Em__Finally1_m475FC55A8E59C463724CEABCBAA523F1E2EC4356_gshared (U3CIntersectIteratorU3Ed__74_1_tA436225973AFA7427C3BE15D97715957E1DA08B2* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIntersectIteratorU3Ed__74_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m386FA796A87DBCD1C2C721C83449D52A0B1EC919_gshared (U3CIntersectIteratorU3Ed__74_1_tA436225973AFA7427C3BE15D97715957E1DA08B2* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tDCAF710725335D32E24D8B43E60F1EDE63D7F2B6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_tDCAF710725335D32E24D8B43E60F1EDE63D7F2B6);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TSource_tDCAF710725335D32E24D8B43E60F1EDE63D7F2B6);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TSource_tDCAF710725335D32E24D8B43E60F1EDE63D7F2B6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIntersectIteratorU3Ed__74_1_System_Collections_IEnumerator_Reset_m14A4AD551DBFC4FEDC5D4838CE90E00BA4121464_gshared (U3CIntersectIteratorU3Ed__74_1_tA436225973AFA7427C3BE15D97715957E1DA08B2* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CIntersectIteratorU3Ed__74_1_System_Collections_IEnumerator_get_Current_m1C91D73005BDDC1B2CA09DFC9E0519F9C445E792_gshared (U3CIntersectIteratorU3Ed__74_1_tA436225973AFA7427C3BE15D97715957E1DA08B2* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tDCAF710725335D32E24D8B43E60F1EDE63D7F2B6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_tDCAF710725335D32E24D8B43E60F1EDE63D7F2B6);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TSource_tDCAF710725335D32E24D8B43E60F1EDE63D7F2B6);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CIntersectIteratorU3Ed__74_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m6CEF00E026A6751E3A09E0CD5E89DFF1702AC198_gshared (U3CIntersectIteratorU3Ed__74_1_tA436225973AFA7427C3BE15D97715957E1DA08B2* __this, const RuntimeMethod* method) 
{
	U3CIntersectIteratorU3Ed__74_1_tA436225973AFA7427C3BE15D97715957E1DA08B2* V_0 = NULL;
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
		U3CIntersectIteratorU3Ed__74_1_tA436225973AFA7427C3BE15D97715957E1DA08B2* L_3 = (U3CIntersectIteratorU3Ed__74_1_tA436225973AFA7427C3BE15D97715957E1DA08B2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (U3CIntersectIteratorU3Ed__74_1_tA436225973AFA7427C3BE15D97715957E1DA08B2*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_3;
	}

IL_0029:
	{
		U3CIntersectIteratorU3Ed__74_1_tA436225973AFA7427C3BE15D97715957E1DA08B2* L_4 = V_0;
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		NullCheck(L_4);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_5);
		U3CIntersectIteratorU3Ed__74_1_tA436225973AFA7427C3BE15D97715957E1DA08B2* L_6 = V_0;
		RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_6);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_7);
		U3CIntersectIteratorU3Ed__74_1_tA436225973AFA7427C3BE15D97715957E1DA08B2* L_8 = V_0;
		RuntimeObject* L_9 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NullCheck(L_8);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_9);
		U3CIntersectIteratorU3Ed__74_1_tA436225973AFA7427C3BE15D97715957E1DA08B2* L_10 = V_0;
		return (RuntimeObject*)L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CIntersectIteratorU3Ed__74_1_System_Collections_IEnumerable_GetEnumerator_m222EAB3BBABE457F6FA501E6B2952FDEC668DC65_gshared (U3CIntersectIteratorU3Ed__74_1_tA436225973AFA7427C3BE15D97715957E1DA08B2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (U3CIntersectIteratorU3Ed__74_1_tA436225973AFA7427C3BE15D97715957E1DA08B2*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJoinIteratorU3Ed__38_4__ctor_mAFE60B56765D1CDD9D07623B75DFFCA1D4364979_gshared (U3CJoinIteratorU3Ed__38_4_t2025FF64669D4CCF0346C9EB83E984FD09EB532C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJoinIteratorU3Ed__38_4_System_IDisposable_Dispose_m3E85478FD52F52417CDF8886DDBED6EBFEA454D2_gshared (U3CJoinIteratorU3Ed__38_4_t2025FF64669D4CCF0346C9EB83E984FD09EB532C* __this, const RuntimeMethod* method) 
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
				((  void (*) (U3CJoinIteratorU3Ed__38_4_t2025FF64669D4CCF0346C9EB83E984FD09EB532C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CJoinIteratorU3Ed__38_4_MoveNext_mA4A500ED18320CF0A020B2CCEB71BD5CA03C9477_gshared (U3CJoinIteratorU3Ed__38_4_t2025FF64669D4CCF0346C9EB83E984FD09EB532C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TOuter_t53291FD6426B2CD046A8E1A5091F051818819E47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const uint32_t SizeOf_TInner_t14AAE478BF45516AE45203F23CC97110FF4052CB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const uint32_t SizeOf_TResult_t3B4B482B81C70AF4044527E1DA6D7894DD32D461 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TOuter_t53291FD6426B2CD046A8E1A5091F051818819E47);
	const Il2CppFullySharedGenericAny L_18 = L_10;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TOuter_t53291FD6426B2CD046A8E1A5091F051818819E47);
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_TInner_t14AAE478BF45516AE45203F23CC97110FF4052CB);
	const uint32_t SizeOf_TKey_tE81BEC4AB200855A47194641B47638C2D5DB1421 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TKey_tE81BEC4AB200855A47194641B47638C2D5DB1421);
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_TResult_t3B4B482B81C70AF4044527E1DA6D7894DD32D461);
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0136:
			{
				((  void (*) (U3CJoinIteratorU3Ed__38_4_t2025FF64669D4CCF0346C9EB83E984FD09EB532C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
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
					goto IL_00d7_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_013d;
			}

IL_0018_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
				RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_4 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* L_6;
				L_6 = ((  Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* (*) (RuntimeObject*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
				il2cpp_codegen_write_instance_field_data<Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15), L_6);
				RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_7);
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16), L_8);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
				goto IL_0115_1;
			}

IL_005a_1:
			{
				RuntimeObject* L_9 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16));
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 10), L_9, (Il2CppFullySharedGenericAny*)L_10);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),17), L_10, SizeOf_TOuter_t53291FD6426B2CD046A8E1A5091F051818819E47);
				Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* L_11 = *(Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15));
				Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_12 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
				il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),17)), SizeOf_TOuter_t53291FD6426B2CD046A8E1A5091F051818819E47);
				NullCheck(L_12);
				InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_13: *(void**)L_13), (Il2CppFullySharedGenericAny*)L_14);
				NullCheck(L_11);
				Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_15;
				L_15 = InvokerFuncInvoker2< Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*, Il2CppFullySharedGenericAny, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_14: *(void**)L_14), (bool)0);
				il2cpp_codegen_write_instance_field_data<Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),18), L_15);
				Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_16 = *(Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),18));
				if (!L_16)
				{
					goto IL_0102_1;
				}
			}
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),19), 0);
				goto IL_00ef_1;
			}

IL_009f_1:
			{
				Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* L_17 = *(Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
				il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),17)), SizeOf_TOuter_t53291FD6426B2CD046A8E1A5091F051818819E47);
				Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_19 = *(Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),18));
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17),2));
				int32_t L_21 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),19));
				NullCheck(L_20);
				int32_t L_22 = L_21;
				il2cpp_codegen_memcpy(L_23, (L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)), SizeOf_TInner_t14AAE478BF45516AE45203F23CC97110FF4052CB);
				NullCheck(L_17);
				InvokerActionInvoker3< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_18: *(void**)L_18), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_23: *(void**)L_23), (Il2CppFullySharedGenericAny*)L_24);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_24, SizeOf_TResult_t3B4B482B81C70AF4044527E1DA6D7894DD32D461);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
				V_0 = (bool)1;
				goto IL_013d;
			}

IL_00d7_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
				int32_t L_25 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),19));
				V_2 = L_25;
				int32_t L_26 = V_2;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),19), ((int32_t)il2cpp_codegen_add(L_26, 1)));
			}

IL_00ef_1:
			{
				int32_t L_27 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),19));
				Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_28 = *(Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),18));
				int32_t L_29 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_28, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17),3));
				if ((((int32_t)L_27) < ((int32_t)L_29)))
				{
					goto IL_009f_1;
				}
			}

IL_0102_1:
			{
				il2cpp_codegen_write_instance_field_data<Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),18), (Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*)NULL);
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),17)))), SizeOf_TOuter_t53291FD6426B2CD046A8E1A5091F051818819E47);
			}

IL_0115_1:
			{
				RuntimeObject* L_30 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16));
				NullCheck((RuntimeObject*)L_30);
				bool L_31;
				L_31 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_30);
				if (L_31)
				{
					goto IL_005a_1;
				}
			}
			{
				((  void (*) (U3CJoinIteratorU3Ed__38_4_t2025FF64669D4CCF0346C9EB83E984FD09EB532C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16), (RuntimeObject*)NULL);
				V_0 = (bool)0;
				goto IL_013d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_013d:
	{
		bool L_32 = V_0;
		return L_32;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJoinIteratorU3Ed__38_4_U3CU3Em__Finally1_m067F56A696981EE70FBB0519965173428143E90C_gshared (U3CJoinIteratorU3Ed__38_4_t2025FF64669D4CCF0346C9EB83E984FD09EB532C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16));
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16));
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJoinIteratorU3Ed__38_4_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_mE013B56A7EEA1F039350C99E20CDB2E9131350D5_gshared (U3CJoinIteratorU3Ed__38_4_t2025FF64669D4CCF0346C9EB83E984FD09EB532C* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TResult_t3B4B482B81C70AF4044527E1DA6D7894DD32D461 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_t3B4B482B81C70AF4044527E1DA6D7894DD32D461);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TResult_t3B4B482B81C70AF4044527E1DA6D7894DD32D461);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TResult_t3B4B482B81C70AF4044527E1DA6D7894DD32D461);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJoinIteratorU3Ed__38_4_System_Collections_IEnumerator_Reset_mB0637B14EA7D941AFCBF57C5F5F45E8B70EB72FA_gshared (U3CJoinIteratorU3Ed__38_4_t2025FF64669D4CCF0346C9EB83E984FD09EB532C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CJoinIteratorU3Ed__38_4_System_Collections_IEnumerator_get_Current_mA6D57CCD973E4DA263B21DF9EA61E30D43D04B67_gshared (U3CJoinIteratorU3Ed__38_4_t2025FF64669D4CCF0346C9EB83E984FD09EB532C* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TResult_t3B4B482B81C70AF4044527E1DA6D7894DD32D461 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_t3B4B482B81C70AF4044527E1DA6D7894DD32D461);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TResult_t3B4B482B81C70AF4044527E1DA6D7894DD32D461);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CJoinIteratorU3Ed__38_4_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m4BCDEE0B60E04CF87B4FF9CB2AD27197A0906CA5_gshared (U3CJoinIteratorU3Ed__38_4_t2025FF64669D4CCF0346C9EB83E984FD09EB532C* __this, const RuntimeMethod* method) 
{
	U3CJoinIteratorU3Ed__38_4_t2025FF64669D4CCF0346C9EB83E984FD09EB532C* V_0 = NULL;
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
		U3CJoinIteratorU3Ed__38_4_t2025FF64669D4CCF0346C9EB83E984FD09EB532C* L_3 = (U3CJoinIteratorU3Ed__38_4_t2025FF64669D4CCF0346C9EB83E984FD09EB532C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (U3CJoinIteratorU3Ed__38_4_t2025FF64669D4CCF0346C9EB83E984FD09EB532C*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_0 = L_3;
	}

IL_0029:
	{
		U3CJoinIteratorU3Ed__38_4_t2025FF64669D4CCF0346C9EB83E984FD09EB532C* L_4 = V_0;
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
		NullCheck(L_4);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_5);
		U3CJoinIteratorU3Ed__38_4_t2025FF64669D4CCF0346C9EB83E984FD09EB532C* L_6 = V_0;
		RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NullCheck(L_6);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_7);
		U3CJoinIteratorU3Ed__38_4_t2025FF64669D4CCF0346C9EB83E984FD09EB532C* L_8 = V_0;
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_9 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12));
		NullCheck(L_8);
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_9);
		U3CJoinIteratorU3Ed__38_4_t2025FF64669D4CCF0346C9EB83E984FD09EB532C* L_10 = V_0;
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_11 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_10);
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(L_10, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_11);
		U3CJoinIteratorU3Ed__38_4_t2025FF64669D4CCF0346C9EB83E984FD09EB532C* L_12 = V_0;
		Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* L_13 = *(Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
		NullCheck(L_12);
		il2cpp_codegen_write_instance_field_data<Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4*>(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_13);
		U3CJoinIteratorU3Ed__38_4_t2025FF64669D4CCF0346C9EB83E984FD09EB532C* L_14 = V_0;
		RuntimeObject* L_15 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		NullCheck(L_14);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_14, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_15);
		U3CJoinIteratorU3Ed__38_4_t2025FF64669D4CCF0346C9EB83E984FD09EB532C* L_16 = V_0;
		return (RuntimeObject*)L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CJoinIteratorU3Ed__38_4_System_Collections_IEnumerable_GetEnumerator_m80A2E1A24CDC231A837145F0F928C8DF8E53B2A8_gshared (U3CJoinIteratorU3Ed__38_4_t2025FF64669D4CCF0346C9EB83E984FD09EB532C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (U3CJoinIteratorU3Ed__38_4_t2025FF64669D4CCF0346C9EB83E984FD09EB532C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLastAsyncU3Ed__0_1__ctor_mD2C43D37BEE729749F0745655EB319990C8A02C6_gshared (U3CLastAsyncU3Ed__0_1_t38AFC35C81A53570FC7FA05BED4F1D9156275B70* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLastAsyncU3Ed__0_1_MoveNext_mD5D46810F666D802864B40E962F0F7D6C06FC9AE_gshared (U3CLastAsyncU3Ed__0_1_t38AFC35C81A53570FC7FA05BED4F1D9156275B70* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_tA4C0825C39824D7B3EB7A500638B9E9D79150F3D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TSource_tA4C0825C39824D7B3EB7A500638B9E9D79150F3D);
	const Il2CppFullySharedGenericAny L_23 = L_20;
	const Il2CppFullySharedGenericAny L_26 = L_20;
	const Il2CppFullySharedGenericAny L_38 = L_20;
	const Il2CppFullySharedGenericAny L_60 = L_20;
	const Il2CppFullySharedGenericAny L_63 = L_20;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tA4C0825C39824D7B3EB7A500638B9E9D79150F3D);
	memset(V_1, 0, SizeOf_TSource_tA4C0825C39824D7B3EB7A500638B9E9D79150F3D);
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CLastAsyncU3Ed__0_1_t38AFC35C81A53570FC7FA05BED4F1D9156275B70* V_5 = NULL;
	bool V_6 = false;
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
	int32_t V_14 = 0;
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
			goto IL_0226_1;
		}

IL_001a_1:
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
				goto IL_00a6_2;
			}

IL_004e_2:
			{
				goto IL_0171_2;
			}

IL_0053_2:
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), SizeOf_TSource_tA4C0825C39824D7B3EB7A500638B9E9D79150F3D);
				RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				NullCheck(L_8);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_9;
				L_9 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8);
				V_4 = L_9;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_10;
				L_10 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_3 = L_10;
				bool L_11;
				L_11 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_3), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_00c2_2;
				}
			}
			{
				int32_t L_12 = 0;
				V_0 = L_12;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_12);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_13 = V_3;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_13);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CLastAsyncU3Ed__0_1_t38AFC35C81A53570FC7FA05BED4F1D9156275B70**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
				goto IL_02e7;
			}

IL_00a6_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_14 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12));
				V_3 = L_14;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_15 = (-1);
				V_0 = L_15;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_15);
			}

IL_00c2_2:
			{
				bool L_16;
				L_16 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_16);
				bool L_17 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
				V_2 = L_17;
				bool L_18 = V_2;
				if (!L_18)
				{
					goto IL_00ee_2;
				}
			}
			{
				RuntimeObject* L_19 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				NullCheck(L_19);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_19, (Il2CppFullySharedGenericAny*)L_20);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_20, SizeOf_TSource_tA4C0825C39824D7B3EB7A500638B9E9D79150F3D);
				goto IL_0114_2;
			}

IL_00ee_2:
			{
				bool L_21 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
				V_6 = L_21;
				bool L_22 = V_6;
				if (!L_22)
				{
					goto IL_010d_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_23, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_TSource_tA4C0825C39824D7B3EB7A500638B9E9D79150F3D);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_23, SizeOf_TSource_tA4C0825C39824D7B3EB7A500638B9E9D79150F3D);
				goto IL_01b8_2;
			}

IL_010d_2:
			{
				Exception_t* L_24;
				L_24 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, method);
			}

IL_0114_2:
			{
				goto IL_0129_2;
			}

IL_0116_2:
			{
				RuntimeObject* L_25 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				NullCheck(L_25);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_25, (Il2CppFullySharedGenericAny*)L_26);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_26, SizeOf_TSource_tA4C0825C39824D7B3EB7A500638B9E9D79150F3D);
			}

IL_0129_2:
			{
				RuntimeObject* L_27 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				NullCheck(L_27);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_28;
				L_28 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_27);
				V_4 = L_28;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29;
				L_29 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_8 = L_29;
				bool L_30;
				L_30 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_8), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_30)
				{
					goto IL_018e_2;
				}
			}
			{
				int32_t L_31 = 1;
				V_0 = L_31;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_31);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_32 = V_8;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_32);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CLastAsyncU3Ed__0_1_t38AFC35C81A53570FC7FA05BED4F1D9156275B70**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_8), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
				goto IL_02e7;
			}

IL_0171_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_33 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12));
				V_8 = L_33;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_34 = (-1);
				V_0 = L_34;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_34);
			}

IL_018e_2:
			{
				bool L_35;
				L_35 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_8), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_35);
				bool L_36 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
				V_7 = L_36;
				bool L_37 = V_7;
				if (L_37)
				{
					goto IL_0116_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_38, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_TSource_tA4C0825C39824D7B3EB7A500638B9E9D79150F3D);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_38, SizeOf_TSource_tA4C0825C39824D7B3EB7A500638B9E9D79150F3D);
				goto IL_01b8_2;
			}

IL_01b8_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), 1);
				goto IL_01cd_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01c1_1;
			}
			throw e;
		}

CATCH_01c1_1:
		{
			RuntimeObject* L_39 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_9 = L_39;
			RuntimeObject* L_40 = V_9;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_40);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_01cd_1;
		}

IL_01cd_1:
		{
			RuntimeObject* L_41 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_41) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_42 = V_10;
			if (!L_42)
			{
				goto IL_024c_1;
			}
		}
		{
			RuntimeObject* L_43 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
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
				goto IL_0243_1;
			}
		}
		{
			int32_t L_47 = 2;
			V_0 = L_47;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_47);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_48 = V_11;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_48);
			V_5 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CLastAsyncU3Ed__0_1_t38AFC35C81A53570FC7FA05BED4F1D9156275B70**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_11), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_02e7;
		}

IL_0226_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_49 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
			V_11 = L_49;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_50 = (-1);
			V_0 = L_50;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_50);
		}

IL_0243_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_024c_1:
		{
			RuntimeObject* L_51 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			V_9 = L_51;
			RuntimeObject* L_52 = V_9;
			if (!L_52)
			{
				goto IL_0276_1;
			}
		}
		{
			RuntimeObject* L_53 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_53, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_54 = V_13;
			if (L_54)
			{
				goto IL_0269_1;
			}
		}
		{
			RuntimeObject* L_55 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_55, method);
		}

IL_0269_1:
		{
			Exception_t* L_56 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_57;
			L_57 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_56, NULL);
			NullCheck(L_57);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_57, NULL);
		}

IL_0276_1:
		{
			int32_t L_58 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_14 = L_58;
			int32_t L_59 = V_14;
			if ((((int32_t)L_59) == ((int32_t)1)))
			{
				goto IL_0285_1;
			}
		}
		{
			goto IL_028e_1;
		}

IL_0285_1:
		{
			il2cpp_codegen_memcpy(L_60, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8)), SizeOf_TSource_tA4C0825C39824D7B3EB7A500638B9E9D79150F3D);
			il2cpp_codegen_memcpy(V_1, L_60, SizeOf_TSource_tA4C0825C39824D7B3EB7A500638B9E9D79150F3D);
			goto IL_02cb;
		}

IL_028e_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8)))), SizeOf_TSource_tA4C0825C39824D7B3EB7A500638B9E9D79150F3D);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), (RuntimeObject*)NULL);
			goto IL_02cb;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02aa;
		}
		throw e;
	}

CATCH_02aa:
	{
		Exception_t* L_61 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_13 = L_61;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), (RuntimeObject*)NULL);
		Exception_t* L_62 = V_13;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_62, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_02e7;
	}

IL_02cb:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_63, V_1, SizeOf_TSource_tA4C0825C39824D7B3EB7A500638B9E9D79150F3D);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_63: *(void**)L_63));
	}

IL_02e7:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLastAsyncU3Ed__0_1_SetStateMachine_m61FD68F490A0E9CA0D71D3799E018DA24E57B8B8_gshared (U3CLastAsyncU3Ed__0_1_t38AFC35C81A53570FC7FA05BED4F1D9156275B70* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLastAsyncU3Ed__1_1__ctor_m99554932EBA0A7C881D38603DC94852C30DB84A6_gshared (U3CLastAsyncU3Ed__1_1_t0FD9210854E67C87AE6374B78E7F411EE5178410* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLastAsyncU3Ed__1_1_MoveNext_m014F455F82411CAFA396AA65C3B53E592A47DBE4_gshared (U3CLastAsyncU3Ed__1_1_t0FD9210854E67C87AE6374B78E7F411EE5178410* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E);
	const Il2CppFullySharedGenericAny L_13 = L_8;
	const Il2CppFullySharedGenericAny L_27 = L_8;
	const Il2CppFullySharedGenericAny L_30 = L_8;
	const Il2CppFullySharedGenericAny L_53 = L_8;
	const Il2CppFullySharedGenericAny L_56 = L_8;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E);
	memset(V_1, 0, SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E);
	bool V_2 = false;
	bool V_3 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_4;
	memset((&V_4), 0, sizeof(V_4));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_5;
	memset((&V_5), 0, sizeof(V_5));
	U3CLastAsyncU3Ed__1_1_t0FD9210854E67C87AE6374B78E7F411EE5178410* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t* V_13 = NULL;
	int32_t V_14 = 0;
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
			goto IL_01d4_1;
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
				goto IL_00f1_2;
			}

IL_004a_2:
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)))), SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), (bool)0);
				goto IL_00a9_2;
			}

IL_0060_2:
			{
				RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_7);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_7, (Il2CppFullySharedGenericAny*)L_8);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_8, SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E);
				Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_9 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E);
				NullCheck(L_9);
				bool L_11;
				L_11 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
				V_2 = L_11;
				bool L_12 = V_2;
				if (!L_12)
				{
					goto IL_009c_2;
				}
			}
			{
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), (bool)1);
				il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_13, SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E);
			}

IL_009c_2:
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)))), SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E);
			}

IL_00a9_2:
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
					goto IL_010e_2;
				}
			}
			{
				int32_t L_18 = 0;
				V_0 = L_18;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_18);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_19 = V_4;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14), L_19);
				V_6 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CLastAsyncU3Ed__1_1_t0FD9210854E67C87AE6374B78E7F411EE5178410**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_4), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				goto IL_0295;
			}

IL_00f1_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_20 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
				V_4 = L_20;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_21 = (-1);
				V_0 = L_21;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_21);
			}

IL_010e_2:
			{
				bool L_22;
				L_22 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_4), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_22);
				bool L_23 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
				V_3 = L_23;
				bool L_24 = V_3;
				if (L_24)
				{
					goto IL_0060_2;
				}
			}
			{
				bool L_25 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				V_7 = L_25;
				bool L_26 = V_7;
				if (!L_26)
				{
					goto IL_0143_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_27, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_27, SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E);
				goto IL_0166_2;
			}

IL_0143_2:
			{
				bool L_28 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
				V_8 = L_28;
				bool L_29 = V_8;
				if (!L_29)
				{
					goto IL_015f_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_30, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_30, SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E);
				goto IL_0166_2;
			}

IL_015f_2:
			{
				Exception_t* L_31;
				L_31 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, method);
			}

IL_0166_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), 1);
				goto IL_017b_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_016f_1;
			}
			throw e;
		}

CATCH_016f_1:
		{
			RuntimeObject* L_32 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_9 = L_32;
			RuntimeObject* L_33 = V_9;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_33);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_017b_1;
		}

IL_017b_1:
		{
			RuntimeObject* L_34 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_34) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_35 = V_10;
			if (!L_35)
			{
				goto IL_01fa_1;
			}
		}
		{
			RuntimeObject* L_36 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			NullCheck((RuntimeObject*)L_36);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_37;
			L_37 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
			V_12 = L_37;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_38;
			L_38 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_38;
			bool L_39;
			L_39 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_39)
			{
				goto IL_01f1_1;
			}
		}
		{
			int32_t L_40 = 1;
			V_0 = L_40;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_40);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_41 = V_11;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15), L_41);
			V_6 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CLastAsyncU3Ed__1_1_t0FD9210854E67C87AE6374B78E7F411EE5178410**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_11), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
			goto IL_0295;
		}

IL_01d4_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_42 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15));
			V_11 = L_42;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_43 = (-1);
			V_0 = L_43;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_43);
		}

IL_01f1_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_01fa_1:
		{
			RuntimeObject* L_44 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_9 = L_44;
			RuntimeObject* L_45 = V_9;
			if (!L_45)
			{
				goto IL_0224_1;
			}
		}
		{
			RuntimeObject* L_46 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_46, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_47 = V_13;
			if (L_47)
			{
				goto IL_0217_1;
			}
		}
		{
			RuntimeObject* L_48 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_48, method);
		}

IL_0217_1:
		{
			Exception_t* L_49 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_50;
			L_50 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_49, NULL);
			NullCheck(L_50);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_50, NULL);
		}

IL_0224_1:
		{
			int32_t L_51 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			V_14 = L_51;
			int32_t L_52 = V_14;
			if ((((int32_t)L_52) == ((int32_t)1)))
			{
				goto IL_0233_1;
			}
		}
		{
			goto IL_023c_1;
		}

IL_0233_1:
		{
			il2cpp_codegen_memcpy(L_53, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E);
			il2cpp_codegen_memcpy(V_1, L_53, SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E);
			goto IL_0279;
		}

IL_023c_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
			goto IL_0279;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0258;
		}
		throw e;
	}

CATCH_0258:
	{
		Exception_t* L_54 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_13 = L_54;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		Exception_t* L_55 = V_13;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_55, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0295;
	}

IL_0279:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_56, V_1, SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_56: *(void**)L_56));
	}

IL_0295:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLastAsyncU3Ed__1_1_SetStateMachine_m659C5BBACA777EA21F377365560CC2F3E41393DB_gshared (U3CLastAsyncU3Ed__1_1_t0FD9210854E67C87AE6374B78E7F411EE5178410* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLastAwaitAsyncU3Ed__2_1__ctor_m509ECA7A107EADCBBC56453B9D69941D9860D1D8_gshared (U3CLastAwaitAsyncU3Ed__2_1_tC239805AACCC4C0F81C94B1270D7382B72745616* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLastAwaitAsyncU3Ed__2_1_MoveNext_mE3F71EB81B4FC677F2346D2092698B03C75F8712_gshared (U3CLastAwaitAsyncU3Ed__2_1_tC239805AACCC4C0F81C94B1270D7382B72745616* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD);
	const Il2CppFullySharedGenericAny L_22 = L_9;
	const Il2CppFullySharedGenericAny L_36 = L_9;
	const Il2CppFullySharedGenericAny L_39 = L_9;
	const Il2CppFullySharedGenericAny L_62 = L_9;
	const Il2CppFullySharedGenericAny L_65 = L_9;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD);
	memset(V_1, 0, SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD);
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CLastAwaitAsyncU3Ed__2_1_tC239805AACCC4C0F81C94B1270D7382B72745616* V_5 = NULL;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	bool V_9 = false;
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
			goto IL_024c_1;
		}

IL_001a_1:
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
				goto IL_00ca_2;
			}

IL_004e_2:
			{
				goto IL_0167_2;
			}

IL_0053_2:
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)))), SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), (bool)0);
				goto IL_011f_2;
			}

IL_006c_2:
			{
				RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_9, SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD);
				Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C* L_10 = *(Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD);
				NullCheck(L_10);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_12;
				L_12 = InvokerFuncInvoker1< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_11: *(void**)L_11));
				V_4 = L_12;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_13;
				L_13 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_3 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_3), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00e6_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_15);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_16 = V_3;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15), L_16);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CLastAwaitAsyncU3Ed__2_1_tC239805AACCC4C0F81C94B1270D7382B72745616**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_030d;
			}

IL_00ca_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_17 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15));
				V_3 = L_17;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_18 = (-1);
				V_0 = L_18;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_18);
			}

IL_00e6_2:
			{
				bool L_19;
				L_19 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_19);
				bool L_20 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
				V_2 = L_20;
				bool L_21 = V_2;
				if (!L_21)
				{
					goto IL_0112_2;
				}
			}
			{
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), (bool)1);
				il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_22, SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD);
			}

IL_0112_2:
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)))), SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD);
			}

IL_011f_2:
			{
				RuntimeObject* L_23 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
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
					goto IL_0184_2;
				}
			}
			{
				int32_t L_27 = 1;
				V_0 = L_27;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_27);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28 = V_7;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15), L_28);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CLastAwaitAsyncU3Ed__2_1_tC239805AACCC4C0F81C94B1270D7382B72745616**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_7), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_030d;
			}

IL_0167_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15));
				V_7 = L_29;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_30 = (-1);
				V_0 = L_30;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_30);
			}

IL_0184_2:
			{
				bool L_31;
				L_31 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14), L_31);
				bool L_32 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
				V_6 = L_32;
				bool L_33 = V_6;
				if (L_33)
				{
					goto IL_006c_2;
				}
			}
			{
				bool L_34 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				V_8 = L_34;
				bool L_35 = V_8;
				if (!L_35)
				{
					goto IL_01bb_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_36, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_36, SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD);
				goto IL_01de_2;
			}

IL_01bb_2:
			{
				bool L_37 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
				V_9 = L_37;
				bool L_38 = V_9;
				if (!L_38)
				{
					goto IL_01d7_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_39, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_39, SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD);
				goto IL_01de_2;
			}

IL_01d7_2:
			{
				Exception_t* L_40;
				L_40 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, method);
			}

IL_01de_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), 1);
				goto IL_01f3_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01e7_1;
			}
			throw e;
		}

CATCH_01e7_1:
		{
			RuntimeObject* L_41 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_10 = L_41;
			RuntimeObject* L_42 = V_10;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_42);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_01f3_1;
		}

IL_01f3_1:
		{
			RuntimeObject* L_43 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_43) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_44 = V_11;
			if (!L_44)
			{
				goto IL_0272_1;
			}
		}
		{
			RuntimeObject* L_45 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			NullCheck((RuntimeObject*)L_45);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_46;
			L_46 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_45);
			V_13 = L_46;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47;
			L_47 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_13), NULL);
			V_12 = L_47;
			bool L_48;
			L_48 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_12), NULL);
			if (L_48)
			{
				goto IL_0269_1;
			}
		}
		{
			int32_t L_49 = 2;
			V_0 = L_49;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_49);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50 = V_12;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16), L_50);
			V_5 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CLastAwaitAsyncU3Ed__2_1_tC239805AACCC4C0F81C94B1270D7382B72745616**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_12), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
			goto IL_030d;
		}

IL_024c_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_51 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16));
			V_12 = L_51;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_52 = (-1);
			V_0 = L_52;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_52);
		}

IL_0269_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_12), NULL);
		}

IL_0272_1:
		{
			RuntimeObject* L_53 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_10 = L_53;
			RuntimeObject* L_54 = V_10;
			if (!L_54)
			{
				goto IL_029c_1;
			}
		}
		{
			RuntimeObject* L_55 = V_10;
			V_14 = ((Exception_t*)IsInstClass((RuntimeObject*)L_55, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_56 = V_14;
			if (L_56)
			{
				goto IL_028f_1;
			}
		}
		{
			RuntimeObject* L_57 = V_10;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_57, method);
		}

IL_028f_1:
		{
			Exception_t* L_58 = V_14;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_59;
			L_59 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_58, NULL);
			NullCheck(L_59);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_59, NULL);
		}

IL_029c_1:
		{
			int32_t L_60 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			V_15 = L_60;
			int32_t L_61 = V_15;
			if ((((int32_t)L_61) == ((int32_t)1)))
			{
				goto IL_02ab_1;
			}
		}
		{
			goto IL_02b4_1;
		}

IL_02ab_1:
		{
			il2cpp_codegen_memcpy(L_62, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD);
			il2cpp_codegen_memcpy(V_1, L_62, SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD);
			goto IL_02f1;
		}

IL_02b4_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
			goto IL_02f1;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02d0;
		}
		throw e;
	}

CATCH_02d0:
	{
		Exception_t* L_63 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_14 = L_63;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		Exception_t* L_64 = V_14;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_64, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_030d;
	}

IL_02f1:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_65, V_1, SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_65: *(void**)L_65));
	}

IL_030d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLastAwaitAsyncU3Ed__2_1_SetStateMachine_m230957A2514F3F85C748B2B53D9E6382C7726E3E_gshared (U3CLastAwaitAsyncU3Ed__2_1_tC239805AACCC4C0F81C94B1270D7382B72745616* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLastAwaitWithCancellationAsyncU3Ed__3_1__ctor_m08031E0150BB83ABD56769552C772A9A24DC83C8_gshared (U3CLastAwaitWithCancellationAsyncU3Ed__3_1_tE16CA9A4999761FA673AE43AC096DABBF15267E4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLastAwaitWithCancellationAsyncU3Ed__3_1_MoveNext_mD6395A4018CB1316FA8343C4E3C720D0C013C5A0_gshared (U3CLastAwaitWithCancellationAsyncU3Ed__3_1_tE16CA9A4999761FA673AE43AC096DABBF15267E4* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F);
	const Il2CppFullySharedGenericAny L_23 = L_9;
	const Il2CppFullySharedGenericAny L_37 = L_9;
	const Il2CppFullySharedGenericAny L_40 = L_9;
	const Il2CppFullySharedGenericAny L_63 = L_9;
	const Il2CppFullySharedGenericAny L_66 = L_9;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F);
	memset(V_1, 0, SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F);
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CLastAwaitWithCancellationAsyncU3Ed__3_1_tE16CA9A4999761FA673AE43AC096DABBF15267E4* V_5 = NULL;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	bool V_9 = false;
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
			goto IL_0255_1;
		}

IL_001a_1:
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
					goto IL_0051_2;
				}
			}
			{
				goto IL_0056_2;
			}

IL_004c_2:
			{
				goto IL_00d3_2;
			}

IL_0051_2:
			{
				goto IL_0170_2;
			}

IL_0056_2:
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)))), SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), (bool)0);
				goto IL_0128_2;
			}

IL_006f_2:
			{
				RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_9, SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F);
				Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814* L_10 = *(Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
				NullCheck(L_10);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_13;
				L_13 = InvokerFuncInvoker2< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_11: *(void**)L_11), L_12);
				V_4 = L_13;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_14;
				L_14 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_3 = L_14;
				bool L_15;
				L_15 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_3), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_00ef_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_16);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_17 = V_3;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15), L_17);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CLastAwaitWithCancellationAsyncU3Ed__3_1_tE16CA9A4999761FA673AE43AC096DABBF15267E4**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_0316;
			}

IL_00d3_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_18 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15));
				V_3 = L_18;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_19 = (-1);
				V_0 = L_19;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_19);
			}

IL_00ef_2:
			{
				bool L_20;
				L_20 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_20);
				bool L_21 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
				V_2 = L_21;
				bool L_22 = V_2;
				if (!L_22)
				{
					goto IL_011b_2;
				}
			}
			{
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), (bool)1);
				il2cpp_codegen_memcpy(L_23, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_23, SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F);
			}

IL_011b_2:
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)))), SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F);
			}

IL_0128_2:
			{
				RuntimeObject* L_24 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
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
					goto IL_018d_2;
				}
			}
			{
				int32_t L_28 = 1;
				V_0 = L_28;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_28);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29 = V_7;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15), L_29);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CLastAwaitWithCancellationAsyncU3Ed__3_1_tE16CA9A4999761FA673AE43AC096DABBF15267E4**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_7), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_0316;
			}

IL_0170_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_30 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15));
				V_7 = L_30;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_31 = (-1);
				V_0 = L_31;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_31);
			}

IL_018d_2:
			{
				bool L_32;
				L_32 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14), L_32);
				bool L_33 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
				V_6 = L_33;
				bool L_34 = V_6;
				if (L_34)
				{
					goto IL_006f_2;
				}
			}
			{
				bool L_35 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				V_8 = L_35;
				bool L_36 = V_8;
				if (!L_36)
				{
					goto IL_01c4_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_37, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_37, SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F);
				goto IL_01e7_2;
			}

IL_01c4_2:
			{
				bool L_38 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
				V_9 = L_38;
				bool L_39 = V_9;
				if (!L_39)
				{
					goto IL_01e0_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_40, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_40, SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F);
				goto IL_01e7_2;
			}

IL_01e0_2:
			{
				Exception_t* L_41;
				L_41 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_41, method);
			}

IL_01e7_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), 1);
				goto IL_01fc_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01f0_1;
			}
			throw e;
		}

CATCH_01f0_1:
		{
			RuntimeObject* L_42 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_10 = L_42;
			RuntimeObject* L_43 = V_10;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_43);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_01fc_1;
		}

IL_01fc_1:
		{
			RuntimeObject* L_44 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_44) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_45 = V_11;
			if (!L_45)
			{
				goto IL_027b_1;
			}
		}
		{
			RuntimeObject* L_46 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			NullCheck((RuntimeObject*)L_46);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_47;
			L_47 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
			V_13 = L_47;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_48;
			L_48 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_13), NULL);
			V_12 = L_48;
			bool L_49;
			L_49 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_12), NULL);
			if (L_49)
			{
				goto IL_0272_1;
			}
		}
		{
			int32_t L_50 = 2;
			V_0 = L_50;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_50);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_51 = V_12;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16), L_51);
			V_5 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CLastAwaitWithCancellationAsyncU3Ed__3_1_tE16CA9A4999761FA673AE43AC096DABBF15267E4**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_12), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
			goto IL_0316;
		}

IL_0255_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_52 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16));
			V_12 = L_52;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_53 = (-1);
			V_0 = L_53;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_53);
		}

IL_0272_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_12), NULL);
		}

IL_027b_1:
		{
			RuntimeObject* L_54 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_10 = L_54;
			RuntimeObject* L_55 = V_10;
			if (!L_55)
			{
				goto IL_02a5_1;
			}
		}
		{
			RuntimeObject* L_56 = V_10;
			V_14 = ((Exception_t*)IsInstClass((RuntimeObject*)L_56, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_57 = V_14;
			if (L_57)
			{
				goto IL_0298_1;
			}
		}
		{
			RuntimeObject* L_58 = V_10;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_58, method);
		}

IL_0298_1:
		{
			Exception_t* L_59 = V_14;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_60;
			L_60 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_59, NULL);
			NullCheck(L_60);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_60, NULL);
		}

IL_02a5_1:
		{
			int32_t L_61 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			V_15 = L_61;
			int32_t L_62 = V_15;
			if ((((int32_t)L_62) == ((int32_t)1)))
			{
				goto IL_02b4_1;
			}
		}
		{
			goto IL_02bd_1;
		}

IL_02b4_1:
		{
			il2cpp_codegen_memcpy(L_63, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F);
			il2cpp_codegen_memcpy(V_1, L_63, SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F);
			goto IL_02fa;
		}

IL_02bd_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
			goto IL_02fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02d9;
		}
		throw e;
	}

CATCH_02d9:
	{
		Exception_t* L_64 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_14 = L_64;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		Exception_t* L_65 = V_14;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_65, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0316;
	}

IL_02fa:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_66, V_1, SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_66: *(void**)L_66));
	}

IL_0316:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLastAwaitWithCancellationAsyncU3Ed__3_1_SetStateMachine_m0D9D6DF762FDC6987D52F7F6D883079B95A1B247_gshared (U3CLastAwaitWithCancellationAsyncU3Ed__3_1_tE16CA9A4999761FA673AE43AC096DABBF15267E4* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLongCountAsyncU3Ed__0_1__ctor_mC75D0D46EFE81D67FA569F35F7CF73AA40BC7BC2_gshared (U3CLongCountAsyncU3Ed__0_1_t669866756D43CCD2A56D30F8B27884E958EEE7D8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLongCountAsyncU3Ed__0_1_MoveNext_m5671262998E464C5689BE6A708DF36524FC4C909_gshared (U3CLongCountAsyncU3Ed__0_1_t669866756D43CCD2A56D30F8B27884E958EEE7D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	bool V_3 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_4;
	memset((&V_4), 0, sizeof(V_4));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_5;
	memset((&V_5), 0, sizeof(V_5));
	U3CLongCountAsyncU3Ed__0_1_t669866756D43CCD2A56D30F8B27884E958EEE7D8* V_6 = NULL;
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
			goto IL_0047_1;
		}

IL_0014_1:
		{
			goto IL_014e_1;
		}

IL_0019_1:
		{
			__this->___U3CcountU3E5__1 = ((int64_t)0);
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
					goto IL_004d_2;
				}
			}
			{
				goto IL_004f_2;
			}

IL_004d_2:
			{
				goto IL_00af_2;
			}

IL_004f_2:
			{
				goto IL_0067_2;
			}

IL_0052_2:
			{
				int64_t L_7 = __this->___U3CcountU3E5__1;
				V_2 = L_7;
				int64_t L_8 = V_2;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_8, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1 = ((int64_t)il2cpp_codegen_add(L_8, ((int64_t)1)));
			}

IL_0067_2:
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
					goto IL_00cc_2;
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
				AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_15 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CLongCountAsyncU3Ed__0_1_t669866756D43CCD2A56D30F8B27884E958EEE7D8**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_15, (&V_4), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
				goto IL_01f2;
			}

IL_00af_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_16 = __this->___U3CU3Eu__1;
				V_4 = L_16;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_17 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_17, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_18 = (-1);
				V_0 = L_18;
				__this->___U3CU3E1__state = L_18;
			}

IL_00cc_2:
			{
				bool L_19;
				L_19 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_4), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5 = L_19;
				bool L_20 = __this->___U3CU3Es__5;
				V_3 = L_20;
				bool L_21 = V_3;
				if (L_21)
				{
					goto IL_0052_2;
				}
			}
			{
				goto IL_00f5_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00e9_1;
			}
			throw e;
		}

CATCH_00e9_1:
		{
			RuntimeObject* L_22 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_7 = L_22;
			RuntimeObject* L_23 = V_7;
			__this->___U3CU3Es__3 = L_23;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_23);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_00f5_1;
		}

IL_00f5_1:
		{
			RuntimeObject* L_24 = __this->___U3CeU3E5__2;
			V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_24) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_25 = V_8;
			if (!L_25)
			{
				goto IL_0174_1;
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
				goto IL_016b_1;
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
			AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_32 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CLongCountAsyncU3Ed__0_1_t669866756D43CCD2A56D30F8B27884E958EEE7D8**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_32, (&V_9), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
			goto IL_01f2;
		}

IL_014e_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_33 = __this->___U3CU3Eu__2;
			V_9 = L_33;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_34 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_34, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_35 = (-1);
			V_0 = L_35;
			__this->___U3CU3E1__state = L_35;
		}

IL_016b_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_9), NULL);
		}

IL_0174_1:
		{
			RuntimeObject* L_36 = __this->___U3CU3Es__3;
			V_7 = L_36;
			RuntimeObject* L_37 = V_7;
			if (!L_37)
			{
				goto IL_019e_1;
			}
		}
		{
			RuntimeObject* L_38 = V_7;
			V_11 = ((Exception_t*)IsInstClass((RuntimeObject*)L_38, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_39 = V_11;
			if (L_39)
			{
				goto IL_0191_1;
			}
		}
		{
			RuntimeObject* L_40 = V_7;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, method);
		}

IL_0191_1:
		{
			Exception_t* L_41 = V_11;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_42;
			L_42 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_41, NULL);
			NullCheck(L_42);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_42, NULL);
		}

IL_019e_1:
		{
			int32_t L_43 = __this->___U3CU3Es__4;
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			int64_t L_44 = __this->___U3CcountU3E5__1;
			V_1 = L_44;
			goto IL_01d6;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01b5;
		}
		throw e;
	}

CATCH_01b5:
	{
		Exception_t* L_45 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_11 = L_45;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_46 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder);
		Exception_t* L_47 = V_11;
		AsyncUniTaskMethodBuilder_1_SetException_mAEE718F60708F1A917C5379F94447C8090707CE7_inline(L_46, L_47, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mAEE718F60708F1A917C5379F94447C8090707CE7_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_01f2;
	}

IL_01d6:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_48 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder);
		int64_t L_49 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_inline(L_48, L_49, AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_RuntimeMethod_var);
	}

IL_01f2:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLongCountAsyncU3Ed__0_1_SetStateMachine_mF00FDC5E619D371C6E248B9EA78532A0FEB9FE01_gshared (U3CLongCountAsyncU3Ed__0_1_t669866756D43CCD2A56D30F8B27884E958EEE7D8* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLongCountAsyncU3Ed__1_1__ctor_m94A7700016B7196E6E7E8107EC5D3AC826E9D0F4_gshared (U3CLongCountAsyncU3Ed__1_1_t9BCC201AA36FD39F4C9C0D5E3365B5C80DE5A3CF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLongCountAsyncU3Ed__1_1_MoveNext_m9168C5BE87A94047DB28D3BC61382212366E3558_gshared (U3CLongCountAsyncU3Ed__1_1_t9BCC201AA36FD39F4C9C0D5E3365B5C80DE5A3CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tE7A842D210139A9AC828B4CCF3C07CCDA1118341 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_tE7A842D210139A9AC828B4CCF3C07CCDA1118341);
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	bool V_2 = false;
	int64_t V_3 = 0;
	bool V_4 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_6;
	memset((&V_6), 0, sizeof(V_6));
	U3CLongCountAsyncU3Ed__1_1_t9BCC201AA36FD39F4C9C0D5E3365B5C80DE5A3CF* V_7 = NULL;
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
			goto IL_0047_1;
		}

IL_0014_1:
		{
			goto IL_016c_1;
		}

IL_0019_1:
		{
			__this->___U3CcountU3E5__1 = ((int64_t)0);
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
					goto IL_004d_2;
				}
			}
			{
				goto IL_004f_2;
			}

IL_004d_2:
			{
				goto IL_00cb_2;
			}

IL_004f_2:
			{
				goto IL_0083_2;
			}

IL_0052_2:
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
					goto IL_0082_2;
				}
			}
			{
				int64_t L_12 = __this->___U3CcountU3E5__1;
				V_3 = L_12;
				int64_t L_13 = V_3;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_13, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1 = ((int64_t)il2cpp_codegen_add(L_13, ((int64_t)1)));
			}

IL_0082_2:
			{
			}

IL_0083_2:
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
					goto IL_00e8_2;
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
				AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_20 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CLongCountAsyncU3Ed__1_1_t9BCC201AA36FD39F4C9C0D5E3365B5C80DE5A3CF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_20, (&V_5), (&V_7), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_0210;
			}

IL_00cb_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_21 = __this->___U3CU3Eu__1;
				V_5 = L_21;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_22 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_22, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_23 = (-1);
				V_0 = L_23;
				__this->___U3CU3E1__state = L_23;
			}

IL_00e8_2:
			{
				bool L_24;
				L_24 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_5), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5 = L_24;
				bool L_25 = __this->___U3CU3Es__5;
				V_4 = L_25;
				bool L_26 = V_4;
				if (L_26)
				{
					goto IL_0052_2;
				}
			}
			{
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
			RuntimeObject* L_27 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_8 = L_27;
			RuntimeObject* L_28 = V_8;
			__this->___U3CU3Es__3 = L_28;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_28);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0113_1;
		}

IL_0113_1:
		{
			RuntimeObject* L_29 = __this->___U3CeU3E5__2;
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_29) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_30 = V_9;
			if (!L_30)
			{
				goto IL_0192_1;
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
				goto IL_0189_1;
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
			AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_37 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CLongCountAsyncU3Ed__1_1_t9BCC201AA36FD39F4C9C0D5E3365B5C80DE5A3CF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_37, (&V_10), (&V_7), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_0210;
		}

IL_016c_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_38 = __this->___U3CU3Eu__2;
			V_10 = L_38;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_39 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_39, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_40 = (-1);
			V_0 = L_40;
			__this->___U3CU3E1__state = L_40;
		}

IL_0189_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_0192_1:
		{
			RuntimeObject* L_41 = __this->___U3CU3Es__3;
			V_8 = L_41;
			RuntimeObject* L_42 = V_8;
			if (!L_42)
			{
				goto IL_01bc_1;
			}
		}
		{
			RuntimeObject* L_43 = V_8;
			V_12 = ((Exception_t*)IsInstClass((RuntimeObject*)L_43, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_44 = V_12;
			if (L_44)
			{
				goto IL_01af_1;
			}
		}
		{
			RuntimeObject* L_45 = V_8;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, method);
		}

IL_01af_1:
		{
			Exception_t* L_46 = V_12;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_47;
			L_47 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_46, NULL);
			NullCheck(L_47);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_47, NULL);
		}

IL_01bc_1:
		{
			int32_t L_48 = __this->___U3CU3Es__4;
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			int64_t L_49 = __this->___U3CcountU3E5__1;
			V_1 = L_49;
			goto IL_01f4;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01d3;
		}
		throw e;
	}

CATCH_01d3:
	{
		Exception_t* L_50 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_12 = L_50;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_51 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder);
		Exception_t* L_52 = V_12;
		AsyncUniTaskMethodBuilder_1_SetException_mAEE718F60708F1A917C5379F94447C8090707CE7_inline(L_51, L_52, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mAEE718F60708F1A917C5379F94447C8090707CE7_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0210;
	}

IL_01f4:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_53 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder);
		int64_t L_54 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_inline(L_53, L_54, AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_RuntimeMethod_var);
	}

IL_0210:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLongCountAsyncU3Ed__1_1_SetStateMachine_mC851B2B39F64955C973AE3C33E84DE1951793F81_gshared (U3CLongCountAsyncU3Ed__1_1_t9BCC201AA36FD39F4C9C0D5E3365B5C80DE5A3CF* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLongCountAwaitAsyncU3Ed__2_1__ctor_m63507B4F9900F5DA95911BFE6E30963A61AB7CBF_gshared (U3CLongCountAwaitAsyncU3Ed__2_1_t943648D574C784EBF11D71FCD9F05FC1B9F46CCB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLongCountAwaitAsyncU3Ed__2_1_MoveNext_m04A82B8507BC76D95D5A4D4C9785345B1033C726_gshared (U3CLongCountAwaitAsyncU3Ed__2_1_t943648D574C784EBF11D71FCD9F05FC1B9F46CCB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tFF1CFA51DD4E47539E6D0FD3320F4D2A959CB69A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_tFF1CFA51DD4E47539E6D0FD3320F4D2A959CB69A);
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CLongCountAwaitAsyncU3Ed__2_1_t943648D574C784EBF11D71FCD9F05FC1B9F46CCB* V_5 = NULL;
	int64_t V_6 = 0;
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
			goto IL_0048_1;
		}

IL_0015_1:
		{
			goto IL_01e7_1;
		}

IL_001a_1:
		{
			__this->___U3CcountU3E5__1 = ((int64_t)0);
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
				if (!L_6)
				{
					goto IL_0054_2;
				}
			}
			{
				goto IL_004e_2;
			}

IL_004e_2:
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_0056_2;
				}
			}
			{
				goto IL_005b_2;
			}

IL_0054_2:
			{
				goto IL_00b3_2;
			}

IL_0056_2:
			{
				goto IL_0146_2;
			}

IL_005b_2:
			{
				goto IL_00fe_2;
			}

IL_0061_2:
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
					goto IL_00cf_2;
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
				AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_16 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CLongCountAwaitAsyncU3Ed__2_1_t943648D574C784EBF11D71FCD9F05FC1B9F46CCB**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_16, (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_028b;
			}

IL_00b3_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_17 = __this->___U3CU3Eu__1;
				V_3 = L_17;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_18 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_18, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state = L_19;
			}

IL_00cf_2:
			{
				bool L_20;
				L_20 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5 = L_20;
				bool L_21 = __this->___U3CU3Es__5;
				V_2 = L_21;
				bool L_22 = V_2;
				if (!L_22)
				{
					goto IL_00fd_2;
				}
			}
			{
				int64_t L_23 = __this->___U3CcountU3E5__1;
				V_6 = L_23;
				int64_t L_24 = V_6;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_24, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1 = ((int64_t)il2cpp_codegen_add(L_24, ((int64_t)1)));
			}

IL_00fd_2:
			{
			}

IL_00fe_2:
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
					goto IL_0163_2;
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
				AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_31 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CLongCountAwaitAsyncU3Ed__2_1_t943648D574C784EBF11D71FCD9F05FC1B9F46CCB**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_31, (&V_8), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_028b;
			}

IL_0146_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_32 = __this->___U3CU3Eu__1;
				V_8 = L_32;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_33 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_33, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_34 = (-1);
				V_0 = L_34;
				__this->___U3CU3E1__state = L_34;
			}

IL_0163_2:
			{
				bool L_35;
				L_35 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_8), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_35;
				bool L_36 = __this->___U3CU3Es__6;
				V_7 = L_36;
				bool L_37 = V_7;
				if (L_37)
				{
					goto IL_0061_2;
				}
			}
			{
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
			RuntimeObject* L_38 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_9 = L_38;
			RuntimeObject* L_39 = V_9;
			__this->___U3CU3Es__3 = L_39;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_39);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_018e_1;
		}

IL_018e_1:
		{
			RuntimeObject* L_40 = __this->___U3CeU3E5__2;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_40) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_41 = V_10;
			if (!L_41)
			{
				goto IL_020d_1;
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
				goto IL_0204_1;
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
			AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_48 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CLongCountAwaitAsyncU3Ed__2_1_t943648D574C784EBF11D71FCD9F05FC1B9F46CCB**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_48, (&V_11), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_028b;
		}

IL_01e7_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_49 = __this->___U3CU3Eu__2;
			V_11 = L_49;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_50 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_50, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_51 = (-1);
			V_0 = L_51;
			__this->___U3CU3E1__state = L_51;
		}

IL_0204_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_020d_1:
		{
			RuntimeObject* L_52 = __this->___U3CU3Es__3;
			V_9 = L_52;
			RuntimeObject* L_53 = V_9;
			if (!L_53)
			{
				goto IL_0237_1;
			}
		}
		{
			RuntimeObject* L_54 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_54, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_55 = V_13;
			if (L_55)
			{
				goto IL_022a_1;
			}
		}
		{
			RuntimeObject* L_56 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_56, method);
		}

IL_022a_1:
		{
			Exception_t* L_57 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_58;
			L_58 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_57, NULL);
			NullCheck(L_58);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_58, NULL);
		}

IL_0237_1:
		{
			int32_t L_59 = __this->___U3CU3Es__4;
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			int64_t L_60 = __this->___U3CcountU3E5__1;
			V_1 = L_60;
			goto IL_026f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_024e;
		}
		throw e;
	}

CATCH_024e:
	{
		Exception_t* L_61 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_13 = L_61;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_62 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder);
		Exception_t* L_63 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_mAEE718F60708F1A917C5379F94447C8090707CE7_inline(L_62, L_63, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mAEE718F60708F1A917C5379F94447C8090707CE7_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_028b;
	}

IL_026f:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_64 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder);
		int64_t L_65 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_inline(L_64, L_65, AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_RuntimeMethod_var);
	}

IL_028b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLongCountAwaitAsyncU3Ed__2_1_SetStateMachine_mE8FE0629EC63BA2F98D949565C1F177E8FB2B02E_gshared (U3CLongCountAwaitAsyncU3Ed__2_1_t943648D574C784EBF11D71FCD9F05FC1B9F46CCB* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLongCountAwaitWithCancellationAsyncU3Ed__3_1__ctor_m54A87481D4D5DFA0DF9763772CCABD40938E6081_gshared (U3CLongCountAwaitWithCancellationAsyncU3Ed__3_1_tEC740CC65DA303052502C70CAD217A9BCF390D5D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLongCountAwaitWithCancellationAsyncU3Ed__3_1_MoveNext_mE4AF3D7BD332E672532E4DE50B7A9E6B855DD112_gshared (U3CLongCountAwaitWithCancellationAsyncU3Ed__3_1_tEC740CC65DA303052502C70CAD217A9BCF390D5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t298F5C583BBEA8E274979E94D50CA196CF4201CB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t298F5C583BBEA8E274979E94D50CA196CF4201CB);
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CLongCountAwaitWithCancellationAsyncU3Ed__3_1_tEC740CC65DA303052502C70CAD217A9BCF390D5D* V_5 = NULL;
	int64_t V_6 = 0;
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
			goto IL_0048_1;
		}

IL_0015_1:
		{
			goto IL_01ed_1;
		}

IL_001a_1:
		{
			__this->___U3CcountU3E5__1 = ((int64_t)0);
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
				if (!L_6)
				{
					goto IL_0054_2;
				}
			}
			{
				goto IL_004e_2;
			}

IL_004e_2:
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_0056_2;
				}
			}
			{
				goto IL_005b_2;
			}

IL_0054_2:
			{
				goto IL_00b9_2;
			}

IL_0056_2:
			{
				goto IL_014c_2;
			}

IL_005b_2:
			{
				goto IL_0104_2;
			}

IL_0061_2:
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
					goto IL_00d5_2;
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
				AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_17 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CLongCountAwaitWithCancellationAsyncU3Ed__3_1_tEC740CC65DA303052502C70CAD217A9BCF390D5D**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0291;
			}

IL_00b9_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_18 = __this->___U3CU3Eu__1;
				V_3 = L_18;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_19 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state = L_20;
			}

IL_00d5_2:
			{
				bool L_21;
				L_21 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5 = L_21;
				bool L_22 = __this->___U3CU3Es__5;
				V_2 = L_22;
				bool L_23 = V_2;
				if (!L_23)
				{
					goto IL_0103_2;
				}
			}
			{
				int64_t L_24 = __this->___U3CcountU3E5__1;
				V_6 = L_24;
				int64_t L_25 = V_6;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_25, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1 = ((int64_t)il2cpp_codegen_add(L_25, ((int64_t)1)));
			}

IL_0103_2:
			{
			}

IL_0104_2:
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
					goto IL_0169_2;
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
				AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_32 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CLongCountAwaitWithCancellationAsyncU3Ed__3_1_tEC740CC65DA303052502C70CAD217A9BCF390D5D**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_32, (&V_8), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0291;
			}

IL_014c_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_33 = __this->___U3CU3Eu__1;
				V_8 = L_33;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_34, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_35 = (-1);
				V_0 = L_35;
				__this->___U3CU3E1__state = L_35;
			}

IL_0169_2:
			{
				bool L_36;
				L_36 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_8), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_36;
				bool L_37 = __this->___U3CU3Es__6;
				V_7 = L_37;
				bool L_38 = V_7;
				if (L_38)
				{
					goto IL_0061_2;
				}
			}
			{
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
			RuntimeObject* L_39 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_9 = L_39;
			RuntimeObject* L_40 = V_9;
			__this->___U3CU3Es__3 = L_40;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_40);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0194_1;
		}

IL_0194_1:
		{
			RuntimeObject* L_41 = __this->___U3CeU3E5__2;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_41) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_42 = V_10;
			if (!L_42)
			{
				goto IL_0213_1;
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
				goto IL_020a_1;
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
			AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_49 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CLongCountAwaitWithCancellationAsyncU3Ed__3_1_tEC740CC65DA303052502C70CAD217A9BCF390D5D**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_49, (&V_11), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_0291;
		}

IL_01ed_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50 = __this->___U3CU3Eu__2;
			V_11 = L_50;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_51 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_51, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_52 = (-1);
			V_0 = L_52;
			__this->___U3CU3E1__state = L_52;
		}

IL_020a_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_0213_1:
		{
			RuntimeObject* L_53 = __this->___U3CU3Es__3;
			V_9 = L_53;
			RuntimeObject* L_54 = V_9;
			if (!L_54)
			{
				goto IL_023d_1;
			}
		}
		{
			RuntimeObject* L_55 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_55, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_56 = V_13;
			if (L_56)
			{
				goto IL_0230_1;
			}
		}
		{
			RuntimeObject* L_57 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_57, method);
		}

IL_0230_1:
		{
			Exception_t* L_58 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_59;
			L_59 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_58, NULL);
			NullCheck(L_59);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_59, NULL);
		}

IL_023d_1:
		{
			int32_t L_60 = __this->___U3CU3Es__4;
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			int64_t L_61 = __this->___U3CcountU3E5__1;
			V_1 = L_61;
			goto IL_0275;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0254;
		}
		throw e;
	}

CATCH_0254:
	{
		Exception_t* L_62 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_13 = L_62;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_63 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder);
		Exception_t* L_64 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_mAEE718F60708F1A917C5379F94447C8090707CE7_inline(L_63, L_64, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mAEE718F60708F1A917C5379F94447C8090707CE7_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0291;
	}

IL_0275:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_65 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder);
		int64_t L_66 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_inline(L_65, L_66, AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_RuntimeMethod_var);
	}

IL_0291:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLongCountAwaitWithCancellationAsyncU3Ed__3_1_SetStateMachine_m39CC721976EA9C566BAC7163CDAC7441D99FA384_gshared (U3CLongCountAwaitWithCancellationAsyncU3Ed__3_1_tEC740CC65DA303052502C70CAD217A9BCF390D5D* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMaxAsyncU3Ed__0_1__ctor_m06BD1E26102288449FDD54EEB4E251B5A3E14429_gshared (U3CMaxAsyncU3Ed__0_1_t5294E09AD867317EEACB8FB98CDF7D2FC6FC3CEB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMaxAsyncU3Ed__0_1_MoveNext_m3A3877B7E3CBD3430C2B92A7622AE07364A66A94_gshared (U3CMaxAsyncU3Ed__0_1_t5294E09AD867317EEACB8FB98CDF7D2FC6FC3CEB* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t8F9349816F67C3181FAC6367DD7FFEF199AED245 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t8F9349816F67C3181FAC6367DD7FFEF199AED245);
	const Il2CppFullySharedGenericAny L_22 = L_10;
	const Il2CppFullySharedGenericAny L_24 = L_10;
	const Il2CppFullySharedGenericAny L_30 = L_10;
	const Il2CppFullySharedGenericAny L_63 = L_10;
	const Il2CppFullySharedGenericAny L_64 = L_10;
	const Il2CppFullySharedGenericAny L_67 = L_10;
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_TSource_t8F9349816F67C3181FAC6367DD7FFEF199AED245);
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_TSource_t8F9349816F67C3181FAC6367DD7FFEF199AED245);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t8F9349816F67C3181FAC6367DD7FFEF199AED245);
	memset(V_1, 0, SizeOf_TSource_t8F9349816F67C3181FAC6367DD7FFEF199AED245);
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CMaxAsyncU3Ed__0_1_t5294E09AD867317EEACB8FB98CDF7D2FC6FC3CEB* V_5 = NULL;
	bool V_6 = false;
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
	int32_t V_14 = 0;
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
			goto IL_0057_1;
		}

IL_0015_1:
		{
			goto IL_0253_1;
		}

IL_001a_1:
		{
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)))), SizeOf_TSource_t8F9349816F67C3181FAC6367DD7FFEF199AED245);
			Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_3;
			L_3 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
			il2cpp_codegen_write_instance_field_data<Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_3);
			RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_4, L_5);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_6);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), NULL);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), 0);
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
					goto IL_0063_2;
				}
			}
			{
				goto IL_005d_2;
			}

IL_005d_2:
			{
				int32_t L_8 = V_0;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_0065_2;
				}
			}
			{
				goto IL_006a_2;
			}

IL_0063_2:
			{
				goto IL_00ca_2;
			}

IL_0065_2:
			{
				goto IL_01a9_2;
			}

IL_006a_2:
			{
				goto IL_0084_2;
			}

IL_006d_2:
			{
				RuntimeObject* L_9 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_9, (Il2CppFullySharedGenericAny*)L_10);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_10, SizeOf_TSource_t8F9349816F67C3181FAC6367DD7FFEF199AED245);
				goto IL_0111_2;
			}

IL_0084_2:
			{
				RuntimeObject* L_11 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_11);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_12;
				L_12 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_11);
				V_4 = L_12;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_13;
				L_13 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_3 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_3), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00e6_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_15);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_16 = V_3;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_16);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMaxAsyncU3Ed__0_1_t5294E09AD867317EEACB8FB98CDF7D2FC6FC3CEB**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_033a;
			}

IL_00ca_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_17 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
				V_3 = L_17;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_18 = (-1);
				V_0 = L_18;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_18);
			}

IL_00e6_2:
			{
				bool L_19;
				L_19 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_19);
				bool L_20 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
				V_2 = L_20;
				bool L_21 = V_2;
				if (L_21)
				{
					goto IL_006d_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)), SizeOf_TSource_t8F9349816F67C3181FAC6367DD7FFEF199AED245);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_22, SizeOf_TSource_t8F9349816F67C3181FAC6367DD7FFEF199AED245);
				goto IL_01e5_2;
			}

IL_0111_2:
			{
				goto IL_0161_2;
			}

IL_0114_2:
			{
				RuntimeObject* L_23 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_23);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_23, (Il2CppFullySharedGenericAny*)L_24);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_24, SizeOf_TSource_t8F9349816F67C3181FAC6367DD7FFEF199AED245);
				Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_25 = *(Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				il2cpp_codegen_memcpy(L_26, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)), SizeOf_TSource_t8F9349816F67C3181FAC6367DD7FFEF199AED245);
				il2cpp_codegen_memcpy(L_27, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)), SizeOf_TSource_t8F9349816F67C3181FAC6367DD7FFEF199AED245);
				NullCheck(L_25);
				int32_t L_28;
				L_28 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_25, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_26: *(void**)L_26), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_27: *(void**)L_27));
				V_6 = (bool)((((int32_t)L_28) < ((int32_t)0))? 1 : 0);
				bool L_29 = V_6;
				if (!L_29)
				{
					goto IL_0154_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_30, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)), SizeOf_TSource_t8F9349816F67C3181FAC6367DD7FFEF199AED245);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_30, SizeOf_TSource_t8F9349816F67C3181FAC6367DD7FFEF199AED245);
			}

IL_0154_2:
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)))), SizeOf_TSource_t8F9349816F67C3181FAC6367DD7FFEF199AED245);
			}

IL_0161_2:
			{
				RuntimeObject* L_31 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_31);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_32;
				L_32 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_31);
				V_4 = L_32;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_33;
				L_33 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_8 = L_33;
				bool L_34;
				L_34 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_8), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_34)
				{
					goto IL_01c6_2;
				}
			}
			{
				int32_t L_35 = 1;
				V_0 = L_35;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_35);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_36 = V_8;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_36);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMaxAsyncU3Ed__0_1_t5294E09AD867317EEACB8FB98CDF7D2FC6FC3CEB**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_8), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_033a;
			}

IL_01a9_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_37 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
				V_8 = L_37;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_38 = (-1);
				V_0 = L_38;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_38);
			}

IL_01c6_2:
			{
				bool L_39;
				L_39 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_8), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_39);
				bool L_40 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12));
				V_7 = L_40;
				bool L_41 = V_7;
				if (L_41)
				{
					goto IL_0114_2;
				}
			}
			{
				goto IL_01fa_1;
			}

IL_01e5_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), 1);
				goto IL_01fa_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01ee_1;
			}
			throw e;
		}

CATCH_01ee_1:
		{
			RuntimeObject* L_42 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_9 = L_42;
			RuntimeObject* L_43 = V_9;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_43);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_01fa_1;
		}

IL_01fa_1:
		{
			RuntimeObject* L_44 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_44) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_45 = V_10;
			if (!L_45)
			{
				goto IL_0279_1;
			}
		}
		{
			RuntimeObject* L_46 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			NullCheck((RuntimeObject*)L_46);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_47;
			L_47 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
			V_12 = L_47;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_48;
			L_48 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_48;
			bool L_49;
			L_49 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_49)
			{
				goto IL_0270_1;
			}
		}
		{
			int32_t L_50 = 2;
			V_0 = L_50;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_50);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_51 = V_11;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14), L_51);
			V_5 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMaxAsyncU3Ed__0_1_t5294E09AD867317EEACB8FB98CDF7D2FC6FC3CEB**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_11), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			goto IL_033a;
		}

IL_0253_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_52 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
			V_11 = L_52;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_53 = (-1);
			V_0 = L_53;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_53);
		}

IL_0270_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_0279_1:
		{
			RuntimeObject* L_54 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_9 = L_54;
			RuntimeObject* L_55 = V_9;
			if (!L_55)
			{
				goto IL_02a3_1;
			}
		}
		{
			RuntimeObject* L_56 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_56, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_57 = V_13;
			if (L_57)
			{
				goto IL_0296_1;
			}
		}
		{
			RuntimeObject* L_58 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_58, method);
		}

IL_0296_1:
		{
			Exception_t* L_59 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_60;
			L_60 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_59, NULL);
			NullCheck(L_60);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_60, NULL);
		}

IL_02a3_1:
		{
			int32_t L_61 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			V_14 = L_61;
			int32_t L_62 = V_14;
			if ((((int32_t)L_62) == ((int32_t)1)))
			{
				goto IL_02b2_1;
			}
		}
		{
			goto IL_02bb_1;
		}

IL_02b2_1:
		{
			il2cpp_codegen_memcpy(L_63, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_TSource_t8F9349816F67C3181FAC6367DD7FFEF199AED245);
			il2cpp_codegen_memcpy(V_1, L_63, SizeOf_TSource_t8F9349816F67C3181FAC6367DD7FFEF199AED245);
			goto IL_030b;
		}

IL_02bb_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), SizeOf_TSource_t8F9349816F67C3181FAC6367DD7FFEF199AED245);
			il2cpp_codegen_memcpy(L_64, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)), SizeOf_TSource_t8F9349816F67C3181FAC6367DD7FFEF199AED245);
			il2cpp_codegen_memcpy(V_1, L_64, SizeOf_TSource_t8F9349816F67C3181FAC6367DD7FFEF199AED245);
			goto IL_030b;
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
		Exception_t* L_65 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_13 = L_65;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)))), SizeOf_TSource_t8F9349816F67C3181FAC6367DD7FFEF199AED245);
		il2cpp_codegen_write_instance_field_data<Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), (Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB*)NULL);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		Exception_t* L_66 = V_13;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_66, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_033a;
	}

IL_030b:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)))), SizeOf_TSource_t8F9349816F67C3181FAC6367DD7FFEF199AED245);
		il2cpp_codegen_write_instance_field_data<Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), (Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB*)NULL);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_67, V_1, SizeOf_TSource_t8F9349816F67C3181FAC6367DD7FFEF199AED245);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 17), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_67: *(void**)L_67));
	}

IL_033a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMaxAsyncU3Ed__0_1_SetStateMachine_mEA679B9DAD1BBFEA4D4B8EBEA0F712FA87EA5940_gshared (U3CMaxAsyncU3Ed__0_1_t5294E09AD867317EEACB8FB98CDF7D2FC6FC3CEB* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMaxAsyncU3Ed__13_1__ctor_mDC103327958CDF7528282876A7F6FE71B6D9FEC8_gshared (U3CMaxAsyncU3Ed__13_1_t127C47DE180A7E5E0833A81E4EF7FA82FD3B3405* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMaxAsyncU3Ed__13_1_MoveNext_mB33C4452548EE7E630F0B661EFDC2ABF470D4E44_gshared (U3CMaxAsyncU3Ed__13_1_t127C47DE180A7E5E0833A81E4EF7FA82FD3B3405* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t3340CCC423DC74EF5B7D8D92C0F7BEF3DF6635CE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t3340CCC423DC74EF5B7D8D92C0F7BEF3DF6635CE);
	const Il2CppFullySharedGenericAny L_28 = L_10;
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CMaxAsyncU3Ed__13_1_t127C47DE180A7E5E0833A81E4EF7FA82FD3B3405* V_5 = NULL;
	bool V_6 = false;
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
			goto IL_004b_1;
		}

IL_0015_1:
		{
			goto IL_0231_1;
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
				if (!L_6)
				{
					goto IL_0057_2;
				}
			}
			{
				goto IL_0051_2;
			}

IL_0051_2:
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_0059_2;
				}
			}
			{
				goto IL_005e_2;
			}

IL_0057_2:
			{
				goto IL_00c9_2;
			}

IL_0059_2:
			{
				goto IL_0190_2;
			}

IL_005e_2:
			{
				goto IL_0083_2;
			}

IL_0061_2:
			{
				Func_2_tFAB3D8EFCE4F55CAB3F80EABAB10F8226D7FEBF6* L_8 = __this->___selector;
				RuntimeObject* L_9 = __this->___U3CeU3E5__2;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				float L_11;
				L_11 = InvokerFuncInvoker1< float, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
				__this->___U3CvalueU3E5__1 = L_11;
				goto IL_0105_2;
			}

IL_0083_2:
			{
				RuntimeObject* L_12 = __this->___U3CeU3E5__2;
				NullCheck(L_12);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_13;
				L_13 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_12);
				V_4 = L_13;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_14;
				L_14 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_3 = L_14;
				bool L_15;
				L_15 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_3), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_00e5_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->___U3CU3E1__state = L_16;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_17 = V_3;
				__this->___U3CU3Eu__1 = L_17;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_18 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMaxAsyncU3Ed__13_1_t127C47DE180A7E5E0833A81E4EF7FA82FD3B3405**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_18, (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_02d5;
			}

IL_00c9_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_19 = __this->___U3CU3Eu__1;
				V_3 = L_19;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_20 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state = L_21;
			}

IL_00e5_2:
			{
				bool L_22;
				L_22 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5 = L_22;
				bool L_23 = __this->___U3CU3Es__5;
				V_2 = L_23;
				bool L_24 = V_2;
				if (L_24)
				{
					goto IL_0061_2;
				}
			}
			{
				Exception_t* L_25;
				L_25 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
			}

IL_0105_2:
			{
				goto IL_0148_2;
			}

IL_0108_2:
			{
				Func_2_tFAB3D8EFCE4F55CAB3F80EABAB10F8226D7FEBF6* L_26 = __this->___selector;
				RuntimeObject* L_27 = __this->___U3CeU3E5__2;
				NullCheck(L_27);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_27, (Il2CppFullySharedGenericAny*)L_28);
				NullCheck(L_26);
				float L_29;
				L_29 = InvokerFuncInvoker1< float, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_28: *(void**)L_28));
				__this->___U3CxU3E5__6 = L_29;
				float L_30 = __this->___U3CvalueU3E5__1;
				float L_31 = __this->___U3CxU3E5__6;
				V_6 = (bool)((((float)L_30) < ((float)L_31))? 1 : 0);
				bool L_32 = V_6;
				if (!L_32)
				{
					goto IL_0147_2;
				}
			}
			{
				float L_33 = __this->___U3CxU3E5__6;
				__this->___U3CvalueU3E5__1 = L_33;
			}

IL_0147_2:
			{
			}

IL_0148_2:
			{
				RuntimeObject* L_34 = __this->___U3CeU3E5__2;
				NullCheck(L_34);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_35;
				L_35 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_34);
				V_4 = L_35;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_36;
				L_36 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_8 = L_36;
				bool L_37;
				L_37 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_8), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_37)
				{
					goto IL_01ad_2;
				}
			}
			{
				int32_t L_38 = 1;
				V_0 = L_38;
				__this->___U3CU3E1__state = L_38;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_39 = V_8;
				__this->___U3CU3Eu__1 = L_39;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_40 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMaxAsyncU3Ed__13_1_t127C47DE180A7E5E0833A81E4EF7FA82FD3B3405**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_40, (&V_8), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_02d5;
			}

IL_0190_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_41 = __this->___U3CU3Eu__1;
				V_8 = L_41;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_42 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_42, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_43 = (-1);
				V_0 = L_43;
				__this->___U3CU3E1__state = L_43;
			}

IL_01ad_2:
			{
				bool L_44;
				L_44 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_8), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7 = L_44;
				bool L_45 = __this->___U3CU3Es__7;
				V_7 = L_45;
				bool L_46 = V_7;
				if (L_46)
				{
					goto IL_0108_2;
				}
			}
			{
				goto IL_01d8_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01cc_1;
			}
			throw e;
		}

CATCH_01cc_1:
		{
			RuntimeObject* L_47 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_9 = L_47;
			RuntimeObject* L_48 = V_9;
			__this->___U3CU3Es__3 = L_48;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_48);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_01d8_1;
		}

IL_01d8_1:
		{
			RuntimeObject* L_49 = __this->___U3CeU3E5__2;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_49) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_50 = V_10;
			if (!L_50)
			{
				goto IL_0257_1;
			}
		}
		{
			RuntimeObject* L_51 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_51);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_52;
			L_52 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_51);
			V_12 = L_52;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_53;
			L_53 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_53;
			bool L_54;
			L_54 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_54)
			{
				goto IL_024e_1;
			}
		}
		{
			int32_t L_55 = 2;
			V_0 = L_55;
			__this->___U3CU3E1__state = L_55;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_56 = V_11;
			__this->___U3CU3Eu__2 = L_56;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
			V_5 = __this;
			AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_57 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMaxAsyncU3Ed__13_1_t127C47DE180A7E5E0833A81E4EF7FA82FD3B3405**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_57, (&V_11), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_02d5;
		}

IL_0231_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_58 = __this->___U3CU3Eu__2;
			V_11 = L_58;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_59 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_59, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_60 = (-1);
			V_0 = L_60;
			__this->___U3CU3E1__state = L_60;
		}

IL_024e_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_0257_1:
		{
			RuntimeObject* L_61 = __this->___U3CU3Es__3;
			V_9 = L_61;
			RuntimeObject* L_62 = V_9;
			if (!L_62)
			{
				goto IL_0281_1;
			}
		}
		{
			RuntimeObject* L_63 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_63, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_64 = V_13;
			if (L_64)
			{
				goto IL_0274_1;
			}
		}
		{
			RuntimeObject* L_65 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_65, method);
		}

IL_0274_1:
		{
			Exception_t* L_66 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_67;
			L_67 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_66, NULL);
			NullCheck(L_67);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_67, NULL);
		}

IL_0281_1:
		{
			int32_t L_68 = __this->___U3CU3Es__4;
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			float L_69 = __this->___U3CvalueU3E5__1;
			V_1 = L_69;
			goto IL_02b9;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0298;
		}
		throw e;
	}

CATCH_0298:
	{
		Exception_t* L_70 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_13 = L_70;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_71 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder);
		Exception_t* L_72 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_inline(L_71, L_72, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_02d5;
	}

IL_02b9:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_73 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder);
		float L_74 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_inline(L_73, L_74, AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_RuntimeMethod_var);
	}

IL_02d5:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMaxAsyncU3Ed__13_1_SetStateMachine_m7732352FE34EB9883E3ABBFF474DFA03F02CE09D_gshared (U3CMaxAsyncU3Ed__13_1_t127C47DE180A7E5E0833A81E4EF7FA82FD3B3405* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMaxAsyncU3Ed__17_1__ctor_mD4D7306A88BC4FB9984154C0D8A60510D06C8EF0_gshared (U3CMaxAsyncU3Ed__17_1_tDA11432E5B54E699AF5502AE7364400C88B087C1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMaxAsyncU3Ed__17_1_MoveNext_mDDC60A6EECB4BA65B53BF725E56D18037263C71F_gshared (U3CMaxAsyncU3Ed__17_1_tDA11432E5B54E699AF5502AE7364400C88B087C1* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_tDF4B8F4411F6C81E5586BD5AC2FEDF0449E41AD2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_tDF4B8F4411F6C81E5586BD5AC2FEDF0449E41AD2);
	const Il2CppFullySharedGenericAny L_28 = L_10;
	int32_t V_0 = 0;
	double V_1 = 0.0;
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CMaxAsyncU3Ed__17_1_tDA11432E5B54E699AF5502AE7364400C88B087C1* V_5 = NULL;
	bool V_6 = false;
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
			goto IL_004f_1;
		}

IL_0015_1:
		{
			goto IL_0235_1;
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
				goto IL_00cd_2;
			}

IL_005d_2:
			{
				goto IL_0194_2;
			}

IL_0062_2:
			{
				goto IL_0087_2;
			}

IL_0065_2:
			{
				Func_2_tF36C7D1152BF6807C03112D4A053E5038A13A6EB* L_8 = __this->___selector;
				RuntimeObject* L_9 = __this->___U3CeU3E5__2;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				double L_11;
				L_11 = InvokerFuncInvoker1< double, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
				__this->___U3CvalueU3E5__1 = L_11;
				goto IL_0109_2;
			}

IL_0087_2:
			{
				RuntimeObject* L_12 = __this->___U3CeU3E5__2;
				NullCheck(L_12);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_13;
				L_13 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_12);
				V_4 = L_13;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_14;
				L_14 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_3 = L_14;
				bool L_15;
				L_15 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_3), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_00e9_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->___U3CU3E1__state = L_16;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_17 = V_3;
				__this->___U3CU3Eu__1 = L_17;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_18 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMaxAsyncU3Ed__17_1_tDA11432E5B54E699AF5502AE7364400C88B087C1**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_18, (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_02d9;
			}

IL_00cd_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_19 = __this->___U3CU3Eu__1;
				V_3 = L_19;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_20 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state = L_21;
			}

IL_00e9_2:
			{
				bool L_22;
				L_22 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5 = L_22;
				bool L_23 = __this->___U3CU3Es__5;
				V_2 = L_23;
				bool L_24 = V_2;
				if (L_24)
				{
					goto IL_0065_2;
				}
			}
			{
				Exception_t* L_25;
				L_25 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
			}

IL_0109_2:
			{
				goto IL_014c_2;
			}

IL_010c_2:
			{
				Func_2_tF36C7D1152BF6807C03112D4A053E5038A13A6EB* L_26 = __this->___selector;
				RuntimeObject* L_27 = __this->___U3CeU3E5__2;
				NullCheck(L_27);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_27, (Il2CppFullySharedGenericAny*)L_28);
				NullCheck(L_26);
				double L_29;
				L_29 = InvokerFuncInvoker1< double, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_28: *(void**)L_28));
				__this->___U3CxU3E5__6 = L_29;
				double L_30 = __this->___U3CvalueU3E5__1;
				double L_31 = __this->___U3CxU3E5__6;
				V_6 = (bool)((((double)L_30) < ((double)L_31))? 1 : 0);
				bool L_32 = V_6;
				if (!L_32)
				{
					goto IL_014b_2;
				}
			}
			{
				double L_33 = __this->___U3CxU3E5__6;
				__this->___U3CvalueU3E5__1 = L_33;
			}

IL_014b_2:
			{
			}

IL_014c_2:
			{
				RuntimeObject* L_34 = __this->___U3CeU3E5__2;
				NullCheck(L_34);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_35;
				L_35 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_34);
				V_4 = L_35;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_36;
				L_36 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_8 = L_36;
				bool L_37;
				L_37 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_8), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_37)
				{
					goto IL_01b1_2;
				}
			}
			{
				int32_t L_38 = 1;
				V_0 = L_38;
				__this->___U3CU3E1__state = L_38;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_39 = V_8;
				__this->___U3CU3Eu__1 = L_39;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_40 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMaxAsyncU3Ed__17_1_tDA11432E5B54E699AF5502AE7364400C88B087C1**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_40, (&V_8), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_02d9;
			}

IL_0194_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_41 = __this->___U3CU3Eu__1;
				V_8 = L_41;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_42 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_42, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_43 = (-1);
				V_0 = L_43;
				__this->___U3CU3E1__state = L_43;
			}

IL_01b1_2:
			{
				bool L_44;
				L_44 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_8), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7 = L_44;
				bool L_45 = __this->___U3CU3Es__7;
				V_7 = L_45;
				bool L_46 = V_7;
				if (L_46)
				{
					goto IL_010c_2;
				}
			}
			{
				goto IL_01dc_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01d0_1;
			}
			throw e;
		}

CATCH_01d0_1:
		{
			RuntimeObject* L_47 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_9 = L_47;
			RuntimeObject* L_48 = V_9;
			__this->___U3CU3Es__3 = L_48;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_48);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_01dc_1;
		}

IL_01dc_1:
		{
			RuntimeObject* L_49 = __this->___U3CeU3E5__2;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_49) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_50 = V_10;
			if (!L_50)
			{
				goto IL_025b_1;
			}
		}
		{
			RuntimeObject* L_51 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_51);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_52;
			L_52 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_51);
			V_12 = L_52;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_53;
			L_53 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_53;
			bool L_54;
			L_54 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_54)
			{
				goto IL_0252_1;
			}
		}
		{
			int32_t L_55 = 2;
			V_0 = L_55;
			__this->___U3CU3E1__state = L_55;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_56 = V_11;
			__this->___U3CU3Eu__2 = L_56;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
			V_5 = __this;
			AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_57 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMaxAsyncU3Ed__17_1_tDA11432E5B54E699AF5502AE7364400C88B087C1**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_57, (&V_11), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_02d9;
		}

IL_0235_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_58 = __this->___U3CU3Eu__2;
			V_11 = L_58;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_59 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_59, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_60 = (-1);
			V_0 = L_60;
			__this->___U3CU3E1__state = L_60;
		}

IL_0252_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_025b_1:
		{
			RuntimeObject* L_61 = __this->___U3CU3Es__3;
			V_9 = L_61;
			RuntimeObject* L_62 = V_9;
			if (!L_62)
			{
				goto IL_0285_1;
			}
		}
		{
			RuntimeObject* L_63 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_63, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_64 = V_13;
			if (L_64)
			{
				goto IL_0278_1;
			}
		}
		{
			RuntimeObject* L_65 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_65, method);
		}

IL_0278_1:
		{
			Exception_t* L_66 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_67;
			L_67 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_66, NULL);
			NullCheck(L_67);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_67, NULL);
		}

IL_0285_1:
		{
			int32_t L_68 = __this->___U3CU3Es__4;
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			double L_69 = __this->___U3CvalueU3E5__1;
			V_1 = L_69;
			goto IL_02bd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_029c;
		}
		throw e;
	}

CATCH_029c:
	{
		Exception_t* L_70 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_13 = L_70;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_71 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
		Exception_t* L_72 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_inline(L_71, L_72, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_02d9;
	}

IL_02bd:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_73 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder);
		double L_74 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_inline(L_73, L_74, AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
	}

IL_02d9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMaxAsyncU3Ed__17_1_SetStateMachine_m7C47A89DC41F2E2D0B114AB2DD3B37F0907E62BD_gshared (U3CMaxAsyncU3Ed__17_1_tDA11432E5B54E699AF5502AE7364400C88B087C1* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMaxAsyncU3Ed__1_2__ctor_m8D6F1AFD9AAC97ED85F1CE7C36043D2E0BE7E9A3_gshared (U3CMaxAsyncU3Ed__1_2_tEBF7F94D5200D91A6F68BD1F23DC56B03AD4F26F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMaxAsyncU3Ed__1_2_MoveNext_m164874637E4340CA11D2AA5F5E61B4F41B7E53DA_gshared (U3CMaxAsyncU3Ed__1_2_tEBF7F94D5200D91A6F68BD1F23DC56B03AD4F26F* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TResult_tAA12EFCC822C16CA5D2B4B71838D9C1E1C10FE8B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const uint32_t SizeOf_TSource_tBAE5BC6159127F054AAA2EF08C333DFF5DC89F6A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_tBAE5BC6159127F054AAA2EF08C333DFF5DC89F6A);
	const Il2CppFullySharedGenericAny L_27 = L_11;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TResult_tAA12EFCC822C16CA5D2B4B71838D9C1E1C10FE8B);
	const Il2CppFullySharedGenericAny L_24 = L_12;
	const Il2CppFullySharedGenericAny L_28 = L_12;
	const Il2CppFullySharedGenericAny L_34 = L_12;
	const Il2CppFullySharedGenericAny L_67 = L_12;
	const Il2CppFullySharedGenericAny L_68 = L_12;
	const Il2CppFullySharedGenericAny L_71 = L_12;
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_TResult_tAA12EFCC822C16CA5D2B4B71838D9C1E1C10FE8B);
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_TResult_tAA12EFCC822C16CA5D2B4B71838D9C1E1C10FE8B);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TResult_tAA12EFCC822C16CA5D2B4B71838D9C1E1C10FE8B);
	memset(V_1, 0, SizeOf_TResult_tAA12EFCC822C16CA5D2B4B71838D9C1E1C10FE8B);
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CMaxAsyncU3Ed__1_2_tEBF7F94D5200D91A6F68BD1F23DC56B03AD4F26F* V_5 = NULL;
	bool V_6 = false;
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
	int32_t V_14 = 0;
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
			goto IL_0057_1;
		}

IL_0015_1:
		{
			goto IL_0269_1;
		}

IL_001a_1:
		{
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), SizeOf_TResult_tAA12EFCC822C16CA5D2B4B71838D9C1E1C10FE8B);
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
				if (!L_7)
				{
					goto IL_0063_2;
				}
			}
			{
				goto IL_005d_2;
			}

IL_005d_2:
			{
				int32_t L_8 = V_0;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_0065_2;
				}
			}
			{
				goto IL_006a_2;
			}

IL_0063_2:
			{
				goto IL_00d5_2;
			}

IL_0065_2:
			{
				goto IL_01bf_2;
			}

IL_006a_2:
			{
				goto IL_008f_2;
			}

IL_006d_2:
			{
				Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_9 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				RuntimeObject* L_10 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_10, (Il2CppFullySharedGenericAny*)L_11);
				NullCheck(L_9);
				InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_12, SizeOf_TResult_tAA12EFCC822C16CA5D2B4B71838D9C1E1C10FE8B);
				goto IL_011c_2;
			}

IL_008f_2:
			{
				RuntimeObject* L_13 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck(L_13);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_14;
				L_14 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_13);
				V_4 = L_14;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_15;
				L_15 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_3 = L_15;
				bool L_16;
				L_16 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_3), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_00f1_2;
				}
			}
			{
				int32_t L_17 = 0;
				V_0 = L_17;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_17);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_18 = V_3;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14), L_18);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMaxAsyncU3Ed__1_2_tEBF7F94D5200D91A6F68BD1F23DC56B03AD4F26F**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				goto IL_0350;
			}

IL_00d5_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_19 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
				V_3 = L_19;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_20 = (-1);
				V_0 = L_20;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_20);
			}

IL_00f1_2:
			{
				bool L_21;
				L_21 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_21);
				bool L_22 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
				V_2 = L_22;
				bool L_23 = V_2;
				if (L_23)
				{
					goto IL_006d_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_24, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)), SizeOf_TResult_tAA12EFCC822C16CA5D2B4B71838D9C1E1C10FE8B);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_24, SizeOf_TResult_tAA12EFCC822C16CA5D2B4B71838D9C1E1C10FE8B);
				goto IL_01fb_2;
			}

IL_011c_2:
			{
				goto IL_0177_2;
			}

IL_011f_2:
			{
				Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_25 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				RuntimeObject* L_26 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck(L_26);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_26, (Il2CppFullySharedGenericAny*)L_27);
				NullCheck(L_25);
				InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_25, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10)) ? L_27: *(void**)L_27), (Il2CppFullySharedGenericAny*)L_28);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_28, SizeOf_TResult_tAA12EFCC822C16CA5D2B4B71838D9C1E1C10FE8B);
				Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_29 = *(Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				il2cpp_codegen_memcpy(L_30, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)), SizeOf_TResult_tAA12EFCC822C16CA5D2B4B71838D9C1E1C10FE8B);
				il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_TResult_tAA12EFCC822C16CA5D2B4B71838D9C1E1C10FE8B);
				NullCheck(L_29);
				int32_t L_32;
				L_32 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_30: *(void**)L_30), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_31: *(void**)L_31));
				V_6 = (bool)((((int32_t)L_32) < ((int32_t)0))? 1 : 0);
				bool L_33 = V_6;
				if (!L_33)
				{
					goto IL_016a_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_34, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_TResult_tAA12EFCC822C16CA5D2B4B71838D9C1E1C10FE8B);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_34, SizeOf_TResult_tAA12EFCC822C16CA5D2B4B71838D9C1E1C10FE8B);
			}

IL_016a_2:
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)))), SizeOf_TResult_tAA12EFCC822C16CA5D2B4B71838D9C1E1C10FE8B);
			}

IL_0177_2:
			{
				RuntimeObject* L_35 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck(L_35);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_36;
				L_36 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_35);
				V_4 = L_36;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_37;
				L_37 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_8 = L_37;
				bool L_38;
				L_38 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_8), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_38)
				{
					goto IL_01dc_2;
				}
			}
			{
				int32_t L_39 = 1;
				V_0 = L_39;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_39);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_40 = V_8;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14), L_40);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMaxAsyncU3Ed__1_2_tEBF7F94D5200D91A6F68BD1F23DC56B03AD4F26F**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_8), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				goto IL_0350;
			}

IL_01bf_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_41 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
				V_8 = L_41;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_42 = (-1);
				V_0 = L_42;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_42);
			}

IL_01dc_2:
			{
				bool L_43;
				L_43 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_8), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_43);
				bool L_44 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
				V_7 = L_44;
				bool L_45 = V_7;
				if (L_45)
				{
					goto IL_011f_2;
				}
			}
			{
				goto IL_0210_1;
			}

IL_01fb_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), 1);
				goto IL_0210_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0204_1;
			}
			throw e;
		}

CATCH_0204_1:
		{
			RuntimeObject* L_46 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_9 = L_46;
			RuntimeObject* L_47 = V_9;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_47);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0210_1;
		}

IL_0210_1:
		{
			RuntimeObject* L_48 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_48) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_49 = V_10;
			if (!L_49)
			{
				goto IL_028f_1;
			}
		}
		{
			RuntimeObject* L_50 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			NullCheck((RuntimeObject*)L_50);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_51;
			L_51 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_50);
			V_12 = L_51;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_52;
			L_52 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_52;
			bool L_53;
			L_53 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_53)
			{
				goto IL_0286_1;
			}
		}
		{
			int32_t L_54 = 2;
			V_0 = L_54;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_54);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_55 = V_11;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15), L_55);
			V_5 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMaxAsyncU3Ed__1_2_tEBF7F94D5200D91A6F68BD1F23DC56B03AD4F26F**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_11), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
			goto IL_0350;
		}

IL_0269_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_56 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15));
			V_11 = L_56;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_57 = (-1);
			V_0 = L_57;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_57);
		}

IL_0286_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_028f_1:
		{
			RuntimeObject* L_58 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			V_9 = L_58;
			RuntimeObject* L_59 = V_9;
			if (!L_59)
			{
				goto IL_02b9_1;
			}
		}
		{
			RuntimeObject* L_60 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_60, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_61 = V_13;
			if (L_61)
			{
				goto IL_02ac_1;
			}
		}
		{
			RuntimeObject* L_62 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_62, method);
		}

IL_02ac_1:
		{
			Exception_t* L_63 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_64;
			L_64 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_63, NULL);
			NullCheck(L_64);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_64, NULL);
		}

IL_02b9_1:
		{
			int32_t L_65 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
			V_14 = L_65;
			int32_t L_66 = V_14;
			if ((((int32_t)L_66) == ((int32_t)1)))
			{
				goto IL_02c8_1;
			}
		}
		{
			goto IL_02d1_1;
		}

IL_02c8_1:
		{
			il2cpp_codegen_memcpy(L_67, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TResult_tAA12EFCC822C16CA5D2B4B71838D9C1E1C10FE8B);
			il2cpp_codegen_memcpy(V_1, L_67, SizeOf_TResult_tAA12EFCC822C16CA5D2B4B71838D9C1E1C10FE8B);
			goto IL_0321;
		}

IL_02d1_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)))), SizeOf_TResult_tAA12EFCC822C16CA5D2B4B71838D9C1E1C10FE8B);
			il2cpp_codegen_memcpy(L_68, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)), SizeOf_TResult_tAA12EFCC822C16CA5D2B4B71838D9C1E1C10FE8B);
			il2cpp_codegen_memcpy(V_1, L_68, SizeOf_TResult_tAA12EFCC822C16CA5D2B4B71838D9C1E1C10FE8B);
			goto IL_0321;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02ed;
		}
		throw e;
	}

CATCH_02ed:
	{
		Exception_t* L_69 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_13 = L_69;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), SizeOf_TResult_tAA12EFCC822C16CA5D2B4B71838D9C1E1C10FE8B);
		il2cpp_codegen_write_instance_field_data<Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB*)NULL);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), (RuntimeObject*)NULL);
		Exception_t* L_70 = V_13;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_70, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0350;
	}

IL_0321:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), SizeOf_TResult_tAA12EFCC822C16CA5D2B4B71838D9C1E1C10FE8B);
		il2cpp_codegen_write_instance_field_data<Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB*)NULL);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_71, V_1, SizeOf_TResult_tAA12EFCC822C16CA5D2B4B71838D9C1E1C10FE8B);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_71: *(void**)L_71));
	}

IL_0350:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMaxAsyncU3Ed__1_2_SetStateMachine_m51177CFB60985B637C70F70DD061F22CBC448FC1_gshared (U3CMaxAsyncU3Ed__1_2_tEBF7F94D5200D91A6F68BD1F23DC56B03AD4F26F* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMaxAsyncU3Ed__21_1__ctor_mD0E87AE905471BFA8BEA405CB88241A40F134E85_gshared (U3CMaxAsyncU3Ed__21_1_t0B5A2CCE38B228A403FC3505BB26CEA1F828A955* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMaxAsyncU3Ed__21_1_MoveNext_m9621FEAE678AFF8BF68CB01BE135012A1BB11C0F_gshared (U3CMaxAsyncU3Ed__21_1_t0B5A2CCE38B228A403FC3505BB26CEA1F828A955* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t79E8D318E21A28339EA0C9001DD563C7A82D2449 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t79E8D318E21A28339EA0C9001DD563C7A82D2449);
	const Il2CppFullySharedGenericAny L_29 = L_11;
	int32_t V_0 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CMaxAsyncU3Ed__21_1_t0B5A2CCE38B228A403FC3505BB26CEA1F828A955* V_5 = NULL;
	bool V_6 = false;
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
			goto IL_004c_1;
		}

IL_0015_1:
		{
			goto IL_0235_1;
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
				if (!L_7)
				{
					goto IL_0058_2;
				}
			}
			{
				goto IL_0052_2;
			}

IL_0052_2:
			{
				int32_t L_8 = V_0;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_005a_2;
				}
			}
			{
				goto IL_005f_2;
			}

IL_0058_2:
			{
				goto IL_00ca_2;
			}

IL_005a_2:
			{
				goto IL_0194_2;
			}

IL_005f_2:
			{
				goto IL_0084_2;
			}

IL_0062_2:
			{
				Func_2_t5ABD904FFCFC84BA711C9261A36E9482990A6CA7* L_9 = __this->___selector;
				RuntimeObject* L_10 = __this->___U3CeU3E5__2;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				NullCheck(L_9);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_12;
				L_12 = InvokerFuncInvoker1< Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11));
				__this->___U3CvalueU3E5__1 = L_12;
				goto IL_0106_2;
			}

IL_0084_2:
			{
				RuntimeObject* L_13 = __this->___U3CeU3E5__2;
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
					goto IL_00e6_2;
				}
			}
			{
				int32_t L_17 = 0;
				V_0 = L_17;
				__this->___U3CU3E1__state = L_17;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_18 = V_3;
				__this->___U3CU3Eu__1 = L_18;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_19 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMaxAsyncU3Ed__21_1_t0B5A2CCE38B228A403FC3505BB26CEA1F828A955**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_19, (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_02d9;
			}

IL_00ca_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_20 = __this->___U3CU3Eu__1;
				V_3 = L_20;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_21 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_21, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_22 = (-1);
				V_0 = L_22;
				__this->___U3CU3E1__state = L_22;
			}

IL_00e6_2:
			{
				bool L_23;
				L_23 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5 = L_23;
				bool L_24 = __this->___U3CU3Es__5;
				V_2 = L_24;
				bool L_25 = V_2;
				if (L_25)
				{
					goto IL_0062_2;
				}
			}
			{
				Exception_t* L_26;
				L_26 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, method);
			}

IL_0106_2:
			{
				goto IL_014c_2;
			}

IL_0109_2:
			{
				Func_2_t5ABD904FFCFC84BA711C9261A36E9482990A6CA7* L_27 = __this->___selector;
				RuntimeObject* L_28 = __this->___U3CeU3E5__2;
				NullCheck(L_28);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_28, (Il2CppFullySharedGenericAny*)L_29);
				NullCheck(L_27);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_30;
				L_30 = InvokerFuncInvoker1< Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_29: *(void**)L_29));
				__this->___U3CxU3E5__6 = L_30;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_31 = __this->___U3CvalueU3E5__1;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_32 = __this->___U3CxU3E5__6;
				il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
				bool L_33;
				L_33 = Decimal_op_LessThan_mEA888B7F0853F7700602254AAD4AD058C30552F5(L_31, L_32, NULL);
				V_6 = L_33;
				bool L_34 = V_6;
				if (!L_34)
				{
					goto IL_014b_2;
				}
			}
			{
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_35 = __this->___U3CxU3E5__6;
				__this->___U3CvalueU3E5__1 = L_35;
			}

IL_014b_2:
			{
			}

IL_014c_2:
			{
				RuntimeObject* L_36 = __this->___U3CeU3E5__2;
				NullCheck(L_36);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_37;
				L_37 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_36);
				V_4 = L_37;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_38;
				L_38 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_8 = L_38;
				bool L_39;
				L_39 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_8), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_39)
				{
					goto IL_01b1_2;
				}
			}
			{
				int32_t L_40 = 1;
				V_0 = L_40;
				__this->___U3CU3E1__state = L_40;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_41 = V_8;
				__this->___U3CU3Eu__1 = L_41;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_42 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMaxAsyncU3Ed__21_1_t0B5A2CCE38B228A403FC3505BB26CEA1F828A955**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_42, (&V_8), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_02d9;
			}

IL_0194_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_43 = __this->___U3CU3Eu__1;
				V_8 = L_43;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_44 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_44, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_45 = (-1);
				V_0 = L_45;
				__this->___U3CU3E1__state = L_45;
			}

IL_01b1_2:
			{
				bool L_46;
				L_46 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_8), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7 = L_46;
				bool L_47 = __this->___U3CU3Es__7;
				V_7 = L_47;
				bool L_48 = V_7;
				if (L_48)
				{
					goto IL_0109_2;
				}
			}
			{
				goto IL_01dc_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01d0_1;
			}
			throw e;
		}

CATCH_01d0_1:
		{
			RuntimeObject* L_49 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_9 = L_49;
			RuntimeObject* L_50 = V_9;
			__this->___U3CU3Es__3 = L_50;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_50);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_01dc_1;
		}

IL_01dc_1:
		{
			RuntimeObject* L_51 = __this->___U3CeU3E5__2;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_51) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_52 = V_10;
			if (!L_52)
			{
				goto IL_025b_1;
			}
		}
		{
			RuntimeObject* L_53 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_53);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_54;
			L_54 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_53);
			V_12 = L_54;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_55;
			L_55 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_55;
			bool L_56;
			L_56 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_56)
			{
				goto IL_0252_1;
			}
		}
		{
			int32_t L_57 = 2;
			V_0 = L_57;
			__this->___U3CU3E1__state = L_57;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_58 = V_11;
			__this->___U3CU3Eu__2 = L_58;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
			V_5 = __this;
			AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_59 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMaxAsyncU3Ed__21_1_t0B5A2CCE38B228A403FC3505BB26CEA1F828A955**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_59, (&V_11), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_02d9;
		}

IL_0235_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_60 = __this->___U3CU3Eu__2;
			V_11 = L_60;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_61 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_61, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_62 = (-1);
			V_0 = L_62;
			__this->___U3CU3E1__state = L_62;
		}

IL_0252_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_025b_1:
		{
			RuntimeObject* L_63 = __this->___U3CU3Es__3;
			V_9 = L_63;
			RuntimeObject* L_64 = V_9;
			if (!L_64)
			{
				goto IL_0285_1;
			}
		}
		{
			RuntimeObject* L_65 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_65, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_66 = V_13;
			if (L_66)
			{
				goto IL_0278_1;
			}
		}
		{
			RuntimeObject* L_67 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_67, method);
		}

IL_0278_1:
		{
			Exception_t* L_68 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_69;
			L_69 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_68, NULL);
			NullCheck(L_69);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_69, NULL);
		}

IL_0285_1:
		{
			int32_t L_70 = __this->___U3CU3Es__4;
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_71 = __this->___U3CvalueU3E5__1;
			V_1 = L_71;
			goto IL_02bd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_029c;
		}
		throw e;
	}

CATCH_029c:
	{
		Exception_t* L_72 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_13 = L_72;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_73 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder);
		Exception_t* L_74 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_inline(L_73, L_74, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_02d9;
	}

IL_02bd:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_75 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_76 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_inline(L_75, L_76, AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_RuntimeMethod_var);
	}

IL_02d9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMaxAsyncU3Ed__21_1_SetStateMachine_m4BDBFE4E1FE9F53897CCC82CE3B6444A9913D733_gshared (U3CMaxAsyncU3Ed__21_1_t0B5A2CCE38B228A403FC3505BB26CEA1F828A955* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMaxAsyncU3Ed__25_1__ctor_m5A2AF3058BE5A85F08C3BD294C8ADE933AF43F06_gshared (U3CMaxAsyncU3Ed__25_1_t9EA54FEF86B5DF1390483F9E8FD1BE063590896D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMaxAsyncU3Ed__25_1_MoveNext_mE5C92BAB995A87591A3E05428201D354DB519F83_gshared (U3CMaxAsyncU3Ed__25_1_t9EA54FEF86B5DF1390483F9E8FD1BE063590896D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m5E0E26E389BF8D15A8935BC741FAADEFF1617158_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t17E75A2DFD4914DCE8ED0FAD5389CB1B227D7066 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t17E75A2DFD4914DCE8ED0FAD5389CB1B227D7066);
	const Il2CppFullySharedGenericAny L_32 = L_11;
	int32_t V_0 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_4;
	memset((&V_4), 0, sizeof(V_4));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_5;
	memset((&V_5), 0, sizeof(V_5));
	U3CMaxAsyncU3Ed__25_1_t9EA54FEF86B5DF1390483F9E8FD1BE063590896D* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_12;
	memset((&V_12), 0, sizeof(V_12));
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_15;
	memset((&V_15), 0, sizeof(V_15));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Exception_t* V_17 = NULL;
	int32_t V_18 = 0;
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
			goto IL_004c_1;
		}

IL_0015_1:
		{
			goto IL_02a7_1;
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
				if (!L_7)
				{
					goto IL_0058_2;
				}
			}
			{
				goto IL_0052_2;
			}

IL_0052_2:
			{
				int32_t L_8 = V_0;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_005d_2;
				}
			}
			{
				goto IL_0062_2;
			}

IL_0058_2:
			{
				goto IL_00e3_2;
			}

IL_005d_2:
			{
				goto IL_01fd_2;
			}

IL_0062_2:
			{
				goto IL_009b_2;
			}

IL_0065_2:
			{
				Func_2_t0DE0378A8A90F3B8204450750A771096D0F75A98* L_9 = __this->___selector;
				RuntimeObject* L_10 = __this->___U3CeU3E5__2;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				NullCheck(L_9);
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_12;
				L_12 = InvokerFuncInvoker1< Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11));
				__this->___U3CvalueU3E5__1 = L_12;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_13 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CvalueU3E5__1);
				bool L_14;
				L_14 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_13, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				V_2 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
				bool L_15 = V_2;
				if (!L_15)
				{
					goto IL_0096_2;
				}
			}
			{
				goto IL_009b_2;
			}

IL_0096_2:
			{
				goto IL_012b_2;
			}

IL_009b_2:
			{
				RuntimeObject* L_16 = __this->___U3CeU3E5__2;
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
					goto IL_0100_2;
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
				AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_22 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMaxAsyncU3Ed__25_1_t9EA54FEF86B5DF1390483F9E8FD1BE063590896D**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_22, (&V_4), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_0368;
			}

IL_00e3_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_23 = __this->___U3CU3Eu__1;
				V_4 = L_23;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_24 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_24, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_25 = (-1);
				V_0 = L_25;
				__this->___U3CU3E1__state = L_25;
			}

IL_0100_2:
			{
				bool L_26;
				L_26 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_4), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_26;
				bool L_27 = __this->___U3CU3Es__6;
				V_3 = L_27;
				bool L_28 = V_3;
				if (L_28)
				{
					goto IL_0065_2;
				}
			}
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_29 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CU3Es__5);
				il2cpp_codegen_initobj(L_29, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				goto IL_0239_2;
			}

IL_012b_2:
			{
				goto IL_01b5_2;
			}

IL_0131_2:
			{
				Func_2_t0DE0378A8A90F3B8204450750A771096D0F75A98* L_30 = __this->___selector;
				RuntimeObject* L_31 = __this->___U3CeU3E5__2;
				NullCheck(L_31);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_31, (Il2CppFullySharedGenericAny*)L_32);
				NullCheck(L_30);
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_33;
				L_33 = InvokerFuncInvoker1< Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_32: *(void**)L_32));
				__this->___U3CxU3E5__7 = L_33;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_34 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CxU3E5__7);
				bool L_35;
				L_35 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_34, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				V_7 = (bool)((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
				bool L_36 = V_7;
				if (!L_36)
				{
					goto IL_0164_2;
				}
			}
			{
				goto IL_01b5_2;
			}

IL_0164_2:
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_37 = __this->___U3CvalueU3E5__1;
				V_9 = L_37;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_38 = __this->___U3CxU3E5__7;
				V_10 = L_38;
				int32_t L_39;
				L_39 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_9), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
				int32_t L_40;
				L_40 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_10), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
				bool L_41;
				L_41 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_9), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				bool L_42;
				L_42 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_10), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				V_8 = (bool)((int32_t)(((((int32_t)L_39) < ((int32_t)L_40))? 1 : 0)&((int32_t)((int32_t)L_41&(int32_t)L_42))));
				bool L_43 = V_8;
				if (!L_43)
				{
					goto IL_01a8_2;
				}
			}
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_44 = __this->___U3CxU3E5__7;
				__this->___U3CvalueU3E5__1 = L_44;
			}

IL_01a8_2:
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_45 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CxU3E5__7);
				il2cpp_codegen_initobj(L_45, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
			}

IL_01b5_2:
			{
				RuntimeObject* L_46 = __this->___U3CeU3E5__2;
				NullCheck(L_46);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_47;
				L_47 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_46);
				V_5 = L_47;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_48;
				L_48 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_5), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_12 = L_48;
				bool L_49;
				L_49 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_12), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_49)
				{
					goto IL_021a_2;
				}
			}
			{
				int32_t L_50 = 1;
				V_0 = L_50;
				__this->___U3CU3E1__state = L_50;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_51 = V_12;
				__this->___U3CU3Eu__1 = L_51;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_6 = __this;
				AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_52 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMaxAsyncU3Ed__25_1_t9EA54FEF86B5DF1390483F9E8FD1BE063590896D**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_52, (&V_12), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_0368;
			}

IL_01fd_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_53 = __this->___U3CU3Eu__1;
				V_12 = L_53;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_54 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_54, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_55 = (-1);
				V_0 = L_55;
				__this->___U3CU3E1__state = L_55;
			}

IL_021a_2:
			{
				bool L_56;
				L_56 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_12), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8 = L_56;
				bool L_57 = __this->___U3CU3Es__8;
				V_11 = L_57;
				bool L_58 = V_11;
				if (L_58)
				{
					goto IL_0131_2;
				}
			}
			{
				goto IL_024e_1;
			}

IL_0239_2:
			{
				__this->___U3CU3Es__4 = 1;
				goto IL_024e_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0242_1;
			}
			throw e;
		}

CATCH_0242_1:
		{
			RuntimeObject* L_59 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_13 = L_59;
			RuntimeObject* L_60 = V_13;
			__this->___U3CU3Es__3 = L_60;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_60);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_024e_1;
		}

IL_024e_1:
		{
			RuntimeObject* L_61 = __this->___U3CeU3E5__2;
			V_14 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_61) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_62 = V_14;
			if (!L_62)
			{
				goto IL_02cd_1;
			}
		}
		{
			RuntimeObject* L_63 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_63);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_64;
			L_64 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_63);
			V_16 = L_64;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_65;
			L_65 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_16), NULL);
			V_15 = L_65;
			bool L_66;
			L_66 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_15), NULL);
			if (L_66)
			{
				goto IL_02c4_1;
			}
		}
		{
			int32_t L_67 = 2;
			V_0 = L_67;
			__this->___U3CU3E1__state = L_67;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_68 = V_15;
			__this->___U3CU3Eu__2 = L_68;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
			V_6 = __this;
			AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_69 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMaxAsyncU3Ed__25_1_t9EA54FEF86B5DF1390483F9E8FD1BE063590896D**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_69, (&V_15), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_0368;
		}

IL_02a7_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_70 = __this->___U3CU3Eu__2;
			V_15 = L_70;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_71 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_71, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_72 = (-1);
			V_0 = L_72;
			__this->___U3CU3E1__state = L_72;
		}

IL_02c4_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_15), NULL);
		}

IL_02cd_1:
		{
			RuntimeObject* L_73 = __this->___U3CU3Es__3;
			V_13 = L_73;
			RuntimeObject* L_74 = V_13;
			if (!L_74)
			{
				goto IL_02f7_1;
			}
		}
		{
			RuntimeObject* L_75 = V_13;
			V_17 = ((Exception_t*)IsInstClass((RuntimeObject*)L_75, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_76 = V_17;
			if (L_76)
			{
				goto IL_02ea_1;
			}
		}
		{
			RuntimeObject* L_77 = V_13;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_77, method);
		}

IL_02ea_1:
		{
			Exception_t* L_78 = V_17;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_79;
			L_79 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_78, NULL);
			NullCheck(L_79);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_79, NULL);
		}

IL_02f7_1:
		{
			int32_t L_80 = __this->___U3CU3Es__4;
			V_18 = L_80;
			int32_t L_81 = V_18;
			if ((((int32_t)L_81) == ((int32_t)1)))
			{
				goto IL_0306_1;
			}
		}
		{
			goto IL_030f_1;
		}

IL_0306_1:
		{
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_82 = __this->___U3CU3Es__5;
			V_1 = L_82;
			goto IL_034c;
		}

IL_030f_1:
		{
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_83 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CU3Es__5);
			il2cpp_codegen_initobj(L_83, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_84 = __this->___U3CvalueU3E5__1;
			V_1 = L_84;
			goto IL_034c;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_032b;
		}
		throw e;
	}

CATCH_032b:
	{
		Exception_t* L_85 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_17 = L_85;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_86 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder);
		Exception_t* L_87 = V_17;
		AsyncUniTaskMethodBuilder_1_SetException_mE8C5BA18D2449D6BD546630CE70DE315F5F91FCE_inline(L_86, L_87, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mE8C5BA18D2449D6BD546630CE70DE315F5F91FCE_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0368;
	}

IL_034c:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_88 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_89 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m5E0E26E389BF8D15A8935BC741FAADEFF1617158_inline(L_88, L_89, AsyncUniTaskMethodBuilder_1_SetResult_m5E0E26E389BF8D15A8935BC741FAADEFF1617158_RuntimeMethod_var);
	}

IL_0368:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMaxAsyncU3Ed__25_1_SetStateMachine_mAEA196DBCD14ACA182BEAFD3E39365C1FC118C8D_gshared (U3CMaxAsyncU3Ed__25_1_t9EA54FEF86B5DF1390483F9E8FD1BE063590896D* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMaxAsyncU3Ed__29_1__ctor_m3DCA825793F1109692094596C3B3BBD41C5E1B82_gshared (U3CMaxAsyncU3Ed__29_1_t9DA9DB413A115D29104F7EC27E0B4462B9894445* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMaxAsyncU3Ed__29_1_MoveNext_mC6672A63166C35741EC63DAC9ED468811CF71296_gshared (U3CMaxAsyncU3Ed__29_1_t9DA9DB413A115D29104F7EC27E0B4462B9894445* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m79D800118F9BCD740C939B134E630A8AB93AA606_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t2F09C02A9FB4ADE1C3C496395F9012E590CBD8B4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t2F09C02A9FB4ADE1C3C496395F9012E590CBD8B4);
	const Il2CppFullySharedGenericAny L_32 = L_11;
	int32_t V_0 = 0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_4;
	memset((&V_4), 0, sizeof(V_4));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_5;
	memset((&V_5), 0, sizeof(V_5));
	U3CMaxAsyncU3Ed__29_1_t9DA9DB413A115D29104F7EC27E0B4462B9894445* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_12;
	memset((&V_12), 0, sizeof(V_12));
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_15;
	memset((&V_15), 0, sizeof(V_15));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Exception_t* V_17 = NULL;
	int32_t V_18 = 0;
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
			goto IL_004c_1;
		}

IL_0015_1:
		{
			goto IL_02a7_1;
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
				if (!L_7)
				{
					goto IL_0058_2;
				}
			}
			{
				goto IL_0052_2;
			}

IL_0052_2:
			{
				int32_t L_8 = V_0;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_005d_2;
				}
			}
			{
				goto IL_0062_2;
			}

IL_0058_2:
			{
				goto IL_00e3_2;
			}

IL_005d_2:
			{
				goto IL_01fd_2;
			}

IL_0062_2:
			{
				goto IL_009b_2;
			}

IL_0065_2:
			{
				Func_2_tFC0477C87E7518136DEE345DCF44B6ACA22E24F0* L_9 = __this->___selector;
				RuntimeObject* L_10 = __this->___U3CeU3E5__2;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				NullCheck(L_9);
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_12;
				L_12 = InvokerFuncInvoker1< Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11));
				__this->___U3CvalueU3E5__1 = L_12;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_13 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CvalueU3E5__1);
				bool L_14;
				L_14 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline(L_13, Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
				V_2 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
				bool L_15 = V_2;
				if (!L_15)
				{
					goto IL_0096_2;
				}
			}
			{
				goto IL_009b_2;
			}

IL_0096_2:
			{
				goto IL_012b_2;
			}

IL_009b_2:
			{
				RuntimeObject* L_16 = __this->___U3CeU3E5__2;
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
					goto IL_0100_2;
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
				AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_22 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMaxAsyncU3Ed__29_1_t9DA9DB413A115D29104F7EC27E0B4462B9894445**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_22, (&V_4), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_0368;
			}

IL_00e3_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_23 = __this->___U3CU3Eu__1;
				V_4 = L_23;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_24 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_24, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_25 = (-1);
				V_0 = L_25;
				__this->___U3CU3E1__state = L_25;
			}

IL_0100_2:
			{
				bool L_26;
				L_26 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_4), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_26;
				bool L_27 = __this->___U3CU3Es__6;
				V_3 = L_27;
				bool L_28 = V_3;
				if (L_28)
				{
					goto IL_0065_2;
				}
			}
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_29 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CU3Es__5);
				il2cpp_codegen_initobj(L_29, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
				goto IL_0239_2;
			}

IL_012b_2:
			{
				goto IL_01b5_2;
			}

IL_0131_2:
			{
				Func_2_tFC0477C87E7518136DEE345DCF44B6ACA22E24F0* L_30 = __this->___selector;
				RuntimeObject* L_31 = __this->___U3CeU3E5__2;
				NullCheck(L_31);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_31, (Il2CppFullySharedGenericAny*)L_32);
				NullCheck(L_30);
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_33;
				L_33 = InvokerFuncInvoker1< Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_32: *(void**)L_32));
				__this->___U3CxU3E5__7 = L_33;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_34 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CxU3E5__7);
				bool L_35;
				L_35 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline(L_34, Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
				V_7 = (bool)((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
				bool L_36 = V_7;
				if (!L_36)
				{
					goto IL_0164_2;
				}
			}
			{
				goto IL_01b5_2;
			}

IL_0164_2:
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_37 = __this->___U3CvalueU3E5__1;
				V_9 = L_37;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_38 = __this->___U3CxU3E5__7;
				V_10 = L_38;
				int64_t L_39;
				L_39 = Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_inline((&V_9), Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
				int64_t L_40;
				L_40 = Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_inline((&V_10), Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
				bool L_41;
				L_41 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline((&V_9), Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
				bool L_42;
				L_42 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline((&V_10), Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
				V_8 = (bool)((int32_t)(((((int64_t)L_39) < ((int64_t)L_40))? 1 : 0)&((int32_t)((int32_t)L_41&(int32_t)L_42))));
				bool L_43 = V_8;
				if (!L_43)
				{
					goto IL_01a8_2;
				}
			}
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_44 = __this->___U3CxU3E5__7;
				__this->___U3CvalueU3E5__1 = L_44;
			}

IL_01a8_2:
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_45 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CxU3E5__7);
				il2cpp_codegen_initobj(L_45, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
			}

IL_01b5_2:
			{
				RuntimeObject* L_46 = __this->___U3CeU3E5__2;
				NullCheck(L_46);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_47;
				L_47 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_46);
				V_5 = L_47;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_48;
				L_48 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_5), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_12 = L_48;
				bool L_49;
				L_49 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_12), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_49)
				{
					goto IL_021a_2;
				}
			}
			{
				int32_t L_50 = 1;
				V_0 = L_50;
				__this->___U3CU3E1__state = L_50;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_51 = V_12;
				__this->___U3CU3Eu__1 = L_51;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_6 = __this;
				AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_52 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMaxAsyncU3Ed__29_1_t9DA9DB413A115D29104F7EC27E0B4462B9894445**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_52, (&V_12), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_0368;
			}

IL_01fd_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_53 = __this->___U3CU3Eu__1;
				V_12 = L_53;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_54 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_54, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_55 = (-1);
				V_0 = L_55;
				__this->___U3CU3E1__state = L_55;
			}

IL_021a_2:
			{
				bool L_56;
				L_56 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_12), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8 = L_56;
				bool L_57 = __this->___U3CU3Es__8;
				V_11 = L_57;
				bool L_58 = V_11;
				if (L_58)
				{
					goto IL_0131_2;
				}
			}
			{
				goto IL_024e_1;
			}

IL_0239_2:
			{
				__this->___U3CU3Es__4 = 1;
				goto IL_024e_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0242_1;
			}
			throw e;
		}

CATCH_0242_1:
		{
			RuntimeObject* L_59 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_13 = L_59;
			RuntimeObject* L_60 = V_13;
			__this->___U3CU3Es__3 = L_60;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_60);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_024e_1;
		}

IL_024e_1:
		{
			RuntimeObject* L_61 = __this->___U3CeU3E5__2;
			V_14 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_61) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_62 = V_14;
			if (!L_62)
			{
				goto IL_02cd_1;
			}
		}
		{
			RuntimeObject* L_63 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_63);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_64;
			L_64 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_63);
			V_16 = L_64;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_65;
			L_65 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_16), NULL);
			V_15 = L_65;
			bool L_66;
			L_66 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_15), NULL);
			if (L_66)
			{
				goto IL_02c4_1;
			}
		}
		{
			int32_t L_67 = 2;
			V_0 = L_67;
			__this->___U3CU3E1__state = L_67;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_68 = V_15;
			__this->___U3CU3Eu__2 = L_68;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
			V_6 = __this;
			AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_69 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMaxAsyncU3Ed__29_1_t9DA9DB413A115D29104F7EC27E0B4462B9894445**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_69, (&V_15), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_0368;
		}

IL_02a7_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_70 = __this->___U3CU3Eu__2;
			V_15 = L_70;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_71 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_71, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_72 = (-1);
			V_0 = L_72;
			__this->___U3CU3E1__state = L_72;
		}

IL_02c4_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_15), NULL);
		}

IL_02cd_1:
		{
			RuntimeObject* L_73 = __this->___U3CU3Es__3;
			V_13 = L_73;
			RuntimeObject* L_74 = V_13;
			if (!L_74)
			{
				goto IL_02f7_1;
			}
		}
		{
			RuntimeObject* L_75 = V_13;
			V_17 = ((Exception_t*)IsInstClass((RuntimeObject*)L_75, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_76 = V_17;
			if (L_76)
			{
				goto IL_02ea_1;
			}
		}
		{
			RuntimeObject* L_77 = V_13;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_77, method);
		}

IL_02ea_1:
		{
			Exception_t* L_78 = V_17;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_79;
			L_79 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_78, NULL);
			NullCheck(L_79);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_79, NULL);
		}

IL_02f7_1:
		{
			int32_t L_80 = __this->___U3CU3Es__4;
			V_18 = L_80;
			int32_t L_81 = V_18;
			if ((((int32_t)L_81) == ((int32_t)1)))
			{
				goto IL_0306_1;
			}
		}
		{
			goto IL_030f_1;
		}

IL_0306_1:
		{
			Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_82 = __this->___U3CU3Es__5;
			V_1 = L_82;
			goto IL_034c;
		}

IL_030f_1:
		{
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_83 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CU3Es__5);
			il2cpp_codegen_initobj(L_83, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
			Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_84 = __this->___U3CvalueU3E5__1;
			V_1 = L_84;
			goto IL_034c;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_032b;
		}
		throw e;
	}

CATCH_032b:
	{
		Exception_t* L_85 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_17 = L_85;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_86 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder);
		Exception_t* L_87 = V_17;
		AsyncUniTaskMethodBuilder_1_SetException_m668B0B683F2B4B7005D076DE9400F32B1702673B_inline(L_86, L_87, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m668B0B683F2B4B7005D076DE9400F32B1702673B_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0368;
	}

IL_034c:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_88 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder);
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_89 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m79D800118F9BCD740C939B134E630A8AB93AA606_inline(L_88, L_89, AsyncUniTaskMethodBuilder_1_SetResult_m79D800118F9BCD740C939B134E630A8AB93AA606_RuntimeMethod_var);
	}

IL_0368:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMaxAsyncU3Ed__29_1_SetStateMachine_m63174931BF87CB042215A65736C30046E6B1E061_gshared (U3CMaxAsyncU3Ed__29_1_t9DA9DB413A115D29104F7EC27E0B4462B9894445* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMaxAsyncU3Ed__33_1__ctor_mACF4D8721A2CFBA2B56CAF017D0C82A7A5618BBD_gshared (U3CMaxAsyncU3Ed__33_1_tCDB8D719CC9635A8F99266A9531127882F7BD0E8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMaxAsyncU3Ed__33_1_MoveNext_m43AA0BBEA2F5444074193898C1C7D7ECB8354780_gshared (U3CMaxAsyncU3Ed__33_1_tCDB8D719CC9635A8F99266A9531127882F7BD0E8* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tF6392C76ADFC8C7BB719E548CE0E211DE20966EE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_tF6392C76ADFC8C7BB719E548CE0E211DE20966EE);
	const Il2CppFullySharedGenericAny L_32 = L_11;
	int32_t V_0 = 0;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_4;
	memset((&V_4), 0, sizeof(V_4));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_5;
	memset((&V_5), 0, sizeof(V_5));
	U3CMaxAsyncU3Ed__33_1_tCDB8D719CC9635A8F99266A9531127882F7BD0E8* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_12;
	memset((&V_12), 0, sizeof(V_12));
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_15;
	memset((&V_15), 0, sizeof(V_15));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Exception_t* V_17 = NULL;
	int32_t V_18 = 0;
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
			goto IL_004c_1;
		}

IL_0015_1:
		{
			goto IL_02a7_1;
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
				if (!L_7)
				{
					goto IL_0058_2;
				}
			}
			{
				goto IL_0052_2;
			}

IL_0052_2:
			{
				int32_t L_8 = V_0;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_005d_2;
				}
			}
			{
				goto IL_0062_2;
			}

IL_0058_2:
			{
				goto IL_00e3_2;
			}

IL_005d_2:
			{
				goto IL_01fd_2;
			}

IL_0062_2:
			{
				goto IL_009b_2;
			}

IL_0065_2:
			{
				Func_2_tCDF39BBC1094782C50BE631779E8FD895BFEAF32* L_9 = __this->___selector;
				RuntimeObject* L_10 = __this->___U3CeU3E5__2;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				NullCheck(L_9);
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_12;
				L_12 = InvokerFuncInvoker1< Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11));
				__this->___U3CvalueU3E5__1 = L_12;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_13 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CvalueU3E5__1);
				bool L_14;
				L_14 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline(L_13, Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
				V_2 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
				bool L_15 = V_2;
				if (!L_15)
				{
					goto IL_0096_2;
				}
			}
			{
				goto IL_009b_2;
			}

IL_0096_2:
			{
				goto IL_012b_2;
			}

IL_009b_2:
			{
				RuntimeObject* L_16 = __this->___U3CeU3E5__2;
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
					goto IL_0100_2;
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
				AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_22 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMaxAsyncU3Ed__33_1_tCDB8D719CC9635A8F99266A9531127882F7BD0E8**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_22, (&V_4), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_0368;
			}

IL_00e3_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_23 = __this->___U3CU3Eu__1;
				V_4 = L_23;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_24 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_24, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_25 = (-1);
				V_0 = L_25;
				__this->___U3CU3E1__state = L_25;
			}

IL_0100_2:
			{
				bool L_26;
				L_26 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_4), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_26;
				bool L_27 = __this->___U3CU3Es__6;
				V_3 = L_27;
				bool L_28 = V_3;
				if (L_28)
				{
					goto IL_0065_2;
				}
			}
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_29 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CU3Es__5);
				il2cpp_codegen_initobj(L_29, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
				goto IL_0239_2;
			}

IL_012b_2:
			{
				goto IL_01b5_2;
			}

IL_0131_2:
			{
				Func_2_tCDF39BBC1094782C50BE631779E8FD895BFEAF32* L_30 = __this->___selector;
				RuntimeObject* L_31 = __this->___U3CeU3E5__2;
				NullCheck(L_31);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_31, (Il2CppFullySharedGenericAny*)L_32);
				NullCheck(L_30);
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_33;
				L_33 = InvokerFuncInvoker1< Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_32: *(void**)L_32));
				__this->___U3CxU3E5__7 = L_33;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_34 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CxU3E5__7);
				bool L_35;
				L_35 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline(L_34, Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
				V_7 = (bool)((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
				bool L_36 = V_7;
				if (!L_36)
				{
					goto IL_0164_2;
				}
			}
			{
				goto IL_01b5_2;
			}

IL_0164_2:
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_37 = __this->___U3CvalueU3E5__1;
				V_9 = L_37;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_38 = __this->___U3CxU3E5__7;
				V_10 = L_38;
				float L_39;
				L_39 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline((&V_9), Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
				float L_40;
				L_40 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline((&V_10), Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
				bool L_41;
				L_41 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&V_9), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
				bool L_42;
				L_42 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&V_10), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
				V_8 = (bool)((int32_t)(((((float)L_39) < ((float)L_40))? 1 : 0)&((int32_t)((int32_t)L_41&(int32_t)L_42))));
				bool L_43 = V_8;
				if (!L_43)
				{
					goto IL_01a8_2;
				}
			}
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_44 = __this->___U3CxU3E5__7;
				__this->___U3CvalueU3E5__1 = L_44;
			}

IL_01a8_2:
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_45 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CxU3E5__7);
				il2cpp_codegen_initobj(L_45, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
			}

IL_01b5_2:
			{
				RuntimeObject* L_46 = __this->___U3CeU3E5__2;
				NullCheck(L_46);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_47;
				L_47 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_46);
				V_5 = L_47;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_48;
				L_48 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_5), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_12 = L_48;
				bool L_49;
				L_49 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_12), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_49)
				{
					goto IL_021a_2;
				}
			}
			{
				int32_t L_50 = 1;
				V_0 = L_50;
				__this->___U3CU3E1__state = L_50;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_51 = V_12;
				__this->___U3CU3Eu__1 = L_51;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_6 = __this;
				AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_52 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMaxAsyncU3Ed__33_1_tCDB8D719CC9635A8F99266A9531127882F7BD0E8**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_52, (&V_12), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_0368;
			}

IL_01fd_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_53 = __this->___U3CU3Eu__1;
				V_12 = L_53;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_54 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_54, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_55 = (-1);
				V_0 = L_55;
				__this->___U3CU3E1__state = L_55;
			}

IL_021a_2:
			{
				bool L_56;
				L_56 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_12), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8 = L_56;
				bool L_57 = __this->___U3CU3Es__8;
				V_11 = L_57;
				bool L_58 = V_11;
				if (L_58)
				{
					goto IL_0131_2;
				}
			}
			{
				goto IL_024e_1;
			}

IL_0239_2:
			{
				__this->___U3CU3Es__4 = 1;
				goto IL_024e_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0242_1;
			}
			throw e;
		}

CATCH_0242_1:
		{
			RuntimeObject* L_59 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_13 = L_59;
			RuntimeObject* L_60 = V_13;
			__this->___U3CU3Es__3 = L_60;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_60);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_024e_1;
		}

IL_024e_1:
		{
			RuntimeObject* L_61 = __this->___U3CeU3E5__2;
			V_14 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_61) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_62 = V_14;
			if (!L_62)
			{
				goto IL_02cd_1;
			}
		}
		{
			RuntimeObject* L_63 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_63);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_64;
			L_64 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_63);
			V_16 = L_64;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_65;
			L_65 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_16), NULL);
			V_15 = L_65;
			bool L_66;
			L_66 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_15), NULL);
			if (L_66)
			{
				goto IL_02c4_1;
			}
		}
		{
			int32_t L_67 = 2;
			V_0 = L_67;
			__this->___U3CU3E1__state = L_67;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_68 = V_15;
			__this->___U3CU3Eu__2 = L_68;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
			V_6 = __this;
			AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_69 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMaxAsyncU3Ed__33_1_tCDB8D719CC9635A8F99266A9531127882F7BD0E8**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_69, (&V_15), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_0368;
		}

IL_02a7_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_70 = __this->___U3CU3Eu__2;
			V_15 = L_70;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_71 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_71, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_72 = (-1);
			V_0 = L_72;
			__this->___U3CU3E1__state = L_72;
		}

IL_02c4_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_15), NULL);
		}

IL_02cd_1:
		{
			RuntimeObject* L_73 = __this->___U3CU3Es__3;
			V_13 = L_73;
			RuntimeObject* L_74 = V_13;
			if (!L_74)
			{
				goto IL_02f7_1;
			}
		}
		{
			RuntimeObject* L_75 = V_13;
			V_17 = ((Exception_t*)IsInstClass((RuntimeObject*)L_75, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_76 = V_17;
			if (L_76)
			{
				goto IL_02ea_1;
			}
		}
		{
			RuntimeObject* L_77 = V_13;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_77, method);
		}

IL_02ea_1:
		{
			Exception_t* L_78 = V_17;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_79;
			L_79 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_78, NULL);
			NullCheck(L_79);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_79, NULL);
		}

IL_02f7_1:
		{
			int32_t L_80 = __this->___U3CU3Es__4;
			V_18 = L_80;
			int32_t L_81 = V_18;
			if ((((int32_t)L_81) == ((int32_t)1)))
			{
				goto IL_0306_1;
			}
		}
		{
			goto IL_030f_1;
		}

IL_0306_1:
		{
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_82 = __this->___U3CU3Es__5;
			V_1 = L_82;
			goto IL_034c;
		}

IL_030f_1:
		{
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_83 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CU3Es__5);
			il2cpp_codegen_initobj(L_83, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_84 = __this->___U3CvalueU3E5__1;
			V_1 = L_84;
			goto IL_034c;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_032b;
		}
		throw e;
	}

CATCH_032b:
	{
		Exception_t* L_85 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_17 = L_85;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_86 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder);
		Exception_t* L_87 = V_17;
		AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_inline(L_86, L_87, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0368;
	}

IL_034c:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_88 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_89 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_inline(L_88, L_89, AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_RuntimeMethod_var);
	}

IL_0368:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMaxAsyncU3Ed__33_1_SetStateMachine_m12B5B7E91E6ED2B289D02E731BC3B50187CD4E4B_gshared (U3CMaxAsyncU3Ed__33_1_tCDB8D719CC9635A8F99266A9531127882F7BD0E8* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMaxAsyncU3Ed__37_1__ctor_m5820D60E02556C997776540AB6E1806FC226BE90_gshared (U3CMaxAsyncU3Ed__37_1_t75AE786D8A2D63FBD14F0C1E526BDCBC87B9A51A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMaxAsyncU3Ed__37_1_MoveNext_m3B403C65AE927E447CC2CC459C2B5B952C443B3E_gshared (U3CMaxAsyncU3Ed__37_1_t75AE786D8A2D63FBD14F0C1E526BDCBC87B9A51A* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tD2D6F6BD1EA84BA33F511AE950E2A07D9C300DB8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_tD2D6F6BD1EA84BA33F511AE950E2A07D9C300DB8);
	const Il2CppFullySharedGenericAny L_32 = L_11;
	int32_t V_0 = 0;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_4;
	memset((&V_4), 0, sizeof(V_4));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_5;
	memset((&V_5), 0, sizeof(V_5));
	U3CMaxAsyncU3Ed__37_1_t75AE786D8A2D63FBD14F0C1E526BDCBC87B9A51A* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_12;
	memset((&V_12), 0, sizeof(V_12));
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_15;
	memset((&V_15), 0, sizeof(V_15));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Exception_t* V_17 = NULL;
	int32_t V_18 = 0;
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
			goto IL_004c_1;
		}

IL_0015_1:
		{
			goto IL_02a7_1;
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
				if (!L_7)
				{
					goto IL_0058_2;
				}
			}
			{
				goto IL_0052_2;
			}

IL_0052_2:
			{
				int32_t L_8 = V_0;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_005d_2;
				}
			}
			{
				goto IL_0062_2;
			}

IL_0058_2:
			{
				goto IL_00e3_2;
			}

IL_005d_2:
			{
				goto IL_01fd_2;
			}

IL_0062_2:
			{
				goto IL_009b_2;
			}

IL_0065_2:
			{
				Func_2_tB9099E603733365FA636ABD4F1512E954C883863* L_9 = __this->___selector;
				RuntimeObject* L_10 = __this->___U3CeU3E5__2;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				NullCheck(L_9);
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_12;
				L_12 = InvokerFuncInvoker1< Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11));
				__this->___U3CvalueU3E5__1 = L_12;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_13 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CvalueU3E5__1);
				bool L_14;
				L_14 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline(L_13, Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
				V_2 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
				bool L_15 = V_2;
				if (!L_15)
				{
					goto IL_0096_2;
				}
			}
			{
				goto IL_009b_2;
			}

IL_0096_2:
			{
				goto IL_012b_2;
			}

IL_009b_2:
			{
				RuntimeObject* L_16 = __this->___U3CeU3E5__2;
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
					goto IL_0100_2;
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
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_22 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMaxAsyncU3Ed__37_1_t75AE786D8A2D63FBD14F0C1E526BDCBC87B9A51A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_22, (&V_4), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_0368;
			}

IL_00e3_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_23 = __this->___U3CU3Eu__1;
				V_4 = L_23;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_24 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_24, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_25 = (-1);
				V_0 = L_25;
				__this->___U3CU3E1__state = L_25;
			}

IL_0100_2:
			{
				bool L_26;
				L_26 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_4), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_26;
				bool L_27 = __this->___U3CU3Es__6;
				V_3 = L_27;
				bool L_28 = V_3;
				if (L_28)
				{
					goto IL_0065_2;
				}
			}
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_29 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CU3Es__5);
				il2cpp_codegen_initobj(L_29, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
				goto IL_0239_2;
			}

IL_012b_2:
			{
				goto IL_01b5_2;
			}

IL_0131_2:
			{
				Func_2_tB9099E603733365FA636ABD4F1512E954C883863* L_30 = __this->___selector;
				RuntimeObject* L_31 = __this->___U3CeU3E5__2;
				NullCheck(L_31);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_31, (Il2CppFullySharedGenericAny*)L_32);
				NullCheck(L_30);
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_33;
				L_33 = InvokerFuncInvoker1< Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_32: *(void**)L_32));
				__this->___U3CxU3E5__7 = L_33;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_34 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CxU3E5__7);
				bool L_35;
				L_35 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline(L_34, Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
				V_7 = (bool)((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
				bool L_36 = V_7;
				if (!L_36)
				{
					goto IL_0164_2;
				}
			}
			{
				goto IL_01b5_2;
			}

IL_0164_2:
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_37 = __this->___U3CvalueU3E5__1;
				V_9 = L_37;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_38 = __this->___U3CxU3E5__7;
				V_10 = L_38;
				double L_39;
				L_39 = Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_inline((&V_9), Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var);
				double L_40;
				L_40 = Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_inline((&V_10), Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var);
				bool L_41;
				L_41 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&V_9), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
				bool L_42;
				L_42 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&V_10), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
				V_8 = (bool)((int32_t)(((((double)L_39) < ((double)L_40))? 1 : 0)&((int32_t)((int32_t)L_41&(int32_t)L_42))));
				bool L_43 = V_8;
				if (!L_43)
				{
					goto IL_01a8_2;
				}
			}
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_44 = __this->___U3CxU3E5__7;
				__this->___U3CvalueU3E5__1 = L_44;
			}

IL_01a8_2:
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_45 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CxU3E5__7);
				il2cpp_codegen_initobj(L_45, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
			}

IL_01b5_2:
			{
				RuntimeObject* L_46 = __this->___U3CeU3E5__2;
				NullCheck(L_46);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_47;
				L_47 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_46);
				V_5 = L_47;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_48;
				L_48 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_5), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_12 = L_48;
				bool L_49;
				L_49 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_12), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_49)
				{
					goto IL_021a_2;
				}
			}
			{
				int32_t L_50 = 1;
				V_0 = L_50;
				__this->___U3CU3E1__state = L_50;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_51 = V_12;
				__this->___U3CU3Eu__1 = L_51;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_6 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_52 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMaxAsyncU3Ed__37_1_t75AE786D8A2D63FBD14F0C1E526BDCBC87B9A51A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_52, (&V_12), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_0368;
			}

IL_01fd_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_53 = __this->___U3CU3Eu__1;
				V_12 = L_53;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_54 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_54, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_55 = (-1);
				V_0 = L_55;
				__this->___U3CU3E1__state = L_55;
			}

IL_021a_2:
			{
				bool L_56;
				L_56 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_12), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8 = L_56;
				bool L_57 = __this->___U3CU3Es__8;
				V_11 = L_57;
				bool L_58 = V_11;
				if (L_58)
				{
					goto IL_0131_2;
				}
			}
			{
				goto IL_024e_1;
			}

IL_0239_2:
			{
				__this->___U3CU3Es__4 = 1;
				goto IL_024e_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0242_1;
			}
			throw e;
		}

CATCH_0242_1:
		{
			RuntimeObject* L_59 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_13 = L_59;
			RuntimeObject* L_60 = V_13;
			__this->___U3CU3Es__3 = L_60;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_60);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_024e_1;
		}

IL_024e_1:
		{
			RuntimeObject* L_61 = __this->___U3CeU3E5__2;
			V_14 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_61) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_62 = V_14;
			if (!L_62)
			{
				goto IL_02cd_1;
			}
		}
		{
			RuntimeObject* L_63 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_63);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_64;
			L_64 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_63);
			V_16 = L_64;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_65;
			L_65 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_16), NULL);
			V_15 = L_65;
			bool L_66;
			L_66 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_15), NULL);
			if (L_66)
			{
				goto IL_02c4_1;
			}
		}
		{
			int32_t L_67 = 2;
			V_0 = L_67;
			__this->___U3CU3E1__state = L_67;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_68 = V_15;
			__this->___U3CU3Eu__2 = L_68;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
			V_6 = __this;
			AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_69 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMaxAsyncU3Ed__37_1_t75AE786D8A2D63FBD14F0C1E526BDCBC87B9A51A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_69, (&V_15), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_0368;
		}

IL_02a7_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_70 = __this->___U3CU3Eu__2;
			V_15 = L_70;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_71 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_71, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_72 = (-1);
			V_0 = L_72;
			__this->___U3CU3E1__state = L_72;
		}

IL_02c4_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_15), NULL);
		}

IL_02cd_1:
		{
			RuntimeObject* L_73 = __this->___U3CU3Es__3;
			V_13 = L_73;
			RuntimeObject* L_74 = V_13;
			if (!L_74)
			{
				goto IL_02f7_1;
			}
		}
		{
			RuntimeObject* L_75 = V_13;
			V_17 = ((Exception_t*)IsInstClass((RuntimeObject*)L_75, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_76 = V_17;
			if (L_76)
			{
				goto IL_02ea_1;
			}
		}
		{
			RuntimeObject* L_77 = V_13;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_77, method);
		}

IL_02ea_1:
		{
			Exception_t* L_78 = V_17;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_79;
			L_79 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_78, NULL);
			NullCheck(L_79);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_79, NULL);
		}

IL_02f7_1:
		{
			int32_t L_80 = __this->___U3CU3Es__4;
			V_18 = L_80;
			int32_t L_81 = V_18;
			if ((((int32_t)L_81) == ((int32_t)1)))
			{
				goto IL_0306_1;
			}
		}
		{
			goto IL_030f_1;
		}

IL_0306_1:
		{
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_82 = __this->___U3CU3Es__5;
			V_1 = L_82;
			goto IL_034c;
		}

IL_030f_1:
		{
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_83 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CU3Es__5);
			il2cpp_codegen_initobj(L_83, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_84 = __this->___U3CvalueU3E5__1;
			V_1 = L_84;
			goto IL_034c;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_032b;
		}
		throw e;
	}

CATCH_032b:
	{
		Exception_t* L_85 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_17 = L_85;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_86 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
		Exception_t* L_87 = V_17;
		AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_inline(L_86, L_87, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0368;
	}

IL_034c:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_88 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_89 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_inline(L_88, L_89, AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
	}

IL_0368:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMaxAsyncU3Ed__37_1_SetStateMachine_m08AE560EA184F05BA054A486E8DD7AF200109188_gshared (U3CMaxAsyncU3Ed__37_1_t75AE786D8A2D63FBD14F0C1E526BDCBC87B9A51A* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMaxAsyncU3Ed__41_1__ctor_m2991B75F1385E7EA23B869E83C24B7EC398D8BDD_gshared (U3CMaxAsyncU3Ed__41_1_t4C6F0F24A2D6C828C7E647306BBD8223AD55ED47* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMaxAsyncU3Ed__41_1_MoveNext_m4E0F5C182EE4E20A843798B5273C0487FDEDA96E_gshared (U3CMaxAsyncU3Ed__41_1_t4C6F0F24A2D6C828C7E647306BBD8223AD55ED47* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tB605CFE5C87A3409B55ABB919A1FFC151598677D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_tB605CFE5C87A3409B55ABB919A1FFC151598677D);
	const Il2CppFullySharedGenericAny L_32 = L_11;
	int32_t V_0 = 0;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_4;
	memset((&V_4), 0, sizeof(V_4));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_5;
	memset((&V_5), 0, sizeof(V_5));
	U3CMaxAsyncU3Ed__41_1_t4C6F0F24A2D6C828C7E647306BBD8223AD55ED47* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_9;
	memset((&V_9), 0, sizeof(V_9));
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_12;
	memset((&V_12), 0, sizeof(V_12));
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_15;
	memset((&V_15), 0, sizeof(V_15));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Exception_t* V_17 = NULL;
	int32_t V_18 = 0;
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
			goto IL_004c_1;
		}

IL_0015_1:
		{
			goto IL_02aa_1;
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
				if (!L_7)
				{
					goto IL_0058_2;
				}
			}
			{
				goto IL_0052_2;
			}

IL_0052_2:
			{
				int32_t L_8 = V_0;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_005d_2;
				}
			}
			{
				goto IL_0062_2;
			}

IL_0058_2:
			{
				goto IL_00e3_2;
			}

IL_005d_2:
			{
				goto IL_0200_2;
			}

IL_0062_2:
			{
				goto IL_009b_2;
			}

IL_0065_2:
			{
				Func_2_t02AAAA5ED63E37D8013889ECE551ED5172A9F7A4* L_9 = __this->___selector;
				RuntimeObject* L_10 = __this->___U3CeU3E5__2;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				NullCheck(L_9);
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_12;
				L_12 = InvokerFuncInvoker1< Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11));
				__this->___U3CvalueU3E5__1 = L_12;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_13 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CvalueU3E5__1);
				bool L_14;
				L_14 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline(L_13, Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
				V_2 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
				bool L_15 = V_2;
				if (!L_15)
				{
					goto IL_0096_2;
				}
			}
			{
				goto IL_009b_2;
			}

IL_0096_2:
			{
				goto IL_012b_2;
			}

IL_009b_2:
			{
				RuntimeObject* L_16 = __this->___U3CeU3E5__2;
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
					goto IL_0100_2;
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
				AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_22 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMaxAsyncU3Ed__41_1_t4C6F0F24A2D6C828C7E647306BBD8223AD55ED47**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_22, (&V_4), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_036b;
			}

IL_00e3_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_23 = __this->___U3CU3Eu__1;
				V_4 = L_23;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_24 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_24, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_25 = (-1);
				V_0 = L_25;
				__this->___U3CU3E1__state = L_25;
			}

IL_0100_2:
			{
				bool L_26;
				L_26 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_4), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6 = L_26;
				bool L_27 = __this->___U3CU3Es__6;
				V_3 = L_27;
				bool L_28 = V_3;
				if (L_28)
				{
					goto IL_0065_2;
				}
			}
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_29 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CU3Es__5);
				il2cpp_codegen_initobj(L_29, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
				goto IL_023c_2;
			}

IL_012b_2:
			{
				goto IL_01b8_2;
			}

IL_0131_2:
			{
				Func_2_t02AAAA5ED63E37D8013889ECE551ED5172A9F7A4* L_30 = __this->___selector;
				RuntimeObject* L_31 = __this->___U3CeU3E5__2;
				NullCheck(L_31);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_31, (Il2CppFullySharedGenericAny*)L_32);
				NullCheck(L_30);
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_33;
				L_33 = InvokerFuncInvoker1< Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_32: *(void**)L_32));
				__this->___U3CxU3E5__7 = L_33;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_34 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CxU3E5__7);
				bool L_35;
				L_35 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline(L_34, Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
				V_7 = (bool)((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
				bool L_36 = V_7;
				if (!L_36)
				{
					goto IL_0164_2;
				}
			}
			{
				goto IL_01b8_2;
			}

IL_0164_2:
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_37 = __this->___U3CvalueU3E5__1;
				V_9 = L_37;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_38 = __this->___U3CxU3E5__7;
				V_10 = L_38;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_39;
				L_39 = Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_inline((&V_9), Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_40;
				L_40 = Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_inline((&V_10), Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
				bool L_41;
				L_41 = Decimal_op_LessThan_mEA888B7F0853F7700602254AAD4AD058C30552F5(L_39, L_40, NULL);
				bool L_42;
				L_42 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline((&V_9), Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
				bool L_43;
				L_43 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline((&V_10), Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
				V_8 = (bool)((int32_t)((int32_t)L_41&((int32_t)((int32_t)L_42&(int32_t)L_43))));
				bool L_44 = V_8;
				if (!L_44)
				{
					goto IL_01ab_2;
				}
			}
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_45 = __this->___U3CxU3E5__7;
				__this->___U3CvalueU3E5__1 = L_45;
			}

IL_01ab_2:
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_46 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CxU3E5__7);
				il2cpp_codegen_initobj(L_46, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
			}

IL_01b8_2:
			{
				RuntimeObject* L_47 = __this->___U3CeU3E5__2;
				NullCheck(L_47);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_48;
				L_48 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_47);
				V_5 = L_48;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_49;
				L_49 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_5), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_12 = L_49;
				bool L_50;
				L_50 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_12), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_50)
				{
					goto IL_021d_2;
				}
			}
			{
				int32_t L_51 = 1;
				V_0 = L_51;
				__this->___U3CU3E1__state = L_51;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_52 = V_12;
				__this->___U3CU3Eu__1 = L_52;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				V_6 = __this;
				AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_53 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMaxAsyncU3Ed__41_1_t4C6F0F24A2D6C828C7E647306BBD8223AD55ED47**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_53, (&V_12), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_036b;
			}

IL_0200_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_54 = __this->___U3CU3Eu__1;
				V_12 = L_54;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_55 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_55, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_56 = (-1);
				V_0 = L_56;
				__this->___U3CU3E1__state = L_56;
			}

IL_021d_2:
			{
				bool L_57;
				L_57 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_12), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8 = L_57;
				bool L_58 = __this->___U3CU3Es__8;
				V_11 = L_58;
				bool L_59 = V_11;
				if (L_59)
				{
					goto IL_0131_2;
				}
			}
			{
				goto IL_0251_1;
			}

IL_023c_2:
			{
				__this->___U3CU3Es__4 = 1;
				goto IL_0251_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0245_1;
			}
			throw e;
		}

CATCH_0245_1:
		{
			RuntimeObject* L_60 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_13 = L_60;
			RuntimeObject* L_61 = V_13;
			__this->___U3CU3Es__3 = L_61;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)L_61);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0251_1;
		}

IL_0251_1:
		{
			RuntimeObject* L_62 = __this->___U3CeU3E5__2;
			V_14 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_62) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_63 = V_14;
			if (!L_63)
			{
				goto IL_02d0_1;
			}
		}
		{
			RuntimeObject* L_64 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_64);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_65;
			L_65 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_64);
			V_16 = L_65;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_66;
			L_66 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_16), NULL);
			V_15 = L_66;
			bool L_67;
			L_67 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_15), NULL);
			if (L_67)
			{
				goto IL_02c7_1;
			}
		}
		{
			int32_t L_68 = 2;
			V_0 = L_68;
			__this->___U3CU3E1__state = L_68;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_69 = V_15;
			__this->___U3CU3Eu__2 = L_69;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
			V_6 = __this;
			AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_70 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMaxAsyncU3Ed__41_1_t4C6F0F24A2D6C828C7E647306BBD8223AD55ED47**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_70, (&V_15), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_036b;
		}

IL_02aa_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_71 = __this->___U3CU3Eu__2;
			V_15 = L_71;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_72 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_72, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_73 = (-1);
			V_0 = L_73;
			__this->___U3CU3E1__state = L_73;
		}

IL_02c7_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_15), NULL);
		}

IL_02d0_1:
		{
			RuntimeObject* L_74 = __this->___U3CU3Es__3;
			V_13 = L_74;
			RuntimeObject* L_75 = V_13;
			if (!L_75)
			{
				goto IL_02fa_1;
			}
		}
		{
			RuntimeObject* L_76 = V_13;
			V_17 = ((Exception_t*)IsInstClass((RuntimeObject*)L_76, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_77 = V_17;
			if (L_77)
			{
				goto IL_02ed_1;
			}
		}
		{
			RuntimeObject* L_78 = V_13;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_78, method);
		}

IL_02ed_1:
		{
			Exception_t* L_79 = V_17;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_80;
			L_80 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_79, NULL);
			NullCheck(L_80);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_80, NULL);
		}

IL_02fa_1:
		{
			int32_t L_81 = __this->___U3CU3Es__4;
			V_18 = L_81;
			int32_t L_82 = V_18;
			if ((((int32_t)L_82) == ((int32_t)1)))
			{
				goto IL_0309_1;
			}
		}
		{
			goto IL_0312_1;
		}

IL_0309_1:
		{
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_83 = __this->___U3CU3Es__5;
			V_1 = L_83;
			goto IL_034f;
		}

IL_0312_1:
		{
			__this->___U3CU3Es__3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3), (void*)NULL);
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_84 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CU3Es__5);
			il2cpp_codegen_initobj(L_84, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_85 = __this->___U3CvalueU3E5__1;
			V_1 = L_85;
			goto IL_034f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_032e;
		}
		throw e;
	}

CATCH_032e:
	{
		Exception_t* L_86 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_17 = L_86;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_87 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder);
		Exception_t* L_88 = V_17;
		AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_inline(L_87, L_88, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_036b;
	}

IL_034f:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_89 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder);
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_90 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_inline(L_89, L_90, AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_RuntimeMethod_var);
	}

IL_036b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMaxAsyncU3Ed__41_1_SetStateMachine_mF9564A7F1719585C047C87E8B9393CE7C10FE998_gshared (U3CMaxAsyncU3Ed__41_1_t4C6F0F24A2D6C828C7E647306BBD8223AD55ED47* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SplineRange_get_Count_m71E1A150F7E1896F91C2CE285E2CB86473D675A4_inline (SplineRange_tCB51EBCFA5858BB48FEC33EF009AA4E0B75772B1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Count;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
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
