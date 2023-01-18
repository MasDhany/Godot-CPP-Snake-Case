#include "confirmation_dialog.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "button.hpp"


namespace gd {


confirmation_dialog::___method_bindings confirmation_dialog::___mb = {};

void *confirmation_dialog::_detail_class_tag = nullptr;

void confirmation_dialog::___init_method_bindings() {
	___mb.mb_get_cancel = gd::api->godot_method_bind_get_method("ConfirmationDialog", "get_cancel");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ConfirmationDialog");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

confirmation_dialog *confirmation_dialog::_new()
{
	return (confirmation_dialog *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ConfirmationDialog")());
}
button *confirmation_dialog::get_cancel() {
	return (button *) ___godot_icall_Object(___mb.mb_get_cancel, (const object *) this);
}

}