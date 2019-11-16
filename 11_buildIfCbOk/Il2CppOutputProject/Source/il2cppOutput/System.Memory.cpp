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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tF753E95DD7FC86934324CF760A3BBCFB690B6C44;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA;
// System.ArrayTypeMismatchException
struct ArrayTypeMismatchException_tE34C1032B089C37399200997F079C640D23D9499;
// System.Attribute
struct Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet>
struct Dictionary_2_tDE0FFCE2C110EEFB68C37CEA54DBCA577AFC1CE6;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Pinnable`1<System.Char>
struct Pinnable_1_t2ACA23EB7EE2C66A2610C3784D66B2B1FC1E5FBB;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.RuntimeAssembly
struct RuntimeAssembly_t5EE9CD749D82345AE5635B9665665C31A3308EB1;
// System.Reflection.TypeInfo
struct TypeInfo_t9D6F65801A41B97F36138B15FD270A1550DBB3FC;
// System.Resources.IResourceGroveler
struct IResourceGroveler_tCEF78094E38045CAD9EFB296E179CCDFDCB94C44;
// System.Resources.ResourceManager
struct ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF;
// System.Resources.ResourceManager/CultureNameResourceSetPair
struct CultureNameResourceSetPair_t77328DA298FCF741DE21CC5B3E19F160D7060074;
// System.Runtime.CompilerServices.IsByRefLikeAttribute
struct IsByRefLikeAttribute_t060646E0E96F6CD6D46C171DC23700C1154890E5;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tC86E45C2741913B73C9A38902D64F6F01BCD7C9A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Version
struct Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_tE34C1032B089C37399200997F079C640D23D9499_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgument_t279974A2A0334B8563B771C0FEC76B658CA74AE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t9B9CB136E3BB6C7C95E42EC9BC17D9F781AFAD23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tC65D35659A0144DCE2D08E61BD96C952A80AE3EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryExtensions_tC558637731FCD9B4F56DCB4DBB92652BF31BDC2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingManifestResourceException_tD8397DA5F4CC63B78F91916522A302782CAB0261_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SR_tFF6F28F73CC1134ED958D9F8B6D74C877395F7CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05B52FE0F5B69D9AD1AB40663A7BAE4EA4437E85;
IL2CPP_EXTERN_C String_t* _stringLiteral1473F76820B4777C0F441D8ACE016FF18E901953;
IL2CPP_EXTERN_C String_t* _stringLiteral2F0F0EA87948EC0E6B8AC05E6DD6EF5076B4BA7A;
IL2CPP_EXTERN_C String_t* _stringLiteral8323D78D6CE11EA4F4CEA8AAC474C4DCF1C058F7;
IL2CPP_EXTERN_C String_t* _stringLiteral86F7E437FAA5A7FCE15D1DDCB9EAEAEA377667B8;
IL2CPP_EXTERN_C String_t* _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentException_DestinationTooShort_m95F5FB4394C497E7C506BCB7A2B6C1D98F746E47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_m24B68EB8B0DC3995CFD82783E33FCE032C2C4D29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentOutOfRangeException_m8AB0E4E581B62C38741C58B3427D965D32F02CC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArrayTypeMismatchException_mC74ABA636D4C8D656BA39C05BAF0262559641821_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowIndexOutOfRangeException_m21B49ED7044B8BB437800AD96FC746584B6963C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_AsRef_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m0DD664A461758B9515D03E4D303DCAF0FD6E8A58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_As_TisPinnable_1_t2ACA23EB7EE2C66A2610C3784D66B2B1FC1E5FBB_mB9AF2048B27465D003913FB8B0042D8D0F7613BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_ByteOffset_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mFEE62CDD3FE368CBFAF8D063E7E8043A68E3DB1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* SR_t357F482BF9C093E9DB53B4B3693767B8A131675E_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t MemoryExtensions_MeasureStringAdjustment_m721B670FA44D75C3BE17156145124A0471C40EEA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MemoryExtensions__cctor_m016B0E255FCF4865EC976EBB57981966C9BF9945_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SR_Format_mB5B5730636306BC1027EE087CEE010F450C2F12C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SR_GetResourceString_m65609B1BD089FDE6F12825CA874EA0397F5D7D65_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SR__cctor_m1EAB914CC047B4EB31958C5286094770326C7F90_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SR_get_Argument_DestinationTooShort_m04CA55D9666BE9B687792D8CFC7F43E44464A57F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SR_get_Argument_InvalidTypeWithPointersNotSupported_m80449175A67F98FC8A0ECFB6231BFFFCDB489B18_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SR_get_NotSupported_CannotCallEqualsOnSpan_m323A8A570BE35C2A0571CA592E364E31AACE93B9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SR_get_NotSupported_CannotCallGetHashCodeOnSpan_mE598ED65596185255C4C29C78E6EAF4BD7BB102D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SR_get_ResourceManager_mA606F1FD448C84CDF5572D2B929BEECC58AB119A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SR_get_ResourceType_mC1257D52F66B39D18AEC6DF4F63EA50C2CA65CCESystem_Memory_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SR_get_ResourceType_mC1257D52F66B39D18AEC6DF4F63EA50C2CA65CCE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpanHelpers_IsReferenceOrContainsReferencesCore_m0653B91186DD346626AA2D2CF839B05C906904D5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ThrowHelper_CreateArgumentException_DestinationTooShort_m797238827F0E4A98CD79061063A3449D915E510E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ThrowHelper_CreateArgumentException_InvalidTypeWithPointersNotSupported_m36F1214AC57F07C7F979C9C900D2C4CF187D0D5D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ThrowHelper_CreateArgumentOutOfRangeException_mE148FD80DCF48396C6B47C83CAE26D7585BCFBFD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ThrowHelper_CreateArrayTypeMismatchException_m0BB9D348FCF84266BC1A5759299A63BD00418A4C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ThrowHelper_CreateIndexOutOfRangeException_mD0262668695A413BE5685CD0904CD2D205866650_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ThrowHelper_ThrowArgumentException_DestinationTooShort_m95F5FB4394C497E7C506BCB7A2B6C1D98F746E47_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_m24B68EB8B0DC3995CFD82783E33FCE032C2C4D29_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ThrowHelper_ThrowArgumentOutOfRangeException_m8AB0E4E581B62C38741C58B3427D965D32F02CC7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ThrowHelper_ThrowArrayTypeMismatchException_mC74ABA636D4C8D656BA39C05BAF0262559641821_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ThrowHelper_ThrowIndexOutOfRangeException_m21B49ED7044B8BB437800AD96FC746584B6963C2_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tE68CE0FA9346A18F6F88EE555C9FB53A72DEEC7A 
{
public:

public:
};


// System.Object


// FxResources.System.Memory.SR
struct  SR_t357F482BF9C093E9DB53B4B3693767B8A131675E  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};


// System.Pinnable`1<System.Char>
struct  Pinnable_1_t2ACA23EB7EE2C66A2610C3784D66B2B1FC1E5FBB  : public RuntimeObject
{
public:
	// T System.Pinnable`1::Data
	Il2CppChar ___Data_0;

public:
	inline static int32_t get_offset_of_Data_0() { return static_cast<int32_t>(offsetof(Pinnable_1_t2ACA23EB7EE2C66A2610C3784D66B2B1FC1E5FBB, ___Data_0)); }
	inline Il2CppChar get_Data_0() const { return ___Data_0; }
	inline Il2CppChar* get_address_of_Data_0() { return &___Data_0; }
	inline void set_Data_0(Il2CppChar value)
	{
		___Data_0 = value;
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.SR
struct  SR_tFF6F28F73CC1134ED958D9F8B6D74C877395F7CA  : public RuntimeObject
{
public:

public:
};

struct SR_tFF6F28F73CC1134ED958D9F8B6D74C877395F7CA_StaticFields
{
public:
	// System.Resources.ResourceManager System.SR::s_resourceManager
	ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF * ___s_resourceManager_0;
	// System.Type System.SR::<ResourceType>k__BackingField
	Type_t * ___U3CResourceTypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_s_resourceManager_0() { return static_cast<int32_t>(offsetof(SR_tFF6F28F73CC1134ED958D9F8B6D74C877395F7CA_StaticFields, ___s_resourceManager_0)); }
	inline ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF * get_s_resourceManager_0() const { return ___s_resourceManager_0; }
	inline ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF ** get_address_of_s_resourceManager_0() { return &___s_resourceManager_0; }
	inline void set_s_resourceManager_0(ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF * value)
	{
		___s_resourceManager_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_resourceManager_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResourceTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SR_tFF6F28F73CC1134ED958D9F8B6D74C877395F7CA_StaticFields, ___U3CResourceTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CResourceTypeU3Ek__BackingField_1() const { return ___U3CResourceTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CResourceTypeU3Ek__BackingField_1() { return &___U3CResourceTypeU3Ek__BackingField_1; }
	inline void set_U3CResourceTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CResourceTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResourceTypeU3Ek__BackingField_1), (void*)value);
	}
};


// System.SpanHelpers
struct  SpanHelpers_tA9B4970B30A4B7CC3767D593E0C0A846509A2C80  : public RuntimeObject
{
public:

public:
};


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


// System.ThrowHelper
struct  ThrowHelper_t98CAFE77411A9D26EF89FEA2CFF7055AF27E1A13  : public RuntimeObject
{
public:

public:
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

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct  EmbeddedAttribute_tF753E95DD7FC86934324CF760A3BBCFB690B6C44  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
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


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
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


// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Runtime.CompilerServices.IsByRefLikeAttribute
struct  IsByRefLikeAttribute_t060646E0E96F6CD6D46C171DC23700C1154890E5  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
};


// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct  IsReadOnlyAttribute_tC86E45C2741913B73C9A38902D64F6F01BCD7C9A  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
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

// System.ExceptionArgument
struct  ExceptionArgument_t279974A2A0334B8563B771C0FEC76B658CA74AE6 
{
public:
	// System.Int32 System.ExceptionArgument::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExceptionArgument_t279974A2A0334B8563B771C0FEC76B658CA74AE6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MemoryExtensions
struct  MemoryExtensions_tC558637731FCD9B4F56DCB4DBB92652BF31BDC2D  : public RuntimeObject
{
public:

public:
};

struct MemoryExtensions_tC558637731FCD9B4F56DCB4DBB92652BF31BDC2D_StaticFields
{
public:
	// System.IntPtr System.MemoryExtensions::StringAdjustment
	intptr_t ___StringAdjustment_0;

public:
	inline static int32_t get_offset_of_StringAdjustment_0() { return static_cast<int32_t>(offsetof(MemoryExtensions_tC558637731FCD9B4F56DCB4DBB92652BF31BDC2D_StaticFields, ___StringAdjustment_0)); }
	inline intptr_t get_StringAdjustment_0() const { return ___StringAdjustment_0; }
	inline intptr_t* get_address_of_StringAdjustment_0() { return &___StringAdjustment_0; }
	inline void set_StringAdjustment_0(intptr_t value)
	{
		___StringAdjustment_0 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Resources.UltimateResourceFallbackLocation
struct  UltimateResourceFallbackLocation_t9E7495B2ADC328EB99FD80EDE68A2E5781D2882E 
{
public:
	// System.Int32 System.Resources.UltimateResourceFallbackLocation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UltimateResourceFallbackLocation_t9E7495B2ADC328EB99FD80EDE68A2E5781D2882E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.StringComparison
struct  StringComparison_t02BAA95468CE9E91115C604577611FDF58FEDCF0 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_t02BAA95468CE9E91115C604577611FDF58FEDCF0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Resources.ResourceManager
struct  ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF  : public RuntimeObject
{
public:
	// System.String System.Resources.ResourceManager::BaseNameField
	String_t* ___BaseNameField_0;
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceSets
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___ResourceSets_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet> System.Resources.ResourceManager::_resourceSets
	Dictionary_2_tDE0FFCE2C110EEFB68C37CEA54DBCA577AFC1CE6 * ____resourceSets_2;
	// System.String System.Resources.ResourceManager::moduleDir
	String_t* ___moduleDir_3;
	// System.Reflection.Assembly System.Resources.ResourceManager::MainAssembly
	Assembly_t * ___MainAssembly_4;
	// System.Type System.Resources.ResourceManager::_locationInfo
	Type_t * ____locationInfo_5;
	// System.Type System.Resources.ResourceManager::_userResourceSet
	Type_t * ____userResourceSet_6;
	// System.Globalization.CultureInfo System.Resources.ResourceManager::_neutralResourcesCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ____neutralResourcesCulture_7;
	// System.Resources.ResourceManager_CultureNameResourceSetPair System.Resources.ResourceManager::_lastUsedResourceCache
	CultureNameResourceSetPair_t77328DA298FCF741DE21CC5B3E19F160D7060074 * ____lastUsedResourceCache_8;
	// System.Boolean System.Resources.ResourceManager::_ignoreCase
	bool ____ignoreCase_9;
	// System.Boolean System.Resources.ResourceManager::UseManifest
	bool ___UseManifest_10;
	// System.Boolean System.Resources.ResourceManager::UseSatelliteAssem
	bool ___UseSatelliteAssem_11;
	// System.Resources.UltimateResourceFallbackLocation System.Resources.ResourceManager::_fallbackLoc
	int32_t ____fallbackLoc_12;
	// System.Version System.Resources.ResourceManager::_satelliteContractVersion
	Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ____satelliteContractVersion_13;
	// System.Boolean System.Resources.ResourceManager::_lookedForSatelliteContractVersion
	bool ____lookedForSatelliteContractVersion_14;
	// System.Reflection.Assembly System.Resources.ResourceManager::_callingAssembly
	Assembly_t * ____callingAssembly_15;
	// System.Reflection.RuntimeAssembly System.Resources.ResourceManager::m_callingAssembly
	RuntimeAssembly_t5EE9CD749D82345AE5635B9665665C31A3308EB1 * ___m_callingAssembly_16;
	// System.Resources.IResourceGroveler System.Resources.ResourceManager::resourceGroveler
	RuntimeObject* ___resourceGroveler_17;

public:
	inline static int32_t get_offset_of_BaseNameField_0() { return static_cast<int32_t>(offsetof(ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF, ___BaseNameField_0)); }
	inline String_t* get_BaseNameField_0() const { return ___BaseNameField_0; }
	inline String_t** get_address_of_BaseNameField_0() { return &___BaseNameField_0; }
	inline void set_BaseNameField_0(String_t* value)
	{
		___BaseNameField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BaseNameField_0), (void*)value);
	}

	inline static int32_t get_offset_of_ResourceSets_1() { return static_cast<int32_t>(offsetof(ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF, ___ResourceSets_1)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_ResourceSets_1() const { return ___ResourceSets_1; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_ResourceSets_1() { return &___ResourceSets_1; }
	inline void set_ResourceSets_1(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___ResourceSets_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResourceSets_1), (void*)value);
	}

	inline static int32_t get_offset_of__resourceSets_2() { return static_cast<int32_t>(offsetof(ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF, ____resourceSets_2)); }
	inline Dictionary_2_tDE0FFCE2C110EEFB68C37CEA54DBCA577AFC1CE6 * get__resourceSets_2() const { return ____resourceSets_2; }
	inline Dictionary_2_tDE0FFCE2C110EEFB68C37CEA54DBCA577AFC1CE6 ** get_address_of__resourceSets_2() { return &____resourceSets_2; }
	inline void set__resourceSets_2(Dictionary_2_tDE0FFCE2C110EEFB68C37CEA54DBCA577AFC1CE6 * value)
	{
		____resourceSets_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____resourceSets_2), (void*)value);
	}

	inline static int32_t get_offset_of_moduleDir_3() { return static_cast<int32_t>(offsetof(ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF, ___moduleDir_3)); }
	inline String_t* get_moduleDir_3() const { return ___moduleDir_3; }
	inline String_t** get_address_of_moduleDir_3() { return &___moduleDir_3; }
	inline void set_moduleDir_3(String_t* value)
	{
		___moduleDir_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moduleDir_3), (void*)value);
	}

	inline static int32_t get_offset_of_MainAssembly_4() { return static_cast<int32_t>(offsetof(ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF, ___MainAssembly_4)); }
	inline Assembly_t * get_MainAssembly_4() const { return ___MainAssembly_4; }
	inline Assembly_t ** get_address_of_MainAssembly_4() { return &___MainAssembly_4; }
	inline void set_MainAssembly_4(Assembly_t * value)
	{
		___MainAssembly_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MainAssembly_4), (void*)value);
	}

	inline static int32_t get_offset_of__locationInfo_5() { return static_cast<int32_t>(offsetof(ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF, ____locationInfo_5)); }
	inline Type_t * get__locationInfo_5() const { return ____locationInfo_5; }
	inline Type_t ** get_address_of__locationInfo_5() { return &____locationInfo_5; }
	inline void set__locationInfo_5(Type_t * value)
	{
		____locationInfo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____locationInfo_5), (void*)value);
	}

	inline static int32_t get_offset_of__userResourceSet_6() { return static_cast<int32_t>(offsetof(ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF, ____userResourceSet_6)); }
	inline Type_t * get__userResourceSet_6() const { return ____userResourceSet_6; }
	inline Type_t ** get_address_of__userResourceSet_6() { return &____userResourceSet_6; }
	inline void set__userResourceSet_6(Type_t * value)
	{
		____userResourceSet_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____userResourceSet_6), (void*)value);
	}

	inline static int32_t get_offset_of__neutralResourcesCulture_7() { return static_cast<int32_t>(offsetof(ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF, ____neutralResourcesCulture_7)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get__neutralResourcesCulture_7() const { return ____neutralResourcesCulture_7; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of__neutralResourcesCulture_7() { return &____neutralResourcesCulture_7; }
	inline void set__neutralResourcesCulture_7(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		____neutralResourcesCulture_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____neutralResourcesCulture_7), (void*)value);
	}

	inline static int32_t get_offset_of__lastUsedResourceCache_8() { return static_cast<int32_t>(offsetof(ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF, ____lastUsedResourceCache_8)); }
	inline CultureNameResourceSetPair_t77328DA298FCF741DE21CC5B3E19F160D7060074 * get__lastUsedResourceCache_8() const { return ____lastUsedResourceCache_8; }
	inline CultureNameResourceSetPair_t77328DA298FCF741DE21CC5B3E19F160D7060074 ** get_address_of__lastUsedResourceCache_8() { return &____lastUsedResourceCache_8; }
	inline void set__lastUsedResourceCache_8(CultureNameResourceSetPair_t77328DA298FCF741DE21CC5B3E19F160D7060074 * value)
	{
		____lastUsedResourceCache_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastUsedResourceCache_8), (void*)value);
	}

	inline static int32_t get_offset_of__ignoreCase_9() { return static_cast<int32_t>(offsetof(ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF, ____ignoreCase_9)); }
	inline bool get__ignoreCase_9() const { return ____ignoreCase_9; }
	inline bool* get_address_of__ignoreCase_9() { return &____ignoreCase_9; }
	inline void set__ignoreCase_9(bool value)
	{
		____ignoreCase_9 = value;
	}

	inline static int32_t get_offset_of_UseManifest_10() { return static_cast<int32_t>(offsetof(ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF, ___UseManifest_10)); }
	inline bool get_UseManifest_10() const { return ___UseManifest_10; }
	inline bool* get_address_of_UseManifest_10() { return &___UseManifest_10; }
	inline void set_UseManifest_10(bool value)
	{
		___UseManifest_10 = value;
	}

	inline static int32_t get_offset_of_UseSatelliteAssem_11() { return static_cast<int32_t>(offsetof(ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF, ___UseSatelliteAssem_11)); }
	inline bool get_UseSatelliteAssem_11() const { return ___UseSatelliteAssem_11; }
	inline bool* get_address_of_UseSatelliteAssem_11() { return &___UseSatelliteAssem_11; }
	inline void set_UseSatelliteAssem_11(bool value)
	{
		___UseSatelliteAssem_11 = value;
	}

	inline static int32_t get_offset_of__fallbackLoc_12() { return static_cast<int32_t>(offsetof(ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF, ____fallbackLoc_12)); }
	inline int32_t get__fallbackLoc_12() const { return ____fallbackLoc_12; }
	inline int32_t* get_address_of__fallbackLoc_12() { return &____fallbackLoc_12; }
	inline void set__fallbackLoc_12(int32_t value)
	{
		____fallbackLoc_12 = value;
	}

	inline static int32_t get_offset_of__satelliteContractVersion_13() { return static_cast<int32_t>(offsetof(ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF, ____satelliteContractVersion_13)); }
	inline Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * get__satelliteContractVersion_13() const { return ____satelliteContractVersion_13; }
	inline Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD ** get_address_of__satelliteContractVersion_13() { return &____satelliteContractVersion_13; }
	inline void set__satelliteContractVersion_13(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * value)
	{
		____satelliteContractVersion_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____satelliteContractVersion_13), (void*)value);
	}

	inline static int32_t get_offset_of__lookedForSatelliteContractVersion_14() { return static_cast<int32_t>(offsetof(ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF, ____lookedForSatelliteContractVersion_14)); }
	inline bool get__lookedForSatelliteContractVersion_14() const { return ____lookedForSatelliteContractVersion_14; }
	inline bool* get_address_of__lookedForSatelliteContractVersion_14() { return &____lookedForSatelliteContractVersion_14; }
	inline void set__lookedForSatelliteContractVersion_14(bool value)
	{
		____lookedForSatelliteContractVersion_14 = value;
	}

	inline static int32_t get_offset_of__callingAssembly_15() { return static_cast<int32_t>(offsetof(ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF, ____callingAssembly_15)); }
	inline Assembly_t * get__callingAssembly_15() const { return ____callingAssembly_15; }
	inline Assembly_t ** get_address_of__callingAssembly_15() { return &____callingAssembly_15; }
	inline void set__callingAssembly_15(Assembly_t * value)
	{
		____callingAssembly_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____callingAssembly_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_callingAssembly_16() { return static_cast<int32_t>(offsetof(ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF, ___m_callingAssembly_16)); }
	inline RuntimeAssembly_t5EE9CD749D82345AE5635B9665665C31A3308EB1 * get_m_callingAssembly_16() const { return ___m_callingAssembly_16; }
	inline RuntimeAssembly_t5EE9CD749D82345AE5635B9665665C31A3308EB1 ** get_address_of_m_callingAssembly_16() { return &___m_callingAssembly_16; }
	inline void set_m_callingAssembly_16(RuntimeAssembly_t5EE9CD749D82345AE5635B9665665C31A3308EB1 * value)
	{
		___m_callingAssembly_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_callingAssembly_16), (void*)value);
	}

	inline static int32_t get_offset_of_resourceGroveler_17() { return static_cast<int32_t>(offsetof(ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF, ___resourceGroveler_17)); }
	inline RuntimeObject* get_resourceGroveler_17() const { return ___resourceGroveler_17; }
	inline RuntimeObject** get_address_of_resourceGroveler_17() { return &___resourceGroveler_17; }
	inline void set_resourceGroveler_17(RuntimeObject* value)
	{
		___resourceGroveler_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resourceGroveler_17), (void*)value);
	}
};

struct ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF_StaticFields
{
public:
	// System.Int32 System.Resources.ResourceManager::MagicNumber
	int32_t ___MagicNumber_18;
	// System.Int32 System.Resources.ResourceManager::HeaderVersionNumber
	int32_t ___HeaderVersionNumber_19;
	// System.Type System.Resources.ResourceManager::_minResourceSet
	Type_t * ____minResourceSet_20;
	// System.String System.Resources.ResourceManager::ResReaderTypeName
	String_t* ___ResReaderTypeName_21;
	// System.String System.Resources.ResourceManager::ResSetTypeName
	String_t* ___ResSetTypeName_22;
	// System.String System.Resources.ResourceManager::MscorlibName
	String_t* ___MscorlibName_23;
	// System.Int32 System.Resources.ResourceManager::DEBUG
	int32_t ___DEBUG_24;

public:
	inline static int32_t get_offset_of_MagicNumber_18() { return static_cast<int32_t>(offsetof(ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF_StaticFields, ___MagicNumber_18)); }
	inline int32_t get_MagicNumber_18() const { return ___MagicNumber_18; }
	inline int32_t* get_address_of_MagicNumber_18() { return &___MagicNumber_18; }
	inline void set_MagicNumber_18(int32_t value)
	{
		___MagicNumber_18 = value;
	}

	inline static int32_t get_offset_of_HeaderVersionNumber_19() { return static_cast<int32_t>(offsetof(ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF_StaticFields, ___HeaderVersionNumber_19)); }
	inline int32_t get_HeaderVersionNumber_19() const { return ___HeaderVersionNumber_19; }
	inline int32_t* get_address_of_HeaderVersionNumber_19() { return &___HeaderVersionNumber_19; }
	inline void set_HeaderVersionNumber_19(int32_t value)
	{
		___HeaderVersionNumber_19 = value;
	}

	inline static int32_t get_offset_of__minResourceSet_20() { return static_cast<int32_t>(offsetof(ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF_StaticFields, ____minResourceSet_20)); }
	inline Type_t * get__minResourceSet_20() const { return ____minResourceSet_20; }
	inline Type_t ** get_address_of__minResourceSet_20() { return &____minResourceSet_20; }
	inline void set__minResourceSet_20(Type_t * value)
	{
		____minResourceSet_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minResourceSet_20), (void*)value);
	}

	inline static int32_t get_offset_of_ResReaderTypeName_21() { return static_cast<int32_t>(offsetof(ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF_StaticFields, ___ResReaderTypeName_21)); }
	inline String_t* get_ResReaderTypeName_21() const { return ___ResReaderTypeName_21; }
	inline String_t** get_address_of_ResReaderTypeName_21() { return &___ResReaderTypeName_21; }
	inline void set_ResReaderTypeName_21(String_t* value)
	{
		___ResReaderTypeName_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResReaderTypeName_21), (void*)value);
	}

	inline static int32_t get_offset_of_ResSetTypeName_22() { return static_cast<int32_t>(offsetof(ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF_StaticFields, ___ResSetTypeName_22)); }
	inline String_t* get_ResSetTypeName_22() const { return ___ResSetTypeName_22; }
	inline String_t** get_address_of_ResSetTypeName_22() { return &___ResSetTypeName_22; }
	inline void set_ResSetTypeName_22(String_t* value)
	{
		___ResSetTypeName_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResSetTypeName_22), (void*)value);
	}

	inline static int32_t get_offset_of_MscorlibName_23() { return static_cast<int32_t>(offsetof(ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF_StaticFields, ___MscorlibName_23)); }
	inline String_t* get_MscorlibName_23() const { return ___MscorlibName_23; }
	inline String_t** get_address_of_MscorlibName_23() { return &___MscorlibName_23; }
	inline void set_MscorlibName_23(String_t* value)
	{
		___MscorlibName_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MscorlibName_23), (void*)value);
	}

	inline static int32_t get_offset_of_DEBUG_24() { return static_cast<int32_t>(offsetof(ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF_StaticFields, ___DEBUG_24)); }
	inline int32_t get_DEBUG_24() const { return ___DEBUG_24; }
	inline int32_t* get_address_of_DEBUG_24() { return &___DEBUG_24; }
	inline void set_DEBUG_24(int32_t value)
	{
		___DEBUG_24 = value;
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
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
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.ArrayTypeMismatchException
struct  ArrayTypeMismatchException_tE34C1032B089C37399200997F079C640D23D9499  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Reflection.TypeInfo
struct  TypeInfo_t9D6F65801A41B97F36138B15FD270A1550DBB3FC  : public Type_t
{
public:

public:
};


// System.Resources.MissingManifestResourceException
struct  MissingManifestResourceException_tD8397DA5F4CC63B78F91916522A302782CAB0261  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
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


// !!0 System.Runtime.CompilerServices.Unsafe::As<System.Object>(System.Object)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Unsafe_As_TisRuntimeObject_m465AC72ABF728317C803BAD605FD9A1D5E6DCD10_gshared_inline (RuntimeObject * ___o0, const RuntimeMethod* method);
// !!0& System.Runtime.CompilerServices.Unsafe::AsRef<System.Char>(System.Void*)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_AsRef_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m0DD664A461758B9515D03E4D303DCAF0FD6E8A58_gshared_inline (void* ___source0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.CompilerServices.Unsafe::ByteOffset<System.Char>(!!0&,!!0&)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR intptr_t Unsafe_ByteOffset_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mFEE62CDD3FE368CBFAF8D063E7E8043A68E3DB1A_gshared_inline (Il2CppChar* ___origin0, Il2CppChar* ___target1, const RuntimeMethod* method);

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0 (Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * __this, const RuntimeMethod* method);
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::get_OffsetToStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_get_OffsetToStringData_mF3B79A906181F1A2734590DA161E2AF183853F8B (const RuntimeMethod* method);
// !!0 System.Runtime.CompilerServices.Unsafe::As<System.Pinnable`1<System.Char>>(System.Object)
inline Pinnable_1_t2ACA23EB7EE2C66A2610C3784D66B2B1FC1E5FBB * Unsafe_As_TisPinnable_1_t2ACA23EB7EE2C66A2610C3784D66B2B1FC1E5FBB_mB9AF2048B27465D003913FB8B0042D8D0F7613BB_inline (RuntimeObject * ___o0, const RuntimeMethod* method)
{
	return ((  Pinnable_1_t2ACA23EB7EE2C66A2610C3784D66B2B1FC1E5FBB * (*) (RuntimeObject *, const RuntimeMethod*))Unsafe_As_TisRuntimeObject_m465AC72ABF728317C803BAD605FD9A1D5E6DCD10_gshared_inline)(___o0, method);
}
// !!0& System.Runtime.CompilerServices.Unsafe::AsRef<System.Char>(System.Void*)
inline Il2CppChar* Unsafe_AsRef_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m0DD664A461758B9515D03E4D303DCAF0FD6E8A58_inline (void* ___source0, const RuntimeMethod* method)
{
	return ((  Il2CppChar* (*) (void*, const RuntimeMethod*))Unsafe_AsRef_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m0DD664A461758B9515D03E4D303DCAF0FD6E8A58_gshared_inline)(___source0, method);
}
// System.IntPtr System.Runtime.CompilerServices.Unsafe::ByteOffset<System.Char>(!!0&,!!0&)
inline intptr_t Unsafe_ByteOffset_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mFEE62CDD3FE368CBFAF8D063E7E8043A68E3DB1A_inline (Il2CppChar* ___origin0, Il2CppChar* ___target1, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (Il2CppChar*, Il2CppChar*, const RuntimeMethod*))Unsafe_ByteOffset_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mFEE62CDD3FE368CBFAF8D063E7E8043A68E3DB1A_gshared_inline)(___origin0, ___target1, method);
}
// System.IntPtr System.MemoryExtensions::MeasureStringAdjustment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MemoryExtensions_MeasureStringAdjustment_m721B670FA44D75C3BE17156145124A0471C40EEA (const RuntimeMethod* method);
// System.Type System.SR::get_ResourceType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Type_t * SR_get_ResourceType_mC1257D52F66B39D18AEC6DF4F63EA50C2CA65CCE_inline (const RuntimeMethod* method);
// System.Void System.Resources.ResourceManager::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ResourceManager__ctor_m8715100BDE5F9365C34A762BCDB648626C380F9C (ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF * __this, Type_t * ___resourceSource0, const RuntimeMethod* method);
// System.Resources.ResourceManager System.SR::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF * SR_get_ResourceManager_mA606F1FD448C84CDF5572D2B929BEECC58AB119A (const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mB42D01789A129C548840C18E9065ACF9412F1F84 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.Boolean System.SR::UsingResourceKeys()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_mB5792C64649542B2BFB698CFA113C5B20A5C63B3 (const RuntimeMethod* method);
// System.String System.String::Join(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_mDF70E368E362309650302C1C1AB39906FC42BB72 (String_t* ___separator0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___values1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String System.SR::GetResourceString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_m65609B1BD089FDE6F12825CA874EA0397F5D7D65 (String_t* ___resourceKey0, String_t* ___defaultString1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Reflection.TypeInfo System.Reflection.IntrospectionExtensions::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_t9D6F65801A41B97F36138B15FD270A1550DBB3FC * IntrospectionExtensions_GetTypeInfo_mB8CD288832A36F852B99899A8506689F9B0D8D09 (Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsPrimitive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPrimitive_m8E39430EE4B70E1AE690B51E9BE681C7758DFF5A (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_mDDCCBAE9B59A483CBC3E5C02E3D68CEBEB2E41A8 (Type_t * __this, const RuntimeMethod* method);
// System.Type System.Nullable::GetUnderlyingType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Nullable_GetUnderlyingType_m038B195642BF738026196B1629997705B6317D04 (Type_t * ___nullableType0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsStatic_mDEB4099D238E5846246F0ACED3FF9AD9C93D8ECA (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Boolean System.SpanHelpers::IsReferenceOrContainsReferencesCore(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferencesCore_m0653B91186DD346626AA2D2CF839B05C906904D5 (Type_t * ___type0, const RuntimeMethod* method);
// System.Exception System.ThrowHelper::CreateArrayTypeMismatchException()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArrayTypeMismatchException_m0BB9D348FCF84266BC1A5759299A63BD00418A4C (const RuntimeMethod* method);
// System.Void System.ArrayTypeMismatchException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayTypeMismatchException__ctor_m1E7F220C883CE2ED1C4AA08ACA96D4E4B1A635F1 (ArrayTypeMismatchException_tE34C1032B089C37399200997F079C640D23D9499 * __this, const RuntimeMethod* method);
// System.Exception System.ThrowHelper::CreateArgumentException_InvalidTypeWithPointersNotSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentException_InvalidTypeWithPointersNotSupported_m36F1214AC57F07C7F979C9C900D2C4CF187D0D5D (Type_t * ___type0, const RuntimeMethod* method);
// System.String System.SR::get_Argument_InvalidTypeWithPointersNotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Argument_InvalidTypeWithPointersNotSupported_m80449175A67F98FC8A0ECFB6231BFFFCDB489B18 (const RuntimeMethod* method);
// System.String System.SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mB5B5730636306BC1027EE087CEE010F450C2F12C (String_t* ___resourceFormat0, RuntimeObject * ___p11, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Exception System.ThrowHelper::CreateArgumentException_DestinationTooShort()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentException_DestinationTooShort_m797238827F0E4A98CD79061063A3449D915E510E (const RuntimeMethod* method);
// System.String System.SR::get_Argument_DestinationTooShort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Argument_DestinationTooShort_m04CA55D9666BE9B687792D8CFC7F43E44464A57F (const RuntimeMethod* method);
// System.Exception System.ThrowHelper::CreateIndexOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateIndexOutOfRangeException_mD0262668695A413BE5685CD0904CD2D205866650 (const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m17448AB4B27BC9D8AEB4605CDB0EA053626ABEC1 (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * __this, const RuntimeMethod* method);
// System.Exception System.ThrowHelper::CreateArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentOutOfRangeException_mE148FD80DCF48396C6B47C83CAE26D7585BCFBFD (int32_t ___argument0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6 (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, String_t* ___paramName0, const RuntimeMethod* method);
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_mF7D647C8AD1532E99FE2175C2E8145E1164553FC (EmbeddedAttribute_tF753E95DD7FC86934324CF760A3BBCFB690B6C44 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
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
// System.IntPtr System.MemoryExtensions::MeasureStringAdjustment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MemoryExtensions_MeasureStringAdjustment_m721B670FA44D75C3BE17156145124A0471C40EEA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MemoryExtensions_MeasureStringAdjustment_m721B670FA44D75C3BE17156145124A0471C40EEA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Il2CppChar* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		V_0 = _stringLiteral86F7E437FAA5A7FCE15D1DDCB9EAEAEA377667B8;
		String_t* L_0 = V_0;
		V_2 = L_0;
		String_t* L_1 = V_2;
		V_1 = (Il2CppChar*)(((uintptr_t)L_1));
		Il2CppChar* L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		Il2CppChar* L_3 = V_1;
		int32_t L_4 = RuntimeHelpers_get_OffsetToStringData_mF3B79A906181F1A2734590DA161E2AF183853F8B(/*hidden argument*/NULL);
		V_1 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_3, (int32_t)L_4));
	}

IL_0016:
	{
		String_t* L_5 = V_0;
		Pinnable_1_t2ACA23EB7EE2C66A2610C3784D66B2B1FC1E5FBB * L_6 = Unsafe_As_TisPinnable_1_t2ACA23EB7EE2C66A2610C3784D66B2B1FC1E5FBB_mB9AF2048B27465D003913FB8B0042D8D0F7613BB_inline(L_5, /*hidden argument*/Unsafe_As_TisPinnable_1_t2ACA23EB7EE2C66A2610C3784D66B2B1FC1E5FBB_mB9AF2048B27465D003913FB8B0042D8D0F7613BB_RuntimeMethod_var);
		NullCheck(L_6);
		Il2CppChar* L_7 = L_6->get_address_of_Data_0();
		Il2CppChar* L_8 = V_1;
		Il2CppChar* L_9 = Unsafe_AsRef_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m0DD664A461758B9515D03E4D303DCAF0FD6E8A58_inline((void*)(void*)L_8, /*hidden argument*/Unsafe_AsRef_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m0DD664A461758B9515D03E4D303DCAF0FD6E8A58_RuntimeMethod_var);
		intptr_t L_10 = Unsafe_ByteOffset_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mFEE62CDD3FE368CBFAF8D063E7E8043A68E3DB1A_inline((Il2CppChar*)L_7, (Il2CppChar*)L_9, /*hidden argument*/Unsafe_ByteOffset_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mFEE62CDD3FE368CBFAF8D063E7E8043A68E3DB1A_RuntimeMethod_var);
		return (intptr_t)L_10;
	}
}
// System.Void System.MemoryExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryExtensions__cctor_m016B0E255FCF4865EC976EBB57981966C9BF9945 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MemoryExtensions__cctor_m016B0E255FCF4865EC976EBB57981966C9BF9945_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = MemoryExtensions_MeasureStringAdjustment_m721B670FA44D75C3BE17156145124A0471C40EEA(/*hidden argument*/NULL);
		((MemoryExtensions_tC558637731FCD9B4F56DCB4DBB92652BF31BDC2D_StaticFields*)il2cpp_codegen_static_fields_for(MemoryExtensions_tC558637731FCD9B4F56DCB4DBB92652BF31BDC2D_il2cpp_TypeInfo_var))->set_StringAdjustment_0((intptr_t)L_0);
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
// System.Void System.Runtime.CompilerServices.IsByRefLikeAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsByRefLikeAttribute__ctor_mFD89D0F505461C4F02D249F1F3370D97A5F3BCE2 (IsByRefLikeAttribute_t060646E0E96F6CD6D46C171DC23700C1154890E5 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
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
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m0563B2C199D30527A51A0A5E9B4D8BBE82F135F7 (IsReadOnlyAttribute_tC86E45C2741913B73C9A38902D64F6F01BCD7C9A * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
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
// System.Resources.ResourceManager System.SR::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF * SR_get_ResourceManager_mA606F1FD448C84CDF5572D2B929BEECC58AB119A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SR_get_ResourceManager_mA606F1FD448C84CDF5572D2B929BEECC58AB119A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF * G_B2_0 = NULL;
	ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_tFF6F28F73CC1134ED958D9F8B6D74C877395F7CA_il2cpp_TypeInfo_var);
		ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF * L_0 = ((SR_tFF6F28F73CC1134ED958D9F8B6D74C877395F7CA_StaticFields*)il2cpp_codegen_static_fields_for(SR_tFF6F28F73CC1134ED958D9F8B6D74C877395F7CA_il2cpp_TypeInfo_var))->get_s_resourceManager_0();
		ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_tFF6F28F73CC1134ED958D9F8B6D74C877395F7CA_il2cpp_TypeInfo_var);
		Type_t * L_2 = SR_get_ResourceType_mC1257D52F66B39D18AEC6DF4F63EA50C2CA65CCE_inline(/*hidden argument*/NULL);
		ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF * L_3 = (ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF *)il2cpp_codegen_object_new(ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF_il2cpp_TypeInfo_var);
		ResourceManager__ctor_m8715100BDE5F9365C34A762BCDB648626C380F9C(L_3, L_2, /*hidden argument*/NULL);
		ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF * L_4 = L_3;
		((SR_tFF6F28F73CC1134ED958D9F8B6D74C877395F7CA_StaticFields*)il2cpp_codegen_static_fields_for(SR_tFF6F28F73CC1134ED958D9F8B6D74C877395F7CA_il2cpp_TypeInfo_var))->set_s_resourceManager_0(L_4);
		G_B2_0 = L_4;
	}

IL_0019:
	{
		return G_B2_0;
	}
}
// System.Boolean System.SR::UsingResourceKeys()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_mB5792C64649542B2BFB698CFA113C5B20A5C63B3 (const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.String System.SR::GetResourceString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_m65609B1BD089FDE6F12825CA874EA0397F5D7D65 (String_t* ___resourceKey0, String_t* ___defaultString1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SR_GetResourceString_m65609B1BD089FDE6F12825CA874EA0397F5D7D65_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = (String_t*)NULL;
	}

IL_0002:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(SR_tFF6F28F73CC1134ED958D9F8B6D74C877395F7CA_il2cpp_TypeInfo_var);
		ResourceManager_t966CE0B6B59F36DD8797BDC20B5EEFACE0A883FF * L_0 = SR_get_ResourceManager_mA606F1FD448C84CDF5572D2B929BEECC58AB119A(/*hidden argument*/NULL);
		String_t* L_1 = ___resourceKey0;
		NullCheck(L_0);
		String_t* L_2 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(8 /* System.String System.Resources.ResourceManager::GetString(System.String) */, L_0, L_1);
		V_0 = L_2;
		goto IL_0013;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (MissingManifestResourceException_tD8397DA5F4CC63B78F91916522A302782CAB0261_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0010;
		throw e;
	}

CATCH_0010:
	{ // begin catch(System.Resources.MissingManifestResourceException)
		goto IL_0013;
	} // end catch (depth: 1)

IL_0013:
	{
		String_t* L_3 = ___defaultString1;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_4 = ___resourceKey0;
		String_t* L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = String_Equals_mB42D01789A129C548840C18E9065ACF9412F1F84(L_4, L_5, 4, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_7 = ___defaultString1;
		return L_7;
	}

IL_0022:
	{
		String_t* L_8 = V_0;
		return L_8;
	}
}
// System.String System.SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mB5B5730636306BC1027EE087CEE010F450C2F12C (String_t* ___resourceFormat0, RuntimeObject * ___p11, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SR_Format_mB5B5730636306BC1027EE087CEE010F450C2F12C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_tFF6F28F73CC1134ED958D9F8B6D74C877395F7CA_il2cpp_TypeInfo_var);
		bool L_0 = SR_UsingResourceKeys_mB5792C64649542B2BFB698CFA113C5B20A5C63B3(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		String_t* L_3 = ___resourceFormat0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_2;
		RuntimeObject * L_5 = ___p11;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		String_t* L_6 = String_Join_mDF70E368E362309650302C1C1AB39906FC42BB72(_stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46, L_4, /*hidden argument*/NULL);
		return L_6;
	}

IL_0020:
	{
		String_t* L_7 = ___resourceFormat0;
		RuntimeObject * L_8 = ___p11;
		String_t* L_9 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Type System.SR::get_ResourceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * SR_get_ResourceType_mC1257D52F66B39D18AEC6DF4F63EA50C2CA65CCE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SR_get_ResourceType_mC1257D52F66B39D18AEC6DF4F63EA50C2CA65CCE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_tFF6F28F73CC1134ED958D9F8B6D74C877395F7CA_il2cpp_TypeInfo_var);
		Type_t * L_0 = ((SR_tFF6F28F73CC1134ED958D9F8B6D74C877395F7CA_StaticFields*)il2cpp_codegen_static_fields_for(SR_tFF6F28F73CC1134ED958D9F8B6D74C877395F7CA_il2cpp_TypeInfo_var))->get_U3CResourceTypeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.String System.SR::get_NotSupported_CannotCallEqualsOnSpan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_NotSupported_CannotCallEqualsOnSpan_m323A8A570BE35C2A0571CA592E364E31AACE93B9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SR_get_NotSupported_CannotCallEqualsOnSpan_m323A8A570BE35C2A0571CA592E364E31AACE93B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_tFF6F28F73CC1134ED958D9F8B6D74C877395F7CA_il2cpp_TypeInfo_var);
		String_t* L_0 = SR_GetResourceString_m65609B1BD089FDE6F12825CA874EA0397F5D7D65(_stringLiteral05B52FE0F5B69D9AD1AB40663A7BAE4EA4437E85, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_NotSupported_CannotCallGetHashCodeOnSpan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_NotSupported_CannotCallGetHashCodeOnSpan_mE598ED65596185255C4C29C78E6EAF4BD7BB102D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SR_get_NotSupported_CannotCallGetHashCodeOnSpan_mE598ED65596185255C4C29C78E6EAF4BD7BB102D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_tFF6F28F73CC1134ED958D9F8B6D74C877395F7CA_il2cpp_TypeInfo_var);
		String_t* L_0 = SR_GetResourceString_m65609B1BD089FDE6F12825CA874EA0397F5D7D65(_stringLiteral2F0F0EA87948EC0E6B8AC05E6DD6EF5076B4BA7A, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_Argument_InvalidTypeWithPointersNotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Argument_InvalidTypeWithPointersNotSupported_m80449175A67F98FC8A0ECFB6231BFFFCDB489B18 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SR_get_Argument_InvalidTypeWithPointersNotSupported_m80449175A67F98FC8A0ECFB6231BFFFCDB489B18_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_tFF6F28F73CC1134ED958D9F8B6D74C877395F7CA_il2cpp_TypeInfo_var);
		String_t* L_0 = SR_GetResourceString_m65609B1BD089FDE6F12825CA874EA0397F5D7D65(_stringLiteral1473F76820B4777C0F441D8ACE016FF18E901953, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_Argument_DestinationTooShort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Argument_DestinationTooShort_m04CA55D9666BE9B687792D8CFC7F43E44464A57F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SR_get_Argument_DestinationTooShort_m04CA55D9666BE9B687792D8CFC7F43E44464A57F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_tFF6F28F73CC1134ED958D9F8B6D74C877395F7CA_il2cpp_TypeInfo_var);
		String_t* L_0 = SR_GetResourceString_m65609B1BD089FDE6F12825CA874EA0397F5D7D65(_stringLiteral8323D78D6CE11EA4F4CEA8AAC474C4DCF1C058F7, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.SR::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SR__cctor_m1EAB914CC047B4EB31958C5286094770326C7F90 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SR__cctor_m1EAB914CC047B4EB31958C5286094770326C7F90_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (SR_t357F482BF9C093E9DB53B4B3693767B8A131675E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		((SR_tFF6F28F73CC1134ED958D9F8B6D74C877395F7CA_StaticFields*)il2cpp_codegen_static_fields_for(SR_tFF6F28F73CC1134ED958D9F8B6D74C877395F7CA_il2cpp_TypeInfo_var))->set_U3CResourceTypeU3Ek__BackingField_1(L_1);
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
// System.Boolean System.SpanHelpers::IsReferenceOrContainsReferencesCore(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferencesCore_m0653B91186DD346626AA2D2CF839B05C906904D5 (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpanHelpers_IsReferenceOrContainsReferencesCore_m0653B91186DD346626AA2D2CF839B05C906904D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	FieldInfo_t * V_2 = NULL;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Type_t * L_0 = ___type0;
		TypeInfo_t9D6F65801A41B97F36138B15FD270A1550DBB3FC * L_1 = IntrospectionExtensions_GetTypeInfo_mB8CD288832A36F852B99899A8506689F9B0D8D09(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = Type_get_IsPrimitive_m8E39430EE4B70E1AE690B51E9BE681C7758DFF5A(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		Type_t * L_3 = ___type0;
		TypeInfo_t9D6F65801A41B97F36138B15FD270A1550DBB3FC * L_4 = IntrospectionExtensions_GetTypeInfo_mB8CD288832A36F852B99899A8506689F9B0D8D09(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = Type_get_IsValueType_mDDCCBAE9B59A483CBC3E5C02E3D68CEBEB2E41A8(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		Type_t * L_6 = ___type0;
		Type_t * L_7 = Nullable_GetUnderlyingType_m038B195642BF738026196B1629997705B6317D04(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Type_t * L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_9 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9(L_8, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0031;
		}
	}
	{
		Type_t * L_10 = V_0;
		___type0 = L_10;
	}

IL_0031:
	{
		Type_t * L_11 = ___type0;
		TypeInfo_t9D6F65801A41B97F36138B15FD270A1550DBB3FC * L_12 = IntrospectionExtensions_GetTypeInfo_mB8CD288832A36F852B99899A8506689F9B0D8D09(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		bool L_13 = VirtFuncInvoker0< bool >::Invoke(70 /* System.Boolean System.Type::get_IsEnum() */, L_12);
		if (!L_13)
		{
			goto IL_0040;
		}
	}
	{
		return (bool)0;
	}

IL_0040:
	{
		Type_t * L_14 = ___type0;
		TypeInfo_t9D6F65801A41B97F36138B15FD270A1550DBB3FC * L_15 = IntrospectionExtensions_GetTypeInfo_mB8CD288832A36F852B99899A8506689F9B0D8D09(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		RuntimeObject* L_16 = VirtFuncInvoker0< RuntimeObject* >::Invoke(114 /* System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> System.Reflection.TypeInfo::get_DeclaredFields() */, L_15);
		NullCheck(L_16);
		RuntimeObject* L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>::GetEnumerator() */, IEnumerable_1_t9B9CB136E3BB6C7C95E42EC9BC17D9F781AFAD23_il2cpp_TypeInfo_var, L_16);
		V_1 = L_17;
	}

IL_0051:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0073;
		}

IL_0053:
		{
			RuntimeObject* L_18 = V_1;
			NullCheck(L_18);
			FieldInfo_t * L_19 = InterfaceFuncInvoker0< FieldInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.FieldInfo>::get_Current() */, IEnumerator_1_tC65D35659A0144DCE2D08E61BD96C952A80AE3EC_il2cpp_TypeInfo_var, L_18);
			V_2 = L_19;
			FieldInfo_t * L_20 = V_2;
			NullCheck(L_20);
			bool L_21 = FieldInfo_get_IsStatic_mDEB4099D238E5846246F0ACED3FF9AD9C93D8ECA(L_20, /*hidden argument*/NULL);
			if (L_21)
			{
				goto IL_0073;
			}
		}

IL_0062:
		{
			FieldInfo_t * L_22 = V_2;
			NullCheck(L_22);
			Type_t * L_23 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_22);
			bool L_24 = SpanHelpers_IsReferenceOrContainsReferencesCore_m0653B91186DD346626AA2D2CF839B05C906904D5(L_23, /*hidden argument*/NULL);
			if (!L_24)
			{
				goto IL_0073;
			}
		}

IL_006f:
		{
			V_3 = (bool)1;
			IL2CPP_LEAVE(0x89, FINALLY_007d);
		}

IL_0073:
		{
			RuntimeObject* L_25 = V_1;
			NullCheck(L_25);
			bool L_26 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_25);
			if (L_26)
			{
				goto IL_0053;
			}
		}

IL_007b:
		{
			IL2CPP_LEAVE(0x87, FINALLY_007d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007d;
	}

FINALLY_007d:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_27 = V_1;
			if (!L_27)
			{
				goto IL_0086;
			}
		}

IL_0080:
		{
			RuntimeObject* L_28 = V_1;
			NullCheck(L_28);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_28);
		}

IL_0086:
		{
			IL2CPP_END_FINALLY(125)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(125)
	{
		IL2CPP_JUMP_TBL(0x89, IL_0089)
		IL2CPP_JUMP_TBL(0x87, IL_0087)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0087:
	{
		return (bool)0;
	}

IL_0089:
	{
		bool L_29 = V_3;
		return L_29;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ThrowHelper::ThrowArrayTypeMismatchException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArrayTypeMismatchException_mC74ABA636D4C8D656BA39C05BAF0262559641821 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThrowHelper_ThrowArrayTypeMismatchException_mC74ABA636D4C8D656BA39C05BAF0262559641821_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = ThrowHelper_CreateArrayTypeMismatchException_m0BB9D348FCF84266BC1A5759299A63BD00418A4C(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ThrowHelper_ThrowArrayTypeMismatchException_mC74ABA636D4C8D656BA39C05BAF0262559641821_RuntimeMethod_var);
	}
}
// System.Exception System.ThrowHelper::CreateArrayTypeMismatchException()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArrayTypeMismatchException_m0BB9D348FCF84266BC1A5759299A63BD00418A4C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThrowHelper_CreateArrayTypeMismatchException_m0BB9D348FCF84266BC1A5759299A63BD00418A4C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayTypeMismatchException_tE34C1032B089C37399200997F079C640D23D9499 * L_0 = (ArrayTypeMismatchException_tE34C1032B089C37399200997F079C640D23D9499 *)il2cpp_codegen_object_new(ArrayTypeMismatchException_tE34C1032B089C37399200997F079C640D23D9499_il2cpp_TypeInfo_var);
		ArrayTypeMismatchException__ctor_m1E7F220C883CE2ED1C4AA08ACA96D4E4B1A635F1(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.ThrowHelper::ThrowArgumentException_InvalidTypeWithPointersNotSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_m24B68EB8B0DC3995CFD82783E33FCE032C2C4D29 (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_m24B68EB8B0DC3995CFD82783E33FCE032C2C4D29_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___type0;
		Exception_t * L_1 = ThrowHelper_CreateArgumentException_InvalidTypeWithPointersNotSupported_m36F1214AC57F07C7F979C9C900D2C4CF187D0D5D(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_m24B68EB8B0DC3995CFD82783E33FCE032C2C4D29_RuntimeMethod_var);
	}
}
// System.Exception System.ThrowHelper::CreateArgumentException_InvalidTypeWithPointersNotSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentException_InvalidTypeWithPointersNotSupported_m36F1214AC57F07C7F979C9C900D2C4CF187D0D5D (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThrowHelper_CreateArgumentException_InvalidTypeWithPointersNotSupported_m36F1214AC57F07C7F979C9C900D2C4CF187D0D5D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_tFF6F28F73CC1134ED958D9F8B6D74C877395F7CA_il2cpp_TypeInfo_var);
		String_t* L_0 = SR_get_Argument_InvalidTypeWithPointersNotSupported_m80449175A67F98FC8A0ECFB6231BFFFCDB489B18(/*hidden argument*/NULL);
		Type_t * L_1 = ___type0;
		String_t* L_2 = SR_Format_mB5B5730636306BC1027EE087CEE010F450C2F12C(L_0, L_1, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_3 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void System.ThrowHelper::ThrowArgumentException_DestinationTooShort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_DestinationTooShort_m95F5FB4394C497E7C506BCB7A2B6C1D98F746E47 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThrowHelper_ThrowArgumentException_DestinationTooShort_m95F5FB4394C497E7C506BCB7A2B6C1D98F746E47_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = ThrowHelper_CreateArgumentException_DestinationTooShort_m797238827F0E4A98CD79061063A3449D915E510E(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ThrowHelper_ThrowArgumentException_DestinationTooShort_m95F5FB4394C497E7C506BCB7A2B6C1D98F746E47_RuntimeMethod_var);
	}
}
// System.Exception System.ThrowHelper::CreateArgumentException_DestinationTooShort()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentException_DestinationTooShort_m797238827F0E4A98CD79061063A3449D915E510E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThrowHelper_CreateArgumentException_DestinationTooShort_m797238827F0E4A98CD79061063A3449D915E510E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_tFF6F28F73CC1134ED958D9F8B6D74C877395F7CA_il2cpp_TypeInfo_var);
		String_t* L_0 = SR_get_Argument_DestinationTooShort_m04CA55D9666BE9B687792D8CFC7F43E44464A57F(/*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_1 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.ThrowHelper::ThrowIndexOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_m21B49ED7044B8BB437800AD96FC746584B6963C2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThrowHelper_ThrowIndexOutOfRangeException_m21B49ED7044B8BB437800AD96FC746584B6963C2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = ThrowHelper_CreateIndexOutOfRangeException_mD0262668695A413BE5685CD0904CD2D205866650(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ThrowHelper_ThrowIndexOutOfRangeException_m21B49ED7044B8BB437800AD96FC746584B6963C2_RuntimeMethod_var);
	}
}
// System.Exception System.ThrowHelper::CreateIndexOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateIndexOutOfRangeException_mD0262668695A413BE5685CD0904CD2D205866650 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThrowHelper_CreateIndexOutOfRangeException_mD0262668695A413BE5685CD0904CD2D205866650_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * L_0 = (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF *)il2cpp_codegen_object_new(IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m17448AB4B27BC9D8AEB4605CDB0EA053626ABEC1(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m8AB0E4E581B62C38741C58B3427D965D32F02CC7 (int32_t ___argument0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThrowHelper_ThrowArgumentOutOfRangeException_m8AB0E4E581B62C38741C58B3427D965D32F02CC7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___argument0;
		Exception_t * L_1 = ThrowHelper_CreateArgumentOutOfRangeException_mE148FD80DCF48396C6B47C83CAE26D7585BCFBFD(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ThrowHelper_ThrowArgumentOutOfRangeException_m8AB0E4E581B62C38741C58B3427D965D32F02CC7_RuntimeMethod_var);
	}
}
// System.Exception System.ThrowHelper::CreateArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentOutOfRangeException_mE148FD80DCF48396C6B47C83CAE26D7585BCFBFD (int32_t ___argument0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThrowHelper_CreateArgumentOutOfRangeException_mE148FD80DCF48396C6B47C83CAE26D7585BCFBFD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = Box(ExceptionArgument_t279974A2A0334B8563B771C0FEC76B658CA74AE6_il2cpp_TypeInfo_var, (&___argument0));
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		___argument0 = *(int32_t*)UnBox(L_0);
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Type_t * SR_get_ResourceType_mC1257D52F66B39D18AEC6DF4F63EA50C2CA65CCE_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SR_get_ResourceType_mC1257D52F66B39D18AEC6DF4F63EA50C2CA65CCESystem_Memory_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_tFF6F28F73CC1134ED958D9F8B6D74C877395F7CA_il2cpp_TypeInfo_var);
		Type_t * L_0 = ((SR_tFF6F28F73CC1134ED958D9F8B6D74C877395F7CA_StaticFields*)il2cpp_codegen_static_fields_for(SR_tFF6F28F73CC1134ED958D9F8B6D74C877395F7CA_il2cpp_TypeInfo_var))->get_U3CResourceTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Unsafe_As_TisRuntimeObject_m465AC72ABF728317C803BAD605FD9A1D5E6DCD10_gshared_inline (RuntimeObject * ___o0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___o0;
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_AsRef_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m0DD664A461758B9515D03E4D303DCAF0FD6E8A58_gshared_inline (void* ___source0, const RuntimeMethod* method)
{
	int32_t* V_0 = NULL;
	{
		void* L_0 = ___source0;
		V_0 = (int32_t*)L_0;
		int32_t* L_1 = V_0;
		return (Il2CppChar*)(L_1);
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR intptr_t Unsafe_ByteOffset_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mFEE62CDD3FE368CBFAF8D063E7E8043A68E3DB1A_gshared_inline (Il2CppChar* ___origin0, Il2CppChar* ___target1, const RuntimeMethod* method)
{
	{
		Il2CppChar* L_0 = ___target1;
		Il2CppChar* L_1 = ___origin0;
		return (intptr_t)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_0, (intptr_t)L_1));
	}
}
