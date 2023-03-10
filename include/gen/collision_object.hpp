#ifndef GODOT_CPP_COLLISIONOBJECT_HPP
#define GODOT_CPP_COLLISIONOBJECT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "spatial.hpp"
namespace gd {

class input_event;
class object;
class shape;

class collision_object : public spatial {
	struct ___method_bindings {
		godot_method_bind *mb__input_event;
		godot_method_bind *mb__shape_changed;
		godot_method_bind *mb__update_debug_shapes;
		godot_method_bind *mb_create_shape_owner;
		godot_method_bind *mb_get_capture_input_on_drag;
		godot_method_bind *mb_get_collision_layer;
		godot_method_bind *mb_get_collision_layer_bit;
		godot_method_bind *mb_get_collision_mask;
		godot_method_bind *mb_get_collision_mask_bit;
		godot_method_bind *mb_get_rid;
		godot_method_bind *mb_get_shape_owners;
		godot_method_bind *mb_is_ray_pickable;
		godot_method_bind *mb_is_shape_owner_disabled;
		godot_method_bind *mb_remove_shape_owner;
		godot_method_bind *mb_set_capture_input_on_drag;
		godot_method_bind *mb_set_collision_layer;
		godot_method_bind *mb_set_collision_layer_bit;
		godot_method_bind *mb_set_collision_mask;
		godot_method_bind *mb_set_collision_mask_bit;
		godot_method_bind *mb_set_ray_pickable;
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
		godot_method_bind *mb_shape_owner_set_transform;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "CollisionObject"; }
	static inline const char *___get_godot_class_name() { return (const char *) "CollisionObject"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	void _input_event(const object *camera_, const ref<input_event> event, const vector3 position, const vector3 normal, const int64_t shape_idx);
	void _shape_changed(const ref<shape> shape_);
	void _update_debug_shapes();
	int64_t create_shape_owner(const object *owner);
	bool get_capture_input_on_drag() const;
	int64_t get_collision_layer() const;
	bool get_collision_layer_bit(const int64_t bit) const;
	int64_t get_collision_mask() const;
	bool get_collision_mask_bit(const int64_t bit) const;
	rid get_rid() const;
	array get_shape_owners();
	bool is_ray_pickable() const;
	bool is_shape_owner_disabled(const int64_t owner_id) const;
	void remove_shape_owner(const int64_t owner_id);
	void set_capture_input_on_drag(const bool enable);
	void set_collision_layer(const int64_t layer);
	void set_collision_layer_bit(const int64_t bit, const bool value);
	void set_collision_mask(const int64_t mask);
	void set_collision_mask_bit(const int64_t bit, const bool value);
	void set_ray_pickable(const bool ray_pickable);
	int64_t shape_find_owner(const int64_t shape_index) const;
	void shape_owner_add_shape(const int64_t owner_id, const ref<shape> shape_);
	void shape_owner_clear_shapes(const int64_t owner_id);
	object *shape_owner_get_owner(const int64_t owner_id) const;
	ref<shape> shape_owner_get_shape(const int64_t owner_id, const int64_t shape_id) const;
	int64_t shape_owner_get_shape_count(const int64_t owner_id) const;
	int64_t shape_owner_get_shape_index(const int64_t owner_id, const int64_t shape_id) const;
	transform shape_owner_get_transform(const int64_t owner_id) const;
	void shape_owner_remove_shape(const int64_t owner_id, const int64_t shape_id);
	void shape_owner_set_disabled(const int64_t owner_id, const bool disabled);
	void shape_owner_set_transform(const int64_t owner_id, const transform transform_);

};

}

#endif