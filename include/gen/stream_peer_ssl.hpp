#ifndef GODOT_CPP_STREAMPEERSSL_HPP
#define GODOT_CPP_STREAMPEERSSL_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "stream_peer_ssl.hpp"

#include "stream_peer.hpp"
namespace gd {

class crypto_key;
class stream_peer;
class x509_certificate;

class stream_peer_ssl : public stream_peer {
	struct ___method_bindings {
		godot_method_bind *mb_accept_stream;
		godot_method_bind *mb_connect_to_stream;
		godot_method_bind *mb_disconnect_from_stream;
		godot_method_bind *mb_get_status;
		godot_method_bind *mb_is_blocking_handshake_enabled;
		godot_method_bind *mb_poll;
		godot_method_bind *mb_set_blocking_handshake_enabled;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "StreamPeerSSL"; }
	static inline const char *___get_godot_class_name() { return (const char *) "StreamPeerSSL"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Status {
		STATUS_DISCONNECTED = 0,
		STATUS_HANDSHAKING = 1,
		STATUS_CONNECTED = 2,
		STATUS_ERROR = 3,
		STATUS_ERROR_HOSTNAME_MISMATCH = 4,
	};

	// constants


	static stream_peer_ssl *_new();

	// methods
	error accept_stream(const ref<stream_peer> stream, const ref<crypto_key> private_key, const ref<x509_certificate> certificate, const ref<x509_certificate> chain = nullptr);
	error connect_to_stream(const ref<stream_peer> stream, const bool validate_certs = false, const string for_hostname = "", const ref<x509_certificate> valid_certificate = nullptr);
	void disconnect_from_stream();
	stream_peer_ssl::Status get_status() const;
	bool is_blocking_handshake_enabled() const;
	void poll();
	void set_blocking_handshake_enabled(const bool enabled);

};

}

#endif