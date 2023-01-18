#include "multiplayer_api.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "networked_multiplayer_peer.hpp"
#include "node.hpp"


namespace gd {


multiplayer_api::___method_bindings multiplayer_api::___mb = {};

void *multiplayer_api::_detail_class_tag = nullptr;

void multiplayer_api::___init_method_bindings() {
	___mb.mb__add_peer = gd::api->godot_method_bind_get_method("MultiplayerAPI", "_add_peer");
	___mb.mb__connected_to_server = gd::api->godot_method_bind_get_method("MultiplayerAPI", "_connected_to_server");
	___mb.mb__connection_failed = gd::api->godot_method_bind_get_method("MultiplayerAPI", "_connection_failed");
	___mb.mb__del_peer = gd::api->godot_method_bind_get_method("MultiplayerAPI", "_del_peer");
	___mb.mb__server_disconnected = gd::api->godot_method_bind_get_method("MultiplayerAPI", "_server_disconnected");
	___mb.mb_clear = gd::api->godot_method_bind_get_method("MultiplayerAPI", "clear");
	___mb.mb_get_network_connected_peers = gd::api->godot_method_bind_get_method("MultiplayerAPI", "get_network_connected_peers");
	___mb.mb_get_network_peer = gd::api->godot_method_bind_get_method("MultiplayerAPI", "get_network_peer");
	___mb.mb_get_network_unique_id = gd::api->godot_method_bind_get_method("MultiplayerAPI", "get_network_unique_id");
	___mb.mb_get_root_node = gd::api->godot_method_bind_get_method("MultiplayerAPI", "get_root_node");
	___mb.mb_get_rpc_sender_id = gd::api->godot_method_bind_get_method("MultiplayerAPI", "get_rpc_sender_id");
	___mb.mb_has_network_peer = gd::api->godot_method_bind_get_method("MultiplayerAPI", "has_network_peer");
	___mb.mb_is_network_server = gd::api->godot_method_bind_get_method("MultiplayerAPI", "is_network_server");
	___mb.mb_is_object_decoding_allowed = gd::api->godot_method_bind_get_method("MultiplayerAPI", "is_object_decoding_allowed");
	___mb.mb_is_refusing_new_network_connections = gd::api->godot_method_bind_get_method("MultiplayerAPI", "is_refusing_new_network_connections");
	___mb.mb_poll = gd::api->godot_method_bind_get_method("MultiplayerAPI", "poll");
	___mb.mb_send_bytes = gd::api->godot_method_bind_get_method("MultiplayerAPI", "send_bytes");
	___mb.mb_set_allow_object_decoding = gd::api->godot_method_bind_get_method("MultiplayerAPI", "set_allow_object_decoding");
	___mb.mb_set_network_peer = gd::api->godot_method_bind_get_method("MultiplayerAPI", "set_network_peer");
	___mb.mb_set_refuse_new_network_connections = gd::api->godot_method_bind_get_method("MultiplayerAPI", "set_refuse_new_network_connections");
	___mb.mb_set_root_node = gd::api->godot_method_bind_get_method("MultiplayerAPI", "set_root_node");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "MultiplayerAPI");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

multiplayer_api *multiplayer_api::_new()
{
	return (multiplayer_api *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"MultiplayerAPI")());
}
void multiplayer_api::_add_peer(const int64_t id) {
	___godot_icall_void_int(___mb.mb__add_peer, (const object *) this, id);
}

void multiplayer_api::_connected_to_server() {
	___godot_icall_void(___mb.mb__connected_to_server, (const object *) this);
}

void multiplayer_api::_connection_failed() {
	___godot_icall_void(___mb.mb__connection_failed, (const object *) this);
}

void multiplayer_api::_del_peer(const int64_t id) {
	___godot_icall_void_int(___mb.mb__del_peer, (const object *) this, id);
}

void multiplayer_api::_server_disconnected() {
	___godot_icall_void(___mb.mb__server_disconnected, (const object *) this);
}

void multiplayer_api::clear() {
	___godot_icall_void(___mb.mb_clear, (const object *) this);
}

pool_int_array multiplayer_api::get_network_connected_peers() const {
	return ___godot_icall_PoolIntArray(___mb.mb_get_network_connected_peers, (const object *) this);
}

ref<networked_multiplayer_peer> multiplayer_api::get_network_peer() const {
	return ref<networked_multiplayer_peer>::__internal_constructor(___godot_icall_Object(___mb.mb_get_network_peer, (const object *) this));
}

int64_t multiplayer_api::get_network_unique_id() const {
	return ___godot_icall_int(___mb.mb_get_network_unique_id, (const object *) this);
}

node *multiplayer_api::get_root_node() {
	return (node *) ___godot_icall_Object(___mb.mb_get_root_node, (const object *) this);
}

int64_t multiplayer_api::get_rpc_sender_id() const {
	return ___godot_icall_int(___mb.mb_get_rpc_sender_id, (const object *) this);
}

bool multiplayer_api::has_network_peer() const {
	return ___godot_icall_bool(___mb.mb_has_network_peer, (const object *) this);
}

bool multiplayer_api::is_network_server() const {
	return ___godot_icall_bool(___mb.mb_is_network_server, (const object *) this);
}

bool multiplayer_api::is_object_decoding_allowed() const {
	return ___godot_icall_bool(___mb.mb_is_object_decoding_allowed, (const object *) this);
}

bool multiplayer_api::is_refusing_new_network_connections() const {
	return ___godot_icall_bool(___mb.mb_is_refusing_new_network_connections, (const object *) this);
}

void multiplayer_api::poll() {
	___godot_icall_void(___mb.mb_poll, (const object *) this);
}

error multiplayer_api::send_bytes(const pool_byte_array bytes, const int64_t id, const int64_t mode) {
	return (error) ___godot_icall_int_PoolByteArray_int_int(___mb.mb_send_bytes, (const object *) this, bytes, id, mode);
}

void multiplayer_api::set_allow_object_decoding(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_allow_object_decoding, (const object *) this, enable);
}

void multiplayer_api::set_network_peer(const ref<networked_multiplayer_peer> peer) {
	___godot_icall_void_Object(___mb.mb_set_network_peer, (const object *) this, peer.ptr());
}

void multiplayer_api::set_refuse_new_network_connections(const bool refuse) {
	___godot_icall_void_bool(___mb.mb_set_refuse_new_network_connections, (const object *) this, refuse);
}

void multiplayer_api::set_root_node(const node *node_) {
	___godot_icall_void_Object(___mb.mb_set_root_node, (const object *) this, node_);
}

}