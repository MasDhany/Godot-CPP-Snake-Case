#include "arvrserver.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "arvrinterface.hpp"
#include "arvrpositional_tracker.hpp"


namespace gd {


arvrserver *arvrserver::_singleton = NULL;


arvrserver::arvrserver() {
	_owner = gd::api->godot_global_get_singleton((char *) "ARVRServer");
}


arvrserver::___method_bindings arvrserver::___mb = {};

void *arvrserver::_detail_class_tag = nullptr;

void arvrserver::___init_method_bindings() {
	___mb.mb_add_interface = gd::api->godot_method_bind_get_method("ARVRServer", "add_interface");
	___mb.mb_add_tracker = gd::api->godot_method_bind_get_method("ARVRServer", "add_tracker");
	___mb.mb_center_on_hmd = gd::api->godot_method_bind_get_method("ARVRServer", "center_on_hmd");
	___mb.mb_clear_primary_interface_if = gd::api->godot_method_bind_get_method("ARVRServer", "clear_primary_interface_if");
	___mb.mb_find_interface = gd::api->godot_method_bind_get_method("ARVRServer", "find_interface");
	___mb.mb_get_hmd_transform = gd::api->godot_method_bind_get_method("ARVRServer", "get_hmd_transform");
	___mb.mb_get_interface = gd::api->godot_method_bind_get_method("ARVRServer", "get_interface");
	___mb.mb_get_interface_count = gd::api->godot_method_bind_get_method("ARVRServer", "get_interface_count");
	___mb.mb_get_interfaces = gd::api->godot_method_bind_get_method("ARVRServer", "get_interfaces");
	___mb.mb_get_last_commit_usec = gd::api->godot_method_bind_get_method("ARVRServer", "get_last_commit_usec");
	___mb.mb_get_last_frame_usec = gd::api->godot_method_bind_get_method("ARVRServer", "get_last_frame_usec");
	___mb.mb_get_last_process_usec = gd::api->godot_method_bind_get_method("ARVRServer", "get_last_process_usec");
	___mb.mb_get_primary_interface = gd::api->godot_method_bind_get_method("ARVRServer", "get_primary_interface");
	___mb.mb_get_reference_frame = gd::api->godot_method_bind_get_method("ARVRServer", "get_reference_frame");
	___mb.mb_get_tracker = gd::api->godot_method_bind_get_method("ARVRServer", "get_tracker");
	___mb.mb_get_tracker_count = gd::api->godot_method_bind_get_method("ARVRServer", "get_tracker_count");
	___mb.mb_get_world_scale = gd::api->godot_method_bind_get_method("ARVRServer", "get_world_scale");
	___mb.mb_remove_interface = gd::api->godot_method_bind_get_method("ARVRServer", "remove_interface");
	___mb.mb_remove_tracker = gd::api->godot_method_bind_get_method("ARVRServer", "remove_tracker");
	___mb.mb_set_primary_interface = gd::api->godot_method_bind_get_method("ARVRServer", "set_primary_interface");
	___mb.mb_set_world_scale = gd::api->godot_method_bind_get_method("ARVRServer", "set_world_scale");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ARVRServer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void arvrserver::add_interface(const ref<arvrinterface> interface) {
	___godot_icall_void_Object(___mb.mb_add_interface, (const object *) this, interface.ptr());
}

void arvrserver::add_tracker(const ref<arvrpositional_tracker> tracker) {
	___godot_icall_void_Object(___mb.mb_add_tracker, (const object *) this, tracker.ptr());
}

void arvrserver::center_on_hmd(const int64_t rotation_mode, const bool keep_height) {
	___godot_icall_void_int_bool(___mb.mb_center_on_hmd, (const object *) this, rotation_mode, keep_height);
}

void arvrserver::clear_primary_interface_if(const ref<arvrinterface> interface) {
	___godot_icall_void_Object(___mb.mb_clear_primary_interface_if, (const object *) this, interface.ptr());
}

ref<arvrinterface> arvrserver::find_interface(const string name) const {
	return ref<arvrinterface>::__internal_constructor(___godot_icall_Object_String(___mb.mb_find_interface, (const object *) this, name));
}

transform arvrserver::get_hmd_transform() {
	return ___godot_icall_Transform(___mb.mb_get_hmd_transform, (const object *) this);
}

ref<arvrinterface> arvrserver::get_interface(const int64_t idx) const {
	return ref<arvrinterface>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_interface, (const object *) this, idx));
}

int64_t arvrserver::get_interface_count() const {
	return ___godot_icall_int(___mb.mb_get_interface_count, (const object *) this);
}

array arvrserver::get_interfaces() const {
	return ___godot_icall_Array(___mb.mb_get_interfaces, (const object *) this);
}

int64_t arvrserver::get_last_commit_usec() {
	return ___godot_icall_int(___mb.mb_get_last_commit_usec, (const object *) this);
}

int64_t arvrserver::get_last_frame_usec() {
	return ___godot_icall_int(___mb.mb_get_last_frame_usec, (const object *) this);
}

int64_t arvrserver::get_last_process_usec() {
	return ___godot_icall_int(___mb.mb_get_last_process_usec, (const object *) this);
}

ref<arvrinterface> arvrserver::get_primary_interface() const {
	return ref<arvrinterface>::__internal_constructor(___godot_icall_Object(___mb.mb_get_primary_interface, (const object *) this));
}

transform arvrserver::get_reference_frame() const {
	return ___godot_icall_Transform(___mb.mb_get_reference_frame, (const object *) this);
}

ref<arvrpositional_tracker> arvrserver::get_tracker(const int64_t idx) const {
	return ref<arvrpositional_tracker>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_tracker, (const object *) this, idx));
}

int64_t arvrserver::get_tracker_count() const {
	return ___godot_icall_int(___mb.mb_get_tracker_count, (const object *) this);
}

real_t arvrserver::get_world_scale() const {
	return ___godot_icall_float(___mb.mb_get_world_scale, (const object *) this);
}

void arvrserver::remove_interface(const ref<arvrinterface> interface) {
	___godot_icall_void_Object(___mb.mb_remove_interface, (const object *) this, interface.ptr());
}

void arvrserver::remove_tracker(const ref<arvrpositional_tracker> tracker) {
	___godot_icall_void_Object(___mb.mb_remove_tracker, (const object *) this, tracker.ptr());
}

void arvrserver::set_primary_interface(const ref<arvrinterface> interface) {
	___godot_icall_void_Object(___mb.mb_set_primary_interface, (const object *) this, interface.ptr());
}

void arvrserver::set_world_scale(const real_t world_scale) {
	___godot_icall_void_float(___mb.mb_set_world_scale, (const object *) this, world_scale);
}

}