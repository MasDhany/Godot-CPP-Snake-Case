#include "packed_scene_gltf.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "gltfstate.hpp"
#include "node.hpp"


namespace gd {


packed_scene_gltf::___method_bindings packed_scene_gltf::___mb = {};

void *packed_scene_gltf::_detail_class_tag = nullptr;

void packed_scene_gltf::___init_method_bindings() {
	___mb.mb_export_gltf = gd::api->godot_method_bind_get_method("PackedSceneGLTF", "export_gltf");
	___mb.mb_import_gltf_scene = gd::api->godot_method_bind_get_method("PackedSceneGLTF", "import_gltf_scene");
	___mb.mb_pack_gltf = gd::api->godot_method_bind_get_method("PackedSceneGLTF", "pack_gltf");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "PackedSceneGLTF");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

packed_scene_gltf *packed_scene_gltf::_new()
{
	return (packed_scene_gltf *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"PackedSceneGLTF")());
}
error packed_scene_gltf::export_gltf(const node *node_, const string path_, const int64_t flags, const real_t bake_fps) {
	return (error) ___godot_icall_int_Object_String_int_float(___mb.mb_export_gltf, (const object *) this, node_, path_, flags, bake_fps);
}

node *packed_scene_gltf::import_gltf_scene(const string path_, const int64_t flags, const real_t bake_fps, const int64_t compress_flags, const ref<gltfstate> state) {
	return (node *) ___godot_icall_Object_String_int_float_int_Object(___mb.mb_import_gltf_scene, (const object *) this, path_, flags, bake_fps, compress_flags, state.ptr());
}

void packed_scene_gltf::pack_gltf(const string path_, const int64_t flags, const real_t bake_fps, const int64_t compress_flags, const ref<gltfstate> state) {
	___godot_icall_void_String_int_float_int_Object(___mb.mb_pack_gltf, (const object *) this, path_, flags, bake_fps, compress_flags, state.ptr());
}

}