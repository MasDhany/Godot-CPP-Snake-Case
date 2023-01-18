#include "font.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


font::___method_bindings font::___mb = {};

void *font::_detail_class_tag = nullptr;

void font::___init_method_bindings() {
	___mb.mb_draw = gd::api->godot_method_bind_get_method("Font", "draw");
	___mb.mb_draw_char = gd::api->godot_method_bind_get_method("Font", "draw_char");
	___mb.mb_get_ascent = gd::api->godot_method_bind_get_method("Font", "get_ascent");
	___mb.mb_get_char_contours = gd::api->godot_method_bind_get_method("Font", "get_char_contours");
	___mb.mb_get_char_size = gd::api->godot_method_bind_get_method("Font", "get_char_size");
	___mb.mb_get_char_texture = gd::api->godot_method_bind_get_method("Font", "get_char_texture");
	___mb.mb_get_char_texture_size = gd::api->godot_method_bind_get_method("Font", "get_char_texture_size");
	___mb.mb_get_char_tx_offset = gd::api->godot_method_bind_get_method("Font", "get_char_tx_offset");
	___mb.mb_get_char_tx_size = gd::api->godot_method_bind_get_method("Font", "get_char_tx_size");
	___mb.mb_get_char_tx_uv_rect = gd::api->godot_method_bind_get_method("Font", "get_char_tx_uv_rect");
	___mb.mb_get_descent = gd::api->godot_method_bind_get_method("Font", "get_descent");
	___mb.mb_get_height = gd::api->godot_method_bind_get_method("Font", "get_height");
	___mb.mb_get_string_size = gd::api->godot_method_bind_get_method("Font", "get_string_size");
	___mb.mb_get_wordwrap_string_size = gd::api->godot_method_bind_get_method("Font", "get_wordwrap_string_size");
	___mb.mb_has_outline = gd::api->godot_method_bind_get_method("Font", "has_outline");
	___mb.mb_is_distance_field_hint = gd::api->godot_method_bind_get_method("Font", "is_distance_field_hint");
	___mb.mb_update_changes = gd::api->godot_method_bind_get_method("Font", "update_changes");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Font");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void font::draw(const rid canvas_item_, const vector2 position, const string string_, const color modulate, const int64_t clip_w, const color outline_modulate) const {
	___godot_icall_void_RID_Vector2_String_Color_int_Color(___mb.mb_draw, (const object *) this, canvas_item_, position, string_, modulate, clip_w, outline_modulate);
}

real_t font::draw_char(const rid canvas_item_, const vector2 position, const int64_t _char, const int64_t next, const color modulate, const bool outline) const {
	return ___godot_icall_float_RID_Vector2_int_int_Color_bool(___mb.mb_draw_char, (const object *) this, canvas_item_, position, _char, next, modulate, outline);
}

real_t font::get_ascent() const {
	return ___godot_icall_float(___mb.mb_get_ascent, (const object *) this);
}

dictionary font::get_char_contours(const int64_t _char, const int64_t next) const {
	return ___godot_icall_Dictionary_int_int(___mb.mb_get_char_contours, (const object *) this, _char, next);
}

vector2 font::get_char_size(const int64_t _char, const int64_t next) const {
	return ___godot_icall_Vector2_int_int(___mb.mb_get_char_size, (const object *) this, _char, next);
}

rid font::get_char_texture(const int64_t _char, const int64_t next, const bool outline) const {
	return ___godot_icall_RID_int_int_bool(___mb.mb_get_char_texture, (const object *) this, _char, next, outline);
}

vector2 font::get_char_texture_size(const int64_t _char, const int64_t next, const bool outline) const {
	return ___godot_icall_Vector2_int_int_bool(___mb.mb_get_char_texture_size, (const object *) this, _char, next, outline);
}

vector2 font::get_char_tx_offset(const int64_t _char, const int64_t next, const bool outline) const {
	return ___godot_icall_Vector2_int_int_bool(___mb.mb_get_char_tx_offset, (const object *) this, _char, next, outline);
}

vector2 font::get_char_tx_size(const int64_t _char, const int64_t next, const bool outline) const {
	return ___godot_icall_Vector2_int_int_bool(___mb.mb_get_char_tx_size, (const object *) this, _char, next, outline);
}

rect2 font::get_char_tx_uv_rect(const int64_t _char, const int64_t next, const bool outline) const {
	return ___godot_icall_Rect2_int_int_bool(___mb.mb_get_char_tx_uv_rect, (const object *) this, _char, next, outline);
}

real_t font::get_descent() const {
	return ___godot_icall_float(___mb.mb_get_descent, (const object *) this);
}

real_t font::get_height() const {
	return ___godot_icall_float(___mb.mb_get_height, (const object *) this);
}

vector2 font::get_string_size(const string string_) const {
	return ___godot_icall_Vector2_String(___mb.mb_get_string_size, (const object *) this, string_);
}

vector2 font::get_wordwrap_string_size(const string string_, const real_t width) const {
	return ___godot_icall_Vector2_String_float(___mb.mb_get_wordwrap_string_size, (const object *) this, string_, width);
}

bool font::has_outline() const {
	return ___godot_icall_bool(___mb.mb_has_outline, (const object *) this);
}

bool font::is_distance_field_hint() const {
	return ___godot_icall_bool(___mb.mb_is_distance_field_hint, (const object *) this);
}

void font::update_changes() {
	___godot_icall_void(___mb.mb_update_changes, (const object *) this);
}

}