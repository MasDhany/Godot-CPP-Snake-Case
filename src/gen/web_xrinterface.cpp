#include "web_xrinterface.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "arvrpositional_tracker.hpp"


namespace gd {


web_xrinterface::___method_bindings web_xrinterface::___mb = {};

void *web_xrinterface::_detail_class_tag = nullptr;

void web_xrinterface::___init_method_bindings() {
	___mb.mb_get_bounds_geometry = gd::api->godot_method_bind_get_method("WebXRInterface", "get_bounds_geometry");
	___mb.mb_get_controller = gd::api->godot_method_bind_get_method("WebXRInterface", "get_controller");
	___mb.mb_get_controller_target_ray_mode = gd::api->godot_method_bind_get_method("WebXRInterface", "get_controller_target_ray_mode");
	___mb.mb_get_optional_features = gd::api->godot_method_bind_get_method("WebXRInterface", "get_optional_features");
	___mb.mb_get_reference_space_type = gd::api->godot_method_bind_get_method("WebXRInterface", "get_reference_space_type");
	___mb.mb_get_requested_reference_space_types = gd::api->godot_method_bind_get_method("WebXRInterface", "get_requested_reference_space_types");
	___mb.mb_get_required_features = gd::api->godot_method_bind_get_method("WebXRInterface", "get_required_features");
	___mb.mb_get_session_mode = gd::api->godot_method_bind_get_method("WebXRInterface", "get_session_mode");
	___mb.mb_get_visibility_state = gd::api->godot_method_bind_get_method("WebXRInterface", "get_visibility_state");
	___mb.mb_get_xr_standard_mapping = gd::api->godot_method_bind_get_method("WebXRInterface", "get_xr_standard_mapping");
	___mb.mb_is_session_supported = gd::api->godot_method_bind_get_method("WebXRInterface", "is_session_supported");
	___mb.mb_set_optional_features = gd::api->godot_method_bind_get_method("WebXRInterface", "set_optional_features");
	___mb.mb_set_requested_reference_space_types = gd::api->godot_method_bind_get_method("WebXRInterface", "set_requested_reference_space_types");
	___mb.mb_set_required_features = gd::api->godot_method_bind_get_method("WebXRInterface", "set_required_features");
	___mb.mb_set_session_mode = gd::api->godot_method_bind_get_method("WebXRInterface", "set_session_mode");
	___mb.mb_set_xr_standard_mapping = gd::api->godot_method_bind_get_method("WebXRInterface", "set_xr_standard_mapping");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "WebXRInterface");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

pool_vector3_array web_xrinterface::get_bounds_geometry() const {
	return ___godot_icall_PoolVector3Array(___mb.mb_get_bounds_geometry, (const object *) this);
}

ref<arvrpositional_tracker> web_xrinterface::get_controller(const int64_t controller_id) const {
	return ref<arvrpositional_tracker>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_controller, (const object *) this, controller_id));
}

web_xrinterface::TargetRayMode web_xrinterface::get_controller_target_ray_mode(const int64_t controller_id) const {
	return (web_xrinterface::TargetRayMode) ___godot_icall_int_int(___mb.mb_get_controller_target_ray_mode, (const object *) this, controller_id);
}

string web_xrinterface::get_optional_features() const {
	return ___godot_icall_String(___mb.mb_get_optional_features, (const object *) this);
}

string web_xrinterface::get_reference_space_type() const {
	return ___godot_icall_String(___mb.mb_get_reference_space_type, (const object *) this);
}

string web_xrinterface::get_requested_reference_space_types() const {
	return ___godot_icall_String(___mb.mb_get_requested_reference_space_types, (const object *) this);
}

string web_xrinterface::get_required_features() const {
	return ___godot_icall_String(___mb.mb_get_required_features, (const object *) this);
}

string web_xrinterface::get_session_mode() const {
	return ___godot_icall_String(___mb.mb_get_session_mode, (const object *) this);
}

string web_xrinterface::get_visibility_state() const {
	return ___godot_icall_String(___mb.mb_get_visibility_state, (const object *) this);
}

bool web_xrinterface::get_xr_standard_mapping() const {
	return ___godot_icall_bool(___mb.mb_get_xr_standard_mapping, (const object *) this);
}

void web_xrinterface::is_session_supported(const string session_mode) {
	___godot_icall_void_String(___mb.mb_is_session_supported, (const object *) this, session_mode);
}

void web_xrinterface::set_optional_features(const string optional_features) {
	___godot_icall_void_String(___mb.mb_set_optional_features, (const object *) this, optional_features);
}

void web_xrinterface::set_requested_reference_space_types(const string requested_reference_space_types) {
	___godot_icall_void_String(___mb.mb_set_requested_reference_space_types, (const object *) this, requested_reference_space_types);
}

void web_xrinterface::set_required_features(const string required_features) {
	___godot_icall_void_String(___mb.mb_set_required_features, (const object *) this, required_features);
}

void web_xrinterface::set_session_mode(const string session_mode) {
	___godot_icall_void_String(___mb.mb_set_session_mode, (const object *) this, session_mode);
}

void web_xrinterface::set_xr_standard_mapping(const bool arg0) {
	___godot_icall_void_bool(___mb.mb_set_xr_standard_mapping, (const object *) this, arg0);
}

}