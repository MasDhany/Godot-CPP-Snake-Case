#include "animation_track_edit_plugin.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


animation_track_edit_plugin::___method_bindings animation_track_edit_plugin::___mb = {};

void *animation_track_edit_plugin::_detail_class_tag = nullptr;

void animation_track_edit_plugin::___init_method_bindings() {
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AnimationTrackEditPlugin");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

}