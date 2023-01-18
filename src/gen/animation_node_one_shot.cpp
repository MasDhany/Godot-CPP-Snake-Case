#include "animation_node_one_shot.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


animation_node_one_shot::___method_bindings animation_node_one_shot::___mb = {};

void *animation_node_one_shot::_detail_class_tag = nullptr;

void animation_node_one_shot::___init_method_bindings() {
	___mb.mb_get_autorestart_delay = gd::api->godot_method_bind_get_method("AnimationNodeOneShot", "get_autorestart_delay");
	___mb.mb_get_autorestart_random_delay = gd::api->godot_method_bind_get_method("AnimationNodeOneShot", "get_autorestart_random_delay");
	___mb.mb_get_fadein_time = gd::api->godot_method_bind_get_method("AnimationNodeOneShot", "get_fadein_time");
	___mb.mb_get_fadeout_time = gd::api->godot_method_bind_get_method("AnimationNodeOneShot", "get_fadeout_time");
	___mb.mb_get_mix_mode = gd::api->godot_method_bind_get_method("AnimationNodeOneShot", "get_mix_mode");
	___mb.mb_has_autorestart = gd::api->godot_method_bind_get_method("AnimationNodeOneShot", "has_autorestart");
	___mb.mb_is_using_sync = gd::api->godot_method_bind_get_method("AnimationNodeOneShot", "is_using_sync");
	___mb.mb_set_autorestart = gd::api->godot_method_bind_get_method("AnimationNodeOneShot", "set_autorestart");
	___mb.mb_set_autorestart_delay = gd::api->godot_method_bind_get_method("AnimationNodeOneShot", "set_autorestart_delay");
	___mb.mb_set_autorestart_random_delay = gd::api->godot_method_bind_get_method("AnimationNodeOneShot", "set_autorestart_random_delay");
	___mb.mb_set_fadein_time = gd::api->godot_method_bind_get_method("AnimationNodeOneShot", "set_fadein_time");
	___mb.mb_set_fadeout_time = gd::api->godot_method_bind_get_method("AnimationNodeOneShot", "set_fadeout_time");
	___mb.mb_set_mix_mode = gd::api->godot_method_bind_get_method("AnimationNodeOneShot", "set_mix_mode");
	___mb.mb_set_use_sync = gd::api->godot_method_bind_get_method("AnimationNodeOneShot", "set_use_sync");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AnimationNodeOneShot");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

animation_node_one_shot *animation_node_one_shot::_new()
{
	return (animation_node_one_shot *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AnimationNodeOneShot")());
}
real_t animation_node_one_shot::get_autorestart_delay() const {
	return ___godot_icall_float(___mb.mb_get_autorestart_delay, (const object *) this);
}

real_t animation_node_one_shot::get_autorestart_random_delay() const {
	return ___godot_icall_float(___mb.mb_get_autorestart_random_delay, (const object *) this);
}

real_t animation_node_one_shot::get_fadein_time() const {
	return ___godot_icall_float(___mb.mb_get_fadein_time, (const object *) this);
}

real_t animation_node_one_shot::get_fadeout_time() const {
	return ___godot_icall_float(___mb.mb_get_fadeout_time, (const object *) this);
}

animation_node_one_shot::MixMode animation_node_one_shot::get_mix_mode() const {
	return (animation_node_one_shot::MixMode) ___godot_icall_int(___mb.mb_get_mix_mode, (const object *) this);
}

bool animation_node_one_shot::has_autorestart() const {
	return ___godot_icall_bool(___mb.mb_has_autorestart, (const object *) this);
}

bool animation_node_one_shot::is_using_sync() const {
	return ___godot_icall_bool(___mb.mb_is_using_sync, (const object *) this);
}

void animation_node_one_shot::set_autorestart(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_autorestart, (const object *) this, enable);
}

void animation_node_one_shot::set_autorestart_delay(const real_t enable) {
	___godot_icall_void_float(___mb.mb_set_autorestart_delay, (const object *) this, enable);
}

void animation_node_one_shot::set_autorestart_random_delay(const real_t enable) {
	___godot_icall_void_float(___mb.mb_set_autorestart_random_delay, (const object *) this, enable);
}

void animation_node_one_shot::set_fadein_time(const real_t time_) {
	___godot_icall_void_float(___mb.mb_set_fadein_time, (const object *) this, time_);
}

void animation_node_one_shot::set_fadeout_time(const real_t time_) {
	___godot_icall_void_float(___mb.mb_set_fadeout_time, (const object *) this, time_);
}

void animation_node_one_shot::set_mix_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_mix_mode, (const object *) this, mode);
}

void animation_node_one_shot::set_use_sync(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_use_sync, (const object *) this, enable);
}

}