#include "graph_edit.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "hbox_container.hpp"
#include "input_event.hpp"
#include "node.hpp"


namespace gd {


graph_edit::___method_bindings graph_edit::___mb = {};

void *graph_edit::_detail_class_tag = nullptr;

void graph_edit::___init_method_bindings() {
	___mb.mb__connections_layer_draw = gd::api->godot_method_bind_get_method("GraphEdit", "_connections_layer_draw");
	___mb.mb__graph_node_moved = gd::api->godot_method_bind_get_method("GraphEdit", "_graph_node_moved");
	___mb.mb__graph_node_raised = gd::api->godot_method_bind_get_method("GraphEdit", "_graph_node_raised");
	___mb.mb__graph_node_slot_updated = gd::api->godot_method_bind_get_method("GraphEdit", "_graph_node_slot_updated");
	___mb.mb__gui_input = gd::api->godot_method_bind_get_method("GraphEdit", "_gui_input");
	___mb.mb__minimap_draw = gd::api->godot_method_bind_get_method("GraphEdit", "_minimap_draw");
	___mb.mb__minimap_toggled = gd::api->godot_method_bind_get_method("GraphEdit", "_minimap_toggled");
	___mb.mb__scroll_moved = gd::api->godot_method_bind_get_method("GraphEdit", "_scroll_moved");
	___mb.mb__snap_toggled = gd::api->godot_method_bind_get_method("GraphEdit", "_snap_toggled");
	___mb.mb__snap_value_changed = gd::api->godot_method_bind_get_method("GraphEdit", "_snap_value_changed");
	___mb.mb__top_layer_draw = gd::api->godot_method_bind_get_method("GraphEdit", "_top_layer_draw");
	___mb.mb__top_layer_input = gd::api->godot_method_bind_get_method("GraphEdit", "_top_layer_input");
	___mb.mb__update_scroll_offset = gd::api->godot_method_bind_get_method("GraphEdit", "_update_scroll_offset");
	___mb.mb__zoom_minus = gd::api->godot_method_bind_get_method("GraphEdit", "_zoom_minus");
	___mb.mb__zoom_plus = gd::api->godot_method_bind_get_method("GraphEdit", "_zoom_plus");
	___mb.mb__zoom_reset = gd::api->godot_method_bind_get_method("GraphEdit", "_zoom_reset");
	___mb.mb_add_valid_connection_type = gd::api->godot_method_bind_get_method("GraphEdit", "add_valid_connection_type");
	___mb.mb_add_valid_left_disconnect_type = gd::api->godot_method_bind_get_method("GraphEdit", "add_valid_left_disconnect_type");
	___mb.mb_add_valid_right_disconnect_type = gd::api->godot_method_bind_get_method("GraphEdit", "add_valid_right_disconnect_type");
	___mb.mb_clear_connections = gd::api->godot_method_bind_get_method("GraphEdit", "clear_connections");
	___mb.mb_connect_node = gd::api->godot_method_bind_get_method("GraphEdit", "connect_node");
	___mb.mb_disconnect_node = gd::api->godot_method_bind_get_method("GraphEdit", "disconnect_node");
	___mb.mb_get_connection_list = gd::api->godot_method_bind_get_method("GraphEdit", "get_connection_list");
	___mb.mb_get_minimap_opacity = gd::api->godot_method_bind_get_method("GraphEdit", "get_minimap_opacity");
	___mb.mb_get_minimap_size = gd::api->godot_method_bind_get_method("GraphEdit", "get_minimap_size");
	___mb.mb_get_scroll_ofs = gd::api->godot_method_bind_get_method("GraphEdit", "get_scroll_ofs");
	___mb.mb_get_snap = gd::api->godot_method_bind_get_method("GraphEdit", "get_snap");
	___mb.mb_get_zoom = gd::api->godot_method_bind_get_method("GraphEdit", "get_zoom");
	___mb.mb_get_zoom_hbox = gd::api->godot_method_bind_get_method("GraphEdit", "get_zoom_hbox");
	___mb.mb_get_zoom_max = gd::api->godot_method_bind_get_method("GraphEdit", "get_zoom_max");
	___mb.mb_get_zoom_min = gd::api->godot_method_bind_get_method("GraphEdit", "get_zoom_min");
	___mb.mb_get_zoom_step = gd::api->godot_method_bind_get_method("GraphEdit", "get_zoom_step");
	___mb.mb_is_minimap_enabled = gd::api->godot_method_bind_get_method("GraphEdit", "is_minimap_enabled");
	___mb.mb_is_node_connected = gd::api->godot_method_bind_get_method("GraphEdit", "is_node_connected");
	___mb.mb_is_right_disconnects_enabled = gd::api->godot_method_bind_get_method("GraphEdit", "is_right_disconnects_enabled");
	___mb.mb_is_showing_zoom_label = gd::api->godot_method_bind_get_method("GraphEdit", "is_showing_zoom_label");
	___mb.mb_is_using_snap = gd::api->godot_method_bind_get_method("GraphEdit", "is_using_snap");
	___mb.mb_is_valid_connection_type = gd::api->godot_method_bind_get_method("GraphEdit", "is_valid_connection_type");
	___mb.mb_remove_valid_connection_type = gd::api->godot_method_bind_get_method("GraphEdit", "remove_valid_connection_type");
	___mb.mb_remove_valid_left_disconnect_type = gd::api->godot_method_bind_get_method("GraphEdit", "remove_valid_left_disconnect_type");
	___mb.mb_remove_valid_right_disconnect_type = gd::api->godot_method_bind_get_method("GraphEdit", "remove_valid_right_disconnect_type");
	___mb.mb_set_connection_activity = gd::api->godot_method_bind_get_method("GraphEdit", "set_connection_activity");
	___mb.mb_set_minimap_enabled = gd::api->godot_method_bind_get_method("GraphEdit", "set_minimap_enabled");
	___mb.mb_set_minimap_opacity = gd::api->godot_method_bind_get_method("GraphEdit", "set_minimap_opacity");
	___mb.mb_set_minimap_size = gd::api->godot_method_bind_get_method("GraphEdit", "set_minimap_size");
	___mb.mb_set_right_disconnects = gd::api->godot_method_bind_get_method("GraphEdit", "set_right_disconnects");
	___mb.mb_set_scroll_ofs = gd::api->godot_method_bind_get_method("GraphEdit", "set_scroll_ofs");
	___mb.mb_set_selected = gd::api->godot_method_bind_get_method("GraphEdit", "set_selected");
	___mb.mb_set_show_zoom_label = gd::api->godot_method_bind_get_method("GraphEdit", "set_show_zoom_label");
	___mb.mb_set_snap = gd::api->godot_method_bind_get_method("GraphEdit", "set_snap");
	___mb.mb_set_use_snap = gd::api->godot_method_bind_get_method("GraphEdit", "set_use_snap");
	___mb.mb_set_zoom = gd::api->godot_method_bind_get_method("GraphEdit", "set_zoom");
	___mb.mb_set_zoom_max = gd::api->godot_method_bind_get_method("GraphEdit", "set_zoom_max");
	___mb.mb_set_zoom_min = gd::api->godot_method_bind_get_method("GraphEdit", "set_zoom_min");
	___mb.mb_set_zoom_step = gd::api->godot_method_bind_get_method("GraphEdit", "set_zoom_step");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "GraphEdit");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

graph_edit *graph_edit::_new()
{
	return (graph_edit *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"GraphEdit")());
}
void graph_edit::_connections_layer_draw() {
	___godot_icall_void(___mb.mb__connections_layer_draw, (const object *) this);
}

void graph_edit::_graph_node_moved(const node *arg0) {
	___godot_icall_void_Object(___mb.mb__graph_node_moved, (const object *) this, arg0);
}

void graph_edit::_graph_node_raised(const node *arg0) {
	___godot_icall_void_Object(___mb.mb__graph_node_raised, (const object *) this, arg0);
}

void graph_edit::_graph_node_slot_updated(const int64_t arg0, const node *arg1) {
	___godot_icall_void_int_Object(___mb.mb__graph_node_slot_updated, (const object *) this, arg0, arg1);
}

void graph_edit::_gui_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__gui_input, (const object *) this, arg0.ptr());
}

void graph_edit::_minimap_draw() {
	___godot_icall_void(___mb.mb__minimap_draw, (const object *) this);
}

void graph_edit::_minimap_toggled() {
	___godot_icall_void(___mb.mb__minimap_toggled, (const object *) this);
}

void graph_edit::_scroll_moved(const real_t arg0) {
	___godot_icall_void_float(___mb.mb__scroll_moved, (const object *) this, arg0);
}

void graph_edit::_snap_toggled() {
	___godot_icall_void(___mb.mb__snap_toggled, (const object *) this);
}

void graph_edit::_snap_value_changed(const real_t arg0) {
	___godot_icall_void_float(___mb.mb__snap_value_changed, (const object *) this, arg0);
}

void graph_edit::_top_layer_draw() {
	___godot_icall_void(___mb.mb__top_layer_draw, (const object *) this);
}

void graph_edit::_top_layer_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__top_layer_input, (const object *) this, arg0.ptr());
}

void graph_edit::_update_scroll_offset() {
	___godot_icall_void(___mb.mb__update_scroll_offset, (const object *) this);
}

void graph_edit::_zoom_minus() {
	___godot_icall_void(___mb.mb__zoom_minus, (const object *) this);
}

void graph_edit::_zoom_plus() {
	___godot_icall_void(___mb.mb__zoom_plus, (const object *) this);
}

void graph_edit::_zoom_reset() {
	___godot_icall_void(___mb.mb__zoom_reset, (const object *) this);
}

void graph_edit::add_valid_connection_type(const int64_t from_type, const int64_t to_type) {
	___godot_icall_void_int_int(___mb.mb_add_valid_connection_type, (const object *) this, from_type, to_type);
}

void graph_edit::add_valid_left_disconnect_type(const int64_t type) {
	___godot_icall_void_int(___mb.mb_add_valid_left_disconnect_type, (const object *) this, type);
}

void graph_edit::add_valid_right_disconnect_type(const int64_t type) {
	___godot_icall_void_int(___mb.mb_add_valid_right_disconnect_type, (const object *) this, type);
}

void graph_edit::clear_connections() {
	___godot_icall_void(___mb.mb_clear_connections, (const object *) this);
}

error graph_edit::connect_node(const string from, const int64_t from_port, const string to, const int64_t to_port) {
	return (error) ___godot_icall_int_String_int_String_int(___mb.mb_connect_node, (const object *) this, from, from_port, to, to_port);
}

void graph_edit::disconnect_node(const string from, const int64_t from_port, const string to, const int64_t to_port) {
	___godot_icall_void_String_int_String_int(___mb.mb_disconnect_node, (const object *) this, from, from_port, to, to_port);
}

array graph_edit::get_connection_list() const {
	return ___godot_icall_Array(___mb.mb_get_connection_list, (const object *) this);
}

real_t graph_edit::get_minimap_opacity() const {
	return ___godot_icall_float(___mb.mb_get_minimap_opacity, (const object *) this);
}

vector2 graph_edit::get_minimap_size() const {
	return ___godot_icall_Vector2(___mb.mb_get_minimap_size, (const object *) this);
}

vector2 graph_edit::get_scroll_ofs() const {
	return ___godot_icall_Vector2(___mb.mb_get_scroll_ofs, (const object *) this);
}

int64_t graph_edit::get_snap() const {
	return ___godot_icall_int(___mb.mb_get_snap, (const object *) this);
}

real_t graph_edit::get_zoom() const {
	return ___godot_icall_float(___mb.mb_get_zoom, (const object *) this);
}

hbox_container *graph_edit::get_zoom_hbox() {
	return (hbox_container *) ___godot_icall_Object(___mb.mb_get_zoom_hbox, (const object *) this);
}

real_t graph_edit::get_zoom_max() const {
	return ___godot_icall_float(___mb.mb_get_zoom_max, (const object *) this);
}

real_t graph_edit::get_zoom_min() const {
	return ___godot_icall_float(___mb.mb_get_zoom_min, (const object *) this);
}

real_t graph_edit::get_zoom_step() const {
	return ___godot_icall_float(___mb.mb_get_zoom_step, (const object *) this);
}

bool graph_edit::is_minimap_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_minimap_enabled, (const object *) this);
}

bool graph_edit::is_node_connected(const string from, const int64_t from_port, const string to, const int64_t to_port) {
	return ___godot_icall_bool_String_int_String_int(___mb.mb_is_node_connected, (const object *) this, from, from_port, to, to_port);
}

bool graph_edit::is_right_disconnects_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_right_disconnects_enabled, (const object *) this);
}

bool graph_edit::is_showing_zoom_label() const {
	return ___godot_icall_bool(___mb.mb_is_showing_zoom_label, (const object *) this);
}

bool graph_edit::is_using_snap() const {
	return ___godot_icall_bool(___mb.mb_is_using_snap, (const object *) this);
}

bool graph_edit::is_valid_connection_type(const int64_t from_type, const int64_t to_type) const {
	return ___godot_icall_bool_int_int(___mb.mb_is_valid_connection_type, (const object *) this, from_type, to_type);
}

void graph_edit::remove_valid_connection_type(const int64_t from_type, const int64_t to_type) {
	___godot_icall_void_int_int(___mb.mb_remove_valid_connection_type, (const object *) this, from_type, to_type);
}

void graph_edit::remove_valid_left_disconnect_type(const int64_t type) {
	___godot_icall_void_int(___mb.mb_remove_valid_left_disconnect_type, (const object *) this, type);
}

void graph_edit::remove_valid_right_disconnect_type(const int64_t type) {
	___godot_icall_void_int(___mb.mb_remove_valid_right_disconnect_type, (const object *) this, type);
}

void graph_edit::set_connection_activity(const string from, const int64_t from_port, const string to, const int64_t to_port, const real_t amount) {
	___godot_icall_void_String_int_String_int_float(___mb.mb_set_connection_activity, (const object *) this, from, from_port, to, to_port, amount);
}

void graph_edit::set_minimap_enabled(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_minimap_enabled, (const object *) this, enable);
}

void graph_edit::set_minimap_opacity(const real_t p_opacity) {
	___godot_icall_void_float(___mb.mb_set_minimap_opacity, (const object *) this, p_opacity);
}

void graph_edit::set_minimap_size(const vector2 p_size) {
	___godot_icall_void_Vector2(___mb.mb_set_minimap_size, (const object *) this, p_size);
}

void graph_edit::set_right_disconnects(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_right_disconnects, (const object *) this, enable);
}

void graph_edit::set_scroll_ofs(const vector2 ofs) {
	___godot_icall_void_Vector2(___mb.mb_set_scroll_ofs, (const object *) this, ofs);
}

void graph_edit::set_selected(const node *node_) {
	___godot_icall_void_Object(___mb.mb_set_selected, (const object *) this, node_);
}

void graph_edit::set_show_zoom_label(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_show_zoom_label, (const object *) this, enable);
}

void graph_edit::set_snap(const int64_t pixels) {
	___godot_icall_void_int(___mb.mb_set_snap, (const object *) this, pixels);
}

void graph_edit::set_use_snap(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_use_snap, (const object *) this, enable);
}

void graph_edit::set_zoom(const real_t p_zoom) {
	___godot_icall_void_float(___mb.mb_set_zoom, (const object *) this, p_zoom);
}

void graph_edit::set_zoom_max(const real_t zoom_max) {
	___godot_icall_void_float(___mb.mb_set_zoom_max, (const object *) this, zoom_max);
}

void graph_edit::set_zoom_min(const real_t zoom_min) {
	___godot_icall_void_float(___mb.mb_set_zoom_min, (const object *) this, zoom_min);
}

void graph_edit::set_zoom_step(const real_t zoom_step) {
	___godot_icall_void_float(___mb.mb_set_zoom_step, (const object *) this, zoom_step);
}

}