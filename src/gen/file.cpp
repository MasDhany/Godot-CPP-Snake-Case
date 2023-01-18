#include "file.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


file::___method_bindings file::___mb = {};

void *file::_detail_class_tag = nullptr;

void file::___init_method_bindings() {
	___mb.mb_close = gd::api->godot_method_bind_get_method("_File", "close");
	___mb.mb_eof_reached = gd::api->godot_method_bind_get_method("_File", "eof_reached");
	___mb.mb_file_exists = gd::api->godot_method_bind_get_method("_File", "file_exists");
	___mb.mb_flush = gd::api->godot_method_bind_get_method("_File", "flush");
	___mb.mb_get_16 = gd::api->godot_method_bind_get_method("_File", "get_16");
	___mb.mb_get_32 = gd::api->godot_method_bind_get_method("_File", "get_32");
	___mb.mb_get_64 = gd::api->godot_method_bind_get_method("_File", "get_64");
	___mb.mb_get_8 = gd::api->godot_method_bind_get_method("_File", "get_8");
	___mb.mb_get_as_text = gd::api->godot_method_bind_get_method("_File", "get_as_text");
	___mb.mb_get_buffer = gd::api->godot_method_bind_get_method("_File", "get_buffer");
	___mb.mb_get_csv_line = gd::api->godot_method_bind_get_method("_File", "get_csv_line");
	___mb.mb_get_double = gd::api->godot_method_bind_get_method("_File", "get_double");
	___mb.mb_get_endian_swap = gd::api->godot_method_bind_get_method("_File", "get_endian_swap");
	___mb.mb_get_error = gd::api->godot_method_bind_get_method("_File", "get_error");
	___mb.mb_get_float = gd::api->godot_method_bind_get_method("_File", "get_float");
	___mb.mb_get_len = gd::api->godot_method_bind_get_method("_File", "get_len");
	___mb.mb_get_line = gd::api->godot_method_bind_get_method("_File", "get_line");
	___mb.mb_get_md5 = gd::api->godot_method_bind_get_method("_File", "get_md5");
	___mb.mb_get_modified_time = gd::api->godot_method_bind_get_method("_File", "get_modified_time");
	___mb.mb_get_pascal_string = gd::api->godot_method_bind_get_method("_File", "get_pascal_string");
	___mb.mb_get_path = gd::api->godot_method_bind_get_method("_File", "get_path");
	___mb.mb_get_path_absolute = gd::api->godot_method_bind_get_method("_File", "get_path_absolute");
	___mb.mb_get_position = gd::api->godot_method_bind_get_method("_File", "get_position");
	___mb.mb_get_real = gd::api->godot_method_bind_get_method("_File", "get_real");
	___mb.mb_get_sha256 = gd::api->godot_method_bind_get_method("_File", "get_sha256");
	___mb.mb_get_var = gd::api->godot_method_bind_get_method("_File", "get_var");
	___mb.mb_is_open = gd::api->godot_method_bind_get_method("_File", "is_open");
	___mb.mb_open = gd::api->godot_method_bind_get_method("_File", "open");
	___mb.mb_open_compressed = gd::api->godot_method_bind_get_method("_File", "open_compressed");
	___mb.mb_open_encrypted = gd::api->godot_method_bind_get_method("_File", "open_encrypted");
	___mb.mb_open_encrypted_with_pass = gd::api->godot_method_bind_get_method("_File", "open_encrypted_with_pass");
	___mb.mb_seek = gd::api->godot_method_bind_get_method("_File", "seek");
	___mb.mb_seek_end = gd::api->godot_method_bind_get_method("_File", "seek_end");
	___mb.mb_set_endian_swap = gd::api->godot_method_bind_get_method("_File", "set_endian_swap");
	___mb.mb_store_16 = gd::api->godot_method_bind_get_method("_File", "store_16");
	___mb.mb_store_32 = gd::api->godot_method_bind_get_method("_File", "store_32");
	___mb.mb_store_64 = gd::api->godot_method_bind_get_method("_File", "store_64");
	___mb.mb_store_8 = gd::api->godot_method_bind_get_method("_File", "store_8");
	___mb.mb_store_buffer = gd::api->godot_method_bind_get_method("_File", "store_buffer");
	___mb.mb_store_csv_line = gd::api->godot_method_bind_get_method("_File", "store_csv_line");
	___mb.mb_store_double = gd::api->godot_method_bind_get_method("_File", "store_double");
	___mb.mb_store_float = gd::api->godot_method_bind_get_method("_File", "store_float");
	___mb.mb_store_line = gd::api->godot_method_bind_get_method("_File", "store_line");
	___mb.mb_store_pascal_string = gd::api->godot_method_bind_get_method("_File", "store_pascal_string");
	___mb.mb_store_real = gd::api->godot_method_bind_get_method("_File", "store_real");
	___mb.mb_store_string = gd::api->godot_method_bind_get_method("_File", "store_string");
	___mb.mb_store_var = gd::api->godot_method_bind_get_method("_File", "store_var");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "_File");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

file *file::_new()
{
	return (file *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"_File")());
}
void file::close() {
	___godot_icall_void(___mb.mb_close, (const object *) this);
}

bool file::eof_reached() const {
	return ___godot_icall_bool(___mb.mb_eof_reached, (const object *) this);
}

bool file::file_exists(const string path_) const {
	return ___godot_icall_bool_String(___mb.mb_file_exists, (const object *) this, path_);
}

void file::flush() {
	___godot_icall_void(___mb.mb_flush, (const object *) this);
}

int64_t file::get_16() const {
	return ___godot_icall_int(___mb.mb_get_16, (const object *) this);
}

int64_t file::get_32() const {
	return ___godot_icall_int(___mb.mb_get_32, (const object *) this);
}

int64_t file::get_64() const {
	return ___godot_icall_int(___mb.mb_get_64, (const object *) this);
}

int64_t file::get_8() const {
	return ___godot_icall_int(___mb.mb_get_8, (const object *) this);
}

string file::get_as_text(const bool skip_cr) const {
	return ___godot_icall_String_bool(___mb.mb_get_as_text, (const object *) this, skip_cr);
}

pool_byte_array file::get_buffer(const int64_t len) const {
	return ___godot_icall_PoolByteArray_int(___mb.mb_get_buffer, (const object *) this, len);
}

pool_string_array file::get_csv_line(const string delim) const {
	return ___godot_icall_PoolStringArray_String(___mb.mb_get_csv_line, (const object *) this, delim);
}

real_t file::get_double() const {
	return ___godot_icall_float(___mb.mb_get_double, (const object *) this);
}

bool file::get_endian_swap() {
	return ___godot_icall_bool(___mb.mb_get_endian_swap, (const object *) this);
}

error file::get_error() const {
	return (error) ___godot_icall_int(___mb.mb_get_error, (const object *) this);
}

real_t file::get_float() const {
	return ___godot_icall_float(___mb.mb_get_float, (const object *) this);
}

int64_t file::get_len() const {
	return ___godot_icall_int(___mb.mb_get_len, (const object *) this);
}

string file::get_line() const {
	return ___godot_icall_String(___mb.mb_get_line, (const object *) this);
}

string file::get_md5(const string path_) const {
	return ___godot_icall_String_String(___mb.mb_get_md5, (const object *) this, path_);
}

int64_t file::get_modified_time(const string file_) const {
	return ___godot_icall_int_String(___mb.mb_get_modified_time, (const object *) this, file_);
}

string file::get_pascal_string() {
	return ___godot_icall_String(___mb.mb_get_pascal_string, (const object *) this);
}

string file::get_path() const {
	return ___godot_icall_String(___mb.mb_get_path, (const object *) this);
}

string file::get_path_absolute() const {
	return ___godot_icall_String(___mb.mb_get_path_absolute, (const object *) this);
}

int64_t file::get_position() const {
	return ___godot_icall_int(___mb.mb_get_position, (const object *) this);
}

real_t file::get_real() const {
	return ___godot_icall_float(___mb.mb_get_real, (const object *) this);
}

string file::get_sha256(const string path_) const {
	return ___godot_icall_String_String(___mb.mb_get_sha256, (const object *) this, path_);
}

variant file::get_var(const bool allow_objects) const {
	return ___godot_icall_Variant_bool(___mb.mb_get_var, (const object *) this, allow_objects);
}

bool file::is_open() const {
	return ___godot_icall_bool(___mb.mb_is_open, (const object *) this);
}

error file::open(const string path_, const int64_t flags) {
	return (error) ___godot_icall_int_String_int(___mb.mb_open, (const object *) this, path_, flags);
}

error file::open_compressed(const string path_, const int64_t mode_flags, const int64_t compression_mode) {
	return (error) ___godot_icall_int_String_int_int(___mb.mb_open_compressed, (const object *) this, path_, mode_flags, compression_mode);
}

error file::open_encrypted(const string path_, const int64_t mode_flags, const pool_byte_array key) {
	return (error) ___godot_icall_int_String_int_PoolByteArray(___mb.mb_open_encrypted, (const object *) this, path_, mode_flags, key);
}

error file::open_encrypted_with_pass(const string path_, const int64_t mode_flags, const string pass) {
	return (error) ___godot_icall_int_String_int_String(___mb.mb_open_encrypted_with_pass, (const object *) this, path_, mode_flags, pass);
}

void file::seek(const int64_t position) {
	___godot_icall_void_int(___mb.mb_seek, (const object *) this, position);
}

void file::seek_end(const int64_t position) {
	___godot_icall_void_int(___mb.mb_seek_end, (const object *) this, position);
}

void file::set_endian_swap(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_endian_swap, (const object *) this, enable);
}

void file::store_16(const int64_t value) {
	___godot_icall_void_int(___mb.mb_store_16, (const object *) this, value);
}

void file::store_32(const int64_t value) {
	___godot_icall_void_int(___mb.mb_store_32, (const object *) this, value);
}

void file::store_64(const int64_t value) {
	___godot_icall_void_int(___mb.mb_store_64, (const object *) this, value);
}

void file::store_8(const int64_t value) {
	___godot_icall_void_int(___mb.mb_store_8, (const object *) this, value);
}

void file::store_buffer(const pool_byte_array buffer) {
	___godot_icall_void_PoolByteArray(___mb.mb_store_buffer, (const object *) this, buffer);
}

void file::store_csv_line(const pool_string_array values, const string delim) {
	___godot_icall_void_PoolStringArray_String(___mb.mb_store_csv_line, (const object *) this, values, delim);
}

void file::store_double(const real_t value) {
	___godot_icall_void_float(___mb.mb_store_double, (const object *) this, value);
}

void file::store_float(const real_t value) {
	___godot_icall_void_float(___mb.mb_store_float, (const object *) this, value);
}

void file::store_line(const string line) {
	___godot_icall_void_String(___mb.mb_store_line, (const object *) this, line);
}

void file::store_pascal_string(const string string_) {
	___godot_icall_void_String(___mb.mb_store_pascal_string, (const object *) this, string_);
}

void file::store_real(const real_t value) {
	___godot_icall_void_float(___mb.mb_store_real, (const object *) this, value);
}

void file::store_string(const string string_) {
	___godot_icall_void_String(___mb.mb_store_string, (const object *) this, string_);
}

void file::store_var(const variant value, const bool full_objects) {
	___godot_icall_void_Variant_bool(___mb.mb_store_var, (const object *) this, value, full_objects);
}

}