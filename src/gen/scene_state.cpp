#include "scene_state.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "packed_scene.hpp"


namespace gd {


scene_state::___method_bindings scene_state::___mb = {};

void *scene_state::_detail_class_tag = nullptr;

void scene_state::___init_method_bindings() {
	___mb.mb_get_connection_binds = gd::api->godot_method_bind_get_method("SceneState", "get_connection_binds");
	___mb.mb_get_connection_count = gd::api->godot_method_bind_get_method("SceneState", "get_connection_count");
	___mb.mb_get_connection_flags = gd::api->godot_method_bind_get_method("SceneState", "get_connection_flags");
	___mb.mb_get_connection_method = gd::api->godot_method_bind_get_method("SceneState", "get_connection_method");
	___mb.mb_get_connection_signal = gd::api->godot_method_bind_get_method("SceneState", "get_connection_signal");
	___mb.mb_get_connection_source = gd::api->godot_method_bind_get_method("SceneState", "get_connection_source");
	___mb.mb_get_connection_target = gd::api->godot_method_bind_get_method("SceneState", "get_connection_target");
	___mb.mb_get_node_count = gd::api->godot_method_bind_get_method("SceneState", "get_node_count");
	___mb.mb_get_node_groups = gd::api->godot_method_bind_get_method("SceneState", "get_node_groups");
	___mb.mb_get_node_index = gd::api->godot_method_bind_get_method("SceneState", "get_node_index");
	___mb.mb_get_node_instance = gd::api->godot_method_bind_get_method("SceneState", "get_node_instance");
	___mb.mb_get_node_instance_placeholder = gd::api->godot_method_bind_get_method("SceneState", "get_node_instance_placeholder");
	___mb.mb_get_node_name = gd::api->godot_method_bind_get_method("SceneState", "get_node_name");
	___mb.mb_get_node_owner_path = gd::api->godot_method_bind_get_method("SceneState", "get_node_owner_path");
	___mb.mb_get_node_path = gd::api->godot_method_bind_get_method("SceneState", "get_node_path");
	___mb.mb_get_node_property_count = gd::api->godot_method_bind_get_method("SceneState", "get_node_property_count");
	___mb.mb_get_node_property_name = gd::api->godot_method_bind_get_method("SceneState", "get_node_property_name");
	___mb.mb_get_node_property_value = gd::api->godot_method_bind_get_method("SceneState", "get_node_property_value");
	___mb.mb_get_node_type = gd::api->godot_method_bind_get_method("SceneState", "get_node_type");
	___mb.mb_is_node_instance_placeholder = gd::api->godot_method_bind_get_method("SceneState", "is_node_instance_placeholder");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "SceneState");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

array scene_state::get_connection_binds(const int64_t idx) const {
	return ___godot_icall_Array_int(___mb.mb_get_connection_binds, (const object *) this, idx);
}

int64_t scene_state::get_connection_count() const {
	return ___godot_icall_int(___mb.mb_get_connection_count, (const object *) this);
}

int64_t scene_state::get_connection_flags(const int64_t idx) const {
	return ___godot_icall_int_int(___mb.mb_get_connection_flags, (const object *) this, idx);
}

string scene_state::get_connection_method(const int64_t idx) const {
	return ___godot_icall_String_int(___mb.mb_get_connection_method, (const object *) this, idx);
}

string scene_state::get_connection_signal(const int64_t idx) const {
	return ___godot_icall_String_int(___mb.mb_get_connection_signal, (const object *) this, idx);
}

node_path scene_state::get_connection_source(const int64_t idx) const {
	return ___godot_icall_NodePath_int(___mb.mb_get_connection_source, (const object *) this, idx);
}

node_path scene_state::get_connection_target(const int64_t idx) const {
	return ___godot_icall_NodePath_int(___mb.mb_get_connection_target, (const object *) this, idx);
}

int64_t scene_state::get_node_count() const {
	return ___godot_icall_int(___mb.mb_get_node_count, (const object *) this);
}

pool_string_array scene_state::get_node_groups(const int64_t idx) const {
	return ___godot_icall_PoolStringArray_int(___mb.mb_get_node_groups, (const object *) this, idx);
}

int64_t scene_state::get_node_index(const int64_t idx) const {
	return ___godot_icall_int_int(___mb.mb_get_node_index, (const object *) this, idx);
}

ref<packed_scene> scene_state::get_node_instance(const int64_t idx) const {
	return ref<packed_scene>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_node_instance, (const object *) this, idx));
}

string scene_state::get_node_instance_placeholder(const int64_t idx) const {
	return ___godot_icall_String_int(___mb.mb_get_node_instance_placeholder, (const object *) this, idx);
}

string scene_state::get_node_name(const int64_t idx) const {
	return ___godot_icall_String_int(___mb.mb_get_node_name, (const object *) this, idx);
}

node_path scene_state::get_node_owner_path(const int64_t idx) const {
	return ___godot_icall_NodePath_int(___mb.mb_get_node_owner_path, (const object *) this, idx);
}

node_path scene_state::get_node_path(const int64_t idx, const bool for_parent) const {
	return ___godot_icall_NodePath_int_bool(___mb.mb_get_node_path, (const object *) this, idx, for_parent);
}

int64_t scene_state::get_node_property_count(const int64_t idx) const {
	return ___godot_icall_int_int(___mb.mb_get_node_property_count, (const object *) this, idx);
}

string scene_state::get_node_property_name(const int64_t idx, const int64_t prop_idx) const {
	return ___godot_icall_String_int_int(___mb.mb_get_node_property_name, (const object *) this, idx, prop_idx);
}

variant scene_state::get_node_property_value(const int64_t idx, const int64_t prop_idx) const {
	return ___godot_icall_Variant_int_int(___mb.mb_get_node_property_value, (const object *) this, idx, prop_idx);
}

string scene_state::get_node_type(const int64_t idx) const {
	return ___godot_icall_String_int(___mb.mb_get_node_type, (const object *) this, idx);
}

bool scene_state::is_node_instance_placeholder(const int64_t idx) const {
	return ___godot_icall_bool_int(___mb.mb_is_node_instance_placeholder, (const object *) this, idx);
}

}