#include "networked_multiplayer_enet.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "crypto_key.hpp"
#include "x509_certificate.hpp"


namespace gd {


networked_multiplayer_enet::___method_bindings networked_multiplayer_enet::___mb = {};

void *networked_multiplayer_enet::_detail_class_tag = nullptr;

void networked_multiplayer_enet::___init_method_bindings() {
	___mb.mb_close_connection = gd::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "close_connection");
	___mb.mb_create_client = gd::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "create_client");
	___mb.mb_create_server = gd::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "create_server");
	___mb.mb_disconnect_peer = gd::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "disconnect_peer");
	___mb.mb_get_channel_count = gd::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "get_channel_count");
	___mb.mb_get_compression_mode = gd::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "get_compression_mode");
	___mb.mb_get_dtls_hostname = gd::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "get_dtls_hostname");
	___mb.mb_get_last_packet_channel = gd::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "get_last_packet_channel");
	___mb.mb_get_packet_channel = gd::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "get_packet_channel");
	___mb.mb_get_peer_address = gd::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "get_peer_address");
	___mb.mb_get_peer_port = gd::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "get_peer_port");
	___mb.mb_get_transfer_channel = gd::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "get_transfer_channel");
	___mb.mb_is_always_ordered = gd::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "is_always_ordered");
	___mb.mb_is_dtls_enabled = gd::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "is_dtls_enabled");
	___mb.mb_is_dtls_verify_enabled = gd::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "is_dtls_verify_enabled");
	___mb.mb_is_server_relay_enabled = gd::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "is_server_relay_enabled");
	___mb.mb_set_always_ordered = gd::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "set_always_ordered");
	___mb.mb_set_bind_ip = gd::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "set_bind_ip");
	___mb.mb_set_channel_count = gd::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "set_channel_count");
	___mb.mb_set_compression_mode = gd::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "set_compression_mode");
	___mb.mb_set_dtls_certificate = gd::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "set_dtls_certificate");
	___mb.mb_set_dtls_enabled = gd::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "set_dtls_enabled");
	___mb.mb_set_dtls_hostname = gd::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "set_dtls_hostname");
	___mb.mb_set_dtls_key = gd::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "set_dtls_key");
	___mb.mb_set_dtls_verify_enabled = gd::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "set_dtls_verify_enabled");
	___mb.mb_set_peer_timeout = gd::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "set_peer_timeout");
	___mb.mb_set_server_relay_enabled = gd::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "set_server_relay_enabled");
	___mb.mb_set_transfer_channel = gd::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "set_transfer_channel");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "NetworkedMultiplayerENet");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

networked_multiplayer_enet *networked_multiplayer_enet::_new()
{
	return (networked_multiplayer_enet *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"NetworkedMultiplayerENet")());
}
void networked_multiplayer_enet::close_connection(const int64_t wait_usec) {
	___godot_icall_void_int(___mb.mb_close_connection, (const object *) this, wait_usec);
}

error networked_multiplayer_enet::create_client(const string address, const int64_t port, const int64_t in_bandwidth, const int64_t out_bandwidth, const int64_t client_port) {
	return (error) ___godot_icall_int_String_int_int_int_int(___mb.mb_create_client, (const object *) this, address, port, in_bandwidth, out_bandwidth, client_port);
}

error networked_multiplayer_enet::create_server(const int64_t port, const int64_t max_clients, const int64_t in_bandwidth, const int64_t out_bandwidth) {
	return (error) ___godot_icall_int_int_int_int_int(___mb.mb_create_server, (const object *) this, port, max_clients, in_bandwidth, out_bandwidth);
}

void networked_multiplayer_enet::disconnect_peer(const int64_t id, const bool now) {
	___godot_icall_void_int_bool(___mb.mb_disconnect_peer, (const object *) this, id, now);
}

int64_t networked_multiplayer_enet::get_channel_count() const {
	return ___godot_icall_int(___mb.mb_get_channel_count, (const object *) this);
}

networked_multiplayer_enet::CompressionMode networked_multiplayer_enet::get_compression_mode() const {
	return (networked_multiplayer_enet::CompressionMode) ___godot_icall_int(___mb.mb_get_compression_mode, (const object *) this);
}

string networked_multiplayer_enet::get_dtls_hostname() const {
	return ___godot_icall_String(___mb.mb_get_dtls_hostname, (const object *) this);
}

int64_t networked_multiplayer_enet::get_last_packet_channel() const {
	return ___godot_icall_int(___mb.mb_get_last_packet_channel, (const object *) this);
}

int64_t networked_multiplayer_enet::get_packet_channel() const {
	return ___godot_icall_int(___mb.mb_get_packet_channel, (const object *) this);
}

string networked_multiplayer_enet::get_peer_address(const int64_t id) const {
	return ___godot_icall_String_int(___mb.mb_get_peer_address, (const object *) this, id);
}

int64_t networked_multiplayer_enet::get_peer_port(const int64_t id) const {
	return ___godot_icall_int_int(___mb.mb_get_peer_port, (const object *) this, id);
}

int64_t networked_multiplayer_enet::get_transfer_channel() const {
	return ___godot_icall_int(___mb.mb_get_transfer_channel, (const object *) this);
}

bool networked_multiplayer_enet::is_always_ordered() const {
	return ___godot_icall_bool(___mb.mb_is_always_ordered, (const object *) this);
}

bool networked_multiplayer_enet::is_dtls_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_dtls_enabled, (const object *) this);
}

bool networked_multiplayer_enet::is_dtls_verify_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_dtls_verify_enabled, (const object *) this);
}

bool networked_multiplayer_enet::is_server_relay_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_server_relay_enabled, (const object *) this);
}

void networked_multiplayer_enet::set_always_ordered(const bool ordered) {
	___godot_icall_void_bool(___mb.mb_set_always_ordered, (const object *) this, ordered);
}

void networked_multiplayer_enet::set_bind_ip(const string ip_) {
	___godot_icall_void_String(___mb.mb_set_bind_ip, (const object *) this, ip_);
}

void networked_multiplayer_enet::set_channel_count(const int64_t channels) {
	___godot_icall_void_int(___mb.mb_set_channel_count, (const object *) this, channels);
}

void networked_multiplayer_enet::set_compression_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_compression_mode, (const object *) this, mode);
}

void networked_multiplayer_enet::set_dtls_certificate(const ref<x509_certificate> certificate) {
	___godot_icall_void_Object(___mb.mb_set_dtls_certificate, (const object *) this, certificate.ptr());
}

void networked_multiplayer_enet::set_dtls_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_dtls_enabled, (const object *) this, enabled);
}

void networked_multiplayer_enet::set_dtls_hostname(const string hostname) {
	___godot_icall_void_String(___mb.mb_set_dtls_hostname, (const object *) this, hostname);
}

void networked_multiplayer_enet::set_dtls_key(const ref<crypto_key> key) {
	___godot_icall_void_Object(___mb.mb_set_dtls_key, (const object *) this, key.ptr());
}

void networked_multiplayer_enet::set_dtls_verify_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_dtls_verify_enabled, (const object *) this, enabled);
}

void networked_multiplayer_enet::set_peer_timeout(const int64_t id, const int64_t timeout_limit, const int64_t timeout_min, const int64_t timeout_max) {
	___godot_icall_void_int_int_int_int(___mb.mb_set_peer_timeout, (const object *) this, id, timeout_limit, timeout_min, timeout_max);
}

void networked_multiplayer_enet::set_server_relay_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_server_relay_enabled, (const object *) this, enabled);
}

void networked_multiplayer_enet::set_transfer_channel(const int64_t channel) {
	___godot_icall_void_int(___mb.mb_set_transfer_channel, (const object *) this, channel);
}

}