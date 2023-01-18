#ifndef GODOT_CPP_EDITORIMPORTPLUGIN_HPP
#define GODOT_CPP_EDITORIMPORTPLUGIN_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource_importer.hpp"
namespace gd {


class editor_import_plugin : public resource_importer {
	struct ___method_bindings {
		godot_method_bind *mb_get_import_options;
		godot_method_bind *mb_get_import_order;
		godot_method_bind *mb_get_importer_name;
		godot_method_bind *mb_get_option_visibility;
		godot_method_bind *mb_get_preset_count;
		godot_method_bind *mb_get_preset_name;
		godot_method_bind *mb_get_priority;
		godot_method_bind *mb_get_recognized_extensions;
		godot_method_bind *mb_get_resource_type;
		godot_method_bind *mb_get_save_extension;
		godot_method_bind *mb_get_visible_name;
		godot_method_bind *mb_import;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "EditorImportPlugin"; }
	static inline const char *___get_godot_class_name() { return (const char *) "EditorImportPlugin"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	array get_import_options(const int64_t preset);
	int64_t get_import_order();
	string get_importer_name();
	bool get_option_visibility(const string option, const dictionary options);
	int64_t get_preset_count();
	string get_preset_name(const int64_t preset);
	real_t get_priority();
	array get_recognized_extensions();
	string get_resource_type();
	string get_save_extension();
	string get_visible_name();
	int64_t import(const string source_file, const string save_path, const dictionary options, const array platform_variants, const array gen_files);

};

}

#endif