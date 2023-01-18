#include "line2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "curve.hpp"
#include "gradient.hpp"
#include "texture.hpp"


namespace gd {


line2d::___method_bindings line2d::___mb = {};

void *line2d::_detail_class_tag = nullptr;

void line2d::___init_method_bindings() {
	___mb.mb__curve_changed = gd::api->godot_method_bind_get_method("Line2D", "_curve_changed");
	___mb.mb__gradient_changed = gd::api->godot_method_bind_get_method("Line2D", "_gradient_changed");
	___mb.mb_add_point = gd::api->godot_method_bind_get_method("Line2D", "add_point");
	___mb.mb_clear_points = gd::api->godot_method_bind_get_method("Line2D", "clear_points");
	___mb.mb_get_antialiased = gd::api->godot_method_bind_get_method("Line2D", "get_antialiased");
	___mb.mb_get_begin_cap_mode = gd::api->godot_method_bind_get_method("Line2D", "get_begin_cap_mode");
	___mb.mb_get_curve = gd::api->godot_method_bind_get_method("Line2D", "get_curve");
	___mb.mb_get_default_color = gd::api->godot_method_bind_get_method("Line2D", "get_default_color");
	___mb.mb_get_end_cap_mode = gd::api->godot_method_bind_get_method("Line2D", "get_end_cap_mode");
	___mb.mb_get_gradient = gd::api->godot_method_bind_get_method("Line2D", "get_gradient");
	___mb.mb_get_joint_mode = gd::api->godot_method_bind_get_method("Line2D", "get_joint_mode");
	___mb.mb_get_point_count = gd::api->godot_method_bind_get_method("Line2D", "get_point_count");
	___mb.mb_get_point_position = gd::api->godot_method_bind_get_method("Line2D", "get_point_position");
	___mb.mb_get_points = gd::api->godot_method_bind_get_method("Line2D", "get_points");
	___mb.mb_get_round_precision = gd::api->godot_method_bind_get_method("Line2D", "get_round_precision");
	___mb.mb_get_sharp_limit = gd::api->godot_method_bind_get_method("Line2D", "get_sharp_limit");
	___mb.mb_get_texture = gd::api->godot_method_bind_get_method("Line2D", "get_texture");
	___mb.mb_get_texture_mode = gd::api->godot_method_bind_get_method("Line2D", "get_texture_mode");
	___mb.mb_get_width = gd::api->godot_method_bind_get_method("Line2D", "get_width");
	___mb.mb_remove_point = gd::api->godot_method_bind_get_method("Line2D", "remove_point");
	___mb.mb_set_antialiased = gd::api->godot_method_bind_get_method("Line2D", "set_antialiased");
	___mb.mb_set_begin_cap_mode = gd::api->godot_method_bind_get_method("Line2D", "set_begin_cap_mode");
	___mb.mb_set_curve = gd::api->godot_method_bind_get_method("Line2D", "set_curve");
	___mb.mb_set_default_color = gd::api->godot_method_bind_get_method("Line2D", "set_default_color");
	___mb.mb_set_end_cap_mode = gd::api->godot_method_bind_get_method("Line2D", "set_end_cap_mode");
	___mb.mb_set_gradient = gd::api->godot_method_bind_get_method("Line2D", "set_gradient");
	___mb.mb_set_joint_mode = gd::api->godot_method_bind_get_method("Line2D", "set_joint_mode");
	___mb.mb_set_point_position = gd::api->godot_method_bind_get_method("Line2D", "set_point_position");
	___mb.mb_set_points = gd::api->godot_method_bind_get_method("Line2D", "set_points");
	___mb.mb_set_round_precision = gd::api->godot_method_bind_get_method("Line2D", "set_round_precision");
	___mb.mb_set_sharp_limit = gd::api->godot_method_bind_get_method("Line2D", "set_sharp_limit");
	___mb.mb_set_texture = gd::api->godot_method_bind_get_method("Line2D", "set_texture");
	___mb.mb_set_texture_mode = gd::api->godot_method_bind_get_method("Line2D", "set_texture_mode");
	___mb.mb_set_width = gd::api->godot_method_bind_get_method("Line2D", "set_width");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Line2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

line2d *line2d::_new()
{
	return (line2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Line2D")());
}
void line2d::_curve_changed() {
	___godot_icall_void(___mb.mb__curve_changed, (const object *) this);
}

void line2d::_gradient_changed() {
	___godot_icall_void(___mb.mb__gradient_changed, (const object *) this);
}

void line2d::add_point(const vector2 position, const int64_t index) {
	___godot_icall_void_Vector2_int(___mb.mb_add_point, (const object *) this, position, index);
}

void line2d::clear_points() {
	___godot_icall_void(___mb.mb_clear_points, (const object *) this);
}

bool line2d::get_antialiased() const {
	return ___godot_icall_bool(___mb.mb_get_antialiased, (const object *) this);
}

line2d::LineCapMode line2d::get_begin_cap_mode() const {
	return (line2d::LineCapMode) ___godot_icall_int(___mb.mb_get_begin_cap_mode, (const object *) this);
}

ref<curve> line2d::get_curve() const {
	return ref<curve>::__internal_constructor(___godot_icall_Object(___mb.mb_get_curve, (const object *) this));
}

color line2d::get_default_color() const {
	return ___godot_icall_Color(___mb.mb_get_default_color, (const object *) this);
}

line2d::LineCapMode line2d::get_end_cap_mode() const {
	return (line2d::LineCapMode) ___godot_icall_int(___mb.mb_get_end_cap_mode, (const object *) this);
}

ref<gradient> line2d::get_gradient() const {
	return ref<gradient>::__internal_constructor(___godot_icall_Object(___mb.mb_get_gradient, (const object *) this));
}

line2d::LineJointMode line2d::get_joint_mode() const {
	return (line2d::LineJointMode) ___godot_icall_int(___mb.mb_get_joint_mode, (const object *) this);
}

int64_t line2d::get_point_count() const {
	return ___godot_icall_int(___mb.mb_get_point_count, (const object *) this);
}

vector2 line2d::get_point_position(const int64_t index) const {
	return ___godot_icall_Vector2_int(___mb.mb_get_point_position, (const object *) this, index);
}

pool_vector2_array line2d::get_points() const {
	return ___godot_icall_PoolVector2Array(___mb.mb_get_points, (const object *) this);
}

int64_t line2d::get_round_precision() const {
	return ___godot_icall_int(___mb.mb_get_round_precision, (const object *) this);
}

real_t line2d::get_sharp_limit() const {
	return ___godot_icall_float(___mb.mb_get_sharp_limit, (const object *) this);
}

ref<texture> line2d::get_texture() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_texture, (const object *) this));
}

line2d::LineTextureMode line2d::get_texture_mode() const {
	return (line2d::LineTextureMode) ___godot_icall_int(___mb.mb_get_texture_mode, (const object *) this);
}

real_t line2d::get_width() const {
	return ___godot_icall_float(___mb.mb_get_width, (const object *) this);
}

void line2d::remove_point(const int64_t index) {
	___godot_icall_void_int(___mb.mb_remove_point, (const object *) this, index);
}

void line2d::set_antialiased(const bool antialiased) {
	___godot_icall_void_bool(___mb.mb_set_antialiased, (const object *) this, antialiased);
}

void line2d::set_begin_cap_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_begin_cap_mode, (const object *) this, mode);
}

void line2d::set_curve(const ref<curve> curve_) {
	___godot_icall_void_Object(___mb.mb_set_curve, (const object *) this, curve_.ptr());
}

void line2d::set_default_color(const color color_) {
	___godot_icall_void_Color(___mb.mb_set_default_color, (const object *) this, color_);
}

void line2d::set_end_cap_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_end_cap_mode, (const object *) this, mode);
}

void line2d::set_gradient(const ref<gradient> color_) {
	___godot_icall_void_Object(___mb.mb_set_gradient, (const object *) this, color_.ptr());
}

void line2d::set_joint_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_joint_mode, (const object *) this, mode);
}

void line2d::set_point_position(const int64_t index, const vector2 position) {
	___godot_icall_void_int_Vector2(___mb.mb_set_point_position, (const object *) this, index, position);
}

void line2d::set_points(const pool_vector2_array points) {
	___godot_icall_void_PoolVector2Array(___mb.mb_set_points, (const object *) this, points);
}

void line2d::set_round_precision(const int64_t precision) {
	___godot_icall_void_int(___mb.mb_set_round_precision, (const object *) this, precision);
}

void line2d::set_sharp_limit(const real_t limit) {
	___godot_icall_void_float(___mb.mb_set_sharp_limit, (const object *) this, limit);
}

void line2d::set_texture(const ref<texture> texture_) {
	___godot_icall_void_Object(___mb.mb_set_texture, (const object *) this, texture_.ptr());
}

void line2d::set_texture_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_texture_mode, (const object *) this, mode);
}

void line2d::set_width(const real_t width) {
	___godot_icall_void_float(___mb.mb_set_width, (const object *) this, width);
}

}