#include "gdnative.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "gdnative_library.hpp"


namespace gd {


gdnative::___method_bindings gdnative::___mb = {};

void *gdnative::_detail_class_tag = nullptr;

void gdnative::___init_method_bindings() {
	___mb.mb_call_native = gd::api->godot_method_bind_get_method("GDNative", "call_native");
	___mb.mb_get_library = gd::api->godot_method_bind_get_method("GDNative", "get_library");
	___mb.mb_initialize = gd::api->godot_method_bind_get_method("GDNative", "initialize");
	___mb.mb_set_library = gd::api->godot_method_bind_get_method("GDNative", "set_library");
	___mb.mb_terminate = gd::api->godot_method_bind_get_method("GDNative", "terminate");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "GDNative");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

gdnative *gdnative::_new()
{
	return (gdnative *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"GDNative")());
}
variant gdnative::call_native(const string calling_type, const string procedure_name, const array arguments) {
	return ___godot_icall_Variant_String_String_Array(___mb.mb_call_native, (const object *) this, calling_type, procedure_name, arguments);
}

ref<gdnative_library> gdnative::get_library() const {
	return ref<gdnative_library>::__internal_constructor(___godot_icall_Object(___mb.mb_get_library, (const object *) this));
}

bool gdnative::initialize() {
	return ___godot_icall_bool(___mb.mb_initialize, (const object *) this);
}

void gdnative::set_library(const ref<gdnative_library> library) {
	___godot_icall_void_Object(___mb.mb_set_library, (const object *) this, library.ptr());
}

bool gdnative::terminate() {
	return ___godot_icall_bool(___mb.mb_terminate, (const object *) this);
}

}