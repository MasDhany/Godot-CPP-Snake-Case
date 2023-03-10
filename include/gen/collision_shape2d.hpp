#ifndef GODOT_CPP_COLLISIONSHAPE2D_HPP
#define GODOT_CPP_COLLISIONSHAPE2D_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "node2d.hpp"
namespace gd {

class shape2d;

class collision_shape2d : public node2d {
	struct ___method_bindings {
		godot_method_bind *mb__shape_changed;
		godot_method_bind *mb_get_one_way_collision_margin;
		godot_method_bind *mb_get_shape;
		godot_method_bind *mb_is_disabled;
		godot_method_bind *mb_is_one_way_collision_enabled;
		godot_method_bind *mb_set_disabled;
		godot_method_bind *mb_set_one_way_collision;
		godot_method_bind *mb_set_one_way_collision_margin;
		godot_method_bind *mb_set_shape;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "CollisionShape2D"; }
	static inline const char *___get_godot_class_name() { return (const char *) "CollisionShape2D"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static collision_shape2d *_new();

	// methods
	void _shape_changed();
	real_t get_one_way_collision_margin() const;
	ref<shape2d> get_shape() const;
	bool is_disabled() const;
	bool is_one_way_collision_enabled() const;
	void set_disabled(const bool disabled);
	void set_one_way_collision(const bool enabled);
	void set_one_way_collision_margin(const real_t margin);
	void set_shape(const ref<shape2d> shape_);

};

}

#endif