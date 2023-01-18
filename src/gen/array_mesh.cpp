#include "array_mesh.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


array_mesh::___method_bindings array_mesh::___mb = {};

void *array_mesh::_detail_class_tag = nullptr;

void array_mesh::___init_method_bindings() {
	___mb.mb_add_blend_shape = gd::api->godot_method_bind_get_method("ArrayMesh", "add_blend_shape");
	___mb.mb_add_surface_from_arrays = gd::api->godot_method_bind_get_method("ArrayMesh", "add_surface_from_arrays");
	___mb.mb_clear_blend_shapes = gd::api->godot_method_bind_get_method("ArrayMesh", "clear_blend_shapes");
	___mb.mb_clear_surfaces = gd::api->godot_method_bind_get_method("ArrayMesh", "clear_surfaces");
	___mb.mb_get_blend_shape_count = gd::api->godot_method_bind_get_method("ArrayMesh", "get_blend_shape_count");
	___mb.mb_get_blend_shape_mode = gd::api->godot_method_bind_get_method("ArrayMesh", "get_blend_shape_mode");
	___mb.mb_get_blend_shape_name = gd::api->godot_method_bind_get_method("ArrayMesh", "get_blend_shape_name");
	___mb.mb_get_custom_aabb = gd::api->godot_method_bind_get_method("ArrayMesh", "get_custom_aabb");
	___mb.mb_lightmap_unwrap = gd::api->godot_method_bind_get_method("ArrayMesh", "lightmap_unwrap");
	___mb.mb_regen_normalmaps = gd::api->godot_method_bind_get_method("ArrayMesh", "regen_normalmaps");
	___mb.mb_set_blend_shape_mode = gd::api->godot_method_bind_get_method("ArrayMesh", "set_blend_shape_mode");
	___mb.mb_set_blend_shape_name = gd::api->godot_method_bind_get_method("ArrayMesh", "set_blend_shape_name");
	___mb.mb_set_custom_aabb = gd::api->godot_method_bind_get_method("ArrayMesh", "set_custom_aabb");
	___mb.mb_surface_find_by_name = gd::api->godot_method_bind_get_method("ArrayMesh", "surface_find_by_name");
	___mb.mb_surface_get_array_index_len = gd::api->godot_method_bind_get_method("ArrayMesh", "surface_get_array_index_len");
	___mb.mb_surface_get_array_len = gd::api->godot_method_bind_get_method("ArrayMesh", "surface_get_array_len");
	___mb.mb_surface_get_format = gd::api->godot_method_bind_get_method("ArrayMesh", "surface_get_format");
	___mb.mb_surface_get_name = gd::api->godot_method_bind_get_method("ArrayMesh", "surface_get_name");
	___mb.mb_surface_get_primitive_type = gd::api->godot_method_bind_get_method("ArrayMesh", "surface_get_primitive_type");
	___mb.mb_surface_remove = gd::api->godot_method_bind_get_method("ArrayMesh", "surface_remove");
	___mb.mb_surface_set_name = gd::api->godot_method_bind_get_method("ArrayMesh", "surface_set_name");
	___mb.mb_surface_update_region = gd::api->godot_method_bind_get_method("ArrayMesh", "surface_update_region");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ArrayMesh");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

array_mesh *array_mesh::_new()
{
	return (array_mesh *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ArrayMesh")());
}
void array_mesh::add_blend_shape(const string name) {
	___godot_icall_void_String(___mb.mb_add_blend_shape, (const object *) this, name);
}

void array_mesh::add_surface_from_arrays(const int64_t primitive, const array arrays, const array blend_shapes, const int64_t compress_flags) {
	___godot_icall_void_int_Array_Array_int(___mb.mb_add_surface_from_arrays, (const object *) this, primitive, arrays, blend_shapes, compress_flags);
}

void array_mesh::clear_blend_shapes() {
	___godot_icall_void(___mb.mb_clear_blend_shapes, (const object *) this);
}

void array_mesh::clear_surfaces() {
	___godot_icall_void(___mb.mb_clear_surfaces, (const object *) this);
}

int64_t array_mesh::get_blend_shape_count() const {
	return ___godot_icall_int(___mb.mb_get_blend_shape_count, (const object *) this);
}

mesh::BlendShapeMode array_mesh::get_blend_shape_mode() const {
	return (mesh::BlendShapeMode) ___godot_icall_int(___mb.mb_get_blend_shape_mode, (const object *) this);
}

string array_mesh::get_blend_shape_name(const int64_t index) const {
	return ___godot_icall_String_int(___mb.mb_get_blend_shape_name, (const object *) this, index);
}

aabb array_mesh::get_custom_aabb() const {
	return ___godot_icall_AABB(___mb.mb_get_custom_aabb, (const object *) this);
}

error array_mesh::lightmap_unwrap(const transform transform_, const real_t texel_size) {
	return (error) ___godot_icall_int_Transform_float(___mb.mb_lightmap_unwrap, (const object *) this, transform_, texel_size);
}

void array_mesh::regen_normalmaps() {
	___godot_icall_void(___mb.mb_regen_normalmaps, (const object *) this);
}

void array_mesh::set_blend_shape_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_blend_shape_mode, (const object *) this, mode);
}

void array_mesh::set_blend_shape_name(const int64_t index, const string name) {
	___godot_icall_void_int_String(___mb.mb_set_blend_shape_name, (const object *) this, index, name);
}

void array_mesh::set_custom_aabb(const aabb aabb_) {
	___godot_icall_void_AABB(___mb.mb_set_custom_aabb, (const object *) this, aabb_);
}

int64_t array_mesh::surface_find_by_name(const string name) const {
	return ___godot_icall_int_String(___mb.mb_surface_find_by_name, (const object *) this, name);
}

int64_t array_mesh::surface_get_array_index_len(const int64_t surf_idx) const {
	return ___godot_icall_int_int(___mb.mb_surface_get_array_index_len, (const object *) this, surf_idx);
}

int64_t array_mesh::surface_get_array_len(const int64_t surf_idx) const {
	return ___godot_icall_int_int(___mb.mb_surface_get_array_len, (const object *) this, surf_idx);
}

int64_t array_mesh::surface_get_format(const int64_t surf_idx) const {
	return ___godot_icall_int_int(___mb.mb_surface_get_format, (const object *) this, surf_idx);
}

string array_mesh::surface_get_name(const int64_t surf_idx) const {
	return ___godot_icall_String_int(___mb.mb_surface_get_name, (const object *) this, surf_idx);
}

mesh::PrimitiveType array_mesh::surface_get_primitive_type(const int64_t surf_idx) const {
	return (mesh::PrimitiveType) ___godot_icall_int_int(___mb.mb_surface_get_primitive_type, (const object *) this, surf_idx);
}

void array_mesh::surface_remove(const int64_t surf_idx) {
	___godot_icall_void_int(___mb.mb_surface_remove, (const object *) this, surf_idx);
}

void array_mesh::surface_set_name(const int64_t surf_idx, const string name) {
	___godot_icall_void_int_String(___mb.mb_surface_set_name, (const object *) this, surf_idx, name);
}

void array_mesh::surface_update_region(const int64_t surf_idx, const int64_t offset, const pool_byte_array data) {
	___godot_icall_void_int_int_PoolByteArray(___mb.mb_surface_update_region, (const object *) this, surf_idx, offset, data);
}

}