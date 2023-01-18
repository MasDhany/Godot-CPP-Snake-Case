#include "csgshape.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


csgshape::___method_bindings csgshape::___mb = {};

void *csgshape::_detail_class_tag = nullptr;

void csgshape::___init_method_bindings() {
	___mb.mb__update_shape = gd::api->godot_method_bind_get_method("CSGShape", "_update_shape");
	___mb.mb_get_collision_layer = gd::api->godot_method_bind_get_method("CSGShape", "get_collision_layer");
	___mb.mb_get_collision_layer_bit = gd::api->godot_method_bind_get_method("CSGShape", "get_collision_layer_bit");
	___mb.mb_get_collision_mask = gd::api->godot_method_bind_get_method("CSGShape", "get_collision_mask");
	___mb.mb_get_collision_mask_bit = gd::api->godot_method_bind_get_method("CSGShape", "get_collision_mask_bit");
	___mb.mb_get_meshes = gd::api->godot_method_bind_get_method("CSGShape", "get_meshes");
	___mb.mb_get_operation = gd::api->godot_method_bind_get_method("CSGShape", "get_operation");
	___mb.mb_get_snap = gd::api->godot_method_bind_get_method("CSGShape", "get_snap");
	___mb.mb_is_calculating_tangents = gd::api->godot_method_bind_get_method("CSGShape", "is_calculating_tangents");
	___mb.mb_is_root_shape = gd::api->godot_method_bind_get_method("CSGShape", "is_root_shape");
	___mb.mb_is_using_collision = gd::api->godot_method_bind_get_method("CSGShape", "is_using_collision");
	___mb.mb_set_calculate_tangents = gd::api->godot_method_bind_get_method("CSGShape", "set_calculate_tangents");
	___mb.mb_set_collision_layer = gd::api->godot_method_bind_get_method("CSGShape", "set_collision_layer");
	___mb.mb_set_collision_layer_bit = gd::api->godot_method_bind_get_method("CSGShape", "set_collision_layer_bit");
	___mb.mb_set_collision_mask = gd::api->godot_method_bind_get_method("CSGShape", "set_collision_mask");
	___mb.mb_set_collision_mask_bit = gd::api->godot_method_bind_get_method("CSGShape", "set_collision_mask_bit");
	___mb.mb_set_operation = gd::api->godot_method_bind_get_method("CSGShape", "set_operation");
	___mb.mb_set_snap = gd::api->godot_method_bind_get_method("CSGShape", "set_snap");
	___mb.mb_set_use_collision = gd::api->godot_method_bind_get_method("CSGShape", "set_use_collision");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "CSGShape");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void csgshape::_update_shape() {
	___godot_icall_void(___mb.mb__update_shape, (const object *) this);
}

int64_t csgshape::get_collision_layer() const {
	return ___godot_icall_int(___mb.mb_get_collision_layer, (const object *) this);
}

bool csgshape::get_collision_layer_bit(const int64_t bit) const {
	return ___godot_icall_bool_int(___mb.mb_get_collision_layer_bit, (const object *) this, bit);
}

int64_t csgshape::get_collision_mask() const {
	return ___godot_icall_int(___mb.mb_get_collision_mask, (const object *) this);
}

bool csgshape::get_collision_mask_bit(const int64_t bit) const {
	return ___godot_icall_bool_int(___mb.mb_get_collision_mask_bit, (const object *) this, bit);
}

array csgshape::get_meshes() const {
	return ___godot_icall_Array(___mb.mb_get_meshes, (const object *) this);
}

csgshape::Operation csgshape::get_operation() const {
	return (csgshape::Operation) ___godot_icall_int(___mb.mb_get_operation, (const object *) this);
}

real_t csgshape::get_snap() const {
	return ___godot_icall_float(___mb.mb_get_snap, (const object *) this);
}

bool csgshape::is_calculating_tangents() const {
	return ___godot_icall_bool(___mb.mb_is_calculating_tangents, (const object *) this);
}

bool csgshape::is_root_shape() const {
	return ___godot_icall_bool(___mb.mb_is_root_shape, (const object *) this);
}

bool csgshape::is_using_collision() const {
	return ___godot_icall_bool(___mb.mb_is_using_collision, (const object *) this);
}

void csgshape::set_calculate_tangents(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_calculate_tangents, (const object *) this, enabled);
}

void csgshape::set_collision_layer(const int64_t layer) {
	___godot_icall_void_int(___mb.mb_set_collision_layer, (const object *) this, layer);
}

void csgshape::set_collision_layer_bit(const int64_t bit, const bool value) {
	___godot_icall_void_int_bool(___mb.mb_set_collision_layer_bit, (const object *) this, bit, value);
}

void csgshape::set_collision_mask(const int64_t mask) {
	___godot_icall_void_int(___mb.mb_set_collision_mask, (const object *) this, mask);
}

void csgshape::set_collision_mask_bit(const int64_t bit, const bool value) {
	___godot_icall_void_int_bool(___mb.mb_set_collision_mask_bit, (const object *) this, bit, value);
}

void csgshape::set_operation(const int64_t operation) {
	___godot_icall_void_int(___mb.mb_set_operation, (const object *) this, operation);
}

void csgshape::set_snap(const real_t snap) {
	___godot_icall_void_float(___mb.mb_set_snap, (const object *) this, snap);
}

void csgshape::set_use_collision(const bool operation) {
	___godot_icall_void_bool(___mb.mb_set_use_collision, (const object *) this, operation);
}

}