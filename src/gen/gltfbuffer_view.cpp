#include "gltfbuffer_view.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


gltfbuffer_view::___method_bindings gltfbuffer_view::___mb = {};

void *gltfbuffer_view::_detail_class_tag = nullptr;

void gltfbuffer_view::___init_method_bindings() {
	___mb.mb_get_buffer = gd::api->godot_method_bind_get_method("GLTFBufferView", "get_buffer");
	___mb.mb_get_byte_length = gd::api->godot_method_bind_get_method("GLTFBufferView", "get_byte_length");
	___mb.mb_get_byte_offset = gd::api->godot_method_bind_get_method("GLTFBufferView", "get_byte_offset");
	___mb.mb_get_byte_stride = gd::api->godot_method_bind_get_method("GLTFBufferView", "get_byte_stride");
	___mb.mb_get_indices = gd::api->godot_method_bind_get_method("GLTFBufferView", "get_indices");
	___mb.mb_set_buffer = gd::api->godot_method_bind_get_method("GLTFBufferView", "set_buffer");
	___mb.mb_set_byte_length = gd::api->godot_method_bind_get_method("GLTFBufferView", "set_byte_length");
	___mb.mb_set_byte_offset = gd::api->godot_method_bind_get_method("GLTFBufferView", "set_byte_offset");
	___mb.mb_set_byte_stride = gd::api->godot_method_bind_get_method("GLTFBufferView", "set_byte_stride");
	___mb.mb_set_indices = gd::api->godot_method_bind_get_method("GLTFBufferView", "set_indices");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "GLTFBufferView");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

gltfbuffer_view *gltfbuffer_view::_new()
{
	return (gltfbuffer_view *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"GLTFBufferView")());
}
int64_t gltfbuffer_view::get_buffer() {
	return ___godot_icall_int(___mb.mb_get_buffer, (const object *) this);
}

int64_t gltfbuffer_view::get_byte_length() {
	return ___godot_icall_int(___mb.mb_get_byte_length, (const object *) this);
}

int64_t gltfbuffer_view::get_byte_offset() {
	return ___godot_icall_int(___mb.mb_get_byte_offset, (const object *) this);
}

int64_t gltfbuffer_view::get_byte_stride() {
	return ___godot_icall_int(___mb.mb_get_byte_stride, (const object *) this);
}

bool gltfbuffer_view::get_indices() {
	return ___godot_icall_bool(___mb.mb_get_indices, (const object *) this);
}

void gltfbuffer_view::set_buffer(const int64_t buffer) {
	___godot_icall_void_int(___mb.mb_set_buffer, (const object *) this, buffer);
}

void gltfbuffer_view::set_byte_length(const int64_t byte_length) {
	___godot_icall_void_int(___mb.mb_set_byte_length, (const object *) this, byte_length);
}

void gltfbuffer_view::set_byte_offset(const int64_t byte_offset) {
	___godot_icall_void_int(___mb.mb_set_byte_offset, (const object *) this, byte_offset);
}

void gltfbuffer_view::set_byte_stride(const int64_t byte_stride) {
	___godot_icall_void_int(___mb.mb_set_byte_stride, (const object *) this, byte_stride);
}

void gltfbuffer_view::set_indices(const bool indices) {
	___godot_icall_void_bool(___mb.mb_set_indices, (const object *) this, indices);
}

}