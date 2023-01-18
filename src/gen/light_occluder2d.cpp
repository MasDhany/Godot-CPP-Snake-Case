#include "light_occluder2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "occluder_polygon2d.hpp"


namespace gd {


light_occluder2d::___method_bindings light_occluder2d::___mb = {};

void *light_occluder2d::_detail_class_tag = nullptr;

void light_occluder2d::___init_method_bindings() {
	___mb.mb__poly_changed = gd::api->godot_method_bind_get_method("LightOccluder2D", "_poly_changed");
	___mb.mb_get_occluder_light_mask = gd::api->godot_method_bind_get_method("LightOccluder2D", "get_occluder_light_mask");
	___mb.mb_get_occluder_polygon = gd::api->godot_method_bind_get_method("LightOccluder2D", "get_occluder_polygon");
	___mb.mb_set_occluder_light_mask = gd::api->godot_method_bind_get_method("LightOccluder2D", "set_occluder_light_mask");
	___mb.mb_set_occluder_polygon = gd::api->godot_method_bind_get_method("LightOccluder2D", "set_occluder_polygon");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "LightOccluder2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

light_occluder2d *light_occluder2d::_new()
{
	return (light_occluder2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"LightOccluder2D")());
}
void light_occluder2d::_poly_changed() {
	___godot_icall_void(___mb.mb__poly_changed, (const object *) this);
}

int64_t light_occluder2d::get_occluder_light_mask() const {
	return ___godot_icall_int(___mb.mb_get_occluder_light_mask, (const object *) this);
}

ref<occluder_polygon2d> light_occluder2d::get_occluder_polygon() const {
	return ref<occluder_polygon2d>::__internal_constructor(___godot_icall_Object(___mb.mb_get_occluder_polygon, (const object *) this));
}

void light_occluder2d::set_occluder_light_mask(const int64_t mask) {
	___godot_icall_void_int(___mb.mb_set_occluder_light_mask, (const object *) this, mask);
}

void light_occluder2d::set_occluder_polygon(const ref<occluder_polygon2d> polygon) {
	___godot_icall_void_Object(___mb.mb_set_occluder_polygon, (const object *) this, polygon.ptr());
}

}