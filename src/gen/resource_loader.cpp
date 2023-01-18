#include "resource_loader.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "resource.hpp"
#include "resource_interactive_loader.hpp"


namespace gd {


resource_loader *resource_loader::_singleton = NULL;


resource_loader::resource_loader() {
	_owner = gd::api->godot_global_get_singleton((char *) "ResourceLoader");
}


resource_loader::___method_bindings resource_loader::___mb = {};

void *resource_loader::_detail_class_tag = nullptr;

void resource_loader::___init_method_bindings() {
	___mb.mb_exists = gd::api->godot_method_bind_get_method("_ResourceLoader", "exists");
	___mb.mb_get_dependencies = gd::api->godot_method_bind_get_method("_ResourceLoader", "get_dependencies");
	___mb.mb_get_recognized_extensions_for_type = gd::api->godot_method_bind_get_method("_ResourceLoader", "get_recognized_extensions_for_type");
	___mb.mb_has = gd::api->godot_method_bind_get_method("_ResourceLoader", "has");
	___mb.mb_has_cached = gd::api->godot_method_bind_get_method("_ResourceLoader", "has_cached");
	___mb.mb_load = gd::api->godot_method_bind_get_method("_ResourceLoader", "load");
	___mb.mb_load_interactive = gd::api->godot_method_bind_get_method("_ResourceLoader", "load_interactive");
	___mb.mb_set_abort_on_missing_resources = gd::api->godot_method_bind_get_method("_ResourceLoader", "set_abort_on_missing_resources");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "_ResourceLoader");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

bool resource_loader::exists(const string path_, const string type_hint) {
	return ___godot_icall_bool_String_String(___mb.mb_exists, (const object *) this, path_, type_hint);
}

pool_string_array resource_loader::get_dependencies(const string path_) {
	return ___godot_icall_PoolStringArray_String(___mb.mb_get_dependencies, (const object *) this, path_);
}

pool_string_array resource_loader::get_recognized_extensions_for_type(const string type) {
	return ___godot_icall_PoolStringArray_String(___mb.mb_get_recognized_extensions_for_type, (const object *) this, type);
}

bool resource_loader::has(const string path_) {
	return ___godot_icall_bool_String(___mb.mb_has, (const object *) this, path_);
}

bool resource_loader::has_cached(const string path_) {
	return ___godot_icall_bool_String(___mb.mb_has_cached, (const object *) this, path_);
}

ref<resource> resource_loader::load(const string path_, const string type_hint, const bool no_cache) {
	return ref<resource>::__internal_constructor(___godot_icall_Object_String_String_bool(___mb.mb_load, (const object *) this, path_, type_hint, no_cache));
}

ref<resource_interactive_loader> resource_loader::load_interactive(const string path_, const string type_hint) {
	return ref<resource_interactive_loader>::__internal_constructor(___godot_icall_Object_String_String(___mb.mb_load_interactive, (const object *) this, path_, type_hint));
}

void resource_loader::set_abort_on_missing_resources(const bool abort) {
	___godot_icall_void_bool(___mb.mb_set_abort_on_missing_resources, (const object *) this, abort);
}

}