#include "resource.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "node.hpp"
#include "resource.hpp"


namespace gd {


resource::___method_bindings resource::___mb = {};

void *resource::_detail_class_tag = nullptr;

void resource::___init_method_bindings() {
	___mb.mb__setup_local_to_scene = gd::api->godot_method_bind_get_method("Resource", "_setup_local_to_scene");
	___mb.mb_duplicate = gd::api->godot_method_bind_get_method("Resource", "duplicate");
	___mb.mb_emit_changed = gd::api->godot_method_bind_get_method("Resource", "emit_changed");
	___mb.mb_get_local_scene = gd::api->godot_method_bind_get_method("Resource", "get_local_scene");
	___mb.mb_get_name = gd::api->godot_method_bind_get_method("Resource", "get_name");
	___mb.mb_get_path = gd::api->godot_method_bind_get_method("Resource", "get_path");
	___mb.mb_get_rid = gd::api->godot_method_bind_get_method("Resource", "get_rid");
	___mb.mb_is_local_to_scene = gd::api->godot_method_bind_get_method("Resource", "is_local_to_scene");
	___mb.mb_set_local_to_scene = gd::api->godot_method_bind_get_method("Resource", "set_local_to_scene");
	___mb.mb_set_name = gd::api->godot_method_bind_get_method("Resource", "set_name");
	___mb.mb_set_path = gd::api->godot_method_bind_get_method("Resource", "set_path");
	___mb.mb_setup_local_to_scene = gd::api->godot_method_bind_get_method("Resource", "setup_local_to_scene");
	___mb.mb_take_over_path = gd::api->godot_method_bind_get_method("Resource", "take_over_path");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Resource");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

resource *resource::_new()
{
	return (resource *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Resource")());
}
void resource::_setup_local_to_scene() {
	___godot_icall_void(___mb.mb__setup_local_to_scene, (const object *) this);
}

ref<resource> resource::duplicate(const bool subresources) const {
	return ref<resource>::__internal_constructor(___godot_icall_Object_bool(___mb.mb_duplicate, (const object *) this, subresources));
}

void resource::emit_changed() {
	___godot_icall_void(___mb.mb_emit_changed, (const object *) this);
}

node *resource::get_local_scene() const {
	return (node *) ___godot_icall_Object(___mb.mb_get_local_scene, (const object *) this);
}

string resource::get_name() const {
	return ___godot_icall_String(___mb.mb_get_name, (const object *) this);
}

string resource::get_path() const {
	return ___godot_icall_String(___mb.mb_get_path, (const object *) this);
}

rid resource::get_rid() const {
	return ___godot_icall_RID(___mb.mb_get_rid, (const object *) this);
}

bool resource::is_local_to_scene() const {
	return ___godot_icall_bool(___mb.mb_is_local_to_scene, (const object *) this);
}

void resource::set_local_to_scene(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_local_to_scene, (const object *) this, enable);
}

void resource::set_name(const string name) {
	___godot_icall_void_String(___mb.mb_set_name, (const object *) this, name);
}

void resource::set_path(const string path_) {
	___godot_icall_void_String(___mb.mb_set_path, (const object *) this, path_);
}

void resource::setup_local_to_scene() {
	___godot_icall_void(___mb.mb_setup_local_to_scene, (const object *) this);
}

void resource::take_over_path(const string path_) {
	___godot_icall_void_String(___mb.mb_take_over_path, (const object *) this, path_);
}

}