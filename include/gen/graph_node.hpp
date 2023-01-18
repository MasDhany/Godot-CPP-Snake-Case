#ifndef GODOT_CPP_GRAPHNODE_HPP
#define GODOT_CPP_GRAPHNODE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "graph_node.hpp"

#include "container.hpp"
namespace gd {

class input_event;
class texture;

class graph_node : public container {
	struct ___method_bindings {
		godot_method_bind *mb__gui_input;
		godot_method_bind *mb_clear_all_slots;
		godot_method_bind *mb_clear_slot;
		godot_method_bind *mb_get_connection_input_color;
		godot_method_bind *mb_get_connection_input_count;
		godot_method_bind *mb_get_connection_input_position;
		godot_method_bind *mb_get_connection_input_type;
		godot_method_bind *mb_get_connection_output_color;
		godot_method_bind *mb_get_connection_output_count;
		godot_method_bind *mb_get_connection_output_position;
		godot_method_bind *mb_get_connection_output_type;
		godot_method_bind *mb_get_offset;
		godot_method_bind *mb_get_overlay;
		godot_method_bind *mb_get_slot_color_left;
		godot_method_bind *mb_get_slot_color_right;
		godot_method_bind *mb_get_slot_type_left;
		godot_method_bind *mb_get_slot_type_right;
		godot_method_bind *mb_get_title;
		godot_method_bind *mb_is_close_button_visible;
		godot_method_bind *mb_is_comment;
		godot_method_bind *mb_is_resizable;
		godot_method_bind *mb_is_selected;
		godot_method_bind *mb_is_slot_enabled_left;
		godot_method_bind *mb_is_slot_enabled_right;
		godot_method_bind *mb_set_comment;
		godot_method_bind *mb_set_offset;
		godot_method_bind *mb_set_overlay;
		godot_method_bind *mb_set_resizable;
		godot_method_bind *mb_set_selected;
		godot_method_bind *mb_set_show_close_button;
		godot_method_bind *mb_set_slot;
		godot_method_bind *mb_set_slot_color_left;
		godot_method_bind *mb_set_slot_color_right;
		godot_method_bind *mb_set_slot_enabled_left;
		godot_method_bind *mb_set_slot_enabled_right;
		godot_method_bind *mb_set_slot_type_left;
		godot_method_bind *mb_set_slot_type_right;
		godot_method_bind *mb_set_title;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "GraphNode"; }
	static inline const char *___get_godot_class_name() { return (const char *) "GraphNode"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Overlay {
		OVERLAY_DISABLED = 0,
		OVERLAY_BREAKPOINT = 1,
		OVERLAY_POSITION = 2,
	};

	// constants


	static graph_node *_new();

	// methods
	void _gui_input(const ref<input_event> arg0);
	void clear_all_slots();
	void clear_slot(const int64_t idx);
	color get_connection_input_color(const int64_t idx);
	int64_t get_connection_input_count();
	vector2 get_connection_input_position(const int64_t idx);
	int64_t get_connection_input_type(const int64_t idx);
	color get_connection_output_color(const int64_t idx);
	int64_t get_connection_output_count();
	vector2 get_connection_output_position(const int64_t idx);
	int64_t get_connection_output_type(const int64_t idx);
	vector2 get_offset() const;
	graph_node::Overlay get_overlay() const;
	color get_slot_color_left(const int64_t idx) const;
	color get_slot_color_right(const int64_t idx) const;
	int64_t get_slot_type_left(const int64_t idx) const;
	int64_t get_slot_type_right(const int64_t idx) const;
	string get_title() const;
	bool is_close_button_visible() const;
	bool is_comment() const;
	bool is_resizable() const;
	bool is_selected();
	bool is_slot_enabled_left(const int64_t idx) const;
	bool is_slot_enabled_right(const int64_t idx) const;
	void set_comment(const bool comment);
	void set_offset(const vector2 offset);
	void set_overlay(const int64_t overlay);
	void set_resizable(const bool resizable);
	void set_selected(const bool selected);
	void set_show_close_button(const bool show);
	void set_slot(const int64_t idx, const bool enable_left, const int64_t type_left, const color color_left, const bool enable_right, const int64_t type_right, const color color_right, const ref<texture> custom_left = nullptr, const ref<texture> custom_right = nullptr);
	void set_slot_color_left(const int64_t idx, const color color_left);
	void set_slot_color_right(const int64_t idx, const color color_right);
	void set_slot_enabled_left(const int64_t idx, const bool enable_left);
	void set_slot_enabled_right(const int64_t idx, const bool enable_right);
	void set_slot_type_left(const int64_t idx, const int64_t type_left);
	void set_slot_type_right(const int64_t idx, const int64_t type_right);
	void set_title(const string title);

};

}

#endif