#include "aescontext.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


aescontext::___method_bindings aescontext::___mb = {};

void *aescontext::_detail_class_tag = nullptr;

void aescontext::___init_method_bindings() {
	___mb.mb_finish = gd::api->godot_method_bind_get_method("AESContext", "finish");
	___mb.mb_get_iv_state = gd::api->godot_method_bind_get_method("AESContext", "get_iv_state");
	___mb.mb_start = gd::api->godot_method_bind_get_method("AESContext", "start");
	___mb.mb_update = gd::api->godot_method_bind_get_method("AESContext", "update");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AESContext");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

aescontext *aescontext::_new()
{
	return (aescontext *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AESContext")());
}
void aescontext::finish() {
	___godot_icall_void(___mb.mb_finish, (const object *) this);
}

pool_byte_array aescontext::get_iv_state() {
	return ___godot_icall_PoolByteArray(___mb.mb_get_iv_state, (const object *) this);
}

error aescontext::start(const int64_t mode, const pool_byte_array key, const pool_byte_array iv) {
	return (error) ___godot_icall_int_int_PoolByteArray_PoolByteArray(___mb.mb_start, (const object *) this, mode, key, iv);
}

pool_byte_array aescontext::update(const pool_byte_array src) {
	return ___godot_icall_PoolByteArray_PoolByteArray(___mb.mb_update, (const object *) this, src);
}

}