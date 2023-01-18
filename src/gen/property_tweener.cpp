#include "property_tweener.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "property_tweener.hpp"


namespace gd {


property_tweener::___method_bindings property_tweener::___mb = {};

void *property_tweener::_detail_class_tag = nullptr;

void property_tweener::___init_method_bindings() {
	___mb.mb_as_relative = gd::api->godot_method_bind_get_method("PropertyTweener", "as_relative");
	___mb.mb_from = gd::api->godot_method_bind_get_method("PropertyTweener", "from");
	___mb.mb_from_current = gd::api->godot_method_bind_get_method("PropertyTweener", "from_current");
	___mb.mb_set_delay = gd::api->godot_method_bind_get_method("PropertyTweener", "set_delay");
	___mb.mb_set_ease = gd::api->godot_method_bind_get_method("PropertyTweener", "set_ease");
	___mb.mb_set_trans = gd::api->godot_method_bind_get_method("PropertyTweener", "set_trans");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "PropertyTweener");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

property_tweener *property_tweener::_new()
{
	return (property_tweener *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"PropertyTweener")());
}
ref<property_tweener> property_tweener::as_relative() {
	return ref<property_tweener>::__internal_constructor(___godot_icall_Object(___mb.mb_as_relative, (const object *) this));
}

ref<property_tweener> property_tweener::from(const variant value) {
	return ref<property_tweener>::__internal_constructor(___godot_icall_Object_Variant(___mb.mb_from, (const object *) this, value));
}

ref<property_tweener> property_tweener::from_current() {
	return ref<property_tweener>::__internal_constructor(___godot_icall_Object(___mb.mb_from_current, (const object *) this));
}

ref<property_tweener> property_tweener::set_delay(const real_t delay) {
	return ref<property_tweener>::__internal_constructor(___godot_icall_Object_float(___mb.mb_set_delay, (const object *) this, delay));
}

ref<property_tweener> property_tweener::set_ease(const int64_t ease) {
	return ref<property_tweener>::__internal_constructor(___godot_icall_Object_int(___mb.mb_set_ease, (const object *) this, ease));
}

ref<property_tweener> property_tweener::set_trans(const int64_t trans) {
	return ref<property_tweener>::__internal_constructor(___godot_icall_Object_int(___mb.mb_set_trans, (const object *) this, trans));
}

}