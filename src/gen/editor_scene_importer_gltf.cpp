#include "editor_scene_importer_gltf.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


editor_scene_importer_gltf::___method_bindings editor_scene_importer_gltf::___mb = {};

void *editor_scene_importer_gltf::_detail_class_tag = nullptr;

void editor_scene_importer_gltf::___init_method_bindings() {
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "EditorSceneImporterGLTF");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

}