#ifndef GODOT_CPP_ANIMATIONTREEPLAYER_HPP
#define GODOT_CPP_ANIMATIONTREEPLAYER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "animation_tree_player.hpp"

#include "node.hpp"
namespace gd {

class animation;

class animation_tree_player : public node {
	struct ___method_bindings {
		godot_method_bind *mb_add_node;
		godot_method_bind *mb_advance;
		godot_method_bind *mb_animation_node_get_animation;
		godot_method_bind *mb_animation_node_get_master_animation;
		godot_method_bind *mb_animation_node_get_position;
		godot_method_bind *mb_animation_node_set_animation;
		godot_method_bind *mb_animation_node_set_filter_path;
		godot_method_bind *mb_animation_node_set_master_animation;
		godot_method_bind *mb_are_nodes_connected;
		godot_method_bind *mb_blend2_node_get_amount;
		godot_method_bind *mb_blend2_node_set_amount;
		godot_method_bind *mb_blend2_node_set_filter_path;
		godot_method_bind *mb_blend3_node_get_amount;
		godot_method_bind *mb_blend3_node_set_amount;
		godot_method_bind *mb_blend4_node_get_amount;
		godot_method_bind *mb_blend4_node_set_amount;
		godot_method_bind *mb_connect_nodes;
		godot_method_bind *mb_disconnect_nodes;
		godot_method_bind *mb_get_animation_process_mode;
		godot_method_bind *mb_get_base_path;
		godot_method_bind *mb_get_master_player;
		godot_method_bind *mb_get_node_list;
		godot_method_bind *mb_is_active;
		godot_method_bind *mb_mix_node_get_amount;
		godot_method_bind *mb_mix_node_set_amount;
		godot_method_bind *mb_node_exists;
		godot_method_bind *mb_node_get_input_count;
		godot_method_bind *mb_node_get_input_source;
		godot_method_bind *mb_node_get_position;
		godot_method_bind *mb_node_get_type;
		godot_method_bind *mb_node_rename;
		godot_method_bind *mb_node_set_position;
		godot_method_bind *mb_oneshot_node_get_autorestart_delay;
		godot_method_bind *mb_oneshot_node_get_autorestart_random_delay;
		godot_method_bind *mb_oneshot_node_get_fadein_time;
		godot_method_bind *mb_oneshot_node_get_fadeout_time;
		godot_method_bind *mb_oneshot_node_has_autorestart;
		godot_method_bind *mb_oneshot_node_is_active;
		godot_method_bind *mb_oneshot_node_set_autorestart;
		godot_method_bind *mb_oneshot_node_set_autorestart_delay;
		godot_method_bind *mb_oneshot_node_set_autorestart_random_delay;
		godot_method_bind *mb_oneshot_node_set_fadein_time;
		godot_method_bind *mb_oneshot_node_set_fadeout_time;
		godot_method_bind *mb_oneshot_node_set_filter_path;
		godot_method_bind *mb_oneshot_node_start;
		godot_method_bind *mb_oneshot_node_stop;
		godot_method_bind *mb_recompute_caches;
		godot_method_bind *mb_remove_node;
		godot_method_bind *mb_reset;
		godot_method_bind *mb_set_active;
		godot_method_bind *mb_set_animation_process_mode;
		godot_method_bind *mb_set_base_path;
		godot_method_bind *mb_set_master_player;
		godot_method_bind *mb_timescale_node_get_scale;
		godot_method_bind *mb_timescale_node_set_scale;
		godot_method_bind *mb_timeseek_node_seek;
		godot_method_bind *mb_transition_node_delete_input;
		godot_method_bind *mb_transition_node_get_current;
		godot_method_bind *mb_transition_node_get_input_count;
		godot_method_bind *mb_transition_node_get_xfade_time;
		godot_method_bind *mb_transition_node_has_input_auto_advance;
		godot_method_bind *mb_transition_node_set_current;
		godot_method_bind *mb_transition_node_set_input_auto_advance;
		godot_method_bind *mb_transition_node_set_input_count;
		godot_method_bind *mb_transition_node_set_xfade_time;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "AnimationTreePlayer"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AnimationTreePlayer"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum AnimationProcessMode {
		ANIMATION_PROCESS_PHYSICS = 0,
		ANIMATION_PROCESS_IDLE = 1,
	};
	enum NodeType {
		NODE_OUTPUT = 0,
		NODE_ANIMATION = 1,
		NODE_ONESHOT = 2,
		NODE_MIX = 3,
		NODE_BLEND2 = 4,
		NODE_BLEND3 = 5,
		NODE_BLEND4 = 6,
		NODE_TIMESCALE = 7,
		NODE_TIMESEEK = 8,
		NODE_TRANSITION = 9,
	};

	// constants


	static animation_tree_player *_new();

	// methods
	void add_node(const int64_t type, const string id);
	void advance(const real_t delta);
	ref<animation> animation_node_get_animation(const string id) const;
	string animation_node_get_master_animation(const string id) const;
	real_t animation_node_get_position(const string id) const;
	void animation_node_set_animation(const string id, const ref<animation> animation_);
	void animation_node_set_filter_path(const string id, const node_path path_, const bool enable);
	void animation_node_set_master_animation(const string id, const string source);
	bool are_nodes_connected(const string id, const string dst_id, const int64_t dst_input_idx) const;
	real_t blend2_node_get_amount(const string id) const;
	void blend2_node_set_amount(const string id, const real_t blend);
	void blend2_node_set_filter_path(const string id, const node_path path_, const bool enable);
	real_t blend3_node_get_amount(const string id) const;
	void blend3_node_set_amount(const string id, const real_t blend);
	vector2 blend4_node_get_amount(const string id) const;
	void blend4_node_set_amount(const string id, const vector2 blend);
	error connect_nodes(const string id, const string dst_id, const int64_t dst_input_idx);
	void disconnect_nodes(const string id, const int64_t dst_input_idx);
	animation_tree_player::AnimationProcessMode get_animation_process_mode() const;
	node_path get_base_path() const;
	node_path get_master_player() const;
	pool_string_array get_node_list();
	bool is_active() const;
	real_t mix_node_get_amount(const string id) const;
	void mix_node_set_amount(const string id, const real_t ratio);
	bool node_exists(const string node_) const;
	int64_t node_get_input_count(const string id) const;
	string node_get_input_source(const string id, const int64_t idx) const;
	vector2 node_get_position(const string id) const;
	animation_tree_player::NodeType node_get_type(const string id) const;
	error node_rename(const string node_, const string new_name);
	void node_set_position(const string id, const vector2 screen_position);
	real_t oneshot_node_get_autorestart_delay(const string id) const;
	real_t oneshot_node_get_autorestart_random_delay(const string id) const;
	real_t oneshot_node_get_fadein_time(const string id) const;
	real_t oneshot_node_get_fadeout_time(const string id) const;
	bool oneshot_node_has_autorestart(const string id) const;
	bool oneshot_node_is_active(const string id) const;
	void oneshot_node_set_autorestart(const string id, const bool enable);
	void oneshot_node_set_autorestart_delay(const string id, const real_t delay_sec);
	void oneshot_node_set_autorestart_random_delay(const string id, const real_t rand_sec);
	void oneshot_node_set_fadein_time(const string id, const real_t time_sec);
	void oneshot_node_set_fadeout_time(const string id, const real_t time_sec);
	void oneshot_node_set_filter_path(const string id, const node_path path_, const bool enable);
	void oneshot_node_start(const string id);
	void oneshot_node_stop(const string id);
	void recompute_caches();
	void remove_node(const string id);
	void reset();
	void set_active(const bool enabled);
	void set_animation_process_mode(const int64_t mode);
	void set_base_path(const node_path path_);
	void set_master_player(const node_path nodepath);
	real_t timescale_node_get_scale(const string id) const;
	void timescale_node_set_scale(const string id, const real_t scale);
	void timeseek_node_seek(const string id, const real_t seconds);
	void transition_node_delete_input(const string id, const int64_t input_idx);
	int64_t transition_node_get_current(const string id) const;
	int64_t transition_node_get_input_count(const string id) const;
	real_t transition_node_get_xfade_time(const string id) const;
	bool transition_node_has_input_auto_advance(const string id, const int64_t input_idx) const;
	void transition_node_set_current(const string id, const int64_t input_idx);
	void transition_node_set_input_auto_advance(const string id, const int64_t input_idx, const bool enable);
	void transition_node_set_input_count(const string id, const int64_t count);
	void transition_node_set_xfade_time(const string id, const real_t time_sec);

};

}

#endif