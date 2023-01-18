#include "occluder_shape_sphere.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


occluder_shape_sphere::___method_bindings occluder_shape_sphere::___mb = {};

void *occluder_shape_sphere::_detail_class_tag = nullptr;

void occluder_shape_sphere::___init_method_bindings() {
	___mb.mb_get_spheres = gd::api->godot_method_bind_get_method("OccluderShapeSphere", "get_spheres");
	___mb.mb_set_sphere_position = gd::api->godot_method_bind_get_method("OccluderShapeSphere", "set_sphere_position");
	___mb.mb_set_sphere_radius = gd::api->godot_method_bind_get_method("OccluderShapeSphere", "set_sphere_radius");
	___mb.mb_set_spheres = gd::api->godot_method_bind_get_method("OccluderShapeSphere", "set_spheres");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "OccluderShapeSphere");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

occluder_shape_sphere *occluder_shape_sphere::_new()
{
	return (occluder_shape_sphere *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"OccluderShapeSphere")());
}
array occluder_shape_sphere::get_spheres() const {
	return ___godot_icall_Array(___mb.mb_get_spheres, (const object *) this);
}

void occluder_shape_sphere::set_sphere_position(const int64_t index, const vector3 position) {
	___godot_icall_void_int_Vector3(___mb.mb_set_sphere_position, (const object *) this, index, position);
}

void occluder_shape_sphere::set_sphere_radius(const int64_t index, const real_t radius) {
	___godot_icall_void_int_float(___mb.mb_set_sphere_radius, (const object *) this, index, radius);
}

void occluder_shape_sphere::set_spheres(const array spheres) {
	___godot_icall_void_Array(___mb.mb_set_spheres, (const object *) this, spheres);
}

}