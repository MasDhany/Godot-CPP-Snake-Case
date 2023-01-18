#ifndef GODOT_CPP_BITMAPFONT_HPP
#define GODOT_CPP_BITMAPFONT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "font.hpp"
namespace gd {

class bitmap_font;
class texture;

class bitmap_font : public font {
	struct ___method_bindings {
		godot_method_bind *mb__get_chars;
		godot_method_bind *mb__get_kernings;
		godot_method_bind *mb__get_textures;
		godot_method_bind *mb__set_chars;
		godot_method_bind *mb__set_kernings;
		godot_method_bind *mb__set_textures;
		godot_method_bind *mb_add_char;
		godot_method_bind *mb_add_kerning_pair;
		godot_method_bind *mb_add_texture;
		godot_method_bind *mb_clear;
		godot_method_bind *mb_create_from_fnt;
		godot_method_bind *mb_get_fallback;
		godot_method_bind *mb_get_kerning_pair;
		godot_method_bind *mb_get_texture;
		godot_method_bind *mb_get_texture_count;
		godot_method_bind *mb_set_ascent;
		godot_method_bind *mb_set_distance_field_hint;
		godot_method_bind *mb_set_fallback;
		godot_method_bind *mb_set_height;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "BitmapFont"; }
	static inline const char *___get_godot_class_name() { return (const char *) "BitmapFont"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static bitmap_font *_new();

	// methods
	pool_int_array _get_chars() const;
	pool_int_array _get_kernings() const;
	array _get_textures() const;
	void _set_chars(const pool_int_array arg0);
	void _set_kernings(const pool_int_array arg0);
	void _set_textures(const array arg0);
	void add_char(const int64_t character, const int64_t texture_, const rect2 rect, const vector2 align = vector2(0, 0), const real_t advance = -1);
	void add_kerning_pair(const int64_t char_a, const int64_t char_b, const int64_t kerning);
	void add_texture(const ref<texture> texture_);
	void clear();
	error create_from_fnt(const string path_);
	ref<bitmap_font> get_fallback() const;
	int64_t get_kerning_pair(const int64_t char_a, const int64_t char_b) const;
	ref<texture> get_texture(const int64_t idx) const;
	int64_t get_texture_count() const;
	void set_ascent(const real_t px);
	void set_distance_field_hint(const bool enable);
	void set_fallback(const ref<bitmap_font> fallback);
	void set_height(const real_t px);

};

}

#endif