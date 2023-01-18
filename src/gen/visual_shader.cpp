#include "visual_shader.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "visual_shader_node.hpp"


namespace gd {


visual_shader::___method_bindings visual_shader::___mb = {};

void *visual_shader::_detail_class_tag = nullptr;

void visual_shader::___init_method_bindings() {
	___mb.mb__input_type_changed = gd::api->godot_method_bind_get_method("VisualShader", "_input_type_changed");
	___mb.mb__queue_update = gd::api->godot_method_bind_get_method("VisualShader", "_queue_update");
	___mb.mb__update_shader = gd::api->godot_method_bind_get_method("VisualShader", "_update_shader");
	___mb.mb_add_node = gd::api->godot_method_bind_get_method("VisualShader", "add_node");
	___mb.mb_can_connect_nodes = gd::api->godot_method_bind_get_method("VisualShader", "can_connect_nodes");
	___mb.mb_connect_nodes = gd::api->godot_method_bind_get_method("VisualShader", "connect_nodes");
	___mb.mb_connect_nodes_forced = gd::api->godot_method_bind_get_method("VisualShader", "connect_nodes_forced");
	___mb.mb_disconnect_nodes = gd::api->godot_method_bind_get_method("VisualShader", "disconnect_nodes");
	___mb.mb_get_graph_offset = gd::api->godot_method_bind_get_method("VisualShader", "get_graph_offset");
	___mb.mb_get_node = gd::api->godot_method_bind_get_method("VisualShader", "get_node");
	___mb.mb_get_node_connections = gd::api->godot_method_bind_get_method("VisualShader", "get_node_connections");
	___mb.mb_get_node_list = gd::api->godot_method_bind_get_method("VisualShader", "get_node_list");
	___mb.mb_get_node_position = gd::api->godot_method_bind_get_method("VisualShader", "get_node_position");
	___mb.mb_get_valid_node_id = gd::api->godot_method_bind_get_method("VisualShader", "get_valid_node_id");
	___mb.mb_is_node_connection = gd::api->godot_method_bind_get_method("VisualShader", "is_node_connection");
	___mb.mb_remove_node = gd::api->godot_method_bind_get_method("VisualShader", "remove_node");
	___mb.mb_set_graph_offset = gd::api->godot_method_bind_get_method("VisualShader", "set_graph_offset");
	___mb.mb_set_mode = gd::api->godot_method_bind_get_method("VisualShader", "set_mode");
	___mb.mb_set_node_position = gd::api->godot_method_bind_get_method("VisualShader", "set_node_position");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualShader");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_shader *visual_shader::_new()
{
	return (visual_shader *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualShader")());
}
void visual_shader::_input_type_changed(const int64_t arg0, const int64_t arg1) {
	___godot_icall_void_int_int(___mb.mb__input_type_changed, (const object *) this, arg0, arg1);
}

void visual_shader::_queue_update() {
	___godot_icall_void(___mb.mb__queue_update, (const object *) this);
}

void visual_shader::_update_shader() const {
	___godot_icall_void(___mb.mb__update_shader, (const object *) this);
}

void visual_shader::add_node(const int64_t type, const ref<visual_shader_node> node_, const vector2 position, const int64_t id) {
	___godot_icall_void_int_Object_Vector2_int(___mb.mb_add_node, (const object *) this, type, node_.ptr(), position, id);
}

bool visual_shader::can_connect_nodes(const int64_t type, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port) const {
	return ___godot_icall_bool_int_int_int_int_int(___mb.mb_can_connect_nodes, (const object *) this, type, from_node, from_port, to_node, to_port);
}

error visual_shader::connect_nodes(const int64_t type, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port) {
	return (error) ___godot_icall_int_int_int_int_int_int(___mb.mb_connect_nodes, (const object *) this, type, from_node, from_port, to_node, to_port);
}

void visual_shader::connect_nodes_forced(const int64_t type, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port) {
	___godot_icall_void_int_int_int_int_int(___mb.mb_connect_nodes_forced, (const object *) this, type, from_node, from_port, to_node, to_port);
}

void visual_shader::disconnect_nodes(const int64_t type, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port) {
	___godot_icall_void_int_int_int_int_int(___mb.mb_disconnect_nodes, (const object *) this, type, from_node, from_port, to_node, to_port);
}

vector2 visual_shader::get_graph_offset() const {
	return ___godot_icall_Vector2(___mb.mb_get_graph_offset, (const object *) this);
}

ref<visual_shader_node> visual_shader::get_node(const int64_t type, const int64_t id) const {
	return ref<visual_shader_node>::__internal_constructor(___godot_icall_Object_int_int(___mb.mb_get_node, (const object *) this, type, id));
}

array visual_shader::get_node_connections(const int64_t type) const {
	return ___godot_icall_Array_int(___mb.mb_get_node_connections, (const object *) this, type);
}

pool_int_array visual_shader::get_node_list(const int64_t type) const {
	return ___godot_icall_PoolIntArray_int(___mb.mb_get_node_list, (const object *) this, type);
}

vector2 visual_shader::get_node_position(const int64_t type, const int64_t id) const {
	return ___godot_icall_Vector2_int_int(___mb.mb_get_node_position, (const object *) this, type, id);
}

int64_t visual_shader::get_valid_node_id(const int64_t type) const {
	return ___godot_icall_int_int(___mb.mb_get_valid_node_id, (const object *) this, type);
}

bool visual_shader::is_node_connection(const int64_t type, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port) const {
	return ___godot_icall_bool_int_int_int_int_int(___mb.mb_is_node_connection, (const object *) this, type, from_node, from_port, to_node, to_port);
}

void visual_shader::remove_node(const int64_t type, const int64_t id) {
	___godot_icall_void_int_int(___mb.mb_remove_node, (const object *) this, type, id);
}

void visual_shader::set_graph_offset(const vector2 offset) {
	___godot_icall_void_Vector2(___mb.mb_set_graph_offset, (const object *) this, offset);
}

void visual_shader::set_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_mode, (const object *) this, mode);
}

void visual_shader::set_node_position(const int64_t type, const int64_t id, const vector2 position) {
	___godot_icall_void_int_int_Vector2(___mb.mb_set_node_position, (const object *) this, type, id, position);
}

}