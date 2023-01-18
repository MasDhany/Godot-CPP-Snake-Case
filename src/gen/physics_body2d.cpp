#include "physics_body2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "node.hpp"


namespace gd {


physics_body2d::___method_bindings physics_body2d::___mb = {};

void *physics_body2d::_detail_class_tag = nullptr;

void physics_body2d::___init_method_bindings() {
	___mb.mb__get_layers = gd::api->godot_method_bind_get_method("PhysicsBody2D", "_get_layers");
	___mb.mb__set_layers = gd::api->godot_method_bind_get_method("PhysicsBody2D", "_set_layers");
	___mb.mb_add_collision_exception_with = gd::api->godot_method_bind_get_method("PhysicsBody2D", "add_collision_exception_with");
	___mb.mb_get_collision_exceptions = gd::api->godot_method_bind_get_method("PhysicsBody2D", "get_collision_exceptions");
	___mb.mb_remove_collision_exception_with = gd::api->godot_method_bind_get_method("PhysicsBody2D", "remove_collision_exception_with");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "PhysicsBody2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

int64_t physics_body2d::_get_layers() const {
	return ___godot_icall_int(___mb.mb__get_layers, (const object *) this);
}

void physics_body2d::_set_layers(const int64_t mask) {
	___godot_icall_void_int(___mb.mb__set_layers, (const object *) this, mask);
}

void physics_body2d::add_collision_exception_with(const node *body) {
	___godot_icall_void_Object(___mb.mb_add_collision_exception_with, (const object *) this, body);
}

array physics_body2d::get_collision_exceptions() {
	return ___godot_icall_Array(___mb.mb_get_collision_exceptions, (const object *) this);
}

void physics_body2d::remove_collision_exception_with(const node *body) {
	___godot_icall_void_Object(___mb.mb_remove_collision_exception_with, (const object *) this, body);
}

}