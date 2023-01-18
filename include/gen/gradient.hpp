#ifndef GODOT_CPP_GRADIENT_HPP
#define GODOT_CPP_GRADIENT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "gradient.hpp"

#include "resource.hpp"
namespace gd {


class gradient : public resource {
	struct ___method_bindings {
		godot_method_bind *mb_add_point;
		godot_method_bind *mb_get_color;
		godot_method_bind *mb_get_colors;
		godot_method_bind *mb_get_interpolation_mode;
		godot_method_bind *mb_get_offset;
		godot_method_bind *mb_get_offsets;
		godot_method_bind *mb_get_point_count;
		godot_method_bind *mb_interpolate;
		godot_method_bind *mb_remove_point;
		godot_method_bind *mb_set_color;
		godot_method_bind *mb_set_colors;
		godot_method_bind *mb_set_interpolation_mode;
		godot_method_bind *mb_set_offset;
		godot_method_bind *mb_set_offsets;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Gradient"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Gradient"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum InterpolationMode {
		GRADIENT_INTERPOLATE_LINEAR = 0,
		GRADIENT_INTERPOLATE_CONSTANT = 1,
		GRADIENT_INTERPOLATE_CUBIC = 2,
	};

	// constants


	static gradient *_new();

	// methods
	void add_point(const real_t offset, const color color_);
	color get_color(const int64_t point);
	pool_color_array get_colors() const;
	gradient::InterpolationMode get_interpolation_mode();
	real_t get_offset(const int64_t point);
	pool_real_array get_offsets() const;
	int64_t get_point_count() const;
	color interpolate(const real_t offset);
	void remove_point(const int64_t point);
	void set_color(const int64_t point, const color color_);
	void set_colors(const pool_color_array colors);
	void set_interpolation_mode(const int64_t interpolation_mode);
	void set_offset(const int64_t point, const real_t offset);
	void set_offsets(const pool_real_array offsets);

};

}

#endif