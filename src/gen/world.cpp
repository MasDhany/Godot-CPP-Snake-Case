#include "world.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "environment.hpp"
#include "physics_direct_space_state.hpp"


namespace gd {


world::___method_bindings world::___mb = {};

void *world::_detail_class_tag = nullptr;

void world::___init_method_bindings() {
	___mb.mb_get_direct_space_state = gd::api->godot_method_bind_get_method("World", "get_direct_space_state");
	___mb.mb_get_environment = gd::api->godot_method_bind_get_method("World", "get_environment");
	___mb.mb_get_fallback_environment = gd::api->godot_method_bind_get_method("World", "get_fallback_environment");
	___mb.mb_get_navigation_map = gd::api->godot_method_bind_get_method("World", "get_navigation_map");
	___mb.mb_get_scenario = gd::api->godot_method_bind_get_method("World", "get_scenario");
	___mb.mb_get_space = gd::api->godot_method_bind_get_method("World", "get_space");
	___mb.mb_set_environment = gd::api->godot_method_bind_get_method("World", "set_environment");
	___mb.mb_set_fallback_environment = gd::api->godot_method_bind_get_method("World", "set_fallback_environment");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "World");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

world *world::_new()
{
	return (world *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"World")());
}
physics_direct_space_state *world::get_direct_space_state() {
	return (physics_direct_space_state *) ___godot_icall_Object(___mb.mb_get_direct_space_state, (const object *) this);
}

ref<environment> world::get_environment() const {
	return ref<environment>::__internal_constructor(___godot_icall_Object(___mb.mb_get_environment, (const object *) this));
}

ref<environment> world::get_fallback_environment() const {
	return ref<environment>::__internal_constructor(___godot_icall_Object(___mb.mb_get_fallback_environment, (const object *) this));
}

rid world::get_navigation_map() const {
	return ___godot_icall_RID(___mb.mb_get_navigation_map, (const object *) this);
}

rid world::get_scenario() const {
	return ___godot_icall_RID(___mb.mb_get_scenario, (const object *) this);
}

rid world::get_space() const {
	return ___godot_icall_RID(___mb.mb_get_space, (const object *) this);
}

void world::set_environment(const ref<environment> env) {
	___godot_icall_void_Object(___mb.mb_set_environment, (const object *) this, env.ptr());
}

void world::set_fallback_environment(const ref<environment> env) {
	___godot_icall_void_Object(___mb.mb_set_fallback_environment, (const object *) this, env.ptr());
}

}