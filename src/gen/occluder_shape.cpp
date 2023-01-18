#include "occluder_shape.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


occluder_shape::___method_bindings occluder_shape::___mb = {};

void *occluder_shape::_detail_class_tag = nullptr;

void occluder_shape::___init_method_bindings() {
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "OccluderShape");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

}