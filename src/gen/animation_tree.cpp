#include "animation_tree.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "animation_node.hpp"
#include "node.hpp"


namespace gd {


animation_tree::___method_bindings animation_tree::___mb = {};

void *animation_tree::_detail_class_tag = nullptr;

void animation_tree::___init_method_bindings() {
	___mb.mb__clear_caches = gd::api->godot_method_bind_get_method("AnimationTree", "_clear_caches");
	___mb.mb__node_removed = gd::api->godot_method_bind_get_method("AnimationTree", "_node_removed");
	___mb.mb__tree_changed = gd::api->godot_method_bind_get_method("AnimationTree", "_tree_changed");
	___mb.mb__update_properties = gd::api->godot_method_bind_get_method("AnimationTree", "_update_properties");
	___mb.mb_advance = gd::api->godot_method_bind_get_method("AnimationTree", "advance");
	___mb.mb_get_animation_player = gd::api->godot_method_bind_get_method("AnimationTree", "get_animation_player");
	___mb.mb_get_process_mode = gd::api->godot_method_bind_get_method("AnimationTree", "get_process_mode");
	___mb.mb_get_root_motion_track = gd::api->godot_method_bind_get_method("AnimationTree", "get_root_motion_track");
	___mb.mb_get_root_motion_transform = gd::api->godot_method_bind_get_method("AnimationTree", "get_root_motion_transform");
	___mb.mb_get_tree_root = gd::api->godot_method_bind_get_method("AnimationTree", "get_tree_root");
	___mb.mb_is_active = gd::api->godot_method_bind_get_method("AnimationTree", "is_active");
	___mb.mb_rename_parameter = gd::api->godot_method_bind_get_method("AnimationTree", "rename_parameter");
	___mb.mb_set_active = gd::api->godot_method_bind_get_method("AnimationTree", "set_active");
	___mb.mb_set_animation_player = gd::api->godot_method_bind_get_method("AnimationTree", "set_animation_player");
	___mb.mb_set_process_mode = gd::api->godot_method_bind_get_method("AnimationTree", "set_process_mode");
	___mb.mb_set_root_motion_track = gd::api->godot_method_bind_get_method("AnimationTree", "set_root_motion_track");
	___mb.mb_set_tree_root = gd::api->godot_method_bind_get_method("AnimationTree", "set_tree_root");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AnimationTree");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

animation_tree *animation_tree::_new()
{
	return (animation_tree *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AnimationTree")());
}
void animation_tree::_clear_caches() {
	___godot_icall_void(___mb.mb__clear_caches, (const object *) this);
}

void animation_tree::_node_removed(const node *arg0) {
	___godot_icall_void_Object(___mb.mb__node_removed, (const object *) this, arg0);
}

void animation_tree::_tree_changed() {
	___godot_icall_void(___mb.mb__tree_changed, (const object *) this);
}

void animation_tree::_update_properties() {
	___godot_icall_void(___mb.mb__update_properties, (const object *) this);
}

void animation_tree::advance(const real_t delta) {
	___godot_icall_void_float(___mb.mb_advance, (const object *) this, delta);
}

node_path animation_tree::get_animation_player() const {
	return ___godot_icall_NodePath(___mb.mb_get_animation_player, (const object *) this);
}

animation_tree::AnimationProcessMode animation_tree::get_process_mode() const {
	return (animation_tree::AnimationProcessMode) ___godot_icall_int(___mb.mb_get_process_mode, (const object *) this);
}

node_path animation_tree::get_root_motion_track() const {
	return ___godot_icall_NodePath(___mb.mb_get_root_motion_track, (const object *) this);
}

transform animation_tree::get_root_motion_transform() const {
	return ___godot_icall_Transform(___mb.mb_get_root_motion_transform, (const object *) this);
}

ref<animation_node> animation_tree::get_tree_root() const {
	return ref<animation_node>::__internal_constructor(___godot_icall_Object(___mb.mb_get_tree_root, (const object *) this));
}

bool animation_tree::is_active() const {
	return ___godot_icall_bool(___mb.mb_is_active, (const object *) this);
}

void animation_tree::rename_parameter(const string old_name, const string new_name) {
	___godot_icall_void_String_String(___mb.mb_rename_parameter, (const object *) this, old_name, new_name);
}

void animation_tree::set_active(const bool active) {
	___godot_icall_void_bool(___mb.mb_set_active, (const object *) this, active);
}

void animation_tree::set_animation_player(const node_path root) {
	___godot_icall_void_NodePath(___mb.mb_set_animation_player, (const object *) this, root);
}

void animation_tree::set_process_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_process_mode, (const object *) this, mode);
}

void animation_tree::set_root_motion_track(const node_path path_) {
	___godot_icall_void_NodePath(___mb.mb_set_root_motion_track, (const object *) this, path_);
}

void animation_tree::set_tree_root(const ref<animation_node> root) {
	___godot_icall_void_Object(___mb.mb_set_tree_root, (const object *) this, root.ptr());
}

}