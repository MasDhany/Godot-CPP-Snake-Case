#include "audio_stream_generator.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


audio_stream_generator::___method_bindings audio_stream_generator::___mb = {};

void *audio_stream_generator::_detail_class_tag = nullptr;

void audio_stream_generator::___init_method_bindings() {
	___mb.mb_get_buffer_length = gd::api->godot_method_bind_get_method("AudioStreamGenerator", "get_buffer_length");
	___mb.mb_get_mix_rate = gd::api->godot_method_bind_get_method("AudioStreamGenerator", "get_mix_rate");
	___mb.mb_set_buffer_length = gd::api->godot_method_bind_get_method("AudioStreamGenerator", "set_buffer_length");
	___mb.mb_set_mix_rate = gd::api->godot_method_bind_get_method("AudioStreamGenerator", "set_mix_rate");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AudioStreamGenerator");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

audio_stream_generator *audio_stream_generator::_new()
{
	return (audio_stream_generator *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AudioStreamGenerator")());
}
real_t audio_stream_generator::get_buffer_length() const {
	return ___godot_icall_float(___mb.mb_get_buffer_length, (const object *) this);
}

real_t audio_stream_generator::get_mix_rate() const {
	return ___godot_icall_float(___mb.mb_get_mix_rate, (const object *) this);
}

void audio_stream_generator::set_buffer_length(const real_t seconds) {
	___godot_icall_void_float(___mb.mb_set_buffer_length, (const object *) this, seconds);
}

void audio_stream_generator::set_mix_rate(const real_t hz) {
	___godot_icall_void_float(___mb.mb_set_mix_rate, (const object *) this, hz);
}

}