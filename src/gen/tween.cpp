#include "tween.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "object.hpp"


namespace gd {


tween::___method_bindings tween::___mb = {};

void *tween::_detail_class_tag = nullptr;

void tween::___init_method_bindings() {
	___mb.mb__remove_by_uid = gd::api->godot_method_bind_get_method("Tween", "_remove_by_uid");
	___mb.mb_follow_method = gd::api->godot_method_bind_get_method("Tween", "follow_method");
	___mb.mb_follow_property = gd::api->godot_method_bind_get_method("Tween", "follow_property");
	___mb.mb_get_runtime = gd::api->godot_method_bind_get_method("Tween", "get_runtime");
	___mb.mb_get_speed_scale = gd::api->godot_method_bind_get_method("Tween", "get_speed_scale");
	___mb.mb_get_tween_process_mode = gd::api->godot_method_bind_get_method("Tween", "get_tween_process_mode");
	___mb.mb_interpolate_callback = gd::api->godot_method_bind_get_method("Tween", "interpolate_callback");
	___mb.mb_interpolate_deferred_callback = gd::api->godot_method_bind_get_method("Tween", "interpolate_deferred_callback");
	___mb.mb_interpolate_method = gd::api->godot_method_bind_get_method("Tween", "interpolate_method");
	___mb.mb_interpolate_property = gd::api->godot_method_bind_get_method("Tween", "interpolate_property");
	___mb.mb_is_active = gd::api->godot_method_bind_get_method("Tween", "is_active");
	___mb.mb_is_repeat = gd::api->godot_method_bind_get_method("Tween", "is_repeat");
	___mb.mb_remove = gd::api->godot_method_bind_get_method("Tween", "remove");
	___mb.mb_remove_all = gd::api->godot_method_bind_get_method("Tween", "remove_all");
	___mb.mb_reset = gd::api->godot_method_bind_get_method("Tween", "reset");
	___mb.mb_reset_all = gd::api->godot_method_bind_get_method("Tween", "reset_all");
	___mb.mb_resume = gd::api->godot_method_bind_get_method("Tween", "resume");
	___mb.mb_resume_all = gd::api->godot_method_bind_get_method("Tween", "resume_all");
	___mb.mb_seek = gd::api->godot_method_bind_get_method("Tween", "seek");
	___mb.mb_set_active = gd::api->godot_method_bind_get_method("Tween", "set_active");
	___mb.mb_set_repeat = gd::api->godot_method_bind_get_method("Tween", "set_repeat");
	___mb.mb_set_speed_scale = gd::api->godot_method_bind_get_method("Tween", "set_speed_scale");
	___mb.mb_set_tween_process_mode = gd::api->godot_method_bind_get_method("Tween", "set_tween_process_mode");
	___mb.mb_start = gd::api->godot_method_bind_get_method("Tween", "start");
	___mb.mb_stop = gd::api->godot_method_bind_get_method("Tween", "stop");
	___mb.mb_stop_all = gd::api->godot_method_bind_get_method("Tween", "stop_all");
	___mb.mb_targeting_method = gd::api->godot_method_bind_get_method("Tween", "targeting_method");
	___mb.mb_targeting_property = gd::api->godot_method_bind_get_method("Tween", "targeting_property");
	___mb.mb_tell = gd::api->godot_method_bind_get_method("Tween", "tell");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Tween");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

tween *tween::_new()
{
	return (tween *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Tween")());
}
void tween::_remove_by_uid(const int64_t uid) {
	___godot_icall_void_int(___mb.mb__remove_by_uid, (const object *) this, uid);
}

bool tween::follow_method(const object *object_, const string method, const variant initial_val, const object *target, const string target_method, const real_t duration, const int64_t trans_type, const int64_t ease_type, const real_t delay) {
	return ___godot_icall_bool_Object_String_Variant_Object_String_float_int_int_float(___mb.mb_follow_method, (const object *) this, object_, method, initial_val, target, target_method, duration, trans_type, ease_type, delay);
}

bool tween::follow_property(const object *object_, const node_path property, const variant initial_val, const object *target, const node_path target_property, const real_t duration, const int64_t trans_type, const int64_t ease_type, const real_t delay) {
	return ___godot_icall_bool_Object_NodePath_Variant_Object_NodePath_float_int_int_float(___mb.mb_follow_property, (const object *) this, object_, property, initial_val, target, target_property, duration, trans_type, ease_type, delay);
}

real_t tween::get_runtime() const {
	return ___godot_icall_float(___mb.mb_get_runtime, (const object *) this);
}

real_t tween::get_speed_scale() const {
	return ___godot_icall_float(___mb.mb_get_speed_scale, (const object *) this);
}

tween::TweenProcessMode tween::get_tween_process_mode() const {
	return (tween::TweenProcessMode) ___godot_icall_int(___mb.mb_get_tween_process_mode, (const object *) this);
}

bool tween::interpolate_callback(const object *object_, const real_t duration, const string callback, const variant arg1, const variant arg2, const variant arg3, const variant arg4, const variant arg5, const variant arg6, const variant arg7, const variant arg8) {
	return ___godot_icall_bool_Object_float_String_Variant_Variant_Variant_Variant_Variant_Variant_Variant_Variant(___mb.mb_interpolate_callback, (const object *) this, object_, duration, callback, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

bool tween::interpolate_deferred_callback(const object *object_, const real_t duration, const string callback, const variant arg1, const variant arg2, const variant arg3, const variant arg4, const variant arg5, const variant arg6, const variant arg7, const variant arg8) {
	return ___godot_icall_bool_Object_float_String_Variant_Variant_Variant_Variant_Variant_Variant_Variant_Variant(___mb.mb_interpolate_deferred_callback, (const object *) this, object_, duration, callback, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

bool tween::interpolate_method(const object *object_, const string method, const variant initial_val, const variant final_val, const real_t duration, const int64_t trans_type, const int64_t ease_type, const real_t delay) {
	return ___godot_icall_bool_Object_String_Variant_Variant_float_int_int_float(___mb.mb_interpolate_method, (const object *) this, object_, method, initial_val, final_val, duration, trans_type, ease_type, delay);
}

bool tween::interpolate_property(const object *object_, const node_path property, const variant initial_val, const variant final_val, const real_t duration, const int64_t trans_type, const int64_t ease_type, const real_t delay) {
	return ___godot_icall_bool_Object_NodePath_Variant_Variant_float_int_int_float(___mb.mb_interpolate_property, (const object *) this, object_, property, initial_val, final_val, duration, trans_type, ease_type, delay);
}

bool tween::is_active() const {
	return ___godot_icall_bool(___mb.mb_is_active, (const object *) this);
}

bool tween::is_repeat() const {
	return ___godot_icall_bool(___mb.mb_is_repeat, (const object *) this);
}

bool tween::remove(const object *object_, const string key) {
	return ___godot_icall_bool_Object_String(___mb.mb_remove, (const object *) this, object_, key);
}

bool tween::remove_all() {
	return ___godot_icall_bool(___mb.mb_remove_all, (const object *) this);
}

bool tween::reset(const object *object_, const string key) {
	return ___godot_icall_bool_Object_String(___mb.mb_reset, (const object *) this, object_, key);
}

bool tween::reset_all() {
	return ___godot_icall_bool(___mb.mb_reset_all, (const object *) this);
}

bool tween::resume(const object *object_, const string key) {
	return ___godot_icall_bool_Object_String(___mb.mb_resume, (const object *) this, object_, key);
}

bool tween::resume_all() {
	return ___godot_icall_bool(___mb.mb_resume_all, (const object *) this);
}

bool tween::seek(const real_t time_) {
	return ___godot_icall_bool_float(___mb.mb_seek, (const object *) this, time_);
}

void tween::set_active(const bool active) {
	___godot_icall_void_bool(___mb.mb_set_active, (const object *) this, active);
}

void tween::set_repeat(const bool repeat) {
	___godot_icall_void_bool(___mb.mb_set_repeat, (const object *) this, repeat);
}

void tween::set_speed_scale(const real_t speed) {
	___godot_icall_void_float(___mb.mb_set_speed_scale, (const object *) this, speed);
}

void tween::set_tween_process_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_tween_process_mode, (const object *) this, mode);
}

bool tween::start() {
	return ___godot_icall_bool(___mb.mb_start, (const object *) this);
}

bool tween::stop(const object *object_, const string key) {
	return ___godot_icall_bool_Object_String(___mb.mb_stop, (const object *) this, object_, key);
}

bool tween::stop_all() {
	return ___godot_icall_bool(___mb.mb_stop_all, (const object *) this);
}

bool tween::targeting_method(const object *object_, const string method, const object *initial, const string initial_method, const variant final_val, const real_t duration, const int64_t trans_type, const int64_t ease_type, const real_t delay) {
	return ___godot_icall_bool_Object_String_Object_String_Variant_float_int_int_float(___mb.mb_targeting_method, (const object *) this, object_, method, initial, initial_method, final_val, duration, trans_type, ease_type, delay);
}

bool tween::targeting_property(const object *object_, const node_path property, const object *initial, const node_path initial_val, const variant final_val, const real_t duration, const int64_t trans_type, const int64_t ease_type, const real_t delay) {
	return ___godot_icall_bool_Object_NodePath_Object_NodePath_Variant_float_int_int_float(___mb.mb_targeting_property, (const object *) this, object_, property, initial, initial_val, final_val, duration, trans_type, ease_type, delay);
}

real_t tween::tell() const {
	return ___godot_icall_float(___mb.mb_tell, (const object *) this);
}

}