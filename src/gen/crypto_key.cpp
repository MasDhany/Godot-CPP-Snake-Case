#include "crypto_key.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


crypto_key::___method_bindings crypto_key::___mb = {};

void *crypto_key::_detail_class_tag = nullptr;

void crypto_key::___init_method_bindings() {
	___mb.mb_is_public_only = gd::api->godot_method_bind_get_method("CryptoKey", "is_public_only");
	___mb.mb_load = gd::api->godot_method_bind_get_method("CryptoKey", "load");
	___mb.mb_load_from_string = gd::api->godot_method_bind_get_method("CryptoKey", "load_from_string");
	___mb.mb_save = gd::api->godot_method_bind_get_method("CryptoKey", "save");
	___mb.mb_save_to_string = gd::api->godot_method_bind_get_method("CryptoKey", "save_to_string");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "CryptoKey");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

crypto_key *crypto_key::_new()
{
	return (crypto_key *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"CryptoKey")());
}
bool crypto_key::is_public_only() const {
	return ___godot_icall_bool(___mb.mb_is_public_only, (const object *) this);
}

error crypto_key::load(const string path_, const bool public_only) {
	return (error) ___godot_icall_int_String_bool(___mb.mb_load, (const object *) this, path_, public_only);
}

error crypto_key::load_from_string(const string string_key, const bool public_only) {
	return (error) ___godot_icall_int_String_bool(___mb.mb_load_from_string, (const object *) this, string_key, public_only);
}

error crypto_key::save(const string path_, const bool public_only) {
	return (error) ___godot_icall_int_String_bool(___mb.mb_save, (const object *) this, path_, public_only);
}

string crypto_key::save_to_string(const bool public_only) {
	return ___godot_icall_String_bool(___mb.mb_save_to_string, (const object *) this, public_only);
}

}