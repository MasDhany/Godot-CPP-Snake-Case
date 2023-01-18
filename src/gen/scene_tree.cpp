#include "scene_tree.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "multiplayer_api.hpp"
#include "networked_multiplayer_peer.hpp"
#include "node.hpp"
#include "object.hpp"
#include "packed_scene.hpp"
#include "scene_tree_timer.hpp"
#include "scene_tree_tween.hpp"
#include "viewport.hpp"


namespace gd {


scene_tree::___method_bindings scene_tree::___mb = {};

void *scene_tree::_detail_class_tag = nullptr;

void scene_tree::___init_method_bindings() {
	___mb.mb__change_scene = gd::api->godot_method_bind_get_method("SceneTree", "_change_scene");
	___mb.mb__connected_to_server = gd::api->godot_method_bind_get_method("SceneTree", "_connected_to_server");
	___mb.mb__connection_failed = gd::api->godot_method_bind_get_method("SceneTree", "_connection_failed");
	___mb.mb__network_peer_connected = gd::api->godot_method_bind_get_method("SceneTree", "_network_peer_connected");
	___mb.mb__network_peer_disconnected = gd::api->godot_method_bind_get_method("SceneTree", "_network_peer_disconnected");
	___mb.mb__server_disconnected = gd::api->godot_method_bind_get_method("SceneTree", "_server_disconnected");
	___mb.mb_call_group = gd::api->godot_method_bind_get_method("SceneTree", "call_group");
	___mb.mb_call_group_flags = gd::api->godot_method_bind_get_method("SceneTree", "call_group_flags");
	___mb.mb_change_scene = gd::api->godot_method_bind_get_method("SceneTree", "change_scene");
	___mb.mb_change_scene_to = gd::api->godot_method_bind_get_method("SceneTree", "change_scene_to");
	___mb.mb_create_timer = gd::api->godot_method_bind_get_method("SceneTree", "create_timer");
	___mb.mb_create_tween = gd::api->godot_method_bind_get_method("SceneTree", "create_tween");
	___mb.mb_get_current_scene = gd::api->godot_method_bind_get_method("SceneTree", "get_current_scene");
	___mb.mb_get_edited_scene_root = gd::api->godot_method_bind_get_method("SceneTree", "get_edited_scene_root");
	___mb.mb_get_frame = gd::api->godot_method_bind_get_method("SceneTree", "get_frame");
	___mb.mb_get_multiplayer = gd::api->godot_method_bind_get_method("SceneTree", "get_multiplayer");
	___mb.mb_get_network_connected_peers = gd::api->godot_method_bind_get_method("SceneTree", "get_network_connected_peers");
	___mb.mb_get_network_peer = gd::api->godot_method_bind_get_method("SceneTree", "get_network_peer");
	___mb.mb_get_network_unique_id = gd::api->godot_method_bind_get_method("SceneTree", "get_network_unique_id");
	___mb.mb_get_node_count = gd::api->godot_method_bind_get_method("SceneTree", "get_node_count");
	___mb.mb_get_nodes_in_group = gd::api->godot_method_bind_get_method("SceneTree", "get_nodes_in_group");
	___mb.mb_get_processed_tweens = gd::api->godot_method_bind_get_method("SceneTree", "get_processed_tweens");
	___mb.mb_get_root = gd::api->godot_method_bind_get_method("SceneTree", "get_root");
	___mb.mb_get_rpc_sender_id = gd::api->godot_method_bind_get_method("SceneTree", "get_rpc_sender_id");
	___mb.mb_has_group = gd::api->godot_method_bind_get_method("SceneTree", "has_group");
	___mb.mb_has_network_peer = gd::api->godot_method_bind_get_method("SceneTree", "has_network_peer");
	___mb.mb_is_auto_accept_quit = gd::api->godot_method_bind_get_method("SceneTree", "is_auto_accept_quit");
	___mb.mb_is_debugging_collisions_hint = gd::api->godot_method_bind_get_method("SceneTree", "is_debugging_collisions_hint");
	___mb.mb_is_debugging_navigation_hint = gd::api->godot_method_bind_get_method("SceneTree", "is_debugging_navigation_hint");
	___mb.mb_is_input_handled = gd::api->godot_method_bind_get_method("SceneTree", "is_input_handled");
	___mb.mb_is_multiplayer_poll_enabled = gd::api->godot_method_bind_get_method("SceneTree", "is_multiplayer_poll_enabled");
	___mb.mb_is_network_server = gd::api->godot_method_bind_get_method("SceneTree", "is_network_server");
	___mb.mb_is_paused = gd::api->godot_method_bind_get_method("SceneTree", "is_paused");
	___mb.mb_is_physics_interpolation_enabled = gd::api->godot_method_bind_get_method("SceneTree", "is_physics_interpolation_enabled");
	___mb.mb_is_quit_on_go_back = gd::api->godot_method_bind_get_method("SceneTree", "is_quit_on_go_back");
	___mb.mb_is_refusing_new_network_connections = gd::api->godot_method_bind_get_method("SceneTree", "is_refusing_new_network_connections");
	___mb.mb_is_using_font_oversampling = gd::api->godot_method_bind_get_method("SceneTree", "is_using_font_oversampling");
	___mb.mb_notify_group = gd::api->godot_method_bind_get_method("SceneTree", "notify_group");
	___mb.mb_notify_group_flags = gd::api->godot_method_bind_get_method("SceneTree", "notify_group_flags");
	___mb.mb_queue_delete = gd::api->godot_method_bind_get_method("SceneTree", "queue_delete");
	___mb.mb_quit = gd::api->godot_method_bind_get_method("SceneTree", "quit");
	___mb.mb_reload_current_scene = gd::api->godot_method_bind_get_method("SceneTree", "reload_current_scene");
	___mb.mb_set_auto_accept_quit = gd::api->godot_method_bind_get_method("SceneTree", "set_auto_accept_quit");
	___mb.mb_set_current_scene = gd::api->godot_method_bind_get_method("SceneTree", "set_current_scene");
	___mb.mb_set_debug_collisions_hint = gd::api->godot_method_bind_get_method("SceneTree", "set_debug_collisions_hint");
	___mb.mb_set_debug_navigation_hint = gd::api->godot_method_bind_get_method("SceneTree", "set_debug_navigation_hint");
	___mb.mb_set_edited_scene_root = gd::api->godot_method_bind_get_method("SceneTree", "set_edited_scene_root");
	___mb.mb_set_group = gd::api->godot_method_bind_get_method("SceneTree", "set_group");
	___mb.mb_set_group_flags = gd::api->godot_method_bind_get_method("SceneTree", "set_group_flags");
	___mb.mb_set_input_as_handled = gd::api->godot_method_bind_get_method("SceneTree", "set_input_as_handled");
	___mb.mb_set_multiplayer = gd::api->godot_method_bind_get_method("SceneTree", "set_multiplayer");
	___mb.mb_set_multiplayer_poll_enabled = gd::api->godot_method_bind_get_method("SceneTree", "set_multiplayer_poll_enabled");
	___mb.mb_set_network_peer = gd::api->godot_method_bind_get_method("SceneTree", "set_network_peer");
	___mb.mb_set_pause = gd::api->godot_method_bind_get_method("SceneTree", "set_pause");
	___mb.mb_set_physics_interpolation_enabled = gd::api->godot_method_bind_get_method("SceneTree", "set_physics_interpolation_enabled");
	___mb.mb_set_quit_on_go_back = gd::api->godot_method_bind_get_method("SceneTree", "set_quit_on_go_back");
	___mb.mb_set_refuse_new_network_connections = gd::api->godot_method_bind_get_method("SceneTree", "set_refuse_new_network_connections");
	___mb.mb_set_screen_stretch = gd::api->godot_method_bind_get_method("SceneTree", "set_screen_stretch");
	___mb.mb_set_use_font_oversampling = gd::api->godot_method_bind_get_method("SceneTree", "set_use_font_oversampling");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "SceneTree");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

scene_tree *scene_tree::_new()
{
	return (scene_tree *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"SceneTree")());
}
void scene_tree::_change_scene(const node *arg0) {
	___godot_icall_void_Object(___mb.mb__change_scene, (const object *) this, arg0);
}

void scene_tree::_connected_to_server() {
	___godot_icall_void(___mb.mb__connected_to_server, (const object *) this);
}

void scene_tree::_connection_failed() {
	___godot_icall_void(___mb.mb__connection_failed, (const object *) this);
}

void scene_tree::_network_peer_connected(const int64_t arg0) {
	___godot_icall_void_int(___mb.mb__network_peer_connected, (const object *) this, arg0);
}

void scene_tree::_network_peer_disconnected(const int64_t arg0) {
	___godot_icall_void_int(___mb.mb__network_peer_disconnected, (const object *) this, arg0);
}

void scene_tree::_server_disconnected() {
	___godot_icall_void(___mb.mb__server_disconnected, (const object *) this);
}

variant scene_tree::call_group(const string group, const string method, const array& __var_args) {
	variant __given_args[2];
	gd::api->godot_variant_new_nil((godot_variant *) &__given_args[0]);
	gd::api->godot_variant_new_nil((godot_variant *) &__given_args[1]);

	__given_args[0] = group;
	__given_args[1] = method;

	godot_variant **__args = (godot_variant **) alloca(sizeof(godot_variant *) * (__var_args.size() + 2));

	__args[0] = (godot_variant *) &__given_args[0];
	__args[1] = (godot_variant *) &__given_args[1];

	for (int i = 0; i < __var_args.size(); i++) {
		__args[i + 2] = (godot_variant *) &((array &) __var_args)[i];
	}

	variant __result;
	*(godot_variant *) &__result = gd::api->godot_method_bind_call(___mb.mb_call_group, ((const object *) this)->_owner, (const godot_variant **) __args, (__var_args.size() + 2), nullptr);

	gd::api->godot_variant_destroy((godot_variant *) &__given_args[0]);
	gd::api->godot_variant_destroy((godot_variant *) &__given_args[1]);

	return __result;
}

variant scene_tree::call_group_flags(const int64_t flags, const string group, const string method, const array& __var_args) {
	variant __given_args[3];
	gd::api->godot_variant_new_nil((godot_variant *) &__given_args[0]);
	gd::api->godot_variant_new_nil((godot_variant *) &__given_args[1]);
	gd::api->godot_variant_new_nil((godot_variant *) &__given_args[2]);

	__given_args[0] = flags;
	__given_args[1] = group;
	__given_args[2] = method;

	godot_variant **__args = (godot_variant **) alloca(sizeof(godot_variant *) * (__var_args.size() + 3));

	__args[0] = (godot_variant *) &__given_args[0];
	__args[1] = (godot_variant *) &__given_args[1];
	__args[2] = (godot_variant *) &__given_args[2];

	for (int i = 0; i < __var_args.size(); i++) {
		__args[i + 3] = (godot_variant *) &((array &) __var_args)[i];
	}

	variant __result;
	*(godot_variant *) &__result = gd::api->godot_method_bind_call(___mb.mb_call_group_flags, ((const object *) this)->_owner, (const godot_variant **) __args, (__var_args.size() + 3), nullptr);

	gd::api->godot_variant_destroy((godot_variant *) &__given_args[0]);
	gd::api->godot_variant_destroy((godot_variant *) &__given_args[1]);
	gd::api->godot_variant_destroy((godot_variant *) &__given_args[2]);

	return __result;
}

error scene_tree::change_scene(const string path_) {
	return (error) ___godot_icall_int_String(___mb.mb_change_scene, (const object *) this, path_);
}

error scene_tree::change_scene_to(const ref<packed_scene> packed_scene_) {
	return (error) ___godot_icall_int_Object(___mb.mb_change_scene_to, (const object *) this, packed_scene_.ptr());
}

ref<scene_tree_timer> scene_tree::create_timer(const real_t time_sec, const bool pause_mode_process) {
	return ref<scene_tree_timer>::__internal_constructor(___godot_icall_Object_float_bool(___mb.mb_create_timer, (const object *) this, time_sec, pause_mode_process));
}

ref<scene_tree_tween> scene_tree::create_tween() {
	return ref<scene_tree_tween>::__internal_constructor(___godot_icall_Object(___mb.mb_create_tween, (const object *) this));
}

node *scene_tree::get_current_scene() const {
	return (node *) ___godot_icall_Object(___mb.mb_get_current_scene, (const object *) this);
}

node *scene_tree::get_edited_scene_root() const {
	return (node *) ___godot_icall_Object(___mb.mb_get_edited_scene_root, (const object *) this);
}

int64_t scene_tree::get_frame() const {
	return ___godot_icall_int(___mb.mb_get_frame, (const object *) this);
}

ref<multiplayer_api> scene_tree::get_multiplayer() const {
	return ref<multiplayer_api>::__internal_constructor(___godot_icall_Object(___mb.mb_get_multiplayer, (const object *) this));
}

pool_int_array scene_tree::get_network_connected_peers() const {
	return ___godot_icall_PoolIntArray(___mb.mb_get_network_connected_peers, (const object *) this);
}

ref<networked_multiplayer_peer> scene_tree::get_network_peer() const {
	return ref<networked_multiplayer_peer>::__internal_constructor(___godot_icall_Object(___mb.mb_get_network_peer, (const object *) this));
}

int64_t scene_tree::get_network_unique_id() const {
	return ___godot_icall_int(___mb.mb_get_network_unique_id, (const object *) this);
}

int64_t scene_tree::get_node_count() const {
	return ___godot_icall_int(___mb.mb_get_node_count, (const object *) this);
}

array scene_tree::get_nodes_in_group(const string group) {
	return ___godot_icall_Array_String(___mb.mb_get_nodes_in_group, (const object *) this, group);
}

array scene_tree::get_processed_tweens() {
	return ___godot_icall_Array(___mb.mb_get_processed_tweens, (const object *) this);
}

viewport *scene_tree::get_root() const {
	return (viewport *) ___godot_icall_Object(___mb.mb_get_root, (const object *) this);
}

int64_t scene_tree::get_rpc_sender_id() const {
	return ___godot_icall_int(___mb.mb_get_rpc_sender_id, (const object *) this);
}

bool scene_tree::has_group(const string name) const {
	return ___godot_icall_bool_String(___mb.mb_has_group, (const object *) this, name);
}

bool scene_tree::has_network_peer() const {
	return ___godot_icall_bool(___mb.mb_has_network_peer, (const object *) this);
}

bool scene_tree::is_auto_accept_quit() const {
	return ___godot_icall_bool(___mb.mb_is_auto_accept_quit, (const object *) this);
}

bool scene_tree::is_debugging_collisions_hint() const {
	return ___godot_icall_bool(___mb.mb_is_debugging_collisions_hint, (const object *) this);
}

bool scene_tree::is_debugging_navigation_hint() const {
	return ___godot_icall_bool(___mb.mb_is_debugging_navigation_hint, (const object *) this);
}

bool scene_tree::is_input_handled() {
	return ___godot_icall_bool(___mb.mb_is_input_handled, (const object *) this);
}

bool scene_tree::is_multiplayer_poll_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_multiplayer_poll_enabled, (const object *) this);
}

bool scene_tree::is_network_server() const {
	return ___godot_icall_bool(___mb.mb_is_network_server, (const object *) this);
}

bool scene_tree::is_paused() const {
	return ___godot_icall_bool(___mb.mb_is_paused, (const object *) this);
}

bool scene_tree::is_physics_interpolation_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_physics_interpolation_enabled, (const object *) this);
}

bool scene_tree::is_quit_on_go_back() const {
	return ___godot_icall_bool(___mb.mb_is_quit_on_go_back, (const object *) this);
}

bool scene_tree::is_refusing_new_network_connections() const {
	return ___godot_icall_bool(___mb.mb_is_refusing_new_network_connections, (const object *) this);
}

bool scene_tree::is_using_font_oversampling() const {
	return ___godot_icall_bool(___mb.mb_is_using_font_oversampling, (const object *) this);
}

void scene_tree::notify_group(const string group, const int64_t notification) {
	___godot_icall_void_String_int(___mb.mb_notify_group, (const object *) this, group, notification);
}

void scene_tree::notify_group_flags(const int64_t call_flags, const string group, const int64_t notification) {
	___godot_icall_void_int_String_int(___mb.mb_notify_group_flags, (const object *) this, call_flags, group, notification);
}

void scene_tree::queue_delete(const object *obj) {
	___godot_icall_void_Object(___mb.mb_queue_delete, (const object *) this, obj);
}

void scene_tree::quit(const int64_t exit_code) {
	___godot_icall_void_int(___mb.mb_quit, (const object *) this, exit_code);
}

error scene_tree::reload_current_scene() {
	return (error) ___godot_icall_int(___mb.mb_reload_current_scene, (const object *) this);
}

void scene_tree::set_auto_accept_quit(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_auto_accept_quit, (const object *) this, enabled);
}

void scene_tree::set_current_scene(const node *child_node) {
	___godot_icall_void_Object(___mb.mb_set_current_scene, (const object *) this, child_node);
}

void scene_tree::set_debug_collisions_hint(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_debug_collisions_hint, (const object *) this, enable);
}

void scene_tree::set_debug_navigation_hint(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_debug_navigation_hint, (const object *) this, enable);
}

void scene_tree::set_edited_scene_root(const node *scene) {
	___godot_icall_void_Object(___mb.mb_set_edited_scene_root, (const object *) this, scene);
}

void scene_tree::set_group(const string group, const string property, const variant value) {
	___godot_icall_void_String_String_Variant(___mb.mb_set_group, (const object *) this, group, property, value);
}

void scene_tree::set_group_flags(const int64_t call_flags, const string group, const string property, const variant value) {
	___godot_icall_void_int_String_String_Variant(___mb.mb_set_group_flags, (const object *) this, call_flags, group, property, value);
}

void scene_tree::set_input_as_handled() {
	___godot_icall_void(___mb.mb_set_input_as_handled, (const object *) this);
}

void scene_tree::set_multiplayer(const ref<multiplayer_api> multiplayer) {
	___godot_icall_void_Object(___mb.mb_set_multiplayer, (const object *) this, multiplayer.ptr());
}

void scene_tree::set_multiplayer_poll_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_multiplayer_poll_enabled, (const object *) this, enabled);
}

void scene_tree::set_network_peer(const ref<networked_multiplayer_peer> peer) {
	___godot_icall_void_Object(___mb.mb_set_network_peer, (const object *) this, peer.ptr());
}

void scene_tree::set_pause(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_pause, (const object *) this, enable);
}

void scene_tree::set_physics_interpolation_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_physics_interpolation_enabled, (const object *) this, enabled);
}

void scene_tree::set_quit_on_go_back(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_quit_on_go_back, (const object *) this, enabled);
}

void scene_tree::set_refuse_new_network_connections(const bool refuse) {
	___godot_icall_void_bool(___mb.mb_set_refuse_new_network_connections, (const object *) this, refuse);
}

void scene_tree::set_screen_stretch(const int64_t mode, const int64_t aspect, const vector2 minsize, const real_t scale) {
	___godot_icall_void_int_int_Vector2_float(___mb.mb_set_screen_stretch, (const object *) this, mode, aspect, minsize, scale);
}

void scene_tree::set_use_font_oversampling(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_use_font_oversampling, (const object *) this, enable);
}

}