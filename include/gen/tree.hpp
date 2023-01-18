#ifndef GODOT_CPP_TREE_HPP
#define GODOT_CPP_TREE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "tree.hpp"

#include "control.hpp"
namespace gd {

class input_event;
class object;
class tree_item;

class tree : public control {
	struct ___method_bindings {
		godot_method_bind *mb__gui_input;
		godot_method_bind *mb__popup_select;
		godot_method_bind *mb__range_click_timeout;
		godot_method_bind *mb__scroll_moved;
		godot_method_bind *mb__text_editor_enter;
		godot_method_bind *mb__text_editor_modal_close;
		godot_method_bind *mb__value_editor_changed;
		godot_method_bind *mb_are_column_titles_visible;
		godot_method_bind *mb_clear;
		godot_method_bind *mb_create_item;
		godot_method_bind *mb_edit_selected;
		godot_method_bind *mb_ensure_cursor_is_visible;
		godot_method_bind *mb_get_allow_reselect;
		godot_method_bind *mb_get_allow_rmb_select;
		godot_method_bind *mb_get_button_id_at_position;
		godot_method_bind *mb_get_column_at_position;
		godot_method_bind *mb_get_column_title;
		godot_method_bind *mb_get_column_width;
		godot_method_bind *mb_get_columns;
		godot_method_bind *mb_get_custom_popup_rect;
		godot_method_bind *mb_get_drop_mode_flags;
		godot_method_bind *mb_get_drop_section_at_position;
		godot_method_bind *mb_get_edited;
		godot_method_bind *mb_get_edited_column;
		godot_method_bind *mb_get_item_area_rect;
		godot_method_bind *mb_get_item_at_position;
		godot_method_bind *mb_get_next_selected;
		godot_method_bind *mb_get_pressed_button;
		godot_method_bind *mb_get_root;
		godot_method_bind *mb_get_scroll;
		godot_method_bind *mb_get_select_mode;
		godot_method_bind *mb_get_selected;
		godot_method_bind *mb_get_selected_column;
		godot_method_bind *mb_is_folding_hidden;
		godot_method_bind *mb_is_root_hidden;
		godot_method_bind *mb_scroll_to_item;
		godot_method_bind *mb_set_allow_reselect;
		godot_method_bind *mb_set_allow_rmb_select;
		godot_method_bind *mb_set_column_expand;
		godot_method_bind *mb_set_column_min_width;
		godot_method_bind *mb_set_column_title;
		godot_method_bind *mb_set_column_titles_visible;
		godot_method_bind *mb_set_columns;
		godot_method_bind *mb_set_drop_mode_flags;
		godot_method_bind *mb_set_hide_folding;
		godot_method_bind *mb_set_hide_root;
		godot_method_bind *mb_set_select_mode;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Tree"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Tree"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum SelectMode {
		SELECT_SINGLE = 0,
		SELECT_ROW = 1,
		SELECT_MULTI = 2,
	};
	enum DropModeFlags {
		DROP_MODE_DISABLED = 0,
		DROP_MODE_ON_ITEM = 1,
		DROP_MODE_INBETWEEN = 2,
	};

	// constants


	static tree *_new();

	// methods
	void _gui_input(const ref<input_event> arg0);
	void _popup_select(const int64_t arg0);
	void _range_click_timeout();
	void _scroll_moved(const real_t arg0);
	void _text_editor_enter(const string arg0);
	void _text_editor_modal_close();
	void _value_editor_changed(const real_t arg0);
	bool are_column_titles_visible() const;
	void clear();
	tree_item *create_item(const object *parent = nullptr, const int64_t idx = -1);
	bool edit_selected();
	void ensure_cursor_is_visible();
	bool get_allow_reselect() const;
	bool get_allow_rmb_select() const;
	int64_t get_button_id_at_position(const vector2 position) const;
	int64_t get_column_at_position(const vector2 position) const;
	string get_column_title(const int64_t column) const;
	int64_t get_column_width(const int64_t column) const;
	int64_t get_columns() const;
	rect2 get_custom_popup_rect() const;
	int64_t get_drop_mode_flags() const;
	int64_t get_drop_section_at_position(const vector2 position) const;
	tree_item *get_edited() const;
	int64_t get_edited_column() const;
	rect2 get_item_area_rect(const object *item, const int64_t column = -1) const;
	tree_item *get_item_at_position(const vector2 position) const;
	tree_item *get_next_selected(const object *from);
	int64_t get_pressed_button() const;
	tree_item *get_root();
	vector2 get_scroll() const;
	tree::SelectMode get_select_mode() const;
	tree_item *get_selected() const;
	int64_t get_selected_column() const;
	bool is_folding_hidden() const;
	bool is_root_hidden() const;
	void scroll_to_item(const object *item);
	void set_allow_reselect(const bool allow);
	void set_allow_rmb_select(const bool allow);
	void set_column_expand(const int64_t column, const bool expand);
	void set_column_min_width(const int64_t column, const int64_t min_width);
	void set_column_title(const int64_t column, const string title);
	void set_column_titles_visible(const bool visible);
	void set_columns(const int64_t amount);
	void set_drop_mode_flags(const int64_t flags);
	void set_hide_folding(const bool hide);
	void set_hide_root(const bool enable);
	void set_select_mode(const int64_t mode);

};

}

#endif