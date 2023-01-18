#include "instance_placeholder.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "node.hpp"
#include "packed_scene.hpp"


namespace gd {


instance_placeholder::___method_bindings instance_placeholder::___mb = {};

void *instance_placeholder::_detail_class_tag = nullptr;

void instance_placeholder::___init_method_bindings() {
	___mb.mb_create_instance = gd::api->godot_method_bind_get_method("InstancePlaceholder", "create_instance");
	___mb.mb_get_instance_path = gd::api->godot_method_bind_get_method("InstancePlaceholder", "get_instance_path");
	___mb.mb_get_stored_values = gd::api->godot_method_bind_get_method("InstancePlaceholder", "get_stored_values");
	___mb.mb_replace_by_instance = gd::api->godot_method_bind_get_method("InstancePlaceholder", "replace_by_instance");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "InstancePlaceholder");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

node *instance_placeholder::create_instance(const bool replace, const ref<packed_scene> custom_scene) {
	return (node *) ___godot_icall_Object_bool_Object(___mb.mb_create_instance, (const object *) this, replace, custom_scene.ptr());
}

string instance_placeholder::get_instance_path() const {
	return ___godot_icall_String(___mb.mb_get_instance_path, (const object *) this);
}

dictionary instance_placeholder::get_stored_values(const bool with_order) {
	return ___godot_icall_Dictionary_bool(___mb.mb_get_stored_values, (const object *) this, with_order);
}

void instance_placeholder::replace_by_instance(const ref<packed_scene> custom_scene) {
	___godot_icall_void_Object(___mb.mb_replace_by_instance, (const object *) this, custom_scene.ptr());
}

}