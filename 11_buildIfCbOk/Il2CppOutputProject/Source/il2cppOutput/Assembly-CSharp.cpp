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

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Confluent.Kafka.ClientConfig
struct ClientConfig_t6BE54194D72532C6794973A3F5EB4C12A1E6034A;
// Confluent.Kafka.ConsumeResult`2<Confluent.Kafka.Ignore,System.String>
struct ConsumeResult_2_t60CAC774BB2542D462AD42D14F9583599ADAD63F;
// Confluent.Kafka.ConsumeResult`2<System.Byte[],System.Byte[]>
struct ConsumeResult_2_t8A42FB5DEDFD563A54567F1AB01FDF8791D746F0;
// Confluent.Kafka.ConsumeResult`2<System.Object,System.Object>
struct ConsumeResult_2_t148497F7E93E980FDFE6FC992F241C0DBF4E60BF;
// Confluent.Kafka.ConsumerBuilder`2<Confluent.Kafka.Ignore,System.String>
struct ConsumerBuilder_2_t41319FE33FF577D48F558A275C373EE6D63D062F;
// Confluent.Kafka.ConsumerBuilder`2<System.Object,System.Object>
struct ConsumerBuilder_2_tB4A624E9FFD76FCE10BA5376DB6572D9F6C9F4E0;
// Confluent.Kafka.ConsumerConfig
struct ConsumerConfig_t3DA201A2CF15332DD0013FF0704BD90AFC724EE4;
// Confluent.Kafka.Error
struct Error_tDB0A7443D23E63BE29D50C4AA4CEA2C77EBBD190;
// Confluent.Kafka.IConsumer`2<Confluent.Kafka.Ignore,System.String>
struct IConsumer_2_tCD0D7F4CC4A7A7F5CE243D7DCD4CC9F662CFB500;
// Confluent.Kafka.IDeserializer`1<Confluent.Kafka.Ignore>
struct IDeserializer_1_t6EF0E70353FF1B212F177B7532EACD78EB714A90;
// Confluent.Kafka.IDeserializer`1<System.String>
struct IDeserializer_1_t4BE546199F0E777131A258298ED9BE318604732A;
// Confluent.Kafka.KafkaException
struct KafkaException_t11E2294B0DF380890AC3C41667ED3DEDF1D6B4DB;
// Confluent.Kafka.Message`2<Confluent.Kafka.Ignore,System.String>
struct Message_2_tF699341A7338CC5F3DCA87923ADFBE339C5CC2C8;
// Confluent.Kafka.TopicPartitionOffset
struct TopicPartitionOffset_t0608BC9C5125E0FDD89D056D88A403467932AFA0;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`2<Confluent.Kafka.IConsumer`2<Confluent.Kafka.Ignore,System.String>,Confluent.Kafka.CommittedOffsets>
struct Action_2_t5133BA702A76C8017DA1F871350991461CD1562B;
// System.Action`2<Confluent.Kafka.IConsumer`2<Confluent.Kafka.Ignore,System.String>,Confluent.Kafka.Error>
struct Action_2_tA4CFA975EE21E2F1C3EDD558A738C6B676F92E04;
// System.Action`2<Confluent.Kafka.IConsumer`2<Confluent.Kafka.Ignore,System.String>,Confluent.Kafka.LogMessage>
struct Action_2_tE68C12961FE070704D6780DFEE5A5AB2969AAA6A;
// System.Action`2<Confluent.Kafka.IConsumer`2<Confluent.Kafka.Ignore,System.String>,System.String>
struct Action_2_t2C7E81365646205E5FE5260CBA0CE420EB2758FA;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t8D4B47914EFD2300DFBC7D9626F3D538CFA7CA53;
// System.Collections.Generic.IEnumerable`1<System.Char>
struct IEnumerable_1_t904EBE1B48B8D2EF3CC4A02E22B202F044F1F116;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IEnumerable_1_t2217ACCE269DD17C43012B0B901A95D7EB597B74;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Func`3<Confluent.Kafka.IConsumer`2<Confluent.Kafka.Ignore,System.String>,System.Collections.Generic.List`1<Confluent.Kafka.TopicPartition>,System.Collections.Generic.IEnumerable`1<Confluent.Kafka.TopicPartitionOffset>>
struct Func_3_tE1737E079B39A48F09FB7264136666A14C32F674;
// System.Func`3<Confluent.Kafka.IConsumer`2<Confluent.Kafka.Ignore,System.String>,System.Collections.Generic.List`1<Confluent.Kafka.TopicPartitionOffset>,System.Collections.Generic.IEnumerable`1<Confluent.Kafka.TopicPartitionOffset>>
struct Func_3_t28AAC24A3C3C2ECDDC6AA739899C53D98A9A9158;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36;
// System.Threading.CancellationTokenRegistration[]
struct CancellationTokenRegistrationU5BU5D_t4B36771A6344CFC66696BB16419C664E286DAF1B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE;
// System.Threading.ManualResetEvent
struct ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408;
// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[]
struct SparselyPopulatedArray_1U5BU5D_tF1A5F348104DB1ECF18799250B41740FCAA77813;
// System.Threading.Timer
struct Timer_t67FAB8E41573B4FA09CA56AE30725AF4297C2553;
// System.Threading.TimerCallback
struct TimerCallback_tC89F2FB1294A86F64DEB2C1F68024954018AA219;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.TextMesh
struct TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A;
// main
struct main_tF90C8171865D04F2F0453FB628A66C2599896835;

IL2CPP_EXTERN_C RuntimeClass* CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConsumeException_t4C9A32A62D11F531EDC431B389958207B349EE85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConsumerBuilder_2_t41319FE33FF577D48F558A275C373EE6D63D062F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConsumerConfig_t3DA201A2CF15332DD0013FF0704BD90AFC724EE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IConsumer_2_tCD0D7F4CC4A7A7F5CE243D7DCD4CC9F662CFB500_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationCanceledException_tD28B1AE59ACCE4D46333BFE398395B8D75D76A90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0541F0BDEA4EFF050F83162A929A8F652B39CF2C;
IL2CPP_EXTERN_C String_t* _stringLiteral255890AAC1DE32FD9AAC494C649D46F566104A59;
IL2CPP_EXTERN_C String_t* _stringLiteral26E328DA065EC162E2C9C670ACE64C9DFB10954A;
IL2CPP_EXTERN_C String_t* _stringLiteral3057B1282CC55DB3E4B38522AB876ADA82870264;
IL2CPP_EXTERN_C String_t* _stringLiteral316848555D58423E64AF6955B6E736BE6C12A524;
IL2CPP_EXTERN_C String_t* _stringLiteral3240AA0FE3CA15051680641A59E8D7B61C286B23;
IL2CPP_EXTERN_C String_t* _stringLiteral3566D29D6C2F601A0DA4659CDA6AFC773ADAE769;
IL2CPP_EXTERN_C String_t* _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727;
IL2CPP_EXTERN_C String_t* _stringLiteral595A7D0ABE752020C2CA57F70EF210270DD0B02B;
IL2CPP_EXTERN_C String_t* _stringLiteral5BF88C0522F1FDCF679D5BF0499DF70ACEAD57F2;
IL2CPP_EXTERN_C String_t* _stringLiteral769D12A87683520D0502B533D57A09EF9E361A96;
IL2CPP_EXTERN_C String_t* _stringLiteral7BAA83810E3AB51ABB925803C79201491C2D6C2A;
IL2CPP_EXTERN_C String_t* _stringLiteral8761D26FB8D6C7853FAF7CF13FD3E5471364DC36;
IL2CPP_EXTERN_C String_t* _stringLiteral8F4E3E3C24BAC71B4FFDF2BC0F73246D601766D4;
IL2CPP_EXTERN_C String_t* _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC;
IL2CPP_EXTERN_C String_t* _stringLiteralBD9EC4A4352057B9B369A7BF1A4DC39A5E15703F;
IL2CPP_EXTERN_C String_t* _stringLiteralBDCC8971DCE13E3A20B1D7A768D4824442B48091;
IL2CPP_EXTERN_C String_t* _stringLiteralD440A8419246C7AA465A6231CE29601C96FF71F0;
IL2CPP_EXTERN_C const RuntimeMethod* ConsumeResult_2_get_TopicPartitionOffset_m1F2E57F15DCC8507424BFC3CA3E372EE645E2B99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConsumeResult_2_get_Value_m5D45483CD07D605E9131A8AE2C847B8C675AB2C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConsumerBuilder_2__ctor_m98392CFB4165C2DF163ED364E0061C17D89706E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mFA8DD0738BFD62868AD614F1B088BE81A30F2F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m73F79DC95E79B9231FA0A2D510AB95BDB2E731C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t main_Start_m9D564C32C4F49B9E913E20AA71EFAA4C79E368E5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t main_Update_m2ABA7C25C952ABCAC24F18E551CE1F75598DC71A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t main_consumeOnce_m8C0C8AA531A77B7907F3FF6F41717A00DE35816F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t main_print_m7E16BD35E178E96F689C8A05235328C716D38901_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t main_toggleLogging_mC8077FC60EF4BC5361D3B1181596F9AE70DFC73F_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};


// System.Object


// Confluent.Kafka.Config
struct  Config_t896684C4475E3F6DDF8316FA579F05833887F67F  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Confluent.Kafka.Config::properties
	RuntimeObject* ___properties_1;

public:
	inline static int32_t get_offset_of_properties_1() { return static_cast<int32_t>(offsetof(Config_t896684C4475E3F6DDF8316FA579F05833887F67F, ___properties_1)); }
	inline RuntimeObject* get_properties_1() const { return ___properties_1; }
	inline RuntimeObject** get_address_of_properties_1() { return &___properties_1; }
	inline void set_properties_1(RuntimeObject* value)
	{
		___properties_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___properties_1), (void*)value);
	}
};

struct Config_t896684C4475E3F6DDF8316FA579F05833887F67F_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Confluent.Kafka.Config::EnumNameToConfigValueSubstitutes
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ___EnumNameToConfigValueSubstitutes_0;

public:
	inline static int32_t get_offset_of_EnumNameToConfigValueSubstitutes_0() { return static_cast<int32_t>(offsetof(Config_t896684C4475E3F6DDF8316FA579F05833887F67F_StaticFields, ___EnumNameToConfigValueSubstitutes_0)); }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * get_EnumNameToConfigValueSubstitutes_0() const { return ___EnumNameToConfigValueSubstitutes_0; }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC ** get_address_of_EnumNameToConfigValueSubstitutes_0() { return &___EnumNameToConfigValueSubstitutes_0; }
	inline void set_EnumNameToConfigValueSubstitutes_0(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * value)
	{
		___EnumNameToConfigValueSubstitutes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnumNameToConfigValueSubstitutes_0), (void*)value);
	}
};


// Confluent.Kafka.ConsumerBuilder`2<Confluent.Kafka.Ignore,System.String>
struct  ConsumerBuilder_2_t41319FE33FF577D48F558A275C373EE6D63D062F  : public RuntimeObject
{
public:
	// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>> Confluent.Kafka.ConsumerBuilder`2::<Config>k__BackingField
	RuntimeObject* ___U3CConfigU3Ek__BackingField_0;
	// System.Action`2<Confluent.Kafka.IConsumer`2<TKey,TValue>,Confluent.Kafka.Error> Confluent.Kafka.ConsumerBuilder`2::<ErrorHandler>k__BackingField
	Action_2_tA4CFA975EE21E2F1C3EDD558A738C6B676F92E04 * ___U3CErrorHandlerU3Ek__BackingField_1;
	// System.Action`2<Confluent.Kafka.IConsumer`2<TKey,TValue>,Confluent.Kafka.LogMessage> Confluent.Kafka.ConsumerBuilder`2::<LogHandler>k__BackingField
	Action_2_tE68C12961FE070704D6780DFEE5A5AB2969AAA6A * ___U3CLogHandlerU3Ek__BackingField_2;
	// System.Action`2<Confluent.Kafka.IConsumer`2<TKey,TValue>,System.String> Confluent.Kafka.ConsumerBuilder`2::<StatisticsHandler>k__BackingField
	Action_2_t2C7E81365646205E5FE5260CBA0CE420EB2758FA * ___U3CStatisticsHandlerU3Ek__BackingField_3;
	// Confluent.Kafka.IDeserializer`1<TKey> Confluent.Kafka.ConsumerBuilder`2::<KeyDeserializer>k__BackingField
	RuntimeObject* ___U3CKeyDeserializerU3Ek__BackingField_4;
	// Confluent.Kafka.IDeserializer`1<TValue> Confluent.Kafka.ConsumerBuilder`2::<ValueDeserializer>k__BackingField
	RuntimeObject* ___U3CValueDeserializerU3Ek__BackingField_5;
	// System.Func`3<Confluent.Kafka.IConsumer`2<TKey,TValue>,System.Collections.Generic.List`1<Confluent.Kafka.TopicPartition>,System.Collections.Generic.IEnumerable`1<Confluent.Kafka.TopicPartitionOffset>> Confluent.Kafka.ConsumerBuilder`2::<PartitionsAssignedHandler>k__BackingField
	Func_3_tE1737E079B39A48F09FB7264136666A14C32F674 * ___U3CPartitionsAssignedHandlerU3Ek__BackingField_6;
	// System.Func`3<Confluent.Kafka.IConsumer`2<TKey,TValue>,System.Collections.Generic.List`1<Confluent.Kafka.TopicPartitionOffset>,System.Collections.Generic.IEnumerable`1<Confluent.Kafka.TopicPartitionOffset>> Confluent.Kafka.ConsumerBuilder`2::<PartitionsRevokedHandler>k__BackingField
	Func_3_t28AAC24A3C3C2ECDDC6AA739899C53D98A9A9158 * ___U3CPartitionsRevokedHandlerU3Ek__BackingField_7;
	// System.Action`2<Confluent.Kafka.IConsumer`2<TKey,TValue>,Confluent.Kafka.CommittedOffsets> Confluent.Kafka.ConsumerBuilder`2::<OffsetsCommittedHandler>k__BackingField
	Action_2_t5133BA702A76C8017DA1F871350991461CD1562B * ___U3COffsetsCommittedHandlerU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CConfigU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ConsumerBuilder_2_t41319FE33FF577D48F558A275C373EE6D63D062F, ___U3CConfigU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CConfigU3Ek__BackingField_0() const { return ___U3CConfigU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CConfigU3Ek__BackingField_0() { return &___U3CConfigU3Ek__BackingField_0; }
	inline void set_U3CConfigU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CConfigU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CErrorHandlerU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ConsumerBuilder_2_t41319FE33FF577D48F558A275C373EE6D63D062F, ___U3CErrorHandlerU3Ek__BackingField_1)); }
	inline Action_2_tA4CFA975EE21E2F1C3EDD558A738C6B676F92E04 * get_U3CErrorHandlerU3Ek__BackingField_1() const { return ___U3CErrorHandlerU3Ek__BackingField_1; }
	inline Action_2_tA4CFA975EE21E2F1C3EDD558A738C6B676F92E04 ** get_address_of_U3CErrorHandlerU3Ek__BackingField_1() { return &___U3CErrorHandlerU3Ek__BackingField_1; }
	inline void set_U3CErrorHandlerU3Ek__BackingField_1(Action_2_tA4CFA975EE21E2F1C3EDD558A738C6B676F92E04 * value)
	{
		___U3CErrorHandlerU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorHandlerU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLogHandlerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ConsumerBuilder_2_t41319FE33FF577D48F558A275C373EE6D63D062F, ___U3CLogHandlerU3Ek__BackingField_2)); }
	inline Action_2_tE68C12961FE070704D6780DFEE5A5AB2969AAA6A * get_U3CLogHandlerU3Ek__BackingField_2() const { return ___U3CLogHandlerU3Ek__BackingField_2; }
	inline Action_2_tE68C12961FE070704D6780DFEE5A5AB2969AAA6A ** get_address_of_U3CLogHandlerU3Ek__BackingField_2() { return &___U3CLogHandlerU3Ek__BackingField_2; }
	inline void set_U3CLogHandlerU3Ek__BackingField_2(Action_2_tE68C12961FE070704D6780DFEE5A5AB2969AAA6A * value)
	{
		___U3CLogHandlerU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLogHandlerU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStatisticsHandlerU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ConsumerBuilder_2_t41319FE33FF577D48F558A275C373EE6D63D062F, ___U3CStatisticsHandlerU3Ek__BackingField_3)); }
	inline Action_2_t2C7E81365646205E5FE5260CBA0CE420EB2758FA * get_U3CStatisticsHandlerU3Ek__BackingField_3() const { return ___U3CStatisticsHandlerU3Ek__BackingField_3; }
	inline Action_2_t2C7E81365646205E5FE5260CBA0CE420EB2758FA ** get_address_of_U3CStatisticsHandlerU3Ek__BackingField_3() { return &___U3CStatisticsHandlerU3Ek__BackingField_3; }
	inline void set_U3CStatisticsHandlerU3Ek__BackingField_3(Action_2_t2C7E81365646205E5FE5260CBA0CE420EB2758FA * value)
	{
		___U3CStatisticsHandlerU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStatisticsHandlerU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CKeyDeserializerU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ConsumerBuilder_2_t41319FE33FF577D48F558A275C373EE6D63D062F, ___U3CKeyDeserializerU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CKeyDeserializerU3Ek__BackingField_4() const { return ___U3CKeyDeserializerU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CKeyDeserializerU3Ek__BackingField_4() { return &___U3CKeyDeserializerU3Ek__BackingField_4; }
	inline void set_U3CKeyDeserializerU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CKeyDeserializerU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeyDeserializerU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueDeserializerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ConsumerBuilder_2_t41319FE33FF577D48F558A275C373EE6D63D062F, ___U3CValueDeserializerU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CValueDeserializerU3Ek__BackingField_5() const { return ___U3CValueDeserializerU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CValueDeserializerU3Ek__BackingField_5() { return &___U3CValueDeserializerU3Ek__BackingField_5; }
	inline void set_U3CValueDeserializerU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CValueDeserializerU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueDeserializerU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPartitionsAssignedHandlerU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ConsumerBuilder_2_t41319FE33FF577D48F558A275C373EE6D63D062F, ___U3CPartitionsAssignedHandlerU3Ek__BackingField_6)); }
	inline Func_3_tE1737E079B39A48F09FB7264136666A14C32F674 * get_U3CPartitionsAssignedHandlerU3Ek__BackingField_6() const { return ___U3CPartitionsAssignedHandlerU3Ek__BackingField_6; }
	inline Func_3_tE1737E079B39A48F09FB7264136666A14C32F674 ** get_address_of_U3CPartitionsAssignedHandlerU3Ek__BackingField_6() { return &___U3CPartitionsAssignedHandlerU3Ek__BackingField_6; }
	inline void set_U3CPartitionsAssignedHandlerU3Ek__BackingField_6(Func_3_tE1737E079B39A48F09FB7264136666A14C32F674 * value)
	{
		___U3CPartitionsAssignedHandlerU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPartitionsAssignedHandlerU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPartitionsRevokedHandlerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ConsumerBuilder_2_t41319FE33FF577D48F558A275C373EE6D63D062F, ___U3CPartitionsRevokedHandlerU3Ek__BackingField_7)); }
	inline Func_3_t28AAC24A3C3C2ECDDC6AA739899C53D98A9A9158 * get_U3CPartitionsRevokedHandlerU3Ek__BackingField_7() const { return ___U3CPartitionsRevokedHandlerU3Ek__BackingField_7; }
	inline Func_3_t28AAC24A3C3C2ECDDC6AA739899C53D98A9A9158 ** get_address_of_U3CPartitionsRevokedHandlerU3Ek__BackingField_7() { return &___U3CPartitionsRevokedHandlerU3Ek__BackingField_7; }
	inline void set_U3CPartitionsRevokedHandlerU3Ek__BackingField_7(Func_3_t28AAC24A3C3C2ECDDC6AA739899C53D98A9A9158 * value)
	{
		___U3CPartitionsRevokedHandlerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPartitionsRevokedHandlerU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3COffsetsCommittedHandlerU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ConsumerBuilder_2_t41319FE33FF577D48F558A275C373EE6D63D062F, ___U3COffsetsCommittedHandlerU3Ek__BackingField_8)); }
	inline Action_2_t5133BA702A76C8017DA1F871350991461CD1562B * get_U3COffsetsCommittedHandlerU3Ek__BackingField_8() const { return ___U3COffsetsCommittedHandlerU3Ek__BackingField_8; }
	inline Action_2_t5133BA702A76C8017DA1F871350991461CD1562B ** get_address_of_U3COffsetsCommittedHandlerU3Ek__BackingField_8() { return &___U3COffsetsCommittedHandlerU3Ek__BackingField_8; }
	inline void set_U3COffsetsCommittedHandlerU3Ek__BackingField_8(Action_2_t5133BA702A76C8017DA1F871350991461CD1562B * value)
	{
		___U3COffsetsCommittedHandlerU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COffsetsCommittedHandlerU3Ek__BackingField_8), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct  String_t  : public RuntimeObject
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


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// Confluent.Kafka.ClientConfig
struct  ClientConfig_t6BE54194D72532C6794973A3F5EB4C12A1E6034A  : public Config_t896684C4475E3F6DDF8316FA579F05833887F67F
{
public:

public:
};


// Confluent.Kafka.Offset
struct  Offset_tFB87B0BCF58DDF22C24C3B38BA99F7B4025D0558 
{
public:
	// System.Int64 Confluent.Kafka.Offset::<Value>k__BackingField
	int64_t ___U3CValueU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Offset_tFB87B0BCF58DDF22C24C3B38BA99F7B4025D0558, ___U3CValueU3Ek__BackingField_8)); }
	inline int64_t get_U3CValueU3Ek__BackingField_8() const { return ___U3CValueU3Ek__BackingField_8; }
	inline int64_t* get_address_of_U3CValueU3Ek__BackingField_8() { return &___U3CValueU3Ek__BackingField_8; }
	inline void set_U3CValueU3Ek__BackingField_8(int64_t value)
	{
		___U3CValueU3Ek__BackingField_8 = value;
	}
};

struct Offset_tFB87B0BCF58DDF22C24C3B38BA99F7B4025D0558_StaticFields
{
public:
	// Confluent.Kafka.Offset Confluent.Kafka.Offset::Beginning
	Offset_tFB87B0BCF58DDF22C24C3B38BA99F7B4025D0558  ___Beginning_4;
	// Confluent.Kafka.Offset Confluent.Kafka.Offset::End
	Offset_tFB87B0BCF58DDF22C24C3B38BA99F7B4025D0558  ___End_5;
	// Confluent.Kafka.Offset Confluent.Kafka.Offset::Stored
	Offset_tFB87B0BCF58DDF22C24C3B38BA99F7B4025D0558  ___Stored_6;
	// Confluent.Kafka.Offset Confluent.Kafka.Offset::Unset
	Offset_tFB87B0BCF58DDF22C24C3B38BA99F7B4025D0558  ___Unset_7;

public:
	inline static int32_t get_offset_of_Beginning_4() { return static_cast<int32_t>(offsetof(Offset_tFB87B0BCF58DDF22C24C3B38BA99F7B4025D0558_StaticFields, ___Beginning_4)); }
	inline Offset_tFB87B0BCF58DDF22C24C3B38BA99F7B4025D0558  get_Beginning_4() const { return ___Beginning_4; }
	inline Offset_tFB87B0BCF58DDF22C24C3B38BA99F7B4025D0558 * get_address_of_Beginning_4() { return &___Beginning_4; }
	inline void set_Beginning_4(Offset_tFB87B0BCF58DDF22C24C3B38BA99F7B4025D0558  value)
	{
		___Beginning_4 = value;
	}

	inline static int32_t get_offset_of_End_5() { return static_cast<int32_t>(offsetof(Offset_tFB87B0BCF58DDF22C24C3B38BA99F7B4025D0558_StaticFields, ___End_5)); }
	inline Offset_tFB87B0BCF58DDF22C24C3B38BA99F7B4025D0558  get_End_5() const { return ___End_5; }
	inline Offset_tFB87B0BCF58DDF22C24C3B38BA99F7B4025D0558 * get_address_of_End_5() { return &___End_5; }
	inline void set_End_5(Offset_tFB87B0BCF58DDF22C24C3B38BA99F7B4025D0558  value)
	{
		___End_5 = value;
	}

	inline static int32_t get_offset_of_Stored_6() { return static_cast<int32_t>(offsetof(Offset_tFB87B0BCF58DDF22C24C3B38BA99F7B4025D0558_StaticFields, ___Stored_6)); }
	inline Offset_tFB87B0BCF58DDF22C24C3B38BA99F7B4025D0558  get_Stored_6() const { return ___Stored_6; }
	inline Offset_tFB87B0BCF58DDF22C24C3B38BA99F7B4025D0558 * get_address_of_Stored_6() { return &___Stored_6; }
	inline void set_Stored_6(Offset_tFB87B0BCF58DDF22C24C3B38BA99F7B4025D0558  value)
	{
		___Stored_6 = value;
	}

	inline static int32_t get_offset_of_Unset_7() { return static_cast<int32_t>(offsetof(Offset_tFB87B0BCF58DDF22C24C3B38BA99F7B4025D0558_StaticFields, ___Unset_7)); }
	inline Offset_tFB87B0BCF58DDF22C24C3B38BA99F7B4025D0558  get_Unset_7() const { return ___Unset_7; }
	inline Offset_tFB87B0BCF58DDF22C24C3B38BA99F7B4025D0558 * get_address_of_Unset_7() { return &___Unset_7; }
	inline void set_Unset_7(Offset_tFB87B0BCF58DDF22C24C3B38BA99F7B4025D0558  value)
	{
		___Unset_7 = value;
	}
};


// Confluent.Kafka.Partition
struct  Partition_t30907B803829A9E8F69432247940905BEA10B7E4 
{
public:
	// System.Int32 Confluent.Kafka.Partition::<Value>k__BackingField
	int32_t ___U3CValueU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Partition_t30907B803829A9E8F69432247940905BEA10B7E4, ___U3CValueU3Ek__BackingField_2)); }
	inline int32_t get_U3CValueU3Ek__BackingField_2() const { return ___U3CValueU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CValueU3Ek__BackingField_2() { return &___U3CValueU3Ek__BackingField_2; }
	inline void set_U3CValueU3Ek__BackingField_2(int32_t value)
	{
		___U3CValueU3Ek__BackingField_2 = value;
	}
};

struct Partition_t30907B803829A9E8F69432247940905BEA10B7E4_StaticFields
{
public:
	// Confluent.Kafka.Partition Confluent.Kafka.Partition::Any
	Partition_t30907B803829A9E8F69432247940905BEA10B7E4  ___Any_1;

public:
	inline static int32_t get_offset_of_Any_1() { return static_cast<int32_t>(offsetof(Partition_t30907B803829A9E8F69432247940905BEA10B7E4_StaticFields, ___Any_1)); }
	inline Partition_t30907B803829A9E8F69432247940905BEA10B7E4  get_Any_1() const { return ___Any_1; }
	inline Partition_t30907B803829A9E8F69432247940905BEA10B7E4 * get_address_of_Any_1() { return &___Any_1; }
	inline void set_Any_1(Partition_t30907B803829A9E8F69432247940905BEA10B7E4  value)
	{
		___Any_1 = value;
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


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


// System.Threading.CancellationToken
struct  CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB, ___m_source_0)); }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshaled_pinvoke
{
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshaled_com
{
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___m_source_0;
};

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// Confluent.Kafka.AutoOffsetReset
struct  AutoOffsetReset_t17B3D8C7A4B833CDCF718C16AB3708C7EAC69C60 
{
public:
	// System.Int32 Confluent.Kafka.AutoOffsetReset::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AutoOffsetReset_t17B3D8C7A4B833CDCF718C16AB3708C7EAC69C60, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Confluent.Kafka.ConsumeResult`2<Confluent.Kafka.Ignore,System.String>
struct  ConsumeResult_2_t60CAC774BB2542D462AD42D14F9583599ADAD63F  : public RuntimeObject
{
public:
	// System.String Confluent.Kafka.ConsumeResult`2::<Topic>k__BackingField
	String_t* ___U3CTopicU3Ek__BackingField_0;
	// Confluent.Kafka.Partition Confluent.Kafka.ConsumeResult`2::<Partition>k__BackingField
	Partition_t30907B803829A9E8F69432247940905BEA10B7E4  ___U3CPartitionU3Ek__BackingField_1;
	// Confluent.Kafka.Offset Confluent.Kafka.ConsumeResult`2::<Offset>k__BackingField
	Offset_tFB87B0BCF58DDF22C24C3B38BA99F7B4025D0558  ___U3COffsetU3Ek__BackingField_2;
	// Confluent.Kafka.Message`2<TKey,TValue> Confluent.Kafka.ConsumeResult`2::<Message>k__BackingField
	Message_2_tF699341A7338CC5F3DCA87923ADFBE339C5CC2C8 * ___U3CMessageU3Ek__BackingField_3;
	// System.Boolean Confluent.Kafka.ConsumeResult`2::<IsPartitionEOF>k__BackingField
	bool ___U3CIsPartitionEOFU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CTopicU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ConsumeResult_2_t60CAC774BB2542D462AD42D14F9583599ADAD63F, ___U3CTopicU3Ek__BackingField_0)); }
	inline String_t* get_U3CTopicU3Ek__BackingField_0() const { return ___U3CTopicU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CTopicU3Ek__BackingField_0() { return &___U3CTopicU3Ek__BackingField_0; }
	inline void set_U3CTopicU3Ek__BackingField_0(String_t* value)
	{
		___U3CTopicU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTopicU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPartitionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ConsumeResult_2_t60CAC774BB2542D462AD42D14F9583599ADAD63F, ___U3CPartitionU3Ek__BackingField_1)); }
	inline Partition_t30907B803829A9E8F69432247940905BEA10B7E4  get_U3CPartitionU3Ek__BackingField_1() const { return ___U3CPartitionU3Ek__BackingField_1; }
	inline Partition_t30907B803829A9E8F69432247940905BEA10B7E4 * get_address_of_U3CPartitionU3Ek__BackingField_1() { return &___U3CPartitionU3Ek__BackingField_1; }
	inline void set_U3CPartitionU3Ek__BackingField_1(Partition_t30907B803829A9E8F69432247940905BEA10B7E4  value)
	{
		___U3CPartitionU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3COffsetU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ConsumeResult_2_t60CAC774BB2542D462AD42D14F9583599ADAD63F, ___U3COffsetU3Ek__BackingField_2)); }
	inline Offset_tFB87B0BCF58DDF22C24C3B38BA99F7B4025D0558  get_U3COffsetU3Ek__BackingField_2() const { return ___U3COffsetU3Ek__BackingField_2; }
	inline Offset_tFB87B0BCF58DDF22C24C3B38BA99F7B4025D0558 * get_address_of_U3COffsetU3Ek__BackingField_2() { return &___U3COffsetU3Ek__BackingField_2; }
	inline void set_U3COffsetU3Ek__BackingField_2(Offset_tFB87B0BCF58DDF22C24C3B38BA99F7B4025D0558  value)
	{
		___U3COffsetU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ConsumeResult_2_t60CAC774BB2542D462AD42D14F9583599ADAD63F, ___U3CMessageU3Ek__BackingField_3)); }
	inline Message_2_tF699341A7338CC5F3DCA87923ADFBE339C5CC2C8 * get_U3CMessageU3Ek__BackingField_3() const { return ___U3CMessageU3Ek__BackingField_3; }
	inline Message_2_tF699341A7338CC5F3DCA87923ADFBE339C5CC2C8 ** get_address_of_U3CMessageU3Ek__BackingField_3() { return &___U3CMessageU3Ek__BackingField_3; }
	inline void set_U3CMessageU3Ek__BackingField_3(Message_2_tF699341A7338CC5F3DCA87923ADFBE339C5CC2C8 * value)
	{
		___U3CMessageU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsPartitionEOFU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ConsumeResult_2_t60CAC774BB2542D462AD42D14F9583599ADAD63F, ___U3CIsPartitionEOFU3Ek__BackingField_4)); }
	inline bool get_U3CIsPartitionEOFU3Ek__BackingField_4() const { return ___U3CIsPartitionEOFU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsPartitionEOFU3Ek__BackingField_4() { return &___U3CIsPartitionEOFU3Ek__BackingField_4; }
	inline void set_U3CIsPartitionEOFU3Ek__BackingField_4(bool value)
	{
		___U3CIsPartitionEOFU3Ek__BackingField_4 = value;
	}
};


// Confluent.Kafka.ConsumerConfig
struct  ConsumerConfig_t3DA201A2CF15332DD0013FF0704BD90AFC724EE4  : public ClientConfig_t6BE54194D72532C6794973A3F5EB4C12A1E6034A
{
public:

public:
};


// Confluent.Kafka.ErrorCode
struct  ErrorCode_t41346A4678F5D6DA41D2E161EA3EDC914DEBE4F2 
{
public:
	// System.Int32 Confluent.Kafka.ErrorCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ErrorCode_t41346A4678F5D6DA41D2E161EA3EDC914DEBE4F2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Confluent.Kafka.TopicPartitionOffset
struct  TopicPartitionOffset_t0608BC9C5125E0FDD89D056D88A403467932AFA0  : public RuntimeObject
{
public:
	// System.String Confluent.Kafka.TopicPartitionOffset::<Topic>k__BackingField
	String_t* ___U3CTopicU3Ek__BackingField_0;
	// Confluent.Kafka.Partition Confluent.Kafka.TopicPartitionOffset::<Partition>k__BackingField
	Partition_t30907B803829A9E8F69432247940905BEA10B7E4  ___U3CPartitionU3Ek__BackingField_1;
	// Confluent.Kafka.Offset Confluent.Kafka.TopicPartitionOffset::<Offset>k__BackingField
	Offset_tFB87B0BCF58DDF22C24C3B38BA99F7B4025D0558  ___U3COffsetU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CTopicU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TopicPartitionOffset_t0608BC9C5125E0FDD89D056D88A403467932AFA0, ___U3CTopicU3Ek__BackingField_0)); }
	inline String_t* get_U3CTopicU3Ek__BackingField_0() const { return ___U3CTopicU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CTopicU3Ek__BackingField_0() { return &___U3CTopicU3Ek__BackingField_0; }
	inline void set_U3CTopicU3Ek__BackingField_0(String_t* value)
	{
		___U3CTopicU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTopicU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPartitionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TopicPartitionOffset_t0608BC9C5125E0FDD89D056D88A403467932AFA0, ___U3CPartitionU3Ek__BackingField_1)); }
	inline Partition_t30907B803829A9E8F69432247940905BEA10B7E4  get_U3CPartitionU3Ek__BackingField_1() const { return ___U3CPartitionU3Ek__BackingField_1; }
	inline Partition_t30907B803829A9E8F69432247940905BEA10B7E4 * get_address_of_U3CPartitionU3Ek__BackingField_1() { return &___U3CPartitionU3Ek__BackingField_1; }
	inline void set_U3CPartitionU3Ek__BackingField_1(Partition_t30907B803829A9E8F69432247940905BEA10B7E4  value)
	{
		___U3CPartitionU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3COffsetU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TopicPartitionOffset_t0608BC9C5125E0FDD89D056D88A403467932AFA0, ___U3COffsetU3Ek__BackingField_2)); }
	inline Offset_tFB87B0BCF58DDF22C24C3B38BA99F7B4025D0558  get_U3COffsetU3Ek__BackingField_2() const { return ___U3COffsetU3Ek__BackingField_2; }
	inline Offset_tFB87B0BCF58DDF22C24C3B38BA99F7B4025D0558 * get_address_of_U3COffsetU3Ek__BackingField_2() { return &___U3COffsetU3Ek__BackingField_2; }
	inline void set_U3COffsetU3Ek__BackingField_2(Offset_tFB87B0BCF58DDF22C24C3B38BA99F7B4025D0558  value)
	{
		___U3COffsetU3Ek__BackingField_2 = value;
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.CancellationTokenSource
struct  CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE  : public RuntimeObject
{
public:
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_kernelEvent
	ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * ___m_kernelEvent_3;
	// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_registeredCallbacksLists
	SparselyPopulatedArray_1U5BU5D_tF1A5F348104DB1ECF18799250B41740FCAA77813* ___m_registeredCallbacksLists_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_state
	int32_t ___m_state_9;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_threadIDExecutingCallbacks
	int32_t ___m_threadIDExecutingCallbacks_10;
	// System.Boolean System.Threading.CancellationTokenSource::m_disposed
	bool ___m_disposed_11;
	// System.Threading.CancellationTokenRegistration[] System.Threading.CancellationTokenSource::m_linkingRegistrations
	CancellationTokenRegistrationU5BU5D_t4B36771A6344CFC66696BB16419C664E286DAF1B* ___m_linkingRegistrations_12;
	// System.Threading.CancellationCallbackInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_executingCallback
	CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * ___m_executingCallback_14;
	// System.Threading.Timer modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_timer
	Timer_t67FAB8E41573B4FA09CA56AE30725AF4297C2553 * ___m_timer_15;

public:
	inline static int32_t get_offset_of_m_kernelEvent_3() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_kernelEvent_3)); }
	inline ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * get_m_kernelEvent_3() const { return ___m_kernelEvent_3; }
	inline ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 ** get_address_of_m_kernelEvent_3() { return &___m_kernelEvent_3; }
	inline void set_m_kernelEvent_3(ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * value)
	{
		___m_kernelEvent_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_kernelEvent_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_registeredCallbacksLists_4() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_registeredCallbacksLists_4)); }
	inline SparselyPopulatedArray_1U5BU5D_tF1A5F348104DB1ECF18799250B41740FCAA77813* get_m_registeredCallbacksLists_4() const { return ___m_registeredCallbacksLists_4; }
	inline SparselyPopulatedArray_1U5BU5D_tF1A5F348104DB1ECF18799250B41740FCAA77813** get_address_of_m_registeredCallbacksLists_4() { return &___m_registeredCallbacksLists_4; }
	inline void set_m_registeredCallbacksLists_4(SparselyPopulatedArray_1U5BU5D_tF1A5F348104DB1ECF18799250B41740FCAA77813* value)
	{
		___m_registeredCallbacksLists_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_registeredCallbacksLists_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_9() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_state_9)); }
	inline int32_t get_m_state_9() const { return ___m_state_9; }
	inline int32_t* get_address_of_m_state_9() { return &___m_state_9; }
	inline void set_m_state_9(int32_t value)
	{
		___m_state_9 = value;
	}

	inline static int32_t get_offset_of_m_threadIDExecutingCallbacks_10() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_threadIDExecutingCallbacks_10)); }
	inline int32_t get_m_threadIDExecutingCallbacks_10() const { return ___m_threadIDExecutingCallbacks_10; }
	inline int32_t* get_address_of_m_threadIDExecutingCallbacks_10() { return &___m_threadIDExecutingCallbacks_10; }
	inline void set_m_threadIDExecutingCallbacks_10(int32_t value)
	{
		___m_threadIDExecutingCallbacks_10 = value;
	}

	inline static int32_t get_offset_of_m_disposed_11() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_disposed_11)); }
	inline bool get_m_disposed_11() const { return ___m_disposed_11; }
	inline bool* get_address_of_m_disposed_11() { return &___m_disposed_11; }
	inline void set_m_disposed_11(bool value)
	{
		___m_disposed_11 = value;
	}

	inline static int32_t get_offset_of_m_linkingRegistrations_12() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_linkingRegistrations_12)); }
	inline CancellationTokenRegistrationU5BU5D_t4B36771A6344CFC66696BB16419C664E286DAF1B* get_m_linkingRegistrations_12() const { return ___m_linkingRegistrations_12; }
	inline CancellationTokenRegistrationU5BU5D_t4B36771A6344CFC66696BB16419C664E286DAF1B** get_address_of_m_linkingRegistrations_12() { return &___m_linkingRegistrations_12; }
	inline void set_m_linkingRegistrations_12(CancellationTokenRegistrationU5BU5D_t4B36771A6344CFC66696BB16419C664E286DAF1B* value)
	{
		___m_linkingRegistrations_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkingRegistrations_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_executingCallback_14() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_executingCallback_14)); }
	inline CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * get_m_executingCallback_14() const { return ___m_executingCallback_14; }
	inline CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 ** get_address_of_m_executingCallback_14() { return &___m_executingCallback_14; }
	inline void set_m_executingCallback_14(CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * value)
	{
		___m_executingCallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_executingCallback_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_timer_15() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_timer_15)); }
	inline Timer_t67FAB8E41573B4FA09CA56AE30725AF4297C2553 * get_m_timer_15() const { return ___m_timer_15; }
	inline Timer_t67FAB8E41573B4FA09CA56AE30725AF4297C2553 ** get_address_of_m_timer_15() { return &___m_timer_15; }
	inline void set_m_timer_15(Timer_t67FAB8E41573B4FA09CA56AE30725AF4297C2553 * value)
	{
		___m_timer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_timer_15), (void*)value);
	}
};

struct CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_StaticFields
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::_staticSource_Set
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ____staticSource_Set_0;
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::_staticSource_NotCancelable
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ____staticSource_NotCancelable_1;
	// System.Int32 System.Threading.CancellationTokenSource::s_nLists
	int32_t ___s_nLists_2;
	// System.Action`1<System.Object> System.Threading.CancellationTokenSource::s_LinkedTokenCancelDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_LinkedTokenCancelDelegate_13;
	// System.Threading.TimerCallback System.Threading.CancellationTokenSource::s_timerCallback
	TimerCallback_tC89F2FB1294A86F64DEB2C1F68024954018AA219 * ___s_timerCallback_16;

public:
	inline static int32_t get_offset_of__staticSource_Set_0() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_StaticFields, ____staticSource_Set_0)); }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * get__staticSource_Set_0() const { return ____staticSource_Set_0; }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE ** get_address_of__staticSource_Set_0() { return &____staticSource_Set_0; }
	inline void set__staticSource_Set_0(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * value)
	{
		____staticSource_Set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____staticSource_Set_0), (void*)value);
	}

	inline static int32_t get_offset_of__staticSource_NotCancelable_1() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_StaticFields, ____staticSource_NotCancelable_1)); }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * get__staticSource_NotCancelable_1() const { return ____staticSource_NotCancelable_1; }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE ** get_address_of__staticSource_NotCancelable_1() { return &____staticSource_NotCancelable_1; }
	inline void set__staticSource_NotCancelable_1(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * value)
	{
		____staticSource_NotCancelable_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____staticSource_NotCancelable_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_nLists_2() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_StaticFields, ___s_nLists_2)); }
	inline int32_t get_s_nLists_2() const { return ___s_nLists_2; }
	inline int32_t* get_address_of_s_nLists_2() { return &___s_nLists_2; }
	inline void set_s_nLists_2(int32_t value)
	{
		___s_nLists_2 = value;
	}

	inline static int32_t get_offset_of_s_LinkedTokenCancelDelegate_13() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_StaticFields, ___s_LinkedTokenCancelDelegate_13)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_LinkedTokenCancelDelegate_13() const { return ___s_LinkedTokenCancelDelegate_13; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_LinkedTokenCancelDelegate_13() { return &___s_LinkedTokenCancelDelegate_13; }
	inline void set_s_LinkedTokenCancelDelegate_13(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_LinkedTokenCancelDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LinkedTokenCancelDelegate_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_timerCallback_16() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_StaticFields, ___s_timerCallback_16)); }
	inline TimerCallback_tC89F2FB1294A86F64DEB2C1F68024954018AA219 * get_s_timerCallback_16() const { return ___s_timerCallback_16; }
	inline TimerCallback_tC89F2FB1294A86F64DEB2C1F68024954018AA219 ** get_address_of_s_timerCallback_16() { return &___s_timerCallback_16; }
	inline void set_s_timerCallback_16(TimerCallback_tC89F2FB1294A86F64DEB2C1F68024954018AA219 * value)
	{
		___s_timerCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_timerCallback_16), (void*)value);
	}
};


// System.TimeSpan
struct  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_19)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_21)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Confluent.Kafka.Error
struct  Error_tDB0A7443D23E63BE29D50C4AA4CEA2C77EBBD190  : public RuntimeObject
{
public:
	// Confluent.Kafka.ErrorCode Confluent.Kafka.Error::<Code>k__BackingField
	int32_t ___U3CCodeU3Ek__BackingField_0;
	// System.Boolean Confluent.Kafka.Error::<IsFatal>k__BackingField
	bool ___U3CIsFatalU3Ek__BackingField_1;
	// System.String Confluent.Kafka.Error::reason
	String_t* ___reason_2;

public:
	inline static int32_t get_offset_of_U3CCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Error_tDB0A7443D23E63BE29D50C4AA4CEA2C77EBBD190, ___U3CCodeU3Ek__BackingField_0)); }
	inline int32_t get_U3CCodeU3Ek__BackingField_0() const { return ___U3CCodeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CCodeU3Ek__BackingField_0() { return &___U3CCodeU3Ek__BackingField_0; }
	inline void set_U3CCodeU3Ek__BackingField_0(int32_t value)
	{
		___U3CCodeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CIsFatalU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Error_tDB0A7443D23E63BE29D50C4AA4CEA2C77EBBD190, ___U3CIsFatalU3Ek__BackingField_1)); }
	inline bool get_U3CIsFatalU3Ek__BackingField_1() const { return ___U3CIsFatalU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIsFatalU3Ek__BackingField_1() { return &___U3CIsFatalU3Ek__BackingField_1; }
	inline void set_U3CIsFatalU3Ek__BackingField_1(bool value)
	{
		___U3CIsFatalU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_reason_2() { return static_cast<int32_t>(offsetof(Error_tDB0A7443D23E63BE29D50C4AA4CEA2C77EBBD190, ___reason_2)); }
	inline String_t* get_reason_2() const { return ___reason_2; }
	inline String_t** get_address_of_reason_2() { return &___reason_2; }
	inline void set_reason_2(String_t* value)
	{
		___reason_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reason_2), (void*)value);
	}
};


// Confluent.Kafka.KafkaException
struct  KafkaException_t11E2294B0DF380890AC3C41667ED3DEDF1D6B4DB  : public Exception_t
{
public:
	// Confluent.Kafka.Error Confluent.Kafka.KafkaException::<Error>k__BackingField
	Error_tDB0A7443D23E63BE29D50C4AA4CEA2C77EBBD190 * ___U3CErrorU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(KafkaException_t11E2294B0DF380890AC3C41667ED3DEDF1D6B4DB, ___U3CErrorU3Ek__BackingField_17)); }
	inline Error_tDB0A7443D23E63BE29D50C4AA4CEA2C77EBBD190 * get_U3CErrorU3Ek__BackingField_17() const { return ___U3CErrorU3Ek__BackingField_17; }
	inline Error_tDB0A7443D23E63BE29D50C4AA4CEA2C77EBBD190 ** get_address_of_U3CErrorU3Ek__BackingField_17() { return &___U3CErrorU3Ek__BackingField_17; }
	inline void set_U3CErrorU3Ek__BackingField_17(Error_tDB0A7443D23E63BE29D50C4AA4CEA2C77EBBD190 * value)
	{
		___U3CErrorU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorU3Ek__BackingField_17), (void*)value);
	}
};


// System.Nullable`1<Confluent.Kafka.AutoOffsetReset>
struct  Nullable_1_tF6D51127C910799CCD8BF5865F13C389B01BD3BA 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tF6D51127C910799CCD8BF5865F13C389B01BD3BA, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tF6D51127C910799CCD8BF5865F13C389B01BD3BA, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int32Enum>
struct  Nullable_1_tBCA4780CE8E9555A53CF0BA48AF742DA998C0833 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tBCA4780CE8E9555A53CF0BA48AF742DA998C0833, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tBCA4780CE8E9555A53CF0BA48AF742DA998C0833, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// Confluent.Kafka.ConsumeException
struct  ConsumeException_t4C9A32A62D11F531EDC431B389958207B349EE85  : public KafkaException_t11E2294B0DF380890AC3C41667ED3DEDF1D6B4DB
{
public:
	// Confluent.Kafka.ConsumeResult`2<System.Byte[],System.Byte[]> Confluent.Kafka.ConsumeException::<ConsumerRecord>k__BackingField
	ConsumeResult_2_t8A42FB5DEDFD563A54567F1AB01FDF8791D746F0 * ___U3CConsumerRecordU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_U3CConsumerRecordU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(ConsumeException_t4C9A32A62D11F531EDC431B389958207B349EE85, ___U3CConsumerRecordU3Ek__BackingField_18)); }
	inline ConsumeResult_2_t8A42FB5DEDFD563A54567F1AB01FDF8791D746F0 * get_U3CConsumerRecordU3Ek__BackingField_18() const { return ___U3CConsumerRecordU3Ek__BackingField_18; }
	inline ConsumeResult_2_t8A42FB5DEDFD563A54567F1AB01FDF8791D746F0 ** get_address_of_U3CConsumerRecordU3Ek__BackingField_18() { return &___U3CConsumerRecordU3Ek__BackingField_18; }
	inline void set_U3CConsumerRecordU3Ek__BackingField_18(ConsumeResult_2_t8A42FB5DEDFD563A54567F1AB01FDF8791D746F0 * value)
	{
		___U3CConsumerRecordU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConsumerRecordU3Ek__BackingField_18), (void*)value);
	}
};


// System.OperationCanceledException
struct  OperationCanceledException_tD28B1AE59ACCE4D46333BFE398395B8D75D76A90  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.Threading.CancellationToken System.OperationCanceledException::_cancellationToken
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ____cancellationToken_17;

public:
	inline static int32_t get_offset_of__cancellationToken_17() { return static_cast<int32_t>(offsetof(OperationCanceledException_tD28B1AE59ACCE4D46333BFE398395B8D75D76A90, ____cancellationToken_17)); }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  get__cancellationToken_17() const { return ____cancellationToken_17; }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * get_address_of__cancellationToken_17() { return &____cancellationToken_17; }
	inline void set__cancellationToken_17(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  value)
	{
		____cancellationToken_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____cancellationToken_17))->___m_source_0), (void*)NULL);
	}
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.TextMesh
struct  TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// main
struct  main_tF90C8171865D04F2F0453FB628A66C2599896835  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.TextMesh main::text
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___text_4;
	// Confluent.Kafka.ConsumerBuilder`2<Confluent.Kafka.Ignore,System.String> main::cb
	ConsumerBuilder_2_t41319FE33FF577D48F558A275C373EE6D63D062F * ___cb_5;
	// Confluent.Kafka.IConsumer`2<Confluent.Kafka.Ignore,System.String> main::c
	RuntimeObject* ___c_6;
	// Confluent.Kafka.ConsumerConfig main::conf
	ConsumerConfig_t3DA201A2CF15332DD0013FF0704BD90AFC724EE4 * ___conf_7;
	// System.Threading.CancellationTokenSource main::cts
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___cts_8;
	// System.Boolean main::logging
	bool ___logging_9;
	// System.Int32 main::milliseconds
	int32_t ___milliseconds_10;
	// System.TimeSpan main::timeout
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___timeout_11;

public:
	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(main_tF90C8171865D04F2F0453FB628A66C2599896835, ___text_4)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_text_4() const { return ___text_4; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___text_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_4), (void*)value);
	}

	inline static int32_t get_offset_of_cb_5() { return static_cast<int32_t>(offsetof(main_tF90C8171865D04F2F0453FB628A66C2599896835, ___cb_5)); }
	inline ConsumerBuilder_2_t41319FE33FF577D48F558A275C373EE6D63D062F * get_cb_5() const { return ___cb_5; }
	inline ConsumerBuilder_2_t41319FE33FF577D48F558A275C373EE6D63D062F ** get_address_of_cb_5() { return &___cb_5; }
	inline void set_cb_5(ConsumerBuilder_2_t41319FE33FF577D48F558A275C373EE6D63D062F * value)
	{
		___cb_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cb_5), (void*)value);
	}

	inline static int32_t get_offset_of_c_6() { return static_cast<int32_t>(offsetof(main_tF90C8171865D04F2F0453FB628A66C2599896835, ___c_6)); }
	inline RuntimeObject* get_c_6() const { return ___c_6; }
	inline RuntimeObject** get_address_of_c_6() { return &___c_6; }
	inline void set_c_6(RuntimeObject* value)
	{
		___c_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_6), (void*)value);
	}

	inline static int32_t get_offset_of_conf_7() { return static_cast<int32_t>(offsetof(main_tF90C8171865D04F2F0453FB628A66C2599896835, ___conf_7)); }
	inline ConsumerConfig_t3DA201A2CF15332DD0013FF0704BD90AFC724EE4 * get_conf_7() const { return ___conf_7; }
	inline ConsumerConfig_t3DA201A2CF15332DD0013FF0704BD90AFC724EE4 ** get_address_of_conf_7() { return &___conf_7; }
	inline void set_conf_7(ConsumerConfig_t3DA201A2CF15332DD0013FF0704BD90AFC724EE4 * value)
	{
		___conf_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___conf_7), (void*)value);
	}

	inline static int32_t get_offset_of_cts_8() { return static_cast<int32_t>(offsetof(main_tF90C8171865D04F2F0453FB628A66C2599896835, ___cts_8)); }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * get_cts_8() const { return ___cts_8; }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE ** get_address_of_cts_8() { return &___cts_8; }
	inline void set_cts_8(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * value)
	{
		___cts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cts_8), (void*)value);
	}

	inline static int32_t get_offset_of_logging_9() { return static_cast<int32_t>(offsetof(main_tF90C8171865D04F2F0453FB628A66C2599896835, ___logging_9)); }
	inline bool get_logging_9() const { return ___logging_9; }
	inline bool* get_address_of_logging_9() { return &___logging_9; }
	inline void set_logging_9(bool value)
	{
		___logging_9 = value;
	}

	inline static int32_t get_offset_of_milliseconds_10() { return static_cast<int32_t>(offsetof(main_tF90C8171865D04F2F0453FB628A66C2599896835, ___milliseconds_10)); }
	inline int32_t get_milliseconds_10() const { return ___milliseconds_10; }
	inline int32_t* get_address_of_milliseconds_10() { return &___milliseconds_10; }
	inline void set_milliseconds_10(int32_t value)
	{
		___milliseconds_10 = value;
	}

	inline static int32_t get_offset_of_timeout_11() { return static_cast<int32_t>(offsetof(main_tF90C8171865D04F2F0453FB628A66C2599896835, ___timeout_11)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_timeout_11() const { return ___timeout_11; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_timeout_11() { return &___timeout_11; }
	inline void set_timeout_11(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___timeout_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.Nullable`1<System.Int32Enum>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m5C28B34DE8C6D3A1E136828428C71543A08B32D3_gshared (Nullable_1_tBCA4780CE8E9555A53CF0BA48AF742DA998C0833 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Confluent.Kafka.ConsumerBuilder`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsumerBuilder_2__ctor_mE1BD2030368DD52E13A52E4AC4CB82A6E7819665_gshared (ConsumerBuilder_2_tB4A624E9FFD76FCE10BA5376DB6572D9F6C9F4E0 * __this, RuntimeObject* ___config0, const RuntimeMethod* method);
// !1 Confluent.Kafka.ConsumeResult`2<System.Object,System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConsumeResult_2_get_Value_m2ABE3ECEBC7628CAEA9B3FF8B3195CCA7B79B4F5_gshared (ConsumeResult_2_t148497F7E93E980FDFE6FC992F241C0DBF4E60BF * __this, const RuntimeMethod* method);
// System.Int32 System.Linq.Enumerable::Count<System.Char>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mFA8DD0738BFD62868AD614F1B088BE81A30F2F22_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// Confluent.Kafka.TopicPartitionOffset Confluent.Kafka.ConsumeResult`2<System.Object,System.Object>::get_TopicPartitionOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TopicPartitionOffset_t0608BC9C5125E0FDD89D056D88A403467932AFA0 * ConsumeResult_2_get_TopicPartitionOffset_mE7408ABA6DA71EC0B2ED4D860338C8B455E96661_gshared (ConsumeResult_2_t148497F7E93E980FDFE6FC992F241C0DBF4E60BF * __this, const RuntimeMethod* method);

// System.Void main::print(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void main_print_m7E16BD35E178E96F689C8A05235328C716D38901 (main_tF90C8171865D04F2F0453FB628A66C2599896835 * __this, String_t* ___msg0, const RuntimeMethod* method);
// System.Void Confluent.Kafka.ConsumerConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsumerConfig__ctor_m341E3ED0BE7F5327356AA3B7117C5682E49F7BE8 (ConsumerConfig_t3DA201A2CF15332DD0013FF0704BD90AFC724EE4 * __this, const RuntimeMethod* method);
// System.Void Confluent.Kafka.ConsumerConfig::set_GroupId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsumerConfig_set_GroupId_mE005E114C04D79A549E5CD9AFB327978DD378BDA (ConsumerConfig_t3DA201A2CF15332DD0013FF0704BD90AFC724EE4 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Confluent.Kafka.ClientConfig::set_BootstrapServers(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientConfig_set_BootstrapServers_m704E396421BD0D1C2227548652FA0D2C6510851F (ClientConfig_t6BE54194D72532C6794973A3F5EB4C12A1E6034A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Nullable`1<Confluent.Kafka.AutoOffsetReset>::.ctor(!0)
inline void Nullable_1__ctor_m73F79DC95E79B9231FA0A2D510AB95BDB2E731C7 (Nullable_1_tF6D51127C910799CCD8BF5865F13C389B01BD3BA * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tF6D51127C910799CCD8BF5865F13C389B01BD3BA *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m5C28B34DE8C6D3A1E136828428C71543A08B32D3_gshared)(__this, ___value0, method);
}
// System.Void Confluent.Kafka.ConsumerConfig::set_AutoOffsetReset(System.Nullable`1<Confluent.Kafka.AutoOffsetReset>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsumerConfig_set_AutoOffsetReset_m3F66CB52A0F58BDCFF5A426814C39730CECFB0DA (ConsumerConfig_t3DA201A2CF15332DD0013FF0704BD90AFC724EE4 * __this, Nullable_1_tF6D51127C910799CCD8BF5865F13C389B01BD3BA  ___value0, const RuntimeMethod* method);
// System.Void Confluent.Kafka.ConsumerBuilder`2<Confluent.Kafka.Ignore,System.String>::.ctor(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>)
inline void ConsumerBuilder_2__ctor_m98392CFB4165C2DF163ED364E0061C17D89706E3 (ConsumerBuilder_2_t41319FE33FF577D48F558A275C373EE6D63D062F * __this, RuntimeObject* ___config0, const RuntimeMethod* method)
{
	((  void (*) (ConsumerBuilder_2_t41319FE33FF577D48F558A275C373EE6D63D062F *, RuntimeObject*, const RuntimeMethod*))ConsumerBuilder_2__ctor_mE1BD2030368DD52E13A52E4AC4CB82A6E7819665_gshared)(__this, ___config0, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSpan__ctor_m310F37AF5F9F91433A98062BF6E4A248AA6C3DE5 (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * __this, int32_t ___days0, int32_t ___hours1, int32_t ___minutes2, int32_t ___seconds3, int32_t ___milliseconds4, const RuntimeMethod* method);
// System.Void System.Threading.CancellationTokenSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource__ctor_m217582F71932ADD00D63047D8D53C87111116C6B (CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220 (TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * __this, String_t* ___value0, const RuntimeMethod* method);
// !1 Confluent.Kafka.ConsumeResult`2<Confluent.Kafka.Ignore,System.String>::get_Value()
inline String_t* ConsumeResult_2_get_Value_m5D45483CD07D605E9131A8AE2C847B8C675AB2C9 (ConsumeResult_2_t60CAC774BB2542D462AD42D14F9583599ADAD63F * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ConsumeResult_2_t60CAC774BB2542D462AD42D14F9583599ADAD63F *, const RuntimeMethod*))ConsumeResult_2_get_Value_m2ABE3ECEBC7628CAEA9B3FF8B3195CCA7B79B4F5_gshared)(__this, method);
}
// System.Int32 System.Linq.Enumerable::Count<System.Char>(System.Collections.Generic.IEnumerable`1<!!0>)
inline int32_t Enumerable_Count_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mFA8DD0738BFD62868AD614F1B088BE81A30F2F22 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mFA8DD0738BFD62868AD614F1B088BE81A30F2F22_gshared)(___source0, method);
}
// Confluent.Kafka.TopicPartitionOffset Confluent.Kafka.ConsumeResult`2<Confluent.Kafka.Ignore,System.String>::get_TopicPartitionOffset()
inline TopicPartitionOffset_t0608BC9C5125E0FDD89D056D88A403467932AFA0 * ConsumeResult_2_get_TopicPartitionOffset_m1F2E57F15DCC8507424BFC3CA3E372EE645E2B99 (ConsumeResult_2_t60CAC774BB2542D462AD42D14F9583599ADAD63F * __this, const RuntimeMethod* method)
{
	return ((  TopicPartitionOffset_t0608BC9C5125E0FDD89D056D88A403467932AFA0 * (*) (ConsumeResult_2_t60CAC774BB2542D462AD42D14F9583599ADAD63F *, const RuntimeMethod*))ConsumeResult_2_get_TopicPartitionOffset_mE7408ABA6DA71EC0B2ED4D860338C8B455E96661_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String UnityEngine.TextMesh::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83 (TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// Confluent.Kafka.Error Confluent.Kafka.KafkaException::get_Error()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Error_tDB0A7443D23E63BE29D50C4AA4CEA2C77EBBD190 * KafkaException_get_Error_mE74E6EE270D24513CABDBBF2BFB9A3E92779A8F3_inline (KafkaException_t11E2294B0DF380890AC3C41667ED3DEDF1D6B4DB * __this, const RuntimeMethod* method);
// System.String Confluent.Kafka.Error::get_Reason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Error_get_Reason_mF6939DE38A903F3ECABF20650F3D1ADC4AC28716 (Error_tDB0A7443D23E63BE29D50C4AA4CEA2C77EBBD190 * __this, const RuntimeMethod* method);
// System.Void main::consumeOnce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void main_consumeOnce_m8C0C8AA531A77B7907F3FF6F41717A00DE35816F (main_tF90C8171865D04F2F0453FB628A66C2599896835 * __this, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m62D1EFD5F6D5F6B6AF0D14A07BF5741C94413301 (bool* __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
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
// System.Void main::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void main_Start_m9D564C32C4F49B9E913E20AA71EFAA4C79E368E5 (main_tF90C8171865D04F2F0453FB628A66C2599896835 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (main_Start_m9D564C32C4F49B9E913E20AA71EFAA4C79E368E5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print("main start");
		main_print_m7E16BD35E178E96F689C8A05235328C716D38901(__this, _stringLiteral0541F0BDEA4EFF050F83162A929A8F652B39CF2C, /*hidden argument*/NULL);
		// conf = new ConsumerConfig();
		ConsumerConfig_t3DA201A2CF15332DD0013FF0704BD90AFC724EE4 * L_0 = (ConsumerConfig_t3DA201A2CF15332DD0013FF0704BD90AFC724EE4 *)il2cpp_codegen_object_new(ConsumerConfig_t3DA201A2CF15332DD0013FF0704BD90AFC724EE4_il2cpp_TypeInfo_var);
		ConsumerConfig__ctor_m341E3ED0BE7F5327356AA3B7117C5682E49F7BE8(L_0, /*hidden argument*/NULL);
		__this->set_conf_7(L_0);
		// conf.GroupId = "test-consumer-group";
		ConsumerConfig_t3DA201A2CF15332DD0013FF0704BD90AFC724EE4 * L_1 = __this->get_conf_7();
		NullCheck(L_1);
		ConsumerConfig_set_GroupId_mE005E114C04D79A549E5CD9AFB327978DD378BDA(L_1, _stringLiteral3057B1282CC55DB3E4B38522AB876ADA82870264, /*hidden argument*/NULL);
		// conf.BootstrapServers = "localhost:9092";
		ConsumerConfig_t3DA201A2CF15332DD0013FF0704BD90AFC724EE4 * L_2 = __this->get_conf_7();
		NullCheck(L_2);
		ClientConfig_set_BootstrapServers_m704E396421BD0D1C2227548652FA0D2C6510851F(L_2, _stringLiteral769D12A87683520D0502B533D57A09EF9E361A96, /*hidden argument*/NULL);
		// conf.AutoOffsetReset = AutoOffsetReset.Earliest;
		ConsumerConfig_t3DA201A2CF15332DD0013FF0704BD90AFC724EE4 * L_3 = __this->get_conf_7();
		Nullable_1_tF6D51127C910799CCD8BF5865F13C389B01BD3BA  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Nullable_1__ctor_m73F79DC95E79B9231FA0A2D510AB95BDB2E731C7((&L_4), 1, /*hidden argument*/Nullable_1__ctor_m73F79DC95E79B9231FA0A2D510AB95BDB2E731C7_RuntimeMethod_var);
		NullCheck(L_3);
		ConsumerConfig_set_AutoOffsetReset_m3F66CB52A0F58BDCFF5A426814C39730CECFB0DA(L_3, L_4, /*hidden argument*/NULL);
		// cb = new ConsumerBuilder<Ignore, string>(conf);
		ConsumerConfig_t3DA201A2CF15332DD0013FF0704BD90AFC724EE4 * L_5 = __this->get_conf_7();
		ConsumerBuilder_2_t41319FE33FF577D48F558A275C373EE6D63D062F * L_6 = (ConsumerBuilder_2_t41319FE33FF577D48F558A275C373EE6D63D062F *)il2cpp_codegen_object_new(ConsumerBuilder_2_t41319FE33FF577D48F558A275C373EE6D63D062F_il2cpp_TypeInfo_var);
		ConsumerBuilder_2__ctor_m98392CFB4165C2DF163ED364E0061C17D89706E3(L_6, L_5, /*hidden argument*/ConsumerBuilder_2__ctor_m98392CFB4165C2DF163ED364E0061C17D89706E3_RuntimeMethod_var);
		__this->set_cb_5(L_6);
		// if (cb != null)
		ConsumerBuilder_2_t41319FE33FF577D48F558A275C373EE6D63D062F * L_7 = __this->get_cb_5();
		if (!L_7)
		{
			goto IL_008c;
		}
	}
	{
		// print("cb is ok: " + cb.ToString());
		ConsumerBuilder_2_t41319FE33FF577D48F558A275C373EE6D63D062F * L_8 = __this->get_cb_5();
		NullCheck(L_8);
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		String_t* L_10 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral3566D29D6C2F601A0DA4659CDA6AFC773ADAE769, L_9, /*hidden argument*/NULL);
		main_print_m7E16BD35E178E96F689C8A05235328C716D38901(__this, L_10, /*hidden argument*/NULL);
		// c = cb.Build();
		ConsumerBuilder_2_t41319FE33FF577D48F558A275C373EE6D63D062F * L_11 = __this->get_cb_5();
		NullCheck(L_11);
		RuntimeObject* L_12 = VirtFuncInvoker0< RuntimeObject* >::Invoke(4 /* Confluent.Kafka.IConsumer`2<!0,!1> Confluent.Kafka.ConsumerBuilder`2<Confluent.Kafka.Ignore,System.String>::Build() */, L_11);
		__this->set_c_6(L_12);
	}

IL_008c:
	{
		// timeout = new TimeSpan(0, 0, 0, 0, milliseconds);
		int32_t L_13 = __this->get_milliseconds_10();
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_14;
		memset((&L_14), 0, sizeof(L_14));
		TimeSpan__ctor_m310F37AF5F9F91433A98062BF6E4A248AA6C3DE5((&L_14), 0, 0, 0, 0, L_13, /*hidden argument*/NULL);
		__this->set_timeout_11(L_14);
		// cts = new CancellationTokenSource();
		CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * L_15 = (CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE *)il2cpp_codegen_object_new(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_il2cpp_TypeInfo_var);
		CancellationTokenSource__ctor_m217582F71932ADD00D63047D8D53C87111116C6B(L_15, /*hidden argument*/NULL);
		__this->set_cts_8(L_15);
		// text.text = ".";
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_16 = __this->get_text_4();
		NullCheck(L_16);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_16, _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727, /*hidden argument*/NULL);
		// print("main started");
		main_print_m7E16BD35E178E96F689C8A05235328C716D38901(__this, _stringLiteral26E328DA065EC162E2C9C670ACE64C9DFB10954A, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void main::toggleLogging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void main_toggleLogging_mC8077FC60EF4BC5361D3B1181596F9AE70DFC73F (main_tF90C8171865D04F2F0453FB628A66C2599896835 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (main_toggleLogging_mC8077FC60EF4BC5361D3B1181596F9AE70DFC73F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print("in toggleLogging");
		main_print_m7E16BD35E178E96F689C8A05235328C716D38901(__this, _stringLiteral7BAA83810E3AB51ABB925803C79201491C2D6C2A, /*hidden argument*/NULL);
		// logging = !logging;
		bool L_0 = __this->get_logging_9();
		__this->set_logging_9((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// }
		return;
	}
}
// System.Void main::consumeOnce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void main_consumeOnce_m8C0C8AA531A77B7907F3FF6F41717A00DE35816F (main_tF90C8171865D04F2F0453FB628A66C2599896835 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (main_consumeOnce_m8C0C8AA531A77B7907F3FF6F41717A00DE35816F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ConsumeResult_2_t60CAC774BB2542D462AD42D14F9583599ADAD63F * V_0 = NULL;
	ConsumeException_t4C9A32A62D11F531EDC431B389958207B349EE85 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// print("in consumeOnce");
		main_print_m7E16BD35E178E96F689C8A05235328C716D38901(__this, _stringLiteralBD9EC4A4352057B9B369A7BF1A4DC39A5E15703F, /*hidden argument*/NULL);
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			// print("try");
			main_print_m7E16BD35E178E96F689C8A05235328C716D38901(__this, _stringLiteral3240AA0FE3CA15051680641A59E8D7B61C286B23, /*hidden argument*/NULL);
			// var cr = c.Consume(timeout);
			RuntimeObject* L_0 = __this->get_c_6();
			TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = __this->get_timeout_11();
			NullCheck(L_0);
			ConsumeResult_2_t60CAC774BB2542D462AD42D14F9583599ADAD63F * L_2 = InterfaceFuncInvoker1< ConsumeResult_2_t60CAC774BB2542D462AD42D14F9583599ADAD63F *, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  >::Invoke(0 /* Confluent.Kafka.ConsumeResult`2<!0,!1> Confluent.Kafka.IConsumer`2<Confluent.Kafka.Ignore,System.String>::Consume(System.TimeSpan) */, IConsumer_2_tCD0D7F4CC4A7A7F5CE243D7DCD4CC9F662CFB500_il2cpp_TypeInfo_var, L_0, L_1);
			V_0 = L_2;
			// if (cr != null && cr.Value.Count() > 0)
			ConsumeResult_2_t60CAC774BB2542D462AD42D14F9583599ADAD63F * L_3 = V_0;
			if (!L_3)
			{
				goto IL_0076;
			}
		}

IL_002b:
		{
			ConsumeResult_2_t60CAC774BB2542D462AD42D14F9583599ADAD63F * L_4 = V_0;
			NullCheck(L_4);
			String_t* L_5 = ConsumeResult_2_get_Value_m5D45483CD07D605E9131A8AE2C847B8C675AB2C9(L_4, /*hidden argument*/ConsumeResult_2_get_Value_m5D45483CD07D605E9131A8AE2C847B8C675AB2C9_RuntimeMethod_var);
			int32_t L_6 = Enumerable_Count_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mFA8DD0738BFD62868AD614F1B088BE81A30F2F22(L_5, /*hidden argument*/Enumerable_Count_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mFA8DD0738BFD62868AD614F1B088BE81A30F2F22_RuntimeMethod_var);
			if ((((int32_t)L_6) <= ((int32_t)0)))
			{
				goto IL_0076;
			}
		}

IL_0039:
		{
			// print($"Consumed message '{cr.Value}' at: '{cr.TopicPartitionOffset}'.");
			ConsumeResult_2_t60CAC774BB2542D462AD42D14F9583599ADAD63F * L_7 = V_0;
			NullCheck(L_7);
			String_t* L_8 = ConsumeResult_2_get_Value_m5D45483CD07D605E9131A8AE2C847B8C675AB2C9(L_7, /*hidden argument*/ConsumeResult_2_get_Value_m5D45483CD07D605E9131A8AE2C847B8C675AB2C9_RuntimeMethod_var);
			ConsumeResult_2_t60CAC774BB2542D462AD42D14F9583599ADAD63F * L_9 = V_0;
			NullCheck(L_9);
			TopicPartitionOffset_t0608BC9C5125E0FDD89D056D88A403467932AFA0 * L_10 = ConsumeResult_2_get_TopicPartitionOffset_m1F2E57F15DCC8507424BFC3CA3E372EE645E2B99(L_9, /*hidden argument*/ConsumeResult_2_get_TopicPartitionOffset_m1F2E57F15DCC8507424BFC3CA3E372EE645E2B99_RuntimeMethod_var);
			String_t* L_11 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral5BF88C0522F1FDCF679D5BF0499DF70ACEAD57F2, L_8, L_10, /*hidden argument*/NULL);
			main_print_m7E16BD35E178E96F689C8A05235328C716D38901(__this, L_11, /*hidden argument*/NULL);
			// text.text += "\n" + cr.Value;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_12 = __this->get_text_4();
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_13 = L_12;
			NullCheck(L_13);
			String_t* L_14 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_13, /*hidden argument*/NULL);
			ConsumeResult_2_t60CAC774BB2542D462AD42D14F9583599ADAD63F * L_15 = V_0;
			NullCheck(L_15);
			String_t* L_16 = ConsumeResult_2_get_Value_m5D45483CD07D605E9131A8AE2C847B8C675AB2C9(L_15, /*hidden argument*/ConsumeResult_2_get_Value_m5D45483CD07D605E9131A8AE2C847B8C675AB2C9_RuntimeMethod_var);
			String_t* L_17 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_14, _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC, L_16, /*hidden argument*/NULL);
			NullCheck(L_13);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_13, L_17, /*hidden argument*/NULL);
		}

IL_0076:
		{
			// }
			goto IL_00c5;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ConsumeException_t4C9A32A62D11F531EDC431B389958207B349EE85_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0078;
		if(il2cpp_codegen_class_is_assignable_from (OperationCanceledException_tD28B1AE59ACCE4D46333BFE398395B8D75D76A90_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00a1;
		throw e;
	}

CATCH_0078:
	{ // begin catch(Confluent.Kafka.ConsumeException)
		// catch (ConsumeException e)
		V_1 = ((ConsumeException_t4C9A32A62D11F531EDC431B389958207B349EE85 *)__exception_local);
		// print("catch 1 ConsumeException");
		main_print_m7E16BD35E178E96F689C8A05235328C716D38901(__this, _stringLiteralD440A8419246C7AA465A6231CE29601C96FF71F0, /*hidden argument*/NULL);
		// print($"Error occured: {e.Error.Reason}");
		ConsumeException_t4C9A32A62D11F531EDC431B389958207B349EE85 * L_18 = V_1;
		NullCheck(L_18);
		Error_tDB0A7443D23E63BE29D50C4AA4CEA2C77EBBD190 * L_19 = KafkaException_get_Error_mE74E6EE270D24513CABDBBF2BFB9A3E92779A8F3_inline(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		String_t* L_20 = Error_get_Reason_mF6939DE38A903F3ECABF20650F3D1ADC4AC28716(L_19, /*hidden argument*/NULL);
		String_t* L_21 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral595A7D0ABE752020C2CA57F70EF210270DD0B02B, L_20, /*hidden argument*/NULL);
		main_print_m7E16BD35E178E96F689C8A05235328C716D38901(__this, L_21, /*hidden argument*/NULL);
		// }
		goto IL_00c5;
	} // end catch (depth: 1)

CATCH_00a1:
	{ // begin catch(System.OperationCanceledException)
		// catch (OperationCanceledException)
		// print("catch 2 OperationCanceledException");
		main_print_m7E16BD35E178E96F689C8A05235328C716D38901(__this, _stringLiteralBDCC8971DCE13E3A20B1D7A768D4824442B48091, /*hidden argument*/NULL);
		// print("cancelled");
		main_print_m7E16BD35E178E96F689C8A05235328C716D38901(__this, _stringLiteral8761D26FB8D6C7853FAF7CF13FD3E5471364DC36, /*hidden argument*/NULL);
		// c.Close();
		RuntimeObject* L_22 = __this->get_c_6();
		NullCheck(L_22);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Confluent.Kafka.IConsumer`2<Confluent.Kafka.Ignore,System.String>::Close() */, IConsumer_2_tCD0D7F4CC4A7A7F5CE243D7DCD4CC9F662CFB500_il2cpp_TypeInfo_var, L_22);
		// }
		goto IL_00c5;
	} // end catch (depth: 1)

IL_00c5:
	{
		// print("finally");
		main_print_m7E16BD35E178E96F689C8A05235328C716D38901(__this, _stringLiteral8F4E3E3C24BAC71B4FFDF2BC0F73246D601766D4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void main::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void main_Update_m2ABA7C25C952ABCAC24F18E551CE1F75598DC71A (main_tF90C8171865D04F2F0453FB628A66C2599896835 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (main_Update_m2ABA7C25C952ABCAC24F18E551CE1F75598DC71A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (logging)
		bool L_0 = __this->get_logging_9();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// print("in update, logging");
		main_print_m7E16BD35E178E96F689C8A05235328C716D38901(__this, _stringLiteral316848555D58423E64AF6955B6E736BE6C12A524, /*hidden argument*/NULL);
		// consumeOnce();
		main_consumeOnce_m8C0C8AA531A77B7907F3FF6F41717A00DE35816F(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001a:
	{
		// print("in update, logging: " + logging);
		bool* L_1 = __this->get_address_of_logging_9();
		String_t* L_2 = Boolean_ToString_m62D1EFD5F6D5F6B6AF0D14A07BF5741C94413301((bool*)L_1, /*hidden argument*/NULL);
		String_t* L_3 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral255890AAC1DE32FD9AAC494C649D46F566104A59, L_2, /*hidden argument*/NULL);
		main_print_m7E16BD35E178E96F689C8A05235328C716D38901(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void main::print(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void main_print_m7E16BD35E178E96F689C8A05235328C716D38901 (main_tF90C8171865D04F2F0453FB628A66C2599896835 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (main_print_m7E16BD35E178E96F689C8A05235328C716D38901_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(msg);
		String_t* L_0 = ___msg0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void main::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void main__ctor_m54BA91567B8029382CD87F9CFC2386DA6C18BA4F (main_tF90C8171865D04F2F0453FB628A66C2599896835 * __this, const RuntimeMethod* method)
{
	{
		// int milliseconds = 10;
		__this->set_milliseconds_10(((int32_t)10));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Error_tDB0A7443D23E63BE29D50C4AA4CEA2C77EBBD190 * KafkaException_get_Error_mE74E6EE270D24513CABDBBF2BFB9A3E92779A8F3_inline (KafkaException_t11E2294B0DF380890AC3C41667ED3DEDF1D6B4DB * __this, const RuntimeMethod* method)
{
	{
		Error_tDB0A7443D23E63BE29D50C4AA4CEA2C77EBBD190 * L_0 = __this->get_U3CErrorU3Ek__BackingField_17();
		return L_0;
	}
}
