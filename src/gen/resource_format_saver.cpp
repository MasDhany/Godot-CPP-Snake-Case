#include "resource_format_saver.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "resource.hpp"


namespace gd {


resource_format_saver::___method_bindings resource_format_saver::___mb = {};

void *resource_format_saver::_detail_class_tag = nullptr;

void resource_format_saver::___init_method_bindings() {
	___mb.mb_get_recognized_extensions = gd::api->godot_method_bind_get_method("ResourceFormatSaver", "get_recognized_extensions");
	___mb.mb_recognize = gd::api->godot_method_bind_get_method("ResourceFormatSaver", "recognize");
	___mb.mb_save = gd::api->godot_method_bind_get_method("ResourceFormatSaver", "save");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ResourceFormatSaver");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

resource_format_saver *resource_format_saver::_new()
{
	return (resource_format_saver *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ResourceFormatSaver")());
}
pool_string_array resource_format_saver::get_recognized_extensions(const ref<resource> resource_) {
	return ___godot_icall_PoolStringArray_Object(___mb.mb_get_recognized_extensions, (const object *) this, resource_.ptr());
}

bool resource_format_saver::recognize(const ref<resource> resource_) {
	return ___godot_icall_bool_Object(___mb.mb_recognize, (const object *) this, resource_.ptr());
}

int64_t resource_format_saver::save(const string path_, const ref<resource> resource_, const int64_t flags) {
	return ___godot_icall_int_String_Object_int(___mb.mb_save, (const object *) this, path_, resource_.ptr(), flags);
}

}