#ifndef GODOT_CPP_COLLISIONOBJECT2D_HPP
#define GODOT_CPP_COLLISIONOBJECT2D_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "node2d.hpp"
namespace gd {

class input_event;
class object;
class shape2d;

class collision_object2d : public node2d {
	struct ___method_bindings {
		godot_method_bind *mb__input_event;
		godot_method_bind *mb_create_shape_owner;
		godot_method_bind *mb_get_collision_layer;
		godot_method_bind *mb_get_collision_layer_bit;
		godot_method_bind *mb_get_collision_mask;
		godot_method_bind *mb_get_collision_mask_bit;
		godot_method_bind *mb_get_rid;
		godot_method_bind *mb_get_shape_owner_one_way_collision_margin;
		godot_method_bind *mb_get_shape_owners;
		godot_method_bind *mb_is_pickable;
		godot_method_bind *mb_is_shape_owner_disabled;
		godot_method_bind *mb_is_shape_owner_one_way_collision_enabled;
		godot_method_bind *mb_remove_shape_owner;
		godot_method_bind *mb_set_collision_layer;
		godot_method_bind *mb_set_collision_layer_bit;
		godot_method_bind *mb_set_collision_mask;
		godot_method_bind *mb_set_collision_mask_bit;
		godot_method_bind *mb_set_pickable;
		godot_method_bind *mb_shape_find_owner;
		godot_method_bind *mb_shape_owner_add_shape;
		godot_method_bind *mb_shape_owner_clear_shapes;
		godot_method_bind *mb_shape_owner_get_owner;
		godot_method_bind *mb_shape_owner_get_shape;
		godot_method_bind *mb_shape_owner_get_shape_count;
		godot_method_bind *mb_shape_owner_get_shape_index;
		godot_method_bind *mb_shape_owner_get_transform;
		godot_method_bind *mb_shape_owner_remove_shape;
		godot_method_bind *mb_shape_owner_set_disabled;
		godot_method_bind *mb_shape_owner_set_one_way_collision;
		godot_method_bind *mb_shape_owner_set_one_way_collision_margin;
		godot_method_bind *mb_shape_owner_set_transform;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "CollisionObject2D"; }
	static inline const char *___get_godot_class_name() { return (const char *) "CollisionObject2D"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	void _input_event(const object *viewport_, const ref<input_event> event, const int64_t shape_idx);
	int64_t create_shape_owner(const object *owner);
	int64_t get_collision_layer() const;
	bool get_collision_layer_bit(const int64_t bit) const;
	int64_t get_collision_mask() const;
	bool get_collision_mask_bit(const int64_t bit) const;
	rid get_rid() const;
	real_t get_shape_owner_one_way_collision_margin(const int64_t owner_id) const;
	array get_shape_owners();
	bool is_pickable() const;
	bool is_shape_owner_disabled(const int64_t owner_id) const;
	bool is_shape_owner_one_way_collision_enabled(const int64_t owner_id) const;
	void remove_shape_owner(const int64_t owner_id);
	void set_collision_layer(const int64_t layer);
	void set_collision_layer_bit(const int64_t bit, const bool value);
	void set_collision_mask(const int64_t mask);
	void set_collision_mask_bit(const int64_t bit, const bool value);
	void set_pickable(const bool enabled);
	int64_t shape_find_owner(const int64_t shape_index) const;
	void shape_owner_add_shape(const int64_t owner_id, const ref<shape2d> shape_);
	void shape_owner_clear_shapes(const int64_t owner_id);
	object *shape_owner_get_owner(const int64_t owner_id) const;
	ref<shape2d> shape_owner_get_shape(const int64_t owner_id, const int64_t shape_id) const;
	int64_t shape_owner_get_shape_count(const int64_t owner_id) const;
	int64_t shape_owner_get_shape_index(const int64_t owner_id, const int64_t shape_id) const;
	transform2d shape_owner_get_transform(const int64_t owner_id) const;
	void shape_owner_remove_shape(const int64_t owner_id, const int64_t shape_id);
	void shape_owner_set_disabled(const int64_t owner_id, const bool disabled);
	void shape_owner_set_one_way_collision(const int64_t owner_id, const bool enable);
	void shape_owner_set_one_way_collision_margin(const int64_t owner_id, const real_t margin);
	void shape_owner_set_transform(const int64_t owner_id, const transform2d transform_);

};

}

#endif