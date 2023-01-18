#ifndef GODOT_CPP_PHYSICSSHAPEQUERYPARAMETERS_HPP
#define GODOT_CPP_PHYSICSSHAPEQUERYPARAMETERS_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "reference.hpp"
namespace gd {

class resource;

class physics_shape_query_parameters : public reference {
	struct ___method_bindings {
		godot_method_bind *mb_get_collision_mask;
		godot_method_bind *mb_get_exclude;
		godot_method_bind *mb_get_margin;
		godot_method_bind *mb_get_shape_rid;
		godot_method_bind *mb_get_transform;
		godot_method_bind *mb_is_collide_with_areas_enabled;
		godot_method_bind *mb_is_collide_with_bodies_enabled;
		godot_method_bind *mb_set_collide_with_areas;
		godot_method_bind *mb_set_collide_with_bodies;
		godot_method_bind *mb_set_collision_mask;
		godot_method_bind *mb_set_exclude;
		godot_method_bind *mb_set_margin;
		godot_method_bind *mb_set_shape;
		godot_method_bind *mb_set_shape_rid;
		godot_method_bind *mb_set_transform;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "PhysicsShapeQueryParameters"; }
	static inline const char *___get_godot_class_name() { return (const char *) "PhysicsShapeQueryParameters"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static physics_shape_query_parameters *_new();

	// methods
	int64_t get_collision_mask() const;
	array get_exclude() const;
	real_t get_margin() const;
	rid get_shape_rid() const;
	transform get_transform() const;
	bool is_collide_with_areas_enabled() const;
	bool is_collide_with_bodies_enabled() const;
	void set_collide_with_areas(const bool enable);
	void set_collide_with_bodies(const bool enable);
	void set_collision_mask(const int64_t collision_mask);
	void set_exclude(const array exclude);
	void set_margin(const real_t margin);
	void set_shape(const ref<resource> shape_);
	void set_shape_rid(const rid shape_);
	void set_transform(const transform transform_);

};

}

#endif