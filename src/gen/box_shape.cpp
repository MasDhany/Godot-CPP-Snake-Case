#include "box_shape.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


box_shape::___method_bindings box_shape::___mb = {};

void *box_shape::_detail_class_tag = nullptr;

void box_shape::___init_method_bindings() {
	___mb.mb_get_extents = gd::api->godot_method_bind_get_method("BoxShape", "get_extents");
	___mb.mb_set_extents = gd::api->godot_method_bind_get_method("BoxShape", "set_extents");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "BoxShape");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

box_shape *box_shape::_new()
{
	return (box_shape *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"BoxShape")());
}
vector3 box_shape::get_extents() const {
	return ___godot_icall_Vector3(___mb.mb_get_extents, (const object *) this);
}

void box_shape::set_extents(const vector3 extents) {
	___godot_icall_void_Vector3(___mb.mb_set_extents, (const object *) this, extents);
}

}