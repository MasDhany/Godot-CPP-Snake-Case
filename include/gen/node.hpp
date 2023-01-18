#ifndef GODOT_CPP_NODE_HPP
#define GODOT_CPP_NODE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "node.hpp"

#include "object.hpp"
namespace gd {

class input_event;
class input_event_key;
class multiplayer_api;
class node;
class scene_tree;
class scene_tree_tween;
class viewport;

class node : public object {
	struct ___method_bindings {
		godot_method_bind *mb__enter_tree;
		godot_method_bind *mb__exit_tree;
		godot_method_bind *mb__get_configuration_warning;
		godot_method_bind *mb__get_editor_description;
		godot_method_bind *mb__get_import_path;
		godot_method_bind *mb__input;
		godot_method_bind *mb__physics_process;
		godot_method_bind *mb__process;
		godot_method_bind *mb__ready;
		godot_method_bind *mb__set_editor_description;
		godot_method_bind *mb__set_import_path;
		godot_method_bind *mb__set_property_pinned;
		godot_method_bind *mb__unhandled_input;
		godot_method_bind *mb__unhandled_key_input;
		godot_method_bind *mb_add_child;
		godot_method_bind *mb_add_child_below_node;
		godot_method_bind *mb_add_to_group;
		godot_method_bind *mb_can_process;
		godot_method_bind *mb_create_tween;
		godot_method_bind *mb_duplicate;
		godot_method_bind *mb_find_node;
		godot_method_bind *mb_find_parent;
		godot_method_bind *mb_get_child;
		godot_method_bind *mb_get_child_count;
		godot_method_bind *mb_get_children;
		godot_method_bind *mb_get_custom_multiplayer;
		godot_method_bind *mb_get_filename;
		godot_method_bind *mb_get_groups;
		godot_method_bind *mb_get_index;
		godot_method_bind *mb_get_multiplayer;
		godot_method_bind *mb_get_name;
		godot_method_bind *mb_get_network_master;
		godot_method_bind *mb_get_node_internal;
		godot_method_bind *mb_get_node_and_resource;
		godot_method_bind *mb_get_node_or_null;
		godot_method_bind *mb_get_owner;
		godot_method_bind *mb_get_parent;
		godot_method_bind *mb_get_path;
		godot_method_bind *mb_get_path_to;
		godot_method_bind *mb_get_pause_mode;
		godot_method_bind *mb_get_physics_interpolation_mode;
		godot_method_bind *mb_get_physics_process_delta_time;
		godot_method_bind *mb_get_position_in_parent;
		godot_method_bind *mb_get_process_delta_time;
		godot_method_bind *mb_get_process_priority;
		godot_method_bind *mb_get_scene_instance_load_placeholder;
		godot_method_bind *mb_get_tree;
		godot_method_bind *mb_get_viewport;
		godot_method_bind *mb_has_node;
		godot_method_bind *mb_has_node_and_resource;
		godot_method_bind *mb_is_a_parent_of;
		godot_method_bind *mb_is_displayed_folded;
		godot_method_bind *mb_is_greater_than;
		godot_method_bind *mb_is_in_group;
		godot_method_bind *mb_is_inside_tree;
		godot_method_bind *mb_is_network_master;
		godot_method_bind *mb_is_physics_interpolated;
		godot_method_bind *mb_is_physics_interpolated_and_enabled;
		godot_method_bind *mb_is_physics_processing;
		godot_method_bind *mb_is_physics_processing_internal;
		godot_method_bind *mb_is_processing;
		godot_method_bind *mb_is_processing_input;
		godot_method_bind *mb_is_processing_internal;
		godot_method_bind *mb_is_processing_unhandled_input;
		godot_method_bind *mb_is_processing_unhandled_key_input;
		godot_method_bind *mb_is_unique_name_in_owner;
		godot_method_bind *mb_move_child;
		godot_method_bind *mb_print_stray_nodes;
		godot_method_bind *mb_print_tree;
		godot_method_bind *mb_print_tree_pretty;
		godot_method_bind *mb_propagate_call;
		godot_method_bind *mb_propagate_notification;
		godot_method_bind *mb_queue_free;
		godot_method_bind *mb_raise;
		godot_method_bind *mb_remove_and_skip;
		godot_method_bind *mb_remove_child;
		godot_method_bind *mb_remove_from_group;
		godot_method_bind *mb_replace_by;
		godot_method_bind *mb_request_ready;
		godot_method_bind *mb_reset_physics_interpolation;
		godot_method_bind *mb_rpc;
		godot_method_bind *mb_rpc_config;
		godot_method_bind *mb_rpc_id;
		godot_method_bind *mb_rpc_unreliable;
		godot_method_bind *mb_rpc_unreliable_id;
		godot_method_bind *mb_rset;
		godot_method_bind *mb_rset_config;
		godot_method_bind *mb_rset_id;
		godot_method_bind *mb_rset_unreliable;
		godot_method_bind *mb_rset_unreliable_id;
		godot_method_bind *mb_set_custom_multiplayer;
		godot_method_bind *mb_set_display_folded;
		godot_method_bind *mb_set_filename;
		godot_method_bind *mb_set_name;
		godot_method_bind *mb_set_network_master;
		godot_method_bind *mb_set_owner;
		godot_method_bind *mb_set_pause_mode;
		godot_method_bind *mb_set_physics_interpolation_mode;
		godot_method_bind *mb_set_physics_process;
		godot_method_bind *mb_set_physics_process_internal;
		godot_method_bind *mb_set_process;
		godot_method_bind *mb_set_process_input;
		godot_method_bind *mb_set_process_internal;
		godot_method_bind *mb_set_process_priority;
		godot_method_bind *mb_set_process_unhandled_input;
		godot_method_bind *mb_set_process_unhandled_key_input;
		godot_method_bind *mb_set_scene_instance_load_placeholder;
		godot_method_bind *mb_set_unique_name_in_owner;
		godot_method_bind *mb_update_configuration_warning;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Node"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Node"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum PauseMode {
		PAUSE_MODE_INHERIT = 0,
		PAUSE_MODE_STOP = 1,
		PAUSE_MODE_PROCESS = 2,
	};
	enum DuplicateFlags {
		DUPLICATE_SIGNALS = 1,
		DUPLICATE_GROUPS = 2,
		DUPLICATE_SCRIPTS = 4,
		DUPLICATE_USE_INSTANCING = 8,
	};
	enum PhysicsInterpolationMode {
		PHYSICS_INTERPOLATION_MODE_INHERIT = 0,
		PHYSICS_INTERPOLATION_MODE_OFF = 1,
		PHYSICS_INTERPOLATION_MODE_ON = 2,
	};

	// constants
	const static int NOTIFICATION_APP_PAUSED = 1015;
	const static int NOTIFICATION_APP_RESUMED = 1014;
	const static int NOTIFICATION_CRASH = 1012;
	const static int NOTIFICATION_DRAG_BEGIN = 21;
	const static int NOTIFICATION_DRAG_END = 22;
	const static int NOTIFICATION_ENTER_TREE = 10;
	const static int NOTIFICATION_EXIT_TREE = 11;
	const static int NOTIFICATION_INSTANCED = 20;
	const static int NOTIFICATION_INTERNAL_PHYSICS_PROCESS = 26;
	const static int NOTIFICATION_INTERNAL_PROCESS = 25;
	const static int NOTIFICATION_MOVED_IN_PARENT = 12;
	const static int NOTIFICATION_OS_IME_UPDATE = 1013;
	const static int NOTIFICATION_OS_MEMORY_WARNING = 1009;
	const static int NOTIFICATION_PARENTED = 18;
	const static int NOTIFICATION_PATH_CHANGED = 23;
	const static int NOTIFICATION_PAUSED = 14;
	const static int NOTIFICATION_PHYSICS_PROCESS = 16;
	const static int NOTIFICATION_POST_ENTER_TREE = 27;
	const static int NOTIFICATION_PROCESS = 17;
	const static int NOTIFICATION_READY = 13;
	const static int NOTIFICATION_RESET_PHYSICS_INTERPOLATION = 28;
	const static int NOTIFICATION_TRANSLATION_CHANGED = 1010;
	const static int NOTIFICATION_UNPARENTED = 19;
	const static int NOTIFICATION_UNPAUSED = 15;
	const static int NOTIFICATION_WM_ABOUT = 1011;
	const static int NOTIFICATION_WM_FOCUS_IN = 1004;
	const static int NOTIFICATION_WM_FOCUS_OUT = 1005;
	const static int NOTIFICATION_WM_GO_BACK_REQUEST = 1007;
	const static int NOTIFICATION_WM_MOUSE_ENTER = 1002;
	const static int NOTIFICATION_WM_MOUSE_EXIT = 1003;
	const static int NOTIFICATION_WM_QUIT_REQUEST = 1006;
	const static int NOTIFICATION_WM_UNFOCUS_REQUEST = 1008;


	static node *_new();

	// methods
	void _enter_tree();
	void _exit_tree();
	string _get_configuration_warning();
	string _get_editor_description() const;
	node_path _get_import_path() const;
	void _input(const ref<input_event> event);
	void _physics_process(const real_t delta);
	void _process(const real_t delta);
	void _ready();
	void _set_editor_description(const string editor_description);
	void _set_import_path(const node_path import_path);
	void _set_property_pinned(const string property, const bool pinned);
	void _unhandled_input(const ref<input_event> event);
	void _unhandled_key_input(const ref<input_event_key> event);
	void add_child(const node *node_, const bool legible_unique_name = false);
	void add_child_below_node(const node *node_, const node *child_node, const bool legible_unique_name = false);
	void add_to_group(const string group, const bool persistent = false);
	bool can_process() const;
	ref<scene_tree_tween> create_tween();
	node *duplicate(const int64_t flags = 15) const;
	node *find_node(const string mask, const bool recursive = true, const bool owned = true) const;
	node *find_parent(const string mask) const;
	node *get_child(const int64_t idx) const;
	int64_t get_child_count() const;
	array get_children() const;
	ref<multiplayer_api> get_custom_multiplayer() const;
	string get_filename() const;
	array get_groups() const;
	int64_t get_index() const;
	ref<multiplayer_api> get_multiplayer() const;
	string get_name() const;
	int64_t get_network_master() const;
	node *get_node_internal(const node_path path_) const;
	array get_node_and_resource(const node_path path_);
	node *get_node_or_null(const node_path path_) const;
	node *get_owner() const;
	node *get_parent() const;
	node_path get_path() const;
	node_path get_path_to(const node *node_) const;
	node::PauseMode get_pause_mode() const;
	node::PhysicsInterpolationMode get_physics_interpolation_mode() const;
	real_t get_physics_process_delta_time() const;
	int64_t get_position_in_parent() const;
	real_t get_process_delta_time() const;
	int64_t get_process_priority() const;
	bool get_scene_instance_load_placeholder() const;
	scene_tree *get_tree() const;
	viewport *get_viewport() const;
	bool has_node(const node_path path_) const;
	bool has_node_and_resource(const node_path path_) const;
	bool is_a_parent_of(const node *node_) const;
	bool is_displayed_folded() const;
	bool is_greater_than(const node *node_) const;
	bool is_in_group(const string group) const;
	bool is_inside_tree() const;
	bool is_network_master() const;
	bool is_physics_interpolated() const;
	bool is_physics_interpolated_and_enabled() const;
	bool is_physics_processing() const;
	bool is_physics_processing_internal() const;
	bool is_processing() const;
	bool is_processing_input() const;
	bool is_processing_internal() const;
	bool is_processing_unhandled_input() const;
	bool is_processing_unhandled_key_input() const;
	bool is_unique_name_in_owner() const;
	void move_child(const node *child_node, const int64_t to_position);
	void print_stray_nodes();
	void print_tree();
	void print_tree_pretty();
	void propagate_call(const string method, const array args = array(), const bool parent_first = false);
	void propagate_notification(const int64_t what);
	void queue_free();
	void raise();
	void remove_and_skip();
	void remove_child(const node *node_);
	void remove_from_group(const string group);
	void replace_by(const node *node_, const bool keep_data = false);
	void request_ready();
	void reset_physics_interpolation();
	variant rpc(const string method, const array& __var_args = array());
	void rpc_config(const string method, const int64_t mode);
	variant rpc_id(const int64_t peer_id, const string method, const array& __var_args = array());
	variant rpc_unreliable(const string method, const array& __var_args = array());
	variant rpc_unreliable_id(const int64_t peer_id, const string method, const array& __var_args = array());
	void rset(const string property, const variant value);
	void rset_config(const string property, const int64_t mode);
	void rset_id(const int64_t peer_id, const string property, const variant value);
	void rset_unreliable(const string property, const variant value);
	void rset_unreliable_id(const int64_t peer_id, const string property, const variant value);
	void set_custom_multiplayer(const ref<multiplayer_api> api);
	void set_display_folded(const bool fold);
	void set_filename(const string filename);
	void set_name(const string name);
	void set_network_master(const int64_t id, const bool recursive = true);
	void set_owner(const node *owner);
	void set_pause_mode(const int64_t mode);
	void set_physics_interpolation_mode(const int64_t mode);
	void set_physics_process(const bool enable);
	void set_physics_process_internal(const bool enable);
	void set_process(const bool enable);
	void set_process_input(const bool enable);
	void set_process_internal(const bool enable);
	void set_process_priority(const int64_t priority);
	void set_process_unhandled_input(const bool enable);
	void set_process_unhandled_key_input(const bool enable);
	void set_scene_instance_load_placeholder(const bool load_placeholder);
	void set_unique_name_in_owner(const bool enable);
	void update_configuration_warning();
	template <class... Args> variant rpc(const string method, Args... args){
		return rpc(method, array::make(args...));
	}
	template <class... Args> variant rpc_id(const int64_t peer_id, const string method, Args... args){
		return rpc_id(peer_id,method, array::make(args...));
	}
	template <class... Args> variant rpc_unreliable(const string method, Args... args){
		return rpc_unreliable(method, array::make(args...));
	}
	template <class... Args> variant rpc_unreliable_id(const int64_t peer_id, const string method, Args... args){
		return rpc_unreliable_id(peer_id,method, array::make(args...));
	}

	template <class T = node>
	T *get_node(const node_path path_) const {
		return object::cast_to<T>(get_node_internal(path_));
	}
};

template <>
inline node *node::get_node<node>(const node_path path_) const {
	return get_node_internal(path_);
}

}

#endif