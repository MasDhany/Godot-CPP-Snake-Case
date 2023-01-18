#include "animation.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "animation.hpp"
#include "resource.hpp"


namespace gd {


animation::___method_bindings animation::___mb = {};

void *animation::_detail_class_tag = nullptr;

void animation::___init_method_bindings() {
	___mb.mb_add_track = gd::api->godot_method_bind_get_method("Animation", "add_track");
	___mb.mb_animation_track_get_key_animation = gd::api->godot_method_bind_get_method("Animation", "animation_track_get_key_animation");
	___mb.mb_animation_track_insert_key = gd::api->godot_method_bind_get_method("Animation", "animation_track_insert_key");
	___mb.mb_animation_track_set_key_animation = gd::api->godot_method_bind_get_method("Animation", "animation_track_set_key_animation");
	___mb.mb_audio_track_get_key_end_offset = gd::api->godot_method_bind_get_method("Animation", "audio_track_get_key_end_offset");
	___mb.mb_audio_track_get_key_start_offset = gd::api->godot_method_bind_get_method("Animation", "audio_track_get_key_start_offset");
	___mb.mb_audio_track_get_key_stream = gd::api->godot_method_bind_get_method("Animation", "audio_track_get_key_stream");
	___mb.mb_audio_track_insert_key = gd::api->godot_method_bind_get_method("Animation", "audio_track_insert_key");
	___mb.mb_audio_track_set_key_end_offset = gd::api->godot_method_bind_get_method("Animation", "audio_track_set_key_end_offset");
	___mb.mb_audio_track_set_key_start_offset = gd::api->godot_method_bind_get_method("Animation", "audio_track_set_key_start_offset");
	___mb.mb_audio_track_set_key_stream = gd::api->godot_method_bind_get_method("Animation", "audio_track_set_key_stream");
	___mb.mb_bezier_track_get_key_in_handle = gd::api->godot_method_bind_get_method("Animation", "bezier_track_get_key_in_handle");
	___mb.mb_bezier_track_get_key_out_handle = gd::api->godot_method_bind_get_method("Animation", "bezier_track_get_key_out_handle");
	___mb.mb_bezier_track_get_key_value = gd::api->godot_method_bind_get_method("Animation", "bezier_track_get_key_value");
	___mb.mb_bezier_track_insert_key = gd::api->godot_method_bind_get_method("Animation", "bezier_track_insert_key");
	___mb.mb_bezier_track_interpolate = gd::api->godot_method_bind_get_method("Animation", "bezier_track_interpolate");
	___mb.mb_bezier_track_set_key_in_handle = gd::api->godot_method_bind_get_method("Animation", "bezier_track_set_key_in_handle");
	___mb.mb_bezier_track_set_key_out_handle = gd::api->godot_method_bind_get_method("Animation", "bezier_track_set_key_out_handle");
	___mb.mb_bezier_track_set_key_value = gd::api->godot_method_bind_get_method("Animation", "bezier_track_set_key_value");
	___mb.mb_clear = gd::api->godot_method_bind_get_method("Animation", "clear");
	___mb.mb_copy_track = gd::api->godot_method_bind_get_method("Animation", "copy_track");
	___mb.mb_find_track = gd::api->godot_method_bind_get_method("Animation", "find_track");
	___mb.mb_get_length = gd::api->godot_method_bind_get_method("Animation", "get_length");
	___mb.mb_get_step = gd::api->godot_method_bind_get_method("Animation", "get_step");
	___mb.mb_get_track_count = gd::api->godot_method_bind_get_method("Animation", "get_track_count");
	___mb.mb_has_loop = gd::api->godot_method_bind_get_method("Animation", "has_loop");
	___mb.mb_method_track_get_key_indices = gd::api->godot_method_bind_get_method("Animation", "method_track_get_key_indices");
	___mb.mb_method_track_get_name = gd::api->godot_method_bind_get_method("Animation", "method_track_get_name");
	___mb.mb_method_track_get_params = gd::api->godot_method_bind_get_method("Animation", "method_track_get_params");
	___mb.mb_remove_track = gd::api->godot_method_bind_get_method("Animation", "remove_track");
	___mb.mb_set_length = gd::api->godot_method_bind_get_method("Animation", "set_length");
	___mb.mb_set_loop = gd::api->godot_method_bind_get_method("Animation", "set_loop");
	___mb.mb_set_step = gd::api->godot_method_bind_get_method("Animation", "set_step");
	___mb.mb_track_find_key = gd::api->godot_method_bind_get_method("Animation", "track_find_key");
	___mb.mb_track_get_interpolation_loop_wrap = gd::api->godot_method_bind_get_method("Animation", "track_get_interpolation_loop_wrap");
	___mb.mb_track_get_interpolation_type = gd::api->godot_method_bind_get_method("Animation", "track_get_interpolation_type");
	___mb.mb_track_get_key_count = gd::api->godot_method_bind_get_method("Animation", "track_get_key_count");
	___mb.mb_track_get_key_time = gd::api->godot_method_bind_get_method("Animation", "track_get_key_time");
	___mb.mb_track_get_key_transition = gd::api->godot_method_bind_get_method("Animation", "track_get_key_transition");
	___mb.mb_track_get_key_value = gd::api->godot_method_bind_get_method("Animation", "track_get_key_value");
	___mb.mb_track_get_path = gd::api->godot_method_bind_get_method("Animation", "track_get_path");
	___mb.mb_track_get_type = gd::api->godot_method_bind_get_method("Animation", "track_get_type");
	___mb.mb_track_insert_key = gd::api->godot_method_bind_get_method("Animation", "track_insert_key");
	___mb.mb_track_is_enabled = gd::api->godot_method_bind_get_method("Animation", "track_is_enabled");
	___mb.mb_track_is_imported = gd::api->godot_method_bind_get_method("Animation", "track_is_imported");
	___mb.mb_track_move_down = gd::api->godot_method_bind_get_method("Animation", "track_move_down");
	___mb.mb_track_move_to = gd::api->godot_method_bind_get_method("Animation", "track_move_to");
	___mb.mb_track_move_up = gd::api->godot_method_bind_get_method("Animation", "track_move_up");
	___mb.mb_track_remove_key = gd::api->godot_method_bind_get_method("Animation", "track_remove_key");
	___mb.mb_track_remove_key_at_position = gd::api->godot_method_bind_get_method("Animation", "track_remove_key_at_position");
	___mb.mb_track_set_enabled = gd::api->godot_method_bind_get_method("Animation", "track_set_enabled");
	___mb.mb_track_set_imported = gd::api->godot_method_bind_get_method("Animation", "track_set_imported");
	___mb.mb_track_set_interpolation_loop_wrap = gd::api->godot_method_bind_get_method("Animation", "track_set_interpolation_loop_wrap");
	___mb.mb_track_set_interpolation_type = gd::api->godot_method_bind_get_method("Animation", "track_set_interpolation_type");
	___mb.mb_track_set_key_time = gd::api->godot_method_bind_get_method("Animation", "track_set_key_time");
	___mb.mb_track_set_key_transition = gd::api->godot_method_bind_get_method("Animation", "track_set_key_transition");
	___mb.mb_track_set_key_value = gd::api->godot_method_bind_get_method("Animation", "track_set_key_value");
	___mb.mb_track_set_path = gd::api->godot_method_bind_get_method("Animation", "track_set_path");
	___mb.mb_track_swap = gd::api->godot_method_bind_get_method("Animation", "track_swap");
	___mb.mb_transform_track_insert_key = gd::api->godot_method_bind_get_method("Animation", "transform_track_insert_key");
	___mb.mb_transform_track_interpolate = gd::api->godot_method_bind_get_method("Animation", "transform_track_interpolate");
	___mb.mb_value_track_get_key_indices = gd::api->godot_method_bind_get_method("Animation", "value_track_get_key_indices");
	___mb.mb_value_track_get_update_mode = gd::api->godot_method_bind_get_method("Animation", "value_track_get_update_mode");
	___mb.mb_value_track_interpolate = gd::api->godot_method_bind_get_method("Animation", "value_track_interpolate");
	___mb.mb_value_track_set_update_mode = gd::api->godot_method_bind_get_method("Animation", "value_track_set_update_mode");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Animation");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

animation *animation::_new()
{
	return (animation *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Animation")());
}
int64_t animation::add_track(const int64_t type, const int64_t at_position) {
	return ___godot_icall_int_int_int(___mb.mb_add_track, (const object *) this, type, at_position);
}

string animation::animation_track_get_key_animation(const int64_t track_idx, const int64_t key_idx) const {
	return ___godot_icall_String_int_int(___mb.mb_animation_track_get_key_animation, (const object *) this, track_idx, key_idx);
}

int64_t animation::animation_track_insert_key(const int64_t track_idx, const real_t time_, const string animation_) {
	return ___godot_icall_int_int_float_String(___mb.mb_animation_track_insert_key, (const object *) this, track_idx, time_, animation_);
}

void animation::animation_track_set_key_animation(const int64_t track_idx, const int64_t key_idx, const string animation_) {
	___godot_icall_void_int_int_String(___mb.mb_animation_track_set_key_animation, (const object *) this, track_idx, key_idx, animation_);
}

real_t animation::audio_track_get_key_end_offset(const int64_t track_idx, const int64_t key_idx) const {
	return ___godot_icall_float_int_int(___mb.mb_audio_track_get_key_end_offset, (const object *) this, track_idx, key_idx);
}

real_t animation::audio_track_get_key_start_offset(const int64_t track_idx, const int64_t key_idx) const {
	return ___godot_icall_float_int_int(___mb.mb_audio_track_get_key_start_offset, (const object *) this, track_idx, key_idx);
}

ref<resource> animation::audio_track_get_key_stream(const int64_t track_idx, const int64_t key_idx) const {
	return ref<resource>::__internal_constructor(___godot_icall_Object_int_int(___mb.mb_audio_track_get_key_stream, (const object *) this, track_idx, key_idx));
}

int64_t animation::audio_track_insert_key(const int64_t track_idx, const real_t time_, const ref<resource> stream, const real_t start_offset, const real_t end_offset) {
	return ___godot_icall_int_int_float_Object_float_float(___mb.mb_audio_track_insert_key, (const object *) this, track_idx, time_, stream.ptr(), start_offset, end_offset);
}

void animation::audio_track_set_key_end_offset(const int64_t track_idx, const int64_t key_idx, const real_t offset) {
	___godot_icall_void_int_int_float(___mb.mb_audio_track_set_key_end_offset, (const object *) this, track_idx, key_idx, offset);
}

void animation::audio_track_set_key_start_offset(const int64_t track_idx, const int64_t key_idx, const real_t offset) {
	___godot_icall_void_int_int_float(___mb.mb_audio_track_set_key_start_offset, (const object *) this, track_idx, key_idx, offset);
}

void animation::audio_track_set_key_stream(const int64_t track_idx, const int64_t key_idx, const ref<resource> stream) {
	___godot_icall_void_int_int_Object(___mb.mb_audio_track_set_key_stream, (const object *) this, track_idx, key_idx, stream.ptr());
}

vector2 animation::bezier_track_get_key_in_handle(const int64_t track_idx, const int64_t key_idx) const {
	return ___godot_icall_Vector2_int_int(___mb.mb_bezier_track_get_key_in_handle, (const object *) this, track_idx, key_idx);
}

vector2 animation::bezier_track_get_key_out_handle(const int64_t track_idx, const int64_t key_idx) const {
	return ___godot_icall_Vector2_int_int(___mb.mb_bezier_track_get_key_out_handle, (const object *) this, track_idx, key_idx);
}

real_t animation::bezier_track_get_key_value(const int64_t track_idx, const int64_t key_idx) const {
	return ___godot_icall_float_int_int(___mb.mb_bezier_track_get_key_value, (const object *) this, track_idx, key_idx);
}

int64_t animation::bezier_track_insert_key(const int64_t track_idx, const real_t time_, const real_t value, const vector2 in_handle, const vector2 out_handle) {
	return ___godot_icall_int_int_float_float_Vector2_Vector2(___mb.mb_bezier_track_insert_key, (const object *) this, track_idx, time_, value, in_handle, out_handle);
}

real_t animation::bezier_track_interpolate(const int64_t track_idx, const real_t time_) const {
	return ___godot_icall_float_int_float(___mb.mb_bezier_track_interpolate, (const object *) this, track_idx, time_);
}

void animation::bezier_track_set_key_in_handle(const int64_t track_idx, const int64_t key_idx, const vector2 in_handle) {
	___godot_icall_void_int_int_Vector2(___mb.mb_bezier_track_set_key_in_handle, (const object *) this, track_idx, key_idx, in_handle);
}

void animation::bezier_track_set_key_out_handle(const int64_t track_idx, const int64_t key_idx, const vector2 out_handle) {
	___godot_icall_void_int_int_Vector2(___mb.mb_bezier_track_set_key_out_handle, (const object *) this, track_idx, key_idx, out_handle);
}

void animation::bezier_track_set_key_value(const int64_t track_idx, const int64_t key_idx, const real_t value) {
	___godot_icall_void_int_int_float(___mb.mb_bezier_track_set_key_value, (const object *) this, track_idx, key_idx, value);
}

void animation::clear() {
	___godot_icall_void(___mb.mb_clear, (const object *) this);
}

void animation::copy_track(const int64_t track_idx, const ref<animation> to_animation) {
	___godot_icall_void_int_Object(___mb.mb_copy_track, (const object *) this, track_idx, to_animation.ptr());
}

int64_t animation::find_track(const node_path path_) const {
	return ___godot_icall_int_NodePath(___mb.mb_find_track, (const object *) this, path_);
}

real_t animation::get_length() const {
	return ___godot_icall_float(___mb.mb_get_length, (const object *) this);
}

real_t animation::get_step() const {
	return ___godot_icall_float(___mb.mb_get_step, (const object *) this);
}

int64_t animation::get_track_count() const {
	return ___godot_icall_int(___mb.mb_get_track_count, (const object *) this);
}

bool animation::has_loop() const {
	return ___godot_icall_bool(___mb.mb_has_loop, (const object *) this);
}

pool_int_array animation::method_track_get_key_indices(const int64_t track_idx, const real_t time_sec, const real_t delta) const {
	return ___godot_icall_PoolIntArray_int_float_float(___mb.mb_method_track_get_key_indices, (const object *) this, track_idx, time_sec, delta);
}

string animation::method_track_get_name(const int64_t track_idx, const int64_t key_idx) const {
	return ___godot_icall_String_int_int(___mb.mb_method_track_get_name, (const object *) this, track_idx, key_idx);
}

array animation::method_track_get_params(const int64_t track_idx, const int64_t key_idx) const {
	return ___godot_icall_Array_int_int(___mb.mb_method_track_get_params, (const object *) this, track_idx, key_idx);
}

void animation::remove_track(const int64_t track_idx) {
	___godot_icall_void_int(___mb.mb_remove_track, (const object *) this, track_idx);
}

void animation::set_length(const real_t time_sec) {
	___godot_icall_void_float(___mb.mb_set_length, (const object *) this, time_sec);
}

void animation::set_loop(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_loop, (const object *) this, enabled);
}

void animation::set_step(const real_t size_sec) {
	___godot_icall_void_float(___mb.mb_set_step, (const object *) this, size_sec);
}

int64_t animation::track_find_key(const int64_t track_idx, const real_t time_, const bool exact) const {
	return ___godot_icall_int_int_float_bool(___mb.mb_track_find_key, (const object *) this, track_idx, time_, exact);
}

bool animation::track_get_interpolation_loop_wrap(const int64_t track_idx) const {
	return ___godot_icall_bool_int(___mb.mb_track_get_interpolation_loop_wrap, (const object *) this, track_idx);
}

animation::InterpolationType animation::track_get_interpolation_type(const int64_t track_idx) const {
	return (animation::InterpolationType) ___godot_icall_int_int(___mb.mb_track_get_interpolation_type, (const object *) this, track_idx);
}

int64_t animation::track_get_key_count(const int64_t track_idx) const {
	return ___godot_icall_int_int(___mb.mb_track_get_key_count, (const object *) this, track_idx);
}

real_t animation::track_get_key_time(const int64_t track_idx, const int64_t key_idx) const {
	return ___godot_icall_float_int_int(___mb.mb_track_get_key_time, (const object *) this, track_idx, key_idx);
}

real_t animation::track_get_key_transition(const int64_t track_idx, const int64_t key_idx) const {
	return ___godot_icall_float_int_int(___mb.mb_track_get_key_transition, (const object *) this, track_idx, key_idx);
}

variant animation::track_get_key_value(const int64_t track_idx, const int64_t key_idx) const {
	return ___godot_icall_Variant_int_int(___mb.mb_track_get_key_value, (const object *) this, track_idx, key_idx);
}

node_path animation::track_get_path(const int64_t track_idx) const {
	return ___godot_icall_NodePath_int(___mb.mb_track_get_path, (const object *) this, track_idx);
}

animation::TrackType animation::track_get_type(const int64_t track_idx) const {
	return (animation::TrackType) ___godot_icall_int_int(___mb.mb_track_get_type, (const object *) this, track_idx);
}

void animation::track_insert_key(const int64_t track_idx, const real_t time_, const variant key, const real_t transition) {
	___godot_icall_void_int_float_Variant_float(___mb.mb_track_insert_key, (const object *) this, track_idx, time_, key, transition);
}

bool animation::track_is_enabled(const int64_t track_idx) const {
	return ___godot_icall_bool_int(___mb.mb_track_is_enabled, (const object *) this, track_idx);
}

bool animation::track_is_imported(const int64_t track_idx) const {
	return ___godot_icall_bool_int(___mb.mb_track_is_imported, (const object *) this, track_idx);
}

void animation::track_move_down(const int64_t track_idx) {
	___godot_icall_void_int(___mb.mb_track_move_down, (const object *) this, track_idx);
}

void animation::track_move_to(const int64_t track_idx, const int64_t to_idx) {
	___godot_icall_void_int_int(___mb.mb_track_move_to, (const object *) this, track_idx, to_idx);
}

void animation::track_move_up(const int64_t track_idx) {
	___godot_icall_void_int(___mb.mb_track_move_up, (const object *) this, track_idx);
}

void animation::track_remove_key(const int64_t track_idx, const int64_t key_idx) {
	___godot_icall_void_int_int(___mb.mb_track_remove_key, (const object *) this, track_idx, key_idx);
}

void animation::track_remove_key_at_position(const int64_t track_idx, const real_t position) {
	___godot_icall_void_int_float(___mb.mb_track_remove_key_at_position, (const object *) this, track_idx, position);
}

void animation::track_set_enabled(const int64_t track_idx, const bool enabled) {
	___godot_icall_void_int_bool(___mb.mb_track_set_enabled, (const object *) this, track_idx, enabled);
}

void animation::track_set_imported(const int64_t track_idx, const bool imported) {
	___godot_icall_void_int_bool(___mb.mb_track_set_imported, (const object *) this, track_idx, imported);
}

void animation::track_set_interpolation_loop_wrap(const int64_t track_idx, const bool interpolation) {
	___godot_icall_void_int_bool(___mb.mb_track_set_interpolation_loop_wrap, (const object *) this, track_idx, interpolation);
}

void animation::track_set_interpolation_type(const int64_t track_idx, const int64_t interpolation) {
	___godot_icall_void_int_int(___mb.mb_track_set_interpolation_type, (const object *) this, track_idx, interpolation);
}

void animation::track_set_key_time(const int64_t track_idx, const int64_t key_idx, const real_t time_) {
	___godot_icall_void_int_int_float(___mb.mb_track_set_key_time, (const object *) this, track_idx, key_idx, time_);
}

void animation::track_set_key_transition(const int64_t track_idx, const int64_t key_idx, const real_t transition) {
	___godot_icall_void_int_int_float(___mb.mb_track_set_key_transition, (const object *) this, track_idx, key_idx, transition);
}

void animation::track_set_key_value(const int64_t track_idx, const int64_t key, const variant value) {
	___godot_icall_void_int_int_Variant(___mb.mb_track_set_key_value, (const object *) this, track_idx, key, value);
}

void animation::track_set_path(const int64_t track_idx, const node_path path_) {
	___godot_icall_void_int_NodePath(___mb.mb_track_set_path, (const object *) this, track_idx, path_);
}

void animation::track_swap(const int64_t track_idx, const int64_t with_idx) {
	___godot_icall_void_int_int(___mb.mb_track_swap, (const object *) this, track_idx, with_idx);
}

int64_t animation::transform_track_insert_key(const int64_t track_idx, const real_t time_, const vector3 location, const quat rotation, const vector3 scale) {
	return ___godot_icall_int_int_float_Vector3_Quat_Vector3(___mb.mb_transform_track_insert_key, (const object *) this, track_idx, time_, location, rotation, scale);
}

array animation::transform_track_interpolate(const int64_t track_idx, const real_t time_sec) const {
	return ___godot_icall_Array_int_float(___mb.mb_transform_track_interpolate, (const object *) this, track_idx, time_sec);
}

pool_int_array animation::value_track_get_key_indices(const int64_t track_idx, const real_t time_sec, const real_t delta) const {
	return ___godot_icall_PoolIntArray_int_float_float(___mb.mb_value_track_get_key_indices, (const object *) this, track_idx, time_sec, delta);
}

animation::UpdateMode animation::value_track_get_update_mode(const int64_t track_idx) const {
	return (animation::UpdateMode) ___godot_icall_int_int(___mb.mb_value_track_get_update_mode, (const object *) this, track_idx);
}

variant animation::value_track_interpolate(const int64_t track_idx, const real_t time_sec) const {
	return ___godot_icall_Variant_int_float(___mb.mb_value_track_interpolate, (const object *) this, track_idx, time_sec);
}

void animation::value_track_set_update_mode(const int64_t track_idx, const int64_t mode) {
	___godot_icall_void_int_int(___mb.mb_value_track_set_update_mode, (const object *) this, track_idx, mode);
}

}