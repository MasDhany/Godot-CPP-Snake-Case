#include "editor_selection.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "node.hpp"


namespace gd {


editor_selection::___method_bindings editor_selection::___mb = {};

void *editor_selection::_detail_class_tag = nullptr;

void editor_selection::___init_method_bindings() {
	___mb.mb__emit_change = gd::api->godot_method_bind_get_method("EditorSelection", "_emit_change");
	___mb.mb__node_removed = gd::api->godot_method_bind_get_method("EditorSelection", "_node_removed");
	___mb.mb_add_node = gd::api->godot_method_bind_get_method("EditorSelection", "add_node");
	___mb.mb_clear = gd::api->godot_method_bind_get_method("EditorSelection", "clear");
	___mb.mb_get_selected_nodes = gd::api->godot_method_bind_get_method("EditorSelection", "get_selected_nodes");
	___mb.mb_get_transformable_selected_nodes = gd::api->godot_method_bind_get_method("EditorSelection", "get_transformable_selected_nodes");
	___mb.mb_remove_node = gd::api->godot_method_bind_get_method("EditorSelection", "remove_node");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "EditorSelection");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void editor_selection::_emit_change() {
	___godot_icall_void(___mb.mb__emit_change, (const object *) this);
}

void editor_selection::_node_removed(const node *arg0) {
	___godot_icall_void_Object(___mb.mb__node_removed, (const object *) this, arg0);
}

void editor_selection::add_node(const node *node_) {
	___godot_icall_void_Object(___mb.mb_add_node, (const object *) this, node_);
}

void editor_selection::clear() {
	___godot_icall_void(___mb.mb_clear, (const object *) this);
}

array editor_selection::get_selected_nodes() {
	return ___godot_icall_Array(___mb.mb_get_selected_nodes, (const object *) this);
}

array editor_selection::get_transformable_selected_nodes() {
	return ___godot_icall_Array(___mb.mb_get_transformable_selected_nodes, (const object *) this);
}

void editor_selection::remove_node(const node *node_) {
	___godot_icall_void_Object(___mb.mb_remove_node, (const object *) this, node_);
}

}