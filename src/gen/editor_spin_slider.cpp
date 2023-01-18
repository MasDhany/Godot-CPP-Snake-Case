#include "editor_spin_slider.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "input_event.hpp"


namespace gd {


editor_spin_slider::___method_bindings editor_spin_slider::___mb = {};

void *editor_spin_slider::_detail_class_tag = nullptr;

void editor_spin_slider::___init_method_bindings() {
	___mb.mb__grabber_gui_input = gd::api->godot_method_bind_get_method("EditorSpinSlider", "_grabber_gui_input");
	___mb.mb__grabber_mouse_entered = gd::api->godot_method_bind_get_method("EditorSpinSlider", "_grabber_mouse_entered");
	___mb.mb__grabber_mouse_exited = gd::api->godot_method_bind_get_method("EditorSpinSlider", "_grabber_mouse_exited");
	___mb.mb__gui_input = gd::api->godot_method_bind_get_method("EditorSpinSlider", "_gui_input");
	___mb.mb__value_focus_exited = gd::api->godot_method_bind_get_method("EditorSpinSlider", "_value_focus_exited");
	___mb.mb__value_input_closed = gd::api->godot_method_bind_get_method("EditorSpinSlider", "_value_input_closed");
	___mb.mb__value_input_entered = gd::api->godot_method_bind_get_method("EditorSpinSlider", "_value_input_entered");
	___mb.mb__value_input_gui_input = gd::api->godot_method_bind_get_method("EditorSpinSlider", "_value_input_gui_input");
	___mb.mb_get_label = gd::api->godot_method_bind_get_method("EditorSpinSlider", "get_label");
	___mb.mb_is_flat = gd::api->godot_method_bind_get_method("EditorSpinSlider", "is_flat");
	___mb.mb_is_hiding_slider = gd::api->godot_method_bind_get_method("EditorSpinSlider", "is_hiding_slider");
	___mb.mb_is_read_only = gd::api->godot_method_bind_get_method("EditorSpinSlider", "is_read_only");
	___mb.mb_set_flat = gd::api->godot_method_bind_get_method("EditorSpinSlider", "set_flat");
	___mb.mb_set_hide_slider = gd::api->godot_method_bind_get_method("EditorSpinSlider", "set_hide_slider");
	___mb.mb_set_label = gd::api->godot_method_bind_get_method("EditorSpinSlider", "set_label");
	___mb.mb_set_read_only = gd::api->godot_method_bind_get_method("EditorSpinSlider", "set_read_only");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "EditorSpinSlider");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void editor_spin_slider::_grabber_gui_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__grabber_gui_input, (const object *) this, arg0.ptr());
}

void editor_spin_slider::_grabber_mouse_entered() {
	___godot_icall_void(___mb.mb__grabber_mouse_entered, (const object *) this);
}

void editor_spin_slider::_grabber_mouse_exited() {
	___godot_icall_void(___mb.mb__grabber_mouse_exited, (const object *) this);
}

void editor_spin_slider::_gui_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__gui_input, (const object *) this, arg0.ptr());
}

void editor_spin_slider::_value_focus_exited() {
	___godot_icall_void(___mb.mb__value_focus_exited, (const object *) this);
}

void editor_spin_slider::_value_input_closed() {
	___godot_icall_void(___mb.mb__value_input_closed, (const object *) this);
}

void editor_spin_slider::_value_input_entered(const string arg0) {
	___godot_icall_void_String(___mb.mb__value_input_entered, (const object *) this, arg0);
}

void editor_spin_slider::_value_input_gui_input(const ref<input_event> event) {
	___godot_icall_void_Object(___mb.mb__value_input_gui_input, (const object *) this, event.ptr());
}

string editor_spin_slider::get_label() const {
	return ___godot_icall_String(___mb.mb_get_label, (const object *) this);
}

bool editor_spin_slider::is_flat() const {
	return ___godot_icall_bool(___mb.mb_is_flat, (const object *) this);
}

bool editor_spin_slider::is_hiding_slider() const {
	return ___godot_icall_bool(___mb.mb_is_hiding_slider, (const object *) this);
}

bool editor_spin_slider::is_read_only() const {
	return ___godot_icall_bool(___mb.mb_is_read_only, (const object *) this);
}

void editor_spin_slider::set_flat(const bool flat) {
	___godot_icall_void_bool(___mb.mb_set_flat, (const object *) this, flat);
}

void editor_spin_slider::set_hide_slider(const bool hide_slider) {
	___godot_icall_void_bool(___mb.mb_set_hide_slider, (const object *) this, hide_slider);
}

void editor_spin_slider::set_label(const string label_) {
	___godot_icall_void_String(___mb.mb_set_label, (const object *) this, label_);
}

void editor_spin_slider::set_read_only(const bool read_only) {
	___godot_icall_void_bool(___mb.mb_set_read_only, (const object *) this, read_only);
}

}