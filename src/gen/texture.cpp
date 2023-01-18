#include "texture.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "image.hpp"
#include "texture.hpp"


namespace gd {


texture::___method_bindings texture::___mb = {};

void *texture::_detail_class_tag = nullptr;

void texture::___init_method_bindings() {
	___mb.mb_draw = gd::api->godot_method_bind_get_method("Texture", "draw");
	___mb.mb_draw_rect = gd::api->godot_method_bind_get_method("Texture", "draw_rect");
	___mb.mb_draw_rect_region = gd::api->godot_method_bind_get_method("Texture", "draw_rect_region");
	___mb.mb_get_data = gd::api->godot_method_bind_get_method("Texture", "get_data");
	___mb.mb_get_flags = gd::api->godot_method_bind_get_method("Texture", "get_flags");
	___mb.mb_get_height = gd::api->godot_method_bind_get_method("Texture", "get_height");
	___mb.mb_get_size = gd::api->godot_method_bind_get_method("Texture", "get_size");
	___mb.mb_get_width = gd::api->godot_method_bind_get_method("Texture", "get_width");
	___mb.mb_has_alpha = gd::api->godot_method_bind_get_method("Texture", "has_alpha");
	___mb.mb_set_flags = gd::api->godot_method_bind_get_method("Texture", "set_flags");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Texture");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void texture::draw(const rid canvas_item_, const vector2 position, const color modulate, const bool transpose, const ref<texture> normal_map) const {
	___godot_icall_void_RID_Vector2_Color_bool_Object(___mb.mb_draw, (const object *) this, canvas_item_, position, modulate, transpose, normal_map.ptr());
}

void texture::draw_rect(const rid canvas_item_, const rect2 rect, const bool tile, const color modulate, const bool transpose, const ref<texture> normal_map) const {
	___godot_icall_void_RID_Rect2_bool_Color_bool_Object(___mb.mb_draw_rect, (const object *) this, canvas_item_, rect, tile, modulate, transpose, normal_map.ptr());
}

void texture::draw_rect_region(const rid canvas_item_, const rect2 rect, const rect2 src_rect, const color modulate, const bool transpose, const ref<texture> normal_map, const bool clip_uv) const {
	___godot_icall_void_RID_Rect2_Rect2_Color_bool_Object_bool(___mb.mb_draw_rect_region, (const object *) this, canvas_item_, rect, src_rect, modulate, transpose, normal_map.ptr(), clip_uv);
}

ref<image> texture::get_data() const {
	return ref<image>::__internal_constructor(___godot_icall_Object(___mb.mb_get_data, (const object *) this));
}

int64_t texture::get_flags() const {
	return ___godot_icall_int(___mb.mb_get_flags, (const object *) this);
}

int64_t texture::get_height() const {
	return ___godot_icall_int(___mb.mb_get_height, (const object *) this);
}

vector2 texture::get_size() const {
	return ___godot_icall_Vector2(___mb.mb_get_size, (const object *) this);
}

int64_t texture::get_width() const {
	return ___godot_icall_int(___mb.mb_get_width, (const object *) this);
}

bool texture::has_alpha() const {
	return ___godot_icall_bool(___mb.mb_has_alpha, (const object *) this);
}

void texture::set_flags(const int64_t flags) {
	___godot_icall_void_int(___mb.mb_set_flags, (const object *) this, flags);
}

}