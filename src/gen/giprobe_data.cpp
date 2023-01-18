#include "giprobe_data.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


giprobe_data::___method_bindings giprobe_data::___mb = {};

void *giprobe_data::_detail_class_tag = nullptr;

void giprobe_data::___init_method_bindings() {
	___mb.mb_get_bias = gd::api->godot_method_bind_get_method("GIProbeData", "get_bias");
	___mb.mb_get_bounds = gd::api->godot_method_bind_get_method("GIProbeData", "get_bounds");
	___mb.mb_get_cell_size = gd::api->godot_method_bind_get_method("GIProbeData", "get_cell_size");
	___mb.mb_get_dynamic_data = gd::api->godot_method_bind_get_method("GIProbeData", "get_dynamic_data");
	___mb.mb_get_dynamic_range = gd::api->godot_method_bind_get_method("GIProbeData", "get_dynamic_range");
	___mb.mb_get_energy = gd::api->godot_method_bind_get_method("GIProbeData", "get_energy");
	___mb.mb_get_normal_bias = gd::api->godot_method_bind_get_method("GIProbeData", "get_normal_bias");
	___mb.mb_get_propagation = gd::api->godot_method_bind_get_method("GIProbeData", "get_propagation");
	___mb.mb_get_to_cell_xform = gd::api->godot_method_bind_get_method("GIProbeData", "get_to_cell_xform");
	___mb.mb_is_compressed = gd::api->godot_method_bind_get_method("GIProbeData", "is_compressed");
	___mb.mb_is_interior = gd::api->godot_method_bind_get_method("GIProbeData", "is_interior");
	___mb.mb_set_bias = gd::api->godot_method_bind_get_method("GIProbeData", "set_bias");
	___mb.mb_set_bounds = gd::api->godot_method_bind_get_method("GIProbeData", "set_bounds");
	___mb.mb_set_cell_size = gd::api->godot_method_bind_get_method("GIProbeData", "set_cell_size");
	___mb.mb_set_compress = gd::api->godot_method_bind_get_method("GIProbeData", "set_compress");
	___mb.mb_set_dynamic_data = gd::api->godot_method_bind_get_method("GIProbeData", "set_dynamic_data");
	___mb.mb_set_dynamic_range = gd::api->godot_method_bind_get_method("GIProbeData", "set_dynamic_range");
	___mb.mb_set_energy = gd::api->godot_method_bind_get_method("GIProbeData", "set_energy");
	___mb.mb_set_interior = gd::api->godot_method_bind_get_method("GIProbeData", "set_interior");
	___mb.mb_set_normal_bias = gd::api->godot_method_bind_get_method("GIProbeData", "set_normal_bias");
	___mb.mb_set_propagation = gd::api->godot_method_bind_get_method("GIProbeData", "set_propagation");
	___mb.mb_set_to_cell_xform = gd::api->godot_method_bind_get_method("GIProbeData", "set_to_cell_xform");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "GIProbeData");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

giprobe_data *giprobe_data::_new()
{
	return (giprobe_data *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"GIProbeData")());
}
real_t giprobe_data::get_bias() const {
	return ___godot_icall_float(___mb.mb_get_bias, (const object *) this);
}

aabb giprobe_data::get_bounds() const {
	return ___godot_icall_AABB(___mb.mb_get_bounds, (const object *) this);
}

real_t giprobe_data::get_cell_size() const {
	return ___godot_icall_float(___mb.mb_get_cell_size, (const object *) this);
}

pool_int_array giprobe_data::get_dynamic_data() const {
	return ___godot_icall_PoolIntArray(___mb.mb_get_dynamic_data, (const object *) this);
}

int64_t giprobe_data::get_dynamic_range() const {
	return ___godot_icall_int(___mb.mb_get_dynamic_range, (const object *) this);
}

real_t giprobe_data::get_energy() const {
	return ___godot_icall_float(___mb.mb_get_energy, (const object *) this);
}

real_t giprobe_data::get_normal_bias() const {
	return ___godot_icall_float(___mb.mb_get_normal_bias, (const object *) this);
}

real_t giprobe_data::get_propagation() const {
	return ___godot_icall_float(___mb.mb_get_propagation, (const object *) this);
}

transform giprobe_data::get_to_cell_xform() const {
	return ___godot_icall_Transform(___mb.mb_get_to_cell_xform, (const object *) this);
}

bool giprobe_data::is_compressed() const {
	return ___godot_icall_bool(___mb.mb_is_compressed, (const object *) this);
}

bool giprobe_data::is_interior() const {
	return ___godot_icall_bool(___mb.mb_is_interior, (const object *) this);
}

void giprobe_data::set_bias(const real_t bias) {
	___godot_icall_void_float(___mb.mb_set_bias, (const object *) this, bias);
}

void giprobe_data::set_bounds(const aabb bounds) {
	___godot_icall_void_AABB(___mb.mb_set_bounds, (const object *) this, bounds);
}

void giprobe_data::set_cell_size(const real_t cell_size) {
	___godot_icall_void_float(___mb.mb_set_cell_size, (const object *) this, cell_size);
}

void giprobe_data::set_compress(const bool compress) {
	___godot_icall_void_bool(___mb.mb_set_compress, (const object *) this, compress);
}

void giprobe_data::set_dynamic_data(const pool_int_array dynamic_data) {
	___godot_icall_void_PoolIntArray(___mb.mb_set_dynamic_data, (const object *) this, dynamic_data);
}

void giprobe_data::set_dynamic_range(const int64_t dynamic_range) {
	___godot_icall_void_int(___mb.mb_set_dynamic_range, (const object *) this, dynamic_range);
}

void giprobe_data::set_energy(const real_t energy) {
	___godot_icall_void_float(___mb.mb_set_energy, (const object *) this, energy);
}

void giprobe_data::set_interior(const bool interior) {
	___godot_icall_void_bool(___mb.mb_set_interior, (const object *) this, interior);
}

void giprobe_data::set_normal_bias(const real_t bias) {
	___godot_icall_void_float(___mb.mb_set_normal_bias, (const object *) this, bias);
}

void giprobe_data::set_propagation(const real_t propagation) {
	___godot_icall_void_float(___mb.mb_set_propagation, (const object *) this, propagation);
}

void giprobe_data::set_to_cell_xform(const transform to_cell_xform) {
	___godot_icall_void_Transform(___mb.mb_set_to_cell_xform, (const object *) this, to_cell_xform);
}

}