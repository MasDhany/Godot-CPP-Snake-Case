#ifndef GODOT_CPP_FILE_HPP
#define GODOT_CPP_FILE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "reference.hpp"
namespace gd {


class file : public reference {
	struct ___method_bindings {
		godot_method_bind *mb_close;
		godot_method_bind *mb_eof_reached;
		godot_method_bind *mb_file_exists;
		godot_method_bind *mb_flush;
		godot_method_bind *mb_get_16;
		godot_method_bind *mb_get_32;
		godot_method_bind *mb_get_64;
		godot_method_bind *mb_get_8;
		godot_method_bind *mb_get_as_text;
		godot_method_bind *mb_get_buffer;
		godot_method_bind *mb_get_csv_line;
		godot_method_bind *mb_get_double;
		godot_method_bind *mb_get_endian_swap;
		godot_method_bind *mb_get_error;
		godot_method_bind *mb_get_float;
		godot_method_bind *mb_get_len;
		godot_method_bind *mb_get_line;
		godot_method_bind *mb_get_md5;
		godot_method_bind *mb_get_modified_time;
		godot_method_bind *mb_get_pascal_string;
		godot_method_bind *mb_get_path;
		godot_method_bind *mb_get_path_absolute;
		godot_method_bind *mb_get_position;
		godot_method_bind *mb_get_real;
		godot_method_bind *mb_get_sha256;
		godot_method_bind *mb_get_var;
		godot_method_bind *mb_is_open;
		godot_method_bind *mb_open;
		godot_method_bind *mb_open_compressed;
		godot_method_bind *mb_open_encrypted;
		godot_method_bind *mb_open_encrypted_with_pass;
		godot_method_bind *mb_seek;
		godot_method_bind *mb_seek_end;
		godot_method_bind *mb_set_endian_swap;
		godot_method_bind *mb_store_16;
		godot_method_bind *mb_store_32;
		godot_method_bind *mb_store_64;
		godot_method_bind *mb_store_8;
		godot_method_bind *mb_store_buffer;
		godot_method_bind *mb_store_csv_line;
		godot_method_bind *mb_store_double;
		godot_method_bind *mb_store_float;
		godot_method_bind *mb_store_line;
		godot_method_bind *mb_store_pascal_string;
		godot_method_bind *mb_store_real;
		godot_method_bind *mb_store_string;
		godot_method_bind *mb_store_var;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "File"; }
	static inline const char *___get_godot_class_name() { return (const char *) "File"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum CompressionMode {
		COMPRESSION_FASTLZ = 0,
		COMPRESSION_DEFLATE = 1,
		COMPRESSION_ZSTD = 2,
		COMPRESSION_GZIP = 3,
	};
	enum ModeFlags {
		READ = 1,
		WRITE = 2,
		READ_WRITE = 3,
		WRITE_READ = 7,
	};

	// constants


	static file *_new();

	// methods
	void close();
	bool eof_reached() const;
	bool file_exists(const string path_) const;
	void flush();
	int64_t get_16() const;
	int64_t get_32() const;
	int64_t get_64() const;
	int64_t get_8() const;
	string get_as_text(const bool skip_cr = true) const;
	pool_byte_array get_buffer(const int64_t len) const;
	pool_string_array get_csv_line(const string delim = ",") const;
	real_t get_double() const;
	bool get_endian_swap();
	error get_error() const;
	real_t get_float() const;
	int64_t get_len() const;
	string get_line() const;
	string get_md5(const string path_) const;
	int64_t get_modified_time(const string file_) const;
	string get_pascal_string();
	string get_path() const;
	string get_path_absolute() const;
	int64_t get_position() const;
	real_t get_real() const;
	string get_sha256(const string path_) const;
	variant get_var(const bool allow_objects = false) const;
	bool is_open() const;
	error open(const string path_, const int64_t flags);
	error open_compressed(const string path_, const int64_t mode_flags, const int64_t compression_mode = 0);
	error open_encrypted(const string path_, const int64_t mode_flags, const pool_byte_array key);
	error open_encrypted_with_pass(const string path_, const int64_t mode_flags, const string pass);
	void seek(const int64_t position);
	void seek_end(const int64_t position = 0);
	void set_endian_swap(const bool enable);
	void store_16(const int64_t value);
	void store_32(const int64_t value);
	void store_64(const int64_t value);
	void store_8(const int64_t value);
	void store_buffer(const pool_byte_array buffer);
	void store_csv_line(const pool_string_array values, const string delim = ",");
	void store_double(const real_t value);
	void store_float(const real_t value);
	void store_line(const string line);
	void store_pascal_string(const string string_);
	void store_real(const real_t value);
	void store_string(const string string_);
	void store_var(const variant value, const bool full_objects = false);

};

}

#endif