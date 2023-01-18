#include "multi_mesh_instance.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "multi_mesh.hpp"


namespace gd {


multi_mesh_instance::___method_bindings multi_mesh_instance::___mb = {};

void *multi_mesh_instance::_detail_class_tag = nullptr;

void multi_mesh_instance::___init_method_bindings() {
	___mb.mb_get_multimesh = gd::api->godot_method_bind_get_method("MultiMeshInstance", "get_multimesh");
	___mb.mb_set_multimesh = gd::api->godot_method_bind_get_method("MultiMeshInstance", "set_multimesh");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "MultiMeshInstance");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

multi_mesh_instance *multi_mesh_instance::_new()
{
	return (multi_mesh_instance *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"MultiMeshInstance")());
}
ref<multi_mesh> multi_mesh_instance::get_multimesh() const {
	return ref<multi_mesh>::__internal_constructor(___godot_icall_Object(___mb.mb_get_multimesh, (const object *) this));
}

void multi_mesh_instance::set_multimesh(const ref<multi_mesh> multimesh) {
	___godot_icall_void_Object(___mb.mb_set_multimesh, (const object *) this, multimesh.ptr());
}

}