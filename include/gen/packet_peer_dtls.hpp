#ifndef GODOT_CPP_PACKETPEERDTLS_HPP
#define GODOT_CPP_PACKETPEERDTLS_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "packet_peer_dtls.hpp"

#include "packet_peer.hpp"
namespace gd {

class packet_peer_udp;
class x509_certificate;

class packet_peer_dtls : public packet_peer {
	struct ___method_bindings {
		godot_method_bind *mb_connect_to_peer;
		godot_method_bind *mb_disconnect_from_peer;
		godot_method_bind *mb_get_status;
		godot_method_bind *mb_poll;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "PacketPeerDTLS"; }
	static inline const char *___get_godot_class_name() { return (const char *) "PacketPeerDTLS"; }
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


	static packet_peer_dtls *_new();

	// methods
	error connect_to_peer(const ref<packet_peer_udp> packet_peer_, const bool validate_certs = true, const string for_hostname = "", const ref<x509_certificate> valid_certificate = nullptr);
	void disconnect_from_peer();
	packet_peer_dtls::Status get_status() const;
	void poll();

};

}

#endif