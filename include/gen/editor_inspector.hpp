#ifndef GODOT_CPP_EDITORINSPECTOR_HPP
#define GODOT_CPP_EDITORINSPECTOR_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "scroll_container.hpp"
namespace gd {

class node;
class object;
class resource;

class editor_inspector : public scroll_container {
	struct ___method_bindings {
		godot_method_bind *mb__edit_request_change;
		godot_method_bind *mb__feature_profile_changed;
		godot_method_bind *mb__filter_changed;
		godot_method_bind *mb__multiple_properties_changed;
		godot_method_bind *mb__node_removed;
		godot_method_bind *mb__object_id_selected;
		godot_method_bind *mb__property_changed;
		godot_method_bind *mb__property_changed_update_all;
		godot_method_bind *mb__property_checked;
		godot_method_bind *mb__property_keyed;
		godot_method_bind *mb__property_keyed_with_value;
		godot_method_bind *mb__property_pinned;
		godot_method_bind *mb__property_selected;
		godot_method_bind *mb__resource_selected;
		godot_method_bind *mb__vscroll_changed;
		godot_method_bind *mb_refresh;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "EditorInspector"; }
	static inline const char *___get_godot_class_name() { return (const char *) "EditorInspector"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	void _edit_request_change(const object *arg0, const string arg1);
	void _feature_profile_changed();
	void _filter_changed(const string arg0);
	void _multiple_properties_changed(const pool_string_array arg0, const array arg1);
	void _node_removed(const node *arg0);
	void _object_id_selected(const string arg0, const int64_t arg1);
	void _property_changed(const string arg0, const variant arg1, const string arg2 = "", const bool arg3 = false);
	void _property_changed_update_all(const string arg0, const variant arg1, const string arg2, const bool arg3);
	void _property_checked(const string arg0, const bool arg1);
	void _property_keyed(const string arg0, const bool arg1);
	void _property_keyed_with_value(const string arg0, const variant arg1, const bool arg2);
	void _property_pinned(const string path_, const bool pinned);
	void _property_selected(const string arg0, const int64_t arg1);
	void _resource_selected(const string arg0, const ref<resource> arg1);
	void _vscroll_changed(const real_t arg0);
	void refresh();

};

}

#endif