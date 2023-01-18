#include "visual_script_function_state.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "object.hpp"


namespace gd {


visual_script_function_state::___method_bindings visual_script_function_state::___mb = {};

void *visual_script_function_state::_detail_class_tag = nullptr;

void visual_script_function_state::___init_method_bindings() {
	___mb.mb__signal_callback = gd::api->godot_method_bind_get_method("VisualScriptFunctionState", "_signal_callback");
	___mb.mb_connect_to_signal = gd::api->godot_method_bind_get_method("VisualScriptFunctionState", "connect_to_signal");
	___mb.mb_is_valid = gd::api->godot_method_bind_get_method("VisualScriptFunctionState", "is_valid");
	___mb.mb_resume = gd::api->godot_method_bind_get_method("VisualScriptFunctionState", "resume");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualScriptFunctionState");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_script_function_state *visual_script_function_state::_new()
{
	return (visual_script_function_state *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualScriptFunctionState")());
}
variant visual_script_function_state::_signal_callback(const array& __var_args) {


	godot_variant **__args = (godot_variant **) alloca(sizeof(godot_variant *) * (__var_args.size() + 0));


	for (int i = 0; i < __var_args.size(); i++) {
		__args[i + 0] = (godot_variant *) &((array &) __var_args)[i];
	}

	variant __result;
	*(godot_variant *) &__result = gd::api->godot_method_bind_call(___mb.mb__signal_callback, ((const object *) this)->_owner, (const godot_variant **) __args, (__var_args.size() + 0), nullptr);


	return __result;
}

void visual_script_function_state::connect_to_signal(const object *obj, const string signals, const array args) {
	___godot_icall_void_Object_String_Array(___mb.mb_connect_to_signal, (const object *) this, obj, signals, args);
}

bool visual_script_function_state::is_valid() const {
	return ___godot_icall_bool(___mb.mb_is_valid, (const object *) this);
}

variant visual_script_function_state::resume(const array args) {
	return ___godot_icall_Variant_Array(___mb.mb_resume, (const object *) this, args);
}

}