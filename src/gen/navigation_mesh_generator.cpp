#include "navigation_mesh_generator.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "navigation_mesh.hpp"
#include "node.hpp"


namespace gd {


navigation_mesh_generator *navigation_mesh_generator::_singleton = NULL;


navigation_mesh_generator::navigation_mesh_generator() {
	_owner = gd::api->godot_global_get_singleton((char *) "NavigationMeshGenerator");
}


navigation_mesh_generator::___method_bindings navigation_mesh_generator::___mb = {};

void *navigation_mesh_generator::_detail_class_tag = nullptr;

void navigation_mesh_generator::___init_method_bindings() {
	___mb.mb_bake = gd::api->godot_method_bind_get_method("NavigationMeshGenerator", "bake");
	___mb.mb_clear = gd::api->godot_method_bind_get_method("NavigationMeshGenerator", "clear");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "NavigationMeshGenerator");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void navigation_mesh_generator::bake(const ref<navigation_mesh> nav_mesh, const node *root_node) {
	___godot_icall_void_Object_Object(___mb.mb_bake, (const object *) this, nav_mesh.ptr(), root_node);
}

void navigation_mesh_generator::clear(const ref<navigation_mesh> nav_mesh) {
	___godot_icall_void_Object(___mb.mb_clear, (const object *) this, nav_mesh.ptr());
}

}