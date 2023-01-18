#ifndef GODOT_CPP_WEBRTCPEERCONNECTIONGDNATIVE_HPP
#define GODOT_CPP_WEBRTCPEERCONNECTIONGDNATIVE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "web_rtcpeer_connection.hpp"
namespace gd {


class web_rtcpeer_connection_gdnative : public web_rtcpeer_connection {
	struct ___method_bindings {
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "WebRTCPeerConnectionGDNative"; }
	static inline const char *___get_godot_class_name() { return (const char *) "WebRTCPeerConnectionGDNative"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static web_rtcpeer_connection_gdnative *_new();

	// methods

};

}

#endif