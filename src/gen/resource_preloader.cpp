#include "resource_preloader.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "resource.hpp"


namespace gd {


resource_preloader::___method_bindings resource_preloader::___mb = {};

void *resource_preloader::_detail_class_tag = nullptr;

void resource_preloader::___init_method_bindings() {
	___mb.mb__get_resources = gd::api->godot_method_bind_get_method("ResourcePreloader", "_get_resources");
	___mb.mb__set_resources = gd::api->godot_method_bind_get_method("ResourcePreloader", "_set_resources");
	___mb.mb_add_resource = gd::api->godot_method_bind_get_method("ResourcePreloader", "add_resource");
	___mb.mb_get_resource = gd::api->godot_method_bind_get_method("ResourcePreloader", "get_resource");
	___mb.mb_get_resource_list = gd::api->godot_method_bind_get_method("ResourcePreloader", "get_resource_list");
	___mb.mb_has_resource = gd::api->godot_method_bind_get_method("ResourcePreloader", "has_resource");
	___mb.mb_remove_resource = gd::api->godot_method_bind_get_method("ResourcePreloader", "remove_resource");
	___mb.mb_rename_resource = gd::api->godot_method_bind_get_method("ResourcePreloader", "rename_resource");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ResourcePreloader");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

resource_preloader *resource_preloader::_new()
{
	return (resource_preloader *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ResourcePreloader")());
}
array resource_preloader::_get_resources() const {
	return ___godot_icall_Array(___mb.mb__get_resources, (const object *) this);
}

void resource_preloader::_set_resources(const array arg0) {
	___godot_icall_void_Array(___mb.mb__set_resources, (const object *) this, arg0);
}

void resource_preloader::add_resource(const string name, const ref<resource> resource_) {
	___godot_icall_void_String_Object(___mb.mb_add_resource, (const object *) this, name, resource_.ptr());
}

ref<resource> resource_preloader::get_resource(const string name) const {
	return ref<resource>::__internal_constructor(___godot_icall_Object_String(___mb.mb_get_resource, (const object *) this, name));
}

pool_string_array resource_preloader::get_resource_list() const {
	return ___godot_icall_PoolStringArray(___mb.mb_get_resource_list, (const object *) this);
}

bool resource_preloader::has_resource(const string name) const {
	return ___godot_icall_bool_String(___mb.mb_has_resource, (const object *) this, name);
}

void resource_preloader::remove_resource(const string name) {
	___godot_icall_void_String(___mb.mb_remove_resource, (const object *) this, name);
}

void resource_preloader::rename_resource(const string name, const string newname) {
	___godot_icall_void_String_String(___mb.mb_rename_resource, (const object *) this, name, newname);
}

}