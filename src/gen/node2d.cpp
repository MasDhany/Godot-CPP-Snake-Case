#include "node2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "node.hpp"


namespace gd {


node2d::___method_bindings node2d::___mb = {};

void *node2d::_detail_class_tag = nullptr;

void node2d::___init_method_bindings() {
	___mb.mb_apply_scale = gd::api->godot_method_bind_get_method("Node2D", "apply_scale");
	___mb.mb_get_angle_to = gd::api->godot_method_bind_get_method("Node2D", "get_angle_to");
	___mb.mb_get_global_position = gd::api->godot_method_bind_get_method("Node2D", "get_global_position");
	___mb.mb_get_global_rotation = gd::api->godot_method_bind_get_method("Node2D", "get_global_rotation");
	___mb.mb_get_global_rotation_degrees = gd::api->godot_method_bind_get_method("Node2D", "get_global_rotation_degrees");
	___mb.mb_get_global_scale = gd::api->godot_method_bind_get_method("Node2D", "get_global_scale");
	___mb.mb_get_position = gd::api->godot_method_bind_get_method("Node2D", "get_position");
	___mb.mb_get_relative_transform_to_parent = gd::api->godot_method_bind_get_method("Node2D", "get_relative_transform_to_parent");
	___mb.mb_get_rotation = gd::api->godot_method_bind_get_method("Node2D", "get_rotation");
	___mb.mb_get_rotation_degrees = gd::api->godot_method_bind_get_method("Node2D", "get_rotation_degrees");
	___mb.mb_get_scale = gd::api->godot_method_bind_get_method("Node2D", "get_scale");
	___mb.mb_get_z_index = gd::api->godot_method_bind_get_method("Node2D", "get_z_index");
	___mb.mb_global_translate = gd::api->godot_method_bind_get_method("Node2D", "global_translate");
	___mb.mb_is_z_relative = gd::api->godot_method_bind_get_method("Node2D", "is_z_relative");
	___mb.mb_look_at = gd::api->godot_method_bind_get_method("Node2D", "look_at");
	___mb.mb_move_local_x = gd::api->godot_method_bind_get_method("Node2D", "move_local_x");
	___mb.mb_move_local_y = gd::api->godot_method_bind_get_method("Node2D", "move_local_y");
	___mb.mb_rotate = gd::api->godot_method_bind_get_method("Node2D", "rotate");
	___mb.mb_set_global_position = gd::api->godot_method_bind_get_method("Node2D", "set_global_position");
	___mb.mb_set_global_rotation = gd::api->godot_method_bind_get_method("Node2D", "set_global_rotation");
	___mb.mb_set_global_rotation_degrees = gd::api->godot_method_bind_get_method("Node2D", "set_global_rotation_degrees");
	___mb.mb_set_global_scale = gd::api->godot_method_bind_get_method("Node2D", "set_global_scale");
	___mb.mb_set_global_transform = gd::api->godot_method_bind_get_method("Node2D", "set_global_transform");
	___mb.mb_set_position = gd::api->godot_method_bind_get_method("Node2D", "set_position");
	___mb.mb_set_rotation = gd::api->godot_method_bind_get_method("Node2D", "set_rotation");
	___mb.mb_set_rotation_degrees = gd::api->godot_method_bind_get_method("Node2D", "set_rotation_degrees");
	___mb.mb_set_scale = gd::api->godot_method_bind_get_method("Node2D", "set_scale");
	___mb.mb_set_transform = gd::api->godot_method_bind_get_method("Node2D", "set_transform");
	___mb.mb_set_z_as_relative = gd::api->godot_method_bind_get_method("Node2D", "set_z_as_relative");
	___mb.mb_set_z_index = gd::api->godot_method_bind_get_method("Node2D", "set_z_index");
	___mb.mb_to_global = gd::api->godot_method_bind_get_method("Node2D", "to_global");
	___mb.mb_to_local = gd::api->godot_method_bind_get_method("Node2D", "to_local");
	___mb.mb_translate = gd::api->godot_method_bind_get_method("Node2D", "translate");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Node2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

node2d *node2d::_new()
{
	return (node2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Node2D")());
}
void node2d::apply_scale(const vector2 ratio) {
	___godot_icall_void_Vector2(___mb.mb_apply_scale, (const object *) this, ratio);
}

real_t node2d::get_angle_to(const vector2 point) const {
	return ___godot_icall_float_Vector2(___mb.mb_get_angle_to, (const object *) this, point);
}

vector2 node2d::get_global_position() const {
	return ___godot_icall_Vector2(___mb.mb_get_global_position, (const object *) this);
}

real_t node2d::get_global_rotation() const {
	return ___godot_icall_float(___mb.mb_get_global_rotation, (const object *) this);
}

real_t node2d::get_global_rotation_degrees() const {
	return ___godot_icall_float(___mb.mb_get_global_rotation_degrees, (const object *) this);
}

vector2 node2d::get_global_scale() const {
	return ___godot_icall_Vector2(___mb.mb_get_global_scale, (const object *) this);
}

vector2 node2d::get_position() const {
	return ___godot_icall_Vector2(___mb.mb_get_position, (const object *) this);
}

transform2d node2d::get_relative_transform_to_parent(const node *parent) const {
	return ___godot_icall_Transform2D_Object(___mb.mb_get_relative_transform_to_parent, (const object *) this, parent);
}

real_t node2d::get_rotation() const {
	return ___godot_icall_float(___mb.mb_get_rotation, (const object *) this);
}

real_t node2d::get_rotation_degrees() const {
	return ___godot_icall_float(___mb.mb_get_rotation_degrees, (const object *) this);
}

vector2 node2d::get_scale() const {
	return ___godot_icall_Vector2(___mb.mb_get_scale, (const object *) this);
}

int64_t node2d::get_z_index() const {
	return ___godot_icall_int(___mb.mb_get_z_index, (const object *) this);
}

void node2d::global_translate(const vector2 offset) {
	___godot_icall_void_Vector2(___mb.mb_global_translate, (const object *) this, offset);
}

bool node2d::is_z_relative() const {
	return ___godot_icall_bool(___mb.mb_is_z_relative, (const object *) this);
}

void node2d::look_at(const vector2 point) {
	___godot_icall_void_Vector2(___mb.mb_look_at, (const object *) this, point);
}

void node2d::move_local_x(const real_t delta, const bool scaled) {
	___godot_icall_void_float_bool(___mb.mb_move_local_x, (const object *) this, delta, scaled);
}

void node2d::move_local_y(const real_t delta, const bool scaled) {
	___godot_icall_void_float_bool(___mb.mb_move_local_y, (const object *) this, delta, scaled);
}

void node2d::rotate(const real_t radians) {
	___godot_icall_void_float(___mb.mb_rotate, (const object *) this, radians);
}

void node2d::set_global_position(const vector2 position) {
	___godot_icall_void_Vector2(___mb.mb_set_global_position, (const object *) this, position);
}

void node2d::set_global_rotation(const real_t radians) {
	___godot_icall_void_float(___mb.mb_set_global_rotation, (const object *) this, radians);
}

void node2d::set_global_rotation_degrees(const real_t degrees) {
	___godot_icall_void_float(___mb.mb_set_global_rotation_degrees, (const object *) this, degrees);
}

void node2d::set_global_scale(const vector2 scale) {
	___godot_icall_void_Vector2(___mb.mb_set_global_scale, (const object *) this, scale);
}

void node2d::set_global_transform(const transform2d xform) {
	___godot_icall_void_Transform2D(___mb.mb_set_global_transform, (const object *) this, xform);
}

void node2d::set_position(const vector2 position) {
	___godot_icall_void_Vector2(___mb.mb_set_position, (const object *) this, position);
}

void node2d::set_rotation(const real_t radians) {
	___godot_icall_void_float(___mb.mb_set_rotation, (const object *) this, radians);
}

void node2d::set_rotation_degrees(const real_t degrees) {
	___godot_icall_void_float(___mb.mb_set_rotation_degrees, (const object *) this, degrees);
}

void node2d::set_scale(const vector2 scale) {
	___godot_icall_void_Vector2(___mb.mb_set_scale, (const object *) this, scale);
}

void node2d::set_transform(const transform2d xform) {
	___godot_icall_void_Transform2D(___mb.mb_set_transform, (const object *) this, xform);
}

void node2d::set_z_as_relative(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_z_as_relative, (const object *) this, enable);
}

void node2d::set_z_index(const int64_t z_index) {
	___godot_icall_void_int(___mb.mb_set_z_index, (const object *) this, z_index);
}

vector2 node2d::to_global(const vector2 local_point) const {
	return ___godot_icall_Vector2_Vector2(___mb.mb_to_global, (const object *) this, local_point);
}

vector2 node2d::to_local(const vector2 global_point) const {
	return ___godot_icall_Vector2_Vector2(___mb.mb_to_local, (const object *) this, global_point);
}

void node2d::translate(const vector2 offset) {
	___godot_icall_void_Vector2(___mb.mb_translate, (const object *) this, offset);
}

}