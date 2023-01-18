#ifndef GODOT_CPP_BITMAP_HPP
#define GODOT_CPP_BITMAP_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {

class image;

class bit_map : public resource {
	struct ___method_bindings {
		godot_method_bind *mb__get_data;
		godot_method_bind *mb__set_data;
		godot_method_bind *mb_convert_to_image;
		godot_method_bind *mb_create;
		godot_method_bind *mb_create_from_image_alpha;
		godot_method_bind *mb_get_bit;
		godot_method_bind *mb_get_size;
		godot_method_bind *mb_get_true_bit_count;
		godot_method_bind *mb_grow_mask;
		godot_method_bind *mb_opaque_to_polygons;
		godot_method_bind *mb_resize;
		godot_method_bind *mb_set_bit;
		godot_method_bind *mb_set_bit_rect;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "BitMap"; }
	static inline const char *___get_godot_class_name() { return (const char *) "BitMap"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static bit_map *_new();

	// methods
	dictionary _get_data() const;
	void _set_data(const dictionary arg0);
	ref<image> convert_to_image() const;
	void create(const vector2 size);
	void create_from_image_alpha(const ref<image> image_, const real_t threshold = 0.1);
	bool get_bit(const vector2 position) const;
	vector2 get_size() const;
	int64_t get_true_bit_count() const;
	void grow_mask(const int64_t pixels, const rect2 rect);
	array opaque_to_polygons(const rect2 rect, const real_t epsilon = 2) const;
	void resize(const vector2 new_size);
	void set_bit(const vector2 position, const bool bit);
	void set_bit_rect(const rect2 rect, const bool bit);

};

}

#endif