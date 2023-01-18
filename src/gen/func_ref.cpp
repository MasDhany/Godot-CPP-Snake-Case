#include "func_ref.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "object.hpp"


namespace gd {


func_ref::___method_bindings func_ref::___mb = {};

void *func_ref::_detail_class_tag = nullptr;

void func_ref::___init_method_bindings() {
	___mb.mb_call_func = gd::api->godot_method_bind_get_method("FuncRef", "call_func");
	___mb.mb_call_funcv = gd::api->godot_method_bind_get_method("FuncRef", "call_funcv");
	___mb.mb_get_function = gd::api->godot_method_bind_get_method("FuncRef", "get_function");
	___mb.mb_is_valid = gd::api->godot_method_bind_get_method("FuncRef", "is_valid");
	___mb.mb_set_function = gd::api->godot_method_bind_get_method("FuncRef", "set_function");
	___mb.mb_set_instance = gd::api->godot_method_bind_get_method("FuncRef", "set_instance");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "FuncRef");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

func_ref *func_ref::_new()
{
	return (func_ref *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"FuncRef")());
}
variant func_ref::call_func(const array& __var_args) {


	godot_variant **__args = (godot_variant **) alloca(sizeof(godot_variant *) * (__var_args.size() + 0));


	for (int i = 0; i < __var_args.size(); i++) {
		__args[i + 0] = (godot_variant *) &((array &) __var_args)[i];
	}

	variant __result;
	*(godot_variant *) &__result = gd::api->godot_method_bind_call(___mb.mb_call_func, ((const object *) this)->_owner, (const godot_variant **) __args, (__var_args.size() + 0), nullptr);


	return __result;
}

variant func_ref::call_funcv(const array arg_array) {
	return ___godot_icall_Variant_Array(___mb.mb_call_funcv, (const object *) this, arg_array);
}

string func_ref::get_function() {
	return ___godot_icall_String(___mb.mb_get_function, (const object *) this);
}

bool func_ref::is_valid() const {
	return ___godot_icall_bool(___mb.mb_is_valid, (const object *) this);
}

void func_ref::set_function(const string name) {
	___godot_icall_void_String(___mb.mb_set_function, (const object *) this, name);
}

void func_ref::set_instance(const object *instance) {
	___godot_icall_void_Object(___mb.mb_set_instance, (const object *) this, instance);
}

}