#ifndef GODOT_CPP_DTLSSERVER_HPP
#define GODOT_CPP_DTLSSERVER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "reference.hpp"
namespace gd {

class crypto_key;
class packet_peer_dtls;
class packet_peer_udp;
class x509_certificate;

class dtlsserver : public reference {
	struct ___method_bindings {
		godot_method_bind *mb_setup;
		godot_method_bind *mb_take_connection;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "DTLSServer"; }
	static inline const char *___get_godot_class_name() { return (const char *) "DTLSServer"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static dtlsserver *_new();

	// methods
	error setup(const ref<crypto_key> key, const ref<x509_certificate> certificate, const ref<x509_certificate> chain = nullptr);
	ref<packet_peer_dtls> take_connection(const ref<packet_peer_udp> udp_peer);

};

}

#endif