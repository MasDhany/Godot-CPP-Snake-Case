#include "semaphore.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


semaphore::___method_bindings semaphore::___mb = {};

void *semaphore::_detail_class_tag = nullptr;

void semaphore::___init_method_bindings() {
	___mb.mb_post = gd::api->godot_method_bind_get_method("_Semaphore", "post");
	___mb.mb_try_wait = gd::api->godot_method_bind_get_method("_Semaphore", "try_wait");
	___mb.mb_wait = gd::api->godot_method_bind_get_method("_Semaphore", "wait");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "_Semaphore");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

semaphore *semaphore::_new()
{
	return (semaphore *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"_Semaphore")());
}
error semaphore::post() {
	return (error) ___godot_icall_int(___mb.mb_post, (const object *) this);
}

error semaphore::try_wait() {
	return (error) ___godot_icall_int(___mb.mb_try_wait, (const object *) this);
}

error semaphore::wait() {
	return (error) ___godot_icall_int(___mb.mb_wait, (const object *) this);
}

}