#include "gdscript_function_state.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


gdscript_function_state::___method_bindings gdscript_function_state::___mb = {};

void *gdscript_function_state::_detail_class_tag = nullptr;

void gdscript_function_state::___init_method_bindings() {
	___mb.mb__signal_callback = gd::api->godot_method_bind_get_method("GDScriptFunctionState", "_signal_callback");
	___mb.mb_is_valid = gd::api->godot_method_bind_get_method("GDScriptFunctionState", "is_valid");
	___mb.mb_resume = gd::api->godot_method_bind_get_method("GDScriptFunctionState", "resume");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "GDScriptFunctionState");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

variant gdscript_function_state::_signal_callback(const array& __var_args) {


	godot_variant **__args = (godot_variant **) alloca(sizeof(godot_variant *) * (__var_args.size() + 0));


	for (int i = 0; i < __var_args.size(); i++) {
		__args[i + 0] = (godot_variant *) &((array &) __var_args)[i];
	}

	variant __result;
	*(godot_variant *) &__result = gd::api->godot_method_bind_call(___mb.mb__signal_callback, ((const object *) this)->_owner, (const godot_variant **) __args, (__var_args.size() + 0), nullptr);


	return __result;
}

bool gdscript_function_state::is_valid(const bool extended_check) const {
	return ___godot_icall_bool_bool(___mb.mb_is_valid, (const object *) this, extended_check);
}

variant gdscript_function_state::resume(const variant arg) {
	return ___godot_icall_Variant_Variant(___mb.mb_resume, (const object *) this, arg);
}

}