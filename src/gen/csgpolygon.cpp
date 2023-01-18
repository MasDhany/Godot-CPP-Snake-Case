#include "csgpolygon.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "material.hpp"


namespace gd {


csgpolygon::___method_bindings csgpolygon::___mb = {};

void *csgpolygon::_detail_class_tag = nullptr;

void csgpolygon::___init_method_bindings() {
	___mb.mb__has_editable_3d_polygon_no_depth = gd::api->godot_method_bind_get_method("CSGPolygon", "_has_editable_3d_polygon_no_depth");
	___mb.mb__is_editable_3d_polygon = gd::api->godot_method_bind_get_method("CSGPolygon", "_is_editable_3d_polygon");
	___mb.mb__path_changed = gd::api->godot_method_bind_get_method("CSGPolygon", "_path_changed");
	___mb.mb__path_exited = gd::api->godot_method_bind_get_method("CSGPolygon", "_path_exited");
	___mb.mb_get_depth = gd::api->godot_method_bind_get_method("CSGPolygon", "get_depth");
	___mb.mb_get_material = gd::api->godot_method_bind_get_method("CSGPolygon", "get_material");
	___mb.mb_get_mode = gd::api->godot_method_bind_get_method("CSGPolygon", "get_mode");
	___mb.mb_get_path_interval = gd::api->godot_method_bind_get_method("CSGPolygon", "get_path_interval");
	___mb.mb_get_path_interval_type = gd::api->godot_method_bind_get_method("CSGPolygon", "get_path_interval_type");
	___mb.mb_get_path_node = gd::api->godot_method_bind_get_method("CSGPolygon", "get_path_node");
	___mb.mb_get_path_rotation = gd::api->godot_method_bind_get_method("CSGPolygon", "get_path_rotation");
	___mb.mb_get_path_simplify_angle = gd::api->godot_method_bind_get_method("CSGPolygon", "get_path_simplify_angle");
	___mb.mb_get_path_u_distance = gd::api->godot_method_bind_get_method("CSGPolygon", "get_path_u_distance");
	___mb.mb_get_polygon = gd::api->godot_method_bind_get_method("CSGPolygon", "get_polygon");
	___mb.mb_get_smooth_faces = gd::api->godot_method_bind_get_method("CSGPolygon", "get_smooth_faces");
	___mb.mb_get_spin_degrees = gd::api->godot_method_bind_get_method("CSGPolygon", "get_spin_degrees");
	___mb.mb_get_spin_sides = gd::api->godot_method_bind_get_method("CSGPolygon", "get_spin_sides");
	___mb.mb_is_path_continuous_u = gd::api->godot_method_bind_get_method("CSGPolygon", "is_path_continuous_u");
	___mb.mb_is_path_joined = gd::api->godot_method_bind_get_method("CSGPolygon", "is_path_joined");
	___mb.mb_is_path_local = gd::api->godot_method_bind_get_method("CSGPolygon", "is_path_local");
	___mb.mb_set_depth = gd::api->godot_method_bind_get_method("CSGPolygon", "set_depth");
	___mb.mb_set_material = gd::api->godot_method_bind_get_method("CSGPolygon", "set_material");
	___mb.mb_set_mode = gd::api->godot_method_bind_get_method("CSGPolygon", "set_mode");
	___mb.mb_set_path_continuous_u = gd::api->godot_method_bind_get_method("CSGPolygon", "set_path_continuous_u");
	___mb.mb_set_path_interval = gd::api->godot_method_bind_get_method("CSGPolygon", "set_path_interval");
	___mb.mb_set_path_interval_type = gd::api->godot_method_bind_get_method("CSGPolygon", "set_path_interval_type");
	___mb.mb_set_path_joined = gd::api->godot_method_bind_get_method("CSGPolygon", "set_path_joined");
	___mb.mb_set_path_local = gd::api->godot_method_bind_get_method("CSGPolygon", "set_path_local");
	___mb.mb_set_path_node = gd::api->godot_method_bind_get_method("CSGPolygon", "set_path_node");
	___mb.mb_set_path_rotation = gd::api->godot_method_bind_get_method("CSGPolygon", "set_path_rotation");
	___mb.mb_set_path_simplify_angle = gd::api->godot_method_bind_get_method("CSGPolygon", "set_path_simplify_angle");
	___mb.mb_set_path_u_distance = gd::api->godot_method_bind_get_method("CSGPolygon", "set_path_u_distance");
	___mb.mb_set_polygon = gd::api->godot_method_bind_get_method("CSGPolygon", "set_polygon");
	___mb.mb_set_smooth_faces = gd::api->godot_method_bind_get_method("CSGPolygon", "set_smooth_faces");
	___mb.mb_set_spin_degrees = gd::api->godot_method_bind_get_method("CSGPolygon", "set_spin_degrees");
	___mb.mb_set_spin_sides = gd::api->godot_method_bind_get_method("CSGPolygon", "set_spin_sides");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "CSGPolygon");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

csgpolygon *csgpolygon::_new()
{
	return (csgpolygon *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"CSGPolygon")());
}
bool csgpolygon::_has_editable_3d_polygon_no_depth() const {
	return ___godot_icall_bool(___mb.mb__has_editable_3d_polygon_no_depth, (const object *) this);
}

bool csgpolygon::_is_editable_3d_polygon() const {
	return ___godot_icall_bool(___mb.mb__is_editable_3d_polygon, (const object *) this);
}

void csgpolygon::_path_changed() {
	___godot_icall_void(___mb.mb__path_changed, (const object *) this);
}

void csgpolygon::_path_exited() {
	___godot_icall_void(___mb.mb__path_exited, (const object *) this);
}

real_t csgpolygon::get_depth() const {
	return ___godot_icall_float(___mb.mb_get_depth, (const object *) this);
}

ref<material> csgpolygon::get_material() const {
	return ref<material>::__internal_constructor(___godot_icall_Object(___mb.mb_get_material, (const object *) this));
}

csgpolygon::Mode csgpolygon::get_mode() const {
	return (csgpolygon::Mode) ___godot_icall_int(___mb.mb_get_mode, (const object *) this);
}

real_t csgpolygon::get_path_interval() const {
	return ___godot_icall_float(___mb.mb_get_path_interval, (const object *) this);
}

csgpolygon::PathIntervalType csgpolygon::get_path_interval_type() const {
	return (csgpolygon::PathIntervalType) ___godot_icall_int(___mb.mb_get_path_interval_type, (const object *) this);
}

node_path csgpolygon::get_path_node() const {
	return ___godot_icall_NodePath(___mb.mb_get_path_node, (const object *) this);
}

csgpolygon::PathRotation csgpolygon::get_path_rotation() const {
	return (csgpolygon::PathRotation) ___godot_icall_int(___mb.mb_get_path_rotation, (const object *) this);
}

real_t csgpolygon::get_path_simplify_angle() const {
	return ___godot_icall_float(___mb.mb_get_path_simplify_angle, (const object *) this);
}

real_t csgpolygon::get_path_u_distance() const {
	return ___godot_icall_float(___mb.mb_get_path_u_distance, (const object *) this);
}

pool_vector2_array csgpolygon::get_polygon() const {
	return ___godot_icall_PoolVector2Array(___mb.mb_get_polygon, (const object *) this);
}

bool csgpolygon::get_smooth_faces() const {
	return ___godot_icall_bool(___mb.mb_get_smooth_faces, (const object *) this);
}

real_t csgpolygon::get_spin_degrees() const {
	return ___godot_icall_float(___mb.mb_get_spin_degrees, (const object *) this);
}

int64_t csgpolygon::get_spin_sides() const {
	return ___godot_icall_int(___mb.mb_get_spin_sides, (const object *) this);
}

bool csgpolygon::is_path_continuous_u() const {
	return ___godot_icall_bool(___mb.mb_is_path_continuous_u, (const object *) this);
}

bool csgpolygon::is_path_joined() const {
	return ___godot_icall_bool(___mb.mb_is_path_joined, (const object *) this);
}

bool csgpolygon::is_path_local() const {
	return ___godot_icall_bool(___mb.mb_is_path_local, (const object *) this);
}

void csgpolygon::set_depth(const real_t depth) {
	___godot_icall_void_float(___mb.mb_set_depth, (const object *) this, depth);
}

void csgpolygon::set_material(const ref<material> material_) {
	___godot_icall_void_Object(___mb.mb_set_material, (const object *) this, material_.ptr());
}

void csgpolygon::set_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_mode, (const object *) this, mode);
}

void csgpolygon::set_path_continuous_u(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_path_continuous_u, (const object *) this, enable);
}

void csgpolygon::set_path_interval(const real_t path_interval) {
	___godot_icall_void_float(___mb.mb_set_path_interval, (const object *) this, path_interval);
}

void csgpolygon::set_path_interval_type(const int64_t interval_type) {
	___godot_icall_void_int(___mb.mb_set_path_interval_type, (const object *) this, interval_type);
}

void csgpolygon::set_path_joined(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_path_joined, (const object *) this, enable);
}

void csgpolygon::set_path_local(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_path_local, (const object *) this, enable);
}

void csgpolygon::set_path_node(const node_path path_) {
	___godot_icall_void_NodePath(___mb.mb_set_path_node, (const object *) this, path_);
}

void csgpolygon::set_path_rotation(const int64_t path_rotation) {
	___godot_icall_void_int(___mb.mb_set_path_rotation, (const object *) this, path_rotation);
}

void csgpolygon::set_path_simplify_angle(const real_t degrees) {
	___godot_icall_void_float(___mb.mb_set_path_simplify_angle, (const object *) this, degrees);
}

void csgpolygon::set_path_u_distance(const real_t distance) {
	___godot_icall_void_float(___mb.mb_set_path_u_distance, (const object *) this, distance);
}

void csgpolygon::set_polygon(const pool_vector2_array polygon) {
	___godot_icall_void_PoolVector2Array(___mb.mb_set_polygon, (const object *) this, polygon);
}

void csgpolygon::set_smooth_faces(const bool smooth_faces) {
	___godot_icall_void_bool(___mb.mb_set_smooth_faces, (const object *) this, smooth_faces);
}

void csgpolygon::set_spin_degrees(const real_t degrees) {
	___godot_icall_void_float(___mb.mb_set_spin_degrees, (const object *) this, degrees);
}

void csgpolygon::set_spin_sides(const int64_t spin_sides) {
	___godot_icall_void_int(___mb.mb_set_spin_sides, (const object *) this, spin_sides);
}

}