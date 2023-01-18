#ifndef GODOT_CPP_EDITORINSPECTORPLUGIN_HPP
#define GODOT_CPP_EDITORINSPECTORPLUGIN_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "reference.hpp"
namespace gd {

class control;
class object;

class editor_inspector_plugin : public reference {
	struct ___method_bindings {
		godot_method_bind *mb_add_custom_control;
		godot_method_bind *mb_add_property_editor;
		godot_method_bind *mb_add_property_editor_for_multiple_properties;
		godot_method_bind *mb_can_handle;
		godot_method_bind *mb_parse_begin;
		godot_method_bind *mb_parse_category;
		godot_method_bind *mb_parse_end;
		godot_method_bind *mb_parse_property;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "EditorInspectorPlugin"; }
	static inline const char *___get_godot_class_name() { return (const char *) "EditorInspectorPlugin"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	void add_custom_control(const control *control_);
	void add_property_editor(const string property, const control *editor);
	void add_property_editor_for_multiple_properties(const string label_, const pool_string_array properties, const control *editor);
	bool can_handle(const object *object_);
	void parse_begin(const object *object_);
	void parse_category(const object *object_, const string category);
	void parse_end();
	bool parse_property(const object *object_, const int64_t type, const string path_, const int64_t hint, const string hint_text, const int64_t usage);

};

}

#endif