#include "native_script.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "gdnative_library.hpp"


namespace gd {


native_script::___method_bindings native_script::___mb = {};

void *native_script::_detail_class_tag = nullptr;

void native_script::___init_method_bindings() {
	___mb.mb_get_class_documentation = gd::api->godot_method_bind_get_method("NativeScript", "get_class_documentation");
	___mb.mb_get_class_name = gd::api->godot_method_bind_get_method("NativeScript", "get_class_name");
	___mb.mb_get_library = gd::api->godot_method_bind_get_method("NativeScript", "get_library");
	___mb.mb_get_method_documentation = gd::api->godot_method_bind_get_method("NativeScript", "get_method_documentation");
	___mb.mb_get_property_documentation = gd::api->godot_method_bind_get_method("NativeScript", "get_property_documentation");
	___mb.mb_get_script_class_icon_path = gd::api->godot_method_bind_get_method("NativeScript", "get_script_class_icon_path");
	___mb.mb_get_script_class_name = gd::api->godot_method_bind_get_method("NativeScript", "get_script_class_name");
	___mb.mb_get_signal_documentation = gd::api->godot_method_bind_get_method("NativeScript", "get_signal_documentation");
	___mb.mb_new = gd::api->godot_method_bind_get_method("NativeScript", "new");
	___mb.mb_set_class_name = gd::api->godot_method_bind_get_method("NativeScript", "set_class_name");
	___mb.mb_set_library = gd::api->godot_method_bind_get_method("NativeScript", "set_library");
	___mb.mb_set_script_class_icon_path = gd::api->godot_method_bind_get_method("NativeScript", "set_script_class_icon_path");
	___mb.mb_set_script_class_name = gd::api->godot_method_bind_get_method("NativeScript", "set_script_class_name");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "NativeScript");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

native_script *native_script::_new()
{
	return (native_script *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"NativeScript")());
}
string native_script::get_class_documentation() const {
	return ___godot_icall_String(___mb.mb_get_class_documentation, (const object *) this);
}

string native_script::get_class_name() const {
	return ___godot_icall_String(___mb.mb_get_class_name, (const object *) this);
}

ref<gdnative_library> native_script::get_library() const {
	return ref<gdnative_library>::__internal_constructor(___godot_icall_Object(___mb.mb_get_library, (const object *) this));
}

string native_script::get_method_documentation(const string method) const {
	return ___godot_icall_String_String(___mb.mb_get_method_documentation, (const object *) this, method);
}

string native_script::get_property_documentation(const string path_) const {
	return ___godot_icall_String_String(___mb.mb_get_property_documentation, (const object *) this, path_);
}

string native_script::get_script_class_icon_path() const {
	return ___godot_icall_String(___mb.mb_get_script_class_icon_path, (const object *) this);
}

string native_script::get_script_class_name() const {
	return ___godot_icall_String(___mb.mb_get_script_class_name, (const object *) this);
}

string native_script::get_signal_documentation(const string signal_name) const {
	return ___godot_icall_String_String(___mb.mb_get_signal_documentation, (const object *) this, signal_name);
}

variant native_script::new_(const array& __var_args) {


	godot_variant **__args = (godot_variant **) alloca(sizeof(godot_variant *) * (__var_args.size() + 0));


	for (int i = 0; i < __var_args.size(); i++) {
		__args[i + 0] = (godot_variant *) &((array &) __var_args)[i];
	}

	variant __result;
	*(godot_variant *) &__result = gd::api->godot_method_bind_call(___mb.mb_new, ((const object *) this)->_owner, (const godot_variant **) __args, (__var_args.size() + 0), nullptr);


	return __result;
}

void native_script::set_class_name(const string class_name) {
	___godot_icall_void_String(___mb.mb_set_class_name, (const object *) this, class_name);
}

void native_script::set_library(const ref<gdnative_library> library) {
	___godot_icall_void_Object(___mb.mb_set_library, (const object *) this, library.ptr());
}

void native_script::set_script_class_icon_path(const string icon_path) {
	___godot_icall_void_String(___mb.mb_set_script_class_icon_path, (const object *) this, icon_path);
}

void native_script::set_script_class_name(const string class_name) {
	___godot_icall_void_String(___mb.mb_set_script_class_name, (const object *) this, class_name);
}

}