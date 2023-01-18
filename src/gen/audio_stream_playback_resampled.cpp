#include "audio_stream_playback_resampled.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


audio_stream_playback_resampled::___method_bindings audio_stream_playback_resampled::___mb = {};

void *audio_stream_playback_resampled::_detail_class_tag = nullptr;

void audio_stream_playback_resampled::___init_method_bindings() {
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AudioStreamPlaybackResampled");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

}