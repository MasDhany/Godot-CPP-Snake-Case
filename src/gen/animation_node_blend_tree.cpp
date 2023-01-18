#include "animation_node_blend_tree.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "animation_node.hpp"


namespace gd {


animation_node_blend_tree::___method_bindings animation_node_blend_tree::___mb = {};

void *animation_node_blend_tree::_detail_class_tag = nullptr;

void animation_node_blend_tree::___init_method_bindings() {
	___mb.mb__node_changed = gd::api->godot_method_bind_get_method("AnimationNodeBlendTree", "_node_changed");
	___mb.mb__tree_changed = gd::api->godot_method_bind_get_method("AnimationNodeBlendTree", "_tree_changed");
	___mb.mb_add_node = gd::api->godot_method_bind_get_method("AnimationNodeBlendTree", "add_node");
	___mb.mb_connect_node = gd::api->godot_method_bind_get_method("AnimationNodeBlendTree", "connect_node");
	___mb.mb_disconnect_node = gd::api->godot_method_bind_get_method("AnimationNodeBlendTree", "disconnect_node");
	___mb.mb_get_graph_offset = gd::api->godot_method_bind_get_method("AnimationNodeBlendTree", "get_graph_offset");
	___mb.mb_get_node = gd::api->godot_method_bind_get_method("AnimationNodeBlendTree", "get_node");
	___mb.mb_get_node_position = gd::api->godot_method_bind_get_method("AnimationNodeBlendTree", "get_node_position");
	___mb.mb_has_node = gd::api->godot_method_bind_get_method("AnimationNodeBlendTree", "has_node");
	___mb.mb_remove_node = gd::api->godot_method_bind_get_method("AnimationNodeBlendTree", "remove_node");
	___mb.mb_rename_node = gd::api->godot_method_bind_get_method("AnimationNodeBlendTree", "rename_node");
	___mb.mb_set_graph_offset = gd::api->godot_method_bind_get_method("AnimationNodeBlendTree", "set_graph_offset");
	___mb.mb_set_node_position = gd::api->godot_method_bind_get_method("AnimationNodeBlendTree", "set_node_position");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AnimationNodeBlendTree");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

animation_node_blend_tree *animation_node_blend_tree::_new()
{
	return (animation_node_blend_tree *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AnimationNodeBlendTree")());
}
void animation_node_blend_tree::_node_changed(const string node_) {
	___godot_icall_void_String(___mb.mb__node_changed, (const object *) this, node_);
}

void animation_node_blend_tree::_tree_changed() {
	___godot_icall_void(___mb.mb__tree_changed, (const object *) this);
}

void animation_node_blend_tree::add_node(const string name, const ref<animation_node> node_, const vector2 position) {
	___godot_icall_void_String_Object_Vector2(___mb.mb_add_node, (const object *) this, name, node_.ptr(), position);
}

void animation_node_blend_tree::connect_node(const string input_node, const int64_t input_index, const string output_node) {
	___godot_icall_void_String_int_String(___mb.mb_connect_node, (const object *) this, input_node, input_index, output_node);
}

void animation_node_blend_tree::disconnect_node(const string input_node, const int64_t input_index) {
	___godot_icall_void_String_int(___mb.mb_disconnect_node, (const object *) this, input_node, input_index);
}

vector2 animation_node_blend_tree::get_graph_offset() const {
	return ___godot_icall_Vector2(___mb.mb_get_graph_offset, (const object *) this);
}

ref<animation_node> animation_node_blend_tree::get_node(const string name) const {
	return ref<animation_node>::__internal_constructor(___godot_icall_Object_String(___mb.mb_get_node, (const object *) this, name));
}

vector2 animation_node_blend_tree::get_node_position(const string name) const {
	return ___godot_icall_Vector2_String(___mb.mb_get_node_position, (const object *) this, name);
}

bool animation_node_blend_tree::has_node(const string name) const {
	return ___godot_icall_bool_String(___mb.mb_has_node, (const object *) this, name);
}

void animation_node_blend_tree::remove_node(const string name) {
	___godot_icall_void_String(___mb.mb_remove_node, (const object *) this, name);
}

void animation_node_blend_tree::rename_node(const string name, const string new_name) {
	___godot_icall_void_String_String(___mb.mb_rename_node, (const object *) this, name, new_name);
}

void animation_node_blend_tree::set_graph_offset(const vector2 offset) {
	___godot_icall_void_Vector2(___mb.mb_set_graph_offset, (const object *) this, offset);
}

void animation_node_blend_tree::set_node_position(const string name, const vector2 position) {
	___godot_icall_void_String_Vector2(___mb.mb_set_node_position, (const object *) this, name, position);
}

}