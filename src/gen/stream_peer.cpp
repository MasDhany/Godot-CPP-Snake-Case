#include "stream_peer.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


stream_peer::___method_bindings stream_peer::___mb = {};

void *stream_peer::_detail_class_tag = nullptr;

void stream_peer::___init_method_bindings() {
	___mb.mb_get_16 = gd::api->godot_method_bind_get_method("StreamPeer", "get_16");
	___mb.mb_get_32 = gd::api->godot_method_bind_get_method("StreamPeer", "get_32");
	___mb.mb_get_64 = gd::api->godot_method_bind_get_method("StreamPeer", "get_64");
	___mb.mb_get_8 = gd::api->godot_method_bind_get_method("StreamPeer", "get_8");
	___mb.mb_get_available_bytes = gd::api->godot_method_bind_get_method("StreamPeer", "get_available_bytes");
	___mb.mb_get_data = gd::api->godot_method_bind_get_method("StreamPeer", "get_data");
	___mb.mb_get_double = gd::api->godot_method_bind_get_method("StreamPeer", "get_double");
	___mb.mb_get_float = gd::api->godot_method_bind_get_method("StreamPeer", "get_float");
	___mb.mb_get_partial_data = gd::api->godot_method_bind_get_method("StreamPeer", "get_partial_data");
	___mb.mb_get_string = gd::api->godot_method_bind_get_method("StreamPeer", "get_string");
	___mb.mb_get_u16 = gd::api->godot_method_bind_get_method("StreamPeer", "get_u16");
	___mb.mb_get_u32 = gd::api->godot_method_bind_get_method("StreamPeer", "get_u32");
	___mb.mb_get_u64 = gd::api->godot_method_bind_get_method("StreamPeer", "get_u64");
	___mb.mb_get_u8 = gd::api->godot_method_bind_get_method("StreamPeer", "get_u8");
	___mb.mb_get_utf8_string = gd::api->godot_method_bind_get_method("StreamPeer", "get_utf8_string");
	___mb.mb_get_var = gd::api->godot_method_bind_get_method("StreamPeer", "get_var");
	___mb.mb_is_big_endian_enabled = gd::api->godot_method_bind_get_method("StreamPeer", "is_big_endian_enabled");
	___mb.mb_put_16 = gd::api->godot_method_bind_get_method("StreamPeer", "put_16");
	___mb.mb_put_32 = gd::api->godot_method_bind_get_method("StreamPeer", "put_32");
	___mb.mb_put_64 = gd::api->godot_method_bind_get_method("StreamPeer", "put_64");
	___mb.mb_put_8 = gd::api->godot_method_bind_get_method("StreamPeer", "put_8");
	___mb.mb_put_data = gd::api->godot_method_bind_get_method("StreamPeer", "put_data");
	___mb.mb_put_double = gd::api->godot_method_bind_get_method("StreamPeer", "put_double");
	___mb.mb_put_float = gd::api->godot_method_bind_get_method("StreamPeer", "put_float");
	___mb.mb_put_partial_data = gd::api->godot_method_bind_get_method("StreamPeer", "put_partial_data");
	___mb.mb_put_string = gd::api->godot_method_bind_get_method("StreamPeer", "put_string");
	___mb.mb_put_u16 = gd::api->godot_method_bind_get_method("StreamPeer", "put_u16");
	___mb.mb_put_u32 = gd::api->godot_method_bind_get_method("StreamPeer", "put_u32");
	___mb.mb_put_u64 = gd::api->godot_method_bind_get_method("StreamPeer", "put_u64");
	___mb.mb_put_u8 = gd::api->godot_method_bind_get_method("StreamPeer", "put_u8");
	___mb.mb_put_utf8_string = gd::api->godot_method_bind_get_method("StreamPeer", "put_utf8_string");
	___mb.mb_put_var = gd::api->godot_method_bind_get_method("StreamPeer", "put_var");
	___mb.mb_set_big_endian = gd::api->godot_method_bind_get_method("StreamPeer", "set_big_endian");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "StreamPeer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

int64_t stream_peer::get_16() {
	return ___godot_icall_int(___mb.mb_get_16, (const object *) this);
}

int64_t stream_peer::get_32() {
	return ___godot_icall_int(___mb.mb_get_32, (const object *) this);
}

int64_t stream_peer::get_64() {
	return ___godot_icall_int(___mb.mb_get_64, (const object *) this);
}

int64_t stream_peer::get_8() {
	return ___godot_icall_int(___mb.mb_get_8, (const object *) this);
}

int64_t stream_peer::get_available_bytes() const {
	return ___godot_icall_int(___mb.mb_get_available_bytes, (const object *) this);
}

array stream_peer::get_data(const int64_t bytes) {
	return ___godot_icall_Array_int(___mb.mb_get_data, (const object *) this, bytes);
}

real_t stream_peer::get_double() {
	return ___godot_icall_float(___mb.mb_get_double, (const object *) this);
}

real_t stream_peer::get_float() {
	return ___godot_icall_float(___mb.mb_get_float, (const object *) this);
}

array stream_peer::get_partial_data(const int64_t bytes) {
	return ___godot_icall_Array_int(___mb.mb_get_partial_data, (const object *) this, bytes);
}

string stream_peer::get_string(const int64_t bytes) {
	return ___godot_icall_String_int(___mb.mb_get_string, (const object *) this, bytes);
}

int64_t stream_peer::get_u16() {
	return ___godot_icall_int(___mb.mb_get_u16, (const object *) this);
}

int64_t stream_peer::get_u32() {
	return ___godot_icall_int(___mb.mb_get_u32, (const object *) this);
}

int64_t stream_peer::get_u64() {
	return ___godot_icall_int(___mb.mb_get_u64, (const object *) this);
}

int64_t stream_peer::get_u8() {
	return ___godot_icall_int(___mb.mb_get_u8, (const object *) this);
}

string stream_peer::get_utf8_string(const int64_t bytes) {
	return ___godot_icall_String_int(___mb.mb_get_utf8_string, (const object *) this, bytes);
}

variant stream_peer::get_var(const bool allow_objects) {
	return ___godot_icall_Variant_bool(___mb.mb_get_var, (const object *) this, allow_objects);
}

bool stream_peer::is_big_endian_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_big_endian_enabled, (const object *) this);
}

void stream_peer::put_16(const int64_t value) {
	___godot_icall_void_int(___mb.mb_put_16, (const object *) this, value);
}

void stream_peer::put_32(const int64_t value) {
	___godot_icall_void_int(___mb.mb_put_32, (const object *) this, value);
}

void stream_peer::put_64(const int64_t value) {
	___godot_icall_void_int(___mb.mb_put_64, (const object *) this, value);
}

void stream_peer::put_8(const int64_t value) {
	___godot_icall_void_int(___mb.mb_put_8, (const object *) this, value);
}

error stream_peer::put_data(const pool_byte_array data) {
	return (error) ___godot_icall_int_PoolByteArray(___mb.mb_put_data, (const object *) this, data);
}

void stream_peer::put_double(const real_t value) {
	___godot_icall_void_float(___mb.mb_put_double, (const object *) this, value);
}

void stream_peer::put_float(const real_t value) {
	___godot_icall_void_float(___mb.mb_put_float, (const object *) this, value);
}

array stream_peer::put_partial_data(const pool_byte_array data) {
	return ___godot_icall_Array_PoolByteArray(___mb.mb_put_partial_data, (const object *) this, data);
}

void stream_peer::put_string(const string value) {
	___godot_icall_void_String(___mb.mb_put_string, (const object *) this, value);
}

void stream_peer::put_u16(const int64_t value) {
	___godot_icall_void_int(___mb.mb_put_u16, (const object *) this, value);
}

void stream_peer::put_u32(const int64_t value) {
	___godot_icall_void_int(___mb.mb_put_u32, (const object *) this, value);
}

void stream_peer::put_u64(const int64_t value) {
	___godot_icall_void_int(___mb.mb_put_u64, (const object *) this, value);
}

void stream_peer::put_u8(const int64_t value) {
	___godot_icall_void_int(___mb.mb_put_u8, (const object *) this, value);
}

void stream_peer::put_utf8_string(const string value) {
	___godot_icall_void_String(___mb.mb_put_utf8_string, (const object *) this, value);
}

void stream_peer::put_var(const variant value, const bool full_objects) {
	___godot_icall_void_Variant_bool(___mb.mb_put_var, (const object *) this, value, full_objects);
}

void stream_peer::set_big_endian(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_big_endian, (const object *) this, enable);
}

}