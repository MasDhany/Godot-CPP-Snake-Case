#include "physics_material.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


physics_material::___method_bindings physics_material::___mb = {};

void *physics_material::_detail_class_tag = nullptr;

void physics_material::___init_method_bindings() {
	___mb.mb_get_bounce = gd::api->godot_method_bind_get_method("PhysicsMaterial", "get_bounce");
	___mb.mb_get_friction = gd::api->godot_method_bind_get_method("PhysicsMaterial", "get_friction");
	___mb.mb_is_absorbent = gd::api->godot_method_bind_get_method("PhysicsMaterial", "is_absorbent");
	___mb.mb_is_rough = gd::api->godot_method_bind_get_method("PhysicsMaterial", "is_rough");
	___mb.mb_set_absorbent = gd::api->godot_method_bind_get_method("PhysicsMaterial", "set_absorbent");
	___mb.mb_set_bounce = gd::api->godot_method_bind_get_method("PhysicsMaterial", "set_bounce");
	___mb.mb_set_friction = gd::api->godot_method_bind_get_method("PhysicsMaterial", "set_friction");
	___mb.mb_set_rough = gd::api->godot_method_bind_get_method("PhysicsMaterial", "set_rough");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "PhysicsMaterial");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

physics_material *physics_material::_new()
{
	return (physics_material *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"PhysicsMaterial")());
}
real_t physics_material::get_bounce() const {
	return ___godot_icall_float(___mb.mb_get_bounce, (const object *) this);
}

real_t physics_material::get_friction() const {
	return ___godot_icall_float(___mb.mb_get_friction, (const object *) this);
}

bool physics_material::is_absorbent() const {
	return ___godot_icall_bool(___mb.mb_is_absorbent, (const object *) this);
}

bool physics_material::is_rough() const {
	return ___godot_icall_bool(___mb.mb_is_rough, (const object *) this);
}

void physics_material::set_absorbent(const bool absorbent) {
	___godot_icall_void_bool(___mb.mb_set_absorbent, (const object *) this, absorbent);
}

void physics_material::set_bounce(const real_t bounce) {
	___godot_icall_void_float(___mb.mb_set_bounce, (const object *) this, bounce);
}

void physics_material::set_friction(const real_t friction) {
	___godot_icall_void_float(___mb.mb_set_friction, (const object *) this, friction);
}

void physics_material::set_rough(const bool rough) {
	___godot_icall_void_bool(___mb.mb_set_rough, (const object *) this, rough);
}

}