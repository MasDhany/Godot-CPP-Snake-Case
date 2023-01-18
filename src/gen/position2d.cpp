#include "position2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


position2d::___method_bindings position2d::___mb = {};

void *position2d::_detail_class_tag = nullptr;

void position2d::___init_method_bindings() {
	___mb.mb__get_gizmo_extents = gd::api->godot_method_bind_get_method("Position2D", "_get_gizmo_extents");
	___mb.mb__set_gizmo_extents = gd::api->godot_method_bind_get_method("Position2D", "_set_gizmo_extents");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Position2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

position2d *position2d::_new()
{
	return (position2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Position2D")());
}
real_t position2d::_get_gizmo_extents() const {
	return ___godot_icall_float(___mb.mb__get_gizmo_extents, (const object *) this);
}

void position2d::_set_gizmo_extents(const real_t extents) {
	___godot_icall_void_float(___mb.mb__set_gizmo_extents, (const object *) this, extents);
}

}