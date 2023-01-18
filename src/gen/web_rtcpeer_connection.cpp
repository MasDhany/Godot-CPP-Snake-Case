#include "web_rtcpeer_connection.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "web_rtcdata_channel.hpp"


namespace gd {


web_rtcpeer_connection::___method_bindings web_rtcpeer_connection::___mb = {};

void *web_rtcpeer_connection::_detail_class_tag = nullptr;

void web_rtcpeer_connection::___init_method_bindings() {
	___mb.mb_add_ice_candidate = gd::api->godot_method_bind_get_method("WebRTCPeerConnection", "add_ice_candidate");
	___mb.mb_close = gd::api->godot_method_bind_get_method("WebRTCPeerConnection", "close");
	___mb.mb_create_data_channel = gd::api->godot_method_bind_get_method("WebRTCPeerConnection", "create_data_channel");
	___mb.mb_create_offer = gd::api->godot_method_bind_get_method("WebRTCPeerConnection", "create_offer");
	___mb.mb_get_connection_state = gd::api->godot_method_bind_get_method("WebRTCPeerConnection", "get_connection_state");
	___mb.mb_initialize = gd::api->godot_method_bind_get_method("WebRTCPeerConnection", "initialize");
	___mb.mb_poll = gd::api->godot_method_bind_get_method("WebRTCPeerConnection", "poll");
	___mb.mb_set_local_description = gd::api->godot_method_bind_get_method("WebRTCPeerConnection", "set_local_description");
	___mb.mb_set_remote_description = gd::api->godot_method_bind_get_method("WebRTCPeerConnection", "set_remote_description");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "WebRTCPeerConnection");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

web_rtcpeer_connection *web_rtcpeer_connection::_new()
{
	return (web_rtcpeer_connection *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"WebRTCPeerConnection")());
}
error web_rtcpeer_connection::add_ice_candidate(const string media, const int64_t index, const string name) {
	return (error) ___godot_icall_int_String_int_String(___mb.mb_add_ice_candidate, (const object *) this, media, index, name);
}

void web_rtcpeer_connection::close() {
	___godot_icall_void(___mb.mb_close, (const object *) this);
}

ref<web_rtcdata_channel> web_rtcpeer_connection::create_data_channel(const string label_, const dictionary options) {
	return ref<web_rtcdata_channel>::__internal_constructor(___godot_icall_Object_String_Dictionary(___mb.mb_create_data_channel, (const object *) this, label_, options));
}

error web_rtcpeer_connection::create_offer() {
	return (error) ___godot_icall_int(___mb.mb_create_offer, (const object *) this);
}

web_rtcpeer_connection::ConnectionState web_rtcpeer_connection::get_connection_state() const {
	return (web_rtcpeer_connection::ConnectionState) ___godot_icall_int(___mb.mb_get_connection_state, (const object *) this);
}

error web_rtcpeer_connection::initialize(const dictionary configuration) {
	return (error) ___godot_icall_int_Dictionary(___mb.mb_initialize, (const object *) this, configuration);
}

error web_rtcpeer_connection::poll() {
	return (error) ___godot_icall_int(___mb.mb_poll, (const object *) this);
}

error web_rtcpeer_connection::set_local_description(const string type, const string sdp) {
	return (error) ___godot_icall_int_String_String(___mb.mb_set_local_description, (const object *) this, type, sdp);
}

error web_rtcpeer_connection::set_remote_description(const string type, const string sdp) {
	return (error) ___godot_icall_int_String_String(___mb.mb_set_remote_description, (const object *) this, type, sdp);
}

}