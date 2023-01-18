#include "collision_shape.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "resource.hpp"
#include "shape.hpp"


namespace gd {


collision_shape::___method_bindings collision_shape::___mb = {};

void *collision_shape::_detail_class_tag = nullptr;

void collision_shape::___init_method_bindings() {
	___mb.mb_get_shape = gd::api->godot_method_bind_get_method("CollisionShape", "get_shape");
	___mb.mb_is_disabled = gd::api->godot_method_bind_get_method("CollisionShape", "is_disabled");
	___mb.mb_make_convex_from_brothers = gd::api->godot_method_bind_get_method("CollisionShape", "make_convex_from_brothers");
	___mb.mb_resource_changed = gd::api->godot_method_bind_get_method("CollisionShape", "resource_changed");
	___mb.mb_set_disabled = gd::api->godot_method_bind_get_method("CollisionShape", "set_disabled");
	___mb.mb_set_shape = gd::api->godot_method_bind_get_method("CollisionShape", "set_shape");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "CollisionShape");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

collision_shape *collision_shape::_new()
{
	return (collision_shape *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"CollisionShape")());
}
ref<shape> collision_shape::get_shape() const {
	return ref<shape>::__internal_constructor(___godot_icall_Object(___mb.mb_get_shape, (const object *) this));
}

bool collision_shape::is_disabled() const {
	return ___godot_icall_bool(___mb.mb_is_disabled, (const object *) this);
}

void collision_shape::make_convex_from_brothers() {
	___godot_icall_void(___mb.mb_make_convex_from_brothers, (const object *) this);
}

void collision_shape::resource_changed(const ref<resource> resource_) {
	___godot_icall_void_Object(___mb.mb_resource_changed, (const object *) this, resource_.ptr());
}

void collision_shape::set_disabled(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_disabled, (const object *) this, enable);
}

void collision_shape::set_shape(const ref<shape> shape_) {
	___godot_icall_void_Object(___mb.mb_set_shape, (const object *) this, shape_.ptr());
}

}