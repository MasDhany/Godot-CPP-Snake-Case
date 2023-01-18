#include "image_texture.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "image.hpp"


namespace gd {


image_texture::___method_bindings image_texture::___mb = {};

void *image_texture::_detail_class_tag = nullptr;

void image_texture::___init_method_bindings() {
	___mb.mb__reload_hook = gd::api->godot_method_bind_get_method("ImageTexture", "_reload_hook");
	___mb.mb_create = gd::api->godot_method_bind_get_method("ImageTexture", "create");
	___mb.mb_create_from_image = gd::api->godot_method_bind_get_method("ImageTexture", "create_from_image");
	___mb.mb_get_format = gd::api->godot_method_bind_get_method("ImageTexture", "get_format");
	___mb.mb_get_lossy_storage_quality = gd::api->godot_method_bind_get_method("ImageTexture", "get_lossy_storage_quality");
	___mb.mb_get_storage = gd::api->godot_method_bind_get_method("ImageTexture", "get_storage");
	___mb.mb_load = gd::api->godot_method_bind_get_method("ImageTexture", "load");
	___mb.mb_set_data = gd::api->godot_method_bind_get_method("ImageTexture", "set_data");
	___mb.mb_set_lossy_storage_quality = gd::api->godot_method_bind_get_method("ImageTexture", "set_lossy_storage_quality");
	___mb.mb_set_size_override = gd::api->godot_method_bind_get_method("ImageTexture", "set_size_override");
	___mb.mb_set_storage = gd::api->godot_method_bind_get_method("ImageTexture", "set_storage");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ImageTexture");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

image_texture *image_texture::_new()
{
	return (image_texture *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ImageTexture")());
}
void image_texture::_reload_hook(const rid rid_) {
	___godot_icall_void_RID(___mb.mb__reload_hook, (const object *) this, rid_);
}

void image_texture::create(const int64_t width, const int64_t height, const int64_t format, const int64_t flags) {
	___godot_icall_void_int_int_int_int(___mb.mb_create, (const object *) this, width, height, format, flags);
}

void image_texture::create_from_image(const ref<image> image_, const int64_t flags) {
	___godot_icall_void_Object_int(___mb.mb_create_from_image, (const object *) this, image_.ptr(), flags);
}

image::Format image_texture::get_format() const {
	return (image::Format) ___godot_icall_int(___mb.mb_get_format, (const object *) this);
}

real_t image_texture::get_lossy_storage_quality() const {
	return ___godot_icall_float(___mb.mb_get_lossy_storage_quality, (const object *) this);
}

image_texture::Storage image_texture::get_storage() const {
	return (image_texture::Storage) ___godot_icall_int(___mb.mb_get_storage, (const object *) this);
}

error image_texture::load(const string path_) {
	return (error) ___godot_icall_int_String(___mb.mb_load, (const object *) this, path_);
}

void image_texture::set_data(const ref<image> image_) {
	___godot_icall_void_Object(___mb.mb_set_data, (const object *) this, image_.ptr());
}

void image_texture::set_lossy_storage_quality(const real_t quality) {
	___godot_icall_void_float(___mb.mb_set_lossy_storage_quality, (const object *) this, quality);
}

void image_texture::set_size_override(const vector2 size) {
	___godot_icall_void_Vector2(___mb.mb_set_size_override, (const object *) this, size);
}

void image_texture::set_storage(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_storage, (const object *) this, mode);
}

}