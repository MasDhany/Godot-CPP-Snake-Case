#include "class_db.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "object.hpp"


namespace gd {


class_db *class_db::_singleton = NULL;


class_db::class_db() {
	_owner = gd::api->godot_global_get_singleton((char *) "ClassDB");
}


class_db::___method_bindings class_db::___mb = {};

void *class_db::_detail_class_tag = nullptr;

void class_db::___init_method_bindings() {
	___mb.mb_can_instance = gd::api->godot_method_bind_get_method("_ClassDB", "can_instance");
	___mb.mb_class_exists = gd::api->godot_method_bind_get_method("_ClassDB", "class_exists");
	___mb.mb_class_get_category = gd::api->godot_method_bind_get_method("_ClassDB", "class_get_category");
	___mb.mb_class_get_enum_constants = gd::api->godot_method_bind_get_method("_ClassDB", "class_get_enum_constants");
	___mb.mb_class_get_enum_list = gd::api->godot_method_bind_get_method("_ClassDB", "class_get_enum_list");
	___mb.mb_class_get_integer_constant = gd::api->godot_method_bind_get_method("_ClassDB", "class_get_integer_constant");
	___mb.mb_class_get_integer_constant_enum = gd::api->godot_method_bind_get_method("_ClassDB", "class_get_integer_constant_enum");
	___mb.mb_class_get_integer_constant_list = gd::api->godot_method_bind_get_method("_ClassDB", "class_get_integer_constant_list");
	___mb.mb_class_get_method_list = gd::api->godot_method_bind_get_method("_ClassDB", "class_get_method_list");
	___mb.mb_class_get_property = gd::api->godot_method_bind_get_method("_ClassDB", "class_get_property");
	___mb.mb_class_get_property_list = gd::api->godot_method_bind_get_method("_ClassDB", "class_get_property_list");
	___mb.mb_class_get_signal = gd::api->godot_method_bind_get_method("_ClassDB", "class_get_signal");
	___mb.mb_class_get_signal_list = gd::api->godot_method_bind_get_method("_ClassDB", "class_get_signal_list");
	___mb.mb_class_has_enum = gd::api->godot_method_bind_get_method("_ClassDB", "class_has_enum");
	___mb.mb_class_has_integer_constant = gd::api->godot_method_bind_get_method("_ClassDB", "class_has_integer_constant");
	___mb.mb_class_has_method = gd::api->godot_method_bind_get_method("_ClassDB", "class_has_method");
	___mb.mb_class_has_signal = gd::api->godot_method_bind_get_method("_ClassDB", "class_has_signal");
	___mb.mb_class_set_property = gd::api->godot_method_bind_get_method("_ClassDB", "class_set_property");
	___mb.mb_get_class_list = gd::api->godot_method_bind_get_method("_ClassDB", "get_class_list");
	___mb.mb_get_inheriters_from_class = gd::api->godot_method_bind_get_method("_ClassDB", "get_inheriters_from_class");
	___mb.mb_get_parent_class = gd::api->godot_method_bind_get_method("_ClassDB", "get_parent_class");
	___mb.mb_instance = gd::api->godot_method_bind_get_method("_ClassDB", "instance");
	___mb.mb_is_class_enabled = gd::api->godot_method_bind_get_method("_ClassDB", "is_class_enabled");
	___mb.mb_is_parent_class = gd::api->godot_method_bind_get_method("_ClassDB", "is_parent_class");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "_ClassDB");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

bool class_db::can_instance(const string _class) const {
	return ___godot_icall_bool_String(___mb.mb_can_instance, (const object *) this, _class);
}

bool class_db::class_exists(const string _class) const {
	return ___godot_icall_bool_String(___mb.mb_class_exists, (const object *) this, _class);
}

string class_db::class_get_category(const string _class) const {
	return ___godot_icall_String_String(___mb.mb_class_get_category, (const object *) this, _class);
}

pool_string_array class_db::class_get_enum_constants(const string _class, const string _enum, const bool no_inheritance) const {
	return ___godot_icall_PoolStringArray_String_String_bool(___mb.mb_class_get_enum_constants, (const object *) this, _class, _enum, no_inheritance);
}

pool_string_array class_db::class_get_enum_list(const string _class, const bool no_inheritance) const {
	return ___godot_icall_PoolStringArray_String_bool(___mb.mb_class_get_enum_list, (const object *) this, _class, no_inheritance);
}

int64_t class_db::class_get_integer_constant(const string _class, const string name) const {
	return ___godot_icall_int_String_String(___mb.mb_class_get_integer_constant, (const object *) this, _class, name);
}

string class_db::class_get_integer_constant_enum(const string _class, const string name, const bool no_inheritance) const {
	return ___godot_icall_String_String_String_bool(___mb.mb_class_get_integer_constant_enum, (const object *) this, _class, name, no_inheritance);
}

pool_string_array class_db::class_get_integer_constant_list(const string _class, const bool no_inheritance) const {
	return ___godot_icall_PoolStringArray_String_bool(___mb.mb_class_get_integer_constant_list, (const object *) this, _class, no_inheritance);
}

array class_db::class_get_method_list(const string _class, const bool no_inheritance) const {
	return ___godot_icall_Array_String_bool(___mb.mb_class_get_method_list, (const object *) this, _class, no_inheritance);
}

variant class_db::class_get_property(const object *object_, const string property) const {
	return ___godot_icall_Variant_Object_String(___mb.mb_class_get_property, (const object *) this, object_, property);
}

array class_db::class_get_property_list(const string _class, const bool no_inheritance) const {
	return ___godot_icall_Array_String_bool(___mb.mb_class_get_property_list, (const object *) this, _class, no_inheritance);
}

dictionary class_db::class_get_signal(const string _class, const string signal) const {
	return ___godot_icall_Dictionary_String_String(___mb.mb_class_get_signal, (const object *) this, _class, signal);
}

array class_db::class_get_signal_list(const string _class, const bool no_inheritance) const {
	return ___godot_icall_Array_String_bool(___mb.mb_class_get_signal_list, (const object *) this, _class, no_inheritance);
}

bool class_db::class_has_enum(const string _class, const string name, const bool no_inheritance) const {
	return ___godot_icall_bool_String_String_bool(___mb.mb_class_has_enum, (const object *) this, _class, name, no_inheritance);
}

bool class_db::class_has_integer_constant(const string _class, const string name) const {
	return ___godot_icall_bool_String_String(___mb.mb_class_has_integer_constant, (const object *) this, _class, name);
}

bool class_db::class_has_method(const string _class, const string method, const bool no_inheritance) const {
	return ___godot_icall_bool_String_String_bool(___mb.mb_class_has_method, (const object *) this, _class, method, no_inheritance);
}

bool class_db::class_has_signal(const string _class, const string signal) const {
	return ___godot_icall_bool_String_String(___mb.mb_class_has_signal, (const object *) this, _class, signal);
}

error class_db::class_set_property(const object *object_, const string property, const variant value) const {
	return (error) ___godot_icall_int_Object_String_Variant(___mb.mb_class_set_property, (const object *) this, object_, property, value);
}

pool_string_array class_db::get_class_list() const {
	return ___godot_icall_PoolStringArray(___mb.mb_get_class_list, (const object *) this);
}

pool_string_array class_db::get_inheriters_from_class(const string _class) const {
	return ___godot_icall_PoolStringArray_String(___mb.mb_get_inheriters_from_class, (const object *) this, _class);
}

string class_db::get_parent_class(const string _class) const {
	return ___godot_icall_String_String(___mb.mb_get_parent_class, (const object *) this, _class);
}

variant class_db::instance(const string _class) const {
	return ___godot_icall_Variant_String(___mb.mb_instance, (const object *) this, _class);
}

bool class_db::is_class_enabled(const string _class) const {
	return ___godot_icall_bool_String(___mb.mb_is_class_enabled, (const object *) this, _class);
}

bool class_db::is_parent_class(const string _class, const string inherits) const {
	return ___godot_icall_bool_String_String(___mb.mb_is_parent_class, (const object *) this, _class, inherits);
}

}