#include "editor_resource_conversion_plugin.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "resource.hpp"


namespace gd {


editor_resource_conversion_plugin::___method_bindings editor_resource_conversion_plugin::___mb = {};

void *editor_resource_conversion_plugin::_detail_class_tag = nullptr;

void editor_resource_conversion_plugin::___init_method_bindings() {
	___mb.mb__convert = gd::api->godot_method_bind_get_method("EditorResourceConversionPlugin", "_convert");
	___mb.mb__converts_to = gd::api->godot_method_bind_get_method("EditorResourceConversionPlugin", "_converts_to");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "EditorResourceConversionPlugin");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

ref<resource> editor_resource_conversion_plugin::_convert(const ref<resource> resource_) {
	return ref<resource>::__internal_constructor(___godot_icall_Object_Object(___mb.mb__convert, (const object *) this, resource_.ptr()));
}

string editor_resource_conversion_plugin::_converts_to() {
	return ___godot_icall_String(___mb.mb__converts_to, (const object *) this);
}

}