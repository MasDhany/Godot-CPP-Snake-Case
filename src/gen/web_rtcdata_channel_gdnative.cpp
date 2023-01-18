#include "web_rtcdata_channel_gdnative.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


web_rtcdata_channel_gdnative::___method_bindings web_rtcdata_channel_gdnative::___mb = {};

void *web_rtcdata_channel_gdnative::_detail_class_tag = nullptr;

void web_rtcdata_channel_gdnative::___init_method_bindings() {
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "WebRTCDataChannelGDNative");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

web_rtcdata_channel_gdnative *web_rtcdata_channel_gdnative::_new()
{
	return (web_rtcdata_channel_gdnative *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"WebRTCDataChannelGDNative")());
}
}