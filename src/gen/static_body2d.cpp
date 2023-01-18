#include "static_body2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "physics_material.hpp"


namespace gd {


static_body2d::___method_bindings static_body2d::___mb = {};

void *static_body2d::_detail_class_tag = nullptr;

void static_body2d::___init_method_bindings() {
	___mb.mb__reload_physics_characteristics = gd::api->godot_method_bind_get_method("StaticBody2D", "_reload_physics_characteristics");
	___mb.mb_get_bounce = gd::api->godot_method_bind_get_method("StaticBody2D", "get_bounce");
	___mb.mb_get_constant_angular_velocity = gd::api->godot_method_bind_get_method("StaticBody2D", "get_constant_angular_velocity");
	___mb.mb_get_constant_linear_velocity = gd::api->godot_method_bind_get_method("StaticBody2D", "get_constant_linear_velocity");
	___mb.mb_get_friction = gd::api->godot_method_bind_get_method("StaticBody2D", "get_friction");
	___mb.mb_get_physics_material_override = gd::api->godot_method_bind_get_method("StaticBody2D", "get_physics_material_override");
	___mb.mb_set_bounce = gd::api->godot_method_bind_get_method("StaticBody2D", "set_bounce");
	___mb.mb_set_constant_angular_velocity = gd::api->godot_method_bind_get_method("StaticBody2D", "set_constant_angular_velocity");
	___mb.mb_set_constant_linear_velocity = gd::api->godot_method_bind_get_method("StaticBody2D", "set_constant_linear_velocity");
	___mb.mb_set_friction = gd::api->godot_method_bind_get_method("StaticBody2D", "set_friction");
	___mb.mb_set_physics_material_override = gd::api->godot_method_bind_get_method("StaticBody2D", "set_physics_material_override");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "StaticBody2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

static_body2d *static_body2d::_new()
{
	return (static_body2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"StaticBody2D")());
}
void static_body2d::_reload_physics_characteristics() {
	___godot_icall_void(___mb.mb__reload_physics_characteristics, (const object *) this);
}

real_t static_body2d::get_bounce() const {
	return ___godot_icall_float(___mb.mb_get_bounce, (const object *) this);
}

real_t static_body2d::get_constant_angular_velocity() const {
	return ___godot_icall_float(___mb.mb_get_constant_angular_velocity, (const object *) this);
}

vector2 static_body2d::get_constant_linear_velocity() const {
	return ___godot_icall_Vector2(___mb.mb_get_constant_linear_velocity, (const object *) this);
}

real_t static_body2d::get_friction() const {
	return ___godot_icall_float(___mb.mb_get_friction, (const object *) this);
}

ref<physics_material> static_body2d::get_physics_material_override() const {
	return ref<physics_material>::__internal_constructor(___godot_icall_Object(___mb.mb_get_physics_material_override, (const object *) this));
}

void static_body2d::set_bounce(const real_t bounce) {
	___godot_icall_void_float(___mb.mb_set_bounce, (const object *) this, bounce);
}

void static_body2d::set_constant_angular_velocity(const real_t vel) {
	___godot_icall_void_float(___mb.mb_set_constant_angular_velocity, (const object *) this, vel);
}

void static_body2d::set_constant_linear_velocity(const vector2 vel) {
	___godot_icall_void_Vector2(___mb.mb_set_constant_linear_velocity, (const object *) this, vel);
}

void static_body2d::set_friction(const real_t friction) {
	___godot_icall_void_float(___mb.mb_set_friction, (const object *) this, friction);
}

void static_body2d::set_physics_material_override(const ref<physics_material> physics_material_override) {
	___godot_icall_void_Object(___mb.mb_set_physics_material_override, (const object *) this, physics_material_override.ptr());
}

}