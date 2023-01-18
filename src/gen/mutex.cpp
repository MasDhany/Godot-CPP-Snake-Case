#include "mutex.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


mutex::___method_bindings mutex::___mb = {};

void *mutex::_detail_class_tag = nullptr;

void mutex::___init_method_bindings() {
	___mb.mb_lock = gd::api->godot_method_bind_get_method("_Mutex", "lock");
	___mb.mb_try_lock = gd::api->godot_method_bind_get_method("_Mutex", "try_lock");
	___mb.mb_unlock = gd::api->godot_method_bind_get_method("_Mutex", "unlock");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "_Mutex");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

mutex *mutex::_new()
{
	return (mutex *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"_Mutex")());
}
void mutex::lock() {
	___godot_icall_void(___mb.mb_lock, (const object *) this);
}

error mutex::try_lock() {
	return (error) ___godot_icall_int(___mb.mb_try_lock, (const object *) this);
}

void mutex::unlock() {
	___godot_icall_void(___mb.mb_unlock, (const object *) this);
}

}