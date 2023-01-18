#include "collision_object2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "input_event.hpp"
#include "object.hpp"
#include "shape2d.hpp"


namespace gd {


collision_object2d::___method_bindings collision_object2d::___mb = {};

void *collision_object2d::_detail_class_tag = nullptr;

void collision_object2d::___init_method_bindings() {
	___mb.mb__input_event = gd::api->godot_method_bind_get_method("CollisionObject2D", "_input_event");
	___mb.mb_create_shape_owner = gd::api->godot_method_bind_get_method("CollisionObject2D", "create_shape_owner");
	___mb.mb_get_collision_layer = gd::api->godot_method_bind_get_method("CollisionObject2D", "get_collision_layer");
	___mb.mb_get_collision_layer_bit = gd::api->godot_method_bind_get_method("CollisionObject2D", "get_collision_layer_bit");
	___mb.mb_get_collision_mask = gd::api->godot_method_bind_get_method("CollisionObject2D", "get_collision_mask");
	___mb.mb_get_collision_mask_bit = gd::api->godot_method_bind_get_method("CollisionObject2D", "get_collision_mask_bit");
	___mb.mb_get_rid = gd::api->godot_method_bind_get_method("CollisionObject2D", "get_rid");
	___mb.mb_get_shape_owner_one_way_collision_margin = gd::api->godot_method_bind_get_method("CollisionObject2D", "get_shape_owner_one_way_collision_margin");
	___mb.mb_get_shape_owners = gd::api->godot_method_bind_get_method("CollisionObject2D", "get_shape_owners");
	___mb.mb_is_pickable = gd::api->godot_method_bind_get_method("CollisionObject2D", "is_pickable");
	___mb.mb_is_shape_owner_disabled = gd::api->godot_method_bind_get_method("CollisionObject2D", "is_shape_owner_disabled");
	___mb.mb_is_shape_owner_one_way_collision_enabled = gd::api->godot_method_bind_get_method("CollisionObject2D", "is_shape_owner_one_way_collision_enabled");
	___mb.mb_remove_shape_owner = gd::api->godot_method_bind_get_method("CollisionObject2D", "remove_shape_owner");
	___mb.mb_set_collision_layer = gd::api->godot_method_bind_get_method("CollisionObject2D", "set_collision_layer");
	___mb.mb_set_collision_layer_bit = gd::api->godot_method_bind_get_method("CollisionObject2D", "set_collision_layer_bit");
	___mb.mb_set_collision_mask = gd::api->godot_method_bind_get_method("CollisionObject2D", "set_collision_mask");
	___mb.mb_set_collision_mask_bit = gd::api->godot_method_bind_get_method("CollisionObject2D", "set_collision_mask_bit");
	___mb.mb_set_pickable = gd::api->godot_method_bind_get_method("CollisionObject2D", "set_pickable");
	___mb.mb_shape_find_owner = gd::api->godot_method_bind_get_method("CollisionObject2D", "shape_find_owner");
	___mb.mb_shape_owner_add_shape = gd::api->godot_method_bind_get_method("CollisionObject2D", "shape_owner_add_shape");
	___mb.mb_shape_owner_clear_shapes = gd::api->godot_method_bind_get_method("CollisionObject2D", "shape_owner_clear_shapes");
	___mb.mb_shape_owner_get_owner = gd::api->godot_method_bind_get_method("CollisionObject2D", "shape_owner_get_owner");
	___mb.mb_shape_owner_get_shape = gd::api->godot_method_bind_get_method("CollisionObject2D", "shape_owner_get_shape");
	___mb.mb_shape_owner_get_shape_count = gd::api->godot_method_bind_get_method("CollisionObject2D", "shape_owner_get_shape_count");
	___mb.mb_shape_owner_get_shape_index = gd::api->godot_method_bind_get_method("CollisionObject2D", "shape_owner_get_shape_index");
	___mb.mb_shape_owner_get_transform = gd::api->godot_method_bind_get_method("CollisionObject2D", "shape_owner_get_transform");
	___mb.mb_shape_owner_remove_shape = gd::api->godot_method_bind_get_method("CollisionObject2D", "shape_owner_remove_shape");
	___mb.mb_shape_owner_set_disabled = gd::api->godot_method_bind_get_method("CollisionObject2D", "shape_owner_set_disabled");
	___mb.mb_shape_owner_set_one_way_collision = gd::api->godot_method_bind_get_method("CollisionObject2D", "shape_owner_set_one_way_collision");
	___mb.mb_shape_owner_set_one_way_collision_margin = gd::api->godot_method_bind_get_method("CollisionObject2D", "shape_owner_set_one_way_collision_margin");
	___mb.mb_shape_owner_set_transform = gd::api->godot_method_bind_get_method("CollisionObject2D", "shape_owner_set_transform");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "CollisionObject2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void collision_object2d::_input_event(const object *viewport_, const ref<input_event> event, const int64_t shape_idx) {
	___godot_icall_void_Object_Object_int(___mb.mb__input_event, (const object *) this, viewport_, event.ptr(), shape_idx);
}

int64_t collision_object2d::create_shape_owner(const object *owner) {
	return ___godot_icall_int_Object(___mb.mb_create_shape_owner, (const object *) this, owner);
}

int64_t collision_object2d::get_collision_layer() const {
	return ___godot_icall_int(___mb.mb_get_collision_layer, (const object *) this);
}

bool collision_object2d::get_collision_layer_bit(const int64_t bit) const {
	return ___godot_icall_bool_int(___mb.mb_get_collision_layer_bit, (const object *) this, bit);
}

int64_t collision_object2d::get_collision_mask() const {
	return ___godot_icall_int(___mb.mb_get_collision_mask, (const object *) this);
}

bool collision_object2d::get_collision_mask_bit(const int64_t bit) const {
	return ___godot_icall_bool_int(___mb.mb_get_collision_mask_bit, (const object *) this, bit);
}

rid collision_object2d::get_rid() const {
	return ___godot_icall_RID(___mb.mb_get_rid, (const object *) this);
}

real_t collision_object2d::get_shape_owner_one_way_collision_margin(const int64_t owner_id) const {
	return ___godot_icall_float_int(___mb.mb_get_shape_owner_one_way_collision_margin, (const object *) this, owner_id);
}

array collision_object2d::get_shape_owners() {
	return ___godot_icall_Array(___mb.mb_get_shape_owners, (const object *) this);
}

bool collision_object2d::is_pickable() const {
	return ___godot_icall_bool(___mb.mb_is_pickable, (const object *) this);
}

bool collision_object2d::is_shape_owner_disabled(const int64_t owner_id) const {
	return ___godot_icall_bool_int(___mb.mb_is_shape_owner_disabled, (const object *) this, owner_id);
}

bool collision_object2d::is_shape_owner_one_way_collision_enabled(const int64_t owner_id) const {
	return ___godot_icall_bool_int(___mb.mb_is_shape_owner_one_way_collision_enabled, (const object *) this, owner_id);
}

void collision_object2d::remove_shape_owner(const int64_t owner_id) {
	___godot_icall_void_int(___mb.mb_remove_shape_owner, (const object *) this, owner_id);
}

void collision_object2d::set_collision_layer(const int64_t layer) {
	___godot_icall_void_int(___mb.mb_set_collision_layer, (const object *) this, layer);
}

void collision_object2d::set_collision_layer_bit(const int64_t bit, const bool value) {
	___godot_icall_void_int_bool(___mb.mb_set_collision_layer_bit, (const object *) this, bit, value);
}

void collision_object2d::set_collision_mask(const int64_t mask) {
	___godot_icall_void_int(___mb.mb_set_collision_mask, (const object *) this, mask);
}

void collision_object2d::set_collision_mask_bit(const int64_t bit, const bool value) {
	___godot_icall_void_int_bool(___mb.mb_set_collision_mask_bit, (const object *) this, bit, value);
}

void collision_object2d::set_pickable(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_pickable, (const object *) this, enabled);
}

int64_t collision_object2d::shape_find_owner(const int64_t shape_index) const {
	return ___godot_icall_int_int(___mb.mb_shape_find_owner, (const object *) this, shape_index);
}

void collision_object2d::shape_owner_add_shape(const int64_t owner_id, const ref<shape2d> shape_) {
	___godot_icall_void_int_Object(___mb.mb_shape_owner_add_shape, (const object *) this, owner_id, shape_.ptr());
}

void collision_object2d::shape_owner_clear_shapes(const int64_t owner_id) {
	___godot_icall_void_int(___mb.mb_shape_owner_clear_shapes, (const object *) this, owner_id);
}

object *collision_object2d::shape_owner_get_owner(const int64_t owner_id) const {
	return (object *) ___godot_icall_Object_int(___mb.mb_shape_owner_get_owner, (const object *) this, owner_id);
}

ref<shape2d> collision_object2d::shape_owner_get_shape(const int64_t owner_id, const int64_t shape_id) const {
	return ref<shape2d>::__internal_constructor(___godot_icall_Object_int_int(___mb.mb_shape_owner_get_shape, (const object *) this, owner_id, shape_id));
}

int64_t collision_object2d::shape_owner_get_shape_count(const int64_t owner_id) const {
	return ___godot_icall_int_int(___mb.mb_shape_owner_get_shape_count, (const object *) this, owner_id);
}

int64_t collision_object2d::shape_owner_get_shape_index(const int64_t owner_id, const int64_t shape_id) const {
	return ___godot_icall_int_int_int(___mb.mb_shape_owner_get_shape_index, (const object *) this, owner_id, shape_id);
}

transform2d collision_object2d::shape_owner_get_transform(const int64_t owner_id) const {
	return ___godot_icall_Transform2D_int(___mb.mb_shape_owner_get_transform, (const object *) this, owner_id);
}

void collision_object2d::shape_owner_remove_shape(const int64_t owner_id, const int64_t shape_id) {
	___godot_icall_void_int_int(___mb.mb_shape_owner_remove_shape, (const object *) this, owner_id, shape_id);
}

void collision_object2d::shape_owner_set_disabled(const int64_t owner_id, const bool disabled) {
	___godot_icall_void_int_bool(___mb.mb_shape_owner_set_disabled, (const object *) this, owner_id, disabled);
}

void collision_object2d::shape_owner_set_one_way_collision(const int64_t owner_id, const bool enable) {
	___godot_icall_void_int_bool(___mb.mb_shape_owner_set_one_way_collision, (const object *) this, owner_id, enable);
}

void collision_object2d::shape_owner_set_one_way_collision_margin(const int64_t owner_id, const real_t margin) {
	___godot_icall_void_int_float(___mb.mb_shape_owner_set_one_way_collision_margin, (const object *) this, owner_id, margin);
}

void collision_object2d::shape_owner_set_transform(const int64_t owner_id, const transform2d transform_) {
	___godot_icall_void_int_Transform2D(___mb.mb_shape_owner_set_transform, (const object *) this, owner_id, transform_);
}

}