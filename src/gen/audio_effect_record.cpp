#include "audio_effect_record.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "audio_stream_sample.hpp"


namespace gd {


audio_effect_record::___method_bindings audio_effect_record::___mb = {};

void *audio_effect_record::_detail_class_tag = nullptr;

void audio_effect_record::___init_method_bindings() {
	___mb.mb_get_format = gd::api->godot_method_bind_get_method("AudioEffectRecord", "get_format");
	___mb.mb_get_recording = gd::api->godot_method_bind_get_method("AudioEffectRecord", "get_recording");
	___mb.mb_is_recording_active = gd::api->godot_method_bind_get_method("AudioEffectRecord", "is_recording_active");
	___mb.mb_set_format = gd::api->godot_method_bind_get_method("AudioEffectRecord", "set_format");
	___mb.mb_set_recording_active = gd::api->godot_method_bind_get_method("AudioEffectRecord", "set_recording_active");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AudioEffectRecord");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

audio_effect_record *audio_effect_record::_new()
{
	return (audio_effect_record *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AudioEffectRecord")());
}
audio_stream_sample::Format audio_effect_record::get_format() const {
	return (audio_stream_sample::Format) ___godot_icall_int(___mb.mb_get_format, (const object *) this);
}

ref<audio_stream_sample> audio_effect_record::get_recording() const {
	return ref<audio_stream_sample>::__internal_constructor(___godot_icall_Object(___mb.mb_get_recording, (const object *) this));
}

bool audio_effect_record::is_recording_active() const {
	return ___godot_icall_bool(___mb.mb_is_recording_active, (const object *) this);
}

void audio_effect_record::set_format(const int64_t format) {
	___godot_icall_void_int(___mb.mb_set_format, (const object *) this, format);
}

void audio_effect_record::set_recording_active(const bool record) {
	___godot_icall_void_bool(___mb.mb_set_recording_active, (const object *) this, record);
}

}