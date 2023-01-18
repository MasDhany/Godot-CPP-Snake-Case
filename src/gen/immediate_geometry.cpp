#include "immediate_geometry.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "texture.hpp"


namespace gd {


immediate_geometry::___method_bindings immediate_geometry::___mb = {};

void *immediate_geometry::_detail_class_tag = nullptr;

void immediate_geometry::___init_method_bindings() {
	___mb.mb_add_sphere = gd::api->godot_method_bind_get_method("ImmediateGeometry", "add_sphere");
	___mb.mb_add_vertex = gd::api->godot_method_bind_get_method("ImmediateGeometry", "add_vertex");
	___mb.mb_begin = gd::api->godot_method_bind_get_method("ImmediateGeometry", "begin");
	___mb.mb_clear = gd::api->godot_method_bind_get_method("ImmediateGeometry", "clear");
	___mb.mb_end = gd::api->godot_method_bind_get_method("ImmediateGeometry", "end");
	___mb.mb_set_color = gd::api->godot_method_bind_get_method("ImmediateGeometry", "set_color");
	___mb.mb_set_normal = gd::api->godot_method_bind_get_method("ImmediateGeometry", "set_normal");
	___mb.mb_set_tangent = gd::api->godot_method_bind_get_method("ImmediateGeometry", "set_tangent");
	___mb.mb_set_uv = gd::api->godot_method_bind_get_method("ImmediateGeometry", "set_uv");
	___mb.mb_set_uv2 = gd::api->godot_method_bind_get_method("ImmediateGeometry", "set_uv2");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ImmediateGeometry");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

immediate_geometry *immediate_geometry::_new()
{
	return (immediate_geometry *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ImmediateGeometry")());
}
void immediate_geometry::add_sphere(const int64_t lats, const int64_t lons, const real_t radius, const bool add_uv) {
	___godot_icall_void_int_int_float_bool(___mb.mb_add_sphere, (const object *) this, lats, lons, radius, add_uv);
}

void immediate_geometry::add_vertex(const vector3 position) {
	___godot_icall_void_Vector3(___mb.mb_add_vertex, (const object *) this, position);
}

void immediate_geometry::begin(const int64_t primitive, const ref<texture> texture_) {
	___godot_icall_void_int_Object(___mb.mb_begin, (const object *) this, primitive, texture_.ptr());
}

void immediate_geometry::clear() {
	___godot_icall_void(___mb.mb_clear, (const object *) this);
}

void immediate_geometry::end() {
	___godot_icall_void(___mb.mb_end, (const object *) this);
}

void immediate_geometry::set_color(const color color_) {
	___godot_icall_void_Color(___mb.mb_set_color, (const object *) this, color_);
}

void immediate_geometry::set_normal(const vector3 normal) {
	___godot_icall_void_Vector3(___mb.mb_set_normal, (const object *) this, normal);
}

void immediate_geometry::set_tangent(const plane tangent) {
	___godot_icall_void_Plane(___mb.mb_set_tangent, (const object *) this, tangent);
}

void immediate_geometry::set_uv(const vector2 uv) {
	___godot_icall_void_Vector2(___mb.mb_set_uv, (const object *) this, uv);
}

void immediate_geometry::set_uv2(const vector2 uv) {
	___godot_icall_void_Vector2(___mb.mb_set_uv2, (const object *) this, uv);
}

}