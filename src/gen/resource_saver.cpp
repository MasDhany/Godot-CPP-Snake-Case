#include "resource_saver.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "resource.hpp"


namespace gd {


resource_saver *resource_saver::_singleton = NULL;


resource_saver::resource_saver() {
	_owner = gd::api->godot_global_get_singleton((char *) "ResourceSaver");
}


resource_saver::___method_bindings resource_saver::___mb = {};

void *resource_saver::_detail_class_tag = nullptr;

void resource_saver::___init_method_bindings() {
	___mb.mb_get_recognized_extensions = gd::api->godot_method_bind_get_method("_ResourceSaver", "get_recognized_extensions");
	___mb.mb_save = gd::api->godot_method_bind_get_method("_ResourceSaver", "save");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "_ResourceSaver");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

pool_string_array resource_saver::get_recognized_extensions(const ref<resource> type) {
	return ___godot_icall_PoolStringArray_Object(___mb.mb_get_recognized_extensions, (const object *) this, type.ptr());
}

error resource_saver::save(const string path_, const ref<resource> resource_, const int64_t flags) {
	return (error) ___godot_icall_int_String_Object_int(___mb.mb_save, (const object *) this, path_, resource_.ptr(), flags);
}

}