#ifndef GODOT_CPP_WEBRTCDATACHANNEL_HPP
#define GODOT_CPP_WEBRTCDATACHANNEL_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "web_rtcdata_channel.hpp"

#include "packet_peer.hpp"
namespace gd {


class web_rtcdata_channel : public packet_peer {
	struct ___method_bindings {
		godot_method_bind *mb_close;
		godot_method_bind *mb_get_buffered_amount;
		godot_method_bind *mb_get_id;
		godot_method_bind *mb_get_label;
		godot_method_bind *mb_get_max_packet_life_time;
		godot_method_bind *mb_get_max_retransmits;
		godot_method_bind *mb_get_protocol;
		godot_method_bind *mb_get_ready_state;
		godot_method_bind *mb_get_write_mode;
		godot_method_bind *mb_is_negotiated;
		godot_method_bind *mb_is_ordered;
		godot_method_bind *mb_poll;
		godot_method_bind *mb_set_write_mode;
		godot_method_bind *mb_was_string_packet;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "WebRTCDataChannel"; }
	static inline const char *___get_godot_class_name() { return (const char *) "WebRTCDataChannel"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum WriteMode {
		WRITE_MODE_TEXT = 0,
		WRITE_MODE_BINARY = 1,
	};
	enum ChannelState {
		STATE_CONNECTING = 0,
		STATE_OPEN = 1,
		STATE_CLOSING = 2,
		STATE_CLOSED = 3,
	};

	// constants

	// methods
	void close();
	int64_t get_buffered_amount() const;
	int64_t get_id() const;
	string get_label() const;
	int64_t get_max_packet_life_time() const;
	int64_t get_max_retransmits() const;
	string get_protocol() const;
	web_rtcdata_channel::ChannelState get_ready_state() const;
	web_rtcdata_channel::WriteMode get_write_mode() const;
	bool is_negotiated() const;
	bool is_ordered() const;
	error poll();
	void set_write_mode(const int64_t write_mode);
	bool was_string_packet() const;

};

}

#endif