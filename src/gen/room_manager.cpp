#include "room_manager.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


room_manager::___method_bindings room_manager::___mb = {};

void *room_manager::_detail_class_tag = nullptr;

void room_manager::___init_method_bindings() {
	___mb.mb_get_debug_sprawl = gd::api->godot_method_bind_get_method("RoomManager", "get_debug_sprawl");
	___mb.mb_get_default_portal_margin = gd::api->godot_method_bind_get_method("RoomManager", "get_default_portal_margin");
	___mb.mb_get_gameplay_monitor_enabled = gd::api->godot_method_bind_get_method("RoomManager", "get_gameplay_monitor_enabled");
	___mb.mb_get_merge_meshes = gd::api->godot_method_bind_get_method("RoomManager", "get_merge_meshes");
	___mb.mb_get_overlap_warning_threshold = gd::api->godot_method_bind_get_method("RoomManager", "get_overlap_warning_threshold");
	___mb.mb_get_portal_depth_limit = gd::api->godot_method_bind_get_method("RoomManager", "get_portal_depth_limit");
	___mb.mb_get_preview_camera_path = gd::api->godot_method_bind_get_method("RoomManager", "get_preview_camera_path");
	___mb.mb_get_pvs_mode = gd::api->godot_method_bind_get_method("RoomManager", "get_pvs_mode");
	___mb.mb_get_roaming_expansion_margin = gd::api->godot_method_bind_get_method("RoomManager", "get_roaming_expansion_margin");
	___mb.mb_get_room_simplify = gd::api->godot_method_bind_get_method("RoomManager", "get_room_simplify");
	___mb.mb_get_roomlist_path = gd::api->godot_method_bind_get_method("RoomManager", "get_roomlist_path");
	___mb.mb_get_show_margins = gd::api->godot_method_bind_get_method("RoomManager", "get_show_margins");
	___mb.mb_get_use_secondary_pvs = gd::api->godot_method_bind_get_method("RoomManager", "get_use_secondary_pvs");
	___mb.mb_rooms_clear = gd::api->godot_method_bind_get_method("RoomManager", "rooms_clear");
	___mb.mb_rooms_convert = gd::api->godot_method_bind_get_method("RoomManager", "rooms_convert");
	___mb.mb_rooms_get_active = gd::api->godot_method_bind_get_method("RoomManager", "rooms_get_active");
	___mb.mb_rooms_set_active = gd::api->godot_method_bind_get_method("RoomManager", "rooms_set_active");
	___mb.mb_set_debug_sprawl = gd::api->godot_method_bind_get_method("RoomManager", "set_debug_sprawl");
	___mb.mb_set_default_portal_margin = gd::api->godot_method_bind_get_method("RoomManager", "set_default_portal_margin");
	___mb.mb_set_gameplay_monitor_enabled = gd::api->godot_method_bind_get_method("RoomManager", "set_gameplay_monitor_enabled");
	___mb.mb_set_merge_meshes = gd::api->godot_method_bind_get_method("RoomManager", "set_merge_meshes");
	___mb.mb_set_overlap_warning_threshold = gd::api->godot_method_bind_get_method("RoomManager", "set_overlap_warning_threshold");
	___mb.mb_set_portal_depth_limit = gd::api->godot_method_bind_get_method("RoomManager", "set_portal_depth_limit");
	___mb.mb_set_preview_camera_path = gd::api->godot_method_bind_get_method("RoomManager", "set_preview_camera_path");
	___mb.mb_set_pvs_mode = gd::api->godot_method_bind_get_method("RoomManager", "set_pvs_mode");
	___mb.mb_set_roaming_expansion_margin = gd::api->godot_method_bind_get_method("RoomManager", "set_roaming_expansion_margin");
	___mb.mb_set_room_simplify = gd::api->godot_method_bind_get_method("RoomManager", "set_room_simplify");
	___mb.mb_set_roomlist_path = gd::api->godot_method_bind_get_method("RoomManager", "set_roomlist_path");
	___mb.mb_set_show_margins = gd::api->godot_method_bind_get_method("RoomManager", "set_show_margins");
	___mb.mb_set_use_secondary_pvs = gd::api->godot_method_bind_get_method("RoomManager", "set_use_secondary_pvs");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "RoomManager");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

room_manager *room_manager::_new()
{
	return (room_manager *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"RoomManager")());
}
bool room_manager::get_debug_sprawl() const {
	return ___godot_icall_bool(___mb.mb_get_debug_sprawl, (const object *) this);
}

real_t room_manager::get_default_portal_margin() const {
	return ___godot_icall_float(___mb.mb_get_default_portal_margin, (const object *) this);
}

bool room_manager::get_gameplay_monitor_enabled() const {
	return ___godot_icall_bool(___mb.mb_get_gameplay_monitor_enabled, (const object *) this);
}

bool room_manager::get_merge_meshes() const {
	return ___godot_icall_bool(___mb.mb_get_merge_meshes, (const object *) this);
}

int64_t room_manager::get_overlap_warning_threshold() const {
	return ___godot_icall_int(___mb.mb_get_overlap_warning_threshold, (const object *) this);
}

int64_t room_manager::get_portal_depth_limit() const {
	return ___godot_icall_int(___mb.mb_get_portal_depth_limit, (const object *) this);
}

node_path room_manager::get_preview_camera_path() const {
	return ___godot_icall_NodePath(___mb.mb_get_preview_camera_path, (const object *) this);
}

room_manager::PVSMode room_manager::get_pvs_mode() const {
	return (room_manager::PVSMode) ___godot_icall_int(___mb.mb_get_pvs_mode, (const object *) this);
}

real_t room_manager::get_roaming_expansion_margin() const {
	return ___godot_icall_float(___mb.mb_get_roaming_expansion_margin, (const object *) this);
}

real_t room_manager::get_room_simplify() const {
	return ___godot_icall_float(___mb.mb_get_room_simplify, (const object *) this);
}

node_path room_manager::get_roomlist_path() const {
	return ___godot_icall_NodePath(___mb.mb_get_roomlist_path, (const object *) this);
}

bool room_manager::get_show_margins() const {
	return ___godot_icall_bool(___mb.mb_get_show_margins, (const object *) this);
}

bool room_manager::get_use_secondary_pvs() const {
	return ___godot_icall_bool(___mb.mb_get_use_secondary_pvs, (const object *) this);
}

void room_manager::rooms_clear() {
	___godot_icall_void(___mb.mb_rooms_clear, (const object *) this);
}

void room_manager::rooms_convert() {
	___godot_icall_void(___mb.mb_rooms_convert, (const object *) this);
}

bool room_manager::rooms_get_active() const {
	return ___godot_icall_bool(___mb.mb_rooms_get_active, (const object *) this);
}

void room_manager::rooms_set_active(const bool active) {
	___godot_icall_void_bool(___mb.mb_rooms_set_active, (const object *) this, active);
}

void room_manager::set_debug_sprawl(const bool debug_sprawl) {
	___godot_icall_void_bool(___mb.mb_set_debug_sprawl, (const object *) this, debug_sprawl);
}

void room_manager::set_default_portal_margin(const real_t default_portal_margin) {
	___godot_icall_void_float(___mb.mb_set_default_portal_margin, (const object *) this, default_portal_margin);
}

void room_manager::set_gameplay_monitor_enabled(const bool gameplay_monitor) {
	___godot_icall_void_bool(___mb.mb_set_gameplay_monitor_enabled, (const object *) this, gameplay_monitor);
}

void room_manager::set_merge_meshes(const bool merge_meshes) {
	___godot_icall_void_bool(___mb.mb_set_merge_meshes, (const object *) this, merge_meshes);
}

void room_manager::set_overlap_warning_threshold(const int64_t overlap_warning_threshold) {
	___godot_icall_void_int(___mb.mb_set_overlap_warning_threshold, (const object *) this, overlap_warning_threshold);
}

void room_manager::set_portal_depth_limit(const int64_t portal_depth_limit) {
	___godot_icall_void_int(___mb.mb_set_portal_depth_limit, (const object *) this, portal_depth_limit);
}

void room_manager::set_preview_camera_path(const node_path preview_camera) {
	___godot_icall_void_NodePath(___mb.mb_set_preview_camera_path, (const object *) this, preview_camera);
}

void room_manager::set_pvs_mode(const int64_t pvs_mode) {
	___godot_icall_void_int(___mb.mb_set_pvs_mode, (const object *) this, pvs_mode);
}

void room_manager::set_roaming_expansion_margin(const real_t roaming_expansion_margin) {
	___godot_icall_void_float(___mb.mb_set_roaming_expansion_margin, (const object *) this, roaming_expansion_margin);
}

void room_manager::set_room_simplify(const real_t room_simplify) {
	___godot_icall_void_float(___mb.mb_set_room_simplify, (const object *) this, room_simplify);
}

void room_manager::set_roomlist_path(const node_path p_path) {
	___godot_icall_void_NodePath(___mb.mb_set_roomlist_path, (const object *) this, p_path);
}

void room_manager::set_show_margins(const bool show_margins) {
	___godot_icall_void_bool(___mb.mb_set_show_margins, (const object *) this, show_margins);
}

void room_manager::set_use_secondary_pvs(const bool use_secondary_pvs) {
	___godot_icall_void_bool(___mb.mb_set_use_secondary_pvs, (const object *) this, use_secondary_pvs);
}

}