#include "pin_joint2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


pin_joint2d::___method_bindings pin_joint2d::___mb = {};

void *pin_joint2d::_detail_class_tag = nullptr;

void pin_joint2d::___init_method_bindings() {
	___mb.mb_get_softness = gd::api->godot_method_bind_get_method("PinJoint2D", "get_softness");
	___mb.mb_set_softness = gd::api->godot_method_bind_get_method("PinJoint2D", "set_softness");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "PinJoint2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

pin_joint2d *pin_joint2d::_new()
{
	return (pin_joint2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"PinJoint2D")());
}
real_t pin_joint2d::get_softness() const {
	return ___godot_icall_float(___mb.mb_get_softness, (const object *) this);
}

void pin_joint2d::set_softness(const real_t softness) {
	___godot_icall_void_float(___mb.mb_set_softness, (const object *) this, softness);
}

}