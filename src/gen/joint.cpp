#include "joint.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


joint::___method_bindings joint::___mb = {};

void *joint::_detail_class_tag = nullptr;

void joint::___init_method_bindings() {
	___mb.mb__body_exit_tree = gd::api->godot_method_bind_get_method("Joint", "_body_exit_tree");
	___mb.mb_get_exclude_nodes_from_collision = gd::api->godot_method_bind_get_method("Joint", "get_exclude_nodes_from_collision");
	___mb.mb_get_node_a = gd::api->godot_method_bind_get_method("Joint", "get_node_a");
	___mb.mb_get_node_b = gd::api->godot_method_bind_get_method("Joint", "get_node_b");
	___mb.mb_get_solver_priority = gd::api->godot_method_bind_get_method("Joint", "get_solver_priority");
	___mb.mb_set_exclude_nodes_from_collision = gd::api->godot_method_bind_get_method("Joint", "set_exclude_nodes_from_collision");
	___mb.mb_set_node_a = gd::api->godot_method_bind_get_method("Joint", "set_node_a");
	___mb.mb_set_node_b = gd::api->godot_method_bind_get_method("Joint", "set_node_b");
	___mb.mb_set_solver_priority = gd::api->godot_method_bind_get_method("Joint", "set_solver_priority");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Joint");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void joint::_body_exit_tree() {
	___godot_icall_void(___mb.mb__body_exit_tree, (const object *) this);
}

bool joint::get_exclude_nodes_from_collision() const {
	return ___godot_icall_bool(___mb.mb_get_exclude_nodes_from_collision, (const object *) this);
}

node_path joint::get_node_a() const {
	return ___godot_icall_NodePath(___mb.mb_get_node_a, (const object *) this);
}

node_path joint::get_node_b() const {
	return ___godot_icall_NodePath(___mb.mb_get_node_b, (const object *) this);
}

int64_t joint::get_solver_priority() const {
	return ___godot_icall_int(___mb.mb_get_solver_priority, (const object *) this);
}

void joint::set_exclude_nodes_from_collision(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_exclude_nodes_from_collision, (const object *) this, enable);
}

void joint::set_node_a(const node_path node_) {
	___godot_icall_void_NodePath(___mb.mb_set_node_a, (const object *) this, node_);
}

void joint::set_node_b(const node_path node_) {
	___godot_icall_void_NodePath(___mb.mb_set_node_b, (const object *) this, node_);
}

void joint::set_solver_priority(const int64_t priority) {
	___godot_icall_void_int(___mb.mb_set_solver_priority, (const object *) this, priority);
}

}