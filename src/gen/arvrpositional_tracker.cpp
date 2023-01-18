#include "arvrpositional_tracker.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "mesh.hpp"


namespace gd {


arvrpositional_tracker::___method_bindings arvrpositional_tracker::___mb = {};

void *arvrpositional_tracker::_detail_class_tag = nullptr;

void arvrpositional_tracker::___init_method_bindings() {
	___mb.mb__set_joy_id = gd::api->godot_method_bind_get_method("ARVRPositionalTracker", "_set_joy_id");
	___mb.mb__set_mesh = gd::api->godot_method_bind_get_method("ARVRPositionalTracker", "_set_mesh");
	___mb.mb__set_name = gd::api->godot_method_bind_get_method("ARVRPositionalTracker", "_set_name");
	___mb.mb__set_orientation = gd::api->godot_method_bind_get_method("ARVRPositionalTracker", "_set_orientation");
	___mb.mb__set_rw_position = gd::api->godot_method_bind_get_method("ARVRPositionalTracker", "_set_rw_position");
	___mb.mb__set_type = gd::api->godot_method_bind_get_method("ARVRPositionalTracker", "_set_type");
	___mb.mb_get_hand = gd::api->godot_method_bind_get_method("ARVRPositionalTracker", "get_hand");
	___mb.mb_get_joy_id = gd::api->godot_method_bind_get_method("ARVRPositionalTracker", "get_joy_id");
	___mb.mb_get_mesh = gd::api->godot_method_bind_get_method("ARVRPositionalTracker", "get_mesh");
	___mb.mb_get_name = gd::api->godot_method_bind_get_method("ARVRPositionalTracker", "get_name");
	___mb.mb_get_orientation = gd::api->godot_method_bind_get_method("ARVRPositionalTracker", "get_orientation");
	___mb.mb_get_position = gd::api->godot_method_bind_get_method("ARVRPositionalTracker", "get_position");
	___mb.mb_get_rumble = gd::api->godot_method_bind_get_method("ARVRPositionalTracker", "get_rumble");
	___mb.mb_get_tracker_id = gd::api->godot_method_bind_get_method("ARVRPositionalTracker", "get_tracker_id");
	___mb.mb_get_tracks_orientation = gd::api->godot_method_bind_get_method("ARVRPositionalTracker", "get_tracks_orientation");
	___mb.mb_get_tracks_position = gd::api->godot_method_bind_get_method("ARVRPositionalTracker", "get_tracks_position");
	___mb.mb_get_transform = gd::api->godot_method_bind_get_method("ARVRPositionalTracker", "get_transform");
	___mb.mb_get_type = gd::api->godot_method_bind_get_method("ARVRPositionalTracker", "get_type");
	___mb.mb_set_rumble = gd::api->godot_method_bind_get_method("ARVRPositionalTracker", "set_rumble");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ARVRPositionalTracker");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

arvrpositional_tracker *arvrpositional_tracker::_new()
{
	return (arvrpositional_tracker *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ARVRPositionalTracker")());
}
void arvrpositional_tracker::_set_joy_id(const int64_t joy_id) {
	___godot_icall_void_int(___mb.mb__set_joy_id, (const object *) this, joy_id);
}

void arvrpositional_tracker::_set_mesh(const ref<mesh> mesh_) {
	___godot_icall_void_Object(___mb.mb__set_mesh, (const object *) this, mesh_.ptr());
}

void arvrpositional_tracker::_set_name(const string name) {
	___godot_icall_void_String(___mb.mb__set_name, (const object *) this, name);
}

void arvrpositional_tracker::_set_orientation(const basis orientation) {
	___godot_icall_void_Basis(___mb.mb__set_orientation, (const object *) this, orientation);
}

void arvrpositional_tracker::_set_rw_position(const vector3 rw_position) {
	___godot_icall_void_Vector3(___mb.mb__set_rw_position, (const object *) this, rw_position);
}

void arvrpositional_tracker::_set_type(const int64_t type) {
	___godot_icall_void_int(___mb.mb__set_type, (const object *) this, type);
}

arvrpositional_tracker::TrackerHand arvrpositional_tracker::get_hand() const {
	return (arvrpositional_tracker::TrackerHand) ___godot_icall_int(___mb.mb_get_hand, (const object *) this);
}

int64_t arvrpositional_tracker::get_joy_id() const {
	return ___godot_icall_int(___mb.mb_get_joy_id, (const object *) this);
}

ref<mesh> arvrpositional_tracker::get_mesh() const {
	return ref<mesh>::__internal_constructor(___godot_icall_Object(___mb.mb_get_mesh, (const object *) this));
}

string arvrpositional_tracker::get_name() const {
	return ___godot_icall_String(___mb.mb_get_name, (const object *) this);
}

basis arvrpositional_tracker::get_orientation() const {
	return ___godot_icall_Basis(___mb.mb_get_orientation, (const object *) this);
}

vector3 arvrpositional_tracker::get_position() const {
	return ___godot_icall_Vector3(___mb.mb_get_position, (const object *) this);
}

real_t arvrpositional_tracker::get_rumble() const {
	return ___godot_icall_float(___mb.mb_get_rumble, (const object *) this);
}

int64_t arvrpositional_tracker::get_tracker_id() const {
	return ___godot_icall_int(___mb.mb_get_tracker_id, (const object *) this);
}

bool arvrpositional_tracker::get_tracks_orientation() const {
	return ___godot_icall_bool(___mb.mb_get_tracks_orientation, (const object *) this);
}

bool arvrpositional_tracker::get_tracks_position() const {
	return ___godot_icall_bool(___mb.mb_get_tracks_position, (const object *) this);
}

transform arvrpositional_tracker::get_transform(const bool adjust_by_reference_frame) const {
	return ___godot_icall_Transform_bool(___mb.mb_get_transform, (const object *) this, adjust_by_reference_frame);
}

arvrserver::TrackerType arvrpositional_tracker::get_type() const {
	return (arvrserver::TrackerType) ___godot_icall_int(___mb.mb_get_type, (const object *) this);
}

void arvrpositional_tracker::set_rumble(const real_t rumble) {
	___godot_icall_void_float(___mb.mb_set_rumble, (const object *) this, rumble);
}

}