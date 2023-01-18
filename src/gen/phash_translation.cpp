#include "phash_translation.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "translation.hpp"


namespace gd {


phash_translation::___method_bindings phash_translation::___mb = {};

void *phash_translation::_detail_class_tag = nullptr;

void phash_translation::___init_method_bindings() {
	___mb.mb_generate = gd::api->godot_method_bind_get_method("PHashTranslation", "generate");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "PHashTranslation");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

phash_translation *phash_translation::_new()
{
	return (phash_translation *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"PHashTranslation")());
}
void phash_translation::generate(const ref<translation> from) {
	___godot_icall_void_Object(___mb.mb_generate, (const object *) this, from.ptr());
}

}