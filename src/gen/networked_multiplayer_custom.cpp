#include "networked_multiplayer_custom.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


networked_multiplayer_custom::___method_bindings networked_multiplayer_custom::___mb = {};

void *networked_multiplayer_custom::_detail_class_tag = nullptr;

void networked_multiplayer_custom::___init_method_bindings() {
	___mb.mb_deliver_packet = gd::api->godot_method_bind_get_method("NetworkedMultiplayerCustom", "deliver_packet");
	___mb.mb_initialize = gd::api->godot_method_bind_get_method("NetworkedMultiplayerCustom", "initialize");
	___mb.mb_set_connection_status = gd::api->godot_method_bind_get_method("NetworkedMultiplayerCustom", "set_connection_status");
	___mb.mb_set_max_packet_size = gd::api->godot_method_bind_get_method("NetworkedMultiplayerCustom", "set_max_packet_size");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "NetworkedMultiplayerCustom");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

networked_multiplayer_custom *networked_multiplayer_custom::_new()
{
	return (networked_multiplayer_custom *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"NetworkedMultiplayerCustom")());
}
void networked_multiplayer_custom::deliver_packet(const pool_byte_array buffer, const int64_t from_peer_id) {
	___godot_icall_void_PoolByteArray_int(___mb.mb_deliver_packet, (const object *) this, buffer, from_peer_id);
}

void networked_multiplayer_custom::initialize(const int64_t self_peer_id) {
	___godot_icall_void_int(___mb.mb_initialize, (const object *) this, self_peer_id);
}

void networked_multiplayer_custom::set_connection_status(const int64_t connection_status) {
	___godot_icall_void_int(___mb.mb_set_connection_status, (const object *) this, connection_status);
}

void networked_multiplayer_custom::set_max_packet_size(const int64_t max_packet_size) {
	___godot_icall_void_int(___mb.mb_set_max_packet_size, (const object *) this, max_packet_size);
}

}