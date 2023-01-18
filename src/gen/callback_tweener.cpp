#include "callback_tweener.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "callback_tweener.hpp"


namespace gd {


callback_tweener::___method_bindings callback_tweener::___mb = {};

void *callback_tweener::_detail_class_tag = nullptr;

void callback_tweener::___init_method_bindings() {
	___mb.mb_set_delay = gd::api->godot_method_bind_get_method("CallbackTweener", "set_delay");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "CallbackTweener");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

callback_tweener *callback_tweener::_new()
{
	return (callback_tweener *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"CallbackTweener")());
}
ref<callback_tweener> callback_tweener::set_delay(const real_t delay) {
	return ref<callback_tweener>::__internal_constructor(___godot_icall_Object_float(___mb.mb_set_delay, (const object *) this, delay));
}

}