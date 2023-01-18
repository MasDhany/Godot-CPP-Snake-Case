#ifndef GODOT_CPP_PARTICLES2D_HPP
#define GODOT_CPP_PARTICLES2D_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "particles2d.hpp"

#include "node2d.hpp"
namespace gd {

class material;
class texture;

class particles2d : public node2d {
	struct ___method_bindings {
		godot_method_bind *mb_capture_rect;
		godot_method_bind *mb_get_amount;
		godot_method_bind *mb_get_draw_order;
		godot_method_bind *mb_get_explosiveness_ratio;
		godot_method_bind *mb_get_fixed_fps;
		godot_method_bind *mb_get_fractional_delta;
		godot_method_bind *mb_get_lifetime;
		godot_method_bind *mb_get_normal_map;
		godot_method_bind *mb_get_one_shot;
		godot_method_bind *mb_get_pre_process_time;
		godot_method_bind *mb_get_process_material;
		godot_method_bind *mb_get_randomness_ratio;
		godot_method_bind *mb_get_speed_scale;
		godot_method_bind *mb_get_texture;
		godot_method_bind *mb_get_use_local_coordinates;
		godot_method_bind *mb_get_visibility_rect;
		godot_method_bind *mb_is_emitting;
		godot_method_bind *mb_restart;
		godot_method_bind *mb_set_amount;
		godot_method_bind *mb_set_draw_order;
		godot_method_bind *mb_set_emitting;
		godot_method_bind *mb_set_explosiveness_ratio;
		godot_method_bind *mb_set_fixed_fps;
		godot_method_bind *mb_set_fractional_delta;
		godot_method_bind *mb_set_lifetime;
		godot_method_bind *mb_set_normal_map;
		godot_method_bind *mb_set_one_shot;
		godot_method_bind *mb_set_pre_process_time;
		godot_method_bind *mb_set_process_material;
		godot_method_bind *mb_set_randomness_ratio;
		godot_method_bind *mb_set_speed_scale;
		godot_method_bind *mb_set_texture;
		godot_method_bind *mb_set_use_local_coordinates;
		godot_method_bind *mb_set_visibility_rect;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Particles2D"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Particles2D"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum DrawOrder {
		DRAW_ORDER_INDEX = 0,
		DRAW_ORDER_LIFETIME = 1,
	};

	// constants


	static particles2d *_new();

	// methods
	rect2 capture_rect() const;
	int64_t get_amount() const;
	particles2d::DrawOrder get_draw_order() const;
	real_t get_explosiveness_ratio() const;
	int64_t get_fixed_fps() const;
	bool get_fractional_delta() const;
	real_t get_lifetime() const;
	ref<texture> get_normal_map() const;
	bool get_one_shot() const;
	real_t get_pre_process_time() const;
	ref<material> get_process_material() const;
	real_t get_randomness_ratio() const;
	real_t get_speed_scale() const;
	ref<texture> get_texture() const;
	bool get_use_local_coordinates() const;
	rect2 get_visibility_rect() const;
	bool is_emitting() const;
	void restart();
	void set_amount(const int64_t amount);
	void set_draw_order(const int64_t order);
	void set_emitting(const bool emitting);
	void set_explosiveness_ratio(const real_t ratio);
	void set_fixed_fps(const int64_t fps);
	void set_fractional_delta(const bool enable);
	void set_lifetime(const real_t secs);
	void set_normal_map(const ref<texture> texture_);
	void set_one_shot(const bool secs);
	void set_pre_process_time(const real_t secs);
	void set_process_material(const ref<material> material_);
	void set_randomness_ratio(const real_t ratio);
	void set_speed_scale(const real_t scale);
	void set_texture(const ref<texture> texture_);
	void set_use_local_coordinates(const bool enable);
	void set_visibility_rect(const rect2 visibility_rect);

};

}

#endif