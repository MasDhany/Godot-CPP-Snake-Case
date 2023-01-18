#include "hashing_context.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


hashing_context::___method_bindings hashing_context::___mb = {};

void *hashing_context::_detail_class_tag = nullptr;

void hashing_context::___init_method_bindings() {
	___mb.mb_finish = gd::api->godot_method_bind_get_method("HashingContext", "finish");
	___mb.mb_start = gd::api->godot_method_bind_get_method("HashingContext", "start");
	___mb.mb_update = gd::api->godot_method_bind_get_method("HashingContext", "update");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "HashingContext");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

hashing_context *hashing_context::_new()
{
	return (hashing_context *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"HashingContext")());
}
pool_byte_array hashing_context::finish() {
	return ___godot_icall_PoolByteArray(___mb.mb_finish, (const object *) this);
}

error hashing_context::start(const int64_t type) {
	return (error) ___godot_icall_int_int(___mb.mb_start, (const object *) this, type);
}

error hashing_context::update(const pool_byte_array chunk) {
	return (error) ___godot_icall_int_PoolByteArray(___mb.mb_update, (const object *) this, chunk);
}

}