#include "audio_stream_generator_playback.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


audio_stream_generator_playback::___method_bindings audio_stream_generator_playback::___mb = {};

void *audio_stream_generator_playback::_detail_class_tag = nullptr;

void audio_stream_generator_playback::___init_method_bindings() {
	___mb.mb_can_push_buffer = gd::api->godot_method_bind_get_method("AudioStreamGeneratorPlayback", "can_push_buffer");
	___mb.mb_clear_buffer = gd::api->godot_method_bind_get_method("AudioStreamGeneratorPlayback", "clear_buffer");
	___mb.mb_get_frames_available = gd::api->godot_method_bind_get_method("AudioStreamGeneratorPlayback", "get_frames_available");
	___mb.mb_get_skips = gd::api->godot_method_bind_get_method("AudioStreamGeneratorPlayback", "get_skips");
	___mb.mb_push_buffer = gd::api->godot_method_bind_get_method("AudioStreamGeneratorPlayback", "push_buffer");
	___mb.mb_push_frame = gd::api->godot_method_bind_get_method("AudioStreamGeneratorPlayback", "push_frame");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AudioStreamGeneratorPlayback");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

bool audio_stream_generator_playback::can_push_buffer(const int64_t amount) const {
	return ___godot_icall_bool_int(___mb.mb_can_push_buffer, (const object *) this, amount);
}

void audio_stream_generator_playback::clear_buffer() {
	___godot_icall_void(___mb.mb_clear_buffer, (const object *) this);
}

int64_t audio_stream_generator_playback::get_frames_available() const {
	return ___godot_icall_int(___mb.mb_get_frames_available, (const object *) this);
}

int64_t audio_stream_generator_playback::get_skips() const {
	return ___godot_icall_int(___mb.mb_get_skips, (const object *) this);
}

bool audio_stream_generator_playback::push_buffer(const pool_vector2_array frames) {
	return ___godot_icall_bool_PoolVector2Array(___mb.mb_push_buffer, (const object *) this, frames);
}

bool audio_stream_generator_playback::push_frame(const vector2 frame) {
	return ___godot_icall_bool_Vector2(___mb.mb_push_frame, (const object *) this, frame);
}

}