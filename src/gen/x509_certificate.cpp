#include "x509_certificate.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


x509_certificate::___method_bindings x509_certificate::___mb = {};

void *x509_certificate::_detail_class_tag = nullptr;

void x509_certificate::___init_method_bindings() {
	___mb.mb_load = gd::api->godot_method_bind_get_method("X509Certificate", "load");
	___mb.mb_save = gd::api->godot_method_bind_get_method("X509Certificate", "save");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "X509Certificate");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

x509_certificate *x509_certificate::_new()
{
	return (x509_certificate *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"X509Certificate")());
}
error x509_certificate::load(const string path_) {
	return (error) ___godot_icall_int_String(___mb.mb_load, (const object *) this, path_);
}

error x509_certificate::save(const string path_) {
	return (error) ___godot_icall_int_String(___mb.mb_save, (const object *) this, path_);
}

}