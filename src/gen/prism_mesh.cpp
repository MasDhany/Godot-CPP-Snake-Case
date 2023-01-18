#include "prism_mesh.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


prism_mesh::___method_bindings prism_mesh::___mb = {};

void *prism_mesh::_detail_class_tag = nullptr;

void prism_mesh::___init_method_bindings() {
	___mb.mb_get_left_to_right = gd::api->godot_method_bind_get_method("PrismMesh", "get_left_to_right");
	___mb.mb_get_size = gd::api->godot_method_bind_get_method("PrismMesh", "get_size");
	___mb.mb_get_subdivide_depth = gd::api->godot_method_bind_get_method("PrismMesh", "get_subdivide_depth");
	___mb.mb_get_subdivide_height = gd::api->godot_method_bind_get_method("PrismMesh", "get_subdivide_height");
	___mb.mb_get_subdivide_width = gd::api->godot_method_bind_get_method("PrismMesh", "get_subdivide_width");
	___mb.mb_set_left_to_right = gd::api->godot_method_bind_get_method("PrismMesh", "set_left_to_right");
	___mb.mb_set_size = gd::api->godot_method_bind_get_method("PrismMesh", "set_size");
	___mb.mb_set_subdivide_depth = gd::api->godot_method_bind_get_method("PrismMesh", "set_subdivide_depth");
	___mb.mb_set_subdivide_height = gd::api->godot_method_bind_get_method("PrismMesh", "set_subdivide_height");
	___mb.mb_set_subdivide_width = gd::api->godot_method_bind_get_method("PrismMesh", "set_subdivide_width");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "PrismMesh");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

prism_mesh *prism_mesh::_new()
{
	return (prism_mesh *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"PrismMesh")());
}
real_t prism_mesh::get_left_to_right() const {
	return ___godot_icall_float(___mb.mb_get_left_to_right, (const object *) this);
}

vector3 prism_mesh::get_size() const {
	return ___godot_icall_Vector3(___mb.mb_get_size, (const object *) this);
}

int64_t prism_mesh::get_subdivide_depth() const {
	return ___godot_icall_int(___mb.mb_get_subdivide_depth, (const object *) this);
}

int64_t prism_mesh::get_subdivide_height() const {
	return ___godot_icall_int(___mb.mb_get_subdivide_height, (const object *) this);
}

int64_t prism_mesh::get_subdivide_width() const {
	return ___godot_icall_int(___mb.mb_get_subdivide_width, (const object *) this);
}

void prism_mesh::set_left_to_right(const real_t left_to_right) {
	___godot_icall_void_float(___mb.mb_set_left_to_right, (const object *) this, left_to_right);
}

void prism_mesh::set_size(const vector3 size) {
	___godot_icall_void_Vector3(___mb.mb_set_size, (const object *) this, size);
}

void prism_mesh::set_subdivide_depth(const int64_t segments) {
	___godot_icall_void_int(___mb.mb_set_subdivide_depth, (const object *) this, segments);
}

void prism_mesh::set_subdivide_height(const int64_t segments) {
	___godot_icall_void_int(___mb.mb_set_subdivide_height, (const object *) this, segments);
}

void prism_mesh::set_subdivide_width(const int64_t segments) {
	___godot_icall_void_int(___mb.mb_set_subdivide_width, (const object *) this, segments);
}

}