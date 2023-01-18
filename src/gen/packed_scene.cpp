#include "packed_scene.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "node.hpp"
#include "scene_state.hpp"


namespace gd {


packed_scene::___method_bindings packed_scene::___mb = {};

void *packed_scene::_detail_class_tag = nullptr;

void packed_scene::___init_method_bindings() {
	___mb.mb__get_bundled_scene = gd::api->godot_method_bind_get_method("PackedScene", "_get_bundled_scene");
	___mb.mb__set_bundled_scene = gd::api->godot_method_bind_get_method("PackedScene", "_set_bundled_scene");
	___mb.mb_can_instance = gd::api->godot_method_bind_get_method("PackedScene", "can_instance");
	___mb.mb_get_state = gd::api->godot_method_bind_get_method("PackedScene", "get_state");
	___mb.mb_instance = gd::api->godot_method_bind_get_method("PackedScene", "instance");
	___mb.mb_pack = gd::api->godot_method_bind_get_method("PackedScene", "pack");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "PackedScene");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

packed_scene *packed_scene::_new()
{
	return (packed_scene *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"PackedScene")());
}
dictionary packed_scene::_get_bundled_scene() const {
	return ___godot_icall_Dictionary(___mb.mb__get_bundled_scene, (const object *) this);
}

void packed_scene::_set_bundled_scene(const dictionary arg0) {
	___godot_icall_void_Dictionary(___mb.mb__set_bundled_scene, (const object *) this, arg0);
}

bool packed_scene::can_instance() const {
	return ___godot_icall_bool(___mb.mb_can_instance, (const object *) this);
}

ref<scene_state> packed_scene::get_state() {
	return ref<scene_state>::__internal_constructor(___godot_icall_Object(___mb.mb_get_state, (const object *) this));
}

node *packed_scene::instance(const int64_t edit_state) const {
	return (node *) ___godot_icall_Object_int(___mb.mb_instance, (const object *) this, edit_state);
}

error packed_scene::pack(const node *path_) {
	return (error) ___godot_icall_int_Object(___mb.mb_pack, (const object *) this, path_);
}

}