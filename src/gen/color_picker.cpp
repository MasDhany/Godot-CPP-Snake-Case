#include "color_picker.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "control.hpp"
#include "input_event.hpp"


namespace gd {


color_picker::___method_bindings color_picker::___mb = {};

void *color_picker::_detail_class_tag = nullptr;

void color_picker::___init_method_bindings() {
	___mb.mb__add_preset_pressed = gd::api->godot_method_bind_get_method("ColorPicker", "_add_preset_pressed");
	___mb.mb__focus_enter = gd::api->godot_method_bind_get_method("ColorPicker", "_focus_enter");
	___mb.mb__focus_exit = gd::api->godot_method_bind_get_method("ColorPicker", "_focus_exit");
	___mb.mb__hsv_draw = gd::api->godot_method_bind_get_method("ColorPicker", "_hsv_draw");
	___mb.mb__html_entered = gd::api->godot_method_bind_get_method("ColorPicker", "_html_entered");
	___mb.mb__html_focus_exit = gd::api->godot_method_bind_get_method("ColorPicker", "_html_focus_exit");
	___mb.mb__preset_input = gd::api->godot_method_bind_get_method("ColorPicker", "_preset_input");
	___mb.mb__sample_draw = gd::api->godot_method_bind_get_method("ColorPicker", "_sample_draw");
	___mb.mb__sample_input = gd::api->godot_method_bind_get_method("ColorPicker", "_sample_input");
	___mb.mb__screen_input = gd::api->godot_method_bind_get_method("ColorPicker", "_screen_input");
	___mb.mb__screen_pick_pressed = gd::api->godot_method_bind_get_method("ColorPicker", "_screen_pick_pressed");
	___mb.mb__text_type_toggled = gd::api->godot_method_bind_get_method("ColorPicker", "_text_type_toggled");
	___mb.mb__update_presets = gd::api->godot_method_bind_get_method("ColorPicker", "_update_presets");
	___mb.mb__uv_input = gd::api->godot_method_bind_get_method("ColorPicker", "_uv_input");
	___mb.mb__value_changed = gd::api->godot_method_bind_get_method("ColorPicker", "_value_changed");
	___mb.mb__w_input = gd::api->godot_method_bind_get_method("ColorPicker", "_w_input");
	___mb.mb_add_preset = gd::api->godot_method_bind_get_method("ColorPicker", "add_preset");
	___mb.mb_are_presets_enabled = gd::api->godot_method_bind_get_method("ColorPicker", "are_presets_enabled");
	___mb.mb_are_presets_visible = gd::api->godot_method_bind_get_method("ColorPicker", "are_presets_visible");
	___mb.mb_erase_preset = gd::api->godot_method_bind_get_method("ColorPicker", "erase_preset");
	___mb.mb_get_pick_color = gd::api->godot_method_bind_get_method("ColorPicker", "get_pick_color");
	___mb.mb_get_presets = gd::api->godot_method_bind_get_method("ColorPicker", "get_presets");
	___mb.mb_is_deferred_mode = gd::api->godot_method_bind_get_method("ColorPicker", "is_deferred_mode");
	___mb.mb_is_editing_alpha = gd::api->godot_method_bind_get_method("ColorPicker", "is_editing_alpha");
	___mb.mb_is_hsv_mode = gd::api->godot_method_bind_get_method("ColorPicker", "is_hsv_mode");
	___mb.mb_is_raw_mode = gd::api->godot_method_bind_get_method("ColorPicker", "is_raw_mode");
	___mb.mb_set_deferred_mode = gd::api->godot_method_bind_get_method("ColorPicker", "set_deferred_mode");
	___mb.mb_set_edit_alpha = gd::api->godot_method_bind_get_method("ColorPicker", "set_edit_alpha");
	___mb.mb_set_hsv_mode = gd::api->godot_method_bind_get_method("ColorPicker", "set_hsv_mode");
	___mb.mb_set_pick_color = gd::api->godot_method_bind_get_method("ColorPicker", "set_pick_color");
	___mb.mb_set_presets_enabled = gd::api->godot_method_bind_get_method("ColorPicker", "set_presets_enabled");
	___mb.mb_set_presets_visible = gd::api->godot_method_bind_get_method("ColorPicker", "set_presets_visible");
	___mb.mb_set_raw_mode = gd::api->godot_method_bind_get_method("ColorPicker", "set_raw_mode");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ColorPicker");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

color_picker *color_picker::_new()
{
	return (color_picker *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ColorPicker")());
}
void color_picker::_add_preset_pressed() {
	___godot_icall_void(___mb.mb__add_preset_pressed, (const object *) this);
}

void color_picker::_focus_enter() {
	___godot_icall_void(___mb.mb__focus_enter, (const object *) this);
}

void color_picker::_focus_exit() {
	___godot_icall_void(___mb.mb__focus_exit, (const object *) this);
}

void color_picker::_hsv_draw(const int64_t arg0, const control *arg1) {
	___godot_icall_void_int_Object(___mb.mb__hsv_draw, (const object *) this, arg0, arg1);
}

void color_picker::_html_entered(const string arg0) {
	___godot_icall_void_String(___mb.mb__html_entered, (const object *) this, arg0);
}

void color_picker::_html_focus_exit() {
	___godot_icall_void(___mb.mb__html_focus_exit, (const object *) this);
}

void color_picker::_preset_input(const ref<input_event> arg0, const color arg1) {
	___godot_icall_void_Object_Color(___mb.mb__preset_input, (const object *) this, arg0.ptr(), arg1);
}

void color_picker::_sample_draw() {
	___godot_icall_void(___mb.mb__sample_draw, (const object *) this);
}

void color_picker::_sample_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__sample_input, (const object *) this, arg0.ptr());
}

void color_picker::_screen_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__screen_input, (const object *) this, arg0.ptr());
}

void color_picker::_screen_pick_pressed() {
	___godot_icall_void(___mb.mb__screen_pick_pressed, (const object *) this);
}

void color_picker::_text_type_toggled() {
	___godot_icall_void(___mb.mb__text_type_toggled, (const object *) this);
}

void color_picker::_update_presets() {
	___godot_icall_void(___mb.mb__update_presets, (const object *) this);
}

void color_picker::_uv_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__uv_input, (const object *) this, arg0.ptr());
}

void color_picker::_value_changed(const real_t arg0) {
	___godot_icall_void_float(___mb.mb__value_changed, (const object *) this, arg0);
}

void color_picker::_w_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__w_input, (const object *) this, arg0.ptr());
}

void color_picker::add_preset(const color color_) {
	___godot_icall_void_Color(___mb.mb_add_preset, (const object *) this, color_);
}

bool color_picker::are_presets_enabled() const {
	return ___godot_icall_bool(___mb.mb_are_presets_enabled, (const object *) this);
}

bool color_picker::are_presets_visible() const {
	return ___godot_icall_bool(___mb.mb_are_presets_visible, (const object *) this);
}

void color_picker::erase_preset(const color color_) {
	___godot_icall_void_Color(___mb.mb_erase_preset, (const object *) this, color_);
}

color color_picker::get_pick_color() const {
	return ___godot_icall_Color(___mb.mb_get_pick_color, (const object *) this);
}

pool_color_array color_picker::get_presets() const {
	return ___godot_icall_PoolColorArray(___mb.mb_get_presets, (const object *) this);
}

bool color_picker::is_deferred_mode() const {
	return ___godot_icall_bool(___mb.mb_is_deferred_mode, (const object *) this);
}

bool color_picker::is_editing_alpha() const {
	return ___godot_icall_bool(___mb.mb_is_editing_alpha, (const object *) this);
}

bool color_picker::is_hsv_mode() const {
	return ___godot_icall_bool(___mb.mb_is_hsv_mode, (const object *) this);
}

bool color_picker::is_raw_mode() const {
	return ___godot_icall_bool(___mb.mb_is_raw_mode, (const object *) this);
}

void color_picker::set_deferred_mode(const bool mode) {
	___godot_icall_void_bool(___mb.mb_set_deferred_mode, (const object *) this, mode);
}

void color_picker::set_edit_alpha(const bool show) {
	___godot_icall_void_bool(___mb.mb_set_edit_alpha, (const object *) this, show);
}

void color_picker::set_hsv_mode(const bool mode) {
	___godot_icall_void_bool(___mb.mb_set_hsv_mode, (const object *) this, mode);
}

void color_picker::set_pick_color(const color color_) {
	___godot_icall_void_Color(___mb.mb_set_pick_color, (const object *) this, color_);
}

void color_picker::set_presets_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_presets_enabled, (const object *) this, enabled);
}

void color_picker::set_presets_visible(const bool visible) {
	___godot_icall_void_bool(___mb.mb_set_presets_visible, (const object *) this, visible);
}

void color_picker::set_raw_mode(const bool mode) {
	___godot_icall_void_bool(___mb.mb_set_raw_mode, (const object *) this, mode);
}

}