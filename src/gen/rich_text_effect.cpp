#include "rich_text_effect.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "char_fxtransform.hpp"


namespace gd {


rich_text_effect::___method_bindings rich_text_effect::___mb = {};

void *rich_text_effect::_detail_class_tag = nullptr;

void rich_text_effect::___init_method_bindings() {
	___mb.mb__process_custom_fx = gd::api->godot_method_bind_get_method("RichTextEffect", "_process_custom_fx");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "RichTextEffect");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

rich_text_effect *rich_text_effect::_new()
{
	return (rich_text_effect *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"RichTextEffect")());
}
bool rich_text_effect::_process_custom_fx(const ref<char_fxtransform> char_fx) {
	return ___godot_icall_bool_Object(___mb.mb__process_custom_fx, (const object *) this, char_fx.ptr());
}

}