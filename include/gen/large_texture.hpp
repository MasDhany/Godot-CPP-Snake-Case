#ifndef GODOT_CPP_LARGETEXTURE_HPP
#define GODOT_CPP_LARGETEXTURE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "texture.hpp"
namespace gd {

class texture;

class large_texture : public texture {
	struct ___method_bindings {
		godot_method_bind *mb__get_data;
		godot_method_bind *mb__set_data;
		godot_method_bind *mb_add_piece;
		godot_method_bind *mb_clear;
		godot_method_bind *mb_get_piece_count;
		godot_method_bind *mb_get_piece_offset;
		godot_method_bind *mb_get_piece_texture;
		godot_method_bind *mb_set_piece_offset;
		godot_method_bind *mb_set_piece_texture;
		godot_method_bind *mb_set_size;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "LargeTexture"; }
	static inline const char *___get_godot_class_name() { return (const char *) "LargeTexture"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static large_texture *_new();

	// methods
	array _get_data() const;
	void _set_data(const array data);
	int64_t add_piece(const vector2 ofs, const ref<texture> texture_);
	void clear();
	int64_t get_piece_count() const;
	vector2 get_piece_offset(const int64_t idx) const;
	ref<texture> get_piece_texture(const int64_t idx) const;
	void set_piece_offset(const int64_t idx, const vector2 ofs);
	void set_piece_texture(const int64_t idx, const ref<texture> texture_);
	void set_size(const vector2 size);

};

}

#endif