#include "encoded_object_as_id.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


encoded_object_as_id::___method_bindings encoded_object_as_id::___mb = {};

void *encoded_object_as_id::_detail_class_tag = nullptr;

void encoded_object_as_id::___init_method_bindings() {
	___mb.mb_get_object_id = gd::api->godot_method_bind_get_method("EncodedObjectAsID", "get_object_id");
	___mb.mb_set_object_id = gd::api->godot_method_bind_get_method("EncodedObjectAsID", "set_object_id");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "EncodedObjectAsID");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

encoded_object_as_id *encoded_object_as_id::_new()
{
	return (encoded_object_as_id *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"EncodedObjectAsID")());
}
int64_t encoded_object_as_id::get_object_id() const {
	return ___godot_icall_int(___mb.mb_get_object_id, (const object *) this);
}

void encoded_object_as_id::set_object_id(const int64_t id) {
	___godot_icall_void_int(___mb.mb_set_object_id, (const object *) this, id);
}

}