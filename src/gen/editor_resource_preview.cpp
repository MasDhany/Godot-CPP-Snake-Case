#include "editor_resource_preview.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "editor_resource_preview_generator.hpp"
#include "object.hpp"
#include "resource.hpp"
#include "texture.hpp"


namespace gd {


editor_resource_preview::___method_bindings editor_resource_preview::___mb = {};

void *editor_resource_preview::_detail_class_tag = nullptr;

void editor_resource_preview::___init_method_bindings() {
	___mb.mb__preview_ready = gd::api->godot_method_bind_get_method("EditorResourcePreview", "_preview_ready");
	___mb.mb_add_preview_generator = gd::api->godot_method_bind_get_method("EditorResourcePreview", "add_preview_generator");
	___mb.mb_check_for_invalidation = gd::api->godot_method_bind_get_method("EditorResourcePreview", "check_for_invalidation");
	___mb.mb_queue_edited_resource_preview = gd::api->godot_method_bind_get_method("EditorResourcePreview", "queue_edited_resource_preview");
	___mb.mb_queue_resource_preview = gd::api->godot_method_bind_get_method("EditorResourcePreview", "queue_resource_preview");
	___mb.mb_remove_preview_generator = gd::api->godot_method_bind_get_method("EditorResourcePreview", "remove_preview_generator");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "EditorResourcePreview");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void editor_resource_preview::_preview_ready(const string arg0, const ref<texture> arg1, const ref<texture> arg2, const int64_t arg3, const string arg4, const variant arg5) {
	___godot_icall_void_String_Object_Object_int_String_Variant(___mb.mb__preview_ready, (const object *) this, arg0, arg1.ptr(), arg2.ptr(), arg3, arg4, arg5);
}

void editor_resource_preview::add_preview_generator(const ref<editor_resource_preview_generator> generator) {
	___godot_icall_void_Object(___mb.mb_add_preview_generator, (const object *) this, generator.ptr());
}

void editor_resource_preview::check_for_invalidation(const string path_) {
	___godot_icall_void_String(___mb.mb_check_for_invalidation, (const object *) this, path_);
}

void editor_resource_preview::queue_edited_resource_preview(const ref<resource> resource_, const object *receiver, const string receiver_func, const variant userdata) {
	___godot_icall_void_Object_Object_String_Variant(___mb.mb_queue_edited_resource_preview, (const object *) this, resource_.ptr(), receiver, receiver_func, userdata);
}

void editor_resource_preview::queue_resource_preview(const string path_, const object *receiver, const string receiver_func, const variant userdata) {
	___godot_icall_void_String_Object_String_Variant(___mb.mb_queue_resource_preview, (const object *) this, path_, receiver, receiver_func, userdata);
}

void editor_resource_preview::remove_preview_generator(const ref<editor_resource_preview_generator> generator) {
	___godot_icall_void_Object(___mb.mb_remove_preview_generator, (const object *) this, generator.ptr());
}

}