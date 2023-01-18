#include "gltfnode.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


gltfnode::___method_bindings gltfnode::___mb = {};

void *gltfnode::_detail_class_tag = nullptr;

void gltfnode::___init_method_bindings() {
	___mb.mb_get_camera = gd::api->godot_method_bind_get_method("GLTFNode", "get_camera");
	___mb.mb_get_children = gd::api->godot_method_bind_get_method("GLTFNode", "get_children");
	___mb.mb_get_height = gd::api->godot_method_bind_get_method("GLTFNode", "get_height");
	___mb.mb_get_joint = gd::api->godot_method_bind_get_method("GLTFNode", "get_joint");
	___mb.mb_get_light = gd::api->godot_method_bind_get_method("GLTFNode", "get_light");
	___mb.mb_get_mesh = gd::api->godot_method_bind_get_method("GLTFNode", "get_mesh");
	___mb.mb_get_parent = gd::api->godot_method_bind_get_method("GLTFNode", "get_parent");
	___mb.mb_get_rotation = gd::api->godot_method_bind_get_method("GLTFNode", "get_rotation");
	___mb.mb_get_scale = gd::api->godot_method_bind_get_method("GLTFNode", "get_scale");
	___mb.mb_get_skeleton = gd::api->godot_method_bind_get_method("GLTFNode", "get_skeleton");
	___mb.mb_get_skin = gd::api->godot_method_bind_get_method("GLTFNode", "get_skin");
	___mb.mb_get_translation = gd::api->godot_method_bind_get_method("GLTFNode", "get_translation");
	___mb.mb_get_xform = gd::api->godot_method_bind_get_method("GLTFNode", "get_xform");
	___mb.mb_set_camera = gd::api->godot_method_bind_get_method("GLTFNode", "set_camera");
	___mb.mb_set_children = gd::api->godot_method_bind_get_method("GLTFNode", "set_children");
	___mb.mb_set_height = gd::api->godot_method_bind_get_method("GLTFNode", "set_height");
	___mb.mb_set_joint = gd::api->godot_method_bind_get_method("GLTFNode", "set_joint");
	___mb.mb_set_light = gd::api->godot_method_bind_get_method("GLTFNode", "set_light");
	___mb.mb_set_mesh = gd::api->godot_method_bind_get_method("GLTFNode", "set_mesh");
	___mb.mb_set_parent = gd::api->godot_method_bind_get_method("GLTFNode", "set_parent");
	___mb.mb_set_rotation = gd::api->godot_method_bind_get_method("GLTFNode", "set_rotation");
	___mb.mb_set_scale = gd::api->godot_method_bind_get_method("GLTFNode", "set_scale");
	___mb.mb_set_skeleton = gd::api->godot_method_bind_get_method("GLTFNode", "set_skeleton");
	___mb.mb_set_skin = gd::api->godot_method_bind_get_method("GLTFNode", "set_skin");
	___mb.mb_set_translation = gd::api->godot_method_bind_get_method("GLTFNode", "set_translation");
	___mb.mb_set_xform = gd::api->godot_method_bind_get_method("GLTFNode", "set_xform");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "GLTFNode");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

gltfnode *gltfnode::_new()
{
	return (gltfnode *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"GLTFNode")());
}
int64_t gltfnode::get_camera() {
	return ___godot_icall_int(___mb.mb_get_camera, (const object *) this);
}

pool_int_array gltfnode::get_children() {
	return ___godot_icall_PoolIntArray(___mb.mb_get_children, (const object *) this);
}

int64_t gltfnode::get_height() {
	return ___godot_icall_int(___mb.mb_get_height, (const object *) this);
}

bool gltfnode::get_joint() {
	return ___godot_icall_bool(___mb.mb_get_joint, (const object *) this);
}

int64_t gltfnode::get_light() {
	return ___godot_icall_int(___mb.mb_get_light, (const object *) this);
}

int64_t gltfnode::get_mesh() {
	return ___godot_icall_int(___mb.mb_get_mesh, (const object *) this);
}

int64_t gltfnode::get_parent() {
	return ___godot_icall_int(___mb.mb_get_parent, (const object *) this);
}

quat gltfnode::get_rotation() {
	return ___godot_icall_Quat(___mb.mb_get_rotation, (const object *) this);
}

vector3 gltfnode::get_scale() {
	return ___godot_icall_Vector3(___mb.mb_get_scale, (const object *) this);
}

int64_t gltfnode::get_skeleton() {
	return ___godot_icall_int(___mb.mb_get_skeleton, (const object *) this);
}

int64_t gltfnode::get_skin() {
	return ___godot_icall_int(___mb.mb_get_skin, (const object *) this);
}

vector3 gltfnode::get_translation() {
	return ___godot_icall_Vector3(___mb.mb_get_translation, (const object *) this);
}

transform gltfnode::get_xform() {
	return ___godot_icall_Transform(___mb.mb_get_xform, (const object *) this);
}

void gltfnode::set_camera(const int64_t camera_) {
	___godot_icall_void_int(___mb.mb_set_camera, (const object *) this, camera_);
}

void gltfnode::set_children(const pool_int_array children) {
	___godot_icall_void_PoolIntArray(___mb.mb_set_children, (const object *) this, children);
}

void gltfnode::set_height(const int64_t height) {
	___godot_icall_void_int(___mb.mb_set_height, (const object *) this, height);
}

void gltfnode::set_joint(const bool joint_) {
	___godot_icall_void_bool(___mb.mb_set_joint, (const object *) this, joint_);
}

void gltfnode::set_light(const int64_t light_) {
	___godot_icall_void_int(___mb.mb_set_light, (const object *) this, light_);
}

void gltfnode::set_mesh(const int64_t mesh_) {
	___godot_icall_void_int(___mb.mb_set_mesh, (const object *) this, mesh_);
}

void gltfnode::set_parent(const int64_t parent) {
	___godot_icall_void_int(___mb.mb_set_parent, (const object *) this, parent);
}

void gltfnode::set_rotation(const quat rotation) {
	___godot_icall_void_Quat(___mb.mb_set_rotation, (const object *) this, rotation);
}

void gltfnode::set_scale(const vector3 scale) {
	___godot_icall_void_Vector3(___mb.mb_set_scale, (const object *) this, scale);
}

void gltfnode::set_skeleton(const int64_t skeleton_) {
	___godot_icall_void_int(___mb.mb_set_skeleton, (const object *) this, skeleton_);
}

void gltfnode::set_skin(const int64_t skin_) {
	___godot_icall_void_int(___mb.mb_set_skin, (const object *) this, skin_);
}

void gltfnode::set_translation(const vector3 translation_) {
	___godot_icall_void_Vector3(___mb.mb_set_translation, (const object *) this, translation_);
}

void gltfnode::set_xform(const transform xform) {
	___godot_icall_void_Transform(___mb.mb_set_xform, (const object *) this, xform);
}

}