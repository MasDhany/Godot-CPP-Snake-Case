#include "spatial_velocity_tracker.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


spatial_velocity_tracker::___method_bindings spatial_velocity_tracker::___mb = {};

void *spatial_velocity_tracker::_detail_class_tag = nullptr;

void spatial_velocity_tracker::___init_method_bindings() {
	___mb.mb_get_tracked_linear_velocity = gd::api->godot_method_bind_get_method("SpatialVelocityTracker", "get_tracked_linear_velocity");
	___mb.mb_is_tracking_physics_step = gd::api->godot_method_bind_get_method("SpatialVelocityTracker", "is_tracking_physics_step");
	___mb.mb_reset = gd::api->godot_method_bind_get_method("SpatialVelocityTracker", "reset");
	___mb.mb_set_track_physics_step = gd::api->godot_method_bind_get_method("SpatialVelocityTracker", "set_track_physics_step");
	___mb.mb_update_position = gd::api->godot_method_bind_get_method("SpatialVelocityTracker", "update_position");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "SpatialVelocityTracker");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

spatial_velocity_tracker *spatial_velocity_tracker::_new()
{
	return (spatial_velocity_tracker *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"SpatialVelocityTracker")());
}
vector3 spatial_velocity_tracker::get_tracked_linear_velocity() const {
	return ___godot_icall_Vector3(___mb.mb_get_tracked_linear_velocity, (const object *) this);
}

bool spatial_velocity_tracker::is_tracking_physics_step() const {
	return ___godot_icall_bool(___mb.mb_is_tracking_physics_step, (const object *) this);
}

void spatial_velocity_tracker::reset(const vector3 position) {
	___godot_icall_void_Vector3(___mb.mb_reset, (const object *) this, position);
}

void spatial_velocity_tracker::set_track_physics_step(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_track_physics_step, (const object *) this, enable);
}

void spatial_velocity_tracker::update_position(const vector3 position) {
	___godot_icall_void_Vector3(___mb.mb_update_position, (const object *) this, position);
}

}