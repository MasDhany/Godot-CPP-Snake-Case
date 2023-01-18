#ifndef GODOT_CPP_PARTICLESMATERIAL_HPP
#define GODOT_CPP_PARTICLESMATERIAL_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "particles_material.hpp"

#include "material.hpp"
namespace gd {

class curve_texture;
class gradient_texture;
class texture;

class particles_material : public material {
	struct ___method_bindings {
		godot_method_bind *mb_get_color;
		godot_method_bind *mb_get_color_initial_ramp;
		godot_method_bind *mb_get_color_ramp;
		godot_method_bind *mb_get_direction;
		godot_method_bind *mb_get_emission_box_extents;
		godot_method_bind *mb_get_emission_color_texture;
		godot_method_bind *mb_get_emission_normal_texture;
		godot_method_bind *mb_get_emission_point_count;
		godot_method_bind *mb_get_emission_point_texture;
		godot_method_bind *mb_get_emission_ring_axis;
		godot_method_bind *mb_get_emission_ring_height;
		godot_method_bind *mb_get_emission_ring_inner_radius;
		godot_method_bind *mb_get_emission_ring_radius;
		godot_method_bind *mb_get_emission_shape;
		godot_method_bind *mb_get_emission_sphere_radius;
		godot_method_bind *mb_get_flag;
		godot_method_bind *mb_get_flatness;
		godot_method_bind *mb_get_gravity;
		godot_method_bind *mb_get_lifetime_randomness;
		godot_method_bind *mb_get_param;
		godot_method_bind *mb_get_param_randomness;
		godot_method_bind *mb_get_param_texture;
		godot_method_bind *mb_get_spread;
		godot_method_bind *mb_get_trail_color_modifier;
		godot_method_bind *mb_get_trail_divisor;
		godot_method_bind *mb_get_trail_size_modifier;
		godot_method_bind *mb_set_color;
		godot_method_bind *mb_set_color_initial_ramp;
		godot_method_bind *mb_set_color_ramp;
		godot_method_bind *mb_set_direction;
		godot_method_bind *mb_set_emission_box_extents;
		godot_method_bind *mb_set_emission_color_texture;
		godot_method_bind *mb_set_emission_normal_texture;
		godot_method_bind *mb_set_emission_point_count;
		godot_method_bind *mb_set_emission_point_texture;
		godot_method_bind *mb_set_emission_ring_axis;
		godot_method_bind *mb_set_emission_ring_height;
		godot_method_bind *mb_set_emission_ring_inner_radius;
		godot_method_bind *mb_set_emission_ring_radius;
		godot_method_bind *mb_set_emission_shape;
		godot_method_bind *mb_set_emission_sphere_radius;
		godot_method_bind *mb_set_flag;
		godot_method_bind *mb_set_flatness;
		godot_method_bind *mb_set_gravity;
		godot_method_bind *mb_set_lifetime_randomness;
		godot_method_bind *mb_set_param;
		godot_method_bind *mb_set_param_randomness;
		godot_method_bind *mb_set_param_texture;
		godot_method_bind *mb_set_spread;
		godot_method_bind *mb_set_trail_color_modifier;
		godot_method_bind *mb_set_trail_divisor;
		godot_method_bind *mb_set_trail_size_modifier;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "ParticlesMaterial"; }
	static inline const char *___get_godot_class_name() { return (const char *) "ParticlesMaterial"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Flags {
		FLAG_ALIGN_Y_TO_VELOCITY = 0,
		FLAG_ROTATE_Y = 1,
		FLAG_DISABLE_Z = 2,
		FLAG_MAX = 3,
	};
	enum EmissionShape {
		EMISSION_SHAPE_POINT = 0,
		EMISSION_SHAPE_SPHERE = 1,
		EMISSION_SHAPE_BOX = 2,
		EMISSION_SHAPE_POINTS = 3,
		EMISSION_SHAPE_DIRECTED_POINTS = 4,
		EMISSION_SHAPE_RING = 5,
		EMISSION_SHAPE_MAX = 6,
	};
	enum Parameter {
		PARAM_INITIAL_LINEAR_VELOCITY = 0,
		PARAM_ANGULAR_VELOCITY = 1,
		PARAM_ORBIT_VELOCITY = 2,
		PARAM_LINEAR_ACCEL = 3,
		PARAM_RADIAL_ACCEL = 4,
		PARAM_TANGENTIAL_ACCEL = 5,
		PARAM_DAMPING = 6,
		PARAM_ANGLE = 7,
		PARAM_SCALE = 8,
		PARAM_HUE_VARIATION = 9,
		PARAM_ANIM_SPEED = 10,
		PARAM_ANIM_OFFSET = 11,
		PARAM_MAX = 12,
	};

	// constants


	static particles_material *_new();

	// methods
	color get_color() const;
	ref<texture> get_color_initial_ramp() const;
	ref<texture> get_color_ramp() const;
	vector3 get_direction() const;
	vector3 get_emission_box_extents() const;
	ref<texture> get_emission_color_texture() const;
	ref<texture> get_emission_normal_texture() const;
	int64_t get_emission_point_count() const;
	ref<texture> get_emission_point_texture() const;
	vector3 get_emission_ring_axis() const;
	real_t get_emission_ring_height() const;
	real_t get_emission_ring_inner_radius() const;
	real_t get_emission_ring_radius() const;
	particles_material::EmissionShape get_emission_shape() const;
	real_t get_emission_sphere_radius() const;
	bool get_flag(const int64_t flag) const;
	real_t get_flatness() const;
	vector3 get_gravity() const;
	real_t get_lifetime_randomness() const;
	real_t get_param(const int64_t param) const;
	real_t get_param_randomness(const int64_t param) const;
	ref<texture> get_param_texture(const int64_t param) const;
	real_t get_spread() const;
	ref<gradient_texture> get_trail_color_modifier() const;
	int64_t get_trail_divisor() const;
	ref<curve_texture> get_trail_size_modifier() const;
	void set_color(const color color_);
	void set_color_initial_ramp(const ref<texture> ramp);
	void set_color_ramp(const ref<texture> ramp);
	void set_direction(const vector3 degrees);
	void set_emission_box_extents(const vector3 extents);
	void set_emission_color_texture(const ref<texture> texture_);
	void set_emission_normal_texture(const ref<texture> texture_);
	void set_emission_point_count(const int64_t point_count);
	void set_emission_point_texture(const ref<texture> texture_);
	void set_emission_ring_axis(const vector3 axis);
	void set_emission_ring_height(const real_t height);
	void set_emission_ring_inner_radius(const real_t offset);
	void set_emission_ring_radius(const real_t radius);
	void set_emission_shape(const int64_t shape_);
	void set_emission_sphere_radius(const real_t radius);
	void set_flag(const int64_t flag, const bool enable);
	void set_flatness(const real_t amount);
	void set_gravity(const vector3 accel_vec);
	void set_lifetime_randomness(const real_t randomness);
	void set_param(const int64_t param, const real_t value);
	void set_param_randomness(const int64_t param, const real_t randomness);
	void set_param_texture(const int64_t param, const ref<texture> texture_);
	void set_spread(const real_t degrees);
	void set_trail_color_modifier(const ref<gradient_texture> texture_);
	void set_trail_divisor(const int64_t divisor);
	void set_trail_size_modifier(const ref<curve_texture> texture_);

};

}

#endif