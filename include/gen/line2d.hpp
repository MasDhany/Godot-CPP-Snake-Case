#ifndef GODOT_CPP_LINE2D_HPP
#define GODOT_CPP_LINE2D_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "line2d.hpp"

#include "node2d.hpp"
namespace gd {

class curve;
class gradient;
class texture;

class line2d : public node2d {
	struct ___method_bindings {
		godot_method_bind *mb__curve_changed;
		godot_method_bind *mb__gradient_changed;
		godot_method_bind *mb_add_point;
		godot_method_bind *mb_clear_points;
		godot_method_bind *mb_get_antialiased;
		godot_method_bind *mb_get_begin_cap_mode;
		godot_method_bind *mb_get_curve;
		godot_method_bind *mb_get_default_color;
		godot_method_bind *mb_get_end_cap_mode;
		godot_method_bind *mb_get_gradient;
		godot_method_bind *mb_get_joint_mode;
		godot_method_bind *mb_get_point_count;
		godot_method_bind *mb_get_point_position;
		godot_method_bind *mb_get_points;
		godot_method_bind *mb_get_round_precision;
		godot_method_bind *mb_get_sharp_limit;
		godot_method_bind *mb_get_texture;
		godot_method_bind *mb_get_texture_mode;
		godot_method_bind *mb_get_width;
		godot_method_bind *mb_remove_point;
		godot_method_bind *mb_set_antialiased;
		godot_method_bind *mb_set_begin_cap_mode;
		godot_method_bind *mb_set_curve;
		godot_method_bind *mb_set_default_color;
		godot_method_bind *mb_set_end_cap_mode;
		godot_method_bind *mb_set_gradient;
		godot_method_bind *mb_set_joint_mode;
		godot_method_bind *mb_set_point_position;
		godot_method_bind *mb_set_points;
		godot_method_bind *mb_set_round_precision;
		godot_method_bind *mb_set_sharp_limit;
		godot_method_bind *mb_set_texture;
		godot_method_bind *mb_set_texture_mode;
		godot_method_bind *mb_set_width;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Line2D"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Line2D"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum LineTextureMode {
		LINE_TEXTURE_NONE = 0,
		LINE_TEXTURE_TILE = 1,
		LINE_TEXTURE_STRETCH = 2,
	};
	enum LineCapMode {
		LINE_CAP_NONE = 0,
		LINE_CAP_BOX = 1,
		LINE_CAP_ROUND = 2,
	};
	enum LineJointMode {
		LINE_JOINT_SHARP = 0,
		LINE_JOINT_BEVEL = 1,
		LINE_JOINT_ROUND = 2,
	};

	// constants


	static line2d *_new();

	// methods
	void _curve_changed();
	void _gradient_changed();
	void add_point(const vector2 position, const int64_t index = -1);
	void clear_points();
	bool get_antialiased() const;
	line2d::LineCapMode get_begin_cap_mode() const;
	ref<curve> get_curve() const;
	color get_default_color() const;
	line2d::LineCapMode get_end_cap_mode() const;
	ref<gradient> get_gradient() const;
	line2d::LineJointMode get_joint_mode() const;
	int64_t get_point_count() const;
	vector2 get_point_position(const int64_t index) const;
	pool_vector2_array get_points() const;
	int64_t get_round_precision() const;
	real_t get_sharp_limit() const;
	ref<texture> get_texture() const;
	line2d::LineTextureMode get_texture_mode() const;
	real_t get_width() const;
	void remove_point(const int64_t index);
	void set_antialiased(const bool antialiased);
	void set_begin_cap_mode(const int64_t mode);
	void set_curve(const ref<curve> curve_);
	void set_default_color(const color color_);
	void set_end_cap_mode(const int64_t mode);
	void set_gradient(const ref<gradient> color_);
	void set_joint_mode(const int64_t mode);
	void set_point_position(const int64_t index, const vector2 position);
	void set_points(const pool_vector2_array points);
	void set_round_precision(const int64_t precision);
	void set_sharp_limit(const real_t limit);
	void set_texture(const ref<texture> texture_);
	void set_texture_mode(const int64_t mode);
	void set_width(const real_t width);

};

}

#endif