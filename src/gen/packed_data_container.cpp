#include "packed_data_container.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


packed_data_container::___method_bindings packed_data_container::___mb = {};

void *packed_data_container::_detail_class_tag = nullptr;

void packed_data_container::___init_method_bindings() {
	___mb.mb__get_data = gd::api->godot_method_bind_get_method("PackedDataContainer", "_get_data");
	___mb.mb__iter_get = gd::api->godot_method_bind_get_method("PackedDataContainer", "_iter_get");
	___mb.mb__iter_init = gd::api->godot_method_bind_get_method("PackedDataContainer", "_iter_init");
	___mb.mb__iter_next = gd::api->godot_method_bind_get_method("PackedDataContainer", "_iter_next");
	___mb.mb__set_data = gd::api->godot_method_bind_get_method("PackedDataContainer", "_set_data");
	___mb.mb_pack = gd::api->godot_method_bind_get_method("PackedDataContainer", "pack");
	___mb.mb_size = gd::api->godot_method_bind_get_method("PackedDataContainer", "size");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "PackedDataContainer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

packed_data_container *packed_data_container::_new()
{
	return (packed_data_container *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"PackedDataContainer")());
}
pool_byte_array packed_data_container::_get_data() const {
	return ___godot_icall_PoolByteArray(___mb.mb__get_data, (const object *) this);
}

variant packed_data_container::_iter_get(const variant arg0) {
	return ___godot_icall_Variant_Variant(___mb.mb__iter_get, (const object *) this, arg0);
}

variant packed_data_container::_iter_init(const array arg0) {
	return ___godot_icall_Variant_Array(___mb.mb__iter_init, (const object *) this, arg0);
}

variant packed_data_container::_iter_next(const array arg0) {
	return ___godot_icall_Variant_Array(___mb.mb__iter_next, (const object *) this, arg0);
}

void packed_data_container::_set_data(const pool_byte_array arg0) {
	___godot_icall_void_PoolByteArray(___mb.mb__set_data, (const object *) this, arg0);
}

error packed_data_container::pack(const variant value) {
	return (error) ___godot_icall_int_Variant(___mb.mb_pack, (const object *) this, value);
}

int64_t packed_data_container::size() const {
	return ___godot_icall_int(___mb.mb_size, (const object *) this);
}

}