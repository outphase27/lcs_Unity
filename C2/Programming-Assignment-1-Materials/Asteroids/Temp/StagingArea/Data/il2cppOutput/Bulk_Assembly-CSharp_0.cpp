﻿#include "il2cpp-config.h"

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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// Asteroid
struct Asteroid_t895017848;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Sprite
struct Sprite_t280657092;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t939494601;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3235626157;
// GameInitializer
struct GameInitializer_t2260794205;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Transform
struct Transform_t3600365921;
// ScreenWrapper
struct ScreenWrapper_t1173077880;
// UnityEngine.CircleCollider2D
struct CircleCollider2D_t662546754;
// Ship
struct Ship_t609595780;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t2581906349;

extern RuntimeClass* SpriteU5BU5D_t2581906349_il2cpp_TypeInfo_var;
extern const uint32_t Asteroid__ctor_m3592522758_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var;
extern const uint32_t Asteroid_Start_m4022298854_MetadataUsageId;
extern RuntimeClass* ScreenUtils_t317983799_il2cpp_TypeInfo_var;
extern const uint32_t ScreenUtils_get_ScreenLeft_m4016222789_MetadataUsageId;
extern const uint32_t ScreenUtils_get_ScreenRight_m555408866_MetadataUsageId;
extern const uint32_t ScreenUtils_get_ScreenTop_m73875077_MetadataUsageId;
extern const uint32_t ScreenUtils_get_ScreenBottom_m666689270_MetadataUsageId;
extern const uint32_t ScreenUtils_Initialize_m2443190515_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisCircleCollider2D_t662546754_m1597288992_RuntimeMethod_var;
extern const uint32_t ScreenWrapper_Start_m1023405828_MetadataUsageId;
extern const uint32_t ScreenWrapper_OnBecameInvisible_m2858693946_MetadataUsageId;
extern const uint32_t Ship_Start_m2848566607_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral845267518;
extern const uint32_t Ship_Update_m1403980449_MetadataUsageId;
extern String_t* _stringLiteral1992742979;
extern const uint32_t Ship_FixedUpdate_m2384912172_MetadataUsageId;

struct SpriteU5BU5D_t2581906349;


#ifndef U3CMODULEU3E_T692745536_H
#define U3CMODULEU3E_T692745536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745536 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745536_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef SCREENUTILS_T317983799_H
#define SCREENUTILS_T317983799_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenUtils
struct  ScreenUtils_t317983799  : public RuntimeObject
{
public:

public:
};

struct ScreenUtils_t317983799_StaticFields
{
public:
	// System.Single ScreenUtils::screenLeft
	float ___screenLeft_0;
	// System.Single ScreenUtils::screenRight
	float ___screenRight_1;
	// System.Single ScreenUtils::screenTop
	float ___screenTop_2;
	// System.Single ScreenUtils::screenBottom
	float ___screenBottom_3;

public:
	inline static int32_t get_offset_of_screenLeft_0() { return static_cast<int32_t>(offsetof(ScreenUtils_t317983799_StaticFields, ___screenLeft_0)); }
	inline float get_screenLeft_0() const { return ___screenLeft_0; }
	inline float* get_address_of_screenLeft_0() { return &___screenLeft_0; }
	inline void set_screenLeft_0(float value)
	{
		___screenLeft_0 = value;
	}

	inline static int32_t get_offset_of_screenRight_1() { return static_cast<int32_t>(offsetof(ScreenUtils_t317983799_StaticFields, ___screenRight_1)); }
	inline float get_screenRight_1() const { return ___screenRight_1; }
	inline float* get_address_of_screenRight_1() { return &___screenRight_1; }
	inline void set_screenRight_1(float value)
	{
		___screenRight_1 = value;
	}

	inline static int32_t get_offset_of_screenTop_2() { return static_cast<int32_t>(offsetof(ScreenUtils_t317983799_StaticFields, ___screenTop_2)); }
	inline float get_screenTop_2() const { return ___screenTop_2; }
	inline float* get_address_of_screenTop_2() { return &___screenTop_2; }
	inline void set_screenTop_2(float value)
	{
		___screenTop_2 = value;
	}

	inline static int32_t get_offset_of_screenBottom_3() { return static_cast<int32_t>(offsetof(ScreenUtils_t317983799_StaticFields, ___screenBottom_3)); }
	inline float get_screenBottom_3() const { return ___screenBottom_3; }
	inline float* get_address_of_screenBottom_3() { return &___screenBottom_3; }
	inline void set_screenBottom_3(float value)
	{
		___screenBottom_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENUTILS_T317983799_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_0;
	// System.Single UnityEngine.Vector3::y
	float ___y_1;
	// System.Single UnityEngine.Vector3::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_3;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_12;

public:
	inline static int32_t get_offset_of_zeroVector_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_3)); }
	inline Vector3_t3722313464  get_zeroVector_3() const { return ___zeroVector_3; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_3() { return &___zeroVector_3; }
	inline void set_zeroVector_3(Vector3_t3722313464  value)
	{
		___zeroVector_3 = value;
	}

	inline static int32_t get_offset_of_oneVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_4)); }
	inline Vector3_t3722313464  get_oneVector_4() const { return ___oneVector_4; }
	inline Vector3_t3722313464 * get_address_of_oneVector_4() { return &___oneVector_4; }
	inline void set_oneVector_4(Vector3_t3722313464  value)
	{
		___oneVector_4 = value;
	}

	inline static int32_t get_offset_of_upVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_5)); }
	inline Vector3_t3722313464  get_upVector_5() const { return ___upVector_5; }
	inline Vector3_t3722313464 * get_address_of_upVector_5() { return &___upVector_5; }
	inline void set_upVector_5(Vector3_t3722313464  value)
	{
		___upVector_5 = value;
	}

	inline static int32_t get_offset_of_downVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_6)); }
	inline Vector3_t3722313464  get_downVector_6() const { return ___downVector_6; }
	inline Vector3_t3722313464 * get_address_of_downVector_6() { return &___downVector_6; }
	inline void set_downVector_6(Vector3_t3722313464  value)
	{
		___downVector_6 = value;
	}

	inline static int32_t get_offset_of_leftVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_7)); }
	inline Vector3_t3722313464  get_leftVector_7() const { return ___leftVector_7; }
	inline Vector3_t3722313464 * get_address_of_leftVector_7() { return &___leftVector_7; }
	inline void set_leftVector_7(Vector3_t3722313464  value)
	{
		___leftVector_7 = value;
	}

	inline static int32_t get_offset_of_rightVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_8)); }
	inline Vector3_t3722313464  get_rightVector_8() const { return ___rightVector_8; }
	inline Vector3_t3722313464 * get_address_of_rightVector_8() { return &___rightVector_8; }
	inline void set_rightVector_8(Vector3_t3722313464  value)
	{
		___rightVector_8 = value;
	}

	inline static int32_t get_offset_of_forwardVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_9)); }
	inline Vector3_t3722313464  get_forwardVector_9() const { return ___forwardVector_9; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_9() { return &___forwardVector_9; }
	inline void set_forwardVector_9(Vector3_t3722313464  value)
	{
		___forwardVector_9 = value;
	}

	inline static int32_t get_offset_of_backVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_10)); }
	inline Vector3_t3722313464  get_backVector_10() const { return ___backVector_10; }
	inline Vector3_t3722313464 * get_address_of_backVector_10() { return &___backVector_10; }
	inline void set_backVector_10(Vector3_t3722313464  value)
	{
		___backVector_10 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_11)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_11() const { return ___positiveInfinityVector_11; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_11() { return &___positiveInfinityVector_11; }
	inline void set_positiveInfinityVector_11(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_11 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_12)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_12() const { return ___negativeInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_12() { return &___negativeInfinityVector_12; }
	inline void set_negativeInfinityVector_12(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef FORCEMODE2D_T255358695_H
#define FORCEMODE2D_T255358695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ForceMode2D
struct  ForceMode2D_t255358695 
{
public:
	// System.Int32 UnityEngine.ForceMode2D::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ForceMode2D_t255358695, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORCEMODE2D_T255358695_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef SPRITE_T280657092_H
#define SPRITE_T280657092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprite
struct  Sprite_t280657092  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITE_T280657092_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef RIGIDBODY2D_T939494601_H
#define RIGIDBODY2D_T939494601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody2D
struct  Rigidbody2D_t939494601  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY2D_T939494601_H
#ifndef COLLIDER2D_T2806799626_H
#define COLLIDER2D_T2806799626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider2D
struct  Collider2D_t2806799626  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER2D_T2806799626_H
#ifndef SPRITERENDERER_T3235626157_H
#define SPRITERENDERER_T3235626157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3235626157  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_T3235626157_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t190067161 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t190067161 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t190067161 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t190067161 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t190067161 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t190067161 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef ASTEROID_T895017848_H
#define ASTEROID_T895017848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Asteroid
struct  Asteroid_t895017848  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Sprite[] Asteroid::sprites
	SpriteU5BU5D_t2581906349* ___sprites_2;
	// UnityEngine.SpriteRenderer Asteroid::spriteRenderer
	SpriteRenderer_t3235626157 * ___spriteRenderer_3;

public:
	inline static int32_t get_offset_of_sprites_2() { return static_cast<int32_t>(offsetof(Asteroid_t895017848, ___sprites_2)); }
	inline SpriteU5BU5D_t2581906349* get_sprites_2() const { return ___sprites_2; }
	inline SpriteU5BU5D_t2581906349** get_address_of_sprites_2() { return &___sprites_2; }
	inline void set_sprites_2(SpriteU5BU5D_t2581906349* value)
	{
		___sprites_2 = value;
		Il2CppCodeGenWriteBarrier((&___sprites_2), value);
	}

	inline static int32_t get_offset_of_spriteRenderer_3() { return static_cast<int32_t>(offsetof(Asteroid_t895017848, ___spriteRenderer_3)); }
	inline SpriteRenderer_t3235626157 * get_spriteRenderer_3() const { return ___spriteRenderer_3; }
	inline SpriteRenderer_t3235626157 ** get_address_of_spriteRenderer_3() { return &___spriteRenderer_3; }
	inline void set_spriteRenderer_3(SpriteRenderer_t3235626157 * value)
	{
		___spriteRenderer_3 = value;
		Il2CppCodeGenWriteBarrier((&___spriteRenderer_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASTEROID_T895017848_H
#ifndef GAMEINITIALIZER_T2260794205_H
#define GAMEINITIALIZER_T2260794205_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameInitializer
struct  GameInitializer_t2260794205  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEINITIALIZER_T2260794205_H
#ifndef SCREENWRAPPER_T1173077880_H
#define SCREENWRAPPER_T1173077880_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenWrapper
struct  ScreenWrapper_t1173077880  : public MonoBehaviour_t3962482529
{
public:
	// System.Single ScreenWrapper::colliderRadius
	float ___colliderRadius_2;

public:
	inline static int32_t get_offset_of_colliderRadius_2() { return static_cast<int32_t>(offsetof(ScreenWrapper_t1173077880, ___colliderRadius_2)); }
	inline float get_colliderRadius_2() const { return ___colliderRadius_2; }
	inline float* get_address_of_colliderRadius_2() { return &___colliderRadius_2; }
	inline void set_colliderRadius_2(float value)
	{
		___colliderRadius_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENWRAPPER_T1173077880_H
#ifndef CIRCLECOLLIDER2D_T662546754_H
#define CIRCLECOLLIDER2D_T662546754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CircleCollider2D
struct  CircleCollider2D_t662546754  : public Collider2D_t2806799626
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CIRCLECOLLIDER2D_T662546754_H
#ifndef SHIP_T609595780_H
#define SHIP_T609595780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ship
struct  Ship_t609595780  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Vector2 Ship::thrustDirection
	Vector2_t2156229523  ___thrustDirection_2;
	// UnityEngine.Rigidbody2D Ship::rb2D
	Rigidbody2D_t939494601 * ___rb2D_5;

public:
	inline static int32_t get_offset_of_thrustDirection_2() { return static_cast<int32_t>(offsetof(Ship_t609595780, ___thrustDirection_2)); }
	inline Vector2_t2156229523  get_thrustDirection_2() const { return ___thrustDirection_2; }
	inline Vector2_t2156229523 * get_address_of_thrustDirection_2() { return &___thrustDirection_2; }
	inline void set_thrustDirection_2(Vector2_t2156229523  value)
	{
		___thrustDirection_2 = value;
	}

	inline static int32_t get_offset_of_rb2D_5() { return static_cast<int32_t>(offsetof(Ship_t609595780, ___rb2D_5)); }
	inline Rigidbody2D_t939494601 * get_rb2D_5() const { return ___rb2D_5; }
	inline Rigidbody2D_t939494601 ** get_address_of_rb2D_5() { return &___rb2D_5; }
	inline void set_rb2D_5(Rigidbody2D_t939494601 * value)
	{
		___rb2D_5 = value;
		Il2CppCodeGenWriteBarrier((&___rb2D_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHIP_T609595780_H
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t2581906349  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Sprite_t280657092 * m_Items[1];

public:
	inline Sprite_t280657092 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_t280657092 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_t280657092 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Sprite_t280657092 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_t280657092 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_t280657092 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
extern "C"  float Random_Range_m2202990745 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t939494601_m1531613439(__this, method) ((  Rigidbody2D_t939494601 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t2156229523  Vector2_op_Multiply_m2347887432 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2,UnityEngine.ForceMode2D)
extern "C"  void Rigidbody2D_AddForce_m1099013366 (Rigidbody2D_t939494601 * __this, Vector2_t2156229523  p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
#define Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(__this, method) ((  SpriteRenderer_t3235626157 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C"  int32_t Random_Range_m4054026115 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
extern "C"  void SpriteRenderer_set_sprite_m1286893786 (SpriteRenderer_t3235626157 * __this, Sprite_t280657092 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenUtils::Initialize()
extern "C"  void ScreenUtils_Initialize_m2443190515 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t4157153871 * Camera_get_main_m3643453163 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_width()
extern "C"  int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_height()
extern "C"  int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Camera_ScreenToWorldPoint_m3978588570 (Camera_t4157153871 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CircleCollider2D>()
#define Component_GetComponent_TisCircleCollider2D_t662546754_m1597288992(__this, method) ((  CircleCollider2D_t662546754 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Single UnityEngine.CircleCollider2D::get_radius()
extern "C"  float CircleCollider2D_get_radius_m4030485572 (CircleCollider2D_t662546754 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single ScreenUtils::get_ScreenLeft()
extern "C"  float ScreenUtils_get_ScreenLeft_m4016222789 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single ScreenUtils::get_ScreenRight()
extern "C"  float ScreenUtils_get_ScreenRight_m555408866 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single ScreenUtils::get_ScreenTop()
extern "C"  float ScreenUtils_get_ScreenTop_m73875077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single ScreenUtils::get_ScreenBottom()
extern "C"  float ScreenUtils_get_ScreenBottom_m666689270 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C"  Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Input::GetAxis(System.String)
extern "C"  float Input_GetAxis_m4009438427 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C"  Vector3_t3722313464  Vector3_get_forward_m3100859705 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
extern "C"  void Transform_Rotate_m1749346957 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
extern "C"  Vector3_t3722313464  Transform_get_eulerAngles_m2743581774 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(System.Single,UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  Vector2_op_Multiply_m3294489634 (RuntimeObject * __this /* static, unused */, float p0, Vector2_t2156229523  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Void Asteroid::.ctor()
extern "C"  void Asteroid__ctor_m3592522758 (Asteroid_t895017848 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asteroid__ctor_m3592522758_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_sprites_2(((SpriteU5BU5D_t2581906349*)SZArrayNew(SpriteU5BU5D_t2581906349_il2cpp_TypeInfo_var, (uint32_t)3)));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Asteroid::Start()
extern "C"  void Asteroid_Start_m4022298854 (Asteroid_t895017848 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asteroid_Start_m4022298854_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		float L_0 = Random_Range_m2202990745(NULL /*static, unused*/, (0.0f), (6.28318548f), /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_2 = cosf(L_1);
		float L_3 = V_0;
		float L_4 = sinf(L_3);
		Vector2__ctor_m3970636864((&V_1), L_2, L_4, /*hidden argument*/NULL);
		float L_5 = Random_Range_m2202990745(NULL /*static, unused*/, (1.0f), (5.0f), /*hidden argument*/NULL);
		V_2 = L_5;
		Rigidbody2D_t939494601 * L_6 = Component_GetComponent_TisRigidbody2D_t939494601_m1531613439(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var);
		Vector2_t2156229523  L_7 = V_1;
		float L_8 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_9 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m1099013366(L_6, L_9, 1, /*hidden argument*/NULL);
		SpriteRenderer_t3235626157 * L_10 = Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var);
		__this->set_spriteRenderer_3(L_10);
		SpriteRenderer_t3235626157 * L_11 = __this->get_spriteRenderer_3();
		SpriteU5BU5D_t2581906349* L_12 = __this->get_sprites_2();
		int32_t L_13 = Random_Range_m4054026115(NULL /*static, unused*/, 0, 4, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		Sprite_t280657092 * L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		SpriteRenderer_set_sprite_m1286893786(L_11, L_15, /*hidden argument*/NULL);
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
// System.Void GameInitializer::.ctor()
extern "C"  void GameInitializer__ctor_m166599142 (GameInitializer_t2260794205 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameInitializer::Awake()
extern "C"  void GameInitializer_Awake_m2076211790 (GameInitializer_t2260794205 * __this, const RuntimeMethod* method)
{
	{
		ScreenUtils_Initialize_m2443190515(NULL /*static, unused*/, /*hidden argument*/NULL);
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
// System.Single ScreenUtils::get_ScreenLeft()
extern "C"  float ScreenUtils_get_ScreenLeft_m4016222789 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenUtils_get_ScreenLeft_m4016222789_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ((ScreenUtils_t317983799_StaticFields*)il2cpp_codegen_static_fields_for(ScreenUtils_t317983799_il2cpp_TypeInfo_var))->get_screenLeft_0();
		return L_0;
	}
}
// System.Single ScreenUtils::get_ScreenRight()
extern "C"  float ScreenUtils_get_ScreenRight_m555408866 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenUtils_get_ScreenRight_m555408866_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ((ScreenUtils_t317983799_StaticFields*)il2cpp_codegen_static_fields_for(ScreenUtils_t317983799_il2cpp_TypeInfo_var))->get_screenRight_1();
		return L_0;
	}
}
// System.Single ScreenUtils::get_ScreenTop()
extern "C"  float ScreenUtils_get_ScreenTop_m73875077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenUtils_get_ScreenTop_m73875077_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ((ScreenUtils_t317983799_StaticFields*)il2cpp_codegen_static_fields_for(ScreenUtils_t317983799_il2cpp_TypeInfo_var))->get_screenTop_2();
		return L_0;
	}
}
// System.Single ScreenUtils::get_ScreenBottom()
extern "C"  float ScreenUtils_get_ScreenBottom_m666689270 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenUtils_get_ScreenBottom_m666689270_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ((ScreenUtils_t317983799_StaticFields*)il2cpp_codegen_static_fields_for(ScreenUtils_t317983799_il2cpp_TypeInfo_var))->get_screenBottom_3();
		return L_0;
	}
}
// System.Void ScreenUtils::Initialize()
extern "C"  void ScreenUtils_Initialize_m2443190515 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenUtils_Initialize_m2443190515_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		Camera_t4157153871 * L_0 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(L_0, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = (&V_1)->get_z_2();
		V_0 = ((-L_3));
		float L_4 = V_0;
		Vector3__ctor_m3353183577((&V_2), (0.0f), (0.0f), L_4, /*hidden argument*/NULL);
		int32_t L_5 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_6 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_7 = V_0;
		Vector3__ctor_m3353183577((&V_3), (((float)((float)L_5))), (((float)((float)L_6))), L_7, /*hidden argument*/NULL);
		Camera_t4157153871 * L_8 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_9 = V_2;
		Vector3_t3722313464  L_10 = Camera_ScreenToWorldPoint_m3978588570(L_8, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		Camera_t4157153871 * L_11 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_12 = V_3;
		Vector3_t3722313464  L_13 = Camera_ScreenToWorldPoint_m3978588570(L_11, L_12, /*hidden argument*/NULL);
		V_5 = L_13;
		float L_14 = (&V_4)->get_x_0();
		((ScreenUtils_t317983799_StaticFields*)il2cpp_codegen_static_fields_for(ScreenUtils_t317983799_il2cpp_TypeInfo_var))->set_screenLeft_0(L_14);
		float L_15 = (&V_5)->get_x_0();
		((ScreenUtils_t317983799_StaticFields*)il2cpp_codegen_static_fields_for(ScreenUtils_t317983799_il2cpp_TypeInfo_var))->set_screenRight_1(L_15);
		float L_16 = (&V_5)->get_y_1();
		((ScreenUtils_t317983799_StaticFields*)il2cpp_codegen_static_fields_for(ScreenUtils_t317983799_il2cpp_TypeInfo_var))->set_screenTop_2(L_16);
		float L_17 = (&V_4)->get_y_1();
		((ScreenUtils_t317983799_StaticFields*)il2cpp_codegen_static_fields_for(ScreenUtils_t317983799_il2cpp_TypeInfo_var))->set_screenBottom_3(L_17);
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
// System.Void ScreenWrapper::.ctor()
extern "C"  void ScreenWrapper__ctor_m876998216 (ScreenWrapper_t1173077880 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScreenWrapper::Start()
extern "C"  void ScreenWrapper_Start_m1023405828 (ScreenWrapper_t1173077880 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenWrapper_Start_m1023405828_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CircleCollider2D_t662546754 * L_0 = Component_GetComponent_TisCircleCollider2D_t662546754_m1597288992(__this, /*hidden argument*/Component_GetComponent_TisCircleCollider2D_t662546754_m1597288992_RuntimeMethod_var);
		float L_1 = CircleCollider2D_get_radius_m4030485572(L_0, /*hidden argument*/NULL);
		__this->set_colliderRadius_2(L_1);
		return;
	}
}
// System.Void ScreenWrapper::OnBecameInvisible()
extern "C"  void ScreenWrapper_OnBecameInvisible_m2858693946 (ScreenWrapper_t1173077880 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenWrapper_OnBecameInvisible_m2858693946_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_2 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_x_0();
		float L_4 = __this->get_colliderRadius_2();
		float L_5 = ScreenUtils_get_ScreenLeft_m4016222789(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((float)((float)il2cpp_codegen_add((float)L_3, (float)L_4))) < ((float)L_5)))
		{
			goto IL_0041;
		}
	}
	{
		float L_6 = (&V_0)->get_x_0();
		float L_7 = __this->get_colliderRadius_2();
		float L_8 = ScreenUtils_get_ScreenRight_m555408866(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_6, (float)L_7))) > ((float)L_8))))
		{
			goto IL_0054;
		}
	}

IL_0041:
	{
		Vector2_t2156229523 * L_9 = (&V_0);
		float L_10 = L_9->get_x_0();
		L_9->set_x_0(((float)il2cpp_codegen_multiply((float)L_10, (float)(-1.0f))));
	}

IL_0054:
	{
		float L_11 = (&V_0)->get_y_1();
		float L_12 = __this->get_colliderRadius_2();
		float L_13 = ScreenUtils_get_ScreenTop_m73875077(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((float)((float)il2cpp_codegen_subtract((float)L_11, (float)L_12))) > ((float)L_13)))
		{
			goto IL_0084;
		}
	}
	{
		float L_14 = (&V_0)->get_y_1();
		float L_15 = __this->get_colliderRadius_2();
		float L_16 = ScreenUtils_get_ScreenBottom_m666689270(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)((float)il2cpp_codegen_add((float)L_14, (float)L_15))) < ((float)L_16))))
		{
			goto IL_0097;
		}
	}

IL_0084:
	{
		Vector2_t2156229523 * L_17 = (&V_0);
		float L_18 = L_17->get_y_1();
		L_17->set_y_1(((float)il2cpp_codegen_multiply((float)L_18, (float)(-1.0f))));
	}

IL_0097:
	{
		Transform_t3600365921 * L_19 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector2_t2156229523  L_20 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_21 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_19, L_21, /*hidden argument*/NULL);
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
// System.Void Ship::.ctor()
extern "C"  void Ship__ctor_m2083170999 (Ship_t609595780 * __this, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector2__ctor_m3970636864((&L_0), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_thrustDirection_2(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Ship::Start()
extern "C"  void Ship_Start_m2848566607 (Ship_t609595780 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Ship_Start_m2848566607_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody2D_t939494601 * L_0 = Component_GetComponent_TisRigidbody2D_t939494601_m1531613439(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var);
		__this->set_rb2D_5(L_0);
		return;
	}
}
// System.Void Ship::Update()
extern "C"  void Ship_Update_m1403980449 (Ship_t609595780 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Ship_Update_m1403980449_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral845267518, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		if ((((float)L_1) == ((float)(0.0f))))
		{
			goto IL_0082;
		}
	}
	{
		float L_2 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)(180.0f), (float)L_2));
		float L_3 = V_0;
		if ((!(((float)L_3) < ((float)(0.0f)))))
		{
			goto IL_0035;
		}
	}
	{
		float L_4 = V_1;
		V_1 = ((float)il2cpp_codegen_multiply((float)L_4, (float)(-1.0f)));
	}

IL_0035:
	{
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_7 = V_1;
		Transform_Rotate_m1749346957(L_5, L_6, L_7, /*hidden argument*/NULL);
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_9 = Transform_get_eulerAngles_m2743581774(L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		float L_10 = (&V_3)->get_z_2();
		V_2 = ((float)il2cpp_codegen_multiply((float)L_10, (float)(0.0174532924f)));
		Vector2_t2156229523 * L_11 = __this->get_address_of_thrustDirection_2();
		float L_12 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_13 = cosf(L_12);
		L_11->set_x_0(L_13);
		Vector2_t2156229523 * L_14 = __this->get_address_of_thrustDirection_2();
		float L_15 = V_2;
		float L_16 = sinf(L_15);
		L_14->set_y_1(L_16);
	}

IL_0082:
	{
		return;
	}
}
// System.Void Ship::FixedUpdate()
extern "C"  void Ship_FixedUpdate_m2384912172 (Ship_t609595780 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Ship_FixedUpdate_m2384912172_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral1992742979, /*hidden argument*/NULL);
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_0030;
		}
	}
	{
		Rigidbody2D_t939494601 * L_1 = __this->get_rb2D_5();
		Vector2_t2156229523  L_2 = __this->get_thrustDirection_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_3 = Vector2_op_Multiply_m3294489634(NULL /*static, unused*/, (10.0f), L_2, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m1099013366(L_1, L_3, 0, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
