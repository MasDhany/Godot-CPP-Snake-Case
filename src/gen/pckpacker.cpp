#include "pckpacker.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


pckpacker::___method_bindings pckpacker::___mb = {};

void *pckpacker::_detail_class_tag = nullptr;

void pckpacker::___init_method_bindings() {
	___mb.mb_add_file = gd::api->godot_method_bind_get_method("PCKPacker", "add_file");
	___mb.mb_flush = gd::api->godot_method_bind_get_method("PCKPacker", "flush");
	___mb.mb_pck_start = gd::api->godot_method_bind_get_method("PCKPacker", "pck_start");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "PCKPacker");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

pckpacker *pckpacker::_new()
{
	return (pckpacker *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"PCKPacker")());
}
error pckpacker::add_file(const string pck_path, const string source_path) {
	return (error) ___godot_icall_int_String_String(___mb.mb_add_file, (const object *) this, pck_path, source_path);
}

error pckpacker::flush(const bool verbose) {
	return (error) ___godot_icall_int_bool(___mb.mb_flush, (const object *) this, verbose);
}

error pckpacker::pck_start(const string pck_name, const int64_t alignment) {
	return (error) ___godot_icall_int_String_int(___mb.mb_pck_start, (const object *) this, pck_name, alignment);
}

}