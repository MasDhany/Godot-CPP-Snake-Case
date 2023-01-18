#include "networked_multiplayer_peer.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


networked_multiplayer_peer::___method_bindings networked_multiplayer_peer::___mb = {};

void *networked_multiplayer_peer::_detail_class_tag = nullptr;

void networked_multiplayer_peer::___init_method_bindings() {
	___mb.mb_get_connection_status = gd::api->godot_method_bind_get_method("NetworkedMultiplayerPeer", "get_connection_status");
	___mb.mb_get_packet_peer = gd::api->godot_method_bind_get_method("NetworkedMultiplayerPeer", "get_packet_peer");
	___mb.mb_get_transfer_mode = gd::api->godot_method_bind_get_method("NetworkedMultiplayerPeer", "get_transfer_mode");
	___mb.mb_get_unique_id = gd::api->godot_method_bind_get_method("NetworkedMultiplayerPeer", "get_unique_id");
	___mb.mb_is_refusing_new_connections = gd::api->godot_method_bind_get_method("NetworkedMultiplayerPeer", "is_refusing_new_connections");
	___mb.mb_poll = gd::api->godot_method_bind_get_method("NetworkedMultiplayerPeer", "poll");
	___mb.mb_set_refuse_new_connections = gd::api->godot_method_bind_get_method("NetworkedMultiplayerPeer", "set_refuse_new_connections");
	___mb.mb_set_target_peer = gd::api->godot_method_bind_get_method("NetworkedMultiplayerPeer", "set_target_peer");
	___mb.mb_set_transfer_mode = gd::api->godot_method_bind_get_method("NetworkedMultiplayerPeer", "set_transfer_mode");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "NetworkedMultiplayerPeer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

networked_multiplayer_peer::ConnectionStatus networked_multiplayer_peer::get_connection_status() const {
	return (networked_multiplayer_peer::ConnectionStatus) ___godot_icall_int(___mb.mb_get_connection_status, (const object *) this);
}

int64_t networked_multiplayer_peer::get_packet_peer() const {
	return ___godot_icall_int(___mb.mb_get_packet_peer, (const object *) this);
}

networked_multiplayer_peer::TransferMode networked_multiplayer_peer::get_transfer_mode() const {
	return (networked_multiplayer_peer::TransferMode) ___godot_icall_int(___mb.mb_get_transfer_mode, (const object *) this);
}

int64_t networked_multiplayer_peer::get_unique_id() const {
	return ___godot_icall_int(___mb.mb_get_unique_id, (const object *) this);
}

bool networked_multiplayer_peer::is_refusing_new_connections() const {
	return ___godot_icall_bool(___mb.mb_is_refusing_new_connections, (const object *) this);
}

void networked_multiplayer_peer::poll() {
	___godot_icall_void(___mb.mb_poll, (const object *) this);
}

void networked_multiplayer_peer::set_refuse_new_connections(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_refuse_new_connections, (const object *) this, enable);
}

void networked_multiplayer_peer::set_target_peer(const int64_t id) {
	___godot_icall_void_int(___mb.mb_set_target_peer, (const object *) this, id);
}

void networked_multiplayer_peer::set_transfer_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_transfer_mode, (const object *) this, mode);
}

}