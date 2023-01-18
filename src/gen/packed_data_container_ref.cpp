#include "packed_data_container_ref.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


packed_data_container_ref::___method_bindings packed_data_container_ref::___mb = {};

void *packed_data_container_ref::_detail_class_tag = nullptr;

void packed_data_container_ref::___init_method_bindings() {
	___mb.mb__is_dictionary = gd::api->godot_method_bind_get_method("PackedDataContainerRef", "_is_dictionary");
	___mb.mb__iter_get = gd::api->godot_method_bind_get_method("PackedDataContainerRef", "_iter_get");
	___mb.mb__iter_init = gd::api->godot_method_bind_get_method("PackedDataContainerRef", "_iter_init");
	___mb.mb__iter_next = gd::api->godot_method_bind_get_method("PackedDataContainerRef", "_iter_next");
	___mb.mb_size = gd::api->godot_method_bind_get_method("PackedDataContainerRef", "size");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "PackedDataContainerRef");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

bool packed_data_container_ref::_is_dictionary() const {
	return ___godot_icall_bool(___mb.mb__is_dictionary, (const object *) this);
}

variant packed_data_container_ref::_iter_get(const variant arg0) {
	return ___godot_icall_Variant_Variant(___mb.mb__iter_get, (const object *) this, arg0);
}

variant packed_data_container_ref::_iter_init(const array arg0) {
	return ___godot_icall_Variant_Array(___mb.mb__iter_init, (const object *) this, arg0);
}

variant packed_data_container_ref::_iter_next(const array arg0) {
	return ___godot_icall_Variant_Array(___mb.mb__iter_next, (const object *) this, arg0);
}

int64_t packed_data_container_ref::size() const {
	return ___godot_icall_int(___mb.mb_size, (const object *) this);
}

}