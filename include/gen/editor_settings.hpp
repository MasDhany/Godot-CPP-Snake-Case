#ifndef GODOT_CPP_EDITORSETTINGS_HPP
#define GODOT_CPP_EDITORSETTINGS_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {


class editor_settings : public resource {
	struct ___method_bindings {
		godot_method_bind *mb_add_property_info;
		godot_method_bind *mb_erase;
		godot_method_bind *mb_get_favorites;
		godot_method_bind *mb_get_project_metadata;
		godot_method_bind *mb_get_project_settings_dir;
		godot_method_bind *mb_get_recent_dirs;
		godot_method_bind *mb_get_setting;
		godot_method_bind *mb_get_settings_dir;
		godot_method_bind *mb_has_setting;
		godot_method_bind *mb_property_can_revert;
		godot_method_bind *mb_property_get_revert;
		godot_method_bind *mb_set_favorites;
		godot_method_bind *mb_set_initial_value;
		godot_method_bind *mb_set_project_metadata;
		godot_method_bind *mb_set_recent_dirs;
		godot_method_bind *mb_set_setting;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "EditorSettings"; }
	static inline const char *___get_godot_class_name() { return (const char *) "EditorSettings"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants
	const static int NOTIFICATION_EDITOR_SETTINGS_CHANGED = 10000;

	// methods
	void add_property_info(const dictionary info);
	void erase(const string property);
	pool_string_array get_favorites() const;
	variant get_project_metadata(const string section, const string key, const variant _default = variant()) const;
	string get_project_settings_dir() const;
	pool_string_array get_recent_dirs() const;
	variant get_setting(const string name) const;
	string get_settings_dir() const;
	bool has_setting(const string name) const;
	bool property_can_revert(const string name);
	variant property_get_revert(const string name);
	void set_favorites(const pool_string_array dirs);
	void set_initial_value(const string name, const variant value, const bool update_current);
	void set_project_metadata(const string section, const string key, const variant data);
	void set_recent_dirs(const pool_string_array dirs);
	void set_setting(const string name, const variant value);

};

}

#endif