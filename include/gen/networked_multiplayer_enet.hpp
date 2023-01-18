#ifndef GODOT_CPP_NETWORKEDMULTIPLAYERENET_HPP
#define GODOT_CPP_NETWORKEDMULTIPLAYERENET_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "networked_multiplayer_enet.hpp"

#include "networked_multiplayer_peer.hpp"
namespace gd {

class crypto_key;
class x509_certificate;

class networked_multiplayer_enet : public networked_multiplayer_peer {
	struct ___method_bindings {
		godot_method_bind *mb_close_connection;
		godot_method_bind *mb_create_client;
		godot_method_bind *mb_create_server;
		godot_method_bind *mb_disconnect_peer;
		godot_method_bind *mb_get_channel_count;
		godot_method_bind *mb_get_compression_mode;
		godot_method_bind *mb_get_dtls_hostname;
		godot_method_bind *mb_get_last_packet_channel;
		godot_method_bind *mb_get_packet_channel;
		godot_method_bind *mb_get_peer_address;
		godot_method_bind *mb_get_peer_port;
		godot_method_bind *mb_get_transfer_channel;
		godot_method_bind *mb_is_always_ordered;
		godot_method_bind *mb_is_dtls_enabled;
		godot_method_bind *mb_is_dtls_verify_enabled;
		godot_method_bind *mb_is_server_relay_enabled;
		godot_method_bind *mb_set_always_ordered;
		godot_method_bind *mb_set_bind_ip;
		godot_method_bind *mb_set_channel_count;
		godot_method_bind *mb_set_compression_mode;
		godot_method_bind *mb_set_dtls_certificate;
		godot_method_bind *mb_set_dtls_enabled;
		godot_method_bind *mb_set_dtls_hostname;
		godot_method_bind *mb_set_dtls_key;
		godot_method_bind *mb_set_dtls_verify_enabled;
		godot_method_bind *mb_set_peer_timeout;
		godot_method_bind *mb_set_server_relay_enabled;
		godot_method_bind *mb_set_transfer_channel;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "NetworkedMultiplayerENet"; }
	static inline const char *___get_godot_class_name() { return (const char *) "NetworkedMultiplayerENet"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum CompressionMode {
		COMPRESS_NONE = 0,
		COMPRESS_RANGE_CODER = 1,
		COMPRESS_FASTLZ = 2,
		COMPRESS_ZLIB = 3,
		COMPRESS_ZSTD = 4,
	};

	// constants


	static networked_multiplayer_enet *_new();

	// methods
	void close_connection(const int64_t wait_usec = 100);
	error create_client(const string address, const int64_t port, const int64_t in_bandwidth = 0, const int64_t out_bandwidth = 0, const int64_t client_port = 0);
	error create_server(const int64_t port, const int64_t max_clients = 32, const int64_t in_bandwidth = 0, const int64_t out_bandwidth = 0);
	void disconnect_peer(const int64_t id, const bool now = false);
	int64_t get_channel_count() const;
	networked_multiplayer_enet::CompressionMode get_compression_mode() const;
	string get_dtls_hostname() const;
	int64_t get_last_packet_channel() const;
	int64_t get_packet_channel() const;
	string get_peer_address(const int64_t id) const;
	int64_t get_peer_port(const int64_t id) const;
	int64_t get_transfer_channel() const;
	bool is_always_ordered() const;
	bool is_dtls_enabled() const;
	bool is_dtls_verify_enabled() const;
	bool is_server_relay_enabled() const;
	void set_always_ordered(const bool ordered);
	void set_bind_ip(const string ip_);
	void set_channel_count(const int64_t channels);
	void set_compression_mode(const int64_t mode);
	void set_dtls_certificate(const ref<x509_certificate> certificate);
	void set_dtls_enabled(const bool enabled);
	void set_dtls_hostname(const string hostname);
	void set_dtls_key(const ref<crypto_key> key);
	void set_dtls_verify_enabled(const bool enabled);
	void set_peer_timeout(const int64_t id, const int64_t timeout_limit, const int64_t timeout_min, const int64_t timeout_max);
	void set_server_relay_enabled(const bool enabled);
	void set_transfer_channel(const int64_t channel);

};

}

#endif