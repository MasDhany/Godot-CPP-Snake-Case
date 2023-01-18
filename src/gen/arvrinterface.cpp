#include "arvrinterface.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


arvrinterface::___method_bindings arvrinterface::___mb = {};

void *arvrinterface::_detail_class_tag = nullptr;

void arvrinterface::___init_method_bindings() {
	___mb.mb_get_anchor_detection_is_enabled = gd::api->godot_method_bind_get_method("ARVRInterface", "get_anchor_detection_is_enabled");
	___mb.mb_get_camera_feed_id = gd::api->godot_method_bind_get_method("ARVRInterface", "get_camera_feed_id");
	___mb.mb_get_capabilities = gd::api->godot_method_bind_get_method("ARVRInterface", "get_capabilities");
	___mb.mb_get_name = gd::api->godot_method_bind_get_method("ARVRInterface", "get_name");
	___mb.mb_get_render_targetsize = gd::api->godot_method_bind_get_method("ARVRInterface", "get_render_targetsize");
	___mb.mb_get_tracking_status = gd::api->godot_method_bind_get_method("ARVRInterface", "get_tracking_status");
	___mb.mb_initialize = gd::api->godot_method_bind_get_method("ARVRInterface", "initialize");
	___mb.mb_is_initialized = gd::api->godot_method_bind_get_method("ARVRInterface", "is_initialized");
	___mb.mb_is_primary = gd::api->godot_method_bind_get_method("ARVRInterface", "is_primary");
	___mb.mb_is_stereo = gd::api->godot_method_bind_get_method("ARVRInterface", "is_stereo");
	___mb.mb_set_anchor_detection_is_enabled = gd::api->godot_method_bind_get_method("ARVRInterface", "set_anchor_detection_is_enabled");
	___mb.mb_set_is_initialized = gd::api->godot_method_bind_get_method("ARVRInterface", "set_is_initialized");
	___mb.mb_set_is_primary = gd::api->godot_method_bind_get_method("ARVRInterface", "set_is_primary");
	___mb.mb_uninitialize = gd::api->godot_method_bind_get_method("ARVRInterface", "uninitialize");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ARVRInterface");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

bool arvrinterface::get_anchor_detection_is_enabled() const {
	return ___godot_icall_bool(___mb.mb_get_anchor_detection_is_enabled, (const object *) this);
}

int64_t arvrinterface::get_camera_feed_id() {
	return ___godot_icall_int(___mb.mb_get_camera_feed_id, (const object *) this);
}

int64_t arvrinterface::get_capabilities() const {
	return ___godot_icall_int(___mb.mb_get_capabilities, (const object *) this);
}

string arvrinterface::get_name() const {
	return ___godot_icall_String(___mb.mb_get_name, (const object *) this);
}

vector2 arvrinterface::get_render_targetsize() {
	return ___godot_icall_Vector2(___mb.mb_get_render_targetsize, (const object *) this);
}

arvrinterface::Tracking_status arvrinterface::get_tracking_status() const {
	return (arvrinterface::Tracking_status) ___godot_icall_int(___mb.mb_get_tracking_status, (const object *) this);
}

bool arvrinterface::initialize() {
	return ___godot_icall_bool(___mb.mb_initialize, (const object *) this);
}

bool arvrinterface::is_initialized() const {
	return ___godot_icall_bool(___mb.mb_is_initialized, (const object *) this);
}

bool arvrinterface::is_primary() {
	return ___godot_icall_bool(___mb.mb_is_primary, (const object *) this);
}

bool arvrinterface::is_stereo() {
	return ___godot_icall_bool(___mb.mb_is_stereo, (const object *) this);
}

void arvrinterface::set_anchor_detection_is_enabled(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_anchor_detection_is_enabled, (const object *) this, enable);
}

void arvrinterface::set_is_initialized(const bool initialized) {
	___godot_icall_void_bool(___mb.mb_set_is_initialized, (const object *) this, initialized);
}

void arvrinterface::set_is_primary(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_is_primary, (const object *) this, enable);
}

void arvrinterface::uninitialize() {
	___godot_icall_void(___mb.mb_uninitialize, (const object *) this);
}

}