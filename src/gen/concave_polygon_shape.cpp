#include "concave_polygon_shape.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


concave_polygon_shape::___method_bindings concave_polygon_shape::___mb = {};

void *concave_polygon_shape::_detail_class_tag = nullptr;

void concave_polygon_shape::___init_method_bindings() {
	___mb.mb_get_faces = gd::api->godot_method_bind_get_method("ConcavePolygonShape", "get_faces");
	___mb.mb_set_faces = gd::api->godot_method_bind_get_method("ConcavePolygonShape", "set_faces");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ConcavePolygonShape");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

concave_polygon_shape *concave_polygon_shape::_new()
{
	return (concave_polygon_shape *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ConcavePolygonShape")());
}
pool_vector3_array concave_polygon_shape::get_faces() const {
	return ___godot_icall_PoolVector3Array(___mb.mb_get_faces, (const object *) this);
}

void concave_polygon_shape::set_faces(const pool_vector3_array faces) {
	___godot_icall_void_PoolVector3Array(___mb.mb_set_faces, (const object *) this, faces);
}

}