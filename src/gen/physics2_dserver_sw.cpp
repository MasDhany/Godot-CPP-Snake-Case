#include "physics2_dserver_sw.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


physics2_dserver_sw::___method_bindings physics2_dserver_sw::___mb = {};

void *physics2_dserver_sw::_detail_class_tag = nullptr;

void physics2_dserver_sw::___init_method_bindings() {
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Physics2DServerSW");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

}