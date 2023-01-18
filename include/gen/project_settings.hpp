#ifndef GODOT_CPP_PROJECTSETTINGS_HPP
#define GODOT_CPP_PROJECTSETTINGS_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "object.hpp"
namespace gd {


class project_settings : public object {
	static project_settings *_singleton;

	project_settings();

	struct ___method_bindings {
		godot_method_bind *mb_add_property_info;
		godot_method_bind *mb_clear;
		godot_method_bind *mb_get_order;
		godot_method_bind *mb_get_setting;
		godot_method_bind *mb_globalize_path;
		godot_method_bind *mb_has_setting;
		godot_method_bind *mb_load_resource_pack;
		godot_method_bind *mb_localize_path;
		godot_method_bind *mb_property_can_revert;
		godot_method_bind *mb_property_get_revert;
		godot_method_bind *mb_save;
		godot_method_bind *mb_save_custom;
		godot_method_bind *mb_set_initial_value;
		godot_method_bind *mb_set_order;
		godot_method_bind *mb_set_setting;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline project_settings *get_singleton()
	{
		if (!project_settings::_singleton) {
			project_settings::_singleton = new project_settings;
		}
		return project_settings::_singleton;
	}

	static inline const char *___get_class_name() { return (const char *) "ProjectSettings"; }
	static inline const char *___get_godot_class_name() { return (const char *) "ProjectSettings"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	void add_property_info(const dictionary hint);
	void clear(const string name);
	int64_t get_order(const string name) const;
	variant get_setting(const string name) const;
	string globalize_path(const string path_) const;
	bool has_setting(const string name) const;
	bool load_resource_pack(const string pack, const bool replace_files = true, const int64_t offset = 0);
	string localize_path(const string path_) const;
	bool property_can_revert(const string name);
	variant property_get_revert(const string name);
	error save();
	error save_custom(const string file_);
	void set_initial_value(const string name, const variant value);
	void set_order(const string name, const int64_t position);
	void set_setting(const string name, const variant value);

};

}

#endif