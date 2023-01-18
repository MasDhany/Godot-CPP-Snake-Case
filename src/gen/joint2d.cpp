#include "joint2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


joint2d::___method_bindings joint2d::___mb = {};

void *joint2d::_detail_class_tag = nullptr;

void joint2d::___init_method_bindings() {
	___mb.mb__body_exit_tree = gd::api->godot_method_bind_get_method("Joint2D", "_body_exit_tree");
	___mb.mb_get_bias = gd::api->godot_method_bind_get_method("Joint2D", "get_bias");
	___mb.mb_get_exclude_nodes_from_collision = gd::api->godot_method_bind_get_method("Joint2D", "get_exclude_nodes_from_collision");
	___mb.mb_get_node_a = gd::api->godot_method_bind_get_method("Joint2D", "get_node_a");
	___mb.mb_get_node_b = gd::api->godot_method_bind_get_method("Joint2D", "get_node_b");
	___mb.mb_set_bias = gd::api->godot_method_bind_get_method("Joint2D", "set_bias");
	___mb.mb_set_exclude_nodes_from_collision = gd::api->godot_method_bind_get_method("Joint2D", "set_exclude_nodes_from_collision");
	___mb.mb_set_node_a = gd::api->godot_method_bind_get_method("Joint2D", "set_node_a");
	___mb.mb_set_node_b = gd::api->godot_method_bind_get_method("Joint2D", "set_node_b");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Joint2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void joint2d::_body_exit_tree() {
	___godot_icall_void(___mb.mb__body_exit_tree, (const object *) this);
}

real_t joint2d::get_bias() const {
	return ___godot_icall_float(___mb.mb_get_bias, (const object *) this);
}

bool joint2d::get_exclude_nodes_from_collision() const {
	return ___godot_icall_bool(___mb.mb_get_exclude_nodes_from_collision, (const object *) this);
}

node_path joint2d::get_node_a() const {
	return ___godot_icall_NodePath(___mb.mb_get_node_a, (const object *) this);
}

node_path joint2d::get_node_b() const {
	return ___godot_icall_NodePath(___mb.mb_get_node_b, (const object *) this);
}

void joint2d::set_bias(const real_t bias) {
	___godot_icall_void_float(___mb.mb_set_bias, (const object *) this, bias);
}

void joint2d::set_exclude_nodes_from_collision(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_exclude_nodes_from_collision, (const object *) this, enable);
}

void joint2d::set_node_a(const node_path node_) {
	___godot_icall_void_NodePath(___mb.mb_set_node_a, (const object *) this, node_);
}

void joint2d::set_node_b(const node_path node_) {
	___godot_icall_void_NodePath(___mb.mb_set_node_b, (const object *) this, node_);
}

}