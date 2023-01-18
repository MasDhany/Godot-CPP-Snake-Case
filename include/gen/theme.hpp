#ifndef GODOT_CPP_THEME_HPP
#define GODOT_CPP_THEME_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {

class font;
class style_box;
class texture;
class theme;

class theme : public resource {
	struct ___method_bindings {
		godot_method_bind *mb__emit_theme_changed;
		godot_method_bind *mb_add_type;
		godot_method_bind *mb_clear;
		godot_method_bind *mb_clear_color;
		godot_method_bind *mb_clear_constant;
		godot_method_bind *mb_clear_font;
		godot_method_bind *mb_clear_icon;
		godot_method_bind *mb_clear_stylebox;
		godot_method_bind *mb_clear_theme_item;
		godot_method_bind *mb_clear_type_variation;
		godot_method_bind *mb_copy_default_theme;
		godot_method_bind *mb_copy_theme;
		godot_method_bind *mb_get_color;
		godot_method_bind *mb_get_color_list;
		godot_method_bind *mb_get_color_types;
		godot_method_bind *mb_get_constant;
		godot_method_bind *mb_get_constant_list;
		godot_method_bind *mb_get_constant_types;
		godot_method_bind *mb_get_default_font;
		godot_method_bind *mb_get_font;
		godot_method_bind *mb_get_font_list;
		godot_method_bind *mb_get_font_types;
		godot_method_bind *mb_get_icon;
		godot_method_bind *mb_get_icon_list;
		godot_method_bind *mb_get_icon_types;
		godot_method_bind *mb_get_stylebox;
		godot_method_bind *mb_get_stylebox_list;
		godot_method_bind *mb_get_stylebox_types;
		godot_method_bind *mb_get_theme_item;
		godot_method_bind *mb_get_theme_item_list;
		godot_method_bind *mb_get_theme_item_types;
		godot_method_bind *mb_get_type_list;
		godot_method_bind *mb_get_type_variation_base;
		godot_method_bind *mb_get_type_variation_list;
		godot_method_bind *mb_has_color;
		godot_method_bind *mb_has_constant;
		godot_method_bind *mb_has_default_font;
		godot_method_bind *mb_has_font;
		godot_method_bind *mb_has_icon;
		godot_method_bind *mb_has_stylebox;
		godot_method_bind *mb_has_theme_item;
		godot_method_bind *mb_is_type_variation;
		godot_method_bind *mb_merge_with;
		godot_method_bind *mb_remove_type;
		godot_method_bind *mb_rename_color;
		godot_method_bind *mb_rename_constant;
		godot_method_bind *mb_rename_font;
		godot_method_bind *mb_rename_icon;
		godot_method_bind *mb_rename_stylebox;
		godot_method_bind *mb_rename_theme_item;
		godot_method_bind *mb_set_color;
		godot_method_bind *mb_set_constant;
		godot_method_bind *mb_set_default_font;
		godot_method_bind *mb_set_font;
		godot_method_bind *mb_set_icon;
		godot_method_bind *mb_set_stylebox;
		godot_method_bind *mb_set_theme_item;
		godot_method_bind *mb_set_type_variation;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Theme"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Theme"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum DataType {
		DATA_TYPE_COLOR = 0,
		DATA_TYPE_CONSTANT = 1,
		DATA_TYPE_FONT = 2,
		DATA_TYPE_ICON = 3,
		DATA_TYPE_STYLEBOX = 4,
		DATA_TYPE_MAX = 5,
	};

	// constants


	static theme *_new();

	// methods
	void _emit_theme_changed(const bool notify_list_changed = false);
	void add_type(const string theme_type);
	void clear();
	void clear_color(const string name, const string theme_type);
	void clear_constant(const string name, const string theme_type);
	void clear_font(const string name, const string theme_type);
	void clear_icon(const string name, const string theme_type);
	void clear_stylebox(const string name, const string theme_type);
	void clear_theme_item(const int64_t data_type, const string name, const string theme_type);
	void clear_type_variation(const string theme_type);
	void copy_default_theme();
	void copy_theme(const ref<theme> other);
	color get_color(const string name, const string theme_type) const;
	pool_string_array get_color_list(const string theme_type) const;
	pool_string_array get_color_types() const;
	int64_t get_constant(const string name, const string theme_type) const;
	pool_string_array get_constant_list(const string theme_type) const;
	pool_string_array get_constant_types() const;
	ref<font> get_default_font() const;
	ref<font> get_font(const string name, const string theme_type) const;
	pool_string_array get_font_list(const string theme_type) const;
	pool_string_array get_font_types() const;
	ref<texture> get_icon(const string name, const string theme_type) const;
	pool_string_array get_icon_list(const string theme_type) const;
	pool_string_array get_icon_types() const;
	ref<style_box> get_stylebox(const string name, const string theme_type) const;
	pool_string_array get_stylebox_list(const string theme_type) const;
	pool_string_array get_stylebox_types() const;
	variant get_theme_item(const int64_t data_type, const string name, const string theme_type) const;
	pool_string_array get_theme_item_list(const int64_t data_type, const string theme_type) const;
	pool_string_array get_theme_item_types(const int64_t data_type) const;
	pool_string_array get_type_list(const string theme_type) const;
	string get_type_variation_base(const string theme_type) const;
	pool_string_array get_type_variation_list(const string base_type) const;
	bool has_color(const string name, const string theme_type) const;
	bool has_constant(const string name, const string theme_type) const;
	bool has_default_font() const;
	bool has_font(const string name, const string theme_type) const;
	bool has_icon(const string name, const string theme_type) const;
	bool has_stylebox(const string name, const string theme_type) const;
	bool has_theme_item(const int64_t data_type, const string name, const string theme_type) const;
	bool is_type_variation(const string theme_type, const string base_type) const;
	void merge_with(const ref<theme> other);
	void remove_type(const string theme_type);
	void rename_color(const string old_name, const string name, const string theme_type);
	void rename_constant(const string old_name, const string name, const string theme_type);
	void rename_font(const string old_name, const string name, const string theme_type);
	void rename_icon(const string old_name, const string name, const string theme_type);
	void rename_stylebox(const string old_name, const string name, const string theme_type);
	void rename_theme_item(const int64_t data_type, const string old_name, const string name, const string theme_type);
	void set_color(const string name, const string theme_type, const color color_);
	void set_constant(const string name, const string theme_type, const int64_t constant);
	void set_default_font(const ref<font> font_);
	void set_font(const string name, const string theme_type, const ref<font> font_);
	void set_icon(const string name, const string theme_type, const ref<texture> texture_);
	void set_stylebox(const string name, const string theme_type, const ref<style_box> texture_);
	void set_theme_item(const int64_t data_type, const string name, const string theme_type, const variant value);
	void set_type_variation(const string theme_type, const string base_type);

};

}

#endif