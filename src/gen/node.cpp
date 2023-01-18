#include "node.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "input_event.hpp"
#include "input_event_key.hpp"
#include "multiplayer_api.hpp"
#include "node.hpp"
#include "scene_tree.hpp"
#include "scene_tree_tween.hpp"
#include "viewport.hpp"


namespace gd {


node::___method_bindings node::___mb = {};

void *node::_detail_class_tag = nullptr;

void node::___init_method_bindings() {
	___mb.mb__enter_tree = gd::api->godot_method_bind_get_method("Node", "_enter_tree");
	___mb.mb__exit_tree = gd::api->godot_method_bind_get_method("Node", "_exit_tree");
	___mb.mb__get_configuration_warning = gd::api->godot_method_bind_get_method("Node", "_get_configuration_warning");
	___mb.mb__get_editor_description = gd::api->godot_method_bind_get_method("Node", "_get_editor_description");
	___mb.mb__get_import_path = gd::api->godot_method_bind_get_method("Node", "_get_import_path");
	___mb.mb__input = gd::api->godot_method_bind_get_method("Node", "_input");
	___mb.mb__physics_process = gd::api->godot_method_bind_get_method("Node", "_physics_process");
	___mb.mb__process = gd::api->godot_method_bind_get_method("Node", "_process");
	___mb.mb__ready = gd::api->godot_method_bind_get_method("Node", "_ready");
	___mb.mb__set_editor_description = gd::api->godot_method_bind_get_method("Node", "_set_editor_description");
	___mb.mb__set_import_path = gd::api->godot_method_bind_get_method("Node", "_set_import_path");
	___mb.mb__set_property_pinned = gd::api->godot_method_bind_get_method("Node", "_set_property_pinned");
	___mb.mb__unhandled_input = gd::api->godot_method_bind_get_method("Node", "_unhandled_input");
	___mb.mb__unhandled_key_input = gd::api->godot_method_bind_get_method("Node", "_unhandled_key_input");
	___mb.mb_add_child = gd::api->godot_method_bind_get_method("Node", "add_child");
	___mb.mb_add_child_below_node = gd::api->godot_method_bind_get_method("Node", "add_child_below_node");
	___mb.mb_add_to_group = gd::api->godot_method_bind_get_method("Node", "add_to_group");
	___mb.mb_can_process = gd::api->godot_method_bind_get_method("Node", "can_process");
	___mb.mb_create_tween = gd::api->godot_method_bind_get_method("Node", "create_tween");
	___mb.mb_duplicate = gd::api->godot_method_bind_get_method("Node", "duplicate");
	___mb.mb_find_node = gd::api->godot_method_bind_get_method("Node", "find_node");
	___mb.mb_find_parent = gd::api->godot_method_bind_get_method("Node", "find_parent");
	___mb.mb_get_child = gd::api->godot_method_bind_get_method("Node", "get_child");
	___mb.mb_get_child_count = gd::api->godot_method_bind_get_method("Node", "get_child_count");
	___mb.mb_get_children = gd::api->godot_method_bind_get_method("Node", "get_children");
	___mb.mb_get_custom_multiplayer = gd::api->godot_method_bind_get_method("Node", "get_custom_multiplayer");
	___mb.mb_get_filename = gd::api->godot_method_bind_get_method("Node", "get_filename");
	___mb.mb_get_groups = gd::api->godot_method_bind_get_method("Node", "get_groups");
	___mb.mb_get_index = gd::api->godot_method_bind_get_method("Node", "get_index");
	___mb.mb_get_multiplayer = gd::api->godot_method_bind_get_method("Node", "get_multiplayer");
	___mb.mb_get_name = gd::api->godot_method_bind_get_method("Node", "get_name");
	___mb.mb_get_network_master = gd::api->godot_method_bind_get_method("Node", "get_network_master");
	___mb.mb_get_node_internal = gd::api->godot_method_bind_get_method("Node", "get_node");
	___mb.mb_get_node_and_resource = gd::api->godot_method_bind_get_method("Node", "get_node_and_resource");
	___mb.mb_get_node_or_null = gd::api->godot_method_bind_get_method("Node", "get_node_or_null");
	___mb.mb_get_owner = gd::api->godot_method_bind_get_method("Node", "get_owner");
	___mb.mb_get_parent = gd::api->godot_method_bind_get_method("Node", "get_parent");
	___mb.mb_get_path = gd::api->godot_method_bind_get_method("Node", "get_path");
	___mb.mb_get_path_to = gd::api->godot_method_bind_get_method("Node", "get_path_to");
	___mb.mb_get_pause_mode = gd::api->godot_method_bind_get_method("Node", "get_pause_mode");
	___mb.mb_get_physics_interpolation_mode = gd::api->godot_method_bind_get_method("Node", "get_physics_interpolation_mode");
	___mb.mb_get_physics_process_delta_time = gd::api->godot_method_bind_get_method("Node", "get_physics_process_delta_time");
	___mb.mb_get_position_in_parent = gd::api->godot_method_bind_get_method("Node", "get_position_in_parent");
	___mb.mb_get_process_delta_time = gd::api->godot_method_bind_get_method("Node", "get_process_delta_time");
	___mb.mb_get_process_priority = gd::api->godot_method_bind_get_method("Node", "get_process_priority");
	___mb.mb_get_scene_instance_load_placeholder = gd::api->godot_method_bind_get_method("Node", "get_scene_instance_load_placeholder");
	___mb.mb_get_tree = gd::api->godot_method_bind_get_method("Node", "get_tree");
	___mb.mb_get_viewport = gd::api->godot_method_bind_get_method("Node", "get_viewport");
	___mb.mb_has_node = gd::api->godot_method_bind_get_method("Node", "has_node");
	___mb.mb_has_node_and_resource = gd::api->godot_method_bind_get_method("Node", "has_node_and_resource");
	___mb.mb_is_a_parent_of = gd::api->godot_method_bind_get_method("Node", "is_a_parent_of");
	___mb.mb_is_displayed_folded = gd::api->godot_method_bind_get_method("Node", "is_displayed_folded");
	___mb.mb_is_greater_than = gd::api->godot_method_bind_get_method("Node", "is_greater_than");
	___mb.mb_is_in_group = gd::api->godot_method_bind_get_method("Node", "is_in_group");
	___mb.mb_is_inside_tree = gd::api->godot_method_bind_get_method("Node", "is_inside_tree");
	___mb.mb_is_network_master = gd::api->godot_method_bind_get_method("Node", "is_network_master");
	___mb.mb_is_physics_interpolated = gd::api->godot_method_bind_get_method("Node", "is_physics_interpolated");
	___mb.mb_is_physics_interpolated_and_enabled = gd::api->godot_method_bind_get_method("Node", "is_physics_interpolated_and_enabled");
	___mb.mb_is_physics_processing = gd::api->godot_method_bind_get_method("Node", "is_physics_processing");
	___mb.mb_is_physics_processing_internal = gd::api->godot_method_bind_get_method("Node", "is_physics_processing_internal");
	___mb.mb_is_processing = gd::api->godot_method_bind_get_method("Node", "is_processing");
	___mb.mb_is_processing_input = gd::api->godot_method_bind_get_method("Node", "is_processing_input");
	___mb.mb_is_processing_internal = gd::api->godot_method_bind_get_method("Node", "is_processing_internal");
	___mb.mb_is_processing_unhandled_input = gd::api->godot_method_bind_get_method("Node", "is_processing_unhandled_input");
	___mb.mb_is_processing_unhandled_key_input = gd::api->godot_method_bind_get_method("Node", "is_processing_unhandled_key_input");
	___mb.mb_is_unique_name_in_owner = gd::api->godot_method_bind_get_method("Node", "is_unique_name_in_owner");
	___mb.mb_move_child = gd::api->godot_method_bind_get_method("Node", "move_child");
	___mb.mb_print_stray_nodes = gd::api->godot_method_bind_get_method("Node", "print_stray_nodes");
	___mb.mb_print_tree = gd::api->godot_method_bind_get_method("Node", "print_tree");
	___mb.mb_print_tree_pretty = gd::api->godot_method_bind_get_method("Node", "print_tree_pretty");
	___mb.mb_propagate_call = gd::api->godot_method_bind_get_method("Node", "propagate_call");
	___mb.mb_propagate_notification = gd::api->godot_method_bind_get_method("Node", "propagate_notification");
	___mb.mb_queue_free = gd::api->godot_method_bind_get_method("Node", "queue_free");
	___mb.mb_raise = gd::api->godot_method_bind_get_method("Node", "raise");
	___mb.mb_remove_and_skip = gd::api->godot_method_bind_get_method("Node", "remove_and_skip");
	___mb.mb_remove_child = gd::api->godot_method_bind_get_method("Node", "remove_child");
	___mb.mb_remove_from_group = gd::api->godot_method_bind_get_method("Node", "remove_from_group");
	___mb.mb_replace_by = gd::api->godot_method_bind_get_method("Node", "replace_by");
	___mb.mb_request_ready = gd::api->godot_method_bind_get_method("Node", "request_ready");
	___mb.mb_reset_physics_interpolation = gd::api->godot_method_bind_get_method("Node", "reset_physics_interpolation");
	___mb.mb_rpc = gd::api->godot_method_bind_get_method("Node", "rpc");
	___mb.mb_rpc_config = gd::api->godot_method_bind_get_method("Node", "rpc_config");
	___mb.mb_rpc_id = gd::api->godot_method_bind_get_method("Node", "rpc_id");
	___mb.mb_rpc_unreliable = gd::api->godot_method_bind_get_method("Node", "rpc_unreliable");
	___mb.mb_rpc_unreliable_id = gd::api->godot_method_bind_get_method("Node", "rpc_unreliable_id");
	___mb.mb_rset = gd::api->godot_method_bind_get_method("Node", "rset");
	___mb.mb_rset_config = gd::api->godot_method_bind_get_method("Node", "rset_config");
	___mb.mb_rset_id = gd::api->godot_method_bind_get_method("Node", "rset_id");
	___mb.mb_rset_unreliable = gd::api->godot_method_bind_get_method("Node", "rset_unreliable");
	___mb.mb_rset_unreliable_id = gd::api->godot_method_bind_get_method("Node", "rset_unreliable_id");
	___mb.mb_set_custom_multiplayer = gd::api->godot_method_bind_get_method("Node", "set_custom_multiplayer");
	___mb.mb_set_display_folded = gd::api->godot_method_bind_get_method("Node", "set_display_folded");
	___mb.mb_set_filename = gd::api->godot_method_bind_get_method("Node", "set_filename");
	___mb.mb_set_name = gd::api->godot_method_bind_get_method("Node", "set_name");
	___mb.mb_set_network_master = gd::api->godot_method_bind_get_method("Node", "set_network_master");
	___mb.mb_set_owner = gd::api->godot_method_bind_get_method("Node", "set_owner");
	___mb.mb_set_pause_mode = gd::api->godot_method_bind_get_method("Node", "set_pause_mode");
	___mb.mb_set_physics_interpolation_mode = gd::api->godot_method_bind_get_method("Node", "set_physics_interpolation_mode");
	___mb.mb_set_physics_process = gd::api->godot_method_bind_get_method("Node", "set_physics_process");
	___mb.mb_set_physics_process_internal = gd::api->godot_method_bind_get_method("Node", "set_physics_process_internal");
	___mb.mb_set_process = gd::api->godot_method_bind_get_method("Node", "set_process");
	___mb.mb_set_process_input = gd::api->godot_method_bind_get_method("Node", "set_process_input");
	___mb.mb_set_process_internal = gd::api->godot_method_bind_get_method("Node", "set_process_internal");
	___mb.mb_set_process_priority = gd::api->godot_method_bind_get_method("Node", "set_process_priority");
	___mb.mb_set_process_unhandled_input = gd::api->godot_method_bind_get_method("Node", "set_process_unhandled_input");
	___mb.mb_set_process_unhandled_key_input = gd::api->godot_method_bind_get_method("Node", "set_process_unhandled_key_input");
	___mb.mb_set_scene_instance_load_placeholder = gd::api->godot_method_bind_get_method("Node", "set_scene_instance_load_placeholder");
	___mb.mb_set_unique_name_in_owner = gd::api->godot_method_bind_get_method("Node", "set_unique_name_in_owner");
	___mb.mb_update_configuration_warning = gd::api->godot_method_bind_get_method("Node", "update_configuration_warning");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Node");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

node *node::_new()
{
	return (node *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Node")());
}
void node::_enter_tree() {
	___godot_icall_void(___mb.mb__enter_tree, (const object *) this);
}

void node::_exit_tree() {
	___godot_icall_void(___mb.mb__exit_tree, (const object *) this);
}

string node::_get_configuration_warning() {
	return ___godot_icall_String(___mb.mb__get_configuration_warning, (const object *) this);
}

string node::_get_editor_description() const {
	return ___godot_icall_String(___mb.mb__get_editor_description, (const object *) this);
}

node_path node::_get_import_path() const {
	return ___godot_icall_NodePath(___mb.mb__get_import_path, (const object *) this);
}

void node::_input(const ref<input_event> event) {
	___godot_icall_void_Object(___mb.mb__input, (const object *) this, event.ptr());
}

void node::_physics_process(const real_t delta) {
	___godot_icall_void_float(___mb.mb__physics_process, (const object *) this, delta);
}

void node::_process(const real_t delta) {
	___godot_icall_void_float(___mb.mb__process, (const object *) this, delta);
}

void node::_ready() {
	___godot_icall_void(___mb.mb__ready, (const object *) this);
}

void node::_set_editor_description(const string editor_description) {
	___godot_icall_void_String(___mb.mb__set_editor_description, (const object *) this, editor_description);
}

void node::_set_import_path(const node_path import_path) {
	___godot_icall_void_NodePath(___mb.mb__set_import_path, (const object *) this, import_path);
}

void node::_set_property_pinned(const string property, const bool pinned) {
	___godot_icall_void_String_bool(___mb.mb__set_property_pinned, (const object *) this, property, pinned);
}

void node::_unhandled_input(const ref<input_event> event) {
	___godot_icall_void_Object(___mb.mb__unhandled_input, (const object *) this, event.ptr());
}

void node::_unhandled_key_input(const ref<input_event_key> event) {
	___godot_icall_void_Object(___mb.mb__unhandled_key_input, (const object *) this, event.ptr());
}

void node::add_child(const node *node_, const bool legible_unique_name) {
	___godot_icall_void_Object_bool(___mb.mb_add_child, (const object *) this, node_, legible_unique_name);
}

void node::add_child_below_node(const node *node_, const node *child_node, const bool legible_unique_name) {
	___godot_icall_void_Object_Object_bool(___mb.mb_add_child_below_node, (const object *) this, node_, child_node, legible_unique_name);
}

void node::add_to_group(const string group, const bool persistent) {
	___godot_icall_void_String_bool(___mb.mb_add_to_group, (const object *) this, group, persistent);
}

bool node::can_process() const {
	return ___godot_icall_bool(___mb.mb_can_process, (const object *) this);
}

ref<scene_tree_tween> node::create_tween() {
	return ref<scene_tree_tween>::__internal_constructor(___godot_icall_Object(___mb.mb_create_tween, (const object *) this));
}

node *node::duplicate(const int64_t flags) const {
	return (node *) ___godot_icall_Object_int(___mb.mb_duplicate, (const object *) this, flags);
}

node *node::find_node(const string mask, const bool recursive, const bool owned) const {
	return (node *) ___godot_icall_Object_String_bool_bool(___mb.mb_find_node, (const object *) this, mask, recursive, owned);
}

node *node::find_parent(const string mask) const {
	return (node *) ___godot_icall_Object_String(___mb.mb_find_parent, (const object *) this, mask);
}

node *node::get_child(const int64_t idx) const {
	return (node *) ___godot_icall_Object_int(___mb.mb_get_child, (const object *) this, idx);
}

int64_t node::get_child_count() const {
	return ___godot_icall_int(___mb.mb_get_child_count, (const object *) this);
}

array node::get_children() const {
	return ___godot_icall_Array(___mb.mb_get_children, (const object *) this);
}

ref<multiplayer_api> node::get_custom_multiplayer() const {
	return ref<multiplayer_api>::__internal_constructor(___godot_icall_Object(___mb.mb_get_custom_multiplayer, (const object *) this));
}

string node::get_filename() const {
	return ___godot_icall_String(___mb.mb_get_filename, (const object *) this);
}

array node::get_groups() const {
	return ___godot_icall_Array(___mb.mb_get_groups, (const object *) this);
}

int64_t node::get_index() const {
	return ___godot_icall_int(___mb.mb_get_index, (const object *) this);
}

ref<multiplayer_api> node::get_multiplayer() const {
	return ref<multiplayer_api>::__internal_constructor(___godot_icall_Object(___mb.mb_get_multiplayer, (const object *) this));
}

string node::get_name() const {
	return ___godot_icall_String(___mb.mb_get_name, (const object *) this);
}

int64_t node::get_network_master() const {
	return ___godot_icall_int(___mb.mb_get_network_master, (const object *) this);
}

node *node::get_node_internal(const node_path path_) const {
	return (node *) ___godot_icall_Object_NodePath(___mb.mb_get_node_internal, (const object *) this, path_);
}

array node::get_node_and_resource(const node_path path_) {
	return ___godot_icall_Array_NodePath(___mb.mb_get_node_and_resource, (const object *) this, path_);
}

node *node::get_node_or_null(const node_path path_) const {
	return (node *) ___godot_icall_Object_NodePath(___mb.mb_get_node_or_null, (const object *) this, path_);
}

node *node::get_owner() const {
	return (node *) ___godot_icall_Object(___mb.mb_get_owner, (const object *) this);
}

node *node::get_parent() const {
	return (node *) ___godot_icall_Object(___mb.mb_get_parent, (const object *) this);
}

node_path node::get_path() const {
	return ___godot_icall_NodePath(___mb.mb_get_path, (const object *) this);
}

node_path node::get_path_to(const node *node_) const {
	return ___godot_icall_NodePath_Object(___mb.mb_get_path_to, (const object *) this, node_);
}

node::PauseMode node::get_pause_mode() const {
	return (node::PauseMode) ___godot_icall_int(___mb.mb_get_pause_mode, (const object *) this);
}

node::PhysicsInterpolationMode node::get_physics_interpolation_mode() const {
	return (node::PhysicsInterpolationMode) ___godot_icall_int(___mb.mb_get_physics_interpolation_mode, (const object *) this);
}

real_t node::get_physics_process_delta_time() const {
	return ___godot_icall_float(___mb.mb_get_physics_process_delta_time, (const object *) this);
}

int64_t node::get_position_in_parent() const {
	return ___godot_icall_int(___mb.mb_get_position_in_parent, (const object *) this);
}

real_t node::get_process_delta_time() const {
	return ___godot_icall_float(___mb.mb_get_process_delta_time, (const object *) this);
}

int64_t node::get_process_priority() const {
	return ___godot_icall_int(___mb.mb_get_process_priority, (const object *) this);
}

bool node::get_scene_instance_load_placeholder() const {
	return ___godot_icall_bool(___mb.mb_get_scene_instance_load_placeholder, (const object *) this);
}

scene_tree *node::get_tree() const {
	return (scene_tree *) ___godot_icall_Object(___mb.mb_get_tree, (const object *) this);
}

viewport *node::get_viewport() const {
	return (viewport *) ___godot_icall_Object(___mb.mb_get_viewport, (const object *) this);
}

bool node::has_node(const node_path path_) const {
	return ___godot_icall_bool_NodePath(___mb.mb_has_node, (const object *) this, path_);
}

bool node::has_node_and_resource(const node_path path_) const {
	return ___godot_icall_bool_NodePath(___mb.mb_has_node_and_resource, (const object *) this, path_);
}

bool node::is_a_parent_of(const node *node_) const {
	return ___godot_icall_bool_Object(___mb.mb_is_a_parent_of, (const object *) this, node_);
}

bool node::is_displayed_folded() const {
	return ___godot_icall_bool(___mb.mb_is_displayed_folded, (const object *) this);
}

bool node::is_greater_than(const node *node_) const {
	return ___godot_icall_bool_Object(___mb.mb_is_greater_than, (const object *) this, node_);
}

bool node::is_in_group(const string group) const {
	return ___godot_icall_bool_String(___mb.mb_is_in_group, (const object *) this, group);
}

bool node::is_inside_tree() const {
	return ___godot_icall_bool(___mb.mb_is_inside_tree, (const object *) this);
}

bool node::is_network_master() const {
	return ___godot_icall_bool(___mb.mb_is_network_master, (const object *) this);
}

bool node::is_physics_interpolated() const {
	return ___godot_icall_bool(___mb.mb_is_physics_interpolated, (const object *) this);
}

bool node::is_physics_interpolated_and_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_physics_interpolated_and_enabled, (const object *) this);
}

bool node::is_physics_processing() const {
	return ___godot_icall_bool(___mb.mb_is_physics_processing, (const object *) this);
}

bool node::is_physics_processing_internal() const {
	return ___godot_icall_bool(___mb.mb_is_physics_processing_internal, (const object *) this);
}

bool node::is_processing() const {
	return ___godot_icall_bool(___mb.mb_is_processing, (const object *) this);
}

bool node::is_processing_input() const {
	return ___godot_icall_bool(___mb.mb_is_processing_input, (const object *) this);
}

bool node::is_processing_internal() const {
	return ___godot_icall_bool(___mb.mb_is_processing_internal, (const object *) this);
}

bool node::is_processing_unhandled_input() const {
	return ___godot_icall_bool(___mb.mb_is_processing_unhandled_input, (const object *) this);
}

bool node::is_processing_unhandled_key_input() const {
	return ___godot_icall_bool(___mb.mb_is_processing_unhandled_key_input, (const object *) this);
}

bool node::is_unique_name_in_owner() const {
	return ___godot_icall_bool(___mb.mb_is_unique_name_in_owner, (const object *) this);
}

void node::move_child(const node *child_node, const int64_t to_position) {
	___godot_icall_void_Object_int(___mb.mb_move_child, (const object *) this, child_node, to_position);
}

void node::print_stray_nodes() {
	___godot_icall_void(___mb.mb_print_stray_nodes, (const object *) this);
}

void node::print_tree() {
	___godot_icall_void(___mb.mb_print_tree, (const object *) this);
}

void node::print_tree_pretty() {
	___godot_icall_void(___mb.mb_print_tree_pretty, (const object *) this);
}

void node::propagate_call(const string method, const array args, const bool parent_first) {
	___godot_icall_void_String_Array_bool(___mb.mb_propagate_call, (const object *) this, method, args, parent_first);
}

void node::propagate_notification(const int64_t what) {
	___godot_icall_void_int(___mb.mb_propagate_notification, (const object *) this, what);
}

void node::queue_free() {
	___godot_icall_void(___mb.mb_queue_free, (const object *) this);
}

void node::raise() {
	___godot_icall_void(___mb.mb_raise, (const object *) this);
}

void node::remove_and_skip() {
	___godot_icall_void(___mb.mb_remove_and_skip, (const object *) this);
}

void node::remove_child(const node *node_) {
	___godot_icall_void_Object(___mb.mb_remove_child, (const object *) this, node_);
}

void node::remove_from_group(const string group) {
	___godot_icall_void_String(___mb.mb_remove_from_group, (const object *) this, group);
}

void node::replace_by(const node *node_, const bool keep_data) {
	___godot_icall_void_Object_bool(___mb.mb_replace_by, (const object *) this, node_, keep_data);
}

void node::request_ready() {
	___godot_icall_void(___mb.mb_request_ready, (const object *) this);
}

void node::reset_physics_interpolation() {
	___godot_icall_void(___mb.mb_reset_physics_interpolation, (const object *) this);
}

variant node::rpc(const string method, const array& __var_args) {
	variant __given_args[1];
	gd::api->godot_variant_new_nil((godot_variant *) &__given_args[0]);

	__given_args[0] = method;

	godot_variant **__args = (godot_variant **) alloca(sizeof(godot_variant *) * (__var_args.size() + 1));

	__args[0] = (godot_variant *) &__given_args[0];

	for (int i = 0; i < __var_args.size(); i++) {
		__args[i + 1] = (godot_variant *) &((array &) __var_args)[i];
	}

	variant __result;
	*(godot_variant *) &__result = gd::api->godot_method_bind_call(___mb.mb_rpc, ((const object *) this)->_owner, (const godot_variant **) __args, (__var_args.size() + 1), nullptr);

	gd::api->godot_variant_destroy((godot_variant *) &__given_args[0]);

	return __result;
}

void node::rpc_config(const string method, const int64_t mode) {
	___godot_icall_void_String_int(___mb.mb_rpc_config, (const object *) this, method, mode);
}

variant node::rpc_id(const int64_t peer_id, const string method, const array& __var_args) {
	variant __given_args[2];
	gd::api->godot_variant_new_nil((godot_variant *) &__given_args[0]);
	gd::api->godot_variant_new_nil((godot_variant *) &__given_args[1]);

	__given_args[0] = peer_id;
	__given_args[1] = method;

	godot_variant **__args = (godot_variant **) alloca(sizeof(godot_variant *) * (__var_args.size() + 2));

	__args[0] = (godot_variant *) &__given_args[0];
	__args[1] = (godot_variant *) &__given_args[1];

	for (int i = 0; i < __var_args.size(); i++) {
		__args[i + 2] = (godot_variant *) &((array &) __var_args)[i];
	}

	variant __result;
	*(godot_variant *) &__result = gd::api->godot_method_bind_call(___mb.mb_rpc_id, ((const object *) this)->_owner, (const godot_variant **) __args, (__var_args.size() + 2), nullptr);

	gd::api->godot_variant_destroy((godot_variant *) &__given_args[0]);
	gd::api->godot_variant_destroy((godot_variant *) &__given_args[1]);

	return __result;
}

variant node::rpc_unreliable(const string method, const array& __var_args) {
	variant __given_args[1];
	gd::api->godot_variant_new_nil((godot_variant *) &__given_args[0]);

	__given_args[0] = method;

	godot_variant **__args = (godot_variant **) alloca(sizeof(godot_variant *) * (__var_args.size() + 1));

	__args[0] = (godot_variant *) &__given_args[0];

	for (int i = 0; i < __var_args.size(); i++) {
		__args[i + 1] = (godot_variant *) &((array &) __var_args)[i];
	}

	variant __result;
	*(godot_variant *) &__result = gd::api->godot_method_bind_call(___mb.mb_rpc_unreliable, ((const object *) this)->_owner, (const godot_variant **) __args, (__var_args.size() + 1), nullptr);

	gd::api->godot_variant_destroy((godot_variant *) &__given_args[0]);

	return __result;
}

variant node::rpc_unreliable_id(const int64_t peer_id, const string method, const array& __var_args) {
	variant __given_args[2];
	gd::api->godot_variant_new_nil((godot_variant *) &__given_args[0]);
	gd::api->godot_variant_new_nil((godot_variant *) &__given_args[1]);

	__given_args[0] = peer_id;
	__given_args[1] = method;

	godot_variant **__args = (godot_variant **) alloca(sizeof(godot_variant *) * (__var_args.size() + 2));

	__args[0] = (godot_variant *) &__given_args[0];
	__args[1] = (godot_variant *) &__given_args[1];

	for (int i = 0; i < __var_args.size(); i++) {
		__args[i + 2] = (godot_variant *) &((array &) __var_args)[i];
	}

	variant __result;
	*(godot_variant *) &__result = gd::api->godot_method_bind_call(___mb.mb_rpc_unreliable_id, ((const object *) this)->_owner, (const godot_variant **) __args, (__var_args.size() + 2), nullptr);

	gd::api->godot_variant_destroy((godot_variant *) &__given_args[0]);
	gd::api->godot_variant_destroy((godot_variant *) &__given_args[1]);

	return __result;
}

void node::rset(const string property, const variant value) {
	___godot_icall_void_String_Variant(___mb.mb_rset, (const object *) this, property, value);
}

void node::rset_config(const string property, const int64_t mode) {
	___godot_icall_void_String_int(___mb.mb_rset_config, (const object *) this, property, mode);
}

void node::rset_id(const int64_t peer_id, const string property, const variant value) {
	___godot_icall_void_int_String_Variant(___mb.mb_rset_id, (const object *) this, peer_id, property, value);
}

void node::rset_unreliable(const string property, const variant value) {
	___godot_icall_void_String_Variant(___mb.mb_rset_unreliable, (const object *) this, property, value);
}

void node::rset_unreliable_id(const int64_t peer_id, const string property, const variant value) {
	___godot_icall_void_int_String_Variant(___mb.mb_rset_unreliable_id, (const object *) this, peer_id, property, value);
}

void node::set_custom_multiplayer(const ref<multiplayer_api> api) {
	___godot_icall_void_Object(___mb.mb_set_custom_multiplayer, (const object *) this, api.ptr());
}

void node::set_display_folded(const bool fold) {
	___godot_icall_void_bool(___mb.mb_set_display_folded, (const object *) this, fold);
}

void node::set_filename(const string filename) {
	___godot_icall_void_String(___mb.mb_set_filename, (const object *) this, filename);
}

void node::set_name(const string name) {
	___godot_icall_void_String(___mb.mb_set_name, (const object *) this, name);
}

void node::set_network_master(const int64_t id, const bool recursive) {
	___godot_icall_void_int_bool(___mb.mb_set_network_master, (const object *) this, id, recursive);
}

void node::set_owner(const node *owner) {
	___godot_icall_void_Object(___mb.mb_set_owner, (const object *) this, owner);
}

void node::set_pause_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_pause_mode, (const object *) this, mode);
}

void node::set_physics_interpolation_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_physics_interpolation_mode, (const object *) this, mode);
}

void node::set_physics_process(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_physics_process, (const object *) this, enable);
}

void node::set_physics_process_internal(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_physics_process_internal, (const object *) this, enable);
}

void node::set_process(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_process, (const object *) this, enable);
}

void node::set_process_input(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_process_input, (const object *) this, enable);
}

void node::set_process_internal(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_process_internal, (const object *) this, enable);
}

void node::set_process_priority(const int64_t priority) {
	___godot_icall_void_int(___mb.mb_set_process_priority, (const object *) this, priority);
}

void node::set_process_unhandled_input(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_process_unhandled_input, (const object *) this, enable);
}

void node::set_process_unhandled_key_input(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_process_unhandled_key_input, (const object *) this, enable);
}

void node::set_scene_instance_load_placeholder(const bool load_placeholder) {
	___godot_icall_void_bool(___mb.mb_set_scene_instance_load_placeholder, (const object *) this, load_placeholder);
}

void node::set_unique_name_in_owner(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_unique_name_in_owner, (const object *) this, enable);
}

void node::update_configuration_warning() {
	___godot_icall_void(___mb.mb_update_configuration_warning, (const object *) this);
}

}