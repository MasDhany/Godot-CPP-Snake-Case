#ifndef GODOT_CPP_TABCONTAINER_HPP
#define GODOT_CPP_TABCONTAINER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "tab_container.hpp"

#include "container.hpp"
namespace gd {

class control;
class input_event;
class node;
class popup;
class texture;

class tab_container : public container {
	struct ___method_bindings {
		godot_method_bind *mb__child_renamed_callback;
		godot_method_bind *mb__gui_input;
		godot_method_bind *mb__on_mouse_exited;
		godot_method_bind *mb__on_theme_changed;
		godot_method_bind *mb__repaint;
		godot_method_bind *mb__update_current_tab;
		godot_method_bind *mb_are_tabs_visible;
		godot_method_bind *mb_get_current_tab;
		godot_method_bind *mb_get_current_tab_control;
		godot_method_bind *mb_get_drag_to_rearrange_enabled;
		godot_method_bind *mb_get_popup;
		godot_method_bind *mb_get_previous_tab;
		godot_method_bind *mb_get_tab_align;
		godot_method_bind *mb_get_tab_control;
		godot_method_bind *mb_get_tab_count;
		godot_method_bind *mb_get_tab_disabled;
		godot_method_bind *mb_get_tab_hidden;
		godot_method_bind *mb_get_tab_icon;
		godot_method_bind *mb_get_tab_idx_at_point;
		godot_method_bind *mb_get_tab_title;
		godot_method_bind *mb_get_tabs_rearrange_group;
		godot_method_bind *mb_get_use_hidden_tabs_for_min_size;
		godot_method_bind *mb_is_all_tabs_in_front;
		godot_method_bind *mb_set_all_tabs_in_front;
		godot_method_bind *mb_set_current_tab;
		godot_method_bind *mb_set_drag_to_rearrange_enabled;
		godot_method_bind *mb_set_popup;
		godot_method_bind *mb_set_tab_align;
		godot_method_bind *mb_set_tab_disabled;
		godot_method_bind *mb_set_tab_hidden;
		godot_method_bind *mb_set_tab_icon;
		godot_method_bind *mb_set_tab_title;
		godot_method_bind *mb_set_tabs_rearrange_group;
		godot_method_bind *mb_set_tabs_visible;
		godot_method_bind *mb_set_use_hidden_tabs_for_min_size;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "TabContainer"; }
	static inline const char *___get_godot_class_name() { return (const char *) "TabContainer"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum TabAlign {
		ALIGN_LEFT = 0,
		ALIGN_CENTER = 1,
		ALIGN_RIGHT = 2,
	};

	// constants


	static tab_container *_new();

	// methods
	void _child_renamed_callback();
	void _gui_input(const ref<input_event> arg0);
	void _on_mouse_exited();
	void _on_theme_changed();
	void _repaint();
	void _update_current_tab();
	bool are_tabs_visible() const;
	int64_t get_current_tab() const;
	control *get_current_tab_control() const;
	bool get_drag_to_rearrange_enabled() const;
	popup *get_popup() const;
	int64_t get_previous_tab() const;
	tab_container::TabAlign get_tab_align() const;
	control *get_tab_control(const int64_t tab_idx) const;
	int64_t get_tab_count() const;
	bool get_tab_disabled(const int64_t tab_idx) const;
	bool get_tab_hidden(const int64_t tab_idx) const;
	ref<texture> get_tab_icon(const int64_t tab_idx) const;
	int64_t get_tab_idx_at_point(const vector2 point) const;
	string get_tab_title(const int64_t tab_idx) const;
	int64_t get_tabs_rearrange_group() const;
	bool get_use_hidden_tabs_for_min_size() const;
	bool is_all_tabs_in_front() const;
	void set_all_tabs_in_front(const bool is_front);
	void set_current_tab(const int64_t tab_idx);
	void set_drag_to_rearrange_enabled(const bool enabled);
	void set_popup(const node *popup_);
	void set_tab_align(const int64_t align);
	void set_tab_disabled(const int64_t tab_idx, const bool disabled);
	void set_tab_hidden(const int64_t tab_idx, const bool hidden);
	void set_tab_icon(const int64_t tab_idx, const ref<texture> icon);
	void set_tab_title(const int64_t tab_idx, const string title);
	void set_tabs_rearrange_group(const int64_t group_id);
	void set_tabs_visible(const bool visible);
	void set_use_hidden_tabs_for_min_size(const bool enabled);

};

}

#endif