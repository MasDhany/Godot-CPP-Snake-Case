#include "java_script.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "java_script_object.hpp"
#include "object.hpp"


namespace gd {


java_script *java_script::_singleton = NULL;


java_script::java_script() {
	_owner = gd::api->godot_global_get_singleton((char *) "JavaScript");
}


java_script::___method_bindings java_script::___mb = {};

void *java_script::_detail_class_tag = nullptr;

void java_script::___init_method_bindings() {
	___mb.mb_create_callback = gd::api->godot_method_bind_get_method("JavaScript", "create_callback");
	___mb.mb_create_object = gd::api->godot_method_bind_get_method("JavaScript", "create_object");
	___mb.mb_download_buffer = gd::api->godot_method_bind_get_method("JavaScript", "download_buffer");
	___mb.mb_eval = gd::api->godot_method_bind_get_method("JavaScript", "eval");
	___mb.mb_get_interface = gd::api->godot_method_bind_get_method("JavaScript", "get_interface");
	___mb.mb_pwa_needs_update = gd::api->godot_method_bind_get_method("JavaScript", "pwa_needs_update");
	___mb.mb_pwa_update = gd::api->godot_method_bind_get_method("JavaScript", "pwa_update");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "JavaScript");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

ref<java_script_object> java_script::create_callback(const object *object_, const string method) {
	return ref<java_script_object>::__internal_constructor(___godot_icall_Object_Object_String(___mb.mb_create_callback, (const object *) this, object_, method));
}

variant java_script::create_object(const string object_, const array& __var_args) {
	variant __given_args[1];
	gd::api->godot_variant_new_nil((godot_variant *) &__given_args[0]);

	__given_args[0] = object_;

	godot_variant **__args = (godot_variant **) alloca(sizeof(godot_variant *) * (__var_args.size() + 1));

	__args[0] = (godot_variant *) &__given_args[0];

	for (int i = 0; i < __var_args.size(); i++) {
		__args[i + 1] = (godot_variant *) &((array &) __var_args)[i];
	}

	variant __result;
	*(godot_variant *) &__result = gd::api->godot_method_bind_call(___mb.mb_create_object, ((const object *) this)->_owner, (const godot_variant **) __args, (__var_args.size() + 1), nullptr);

	gd::api->godot_variant_destroy((godot_variant *) &__given_args[0]);

	return __result;
}

void java_script::download_buffer(const pool_byte_array buffer, const string name, const string mime) {
	___godot_icall_void_PoolByteArray_String_String(___mb.mb_download_buffer, (const object *) this, buffer, name, mime);
}

variant java_script::eval(const string code, const bool use_global_execution_context) {
	return ___godot_icall_Variant_String_bool(___mb.mb_eval, (const object *) this, code, use_global_execution_context);
}

ref<java_script_object> java_script::get_interface(const string interface) {
	return ref<java_script_object>::__internal_constructor(___godot_icall_Object_String(___mb.mb_get_interface, (const object *) this, interface));
}

bool java_script::pwa_needs_update() const {
	return ___godot_icall_bool(___mb.mb_pwa_needs_update, (const object *) this);
}

error java_script::pwa_update() {
	return (error) ___godot_icall_int(___mb.mb_pwa_update, (const object *) this);
}

}