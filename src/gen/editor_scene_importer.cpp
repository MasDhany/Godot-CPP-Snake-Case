#include "editor_scene_importer.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "animation.hpp"
#include "node.hpp"


namespace gd {


editor_scene_importer::___method_bindings editor_scene_importer::___mb = {};

void *editor_scene_importer::_detail_class_tag = nullptr;

void editor_scene_importer::___init_method_bindings() {
	___mb.mb__get_extensions = gd::api->godot_method_bind_get_method("EditorSceneImporter", "_get_extensions");
	___mb.mb__get_import_flags = gd::api->godot_method_bind_get_method("EditorSceneImporter", "_get_import_flags");
	___mb.mb__import_animation = gd::api->godot_method_bind_get_method("EditorSceneImporter", "_import_animation");
	___mb.mb__import_scene = gd::api->godot_method_bind_get_method("EditorSceneImporter", "_import_scene");
	___mb.mb_import_animation_from_other_importer = gd::api->godot_method_bind_get_method("EditorSceneImporter", "import_animation_from_other_importer");
	___mb.mb_import_scene_from_other_importer = gd::api->godot_method_bind_get_method("EditorSceneImporter", "import_scene_from_other_importer");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "EditorSceneImporter");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

array editor_scene_importer::_get_extensions() {
	return ___godot_icall_Array(___mb.mb__get_extensions, (const object *) this);
}

int64_t editor_scene_importer::_get_import_flags() {
	return ___godot_icall_int(___mb.mb__get_import_flags, (const object *) this);
}

ref<animation> editor_scene_importer::_import_animation(const string path_, const int64_t flags, const int64_t bake_fps) {
	return ref<animation>::__internal_constructor(___godot_icall_Object_String_int_int(___mb.mb__import_animation, (const object *) this, path_, flags, bake_fps));
}

node *editor_scene_importer::_import_scene(const string path_, const int64_t flags, const int64_t bake_fps) {
	return (node *) ___godot_icall_Object_String_int_int(___mb.mb__import_scene, (const object *) this, path_, flags, bake_fps);
}

ref<animation> editor_scene_importer::import_animation_from_other_importer(const string path_, const int64_t flags, const int64_t bake_fps) {
	return ref<animation>::__internal_constructor(___godot_icall_Object_String_int_int(___mb.mb_import_animation_from_other_importer, (const object *) this, path_, flags, bake_fps));
}

node *editor_scene_importer::import_scene_from_other_importer(const string path_, const int64_t flags, const int64_t bake_fps, const int64_t compress_flags) {
	return (node *) ___godot_icall_Object_String_int_int_int(___mb.mb_import_scene_from_other_importer, (const object *) this, path_, flags, bake_fps, compress_flags);
}

}