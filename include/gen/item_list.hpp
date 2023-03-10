#ifndef GODOT_CPP_ITEMLIST_HPP
#define GODOT_CPP_ITEMLIST_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "item_list.hpp"

#include "control.hpp"
namespace gd {

class input_event;
class texture;
class vscroll_bar;

class item_list : public control {
	struct ___method_bindings {
		godot_method_bind *mb__get_items;
		godot_method_bind *mb__gui_input;
		godot_method_bind *mb__scroll_changed;
		godot_method_bind *mb__set_items;
		godot_method_bind *mb_add_icon_item;
		godot_method_bind *mb_add_item;
		godot_method_bind *mb_clear;
		godot_method_bind *mb_ensure_current_is_visible;
		godot_method_bind *mb_get_allow_reselect;
		godot_method_bind *mb_get_allow_rmb_select;
		godot_method_bind *mb_get_fixed_column_width;
		godot_method_bind *mb_get_fixed_icon_size;
		godot_method_bind *mb_get_icon_mode;
		godot_method_bind *mb_get_icon_scale;
		godot_method_bind *mb_get_item_at_position;
		godot_method_bind *mb_get_item_count;
		godot_method_bind *mb_get_item_custom_bg_color;
		godot_method_bind *mb_get_item_custom_fg_color;
		godot_method_bind *mb_get_item_icon;
		godot_method_bind *mb_get_item_icon_modulate;
		godot_method_bind *mb_get_item_icon_region;
		godot_method_bind *mb_get_item_metadata;
		godot_method_bind *mb_get_item_text;
		godot_method_bind *mb_get_item_tooltip;
		godot_method_bind *mb_get_max_columns;
		godot_method_bind *mb_get_max_text_lines;
		godot_method_bind *mb_get_select_mode;
		godot_method_bind *mb_get_selected_items;
		godot_method_bind *mb_get_v_scroll;
		godot_method_bind *mb_has_auto_height;
		godot_method_bind *mb_is_anything_selected;
		godot_method_bind *mb_is_item_disabled;
		godot_method_bind *mb_is_item_icon_transposed;
		godot_method_bind *mb_is_item_selectable;
		godot_method_bind *mb_is_item_tooltip_enabled;
		godot_method_bind *mb_is_same_column_width;
		godot_method_bind *mb_is_selected;
		godot_method_bind *mb_move_item;
		godot_method_bind *mb_remove_item;
		godot_method_bind *mb_select;
		godot_method_bind *mb_set_allow_reselect;
		godot_method_bind *mb_set_allow_rmb_select;
		godot_method_bind *mb_set_auto_height;
		godot_method_bind *mb_set_fixed_column_width;
		godot_method_bind *mb_set_fixed_icon_size;
		godot_method_bind *mb_set_icon_mode;
		godot_method_bind *mb_set_icon_scale;
		godot_method_bind *mb_set_item_custom_bg_color;
		godot_method_bind *mb_set_item_custom_fg_color;
		godot_method_bind *mb_set_item_disabled;
		godot_method_bind *mb_set_item_icon;
		godot_method_bind *mb_set_item_icon_modulate;
		godot_method_bind *mb_set_item_icon_region;
		godot_method_bind *mb_set_item_icon_transposed;
		godot_method_bind *mb_set_item_metadata;
		godot_method_bind *mb_set_item_selectable;
		godot_method_bind *mb_set_item_text;
		godot_method_bind *mb_set_item_tooltip;
		godot_method_bind *mb_set_item_tooltip_enabled;
		godot_method_bind *mb_set_max_columns;
		godot_method_bind *mb_set_max_text_lines;
		godot_method_bind *mb_set_same_column_width;
		godot_method_bind *mb_set_select_mode;
		godot_method_bind *mb_sort_items_by_text;
		godot_method_bind *mb_unselect;
		godot_method_bind *mb_unselect_all;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "ItemList"; }
	static inline const char *___get_godot_class_name() { return (const char *) "ItemList"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum SelectMode {
		SELECT_SINGLE = 0,
		SELECT_MULTI = 1,
	};
	enum IconMode {
		ICON_MODE_TOP = 0,
		ICON_MODE_LEFT = 1,
	};

	// constants


	static item_list *_new();

	// methods
	array _get_items() const;
	void _gui_input(const ref<input_event> arg0);
	void _scroll_changed(const real_t arg0);
	void _set_items(const array arg0);
	void add_icon_item(const ref<texture> icon, const bool selectable = true);
	void add_item(const string text, const ref<texture> icon = nullptr, const bool selectable = true);
	void clear();
	void ensure_current_is_visible();
	bool get_allow_reselect() const;
	bool get_allow_rmb_select() const;
	int64_t get_fixed_column_width() const;
	vector2 get_fixed_icon_size() const;
	item_list::IconMode get_icon_mode() const;
	real_t get_icon_scale() const;
	int64_t get_item_at_position(const vector2 position, const bool exact = false) const;
	int64_t get_item_count() const;
	color get_item_custom_bg_color(const int64_t idx) const;
	color get_item_custom_fg_color(const int64_t idx) const;
	ref<texture> get_item_icon(const int64_t idx) const;
	color get_item_icon_modulate(const int64_t idx) const;
	rect2 get_item_icon_region(const int64_t idx) const;
	variant get_item_metadata(const int64_t idx) const;
	string get_item_text(const int64_t idx) const;
	string get_item_tooltip(const int64_t idx) const;
	int64_t get_max_columns() const;
	int64_t get_max_text_lines() const;
	item_list::SelectMode get_select_mode() const;
	pool_int_array get_selected_items();
	vscroll_bar *get_v_scroll();
	bool has_auto_height() const;
	bool is_anything_selected();
	bool is_item_disabled(const int64_t idx) const;
	bool is_item_icon_transposed(const int64_t idx) const;
	bool is_item_selectable(const int64_t idx) const;
	bool is_item_tooltip_enabled(const int64_t idx) const;
	bool is_same_column_width() const;
	bool is_selected(const int64_t idx) const;
	void move_item(const int64_t from_idx, const int64_t to_idx);
	void remove_item(const int64_t idx);
	void select(const int64_t idx, const bool single = true);
	void set_allow_reselect(const bool allow);
	void set_allow_rmb_select(const bool allow);
	void set_auto_height(const bool enable);
	void set_fixed_column_width(const int64_t width);
	void set_fixed_icon_size(const vector2 size);
	void set_icon_mode(const int64_t mode);
	void set_icon_scale(const real_t scale);
	void set_item_custom_bg_color(const int64_t idx, const color custom_bg_color);
	void set_item_custom_fg_color(const int64_t idx, const color custom_fg_color);
	void set_item_disabled(const int64_t idx, const bool disabled);
	void set_item_icon(const int64_t idx, const ref<texture> icon);
	void set_item_icon_modulate(const int64_t idx, const color modulate);
	void set_item_icon_region(const int64_t idx, const rect2 rect);
	void set_item_icon_transposed(const int64_t idx, const bool transposed);
	void set_item_metadata(const int64_t idx, const variant metadata);
	void set_item_selectable(const int64_t idx, const bool selectable);
	void set_item_text(const int64_t idx, const string text);
	void set_item_tooltip(const int64_t idx, const string tooltip);
	void set_item_tooltip_enabled(const int64_t idx, const bool enable);
	void set_max_columns(const int64_t amount);
	void set_max_text_lines(const int64_t lines);
	void set_same_column_width(const bool enable);
	void set_select_mode(const int64_t mode);
	void sort_items_by_text();
	void unselect(const int64_t idx);
	void unselect_all();

};

}

#endif