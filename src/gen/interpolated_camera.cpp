#include "interpolated_camera.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "object.hpp"


namespace gd {


interpolated_camera::___method_bindings interpolated_camera::___mb = {};

void *interpolated_camera::_detail_class_tag = nullptr;

void interpolated_camera::___init_method_bindings() {
	___mb.mb_get_process_mode = gd::api->godot_method_bind_get_method("InterpolatedCamera", "get_process_mode");
	___mb.mb_get_speed = gd::api->godot_method_bind_get_method("InterpolatedCamera", "get_speed");
	___mb.mb_get_target_path = gd::api->godot_method_bind_get_method("InterpolatedCamera", "get_target_path");
	___mb.mb_is_interpolation_enabled = gd::api->godot_method_bind_get_method("InterpolatedCamera", "is_interpolation_enabled");
	___mb.mb_set_interpolation_enabled = gd::api->godot_method_bind_get_method("InterpolatedCamera", "set_interpolation_enabled");
	___mb.mb_set_process_mode = gd::api->godot_method_bind_get_method("InterpolatedCamera", "set_process_mode");
	___mb.mb_set_speed = gd::api->godot_method_bind_get_method("InterpolatedCamera", "set_speed");
	___mb.mb_set_target = gd::api->godot_method_bind_get_method("InterpolatedCamera", "set_target");
	___mb.mb_set_target_path = gd::api->godot_method_bind_get_method("InterpolatedCamera", "set_target_path");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "InterpolatedCamera");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

interpolated_camera *interpolated_camera::_new()
{
	return (interpolated_camera *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"InterpolatedCamera")());
}
interpolated_camera::InterpolatedCameraProcessMode interpolated_camera::get_process_mode() const {
	return (interpolated_camera::InterpolatedCameraProcessMode) ___godot_icall_int(___mb.mb_get_process_mode, (const object *) this);
}

real_t interpolated_camera::get_speed() const {
	return ___godot_icall_float(___mb.mb_get_speed, (const object *) this);
}

node_path interpolated_camera::get_target_path() const {
	return ___godot_icall_NodePath(___mb.mb_get_target_path, (const object *) this);
}

bool interpolated_camera::is_interpolation_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_interpolation_enabled, (const object *) this);
}

void interpolated_camera::set_interpolation_enabled(const bool target_path) {
	___godot_icall_void_bool(___mb.mb_set_interpolation_enabled, (const object *) this, target_path);
}

void interpolated_camera::set_process_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_process_mode, (const object *) this, mode);
}

void interpolated_camera::set_speed(const real_t speed) {
	___godot_icall_void_float(___mb.mb_set_speed, (const object *) this, speed);
}

void interpolated_camera::set_target(const object *target) {
	___godot_icall_void_Object(___mb.mb_set_target, (const object *) this, target);
}

void interpolated_camera::set_target_path(const node_path target_path) {
	___godot_icall_void_NodePath(___mb.mb_set_target_path, (const object *) this, target_path);
}

}