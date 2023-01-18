#ifndef GODOT_CPP_CPUPARTICLES2D_HPP
#define GODOT_CPP_CPUPARTICLES2D_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "cpuparticles2d.hpp"

#include "node2d.hpp"
namespace gd {

class curve;
class gradient;
class node;
class texture;

class cpuparticles2d : public node2d {
	struct ___method_bindings {
		godot_method_bind *mb__texture_changed;
		godot_method_bind *mb__update_render_thread;
		godot_method_bind *mb_convert_from_particles;
		godot_method_bind *mb_get_amount;
		godot_method_bind *mb_get_color;
		godot_method_bind *mb_get_color_initial_ramp;
		godot_method_bind *mb_get_color_ramp;
		godot_method_bind *mb_get_direction;
		godot_method_bind *mb_get_draw_order;
		godot_method_bind *mb_get_emission_colors;
		godot_method_bind *mb_get_emission_normals;
		godot_method_bind *mb_get_emission_points;
		godot_method_bind *mb_get_emission_rect_extents;
		godot_method_bind *mb_get_emission_shape;
		godot_method_bind *mb_get_emission_sphere_radius;
		godot_method_bind *mb_get_explosiveness_ratio;
		godot_method_bind *mb_get_fixed_fps;
		godot_method_bind *mb_get_fractional_delta;
		godot_method_bind *mb_get_gravity;
		godot_method_bind *mb_get_lifetime;
		godot_method_bind *mb_get_lifetime_randomness;
		godot_method_bind *mb_get_normalmap;
		godot_method_bind *mb_get_one_shot;
		godot_method_bind *mb_get_param;
		godot_method_bind *mb_get_param_curve;
		godot_method_bind *mb_get_param_randomness;
		godot_method_bind *mb_get_particle_flag;
		godot_method_bind *mb_get_pre_process_time;
		godot_method_bind *mb_get_randomness_ratio;
		godot_method_bind *mb_get_speed_scale;
		godot_method_bind *mb_get_spread;
		godot_method_bind *mb_get_texture;
		godot_method_bind *mb_get_use_local_coordinates;
		godot_method_bind *mb_is_emitting;
		godot_method_bind *mb_restart;
		godot_method_bind *mb_set_amount;
		godot_method_bind *mb_set_color;
		godot_method_bind *mb_set_color_initial_ramp;
		godot_method_bind *mb_set_color_ramp;
		godot_method_bind *mb_set_direction;
		godot_method_bind *mb_set_draw_order;
		godot_method_bind *mb_set_emission_colors;
		godot_method_bind *mb_set_emission_normals;
		godot_method_bind *mb_set_emission_points;
		godot_method_bind *mb_set_emission_rect_extents;
		godot_method_bind *mb_set_emission_shape;
		godot_method_bind *mb_set_emission_sphere_radius;
		godot_method_bind *mb_set_emitting;
		godot_method_bind *mb_set_explosiveness_ratio;
		godot_method_bind *mb_set_fixed_fps;
		godot_method_bind *mb_set_fractional_delta;
		godot_method_bind *mb_set_gravity;
		godot_method_bind *mb_set_lifetime;
		godot_method_bind *mb_set_lifetime_randomness;
		godot_method_bind *mb_set_normalmap;
		godot_method_bind *mb_set_one_shot;
		godot_method_bind *mb_set_param;
		godot_method_bind *mb_set_param_curve;
		godot_method_bind *mb_set_param_randomness;
		godot_method_bind *mb_set_particle_flag;
		godot_method_bind *mb_set_pre_process_time;
		godot_method_bind *mb_set_randomness_ratio;
		godot_method_bind *mb_set_speed_scale;
		godot_method_bind *mb_set_spread;
		godot_method_bind *mb_set_texture;
		godot_method_bind *mb_set_use_local_coordinates;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "CPUParticles2D"; }
	static inline const char *___get_godot_class_name() { return (const char *) "CPUParticles2D"; }
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
		EMISSION_SHAPE_RECTANGLE = 2,
		EMISSION_SHAPE_POINTS = 3,
		EMISSION_SHAPE_DIRECTED_POINTS = 4,
		EMISSION_SHAPE_MAX = 5,
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
	enum DrawOrder {
		DRAW_ORDER_INDEX = 0,
		DRAW_ORDER_LIFETIME = 1,
	};

	// constants


	static cpuparticles2d *_new();

	// methods
	void _texture_changed();
	void _update_render_thread();
	void convert_from_particles(const node *particles_);
	int64_t get_amount() const;
	color get_color() const;
	ref<gradient> get_color_initial_ramp() const;
	ref<gradient> get_color_ramp() const;
	vector2 get_direction() const;
	cpuparticles2d::DrawOrder get_draw_order() const;
	pool_color_array get_emission_colors() const;
	pool_vector2_array get_emission_normals() const;
	pool_vector2_array get_emission_points() const;
	vector2 get_emission_rect_extents() const;
	cpuparticles2d::EmissionShape get_emission_shape() const;
	real_t get_emission_sphere_radius() const;
	real_t get_explosiveness_ratio() const;
	int64_t get_fixed_fps() const;
	bool get_fractional_delta() const;
	vector2 get_gravity() const;
	real_t get_lifetime() const;
	real_t get_lifetime_randomness() const;
	ref<texture> get_normalmap() const;
	bool get_one_shot() const;
	real_t get_param(const int64_t param) const;
	ref<curve> get_param_curve(const int64_t param) const;
	real_t get_param_randomness(const int64_t param) const;
	bool get_particle_flag(const int64_t flag) const;
	real_t get_pre_process_time() const;
	real_t get_randomness_ratio() const;
	real_t get_speed_scale() const;
	real_t get_spread() const;
	ref<texture> get_texture() const;
	bool get_use_local_coordinates() const;
	bool is_emitting() const;
	void restart();
	void set_amount(const int64_t amount);
	void set_color(const color color_);
	void set_color_initial_ramp(const ref<gradient> ramp);
	void set_color_ramp(const ref<gradient> ramp);
	void set_direction(const vector2 direction);
	void set_draw_order(const int64_t order);
	void set_emission_colors(const pool_color_array array_);
	void set_emission_normals(const pool_vector2_array array_);
	void set_emission_points(const pool_vector2_array array_);
	void set_emission_rect_extents(const vector2 extents);
	void set_emission_shape(const int64_t shape_);
	void set_emission_sphere_radius(const real_t radius);
	void set_emitting(const bool emitting);
	void set_explosiveness_ratio(const real_t ratio);
	void set_fixed_fps(const int64_t fps);
	void set_fractional_delta(const bool enable);
	void set_gravity(const vector2 accel_vec);
	void set_lifetime(const real_t secs);
	void set_lifetime_randomness(const real_t random);
	void set_normalmap(const ref<texture> normalmap);
	void set_one_shot(const bool enable);
	void set_param(const int64_t param, const real_t value);
	void set_param_curve(const int64_t param, const ref<curve> curve_);
	void set_param_randomness(const int64_t param, const real_t randomness);
	void set_particle_flag(const int64_t flag, const bool enable);
	void set_pre_process_time(const real_t secs);
	void set_randomness_ratio(const real_t ratio);
	void set_speed_scale(const real_t scale);
	void set_spread(const real_t degrees);
	void set_texture(const ref<texture> texture_);
	void set_use_local_coordinates(const bool enable);

};

}

#endif