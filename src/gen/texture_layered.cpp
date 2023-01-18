#include "texture_layered.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "image.hpp"


namespace gd {


texture_layered::___method_bindings texture_layered::___mb = {};

void *texture_layered::_detail_class_tag = nullptr;

void texture_layered::___init_method_bindings() {
	___mb.mb__get_data = gd::api->godot_method_bind_get_method("TextureLayered", "_get_data");
	___mb.mb__set_data = gd::api->godot_method_bind_get_method("TextureLayered", "_set_data");
	___mb.mb_get_depth = gd::api->godot_method_bind_get_method("TextureLayered", "get_depth");
	___mb.mb_get_flags = gd::api->godot_method_bind_get_method("TextureLayered", "get_flags");
	___mb.mb_get_format = gd::api->godot_method_bind_get_method("TextureLayered", "get_format");
	___mb.mb_get_height = gd::api->godot_method_bind_get_method("TextureLayered", "get_height");
	___mb.mb_get_layer_data = gd::api->godot_method_bind_get_method("TextureLayered", "get_layer_data");
	___mb.mb_get_width = gd::api->godot_method_bind_get_method("TextureLayered", "get_width");
	___mb.mb_set_data_partial = gd::api->godot_method_bind_get_method("TextureLayered", "set_data_partial");
	___mb.mb_set_flags = gd::api->godot_method_bind_get_method("TextureLayered", "set_flags");
	___mb.mb_set_layer_data = gd::api->godot_method_bind_get_method("TextureLayered", "set_layer_data");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "TextureLayered");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

dictionary texture_layered::_get_data() const {
	return ___godot_icall_Dictionary(___mb.mb__get_data, (const object *) this);
}

void texture_layered::_set_data(const dictionary data) {
	___godot_icall_void_Dictionary(___mb.mb__set_data, (const object *) this, data);
}

int64_t texture_layered::get_depth() const {
	return ___godot_icall_int(___mb.mb_get_depth, (const object *) this);
}

int64_t texture_layered::get_flags() const {
	return ___godot_icall_int(___mb.mb_get_flags, (const object *) this);
}

image::Format texture_layered::get_format() const {
	return (image::Format) ___godot_icall_int(___mb.mb_get_format, (const object *) this);
}

int64_t texture_layered::get_height() const {
	return ___godot_icall_int(___mb.mb_get_height, (const object *) this);
}

ref<image> texture_layered::get_layer_data(const int64_t layer) const {
	return ref<image>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_layer_data, (const object *) this, layer));
}

int64_t texture_layered::get_width() const {
	return ___godot_icall_int(___mb.mb_get_width, (const object *) this);
}

void texture_layered::set_data_partial(const ref<image> image_, const int64_t x_offset, const int64_t y_offset, const int64_t layer, const int64_t mipmap) {
	___godot_icall_void_Object_int_int_int_int(___mb.mb_set_data_partial, (const object *) this, image_.ptr(), x_offset, y_offset, layer, mipmap);
}

void texture_layered::set_flags(const int64_t flags) {
	___godot_icall_void_int(___mb.mb_set_flags, (const object *) this, flags);
}

void texture_layered::set_layer_data(const ref<image> image_, const int64_t layer) {
	___godot_icall_void_Object_int(___mb.mb_set_layer_data, (const object *) this, image_.ptr(), layer);
}

}