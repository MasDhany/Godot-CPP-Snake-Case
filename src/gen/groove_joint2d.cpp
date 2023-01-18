#include "groove_joint2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


groove_joint2d::___method_bindings groove_joint2d::___mb = {};

void *groove_joint2d::_detail_class_tag = nullptr;

void groove_joint2d::___init_method_bindings() {
	___mb.mb_get_initial_offset = gd::api->godot_method_bind_get_method("GrooveJoint2D", "get_initial_offset");
	___mb.mb_get_length = gd::api->godot_method_bind_get_method("GrooveJoint2D", "get_length");
	___mb.mb_set_initial_offset = gd::api->godot_method_bind_get_method("GrooveJoint2D", "set_initial_offset");
	___mb.mb_set_length = gd::api->godot_method_bind_get_method("GrooveJoint2D", "set_length");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "GrooveJoint2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

groove_joint2d *groove_joint2d::_new()
{
	return (groove_joint2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"GrooveJoint2D")());
}
real_t groove_joint2d::get_initial_offset() const {
	return ___godot_icall_float(___mb.mb_get_initial_offset, (const object *) this);
}

real_t groove_joint2d::get_length() const {
	return ___godot_icall_float(___mb.mb_get_length, (const object *) this);
}

void groove_joint2d::set_initial_offset(const real_t offset) {
	___godot_icall_void_float(___mb.mb_set_initial_offset, (const object *) this, offset);
}

void groove_joint2d::set_length(const real_t length) {
	___godot_icall_void_float(___mb.mb_set_length, (const object *) this, length);
}

}