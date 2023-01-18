#ifndef GODOT_CPP_EDITOREXPORTPLUGIN_HPP
#define GODOT_CPP_EDITOREXPORTPLUGIN_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "reference.hpp"
namespace gd {


class editor_export_plugin : public reference {
	struct ___method_bindings {
		godot_method_bind *mb__export_begin;
		godot_method_bind *mb__export_end;
		godot_method_bind *mb__export_file;
		godot_method_bind *mb_add_file;
		godot_method_bind *mb_add_ios_bundle_file;
		godot_method_bind *mb_add_ios_cpp_code;
		godot_method_bind *mb_add_ios_embedded_framework;
		godot_method_bind *mb_add_ios_framework;
		godot_method_bind *mb_add_ios_linker_flags;
		godot_method_bind *mb_add_ios_plist_content;
		godot_method_bind *mb_add_ios_project_static_lib;
		godot_method_bind *mb_add_osx_plugin_file;
		godot_method_bind *mb_add_shared_object;
		godot_method_bind *mb_skip;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "EditorExportPlugin"; }
	static inline const char *___get_godot_class_name() { return (const char *) "EditorExportPlugin"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	void _export_begin(const pool_string_array features, const bool is_debug, const string path_, const int64_t flags);
	void _export_end();
	void _export_file(const string path_, const string type, const pool_string_array features);
	void add_file(const string path_, const pool_byte_array file_, const bool remap);
	void add_ios_bundle_file(const string path_);
	void add_ios_cpp_code(const string code);
	void add_ios_embedded_framework(const string path_);
	void add_ios_framework(const string path_);
	void add_ios_linker_flags(const string flags);
	void add_ios_plist_content(const string plist_content);
	void add_ios_project_static_lib(const string path_);
	void add_osx_plugin_file(const string path_);
	void add_shared_object(const string path_, const pool_string_array tags);
	void skip();

};

}

#endif