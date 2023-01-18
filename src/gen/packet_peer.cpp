#include "packet_peer.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


packet_peer::___method_bindings packet_peer::___mb = {};

void *packet_peer::_detail_class_tag = nullptr;

void packet_peer::___init_method_bindings() {
	___mb.mb_get_available_packet_count = gd::api->godot_method_bind_get_method("PacketPeer", "get_available_packet_count");
	___mb.mb_get_encode_buffer_max_size = gd::api->godot_method_bind_get_method("PacketPeer", "get_encode_buffer_max_size");
	___mb.mb_get_packet = gd::api->godot_method_bind_get_method("PacketPeer", "get_packet");
	___mb.mb_get_packet_error = gd::api->godot_method_bind_get_method("PacketPeer", "get_packet_error");
	___mb.mb_get_var = gd::api->godot_method_bind_get_method("PacketPeer", "get_var");
	___mb.mb_is_object_decoding_allowed = gd::api->godot_method_bind_get_method("PacketPeer", "is_object_decoding_allowed");
	___mb.mb_put_packet = gd::api->godot_method_bind_get_method("PacketPeer", "put_packet");
	___mb.mb_put_var = gd::api->godot_method_bind_get_method("PacketPeer", "put_var");
	___mb.mb_set_allow_object_decoding = gd::api->godot_method_bind_get_method("PacketPeer", "set_allow_object_decoding");
	___mb.mb_set_encode_buffer_max_size = gd::api->godot_method_bind_get_method("PacketPeer", "set_encode_buffer_max_size");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "PacketPeer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

int64_t packet_peer::get_available_packet_count() const {
	return ___godot_icall_int(___mb.mb_get_available_packet_count, (const object *) this);
}

int64_t packet_peer::get_encode_buffer_max_size() const {
	return ___godot_icall_int(___mb.mb_get_encode_buffer_max_size, (const object *) this);
}

pool_byte_array packet_peer::get_packet() {
	return ___godot_icall_PoolByteArray(___mb.mb_get_packet, (const object *) this);
}

error packet_peer::get_packet_error() const {
	return (error) ___godot_icall_int(___mb.mb_get_packet_error, (const object *) this);
}

variant packet_peer::get_var(const bool allow_objects) {
	return ___godot_icall_Variant_bool(___mb.mb_get_var, (const object *) this, allow_objects);
}

bool packet_peer::is_object_decoding_allowed() const {
	return ___godot_icall_bool(___mb.mb_is_object_decoding_allowed, (const object *) this);
}

error packet_peer::put_packet(const pool_byte_array buffer) {
	return (error) ___godot_icall_int_PoolByteArray(___mb.mb_put_packet, (const object *) this, buffer);
}

error packet_peer::put_var(const variant var, const bool full_objects) {
	return (error) ___godot_icall_int_Variant_bool(___mb.mb_put_var, (const object *) this, var, full_objects);
}

void packet_peer::set_allow_object_decoding(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_allow_object_decoding, (const object *) this, enable);
}

void packet_peer::set_encode_buffer_max_size(const int64_t max_size) {
	___godot_icall_void_int(___mb.mb_set_encode_buffer_max_size, (const object *) this, max_size);
}

}