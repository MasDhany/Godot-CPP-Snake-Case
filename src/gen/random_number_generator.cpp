#include "random_number_generator.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


random_number_generator::___method_bindings random_number_generator::___mb = {};

void *random_number_generator::_detail_class_tag = nullptr;

void random_number_generator::___init_method_bindings() {
	___mb.mb_get_seed = gd::api->godot_method_bind_get_method("RandomNumberGenerator", "get_seed");
	___mb.mb_get_state = gd::api->godot_method_bind_get_method("RandomNumberGenerator", "get_state");
	___mb.mb_randf = gd::api->godot_method_bind_get_method("RandomNumberGenerator", "randf");
	___mb.mb_randf_range = gd::api->godot_method_bind_get_method("RandomNumberGenerator", "randf_range");
	___mb.mb_randfn = gd::api->godot_method_bind_get_method("RandomNumberGenerator", "randfn");
	___mb.mb_randi = gd::api->godot_method_bind_get_method("RandomNumberGenerator", "randi");
	___mb.mb_randi_range = gd::api->godot_method_bind_get_method("RandomNumberGenerator", "randi_range");
	___mb.mb_randomize = gd::api->godot_method_bind_get_method("RandomNumberGenerator", "randomize");
	___mb.mb_set_seed = gd::api->godot_method_bind_get_method("RandomNumberGenerator", "set_seed");
	___mb.mb_set_state = gd::api->godot_method_bind_get_method("RandomNumberGenerator", "set_state");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "RandomNumberGenerator");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

random_number_generator *random_number_generator::_new()
{
	return (random_number_generator *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"RandomNumberGenerator")());
}
int64_t random_number_generator::get_seed() {
	return ___godot_icall_int(___mb.mb_get_seed, (const object *) this);
}

int64_t random_number_generator::get_state() const {
	return ___godot_icall_int(___mb.mb_get_state, (const object *) this);
}

real_t random_number_generator::randf() {
	return ___godot_icall_float(___mb.mb_randf, (const object *) this);
}

real_t random_number_generator::randf_range(const real_t from, const real_t to) {
	return ___godot_icall_float_float_float(___mb.mb_randf_range, (const object *) this, from, to);
}

real_t random_number_generator::randfn(const real_t mean, const real_t deviation) {
	return ___godot_icall_float_float_float(___mb.mb_randfn, (const object *) this, mean, deviation);
}

int64_t random_number_generator::randi() {
	return ___godot_icall_int(___mb.mb_randi, (const object *) this);
}

int64_t random_number_generator::randi_range(const int64_t from, const int64_t to) {
	return ___godot_icall_int_int_int(___mb.mb_randi_range, (const object *) this, from, to);
}

void random_number_generator::randomize() {
	___godot_icall_void(___mb.mb_randomize, (const object *) this);
}

void random_number_generator::set_seed(const int64_t seed) {
	___godot_icall_void_int(___mb.mb_set_seed, (const object *) this, seed);
}

void random_number_generator::set_state(const int64_t state) {
	___godot_icall_void_int(___mb.mb_set_state, (const object *) this, state);
}

}