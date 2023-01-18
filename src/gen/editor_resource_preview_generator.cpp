#include "editor_resource_preview_generator.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "resource.hpp"
#include "texture.hpp"


namespace gd {


editor_resource_preview_generator::___method_bindings editor_resource_preview_generator::___mb = {};

void *editor_resource_preview_generator::_detail_class_tag = nullptr;

void editor_resource_preview_generator::___init_method_bindings() {
	___mb.mb_can_generate_small_preview = gd::api->godot_method_bind_get_method("EditorResourcePreviewGenerator", "can_generate_small_preview");
	___mb.mb_generate = gd::api->godot_method_bind_get_method("EditorResourcePreviewGenerator", "generate");
	___mb.mb_generate_from_path = gd::api->godot_method_bind_get_method("EditorResourcePreviewGenerator", "generate_from_path");
	___mb.mb_generate_small_preview_automatically = gd::api->godot_method_bind_get_method("EditorResourcePreviewGenerator", "generate_small_preview_automatically");
	___mb.mb_handles = gd::api->godot_method_bind_get_method("EditorResourcePreviewGenerator", "handles");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "EditorResourcePreviewGenerator");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

bool editor_resource_preview_generator::can_generate_small_preview() {
	return ___godot_icall_bool(___mb.mb_can_generate_small_preview, (const object *) this);
}

ref<texture> editor_resource_preview_generator::generate(const ref<resource> from, const vector2 size) {
	return ref<texture>::__internal_constructor(___godot_icall_Object_Object_Vector2(___mb.mb_generate, (const object *) this, from.ptr(), size));
}

ref<texture> editor_resource_preview_generator::generate_from_path(const string path_, const vector2 size) {
	return ref<texture>::__internal_constructor(___godot_icall_Object_String_Vector2(___mb.mb_generate_from_path, (const object *) this, path_, size));
}

bool editor_resource_preview_generator::generate_small_preview_automatically() {
	return ___godot_icall_bool(___mb.mb_generate_small_preview_automatically, (const object *) this);
}

bool editor_resource_preview_generator::handles(const string type) {
	return ___godot_icall_bool_String(___mb.mb_handles, (const object *) this, type);
}

}