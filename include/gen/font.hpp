#ifndef GODOT_CPP_FONT_HPP
#define GODOT_CPP_FONT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {


class font : public resource {
	struct ___method_bindings {
		godot_method_bind *mb_draw;
		godot_method_bind *mb_draw_char;
		godot_method_bind *mb_get_ascent;
		godot_method_bind *mb_get_char_contours;
		godot_method_bind *mb_get_char_size;
		godot_method_bind *mb_get_char_texture;
		godot_method_bind *mb_get_char_texture_size;
		godot_method_bind *mb_get_char_tx_offset;
		godot_method_bind *mb_get_char_tx_size;
		godot_method_bind *mb_get_char_tx_uv_rect;
		godot_method_bind *mb_get_descent;
		godot_method_bind *mb_get_height;
		godot_method_bind *mb_get_string_size;
		godot_method_bind *mb_get_wordwrap_string_size;
		godot_method_bind *mb_has_outline;
		godot_method_bind *mb_is_distance_field_hint;
		godot_method_bind *mb_update_changes;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Font"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Font"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum ContourPointTag {
		CONTOUR_CURVE_TAG_OFF_CONIC = 0,
		CONTOUR_CURVE_TAG_ON = 1,
		CONTOUR_CURVE_TAG_OFF_CUBIC = 2,
	};

	// constants

	// methods
	void draw(const rid canvas_item_, const vector2 position, const string string_, const color modulate = color(1,1,1,1), const int64_t clip_w = -1, const color outline_modulate = color(1,1,1,1)) const;
	real_t draw_char(const rid canvas_item_, const vector2 position, const int64_t _char, const int64_t next = -1, const color modulate = color(1,1,1,1), const bool outline = false) const;
	real_t get_ascent() const;
	dictionary get_char_contours(const int64_t _char, const int64_t next = 0) const;
	vector2 get_char_size(const int64_t _char, const int64_t next = 0) const;
	rid get_char_texture(const int64_t _char, const int64_t next = 0, const bool outline = false) const;
	vector2 get_char_texture_size(const int64_t _char, const int64_t next = 0, const bool outline = false) const;
	vector2 get_char_tx_offset(const int64_t _char, const int64_t next = 0, const bool outline = false) const;
	vector2 get_char_tx_size(const int64_t _char, const int64_t next = 0, const bool outline = false) const;
	rect2 get_char_tx_uv_rect(const int64_t _char, const int64_t next = 0, const bool outline = false) const;
	real_t get_descent() const;
	real_t get_height() const;
	vector2 get_string_size(const string string_) const;
	vector2 get_wordwrap_string_size(const string string_, const real_t width) const;
	bool has_outline() const;
	bool is_distance_field_hint() const;
	void update_changes();

};

}

#endif