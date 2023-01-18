#include "animation_tree_player.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "animation.hpp"


namespace gd {


animation_tree_player::___method_bindings animation_tree_player::___mb = {};

void *animation_tree_player::_detail_class_tag = nullptr;

void animation_tree_player::___init_method_bindings() {
	___mb.mb_add_node = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "add_node");
	___mb.mb_advance = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "advance");
	___mb.mb_animation_node_get_animation = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "animation_node_get_animation");
	___mb.mb_animation_node_get_master_animation = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "animation_node_get_master_animation");
	___mb.mb_animation_node_get_position = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "animation_node_get_position");
	___mb.mb_animation_node_set_animation = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "animation_node_set_animation");
	___mb.mb_animation_node_set_filter_path = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "animation_node_set_filter_path");
	___mb.mb_animation_node_set_master_animation = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "animation_node_set_master_animation");
	___mb.mb_are_nodes_connected = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "are_nodes_connected");
	___mb.mb_blend2_node_get_amount = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "blend2_node_get_amount");
	___mb.mb_blend2_node_set_amount = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "blend2_node_set_amount");
	___mb.mb_blend2_node_set_filter_path = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "blend2_node_set_filter_path");
	___mb.mb_blend3_node_get_amount = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "blend3_node_get_amount");
	___mb.mb_blend3_node_set_amount = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "blend3_node_set_amount");
	___mb.mb_blend4_node_get_amount = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "blend4_node_get_amount");
	___mb.mb_blend4_node_set_amount = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "blend4_node_set_amount");
	___mb.mb_connect_nodes = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "connect_nodes");
	___mb.mb_disconnect_nodes = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "disconnect_nodes");
	___mb.mb_get_animation_process_mode = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "get_animation_process_mode");
	___mb.mb_get_base_path = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "get_base_path");
	___mb.mb_get_master_player = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "get_master_player");
	___mb.mb_get_node_list = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "get_node_list");
	___mb.mb_is_active = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "is_active");
	___mb.mb_mix_node_get_amount = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "mix_node_get_amount");
	___mb.mb_mix_node_set_amount = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "mix_node_set_amount");
	___mb.mb_node_exists = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "node_exists");
	___mb.mb_node_get_input_count = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "node_get_input_count");
	___mb.mb_node_get_input_source = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "node_get_input_source");
	___mb.mb_node_get_position = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "node_get_position");
	___mb.mb_node_get_type = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "node_get_type");
	___mb.mb_node_rename = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "node_rename");
	___mb.mb_node_set_position = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "node_set_position");
	___mb.mb_oneshot_node_get_autorestart_delay = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "oneshot_node_get_autorestart_delay");
	___mb.mb_oneshot_node_get_autorestart_random_delay = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "oneshot_node_get_autorestart_random_delay");
	___mb.mb_oneshot_node_get_fadein_time = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "oneshot_node_get_fadein_time");
	___mb.mb_oneshot_node_get_fadeout_time = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "oneshot_node_get_fadeout_time");
	___mb.mb_oneshot_node_has_autorestart = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "oneshot_node_has_autorestart");
	___mb.mb_oneshot_node_is_active = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "oneshot_node_is_active");
	___mb.mb_oneshot_node_set_autorestart = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "oneshot_node_set_autorestart");
	___mb.mb_oneshot_node_set_autorestart_delay = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "oneshot_node_set_autorestart_delay");
	___mb.mb_oneshot_node_set_autorestart_random_delay = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "oneshot_node_set_autorestart_random_delay");
	___mb.mb_oneshot_node_set_fadein_time = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "oneshot_node_set_fadein_time");
	___mb.mb_oneshot_node_set_fadeout_time = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "oneshot_node_set_fadeout_time");
	___mb.mb_oneshot_node_set_filter_path = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "oneshot_node_set_filter_path");
	___mb.mb_oneshot_node_start = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "oneshot_node_start");
	___mb.mb_oneshot_node_stop = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "oneshot_node_stop");
	___mb.mb_recompute_caches = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "recompute_caches");
	___mb.mb_remove_node = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "remove_node");
	___mb.mb_reset = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "reset");
	___mb.mb_set_active = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "set_active");
	___mb.mb_set_animation_process_mode = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "set_animation_process_mode");
	___mb.mb_set_base_path = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "set_base_path");
	___mb.mb_set_master_player = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "set_master_player");
	___mb.mb_timescale_node_get_scale = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "timescale_node_get_scale");
	___mb.mb_timescale_node_set_scale = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "timescale_node_set_scale");
	___mb.mb_timeseek_node_seek = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "timeseek_node_seek");
	___mb.mb_transition_node_delete_input = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "transition_node_delete_input");
	___mb.mb_transition_node_get_current = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "transition_node_get_current");
	___mb.mb_transition_node_get_input_count = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "transition_node_get_input_count");
	___mb.mb_transition_node_get_xfade_time = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "transition_node_get_xfade_time");
	___mb.mb_transition_node_has_input_auto_advance = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "transition_node_has_input_auto_advance");
	___mb.mb_transition_node_set_current = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "transition_node_set_current");
	___mb.mb_transition_node_set_input_auto_advance = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "transition_node_set_input_auto_advance");
	___mb.mb_transition_node_set_input_count = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "transition_node_set_input_count");
	___mb.mb_transition_node_set_xfade_time = gd::api->godot_method_bind_get_method("AnimationTreePlayer", "transition_node_set_xfade_time");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AnimationTreePlayer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

animation_tree_player *animation_tree_player::_new()
{
	return (animation_tree_player *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AnimationTreePlayer")());
}
void animation_tree_player::add_node(const int64_t type, const string id) {
	___godot_icall_void_int_String(___mb.mb_add_node, (const object *) this, type, id);
}

void animation_tree_player::advance(const real_t delta) {
	___godot_icall_void_float(___mb.mb_advance, (const object *) this, delta);
}

ref<animation> animation_tree_player::animation_node_get_animation(const string id) const {
	return ref<animation>::__internal_constructor(___godot_icall_Object_String(___mb.mb_animation_node_get_animation, (const object *) this, id));
}

string animation_tree_player::animation_node_get_master_animation(const string id) const {
	return ___godot_icall_String_String(___mb.mb_animation_node_get_master_animation, (const object *) this, id);
}

real_t animation_tree_player::animation_node_get_position(const string id) const {
	return ___godot_icall_float_String(___mb.mb_animation_node_get_position, (const object *) this, id);
}

void animation_tree_player::animation_node_set_animation(const string id, const ref<animation> animation_) {
	___godot_icall_void_String_Object(___mb.mb_animation_node_set_animation, (const object *) this, id, animation_.ptr());
}

void animation_tree_player::animation_node_set_filter_path(const string id, const node_path path_, const bool enable) {
	___godot_icall_void_String_NodePath_bool(___mb.mb_animation_node_set_filter_path, (const object *) this, id, path_, enable);
}

void animation_tree_player::animation_node_set_master_animation(const string id, const string source) {
	___godot_icall_void_String_String(___mb.mb_animation_node_set_master_animation, (const object *) this, id, source);
}

bool animation_tree_player::are_nodes_connected(const string id, const string dst_id, const int64_t dst_input_idx) const {
	return ___godot_icall_bool_String_String_int(___mb.mb_are_nodes_connected, (const object *) this, id, dst_id, dst_input_idx);
}

real_t animation_tree_player::blend2_node_get_amount(const string id) const {
	return ___godot_icall_float_String(___mb.mb_blend2_node_get_amount, (const object *) this, id);
}

void animation_tree_player::blend2_node_set_amount(const string id, const real_t blend) {
	___godot_icall_void_String_float(___mb.mb_blend2_node_set_amount, (const object *) this, id, blend);
}

void animation_tree_player::blend2_node_set_filter_path(const string id, const node_path path_, const bool enable) {
	___godot_icall_void_String_NodePath_bool(___mb.mb_blend2_node_set_filter_path, (const object *) this, id, path_, enable);
}

real_t animation_tree_player::blend3_node_get_amount(const string id) const {
	return ___godot_icall_float_String(___mb.mb_blend3_node_get_amount, (const object *) this, id);
}

void animation_tree_player::blend3_node_set_amount(const string id, const real_t blend) {
	___godot_icall_void_String_float(___mb.mb_blend3_node_set_amount, (const object *) this, id, blend);
}

vector2 animation_tree_player::blend4_node_get_amount(const string id) const {
	return ___godot_icall_Vector2_String(___mb.mb_blend4_node_get_amount, (const object *) this, id);
}

void animation_tree_player::blend4_node_set_amount(const string id, const vector2 blend) {
	___godot_icall_void_String_Vector2(___mb.mb_blend4_node_set_amount, (const object *) this, id, blend);
}

error animation_tree_player::connect_nodes(const string id, const string dst_id, const int64_t dst_input_idx) {
	return (error) ___godot_icall_int_String_String_int(___mb.mb_connect_nodes, (const object *) this, id, dst_id, dst_input_idx);
}

void animation_tree_player::disconnect_nodes(const string id, const int64_t dst_input_idx) {
	___godot_icall_void_String_int(___mb.mb_disconnect_nodes, (const object *) this, id, dst_input_idx);
}

animation_tree_player::AnimationProcessMode animation_tree_player::get_animation_process_mode() const {
	return (animation_tree_player::AnimationProcessMode) ___godot_icall_int(___mb.mb_get_animation_process_mode, (const object *) this);
}

node_path animation_tree_player::get_base_path() const {
	return ___godot_icall_NodePath(___mb.mb_get_base_path, (const object *) this);
}

node_path animation_tree_player::get_master_player() const {
	return ___godot_icall_NodePath(___mb.mb_get_master_player, (const object *) this);
}

pool_string_array animation_tree_player::get_node_list() {
	return ___godot_icall_PoolStringArray(___mb.mb_get_node_list, (const object *) this);
}

bool animation_tree_player::is_active() const {
	return ___godot_icall_bool(___mb.mb_is_active, (const object *) this);
}

real_t animation_tree_player::mix_node_get_amount(const string id) const {
	return ___godot_icall_float_String(___mb.mb_mix_node_get_amount, (const object *) this, id);
}

void animation_tree_player::mix_node_set_amount(const string id, const real_t ratio) {
	___godot_icall_void_String_float(___mb.mb_mix_node_set_amount, (const object *) this, id, ratio);
}

bool animation_tree_player::node_exists(const string node_) const {
	return ___godot_icall_bool_String(___mb.mb_node_exists, (const object *) this, node_);
}

int64_t animation_tree_player::node_get_input_count(const string id) const {
	return ___godot_icall_int_String(___mb.mb_node_get_input_count, (const object *) this, id);
}

string animation_tree_player::node_get_input_source(const string id, const int64_t idx) const {
	return ___godot_icall_String_String_int(___mb.mb_node_get_input_source, (const object *) this, id, idx);
}

vector2 animation_tree_player::node_get_position(const string id) const {
	return ___godot_icall_Vector2_String(___mb.mb_node_get_position, (const object *) this, id);
}

animation_tree_player::NodeType animation_tree_player::node_get_type(const string id) const {
	return (animation_tree_player::NodeType) ___godot_icall_int_String(___mb.mb_node_get_type, (const object *) this, id);
}

error animation_tree_player::node_rename(const string node_, const string new_name) {
	return (error) ___godot_icall_int_String_String(___mb.mb_node_rename, (const object *) this, node_, new_name);
}

void animation_tree_player::node_set_position(const string id, const vector2 screen_position) {
	___godot_icall_void_String_Vector2(___mb.mb_node_set_position, (const object *) this, id, screen_position);
}

real_t animation_tree_player::oneshot_node_get_autorestart_delay(const string id) const {
	return ___godot_icall_float_String(___mb.mb_oneshot_node_get_autorestart_delay, (const object *) this, id);
}

real_t animation_tree_player::oneshot_node_get_autorestart_random_delay(const string id) const {
	return ___godot_icall_float_String(___mb.mb_oneshot_node_get_autorestart_random_delay, (const object *) this, id);
}

real_t animation_tree_player::oneshot_node_get_fadein_time(const string id) const {
	return ___godot_icall_float_String(___mb.mb_oneshot_node_get_fadein_time, (const object *) this, id);
}

real_t animation_tree_player::oneshot_node_get_fadeout_time(const string id) const {
	return ___godot_icall_float_String(___mb.mb_oneshot_node_get_fadeout_time, (const object *) this, id);
}

bool animation_tree_player::oneshot_node_has_autorestart(const string id) const {
	return ___godot_icall_bool_String(___mb.mb_oneshot_node_has_autorestart, (const object *) this, id);
}

bool animation_tree_player::oneshot_node_is_active(const string id) const {
	return ___godot_icall_bool_String(___mb.mb_oneshot_node_is_active, (const object *) this, id);
}

void animation_tree_player::oneshot_node_set_autorestart(const string id, const bool enable) {
	___godot_icall_void_String_bool(___mb.mb_oneshot_node_set_autorestart, (const object *) this, id, enable);
}

void animation_tree_player::oneshot_node_set_autorestart_delay(const string id, const real_t delay_sec) {
	___godot_icall_void_String_float(___mb.mb_oneshot_node_set_autorestart_delay, (const object *) this, id, delay_sec);
}

void animation_tree_player::oneshot_node_set_autorestart_random_delay(const string id, const real_t rand_sec) {
	___godot_icall_void_String_float(___mb.mb_oneshot_node_set_autorestart_random_delay, (const object *) this, id, rand_sec);
}

void animation_tree_player::oneshot_node_set_fadein_time(const string id, const real_t time_sec) {
	___godot_icall_void_String_float(___mb.mb_oneshot_node_set_fadein_time, (const object *) this, id, time_sec);
}

void animation_tree_player::oneshot_node_set_fadeout_time(const string id, const real_t time_sec) {
	___godot_icall_void_String_float(___mb.mb_oneshot_node_set_fadeout_time, (const object *) this, id, time_sec);
}

void animation_tree_player::oneshot_node_set_filter_path(const string id, const node_path path_, const bool enable) {
	___godot_icall_void_String_NodePath_bool(___mb.mb_oneshot_node_set_filter_path, (const object *) this, id, path_, enable);
}

void animation_tree_player::oneshot_node_start(const string id) {
	___godot_icall_void_String(___mb.mb_oneshot_node_start, (const object *) this, id);
}

void animation_tree_player::oneshot_node_stop(const string id) {
	___godot_icall_void_String(___mb.mb_oneshot_node_stop, (const object *) this, id);
}

void animation_tree_player::recompute_caches() {
	___godot_icall_void(___mb.mb_recompute_caches, (const object *) this);
}

void animation_tree_player::remove_node(const string id) {
	___godot_icall_void_String(___mb.mb_remove_node, (const object *) this, id);
}

void animation_tree_player::reset() {
	___godot_icall_void(___mb.mb_reset, (const object *) this);
}

void animation_tree_player::set_active(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_active, (const object *) this, enabled);
}

void animation_tree_player::set_animation_process_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_animation_process_mode, (const object *) this, mode);
}

void animation_tree_player::set_base_path(const node_path path_) {
	___godot_icall_void_NodePath(___mb.mb_set_base_path, (const object *) this, path_);
}

void animation_tree_player::set_master_player(const node_path nodepath) {
	___godot_icall_void_NodePath(___mb.mb_set_master_player, (const object *) this, nodepath);
}

real_t animation_tree_player::timescale_node_get_scale(const string id) const {
	return ___godot_icall_float_String(___mb.mb_timescale_node_get_scale, (const object *) this, id);
}

void animation_tree_player::timescale_node_set_scale(const string id, const real_t scale) {
	___godot_icall_void_String_float(___mb.mb_timescale_node_set_scale, (const object *) this, id, scale);
}

void animation_tree_player::timeseek_node_seek(const string id, const real_t seconds) {
	___godot_icall_void_String_float(___mb.mb_timeseek_node_seek, (const object *) this, id, seconds);
}

void animation_tree_player::transition_node_delete_input(const string id, const int64_t input_idx) {
	___godot_icall_void_String_int(___mb.mb_transition_node_delete_input, (const object *) this, id, input_idx);
}

int64_t animation_tree_player::transition_node_get_current(const string id) const {
	return ___godot_icall_int_String(___mb.mb_transition_node_get_current, (const object *) this, id);
}

int64_t animation_tree_player::transition_node_get_input_count(const string id) const {
	return ___godot_icall_int_String(___mb.mb_transition_node_get_input_count, (const object *) this, id);
}

real_t animation_tree_player::transition_node_get_xfade_time(const string id) const {
	return ___godot_icall_float_String(___mb.mb_transition_node_get_xfade_time, (const object *) this, id);
}

bool animation_tree_player::transition_node_has_input_auto_advance(const string id, const int64_t input_idx) const {
	return ___godot_icall_bool_String_int(___mb.mb_transition_node_has_input_auto_advance, (const object *) this, id, input_idx);
}

void animation_tree_player::transition_node_set_current(const string id, const int64_t input_idx) {
	___godot_icall_void_String_int(___mb.mb_transition_node_set_current, (const object *) this, id, input_idx);
}

void animation_tree_player::transition_node_set_input_auto_advance(const string id, const int64_t input_idx, const bool enable) {
	___godot_icall_void_String_int_bool(___mb.mb_transition_node_set_input_auto_advance, (const object *) this, id, input_idx, enable);
}

void animation_tree_player::transition_node_set_input_count(const string id, const int64_t count) {
	___godot_icall_void_String_int(___mb.mb_transition_node_set_input_count, (const object *) this, id, count);
}

void animation_tree_player::transition_node_set_xfade_time(const string id, const real_t time_sec) {
	___godot_icall_void_String_float(___mb.mb_transition_node_set_xfade_time, (const object *) this, id, time_sec);
}

}