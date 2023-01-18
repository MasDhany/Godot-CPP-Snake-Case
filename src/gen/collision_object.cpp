#include "collision_object.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "input_event.hpp"
#include "object.hpp"
#include "shape.hpp"


namespace gd {


collision_object::___method_bindings collision_object::___mb = {};

void *collision_object::_detail_class_tag = nullptr;

void collision_object::___init_method_bindings() {
	___mb.mb__input_event = gd::api->godot_method_bind_get_method("CollisionObject", "_input_event");
	___mb.mb__shape_changed = gd::api->godot_method_bind_get_method("CollisionObject", "_shape_changed");
	___mb.mb__update_debug_shapes = gd::api->godot_method_bind_get_method("CollisionObject", "_update_debug_shapes");
	___mb.mb_create_shape_owner = gd::api->godot_method_bind_get_method("CollisionObject", "create_shape_owner");
	___mb.mb_get_capture_input_on_drag = gd::api->godot_method_bind_get_method("CollisionObject", "get_capture_input_on_drag");
	___mb.mb_get_collision_layer = gd::api->godot_method_bind_get_method("CollisionObject", "get_collision_layer");
	___mb.mb_get_collision_layer_bit = gd::api->godot_method_bind_get_method("CollisionObject", "get_collision_layer_bit");
	___mb.mb_get_collision_mask = gd::api->godot_method_bind_get_method("CollisionObject", "get_collision_mask");
	___mb.mb_get_collision_mask_bit = gd::api->godot_method_bind_get_method("CollisionObject", "get_collision_mask_bit");
	___mb.mb_get_rid = gd::api->godot_method_bind_get_method("CollisionObject", "get_rid");
	___mb.mb_get_shape_owners = gd::api->godot_method_bind_get_method("CollisionObject", "get_shape_owners");
	___mb.mb_is_ray_pickable = gd::api->godot_method_bind_get_method("CollisionObject", "is_ray_pickable");
	___mb.mb_is_shape_owner_disabled = gd::api->godot_method_bind_get_method("CollisionObject", "is_shape_owner_disabled");
	___mb.mb_remove_shape_owner = gd::api->godot_method_bind_get_method("CollisionObject", "remove_shape_owner");
	___mb.mb_set_capture_input_on_drag = gd::api->godot_method_bind_get_method("CollisionObject", "set_capture_input_on_drag");
	___mb.mb_set_collision_layer = gd::api->godot_method_bind_get_method("CollisionObject", "set_collision_layer");
	___mb.mb_set_collision_layer_bit = gd::api->godot_method_bind_get_method("CollisionObject", "set_collision_layer_bit");
	___mb.mb_set_collision_mask = gd::api->godot_method_bind_get_method("CollisionObject", "set_collision_mask");
	___mb.mb_set_collision_mask_bit = gd::api->godot_method_bind_get_method("CollisionObject", "set_collision_mask_bit");
	___mb.mb_set_ray_pickable = gd::api->godot_method_bind_get_method("CollisionObject", "set_ray_pickable");
	___mb.mb_shape_find_owner = gd::api->godot_method_bind_get_method("CollisionObject", "shape_find_owner");
	___mb.mb_shape_owner_add_shape = gd::api->godot_method_bind_get_method("CollisionObject", "shape_owner_add_shape");
	___mb.mb_shape_owner_clear_shapes = gd::api->godot_method_bind_get_method("CollisionObject", "shape_owner_clear_shapes");
	___mb.mb_shape_owner_get_owner = gd::api->godot_method_bind_get_method("CollisionObject", "shape_owner_get_owner");
	___mb.mb_shape_owner_get_shape = gd::api->godot_method_bind_get_method("CollisionObject", "shape_owner_get_shape");
	___mb.mb_shape_owner_get_shape_count = gd::api->godot_method_bind_get_method("CollisionObject", "shape_owner_get_shape_count");
	___mb.mb_shape_owner_get_shape_index = gd::api->godot_method_bind_get_method("CollisionObject", "shape_owner_get_shape_index");
	___mb.mb_shape_owner_get_transform = gd::api->godot_method_bind_get_method("CollisionObject", "shape_owner_get_transform");
	___mb.mb_shape_owner_remove_shape = gd::api->godot_method_bind_get_method("CollisionObject", "shape_owner_remove_shape");
	___mb.mb_shape_owner_set_disabled = gd::api->godot_method_bind_get_method("CollisionObject", "shape_owner_set_disabled");
	___mb.mb_shape_owner_set_transform = gd::api->godot_method_bind_get_method("CollisionObject", "shape_owner_set_transform");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "CollisionObject");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void collision_object::_input_event(const object *camera_, const ref<input_event> event, const vector3 position, const vector3 normal, const int64_t shape_idx) {
	___godot_icall_void_Object_Object_Vector3_Vector3_int(___mb.mb__input_event, (const object *) this, camera_, event.ptr(), position, normal, shape_idx);
}

void collision_object::_shape_changed(const ref<shape> shape_) {
	___godot_icall_void_Object(___mb.mb__shape_changed, (const object *) this, shape_.ptr());
}

void collision_object::_update_debug_shapes() {
	___godot_icall_void(___mb.mb__update_debug_shapes, (const object *) this);
}

int64_t collision_object::create_shape_owner(const object *owner) {
	return ___godot_icall_int_Object(___mb.mb_create_shape_owner, (const object *) this, owner);
}

bool collision_object::get_capture_input_on_drag() const {
	return ___godot_icall_bool(___mb.mb_get_capture_input_on_drag, (const object *) this);
}

int64_t collision_object::get_collision_layer() const {
	return ___godot_icall_int(___mb.mb_get_collision_layer, (const object *) this);
}

bool collision_object::get_collision_layer_bit(const int64_t bit) const {
	return ___godot_icall_bool_int(___mb.mb_get_collision_layer_bit, (const object *) this, bit);
}

int64_t collision_object::get_collision_mask() const {
	return ___godot_icall_int(___mb.mb_get_collision_mask, (const object *) this);
}

bool collision_object::get_collision_mask_bit(const int64_t bit) const {
	return ___godot_icall_bool_int(___mb.mb_get_collision_mask_bit, (const object *) this, bit);
}

rid collision_object::get_rid() const {
	return ___godot_icall_RID(___mb.mb_get_rid, (const object *) this);
}

array collision_object::get_shape_owners() {
	return ___godot_icall_Array(___mb.mb_get_shape_owners, (const object *) this);
}

bool collision_object::is_ray_pickable() const {
	return ___godot_icall_bool(___mb.mb_is_ray_pickable, (const object *) this);
}

bool collision_object::is_shape_owner_disabled(const int64_t owner_id) const {
	return ___godot_icall_bool_int(___mb.mb_is_shape_owner_disabled, (const object *) this, owner_id);
}

void collision_object::remove_shape_owner(const int64_t owner_id) {
	___godot_icall_void_int(___mb.mb_remove_shape_owner, (const object *) this, owner_id);
}

void collision_object::set_capture_input_on_drag(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_capture_input_on_drag, (const object *) this, enable);
}

void collision_object::set_collision_layer(const int64_t layer) {
	___godot_icall_void_int(___mb.mb_set_collision_layer, (const object *) this, layer);
}

void collision_object::set_collision_layer_bit(const int64_t bit, const bool value) {
	___godot_icall_void_int_bool(___mb.mb_set_collision_layer_bit, (const object *) this, bit, value);
}

void collision_object::set_collision_mask(const int64_t mask) {
	___godot_icall_void_int(___mb.mb_set_collision_mask, (const object *) this, mask);
}

void collision_object::set_collision_mask_bit(const int64_t bit, const bool value) {
	___godot_icall_void_int_bool(___mb.mb_set_collision_mask_bit, (const object *) this, bit, value);
}

void collision_object::set_ray_pickable(const bool ray_pickable) {
	___godot_icall_void_bool(___mb.mb_set_ray_pickable, (const object *) this, ray_pickable);
}

int64_t collision_object::shape_find_owner(const int64_t shape_index) const {
	return ___godot_icall_int_int(___mb.mb_shape_find_owner, (const object *) this, shape_index);
}

void collision_object::shape_owner_add_shape(const int64_t owner_id, const ref<shape> shape_) {
	___godot_icall_void_int_Object(___mb.mb_shape_owner_add_shape, (const object *) this, owner_id, shape_.ptr());
}

void collision_object::shape_owner_clear_shapes(const int64_t owner_id) {
	___godot_icall_void_int(___mb.mb_shape_owner_clear_shapes, (const object *) this, owner_id);
}

object *collision_object::shape_owner_get_owner(const int64_t owner_id) const {
	return (object *) ___godot_icall_Object_int(___mb.mb_shape_owner_get_owner, (const object *) this, owner_id);
}

ref<shape> collision_object::shape_owner_get_shape(const int64_t owner_id, const int64_t shape_id) const {
	return ref<shape>::__internal_constructor(___godot_icall_Object_int_int(___mb.mb_shape_owner_get_shape, (const object *) this, owner_id, shape_id));
}

int64_t collision_object::shape_owner_get_shape_count(const int64_t owner_id) const {
	return ___godot_icall_int_int(___mb.mb_shape_owner_get_shape_count, (const object *) this, owner_id);
}

int64_t collision_object::shape_owner_get_shape_index(const int64_t owner_id, const int64_t shape_id) const {
	return ___godot_icall_int_int_int(___mb.mb_shape_owner_get_shape_index, (const object *) this, owner_id, shape_id);
}

transform collision_object::shape_owner_get_transform(const int64_t owner_id) const {
	return ___godot_icall_Transform_int(___mb.mb_shape_owner_get_transform, (const object *) this, owner_id);
}

void collision_object::shape_owner_remove_shape(const int64_t owner_id, const int64_t shape_id) {
	___godot_icall_void_int_int(___mb.mb_shape_owner_remove_shape, (const object *) this, owner_id, shape_id);
}

void collision_object::shape_owner_set_disabled(const int64_t owner_id, const bool disabled) {
	___godot_icall_void_int_bool(___mb.mb_shape_owner_set_disabled, (const object *) this, owner_id, disabled);
}

void collision_object::shape_owner_set_transform(const int64_t owner_id, const transform transform_) {
	___godot_icall_void_int_Transform(___mb.mb_shape_owner_set_transform, (const object *) this, owner_id, transform_);
}

}