#include "input_event_midi.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


input_event_midi::___method_bindings input_event_midi::___mb = {};

void *input_event_midi::_detail_class_tag = nullptr;

void input_event_midi::___init_method_bindings() {
	___mb.mb_get_channel = gd::api->godot_method_bind_get_method("InputEventMIDI", "get_channel");
	___mb.mb_get_controller_number = gd::api->godot_method_bind_get_method("InputEventMIDI", "get_controller_number");
	___mb.mb_get_controller_value = gd::api->godot_method_bind_get_method("InputEventMIDI", "get_controller_value");
	___mb.mb_get_instrument = gd::api->godot_method_bind_get_method("InputEventMIDI", "get_instrument");
	___mb.mb_get_message = gd::api->godot_method_bind_get_method("InputEventMIDI", "get_message");
	___mb.mb_get_pitch = gd::api->godot_method_bind_get_method("InputEventMIDI", "get_pitch");
	___mb.mb_get_pressure = gd::api->godot_method_bind_get_method("InputEventMIDI", "get_pressure");
	___mb.mb_get_velocity = gd::api->godot_method_bind_get_method("InputEventMIDI", "get_velocity");
	___mb.mb_set_channel = gd::api->godot_method_bind_get_method("InputEventMIDI", "set_channel");
	___mb.mb_set_controller_number = gd::api->godot_method_bind_get_method("InputEventMIDI", "set_controller_number");
	___mb.mb_set_controller_value = gd::api->godot_method_bind_get_method("InputEventMIDI", "set_controller_value");
	___mb.mb_set_instrument = gd::api->godot_method_bind_get_method("InputEventMIDI", "set_instrument");
	___mb.mb_set_message = gd::api->godot_method_bind_get_method("InputEventMIDI", "set_message");
	___mb.mb_set_pitch = gd::api->godot_method_bind_get_method("InputEventMIDI", "set_pitch");
	___mb.mb_set_pressure = gd::api->godot_method_bind_get_method("InputEventMIDI", "set_pressure");
	___mb.mb_set_velocity = gd::api->godot_method_bind_get_method("InputEventMIDI", "set_velocity");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "InputEventMIDI");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

input_event_midi *input_event_midi::_new()
{
	return (input_event_midi *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"InputEventMIDI")());
}
int64_t input_event_midi::get_channel() const {
	return ___godot_icall_int(___mb.mb_get_channel, (const object *) this);
}

int64_t input_event_midi::get_controller_number() const {
	return ___godot_icall_int(___mb.mb_get_controller_number, (const object *) this);
}

int64_t input_event_midi::get_controller_value() const {
	return ___godot_icall_int(___mb.mb_get_controller_value, (const object *) this);
}

int64_t input_event_midi::get_instrument() const {
	return ___godot_icall_int(___mb.mb_get_instrument, (const object *) this);
}

int64_t input_event_midi::get_message() const {
	return ___godot_icall_int(___mb.mb_get_message, (const object *) this);
}

int64_t input_event_midi::get_pitch() const {
	return ___godot_icall_int(___mb.mb_get_pitch, (const object *) this);
}

int64_t input_event_midi::get_pressure() const {
	return ___godot_icall_int(___mb.mb_get_pressure, (const object *) this);
}

int64_t input_event_midi::get_velocity() const {
	return ___godot_icall_int(___mb.mb_get_velocity, (const object *) this);
}

void input_event_midi::set_channel(const int64_t channel) {
	___godot_icall_void_int(___mb.mb_set_channel, (const object *) this, channel);
}

void input_event_midi::set_controller_number(const int64_t controller_number) {
	___godot_icall_void_int(___mb.mb_set_controller_number, (const object *) this, controller_number);
}

void input_event_midi::set_controller_value(const int64_t controller_value) {
	___godot_icall_void_int(___mb.mb_set_controller_value, (const object *) this, controller_value);
}

void input_event_midi::set_instrument(const int64_t instrument) {
	___godot_icall_void_int(___mb.mb_set_instrument, (const object *) this, instrument);
}

void input_event_midi::set_message(const int64_t message) {
	___godot_icall_void_int(___mb.mb_set_message, (const object *) this, message);
}

void input_event_midi::set_pitch(const int64_t pitch) {
	___godot_icall_void_int(___mb.mb_set_pitch, (const object *) this, pitch);
}

void input_event_midi::set_pressure(const int64_t pressure) {
	___godot_icall_void_int(___mb.mb_set_pressure, (const object *) this, pressure);
}

void input_event_midi::set_velocity(const int64_t velocity) {
	___godot_icall_void_int(___mb.mb_set_velocity, (const object *) this, velocity);
}

}