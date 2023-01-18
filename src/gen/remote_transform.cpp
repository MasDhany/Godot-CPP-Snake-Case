#include "remote_transform.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


remote_transform::___method_bindings remote_transform::___mb = {};

void *remote_transform::_detail_class_tag = nullptr;

void remote_transform::___init_method_bindings() {
	___mb.mb_force_update_cache = gd::api->godot_method_bind_get_method("RemoteTransform", "force_update_cache");
	___mb.mb_get_remote_node = gd::api->godot_method_bind_get_method("RemoteTransform", "get_remote_node");
	___mb.mb_get_update_position = gd::api->godot_method_bind_get_method("RemoteTransform", "get_update_position");
	___mb.mb_get_update_rotation = gd::api->godot_method_bind_get_method("RemoteTransform", "get_update_rotation");
	___mb.mb_get_update_scale = gd::api->godot_method_bind_get_method("RemoteTransform", "get_update_scale");
	___mb.mb_get_use_global_coordinates = gd::api->godot_method_bind_get_method("RemoteTransform", "get_use_global_coordinates");
	___mb.mb_set_remote_node = gd::api->godot_method_bind_get_method("RemoteTransform", "set_remote_node");
	___mb.mb_set_update_position = gd::api->godot_method_bind_get_method("RemoteTransform", "set_update_position");
	___mb.mb_set_update_rotation = gd::api->godot_method_bind_get_method("RemoteTransform", "set_update_rotation");
	___mb.mb_set_update_scale = gd::api->godot_method_bind_get_method("RemoteTransform", "set_update_scale");
	___mb.mb_set_use_global_coordinates = gd::api->godot_method_bind_get_method("RemoteTransform", "set_use_global_coordinates");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "RemoteTransform");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

remote_transform *remote_transform::_new()
{
	return (remote_transform *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"RemoteTransform")());
}
void remote_transform::force_update_cache() {
	___godot_icall_void(___mb.mb_force_update_cache, (const object *) this);
}

node_path remote_transform::get_remote_node() const {
	return ___godot_icall_NodePath(___mb.mb_get_remote_node, (const object *) this);
}

bool remote_transform::get_update_position() const {
	return ___godot_icall_bool(___mb.mb_get_update_position, (const object *) this);
}

bool remote_transform::get_update_rotation() const {
	return ___godot_icall_bool(___mb.mb_get_update_rotation, (const object *) this);
}

bool remote_transform::get_update_scale() const {
	return ___godot_icall_bool(___mb.mb_get_update_scale, (const object *) this);
}

bool remote_transform::get_use_global_coordinates() const {
	return ___godot_icall_bool(___mb.mb_get_use_global_coordinates, (const object *) this);
}

void remote_transform::set_remote_node(const node_path path_) {
	___godot_icall_void_NodePath(___mb.mb_set_remote_node, (const object *) this, path_);
}

void remote_transform::set_update_position(const bool update_remote_position) {
	___godot_icall_void_bool(___mb.mb_set_update_position, (const object *) this, update_remote_position);
}

void remote_transform::set_update_rotation(const bool update_remote_rotation) {
	___godot_icall_void_bool(___mb.mb_set_update_rotation, (const object *) this, update_remote_rotation);
}

void remote_transform::set_update_scale(const bool update_remote_scale) {
	___godot_icall_void_bool(___mb.mb_set_update_scale, (const object *) this, update_remote_scale);
}

void remote_transform::set_use_global_coordinates(const bool use_global_coordinates) {
	___godot_icall_void_bool(___mb.mb_set_use_global_coordinates, (const object *) this, use_global_coordinates);
}

}