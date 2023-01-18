#include "input_event.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "input_event.hpp"


namespace gd {


input_event::___method_bindings input_event::___mb = {};

void *input_event::_detail_class_tag = nullptr;

void input_event::___init_method_bindings() {
	___mb.mb_accumulate = gd::api->godot_method_bind_get_method("InputEvent", "accumulate");
	___mb.mb_as_text = gd::api->godot_method_bind_get_method("InputEvent", "as_text");
	___mb.mb_get_action_strength = gd::api->godot_method_bind_get_method("InputEvent", "get_action_strength");
	___mb.mb_get_device = gd::api->godot_method_bind_get_method("InputEvent", "get_device");
	___mb.mb_is_action = gd::api->godot_method_bind_get_method("InputEvent", "is_action");
	___mb.mb_is_action_pressed = gd::api->godot_method_bind_get_method("InputEvent", "is_action_pressed");
	___mb.mb_is_action_released = gd::api->godot_method_bind_get_method("InputEvent", "is_action_released");
	___mb.mb_is_action_type = gd::api->godot_method_bind_get_method("InputEvent", "is_action_type");
	___mb.mb_is_echo = gd::api->godot_method_bind_get_method("InputEvent", "is_echo");
	___mb.mb_is_pressed = gd::api->godot_method_bind_get_method("InputEvent", "is_pressed");
	___mb.mb_set_device = gd::api->godot_method_bind_get_method("InputEvent", "set_device");
	___mb.mb_shortcut_match = gd::api->godot_method_bind_get_method("InputEvent", "shortcut_match");
	___mb.mb_xformed_by = gd::api->godot_method_bind_get_method("InputEvent", "xformed_by");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "InputEvent");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

bool input_event::accumulate(const ref<input_event> with_event) {
	return ___godot_icall_bool_Object(___mb.mb_accumulate, (const object *) this, with_event.ptr());
}

string input_event::as_text() const {
	return ___godot_icall_String(___mb.mb_as_text, (const object *) this);
}

real_t input_event::get_action_strength(const string action, const bool exact_match) const {
	return ___godot_icall_float_String_bool(___mb.mb_get_action_strength, (const object *) this, action, exact_match);
}

int64_t input_event::get_device() const {
	return ___godot_icall_int(___mb.mb_get_device, (const object *) this);
}

bool input_event::is_action(const string action, const bool exact_match) const {
	return ___godot_icall_bool_String_bool(___mb.mb_is_action, (const object *) this, action, exact_match);
}

bool input_event::is_action_pressed(const string action, const bool allow_echo, const bool exact_match) const {
	return ___godot_icall_bool_String_bool_bool(___mb.mb_is_action_pressed, (const object *) this, action, allow_echo, exact_match);
}

bool input_event::is_action_released(const string action, const bool exact_match) const {
	return ___godot_icall_bool_String_bool(___mb.mb_is_action_released, (const object *) this, action, exact_match);
}

bool input_event::is_action_type() const {
	return ___godot_icall_bool(___mb.mb_is_action_type, (const object *) this);
}

bool input_event::is_echo() const {
	return ___godot_icall_bool(___mb.mb_is_echo, (const object *) this);
}

bool input_event::is_pressed() const {
	return ___godot_icall_bool(___mb.mb_is_pressed, (const object *) this);
}

void input_event::set_device(const int64_t device) {
	___godot_icall_void_int(___mb.mb_set_device, (const object *) this, device);
}

bool input_event::shortcut_match(const ref<input_event> event, const bool exact_match) const {
	return ___godot_icall_bool_Object_bool(___mb.mb_shortcut_match, (const object *) this, event.ptr(), exact_match);
}

ref<input_event> input_event::xformed_by(const transform2d xform, const vector2 local_ofs) const {
	return ref<input_event>::__internal_constructor(___godot_icall_Object_Transform2D_Vector2(___mb.mb_xformed_by, (const object *) this, xform, local_ofs));
}

}