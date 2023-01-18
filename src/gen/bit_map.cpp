#include "bit_map.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "image.hpp"


namespace gd {


bit_map::___method_bindings bit_map::___mb = {};

void *bit_map::_detail_class_tag = nullptr;

void bit_map::___init_method_bindings() {
	___mb.mb__get_data = gd::api->godot_method_bind_get_method("BitMap", "_get_data");
	___mb.mb__set_data = gd::api->godot_method_bind_get_method("BitMap", "_set_data");
	___mb.mb_convert_to_image = gd::api->godot_method_bind_get_method("BitMap", "convert_to_image");
	___mb.mb_create = gd::api->godot_method_bind_get_method("BitMap", "create");
	___mb.mb_create_from_image_alpha = gd::api->godot_method_bind_get_method("BitMap", "create_from_image_alpha");
	___mb.mb_get_bit = gd::api->godot_method_bind_get_method("BitMap", "get_bit");
	___mb.mb_get_size = gd::api->godot_method_bind_get_method("BitMap", "get_size");
	___mb.mb_get_true_bit_count = gd::api->godot_method_bind_get_method("BitMap", "get_true_bit_count");
	___mb.mb_grow_mask = gd::api->godot_method_bind_get_method("BitMap", "grow_mask");
	___mb.mb_opaque_to_polygons = gd::api->godot_method_bind_get_method("BitMap", "opaque_to_polygons");
	___mb.mb_resize = gd::api->godot_method_bind_get_method("BitMap", "resize");
	___mb.mb_set_bit = gd::api->godot_method_bind_get_method("BitMap", "set_bit");
	___mb.mb_set_bit_rect = gd::api->godot_method_bind_get_method("BitMap", "set_bit_rect");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "BitMap");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

bit_map *bit_map::_new()
{
	return (bit_map *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"BitMap")());
}
dictionary bit_map::_get_data() const {
	return ___godot_icall_Dictionary(___mb.mb__get_data, (const object *) this);
}

void bit_map::_set_data(const dictionary arg0) {
	___godot_icall_void_Dictionary(___mb.mb__set_data, (const object *) this, arg0);
}

ref<image> bit_map::convert_to_image() const {
	return ref<image>::__internal_constructor(___godot_icall_Object(___mb.mb_convert_to_image, (const object *) this));
}

void bit_map::create(const vector2 size) {
	___godot_icall_void_Vector2(___mb.mb_create, (const object *) this, size);
}

void bit_map::create_from_image_alpha(const ref<image> image_, const real_t threshold) {
	___godot_icall_void_Object_float(___mb.mb_create_from_image_alpha, (const object *) this, image_.ptr(), threshold);
}

bool bit_map::get_bit(const vector2 position) const {
	return ___godot_icall_bool_Vector2(___mb.mb_get_bit, (const object *) this, position);
}

vector2 bit_map::get_size() const {
	return ___godot_icall_Vector2(___mb.mb_get_size, (const object *) this);
}

int64_t bit_map::get_true_bit_count() const {
	return ___godot_icall_int(___mb.mb_get_true_bit_count, (const object *) this);
}

void bit_map::grow_mask(const int64_t pixels, const rect2 rect) {
	___godot_icall_void_int_Rect2(___mb.mb_grow_mask, (const object *) this, pixels, rect);
}

array bit_map::opaque_to_polygons(const rect2 rect, const real_t epsilon) const {
	return ___godot_icall_Array_Rect2_float(___mb.mb_opaque_to_polygons, (const object *) this, rect, epsilon);
}

void bit_map::resize(const vector2 new_size) {
	___godot_icall_void_Vector2(___mb.mb_resize, (const object *) this, new_size);
}

void bit_map::set_bit(const vector2 position, const bool bit) {
	___godot_icall_void_Vector2_bool(___mb.mb_set_bit, (const object *) this, position, bit);
}

void bit_map::set_bit_rect(const rect2 rect, const bool bit) {
	___godot_icall_void_Rect2_bool(___mb.mb_set_bit_rect, (const object *) this, rect, bit);
}

}