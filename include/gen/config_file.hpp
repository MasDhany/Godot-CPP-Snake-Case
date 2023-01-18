#ifndef GODOT_CPP_CONFIGFILE_HPP
#define GODOT_CPP_CONFIGFILE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "reference.hpp"
namespace gd {


class config_file : public reference {
	struct ___method_bindings {
		godot_method_bind *mb_clear;
		godot_method_bind *mb_erase_section;
		godot_method_bind *mb_erase_section_key;
		godot_method_bind *mb_get_section_keys;
		godot_method_bind *mb_get_sections;
		godot_method_bind *mb_get_value;
		godot_method_bind *mb_has_section;
		godot_method_bind *mb_has_section_key;
		godot_method_bind *mb_load;
		godot_method_bind *mb_load_encrypted;
		godot_method_bind *mb_load_encrypted_pass;
		godot_method_bind *mb_parse;
		godot_method_bind *mb_save;
		godot_method_bind *mb_save_encrypted;
		godot_method_bind *mb_save_encrypted_pass;
		godot_method_bind *mb_set_value;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "ConfigFile"; }
	static inline const char *___get_godot_class_name() { return (const char *) "ConfigFile"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static config_file *_new();

	// methods
	void clear();
	void erase_section(const string section);
	void erase_section_key(const string section, const string key);
	pool_string_array get_section_keys(const string section) const;
	pool_string_array get_sections() const;
	variant get_value(const string section, const string key, const variant _default = variant()) const;
	bool has_section(const string section) const;
	bool has_section_key(const string section, const string key) const;
	error load(const string path_);
	error load_encrypted(const string path_, const pool_byte_array key);
	error load_encrypted_pass(const string path_, const string password);
	error parse(const string data);
	error save(const string path_);
	error save_encrypted(const string path_, const pool_byte_array key);
	error save_encrypted_pass(const string path_, const string password);
	void set_value(const string section, const string key, const variant value);

};

}

#endif