#include "editor_scene_post_import.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "object.hpp"


namespace gd {


editor_scene_post_import::___method_bindings editor_scene_post_import::___mb = {};

void *editor_scene_post_import::_detail_class_tag = nullptr;

void editor_scene_post_import::___init_method_bindings() {
	___mb.mb_get_source_file = gd::api->godot_method_bind_get_method("EditorScenePostImport", "get_source_file");
	___mb.mb_get_source_folder = gd::api->godot_method_bind_get_method("EditorScenePostImport", "get_source_folder");
	___mb.mb_post_import = gd::api->godot_method_bind_get_method("EditorScenePostImport", "post_import");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "EditorScenePostImport");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

string editor_scene_post_import::get_source_file() const {
	return ___godot_icall_String(___mb.mb_get_source_file, (const object *) this);
}

string editor_scene_post_import::get_source_folder() const {
	return ___godot_icall_String(___mb.mb_get_source_folder, (const object *) this);
}

object *editor_scene_post_import::post_import(const object *scene) {
	return (object *) ___godot_icall_Object_Object(___mb.mb_post_import, (const object *) this, scene);
}

}