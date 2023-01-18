#ifndef GODOT_CPP_WEBRTCPEERCONNECTION_HPP
#define GODOT_CPP_WEBRTCPEERCONNECTION_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "web_rtcpeer_connection.hpp"

#include "reference.hpp"
namespace gd {

class web_rtcdata_channel;

class web_rtcpeer_connection : public reference {
	struct ___method_bindings {
		godot_method_bind *mb_add_ice_candidate;
		godot_method_bind *mb_close;
		godot_method_bind *mb_create_data_channel;
		godot_method_bind *mb_create_offer;
		godot_method_bind *mb_get_connection_state;
		godot_method_bind *mb_initialize;
		godot_method_bind *mb_poll;
		godot_method_bind *mb_set_local_description;
		godot_method_bind *mb_set_remote_description;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "WebRTCPeerConnection"; }
	static inline const char *___get_godot_class_name() { return (const char *) "WebRTCPeerConnection"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum ConnectionState {
		STATE_NEW = 0,
		STATE_CONNECTING = 1,
		STATE_CONNECTED = 2,
		STATE_DISCONNECTED = 3,
		STATE_FAILED = 4,
		STATE_CLOSED = 5,
	};

	// constants


	static web_rtcpeer_connection *_new();

	// methods
	error add_ice_candidate(const string media, const int64_t index, const string name);
	void close();
	ref<web_rtcdata_channel> create_data_channel(const string label_, const dictionary options = {});
	error create_offer();
	web_rtcpeer_connection::ConnectionState get_connection_state() const;
	error initialize(const dictionary configuration = {});
	error poll();
	error set_local_description(const string type, const string sdp);
	error set_remote_description(const string type, const string sdp);

};

}

#endif