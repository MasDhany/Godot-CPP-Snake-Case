#include "skeleton_ik.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "skeleton.hpp"


namespace gd {


skeleton_ik::___method_bindings skeleton_ik::___mb = {};

void *skeleton_ik::_detail_class_tag = nullptr;

void skeleton_ik::___init_method_bindings() {
	___mb.mb_get_interpolation = gd::api->godot_method_bind_get_method("SkeletonIK", "get_interpolation");
	___mb.mb_get_magnet_position = gd::api->godot_method_bind_get_method("SkeletonIK", "get_magnet_position");
	___mb.mb_get_max_iterations = gd::api->godot_method_bind_get_method("SkeletonIK", "get_max_iterations");
	___mb.mb_get_min_distance = gd::api->godot_method_bind_get_method("SkeletonIK", "get_min_distance");
	___mb.mb_get_parent_skeleton = gd::api->godot_method_bind_get_method("SkeletonIK", "get_parent_skeleton");
	___mb.mb_get_root_bone = gd::api->godot_method_bind_get_method("SkeletonIK", "get_root_bone");
	___mb.mb_get_target_node = gd::api->godot_method_bind_get_method("SkeletonIK", "get_target_node");
	___mb.mb_get_target_transform = gd::api->godot_method_bind_get_method("SkeletonIK", "get_target_transform");
	___mb.mb_get_tip_bone = gd::api->godot_method_bind_get_method("SkeletonIK", "get_tip_bone");
	___mb.mb_is_override_tip_basis = gd::api->godot_method_bind_get_method("SkeletonIK", "is_override_tip_basis");
	___mb.mb_is_running = gd::api->godot_method_bind_get_method("SkeletonIK", "is_running");
	___mb.mb_is_using_magnet = gd::api->godot_method_bind_get_method("SkeletonIK", "is_using_magnet");
	___mb.mb_set_interpolation = gd::api->godot_method_bind_get_method("SkeletonIK", "set_interpolation");
	___mb.mb_set_magnet_position = gd::api->godot_method_bind_get_method("SkeletonIK", "set_magnet_position");
	___mb.mb_set_max_iterations = gd::api->godot_method_bind_get_method("SkeletonIK", "set_max_iterations");
	___mb.mb_set_min_distance = gd::api->godot_method_bind_get_method("SkeletonIK", "set_min_distance");
	___mb.mb_set_override_tip_basis = gd::api->godot_method_bind_get_method("SkeletonIK", "set_override_tip_basis");
	___mb.mb_set_root_bone = gd::api->godot_method_bind_get_method("SkeletonIK", "set_root_bone");
	___mb.mb_set_target_node = gd::api->godot_method_bind_get_method("SkeletonIK", "set_target_node");
	___mb.mb_set_target_transform = gd::api->godot_method_bind_get_method("SkeletonIK", "set_target_transform");
	___mb.mb_set_tip_bone = gd::api->godot_method_bind_get_method("SkeletonIK", "set_tip_bone");
	___mb.mb_set_use_magnet = gd::api->godot_method_bind_get_method("SkeletonIK", "set_use_magnet");
	___mb.mb_start = gd::api->godot_method_bind_get_method("SkeletonIK", "start");
	___mb.mb_stop = gd::api->godot_method_bind_get_method("SkeletonIK", "stop");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "SkeletonIK");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

skeleton_ik *skeleton_ik::_new()
{
	return (skeleton_ik *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"SkeletonIK")());
}
real_t skeleton_ik::get_interpolation() const {
	return ___godot_icall_float(___mb.mb_get_interpolation, (const object *) this);
}

vector3 skeleton_ik::get_magnet_position() const {
	return ___godot_icall_Vector3(___mb.mb_get_magnet_position, (const object *) this);
}

int64_t skeleton_ik::get_max_iterations() const {
	return ___godot_icall_int(___mb.mb_get_max_iterations, (const object *) this);
}

real_t skeleton_ik::get_min_distance() const {
	return ___godot_icall_float(___mb.mb_get_min_distance, (const object *) this);
}

skeleton *skeleton_ik::get_parent_skeleton() const {
	return (skeleton *) ___godot_icall_Object(___mb.mb_get_parent_skeleton, (const object *) this);
}

string skeleton_ik::get_root_bone() const {
	return ___godot_icall_String(___mb.mb_get_root_bone, (const object *) this);
}

node_path skeleton_ik::get_target_node() {
	return ___godot_icall_NodePath(___mb.mb_get_target_node, (const object *) this);
}

transform skeleton_ik::get_target_transform() const {
	return ___godot_icall_Transform(___mb.mb_get_target_transform, (const object *) this);
}

string skeleton_ik::get_tip_bone() const {
	return ___godot_icall_String(___mb.mb_get_tip_bone, (const object *) this);
}

bool skeleton_ik::is_override_tip_basis() const {
	return ___godot_icall_bool(___mb.mb_is_override_tip_basis, (const object *) this);
}

bool skeleton_ik::is_running() {
	return ___godot_icall_bool(___mb.mb_is_running, (const object *) this);
}

bool skeleton_ik::is_using_magnet() const {
	return ___godot_icall_bool(___mb.mb_is_using_magnet, (const object *) this);
}

void skeleton_ik::set_interpolation(const real_t interpolation) {
	___godot_icall_void_float(___mb.mb_set_interpolation, (const object *) this, interpolation);
}

void skeleton_ik::set_magnet_position(const vector3 local_position) {
	___godot_icall_void_Vector3(___mb.mb_set_magnet_position, (const object *) this, local_position);
}

void skeleton_ik::set_max_iterations(const int64_t iterations) {
	___godot_icall_void_int(___mb.mb_set_max_iterations, (const object *) this, iterations);
}

void skeleton_ik::set_min_distance(const real_t min_distance) {
	___godot_icall_void_float(___mb.mb_set_min_distance, (const object *) this, min_distance);
}

void skeleton_ik::set_override_tip_basis(const bool override) {
	___godot_icall_void_bool(___mb.mb_set_override_tip_basis, (const object *) this, override);
}

void skeleton_ik::set_root_bone(const string root_bone) {
	___godot_icall_void_String(___mb.mb_set_root_bone, (const object *) this, root_bone);
}

void skeleton_ik::set_target_node(const node_path node_) {
	___godot_icall_void_NodePath(___mb.mb_set_target_node, (const object *) this, node_);
}

void skeleton_ik::set_target_transform(const transform target) {
	___godot_icall_void_Transform(___mb.mb_set_target_transform, (const object *) this, target);
}

void skeleton_ik::set_tip_bone(const string tip_bone) {
	___godot_icall_void_String(___mb.mb_set_tip_bone, (const object *) this, tip_bone);
}

void skeleton_ik::set_use_magnet(const bool use) {
	___godot_icall_void_bool(___mb.mb_set_use_magnet, (const object *) this, use);
}

void skeleton_ik::start(const bool one_time) {
	___godot_icall_void_bool(___mb.mb_start, (const object *) this, one_time);
}

void skeleton_ik::stop() {
	___godot_icall_void(___mb.mb_stop, (const object *) this);
}

}