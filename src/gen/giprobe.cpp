#include "giprobe.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "giprobe_data.hpp"
#include "node.hpp"


namespace gd {


giprobe::___method_bindings giprobe::___mb = {};

void *giprobe::_detail_class_tag = nullptr;

void giprobe::___init_method_bindings() {
	___mb.mb_bake = gd::api->godot_method_bind_get_method("GIProbe", "bake");
	___mb.mb_debug_bake = gd::api->godot_method_bind_get_method("GIProbe", "debug_bake");
	___mb.mb_get_bias = gd::api->godot_method_bind_get_method("GIProbe", "get_bias");
	___mb.mb_get_dynamic_range = gd::api->godot_method_bind_get_method("GIProbe", "get_dynamic_range");
	___mb.mb_get_energy = gd::api->godot_method_bind_get_method("GIProbe", "get_energy");
	___mb.mb_get_extents = gd::api->godot_method_bind_get_method("GIProbe", "get_extents");
	___mb.mb_get_normal_bias = gd::api->godot_method_bind_get_method("GIProbe", "get_normal_bias");
	___mb.mb_get_probe_data = gd::api->godot_method_bind_get_method("GIProbe", "get_probe_data");
	___mb.mb_get_propagation = gd::api->godot_method_bind_get_method("GIProbe", "get_propagation");
	___mb.mb_get_subdiv = gd::api->godot_method_bind_get_method("GIProbe", "get_subdiv");
	___mb.mb_is_compressed = gd::api->godot_method_bind_get_method("GIProbe", "is_compressed");
	___mb.mb_is_interior = gd::api->godot_method_bind_get_method("GIProbe", "is_interior");
	___mb.mb_set_bias = gd::api->godot_method_bind_get_method("GIProbe", "set_bias");
	___mb.mb_set_compress = gd::api->godot_method_bind_get_method("GIProbe", "set_compress");
	___mb.mb_set_dynamic_range = gd::api->godot_method_bind_get_method("GIProbe", "set_dynamic_range");
	___mb.mb_set_energy = gd::api->godot_method_bind_get_method("GIProbe", "set_energy");
	___mb.mb_set_extents = gd::api->godot_method_bind_get_method("GIProbe", "set_extents");
	___mb.mb_set_interior = gd::api->godot_method_bind_get_method("GIProbe", "set_interior");
	___mb.mb_set_normal_bias = gd::api->godot_method_bind_get_method("GIProbe", "set_normal_bias");
	___mb.mb_set_probe_data = gd::api->godot_method_bind_get_method("GIProbe", "set_probe_data");
	___mb.mb_set_propagation = gd::api->godot_method_bind_get_method("GIProbe", "set_propagation");
	___mb.mb_set_subdiv = gd::api->godot_method_bind_get_method("GIProbe", "set_subdiv");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "GIProbe");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

giprobe *giprobe::_new()
{
	return (giprobe *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"GIProbe")());
}
void giprobe::bake(const node *from_node, const bool create_visual_debug) {
	___godot_icall_void_Object_bool(___mb.mb_bake, (const object *) this, from_node, create_visual_debug);
}

void giprobe::debug_bake() {
	___godot_icall_void(___mb.mb_debug_bake, (const object *) this);
}

real_t giprobe::get_bias() const {
	return ___godot_icall_float(___mb.mb_get_bias, (const object *) this);
}

int64_t giprobe::get_dynamic_range() const {
	return ___godot_icall_int(___mb.mb_get_dynamic_range, (const object *) this);
}

real_t giprobe::get_energy() const {
	return ___godot_icall_float(___mb.mb_get_energy, (const object *) this);
}

vector3 giprobe::get_extents() const {
	return ___godot_icall_Vector3(___mb.mb_get_extents, (const object *) this);
}

real_t giprobe::get_normal_bias() const {
	return ___godot_icall_float(___mb.mb_get_normal_bias, (const object *) this);
}

ref<giprobe_data> giprobe::get_probe_data() const {
	return ref<giprobe_data>::__internal_constructor(___godot_icall_Object(___mb.mb_get_probe_data, (const object *) this));
}

real_t giprobe::get_propagation() const {
	return ___godot_icall_float(___mb.mb_get_propagation, (const object *) this);
}

giprobe::Subdiv giprobe::get_subdiv() const {
	return (giprobe::Subdiv) ___godot_icall_int(___mb.mb_get_subdiv, (const object *) this);
}

bool giprobe::is_compressed() const {
	return ___godot_icall_bool(___mb.mb_is_compressed, (const object *) this);
}

bool giprobe::is_interior() const {
	return ___godot_icall_bool(___mb.mb_is_interior, (const object *) this);
}

void giprobe::set_bias(const real_t max) {
	___godot_icall_void_float(___mb.mb_set_bias, (const object *) this, max);
}

void giprobe::set_compress(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_compress, (const object *) this, enable);
}

void giprobe::set_dynamic_range(const int64_t max) {
	___godot_icall_void_int(___mb.mb_set_dynamic_range, (const object *) this, max);
}

void giprobe::set_energy(const real_t max) {
	___godot_icall_void_float(___mb.mb_set_energy, (const object *) this, max);
}

void giprobe::set_extents(const vector3 extents) {
	___godot_icall_void_Vector3(___mb.mb_set_extents, (const object *) this, extents);
}

void giprobe::set_interior(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_interior, (const object *) this, enable);
}

void giprobe::set_normal_bias(const real_t max) {
	___godot_icall_void_float(___mb.mb_set_normal_bias, (const object *) this, max);
}

void giprobe::set_probe_data(const ref<giprobe_data> data) {
	___godot_icall_void_Object(___mb.mb_set_probe_data, (const object *) this, data.ptr());
}

void giprobe::set_propagation(const real_t max) {
	___godot_icall_void_float(___mb.mb_set_propagation, (const object *) this, max);
}

void giprobe::set_subdiv(const int64_t subdiv) {
	___godot_icall_void_int(___mb.mb_set_subdiv, (const object *) this, subdiv);
}

}