#include "arvrcontroller.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "mesh.hpp"


namespace gd {


arvrcontroller::___method_bindings arvrcontroller::___mb = {};

void *arvrcontroller::_detail_class_tag = nullptr;

void arvrcontroller::___init_method_bindings() {
	___mb.mb_get_controller_id = gd::api->godot_method_bind_get_method("ARVRController", "get_controller_id");
	___mb.mb_get_controller_name = gd::api->godot_method_bind_get_method("ARVRController", "get_controller_name");
	___mb.mb_get_hand = gd::api->godot_method_bind_get_method("ARVRController", "get_hand");
	___mb.mb_get_is_active = gd::api->godot_method_bind_get_method("ARVRController", "get_is_active");
	___mb.mb_get_joystick_axis = gd::api->godot_method_bind_get_method("ARVRController", "get_joystick_axis");
	___mb.mb_get_joystick_id = gd::api->godot_method_bind_get_method("ARVRController", "get_joystick_id");
	___mb.mb_get_mesh = gd::api->godot_method_bind_get_method("ARVRController", "get_mesh");
	___mb.mb_get_rumble = gd::api->godot_method_bind_get_method("ARVRController", "get_rumble");
	___mb.mb_is_button_pressed = gd::api->godot_method_bind_get_method("ARVRController", "is_button_pressed");
	___mb.mb_set_controller_id = gd::api->godot_method_bind_get_method("ARVRController", "set_controller_id");
	___mb.mb_set_rumble = gd::api->godot_method_bind_get_method("ARVRController", "set_rumble");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ARVRController");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

arvrcontroller *arvrcontroller::_new()
{
	return (arvrcontroller *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ARVRController")());
}
int64_t arvrcontroller::get_controller_id() const {
	return ___godot_icall_int(___mb.mb_get_controller_id, (const object *) this);
}

string arvrcontroller::get_controller_name() const {
	return ___godot_icall_String(___mb.mb_get_controller_name, (const object *) this);
}

arvrpositional_tracker::TrackerHand arvrcontroller::get_hand() const {
	return (arvrpositional_tracker::TrackerHand) ___godot_icall_int(___mb.mb_get_hand, (const object *) this);
}

bool arvrcontroller::get_is_active() const {
	return ___godot_icall_bool(___mb.mb_get_is_active, (const object *) this);
}

real_t arvrcontroller::get_joystick_axis(const int64_t axis) const {
	return ___godot_icall_float_int(___mb.mb_get_joystick_axis, (const object *) this, axis);
}

int64_t arvrcontroller::get_joystick_id() const {
	return ___godot_icall_int(___mb.mb_get_joystick_id, (const object *) this);
}

ref<mesh> arvrcontroller::get_mesh() const {
	return ref<mesh>::__internal_constructor(___godot_icall_Object(___mb.mb_get_mesh, (const object *) this));
}

real_t arvrcontroller::get_rumble() const {
	return ___godot_icall_float(___mb.mb_get_rumble, (const object *) this);
}

int64_t arvrcontroller::is_button_pressed(const int64_t button_) const {
	return ___godot_icall_int_int(___mb.mb_is_button_pressed, (const object *) this, button_);
}

void arvrcontroller::set_controller_id(const int64_t controller_id) {
	___godot_icall_void_int(___mb.mb_set_controller_id, (const object *) this, controller_id);
}

void arvrcontroller::set_rumble(const real_t rumble) {
	___godot_icall_void_float(___mb.mb_set_rumble, (const object *) this, rumble);
}

}