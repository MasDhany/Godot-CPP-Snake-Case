#include "audio_stream_random_pitch.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "audio_stream.hpp"


namespace gd {


audio_stream_random_pitch::___method_bindings audio_stream_random_pitch::___mb = {};

void *audio_stream_random_pitch::_detail_class_tag = nullptr;

void audio_stream_random_pitch::___init_method_bindings() {
	___mb.mb_get_audio_stream = gd::api->godot_method_bind_get_method("AudioStreamRandomPitch", "get_audio_stream");
	___mb.mb_get_random_pitch = gd::api->godot_method_bind_get_method("AudioStreamRandomPitch", "get_random_pitch");
	___mb.mb_set_audio_stream = gd::api->godot_method_bind_get_method("AudioStreamRandomPitch", "set_audio_stream");
	___mb.mb_set_random_pitch = gd::api->godot_method_bind_get_method("AudioStreamRandomPitch", "set_random_pitch");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AudioStreamRandomPitch");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

audio_stream_random_pitch *audio_stream_random_pitch::_new()
{
	return (audio_stream_random_pitch *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AudioStreamRandomPitch")());
}
ref<audio_stream> audio_stream_random_pitch::get_audio_stream() const {
	return ref<audio_stream>::__internal_constructor(___godot_icall_Object(___mb.mb_get_audio_stream, (const object *) this));
}

real_t audio_stream_random_pitch::get_random_pitch() const {
	return ___godot_icall_float(___mb.mb_get_random_pitch, (const object *) this);
}

void audio_stream_random_pitch::set_audio_stream(const ref<audio_stream> stream) {
	___godot_icall_void_Object(___mb.mb_set_audio_stream, (const object *) this, stream.ptr());
}

void audio_stream_random_pitch::set_random_pitch(const real_t scale) {
	___godot_icall_void_float(___mb.mb_set_random_pitch, (const object *) this, scale);
}

}