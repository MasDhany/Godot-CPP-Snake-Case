#include "scene_tree_tween.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "callback_tweener.hpp"
#include "interval_tweener.hpp"
#include "method_tweener.hpp"
#include "node.hpp"
#include "object.hpp"
#include "property_tweener.hpp"
#include "scene_tree_tween.hpp"


namespace gd {


scene_tree_tween::___method_bindings scene_tree_tween::___mb = {};

void *scene_tree_tween::_detail_class_tag = nullptr;

void scene_tree_tween::___init_method_bindings() {
	___mb.mb_bind_node = gd::api->godot_method_bind_get_method("SceneTreeTween", "bind_node");
	___mb.mb_chain = gd::api->godot_method_bind_get_method("SceneTreeTween", "chain");
	___mb.mb_custom_step = gd::api->godot_method_bind_get_method("SceneTreeTween", "custom_step");
	___mb.mb_get_total_elapsed_time = gd::api->godot_method_bind_get_method("SceneTreeTween", "get_total_elapsed_time");
	___mb.mb_interpolate_value = gd::api->godot_method_bind_get_method("SceneTreeTween", "interpolate_value");
	___mb.mb_is_running = gd::api->godot_method_bind_get_method("SceneTreeTween", "is_running");
	___mb.mb_is_valid = gd::api->godot_method_bind_get_method("SceneTreeTween", "is_valid");
	___mb.mb_kill = gd::api->godot_method_bind_get_method("SceneTreeTween", "kill");
	___mb.mb_parallel = gd::api->godot_method_bind_get_method("SceneTreeTween", "parallel");
	___mb.mb_pause = gd::api->godot_method_bind_get_method("SceneTreeTween", "pause");
	___mb.mb_play = gd::api->godot_method_bind_get_method("SceneTreeTween", "play");
	___mb.mb_set_ease = gd::api->godot_method_bind_get_method("SceneTreeTween", "set_ease");
	___mb.mb_set_loops = gd::api->godot_method_bind_get_method("SceneTreeTween", "set_loops");
	___mb.mb_set_parallel = gd::api->godot_method_bind_get_method("SceneTreeTween", "set_parallel");
	___mb.mb_set_pause_mode = gd::api->godot_method_bind_get_method("SceneTreeTween", "set_pause_mode");
	___mb.mb_set_process_mode = gd::api->godot_method_bind_get_method("SceneTreeTween", "set_process_mode");
	___mb.mb_set_speed_scale = gd::api->godot_method_bind_get_method("SceneTreeTween", "set_speed_scale");
	___mb.mb_set_trans = gd::api->godot_method_bind_get_method("SceneTreeTween", "set_trans");
	___mb.mb_stop = gd::api->godot_method_bind_get_method("SceneTreeTween", "stop");
	___mb.mb_tween_callback = gd::api->godot_method_bind_get_method("SceneTreeTween", "tween_callback");
	___mb.mb_tween_interval = gd::api->godot_method_bind_get_method("SceneTreeTween", "tween_interval");
	___mb.mb_tween_method = gd::api->godot_method_bind_get_method("SceneTreeTween", "tween_method");
	___mb.mb_tween_property = gd::api->godot_method_bind_get_method("SceneTreeTween", "tween_property");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "SceneTreeTween");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

scene_tree_tween *scene_tree_tween::_new()
{
	return (scene_tree_tween *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"SceneTreeTween")());
}
ref<scene_tree_tween> scene_tree_tween::bind_node(const node *node_) {
	return ref<scene_tree_tween>::__internal_constructor(___godot_icall_Object_Object(___mb.mb_bind_node, (const object *) this, node_));
}

ref<scene_tree_tween> scene_tree_tween::chain() {
	return ref<scene_tree_tween>::__internal_constructor(___godot_icall_Object(___mb.mb_chain, (const object *) this));
}

bool scene_tree_tween::custom_step(const real_t delta) {
	return ___godot_icall_bool_float(___mb.mb_custom_step, (const object *) this, delta);
}

real_t scene_tree_tween::get_total_elapsed_time() const {
	return ___godot_icall_float(___mb.mb_get_total_elapsed_time, (const object *) this);
}

variant scene_tree_tween::interpolate_value(const variant initial_value, const variant delta_value, const real_t elapsed_time, const real_t duration, const int64_t trans_type, const int64_t ease_type) const {
	return ___godot_icall_Variant_Variant_Variant_float_float_int_int(___mb.mb_interpolate_value, (const object *) this, initial_value, delta_value, elapsed_time, duration, trans_type, ease_type);
}

bool scene_tree_tween::is_running() const {
	return ___godot_icall_bool(___mb.mb_is_running, (const object *) this);
}

bool scene_tree_tween::is_valid() const {
	return ___godot_icall_bool(___mb.mb_is_valid, (const object *) this);
}

void scene_tree_tween::kill() {
	___godot_icall_void(___mb.mb_kill, (const object *) this);
}

ref<scene_tree_tween> scene_tree_tween::parallel() {
	return ref<scene_tree_tween>::__internal_constructor(___godot_icall_Object(___mb.mb_parallel, (const object *) this));
}

void scene_tree_tween::pause() {
	___godot_icall_void(___mb.mb_pause, (const object *) this);
}

void scene_tree_tween::play() {
	___godot_icall_void(___mb.mb_play, (const object *) this);
}

ref<scene_tree_tween> scene_tree_tween::set_ease(const int64_t ease) {
	return ref<scene_tree_tween>::__internal_constructor(___godot_icall_Object_int(___mb.mb_set_ease, (const object *) this, ease));
}

ref<scene_tree_tween> scene_tree_tween::set_loops(const int64_t loops) {
	return ref<scene_tree_tween>::__internal_constructor(___godot_icall_Object_int(___mb.mb_set_loops, (const object *) this, loops));
}

ref<scene_tree_tween> scene_tree_tween::set_parallel(const bool parallel) {
	return ref<scene_tree_tween>::__internal_constructor(___godot_icall_Object_bool(___mb.mb_set_parallel, (const object *) this, parallel));
}

ref<scene_tree_tween> scene_tree_tween::set_pause_mode(const int64_t mode) {
	return ref<scene_tree_tween>::__internal_constructor(___godot_icall_Object_int(___mb.mb_set_pause_mode, (const object *) this, mode));
}

ref<scene_tree_tween> scene_tree_tween::set_process_mode(const int64_t mode) {
	return ref<scene_tree_tween>::__internal_constructor(___godot_icall_Object_int(___mb.mb_set_process_mode, (const object *) this, mode));
}

ref<scene_tree_tween> scene_tree_tween::set_speed_scale(const real_t speed) {
	return ref<scene_tree_tween>::__internal_constructor(___godot_icall_Object_float(___mb.mb_set_speed_scale, (const object *) this, speed));
}

ref<scene_tree_tween> scene_tree_tween::set_trans(const int64_t trans) {
	return ref<scene_tree_tween>::__internal_constructor(___godot_icall_Object_int(___mb.mb_set_trans, (const object *) this, trans));
}

void scene_tree_tween::stop() {
	___godot_icall_void(___mb.mb_stop, (const object *) this);
}

ref<callback_tweener> scene_tree_tween::tween_callback(const object *object_, const string method, const array binds) {
	return ref<callback_tweener>::__internal_constructor(___godot_icall_Object_Object_String_Array(___mb.mb_tween_callback, (const object *) this, object_, method, binds));
}

ref<interval_tweener> scene_tree_tween::tween_interval(const real_t time_) {
	return ref<interval_tweener>::__internal_constructor(___godot_icall_Object_float(___mb.mb_tween_interval, (const object *) this, time_));
}

ref<method_tweener> scene_tree_tween::tween_method(const object *object_, const string method, const variant from, const variant to, const real_t duration, const array binds) {
	return ref<method_tweener>::__internal_constructor(___godot_icall_Object_Object_String_Variant_Variant_float_Array(___mb.mb_tween_method, (const object *) this, object_, method, from, to, duration, binds));
}

ref<property_tweener> scene_tree_tween::tween_property(const object *object_, const node_path property, const variant final_val, const real_t duration) {
	return ref<property_tweener>::__internal_constructor(___godot_icall_Object_Object_NodePath_Variant_float(___mb.mb_tween_property, (const object *) this, object_, property, final_val, duration));
}

}