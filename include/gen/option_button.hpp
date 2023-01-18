#ifndef GODOT_CPP_OPTIONBUTTON_HPP
#define GODOT_CPP_OPTIONBUTTON_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "button.hpp"
namespace gd {

class popup_menu;
class texture;

class option_button : public button {
	struct ___method_bindings {
		godot_method_bind *mb__focused;
		godot_method_bind *mb__get_items;
		godot_method_bind *mb__select_int;
		godot_method_bind *mb__selected;
		godot_method_bind *mb__set_items;
		godot_method_bind *mb_add_icon_item;
		godot_method_bind *mb_add_item;
		godot_method_bind *mb_add_separator;
		godot_method_bind *mb_clear;
		godot_method_bind *mb_get_item_count;
		godot_method_bind *mb_get_item_icon;
		godot_method_bind *mb_get_item_id;
		godot_method_bind *mb_get_item_index;
		godot_method_bind *mb_get_item_metadata;
		godot_method_bind *mb_get_item_text;
		godot_method_bind *mb_get_item_tooltip;
		godot_method_bind *mb_get_popup;
		godot_method_bind *mb_get_selected;
		godot_method_bind *mb_get_selected_id;
		godot_method_bind *mb_get_selected_metadata;
		godot_method_bind *mb_is_item_disabled;
		godot_method_bind *mb_remove_item;
		godot_method_bind *mb_select;
		godot_method_bind *mb_set_item_disabled;
		godot_method_bind *mb_set_item_icon;
		godot_method_bind *mb_set_item_id;
		godot_method_bind *mb_set_item_metadata;
		godot_method_bind *mb_set_item_text;
		godot_method_bind *mb_set_item_tooltip;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "OptionButton"; }
	static inline const char *___get_godot_class_name() { return (const char *) "OptionButton"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static option_button *_new();

	// methods
	void _focused(const int64_t arg0);
	array _get_items() const;
	void _select_int(const int64_t arg0);
	void _selected(const int64_t arg0);
	void _set_items(const array arg0);
	void add_icon_item(const ref<texture> texture_, const string label_, const int64_t id = -1);
	void add_item(const string label_, const int64_t id = -1);
	void add_separator();
	void clear();
	int64_t get_item_count() const;
	ref<texture> get_item_icon(const int64_t idx) const;
	int64_t get_item_id(const int64_t idx) const;
	int64_t get_item_index(const int64_t id) const;
	variant get_item_metadata(const int64_t idx) const;
	string get_item_text(const int64_t idx) const;
	string get_item_tooltip(const int64_t idx) const;
	popup_menu *get_popup() const;
	int64_t get_selected() const;
	int64_t get_selected_id() const;
	variant get_selected_metadata() const;
	bool is_item_disabled(const int64_t idx) const;
	void remove_item(const int64_t idx);
	void select(const int64_t idx);
	void set_item_disabled(const int64_t idx, const bool disabled);
	void set_item_icon(const int64_t idx, const ref<texture> texture_);
	void set_item_id(const int64_t idx, const int64_t id);
	void set_item_metadata(const int64_t idx, const variant metadata);
	void set_item_text(const int64_t idx, const string text);
	void set_item_tooltip(const int64_t idx, const string tooltip);

};

}

#endif