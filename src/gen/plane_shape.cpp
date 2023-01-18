#include "plane_shape.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


plane_shape::___method_bindings plane_shape::___mb = {};

void *plane_shape::_detail_class_tag = nullptr;

void plane_shape::___init_method_bindings() {
	___mb.mb_get_plane = gd::api->godot_method_bind_get_method("PlaneShape", "get_plane");
	___mb.mb_set_plane = gd::api->godot_method_bind_get_method("PlaneShape", "set_plane");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "PlaneShape");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

plane_shape *plane_shape::_new()
{
	return (plane_shape *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"PlaneShape")());
}
plane plane_shape::get_plane() const {
	return ___godot_icall_Plane(___mb.mb_get_plane, (const object *) this);
}

void plane_shape::set_plane(const plane plane_) {
	___godot_icall_void_Plane(___mb.mb_set_plane, (const object *) this, plane_);
}

}