#include "gltfskin.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "skin.hpp"


namespace gd {


gltfskin::___method_bindings gltfskin::___mb = {};

void *gltfskin::_detail_class_tag = nullptr;

void gltfskin::___init_method_bindings() {
	___mb.mb_get_godot_skin = gd::api->godot_method_bind_get_method("GLTFSkin", "get_godot_skin");
	___mb.mb_get_inverse_binds = gd::api->godot_method_bind_get_method("GLTFSkin", "get_inverse_binds");
	___mb.mb_get_joint_i_to_bone_i = gd::api->godot_method_bind_get_method("GLTFSkin", "get_joint_i_to_bone_i");
	___mb.mb_get_joint_i_to_name = gd::api->godot_method_bind_get_method("GLTFSkin", "get_joint_i_to_name");
	___mb.mb_get_joints = gd::api->godot_method_bind_get_method("GLTFSkin", "get_joints");
	___mb.mb_get_joints_original = gd::api->godot_method_bind_get_method("GLTFSkin", "get_joints_original");
	___mb.mb_get_non_joints = gd::api->godot_method_bind_get_method("GLTFSkin", "get_non_joints");
	___mb.mb_get_roots = gd::api->godot_method_bind_get_method("GLTFSkin", "get_roots");
	___mb.mb_get_skeleton = gd::api->godot_method_bind_get_method("GLTFSkin", "get_skeleton");
	___mb.mb_get_skin_root = gd::api->godot_method_bind_get_method("GLTFSkin", "get_skin_root");
	___mb.mb_set_godot_skin = gd::api->godot_method_bind_get_method("GLTFSkin", "set_godot_skin");
	___mb.mb_set_inverse_binds = gd::api->godot_method_bind_get_method("GLTFSkin", "set_inverse_binds");
	___mb.mb_set_joint_i_to_bone_i = gd::api->godot_method_bind_get_method("GLTFSkin", "set_joint_i_to_bone_i");
	___mb.mb_set_joint_i_to_name = gd::api->godot_method_bind_get_method("GLTFSkin", "set_joint_i_to_name");
	___mb.mb_set_joints = gd::api->godot_method_bind_get_method("GLTFSkin", "set_joints");
	___mb.mb_set_joints_original = gd::api->godot_method_bind_get_method("GLTFSkin", "set_joints_original");
	___mb.mb_set_non_joints = gd::api->godot_method_bind_get_method("GLTFSkin", "set_non_joints");
	___mb.mb_set_roots = gd::api->godot_method_bind_get_method("GLTFSkin", "set_roots");
	___mb.mb_set_skeleton = gd::api->godot_method_bind_get_method("GLTFSkin", "set_skeleton");
	___mb.mb_set_skin_root = gd::api->godot_method_bind_get_method("GLTFSkin", "set_skin_root");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "GLTFSkin");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

gltfskin *gltfskin::_new()
{
	return (gltfskin *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"GLTFSkin")());
}
ref<skin> gltfskin::get_godot_skin() {
	return ref<skin>::__internal_constructor(___godot_icall_Object(___mb.mb_get_godot_skin, (const object *) this));
}

array gltfskin::get_inverse_binds() {
	return ___godot_icall_Array(___mb.mb_get_inverse_binds, (const object *) this);
}

dictionary gltfskin::get_joint_i_to_bone_i() {
	return ___godot_icall_Dictionary(___mb.mb_get_joint_i_to_bone_i, (const object *) this);
}

dictionary gltfskin::get_joint_i_to_name() {
	return ___godot_icall_Dictionary(___mb.mb_get_joint_i_to_name, (const object *) this);
}

pool_int_array gltfskin::get_joints() {
	return ___godot_icall_PoolIntArray(___mb.mb_get_joints, (const object *) this);
}

pool_int_array gltfskin::get_joints_original() {
	return ___godot_icall_PoolIntArray(___mb.mb_get_joints_original, (const object *) this);
}

pool_int_array gltfskin::get_non_joints() {
	return ___godot_icall_PoolIntArray(___mb.mb_get_non_joints, (const object *) this);
}

pool_int_array gltfskin::get_roots() {
	return ___godot_icall_PoolIntArray(___mb.mb_get_roots, (const object *) this);
}

int64_t gltfskin::get_skeleton() {
	return ___godot_icall_int(___mb.mb_get_skeleton, (const object *) this);
}

int64_t gltfskin::get_skin_root() {
	return ___godot_icall_int(___mb.mb_get_skin_root, (const object *) this);
}

void gltfskin::set_godot_skin(const ref<skin> godot_skin) {
	___godot_icall_void_Object(___mb.mb_set_godot_skin, (const object *) this, godot_skin.ptr());
}

void gltfskin::set_inverse_binds(const array inverse_binds) {
	___godot_icall_void_Array(___mb.mb_set_inverse_binds, (const object *) this, inverse_binds);
}

void gltfskin::set_joint_i_to_bone_i(const dictionary joint_i_to_bone_i) {
	___godot_icall_void_Dictionary(___mb.mb_set_joint_i_to_bone_i, (const object *) this, joint_i_to_bone_i);
}

void gltfskin::set_joint_i_to_name(const dictionary joint_i_to_name) {
	___godot_icall_void_Dictionary(___mb.mb_set_joint_i_to_name, (const object *) this, joint_i_to_name);
}

void gltfskin::set_joints(const pool_int_array joints) {
	___godot_icall_void_PoolIntArray(___mb.mb_set_joints, (const object *) this, joints);
}

void gltfskin::set_joints_original(const pool_int_array joints_original) {
	___godot_icall_void_PoolIntArray(___mb.mb_set_joints_original, (const object *) this, joints_original);
}

void gltfskin::set_non_joints(const pool_int_array non_joints) {
	___godot_icall_void_PoolIntArray(___mb.mb_set_non_joints, (const object *) this, non_joints);
}

void gltfskin::set_roots(const pool_int_array roots) {
	___godot_icall_void_PoolIntArray(___mb.mb_set_roots, (const object *) this, roots);
}

void gltfskin::set_skeleton(const int64_t skeleton_) {
	___godot_icall_void_int(___mb.mb_set_skeleton, (const object *) this, skeleton_);
}

void gltfskin::set_skin_root(const int64_t skin_root) {
	___godot_icall_void_int(___mb.mb_set_skin_root, (const object *) this, skin_root);
}

}