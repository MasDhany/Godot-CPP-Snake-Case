#include "gltfskeleton.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "bone_attachment.hpp"
#include "skeleton.hpp"


namespace gd {


gltfskeleton::___method_bindings gltfskeleton::___mb = {};

void *gltfskeleton::_detail_class_tag = nullptr;

void gltfskeleton::___init_method_bindings() {
	___mb.mb_get_bone_attachment = gd::api->godot_method_bind_get_method("GLTFSkeleton", "get_bone_attachment");
	___mb.mb_get_bone_attachment_count = gd::api->godot_method_bind_get_method("GLTFSkeleton", "get_bone_attachment_count");
	___mb.mb_get_godot_bone_node = gd::api->godot_method_bind_get_method("GLTFSkeleton", "get_godot_bone_node");
	___mb.mb_get_godot_skeleton = gd::api->godot_method_bind_get_method("GLTFSkeleton", "get_godot_skeleton");
	___mb.mb_get_joints = gd::api->godot_method_bind_get_method("GLTFSkeleton", "get_joints");
	___mb.mb_get_roots = gd::api->godot_method_bind_get_method("GLTFSkeleton", "get_roots");
	___mb.mb_get_unique_names = gd::api->godot_method_bind_get_method("GLTFSkeleton", "get_unique_names");
	___mb.mb_set_godot_bone_node = gd::api->godot_method_bind_get_method("GLTFSkeleton", "set_godot_bone_node");
	___mb.mb_set_joints = gd::api->godot_method_bind_get_method("GLTFSkeleton", "set_joints");
	___mb.mb_set_roots = gd::api->godot_method_bind_get_method("GLTFSkeleton", "set_roots");
	___mb.mb_set_unique_names = gd::api->godot_method_bind_get_method("GLTFSkeleton", "set_unique_names");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "GLTFSkeleton");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

gltfskeleton *gltfskeleton::_new()
{
	return (gltfskeleton *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"GLTFSkeleton")());
}
bone_attachment *gltfskeleton::get_bone_attachment(const int64_t idx) {
	return (bone_attachment *) ___godot_icall_Object_int(___mb.mb_get_bone_attachment, (const object *) this, idx);
}

int64_t gltfskeleton::get_bone_attachment_count() {
	return ___godot_icall_int(___mb.mb_get_bone_attachment_count, (const object *) this);
}

dictionary gltfskeleton::get_godot_bone_node() {
	return ___godot_icall_Dictionary(___mb.mb_get_godot_bone_node, (const object *) this);
}

skeleton *gltfskeleton::get_godot_skeleton() {
	return (skeleton *) ___godot_icall_Object(___mb.mb_get_godot_skeleton, (const object *) this);
}

pool_int_array gltfskeleton::get_joints() {
	return ___godot_icall_PoolIntArray(___mb.mb_get_joints, (const object *) this);
}

pool_int_array gltfskeleton::get_roots() {
	return ___godot_icall_PoolIntArray(___mb.mb_get_roots, (const object *) this);
}

array gltfskeleton::get_unique_names() {
	return ___godot_icall_Array(___mb.mb_get_unique_names, (const object *) this);
}

void gltfskeleton::set_godot_bone_node(const dictionary godot_bone_node) {
	___godot_icall_void_Dictionary(___mb.mb_set_godot_bone_node, (const object *) this, godot_bone_node);
}

void gltfskeleton::set_joints(const pool_int_array joints) {
	___godot_icall_void_PoolIntArray(___mb.mb_set_joints, (const object *) this, joints);
}

void gltfskeleton::set_roots(const pool_int_array roots) {
	___godot_icall_void_PoolIntArray(___mb.mb_set_roots, (const object *) this, roots);
}

void gltfskeleton::set_unique_names(const array unique_names) {
	___godot_icall_void_Array(___mb.mb_set_unique_names, (const object *) this, unique_names);
}

}