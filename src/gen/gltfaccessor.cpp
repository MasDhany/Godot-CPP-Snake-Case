#include "gltfaccessor.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


gltfaccessor::___method_bindings gltfaccessor::___mb = {};

void *gltfaccessor::_detail_class_tag = nullptr;

void gltfaccessor::___init_method_bindings() {
	___mb.mb_get_buffer_view = gd::api->godot_method_bind_get_method("GLTFAccessor", "get_buffer_view");
	___mb.mb_get_byte_offset = gd::api->godot_method_bind_get_method("GLTFAccessor", "get_byte_offset");
	___mb.mb_get_component_type = gd::api->godot_method_bind_get_method("GLTFAccessor", "get_component_type");
	___mb.mb_get_count = gd::api->godot_method_bind_get_method("GLTFAccessor", "get_count");
	___mb.mb_get_max = gd::api->godot_method_bind_get_method("GLTFAccessor", "get_max");
	___mb.mb_get_min = gd::api->godot_method_bind_get_method("GLTFAccessor", "get_min");
	___mb.mb_get_normalized = gd::api->godot_method_bind_get_method("GLTFAccessor", "get_normalized");
	___mb.mb_get_sparse_count = gd::api->godot_method_bind_get_method("GLTFAccessor", "get_sparse_count");
	___mb.mb_get_sparse_indices_buffer_view = gd::api->godot_method_bind_get_method("GLTFAccessor", "get_sparse_indices_buffer_view");
	___mb.mb_get_sparse_indices_byte_offset = gd::api->godot_method_bind_get_method("GLTFAccessor", "get_sparse_indices_byte_offset");
	___mb.mb_get_sparse_indices_component_type = gd::api->godot_method_bind_get_method("GLTFAccessor", "get_sparse_indices_component_type");
	___mb.mb_get_sparse_values_buffer_view = gd::api->godot_method_bind_get_method("GLTFAccessor", "get_sparse_values_buffer_view");
	___mb.mb_get_sparse_values_byte_offset = gd::api->godot_method_bind_get_method("GLTFAccessor", "get_sparse_values_byte_offset");
	___mb.mb_get_type = gd::api->godot_method_bind_get_method("GLTFAccessor", "get_type");
	___mb.mb_set_buffer_view = gd::api->godot_method_bind_get_method("GLTFAccessor", "set_buffer_view");
	___mb.mb_set_byte_offset = gd::api->godot_method_bind_get_method("GLTFAccessor", "set_byte_offset");
	___mb.mb_set_component_type = gd::api->godot_method_bind_get_method("GLTFAccessor", "set_component_type");
	___mb.mb_set_count = gd::api->godot_method_bind_get_method("GLTFAccessor", "set_count");
	___mb.mb_set_max = gd::api->godot_method_bind_get_method("GLTFAccessor", "set_max");
	___mb.mb_set_min = gd::api->godot_method_bind_get_method("GLTFAccessor", "set_min");
	___mb.mb_set_normalized = gd::api->godot_method_bind_get_method("GLTFAccessor", "set_normalized");
	___mb.mb_set_sparse_count = gd::api->godot_method_bind_get_method("GLTFAccessor", "set_sparse_count");
	___mb.mb_set_sparse_indices_buffer_view = gd::api->godot_method_bind_get_method("GLTFAccessor", "set_sparse_indices_buffer_view");
	___mb.mb_set_sparse_indices_byte_offset = gd::api->godot_method_bind_get_method("GLTFAccessor", "set_sparse_indices_byte_offset");
	___mb.mb_set_sparse_indices_component_type = gd::api->godot_method_bind_get_method("GLTFAccessor", "set_sparse_indices_component_type");
	___mb.mb_set_sparse_values_buffer_view = gd::api->godot_method_bind_get_method("GLTFAccessor", "set_sparse_values_buffer_view");
	___mb.mb_set_sparse_values_byte_offset = gd::api->godot_method_bind_get_method("GLTFAccessor", "set_sparse_values_byte_offset");
	___mb.mb_set_type = gd::api->godot_method_bind_get_method("GLTFAccessor", "set_type");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "GLTFAccessor");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

gltfaccessor *gltfaccessor::_new()
{
	return (gltfaccessor *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"GLTFAccessor")());
}
int64_t gltfaccessor::get_buffer_view() {
	return ___godot_icall_int(___mb.mb_get_buffer_view, (const object *) this);
}

int64_t gltfaccessor::get_byte_offset() {
	return ___godot_icall_int(___mb.mb_get_byte_offset, (const object *) this);
}

int64_t gltfaccessor::get_component_type() {
	return ___godot_icall_int(___mb.mb_get_component_type, (const object *) this);
}

int64_t gltfaccessor::get_count() {
	return ___godot_icall_int(___mb.mb_get_count, (const object *) this);
}

pool_real_array gltfaccessor::get_max() {
	return ___godot_icall_PoolRealArray(___mb.mb_get_max, (const object *) this);
}

pool_real_array gltfaccessor::get_min() {
	return ___godot_icall_PoolRealArray(___mb.mb_get_min, (const object *) this);
}

bool gltfaccessor::get_normalized() {
	return ___godot_icall_bool(___mb.mb_get_normalized, (const object *) this);
}

int64_t gltfaccessor::get_sparse_count() {
	return ___godot_icall_int(___mb.mb_get_sparse_count, (const object *) this);
}

int64_t gltfaccessor::get_sparse_indices_buffer_view() {
	return ___godot_icall_int(___mb.mb_get_sparse_indices_buffer_view, (const object *) this);
}

int64_t gltfaccessor::get_sparse_indices_byte_offset() {
	return ___godot_icall_int(___mb.mb_get_sparse_indices_byte_offset, (const object *) this);
}

int64_t gltfaccessor::get_sparse_indices_component_type() {
	return ___godot_icall_int(___mb.mb_get_sparse_indices_component_type, (const object *) this);
}

int64_t gltfaccessor::get_sparse_values_buffer_view() {
	return ___godot_icall_int(___mb.mb_get_sparse_values_buffer_view, (const object *) this);
}

int64_t gltfaccessor::get_sparse_values_byte_offset() {
	return ___godot_icall_int(___mb.mb_get_sparse_values_byte_offset, (const object *) this);
}

int64_t gltfaccessor::get_type() {
	return ___godot_icall_int(___mb.mb_get_type, (const object *) this);
}

void gltfaccessor::set_buffer_view(const int64_t buffer_view) {
	___godot_icall_void_int(___mb.mb_set_buffer_view, (const object *) this, buffer_view);
}

void gltfaccessor::set_byte_offset(const int64_t byte_offset) {
	___godot_icall_void_int(___mb.mb_set_byte_offset, (const object *) this, byte_offset);
}

void gltfaccessor::set_component_type(const int64_t component_type) {
	___godot_icall_void_int(___mb.mb_set_component_type, (const object *) this, component_type);
}

void gltfaccessor::set_count(const int64_t count) {
	___godot_icall_void_int(___mb.mb_set_count, (const object *) this, count);
}

void gltfaccessor::set_max(const pool_real_array max) {
	___godot_icall_void_PoolRealArray(___mb.mb_set_max, (const object *) this, max);
}

void gltfaccessor::set_min(const pool_real_array min) {
	___godot_icall_void_PoolRealArray(___mb.mb_set_min, (const object *) this, min);
}

void gltfaccessor::set_normalized(const bool normalized) {
	___godot_icall_void_bool(___mb.mb_set_normalized, (const object *) this, normalized);
}

void gltfaccessor::set_sparse_count(const int64_t sparse_count) {
	___godot_icall_void_int(___mb.mb_set_sparse_count, (const object *) this, sparse_count);
}

void gltfaccessor::set_sparse_indices_buffer_view(const int64_t sparse_indices_buffer_view) {
	___godot_icall_void_int(___mb.mb_set_sparse_indices_buffer_view, (const object *) this, sparse_indices_buffer_view);
}

void gltfaccessor::set_sparse_indices_byte_offset(const int64_t sparse_indices_byte_offset) {
	___godot_icall_void_int(___mb.mb_set_sparse_indices_byte_offset, (const object *) this, sparse_indices_byte_offset);
}

void gltfaccessor::set_sparse_indices_component_type(const int64_t sparse_indices_component_type) {
	___godot_icall_void_int(___mb.mb_set_sparse_indices_component_type, (const object *) this, sparse_indices_component_type);
}

void gltfaccessor::set_sparse_values_buffer_view(const int64_t sparse_values_buffer_view) {
	___godot_icall_void_int(___mb.mb_set_sparse_values_buffer_view, (const object *) this, sparse_values_buffer_view);
}

void gltfaccessor::set_sparse_values_byte_offset(const int64_t sparse_values_byte_offset) {
	___godot_icall_void_int(___mb.mb_set_sparse_values_byte_offset, (const object *) this, sparse_values_byte_offset);
}

void gltfaccessor::set_type(const int64_t type) {
	___godot_icall_void_int(___mb.mb_set_type, (const object *) this, type);
}

}