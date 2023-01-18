#ifndef GODOT_CPP_WEBSOCKETSERVER_HPP
#define GODOT_CPP_WEBSOCKETSERVER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "web_socket_multiplayer_peer.hpp"
namespace gd {

class crypto_key;
class x509_certificate;

class web_socket_server : public web_socket_multiplayer_peer {
	struct ___method_bindings {
		godot_method_bind *mb_disconnect_peer;
		godot_method_bind *mb_get_bind_ip;
		godot_method_bind *mb_get_ca_chain;
		godot_method_bind *mb_get_handshake_timeout;
		godot_method_bind *mb_get_peer_address;
		godot_method_bind *mb_get_peer_port;
		godot_method_bind *mb_get_private_key;
		godot_method_bind *mb_get_ssl_certificate;
		godot_method_bind *mb_has_peer;
		godot_method_bind *mb_is_listening;
		godot_method_bind *mb_listen;
		godot_method_bind *mb_set_bind_ip;
		godot_method_bind *mb_set_ca_chain;
		godot_method_bind *mb_set_extra_headers;
		godot_method_bind *mb_set_handshake_timeout;
		godot_method_bind *mb_set_private_key;
		godot_method_bind *mb_set_ssl_certificate;
		godot_method_bind *mb_stop;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "WebSocketServer"; }
	static inline const char *___get_godot_class_name() { return (const char *) "WebSocketServer"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static web_socket_server *_new();

	// methods
	void disconnect_peer(const int64_t id, const int64_t code = 1000, const string reason = "");
	string get_bind_ip() const;
	ref<x509_certificate> get_ca_chain() const;
	real_t get_handshake_timeout() const;
	string get_peer_address(const int64_t id) const;
	int64_t get_peer_port(const int64_t id) const;
	ref<crypto_key> get_private_key() const;
	ref<x509_certificate> get_ssl_certificate() const;
	bool has_peer(const int64_t id) const;
	bool is_listening() const;
	error listen(const int64_t port, const pool_string_array protocols = pool_string_array(), const bool gd_mp_api = false);
	void set_bind_ip(const string ip_);
	void set_ca_chain(const ref<x509_certificate> ca_chain);
	void set_extra_headers(const pool_string_array headers = pool_string_array());
	void set_handshake_timeout(const real_t timeout);
	void set_private_key(const ref<crypto_key> key);
	void set_ssl_certificate(const ref<x509_certificate> certificate);
	void stop();

};

}

#endif