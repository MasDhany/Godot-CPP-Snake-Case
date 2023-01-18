#include "static_body.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "physics_material.hpp"


namespace gd {


static_body::___method_bindings static_body::___mb = {};

void *static_body::_detail_class_tag = nullptr;

void static_body::___init_method_bindings() {
	___mb.mb__reload_physics_characteristics = gd::api->godot_method_bind_get_method("StaticBody", "_reload_physics_characteristics");
	___mb.mb_get_bounce = gd::api->godot_method_bind_get_method("StaticBody", "get_bounce");
	___mb.mb_get_constant_angular_velocity = gd::api->godot_method_bind_get_method("StaticBody", "get_constant_angular_velocity");
	___mb.mb_get_constant_linear_velocity = gd::api->godot_method_bind_get_method("StaticBody", "get_constant_linear_velocity");
	___mb.mb_get_friction = gd::api->godot_method_bind_get_method("StaticBody", "get_friction");
	___mb.mb_get_physics_material_override = gd::api->godot_method_bind_get_method("StaticBody", "get_physics_material_override");
	___mb.mb_set_bounce = gd::api->godot_method_bind_get_method("StaticBody", "set_bounce");
	___mb.mb_set_constant_angular_velocity = gd::api->godot_method_bind_get_method("StaticBody", "set_constant_angular_velocity");
	___mb.mb_set_constant_linear_velocity = gd::api->godot_method_bind_get_method("StaticBody", "set_constant_linear_velocity");
	___mb.mb_set_friction = gd::api->godot_method_bind_get_method("StaticBody", "set_friction");
	___mb.mb_set_physics_material_override = gd::api->godot_method_bind_get_method("StaticBody", "set_physics_material_override");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "StaticBody");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

static_body *static_body::_new()
{
	return (static_body *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"StaticBody")());
}
void static_body::_reload_physics_characteristics() {
	___godot_icall_void(___mb.mb__reload_physics_characteristics, (const object *) this);
}

real_t static_body::get_bounce() const {
	return ___godot_icall_float(___mb.mb_get_bounce, (const object *) this);
}

vector3 static_body::get_constant_angular_velocity() const {
	return ___godot_icall_Vector3(___mb.mb_get_constant_angular_velocity, (const object *) this);
}

vector3 static_body::get_constant_linear_velocity() const {
	return ___godot_icall_Vector3(___mb.mb_get_constant_linear_velocity, (const object *) this);
}

real_t static_body::get_friction() const {
	return ___godot_icall_float(___mb.mb_get_friction, (const object *) this);
}

ref<physics_material> static_body::get_physics_material_override() const {
	return ref<physics_material>::__internal_constructor(___godot_icall_Object(___mb.mb_get_physics_material_override, (const object *) this));
}

void static_body::set_bounce(const real_t bounce) {
	___godot_icall_void_float(___mb.mb_set_bounce, (const object *) this, bounce);
}

void static_body::set_constant_angular_velocity(const vector3 vel) {
	___godot_icall_void_Vector3(___mb.mb_set_constant_angular_velocity, (const object *) this, vel);
}

void static_body::set_constant_linear_velocity(const vector3 vel) {
	___godot_icall_void_Vector3(___mb.mb_set_constant_linear_velocity, (const object *) this, vel);
}

void static_body::set_friction(const real_t friction) {
	___godot_icall_void_float(___mb.mb_set_friction, (const object *) this, friction);
}

void static_body::set_physics_material_override(const ref<physics_material> physics_material_override) {
	___godot_icall_void_Object(___mb.mb_set_physics_material_override, (const object *) this, physics_material_override.ptr());
}

}