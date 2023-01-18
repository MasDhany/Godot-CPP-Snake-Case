#include "grid_container.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


grid_container::___method_bindings grid_container::___mb = {};

void *grid_container::_detail_class_tag = nullptr;

void grid_container::___init_method_bindings() {
	___mb.mb_get_columns = gd::api->godot_method_bind_get_method("GridContainer", "get_columns");
	___mb.mb_set_columns = gd::api->godot_method_bind_get_method("GridContainer", "set_columns");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "GridContainer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

grid_container *grid_container::_new()
{
	return (grid_container *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"GridContainer")());
}
int64_t grid_container::get_columns() const {
	return ___godot_icall_int(___mb.mb_get_columns, (const object *) this);
}

void grid_container::set_columns(const int64_t columns) {
	___godot_icall_void_int(___mb.mb_set_columns, (const object *) this, columns);
}

}