#include "gltfmesh.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "array_mesh.hpp"


namespace gd {


gltfmesh::___method_bindings gltfmesh::___mb = {};

void *gltfmesh::_detail_class_tag = nullptr;

void gltfmesh::___init_method_bindings() {
	___mb.mb_get_blend_weights = gd::api->godot_method_bind_get_method("GLTFMesh", "get_blend_weights");
	___mb.mb_get_instance_materials = gd::api->godot_method_bind_get_method("GLTFMesh", "get_instance_materials");
	___mb.mb_get_mesh = gd::api->godot_method_bind_get_method("GLTFMesh", "get_mesh");
	___mb.mb_set_blend_weights = gd::api->godot_method_bind_get_method("GLTFMesh", "set_blend_weights");
	___mb.mb_set_instance_materials = gd::api->godot_method_bind_get_method("GLTFMesh", "set_instance_materials");
	___mb.mb_set_mesh = gd::api->godot_method_bind_get_method("GLTFMesh", "set_mesh");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "GLTFMesh");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

pool_real_array gltfmesh::get_blend_weights() {
	return ___godot_icall_PoolRealArray(___mb.mb_get_blend_weights, (const object *) this);
}

array gltfmesh::get_instance_materials() {
	return ___godot_icall_Array(___mb.mb_get_instance_materials, (const object *) this);
}

ref<array_mesh> gltfmesh::get_mesh() {
	return ref<array_mesh>::__internal_constructor(___godot_icall_Object(___mb.mb_get_mesh, (const object *) this));
}

void gltfmesh::set_blend_weights(const pool_real_array blend_weights) {
	___godot_icall_void_PoolRealArray(___mb.mb_set_blend_weights, (const object *) this, blend_weights);
}

void gltfmesh::set_instance_materials(const array instance_materials) {
	___godot_icall_void_Array(___mb.mb_set_instance_materials, (const object *) this, instance_materials);
}

void gltfmesh::set_mesh(const ref<array_mesh> mesh_) {
	___godot_icall_void_Object(___mb.mb_set_mesh, (const object *) this, mesh_.ptr());
}

}