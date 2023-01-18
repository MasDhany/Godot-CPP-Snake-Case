#include "hmaccontext.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


hmaccontext::___method_bindings hmaccontext::___mb = {};

void *hmaccontext::_detail_class_tag = nullptr;

void hmaccontext::___init_method_bindings() {
	___mb.mb_finish = gd::api->godot_method_bind_get_method("HMACContext", "finish");
	___mb.mb_start = gd::api->godot_method_bind_get_method("HMACContext", "start");
	___mb.mb_update = gd::api->godot_method_bind_get_method("HMACContext", "update");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "HMACContext");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

hmaccontext *hmaccontext::_new()
{
	return (hmaccontext *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"HMACContext")());
}
pool_byte_array hmaccontext::finish() {
	return ___godot_icall_PoolByteArray(___mb.mb_finish, (const object *) this);
}

error hmaccontext::start(const int64_t hash_type, const pool_byte_array key) {
	return (error) ___godot_icall_int_int_PoolByteArray(___mb.mb_start, (const object *) this, hash_type, key);
}

error hmaccontext::update(const pool_byte_array data) {
	return (error) ___godot_icall_int_PoolByteArray(___mb.mb_update, (const object *) this, data);
}

}