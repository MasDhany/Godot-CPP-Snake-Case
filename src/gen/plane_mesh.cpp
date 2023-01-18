#include "plane_mesh.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


plane_mesh::___method_bindings plane_mesh::___mb = {};

void *plane_mesh::_detail_class_tag = nullptr;

void plane_mesh::___init_method_bindings() {
	___mb.mb_get_center_offset = gd::api->godot_method_bind_get_method("PlaneMesh", "get_center_offset");
	___mb.mb_get_size = gd::api->godot_method_bind_get_method("PlaneMesh", "get_size");
	___mb.mb_get_subdivide_depth = gd::api->godot_method_bind_get_method("PlaneMesh", "get_subdivide_depth");
	___mb.mb_get_subdivide_width = gd::api->godot_method_bind_get_method("PlaneMesh", "get_subdivide_width");
	___mb.mb_set_center_offset = gd::api->godot_method_bind_get_method("PlaneMesh", "set_center_offset");
	___mb.mb_set_size = gd::api->godot_method_bind_get_method("PlaneMesh", "set_size");
	___mb.mb_set_subdivide_depth = gd::api->godot_method_bind_get_method("PlaneMesh", "set_subdivide_depth");
	___mb.mb_set_subdivide_width = gd::api->godot_method_bind_get_method("PlaneMesh", "set_subdivide_width");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "PlaneMesh");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

plane_mesh *plane_mesh::_new()
{
	return (plane_mesh *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"PlaneMesh")());
}
vector3 plane_mesh::get_center_offset() const {
	return ___godot_icall_Vector3(___mb.mb_get_center_offset, (const object *) this);
}

vector2 plane_mesh::get_size() const {
	return ___godot_icall_Vector2(___mb.mb_get_size, (const object *) this);
}

int64_t plane_mesh::get_subdivide_depth() const {
	return ___godot_icall_int(___mb.mb_get_subdivide_depth, (const object *) this);
}

int64_t plane_mesh::get_subdivide_width() const {
	return ___godot_icall_int(___mb.mb_get_subdivide_width, (const object *) this);
}

void plane_mesh::set_center_offset(const vector3 offset) {
	___godot_icall_void_Vector3(___mb.mb_set_center_offset, (const object *) this, offset);
}

void plane_mesh::set_size(const vector2 size) {
	___godot_icall_void_Vector2(___mb.mb_set_size, (const object *) this, size);
}

void plane_mesh::set_subdivide_depth(const int64_t subdivide) {
	___godot_icall_void_int(___mb.mb_set_subdivide_depth, (const object *) this, subdivide);
}

void plane_mesh::set_subdivide_width(const int64_t subdivide) {
	___godot_icall_void_int(___mb.mb_set_subdivide_width, (const object *) this, subdivide);
}

}