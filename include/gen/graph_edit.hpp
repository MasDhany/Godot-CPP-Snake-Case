#ifndef GODOT_CPP_GRAPHEDIT_HPP
#define GODOT_CPP_GRAPHEDIT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "control.hpp"
namespace gd {

class hbox_container;
class input_event;
class node;

class graph_edit : public control {
	struct ___method_bindings {
		godot_method_bind *mb__connections_layer_draw;
		godot_method_bind *mb__graph_node_moved;
		godot_method_bind *mb__graph_node_raised;
		godot_method_bind *mb__graph_node_slot_updated;
		godot_method_bind *mb__gui_input;
		godot_method_bind *mb__minimap_draw;
		godot_method_bind *mb__minimap_toggled;
		godot_method_bind *mb__scroll_moved;
		godot_method_bind *mb__snap_toggled;
		godot_method_bind *mb__snap_value_changed;
		godot_method_bind *mb__top_layer_draw;
		godot_method_bind *mb__top_layer_input;
		godot_method_bind *mb__update_scroll_offset;
		godot_method_bind *mb__zoom_minus;
		godot_method_bind *mb__zoom_plus;
		godot_method_bind *mb__zoom_reset;
		godot_method_bind *mb_add_valid_connection_type;
		godot_method_bind *mb_add_valid_left_disconnect_type;
		godot_method_bind *mb_add_valid_right_disconnect_type;
		godot_method_bind *mb_clear_connections;
		godot_method_bind *mb_connect_node;
		godot_method_bind *mb_disconnect_node;
		godot_method_bind *mb_get_connection_list;
		godot_method_bind *mb_get_minimap_opacity;
		godot_method_bind *mb_get_minimap_size;
		godot_method_bind *mb_get_scroll_ofs;
		godot_method_bind *mb_get_snap;
		godot_method_bind *mb_get_zoom;
		godot_method_bind *mb_get_zoom_hbox;
		godot_method_bind *mb_get_zoom_max;
		godot_method_bind *mb_get_zoom_min;
		godot_method_bind *mb_get_zoom_step;
		godot_method_bind *mb_is_minimap_enabled;
		godot_method_bind *mb_is_node_connected;
		godot_method_bind *mb_is_right_disconnects_enabled;
		godot_method_bind *mb_is_showing_zoom_label;
		godot_method_bind *mb_is_using_snap;
		godot_method_bind *mb_is_valid_connection_type;
		godot_method_bind *mb_remove_valid_connection_type;
		godot_method_bind *mb_remove_valid_left_disconnect_type;
		godot_method_bind *mb_remove_valid_right_disconnect_type;
		godot_method_bind *mb_set_connection_activity;
		godot_method_bind *mb_set_minimap_enabled;
		godot_method_bind *mb_set_minimap_opacity;
		godot_method_bind *mb_set_minimap_size;
		godot_method_bind *mb_set_right_disconnects;
		godot_method_bind *mb_set_scroll_ofs;
		godot_method_bind *mb_set_selected;
		godot_method_bind *mb_set_show_zoom_label;
		godot_method_bind *mb_set_snap;
		godot_method_bind *mb_set_use_snap;
		godot_method_bind *mb_set_zoom;
		godot_method_bind *mb_set_zoom_max;
		godot_method_bind *mb_set_zoom_min;
		godot_method_bind *mb_set_zoom_step;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "GraphEdit"; }
	static inline const char *___get_godot_class_name() { return (const char *) "GraphEdit"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static graph_edit *_new();

	// methods
	void _connections_layer_draw();
	void _graph_node_moved(const node *arg0);
	void _graph_node_raised(const node *arg0);
	void _graph_node_slot_updated(const int64_t arg0, const node *arg1);
	void _gui_input(const ref<input_event> arg0);
	void _minimap_draw();
	void _minimap_toggled();
	void _scroll_moved(const real_t arg0);
	void _snap_toggled();
	void _snap_value_changed(const real_t arg0);
	void _top_layer_draw();
	void _top_layer_input(const ref<input_event> arg0);
	void _update_scroll_offset();
	void _zoom_minus();
	void _zoom_plus();
	void _zoom_reset();
	void add_valid_connection_type(const int64_t from_type, const int64_t to_type);
	void add_valid_left_disconnect_type(const int64_t type);
	void add_valid_right_disconnect_type(const int64_t type);
	void clear_connections();
	error connect_node(const string from, const int64_t from_port, const string to, const int64_t to_port);
	void disconnect_node(const string from, const int64_t from_port, const string to, const int64_t to_port);
	array get_connection_list() const;
	real_t get_minimap_opacity() const;
	vector2 get_minimap_size() const;
	vector2 get_scroll_ofs() const;
	int64_t get_snap() const;
	real_t get_zoom() const;
	hbox_container *get_zoom_hbox();
	real_t get_zoom_max() const;
	real_t get_zoom_min() const;
	real_t get_zoom_step() const;
	bool is_minimap_enabled() const;
	bool is_node_connected(const string from, const int64_t from_port, const string to, const int64_t to_port);
	bool is_right_disconnects_enabled() const;
	bool is_showing_zoom_label() const;
	bool is_using_snap() const;
	bool is_valid_connection_type(const int64_t from_type, const int64_t to_type) const;
	void remove_valid_connection_type(const int64_t from_type, const int64_t to_type);
	void remove_valid_left_disconnect_type(const int64_t type);
	void remove_valid_right_disconnect_type(const int64_t type);
	void set_connection_activity(const string from, const int64_t from_port, const string to, const int64_t to_port, const real_t amount);
	void set_minimap_enabled(const bool enable);
	void set_minimap_opacity(const real_t p_opacity);
	void set_minimap_size(const vector2 p_size);
	void set_right_disconnects(const bool enable);
	void set_scroll_ofs(const vector2 ofs);
	void set_selected(const node *node_);
	void set_show_zoom_label(const bool enable);
	void set_snap(const int64_t pixels);
	void set_use_snap(const bool enable);
	void set_zoom(const real_t p_zoom);
	void set_zoom_max(const real_t zoom_max);
	void set_zoom_min(const real_t zoom_min);
	void set_zoom_step(const real_t zoom_step);

};

}

#endif