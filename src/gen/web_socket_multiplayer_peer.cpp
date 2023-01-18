#include "web_socket_multiplayer_peer.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "web_socket_peer.hpp"


namespace gd {


web_socket_multiplayer_peer::___method_bindings web_socket_multiplayer_peer::___mb = {};

void *web_socket_multiplayer_peer::_detail_class_tag = nullptr;

void web_socket_multiplayer_peer::___init_method_bindings() {
	___mb.mb_get_peer = gd::api->godot_method_bind_get_method("WebSocketMultiplayerPeer", "get_peer");
	___mb.mb_set_buffers = gd::api->godot_method_bind_get_method("WebSocketMultiplayerPeer", "set_buffers");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "WebSocketMultiplayerPeer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

ref<web_socket_peer> web_socket_multiplayer_peer::get_peer(const int64_t peer_id) const {
	return ref<web_socket_peer>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_peer, (const object *) this, peer_id));
}

error web_socket_multiplayer_peer::set_buffers(const int64_t input_buffer_size_kb, const int64_t input_max_packets, const int64_t output_buffer_size_kb, const int64_t output_max_packets) {
	return (error) ___godot_icall_int_int_int_int_int(___mb.mb_set_buffers, (const object *) this, input_buffer_size_kb, input_max_packets, output_buffer_size_kb, output_max_packets);
}

}