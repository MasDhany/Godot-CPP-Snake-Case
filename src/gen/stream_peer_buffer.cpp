#include "stream_peer_buffer.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "stream_peer_buffer.hpp"


namespace gd {


stream_peer_buffer::___method_bindings stream_peer_buffer::___mb = {};

void *stream_peer_buffer::_detail_class_tag = nullptr;

void stream_peer_buffer::___init_method_bindings() {
	___mb.mb_clear = gd::api->godot_method_bind_get_method("StreamPeerBuffer", "clear");
	___mb.mb_duplicate = gd::api->godot_method_bind_get_method("StreamPeerBuffer", "duplicate");
	___mb.mb_get_data_array = gd::api->godot_method_bind_get_method("StreamPeerBuffer", "get_data_array");
	___mb.mb_get_position = gd::api->godot_method_bind_get_method("StreamPeerBuffer", "get_position");
	___mb.mb_get_size = gd::api->godot_method_bind_get_method("StreamPeerBuffer", "get_size");
	___mb.mb_resize = gd::api->godot_method_bind_get_method("StreamPeerBuffer", "resize");
	___mb.mb_seek = gd::api->godot_method_bind_get_method("StreamPeerBuffer", "seek");
	___mb.mb_set_data_array = gd::api->godot_method_bind_get_method("StreamPeerBuffer", "set_data_array");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "StreamPeerBuffer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

stream_peer_buffer *stream_peer_buffer::_new()
{
	return (stream_peer_buffer *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"StreamPeerBuffer")());
}
void stream_peer_buffer::clear() {
	___godot_icall_void(___mb.mb_clear, (const object *) this);
}

ref<stream_peer_buffer> stream_peer_buffer::duplicate() const {
	return ref<stream_peer_buffer>::__internal_constructor(___godot_icall_Object(___mb.mb_duplicate, (const object *) this));
}

pool_byte_array stream_peer_buffer::get_data_array() const {
	return ___godot_icall_PoolByteArray(___mb.mb_get_data_array, (const object *) this);
}

int64_t stream_peer_buffer::get_position() const {
	return ___godot_icall_int(___mb.mb_get_position, (const object *) this);
}

int64_t stream_peer_buffer::get_size() const {
	return ___godot_icall_int(___mb.mb_get_size, (const object *) this);
}

void stream_peer_buffer::resize(const int64_t size) {
	___godot_icall_void_int(___mb.mb_resize, (const object *) this, size);
}

void stream_peer_buffer::seek(const int64_t position) {
	___godot_icall_void_int(___mb.mb_seek, (const object *) this, position);
}

void stream_peer_buffer::set_data_array(const pool_byte_array data) {
	___godot_icall_void_PoolByteArray(___mb.mb_set_data_array, (const object *) this, data);
}

}