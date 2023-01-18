#ifndef GODOT_CPP__ICALLS_HPP
#define GODOT_CPP__ICALLS_HPP

#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include "object.hpp"


namespace gd {

static inline void ___godot_icall_void_Vector3_Vector3_Vector3(godot_method_bind *mb, const object *inst, const vector3&arg0, const vector3&arg1, const vector3&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_int_int_Object(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const object *arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) (arg2) ? arg2->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline bool ___godot_icall_bool_RID_int(godot_method_bind *mb, const object *inst, const rid&arg0, const int64_t arg1) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline rid ___godot_icall_RID_RID_Vector3(godot_method_bind *mb, const object *inst, const rid&arg0, const vector3&arg1) {
	rid ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_bool(godot_method_bind *mb, const object *inst, const bool arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_PoolVector3Array_PoolVector2Array_PoolColorArray_PoolVector2Array_PoolVector3Array_Array(godot_method_bind *mb, const object *inst, const pool_vector3_array&arg0, const pool_vector2_array&arg1, const pool_color_array&arg2, const pool_vector2_array&arg3, const pool_vector3_array&arg4, const array&arg5) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline dictionary ___godot_icall_Dictionary_String_String(godot_method_bind *mb, const object *inst, const string&arg0, const string&arg1) {
	dictionary ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline variant ___godot_icall_Variant_String_Variant(godot_method_bind *mb, const object *inst, const string&arg0, const variant&arg1) {
	variant ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_PoolRealArray(godot_method_bind *mb, const object *inst, const rid&arg0, const pool_real_array&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_String_Object_String(godot_method_bind *mb, const object *inst, const string&arg0, const object *arg1, const string&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline double ___godot_icall_float_Vector2_Vector2_Vector2_float(godot_method_bind *mb, const object *inst, const vector2&arg0, const vector2&arg1, const vector2&arg2, const double arg3) {
	double ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_int_int_Vector2_float(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const vector2&arg2, const double arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_RID_int_bool(godot_method_bind *mb, const object *inst, const rid&arg0, const int64_t arg1, const bool arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline array ___godot_icall_Array_RID_int(godot_method_bind *mb, const object *inst, const rid&arg0, const int64_t arg1) {
	array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___godot_icall_int_int_float_String(godot_method_bind *mb, const object *inst, const int64_t arg0, const double arg1, const string&arg2) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_int_String_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const string&arg1, const int64_t arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline vector2 ___godot_icall_Vector2_int_int_bool(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const bool arg2) {
	vector2 ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline dictionary ___godot_icall_Dictionary_Dictionary_Array(godot_method_bind *mb, const object *inst, const dictionary&arg0, const array&arg1) {
	dictionary ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_RID_RID_int_Rect2(godot_method_bind *mb, const object *inst, const rid&arg0, const rid&arg1, const rid&arg2, const int64_t arg3, const rect2&arg4) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_Vector2(godot_method_bind *mb, const object *inst, const vector2&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline bool ___godot_icall_bool_RID_int_int(godot_method_bind *mb, const object *inst, const rid&arg0, const int64_t arg1, const int64_t arg2) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline object *___godot_icall_Object_Object_String_String_String(godot_method_bind *mb, const object *inst, const object *arg0, const string&arg1, const string&arg2, const string&arg3) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline bool ___godot_icall_bool_Object_String_Variant_Object_String_float_int_int_float(godot_method_bind *mb, const object *inst, const object *arg0, const string&arg1, const variant&arg2, const object *arg3, const string&arg4, const double arg5, const int64_t arg6, const int64_t arg7, const double arg8) {
	bool ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
		(void *) (arg3) ? arg3->_owner : nullptr,
		(void *) &arg4,
		(void *) &arg5,
		(void *) &arg6,
		(void *) &arg7,
		(void *) &arg8,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline pool_vector2_array ___godot_icall_PoolVector2Array_Vector2_Vector2_Vector2_Vector2(godot_method_bind *mb, const object *inst, const vector2&arg0, const vector2&arg1, const vector2&arg2, const vector2&arg3) {
	pool_vector2_array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline array ___godot_icall_Array_int(godot_method_bind *mb, const object *inst, const int64_t arg0) {
	array ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline string ___godot_icall_String_bool(godot_method_bind *mb, const object *inst, const bool arg0) {
	string ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Object_int_int_int(godot_method_bind *mb, const object *inst, const object *arg0, const int64_t arg1, const int64_t arg2, const int64_t arg3) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_PoolVector2Array_int(godot_method_bind *mb, const object *inst, const pool_vector2_array&arg0, const int64_t arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline string ___godot_icall_String_Dictionary(godot_method_bind *mb, const object *inst, const dictionary&arg0) {
	string ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_String_Vector2(godot_method_bind *mb, const object *inst, const string&arg0, const vector2&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___godot_icall_int_String_int_PoolByteArray(godot_method_bind *mb, const object *inst, const string&arg0, const int64_t arg1, const pool_byte_array&arg2) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline variant ___godot_icall_Variant_String(godot_method_bind *mb, const object *inst, const string&arg0) {
	variant ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline object *___godot_icall_Object_Object(godot_method_bind *mb, const object *inst, const object *arg0) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline void ___godot_icall_void_int_bool(godot_method_bind *mb, const object *inst, const int64_t arg0, const bool arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___godot_icall_int_int_float_Object_float_float(godot_method_bind *mb, const object *inst, const int64_t arg0, const double arg1, const object *arg2, const double arg3, const double arg4) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) (arg2) ? arg2->_owner : nullptr,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline array ___godot_icall_Array_String_int(godot_method_bind *mb, const object *inst, const string&arg0, const int64_t arg1) {
	array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline double ___godot_icall_float_String_bool(godot_method_bind *mb, const object *inst, const string&arg0, const bool arg1) {
	double ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline vector3 ___godot_icall_Vector3_Vector3(godot_method_bind *mb, const object *inst, const vector3&arg0) {
	vector3 ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_int_String_String_Variant(godot_method_bind *mb, const object *inst, const int64_t arg0, const string&arg1, const string&arg2, const variant&arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_String_Array_bool(godot_method_bind *mb, const object *inst, const string&arg0, const array&arg1, const bool arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline variant ___godot_icall_Variant_Vector2_Object(godot_method_bind *mb, const object *inst, const vector2&arg0, const object *arg1) {
	variant ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___godot_icall_bool_PoolVector2Array(godot_method_bind *mb, const object *inst, const pool_vector2_array&arg0) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID(godot_method_bind *mb, const object *inst, const rid&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline variant ___godot_icall_Variant_String_String(godot_method_bind *mb, const object *inst, const string&arg0, const string&arg1) {
	variant ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_int_Vector2(godot_method_bind *mb, const object *inst, const int64_t arg0, const vector2&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline object *___godot_icall_Object_String_Object(godot_method_bind *mb, const object *inst, const string&arg0, const object *arg1) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline void ___godot_icall_void_PoolRealArray_PoolRealArray(godot_method_bind *mb, const object *inst, const pool_real_array&arg0, const pool_real_array&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_RID_int_RID(godot_method_bind *mb, const object *inst, const rid&arg0, const int64_t arg1, const rid&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline vector3 ___godot_icall_Vector3_Vector2_float(godot_method_bind *mb, const object *inst, const vector2&arg0, const double arg1) {
	vector3 ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_PoolVector2Array_PoolColorArray_float_bool(godot_method_bind *mb, const object *inst, const rid&arg0, const pool_vector2_array&arg1, const pool_color_array&arg2, const double arg3, const bool arg4) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_RID_int_int_int_int_int_int(godot_method_bind *mb, const object *inst, const rid&arg0, const int64_t arg1, const int64_t arg2, const int64_t arg3, const int64_t arg4, const int64_t arg5, const int64_t arg6) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
		(void *) &arg6,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_Vector2_float_Color(godot_method_bind *mb, const object *inst, const vector2&arg0, const double arg1, const color&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline dictionary ___godot_icall_Dictionary_String_Variant_Variant(godot_method_bind *mb, const object *inst, const string&arg0, const variant&arg1, const variant&arg2) {
	dictionary ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___godot_icall_int_bool_bool(godot_method_bind *mb, const object *inst, const bool arg0, const bool arg1) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Rect2_bool(godot_method_bind *mb, const object *inst, const rect2&arg0, const bool arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_String_int_String_int(godot_method_bind *mb, const object *inst, const string&arg0, const int64_t arg1, const string&arg2, const int64_t arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_Object_int(godot_method_bind *mb, const object *inst, const object *arg0, const int64_t arg1) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___godot_icall_int_Object_String_Variant_int(godot_method_bind *mb, const object *inst, const object *arg0, const string&arg1, const variant&arg2, const int64_t arg3) {
	int64_t ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_String_Object_Object_Variant(godot_method_bind *mb, const object *inst, const string&arg0, const object *arg1, const object *arg2, const variant&arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) (arg2) ? arg2->_owner : nullptr,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___godot_icall_int_Variant_bool(godot_method_bind *mb, const object *inst, const variant&arg0, const bool arg1) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline string ___godot_icall_String_RID(godot_method_bind *mb, const object *inst, const rid&arg0) {
	string ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_int_int_PoolByteArray(godot_method_bind *mb, const object *inst, const rid&arg0, const int64_t arg1, const int64_t arg2, const pool_byte_array&arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_int_int_float(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const double arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_bool_float(godot_method_bind *mb, const object *inst, const bool arg0, const double arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_String_PoolByteArray_bool(godot_method_bind *mb, const object *inst, const string&arg0, const pool_byte_array&arg1, const bool arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_RID_bool(godot_method_bind *mb, const object *inst, const rid&arg0, const bool arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline vector2 ___godot_icall_Vector2_int_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1) {
	vector2 ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___godot_icall_bool_int_int_int_int_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const int64_t arg2, const int64_t arg3, const int64_t arg4) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_bool_Color_Color_float(godot_method_bind *mb, const object *inst, const rid&arg0, const bool arg1, const color&arg2, const color&arg3, const double arg4) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_int_int_PoolByteArray(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const pool_byte_array&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_Transform(godot_method_bind *mb, const object *inst, const transform&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline bool ___godot_icall_bool_RID_Vector2(godot_method_bind *mb, const object *inst, const rid&arg0, const vector2&arg1) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Vector2_int(godot_method_bind *mb, const object *inst, const vector2&arg0, const int64_t arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_RID_int_Transform2D(godot_method_bind *mb, const object *inst, const rid&arg0, const int64_t arg1, const transform2d&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_int_Object_Transform2D_bool_Vector2(godot_method_bind *mb, const object *inst, const int64_t arg0, const object *arg1, const transform2d&arg2, const bool arg3, const vector2&arg4) {
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline rid ___godot_icall_RID(godot_method_bind *mb, const object *inst) {
	rid ret;
	const void *args[1] = {
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___godot_icall_bool_String_int_int_int(godot_method_bind *mb, const object *inst, const string&arg0, const int64_t arg1, const int64_t arg2, const int64_t arg3) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_int_int_Variant(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const variant&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline object *___godot_icall_Object(godot_method_bind *mb, const object *inst) {
	godot_object *ret;
	ret = nullptr;
	const void *args[1] = {
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline object *___godot_icall_Object_String_int_int(godot_method_bind *mb, const object *inst, const string&arg0, const int64_t arg1, const int64_t arg2) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline void ___godot_icall_void_Object_int_int_int_int(godot_method_bind *mb, const object *inst, const object *arg0, const int64_t arg1, const int64_t arg2, const int64_t arg3, const int64_t arg4) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_int_Transform(godot_method_bind *mb, const object *inst, const int64_t arg0, const transform&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline object *___godot_icall_Object_Object_String(godot_method_bind *mb, const object *inst, const object *arg0, const string&arg1) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline int64_t ___godot_icall_int_Vector3_bool(godot_method_bind *mb, const object *inst, const vector3&arg0, const bool arg1) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline pool_byte_array ___godot_icall_PoolByteArray_RID(godot_method_bind *mb, const object *inst, const rid&arg0) {
	pool_byte_array ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_RID(godot_method_bind *mb, const object *inst, const rid&arg0, const rid&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline bool ___godot_icall_bool_int_int_bool(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const bool arg2) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_Rect2_RID_bool_Color_bool_RID(godot_method_bind *mb, const object *inst, const rid&arg0, const rect2&arg1, const rid&arg2, const bool arg3, const color&arg4, const bool arg5, const rid&arg6) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
		(void *) &arg6,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_int_Transform2D(godot_method_bind *mb, const object *inst, const int64_t arg0, const transform2d&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline pool_vector2_array ___godot_icall_PoolVector2Array_int(godot_method_bind *mb, const object *inst, const int64_t arg0) {
	pool_vector2_array ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline pool_string_array ___godot_icall_PoolStringArray(godot_method_bind *mb, const object *inst) {
	pool_string_array ret;
	const void *args[1] = {
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline string ___godot_icall_String_Object(godot_method_bind *mb, const object *inst, const object *arg0) {
	string ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Object_Object_Object(godot_method_bind *mb, const object *inst, const object *arg0, const object *arg1, const object *arg2) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) (arg2) ? arg2->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline transform2d ___godot_icall_Transform2D_Object(godot_method_bind *mb, const object *inst, const object *arg0) {
	transform2d ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_int(godot_method_bind *mb, const object *inst, const int64_t arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_PoolRealArray(godot_method_bind *mb, const object *inst, const pool_real_array&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___godot_icall_int_Object_bool_String_Object(godot_method_bind *mb, const object *inst, const object *arg0, const bool arg1, const string&arg2, const object *arg3) {
	int64_t ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
		(void *) (arg3) ? arg3->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline color ___godot_icall_Color(godot_method_bind *mb, const object *inst) {
	color ret;
	const void *args[1] = {
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline object *___godot_icall_Object_Variant(godot_method_bind *mb, const object *inst, const variant&arg0) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline int64_t ___godot_icall_int_String_int_String_int(godot_method_bind *mb, const object *inst, const string&arg0, const int64_t arg1, const string&arg2, const int64_t arg3) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline string ___godot_icall_String_String_Object(godot_method_bind *mb, const object *inst, const string&arg0, const object *arg1) {
	string ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_String_int(godot_method_bind *mb, const object *inst, const string&arg0, const int64_t arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_PoolColorArray(godot_method_bind *mb, const object *inst, const pool_color_array&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_int_int_String(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const string&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___godot_icall_int_Object_Object_Object_Object(godot_method_bind *mb, const object *inst, const object *arg0, const object *arg1, const object *arg2, const object *arg3) {
	int64_t ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) (arg2) ? arg2->_owner : nullptr,
		(void *) (arg3) ? arg3->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_RID_Transform2D_Color_RID_RID(godot_method_bind *mb, const object *inst, const rid&arg0, const rid&arg1, const transform2d&arg2, const color&arg3, const rid&arg4, const rid&arg5) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_PoolStringArray(godot_method_bind *mb, const object *inst, const pool_string_array&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline rid ___godot_icall_RID_Vector3(godot_method_bind *mb, const object *inst, const vector3&arg0) {
	rid ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline pool_vector3_array ___godot_icall_PoolVector3Array_RID_Vector3_Vector3_bool_int(godot_method_bind *mb, const object *inst, const rid&arg0, const vector3&arg1, const vector3&arg2, const bool arg3, const int64_t arg4) {
	pool_vector3_array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_String_String_String_String_String(godot_method_bind *mb, const object *inst, const string&arg0, const string&arg1, const string&arg2, const string&arg3, const string&arg4) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_int_int_int_bool_bool_bool_Vector2(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const int64_t arg2, const bool arg3, const bool arg4, const bool arg5, const vector2&arg6) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
		(void *) &arg6,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_RID_float(godot_method_bind *mb, const object *inst, const rid&arg0, const double arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_String_float_float_bool(godot_method_bind *mb, const object *inst, const string&arg0, const double arg1, const double arg2, const bool arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_Vector2_bool(godot_method_bind *mb, const object *inst, const vector2&arg0, const bool arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline object *___godot_icall_Object_String_String_bool(godot_method_bind *mb, const object *inst, const string&arg0, const string&arg1, const bool arg2) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline void ___godot_icall_void_int_float_Variant_float(godot_method_bind *mb, const object *inst, const int64_t arg0, const double arg1, const variant&arg2, const double arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_String_PoolStringArray(godot_method_bind *mb, const object *inst, const string&arg0, const pool_string_array&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_String_String_Object_Object(godot_method_bind *mb, const object *inst, const string&arg0, const string&arg1, const object *arg2, const object *arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) (arg2) ? arg2->_owner : nullptr,
		(void *) (arg3) ? arg3->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_Object_Object_Rect2_Vector2(godot_method_bind *mb, const object *inst, const object *arg0, const object *arg1, const rect2&arg2, const vector2&arg3) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_bool_Vector2_Vector2(godot_method_bind *mb, const object *inst, const bool arg0, const vector2&arg1, const vector2&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_int_int_Rect2_Vector2_float(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const rect2&arg2, const vector2&arg3, const double arg4) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline pool_string_array ___godot_icall_PoolStringArray_String_bool(godot_method_bind *mb, const object *inst, const string&arg0, const bool arg1) {
	pool_string_array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_float_float_float_float(godot_method_bind *mb, const object *inst, const double arg0, const double arg1, const double arg2, const double arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline double ___godot_icall_float_Vector2(godot_method_bind *mb, const object *inst, const vector2&arg0) {
	double ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline double ___godot_icall_float_String_Object_float_bool_float_int_bool(godot_method_bind *mb, const object *inst, const string&arg0, const object *arg1, const double arg2, const bool arg3, const double arg4, const int64_t arg5, const bool arg6) {
	double ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
		(void *) &arg6,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_String_int_int(godot_method_bind *mb, const object *inst, const string&arg0, const int64_t arg1, const int64_t arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___godot_icall_int_String_float_String_String(godot_method_bind *mb, const object *inst, const string&arg0, const double arg1, const string&arg2, const string&arg3) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_PoolStringArray_bool_bool_bool(godot_method_bind *mb, const object *inst, const pool_string_array&arg0, const bool arg1, const bool arg2, const bool arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline vector2 ___godot_icall_Vector2_Vector2_Vector2_bool_int_float_bool(godot_method_bind *mb, const object *inst, const vector2&arg0, const vector2&arg1, const bool arg2, const int64_t arg3, const double arg4, const bool arg5) {
	vector2 ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_int_float(godot_method_bind *mb, const object *inst, const rid&arg0, const int64_t arg1, const double arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_RID_String_RID(godot_method_bind *mb, const object *inst, const rid&arg0, const string&arg1, const rid&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline bool ___godot_icall_bool_int_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline object *___godot_icall_Object_String(godot_method_bind *mb, const object *inst, const string&arg0) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline void ___godot_icall_void_Vector2_int_bool_bool_bool_Vector2(godot_method_bind *mb, const object *inst, const vector2&arg0, const int64_t arg1, const bool arg2, const bool arg3, const bool arg4, const vector2&arg5) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline pool_int_array ___godot_icall_PoolIntArray(godot_method_bind *mb, const object *inst) {
	pool_int_array ret;
	const void *args[1] = {
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___godot_icall_bool_Transform2D_Vector2_bool(godot_method_bind *mb, const object *inst, const transform2d&arg0, const vector2&arg1, const bool arg2) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline array ___godot_icall_Array_int_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1) {
	array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_String_NodePath_bool(godot_method_bind *mb, const object *inst, const string&arg0, const node_path&arg1, const bool arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline bool ___godot_icall_bool_Object_String_bool(godot_method_bind *mb, const object *inst, const object *arg0, const string&arg1, const bool arg2) {
	bool ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___godot_icall_int_RID_int(godot_method_bind *mb, const object *inst, const rid&arg0, const int64_t arg1) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline string ___godot_icall_String(godot_method_bind *mb, const object *inst) {
	string ret;
	const void *args[1] = {
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_RID_Transform2D(godot_method_bind *mb, const object *inst, const rid&arg0, const rid&arg1, const transform2d&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline transform2d ___godot_icall_Transform2D_RID_int(godot_method_bind *mb, const object *inst, const rid&arg0, const int64_t arg1) {
	transform2d ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline object *___godot_icall_Object_String_String(godot_method_bind *mb, const object *inst, const string&arg0, const string&arg1) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline void ___godot_icall_void_int_Variant_bool(godot_method_bind *mb, const object *inst, const int64_t arg0, const variant&arg1, const bool arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline vector3 ___godot_icall_Vector3_Vector3_Vector3_Vector3(godot_method_bind *mb, const object *inst, const vector3&arg0, const vector3&arg1, const vector3&arg2) {
	vector3 ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_int_int_bool_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const bool arg2, const int64_t arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline pool_byte_array ___godot_icall_PoolByteArray_int(godot_method_bind *mb, const object *inst, const int64_t arg0) {
	pool_byte_array ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline variant ___godot_icall_Variant_Vector2_Vector2_Vector2_Vector2(godot_method_bind *mb, const object *inst, const vector2&arg0, const vector2&arg1, const vector2&arg2, const vector2&arg3) {
	variant ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline double ___godot_icall_float_RID(godot_method_bind *mb, const object *inst, const rid&arg0) {
	double ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline pool_string_array ___godot_icall_PoolStringArray_String(godot_method_bind *mb, const object *inst, const string&arg0) {
	pool_string_array ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___godot_icall_bool_Vector2_PoolVector2Array(godot_method_bind *mb, const object *inst, const vector2&arg0, const pool_vector2_array&arg1) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___godot_icall_int_int(godot_method_bind *mb, const object *inst, const int64_t arg0) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_String_String_Color(godot_method_bind *mb, const object *inst, const string&arg0, const string&arg1, const color&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_PoolVector2Array_PoolColorArray_float_bool(godot_method_bind *mb, const object *inst, const pool_vector2_array&arg0, const pool_color_array&arg1, const double arg2, const bool arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline pool_vector3_array ___godot_icall_PoolVector3Array_Vector3_Vector3_bool(godot_method_bind *mb, const object *inst, const vector3&arg0, const vector3&arg1, const bool arg2) {
	pool_vector3_array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_Object_String_Variant(godot_method_bind *mb, const object *inst, const rid&arg0, const object *arg1, const string&arg2, const variant&arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_RID_PoolIntArray_PoolVector2Array_PoolColorArray_PoolVector2Array_PoolIntArray_PoolRealArray_RID_int_RID_bool_bool(godot_method_bind *mb, const object *inst, const rid&arg0, const pool_int_array&arg1, const pool_vector2_array&arg2, const pool_color_array&arg3, const pool_vector2_array&arg4, const pool_int_array&arg5, const pool_real_array&arg6, const rid&arg7, const int64_t arg8, const rid&arg9, const bool arg10, const bool arg11) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
		(void *) &arg6,
		(void *) &arg7,
		(void *) &arg8,
		(void *) &arg9,
		(void *) &arg10,
		(void *) &arg11,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_float_bool(godot_method_bind *mb, const object *inst, const double arg0, const bool arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_RID_int_Variant(godot_method_bind *mb, const object *inst, const rid&arg0, const int64_t arg1, const variant&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_PoolIntArray(godot_method_bind *mb, const object *inst, const pool_int_array&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_RID_bool_Rect2(godot_method_bind *mb, const object *inst, const rid&arg0, const bool arg1, const rect2&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline pool_vector3_array ___godot_icall_PoolVector3Array_Vector3_Vector3_Vector3_Vector3(godot_method_bind *mb, const object *inst, const vector3&arg0, const vector3&arg1, const vector3&arg2, const vector3&arg3) {
	pool_vector3_array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline color ___godot_icall_Color_String(godot_method_bind *mb, const object *inst, const string&arg0) {
	color ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_String_bool(godot_method_bind *mb, const object *inst, const string&arg0, const bool arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___godot_icall_int_String_int(godot_method_bind *mb, const object *inst, const string&arg0, const int64_t arg1) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_PoolVector2Array_bool(godot_method_bind *mb, const object *inst, const rid&arg0, const pool_vector2_array&arg1, const bool arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline bool ___godot_icall_bool_int_PoolByteArray_PoolByteArray_Object(godot_method_bind *mb, const object *inst, const int64_t arg0, const pool_byte_array&arg1, const pool_byte_array&arg2, const object *arg3) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) (arg3) ? arg3->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___godot_icall_int_int_int_String(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const string&arg2) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline vector3 ___godot_icall_Vector3_int_int_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const int64_t arg2) {
	vector3 ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline variant ___godot_icall_Variant_NodePath(godot_method_bind *mb, const object *inst, const node_path&arg0) {
	variant ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___godot_icall_bool_String_Object_String(godot_method_bind *mb, const object *inst, const string&arg0, const object *arg1, const string&arg2) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_RID_Transform2D_bool(godot_method_bind *mb, const object *inst, const rid&arg0, const rid&arg1, const transform2d&arg2, const bool arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_Variant_Object(godot_method_bind *mb, const object *inst, const variant&arg0, const object *arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline string ___godot_icall_String_Variant(godot_method_bind *mb, const object *inst, const variant&arg0) {
	string ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Object_float_int(godot_method_bind *mb, const object *inst, const object *arg0, const double arg1, const int64_t arg2) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline color ___godot_icall_Color_String_String(godot_method_bind *mb, const object *inst, const string&arg0, const string&arg1) {
	color ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline rid ___godot_icall_RID_RID_Transform_RID_Transform(godot_method_bind *mb, const object *inst, const rid&arg0, const transform&arg1, const rid&arg2, const transform&arg3) {
	rid ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline pool_int_array ___godot_icall_PoolIntArray_PoolVector2Array(godot_method_bind *mb, const object *inst, const pool_vector2_array&arg0) {
	pool_int_array ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline vector2 ___godot_icall_Vector2_RID_int(godot_method_bind *mb, const object *inst, const rid&arg0, const int64_t arg1) {
	vector2 ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline pool_string_array ___godot_icall_PoolStringArray_int_String(godot_method_bind *mb, const object *inst, const int64_t arg0, const string&arg1) {
	pool_string_array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Object_int_int_bool(godot_method_bind *mb, const object *inst, const object *arg0, const int64_t arg1, const int64_t arg2, const bool arg3) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline bool ___godot_icall_bool_Vector2(godot_method_bind *mb, const object *inst, const vector2&arg0) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline object *___godot_icall_Object_float(godot_method_bind *mb, const object *inst, const double arg0) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline void ___godot_icall_void_int_bool_bool_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const bool arg1, const bool arg2, const int64_t arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline vector2 ___godot_icall_Vector2_int(godot_method_bind *mb, const object *inst, const int64_t arg0) {
	vector2 ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___godot_icall_int_String_PoolStringArray_bool_PoolStringArray(godot_method_bind *mb, const object *inst, const string&arg0, const pool_string_array&arg1, const bool arg2, const pool_string_array&arg3) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline pool_real_array ___godot_icall_PoolRealArray(godot_method_bind *mb, const object *inst) {
	pool_real_array ret;
	const void *args[1] = {
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline rect2 ___godot_icall_Rect2(godot_method_bind *mb, const object *inst) {
	rect2 ret;
	const void *args[1] = {
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline string ___godot_icall_String_String_String_bool(godot_method_bind *mb, const object *inst, const string&arg0, const string&arg1, const bool arg2) {
	string ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline variant ___godot_icall_Variant_int_String_String(godot_method_bind *mb, const object *inst, const int64_t arg0, const string&arg1, const string&arg2) {
	variant ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_PoolByteArray_int(godot_method_bind *mb, const object *inst, const pool_byte_array&arg0, const int64_t arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline vector2 ___godot_icall_Vector2_String_int(godot_method_bind *mb, const object *inst, const string&arg0, const int64_t arg1) {
	vector2 ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_int_Vector3(godot_method_bind *mb, const object *inst, const int64_t arg0, const vector3&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_Object_Rect2_bool_Color_bool_Object(godot_method_bind *mb, const object *inst, const object *arg0, const rect2&arg1, const bool arg2, const color&arg3, const bool arg4, const object *arg5) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) (arg5) ? arg5->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_Vector3_Vector3(godot_method_bind *mb, const object *inst, const vector3&arg0, const vector3&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_int_Object_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const object *arg1, const int64_t arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_int_Object_Vector2(godot_method_bind *mb, const object *inst, const int64_t arg0, const object *arg1, const vector2&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_int_Vector2_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const vector2&arg1, const int64_t arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline pool_vector3_array ___godot_icall_PoolVector3Array_Vector3_Vector3_Vector3_float(godot_method_bind *mb, const object *inst, const vector3&arg0, const vector3&arg1, const vector3&arg2, const double arg3) {
	pool_vector3_array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline string ___godot_icall_String_String(godot_method_bind *mb, const object *inst, const string&arg0) {
	string ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Object_bool(godot_method_bind *mb, const object *inst, const object *arg0, const bool arg1) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline array ___godot_icall_Array_RID(godot_method_bind *mb, const object *inst, const rid&arg0) {
	array ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_Transform2D(godot_method_bind *mb, const object *inst, const rid&arg0, const transform2d&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_int_Object_int_bool_String(godot_method_bind *mb, const object *inst, const int64_t arg0, const object *arg1, const int64_t arg2, const bool arg3, const string&arg4) {
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline color ___godot_icall_Color_float(godot_method_bind *mb, const object *inst, const double arg0) {
	color ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_bool_int_float_float_float_int_float_float_float_bool_bool(godot_method_bind *mb, const object *inst, const rid&arg0, const bool arg1, const int64_t arg2, const double arg3, const double arg4, const double arg5, const int64_t arg6, const double arg7, const double arg8, const double arg9, const bool arg10, const bool arg11) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
		(void *) &arg6,
		(void *) &arg7,
		(void *) &arg8,
		(void *) &arg9,
		(void *) &arg10,
		(void *) &arg11,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline dictionary ___godot_icall_Dictionary_int_String_Variant(godot_method_bind *mb, const object *inst, const int64_t arg0, const string&arg1, const variant&arg2) {
	dictionary ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline pool_vector2_array ___godot_icall_PoolVector2Array_Vector2_Vector2(godot_method_bind *mb, const object *inst, const vector2&arg0, const vector2&arg1) {
	pool_vector2_array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_int_String(godot_method_bind *mb, const object *inst, const int64_t arg0, const string&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline bool ___godot_icall_bool_Object_int(godot_method_bind *mb, const object *inst, const object *arg0, const int64_t arg1) {
	bool ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___godot_icall_bool_String_int_String_int(godot_method_bind *mb, const object *inst, const string&arg0, const int64_t arg1, const string&arg2, const int64_t arg3) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Quat(godot_method_bind *mb, const object *inst, const quat&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline rid ___godot_icall_RID_Vector2_Vector2_RID_RID(godot_method_bind *mb, const object *inst, const vector2&arg0, const vector2&arg1, const rid&arg2, const rid&arg3) {
	rid ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline object *___godot_icall_Object_String_Dictionary(godot_method_bind *mb, const object *inst, const string&arg0, const dictionary&arg1) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline void ___godot_icall_void_Vector2_Vector2(godot_method_bind *mb, const object *inst, const vector2&arg0, const vector2&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_RID_Object(godot_method_bind *mb, const object *inst, const rid&arg0, const object *arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline variant ___godot_icall_Variant_RID_int(godot_method_bind *mb, const object *inst, const rid&arg0, const int64_t arg1) {
	variant ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline array ___godot_icall_Array_Object_int(godot_method_bind *mb, const object *inst, const object *arg0, const int64_t arg1) {
	array ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Object_Vector2_String_Color_int(godot_method_bind *mb, const object *inst, const object *arg0, const vector2&arg1, const string&arg2, const color&arg3, const int64_t arg4) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_RID_Rect2_Color(godot_method_bind *mb, const object *inst, const rid&arg0, const rect2&arg1, const color&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_Vector3_Vector3_Vector3_int(godot_method_bind *mb, const object *inst, const vector3&arg0, const vector3&arg1, const vector3&arg2, const int64_t arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline plane ___godot_icall_Plane(godot_method_bind *mb, const object *inst) {
	plane ret;
	const void *args[1] = {
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_String_String_Variant_Variant(godot_method_bind *mb, const object *inst, const string&arg0, const string&arg1, const variant&arg2, const variant&arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_String_Object_bool_Color(godot_method_bind *mb, const object *inst, const string&arg0, const object *arg1, const bool arg2, const color&arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline bool ___godot_icall_bool_Array_bool_bool(godot_method_bind *mb, const object *inst, const array&arg0, const bool arg1, const bool arg2) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline array ___godot_icall_Array_Vector2_int_Array_int_bool_bool(godot_method_bind *mb, const object *inst, const vector2&arg0, const int64_t arg1, const array&arg2, const int64_t arg3, const bool arg4, const bool arg5) {
	array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Object_String_Variant(godot_method_bind *mb, const object *inst, const object *arg0, const string&arg1, const variant&arg2) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline object *___godot_icall_Object_Object_String_Array(godot_method_bind *mb, const object *inst, const object *arg0, const string&arg1, const array&arg2) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline void ___godot_icall_void_int_int_float_bool(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const double arg2, const bool arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline node_path ___godot_icall_NodePath_int_bool(godot_method_bind *mb, const object *inst, const int64_t arg0, const bool arg1) {
	node_path ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline vector3 ___godot_icall_Vector3_RID_int(godot_method_bind *mb, const object *inst, const rid&arg0, const int64_t arg1) {
	vector3 ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_bool_float_float_float_bool_float(godot_method_bind *mb, const object *inst, const rid&arg0, const bool arg1, const double arg2, const double arg3, const double arg4, const bool arg5, const double arg6) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
		(void *) &arg6,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_RID_Basis(godot_method_bind *mb, const object *inst, const rid&arg0, const basis&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline vector2 ___godot_icall_Vector2_RID_Vector2(godot_method_bind *mb, const object *inst, const rid&arg0, const vector2&arg1) {
	vector2 ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_String_int_Object_Vector2(godot_method_bind *mb, const object *inst, const string&arg0, const int64_t arg1, const object *arg2, const vector2&arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) (arg2) ? arg2->_owner : nullptr,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_int_float_float_float_bool(godot_method_bind *mb, const object *inst, const int64_t arg0, const double arg1, const double arg2, const double arg3, const bool arg4) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_RID_String(godot_method_bind *mb, const object *inst, const rid&arg0, const string&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline double ___godot_icall_float_float_float_float_float(godot_method_bind *mb, const object *inst, const double arg0, const double arg1, const double arg2, const double arg3) {
	double ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline vector2 ___godot_icall_Vector2_float_bool(godot_method_bind *mb, const object *inst, const double arg0, const bool arg1) {
	vector2 ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline double ___godot_icall_float(godot_method_bind *mb, const object *inst) {
	double ret;
	const void *args[1] = {
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline quat ___godot_icall_Quat(godot_method_bind *mb, const object *inst) {
	quat ret;
	const void *args[1] = {
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Vector2_Vector2_Color_float_bool(godot_method_bind *mb, const object *inst, const vector2&arg0, const vector2&arg1, const color&arg2, const double arg3, const bool arg4) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline variant ___godot_icall_Variant_String_String_Variant(godot_method_bind *mb, const object *inst, const string&arg0, const string&arg1, const variant&arg2) {
	variant ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline string ___godot_icall_String_String_String_bool_int_int(godot_method_bind *mb, const object *inst, const string&arg0, const string&arg1, const bool arg2, const int64_t arg3, const int64_t arg4) {
	string ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_int_Vector3_float(godot_method_bind *mb, const object *inst, const int64_t arg0, const vector3&arg1, const double arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_Variant_Variant(godot_method_bind *mb, const object *inst, const variant&arg0, const variant&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_int_int_int_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const int64_t arg2, const int64_t arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline double ___godot_icall_float_float_float(godot_method_bind *mb, const object *inst, const double arg0, const double arg1) {
	double ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline aabb ___godot_icall_AABB_RID_int(godot_method_bind *mb, const object *inst, const rid&arg0, const int64_t arg1) {
	aabb ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline double ___godot_icall_float_RID_Vector2_int_int_Color_bool(godot_method_bind *mb, const object *inst, const rid&arg0, const vector2&arg1, const int64_t arg2, const int64_t arg3, const color&arg4, const bool arg5) {
	double ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_int_bool_String_String(godot_method_bind *mb, const object *inst, const int64_t arg0, const bool arg1, const string&arg2, const string&arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_int_float(godot_method_bind *mb, const object *inst, const int64_t arg0, const double arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_Dictionary(godot_method_bind *mb, const object *inst, const dictionary&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_int_Object_bool(godot_method_bind *mb, const object *inst, const int64_t arg0, const object *arg1, const bool arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline string ___godot_icall_String_PoolByteArray(godot_method_bind *mb, const object *inst, const pool_byte_array&arg0) {
	string ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline object *___godot_icall_Object_int_int_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const int64_t arg2) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline void ___godot_icall_void_Vector3_float(godot_method_bind *mb, const object *inst, const vector3&arg0, const double arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline bool ___godot_icall_bool_int(godot_method_bind *mb, const object *inst, const int64_t arg0) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline variant ___godot_icall_Variant_Array_Array_int_Array(godot_method_bind *mb, const object *inst, const array&arg0, const array&arg1, const int64_t arg2, const array&arg3) {
	variant ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_String_Dictionary(godot_method_bind *mb, const object *inst, const string&arg0, const dictionary&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline bool ___godot_icall_bool_String_int(godot_method_bind *mb, const object *inst, const string&arg0, const int64_t arg1) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_String_Object_String_Variant(godot_method_bind *mb, const object *inst, const string&arg0, const object *arg1, const string&arg2, const variant&arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline rect2 ___godot_icall_Rect2_int_int_bool(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const bool arg2) {
	rect2 ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___godot_icall_int_String_PoolStringArray_bool_int_String(godot_method_bind *mb, const object *inst, const string&arg0, const pool_string_array&arg1, const bool arg2, const int64_t arg3, const string&arg4) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline object *___godot_icall_Object_NodePath(godot_method_bind *mb, const object *inst, const node_path&arg0) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline int64_t ___godot_icall_int_int_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_String_String_PoolStringArray(godot_method_bind *mb, const object *inst, const string&arg0, const string&arg1, const pool_string_array&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_NodePath_PoolRealArray(godot_method_bind *mb, const object *inst, const node_path&arg0, const pool_real_array&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline transform2d ___godot_icall_Transform2D_int_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1) {
	transform2d ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_Object_int(godot_method_bind *mb, const object *inst, const rid&arg0, const object *arg1, const int64_t arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline pool_int_array ___godot_icall_PoolIntArray_int_float_float(godot_method_bind *mb, const object *inst, const int64_t arg0, const double arg1, const double arg2) {
	pool_int_array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline dictionary ___godot_icall_Dictionary_int_int_String_String(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const string&arg2, const string&arg3) {
	dictionary ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline object *___godot_icall_Object_String_bool_bool(godot_method_bind *mb, const object *inst, const string&arg0, const bool arg1, const bool arg2) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline double ___godot_icall_float_Vector3(godot_method_bind *mb, const object *inst, const vector3&arg0) {
	double ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___godot_icall_bool_Transform2D_Object_Transform2D(godot_method_bind *mb, const object *inst, const transform2d&arg0, const object *arg1, const transform2d&arg2) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___godot_icall_int_Object_String_Variant(godot_method_bind *mb, const object *inst, const object *arg0, const string&arg1, const variant&arg2) {
	int64_t ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline pool_string_array ___godot_icall_PoolStringArray_Object(godot_method_bind *mb, const object *inst, const object *arg0) {
	pool_string_array ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline array ___godot_icall_Array_Transform2D_Object_Transform2D(godot_method_bind *mb, const object *inst, const transform2d&arg0, const object *arg1, const transform2d&arg2) {
	array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_Variant(godot_method_bind *mb, const object *inst, const rid&arg0, const variant&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline variant ___godot_icall_Variant_Array(godot_method_bind *mb, const object *inst, const array&arg0) {
	variant ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline pool_byte_array ___godot_icall_PoolByteArray_PoolByteArray(godot_method_bind *mb, const object *inst, const pool_byte_array&arg0) {
	pool_byte_array ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___godot_icall_bool_RID_Transform_Vector3_bool_Object_bool_Array(godot_method_bind *mb, const object *inst, const rid&arg0, const transform&arg1, const vector3&arg2, const bool arg3, const object *arg4, const bool arg5, const array&arg6) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) (arg4) ? arg4->_owner : nullptr,
		(void *) &arg5,
		(void *) &arg6,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_String_int_Vector2(godot_method_bind *mb, const object *inst, const string&arg0, const int64_t arg1, const vector2&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline variant ___godot_icall_Variant_Array_Object_bool(godot_method_bind *mb, const object *inst, const array&arg0, const object *arg1, const bool arg2) {
	variant ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___godot_icall_bool_Transform_Vector3_bool(godot_method_bind *mb, const object *inst, const transform&arg0, const vector3&arg1, const bool arg2) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline array ___godot_icall_Array(godot_method_bind *mb, const object *inst) {
	array ret;
	const void *args[1] = {
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline array ___godot_icall_Array_String_int_int(godot_method_bind *mb, const object *inst, const string&arg0, const int64_t arg1, const int64_t arg2) {
	array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_bool_float_float_float(godot_method_bind *mb, const object *inst, const rid&arg0, const bool arg1, const double arg2, const double arg3, const double arg4) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_String_Object_Object_int(godot_method_bind *mb, const object *inst, const string&arg0, const object *arg1, const object *arg2, const int64_t arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) (arg2) ? arg2->_owner : nullptr,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_PoolVector2Array_PoolColorArray_PoolVector2Array_Object_float_Object(godot_method_bind *mb, const object *inst, const pool_vector2_array&arg0, const pool_color_array&arg1, const pool_vector2_array&arg2, const object *arg3, const double arg4, const object *arg5) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) (arg3) ? arg3->_owner : nullptr,
		(void *) &arg4,
		(void *) (arg5) ? arg5->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline double ___godot_icall_float_String(godot_method_bind *mb, const object *inst, const string&arg0) {
	double ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline array ___godot_icall_Array_PoolVector2Array_float_int_int(godot_method_bind *mb, const object *inst, const pool_vector2_array&arg0, const double arg1, const int64_t arg2, const int64_t arg3) {
	array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline node_path ___godot_icall_NodePath_int(godot_method_bind *mb, const object *inst, const int64_t arg0) {
	node_path ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline variant ___godot_icall_Variant_String_Array(godot_method_bind *mb, const object *inst, const string&arg0, const array&arg1) {
	variant ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Object_Color_bool_bool(godot_method_bind *mb, const object *inst, const object *arg0, const color&arg1, const bool arg2, const bool arg3) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline pool_vector2_array ___godot_icall_PoolVector2Array_RID_Vector2_Vector2_bool_int(godot_method_bind *mb, const object *inst, const rid&arg0, const vector2&arg1, const vector2&arg2, const bool arg3, const int64_t arg4) {
	pool_vector2_array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_Vector3(godot_method_bind *mb, const object *inst, const rid&arg0, const vector3&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_PoolVector3Array_Object_bool_Color(godot_method_bind *mb, const object *inst, const pool_vector3_array&arg0, const object *arg1, const bool arg2, const color&arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___godot_icall_int_bool(godot_method_bind *mb, const object *inst, const bool arg0) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___godot_icall_int_String_PoolStringArray_bool_int_PoolByteArray(godot_method_bind *mb, const object *inst, const string&arg0, const pool_string_array&arg1, const bool arg2, const int64_t arg3, const pool_byte_array&arg4) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline double ___godot_icall_float_String_String(godot_method_bind *mb, const object *inst, const string&arg0, const string&arg1) {
	double ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Transform2D(godot_method_bind *mb, const object *inst, const transform2d&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___godot_icall_int_int_String_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const string&arg1, const int64_t arg2) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline dictionary ___godot_icall_Dictionary_int_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1) {
	dictionary ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Object_Rect2_Rect2_Color_bool_Object_bool(godot_method_bind *mb, const object *inst, const object *arg0, const rect2&arg1, const rect2&arg2, const color&arg3, const bool arg4, const object *arg5, const bool arg6) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) (arg5) ? arg5->_owner : nullptr,
		(void *) &arg6,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___godot_icall_int_Vector2(godot_method_bind *mb, const object *inst, const vector2&arg0) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline pool_vector3_array ___godot_icall_PoolVector3Array_Vector3_Vector3_Array(godot_method_bind *mb, const object *inst, const vector3&arg0, const vector3&arg1, const array&arg2) {
	pool_vector3_array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_int_bool_int_Color_bool_int_Color_Object_Object(godot_method_bind *mb, const object *inst, const int64_t arg0, const bool arg1, const int64_t arg2, const color&arg3, const bool arg4, const int64_t arg5, const color&arg6, const object *arg7, const object *arg8) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
		(void *) &arg6,
		(void *) (arg7) ? arg7->_owner : nullptr,
		(void *) (arg8) ? arg8->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_int_Object_Vector2_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const object *arg1, const vector2&arg2, const int64_t arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_float_Vector2_float_float(godot_method_bind *mb, const object *inst, const double arg0, const vector2&arg1, const double arg2, const double arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_Vector2_Variant_Object(godot_method_bind *mb, const object *inst, const vector2&arg0, const variant&arg1, const object *arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) (arg2) ? arg2->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline bool ___godot_icall_bool_String_bool(godot_method_bind *mb, const object *inst, const string&arg0, const bool arg1) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline object *___godot_icall_Object_RID_int(godot_method_bind *mb, const object *inst, const rid&arg0, const int64_t arg1) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline void ___godot_icall_void_Object(godot_method_bind *mb, const object *inst, const object *arg0) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline pool_vector3_array ___godot_icall_PoolVector3Array_Vector3_Vector3_float_float(godot_method_bind *mb, const object *inst, const vector3&arg0, const vector3&arg1, const double arg2, const double arg3) {
	pool_vector3_array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline object *___godot_icall_Object_Rect2(godot_method_bind *mb, const object *inst, const rect2&arg0) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline void ___godot_icall_void_Object_float(godot_method_bind *mb, const object *inst, const object *arg0, const double arg1) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_RID_Color(godot_method_bind *mb, const object *inst, const rid&arg0, const color&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline array ___godot_icall_Array_String_bool(godot_method_bind *mb, const object *inst, const string&arg0, const bool arg1) {
	array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___godot_icall_int_int_bool(godot_method_bind *mb, const object *inst, const int64_t arg0, const bool arg1) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_String_Variant_bool(godot_method_bind *mb, const object *inst, const string&arg0, const variant&arg1, const bool arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_String_Object(godot_method_bind *mb, const object *inst, const string&arg0, const object *arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline bool ___godot_icall_bool_Object_NodePath_Variant_Variant_float_int_int_float(godot_method_bind *mb, const object *inst, const object *arg0, const node_path&arg1, const variant&arg2, const variant&arg3, const double arg4, const int64_t arg5, const int64_t arg6, const double arg7) {
	bool ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
		(void *) &arg6,
		(void *) &arg7,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___godot_icall_bool_Object_NodePath_Variant_Object_NodePath_float_int_int_float(godot_method_bind *mb, const object *inst, const object *arg0, const node_path&arg1, const variant&arg2, const object *arg3, const node_path&arg4, const double arg5, const int64_t arg6, const int64_t arg7, const double arg8) {
	bool ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
		(void *) (arg3) ? arg3->_owner : nullptr,
		(void *) &arg4,
		(void *) &arg5,
		(void *) &arg6,
		(void *) &arg7,
		(void *) &arg8,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_PoolStringArray_String(godot_method_bind *mb, const object *inst, const pool_string_array&arg0, const string&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___godot_icall_int_String_PoolStringArray_bool_Array_bool_bool(godot_method_bind *mb, const object *inst, const string&arg0, const pool_string_array&arg1, const bool arg2, const array&arg3, const bool arg4, const bool arg5) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline array ___godot_icall_Array_Vector3(godot_method_bind *mb, const object *inst, const vector3&arg0) {
	array ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___godot_icall_int_RID(godot_method_bind *mb, const object *inst, const rid&arg0) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Object_Object_int_bool(godot_method_bind *mb, const object *inst, const object *arg0, const object *arg1, const int64_t arg2, const bool arg3) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___godot_icall_int_int_Vector2(godot_method_bind *mb, const object *inst, const int64_t arg0, const vector2&arg1) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline double ___godot_icall_float_float(godot_method_bind *mb, const object *inst, const double arg0) {
	double ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___godot_icall_int_Transform_float(godot_method_bind *mb, const object *inst, const transform&arg0, const double arg1) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline vector2 ___godot_icall_Vector2_Vector2(godot_method_bind *mb, const object *inst, const vector2&arg0) {
	vector2 ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_int_PoolVector2Array(godot_method_bind *mb, const object *inst, const int64_t arg0, const pool_vector2_array&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_int_Object(godot_method_bind *mb, const object *inst, const int64_t arg0, const object *arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline variant ___godot_icall_Variant_int_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1) {
	variant ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_NodePath_Object_int_Rect2_int(godot_method_bind *mb, const object *inst, const node_path&arg0, const object *arg1, const int64_t arg2, const rect2&arg3, const int64_t arg4) {
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_int_String_String(godot_method_bind *mb, const object *inst, const int64_t arg0, const string&arg1, const string&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___godot_icall_int_Object_int(godot_method_bind *mb, const object *inst, const object *arg0, const int64_t arg1) {
	int64_t ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___godot_icall_bool_Transform2D_Vector2_Object_Transform2D_Vector2(godot_method_bind *mb, const object *inst, const transform2d&arg0, const vector2&arg1, const object *arg2, const transform2d&arg3, const vector2&arg4) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) (arg2) ? arg2->_owner : nullptr,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_PoolVector2Array_PoolColorArray_PoolVector2Array_RID_RID_bool(godot_method_bind *mb, const object *inst, const rid&arg0, const pool_vector2_array&arg1, const pool_color_array&arg2, const pool_vector2_array&arg3, const rid&arg4, const rid&arg5, const bool arg6) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
		(void *) &arg6,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline array ___godot_icall_Array_String(godot_method_bind *mb, const object *inst, const string&arg0) {
	array ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_int_Array_Array_int(godot_method_bind *mb, const object *inst, const rid&arg0, const int64_t arg1, const array&arg2, const array&arg3, const int64_t arg4) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___godot_icall_int_int_int_float(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const double arg2) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline array ___godot_icall_Array_Transform2D_Vector2_Object_Transform2D_Vector2(godot_method_bind *mb, const object *inst, const transform2d&arg0, const vector2&arg1, const object *arg2, const transform2d&arg3, const vector2&arg4) {
	array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) (arg2) ? arg2->_owner : nullptr,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_String_Object_bool(godot_method_bind *mb, const object *inst, const string&arg0, const object *arg1, const bool arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___godot_icall_int_int_PoolStringArray_bool(godot_method_bind *mb, const object *inst, const int64_t arg0, const pool_string_array&arg1, const bool arg2) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_int_int_Color(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const color&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline vector3 ___godot_icall_Vector3_Vector3_Vector3_bool_int_float_bool(godot_method_bind *mb, const object *inst, const vector3&arg0, const vector3&arg1, const bool arg2, const int64_t arg3, const double arg4, const bool arg5) {
	vector3 ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___godot_icall_int_int_float_bool(godot_method_bind *mb, const object *inst, const int64_t arg0, const double arg1, const bool arg2) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_String_String_int(godot_method_bind *mb, const object *inst, const string&arg0, const string&arg1, const int64_t arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline array ___godot_icall_Array_String_String(godot_method_bind *mb, const object *inst, const string&arg0, const string&arg1) {
	array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___godot_icall_bool_Object_bool(godot_method_bind *mb, const object *inst, const object *arg0, const bool arg1) {
	bool ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline vector3 ___godot_icall_Vector3_Vector3_Vector3_Vector3_bool_int_float_bool(godot_method_bind *mb, const object *inst, const vector3&arg0, const vector3&arg1, const vector3&arg2, const bool arg3, const int64_t arg4, const double arg5, const bool arg6) {
	vector3 ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
		(void *) &arg6,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline string ___godot_icall_String_Array_Array_int_int(godot_method_bind *mb, const object *inst, const array&arg0, const array&arg1, const int64_t arg2, const int64_t arg3) {
	string ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline double ___godot_icall_float_int_float(godot_method_bind *mb, const object *inst, const int64_t arg0, const double arg1) {
	double ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_Rect2(godot_method_bind *mb, const object *inst, const rid&arg0, const rect2&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline variant ___godot_icall_Variant_Variant_bool(godot_method_bind *mb, const object *inst, const variant&arg0, const bool arg1) {
	variant ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline pool_vector2_array ___godot_icall_PoolVector2Array(godot_method_bind *mb, const object *inst) {
	pool_vector2_array ret;
	const void *args[1] = {
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Vector2_Dictionary(godot_method_bind *mb, const object *inst, const vector2&arg0, const dictionary&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_String_Variant_String_bool(godot_method_bind *mb, const object *inst, const string&arg0, const variant&arg1, const string&arg2, const bool arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_String_String_bool_bool(godot_method_bind *mb, const object *inst, const string&arg0, const string&arg1, const bool arg2, const bool arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_String_float_float_bool_float(godot_method_bind *mb, const object *inst, const string&arg0, const double arg1, const double arg2, const bool arg3, const double arg4) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void(godot_method_bind *mb, const object *inst) {
	const void *args[1] = {
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline pool_vector3_array ___godot_icall_PoolVector3Array_int_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1) {
	pool_vector3_array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_PoolByteArray(godot_method_bind *mb, const object *inst, const rid&arg0, const pool_byte_array&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_Rect2(godot_method_bind *mb, const object *inst, const rect2&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_RID_Vector2_String_Color_int_Color(godot_method_bind *mb, const object *inst, const rid&arg0, const vector2&arg1, const string&arg2, const color&arg3, const int64_t arg4, const color&arg5) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_int_float_bool_bool(godot_method_bind *mb, const object *inst, const int64_t arg0, const double arg1, const bool arg2, const bool arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline pool_string_array ___godot_icall_PoolStringArray_String_String_bool(godot_method_bind *mb, const object *inst, const string&arg0, const string&arg1, const bool arg2) {
	pool_string_array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Object_String(godot_method_bind *mb, const object *inst, const object *arg0, const string&arg1) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_String_float(godot_method_bind *mb, const object *inst, const string&arg0, const double arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___godot_icall_int_PoolByteArray_int_int(godot_method_bind *mb, const object *inst, const pool_byte_array&arg0, const int64_t arg1, const int64_t arg2) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline dictionary ___godot_icall_Dictionary_Vector3_Vector3_Array_int_bool_bool(godot_method_bind *mb, const object *inst, const vector3&arg0, const vector3&arg1, const array&arg2, const int64_t arg3, const bool arg4, const bool arg5) {
	dictionary ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_String_Object_int(godot_method_bind *mb, const object *inst, const string&arg0, const object *arg1, const int64_t arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline variant ___godot_icall_Variant_Vector2(godot_method_bind *mb, const object *inst, const vector2&arg0) {
	variant ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline pool_byte_array ___godot_icall_PoolByteArray_Object_PoolByteArray(godot_method_bind *mb, const object *inst, const object *arg0, const pool_byte_array&arg1) {
	pool_byte_array ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___godot_icall_bool_Vector2_bool_float_Object(godot_method_bind *mb, const object *inst, const vector2&arg0, const bool arg1, const double arg2, const object *arg3) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) (arg3) ? arg3->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___godot_icall_int_Object_Object_Object(godot_method_bind *mb, const object *inst, const object *arg0, const object *arg1, const object *arg2) {
	int64_t ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) (arg2) ? arg2->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_int_int_int_int(godot_method_bind *mb, const object *inst, const rid&arg0, const int64_t arg1, const int64_t arg2, const int64_t arg3, const int64_t arg4) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_Object_Object_Vector3_Vector3_int(godot_method_bind *mb, const object *inst, const object *arg0, const object *arg1, const vector3&arg2, const vector3&arg3, const int64_t arg4) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline object *___godot_icall_Object_String_int_int_int(godot_method_bind *mb, const object *inst, const string&arg0, const int64_t arg1, const int64_t arg2, const int64_t arg3) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline int64_t ___godot_icall_int_int_String_PoolStringArray_PoolByteArray(godot_method_bind *mb, const object *inst, const int64_t arg0, const string&arg1, const pool_string_array&arg2, const pool_byte_array&arg3) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Variant(godot_method_bind *mb, const object *inst, const variant&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline transform2d ___godot_icall_Transform2D_int(godot_method_bind *mb, const object *inst, const int64_t arg0) {
	transform2d ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Vector2_float_Vector2(godot_method_bind *mb, const object *inst, const vector2&arg0, const double arg1, const vector2&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline rid ___godot_icall_RID_int_int_bool(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const bool arg2) {
	rid ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_Vector2_float_Color(godot_method_bind *mb, const object *inst, const rid&arg0, const vector2&arg1, const double arg2, const color&arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_PoolVector2Array(godot_method_bind *mb, const object *inst, const pool_vector2_array&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline vector3 ___godot_icall_Vector3_Vector2(godot_method_bind *mb, const object *inst, const vector2&arg0) {
	vector3 ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline array ___godot_icall_Array_PoolByteArray(godot_method_bind *mb, const object *inst, const pool_byte_array&arg0) {
	array ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_int_Transform_float_bool(godot_method_bind *mb, const object *inst, const int64_t arg0, const transform&arg1, const double arg2, const bool arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_Object_Rect2_Vector2(godot_method_bind *mb, const object *inst, const object *arg0, const rect2&arg1, const vector2&arg2) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_String_Variant(godot_method_bind *mb, const object *inst, const string&arg0, const variant&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline bool ___godot_icall_bool_bool(godot_method_bind *mb, const object *inst, const bool arg0) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_NodePath_bool(godot_method_bind *mb, const object *inst, const node_path&arg0, const bool arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_Vector3(godot_method_bind *mb, const object *inst, const vector3&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_String_String_bool(godot_method_bind *mb, const object *inst, const string&arg0, const string&arg1, const bool arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___godot_icall_int_String_String_int(godot_method_bind *mb, const object *inst, const string&arg0, const string&arg1, const int64_t arg2) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_int_RID_int_int_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const rid&arg1, const int64_t arg2, const int64_t arg3, const int64_t arg4) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline array ___godot_icall_Array_int_float(godot_method_bind *mb, const object *inst, const int64_t arg0, const double arg1) {
	array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_int_int_bool_int_PoolByteArray(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const bool arg2, const int64_t arg3, const pool_byte_array&arg4) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline object *___godot_icall_Object_int_int_Vector2(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const vector2&arg2) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline variant ___godot_icall_Variant_Object_int(godot_method_bind *mb, const object *inst, const object *arg0, const int64_t arg1) {
	variant ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___godot_icall_int_Vector2_bool(godot_method_bind *mb, const object *inst, const vector2&arg0, const bool arg1) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___godot_icall_int_String_PoolStringArray(godot_method_bind *mb, const object *inst, const string&arg0, const pool_string_array&arg1) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_int_Variant(godot_method_bind *mb, const object *inst, const int64_t arg0, const variant&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline bool ___godot_icall_bool_String_Dictionary(godot_method_bind *mb, const object *inst, const string&arg0, const dictionary&arg1) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline pool_byte_array ___godot_icall_PoolByteArray(godot_method_bind *mb, const object *inst) {
	pool_byte_array ret;
	const void *args[1] = {
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Basis(godot_method_bind *mb, const object *inst, const basis&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_RID_Vector2_Color_bool_Object(godot_method_bind *mb, const object *inst, const rid&arg0, const vector2&arg1, const color&arg2, const bool arg3, const object *arg4) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) (arg4) ? arg4->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline vector3 ___godot_icall_Vector3_RID(godot_method_bind *mb, const object *inst, const rid&arg0) {
	vector3 ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Vector2_float(godot_method_bind *mb, const object *inst, const vector2&arg0, const double arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline array ___godot_icall_Array_AABB_RID(godot_method_bind *mb, const object *inst, const aabb&arg0, const rid&arg1) {
	array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_String_int_bool(godot_method_bind *mb, const object *inst, const string&arg0, const int64_t arg1, const bool arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___godot_icall_int(godot_method_bind *mb, const object *inst) {
	int64_t ret;
	const void *args[1] = {
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___godot_icall_bool_Object_int_String_int_String_int(godot_method_bind *mb, const object *inst, const object *arg0, const int64_t arg1, const string&arg2, const int64_t arg3, const string&arg4, const int64_t arg5) {
	bool ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___godot_icall_int_String_int_int(godot_method_bind *mb, const object *inst, const string&arg0, const int64_t arg1, const int64_t arg2) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_String(godot_method_bind *mb, const object *inst, const string&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_String_Color_bool_bool_bool(godot_method_bind *mb, const object *inst, const string&arg0, const color&arg1, const bool arg2, const bool arg3, const bool arg4) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_RID_bool_float_float_float_int(godot_method_bind *mb, const object *inst, const rid&arg0, const bool arg1, const double arg2, const double arg3, const double arg4, const int64_t arg5) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_Object_int_Transform(godot_method_bind *mb, const object *inst, const object *arg0, const int64_t arg1, const transform&arg2) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline dictionary ___godot_icall_Dictionary_int(godot_method_bind *mb, const object *inst, const int64_t arg0) {
	dictionary ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline object *___godot_icall_Object_Object_String_Variant_Variant_float_Array(godot_method_bind *mb, const object *inst, const object *arg0, const string&arg1, const variant&arg2, const variant&arg3, const double arg4, const array&arg5) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline array ___godot_icall_Array_Rect2_float(godot_method_bind *mb, const object *inst, const rect2&arg0, const double arg1) {
	array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_int_Color(godot_method_bind *mb, const object *inst, const rid&arg0, const int64_t arg1, const color&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___godot_icall_int_String_Object_int(godot_method_bind *mb, const object *inst, const string&arg0, const object *arg1, const int64_t arg2) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_String_String(godot_method_bind *mb, const object *inst, const string&arg0, const string&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline bool ___godot_icall_bool_RID(godot_method_bind *mb, const object *inst, const rid&arg0) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_Vector2_Vector2(godot_method_bind *mb, const object *inst, const rid&arg0, const vector2&arg1, const vector2&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline aabb ___godot_icall_AABB_RID(godot_method_bind *mb, const object *inst, const rid&arg0) {
	aabb ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_String_int_String_int_float(godot_method_bind *mb, const object *inst, const string&arg0, const int64_t arg1, const string&arg2, const int64_t arg3, const double arg4) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_RID_RID_Transform_bool(godot_method_bind *mb, const object *inst, const rid&arg0, const rid&arg1, const transform&arg2, const bool arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_String_Object_Vector2(godot_method_bind *mb, const object *inst, const string&arg0, const object *arg1, const vector2&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline double ___godot_icall_float_Object_Vector2_String_String_Color(godot_method_bind *mb, const object *inst, const object *arg0, const vector2&arg1, const string&arg2, const string&arg3, const color&arg4) {
	double ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline vector3 ___godot_icall_Vector3_RID_Vector3(godot_method_bind *mb, const object *inst, const rid&arg0, const vector3&arg1) {
	vector3 ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline vector2 ___godot_icall_Vector2_Vector2_bool(godot_method_bind *mb, const object *inst, const vector2&arg0, const bool arg1) {
	vector2 ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline dictionary ___godot_icall_Dictionary_PoolStringArray(godot_method_bind *mb, const object *inst, const pool_string_array&arg0) {
	dictionary ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_int_float_float_bool(godot_method_bind *mb, const object *inst, const int64_t arg0, const double arg1, const double arg2, const bool arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline string ___godot_icall_String_Dictionary_bool(godot_method_bind *mb, const object *inst, const dictionary&arg0, const bool arg1) {
	string ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_PoolVector2Array_PoolColorArray_PoolVector2Array_Object_Object_bool(godot_method_bind *mb, const object *inst, const pool_vector2_array&arg0, const pool_color_array&arg1, const pool_vector2_array&arg2, const object *arg3, const object *arg4, const bool arg5) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) (arg3) ? arg3->_owner : nullptr,
		(void *) (arg4) ? arg4->_owner : nullptr,
		(void *) &arg5,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline object *___godot_icall_Object_int_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline void ___godot_icall_void_Object_String_int(godot_method_bind *mb, const object *inst, const object *arg0, const string&arg1, const int64_t arg2) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_Object_Vector2_Color_Object(godot_method_bind *mb, const object *inst, const object *arg0, const vector2&arg1, const color&arg2, const object *arg3) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
		(void *) (arg3) ? arg3->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline pool_int_array ___godot_icall_PoolIntArray_String_int_int_int(godot_method_bind *mb, const object *inst, const string&arg0, const int64_t arg1, const int64_t arg2, const int64_t arg3) {
	pool_int_array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___godot_icall_bool_Object_String_Variant_Variant_float_int_int_float(godot_method_bind *mb, const object *inst, const object *arg0, const string&arg1, const variant&arg2, const variant&arg3, const double arg4, const int64_t arg5, const int64_t arg6, const double arg7) {
	bool ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
		(void *) &arg6,
		(void *) &arg7,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_PoolVector2Array(godot_method_bind *mb, const object *inst, const rid&arg0, const pool_vector2_array&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline vector2 ___godot_icall_Vector2(godot_method_bind *mb, const object *inst) {
	vector2 ret;
	const void *args[1] = {
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_int_Color(godot_method_bind *mb, const object *inst, const int64_t arg0, const color&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline object *___godot_icall_Object_String_int_float_int_Object(godot_method_bind *mb, const object *inst, const string&arg0, const int64_t arg1, const double arg2, const int64_t arg3, const object *arg4) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) (arg4) ? arg4->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline void ___godot_icall_void_RID_int_int_int(godot_method_bind *mb, const object *inst, const rid&arg0, const int64_t arg1, const int64_t arg2, const int64_t arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline transform ___godot_icall_Transform_RID_int(godot_method_bind *mb, const object *inst, const rid&arg0, const int64_t arg1) {
	transform ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_int_bool_NodePath(godot_method_bind *mb, const object *inst, const int64_t arg0, const bool arg1, const node_path&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___godot_icall_int_String_bool(godot_method_bind *mb, const object *inst, const string&arg0, const bool arg1) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_String_int_String(godot_method_bind *mb, const object *inst, const string&arg0, const int64_t arg1, const string&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline bool ___godot_icall_bool_RID_Vector3(godot_method_bind *mb, const object *inst, const rid&arg0, const vector3&arg1) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_Rect2_bool_Color_bool_Object(godot_method_bind *mb, const object *inst, const rid&arg0, const rect2&arg1, const bool arg2, const color&arg3, const bool arg4, const object *arg5) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) (arg5) ? arg5->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_bool_int(godot_method_bind *mb, const object *inst, const bool arg0, const int64_t arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline variant ___godot_icall_Variant_int(godot_method_bind *mb, const object *inst, const int64_t arg0) {
	variant ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_int_int_Vector2(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const vector2&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline dictionary ___godot_icall_Dictionary_String_int_int(godot_method_bind *mb, const object *inst, const string&arg0, const int64_t arg1, const int64_t arg2) {
	dictionary ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline object *___godot_icall_Object_Vector2_bool_bool_bool(godot_method_bind *mb, const object *inst, const vector2&arg0, const bool arg1, const bool arg2, const bool arg3) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline transform ___godot_icall_Transform_int(godot_method_bind *mb, const object *inst, const int64_t arg0) {
	transform ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline vector2 ___godot_icall_Vector2_String_float(godot_method_bind *mb, const object *inst, const string&arg0, const double arg1) {
	vector2 ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_Rect2_RID_Rect2_Color_bool_RID_bool(godot_method_bind *mb, const object *inst, const rid&arg0, const rect2&arg1, const rid&arg2, const rect2&arg3, const color&arg4, const bool arg5, const rid&arg6, const bool arg7) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
		(void *) &arg6,
		(void *) &arg7,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___godot_icall_int_Vector3(godot_method_bind *mb, const object *inst, const vector3&arg0) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline object *___godot_icall_Object_bool_bool(godot_method_bind *mb, const object *inst, const bool arg0, const bool arg1) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline rid ___godot_icall_RID_Vector2_Vector2_Vector2_RID_RID(godot_method_bind *mb, const object *inst, const vector2&arg0, const vector2&arg1, const vector2&arg2, const rid&arg3, const rid&arg4) {
	rid ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_float(godot_method_bind *mb, const object *inst, const double arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_Object_Object_String_Variant(godot_method_bind *mb, const object *inst, const object *arg0, const object *arg1, const string&arg2, const variant&arg3) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_Object_int_Variant_bool(godot_method_bind *mb, const object *inst, const object *arg0, const int64_t arg1, const variant&arg2, const bool arg3) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_RID_AABB(godot_method_bind *mb, const object *inst, const rid&arg0, const aabb&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline vector2 ___godot_icall_Vector2_float_float_int(godot_method_bind *mb, const object *inst, const double arg0, const double arg1, const int64_t arg2) {
	vector2 ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_PoolVector2Array_PoolColorArray_PoolVector2Array_RID_float_RID(godot_method_bind *mb, const object *inst, const rid&arg0, const pool_vector2_array&arg1, const pool_color_array&arg2, const pool_vector2_array&arg3, const rid&arg4, const double arg5, const rid&arg6) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
		(void *) &arg6,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline pool_color_array ___godot_icall_PoolColorArray(godot_method_bind *mb, const object *inst) {
	pool_color_array ret;
	const void *args[1] = {
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Rect2_Color(godot_method_bind *mb, const object *inst, const rect2&arg0, const color&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline color ___godot_icall_Color_int_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1) {
	color ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_String_PoolStringArray_Object(godot_method_bind *mb, const object *inst, const string&arg0, const pool_string_array&arg1, const object *arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) (arg2) ? arg2->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline array ___godot_icall_Array_Vector3_Vector3_RID(godot_method_bind *mb, const object *inst, const vector3&arg0, const vector3&arg1, const rid&arg2) {
	array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___godot_icall_bool_Vector2_Variant_Object(godot_method_bind *mb, const object *inst, const vector2&arg0, const variant&arg1, const object *arg2) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) (arg2) ? arg2->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline pool_byte_array ___godot_icall_PoolByteArray_String(godot_method_bind *mb, const object *inst, const string&arg0) {
	pool_byte_array ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___godot_icall_bool_Object(godot_method_bind *mb, const object *inst, const object *arg0) {
	bool ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_PoolByteArray(godot_method_bind *mb, const object *inst, const pool_byte_array&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline bool ___godot_icall_bool_RID_Transform2D_Vector2_bool_float_Object_bool_Array(godot_method_bind *mb, const object *inst, const rid&arg0, const transform2d&arg1, const vector2&arg2, const bool arg3, const double arg4, const object *arg5, const bool arg6, const array&arg7) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) (arg5) ? arg5->_owner : nullptr,
		(void *) &arg6,
		(void *) &arg7,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___godot_icall_bool_Object_float_String_Variant_Variant_Variant_Variant_Variant_Variant_Variant_Variant(godot_method_bind *mb, const object *inst, const object *arg0, const double arg1, const string&arg2, const variant&arg3, const variant&arg4, const variant&arg5, const variant&arg6, const variant&arg7, const variant&arg8, const variant&arg9, const variant&arg10) {
	bool ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
		(void *) &arg6,
		(void *) &arg7,
		(void *) &arg8,
		(void *) &arg9,
		(void *) &arg10,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___godot_icall_int_String(godot_method_bind *mb, const object *inst, const string&arg0) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline vector3 ___godot_icall_Vector3_int(godot_method_bind *mb, const object *inst, const int64_t arg0) {
	vector3 ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___godot_icall_int_int_float_Vector3_Quat_Vector3(godot_method_bind *mb, const object *inst, const int64_t arg0, const double arg1, const vector3&arg2, const quat&arg3, const vector3&arg4) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline array ___godot_icall_Array_Object(godot_method_bind *mb, const object *inst, const object *arg0) {
	array ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_RID_RID_RID(godot_method_bind *mb, const object *inst, const rid&arg0, const rid&arg1, const rid&arg2, const rid&arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline pool_vector2_array ___godot_icall_PoolVector2Array_int_float(godot_method_bind *mb, const object *inst, const int64_t arg0, const double arg1) {
	pool_vector2_array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline vector2 ___godot_icall_Vector2_String_String_String_String_float(godot_method_bind *mb, const object *inst, const string&arg0, const string&arg1, const string&arg2, const string&arg3, const double arg4) {
	vector2 ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___godot_icall_bool_String_Object(godot_method_bind *mb, const object *inst, const string&arg0, const object *arg1) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline object *___godot_icall_Object_Vector2(godot_method_bind *mb, const object *inst, const vector2&arg0) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline void ___godot_icall_void_RID_String_Variant(godot_method_bind *mb, const object *inst, const rid&arg0, const string&arg1, const variant&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___godot_icall_int_String_String(godot_method_bind *mb, const object *inst, const string&arg0, const string&arg1) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_int_Rect2(godot_method_bind *mb, const object *inst, const int64_t arg0, const rect2&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline vector2 ___godot_icall_Vector2_Vector3(godot_method_bind *mb, const object *inst, const vector3&arg0) {
	vector2 ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline dictionary ___godot_icall_Dictionary_String_bool(godot_method_bind *mb, const object *inst, const string&arg0, const bool arg1) {
	dictionary ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_String_int_int_int_int(godot_method_bind *mb, const object *inst, const string&arg0, const int64_t arg1, const int64_t arg2, const int64_t arg3, const int64_t arg4) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_RID_Rect2_int(godot_method_bind *mb, const object *inst, const rid&arg0, const rect2&arg1, const int64_t arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline object *___godot_icall_Object_String_Vector2(godot_method_bind *mb, const object *inst, const string&arg0, const vector2&arg1) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline int64_t ___godot_icall_int_Object_String_int_float(godot_method_bind *mb, const object *inst, const object *arg0, const string&arg1, const int64_t arg2, const double arg3) {
	int64_t ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___godot_icall_int_int_float_float_Vector2_Vector2(godot_method_bind *mb, const object *inst, const int64_t arg0, const double arg1, const double arg2, const vector2&arg3, const vector2&arg4) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___godot_icall_int_int_String_PoolStringArray_String(godot_method_bind *mb, const object *inst, const int64_t arg0, const string&arg1, const pool_string_array&arg2, const string&arg3) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_Vector3_Vector3(godot_method_bind *mb, const object *inst, const rid&arg0, const vector3&arg1, const vector3&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___godot_icall_int_int_String(godot_method_bind *mb, const object *inst, const int64_t arg0, const string&arg1) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_int_NodePath(godot_method_bind *mb, const object *inst, const int64_t arg0, const node_path&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_RID_int_int_bool(godot_method_bind *mb, const object *inst, const rid&arg0, const int64_t arg1, const int64_t arg2, const bool arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline rid ___godot_icall_RID_Vector2_RID_RID(godot_method_bind *mb, const object *inst, const vector2&arg0, const rid&arg1, const rid&arg2) {
	rid ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_Rect2_Rect2_Color_bool_Object_bool(godot_method_bind *mb, const object *inst, const rid&arg0, const rect2&arg1, const rect2&arg2, const color&arg3, const bool arg4, const object *arg5, const bool arg6) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) (arg5) ? arg5->_owner : nullptr,
		(void *) &arg6,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline pool_int_array ___godot_icall_PoolIntArray_int_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1) {
	pool_int_array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline vector2 ___godot_icall_Vector2_String(godot_method_bind *mb, const object *inst, const string&arg0) {
	vector2 ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Color(godot_method_bind *mb, const object *inst, const color&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline object *___godot_icall_Object_int_Vector2(godot_method_bind *mb, const object *inst, const int64_t arg0, const vector2&arg1) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline void ___godot_icall_void_Object_Object(godot_method_bind *mb, const object *inst, const object *arg0, const object *arg1) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) (arg1) ? arg1->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline string ___godot_icall_String_int_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1) {
	string ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_bool_float_float_float_RID(godot_method_bind *mb, const object *inst, const rid&arg0, const bool arg1, const double arg2, const double arg3, const double arg4, const rid&arg5) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline bool ___godot_icall_bool_String_String_int(godot_method_bind *mb, const object *inst, const string&arg0, const string&arg1, const int64_t arg2) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Object_String_Array(godot_method_bind *mb, const object *inst, const object *arg0, const string&arg1, const array&arg2) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline dictionary ___godot_icall_Dictionary_String_String_String_int_int(godot_method_bind *mb, const object *inst, const string&arg0, const string&arg1, const string&arg2, const int64_t arg3, const int64_t arg4) {
	dictionary ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline node_path ___godot_icall_NodePath_Object(godot_method_bind *mb, const object *inst, const object *arg0) {
	node_path ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_String_Color(godot_method_bind *mb, const object *inst, const string&arg0, const color&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline object *___godot_icall_Object_Object_int(godot_method_bind *mb, const object *inst, const object *arg0, const int64_t arg1) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline vector2 ___godot_icall_Vector2_int_Object_Vector2(godot_method_bind *mb, const object *inst, const int64_t arg0, const object *arg1, const vector2&arg2) {
	vector2 ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_Vector2_Vector2_Color_float_bool(godot_method_bind *mb, const object *inst, const rid&arg0, const vector2&arg1, const vector2&arg2, const color&arg3, const double arg4, const bool arg5) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline array ___godot_icall_Array_Object_Vector3(godot_method_bind *mb, const object *inst, const object *arg0, const vector3&arg1) {
	array ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline variant ___godot_icall_Variant_String_bool(godot_method_bind *mb, const object *inst, const string&arg0, const bool arg1) {
	variant ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_int_Object_String(godot_method_bind *mb, const object *inst, const int64_t arg0, const object *arg1, const string&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline bool ___godot_icall_bool(godot_method_bind *mb, const object *inst) {
	bool ret;
	const void *args[1] = {
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_int_float_float_bool_float_float_float_float(godot_method_bind *mb, const object *inst, const rid&arg0, const int64_t arg1, const double arg2, const double arg3, const bool arg4, const double arg5, const double arg6, const double arg7, const double arg8) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
		(void *) &arg6,
		(void *) &arg7,
		(void *) &arg8,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline aabb ___godot_icall_AABB(godot_method_bind *mb, const object *inst) {
	aabb ret;
	const void *args[1] = {
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_int_bool_float(godot_method_bind *mb, const object *inst, const rid&arg0, const int64_t arg1, const bool arg2, const double arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline string ___godot_icall_String_bool_bool(godot_method_bind *mb, const object *inst, const bool arg0, const bool arg1) {
	string ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Object_int_bool(godot_method_bind *mb, const object *inst, const object *arg0, const int64_t arg1, const bool arg2) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___godot_icall_int_PoolByteArray(godot_method_bind *mb, const object *inst, const pool_byte_array&arg0) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___godot_icall_int_int_int_String_String_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const string&arg2, const string&arg3, const int64_t arg4) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline vector3 ___godot_icall_Vector3_RID_Vector3_Vector3_bool(godot_method_bind *mb, const object *inst, const rid&arg0, const vector3&arg1, const vector3&arg2, const bool arg3) {
	vector3 ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline string ___godot_icall_String_Variant_bool(godot_method_bind *mb, const object *inst, const variant&arg0, const bool arg1) {
	string ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline array ___godot_icall_Array_Vector2_int_int_Array_int_bool_bool(godot_method_bind *mb, const object *inst, const vector2&arg0, const int64_t arg1, const int64_t arg2, const array&arg3, const int64_t arg4, const bool arg5, const bool arg6) {
	array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
		(void *) &arg6,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___godot_icall_bool_Object_String(godot_method_bind *mb, const object *inst, const object *arg0, const string&arg1) {
	bool ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___godot_icall_bool_Object_NodePath_Object_NodePath_Variant_float_int_int_float(godot_method_bind *mb, const object *inst, const object *arg0, const node_path&arg1, const object *arg2, const node_path&arg3, const variant&arg4, const double arg5, const int64_t arg6, const int64_t arg7, const double arg8) {
	bool ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) (arg2) ? arg2->_owner : nullptr,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
		(void *) &arg6,
		(void *) &arg7,
		(void *) &arg8,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___godot_icall_int_String_Object_String_Array_int(godot_method_bind *mb, const object *inst, const string&arg0, const object *arg1, const string&arg2, const array&arg3, const int64_t arg4) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline vector3 ___godot_icall_Vector3_float_bool(godot_method_bind *mb, const object *inst, const double arg0, const bool arg1) {
	vector3 ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___godot_icall_int_int_int_int_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const int64_t arg2, const int64_t arg3) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_int_int_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const int64_t arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_PoolByteArray_String_String(godot_method_bind *mb, const object *inst, const pool_byte_array&arg0, const string&arg1, const string&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_String_String_Color_bool(godot_method_bind *mb, const object *inst, const string&arg0, const string&arg1, const color&arg2, const bool arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___godot_icall_int_int_float(godot_method_bind *mb, const object *inst, const int64_t arg0, const double arg1) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___godot_icall_int_Dictionary(godot_method_bind *mb, const object *inst, const dictionary&arg0) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline object *___godot_icall_Object_Vector3_bool_bool_bool(godot_method_bind *mb, const object *inst, const vector3&arg0, const bool arg1, const bool arg2, const bool arg3) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline bool ___godot_icall_bool_Object_String_Object_String_Variant_float_int_int_float(godot_method_bind *mb, const object *inst, const object *arg0, const string&arg1, const object *arg2, const string&arg3, const variant&arg4, const double arg5, const int64_t arg6, const int64_t arg7, const double arg8) {
	bool ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) (arg2) ? arg2->_owner : nullptr,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
		(void *) &arg6,
		(void *) &arg7,
		(void *) &arg8,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline vector2 ___godot_icall_Vector2_float(godot_method_bind *mb, const object *inst, const double arg0) {
	vector2 ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___godot_icall_int_String_int_int_int_int(godot_method_bind *mb, const object *inst, const string&arg0, const int64_t arg1, const int64_t arg2, const int64_t arg3, const int64_t arg4) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline array ___godot_icall_Array_PoolVector2Array_PoolVector2Array(godot_method_bind *mb, const object *inst, const pool_vector2_array&arg0, const pool_vector2_array&arg1) {
	array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline string ___godot_icall_String_Vector2(godot_method_bind *mb, const object *inst, const vector2&arg0) {
	string ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Object_Vector2_int(godot_method_bind *mb, const object *inst, const object *arg0, const vector2&arg1, const int64_t arg2) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline rid ___godot_icall_RID_RID_int(godot_method_bind *mb, const object *inst, const rid&arg0, const int64_t arg1) {
	rid ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline rect2 ___godot_icall_Rect2_int_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1) {
	rect2 ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline dictionary ___godot_icall_Dictionary_Vector2_Vector2_Array_int_bool_bool(godot_method_bind *mb, const object *inst, const vector2&arg0, const vector2&arg1, const array&arg2, const int64_t arg3, const bool arg4, const bool arg5) {
	dictionary ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline object *___godot_icall_Object_String_bool_String(godot_method_bind *mb, const object *inst, const string&arg0, const bool arg1, const string&arg2) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline void ___godot_icall_void_String_Object_Object_int_String_Variant(godot_method_bind *mb, const object *inst, const string&arg0, const object *arg1, const object *arg2, const int64_t arg3, const string&arg4, const variant&arg5) {
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) (arg2) ? arg2->_owner : nullptr,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___godot_icall_int_int_PoolByteArray(godot_method_bind *mb, const object *inst, const int64_t arg0, const pool_byte_array&arg1) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline rid ___godot_icall_RID_RID_RID(godot_method_bind *mb, const object *inst, const rid&arg0, const rid&arg1) {
	rid ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___godot_icall_int_String_int_bool_bool(godot_method_bind *mb, const object *inst, const string&arg0, const int64_t arg1, const bool arg2, const bool arg3) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_int_Color_bool(godot_method_bind *mb, const object *inst, const int64_t arg0, const color&arg1, const bool arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_PoolVector2Array_Color_float_bool(godot_method_bind *mb, const object *inst, const pool_vector2_array&arg0, const color&arg1, const double arg2, const bool arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_PoolVector3Array_Object_bool_bool(godot_method_bind *mb, const object *inst, const pool_vector3_array&arg0, const object *arg1, const bool arg2, const bool arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_NodePath(godot_method_bind *mb, const object *inst, const node_path&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___godot_icall_int_Vector2_float_float_int_int(godot_method_bind *mb, const object *inst, const vector2&arg0, const double arg1, const double arg2, const int64_t arg3, const int64_t arg4) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___godot_icall_bool_String_Variant(godot_method_bind *mb, const object *inst, const string&arg0, const variant&arg1) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline rid ___godot_icall_RID_int(godot_method_bind *mb, const object *inst, const int64_t arg0) {
	rid ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Object_Rect2(godot_method_bind *mb, const object *inst, const object *arg0, const rect2&arg1) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_int_Array(godot_method_bind *mb, const object *inst, const int64_t arg0, const array&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline string ___godot_icall_String_int_bool(godot_method_bind *mb, const object *inst, const int64_t arg0, const bool arg1) {
	string ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___godot_icall_bool_Vector3(godot_method_bind *mb, const object *inst, const vector3&arg0) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___godot_icall_bool_String_String_bool(godot_method_bind *mb, const object *inst, const string&arg0, const string&arg1, const bool arg2) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline object *___godot_icall_Object_int(godot_method_bind *mb, const object *inst, const int64_t arg0) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline node_path ___godot_icall_NodePath(godot_method_bind *mb, const object *inst) {
	node_path ret;
	const void *args[1] = {
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_bool_bool_int_int(godot_method_bind *mb, const object *inst, const bool arg0, const bool arg1, const int64_t arg2, const int64_t arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline pool_int_array ___godot_icall_PoolIntArray_RID(godot_method_bind *mb, const object *inst, const rid&arg0) {
	pool_int_array ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline vector2 ___godot_icall_Vector2_int_float(godot_method_bind *mb, const object *inst, const int64_t arg0, const double arg1) {
	vector2 ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline transform2d ___godot_icall_Transform2D_RID(godot_method_bind *mb, const object *inst, const rid&arg0) {
	transform2d ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline dictionary ___godot_icall_Dictionary_Variant_Variant(godot_method_bind *mb, const object *inst, const variant&arg0, const variant&arg1) {
	dictionary ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline object *___godot_icall_Object_String_int(godot_method_bind *mb, const object *inst, const string&arg0, const int64_t arg1) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline dictionary ___godot_icall_Dictionary_int_int_int_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const int64_t arg2, const int64_t arg3) {
	dictionary ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline dictionary ___godot_icall_Dictionary_bool(godot_method_bind *mb, const object *inst, const bool arg0) {
	dictionary ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline color ___godot_icall_Color_RID_int(godot_method_bind *mb, const object *inst, const rid&arg0, const int64_t arg1) {
	color ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___godot_icall_bool_String(godot_method_bind *mb, const object *inst, const string&arg0) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline pool_string_array ___godot_icall_PoolStringArray_int(godot_method_bind *mb, const object *inst, const int64_t arg0) {
	pool_string_array ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline variant ___godot_icall_Variant_Vector3_Vector3_Vector3_Vector3_Vector3(godot_method_bind *mb, const object *inst, const vector3&arg0, const vector3&arg1, const vector3&arg2, const vector3&arg3, const vector3&arg4) {
	variant ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline string ___godot_icall_String_Object_int(godot_method_bind *mb, const object *inst, const object *arg0, const int64_t arg1) {
	string ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline pool_vector2_array ___godot_icall_PoolVector2Array_Vector2_Vector2_bool(godot_method_bind *mb, const object *inst, const vector2&arg0, const vector2&arg1, const bool arg2) {
	pool_vector2_array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_String_String_String(godot_method_bind *mb, const object *inst, const string&arg0, const string&arg1, const string&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_Vector2_Variant(godot_method_bind *mb, const object *inst, const vector2&arg0, const variant&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_RID_int_Transform(godot_method_bind *mb, const object *inst, const rid&arg0, const int64_t arg1, const transform&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_String_int_Object(godot_method_bind *mb, const object *inst, const string&arg0, const int64_t arg1, const object *arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) (arg2) ? arg2->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline color ___godot_icall_Color_int(godot_method_bind *mb, const object *inst, const int64_t arg0) {
	color ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline object *___godot_icall_Object_Object_NodePath_Variant_float(godot_method_bind *mb, const object *inst, const object *arg0, const node_path&arg1, const variant&arg2, const double arg3) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline bool ___godot_icall_bool_String_String(godot_method_bind *mb, const object *inst, const string&arg0, const string&arg1) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline pool_byte_array ___godot_icall_PoolByteArray_int_PoolByteArray_Object(godot_method_bind *mb, const object *inst, const int64_t arg0, const pool_byte_array&arg1, const object *arg2) {
	pool_byte_array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) (arg2) ? arg2->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___godot_icall_int_int_int_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const int64_t arg2) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline variant ___godot_icall_Variant_RID_String(godot_method_bind *mb, const object *inst, const rid&arg0, const string&arg1) {
	variant ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_Object_String(godot_method_bind *mb, const object *inst, const rid&arg0, const object *arg1, const string&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_Object_String_PoolStringArray(godot_method_bind *mb, const object *inst, const object *arg0, const string&arg1, const pool_string_array&arg2) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_RID_int(godot_method_bind *mb, const object *inst, const rid&arg0, const int64_t arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline double ___godot_icall_float_int_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1) {
	double ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline vector3 ___godot_icall_Vector3_float(godot_method_bind *mb, const object *inst, const double arg0) {
	vector3 ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline variant ___godot_icall_Variant_bool(godot_method_bind *mb, const object *inst, const bool arg0) {
	variant ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_RID_Vector2(godot_method_bind *mb, const object *inst, const rid&arg0, const rid&arg1, const vector2&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_RID_bool_float_float_float_float_float_float_float_Color_int_int_float(godot_method_bind *mb, const object *inst, const rid&arg0, const bool arg1, const double arg2, const double arg3, const double arg4, const double arg5, const double arg6, const double arg7, const double arg8, const color&arg9, const int64_t arg10, const int64_t arg11, const double arg12) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
		(void *) &arg6,
		(void *) &arg7,
		(void *) &arg8,
		(void *) &arg9,
		(void *) &arg10,
		(void *) &arg11,
		(void *) &arg12,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline transform ___godot_icall_Transform_bool(godot_method_bind *mb, const object *inst, const bool arg0) {
	transform ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___godot_icall_int_Object(godot_method_bind *mb, const object *inst, const object *arg0) {
	int64_t ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline variant ___godot_icall_Variant_int_float(godot_method_bind *mb, const object *inst, const int64_t arg0, const double arg1) {
	variant ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___godot_icall_int_Object_int_int(godot_method_bind *mb, const object *inst, const object *arg0, const int64_t arg1, const int64_t arg2) {
	int64_t ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___godot_icall_int_NodePath(godot_method_bind *mb, const object *inst, const node_path&arg0) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline rid ___godot_icall_RID_RID_Vector2(godot_method_bind *mb, const object *inst, const rid&arg0, const vector2&arg1) {
	rid ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_Plane(godot_method_bind *mb, const object *inst, const rid&arg0, const plane&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline string ___godot_icall_String_Variant_String_bool(godot_method_bind *mb, const object *inst, const variant&arg0, const string&arg1, const bool arg2) {
	string ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_PoolStringArray_int(godot_method_bind *mb, const object *inst, const pool_string_array&arg0, const int64_t arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_RID_int_int(godot_method_bind *mb, const object *inst, const rid&arg0, const int64_t arg1, const int64_t arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_Object_int_Vector2(godot_method_bind *mb, const object *inst, const object *arg0, const int64_t arg1, const vector2&arg2) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline basis ___godot_icall_Basis(godot_method_bind *mb, const object *inst) {
	basis ret;
	const void *args[1] = {
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___godot_icall_int_String_Object(godot_method_bind *mb, const object *inst, const string&arg0, const object *arg1) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Vector2_Color(godot_method_bind *mb, const object *inst, const vector2&arg0, const color&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_Vector2_Vector2_Vector2_int(godot_method_bind *mb, const object *inst, const vector2&arg0, const vector2&arg1, const vector2&arg2, const int64_t arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline bool ___godot_icall_bool_float(godot_method_bind *mb, const object *inst, const double arg0) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline rect2 ___godot_icall_Rect2_Object_int(godot_method_bind *mb, const object *inst, const object *arg0, const int64_t arg1) {
	rect2 ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline object *___godot_icall_Object_float_bool(godot_method_bind *mb, const object *inst, const double arg0, const bool arg1) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline pool_int_array ___godot_icall_PoolIntArray_int(godot_method_bind *mb, const object *inst, const int64_t arg0) {
	pool_int_array ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline variant ___godot_icall_Variant_String_String_Array(godot_method_bind *mb, const object *inst, const string&arg0, const string&arg1, const array&arg2) {
	variant ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline double ___godot_icall_float_float_float_float(godot_method_bind *mb, const object *inst, const double arg0, const double arg1, const double arg2) {
	double ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_float_float_float(godot_method_bind *mb, const object *inst, const rid&arg0, const double arg1, const double arg2, const double arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_int_String_Variant(godot_method_bind *mb, const object *inst, const int64_t arg0, const string&arg1, const variant&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline string ___godot_icall_String_int(godot_method_bind *mb, const object *inst, const int64_t arg0) {
	string ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Object_Object_int(godot_method_bind *mb, const object *inst, const object *arg0, const object *arg1, const int64_t arg2) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline vector3 ___godot_icall_Vector3_int_float(godot_method_bind *mb, const object *inst, const int64_t arg0, const double arg1) {
	vector3 ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline object *___godot_icall_Object_bool_Object(godot_method_bind *mb, const object *inst, const bool arg0, const object *arg1) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline pool_vector2_array ___godot_icall_PoolVector2Array_PoolVector2Array(godot_method_bind *mb, const object *inst, const pool_vector2_array&arg0) {
	pool_vector2_array ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_String_String_Variant(godot_method_bind *mb, const object *inst, const string&arg0, const string&arg1, const variant&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline vector2 ___godot_icall_Vector2_Vector2_Vector2_Vector2_bool_int_float_bool(godot_method_bind *mb, const object *inst, const vector2&arg0, const vector2&arg1, const vector2&arg2, const bool arg3, const int64_t arg4, const double arg5, const bool arg6) {
	vector2 ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
		(void *) &arg6,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline pool_vector3_array ___godot_icall_PoolVector3Array_int_float(godot_method_bind *mb, const object *inst, const int64_t arg0, const double arg1) {
	pool_vector3_array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline vector2 ___godot_icall_Vector2_int_int_Object_Vector2(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const object *arg2, const vector2&arg3) {
	vector2 ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) (arg2) ? arg2->_owner : nullptr,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline string ___godot_icall_String_String_int(godot_method_bind *mb, const object *inst, const string&arg0, const int64_t arg1) {
	string ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline variant ___godot_icall_Variant_RID(godot_method_bind *mb, const object *inst, const rid&arg0) {
	variant ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline transform ___godot_icall_Transform_RID(godot_method_bind *mb, const object *inst, const rid&arg0) {
	transform ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_bool_int_float_float_float_bool(godot_method_bind *mb, const object *inst, const rid&arg0, const bool arg1, const int64_t arg2, const double arg3, const double arg4, const double arg5, const bool arg6) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
		(void *) &arg6,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_Object_Object_Object_Transform2D_Color(godot_method_bind *mb, const object *inst, const object *arg0, const object *arg1, const object *arg2, const transform2d&arg3, const color&arg4) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) (arg2) ? arg2->_owner : nullptr,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline array ___godot_icall_Array_Vector3_int_Array_int_bool_bool(godot_method_bind *mb, const object *inst, const vector3&arg0, const int64_t arg1, const array&arg2, const int64_t arg3, const bool arg4, const bool arg5) {
	array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_Object_int_int_int_int_int_int_int_int(godot_method_bind *mb, const object *inst, const rid&arg0, const object *arg1, const int64_t arg2, const int64_t arg3, const int64_t arg4, const int64_t arg5, const int64_t arg6, const int64_t arg7, const int64_t arg8, const int64_t arg9) {
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
		(void *) &arg6,
		(void *) &arg7,
		(void *) &arg8,
		(void *) &arg9,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_NodePath_Variant(godot_method_bind *mb, const object *inst, const node_path&arg0, const variant&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline dictionary ___godot_icall_Dictionary_Object(godot_method_bind *mb, const object *inst, const object *arg0) {
	dictionary ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___godot_icall_bool_String_int_int_int_int(godot_method_bind *mb, const object *inst, const string&arg0, const int64_t arg1, const int64_t arg2, const int64_t arg3, const int64_t arg4) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline array ___godot_icall_Array_Array_int(godot_method_bind *mb, const object *inst, const array&arg0, const int64_t arg1) {
	array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_int_PoolRealArray(godot_method_bind *mb, const object *inst, const int64_t arg0, const pool_real_array&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_AABB(godot_method_bind *mb, const object *inst, const aabb&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_float_Color(godot_method_bind *mb, const object *inst, const double arg0, const color&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline pool_byte_array ___godot_icall_PoolByteArray_RID_int(godot_method_bind *mb, const object *inst, const rid&arg0, const int64_t arg1) {
	pool_byte_array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_float_float_float_float(godot_method_bind *mb, const object *inst, const rid&arg0, const double arg1, const double arg2, const double arg3, const double arg4) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_PoolStringArray_bool_String_int(godot_method_bind *mb, const object *inst, const pool_string_array&arg0, const bool arg1, const string&arg2, const int64_t arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_int_int_int_int_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const int64_t arg2, const int64_t arg3, const int64_t arg4) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline vector3 ___godot_icall_Vector3_Vector3_Vector3_bool(godot_method_bind *mb, const object *inst, const vector3&arg0, const vector3&arg1, const bool arg2) {
	vector3 ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline transform2d ___godot_icall_Transform2D(godot_method_bind *mb, const object *inst) {
	transform2d ret;
	const void *args[1] = {
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_Color_float_float(godot_method_bind *mb, const object *inst, const rid&arg0, const color&arg1, const double arg2, const double arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline array ___godot_icall_Array_float_float_int_int(godot_method_bind *mb, const object *inst, const double arg0, const double arg1, const int64_t arg2, const int64_t arg3) {
	array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___godot_icall_bool_Object_Object(godot_method_bind *mb, const object *inst, const object *arg0, const object *arg1) {
	bool ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) (arg1) ? arg1->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_Vector2(godot_method_bind *mb, const object *inst, const rid&arg0, const vector2&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_PoolVector2Array_Color_PoolVector2Array_Object_Object_bool(godot_method_bind *mb, const object *inst, const pool_vector2_array&arg0, const color&arg1, const pool_vector2_array&arg2, const object *arg3, const object *arg4, const bool arg5) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) (arg3) ? arg3->_owner : nullptr,
		(void *) (arg4) ? arg4->_owner : nullptr,
		(void *) &arg5,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___godot_icall_int_String_String_Dictionary_Array_Array(godot_method_bind *mb, const object *inst, const string&arg0, const string&arg1, const dictionary&arg2, const array&arg3, const array&arg4) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline pool_real_array ___godot_icall_PoolRealArray_int(godot_method_bind *mb, const object *inst, const int64_t arg0) {
	pool_real_array ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___godot_icall_int_Object_String(godot_method_bind *mb, const object *inst, const object *arg0, const string&arg1) {
	int64_t ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline rect2 ___godot_icall_Rect2_int(godot_method_bind *mb, const object *inst, const int64_t arg0) {
	rect2 ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___godot_icall_bool_String_bool_int(godot_method_bind *mb, const object *inst, const string&arg0, const bool arg1, const int64_t arg2) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Object_int_Object_Vector2(godot_method_bind *mb, const object *inst, const object *arg0, const int64_t arg1, const object *arg2, const vector2&arg3) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) (arg2) ? arg2->_owner : nullptr,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline object *___godot_icall_Object_Transform2D_Vector2(godot_method_bind *mb, const object *inst, const transform2d&arg0, const vector2&arg1) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline void ___godot_icall_void_PoolVector3Array(godot_method_bind *mb, const object *inst, const pool_vector3_array&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline object *___godot_icall_Object_Object_Vector2(godot_method_bind *mb, const object *inst, const object *arg0, const vector2&arg1) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline void ___godot_icall_void_String_int_int_int(godot_method_bind *mb, const object *inst, const string&arg0, const int64_t arg1, const int64_t arg2, const int64_t arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_int_Array_Array_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const array&arg1, const array&arg2, const int64_t arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_Array(godot_method_bind *mb, const object *inst, const array&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___godot_icall_int_String_PoolByteArray(godot_method_bind *mb, const object *inst, const string&arg0, const pool_byte_array&arg1) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline vector2 ___godot_icall_Vector2_Vector2_Vector2_Vector2(godot_method_bind *mb, const object *inst, const vector2&arg0, const vector2&arg1, const vector2&arg2) {
	vector2 ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Object_Object_bool(godot_method_bind *mb, const object *inst, const object *arg0, const object *arg1, const bool arg2) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_PoolStringArray_Array(godot_method_bind *mb, const object *inst, const pool_string_array&arg0, const array&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___godot_icall_int_Variant(godot_method_bind *mb, const object *inst, const variant&arg0) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_int_bool_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const bool arg1, const int64_t arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_Object_String_int_int(godot_method_bind *mb, const object *inst, const object *arg0, const string&arg1, const int64_t arg2, const int64_t arg3) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_RID_float_Vector2_float_float(godot_method_bind *mb, const object *inst, const rid&arg0, const double arg1, const vector2&arg2, const double arg3, const double arg4) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_int_int_bool(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const bool arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_RID_RID_int(godot_method_bind *mb, const object *inst, const rid&arg0, const rid&arg1, const int64_t arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_String_Array(godot_method_bind *mb, const object *inst, const string&arg0, const array&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline pool_vector3_array ___godot_icall_PoolVector3Array_PoolVector3Array_Plane(godot_method_bind *mb, const object *inst, const pool_vector3_array&arg0, const plane&arg1) {
	pool_vector3_array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_int_PoolIntArray(godot_method_bind *mb, const object *inst, const int64_t arg0, const pool_int_array&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline dictionary ___godot_icall_Dictionary(godot_method_bind *mb, const object *inst) {
	dictionary ret;
	const void *args[1] = {
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___godot_icall_bool_Vector2_Vector2_Vector2_Vector2(godot_method_bind *mb, const object *inst, const vector2&arg0, const vector2&arg1, const vector2&arg2, const vector2&arg3) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Vector2_float_float_float_int_Color_float_bool(godot_method_bind *mb, const object *inst, const vector2&arg0, const double arg1, const double arg2, const double arg3, const int64_t arg4, const color&arg5, const double arg6, const bool arg7) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
		(void *) &arg6,
		(void *) &arg7,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_Object_Color(godot_method_bind *mb, const object *inst, const object *arg0, const color&arg1) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline rid ___godot_icall_RID_RID_String(godot_method_bind *mb, const object *inst, const rid&arg0, const string&arg1) {
	rid ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline plane ___godot_icall_Plane_int(godot_method_bind *mb, const object *inst, const int64_t arg0) {
	plane ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_RID_int_int(godot_method_bind *mb, const object *inst, const rid&arg0, const rid&arg1, const int64_t arg2, const int64_t arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_Object_int_String(godot_method_bind *mb, const object *inst, const object *arg0, const int64_t arg1, const string&arg2) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_String_String_float(godot_method_bind *mb, const object *inst, const string&arg0, const string&arg1, const double arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline bool ___godot_icall_bool_PoolByteArray_PoolByteArray(godot_method_bind *mb, const object *inst, const pool_byte_array&arg0, const pool_byte_array&arg1) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_int_Vector2_float(godot_method_bind *mb, const object *inst, const int64_t arg0, const vector2&arg1, const double arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline array ___godot_icall_Array_float_float_int_int_int(godot_method_bind *mb, const object *inst, const double arg0, const double arg1, const int64_t arg2, const int64_t arg3, const int64_t arg4) {
	array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___godot_icall_int_int_int_int_int_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const int64_t arg2, const int64_t arg3, const int64_t arg4) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_Transform(godot_method_bind *mb, const object *inst, const rid&arg0, const transform&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline bool ___godot_icall_bool_NodePath(godot_method_bind *mb, const object *inst, const node_path&arg0) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline double ___godot_icall_float_RID_int(godot_method_bind *mb, const object *inst, const rid&arg0, const int64_t arg1) {
	double ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline object *___godot_icall_Object_bool(godot_method_bind *mb, const object *inst, const bool arg0) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline void ___godot_icall_void_String_String_Object(godot_method_bind *mb, const object *inst, const string&arg0, const string&arg1, const object *arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) (arg2) ? arg2->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_RID_Rect2_Rect2_RID_Vector2_Vector2_int_int_bool_Color_RID(godot_method_bind *mb, const object *inst, const rid&arg0, const rect2&arg1, const rect2&arg2, const rid&arg3, const vector2&arg4, const vector2&arg5, const int64_t arg6, const int64_t arg7, const bool arg8, const color&arg9, const rid&arg10) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
		(void *) &arg6,
		(void *) &arg7,
		(void *) &arg8,
		(void *) &arg9,
		(void *) &arg10,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline rid ___godot_icall_RID_Vector2(godot_method_bind *mb, const object *inst, const vector2&arg0) {
	rid ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Plane(godot_method_bind *mb, const object *inst, const plane&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline array ___godot_icall_Array_NodePath(godot_method_bind *mb, const object *inst, const node_path&arg0) {
	array ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_int_int_float(godot_method_bind *mb, const object *inst, const rid&arg0, const int64_t arg1, const int64_t arg2, const double arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline bool ___godot_icall_bool_Vector2_Rect2(godot_method_bind *mb, const object *inst, const vector2&arg0, const rect2&arg1) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Object_float_Color(godot_method_bind *mb, const object *inst, const object *arg0, const double arg1, const color&arg2) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline bool ___godot_icall_bool_String_bool_bool(godot_method_bind *mb, const object *inst, const string&arg0, const bool arg1, const bool arg2) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___godot_icall_int_Vector2_Object(godot_method_bind *mb, const object *inst, const vector2&arg0, const object *arg1) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Transform2D_Vector2(godot_method_bind *mb, const object *inst, const transform2d&arg0, const vector2&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_int_String_String_String(godot_method_bind *mb, const object *inst, const int64_t arg0, const string&arg1, const string&arg2, const string&arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline double ___godot_icall_float_int(godot_method_bind *mb, const object *inst, const int64_t arg0) {
	double ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___godot_icall_bool_Vector2_Vector2_float(godot_method_bind *mb, const object *inst, const vector2&arg0, const vector2&arg1, const double arg2) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_RID_PoolIntArray(godot_method_bind *mb, const object *inst, const rid&arg0, const pool_int_array&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_int_int_PoolStringArray_PoolByteArray(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const pool_string_array&arg2, const pool_byte_array&arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline double ___godot_icall_float_RID_int_int(godot_method_bind *mb, const object *inst, const rid&arg0, const int64_t arg1, const int64_t arg2) {
	double ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline pool_vector2_array ___godot_icall_PoolVector2Array_int_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1) {
	pool_vector2_array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline variant ___godot_icall_Variant(godot_method_bind *mb, const object *inst) {
	variant ret;
	const void *args[1] = {
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline dictionary ___godot_icall_Dictionary_PoolVector2Array(godot_method_bind *mb, const object *inst, const pool_vector2_array&arg0) {
	dictionary ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline transform ___godot_icall_Transform(godot_method_bind *mb, const object *inst) {
	transform ret;
	const void *args[1] = {
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline rid ___godot_icall_RID_int_bool(godot_method_bind *mb, const object *inst, const int64_t arg0, const bool arg1) {
	rid ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Rect2_Color_bool_float_bool(godot_method_bind *mb, const object *inst, const rect2&arg0, const color&arg1, const bool arg2, const double arg3, const bool arg4) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline dictionary ___godot_icall_Dictionary_String_Variant(godot_method_bind *mb, const object *inst, const string&arg0, const variant&arg1) {
	dictionary ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_int_int(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_String_bool_Object(godot_method_bind *mb, const object *inst, const string&arg0, const bool arg1, const object *arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) (arg2) ? arg2->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline array ___godot_icall_Array_Array_RID(godot_method_bind *mb, const object *inst, const array&arg0, const rid&arg1) {
	array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___godot_icall_bool_int_String_String(godot_method_bind *mb, const object *inst, const int64_t arg0, const string&arg1, const string&arg2) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline variant ___godot_icall_Variant_Object_String(godot_method_bind *mb, const object *inst, const object *arg0, const string&arg1) {
	variant ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_String_int_float_int_Object(godot_method_bind *mb, const object *inst, const string&arg0, const int64_t arg1, const double arg2, const int64_t arg3, const object *arg4) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) (arg4) ? arg4->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_Object_String_bool(godot_method_bind *mb, const object *inst, const object *arg0, const string&arg1, const bool arg2) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline double ___godot_icall_float_int_float_bool_float_int_bool(godot_method_bind *mb, const object *inst, const int64_t arg0, const double arg1, const bool arg2, const double arg3, const int64_t arg4, const bool arg5) {
	double ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline rid ___godot_icall_RID_RID_Vector3_RID_Vector3(godot_method_bind *mb, const object *inst, const rid&arg0, const vector3&arg1, const rid&arg2, const vector3&arg3) {
	rid ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline rid ___godot_icall_RID_RID(godot_method_bind *mb, const object *inst, const rid&arg0) {
	rid ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___godot_icall_bool_Vector2_Variant(godot_method_bind *mb, const object *inst, const vector2&arg0, const variant&arg1) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_int_float_float_float(godot_method_bind *mb, const object *inst, const int64_t arg0, const double arg1, const double arg2, const double arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_int_Plane(godot_method_bind *mb, const object *inst, const int64_t arg0, const plane&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_Object_bool_Object_Object(godot_method_bind *mb, const object *inst, const object *arg0, const bool arg1, const object *arg2, const object *arg3) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) (arg2) ? arg2->_owner : nullptr,
		(void *) (arg3) ? arg3->_owner : nullptr,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___godot_icall_void_PoolVector2Array_PoolIntArray(godot_method_bind *mb, const object *inst, const pool_vector2_array&arg0, const pool_int_array&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline object *___godot_icall_Object_RID(godot_method_bind *mb, const object *inst, const rid&arg0) {
	godot_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, ret);
	}

	return (object *) ret;
}

static inline variant ___godot_icall_Variant_Variant_Variant_float_float_int_int(godot_method_bind *mb, const object *inst, const variant&arg0, const variant&arg1, const double arg2, const double arg3, const int64_t arg4, const int64_t arg5) {
	variant ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline pool_byte_array ___godot_icall_PoolByteArray_int_PoolByteArray_PoolByteArray(godot_method_bind *mb, const object *inst, const int64_t arg0, const pool_byte_array&arg1, const pool_byte_array&arg2) {
	pool_byte_array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline vector3 ___godot_icall_Vector3(godot_method_bind *mb, const object *inst) {
	vector3 ret;
	const void *args[1] = {
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline color ___godot_icall_Color_Vector2(godot_method_bind *mb, const object *inst, const vector2&arg0) {
	color ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___godot_icall_int_String_int_String(godot_method_bind *mb, const object *inst, const string&arg0, const int64_t arg1, const string&arg2) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_int_int_Transform2D(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const transform2d&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___godot_icall_int_int_PoolByteArray_PoolByteArray(godot_method_bind *mb, const object *inst, const int64_t arg0, const pool_byte_array&arg1, const pool_byte_array&arg2) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_bool_bool(godot_method_bind *mb, const object *inst, const bool arg0, const bool arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline rid ___godot_icall_RID_Object_int(godot_method_bind *mb, const object *inst, const object *arg0, const int64_t arg1) {
	rid ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_float_float_float(godot_method_bind *mb, const object *inst, const double arg0, const double arg1, const double arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline array ___godot_icall_Array_PoolVector2Array_float_int(godot_method_bind *mb, const object *inst, const pool_vector2_array&arg0, const double arg1, const int64_t arg2) {
	array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline variant ___godot_icall_Variant_Variant(godot_method_bind *mb, const object *inst, const variant&arg0) {
	variant ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___godot_icall_void_Variant_bool(godot_method_bind *mb, const object *inst, const variant&arg0, const bool arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline dictionary ___godot_icall_Dictionary_String(godot_method_bind *mb, const object *inst, const string&arg0) {
	dictionary ret;
	const void *args[] = {
		(void *) &arg0,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline pool_vector3_array ___godot_icall_PoolVector3Array(godot_method_bind *mb, const object *inst) {
	pool_vector3_array ret;
	const void *args[1] = {
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline rid ___godot_icall_RID_int_int_float(godot_method_bind *mb, const object *inst, const int64_t arg0, const int64_t arg1, const double arg2) {
	rid ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	gd::api->godot_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

}

#endif