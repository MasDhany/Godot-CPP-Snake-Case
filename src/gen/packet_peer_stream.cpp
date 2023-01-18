#include "packet_peer_stream.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "stream_peer.hpp"


namespace gd {


packet_peer_stream::___method_bindings packet_peer_stream::___mb = {};

void *packet_peer_stream::_detail_class_tag = nullptr;

void packet_peer_stream::___init_method_bindings() {
	___mb.mb_get_input_buffer_max_size = gd::api->godot_method_bind_get_method("PacketPeerStream", "get_input_buffer_max_size");
	___mb.mb_get_output_buffer_max_size = gd::api->godot_method_bind_get_method("PacketPeerStream", "get_output_buffer_max_size");
	___mb.mb_get_stream_peer = gd::api->godot_method_bind_get_method("PacketPeerStream", "get_stream_peer");
	___mb.mb_set_input_buffer_max_size = gd::api->godot_method_bind_get_method("PacketPeerStream", "set_input_buffer_max_size");
	___mb.mb_set_output_buffer_max_size = gd::api->godot_method_bind_get_method("PacketPeerStream", "set_output_buffer_max_size");
	___mb.mb_set_stream_peer = gd::api->godot_method_bind_get_method("PacketPeerStream", "set_stream_peer");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "PacketPeerStream");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

packet_peer_stream *packet_peer_stream::_new()
{
	return (packet_peer_stream *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"PacketPeerStream")());
}
int64_t packet_peer_stream::get_input_buffer_max_size() const {
	return ___godot_icall_int(___mb.mb_get_input_buffer_max_size, (const object *) this);
}

int64_t packet_peer_stream::get_output_buffer_max_size() const {
	return ___godot_icall_int(___mb.mb_get_output_buffer_max_size, (const object *) this);
}

ref<stream_peer> packet_peer_stream::get_stream_peer() const {
	return ref<stream_peer>::__internal_constructor(___godot_icall_Object(___mb.mb_get_stream_peer, (const object *) this));
}

void packet_peer_stream::set_input_buffer_max_size(const int64_t max_size_bytes) {
	___godot_icall_void_int(___mb.mb_set_input_buffer_max_size, (const object *) this, max_size_bytes);
}

void packet_peer_stream::set_output_buffer_max_size(const int64_t max_size_bytes) {
	___godot_icall_void_int(___mb.mb_set_output_buffer_max_size, (const object *) this, max_size_bytes);
}

void packet_peer_stream::set_stream_peer(const ref<stream_peer> peer) {
	___godot_icall_void_Object(___mb.mb_set_stream_peer, (const object *) this, peer.ptr());
}

}