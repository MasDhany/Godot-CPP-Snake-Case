#include "spatial_gizmo.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


spatial_gizmo::___method_bindings spatial_gizmo::___mb = {};

void *spatial_gizmo::_detail_class_tag = nullptr;

void spatial_gizmo::___init_method_bindings() {
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "SpatialGizmo");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

}