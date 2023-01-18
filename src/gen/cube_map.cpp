#include "cube_map.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "image.hpp"


namespace gd {


cube_map::___method_bindings cube_map::___mb = {};

void *cube_map::_detail_class_tag = nullptr;

void cube_map::___init_method_bindings() {
	___mb.mb_get_flags = gd::api->godot_method_bind_get_method("CubeMap", "get_flags");
	___mb.mb_get_height = gd::api->godot_method_bind_get_method("CubeMap", "get_height");
	___mb.mb_get_lossy_storage_quality = gd::api->godot_method_bind_get_method("CubeMap", "get_lossy_storage_quality");
	___mb.mb_get_side = gd::api->godot_method_bind_get_method("CubeMap", "get_side");
	___mb.mb_get_storage = gd::api->godot_method_bind_get_method("CubeMap", "get_storage");
	___mb.mb_get_width = gd::api->godot_method_bind_get_method("CubeMap", "get_width");
	___mb.mb_set_flags = gd::api->godot_method_bind_get_method("CubeMap", "set_flags");
	___mb.mb_set_lossy_storage_quality = gd::api->godot_method_bind_get_method("CubeMap", "set_lossy_storage_quality");
	___mb.mb_set_side = gd::api->godot_method_bind_get_method("CubeMap", "set_side");
	___mb.mb_set_storage = gd::api->godot_method_bind_get_method("CubeMap", "set_storage");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "CubeMap");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

cube_map *cube_map::_new()
{
	return (cube_map *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"CubeMap")());
}
int64_t cube_map::get_flags() const {
	return ___godot_icall_int(___mb.mb_get_flags, (const object *) this);
}

int64_t cube_map::get_height() const {
	return ___godot_icall_int(___mb.mb_get_height, (const object *) this);
}

real_t cube_map::get_lossy_storage_quality() const {
	return ___godot_icall_float(___mb.mb_get_lossy_storage_quality, (const object *) this);
}

ref<image> cube_map::get_side(const int64_t side) const {
	return ref<image>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_side, (const object *) this, side));
}

cube_map::Storage cube_map::get_storage() const {
	return (cube_map::Storage) ___godot_icall_int(___mb.mb_get_storage, (const object *) this);
}

int64_t cube_map::get_width() const {
	return ___godot_icall_int(___mb.mb_get_width, (const object *) this);
}

void cube_map::set_flags(const int64_t flags) {
	___godot_icall_void_int(___mb.mb_set_flags, (const object *) this, flags);
}

void cube_map::set_lossy_storage_quality(const real_t quality) {
	___godot_icall_void_float(___mb.mb_set_lossy_storage_quality, (const object *) this, quality);
}

void cube_map::set_side(const int64_t side, const ref<image> image_) {
	___godot_icall_void_int_Object(___mb.mb_set_side, (const object *) this, side, image_.ptr());
}

void cube_map::set_storage(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_storage, (const object *) this, mode);
}

}