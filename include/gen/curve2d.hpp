#ifndef GODOT_CPP_CURVE2D_HPP
#define GODOT_CPP_CURVE2D_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {


class curve2d : public resource {
	struct ___method_bindings {
		godot_method_bind *mb__get_data;
		godot_method_bind *mb__set_data;
		godot_method_bind *mb_add_point;
		godot_method_bind *mb_clear_points;
		godot_method_bind *mb_get_bake_interval;
		godot_method_bind *mb_get_baked_length;
		godot_method_bind *mb_get_baked_points;
		godot_method_bind *mb_get_closest_offset;
		godot_method_bind *mb_get_closest_point;
		godot_method_bind *mb_get_point_count;
		godot_method_bind *mb_get_point_in;
		godot_method_bind *mb_get_point_out;
		godot_method_bind *mb_get_point_position;
		godot_method_bind *mb_interpolate;
		godot_method_bind *mb_interpolate_baked;
		godot_method_bind *mb_interpolatef;
		godot_method_bind *mb_remove_point;
		godot_method_bind *mb_set_bake_interval;
		godot_method_bind *mb_set_point_in;
		godot_method_bind *mb_set_point_out;
		godot_method_bind *mb_set_point_position;
		godot_method_bind *mb_tessellate;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Curve2D"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Curve2D"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static curve2d *_new();

	// methods
	dictionary _get_data() const;
	void _set_data(const dictionary arg0);
	void add_point(const vector2 position, const vector2 in = vector2(0, 0), const vector2 out = vector2(0, 0), const int64_t index = -1);
	void clear_points();
	real_t get_bake_interval() const;
	real_t get_baked_length() const;
	pool_vector2_array get_baked_points() const;
	real_t get_closest_offset(const vector2 to_point) const;
	vector2 get_closest_point(const vector2 to_point) const;
	int64_t get_point_count() const;
	vector2 get_point_in(const int64_t idx) const;
	vector2 get_point_out(const int64_t idx) const;
	vector2 get_point_position(const int64_t idx) const;
	vector2 interpolate(const int64_t idx, const real_t t) const;
	vector2 interpolate_baked(const real_t offset, const bool cubic = false) const;
	vector2 interpolatef(const real_t fofs) const;
	void remove_point(const int64_t idx);
	void set_bake_interval(const real_t distance);
	void set_point_in(const int64_t idx, const vector2 position);
	void set_point_out(const int64_t idx, const vector2 position);
	void set_point_position(const int64_t idx, const vector2 position);
	pool_vector2_array tessellate(const int64_t max_stages = 5, const real_t tolerance_degrees = 4) const;

};

}

#endif