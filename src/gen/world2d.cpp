#include "world2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "physics2_ddirect_space_state.hpp"


namespace gd {


world2d::___method_bindings world2d::___mb = {};

void *world2d::_detail_class_tag = nullptr;

void world2d::___init_method_bindings() {
	___mb.mb_get_canvas = gd::api->godot_method_bind_get_method("World2D", "get_canvas");
	___mb.mb_get_direct_space_state = gd::api->godot_method_bind_get_method("World2D", "get_direct_space_state");
	___mb.mb_get_navigation_map = gd::api->godot_method_bind_get_method("World2D", "get_navigation_map");
	___mb.mb_get_space = gd::api->godot_method_bind_get_method("World2D", "get_space");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "World2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

world2d *world2d::_new()
{
	return (world2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"World2D")());
}
rid world2d::get_canvas() {
	return ___godot_icall_RID(___mb.mb_get_canvas, (const object *) this);
}

physics2_ddirect_space_state *world2d::get_direct_space_state() {
	return (physics2_ddirect_space_state *) ___godot_icall_Object(___mb.mb_get_direct_space_state, (const object *) this);
}

rid world2d::get_navigation_map() const {
	return ___godot_icall_RID(___mb.mb_get_navigation_map, (const object *) this);
}

rid world2d::get_space() {
	return ___godot_icall_RID(___mb.mb_get_space, (const object *) this);
}

}