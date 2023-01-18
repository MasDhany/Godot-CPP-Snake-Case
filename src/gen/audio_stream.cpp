#include "audio_stream.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


audio_stream::___method_bindings audio_stream::___mb = {};

void *audio_stream::_detail_class_tag = nullptr;

void audio_stream::___init_method_bindings() {
	___mb.mb_get_length = gd::api->godot_method_bind_get_method("AudioStream", "get_length");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AudioStream");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

real_t audio_stream::get_length() const {
	return ___godot_icall_float(___mb.mb_get_length, (const object *) this);
}

}