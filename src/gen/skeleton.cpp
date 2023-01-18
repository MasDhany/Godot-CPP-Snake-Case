#include "skeleton.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "node.hpp"
#include "skin.hpp"
#include "skin_reference.hpp"


namespace gd {


skeleton::___method_bindings skeleton::___mb = {};

void *skeleton::_detail_class_tag = nullptr;

void skeleton::___init_method_bindings() {
	___mb.mb_add_bone = gd::api->godot_method_bind_get_method("Skeleton", "add_bone");
	___mb.mb_bind_child_node_to_bone = gd::api->godot_method_bind_get_method("Skeleton", "bind_child_node_to_bone");
	___mb.mb_clear_bones = gd::api->godot_method_bind_get_method("Skeleton", "clear_bones");
	___mb.mb_clear_bones_global_pose_override = gd::api->godot_method_bind_get_method("Skeleton", "clear_bones_global_pose_override");
	___mb.mb_find_bone = gd::api->godot_method_bind_get_method("Skeleton", "find_bone");
	___mb.mb_get_bone_count = gd::api->godot_method_bind_get_method("Skeleton", "get_bone_count");
	___mb.mb_get_bone_custom_pose = gd::api->godot_method_bind_get_method("Skeleton", "get_bone_custom_pose");
	___mb.mb_get_bone_global_pose = gd::api->godot_method_bind_get_method("Skeleton", "get_bone_global_pose");
	___mb.mb_get_bone_global_pose_no_override = gd::api->godot_method_bind_get_method("Skeleton", "get_bone_global_pose_no_override");
	___mb.mb_get_bone_name = gd::api->godot_method_bind_get_method("Skeleton", "get_bone_name");
	___mb.mb_get_bone_parent = gd::api->godot_method_bind_get_method("Skeleton", "get_bone_parent");
	___mb.mb_get_bone_pose = gd::api->godot_method_bind_get_method("Skeleton", "get_bone_pose");
	___mb.mb_get_bone_rest = gd::api->godot_method_bind_get_method("Skeleton", "get_bone_rest");
	___mb.mb_get_bound_child_nodes_to_bone = gd::api->godot_method_bind_get_method("Skeleton", "get_bound_child_nodes_to_bone");
	___mb.mb_is_bone_rest_disabled = gd::api->godot_method_bind_get_method("Skeleton", "is_bone_rest_disabled");
	___mb.mb_localize_rests = gd::api->godot_method_bind_get_method("Skeleton", "localize_rests");
	___mb.mb_physical_bones_add_collision_exception = gd::api->godot_method_bind_get_method("Skeleton", "physical_bones_add_collision_exception");
	___mb.mb_physical_bones_remove_collision_exception = gd::api->godot_method_bind_get_method("Skeleton", "physical_bones_remove_collision_exception");
	___mb.mb_physical_bones_start_simulation = gd::api->godot_method_bind_get_method("Skeleton", "physical_bones_start_simulation");
	___mb.mb_physical_bones_stop_simulation = gd::api->godot_method_bind_get_method("Skeleton", "physical_bones_stop_simulation");
	___mb.mb_register_skin = gd::api->godot_method_bind_get_method("Skeleton", "register_skin");
	___mb.mb_set_bone_custom_pose = gd::api->godot_method_bind_get_method("Skeleton", "set_bone_custom_pose");
	___mb.mb_set_bone_disable_rest = gd::api->godot_method_bind_get_method("Skeleton", "set_bone_disable_rest");
	___mb.mb_set_bone_global_pose_override = gd::api->godot_method_bind_get_method("Skeleton", "set_bone_global_pose_override");
	___mb.mb_set_bone_name = gd::api->godot_method_bind_get_method("Skeleton", "set_bone_name");
	___mb.mb_set_bone_parent = gd::api->godot_method_bind_get_method("Skeleton", "set_bone_parent");
	___mb.mb_set_bone_pose = gd::api->godot_method_bind_get_method("Skeleton", "set_bone_pose");
	___mb.mb_set_bone_rest = gd::api->godot_method_bind_get_method("Skeleton", "set_bone_rest");
	___mb.mb_unbind_child_node_from_bone = gd::api->godot_method_bind_get_method("Skeleton", "unbind_child_node_from_bone");
	___mb.mb_unparent_bone_and_rest = gd::api->godot_method_bind_get_method("Skeleton", "unparent_bone_and_rest");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Skeleton");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

skeleton *skeleton::_new()
{
	return (skeleton *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Skeleton")());
}
void skeleton::add_bone(const string name) {
	___godot_icall_void_String(___mb.mb_add_bone, (const object *) this, name);
}

void skeleton::bind_child_node_to_bone(const int64_t bone_idx, const node *node_) {
	___godot_icall_void_int_Object(___mb.mb_bind_child_node_to_bone, (const object *) this, bone_idx, node_);
}

void skeleton::clear_bones() {
	___godot_icall_void(___mb.mb_clear_bones, (const object *) this);
}

void skeleton::clear_bones_global_pose_override() {
	___godot_icall_void(___mb.mb_clear_bones_global_pose_override, (const object *) this);
}

int64_t skeleton::find_bone(const string name) const {
	return ___godot_icall_int_String(___mb.mb_find_bone, (const object *) this, name);
}

int64_t skeleton::get_bone_count() const {
	return ___godot_icall_int(___mb.mb_get_bone_count, (const object *) this);
}

transform skeleton::get_bone_custom_pose(const int64_t bone_idx) const {
	return ___godot_icall_Transform_int(___mb.mb_get_bone_custom_pose, (const object *) this, bone_idx);
}

transform skeleton::get_bone_global_pose(const int64_t bone_idx) const {
	return ___godot_icall_Transform_int(___mb.mb_get_bone_global_pose, (const object *) this, bone_idx);
}

transform skeleton::get_bone_global_pose_no_override(const int64_t bone_idx) const {
	return ___godot_icall_Transform_int(___mb.mb_get_bone_global_pose_no_override, (const object *) this, bone_idx);
}

string skeleton::get_bone_name(const int64_t bone_idx) const {
	return ___godot_icall_String_int(___mb.mb_get_bone_name, (const object *) this, bone_idx);
}

int64_t skeleton::get_bone_parent(const int64_t bone_idx) const {
	return ___godot_icall_int_int(___mb.mb_get_bone_parent, (const object *) this, bone_idx);
}

transform skeleton::get_bone_pose(const int64_t bone_idx) const {
	return ___godot_icall_Transform_int(___mb.mb_get_bone_pose, (const object *) this, bone_idx);
}

transform skeleton::get_bone_rest(const int64_t bone_idx) const {
	return ___godot_icall_Transform_int(___mb.mb_get_bone_rest, (const object *) this, bone_idx);
}

array skeleton::get_bound_child_nodes_to_bone(const int64_t bone_idx) const {
	return ___godot_icall_Array_int(___mb.mb_get_bound_child_nodes_to_bone, (const object *) this, bone_idx);
}

bool skeleton::is_bone_rest_disabled(const int64_t bone_idx) const {
	return ___godot_icall_bool_int(___mb.mb_is_bone_rest_disabled, (const object *) this, bone_idx);
}

void skeleton::localize_rests() {
	___godot_icall_void(___mb.mb_localize_rests, (const object *) this);
}

void skeleton::physical_bones_add_collision_exception(const rid exception) {
	___godot_icall_void_RID(___mb.mb_physical_bones_add_collision_exception, (const object *) this, exception);
}

void skeleton::physical_bones_remove_collision_exception(const rid exception) {
	___godot_icall_void_RID(___mb.mb_physical_bones_remove_collision_exception, (const object *) this, exception);
}

void skeleton::physical_bones_start_simulation(const array bones) {
	___godot_icall_void_Array(___mb.mb_physical_bones_start_simulation, (const object *) this, bones);
}

void skeleton::physical_bones_stop_simulation() {
	___godot_icall_void(___mb.mb_physical_bones_stop_simulation, (const object *) this);
}

ref<skin_reference> skeleton::register_skin(const ref<skin> skin_) {
	return ref<skin_reference>::__internal_constructor(___godot_icall_Object_Object(___mb.mb_register_skin, (const object *) this, skin_.ptr()));
}

void skeleton::set_bone_custom_pose(const int64_t bone_idx, const transform custom_pose) {
	___godot_icall_void_int_Transform(___mb.mb_set_bone_custom_pose, (const object *) this, bone_idx, custom_pose);
}

void skeleton::set_bone_disable_rest(const int64_t bone_idx, const bool disable) {
	___godot_icall_void_int_bool(___mb.mb_set_bone_disable_rest, (const object *) this, bone_idx, disable);
}

void skeleton::set_bone_global_pose_override(const int64_t bone_idx, const transform pose, const real_t amount, const bool persistent) {
	___godot_icall_void_int_Transform_float_bool(___mb.mb_set_bone_global_pose_override, (const object *) this, bone_idx, pose, amount, persistent);
}

void skeleton::set_bone_name(const int64_t bone_idx, const string name) {
	___godot_icall_void_int_String(___mb.mb_set_bone_name, (const object *) this, bone_idx, name);
}

void skeleton::set_bone_parent(const int64_t bone_idx, const int64_t parent_idx) {
	___godot_icall_void_int_int(___mb.mb_set_bone_parent, (const object *) this, bone_idx, parent_idx);
}

void skeleton::set_bone_pose(const int64_t bone_idx, const transform pose) {
	___godot_icall_void_int_Transform(___mb.mb_set_bone_pose, (const object *) this, bone_idx, pose);
}

void skeleton::set_bone_rest(const int64_t bone_idx, const transform rest) {
	___godot_icall_void_int_Transform(___mb.mb_set_bone_rest, (const object *) this, bone_idx, rest);
}

void skeleton::unbind_child_node_from_bone(const int64_t bone_idx, const node *node_) {
	___godot_icall_void_int_Object(___mb.mb_unbind_child_node_from_bone, (const object *) this, bone_idx, node_);
}

void skeleton::unparent_bone_and_rest(const int64_t bone_idx) {
	___godot_icall_void_int(___mb.mb_unparent_bone_and_rest, (const object *) this, bone_idx);
}

}