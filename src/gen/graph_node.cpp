#include "graph_node.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "input_event.hpp"
#include "texture.hpp"


namespace gd {


graph_node::___method_bindings graph_node::___mb = {};

void *graph_node::_detail_class_tag = nullptr;

void graph_node::___init_method_bindings() {
	___mb.mb__gui_input = gd::api->godot_method_bind_get_method("GraphNode", "_gui_input");
	___mb.mb_clear_all_slots = gd::api->godot_method_bind_get_method("GraphNode", "clear_all_slots");
	___mb.mb_clear_slot = gd::api->godot_method_bind_get_method("GraphNode", "clear_slot");
	___mb.mb_get_connection_input_color = gd::api->godot_method_bind_get_method("GraphNode", "get_connection_input_color");
	___mb.mb_get_connection_input_count = gd::api->godot_method_bind_get_method("GraphNode", "get_connection_input_count");
	___mb.mb_get_connection_input_position = gd::api->godot_method_bind_get_method("GraphNode", "get_connection_input_position");
	___mb.mb_get_connection_input_type = gd::api->godot_method_bind_get_method("GraphNode", "get_connection_input_type");
	___mb.mb_get_connection_output_color = gd::api->godot_method_bind_get_method("GraphNode", "get_connection_output_color");
	___mb.mb_get_connection_output_count = gd::api->godot_method_bind_get_method("GraphNode", "get_connection_output_count");
	___mb.mb_get_connection_output_position = gd::api->godot_method_bind_get_method("GraphNode", "get_connection_output_position");
	___mb.mb_get_connection_output_type = gd::api->godot_method_bind_get_method("GraphNode", "get_connection_output_type");
	___mb.mb_get_offset = gd::api->godot_method_bind_get_method("GraphNode", "get_offset");
	___mb.mb_get_overlay = gd::api->godot_method_bind_get_method("GraphNode", "get_overlay");
	___mb.mb_get_slot_color_left = gd::api->godot_method_bind_get_method("GraphNode", "get_slot_color_left");
	___mb.mb_get_slot_color_right = gd::api->godot_method_bind_get_method("GraphNode", "get_slot_color_right");
	___mb.mb_get_slot_type_left = gd::api->godot_method_bind_get_method("GraphNode", "get_slot_type_left");
	___mb.mb_get_slot_type_right = gd::api->godot_method_bind_get_method("GraphNode", "get_slot_type_right");
	___mb.mb_get_title = gd::api->godot_method_bind_get_method("GraphNode", "get_title");
	___mb.mb_is_close_button_visible = gd::api->godot_method_bind_get_method("GraphNode", "is_close_button_visible");
	___mb.mb_is_comment = gd::api->godot_method_bind_get_method("GraphNode", "is_comment");
	___mb.mb_is_resizable = gd::api->godot_method_bind_get_method("GraphNode", "is_resizable");
	___mb.mb_is_selected = gd::api->godot_method_bind_get_method("GraphNode", "is_selected");
	___mb.mb_is_slot_enabled_left = gd::api->godot_method_bind_get_method("GraphNode", "is_slot_enabled_left");
	___mb.mb_is_slot_enabled_right = gd::api->godot_method_bind_get_method("GraphNode", "is_slot_enabled_right");
	___mb.mb_set_comment = gd::api->godot_method_bind_get_method("GraphNode", "set_comment");
	___mb.mb_set_offset = gd::api->godot_method_bind_get_method("GraphNode", "set_offset");
	___mb.mb_set_overlay = gd::api->godot_method_bind_get_method("GraphNode", "set_overlay");
	___mb.mb_set_resizable = gd::api->godot_method_bind_get_method("GraphNode", "set_resizable");
	___mb.mb_set_selected = gd::api->godot_method_bind_get_method("GraphNode", "set_selected");
	___mb.mb_set_show_close_button = gd::api->godot_method_bind_get_method("GraphNode", "set_show_close_button");
	___mb.mb_set_slot = gd::api->godot_method_bind_get_method("GraphNode", "set_slot");
	___mb.mb_set_slot_color_left = gd::api->godot_method_bind_get_method("GraphNode", "set_slot_color_left");
	___mb.mb_set_slot_color_right = gd::api->godot_method_bind_get_method("GraphNode", "set_slot_color_right");
	___mb.mb_set_slot_enabled_left = gd::api->godot_method_bind_get_method("GraphNode", "set_slot_enabled_left");
	___mb.mb_set_slot_enabled_right = gd::api->godot_method_bind_get_method("GraphNode", "set_slot_enabled_right");
	___mb.mb_set_slot_type_left = gd::api->godot_method_bind_get_method("GraphNode", "set_slot_type_left");
	___mb.mb_set_slot_type_right = gd::api->godot_method_bind_get_method("GraphNode", "set_slot_type_right");
	___mb.mb_set_title = gd::api->godot_method_bind_get_method("GraphNode", "set_title");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "GraphNode");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

graph_node *graph_node::_new()
{
	return (graph_node *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"GraphNode")());
}
void graph_node::_gui_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__gui_input, (const object *) this, arg0.ptr());
}

void graph_node::clear_all_slots() {
	___godot_icall_void(___mb.mb_clear_all_slots, (const object *) this);
}

void graph_node::clear_slot(const int64_t idx) {
	___godot_icall_void_int(___mb.mb_clear_slot, (const object *) this, idx);
}

color graph_node::get_connection_input_color(const int64_t idx) {
	return ___godot_icall_Color_int(___mb.mb_get_connection_input_color, (const object *) this, idx);
}

int64_t graph_node::get_connection_input_count() {
	return ___godot_icall_int(___mb.mb_get_connection_input_count, (const object *) this);
}

vector2 graph_node::get_connection_input_position(const int64_t idx) {
	return ___godot_icall_Vector2_int(___mb.mb_get_connection_input_position, (const object *) this, idx);
}

int64_t graph_node::get_connection_input_type(const int64_t idx) {
	return ___godot_icall_int_int(___mb.mb_get_connection_input_type, (const object *) this, idx);
}

color graph_node::get_connection_output_color(const int64_t idx) {
	return ___godot_icall_Color_int(___mb.mb_get_connection_output_color, (const object *) this, idx);
}

int64_t graph_node::get_connection_output_count() {
	return ___godot_icall_int(___mb.mb_get_connection_output_count, (const object *) this);
}

vector2 graph_node::get_connection_output_position(const int64_t idx) {
	return ___godot_icall_Vector2_int(___mb.mb_get_connection_output_position, (const object *) this, idx);
}

int64_t graph_node::get_connection_output_type(const int64_t idx) {
	return ___godot_icall_int_int(___mb.mb_get_connection_output_type, (const object *) this, idx);
}

vector2 graph_node::get_offset() const {
	return ___godot_icall_Vector2(___mb.mb_get_offset, (const object *) this);
}

graph_node::Overlay graph_node::get_overlay() const {
	return (graph_node::Overlay) ___godot_icall_int(___mb.mb_get_overlay, (const object *) this);
}

color graph_node::get_slot_color_left(const int64_t idx) const {
	return ___godot_icall_Color_int(___mb.mb_get_slot_color_left, (const object *) this, idx);
}

color graph_node::get_slot_color_right(const int64_t idx) const {
	return ___godot_icall_Color_int(___mb.mb_get_slot_color_right, (const object *) this, idx);
}

int64_t graph_node::get_slot_type_left(const int64_t idx) const {
	return ___godot_icall_int_int(___mb.mb_get_slot_type_left, (const object *) this, idx);
}

int64_t graph_node::get_slot_type_right(const int64_t idx) const {
	return ___godot_icall_int_int(___mb.mb_get_slot_type_right, (const object *) this, idx);
}

string graph_node::get_title() const {
	return ___godot_icall_String(___mb.mb_get_title, (const object *) this);
}

bool graph_node::is_close_button_visible() const {
	return ___godot_icall_bool(___mb.mb_is_close_button_visible, (const object *) this);
}

bool graph_node::is_comment() const {
	return ___godot_icall_bool(___mb.mb_is_comment, (const object *) this);
}

bool graph_node::is_resizable() const {
	return ___godot_icall_bool(___mb.mb_is_resizable, (const object *) this);
}

bool graph_node::is_selected() {
	return ___godot_icall_bool(___mb.mb_is_selected, (const object *) this);
}

bool graph_node::is_slot_enabled_left(const int64_t idx) const {
	return ___godot_icall_bool_int(___mb.mb_is_slot_enabled_left, (const object *) this, idx);
}

bool graph_node::is_slot_enabled_right(const int64_t idx) const {
	return ___godot_icall_bool_int(___mb.mb_is_slot_enabled_right, (const object *) this, idx);
}

void graph_node::set_comment(const bool comment) {
	___godot_icall_void_bool(___mb.mb_set_comment, (const object *) this, comment);
}

void graph_node::set_offset(const vector2 offset) {
	___godot_icall_void_Vector2(___mb.mb_set_offset, (const object *) this, offset);
}

void graph_node::set_overlay(const int64_t overlay) {
	___godot_icall_void_int(___mb.mb_set_overlay, (const object *) this, overlay);
}

void graph_node::set_resizable(const bool resizable) {
	___godot_icall_void_bool(___mb.mb_set_resizable, (const object *) this, resizable);
}

void graph_node::set_selected(const bool selected) {
	___godot_icall_void_bool(___mb.mb_set_selected, (const object *) this, selected);
}

void graph_node::set_show_close_button(const bool show) {
	___godot_icall_void_bool(___mb.mb_set_show_close_button, (const object *) this, show);
}

void graph_node::set_slot(const int64_t idx, const bool enable_left, const int64_t type_left, const color color_left, const bool enable_right, const int64_t type_right, const color color_right, const ref<texture> custom_left, const ref<texture> custom_right) {
	___godot_icall_void_int_bool_int_Color_bool_int_Color_Object_Object(___mb.mb_set_slot, (const object *) this, idx, enable_left, type_left, color_left, enable_right, type_right, color_right, custom_left.ptr(), custom_right.ptr());
}

void graph_node::set_slot_color_left(const int64_t idx, const color color_left) {
	___godot_icall_void_int_Color(___mb.mb_set_slot_color_left, (const object *) this, idx, color_left);
}

void graph_node::set_slot_color_right(const int64_t idx, const color color_right) {
	___godot_icall_void_int_Color(___mb.mb_set_slot_color_right, (const object *) this, idx, color_right);
}

void graph_node::set_slot_enabled_left(const int64_t idx, const bool enable_left) {
	___godot_icall_void_int_bool(___mb.mb_set_slot_enabled_left, (const object *) this, idx, enable_left);
}

void graph_node::set_slot_enabled_right(const int64_t idx, const bool enable_right) {
	___godot_icall_void_int_bool(___mb.mb_set_slot_enabled_right, (const object *) this, idx, enable_right);
}

void graph_node::set_slot_type_left(const int64_t idx, const int64_t type_left) {
	___godot_icall_void_int_int(___mb.mb_set_slot_type_left, (const object *) this, idx, type_left);
}

void graph_node::set_slot_type_right(const int64_t idx, const int64_t type_right) {
	___godot_icall_void_int_int(___mb.mb_set_slot_type_right, (const object *) this, idx, type_right);
}

void graph_node::set_title(const string title) {
	___godot_icall_void_String(___mb.mb_set_title, (const object *) this, title);
}

}