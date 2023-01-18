#include "csgcylinder.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "material.hpp"


namespace gd {


csgcylinder::___method_bindings csgcylinder::___mb = {};

void *csgcylinder::_detail_class_tag = nullptr;

void csgcylinder::___init_method_bindings() {
	___mb.mb_get_height = gd::api->godot_method_bind_get_method("CSGCylinder", "get_height");
	___mb.mb_get_material = gd::api->godot_method_bind_get_method("CSGCylinder", "get_material");
	___mb.mb_get_radius = gd::api->godot_method_bind_get_method("CSGCylinder", "get_radius");
	___mb.mb_get_sides = gd::api->godot_method_bind_get_method("CSGCylinder", "get_sides");
	___mb.mb_get_smooth_faces = gd::api->godot_method_bind_get_method("CSGCylinder", "get_smooth_faces");
	___mb.mb_is_cone = gd::api->godot_method_bind_get_method("CSGCylinder", "is_cone");
	___mb.mb_set_cone = gd::api->godot_method_bind_get_method("CSGCylinder", "set_cone");
	___mb.mb_set_height = gd::api->godot_method_bind_get_method("CSGCylinder", "set_height");
	___mb.mb_set_material = gd::api->godot_method_bind_get_method("CSGCylinder", "set_material");
	___mb.mb_set_radius = gd::api->godot_method_bind_get_method("CSGCylinder", "set_radius");
	___mb.mb_set_sides = gd::api->godot_method_bind_get_method("CSGCylinder", "set_sides");
	___mb.mb_set_smooth_faces = gd::api->godot_method_bind_get_method("CSGCylinder", "set_smooth_faces");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "CSGCylinder");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

csgcylinder *csgcylinder::_new()
{
	return (csgcylinder *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"CSGCylinder")());
}
real_t csgcylinder::get_height() const {
	return ___godot_icall_float(___mb.mb_get_height, (const object *) this);
}

ref<material> csgcylinder::get_material() const {
	return ref<material>::__internal_constructor(___godot_icall_Object(___mb.mb_get_material, (const object *) this));
}

real_t csgcylinder::get_radius() const {
	return ___godot_icall_float(___mb.mb_get_radius, (const object *) this);
}

int64_t csgcylinder::get_sides() const {
	return ___godot_icall_int(___mb.mb_get_sides, (const object *) this);
}

bool csgcylinder::get_smooth_faces() const {
	return ___godot_icall_bool(___mb.mb_get_smooth_faces, (const object *) this);
}

bool csgcylinder::is_cone() const {
	return ___godot_icall_bool(___mb.mb_is_cone, (const object *) this);
}

void csgcylinder::set_cone(const bool cone) {
	___godot_icall_void_bool(___mb.mb_set_cone, (const object *) this, cone);
}

void csgcylinder::set_height(const real_t height) {
	___godot_icall_void_float(___mb.mb_set_height, (const object *) this, height);
}

void csgcylinder::set_material(const ref<material> material_) {
	___godot_icall_void_Object(___mb.mb_set_material, (const object *) this, material_.ptr());
}

void csgcylinder::set_radius(const real_t radius) {
	___godot_icall_void_float(___mb.mb_set_radius, (const object *) this, radius);
}

void csgcylinder::set_sides(const int64_t sides) {
	___godot_icall_void_int(___mb.mb_set_sides, (const object *) this, sides);
}

void csgcylinder::set_smooth_faces(const bool smooth_faces) {
	___godot_icall_void_bool(___mb.mb_set_smooth_faces, (const object *) this, smooth_faces);
}

}