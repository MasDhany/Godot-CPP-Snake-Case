#include "web_rtcmultiplayer.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "web_rtcpeer_connection.hpp"


namespace gd {


web_rtcmultiplayer::___method_bindings web_rtcmultiplayer::___mb = {};

void *web_rtcmultiplayer::_detail_class_tag = nullptr;

void web_rtcmultiplayer::___init_method_bindings() {
	___mb.mb_add_peer = gd::api->godot_method_bind_get_method("WebRTCMultiplayer", "add_peer");
	___mb.mb_close = gd::api->godot_method_bind_get_method("WebRTCMultiplayer", "close");
	___mb.mb_get_peer = gd::api->godot_method_bind_get_method("WebRTCMultiplayer", "get_peer");
	___mb.mb_get_peers = gd::api->godot_method_bind_get_method("WebRTCMultiplayer", "get_peers");
	___mb.mb_has_peer = gd::api->godot_method_bind_get_method("WebRTCMultiplayer", "has_peer");
	___mb.mb_initialize = gd::api->godot_method_bind_get_method("WebRTCMultiplayer", "initialize");
	___mb.mb_remove_peer = gd::api->godot_method_bind_get_method("WebRTCMultiplayer", "remove_peer");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "WebRTCMultiplayer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

web_rtcmultiplayer *web_rtcmultiplayer::_new()
{
	return (web_rtcmultiplayer *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"WebRTCMultiplayer")());
}
error web_rtcmultiplayer::add_peer(const ref<web_rtcpeer_connection> peer, const int64_t peer_id, const int64_t unreliable_lifetime) {
	return (error) ___godot_icall_int_Object_int_int(___mb.mb_add_peer, (const object *) this, peer.ptr(), peer_id, unreliable_lifetime);
}

void web_rtcmultiplayer::close() {
	___godot_icall_void(___mb.mb_close, (const object *) this);
}

dictionary web_rtcmultiplayer::get_peer(const int64_t peer_id) {
	return ___godot_icall_Dictionary_int(___mb.mb_get_peer, (const object *) this, peer_id);
}

dictionary web_rtcmultiplayer::get_peers() {
	return ___godot_icall_Dictionary(___mb.mb_get_peers, (const object *) this);
}

bool web_rtcmultiplayer::has_peer(const int64_t peer_id) {
	return ___godot_icall_bool_int(___mb.mb_has_peer, (const object *) this, peer_id);
}

error web_rtcmultiplayer::initialize(const int64_t peer_id, const bool server_compatibility) {
	return (error) ___godot_icall_int_int_bool(___mb.mb_initialize, (const object *) this, peer_id, server_compatibility);
}

void web_rtcmultiplayer::remove_peer(const int64_t peer_id) {
	___godot_icall_void_int(___mb.mb_remove_peer, (const object *) this, peer_id);
}

}