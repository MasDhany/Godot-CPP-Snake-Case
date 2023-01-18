#include "physics_body.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "node.hpp"


namespace gd {


physics_body::___method_bindings physics_body::___mb = {};

void *physics_body::_detail_class_tag = nullptr;

void physics_body::___init_method_bindings() {
	___mb.mb__get_layers = gd::api->godot_method_bind_get_method("PhysicsBody", "_get_layers");
	___mb.mb__set_layers = gd::api->godot_method_bind_get_method("PhysicsBody", "_set_layers");
	___mb.mb_add_collision_exception_with = gd::api->godot_method_bind_get_method("PhysicsBody", "add_collision_exception_with");
	___mb.mb_get_collision_exceptions = gd::api->godot_method_bind_get_method("PhysicsBody", "get_collision_exceptions");
	___mb.mb_remove_collision_exception_with = gd::api->godot_method_bind_get_method("PhysicsBody", "remove_collision_exception_with");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "PhysicsBody");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

int64_t physics_body::_get_layers() const {
	return ___godot_icall_int(___mb.mb__get_layers, (const object *) this);
}

void physics_body::_set_layers(const int64_t mask) {
	___godot_icall_void_int(___mb.mb__set_layers, (const object *) this, mask);
}

void physics_body::add_collision_exception_with(const node *body) {
	___godot_icall_void_Object(___mb.mb_add_collision_exception_with, (const object *) this, body);
}

array physics_body::get_collision_exceptions() {
	return ___godot_icall_Array(___mb.mb_get_collision_exceptions, (const object *) this);
}

void physics_body::remove_collision_exception_with(const node *body) {
	___godot_icall_void_Object(___mb.mb_remove_collision_exception_with, (const object *) this, body);
}

}