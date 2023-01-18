#include "csgmesh.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "material.hpp"
#include "mesh.hpp"


namespace gd {


csgmesh::___method_bindings csgmesh::___mb = {};

void *csgmesh::_detail_class_tag = nullptr;

void csgmesh::___init_method_bindings() {
	___mb.mb__mesh_changed = gd::api->godot_method_bind_get_method("CSGMesh", "_mesh_changed");
	___mb.mb_get_material = gd::api->godot_method_bind_get_method("CSGMesh", "get_material");
	___mb.mb_get_mesh = gd::api->godot_method_bind_get_method("CSGMesh", "get_mesh");
	___mb.mb_set_material = gd::api->godot_method_bind_get_method("CSGMesh", "set_material");
	___mb.mb_set_mesh = gd::api->godot_method_bind_get_method("CSGMesh", "set_mesh");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "CSGMesh");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

csgmesh *csgmesh::_new()
{
	return (csgmesh *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"CSGMesh")());
}
void csgmesh::_mesh_changed() {
	___godot_icall_void(___mb.mb__mesh_changed, (const object *) this);
}

ref<material> csgmesh::get_material() const {
	return ref<material>::__internal_constructor(___godot_icall_Object(___mb.mb_get_material, (const object *) this));
}

ref<mesh> csgmesh::get_mesh() {
	return ref<mesh>::__internal_constructor(___godot_icall_Object(___mb.mb_get_mesh, (const object *) this));
}

void csgmesh::set_material(const ref<material> material_) {
	___godot_icall_void_Object(___mb.mb_set_material, (const object *) this, material_.ptr());
}

void csgmesh::set_mesh(const ref<mesh> mesh_) {
	___godot_icall_void_Object(___mb.mb_set_mesh, (const object *) this, mesh_.ptr());
}

}