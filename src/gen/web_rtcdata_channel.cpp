#include "web_rtcdata_channel.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


web_rtcdata_channel::___method_bindings web_rtcdata_channel::___mb = {};

void *web_rtcdata_channel::_detail_class_tag = nullptr;

void web_rtcdata_channel::___init_method_bindings() {
	___mb.mb_close = gd::api->godot_method_bind_get_method("WebRTCDataChannel", "close");
	___mb.mb_get_buffered_amount = gd::api->godot_method_bind_get_method("WebRTCDataChannel", "get_buffered_amount");
	___mb.mb_get_id = gd::api->godot_method_bind_get_method("WebRTCDataChannel", "get_id");
	___mb.mb_get_label = gd::api->godot_method_bind_get_method("WebRTCDataChannel", "get_label");
	___mb.mb_get_max_packet_life_time = gd::api->godot_method_bind_get_method("WebRTCDataChannel", "get_max_packet_life_time");
	___mb.mb_get_max_retransmits = gd::api->godot_method_bind_get_method("WebRTCDataChannel", "get_max_retransmits");
	___mb.mb_get_protocol = gd::api->godot_method_bind_get_method("WebRTCDataChannel", "get_protocol");
	___mb.mb_get_ready_state = gd::api->godot_method_bind_get_method("WebRTCDataChannel", "get_ready_state");
	___mb.mb_get_write_mode = gd::api->godot_method_bind_get_method("WebRTCDataChannel", "get_write_mode");
	___mb.mb_is_negotiated = gd::api->godot_method_bind_get_method("WebRTCDataChannel", "is_negotiated");
	___mb.mb_is_ordered = gd::api->godot_method_bind_get_method("WebRTCDataChannel", "is_ordered");
	___mb.mb_poll = gd::api->godot_method_bind_get_method("WebRTCDataChannel", "poll");
	___mb.mb_set_write_mode = gd::api->godot_method_bind_get_method("WebRTCDataChannel", "set_write_mode");
	___mb.mb_was_string_packet = gd::api->godot_method_bind_get_method("WebRTCDataChannel", "was_string_packet");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "WebRTCDataChannel");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void web_rtcdata_channel::close() {
	___godot_icall_void(___mb.mb_close, (const object *) this);
}

int64_t web_rtcdata_channel::get_buffered_amount() const {
	return ___godot_icall_int(___mb.mb_get_buffered_amount, (const object *) this);
}

int64_t web_rtcdata_channel::get_id() const {
	return ___godot_icall_int(___mb.mb_get_id, (const object *) this);
}

string web_rtcdata_channel::get_label() const {
	return ___godot_icall_String(___mb.mb_get_label, (const object *) this);
}

int64_t web_rtcdata_channel::get_max_packet_life_time() const {
	return ___godot_icall_int(___mb.mb_get_max_packet_life_time, (const object *) this);
}

int64_t web_rtcdata_channel::get_max_retransmits() const {
	return ___godot_icall_int(___mb.mb_get_max_retransmits, (const object *) this);
}

string web_rtcdata_channel::get_protocol() const {
	return ___godot_icall_String(___mb.mb_get_protocol, (const object *) this);
}

web_rtcdata_channel::ChannelState web_rtcdata_channel::get_ready_state() const {
	return (web_rtcdata_channel::ChannelState) ___godot_icall_int(___mb.mb_get_ready_state, (const object *) this);
}

web_rtcdata_channel::WriteMode web_rtcdata_channel::get_write_mode() const {
	return (web_rtcdata_channel::WriteMode) ___godot_icall_int(___mb.mb_get_write_mode, (const object *) this);
}

bool web_rtcdata_channel::is_negotiated() const {
	return ___godot_icall_bool(___mb.mb_is_negotiated, (const object *) this);
}

bool web_rtcdata_channel::is_ordered() const {
	return ___godot_icall_bool(___mb.mb_is_ordered, (const object *) this);
}

error web_rtcdata_channel::poll() {
	return (error) ___godot_icall_int(___mb.mb_poll, (const object *) this);
}

void web_rtcdata_channel::set_write_mode(const int64_t write_mode) {
	___godot_icall_void_int(___mb.mb_set_write_mode, (const object *) this, write_mode);
}

bool web_rtcdata_channel::was_string_packet() const {
	return ___godot_icall_bool(___mb.mb_was_string_packet, (const object *) this);
}

}