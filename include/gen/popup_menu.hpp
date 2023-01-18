#ifndef GODOT_CPP_POPUPMENU_HPP
#define GODOT_CPP_POPUPMENU_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "popup.hpp"
namespace gd {

class input_event;
class short_cut;
class texture;

class popup_menu : public popup {
	struct ___method_bindings {
		godot_method_bind *mb__get_items;
		godot_method_bind *mb__gui_input;
		godot_method_bind *mb__set_items;
		godot_method_bind *mb__submenu_timeout;
		godot_method_bind *mb_add_check_item;
		godot_method_bind *mb_add_check_shortcut;
		godot_method_bind *mb_add_icon_check_item;
		godot_method_bind *mb_add_icon_check_shortcut;
		godot_method_bind *mb_add_icon_item;
		godot_method_bind *mb_add_icon_radio_check_item;
		godot_method_bind *mb_add_icon_radio_check_shortcut;
		godot_method_bind *mb_add_icon_shortcut;
		godot_method_bind *mb_add_item;
		godot_method_bind *mb_add_multistate_item;
		godot_method_bind *mb_add_radio_check_item;
		godot_method_bind *mb_add_radio_check_shortcut;
		godot_method_bind *mb_add_separator;
		godot_method_bind *mb_add_shortcut;
		godot_method_bind *mb_add_submenu_item;
		godot_method_bind *mb_clear;
		godot_method_bind *mb_get_allow_search;
		godot_method_bind *mb_get_current_index;
		godot_method_bind *mb_get_item_accelerator;
		godot_method_bind *mb_get_item_count;
		godot_method_bind *mb_get_item_icon;
		godot_method_bind *mb_get_item_id;
		godot_method_bind *mb_get_item_index;
		godot_method_bind *mb_get_item_metadata;
		godot_method_bind *mb_get_item_shortcut;
		godot_method_bind *mb_get_item_submenu;
		godot_method_bind *mb_get_item_text;
		godot_method_bind *mb_get_item_tooltip;
		godot_method_bind *mb_get_submenu_popup_delay;
		godot_method_bind *mb_is_hide_on_checkable_item_selection;
		godot_method_bind *mb_is_hide_on_item_selection;
		godot_method_bind *mb_is_hide_on_state_item_selection;
		godot_method_bind *mb_is_hide_on_window_lose_focus;
		godot_method_bind *mb_is_item_checkable;
		godot_method_bind *mb_is_item_checked;
		godot_method_bind *mb_is_item_disabled;
		godot_method_bind *mb_is_item_radio_checkable;
		godot_method_bind *mb_is_item_separator;
		godot_method_bind *mb_is_item_shortcut_disabled;
		godot_method_bind *mb_remove_item;
		godot_method_bind *mb_set_allow_search;
		godot_method_bind *mb_set_current_index;
		godot_method_bind *mb_set_hide_on_checkable_item_selection;
		godot_method_bind *mb_set_hide_on_item_selection;
		godot_method_bind *mb_set_hide_on_state_item_selection;
		godot_method_bind *mb_set_hide_on_window_lose_focus;
		godot_method_bind *mb_set_item_accelerator;
		godot_method_bind *mb_set_item_as_checkable;
		godot_method_bind *mb_set_item_as_radio_checkable;
		godot_method_bind *mb_set_item_as_separator;
		godot_method_bind *mb_set_item_checked;
		godot_method_bind *mb_set_item_disabled;
		godot_method_bind *mb_set_item_icon;
		godot_method_bind *mb_set_item_id;
		godot_method_bind *mb_set_item_metadata;
		godot_method_bind *mb_set_item_multistate;
		godot_method_bind *mb_set_item_shortcut;
		godot_method_bind *mb_set_item_shortcut_disabled;
		godot_method_bind *mb_set_item_submenu;
		godot_method_bind *mb_set_item_text;
		godot_method_bind *mb_set_item_tooltip;
		godot_method_bind *mb_set_submenu_popup_delay;
		godot_method_bind *mb_toggle_item_checked;
		godot_method_bind *mb_toggle_item_multistate;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "PopupMenu"; }
	static inline const char *___get_godot_class_name() { return (const char *) "PopupMenu"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static popup_menu *_new();

	// methods
	array _get_items() const;
	void _gui_input(const ref<input_event> arg0);
	void _set_items(const array arg0);
	void _submenu_timeout();
	void add_check_item(const string label_, const int64_t id = -1, const int64_t accel = 0);
	void add_check_shortcut(const ref<short_cut> shortcut, const int64_t id = -1, const bool global = false);
	void add_icon_check_item(const ref<texture> texture_, const string label_, const int64_t id = -1, const int64_t accel = 0);
	void add_icon_check_shortcut(const ref<texture> texture_, const ref<short_cut> shortcut, const int64_t id = -1, const bool global = false);
	void add_icon_item(const ref<texture> texture_, const string label_, const int64_t id = -1, const int64_t accel = 0);
	void add_icon_radio_check_item(const ref<texture> texture_, const string label_, const int64_t id = -1, const int64_t accel = 0);
	void add_icon_radio_check_shortcut(const ref<texture> texture_, const ref<short_cut> shortcut, const int64_t id = -1, const bool global = false);
	void add_icon_shortcut(const ref<texture> texture_, const ref<short_cut> shortcut, const int64_t id = -1, const bool global = false);
	void add_item(const string label_, const int64_t id = -1, const int64_t accel = 0);
	void add_multistate_item(const string label_, const int64_t max_states, const int64_t default_state = 0, const int64_t id = -1, const int64_t accel = 0);
	void add_radio_check_item(const string label_, const int64_t id = -1, const int64_t accel = 0);
	void add_radio_check_shortcut(const ref<short_cut> shortcut, const int64_t id = -1, const bool global = false);
	void add_separator(const string label_ = "", const int64_t id = -1);
	void add_shortcut(const ref<short_cut> shortcut, const int64_t id = -1, const bool global = false);
	void add_submenu_item(const string label_, const string submenu, const int64_t id = -1);
	void clear();
	bool get_allow_search() const;
	int64_t get_current_index() const;
	int64_t get_item_accelerator(const int64_t idx) const;
	int64_t get_item_count() const;
	ref<texture> get_item_icon(const int64_t idx) const;
	int64_t get_item_id(const int64_t idx) const;
	int64_t get_item_index(const int64_t id) const;
	variant get_item_metadata(const int64_t idx) const;
	ref<short_cut> get_item_shortcut(const int64_t idx) const;
	string get_item_submenu(const int64_t idx) const;
	string get_item_text(const int64_t idx) const;
	string get_item_tooltip(const int64_t idx) const;
	real_t get_submenu_popup_delay() const;
	bool is_hide_on_checkable_item_selection() const;
	bool is_hide_on_item_selection() const;
	bool is_hide_on_state_item_selection() const;
	bool is_hide_on_window_lose_focus() const;
	bool is_item_checkable(const int64_t idx) const;
	bool is_item_checked(const int64_t idx) const;
	bool is_item_disabled(const int64_t idx) const;
	bool is_item_radio_checkable(const int64_t idx) const;
	bool is_item_separator(const int64_t idx) const;
	bool is_item_shortcut_disabled(const int64_t idx) const;
	void remove_item(const int64_t idx);
	void set_allow_search(const bool allow);
	void set_current_index(const int64_t index);
	void set_hide_on_checkable_item_selection(const bool enable);
	void set_hide_on_item_selection(const bool enable);
	void set_hide_on_state_item_selection(const bool enable);
	void set_hide_on_window_lose_focus(const bool enable);
	void set_item_accelerator(const int64_t idx, const int64_t accel);
	void set_item_as_checkable(const int64_t idx, const bool enable);
	void set_item_as_radio_checkable(const int64_t idx, const bool enable);
	void set_item_as_separator(const int64_t idx, const bool enable);
	void set_item_checked(const int64_t idx, const bool checked);
	void set_item_disabled(const int64_t idx, const bool disabled);
	void set_item_icon(const int64_t idx, const ref<texture> icon);
	void set_item_id(const int64_t idx, const int64_t id);
	void set_item_metadata(const int64_t idx, const variant metadata);
	void set_item_multistate(const int64_t idx, const int64_t state);
	void set_item_shortcut(const int64_t idx, const ref<short_cut> shortcut, const bool global = false);
	void set_item_shortcut_disabled(const int64_t idx, const bool disabled);
	void set_item_submenu(const int64_t idx, const string submenu);
	void set_item_text(const int64_t idx, const string text);
	void set_item_tooltip(const int64_t idx, const string tooltip);
	void set_submenu_popup_delay(const real_t seconds);
	void toggle_item_checked(const int64_t idx);
	void toggle_item_multistate(const int64_t idx);

};

}

#endif