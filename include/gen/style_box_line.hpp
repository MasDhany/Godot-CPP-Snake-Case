#ifndef GODOT_CPP_STYLEBOXLINE_HPP
#define GODOT_CPP_STYLEBOXLINE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "style_box.hpp"
namespace gd {


class style_box_line : public style_box {
	struct ___method_bindings {
		godot_method_bind *mb_get_color;
		godot_method_bind *mb_get_grow_begin;
		godot_method_bind *mb_get_grow_end;
		godot_method_bind *mb_get_thickness;
		godot_method_bind *mb_is_vertical;
		godot_method_bind *mb_set_color;
		godot_method_bind *mb_set_grow_begin;
		godot_method_bind *mb_set_grow_end;
		godot_method_bind *mb_set_thickness;
		godot_method_bind *mb_set_vertical;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "StyleBoxLine"; }
	static inline const char *___get_godot_class_name() { return (const char *) "StyleBoxLine"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static style_box_line *_new();

	// methods
	color get_color() const;
	real_t get_grow_begin() const;
	real_t get_grow_end() const;
	int64_t get_thickness() const;
	bool is_vertical() const;
	void set_color(const color color_);
	void set_grow_begin(const real_t offset);
	void set_grow_end(const real_t offset);
	void set_thickness(const int64_t thickness);
	void set_vertical(const bool vertical);

};

}

#endif