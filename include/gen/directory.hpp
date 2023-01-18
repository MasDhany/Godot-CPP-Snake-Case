#ifndef GODOT_CPP_DIRECTORY_HPP
#define GODOT_CPP_DIRECTORY_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "reference.hpp"
namespace gd {


class directory : public reference {
	struct ___method_bindings {
		godot_method_bind *mb_change_dir;
		godot_method_bind *mb_copy;
		godot_method_bind *mb_current_is_dir;
		godot_method_bind *mb_dir_exists;
		godot_method_bind *mb_file_exists;
		godot_method_bind *mb_get_current_dir;
		godot_method_bind *mb_get_current_drive;
		godot_method_bind *mb_get_drive;
		godot_method_bind *mb_get_drive_count;
		godot_method_bind *mb_get_next;
		godot_method_bind *mb_get_space_left;
		godot_method_bind *mb_list_dir_begin;
		godot_method_bind *mb_list_dir_end;
		godot_method_bind *mb_make_dir;
		godot_method_bind *mb_make_dir_recursive;
		godot_method_bind *mb_open;
		godot_method_bind *mb_remove;
		godot_method_bind *mb_rename;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Directory"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Directory"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static directory *_new();

	// methods
	error change_dir(const string todir);
	error copy(const string from, const string to);
	bool current_is_dir() const;
	bool dir_exists(const string path_);
	bool file_exists(const string path_);
	string get_current_dir();
	int64_t get_current_drive();
	string get_drive(const int64_t idx);
	int64_t get_drive_count();
	string get_next();
	int64_t get_space_left();
	error list_dir_begin(const bool skip_navigational = false, const bool skip_hidden = false);
	void list_dir_end();
	error make_dir(const string path_);
	error make_dir_recursive(const string path_);
	error open(const string path_);
	error remove(const string path_);
	error rename(const string from, const string to);

};

}

#endif