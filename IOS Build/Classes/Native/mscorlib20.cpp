#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object>
struct ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs>
struct EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A;
// System.Func`1<System.Threading.ManualResetEvent>
struct Func_1_t5676838A0CF4B34BFAE91E1902234AA2C5C4BE05;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.Threading.Timer>
struct List_1_t537143C180C9FB69517B6C26205D2AA824591563;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.SByte[]
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Threading.Timer[]
struct TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B;
// System.Text.DecoderNLS
struct DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0;
// System.Text.EncoderNLS
struct EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IComparer
struct IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2A667D8777429024D8A3CB3D9AE29EA79FEA6176;
// System.Security.Principal.IPrincipal
struct IPrincipal_t850ACE1F48327B64F266DD2C6FD8C5F56E4889E2;
// System.Threading.InternalThread
struct InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.Collections.SortedList
struct SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// System.Threading.ThreadStart
struct ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687;
// System.Threading.Timer
struct Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB;
// System.Threading.TimerCallback
struct TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814;
// System.Type
struct Type_t;
// System.TypeName
struct TypeName_t714DD2B9BA4134CE17349D95281A1F750D78D60F;
// System.Text.UTF32Encoding
struct UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014;
// System.Text.UTF7Encoding
struct UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076;
// System.Text.UTF8Encoding
struct UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282;
// System.Text.UnicodeEncoding
struct UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Threading.WaitCallback
struct WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// System.Threading.Timer/Scheduler
struct Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8;
// System.Threading.Timer/TimerComparer
struct TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B;
// System.TypeIdentifiers/Display
struct Display_tB07FE33B5E37AC259B2FCC8EC820AC5CEDEAC41E;
// System.TypeNames/ATypeName
struct ATypeName_t19F245ED1619C78770F92C899C4FE364DBF30861;
// System.Text.UTF32Encoding/UTF32Decoder
struct UTF32Decoder_t38867B08AD03138702C713129B79529EC4528DB7;
// System.Text.UTF7Encoding/Decoder
struct Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9;
// System.Text.UTF7Encoding/DecoderUTF7Fallback
struct DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8;
// System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer
struct DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A;
// System.Text.UTF7Encoding/Encoder
struct Encoder_tF895184EA91019AA3995A8547FD56A3E0D16D1B4;
// System.Text.UTF8Encoding/UTF8Decoder
struct UTF8Decoder_tD2359F0F52206B911EBC3222E627191C829F4C65;
// System.Text.UTF8Encoding/UTF8Encoder
struct UTF8Encoder_t3408DBF93D79A981F50954F660E33BA13FE29FD3;
// System.Text.UnicodeEncoding/Decoder
struct Decoder_tC3DC16951ED8FCF98278FC7F0804070A9C218109;
// Microsoft.Win32.Win32Native/WIN32_FIND_DATA
struct WIN32_FIND_DATA_tE88493B22E1CDD2E595CA4F800949555399AB3C7;
// System.Console/WindowsConsole/WindowsCancelHandler
struct WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF;
// System.IO.Stream/SynchronousAsyncResult/<>c
struct U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t537143C180C9FB69517B6C26205D2AA824591563_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeName_t714DD2B9BA4134CE17349D95281A1F750D78D60F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01AC6AAA845493AD30953C71C8C9EABF0D0124E4;
IL2CPP_EXTERN_C String_t* _stringLiteral0763FE5EB1EAC35DDF3CD44B5645A71888066226;
IL2CPP_EXTERN_C String_t* _stringLiteral1450C988C6B4D028AF5A543FC4A7A8FA9BA62F30;
IL2CPP_EXTERN_C String_t* _stringLiteral2920727F7824CA7782C4813D6F7312ABCDA53CCD;
IL2CPP_EXTERN_C String_t* _stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128;
IL2CPP_EXTERN_C String_t* _stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4;
IL2CPP_EXTERN_C String_t* _stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58;
IL2CPP_EXTERN_C String_t* _stringLiteral35FD9409286E50999789090A9930776FD3F2B13E;
IL2CPP_EXTERN_C String_t* _stringLiteral494836B9EFC41FFD5CB7E6CA5BA325833F323668;
IL2CPP_EXTERN_C String_t* _stringLiteral49D64DCFE768AFB45BCA7F089DBB249FA1DA859C;
IL2CPP_EXTERN_C String_t* _stringLiteral8994D295B1EC3F358FB1CDEB6465D3A478A7F949;
IL2CPP_EXTERN_C String_t* _stringLiteral9C4034C5C6F417782BE8DF6DD6771CA6B67948DF;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6;
IL2CPP_EXTERN_C String_t* _stringLiteralB5411972E9968E9978EF95EF84FB5F5FE4F0F734;
IL2CPP_EXTERN_C String_t* _stringLiteralBDC4CEC2209B63293A24317DF536AF666EAC59E5;
IL2CPP_EXTERN_C String_t* _stringLiteralC760D2328BD1CF4750B1C22486E5906ACA0DD030;
IL2CPP_EXTERN_C String_t* _stringLiteralD08F78ED8610B5137CB74E4B8EE06DCA431A6DF5;
IL2CPP_EXTERN_C String_t* _stringLiteralD3EDB56B30B60F6E6107AB89FE5358A528045F13;
IL2CPP_EXTERN_C String_t* _stringLiteralD5FECA9C07F11E0EFEDB17DCA043A555B4DD4FF2;
IL2CPP_EXTERN_C const RuntimeMethod* DecoderUTF7FallbackBuffer_InternalFallback_mED8FF7722E62493ABE76E8CE1887618F6A720300_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_m3ED01524C080A21879E3BB557F043586DA3C2AE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_mFEA452EA85957C6375B8F3E3551D2DA9317E1165_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Decoder__ctor_m30B1EA2BF40A4E5A3F4BF3C7B6FE7377380A1038_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Decoder__ctor_m8A1BF2DA9101627DEFF9629F0E16F8A0A8917DE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Encoder_System_Runtime_Serialization_ISerializable_GetObjectData_m6092B473125DCAB361E2692A0A37F4F175154463_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Encoder__ctor_mD7BEBE37C16C8C8BFFFFDB86681B51F2142A8F7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB29575CEA902024C74743A09C2AD6A27C71FA14C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC1A3BC5C09490DE7BD41BBE1BFD81F870F508CC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m883AB85828B7C88FE9A8C7802E93E6CE979EA000_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Capacity_mD0C25FAD6973D3D67381859E776ECAE953FDFD6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9F4CBA17931C03FCCABF06CE8F29187F98D1F260_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9C036D14366E9BBB52436252522EDE206DC6EB35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_mEA0D56662D94226185342D2A0FD7C1860C5FFA7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Scheduler_SchedulerThread_mDB9CB3C0FCB84658BB01FFF19F5995869778D8C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Scheduler_TimerCB_mFF78E60DAA18DD3E772F2113D46FB51241C957A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UTF8Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_m660874DE4EB3E16DF79AF02610D1DCA0D9A2E4BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UTF8Decoder__ctor_mF827B4315912C53F248B79A77CFDE99759111353_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UTF8Encoder_System_Runtime_Serialization_ISerializable_GetObjectData_m2EB22FA8BBBFC1038DA48A6014DDFD6FF57D93D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UTF8Encoder__ctor_m21812FB83AD489EC7871F626BC251F3DEDFC8506_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YieldAwaiter_QueueContinuation_m74F0C35BAB324C9DB810F8F60BA6BDBCAA5E0201_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YieldAwaiter_RunAction_mBBA702DC1D80A6DF9715E898DD994F965E946759_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Threading.Timer>
struct List_1_t537143C180C9FB69517B6C26205D2AA824591563  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t537143C180C9FB69517B6C26205D2AA824591563, ____items_1)); }
	inline TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387* get__items_1() const { return ____items_1; }
	inline TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t537143C180C9FB69517B6C26205D2AA824591563, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t537143C180C9FB69517B6C26205D2AA824591563, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t537143C180C9FB69517B6C26205D2AA824591563, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t537143C180C9FB69517B6C26205D2AA824591563_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t537143C180C9FB69517B6C26205D2AA824591563_StaticFields, ____emptyArray_5)); }
	inline TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
{
public:

public:
};


// System.Text.Decoder
struct Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370  : public RuntimeObject
{
public:
	// System.Text.DecoderFallback System.Text.Decoder::m_fallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___m_fallback_0;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::m_fallbackBuffer
	DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * ___m_fallbackBuffer_1;

public:
	inline static int32_t get_offset_of_m_fallback_0() { return static_cast<int32_t>(offsetof(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370, ___m_fallback_0)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_m_fallback_0() const { return ___m_fallback_0; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_m_fallback_0() { return &___m_fallback_0; }
	inline void set_m_fallback_0(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___m_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_fallbackBuffer_1() { return static_cast<int32_t>(offsetof(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370, ___m_fallbackBuffer_1)); }
	inline DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * get_m_fallbackBuffer_1() const { return ___m_fallbackBuffer_1; }
	inline DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B ** get_address_of_m_fallbackBuffer_1() { return &___m_fallbackBuffer_1; }
	inline void set_m_fallbackBuffer_1(DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * value)
	{
		___m_fallbackBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fallbackBuffer_1), (void*)value);
	}
};


// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D  : public RuntimeObject
{
public:
	// System.Boolean System.Text.DecoderFallback::bIsMicrosoftBestFitFallback
	bool ___bIsMicrosoftBestFitFallback_0;

public:
	inline static int32_t get_offset_of_bIsMicrosoftBestFitFallback_0() { return static_cast<int32_t>(offsetof(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D, ___bIsMicrosoftBestFitFallback_0)); }
	inline bool get_bIsMicrosoftBestFitFallback_0() const { return ___bIsMicrosoftBestFitFallback_0; }
	inline bool* get_address_of_bIsMicrosoftBestFitFallback_0() { return &___bIsMicrosoftBestFitFallback_0; }
	inline void set_bIsMicrosoftBestFitFallback_0(bool value)
	{
		___bIsMicrosoftBestFitFallback_0 = value;
	}
};

struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_StaticFields
{
public:
	// System.Text.DecoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.DecoderFallback::replacementFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___replacementFallback_1;
	// System.Text.DecoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.DecoderFallback::exceptionFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___exceptionFallback_2;
	// System.Object System.Text.DecoderFallback::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_3;

public:
	inline static int32_t get_offset_of_replacementFallback_1() { return static_cast<int32_t>(offsetof(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_StaticFields, ___replacementFallback_1)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_replacementFallback_1() const { return ___replacementFallback_1; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_replacementFallback_1() { return &___replacementFallback_1; }
	inline void set_replacementFallback_1(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___replacementFallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___replacementFallback_1), (void*)value);
	}

	inline static int32_t get_offset_of_exceptionFallback_2() { return static_cast<int32_t>(offsetof(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_StaticFields, ___exceptionFallback_2)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_exceptionFallback_2() const { return ___exceptionFallback_2; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_exceptionFallback_2() { return &___exceptionFallback_2; }
	inline void set_exceptionFallback_2(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___exceptionFallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exceptionFallback_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_3() { return static_cast<int32_t>(offsetof(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_StaticFields, ___s_InternalSyncObject_3)); }
	inline RuntimeObject * get_s_InternalSyncObject_3() const { return ___s_InternalSyncObject_3; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_3() { return &___s_InternalSyncObject_3; }
	inline void set_s_InternalSyncObject_3(RuntimeObject * value)
	{
		___s_InternalSyncObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_3), (void*)value);
	}
};


// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B  : public RuntimeObject
{
public:
	// System.Byte* System.Text.DecoderFallbackBuffer::byteStart
	uint8_t* ___byteStart_0;
	// System.Char* System.Text.DecoderFallbackBuffer::charEnd
	Il2CppChar* ___charEnd_1;

public:
	inline static int32_t get_offset_of_byteStart_0() { return static_cast<int32_t>(offsetof(DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B, ___byteStart_0)); }
	inline uint8_t* get_byteStart_0() const { return ___byteStart_0; }
	inline uint8_t** get_address_of_byteStart_0() { return &___byteStart_0; }
	inline void set_byteStart_0(uint8_t* value)
	{
		___byteStart_0 = value;
	}

	inline static int32_t get_offset_of_charEnd_1() { return static_cast<int32_t>(offsetof(DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B, ___charEnd_1)); }
	inline Il2CppChar* get_charEnd_1() const { return ___charEnd_1; }
	inline Il2CppChar** get_address_of_charEnd_1() { return &___charEnd_1; }
	inline void set_charEnd_1(Il2CppChar* value)
	{
		___charEnd_1 = value;
	}
};


// System.Text.Encoder
struct Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A  : public RuntimeObject
{
public:
	// System.Text.EncoderFallback System.Text.Encoder::m_fallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___m_fallback_0;
	// System.Text.EncoderFallbackBuffer System.Text.Encoder::m_fallbackBuffer
	EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * ___m_fallbackBuffer_1;

public:
	inline static int32_t get_offset_of_m_fallback_0() { return static_cast<int32_t>(offsetof(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A, ___m_fallback_0)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_m_fallback_0() const { return ___m_fallback_0; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_m_fallback_0() { return &___m_fallback_0; }
	inline void set_m_fallback_0(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___m_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_fallbackBuffer_1() { return static_cast<int32_t>(offsetof(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A, ___m_fallbackBuffer_1)); }
	inline EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * get_m_fallbackBuffer_1() const { return ___m_fallbackBuffer_1; }
	inline EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 ** get_address_of_m_fallbackBuffer_1() { return &___m_fallbackBuffer_1; }
	inline void set_m_fallbackBuffer_1(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * value)
	{
		___m_fallbackBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fallbackBuffer_1), (void*)value);
	}
};


// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4  : public RuntimeObject
{
public:
	// System.Boolean System.Text.EncoderFallback::bIsMicrosoftBestFitFallback
	bool ___bIsMicrosoftBestFitFallback_0;

public:
	inline static int32_t get_offset_of_bIsMicrosoftBestFitFallback_0() { return static_cast<int32_t>(offsetof(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4, ___bIsMicrosoftBestFitFallback_0)); }
	inline bool get_bIsMicrosoftBestFitFallback_0() const { return ___bIsMicrosoftBestFitFallback_0; }
	inline bool* get_address_of_bIsMicrosoftBestFitFallback_0() { return &___bIsMicrosoftBestFitFallback_0; }
	inline void set_bIsMicrosoftBestFitFallback_0(bool value)
	{
		___bIsMicrosoftBestFitFallback_0 = value;
	}
};

struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_StaticFields
{
public:
	// System.Text.EncoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.EncoderFallback::replacementFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___replacementFallback_1;
	// System.Text.EncoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.EncoderFallback::exceptionFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___exceptionFallback_2;
	// System.Object System.Text.EncoderFallback::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_3;

public:
	inline static int32_t get_offset_of_replacementFallback_1() { return static_cast<int32_t>(offsetof(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_StaticFields, ___replacementFallback_1)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_replacementFallback_1() const { return ___replacementFallback_1; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_replacementFallback_1() { return &___replacementFallback_1; }
	inline void set_replacementFallback_1(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___replacementFallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___replacementFallback_1), (void*)value);
	}

	inline static int32_t get_offset_of_exceptionFallback_2() { return static_cast<int32_t>(offsetof(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_StaticFields, ___exceptionFallback_2)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_exceptionFallback_2() const { return ___exceptionFallback_2; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_exceptionFallback_2() { return &___exceptionFallback_2; }
	inline void set_exceptionFallback_2(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___exceptionFallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exceptionFallback_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_3() { return static_cast<int32_t>(offsetof(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_StaticFields, ___s_InternalSyncObject_3)); }
	inline RuntimeObject * get_s_InternalSyncObject_3() const { return ___s_InternalSyncObject_3; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_3() { return &___s_InternalSyncObject_3; }
	inline void set_s_InternalSyncObject_3(RuntimeObject * value)
	{
		___s_InternalSyncObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_3), (void*)value);
	}
};


// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0  : public RuntimeObject
{
public:
	// System.Char* System.Text.EncoderFallbackBuffer::charStart
	Il2CppChar* ___charStart_0;
	// System.Char* System.Text.EncoderFallbackBuffer::charEnd
	Il2CppChar* ___charEnd_1;
	// System.Text.EncoderNLS System.Text.EncoderFallbackBuffer::encoder
	EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 * ___encoder_2;
	// System.Boolean System.Text.EncoderFallbackBuffer::setEncoder
	bool ___setEncoder_3;
	// System.Boolean System.Text.EncoderFallbackBuffer::bUsedEncoder
	bool ___bUsedEncoder_4;
	// System.Boolean System.Text.EncoderFallbackBuffer::bFallingBack
	bool ___bFallingBack_5;
	// System.Int32 System.Text.EncoderFallbackBuffer::iRecursionCount
	int32_t ___iRecursionCount_6;

public:
	inline static int32_t get_offset_of_charStart_0() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___charStart_0)); }
	inline Il2CppChar* get_charStart_0() const { return ___charStart_0; }
	inline Il2CppChar** get_address_of_charStart_0() { return &___charStart_0; }
	inline void set_charStart_0(Il2CppChar* value)
	{
		___charStart_0 = value;
	}

	inline static int32_t get_offset_of_charEnd_1() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___charEnd_1)); }
	inline Il2CppChar* get_charEnd_1() const { return ___charEnd_1; }
	inline Il2CppChar** get_address_of_charEnd_1() { return &___charEnd_1; }
	inline void set_charEnd_1(Il2CppChar* value)
	{
		___charEnd_1 = value;
	}

	inline static int32_t get_offset_of_encoder_2() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___encoder_2)); }
	inline EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 * get_encoder_2() const { return ___encoder_2; }
	inline EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 ** get_address_of_encoder_2() { return &___encoder_2; }
	inline void set_encoder_2(EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 * value)
	{
		___encoder_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoder_2), (void*)value);
	}

	inline static int32_t get_offset_of_setEncoder_3() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___setEncoder_3)); }
	inline bool get_setEncoder_3() const { return ___setEncoder_3; }
	inline bool* get_address_of_setEncoder_3() { return &___setEncoder_3; }
	inline void set_setEncoder_3(bool value)
	{
		___setEncoder_3 = value;
	}

	inline static int32_t get_offset_of_bUsedEncoder_4() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___bUsedEncoder_4)); }
	inline bool get_bUsedEncoder_4() const { return ___bUsedEncoder_4; }
	inline bool* get_address_of_bUsedEncoder_4() { return &___bUsedEncoder_4; }
	inline void set_bUsedEncoder_4(bool value)
	{
		___bUsedEncoder_4 = value;
	}

	inline static int32_t get_offset_of_bFallingBack_5() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___bFallingBack_5)); }
	inline bool get_bFallingBack_5() const { return ___bFallingBack_5; }
	inline bool* get_address_of_bFallingBack_5() { return &___bFallingBack_5; }
	inline void set_bFallingBack_5(bool value)
	{
		___bFallingBack_5 = value;
	}

	inline static int32_t get_offset_of_iRecursionCount_6() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___iRecursionCount_6)); }
	inline int32_t get_iRecursionCount_6() const { return ___iRecursionCount_6; }
	inline int32_t* get_address_of_iRecursionCount_6() { return &___iRecursionCount_6; }
	inline void set_iRecursionCount_6(int32_t value)
	{
		___iRecursionCount_6 = value;
	}
};


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_60;

public:
	inline static int32_t get_offset_of_m_codePage_55() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_55)); }
	inline int32_t get_m_codePage_55() const { return ___m_codePage_55; }
	inline int32_t* get_address_of_m_codePage_55() { return &___m_codePage_55; }
	inline void set_m_codePage_55(int32_t value)
	{
		___m_codePage_55 = value;
	}

	inline static int32_t get_offset_of_dataItem_56() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_56)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_56() const { return ___dataItem_56; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_56() { return &___dataItem_56; }
	inline void set_dataItem_56(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_56), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_57() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_57)); }
	inline bool get_m_deserializedFromEverett_57() const { return ___m_deserializedFromEverett_57; }
	inline bool* get_address_of_m_deserializedFromEverett_57() { return &___m_deserializedFromEverett_57; }
	inline void set_m_deserializedFromEverett_57(bool value)
	{
		___m_deserializedFromEverett_57 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_58() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_58)); }
	inline bool get_m_isReadOnly_58() const { return ___m_isReadOnly_58; }
	inline bool* get_address_of_m_isReadOnly_58() { return &___m_isReadOnly_58; }
	inline void set_m_isReadOnly_58(bool value)
	{
		___m_isReadOnly_58 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_59() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_59)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_59() const { return ___encoderFallback_59; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_59() { return &___encoderFallback_59; }
	inline void set_encoderFallback_59(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_59), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_60() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_60)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_60() const { return ___decoderFallback_60; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_60() { return &___decoderFallback_60; }
	inline void set_decoderFallback_60(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_60), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_61;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_61() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_61)); }
	inline RuntimeObject * get_s_InternalSyncObject_61() const { return ___s_InternalSyncObject_61; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_61() { return &___s_InternalSyncObject_61; }
	inline void set_s_InternalSyncObject_61(RuntimeObject * value)
	{
		___s_InternalSyncObject_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_61), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1  : public RuntimeObject
{
public:
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t * ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;

public:
	inline static int32_t get_offset_of_m_members_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_members_3)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_members_3() const { return ___m_members_3; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_members_3() { return &___m_members_3; }
	inline void set_m_members_3(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_members_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_members_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_data_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_data_4)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_data_4() const { return ___m_data_4; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_data_4() { return &___m_data_4; }
	inline void set_m_data_4(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_data_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_types_5() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_types_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_m_types_5() const { return ___m_types_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_m_types_5() { return &___m_types_5; }
	inline void set_m_types_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___m_types_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_types_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_nameToIndex_6() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_nameToIndex_6)); }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * get_m_nameToIndex_6() const { return ___m_nameToIndex_6; }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 ** get_address_of_m_nameToIndex_6() { return &___m_nameToIndex_6; }
	inline void set_m_nameToIndex_6(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * value)
	{
		___m_nameToIndex_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_nameToIndex_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_currMember_7() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_currMember_7)); }
	inline int32_t get_m_currMember_7() const { return ___m_currMember_7; }
	inline int32_t* get_address_of_m_currMember_7() { return &___m_currMember_7; }
	inline void set_m_currMember_7(int32_t value)
	{
		___m_currMember_7 = value;
	}

	inline static int32_t get_offset_of_m_converter_8() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_converter_8)); }
	inline RuntimeObject* get_m_converter_8() const { return ___m_converter_8; }
	inline RuntimeObject** get_address_of_m_converter_8() { return &___m_converter_8; }
	inline void set_m_converter_8(RuntimeObject* value)
	{
		___m_converter_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_converter_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTypeName_9() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_fullTypeName_9)); }
	inline String_t* get_m_fullTypeName_9() const { return ___m_fullTypeName_9; }
	inline String_t** get_address_of_m_fullTypeName_9() { return &___m_fullTypeName_9; }
	inline void set_m_fullTypeName_9(String_t* value)
	{
		___m_fullTypeName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTypeName_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_assemName_10() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_assemName_10)); }
	inline String_t* get_m_assemName_10() const { return ___m_assemName_10; }
	inline String_t** get_address_of_m_assemName_10() { return &___m_assemName_10; }
	inline void set_m_assemName_10(String_t* value)
	{
		___m_assemName_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_assemName_10), (void*)value);
	}

	inline static int32_t get_offset_of_objectType_11() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___objectType_11)); }
	inline Type_t * get_objectType_11() const { return ___objectType_11; }
	inline Type_t ** get_address_of_objectType_11() { return &___objectType_11; }
	inline void set_objectType_11(Type_t * value)
	{
		___objectType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectType_11), (void*)value);
	}

	inline static int32_t get_offset_of_isFullTypeNameSetExplicit_12() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isFullTypeNameSetExplicit_12)); }
	inline bool get_isFullTypeNameSetExplicit_12() const { return ___isFullTypeNameSetExplicit_12; }
	inline bool* get_address_of_isFullTypeNameSetExplicit_12() { return &___isFullTypeNameSetExplicit_12; }
	inline void set_isFullTypeNameSetExplicit_12(bool value)
	{
		___isFullTypeNameSetExplicit_12 = value;
	}

	inline static int32_t get_offset_of_isAssemblyNameSetExplicit_13() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isAssemblyNameSetExplicit_13)); }
	inline bool get_isAssemblyNameSetExplicit_13() const { return ___isAssemblyNameSetExplicit_13; }
	inline bool* get_address_of_isAssemblyNameSetExplicit_13() { return &___isAssemblyNameSetExplicit_13; }
	inline void set_isAssemblyNameSetExplicit_13(bool value)
	{
		___isAssemblyNameSetExplicit_13 = value;
	}

	inline static int32_t get_offset_of_requireSameTokenInPartialTrust_14() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___requireSameTokenInPartialTrust_14)); }
	inline bool get_requireSameTokenInPartialTrust_14() const { return ___requireSameTokenInPartialTrust_14; }
	inline bool* get_address_of_requireSameTokenInPartialTrust_14() { return &___requireSameTokenInPartialTrust_14; }
	inline void set_requireSameTokenInPartialTrust_14(bool value)
	{
		___requireSameTokenInPartialTrust_14 = value;
	}
};


// System.Collections.SortedList
struct SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.SortedList::keys
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___keys_0;
	// System.Object[] System.Collections.SortedList::values
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___values_1;
	// System.Int32 System.Collections.SortedList::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.SortedList::version
	int32_t ___version_3;
	// System.Collections.IComparer System.Collections.SortedList::comparer
	RuntimeObject* ___comparer_4;

public:
	inline static int32_t get_offset_of_keys_0() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ___keys_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_keys_0() const { return ___keys_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_keys_0() { return &___keys_0; }
	inline void set_keys_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___keys_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_0), (void*)value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ___values_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_values_1() const { return ___values_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_comparer_4() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ___comparer_4)); }
	inline RuntimeObject* get_comparer_4() const { return ___comparer_4; }
	inline RuntimeObject** get_address_of_comparer_4() { return &___comparer_4; }
	inline void set_comparer_4(RuntimeObject* value)
	{
		___comparer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_4), (void*)value);
	}
};

struct SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165_StaticFields
{
public:
	// System.Object[] System.Collections.SortedList::emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___emptyArray_5;

public:
	inline static int32_t get_offset_of_emptyArray_5() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165_StaticFields, ___emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_emptyArray_5() const { return ___emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_emptyArray_5() { return &___emptyArray_5; }
	inline void set_emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyArray_5), (void*)value);
	}
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


// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069  : public RuntimeObject
{
public:

public:
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

// System.Threading.Timer/Scheduler
struct Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Threading.Timer/Scheduler::list
	SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * ___list_1;
	// System.Threading.ManualResetEvent System.Threading.Timer/Scheduler::changed
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___changed_2;

public:
	inline static int32_t get_offset_of_list_1() { return static_cast<int32_t>(offsetof(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8, ___list_1)); }
	inline SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * get_list_1() const { return ___list_1; }
	inline SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 ** get_address_of_list_1() { return &___list_1; }
	inline void set_list_1(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * value)
	{
		___list_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_1), (void*)value);
	}

	inline static int32_t get_offset_of_changed_2() { return static_cast<int32_t>(offsetof(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8, ___changed_2)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_changed_2() const { return ___changed_2; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_changed_2() { return &___changed_2; }
	inline void set_changed_2(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___changed_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___changed_2), (void*)value);
	}
};

struct Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_StaticFields
{
public:
	// System.Threading.Timer/Scheduler System.Threading.Timer/Scheduler::instance
	Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_StaticFields, ___instance_0)); }
	inline Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * get_instance_0() const { return ___instance_0; }
	inline Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_0), (void*)value);
	}
};


// System.Threading.Timer/TimerComparer
struct TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B  : public RuntimeObject
{
public:

public:
};


// System.TypeNames/ATypeName
struct ATypeName_t19F245ED1619C78770F92C899C4FE364DBF30861  : public RuntimeObject
{
public:

public:
};


// Microsoft.Win32.Win32Native/WIN32_FIND_DATA
struct WIN32_FIND_DATA_tE88493B22E1CDD2E595CA4F800949555399AB3C7  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.Win32.Win32Native/WIN32_FIND_DATA::dwFileAttributes
	int32_t ___dwFileAttributes_0;
	// System.String Microsoft.Win32.Win32Native/WIN32_FIND_DATA::cFileName
	String_t* ___cFileName_1;

public:
	inline static int32_t get_offset_of_dwFileAttributes_0() { return static_cast<int32_t>(offsetof(WIN32_FIND_DATA_tE88493B22E1CDD2E595CA4F800949555399AB3C7, ___dwFileAttributes_0)); }
	inline int32_t get_dwFileAttributes_0() const { return ___dwFileAttributes_0; }
	inline int32_t* get_address_of_dwFileAttributes_0() { return &___dwFileAttributes_0; }
	inline void set_dwFileAttributes_0(int32_t value)
	{
		___dwFileAttributes_0 = value;
	}

	inline static int32_t get_offset_of_cFileName_1() { return static_cast<int32_t>(offsetof(WIN32_FIND_DATA_tE88493B22E1CDD2E595CA4F800949555399AB3C7, ___cFileName_1)); }
	inline String_t* get_cFileName_1() const { return ___cFileName_1; }
	inline String_t** get_address_of_cFileName_1() { return &___cFileName_1; }
	inline void set_cFileName_1(String_t* value)
	{
		___cFileName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cFileName_1), (void*)value);
	}
};


// System.IO.Stream/SynchronousAsyncResult/<>c
struct U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB_StaticFields
{
public:
	// System.IO.Stream/SynchronousAsyncResult/<>c System.IO.Stream/SynchronousAsyncResult/<>c::<>9
	U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB * ___U3CU3E9_0;
	// System.Func`1<System.Threading.ManualResetEvent> System.IO.Stream/SynchronousAsyncResult/<>c::<>9__12_0
	Func_1_t5676838A0CF4B34BFAE91E1902234AA2C5C4BE05 * ___U3CU3E9__12_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB_StaticFields, ___U3CU3E9__12_0_1)); }
	inline Func_1_t5676838A0CF4B34BFAE91E1902234AA2C5C4BE05 * get_U3CU3E9__12_0_1() const { return ___U3CU3E9__12_0_1; }
	inline Func_1_t5676838A0CF4B34BFAE91E1902234AA2C5C4BE05 ** get_address_of_U3CU3E9__12_0_1() { return &___U3CU3E9__12_0_1; }
	inline void set_U3CU3E9__12_0_1(Func_1_t5676838A0CF4B34BFAE91E1902234AA2C5C4BE05 * value)
	{
		___U3CU3E9__12_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_0_1), (void*)value);
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};

// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Text.DecoderNLS
struct DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A  : public Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370
{
public:
	// System.Text.Encoding System.Text.DecoderNLS::m_encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___m_encoding_2;
	// System.Boolean System.Text.DecoderNLS::m_mustFlush
	bool ___m_mustFlush_3;
	// System.Boolean System.Text.DecoderNLS::m_throwOnOverflow
	bool ___m_throwOnOverflow_4;
	// System.Int32 System.Text.DecoderNLS::m_bytesUsed
	int32_t ___m_bytesUsed_5;

public:
	inline static int32_t get_offset_of_m_encoding_2() { return static_cast<int32_t>(offsetof(DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A, ___m_encoding_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_m_encoding_2() const { return ___m_encoding_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_m_encoding_2() { return &___m_encoding_2; }
	inline void set_m_encoding_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___m_encoding_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_encoding_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_mustFlush_3() { return static_cast<int32_t>(offsetof(DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A, ___m_mustFlush_3)); }
	inline bool get_m_mustFlush_3() const { return ___m_mustFlush_3; }
	inline bool* get_address_of_m_mustFlush_3() { return &___m_mustFlush_3; }
	inline void set_m_mustFlush_3(bool value)
	{
		___m_mustFlush_3 = value;
	}

	inline static int32_t get_offset_of_m_throwOnOverflow_4() { return static_cast<int32_t>(offsetof(DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A, ___m_throwOnOverflow_4)); }
	inline bool get_m_throwOnOverflow_4() const { return ___m_throwOnOverflow_4; }
	inline bool* get_address_of_m_throwOnOverflow_4() { return &___m_throwOnOverflow_4; }
	inline void set_m_throwOnOverflow_4(bool value)
	{
		___m_throwOnOverflow_4 = value;
	}

	inline static int32_t get_offset_of_m_bytesUsed_5() { return static_cast<int32_t>(offsetof(DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A, ___m_bytesUsed_5)); }
	inline int32_t get_m_bytesUsed_5() const { return ___m_bytesUsed_5; }
	inline int32_t* get_address_of_m_bytesUsed_5() { return &___m_bytesUsed_5; }
	inline void set_m_bytesUsed_5(int32_t value)
	{
		___m_bytesUsed_5 = value;
	}
};


// System.Text.EncoderNLS
struct EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712  : public Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A
{
public:
	// System.Char System.Text.EncoderNLS::charLeftOver
	Il2CppChar ___charLeftOver_2;
	// System.Text.Encoding System.Text.EncoderNLS::m_encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___m_encoding_3;
	// System.Boolean System.Text.EncoderNLS::m_mustFlush
	bool ___m_mustFlush_4;
	// System.Boolean System.Text.EncoderNLS::m_throwOnOverflow
	bool ___m_throwOnOverflow_5;
	// System.Int32 System.Text.EncoderNLS::m_charsUsed
	int32_t ___m_charsUsed_6;

public:
	inline static int32_t get_offset_of_charLeftOver_2() { return static_cast<int32_t>(offsetof(EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712, ___charLeftOver_2)); }
	inline Il2CppChar get_charLeftOver_2() const { return ___charLeftOver_2; }
	inline Il2CppChar* get_address_of_charLeftOver_2() { return &___charLeftOver_2; }
	inline void set_charLeftOver_2(Il2CppChar value)
	{
		___charLeftOver_2 = value;
	}

	inline static int32_t get_offset_of_m_encoding_3() { return static_cast<int32_t>(offsetof(EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712, ___m_encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_m_encoding_3() const { return ___m_encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_m_encoding_3() { return &___m_encoding_3; }
	inline void set_m_encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___m_encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_mustFlush_4() { return static_cast<int32_t>(offsetof(EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712, ___m_mustFlush_4)); }
	inline bool get_m_mustFlush_4() const { return ___m_mustFlush_4; }
	inline bool* get_address_of_m_mustFlush_4() { return &___m_mustFlush_4; }
	inline void set_m_mustFlush_4(bool value)
	{
		___m_mustFlush_4 = value;
	}

	inline static int32_t get_offset_of_m_throwOnOverflow_5() { return static_cast<int32_t>(offsetof(EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712, ___m_throwOnOverflow_5)); }
	inline bool get_m_throwOnOverflow_5() const { return ___m_throwOnOverflow_5; }
	inline bool* get_address_of_m_throwOnOverflow_5() { return &___m_throwOnOverflow_5; }
	inline void set_m_throwOnOverflow_5(bool value)
	{
		___m_throwOnOverflow_5 = value;
	}

	inline static int32_t get_offset_of_m_charsUsed_6() { return static_cast<int32_t>(offsetof(EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712, ___m_charsUsed_6)); }
	inline int32_t get_m_charsUsed_6() const { return ___m_charsUsed_6; }
	inline int32_t* get_address_of_m_charsUsed_6() { return &___m_charsUsed_6; }
	inline void set_m_charsUsed_6(int32_t value)
	{
		___m_charsUsed_6 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

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

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414  : public CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___internal_thread_6)); }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
	}
};


// System.Threading.Timer
struct Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Threading.TimerCallback System.Threading.Timer::callback
	TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * ___callback_2;
	// System.Object System.Threading.Timer::state
	RuntimeObject * ___state_3;
	// System.Int64 System.Threading.Timer::due_time_ms
	int64_t ___due_time_ms_4;
	// System.Int64 System.Threading.Timer::period_ms
	int64_t ___period_ms_5;
	// System.Int64 System.Threading.Timer::next_run
	int64_t ___next_run_6;
	// System.Boolean System.Threading.Timer::disposed
	bool ___disposed_7;

public:
	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___callback_2)); }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * get_callback_2() const { return ___callback_2; }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_2), (void*)value);
	}

	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___state_3)); }
	inline RuntimeObject * get_state_3() const { return ___state_3; }
	inline RuntimeObject ** get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(RuntimeObject * value)
	{
		___state_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_3), (void*)value);
	}

	inline static int32_t get_offset_of_due_time_ms_4() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___due_time_ms_4)); }
	inline int64_t get_due_time_ms_4() const { return ___due_time_ms_4; }
	inline int64_t* get_address_of_due_time_ms_4() { return &___due_time_ms_4; }
	inline void set_due_time_ms_4(int64_t value)
	{
		___due_time_ms_4 = value;
	}

	inline static int32_t get_offset_of_period_ms_5() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___period_ms_5)); }
	inline int64_t get_period_ms_5() const { return ___period_ms_5; }
	inline int64_t* get_address_of_period_ms_5() { return &___period_ms_5; }
	inline void set_period_ms_5(int64_t value)
	{
		___period_ms_5 = value;
	}

	inline static int32_t get_offset_of_next_run_6() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___next_run_6)); }
	inline int64_t get_next_run_6() const { return ___next_run_6; }
	inline int64_t* get_address_of_next_run_6() { return &___next_run_6; }
	inline void set_next_run_6(int64_t value)
	{
		___next_run_6 = value;
	}

	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}
};

struct Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_StaticFields
{
public:
	// System.Threading.Timer/Scheduler System.Threading.Timer::scheduler
	Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * ___scheduler_1;

public:
	inline static int32_t get_offset_of_scheduler_1() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_StaticFields, ___scheduler_1)); }
	inline Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * get_scheduler_1() const { return ___scheduler_1; }
	inline Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 ** get_address_of_scheduler_1() { return &___scheduler_1; }
	inline void set_scheduler_1(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * value)
	{
		___scheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scheduler_1), (void*)value);
	}
};


// System.Text.UTF32Encoding
struct UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014  : public Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827
{
public:
	// System.Boolean System.Text.UTF32Encoding::emitUTF32ByteOrderMark
	bool ___emitUTF32ByteOrderMark_62;
	// System.Boolean System.Text.UTF32Encoding::isThrowException
	bool ___isThrowException_63;
	// System.Boolean System.Text.UTF32Encoding::bigEndian
	bool ___bigEndian_64;

public:
	inline static int32_t get_offset_of_emitUTF32ByteOrderMark_62() { return static_cast<int32_t>(offsetof(UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014, ___emitUTF32ByteOrderMark_62)); }
	inline bool get_emitUTF32ByteOrderMark_62() const { return ___emitUTF32ByteOrderMark_62; }
	inline bool* get_address_of_emitUTF32ByteOrderMark_62() { return &___emitUTF32ByteOrderMark_62; }
	inline void set_emitUTF32ByteOrderMark_62(bool value)
	{
		___emitUTF32ByteOrderMark_62 = value;
	}

	inline static int32_t get_offset_of_isThrowException_63() { return static_cast<int32_t>(offsetof(UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014, ___isThrowException_63)); }
	inline bool get_isThrowException_63() const { return ___isThrowException_63; }
	inline bool* get_address_of_isThrowException_63() { return &___isThrowException_63; }
	inline void set_isThrowException_63(bool value)
	{
		___isThrowException_63 = value;
	}

	inline static int32_t get_offset_of_bigEndian_64() { return static_cast<int32_t>(offsetof(UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014, ___bigEndian_64)); }
	inline bool get_bigEndian_64() const { return ___bigEndian_64; }
	inline bool* get_address_of_bigEndian_64() { return &___bigEndian_64; }
	inline void set_bigEndian_64(bool value)
	{
		___bigEndian_64 = value;
	}
};


// System.Text.UTF7Encoding
struct UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076  : public Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827
{
public:
	// System.Byte[] System.Text.UTF7Encoding::base64Bytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___base64Bytes_62;
	// System.SByte[] System.Text.UTF7Encoding::base64Values
	SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* ___base64Values_63;
	// System.Boolean[] System.Text.UTF7Encoding::directEncode
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___directEncode_64;
	// System.Boolean System.Text.UTF7Encoding::m_allowOptionals
	bool ___m_allowOptionals_65;

public:
	inline static int32_t get_offset_of_base64Bytes_62() { return static_cast<int32_t>(offsetof(UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076, ___base64Bytes_62)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_base64Bytes_62() const { return ___base64Bytes_62; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_base64Bytes_62() { return &___base64Bytes_62; }
	inline void set_base64Bytes_62(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___base64Bytes_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___base64Bytes_62), (void*)value);
	}

	inline static int32_t get_offset_of_base64Values_63() { return static_cast<int32_t>(offsetof(UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076, ___base64Values_63)); }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* get_base64Values_63() const { return ___base64Values_63; }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7** get_address_of_base64Values_63() { return &___base64Values_63; }
	inline void set_base64Values_63(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* value)
	{
		___base64Values_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___base64Values_63), (void*)value);
	}

	inline static int32_t get_offset_of_directEncode_64() { return static_cast<int32_t>(offsetof(UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076, ___directEncode_64)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_directEncode_64() const { return ___directEncode_64; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_directEncode_64() { return &___directEncode_64; }
	inline void set_directEncode_64(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___directEncode_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___directEncode_64), (void*)value);
	}

	inline static int32_t get_offset_of_m_allowOptionals_65() { return static_cast<int32_t>(offsetof(UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076, ___m_allowOptionals_65)); }
	inline bool get_m_allowOptionals_65() const { return ___m_allowOptionals_65; }
	inline bool* get_address_of_m_allowOptionals_65() { return &___m_allowOptionals_65; }
	inline void set_m_allowOptionals_65(bool value)
	{
		___m_allowOptionals_65 = value;
	}
};


// System.Text.UTF8Encoding
struct UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282  : public Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827
{
public:
	// System.Boolean System.Text.UTF8Encoding::emitUTF8Identifier
	bool ___emitUTF8Identifier_62;
	// System.Boolean System.Text.UTF8Encoding::isThrowException
	bool ___isThrowException_63;

public:
	inline static int32_t get_offset_of_emitUTF8Identifier_62() { return static_cast<int32_t>(offsetof(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282, ___emitUTF8Identifier_62)); }
	inline bool get_emitUTF8Identifier_62() const { return ___emitUTF8Identifier_62; }
	inline bool* get_address_of_emitUTF8Identifier_62() { return &___emitUTF8Identifier_62; }
	inline void set_emitUTF8Identifier_62(bool value)
	{
		___emitUTF8Identifier_62 = value;
	}

	inline static int32_t get_offset_of_isThrowException_63() { return static_cast<int32_t>(offsetof(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282, ___isThrowException_63)); }
	inline bool get_isThrowException_63() const { return ___isThrowException_63; }
	inline bool* get_address_of_isThrowException_63() { return &___isThrowException_63; }
	inline void set_isThrowException_63(bool value)
	{
		___isThrowException_63 = value;
	}
};


// System.Text.UnicodeEncoding
struct UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68  : public Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827
{
public:
	// System.Boolean System.Text.UnicodeEncoding::isThrowException
	bool ___isThrowException_62;
	// System.Boolean System.Text.UnicodeEncoding::bigEndian
	bool ___bigEndian_63;
	// System.Boolean System.Text.UnicodeEncoding::byteOrderMark
	bool ___byteOrderMark_64;

public:
	inline static int32_t get_offset_of_isThrowException_62() { return static_cast<int32_t>(offsetof(UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68, ___isThrowException_62)); }
	inline bool get_isThrowException_62() const { return ___isThrowException_62; }
	inline bool* get_address_of_isThrowException_62() { return &___isThrowException_62; }
	inline void set_isThrowException_62(bool value)
	{
		___isThrowException_62 = value;
	}

	inline static int32_t get_offset_of_bigEndian_63() { return static_cast<int32_t>(offsetof(UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68, ___bigEndian_63)); }
	inline bool get_bigEndian_63() const { return ___bigEndian_63; }
	inline bool* get_address_of_bigEndian_63() { return &___bigEndian_63; }
	inline void set_bigEndian_63(bool value)
	{
		___bigEndian_63 = value;
	}

	inline static int32_t get_offset_of_byteOrderMark_64() { return static_cast<int32_t>(offsetof(UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68, ___byteOrderMark_64)); }
	inline bool get_byteOrderMark_64() const { return ___byteOrderMark_64; }
	inline bool* get_address_of_byteOrderMark_64() { return &___byteOrderMark_64; }
	inline void set_byteOrderMark_64(bool value)
	{
		___byteOrderMark_64 = value;
	}
};

struct UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_StaticFields
{
public:
	// System.UInt64 System.Text.UnicodeEncoding::highLowPatternMask
	uint64_t ___highLowPatternMask_65;

public:
	inline static int32_t get_offset_of_highLowPatternMask_65() { return static_cast<int32_t>(offsetof(UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_StaticFields, ___highLowPatternMask_65)); }
	inline uint64_t get_highLowPatternMask_65() const { return ___highLowPatternMask_65; }
	inline uint64_t* get_address_of_highLowPatternMask_65() { return &___highLowPatternMask_65; }
	inline void set_highLowPatternMask_65(uint64_t value)
	{
		___highLowPatternMask_65 = value;
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


// System.TypeIdentifiers/Display
struct Display_tB07FE33B5E37AC259B2FCC8EC820AC5CEDEAC41E  : public ATypeName_t19F245ED1619C78770F92C899C4FE364DBF30861
{
public:
	// System.String System.TypeIdentifiers/Display::displayName
	String_t* ___displayName_0;
	// System.String System.TypeIdentifiers/Display::internal_name
	String_t* ___internal_name_1;

public:
	inline static int32_t get_offset_of_displayName_0() { return static_cast<int32_t>(offsetof(Display_tB07FE33B5E37AC259B2FCC8EC820AC5CEDEAC41E, ___displayName_0)); }
	inline String_t* get_displayName_0() const { return ___displayName_0; }
	inline String_t** get_address_of_displayName_0() { return &___displayName_0; }
	inline void set_displayName_0(String_t* value)
	{
		___displayName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayName_0), (void*)value);
	}

	inline static int32_t get_offset_of_internal_name_1() { return static_cast<int32_t>(offsetof(Display_tB07FE33B5E37AC259B2FCC8EC820AC5CEDEAC41E, ___internal_name_1)); }
	inline String_t* get_internal_name_1() const { return ___internal_name_1; }
	inline String_t** get_address_of_internal_name_1() { return &___internal_name_1; }
	inline void set_internal_name_1(String_t* value)
	{
		___internal_name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_name_1), (void*)value);
	}
};


// System.Text.UTF7Encoding/DecoderUTF7Fallback
struct DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8  : public DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D
{
public:

public:
};


// System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer
struct DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A  : public DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B
{
public:
	// System.Char System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::cFallback
	Il2CppChar ___cFallback_2;
	// System.Int32 System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::iCount
	int32_t ___iCount_3;
	// System.Int32 System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::iSize
	int32_t ___iSize_4;

public:
	inline static int32_t get_offset_of_cFallback_2() { return static_cast<int32_t>(offsetof(DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A, ___cFallback_2)); }
	inline Il2CppChar get_cFallback_2() const { return ___cFallback_2; }
	inline Il2CppChar* get_address_of_cFallback_2() { return &___cFallback_2; }
	inline void set_cFallback_2(Il2CppChar value)
	{
		___cFallback_2 = value;
	}

	inline static int32_t get_offset_of_iCount_3() { return static_cast<int32_t>(offsetof(DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A, ___iCount_3)); }
	inline int32_t get_iCount_3() const { return ___iCount_3; }
	inline int32_t* get_address_of_iCount_3() { return &___iCount_3; }
	inline void set_iCount_3(int32_t value)
	{
		___iCount_3 = value;
	}

	inline static int32_t get_offset_of_iSize_4() { return static_cast<int32_t>(offsetof(DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A, ___iSize_4)); }
	inline int32_t get_iSize_4() const { return ___iSize_4; }
	inline int32_t* get_address_of_iSize_4() { return &___iSize_4; }
	inline void set_iSize_4(int32_t value)
	{
		___iSize_4 = value;
	}
};


// Mono.Security.Uri/UriScheme
struct UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB 
{
public:
	// System.String Mono.Security.Uri/UriScheme::scheme
	String_t* ___scheme_0;
	// System.String Mono.Security.Uri/UriScheme::delimiter
	String_t* ___delimiter_1;
	// System.Int32 Mono.Security.Uri/UriScheme::defaultPort
	int32_t ___defaultPort_2;

public:
	inline static int32_t get_offset_of_scheme_0() { return static_cast<int32_t>(offsetof(UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB, ___scheme_0)); }
	inline String_t* get_scheme_0() const { return ___scheme_0; }
	inline String_t** get_address_of_scheme_0() { return &___scheme_0; }
	inline void set_scheme_0(String_t* value)
	{
		___scheme_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scheme_0), (void*)value);
	}

	inline static int32_t get_offset_of_delimiter_1() { return static_cast<int32_t>(offsetof(UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB, ___delimiter_1)); }
	inline String_t* get_delimiter_1() const { return ___delimiter_1; }
	inline String_t** get_address_of_delimiter_1() { return &___delimiter_1; }
	inline void set_delimiter_1(String_t* value)
	{
		___delimiter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delimiter_1), (void*)value);
	}

	inline static int32_t get_offset_of_defaultPort_2() { return static_cast<int32_t>(offsetof(UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB, ___defaultPort_2)); }
	inline int32_t get_defaultPort_2() const { return ___defaultPort_2; }
	inline int32_t* get_address_of_defaultPort_2() { return &___defaultPort_2; }
	inline void set_defaultPort_2(int32_t value)
	{
		___defaultPort_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Mono.Security.Uri/UriScheme
struct UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB_marshaled_pinvoke
{
	char* ___scheme_0;
	char* ___delimiter_1;
	int32_t ___defaultPort_2;
};
// Native definition for COM marshalling of Mono.Security.Uri/UriScheme
struct UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB_marshaled_com
{
	Il2CppChar* ___scheme_0;
	Il2CppChar* ___delimiter_1;
	int32_t ___defaultPort_2;
};

// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter
struct YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE 
{
public:
	union
	{
		struct
		{
		};
		uint8_t YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE__padding[1];
	};

public:
};

struct YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_StaticFields
{
public:
	// System.Threading.WaitCallback System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::s_waitCallbackRunAction
	WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * ___s_waitCallbackRunAction_0;
	// System.Threading.SendOrPostCallback System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::s_sendOrPostCallbackRunAction
	SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * ___s_sendOrPostCallbackRunAction_1;

public:
	inline static int32_t get_offset_of_s_waitCallbackRunAction_0() { return static_cast<int32_t>(offsetof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_StaticFields, ___s_waitCallbackRunAction_0)); }
	inline WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * get_s_waitCallbackRunAction_0() const { return ___s_waitCallbackRunAction_0; }
	inline WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 ** get_address_of_s_waitCallbackRunAction_0() { return &___s_waitCallbackRunAction_0; }
	inline void set_s_waitCallbackRunAction_0(WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * value)
	{
		___s_waitCallbackRunAction_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_waitCallbackRunAction_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_sendOrPostCallbackRunAction_1() { return static_cast<int32_t>(offsetof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_StaticFields, ___s_sendOrPostCallbackRunAction_1)); }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * get_s_sendOrPostCallbackRunAction_1() const { return ___s_sendOrPostCallbackRunAction_1; }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C ** get_address_of_s_sendOrPostCallbackRunAction_1() { return &___s_sendOrPostCallbackRunAction_1; }
	inline void set_s_sendOrPostCallbackRunAction_1(SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * value)
	{
		___s_sendOrPostCallbackRunAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_sendOrPostCallbackRunAction_1), (void*)value);
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Runtime.Serialization.StreamingContextStates
struct StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.Threading.Tasks.TaskContinuationOptions
struct TaskContinuationOptions_t9FC13DFA1FFAFD07FE9A19491D1DBEB48BFA8399 
{
public:
	// System.Int32 System.Threading.Tasks.TaskContinuationOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskContinuationOptions_t9FC13DFA1FFAFD07FE9A19491D1DBEB48BFA8399, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.TaskCreationOptions
struct TaskCreationOptions_t469019F1B0F93FA60337952E265311E8048D2112 
{
public:
	// System.Int32 System.Threading.Tasks.TaskCreationOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskCreationOptions_t469019F1B0F93FA60337952E265311E8048D2112, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskScheduler::m_taskSchedulerId
	int32_t ___m_taskSchedulerId_3;

public:
	inline static int32_t get_offset_of_m_taskSchedulerId_3() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D, ___m_taskSchedulerId_3)); }
	inline int32_t get_m_taskSchedulerId_3() const { return ___m_taskSchedulerId_3; }
	inline int32_t* get_address_of_m_taskSchedulerId_3() { return &___m_taskSchedulerId_3; }
	inline void set_m_taskSchedulerId_3(int32_t value)
	{
		___m_taskSchedulerId_3 = value;
	}
};

struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields
{
public:
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object> System.Threading.Tasks.TaskScheduler::s_activeTaskSchedulers
	ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 * ___s_activeTaskSchedulers_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::s_defaultTaskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___s_defaultTaskScheduler_1;
	// System.Int32 System.Threading.Tasks.TaskScheduler::s_taskSchedulerIdCounter
	int32_t ___s_taskSchedulerIdCounter_2;
	// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> System.Threading.Tasks.TaskScheduler::_unobservedTaskException
	EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A * ____unobservedTaskException_4;
	// System.Object System.Threading.Tasks.TaskScheduler::_unobservedTaskExceptionLockObject
	RuntimeObject * ____unobservedTaskExceptionLockObject_5;

public:
	inline static int32_t get_offset_of_s_activeTaskSchedulers_0() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ___s_activeTaskSchedulers_0)); }
	inline ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 * get_s_activeTaskSchedulers_0() const { return ___s_activeTaskSchedulers_0; }
	inline ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 ** get_address_of_s_activeTaskSchedulers_0() { return &___s_activeTaskSchedulers_0; }
	inline void set_s_activeTaskSchedulers_0(ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 * value)
	{
		___s_activeTaskSchedulers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTaskSchedulers_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_defaultTaskScheduler_1() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ___s_defaultTaskScheduler_1)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_s_defaultTaskScheduler_1() const { return ___s_defaultTaskScheduler_1; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_s_defaultTaskScheduler_1() { return &___s_defaultTaskScheduler_1; }
	inline void set_s_defaultTaskScheduler_1(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___s_defaultTaskScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultTaskScheduler_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskSchedulerIdCounter_2() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ___s_taskSchedulerIdCounter_2)); }
	inline int32_t get_s_taskSchedulerIdCounter_2() const { return ___s_taskSchedulerIdCounter_2; }
	inline int32_t* get_address_of_s_taskSchedulerIdCounter_2() { return &___s_taskSchedulerIdCounter_2; }
	inline void set_s_taskSchedulerIdCounter_2(int32_t value)
	{
		___s_taskSchedulerIdCounter_2 = value;
	}

	inline static int32_t get_offset_of__unobservedTaskException_4() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ____unobservedTaskException_4)); }
	inline EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A * get__unobservedTaskException_4() const { return ____unobservedTaskException_4; }
	inline EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A ** get_address_of__unobservedTaskException_4() { return &____unobservedTaskException_4; }
	inline void set__unobservedTaskException_4(EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A * value)
	{
		____unobservedTaskException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unobservedTaskException_4), (void*)value);
	}

	inline static int32_t get_offset_of__unobservedTaskExceptionLockObject_5() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ____unobservedTaskExceptionLockObject_5)); }
	inline RuntimeObject * get__unobservedTaskExceptionLockObject_5() const { return ____unobservedTaskExceptionLockObject_5; }
	inline RuntimeObject ** get_address_of__unobservedTaskExceptionLockObject_5() { return &____unobservedTaskExceptionLockObject_5; }
	inline void set__unobservedTaskExceptionLockObject_5(RuntimeObject * value)
	{
		____unobservedTaskExceptionLockObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unobservedTaskExceptionLockObject_5), (void*)value);
	}
};


// System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.TypeSpec/DisplayNameFormat
struct DisplayNameFormat_tF42BE9AF429E47348F6DF90A17947869EF4D0077 
{
public:
	// System.Int32 System.TypeSpec/DisplayNameFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisplayNameFormat_tF42BE9AF429E47348F6DF90A17947869EF4D0077, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Text.UTF32Encoding/UTF32Decoder
struct UTF32Decoder_t38867B08AD03138702C713129B79529EC4528DB7  : public DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A
{
public:
	// System.Int32 System.Text.UTF32Encoding/UTF32Decoder::iChar
	int32_t ___iChar_6;
	// System.Int32 System.Text.UTF32Encoding/UTF32Decoder::readByteCount
	int32_t ___readByteCount_7;

public:
	inline static int32_t get_offset_of_iChar_6() { return static_cast<int32_t>(offsetof(UTF32Decoder_t38867B08AD03138702C713129B79529EC4528DB7, ___iChar_6)); }
	inline int32_t get_iChar_6() const { return ___iChar_6; }
	inline int32_t* get_address_of_iChar_6() { return &___iChar_6; }
	inline void set_iChar_6(int32_t value)
	{
		___iChar_6 = value;
	}

	inline static int32_t get_offset_of_readByteCount_7() { return static_cast<int32_t>(offsetof(UTF32Decoder_t38867B08AD03138702C713129B79529EC4528DB7, ___readByteCount_7)); }
	inline int32_t get_readByteCount_7() const { return ___readByteCount_7; }
	inline int32_t* get_address_of_readByteCount_7() { return &___readByteCount_7; }
	inline void set_readByteCount_7(int32_t value)
	{
		___readByteCount_7 = value;
	}
};


// System.Text.UTF7Encoding/Decoder
struct Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9  : public DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A
{
public:
	// System.Int32 System.Text.UTF7Encoding/Decoder::bits
	int32_t ___bits_6;
	// System.Int32 System.Text.UTF7Encoding/Decoder::bitCount
	int32_t ___bitCount_7;
	// System.Boolean System.Text.UTF7Encoding/Decoder::firstByte
	bool ___firstByte_8;

public:
	inline static int32_t get_offset_of_bits_6() { return static_cast<int32_t>(offsetof(Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9, ___bits_6)); }
	inline int32_t get_bits_6() const { return ___bits_6; }
	inline int32_t* get_address_of_bits_6() { return &___bits_6; }
	inline void set_bits_6(int32_t value)
	{
		___bits_6 = value;
	}

	inline static int32_t get_offset_of_bitCount_7() { return static_cast<int32_t>(offsetof(Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9, ___bitCount_7)); }
	inline int32_t get_bitCount_7() const { return ___bitCount_7; }
	inline int32_t* get_address_of_bitCount_7() { return &___bitCount_7; }
	inline void set_bitCount_7(int32_t value)
	{
		___bitCount_7 = value;
	}

	inline static int32_t get_offset_of_firstByte_8() { return static_cast<int32_t>(offsetof(Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9, ___firstByte_8)); }
	inline bool get_firstByte_8() const { return ___firstByte_8; }
	inline bool* get_address_of_firstByte_8() { return &___firstByte_8; }
	inline void set_firstByte_8(bool value)
	{
		___firstByte_8 = value;
	}
};


// System.Text.UTF7Encoding/Encoder
struct Encoder_tF895184EA91019AA3995A8547FD56A3E0D16D1B4  : public EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712
{
public:
	// System.Int32 System.Text.UTF7Encoding/Encoder::bits
	int32_t ___bits_7;
	// System.Int32 System.Text.UTF7Encoding/Encoder::bitCount
	int32_t ___bitCount_8;

public:
	inline static int32_t get_offset_of_bits_7() { return static_cast<int32_t>(offsetof(Encoder_tF895184EA91019AA3995A8547FD56A3E0D16D1B4, ___bits_7)); }
	inline int32_t get_bits_7() const { return ___bits_7; }
	inline int32_t* get_address_of_bits_7() { return &___bits_7; }
	inline void set_bits_7(int32_t value)
	{
		___bits_7 = value;
	}

	inline static int32_t get_offset_of_bitCount_8() { return static_cast<int32_t>(offsetof(Encoder_tF895184EA91019AA3995A8547FD56A3E0D16D1B4, ___bitCount_8)); }
	inline int32_t get_bitCount_8() const { return ___bitCount_8; }
	inline int32_t* get_address_of_bitCount_8() { return &___bitCount_8; }
	inline void set_bitCount_8(int32_t value)
	{
		___bitCount_8 = value;
	}
};


// System.Text.UTF8Encoding/UTF8Decoder
struct UTF8Decoder_tD2359F0F52206B911EBC3222E627191C829F4C65  : public DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A
{
public:
	// System.Int32 System.Text.UTF8Encoding/UTF8Decoder::bits
	int32_t ___bits_6;

public:
	inline static int32_t get_offset_of_bits_6() { return static_cast<int32_t>(offsetof(UTF8Decoder_tD2359F0F52206B911EBC3222E627191C829F4C65, ___bits_6)); }
	inline int32_t get_bits_6() const { return ___bits_6; }
	inline int32_t* get_address_of_bits_6() { return &___bits_6; }
	inline void set_bits_6(int32_t value)
	{
		___bits_6 = value;
	}
};


// System.Text.UTF8Encoding/UTF8Encoder
struct UTF8Encoder_t3408DBF93D79A981F50954F660E33BA13FE29FD3  : public EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712
{
public:
	// System.Int32 System.Text.UTF8Encoding/UTF8Encoder::surrogateChar
	int32_t ___surrogateChar_7;

public:
	inline static int32_t get_offset_of_surrogateChar_7() { return static_cast<int32_t>(offsetof(UTF8Encoder_t3408DBF93D79A981F50954F660E33BA13FE29FD3, ___surrogateChar_7)); }
	inline int32_t get_surrogateChar_7() const { return ___surrogateChar_7; }
	inline int32_t* get_address_of_surrogateChar_7() { return &___surrogateChar_7; }
	inline void set_surrogateChar_7(int32_t value)
	{
		___surrogateChar_7 = value;
	}
};


// System.Text.UnicodeEncoding/Decoder
struct Decoder_tC3DC16951ED8FCF98278FC7F0804070A9C218109  : public DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A
{
public:
	// System.Int32 System.Text.UnicodeEncoding/Decoder::lastByte
	int32_t ___lastByte_6;
	// System.Char System.Text.UnicodeEncoding/Decoder::lastChar
	Il2CppChar ___lastChar_7;

public:
	inline static int32_t get_offset_of_lastByte_6() { return static_cast<int32_t>(offsetof(Decoder_tC3DC16951ED8FCF98278FC7F0804070A9C218109, ___lastByte_6)); }
	inline int32_t get_lastByte_6() const { return ___lastByte_6; }
	inline int32_t* get_address_of_lastByte_6() { return &___lastByte_6; }
	inline void set_lastByte_6(int32_t value)
	{
		___lastByte_6 = value;
	}

	inline static int32_t get_offset_of_lastChar_7() { return static_cast<int32_t>(offsetof(Decoder_tC3DC16951ED8FCF98278FC7F0804070A9C218109, ___lastChar_7)); }
	inline Il2CppChar get_lastChar_7() const { return ___lastChar_7; }
	inline Il2CppChar* get_address_of_lastChar_7() { return &___lastChar_7; }
	inline void set_lastChar_7(Il2CppChar value)
	{
		___lastChar_7 = value;
	}
};


// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C  : public WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842
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

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B  : public RuntimeObject
{
public:
	// System.Threading.CancellationToken System.Threading.Tasks.TaskFactory::m_defaultCancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___m_defaultCancellationToken_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory::m_defaultScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_defaultScheduler_1;
	// System.Threading.Tasks.TaskCreationOptions System.Threading.Tasks.TaskFactory::m_defaultCreationOptions
	int32_t ___m_defaultCreationOptions_2;
	// System.Threading.Tasks.TaskContinuationOptions System.Threading.Tasks.TaskFactory::m_defaultContinuationOptions
	int32_t ___m_defaultContinuationOptions_3;

public:
	inline static int32_t get_offset_of_m_defaultCancellationToken_0() { return static_cast<int32_t>(offsetof(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B, ___m_defaultCancellationToken_0)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_m_defaultCancellationToken_0() const { return ___m_defaultCancellationToken_0; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_m_defaultCancellationToken_0() { return &___m_defaultCancellationToken_0; }
	inline void set_m_defaultCancellationToken_0(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___m_defaultCancellationToken_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_defaultCancellationToken_0))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_defaultScheduler_1() { return static_cast<int32_t>(offsetof(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B, ___m_defaultScheduler_1)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_defaultScheduler_1() const { return ___m_defaultScheduler_1; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_defaultScheduler_1() { return &___m_defaultScheduler_1; }
	inline void set_m_defaultScheduler_1(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_defaultScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultScheduler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultCreationOptions_2() { return static_cast<int32_t>(offsetof(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B, ___m_defaultCreationOptions_2)); }
	inline int32_t get_m_defaultCreationOptions_2() const { return ___m_defaultCreationOptions_2; }
	inline int32_t* get_address_of_m_defaultCreationOptions_2() { return &___m_defaultCreationOptions_2; }
	inline void set_m_defaultCreationOptions_2(int32_t value)
	{
		___m_defaultCreationOptions_2 = value;
	}

	inline static int32_t get_offset_of_m_defaultContinuationOptions_3() { return static_cast<int32_t>(offsetof(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B, ___m_defaultContinuationOptions_3)); }
	inline int32_t get_m_defaultContinuationOptions_3() const { return ___m_defaultContinuationOptions_3; }
	inline int32_t* get_address_of_m_defaultContinuationOptions_3() { return &___m_defaultContinuationOptions_3; }
	inline void set_m_defaultContinuationOptions_3(int32_t value)
	{
		___m_defaultContinuationOptions_3 = value;
	}
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA  : public EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C
{
public:

public:
};


// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C  : public MulticastDelegate_t
{
public:

public:
};


// System.Runtime.Serialization.SerializationException
struct SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};

struct SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92_StaticFields
{
public:
	// System.String System.Runtime.Serialization.SerializationException::_nullMessage
	String_t* ____nullMessage_17;

public:
	inline static int32_t get_offset_of__nullMessage_17() { return static_cast<int32_t>(offsetof(SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92_StaticFields, ____nullMessage_17)); }
	inline String_t* get__nullMessage_17() const { return ____nullMessage_17; }
	inline String_t** get_address_of__nullMessage_17() { return &____nullMessage_17; }
	inline void set__nullMessage_17(String_t* value)
	{
		____nullMessage_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nullMessage_17), (void*)value);
	}
};


// System.Threading.ThreadStart
struct ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687  : public MulticastDelegate_t
{
public:

public:
};


// System.Threading.TimerCallback
struct TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814  : public MulticastDelegate_t
{
public:

public:
};


// System.Threading.WaitCallback
struct WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319  : public MulticastDelegate_t
{
public:

public:
};


// System.Console/WindowsConsole/WindowsCancelHandler
struct WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_mE316E0DB641CFB093F0309D091D773047F81B2CC_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m7A81900F3492DE11874B0EA9A0E5454F897E3079_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___value0, const RuntimeMethod* method);

// System.Void System.Threading.Timer/Scheduler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler__ctor_mFA8C77435650B38315E392A0D1C66EC7DC974E82 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850 (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * __this, bool ___initialState0, const RuntimeMethod* method);
// System.Void System.Threading.Timer/TimerComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerComparer__ctor_mB4F0DB5CDEB7A6E93F59950E0FB1D19BB4BBA0B4 (TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B * __this, const RuntimeMethod* method);
// System.Void System.Collections.SortedList::.ctor(System.Collections.IComparer,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList__ctor_m0E1B0737647DC8D8B3E9FAD5F81168878E92E9F4 (SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * __this, RuntimeObject* ___comparer0, int32_t ___capacity1, const RuntimeMethod* method);
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * ___start0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::set_IsBackground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_IsBackground_m8CAEC157A236A574FE83FDB22D693AB1681B01B0 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Start()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Int32 System.Threading.Timer/Scheduler::InternalRemove(System.Threading.Timer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scheduler_InternalRemove_m3154F260BA70D6D62BB855662FD4E59EBF25C538 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___timer0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Threading.Timer/Scheduler::Add(System.Threading.Timer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler_Add_m97B241DC232711E7C7D9057DA0BF7D657808D981 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___timer0, const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38 (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * __this, const RuntimeMethod* method);
// System.Int32 System.Threading.Timer/Scheduler::FindByDueTime(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scheduler_FindByDueTime_m97EC1ECDEE06ABC0ADD1CD8D4C3B6F057680F677 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, int64_t ___nr0, const RuntimeMethod* method);
// System.Void System.Threading.TimerCallback::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerCallback_Invoke_m1318C110BA930390E8F61C8BAAAC8F1CA8776CFD (TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * __this, RuntimeObject * ___state0, const RuntimeMethod* method);
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC (const RuntimeMethod* method);
// System.Void System.Threading.Thread::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_Name_m920049DFD1306F42613F13CF7AD74C03661F4BAE (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Threading.Timer>::.ctor(System.Int32)
inline void List_1__ctor_m883AB85828B7C88FE9A8C7802E93E6CE979EA000 (List_1_t537143C180C9FB69517B6C26205D2AA824591563 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t537143C180C9FB69517B6C26205D2AA824591563 *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.Int64 System.Threading.Timer::GetTimeMonotonic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Timer_GetTimeMonotonic_m085737FA1918F06DE8264E85C1C2B8DFF2B65298 (const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Reset_m535429D7CC172C0B95EB8B7B9126B3F3761E2D30 (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * __this, const RuntimeMethod* method);
// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitCallback__ctor_m50EFFE5096DF1DE733EA9895CEEC8EB6F142D5D5 (WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Threading.ThreadPool::UnsafeQueueUserWorkItem(System.Threading.WaitCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool ThreadPool_UnsafeQueueUserWorkItem_m9B9388DD623D33685D415D639455591D4DD967C6 (WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * ___callBack0, RuntimeObject * ___state1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Threading.Timer>::Add(T)
inline void List_1_Add_mB29575CEA902024C74743A09C2AD6A27C71FA14C (List_1_t537143C180C9FB69517B6C26205D2AA824591563 * __this, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t537143C180C9FB69517B6C26205D2AA824591563 *, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Threading.Timer>::get_Count()
inline int32_t List_1_get_Count_m9F4CBA17931C03FCCABF06CE8F29187F98D1F260_inline (List_1_t537143C180C9FB69517B6C26205D2AA824591563 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t537143C180C9FB69517B6C26205D2AA824591563 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Threading.Timer>::get_Item(System.Int32)
inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * List_1_get_Item_m9C036D14366E9BBB52436252522EDE206DC6EB35_inline (List_1_t537143C180C9FB69517B6C26205D2AA824591563 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * (*) (List_1_t537143C180C9FB69517B6C26205D2AA824591563 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.Threading.Timer>::Clear()
inline void List_1_Clear_mC1A3BC5C09490DE7BD41BBE1BFD81F870F508CC0 (List_1_t537143C180C9FB69517B6C26205D2AA824591563 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t537143C180C9FB69517B6C26205D2AA824591563 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Threading.Timer/Scheduler::ShrinkIfNeeded(System.Collections.Generic.List`1<System.Threading.Timer>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler_ShrinkIfNeeded_m053057191CA310785B2C8EC2E8FB07A7E00E499C (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, List_1_t537143C180C9FB69517B6C26205D2AA824591563 * ___list0, int32_t ___initial1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Threading.Timer>::get_Capacity()
inline int32_t List_1_get_Capacity_mD0C25FAD6973D3D67381859E776ECAE953FDFD6B (List_1_t537143C180C9FB69517B6C26205D2AA824591563 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t537143C180C9FB69517B6C26205D2AA824591563 *, const RuntimeMethod*))List_1_get_Capacity_mE316E0DB641CFB093F0309D091D773047F81B2CC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Threading.Timer>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_mEA0D56662D94226185342D2A0FD7C1860C5FFA7F (List_1_t537143C180C9FB69517B6C26205D2AA824591563 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t537143C180C9FB69517B6C26205D2AA824591563 *, int32_t, const RuntimeMethod*))List_1_set_Capacity_m7A81900F3492DE11874B0EA9A0E5454F897E3079_gshared)(__this, ___value0, method);
}
// System.Void System.TypeNames/ATypeName::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATypeName__ctor_m8F74703C78999B18C60B25DC9E5FAAFA777C48EC (ATypeName_t19F245ED1619C78770F92C899C4FE364DBF30861 * __this, const RuntimeMethod* method);
// System.String System.TypeIdentifiers/Display::GetInternalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Display_GetInternalName_mD79548CF3F783D092209AED9C54C91E81DB87970 (Display_tB07FE33B5E37AC259B2FCC8EC820AC5CEDEAC41E * __this, const RuntimeMethod* method);
// System.String System.TypeSpec::UnescapeInternalName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeSpec_UnescapeInternalName_mA948D42382EE159391CEFB85748A7EFF37CE53A9 (String_t* ___displayName0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean System.TypeNames/ATypeName::Equals(System.TypeName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ATypeName_Equals_m6BDE7D1613B8F351AC3DCB2C9BDE29C23A92CC22 (ATypeName_t19F245ED1619C78770F92C899C4FE364DBF30861 * __this, RuntimeObject* ___other0, const RuntimeMethod* method);
// System.Void System.Text.DecoderNLS::.ctor(System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoderNLS__ctor_mC526CB146E620885CBC054C3921E27A7949B2046 (DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A * __this, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding0, const RuntimeMethod* method);
// System.Void System.Text.DecoderNLS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoderNLS__ctor_mDD4D4880457E73F1575479F8B309F9BB25BA0F4D (DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99 (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, Type_t * ___type1, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5 (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m324F3E0B02B746D5F460499F5A25988FD608AD7B (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Void System.Text.DecoderFallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoderFallback__ctor_m748C2C19AD4595C13154F9EEDF89AC2A2C10727E (DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * __this, const RuntimeMethod* method);
// System.Void System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::.ctor(System.Text.UTF7Encoding/DecoderUTF7Fallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoderUTF7FallbackBuffer__ctor_mFA2B62E208804BB64A4893F1F91D8481B5C5BCB0 (DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A * __this, DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8 * ___fallback0, const RuntimeMethod* method);
// System.Void System.Text.DecoderFallbackBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoderFallbackBuffer__ctor_m4944ABFBCC6CDED8F244EC1E5EA6B1F229C3495C (DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * __this, const RuntimeMethod* method);
// System.String System.Environment::GetResourceString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617 (String_t* ___key0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Text.EncoderNLS::.ctor(System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncoderNLS__ctor_mF9B45DA23BADBDD417E3F741C6C9BB45F3021513 (EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 * __this, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding0, const RuntimeMethod* method);
// System.Void System.Text.EncoderNLS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncoderNLS__ctor_m78E59E5DDEAE418A3936D0EAD2D2DB3D15E75CEF (EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 * __this, const RuntimeMethod* method);
// System.Void System.Text.UnicodeEncoding::.ctor(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnicodeEncoding__ctor_mE077368843CAFC47B2C4AFC3C771F5B51F3B8DD0 (UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * __this, bool ___bigEndian0, bool ___byteOrderMark1, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m7B2342989B501DBA05C63C0D6E4FBD63541D4C38 (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, Il2CppChar ___value1, const RuntimeMethod* method);
// System.Void Mono.Security.Uri/UriScheme::.ctor(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriScheme__ctor_m6343DEE07E2D8205507451AF5595A883EFC6E4A2 (UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB * __this, String_t* ___s0, String_t* ___d1, int32_t ___p2, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::QueueContinuation(System.Action,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldAwaiter_QueueContinuation_m74F0C35BAB324C9DB810F8F60BA6BDBCAA5E0201 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, bool ___flowContext1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldAwaiter_OnCompleted_m7F0FBDFB78A15C9946F187FC4485799CFA273D73 (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldAwaiter_UnsafeOnCompleted_mFDE8CFD013E3825F11C68314E8957E6DAF79C6A5 (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method);
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_CurrentNoFlow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * SynchronizationContext_get_CurrentNoFlow_mF134FBE4BA52932C990D3824A9CF960FCA9F44AD (const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * TaskScheduler_get_Current_m9B2B54B9B43FC6E157E04ABE9151F6A0FF124C01 (const RuntimeMethod* method);
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::get_Default()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * TaskScheduler_get_Default_m3FAE18B08A620C75BF0256917EFB236D30AB6BCB_inline (const RuntimeMethod* method);
// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItem_mA55899F403EAC69AE3C72A4F3E5FD207C131616C (WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * ___callBack0, RuntimeObject * ___state1, const RuntimeMethod* method);
// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::get_Factory()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * Task_get_Factory_m452D636F3D5CBE5AA8746078C35C42F69BE61722_inline (const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.TaskFactory::StartNew(System.Action,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * TaskFactory_StartNew_m5617E5F6A6D949C2E21A7E525FAC899E4B871904 (TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, int32_t ___creationOptions2, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___scheduler3, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * __this, const RuntimeMethod* method);
// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOrPostCallback__ctor_m68774F2BDC46DE2BA6C3D61D66481FD4D994F6A4 (SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.IO.Stream/SynchronousAsyncResult/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m25FD09827E688A2665AA1918B69FB7B2421E8235 (U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.Timer/Scheduler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler__cctor_m36805653C9D55766CEE82413432DFBC5B5DBFB29 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * L_0 = (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 *)il2cpp_codegen_object_new(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_il2cpp_TypeInfo_var);
		Scheduler__ctor_mFA8C77435650B38315E392A0D1C66EC7DC974E82(L_0, /*hidden argument*/NULL);
		((Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_StaticFields*)il2cpp_codegen_static_fields_for(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_il2cpp_TypeInfo_var))->set_instance_0(L_0);
		return;
	}
}
// System.Threading.Timer/Scheduler System.Threading.Timer/Scheduler::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * Scheduler_get_Instance_mEB15B6A61E0B259CFC8BABE4376A8DEC2962BC86 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_il2cpp_TypeInfo_var);
		Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * L_0 = ((Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_StaticFields*)il2cpp_codegen_static_fields_for(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_il2cpp_TypeInfo_var))->get_instance_0();
		return L_0;
	}
}
// System.Void System.Threading.Timer/Scheduler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler__ctor_mFA8C77435650B38315E392A0D1C66EC7DC974E82 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scheduler_SchedulerThread_mDB9CB3C0FCB84658BB01FFF19F5995869778D8C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_0 = (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA *)il2cpp_codegen_object_new(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850(L_0, (bool)0, /*hidden argument*/NULL);
		__this->set_changed_2(L_0);
		TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B * L_1 = (TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B *)il2cpp_codegen_object_new(TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B_il2cpp_TypeInfo_var);
		TimerComparer__ctor_mB4F0DB5CDEB7A6E93F59950E0FB1D19BB4BBA0B4(L_1, /*hidden argument*/NULL);
		SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_2 = (SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 *)il2cpp_codegen_object_new(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165_il2cpp_TypeInfo_var);
		SortedList__ctor_m0E1B0737647DC8D8B3E9FAD5F81168878E92E9F4(L_2, L_1, ((int32_t)1024), /*hidden argument*/NULL);
		__this->set_list_1(L_2);
		ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * L_3 = (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 *)il2cpp_codegen_object_new(ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F(L_3, __this, (intptr_t)((intptr_t)Scheduler_SchedulerThread_mDB9CB3C0FCB84658BB01FFF19F5995869778D8C7_RuntimeMethod_var), /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_4 = (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)il2cpp_codegen_object_new(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90(L_4, L_3, /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_5 = L_4;
		NullCheck(L_5);
		Thread_set_IsBackground_m8CAEC157A236A574FE83FDB22D693AB1681B01B0(L_5, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_5);
		Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B(L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Timer/Scheduler::Remove(System.Threading.Timer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler_Remove_m34454A4F7A6AC0E05564A423140D7923771904D5 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___timer0, const RuntimeMethod* method)
{
	Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_0 = ___timer0;
		NullCheck(L_0);
		int64_t L_1 = L_0->get_next_run_6();
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_2 = ___timer0;
		NullCheck(L_2);
		int64_t L_3 = L_2->get_next_run_6();
		if ((!(((uint64_t)L_3) == ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)())))))
		{
			goto IL_001a;
		}
	}

IL_0019:
	{
		return;
	}

IL_001a:
	{
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * L_4 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_4, (bool*)(&V_1), /*hidden argument*/NULL);
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_5 = ___timer0;
		int32_t L_6;
		L_6 = Scheduler_InternalRemove_m3154F260BA70D6D62BB855662FD4E59EBF25C538(__this, L_5, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x3A, FINALLY_0030);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		{
			bool L_7 = V_1;
			if (!L_7)
			{
				goto IL_0039;
			}
		}

IL_0033:
		{
			Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * L_8 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		}

IL_0039:
		{
			IL2CPP_END_FINALLY(48)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3A, IL_003a)
	}

IL_003a:
	{
		return;
	}
}
// System.Void System.Threading.Timer/Scheduler::Change(System.Threading.Timer,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler_Change_mB9519A7BE09D1CB449D40E231F43C97F8019685D (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___timer0, int64_t ___new_next_run1, const RuntimeMethod* method)
{
	bool V_0 = false;
	Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		V_0 = (bool)0;
		V_1 = __this;
		V_2 = (bool)0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		{
			Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * L_0 = V_1;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_0, (bool*)(&V_2), /*hidden argument*/NULL);
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_1 = ___timer0;
			int32_t L_2;
			L_2 = Scheduler_InternalRemove_m3154F260BA70D6D62BB855662FD4E59EBF25C538(__this, L_1, /*hidden argument*/NULL);
			int64_t L_3 = ___new_next_run1;
			if ((!(((uint64_t)L_3) == ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)())))))
			{
				goto IL_002b;
			}
		}

IL_0022:
		{
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_4 = ___timer0;
			int64_t L_5 = ___new_next_run1;
			NullCheck(L_4);
			L_4->set_next_run_6(L_5);
			IL2CPP_LEAVE(0x6C, FINALLY_0053);
		}

IL_002b:
		{
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_6 = ___timer0;
			NullCheck(L_6);
			bool L_7 = L_6->get_disposed_7();
			if (L_7)
			{
				goto IL_0051;
			}
		}

IL_0033:
		{
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_8 = ___timer0;
			int64_t L_9 = ___new_next_run1;
			NullCheck(L_8);
			L_8->set_next_run_6(L_9);
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_10 = ___timer0;
			Scheduler_Add_m97B241DC232711E7C7D9057DA0BF7D657808D981(__this, L_10, /*hidden argument*/NULL);
			SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_11 = __this->get_list_1();
			NullCheck(L_11);
			RuntimeObject * L_12;
			L_12 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(20 /* System.Object System.Collections.SortedList::GetByIndex(System.Int32) */, L_11, 0);
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_13 = ___timer0;
			V_0 = (bool)((((RuntimeObject*)(RuntimeObject *)L_12) == ((RuntimeObject*)(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)L_13))? 1 : 0);
		}

IL_0051:
		{
			IL2CPP_LEAVE(0x5D, FINALLY_0053);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0053;
	}

FINALLY_0053:
	{ // begin finally (depth: 1)
		{
			bool L_14 = V_2;
			if (!L_14)
			{
				goto IL_005c;
			}
		}

IL_0056:
		{
			Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * L_15 = V_1;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_15, /*hidden argument*/NULL);
		}

IL_005c:
		{
			IL2CPP_END_FINALLY(83)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(83)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6C, IL_006c)
		IL2CPP_JUMP_TBL(0x5D, IL_005d)
	}

IL_005d:
	{
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_006c;
		}
	}
	{
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_17 = __this->get_changed_2();
		NullCheck(L_17);
		bool L_18;
		L_18 = EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38(L_17, /*hidden argument*/NULL);
	}

IL_006c:
	{
		return;
	}
}
// System.Int32 System.Threading.Timer/Scheduler::FindByDueTime(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scheduler_FindByDueTime_m97EC1ECDEE06ABC0ADD1CD8D4C3B6F057680F677 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, int64_t ___nr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * V_2 = NULL;
	int32_t V_3 = 0;
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * V_4 = NULL;
	{
		V_0 = 0;
		SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_0 = __this->get_list_1();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.Collections.SortedList::get_Count() */, L_0);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		return (-1);
	}

IL_0016:
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)20))))
		{
			goto IL_008a;
		}
	}
	{
		goto IL_0049;
	}

IL_001d:
	{
		SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_4 = __this->get_list_1();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject * L_6;
		L_6 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(20 /* System.Object System.Collections.SortedList::GetByIndex(System.Int32) */, L_4, L_5);
		V_2 = ((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)CastclassSealed((RuntimeObject*)L_6, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var));
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_7 = V_2;
		NullCheck(L_7);
		int64_t L_8 = L_7->get_next_run_6();
		int64_t L_9 = ___nr0;
		if ((!(((uint64_t)L_8) == ((uint64_t)L_9))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_10 = V_0;
		return L_10;
	}

IL_003a:
	{
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_11 = V_2;
		NullCheck(L_11);
		int64_t L_12 = L_11->get_next_run_6();
		int64_t L_13 = ___nr0;
		if ((((int64_t)L_12) <= ((int64_t)L_13)))
		{
			goto IL_0045;
		}
	}
	{
		return (-1);
	}

IL_0045:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0049:
	{
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		if ((((int32_t)L_15) <= ((int32_t)L_16)))
		{
			goto IL_001d;
		}
	}
	{
		return (-1);
	}

IL_004f:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)L_19))>>(int32_t)1))));
		SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_20 = __this->get_list_1();
		int32_t L_21 = V_3;
		NullCheck(L_20);
		RuntimeObject * L_22;
		L_22 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(20 /* System.Object System.Collections.SortedList::GetByIndex(System.Int32) */, L_20, L_21);
		V_4 = ((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)CastclassSealed((RuntimeObject*)L_22, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var));
		int64_t L_23 = ___nr0;
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_24 = V_4;
		NullCheck(L_24);
		int64_t L_25 = L_24->get_next_run_6();
		if ((!(((uint64_t)L_23) == ((uint64_t)L_25))))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_26 = V_3;
		return L_26;
	}

IL_0076:
	{
		int64_t L_27 = ___nr0;
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_28 = V_4;
		NullCheck(L_28);
		int64_t L_29 = L_28->get_next_run_6();
		if ((((int64_t)L_27) <= ((int64_t)L_29)))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_30 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
		goto IL_008a;
	}

IL_0086:
	{
		int32_t L_31 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)1));
	}

IL_008a:
	{
		int32_t L_32 = V_0;
		int32_t L_33 = V_1;
		if ((((int32_t)L_32) <= ((int32_t)L_33)))
		{
			goto IL_004f;
		}
	}
	{
		return (-1);
	}
}
// System.Void System.Threading.Timer/Scheduler::Add(System.Threading.Timer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler_Add_m97B241DC232711E7C7D9057DA0BF7D657808D981 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___timer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_0 = ___timer0;
		NullCheck(L_0);
		int64_t L_1 = L_0->get_next_run_6();
		int32_t L_2;
		L_2 = Scheduler_FindByDueTime_m97EC1ECDEE06ABC0ADD1CD8D4C3B6F057680F677(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0081;
		}
	}
	{
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_4 = ___timer0;
		NullCheck(L_4);
		int64_t L_5 = L_4->get_next_run_6();
		if ((((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)((int64_t)(std::numeric_limits<int64_t>::max)()), (int64_t)L_5))) > ((int64_t)((int64_t)((int64_t)((int32_t)20000))))))
		{
			goto IL_002c;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_002d;
	}

IL_002c:
	{
		G_B4_0 = 1;
	}

IL_002d:
	{
		V_1 = (bool)G_B4_0;
	}

IL_002e:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_8 = ___timer0;
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_9 = L_8;
		NullCheck(L_9);
		int64_t L_10 = L_9->get_next_run_6();
		NullCheck(L_9);
		L_9->set_next_run_6(((int64_t)il2cpp_codegen_add((int64_t)L_10, (int64_t)((int64_t)((int64_t)1)))));
		goto IL_0055;
	}

IL_0046:
	{
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_11 = ___timer0;
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_12 = L_11;
		NullCheck(L_12);
		int64_t L_13 = L_12->get_next_run_6();
		NullCheck(L_12);
		L_12->set_next_run_6(((int64_t)il2cpp_codegen_subtract((int64_t)L_13, (int64_t)((int64_t)((int64_t)1)))));
	}

IL_0055:
	{
		int32_t L_14 = V_0;
		SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_15 = __this->get_list_1();
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.Collections.SortedList::get_Count() */, L_15);
		if ((((int32_t)L_14) >= ((int32_t)L_16)))
		{
			goto IL_0081;
		}
	}
	{
		SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_17 = __this->get_list_1();
		int32_t L_18 = V_0;
		NullCheck(L_17);
		RuntimeObject * L_19;
		L_19 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(20 /* System.Object System.Collections.SortedList::GetByIndex(System.Int32) */, L_17, L_18);
		NullCheck(((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)CastclassSealed((RuntimeObject*)L_19, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var)));
		int64_t L_20 = ((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)CastclassSealed((RuntimeObject*)L_19, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var))->get_next_run_6();
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_21 = ___timer0;
		NullCheck(L_21);
		int64_t L_22 = L_21->get_next_run_6();
		if ((((int64_t)L_20) == ((int64_t)L_22)))
		{
			goto IL_002e;
		}
	}

IL_0081:
	{
		SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_23 = __this->get_list_1();
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_24 = ___timer0;
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_25 = ___timer0;
		NullCheck(L_23);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(13 /* System.Void System.Collections.SortedList::Add(System.Object,System.Object) */, L_23, L_24, L_25);
		return;
	}
}
// System.Int32 System.Threading.Timer/Scheduler::InternalRemove(System.Threading.Timer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scheduler_InternalRemove_m3154F260BA70D6D62BB855662FD4E59EBF25C538 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___timer0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_0 = __this->get_list_1();
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_1 = ___timer0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(25 /* System.Int32 System.Collections.SortedList::IndexOfKey(System.Object) */, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_4 = __this->get_list_1();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		VirtActionInvoker1< int32_t >::Invoke(26 /* System.Void System.Collections.SortedList::RemoveAt(System.Int32) */, L_4, L_5);
	}

IL_001d:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Void System.Threading.Timer/Scheduler::TimerCB(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler_TimerCB_mFF78E60DAA18DD3E772F2113D46FB51241C957A6 (RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___o0;
		V_0 = ((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)CastclassSealed((RuntimeObject*)L_0, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var));
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_1 = V_0;
		NullCheck(L_1);
		TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * L_2 = L_1->get_callback_2();
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject * L_4 = L_3->get_state_3();
		NullCheck(L_2);
		TimerCallback_Invoke_m1318C110BA930390E8F61C8BAAAC8F1CA8776CFD(L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Timer/Scheduler::SchedulerThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler_SchedulerThread_mDB9CB3C0FCB84658BB01FFF19F5995869778D8C7 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB29575CEA902024C74743A09C2AD6A27C71FA14C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC1A3BC5C09490DE7BD41BBE1BFD81F870F508CC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m883AB85828B7C88FE9A8C7802E93E6CE979EA000_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9F4CBA17931C03FCCABF06CE8F29187F98D1F260_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9C036D14366E9BBB52436252522EDE206DC6EB35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t537143C180C9FB69517B6C26205D2AA824591563_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scheduler_TimerCB_mFF78E60DAA18DD3E772F2113D46FB51241C957A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral494836B9EFC41FFD5CB7E6CA5BA325833F323668);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t537143C180C9FB69517B6C26205D2AA824591563 * V_0 = NULL;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int64_t V_8 = 0;
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * V_9 = NULL;
	int64_t V_10 = 0;
	int64_t V_11 = 0;
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * V_12 = NULL;
	int64_t V_13 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	int32_t G_B10_0 = 0;
	{
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_0;
		L_0 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		NullCheck(L_0);
		Thread_set_Name_m920049DFD1306F42613F13CF7AD74C03661F4BAE(L_0, _stringLiteral494836B9EFC41FFD5CB7E6CA5BA325833F323668, /*hidden argument*/NULL);
		List_1_t537143C180C9FB69517B6C26205D2AA824591563 * L_1 = (List_1_t537143C180C9FB69517B6C26205D2AA824591563 *)il2cpp_codegen_object_new(List_1_t537143C180C9FB69517B6C26205D2AA824591563_il2cpp_TypeInfo_var);
		List_1__ctor_m883AB85828B7C88FE9A8C7802E93E6CE979EA000(L_1, ((int32_t)512), /*hidden argument*/List_1__ctor_m883AB85828B7C88FE9A8C7802E93E6CE979EA000_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_001a:
	{
		V_1 = (-1);
		IL2CPP_RUNTIME_CLASS_INIT(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var);
		int64_t L_2;
		L_2 = Timer_GetTimeMonotonic_m085737FA1918F06DE8264E85C1C2B8DFF2B65298(/*hidden argument*/NULL);
		V_2 = L_2;
		V_3 = __this;
		V_4 = (bool)0;
	}

IL_0027:
	try
	{ // begin try (depth: 1)
		{
			Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * L_3 = V_3;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_3, (bool*)(&V_4), /*hidden argument*/NULL);
			ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_4 = __this->get_changed_2();
			NullCheck(L_4);
			bool L_5;
			L_5 = EventWaitHandle_Reset_m535429D7CC172C0B95EB8B7B9126B3F3761E2D30(L_4, /*hidden argument*/NULL);
			SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_6 = __this->get_list_1();
			NullCheck(L_6);
			int32_t L_7;
			L_7 = VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.Collections.SortedList::get_Count() */, L_6);
			V_6 = L_7;
			V_5 = 0;
			goto IL_010c;
		}

IL_0050:
		{
			SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_8 = __this->get_list_1();
			int32_t L_9 = V_5;
			NullCheck(L_8);
			RuntimeObject * L_10;
			L_10 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(20 /* System.Object System.Collections.SortedList::GetByIndex(System.Int32) */, L_8, L_9);
			V_9 = ((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)CastclassSealed((RuntimeObject*)L_10, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var));
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_11 = V_9;
			NullCheck(L_11);
			int64_t L_12 = L_11->get_next_run_6();
			int64_t L_13 = V_2;
			if ((((int64_t)L_12) > ((int64_t)L_13)))
			{
				goto IL_0115;
			}
		}

IL_0071:
		{
			SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_14 = __this->get_list_1();
			int32_t L_15 = V_5;
			NullCheck(L_14);
			VirtActionInvoker1< int32_t >::Invoke(26 /* System.Void System.Collections.SortedList::RemoveAt(System.Int32) */, L_14, L_15);
			int32_t L_16 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1));
			int32_t L_17 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1));
			WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * L_18 = (WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 *)il2cpp_codegen_object_new(WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319_il2cpp_TypeInfo_var);
			WaitCallback__ctor_m50EFFE5096DF1DE733EA9895CEEC8EB6F142D5D5(L_18, NULL, (intptr_t)((intptr_t)Scheduler_TimerCB_mFF78E60DAA18DD3E772F2113D46FB51241C957A6_RuntimeMethod_var), /*hidden argument*/NULL);
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_19 = V_9;
			bool L_20;
			L_20 = ThreadPool_UnsafeQueueUserWorkItem_m9B9388DD623D33685D415D639455591D4DD967C6(L_18, L_19, /*hidden argument*/NULL);
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_21 = V_9;
			NullCheck(L_21);
			int64_t L_22 = L_21->get_period_ms_5();
			V_10 = L_22;
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_23 = V_9;
			NullCheck(L_23);
			int64_t L_24 = L_23->get_due_time_ms_4();
			V_11 = L_24;
			int64_t L_25 = V_10;
			if ((((int64_t)L_25) == ((int64_t)((int64_t)((int64_t)(-1))))))
			{
				goto IL_00ce;
			}
		}

IL_00b6:
		{
			int64_t L_26 = V_10;
			if (!L_26)
			{
				goto IL_00c0;
			}
		}

IL_00ba:
		{
			int64_t L_27 = V_10;
			if ((!(((uint64_t)L_27) == ((uint64_t)((int64_t)((int64_t)(-1)))))))
			{
				goto IL_00cb;
			}
		}

IL_00c0:
		{
			int64_t L_28 = V_11;
			G_B10_0 = ((((int32_t)((((int64_t)L_28) == ((int64_t)((int64_t)((int64_t)(-1)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_00cf;
		}

IL_00cb:
		{
			G_B10_0 = 0;
			goto IL_00cf;
		}

IL_00ce:
		{
			G_B10_0 = 1;
		}

IL_00cf:
		{
			if (!G_B10_0)
			{
				goto IL_00e3;
			}
		}

IL_00d1:
		{
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_29 = V_9;
			NullCheck(L_29);
			L_29->set_next_run_6(((int64_t)(std::numeric_limits<int64_t>::max)()));
			goto IL_0106;
		}

IL_00e3:
		{
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_30 = V_9;
			IL2CPP_RUNTIME_CLASS_INIT(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var);
			int64_t L_31;
			L_31 = Timer_GetTimeMonotonic_m085737FA1918F06DE8264E85C1C2B8DFF2B65298(/*hidden argument*/NULL);
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_32 = V_9;
			NullCheck(L_32);
			int64_t L_33 = L_32->get_period_ms_5();
			NullCheck(L_30);
			L_30->set_next_run_6(((int64_t)il2cpp_codegen_add((int64_t)L_31, (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)((int32_t)10000))), (int64_t)L_33)))));
			List_1_t537143C180C9FB69517B6C26205D2AA824591563 * L_34 = V_0;
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_35 = V_9;
			NullCheck(L_34);
			List_1_Add_mB29575CEA902024C74743A09C2AD6A27C71FA14C(L_34, L_35, /*hidden argument*/List_1_Add_mB29575CEA902024C74743A09C2AD6A27C71FA14C_RuntimeMethod_var);
		}

IL_0106:
		{
			int32_t L_36 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		}

IL_010c:
		{
			int32_t L_37 = V_5;
			int32_t L_38 = V_6;
			if ((((int32_t)L_37) < ((int32_t)L_38)))
			{
				goto IL_0050;
			}
		}

IL_0115:
		{
			List_1_t537143C180C9FB69517B6C26205D2AA824591563 * L_39 = V_0;
			NullCheck(L_39);
			int32_t L_40;
			L_40 = List_1_get_Count_m9F4CBA17931C03FCCABF06CE8F29187F98D1F260_inline(L_39, /*hidden argument*/List_1_get_Count_m9F4CBA17931C03FCCABF06CE8F29187F98D1F260_RuntimeMethod_var);
			V_6 = L_40;
			V_5 = 0;
			goto IL_013a;
		}

IL_0122:
		{
			List_1_t537143C180C9FB69517B6C26205D2AA824591563 * L_41 = V_0;
			int32_t L_42 = V_5;
			NullCheck(L_41);
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_43;
			L_43 = List_1_get_Item_m9C036D14366E9BBB52436252522EDE206DC6EB35_inline(L_41, L_42, /*hidden argument*/List_1_get_Item_m9C036D14366E9BBB52436252522EDE206DC6EB35_RuntimeMethod_var);
			V_12 = L_43;
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_44 = V_12;
			Scheduler_Add_m97B241DC232711E7C7D9057DA0BF7D657808D981(__this, L_44, /*hidden argument*/NULL);
			int32_t L_45 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
		}

IL_013a:
		{
			int32_t L_46 = V_5;
			int32_t L_47 = V_6;
			if ((((int32_t)L_46) < ((int32_t)L_47)))
			{
				goto IL_0122;
			}
		}

IL_0140:
		{
			List_1_t537143C180C9FB69517B6C26205D2AA824591563 * L_48 = V_0;
			NullCheck(L_48);
			List_1_Clear_mC1A3BC5C09490DE7BD41BBE1BFD81F870F508CC0(L_48, /*hidden argument*/List_1_Clear_mC1A3BC5C09490DE7BD41BBE1BFD81F870F508CC0_RuntimeMethod_var);
			List_1_t537143C180C9FB69517B6C26205D2AA824591563 * L_49 = V_0;
			Scheduler_ShrinkIfNeeded_m053057191CA310785B2C8EC2E8FB07A7E00E499C(__this, L_49, ((int32_t)512), /*hidden argument*/NULL);
			SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_50 = __this->get_list_1();
			NullCheck(L_50);
			int32_t L_51;
			L_51 = VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 System.Collections.SortedList::get_Capacity() */, L_50);
			V_7 = L_51;
			SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_52 = __this->get_list_1();
			NullCheck(L_52);
			int32_t L_53;
			L_53 = VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.Collections.SortedList::get_Count() */, L_52);
			V_6 = L_53;
			int32_t L_54 = V_7;
			if ((((int32_t)L_54) <= ((int32_t)((int32_t)1024))))
			{
				goto IL_0191;
			}
		}

IL_0175:
		{
			int32_t L_55 = V_6;
			if ((((int32_t)L_55) <= ((int32_t)0)))
			{
				goto IL_0191;
			}
		}

IL_017a:
		{
			int32_t L_56 = V_7;
			int32_t L_57 = V_6;
			if ((((int32_t)((int32_t)((int32_t)L_56/(int32_t)L_57))) <= ((int32_t)3)))
			{
				goto IL_0191;
			}
		}

IL_0182:
		{
			SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_58 = __this->get_list_1();
			int32_t L_59 = V_6;
			NullCheck(L_58);
			VirtActionInvoker1< int32_t >::Invoke(15 /* System.Void System.Collections.SortedList::set_Capacity(System.Int32) */, L_58, ((int32_t)il2cpp_codegen_multiply((int32_t)L_59, (int32_t)2)));
		}

IL_0191:
		{
			V_8 = ((int64_t)(std::numeric_limits<int64_t>::max)());
			SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_60 = __this->get_list_1();
			NullCheck(L_60);
			int32_t L_61;
			L_61 = VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.Collections.SortedList::get_Count() */, L_60);
			if ((((int32_t)L_61) <= ((int32_t)0)))
			{
				goto IL_01c2;
			}
		}

IL_01aa:
		{
			SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_62 = __this->get_list_1();
			NullCheck(L_62);
			RuntimeObject * L_63;
			L_63 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(20 /* System.Object System.Collections.SortedList::GetByIndex(System.Int32) */, L_62, 0);
			NullCheck(((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)CastclassSealed((RuntimeObject*)L_63, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var)));
			int64_t L_64 = ((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)CastclassSealed((RuntimeObject*)L_63, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var))->get_next_run_6();
			V_8 = L_64;
		}

IL_01c2:
		{
			V_1 = (-1);
			int64_t L_65 = V_8;
			if ((((int64_t)L_65) == ((int64_t)((int64_t)(std::numeric_limits<int64_t>::max)()))))
			{
				goto IL_01fe;
			}
		}

IL_01d1:
		{
			int64_t L_66 = V_8;
			IL2CPP_RUNTIME_CLASS_INIT(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var);
			int64_t L_67;
			L_67 = Timer_GetTimeMonotonic_m085737FA1918F06DE8264E85C1C2B8DFF2B65298(/*hidden argument*/NULL);
			V_13 = ((int64_t)((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_66, (int64_t)L_67))/(int64_t)((int64_t)((int64_t)((int32_t)10000)))));
			int64_t L_68 = V_13;
			if ((((int64_t)L_68) <= ((int64_t)((int64_t)((int64_t)((int32_t)2147483647LL))))))
			{
				goto IL_01f4;
			}
		}

IL_01ec:
		{
			V_1 = ((int32_t)2147483646);
			IL2CPP_LEAVE(0x20B, FINALLY_0200);
		}

IL_01f4:
		{
			int64_t L_69 = V_13;
			V_1 = ((int32_t)((int32_t)L_69));
			int32_t L_70 = V_1;
			if ((((int32_t)L_70) >= ((int32_t)0)))
			{
				goto IL_01fe;
			}
		}

IL_01fc:
		{
			V_1 = 0;
		}

IL_01fe:
		{
			IL2CPP_LEAVE(0x20B, FINALLY_0200);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0200;
	}

FINALLY_0200:
	{ // begin finally (depth: 1)
		{
			bool L_71 = V_4;
			if (!L_71)
			{
				goto IL_020a;
			}
		}

IL_0204:
		{
			Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * L_72 = V_3;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_72, /*hidden argument*/NULL);
		}

IL_020a:
		{
			IL2CPP_END_FINALLY(512)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(512)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x20B, IL_020b)
	}

IL_020b:
	{
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_73 = __this->get_changed_2();
		int32_t L_74 = V_1;
		NullCheck(L_73);
		bool L_75;
		L_75 = VirtFuncInvoker1< bool, int32_t >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32) */, L_73, L_74);
		goto IL_001a;
	}
}
// System.Void System.Threading.Timer/Scheduler::ShrinkIfNeeded(System.Collections.Generic.List`1<System.Threading.Timer>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler_ShrinkIfNeeded_m053057191CA310785B2C8EC2E8FB07A7E00E499C (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, List_1_t537143C180C9FB69517B6C26205D2AA824591563 * ___list0, int32_t ___initial1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Capacity_mD0C25FAD6973D3D67381859E776ECAE953FDFD6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9F4CBA17931C03FCCABF06CE8F29187F98D1F260_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_mEA0D56662D94226185342D2A0FD7C1860C5FFA7F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		List_1_t537143C180C9FB69517B6C26205D2AA824591563 * L_0 = ___list0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Capacity_mD0C25FAD6973D3D67381859E776ECAE953FDFD6B(L_0, /*hidden argument*/List_1_get_Capacity_mD0C25FAD6973D3D67381859E776ECAE953FDFD6B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t537143C180C9FB69517B6C26205D2AA824591563 * L_2 = ___list0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m9F4CBA17931C03FCCABF06CE8F29187F98D1F260_inline(L_2, /*hidden argument*/List_1_get_Count_m9F4CBA17931C03FCCABF06CE8F29187F98D1F260_RuntimeMethod_var);
		V_1 = L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = ___initial1;
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		if ((((int32_t)((int32_t)((int32_t)L_7/(int32_t)L_8))) <= ((int32_t)3)))
		{
			goto IL_0025;
		}
	}
	{
		List_1_t537143C180C9FB69517B6C26205D2AA824591563 * L_9 = ___list0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		List_1_set_Capacity_mEA0D56662D94226185342D2A0FD7C1860C5FFA7F(L_9, ((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)2)), /*hidden argument*/List_1_set_Capacity_mEA0D56662D94226185342D2A0FD7C1860C5FFA7F_RuntimeMethod_var);
	}

IL_0025:
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
// System.Int32 System.Threading.Timer/TimerComparer::Compare(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimerComparer_Compare_mC54D4F4F5F33A28C3981BD1D59A071659F9E90DE (TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * V_0 = NULL;
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * V_1 = NULL;
	int64_t V_2 = 0;
	{
		RuntimeObject * L_0 = ___x0;
		V_0 = ((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)IsInstSealed((RuntimeObject*)L_0, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var));
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (-1);
	}

IL_000c:
	{
		RuntimeObject * L_2 = ___y1;
		V_1 = ((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)IsInstSealed((RuntimeObject*)L_2, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var));
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_3 = V_1;
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		return 1;
	}

IL_0018:
	{
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_4 = V_0;
		NullCheck(L_4);
		int64_t L_5 = L_4->get_next_run_6();
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_6 = V_1;
		NullCheck(L_6);
		int64_t L_7 = L_6->get_next_run_6();
		V_2 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_5, (int64_t)L_7));
		int64_t L_8 = V_2;
		if (L_8)
		{
			goto IL_0031;
		}
	}
	{
		RuntimeObject * L_9 = ___x0;
		RuntimeObject * L_10 = ___y1;
		if ((((RuntimeObject*)(RuntimeObject *)L_9) == ((RuntimeObject*)(RuntimeObject *)L_10)))
		{
			goto IL_002f;
		}
	}
	{
		return (-1);
	}

IL_002f:
	{
		return 0;
	}

IL_0031:
	{
		int64_t L_11 = V_2;
		if ((((int64_t)L_11) > ((int64_t)((int64_t)((int64_t)0)))))
		{
			goto IL_0038;
		}
	}
	{
		return (-1);
	}

IL_0038:
	{
		return 1;
	}
}
// System.Void System.Threading.Timer/TimerComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerComparer__ctor_mB4F0DB5CDEB7A6E93F59950E0FB1D19BB4BBA0B4 (TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void System.TypeIdentifiers/Display::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Display__ctor_m16B5174A55477C5FA7E4BBEEB321BAC49C59EA78 (Display_tB07FE33B5E37AC259B2FCC8EC820AC5CEDEAC41E * __this, String_t* ___displayName0, const RuntimeMethod* method)
{
	{
		ATypeName__ctor_m8F74703C78999B18C60B25DC9E5FAAFA777C48EC(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___displayName0;
		__this->set_displayName_0(L_0);
		__this->set_internal_name_1((String_t*)NULL);
		return;
	}
}
// System.String System.TypeIdentifiers/Display::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Display_get_DisplayName_m85B2DCE4C4F6F44EAF0BA7BDD82C0D94EA8F5847 (Display_tB07FE33B5E37AC259B2FCC8EC820AC5CEDEAC41E * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_displayName_0();
		return L_0;
	}
}
// System.String System.TypeIdentifiers/Display::get_InternalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Display_get_InternalName_m6EAFBB13F110C5A11AC89AB9D74C79B27552EF39 (Display_tB07FE33B5E37AC259B2FCC8EC820AC5CEDEAC41E * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_internal_name_1();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_1;
		L_1 = Display_GetInternalName_mD79548CF3F783D092209AED9C54C91E81DB87970(__this, /*hidden argument*/NULL);
		__this->set_internal_name_1(L_1);
	}

IL_0014:
	{
		String_t* L_2 = __this->get_internal_name_1();
		return L_2;
	}
}
// System.String System.TypeIdentifiers/Display::GetInternalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Display_GetInternalName_mD79548CF3F783D092209AED9C54C91E81DB87970 (Display_tB07FE33B5E37AC259B2FCC8EC820AC5CEDEAC41E * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_displayName_0();
		String_t* L_1;
		L_1 = TypeSpec_UnescapeInternalName_mA948D42382EE159391CEFB85748A7EFF37CE53A9(L_0, /*hidden argument*/NULL);
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
// System.Boolean System.TypeNames/ATypeName::Equals(System.TypeName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ATypeName_Equals_m6BDE7D1613B8F351AC3DCB2C9BDE29C23A92CC22 (ATypeName_t19F245ED1619C78770F92C899C4FE364DBF30861 * __this, RuntimeObject* ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeName_t714DD2B9BA4134CE17349D95281A1F750D78D60F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___other0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.TypeNames/ATypeName::get_DisplayName() */, __this);
		RuntimeObject* L_2 = ___other0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.TypeName::get_DisplayName() */, TypeName_t714DD2B9BA4134CE17349D95281A1F750D78D60F_il2cpp_TypeInfo_var, L_2);
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Int32 System.TypeNames/ATypeName::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ATypeName_GetHashCode_mDC22C27DBC59F89F1A4CDA70985AB201BC879B07 (ATypeName_t19F245ED1619C78770F92C899C4FE364DBF30861 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.TypeNames/ATypeName::get_DisplayName() */, __this);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Boolean System.TypeNames/ATypeName::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ATypeName_Equals_m128A844F0CC6E6754CE865684C25F47EEAD342C1 (ATypeName_t19F245ED1619C78770F92C899C4FE364DBF30861 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeName_t714DD2B9BA4134CE17349D95281A1F750D78D60F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___other0;
		bool L_1;
		L_1 = ATypeName_Equals_m6BDE7D1613B8F351AC3DCB2C9BDE29C23A92CC22(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_0, TypeName_t714DD2B9BA4134CE17349D95281A1F750D78D60F_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.TypeNames/ATypeName::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATypeName__ctor_m8F74703C78999B18C60B25DC9E5FAAFA777C48EC (ATypeName_t19F245ED1619C78770F92C899C4FE364DBF30861 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void System.Text.UTF32Encoding/UTF32Decoder::.ctor(System.Text.UTF32Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF32Decoder__ctor_mC43D242A0AB38688E7F1E68472B18B5CC2F15FF6 (UTF32Decoder_t38867B08AD03138702C713129B79529EC4528DB7 * __this, UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014 * ___encoding0, const RuntimeMethod* method)
{
	{
		UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014 * L_0 = ___encoding0;
		DecoderNLS__ctor_mC526CB146E620885CBC054C3921E27A7949B2046(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF32Encoding/UTF32Decoder::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF32Decoder_Reset_mA255C09536BA93FCAD3F8ED62EADE0B2079E1C27 (UTF32Decoder_t38867B08AD03138702C713129B79529EC4528DB7 * __this, const RuntimeMethod* method)
{
	{
		__this->set_iChar_6(0);
		__this->set_readByteCount_7(0);
		DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * L_0 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallbackBuffer_1();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * L_1 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallbackBuffer_1();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(6 /* System.Void System.Text.DecoderFallbackBuffer::Reset() */, L_1);
	}

IL_0021:
	{
		return;
	}
}
// System.Boolean System.Text.UTF32Encoding/UTF32Decoder::get_HasState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UTF32Decoder_get_HasState_m59BC0A86B483ACC74E659469FFD39997B2646812 (UTF32Decoder_t38867B08AD03138702C713129B79529EC4528DB7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_readByteCount_7();
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Text.UTF7Encoding/Decoder::.ctor(System.Text.UTF7Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder__ctor_m3FAA7C0DCE7FBA64EEBD84A4AEBFC9317A92E9B9 (Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9 * __this, UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076 * ___encoding0, const RuntimeMethod* method)
{
	{
		UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076 * L_0 = ___encoding0;
		DecoderNLS__ctor_mC526CB146E620885CBC054C3921E27A7949B2046(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF7Encoding/Decoder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder__ctor_m30B1EA2BF40A4E5A3F4BF3C7B6FE7377380A1038 (Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0763FE5EB1EAC35DDF3CD44B5645A71888066226);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDC4CEC2209B63293A24317DF536AF666EAC59E5);
		s_Il2CppMethodInitialized = true;
	}
	{
		DecoderNLS__ctor_mDD4D4880457E73F1575479F8B309F9BB25BA0F4D(__this, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Decoder__ctor_m30B1EA2BF40A4E5A3F4BF3C7B6FE7377380A1038_RuntimeMethod_var)));
	}

IL_0014:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject * L_5;
		L_5 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_2, _stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58, L_4, /*hidden argument*/NULL);
		__this->set_bits_6(((*(int32_t*)((int32_t*)UnBox(L_5, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject * L_9;
		L_9 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_6, _stringLiteral0763FE5EB1EAC35DDF3CD44B5645A71888066226, L_8, /*hidden argument*/NULL);
		__this->set_bitCount_7(((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject * L_13;
		L_13 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_10, _stringLiteralBDC4CEC2209B63293A24317DF536AF666EAC59E5, L_12, /*hidden argument*/NULL);
		__this->set_firstByte_8(((*(bool*)((bool*)UnBox(L_13, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_14 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_15 = { reinterpret_cast<intptr_t> (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var) };
		Type_t * L_16;
		L_16 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		RuntimeObject * L_17;
		L_17 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_14, _stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128, L_16, /*hidden argument*/NULL);
		((DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A *)__this)->set_m_encoding_2(((Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *)CastclassClass((RuntimeObject*)L_17, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void System.Text.UTF7Encoding/Decoder::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_m3ED01524C080A21879E3BB557F043586DA3C2AE0 (Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0763FE5EB1EAC35DDF3CD44B5645A71888066226);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDC4CEC2209B63293A24317DF536AF666EAC59E5);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_m3ED01524C080A21879E3BB557F043586DA3C2AE0_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_3 = ((DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A *)__this)->get_m_encoding_2();
		NullCheck(L_2);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_2, _stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128, L_3, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_4 = ___info0;
		int32_t L_5 = __this->get_bits_6();
		NullCheck(L_4);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_4, _stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58, L_5, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		int32_t L_7 = __this->get_bitCount_7();
		NullCheck(L_6);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_6, _stringLiteral0763FE5EB1EAC35DDF3CD44B5645A71888066226, L_7, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_8 = ___info0;
		bool L_9 = __this->get_firstByte_8();
		NullCheck(L_8);
		SerializationInfo_AddValue_m324F3E0B02B746D5F460499F5A25988FD608AD7B(L_8, _stringLiteralBDC4CEC2209B63293A24317DF536AF666EAC59E5, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF7Encoding/Decoder::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_Reset_m0D006B1AE70E73B46BF2DF2550498CCF9D433769 (Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9 * __this, const RuntimeMethod* method)
{
	{
		__this->set_bits_6(0);
		__this->set_bitCount_7((-1));
		__this->set_firstByte_8((bool)0);
		DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * L_0 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallbackBuffer_1();
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * L_1 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallbackBuffer_1();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(6 /* System.Void System.Text.DecoderFallbackBuffer::Reset() */, L_1);
	}

IL_0028:
	{
		return;
	}
}
// System.Boolean System.Text.UTF7Encoding/Decoder::get_HasState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Decoder_get_HasState_mF435291CFF368657A42E3D00148A144590652907 (Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_bitCount_7();
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Text.UTF7Encoding/DecoderUTF7Fallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoderUTF7Fallback__ctor_m97CB6C70F4F4B390E79DA9A6A54F7C15611519F1 (DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8 * __this, const RuntimeMethod* method)
{
	{
		DecoderFallback__ctor_m748C2C19AD4595C13154F9EEDF89AC2A2C10727E(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Text.DecoderFallbackBuffer System.Text.UTF7Encoding/DecoderUTF7Fallback::CreateFallbackBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * DecoderUTF7Fallback_CreateFallbackBuffer_m2A16D01FA0596522EC75B9424B19FC879714AD1F (DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A * L_0 = (DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A *)il2cpp_codegen_object_new(DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A_il2cpp_TypeInfo_var);
		DecoderUTF7FallbackBuffer__ctor_mFA2B62E208804BB64A4893F1F91D8481B5C5BCB0(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 System.Text.UTF7Encoding/DecoderUTF7Fallback::get_MaxCharCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DecoderUTF7Fallback_get_MaxCharCount_mEB86DA7E072AE10245BA31204184B137DFB8F8D3 (DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8 * __this, const RuntimeMethod* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Text.UTF7Encoding/DecoderUTF7Fallback::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DecoderUTF7Fallback_Equals_m8A55122D6E31F8C487AD5AFAA5BE6352C0151656 (DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		if (!((DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8 *)IsInstSealed((RuntimeObject*)L_0, DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		return (bool)0;
	}
}
// System.Int32 System.Text.UTF7Encoding/DecoderUTF7Fallback::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DecoderUTF7Fallback_GetHashCode_m87A146966E49C3DDB5C62ADABE62B84858D48160 (DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8 * __this, const RuntimeMethod* method)
{
	{
		return ((int32_t)984);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::.ctor(System.Text.UTF7Encoding/DecoderUTF7Fallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoderUTF7FallbackBuffer__ctor_mFA2B62E208804BB64A4893F1F91D8481B5C5BCB0 (DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A * __this, DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8 * ___fallback0, const RuntimeMethod* method)
{
	{
		__this->set_iCount_3((-1));
		DecoderFallbackBuffer__ctor_m4944ABFBCC6CDED8F244EC1E5EA6B1F229C3495C(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::Fallback(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DecoderUTF7FallbackBuffer_Fallback_mBF6952B9A4A595ECF7CB92B8BC1177C726784227 (DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytesUnknown0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytesUnknown0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		__this->set_cFallback_2(L_2);
		Il2CppChar L_3 = __this->get_cFallback_2();
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		int32_t L_4 = 1;
		V_0 = L_4;
		__this->set_iSize_4(L_4);
		int32_t L_5 = V_0;
		__this->set_iCount_3(L_5);
		return (bool)1;
	}
}
// System.Char System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::GetNextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar DecoderUTF7FallbackBuffer_GetNextChar_mC2FD7150C2027744040DE6BC014598C48141419B (DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_iCount_3();
		V_0 = L_0;
		int32_t L_1 = V_0;
		__this->set_iCount_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		Il2CppChar L_3 = __this->get_cFallback_2();
		return L_3;
	}

IL_001b:
	{
		return 0;
	}
}
// System.Void System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoderUTF7FallbackBuffer_Reset_mE18A0A62630252473DE57B453B3C7344CE1077BA (DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A * __this, const RuntimeMethod* method)
{
	{
		__this->set_iCount_3((-1));
		((DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B *)__this)->set_byteStart_0((uint8_t*)((uintptr_t)0));
		return;
	}
}
// System.Int32 System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::InternalFallback(System.Byte[],System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DecoderUTF7FallbackBuffer_InternalFallback_mED8FF7722E62493ABE76E8CE1887618F6A720300 (DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, uint8_t* ___pBytes1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		NullCheck(L_0);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) == ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_1;
		L_1 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD3EDB56B30B60F6E6107AB89FE5358A528045F13)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DecoderUTF7FallbackBuffer_InternalFallback_mED8FF7722E62493ABE76E8CE1887618F6A720300_RuntimeMethod_var)));
	}

IL_0016:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___bytes0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		return 1;
	}

IL_001d:
	{
		return 0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Text.UTF7Encoding/Encoder::.ctor(System.Text.UTF7Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder__ctor_m2E7349F37D2DEF844A91395DD099D93A6C88F167 (Encoder_tF895184EA91019AA3995A8547FD56A3E0D16D1B4 * __this, UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076 * ___encoding0, const RuntimeMethod* method)
{
	{
		UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076 * L_0 = ___encoding0;
		EncoderNLS__ctor_mF9B45DA23BADBDD417E3F741C6C9BB45F3021513(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF7Encoding/Encoder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder__ctor_mD7BEBE37C16C8C8BFFFFDB86681B51F2142A8F7E (Encoder_tF895184EA91019AA3995A8547FD56A3E0D16D1B4 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0763FE5EB1EAC35DDF3CD44B5645A71888066226);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58);
		s_Il2CppMethodInitialized = true;
	}
	{
		EncoderNLS__ctor_m78E59E5DDEAE418A3936D0EAD2D2DB3D15E75CEF(__this, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder__ctor_mD7BEBE37C16C8C8BFFFFDB86681B51F2142A8F7E_RuntimeMethod_var)));
	}

IL_0014:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject * L_5;
		L_5 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_2, _stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58, L_4, /*hidden argument*/NULL);
		__this->set_bits_7(((*(int32_t*)((int32_t*)UnBox(L_5, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject * L_9;
		L_9 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_6, _stringLiteral0763FE5EB1EAC35DDF3CD44B5645A71888066226, L_8, /*hidden argument*/NULL);
		__this->set_bitCount_8(((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var) };
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject * L_13;
		L_13 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_10, _stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128, L_12, /*hidden argument*/NULL);
		((EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 *)__this)->set_m_encoding_3(((Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *)CastclassClass((RuntimeObject*)L_13, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void System.Text.UTF7Encoding/Encoder::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_System_Runtime_Serialization_ISerializable_GetObjectData_m6092B473125DCAB361E2692A0A37F4F175154463 (Encoder_tF895184EA91019AA3995A8547FD56A3E0D16D1B4 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0763FE5EB1EAC35DDF3CD44B5645A71888066226);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder_System_Runtime_Serialization_ISerializable_GetObjectData_m6092B473125DCAB361E2692A0A37F4F175154463_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_3 = ((EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 *)__this)->get_m_encoding_3();
		NullCheck(L_2);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_2, _stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128, L_3, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_4 = ___info0;
		int32_t L_5 = __this->get_bits_7();
		NullCheck(L_4);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_4, _stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58, L_5, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		int32_t L_7 = __this->get_bitCount_8();
		NullCheck(L_6);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_6, _stringLiteral0763FE5EB1EAC35DDF3CD44B5645A71888066226, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF7Encoding/Encoder::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_Reset_m8D51317D2A8E22CDF2183DBEFE2538AC3360A9A9 (Encoder_tF895184EA91019AA3995A8547FD56A3E0D16D1B4 * __this, const RuntimeMethod* method)
{
	{
		__this->set_bitCount_8((-1));
		__this->set_bits_7(0);
		EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * L_0 = ((Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A *)__this)->get_m_fallbackBuffer_1();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * L_1 = ((Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A *)__this)->get_m_fallbackBuffer_1();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(9 /* System.Void System.Text.EncoderFallbackBuffer::Reset() */, L_1);
	}

IL_0021:
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
// System.Void System.Text.UTF8Encoding/UTF8Decoder::.ctor(System.Text.UTF8Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Decoder__ctor_m9C1CB47A544EB17F0C9F1837836DB6DB50049B4C (UTF8Decoder_tD2359F0F52206B911EBC3222E627191C829F4C65 * __this, UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * ___encoding0, const RuntimeMethod* method)
{
	{
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_0 = ___encoding0;
		DecoderNLS__ctor_mC526CB146E620885CBC054C3921E27A7949B2046(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF8Encoding/UTF8Decoder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Decoder__ctor_mF827B4315912C53F248B79A77CFDE99759111353 (UTF8Decoder_tD2359F0F52206B911EBC3222E627191C829F4C65 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD08F78ED8610B5137CB74E4B8EE06DCA431A6DF5);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		DecoderNLS__ctor_mDD4D4880457E73F1575479F8B309F9BB25BA0F4D(__this, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UTF8Decoder__ctor_mF827B4315912C53F248B79A77CFDE99759111353_RuntimeMethod_var)));
	}

IL_0014:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject * L_5;
		L_5 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_2, _stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128, L_4, /*hidden argument*/NULL);
		((DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A *)__this)->set_m_encoding_2(((Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *)CastclassClass((RuntimeObject*)L_5, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var)));
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject * L_9;
		L_9 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_6, _stringLiteralD08F78ED8610B5137CB74E4B8EE06DCA431A6DF5, L_8, /*hidden argument*/NULL);
		__this->set_bits_6(((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_0_0_0_var) };
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject * L_13;
		L_13 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_10, _stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6, L_12, /*hidden argument*/NULL);
		((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->set_m_fallback_0(((DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D *)CastclassClass((RuntimeObject*)L_13, DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_il2cpp_TypeInfo_var)));
		goto IL_0087;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0076;
		}
		throw e;
	}

CATCH_0076:
	{ // begin catch(System.Runtime.Serialization.SerializationException)
		__this->set_bits_6(0);
		((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->set_m_fallback_0((DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D *)NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0087;
	} // end catch (depth: 1)

IL_0087:
	{
		return;
	}
}
// System.Void System.Text.UTF8Encoding/UTF8Decoder::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_m660874DE4EB3E16DF79AF02610D1DCA0D9A2E4BB (UTF8Decoder_tD2359F0F52206B911EBC3222E627191C829F4C65 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49D64DCFE768AFB45BCA7F089DBB249FA1DA859C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8994D295B1EC3F358FB1CDEB6465D3A478A7F949);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C4034C5C6F417782BE8DF6DD6771CA6B67948DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD08F78ED8610B5137CB74E4B8EE06DCA431A6DF5);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UTF8Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_m660874DE4EB3E16DF79AF02610D1DCA0D9A2E4BB_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_3 = ((DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A *)__this)->get_m_encoding_2();
		NullCheck(L_2);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_2, _stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128, L_3, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_4 = ___info0;
		int32_t L_5 = __this->get_bits_6();
		NullCheck(L_4);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_4, _stringLiteralD08F78ED8610B5137CB74E4B8EE06DCA431A6DF5, L_5, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * L_7 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallback_0();
		NullCheck(L_6);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_6, _stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6, L_7, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_8 = ___info0;
		NullCheck(L_8);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_8, _stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58, 0, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_9 = ___info0;
		NullCheck(L_9);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_9, _stringLiteral8994D295B1EC3F358FB1CDEB6465D3A478A7F949, 0, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		NullCheck(L_10);
		SerializationInfo_AddValue_m324F3E0B02B746D5F460499F5A25988FD608AD7B(L_10, _stringLiteral9C4034C5C6F417782BE8DF6DD6771CA6B67948DF, (bool)0, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_11 = ___info0;
		NullCheck(L_11);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_11, _stringLiteral49D64DCFE768AFB45BCA7F089DBB249FA1DA859C, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF8Encoding/UTF8Decoder::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Decoder_Reset_m81E08FB668E8FAA2B75ECB823F9131933E48522A (UTF8Decoder_tD2359F0F52206B911EBC3222E627191C829F4C65 * __this, const RuntimeMethod* method)
{
	{
		__this->set_bits_6(0);
		DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * L_0 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallbackBuffer_1();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * L_1 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallbackBuffer_1();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(6 /* System.Void System.Text.DecoderFallbackBuffer::Reset() */, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean System.Text.UTF8Encoding/UTF8Decoder::get_HasState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UTF8Decoder_get_HasState_mB8A652C38DB6D32A53AE51935F186F7929276381 (UTF8Decoder_tD2359F0F52206B911EBC3222E627191C829F4C65 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_bits_6();
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Text.UTF8Encoding/UTF8Encoder::.ctor(System.Text.UTF8Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoder__ctor_m29DA8DC0472E7C071894DCB375E8487CFC55B327 (UTF8Encoder_t3408DBF93D79A981F50954F660E33BA13FE29FD3 * __this, UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * ___encoding0, const RuntimeMethod* method)
{
	{
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_0 = ___encoding0;
		EncoderNLS__ctor_mF9B45DA23BADBDD417E3F741C6C9BB45F3021513(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF8Encoding/UTF8Encoder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoder__ctor_m21812FB83AD489EC7871F626BC251F3DEDFC8506 (UTF8Encoder_t3408DBF93D79A981F50954F660E33BA13FE29FD3 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01AC6AAA845493AD30953C71C8C9EABF0D0124E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		EncoderNLS__ctor_m78E59E5DDEAE418A3936D0EAD2D2DB3D15E75CEF(__this, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UTF8Encoder__ctor_m21812FB83AD489EC7871F626BC251F3DEDFC8506_RuntimeMethod_var)));
	}

IL_0014:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject * L_5;
		L_5 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_2, _stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128, L_4, /*hidden argument*/NULL);
		((EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 *)__this)->set_m_encoding_3(((Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *)CastclassClass((RuntimeObject*)L_5, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var)));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject * L_9;
		L_9 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_6, _stringLiteral01AC6AAA845493AD30953C71C8C9EABF0D0124E4, L_8, /*hidden argument*/NULL);
		__this->set_surrogateChar_7(((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
	}

IL_0054:
	try
	{ // begin try (depth: 1)
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject * L_13;
		L_13 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_10, _stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6, L_12, /*hidden argument*/NULL);
		((Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A *)__this)->set_m_fallback_0(((EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 *)CastclassClass((RuntimeObject*)L_13, EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_il2cpp_TypeInfo_var)));
		goto IL_0080;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0076;
		}
		throw e;
	}

CATCH_0076:
	{ // begin catch(System.Runtime.Serialization.SerializationException)
		((Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A *)__this)->set_m_fallback_0((EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 *)NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0080;
	} // end catch (depth: 1)

IL_0080:
	{
		return;
	}
}
// System.Void System.Text.UTF8Encoding/UTF8Encoder::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoder_System_Runtime_Serialization_ISerializable_GetObjectData_m2EB22FA8BBBFC1038DA48A6014DDFD6FF57D93D2 (UTF8Encoder_t3408DBF93D79A981F50954F660E33BA13FE29FD3 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01AC6AAA845493AD30953C71C8C9EABF0D0124E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35FD9409286E50999789090A9930776FD3F2B13E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5411972E9968E9978EF95EF84FB5F5FE4F0F734);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B4_0 = NULL;
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * G_B5_2 = NULL;
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UTF8Encoder_System_Runtime_Serialization_ISerializable_GetObjectData_m2EB22FA8BBBFC1038DA48A6014DDFD6FF57D93D2_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_3 = ((EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 *)__this)->get_m_encoding_3();
		NullCheck(L_2);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_2, _stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128, L_3, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_4 = ___info0;
		int32_t L_5 = __this->get_surrogateChar_7();
		NullCheck(L_4);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_4, _stringLiteral01AC6AAA845493AD30953C71C8C9EABF0D0124E4, L_5, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * L_7 = ((Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A *)__this)->get_m_fallback_0();
		NullCheck(L_6);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_6, _stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6, L_7, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_8 = ___info0;
		int32_t L_9 = __this->get_surrogateChar_7();
		G_B3_0 = _stringLiteral35FD9409286E50999789090A9930776FD3F2B13E;
		G_B3_1 = L_8;
		if ((((int32_t)L_9) > ((int32_t)0)))
		{
			G_B4_0 = _stringLiteral35FD9409286E50999789090A9930776FD3F2B13E;
			G_B4_1 = L_8;
			goto IL_0053;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0054;
	}

IL_0053:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0054:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m324F3E0B02B746D5F460499F5A25988FD608AD7B(G_B5_2, G_B5_1, (bool)G_B5_0, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		NullCheck(L_10);
		SerializationInfo_AddValue_m324F3E0B02B746D5F460499F5A25988FD608AD7B(L_10, _stringLiteralB5411972E9968E9978EF95EF84FB5F5FE4F0F734, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF8Encoding/UTF8Encoder::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoder_Reset_m5CDF361E7CAE7E9BF5DE6C35348F253A1341030C (UTF8Encoder_t3408DBF93D79A981F50954F660E33BA13FE29FD3 * __this, const RuntimeMethod* method)
{
	{
		__this->set_surrogateChar_7(0);
		EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * L_0 = ((Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A *)__this)->get_m_fallbackBuffer_1();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * L_1 = ((Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A *)__this)->get_m_fallbackBuffer_1();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(9 /* System.Void System.Text.EncoderFallbackBuffer::Reset() */, L_1);
	}

IL_001a:
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
// System.Void System.Text.UnicodeEncoding/Decoder::.ctor(System.Text.UnicodeEncoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder__ctor_m2E2F6F43F63332CC0E59AF2A0ADA80DE2CF0D187 (Decoder_tC3DC16951ED8FCF98278FC7F0804070A9C218109 * __this, UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * ___encoding0, const RuntimeMethod* method)
{
	{
		__this->set_lastByte_6((-1));
		UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * L_0 = ___encoding0;
		DecoderNLS__ctor_mC526CB146E620885CBC054C3921E27A7949B2046(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UnicodeEncoding/Decoder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder__ctor_m8A1BF2DA9101627DEFF9629F0E16F8A0A8917DE1 (Decoder_tC3DC16951ED8FCF98278FC7F0804070A9C218109 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1450C988C6B4D028AF5A543FC4A7A8FA9BA62F30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2920727F7824CA7782C4813D6F7312ABCDA53CCD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC760D2328BD1CF4750B1C22486E5906ACA0DD030);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		__this->set_lastByte_6((-1));
		DecoderNLS__ctor_mDD4D4880457E73F1575479F8B309F9BB25BA0F4D(__this, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Decoder__ctor_m8A1BF2DA9101627DEFF9629F0E16F8A0A8917DE1_RuntimeMethod_var)));
	}

IL_001b:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject * L_5;
		L_5 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_2, _stringLiteral2920727F7824CA7782C4813D6F7312ABCDA53CCD, L_4, /*hidden argument*/NULL);
		__this->set_lastByte_6(((*(int32_t*)((int32_t*)UnBox(L_5, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject * L_9;
		L_9 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_6, _stringLiteral1450C988C6B4D028AF5A543FC4A7A8FA9BA62F30, L_8, /*hidden argument*/NULL);
		((DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A *)__this)->set_m_encoding_2(((Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *)CastclassClass((RuntimeObject*)L_9, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var)));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject * L_13;
		L_13 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_10, _stringLiteralC760D2328BD1CF4750B1C22486E5906ACA0DD030, L_12, /*hidden argument*/NULL);
		__this->set_lastChar_7(((*(Il2CppChar*)((Il2CppChar*)UnBox(L_13, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_14 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_15 = { reinterpret_cast<intptr_t> (DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_0_0_0_var) };
		Type_t * L_16;
		L_16 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		RuntimeObject * L_17;
		L_17 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_14, _stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6, L_16, /*hidden argument*/NULL);
		((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->set_m_fallback_0(((DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D *)CastclassClass((RuntimeObject*)L_17, DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_il2cpp_TypeInfo_var)));
		goto IL_00c8;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_009d;
		}
		throw e;
	}

CATCH_009d:
	{ // begin catch(System.Runtime.Serialization.SerializationException)
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_18 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var))) };
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		RuntimeObject * L_21;
		L_21 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD5FECA9C07F11E0EFEDB17DCA043A555B4DD4FF2)), L_20, /*hidden argument*/NULL);
		V_0 = ((*(bool*)((bool*)UnBox(L_21, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var))))));
		bool L_22 = V_0;
		UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * L_23 = (UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_il2cpp_TypeInfo_var)));
		UnicodeEncoding__ctor_mE077368843CAFC47B2C4AFC3C771F5B51F3B8DD0(L_23, L_22, (bool)0, /*hidden argument*/NULL);
		((DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A *)__this)->set_m_encoding_2(L_23);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c8;
	} // end catch (depth: 1)

IL_00c8:
	{
		return;
	}
}
// System.Void System.Text.UnicodeEncoding/Decoder::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_mFEA452EA85957C6375B8F3E3551D2DA9317E1165 (Decoder_tC3DC16951ED8FCF98278FC7F0804070A9C218109 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1450C988C6B4D028AF5A543FC4A7A8FA9BA62F30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2920727F7824CA7782C4813D6F7312ABCDA53CCD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC760D2328BD1CF4750B1C22486E5906ACA0DD030);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5FECA9C07F11E0EFEDB17DCA043A555B4DD4FF2);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_mFEA452EA85957C6375B8F3E3551D2DA9317E1165_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_3 = ((DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A *)__this)->get_m_encoding_2();
		NullCheck(L_2);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_2, _stringLiteral1450C988C6B4D028AF5A543FC4A7A8FA9BA62F30, L_3, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_4 = ___info0;
		DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * L_5 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallback_0();
		NullCheck(L_4);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_4, _stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6, L_5, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		Il2CppChar L_7 = __this->get_lastChar_7();
		NullCheck(L_6);
		SerializationInfo_AddValue_m7B2342989B501DBA05C63C0D6E4FBD63541D4C38(L_6, _stringLiteralC760D2328BD1CF4750B1C22486E5906ACA0DD030, L_7, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_8 = ___info0;
		int32_t L_9 = __this->get_lastByte_6();
		NullCheck(L_8);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_8, _stringLiteral2920727F7824CA7782C4813D6F7312ABCDA53CCD, L_9, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_11 = ((DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A *)__this)->get_m_encoding_2();
		NullCheck(((UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 *)CastclassClass((RuntimeObject*)L_11, UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_il2cpp_TypeInfo_var)));
		bool L_12 = ((UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 *)CastclassClass((RuntimeObject*)L_11, UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_il2cpp_TypeInfo_var))->get_bigEndian_63();
		NullCheck(L_10);
		SerializationInfo_AddValue_m324F3E0B02B746D5F460499F5A25988FD608AD7B(L_10, _stringLiteralD5FECA9C07F11E0EFEDB17DCA043A555B4DD4FF2, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UnicodeEncoding/Decoder::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_Reset_mFE13742F618EE4CB1C7E680B93CD2EAF0DD2A588 (Decoder_tC3DC16951ED8FCF98278FC7F0804070A9C218109 * __this, const RuntimeMethod* method)
{
	{
		__this->set_lastByte_6((-1));
		__this->set_lastChar_7(0);
		DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * L_0 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallbackBuffer_1();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * L_1 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallbackBuffer_1();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(6 /* System.Void System.Text.DecoderFallbackBuffer::Reset() */, L_1);
	}

IL_0021:
	{
		return;
	}
}
// System.Boolean System.Text.UnicodeEncoding/Decoder::get_HasState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Decoder_get_HasState_m77EB54613A273C583568810DC48F8ADFAA450190 (Decoder_tC3DC16951ED8FCF98278FC7F0804070A9C218109 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_lastByte_6();
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0013;
		}
	}
	{
		Il2CppChar L_1 = __this->get_lastChar_7();
		return (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
	}

IL_0013:
	{
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Mono.Security.Uri/UriScheme
IL2CPP_EXTERN_C void UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB_marshal_pinvoke(const UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB& unmarshaled, UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB_marshaled_pinvoke& marshaled)
{
	marshaled.___scheme_0 = il2cpp_codegen_marshal_string(unmarshaled.get_scheme_0());
	marshaled.___delimiter_1 = il2cpp_codegen_marshal_string(unmarshaled.get_delimiter_1());
	marshaled.___defaultPort_2 = unmarshaled.get_defaultPort_2();
}
IL2CPP_EXTERN_C void UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB_marshal_pinvoke_back(const UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB_marshaled_pinvoke& marshaled, UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB& unmarshaled)
{
	unmarshaled.set_scheme_0(il2cpp_codegen_marshal_string_result(marshaled.___scheme_0));
	unmarshaled.set_delimiter_1(il2cpp_codegen_marshal_string_result(marshaled.___delimiter_1));
	int32_t unmarshaled_defaultPort_temp_2 = 0;
	unmarshaled_defaultPort_temp_2 = marshaled.___defaultPort_2;
	unmarshaled.set_defaultPort_2(unmarshaled_defaultPort_temp_2);
}
// Conversion method for clean up from marshalling of: Mono.Security.Uri/UriScheme
IL2CPP_EXTERN_C void UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB_marshal_pinvoke_cleanup(UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___scheme_0);
	marshaled.___scheme_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___delimiter_1);
	marshaled.___delimiter_1 = NULL;
}
// Conversion methods for marshalling of: Mono.Security.Uri/UriScheme
IL2CPP_EXTERN_C void UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB_marshal_com(const UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB& unmarshaled, UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB_marshaled_com& marshaled)
{
	marshaled.___scheme_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_scheme_0());
	marshaled.___delimiter_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_delimiter_1());
	marshaled.___defaultPort_2 = unmarshaled.get_defaultPort_2();
}
IL2CPP_EXTERN_C void UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB_marshal_com_back(const UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB_marshaled_com& marshaled, UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB& unmarshaled)
{
	unmarshaled.set_scheme_0(il2cpp_codegen_marshal_bstring_result(marshaled.___scheme_0));
	unmarshaled.set_delimiter_1(il2cpp_codegen_marshal_bstring_result(marshaled.___delimiter_1));
	int32_t unmarshaled_defaultPort_temp_2 = 0;
	unmarshaled_defaultPort_temp_2 = marshaled.___defaultPort_2;
	unmarshaled.set_defaultPort_2(unmarshaled_defaultPort_temp_2);
}
// Conversion method for clean up from marshalling of: Mono.Security.Uri/UriScheme
IL2CPP_EXTERN_C void UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB_marshal_com_cleanup(UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___scheme_0);
	marshaled.___scheme_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___delimiter_1);
	marshaled.___delimiter_1 = NULL;
}
// System.Void Mono.Security.Uri/UriScheme::.ctor(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriScheme__ctor_m6343DEE07E2D8205507451AF5595A883EFC6E4A2 (UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB * __this, String_t* ___s0, String_t* ___d1, int32_t ___p2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		__this->set_scheme_0(L_0);
		String_t* L_1 = ___d1;
		__this->set_delimiter_1(L_1);
		int32_t L_2 = ___p2;
		__this->set_defaultPort_2(L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void UriScheme__ctor_m6343DEE07E2D8205507451AF5595A883EFC6E4A2_AdjustorThunk (RuntimeObject * __this, String_t* ___s0, String_t* ___d1, int32_t ___p2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB * _thisAdjusted = reinterpret_cast<UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB *>(__this + _offset);
	UriScheme__ctor_m6343DEE07E2D8205507451AF5595A883EFC6E4A2(_thisAdjusted, ___s0, ___d1, ___p2, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Win32.Win32Native/WIN32_FIND_DATA::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WIN32_FIND_DATA__ctor_mB7888151C7D80CA45AD0857773E8B1BB1CC003E3 (WIN32_FIND_DATA_tE88493B22E1CDD2E595CA4F800949555399AB3C7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Boolean System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * _thisAdjusted = reinterpret_cast<YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *>(__this + _offset);
	bool _returnValue;
	_returnValue = YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC(_thisAdjusted, method);
	return _returnValue;
}
// System.Void System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldAwaiter_OnCompleted_m7F0FBDFB78A15C9946F187FC4485799CFA273D73 (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___continuation0;
		IL2CPP_RUNTIME_CLASS_INIT(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_il2cpp_TypeInfo_var);
		YieldAwaiter_QueueContinuation_m74F0C35BAB324C9DB810F8F60BA6BDBCAA5E0201(L_0, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void YieldAwaiter_OnCompleted_m7F0FBDFB78A15C9946F187FC4485799CFA273D73_AdjustorThunk (RuntimeObject * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * _thisAdjusted = reinterpret_cast<YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *>(__this + _offset);
	YieldAwaiter_OnCompleted_m7F0FBDFB78A15C9946F187FC4485799CFA273D73(_thisAdjusted, ___continuation0, method);
}
// System.Void System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldAwaiter_UnsafeOnCompleted_mFDE8CFD013E3825F11C68314E8957E6DAF79C6A5 (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___continuation0;
		IL2CPP_RUNTIME_CLASS_INIT(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_il2cpp_TypeInfo_var);
		YieldAwaiter_QueueContinuation_m74F0C35BAB324C9DB810F8F60BA6BDBCAA5E0201(L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void YieldAwaiter_UnsafeOnCompleted_mFDE8CFD013E3825F11C68314E8957E6DAF79C6A5_AdjustorThunk (RuntimeObject * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * _thisAdjusted = reinterpret_cast<YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *>(__this + _offset);
	YieldAwaiter_UnsafeOnCompleted_mFDE8CFD013E3825F11C68314E8957E6DAF79C6A5(_thisAdjusted, ___continuation0, method);
}
// System.Void System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::QueueContinuation(System.Action,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldAwaiter_QueueContinuation_m74F0C35BAB324C9DB810F8F60BA6BDBCAA5E0201 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, bool ___flowContext1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * V_0 = NULL;
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * V_1 = NULL;
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___continuation0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&YieldAwaiter_QueueContinuation_m74F0C35BAB324C9DB810F8F60BA6BDBCAA5E0201_RuntimeMethod_var)));
	}

IL_000e:
	{
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_2;
		L_2 = SynchronizationContext_get_CurrentNoFlow_mF134FBE4BA52932C990D3824A9CF960FCA9F44AD(/*hidden argument*/NULL);
		V_0 = L_2;
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_4 = V_0;
		NullCheck(L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_4, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_6, /*hidden argument*/NULL);
		bool L_8;
		L_8 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_5, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_il2cpp_TypeInfo_var);
		SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_10 = ((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_StaticFields*)il2cpp_codegen_static_fields_for(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_il2cpp_TypeInfo_var))->get_s_sendOrPostCallbackRunAction_1();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_11 = ___continuation0;
		NullCheck(L_9);
		VirtActionInvoker2< SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C *, RuntimeObject * >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_9, L_10, L_11);
		return;
	}

IL_003b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var);
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_12;
		L_12 = TaskScheduler_get_Current_m9B2B54B9B43FC6E157E04ABE9151F6A0FF124C01(/*hidden argument*/NULL);
		V_1 = L_12;
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_13 = V_1;
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_14;
		L_14 = TaskScheduler_get_Default_m3FAE18B08A620C75BF0256917EFB236D30AB6BCB_inline(/*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)L_13) == ((RuntimeObject*)(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)L_14))))
		{
			goto IL_0066;
		}
	}
	{
		bool L_15 = ___flowContext1;
		if (!L_15)
		{
			goto IL_0059;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_il2cpp_TypeInfo_var);
		WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * L_16 = ((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_StaticFields*)il2cpp_codegen_static_fields_for(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_il2cpp_TypeInfo_var))->get_s_waitCallbackRunAction_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_17 = ___continuation0;
		bool L_18;
		L_18 = ThreadPool_QueueUserWorkItem_mA55899F403EAC69AE3C72A4F3E5FD207C131616C(L_16, L_17, /*hidden argument*/NULL);
		return;
	}

IL_0059:
	{
		IL2CPP_RUNTIME_CLASS_INIT(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_il2cpp_TypeInfo_var);
		WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * L_19 = ((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_StaticFields*)il2cpp_codegen_static_fields_for(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_il2cpp_TypeInfo_var))->get_s_waitCallbackRunAction_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_20 = ___continuation0;
		bool L_21;
		L_21 = ThreadPool_UnsafeQueueUserWorkItem_m9B9388DD623D33685D415D639455591D4DD967C6(L_19, L_20, /*hidden argument*/NULL);
		return;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * L_22;
		L_22 = Task_get_Factory_m452D636F3D5CBE5AA8746078C35C42F69BE61722_inline(/*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_23 = ___continuation0;
		il2cpp_codegen_initobj((&V_2), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_24 = V_2;
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_25 = V_1;
		NullCheck(L_22);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_26;
		L_26 = TaskFactory_StartNew_m5617E5F6A6D949C2E21A7E525FAC899E4B871904(L_22, L_23, L_24, 1, L_25, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::RunAction(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldAwaiter_RunAction_mBBA702DC1D80A6DF9715E898DD994F965E946759 (RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___state0;
		NullCheck(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * _thisAdjusted = reinterpret_cast<YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *>(__this + _offset);
	YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD(_thisAdjusted, method);
}
// System.Void System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldAwaiter__cctor_m44838E67AAFC9DD73295F66497F7A03FBD4A2C3B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YieldAwaiter_RunAction_mBBA702DC1D80A6DF9715E898DD994F965E946759_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * L_0 = (WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 *)il2cpp_codegen_object_new(WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319_il2cpp_TypeInfo_var);
		WaitCallback__ctor_m50EFFE5096DF1DE733EA9895CEEC8EB6F142D5D5(L_0, NULL, (intptr_t)((intptr_t)YieldAwaiter_RunAction_mBBA702DC1D80A6DF9715E898DD994F965E946759_RuntimeMethod_var), /*hidden argument*/NULL);
		((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_StaticFields*)il2cpp_codegen_static_fields_for(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_il2cpp_TypeInfo_var))->set_s_waitCallbackRunAction_0(L_0);
		SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_1 = (SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C *)il2cpp_codegen_object_new(SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_m68774F2BDC46DE2BA6C3D61D66481FD4D994F6A4(L_1, NULL, (intptr_t)((intptr_t)YieldAwaiter_RunAction_mBBA702DC1D80A6DF9715E898DD994F965E946759_RuntimeMethod_var), /*hidden argument*/NULL);
		((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_StaticFields*)il2cpp_codegen_static_fields_for(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_il2cpp_TypeInfo_var))->set_s_sendOrPostCallbackRunAction_1(L_1);
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
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF (WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF * __this, int32_t ___keyCode0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___keyCode0);

	return static_cast<bool>(returnValue);
}
// System.Void System.Console/WindowsConsole/WindowsCancelHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsCancelHandler__ctor_mE4F754395799D3462EE23E39126EE0AF14709B8E (WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean System.Console/WindowsConsole/WindowsCancelHandler::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsCancelHandler_Invoke_mC8798AF8C04F477C72E281B924EBE6C738548068 (WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF * __this, int32_t ___keyCode0, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef bool (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___keyCode0, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___keyCode0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, int32_t >::Invoke(targetMethod, targetThis, ___keyCode0);
					else
						result = GenericVirtFuncInvoker1< bool, int32_t >::Invoke(targetMethod, targetThis, ___keyCode0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___keyCode0);
					else
						result = VirtFuncInvoker1< bool, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___keyCode0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___keyCode0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Console/WindowsConsole/WindowsCancelHandler::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsCancelHandler_BeginInvoke_m3F4FB809BF25992CAA49781D6C2DAE6B8B967322 (WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF * __this, int32_t ___keyCode0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___keyCode0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Boolean System.Console/WindowsConsole/WindowsCancelHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsCancelHandler_EndInvoke_m46613D19C0EB5D2A0B5CCB7BDA60906C95908609 (WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.Stream/SynchronousAsyncResult/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7FB8166A66FF58669CB59F32A9301B483CB8BE4A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB * L_0 = (U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB *)il2cpp_codegen_object_new(U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m25FD09827E688A2665AA1918B69FB7B2421E8235(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void System.IO.Stream/SynchronousAsyncResult/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m25FD09827E688A2665AA1918B69FB7B2421E8235 (U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.ManualResetEvent System.IO.Stream/SynchronousAsyncResult/<>c::<get_AsyncWaitHandle>b__12_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * U3CU3Ec_U3Cget_AsyncWaitHandleU3Eb__12_0_m30F2C3EEF4109B825474FF30D6A4A4291DC3848B (U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_0 = (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA *)il2cpp_codegen_object_new(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850(L_0, (bool)1, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * TaskScheduler_get_Default_m3FAE18B08A620C75BF0256917EFB236D30AB6BCB_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var);
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_0 = ((TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields*)il2cpp_codegen_static_fields_for(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var))->get_s_defaultTaskScheduler_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * Task_get_Factory_m452D636F3D5CBE5AA8746078C35C42F69BE61722_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * L_0 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields*)il2cpp_codegen_static_fields_for(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var))->get_s_factory_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
