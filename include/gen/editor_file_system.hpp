#ifndef GODOT_CPP_EDITORFILESYSTEM_HPP
#define GODOT_CPP_EDITORFILESYSTEM_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "node.hpp"
namespace gd {

class editor_file_system_directory;

class editor_file_system : public node {
	struct ___method_bindings {
		godot_method_bind *mb_get_file_type;
		godot_method_bind *mb_get_filesystem;
		godot_method_bind *mb_get_filesystem_path;
		godot_method_bind *mb_get_scanning_progress;
		godot_method_bind *mb_is_scanning;
		godot_method_bind *mb_scan;
		godot_method_bind *mb_scan_sources;
		godot_method_bind *mb_update_file;
		godot_method_bind *mb_update_script_classes;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "EditorFileSystem"; }
	static inline const char *___get_godot_class_name() { return (const char *) "EditorFileSystem"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	string get_file_type(const string path_) const;
	editor_file_system_directory *get_filesystem();
	editor_file_system_directory *get_filesystem_path(const string path_);
	real_t get_scanning_progress() const;
	bool is_scanning() const;
	void scan();
	void scan_sources();
	void update_file(const string path_);
	void update_script_classes();

};

}

#endif