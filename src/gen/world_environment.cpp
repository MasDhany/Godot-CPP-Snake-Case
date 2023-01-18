#include "world_environment.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "environment.hpp"


namespace gd {


world_environment::___method_bindings world_environment::___mb = {};

void *world_environment::_detail_class_tag = nullptr;

void world_environment::___init_method_bindings() {
	___mb.mb_get_environment = gd::api->godot_method_bind_get_method("WorldEnvironment", "get_environment");
	___mb.mb_set_environment = gd::api->godot_method_bind_get_method("WorldEnvironment", "set_environment");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "WorldEnvironment");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

world_environment *world_environment::_new()
{
	return (world_environment *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"WorldEnvironment")());
}
ref<environment> world_environment::get_environment() const {
	return ref<environment>::__internal_constructor(___godot_icall_Object(___mb.mb_get_environment, (const object *) this));
}

void world_environment::set_environment(const ref<environment> env) {
	___godot_icall_void_Object(___mb.mb_set_environment, (const object *) this, env.ptr());
}

}