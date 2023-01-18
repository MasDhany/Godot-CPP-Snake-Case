#include "marshalls.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


marshalls *marshalls::_singleton = NULL;


marshalls::marshalls() {
	_owner = gd::api->godot_global_get_singleton((char *) "Marshalls");
}


marshalls::___method_bindings marshalls::___mb = {};

void *marshalls::_detail_class_tag = nullptr;

void marshalls::___init_method_bindings() {
	___mb.mb_base64_to_raw = gd::api->godot_method_bind_get_method("_Marshalls", "base64_to_raw");
	___mb.mb_base64_to_utf8 = gd::api->godot_method_bind_get_method("_Marshalls", "base64_to_utf8");
	___mb.mb_base64_to_variant = gd::api->godot_method_bind_get_method("_Marshalls", "base64_to_variant");
	___mb.mb_raw_to_base64 = gd::api->godot_method_bind_get_method("_Marshalls", "raw_to_base64");
	___mb.mb_utf8_to_base64 = gd::api->godot_method_bind_get_method("_Marshalls", "utf8_to_base64");
	___mb.mb_variant_to_base64 = gd::api->godot_method_bind_get_method("_Marshalls", "variant_to_base64");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "_Marshalls");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

pool_byte_array marshalls::base64_to_raw(const string base64_str) {
	return ___godot_icall_PoolByteArray_String(___mb.mb_base64_to_raw, (const object *) this, base64_str);
}

string marshalls::base64_to_utf8(const string base64_str) {
	return ___godot_icall_String_String(___mb.mb_base64_to_utf8, (const object *) this, base64_str);
}

variant marshalls::base64_to_variant(const string base64_str, const bool allow_objects) {
	return ___godot_icall_Variant_String_bool(___mb.mb_base64_to_variant, (const object *) this, base64_str, allow_objects);
}

string marshalls::raw_to_base64(const pool_byte_array array_) {
	return ___godot_icall_String_PoolByteArray(___mb.mb_raw_to_base64, (const object *) this, array_);
}

string marshalls::utf8_to_base64(const string utf8_str) {
	return ___godot_icall_String_String(___mb.mb_utf8_to_base64, (const object *) this, utf8_str);
}

string marshalls::variant_to_base64(const variant variant_, const bool full_objects) {
	return ___godot_icall_String_Variant_bool(___mb.mb_variant_to_base64, (const object *) this, variant_, full_objects);
}

}