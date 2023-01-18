#include "collision_shape2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "shape2d.hpp"


namespace gd {


collision_shape2d::___method_bindings collision_shape2d::___mb = {};

void *collision_shape2d::_detail_class_tag = nullptr;

void collision_shape2d::___init_method_bindings() {
	___mb.mb__shape_changed = gd::api->godot_method_bind_get_method("CollisionShape2D", "_shape_changed");
	___mb.mb_get_one_way_collision_margin = gd::api->godot_method_bind_get_method("CollisionShape2D", "get_one_way_collision_margin");
	___mb.mb_get_shape = gd::api->godot_method_bind_get_method("CollisionShape2D", "get_shape");
	___mb.mb_is_disabled = gd::api->godot_method_bind_get_method("CollisionShape2D", "is_disabled");
	___mb.mb_is_one_way_collision_enabled = gd::api->godot_method_bind_get_method("CollisionShape2D", "is_one_way_collision_enabled");
	___mb.mb_set_disabled = gd::api->godot_method_bind_get_method("CollisionShape2D", "set_disabled");
	___mb.mb_set_one_way_collision = gd::api->godot_method_bind_get_method("CollisionShape2D", "set_one_way_collision");
	___mb.mb_set_one_way_collision_margin = gd::api->godot_method_bind_get_method("CollisionShape2D", "set_one_way_collision_margin");
	___mb.mb_set_shape = gd::api->godot_method_bind_get_method("CollisionShape2D", "set_shape");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "CollisionShape2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

collision_shape2d *collision_shape2d::_new()
{
	return (collision_shape2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"CollisionShape2D")());
}
void collision_shape2d::_shape_changed() {
	___godot_icall_void(___mb.mb__shape_changed, (const object *) this);
}

real_t collision_shape2d::get_one_way_collision_margin() const {
	return ___godot_icall_float(___mb.mb_get_one_way_collision_margin, (const object *) this);
}

ref<shape2d> collision_shape2d::get_shape() const {
	return ref<shape2d>::__internal_constructor(___godot_icall_Object(___mb.mb_get_shape, (const object *) this));
}

bool collision_shape2d::is_disabled() const {
	return ___godot_icall_bool(___mb.mb_is_disabled, (const object *) this);
}

bool collision_shape2d::is_one_way_collision_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_one_way_collision_enabled, (const object *) this);
}

void collision_shape2d::set_disabled(const bool disabled) {
	___godot_icall_void_bool(___mb.mb_set_disabled, (const object *) this, disabled);
}

void collision_shape2d::set_one_way_collision(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_one_way_collision, (const object *) this, enabled);
}

void collision_shape2d::set_one_way_collision_margin(const real_t margin) {
	___godot_icall_void_float(___mb.mb_set_one_way_collision_margin, (const object *) this, margin);
}

void collision_shape2d::set_shape(const ref<shape2d> shape_) {
	___godot_icall_void_Object(___mb.mb_set_shape, (const object *) this, shape_.ptr());
}

}