#include "height_map_shape.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


height_map_shape::___method_bindings height_map_shape::___mb = {};

void *height_map_shape::_detail_class_tag = nullptr;

void height_map_shape::___init_method_bindings() {
	___mb.mb_get_map_data = gd::api->godot_method_bind_get_method("HeightMapShape", "get_map_data");
	___mb.mb_get_map_depth = gd::api->godot_method_bind_get_method("HeightMapShape", "get_map_depth");
	___mb.mb_get_map_width = gd::api->godot_method_bind_get_method("HeightMapShape", "get_map_width");
	___mb.mb_set_map_data = gd::api->godot_method_bind_get_method("HeightMapShape", "set_map_data");
	___mb.mb_set_map_depth = gd::api->godot_method_bind_get_method("HeightMapShape", "set_map_depth");
	___mb.mb_set_map_width = gd::api->godot_method_bind_get_method("HeightMapShape", "set_map_width");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "HeightMapShape");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

height_map_shape *height_map_shape::_new()
{
	return (height_map_shape *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"HeightMapShape")());
}
pool_real_array height_map_shape::get_map_data() const {
	return ___godot_icall_PoolRealArray(___mb.mb_get_map_data, (const object *) this);
}

int64_t height_map_shape::get_map_depth() const {
	return ___godot_icall_int(___mb.mb_get_map_depth, (const object *) this);
}

int64_t height_map_shape::get_map_width() const {
	return ___godot_icall_int(___mb.mb_get_map_width, (const object *) this);
}

void height_map_shape::set_map_data(const pool_real_array data) {
	___godot_icall_void_PoolRealArray(___mb.mb_set_map_data, (const object *) this, data);
}

void height_map_shape::set_map_depth(const int64_t height) {
	___godot_icall_void_int(___mb.mb_set_map_depth, (const object *) this, height);
}

void height_map_shape::set_map_width(const int64_t width) {
	___godot_icall_void_int(___mb.mb_set_map_width, (const object *) this, width);
}

}