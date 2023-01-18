#include "resource_interactive_loader.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "resource.hpp"


namespace gd {


resource_interactive_loader::___method_bindings resource_interactive_loader::___mb = {};

void *resource_interactive_loader::_detail_class_tag = nullptr;

void resource_interactive_loader::___init_method_bindings() {
	___mb.mb_get_resource = gd::api->godot_method_bind_get_method("ResourceInteractiveLoader", "get_resource");
	___mb.mb_get_stage = gd::api->godot_method_bind_get_method("ResourceInteractiveLoader", "get_stage");
	___mb.mb_get_stage_count = gd::api->godot_method_bind_get_method("ResourceInteractiveLoader", "get_stage_count");
	___mb.mb_poll = gd::api->godot_method_bind_get_method("ResourceInteractiveLoader", "poll");
	___mb.mb_wait = gd::api->godot_method_bind_get_method("ResourceInteractiveLoader", "wait");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ResourceInteractiveLoader");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

ref<resource> resource_interactive_loader::get_resource() {
	return ref<resource>::__internal_constructor(___godot_icall_Object(___mb.mb_get_resource, (const object *) this));
}

int64_t resource_interactive_loader::get_stage() const {
	return ___godot_icall_int(___mb.mb_get_stage, (const object *) this);
}

int64_t resource_interactive_loader::get_stage_count() const {
	return ___godot_icall_int(___mb.mb_get_stage_count, (const object *) this);
}

error resource_interactive_loader::poll() {
	return (error) ___godot_icall_int(___mb.mb_poll, (const object *) this);
}

error resource_interactive_loader::wait() {
	return (error) ___godot_icall_int(___mb.mb_wait, (const object *) this);
}

}