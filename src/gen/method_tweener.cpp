#include "method_tweener.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "method_tweener.hpp"


namespace gd {


method_tweener::___method_bindings method_tweener::___mb = {};

void *method_tweener::_detail_class_tag = nullptr;

void method_tweener::___init_method_bindings() {
	___mb.mb_set_delay = gd::api->godot_method_bind_get_method("MethodTweener", "set_delay");
	___mb.mb_set_ease = gd::api->godot_method_bind_get_method("MethodTweener", "set_ease");
	___mb.mb_set_trans = gd::api->godot_method_bind_get_method("MethodTweener", "set_trans");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "MethodTweener");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

method_tweener *method_tweener::_new()
{
	return (method_tweener *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"MethodTweener")());
}
ref<method_tweener> method_tweener::set_delay(const real_t delay) {
	return ref<method_tweener>::__internal_constructor(___godot_icall_Object_float(___mb.mb_set_delay, (const object *) this, delay));
}

ref<method_tweener> method_tweener::set_ease(const int64_t ease) {
	return ref<method_tweener>::__internal_constructor(___godot_icall_Object_int(___mb.mb_set_ease, (const object *) this, ease));
}

ref<method_tweener> method_tweener::set_trans(const int64_t trans) {
	return ref<method_tweener>::__internal_constructor(___godot_icall_Object_int(___mb.mb_set_trans, (const object *) this, trans));
}

}