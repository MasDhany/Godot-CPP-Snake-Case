#ifndef GODOT_CPP_WEBSOCKETCLIENT_HPP
#define GODOT_CPP_WEBSOCKETCLIENT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "web_socket_multiplayer_peer.hpp"
namespace gd {

class x509_certificate;

class web_socket_client : public web_socket_multiplayer_peer {
	struct ___method_bindings {
		godot_method_bind *mb_connect_to_url;
		godot_method_bind *mb_disconnect_from_host;
		godot_method_bind *mb_get_connected_host;
		godot_method_bind *mb_get_connected_port;
		godot_method_bind *mb_get_trusted_ssl_certificate;
		godot_method_bind *mb_is_verify_ssl_enabled;
		godot_method_bind *mb_set_trusted_ssl_certificate;
		godot_method_bind *mb_set_verify_ssl_enabled;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "WebSocketClient"; }
	static inline const char *___get_godot_class_name() { return (const char *) "WebSocketClient"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static web_socket_client *_new();

	// methods
	error connect_to_url(const string url, const pool_string_array protocols = pool_string_array(), const bool gd_mp_api = false, const pool_string_array custom_headers = pool_string_array());
	void disconnect_from_host(const int64_t code = 1000, const string reason = "");
	string get_connected_host() const;
	int64_t get_connected_port() const;
	ref<x509_certificate> get_trusted_ssl_certificate() const;
	bool is_verify_ssl_enabled() const;
	void set_trusted_ssl_certificate(const ref<x509_certificate> certificate);
	void set_verify_ssl_enabled(const bool enabled);

};

}

#endif