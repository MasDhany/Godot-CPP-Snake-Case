#include "audio_bus_layout.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


audio_bus_layout::___method_bindings audio_bus_layout::___mb = {};

void *audio_bus_layout::_detail_class_tag = nullptr;

void audio_bus_layout::___init_method_bindings() {
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AudioBusLayout");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

audio_bus_layout *audio_bus_layout::_new()
{
	return (audio_bus_layout *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AudioBusLayout")());
}
}