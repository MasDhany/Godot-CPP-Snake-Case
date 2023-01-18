#include "mesh.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "material.hpp"
#include "mesh.hpp"
#include "shape.hpp"
#include "triangle_mesh.hpp"


namespace gd {


mesh::___method_bindings mesh::___mb = {};

void *mesh::_detail_class_tag = nullptr;

void mesh::___init_method_bindings() {
	___mb.mb_create_convex_shape = gd::api->godot_method_bind_get_method("Mesh", "create_convex_shape");
	___mb.mb_create_outline = gd::api->godot_method_bind_get_method("Mesh", "create_outline");
	___mb.mb_create_trimesh_shape = gd::api->godot_method_bind_get_method("Mesh", "create_trimesh_shape");
	___mb.mb_generate_triangle_mesh = gd::api->godot_method_bind_get_method("Mesh", "generate_triangle_mesh");
	___mb.mb_get_aabb = gd::api->godot_method_bind_get_method("Mesh", "get_aabb");
	___mb.mb_get_faces = gd::api->godot_method_bind_get_method("Mesh", "get_faces");
	___mb.mb_get_lightmap_size_hint = gd::api->godot_method_bind_get_method("Mesh", "get_lightmap_size_hint");
	___mb.mb_get_surface_count = gd::api->godot_method_bind_get_method("Mesh", "get_surface_count");
	___mb.mb_set_lightmap_size_hint = gd::api->godot_method_bind_get_method("Mesh", "set_lightmap_size_hint");
	___mb.mb_surface_get_arrays = gd::api->godot_method_bind_get_method("Mesh", "surface_get_arrays");
	___mb.mb_surface_get_blend_shape_arrays = gd::api->godot_method_bind_get_method("Mesh", "surface_get_blend_shape_arrays");
	___mb.mb_surface_get_material = gd::api->godot_method_bind_get_method("Mesh", "surface_get_material");
	___mb.mb_surface_set_material = gd::api->godot_method_bind_get_method("Mesh", "surface_set_material");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Mesh");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

ref<shape> mesh::create_convex_shape(const bool clean, const bool simplify) const {
	return ref<shape>::__internal_constructor(___godot_icall_Object_bool_bool(___mb.mb_create_convex_shape, (const object *) this, clean, simplify));
}

ref<mesh> mesh::create_outline(const real_t margin) const {
	return ref<mesh>::__internal_constructor(___godot_icall_Object_float(___mb.mb_create_outline, (const object *) this, margin));
}

ref<shape> mesh::create_trimesh_shape() const {
	return ref<shape>::__internal_constructor(___godot_icall_Object(___mb.mb_create_trimesh_shape, (const object *) this));
}

ref<triangle_mesh> mesh::generate_triangle_mesh() const {
	return ref<triangle_mesh>::__internal_constructor(___godot_icall_Object(___mb.mb_generate_triangle_mesh, (const object *) this));
}

aabb mesh::get_aabb() const {
	return ___godot_icall_AABB(___mb.mb_get_aabb, (const object *) this);
}

pool_vector3_array mesh::get_faces() const {
	return ___godot_icall_PoolVector3Array(___mb.mb_get_faces, (const object *) this);
}

vector2 mesh::get_lightmap_size_hint() const {
	return ___godot_icall_Vector2(___mb.mb_get_lightmap_size_hint, (const object *) this);
}

int64_t mesh::get_surface_count() const {
	return ___godot_icall_int(___mb.mb_get_surface_count, (const object *) this);
}

void mesh::set_lightmap_size_hint(const vector2 size) {
	___godot_icall_void_Vector2(___mb.mb_set_lightmap_size_hint, (const object *) this, size);
}

array mesh::surface_get_arrays(const int64_t surf_idx) const {
	return ___godot_icall_Array_int(___mb.mb_surface_get_arrays, (const object *) this, surf_idx);
}

array mesh::surface_get_blend_shape_arrays(const int64_t surf_idx) const {
	return ___godot_icall_Array_int(___mb.mb_surface_get_blend_shape_arrays, (const object *) this, surf_idx);
}

ref<material> mesh::surface_get_material(const int64_t surf_idx) const {
	return ref<material>::__internal_constructor(___godot_icall_Object_int(___mb.mb_surface_get_material, (const object *) this, surf_idx));
}

void mesh::surface_set_material(const int64_t surf_idx, const ref<material> material_) {
	___godot_icall_void_int_Object(___mb.mb_surface_set_material, (const object *) this, surf_idx, material_.ptr());
}

}