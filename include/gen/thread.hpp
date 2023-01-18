#ifndef GODOT_CPP_THREAD_HPP
#define GODOT_CPP_THREAD_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "reference.hpp"
namespace gd {

class object;

class thread : public reference {
	struct ___method_bindings {
		godot_method_bind *mb_get_id;
		godot_method_bind *mb_is_active;
		godot_method_bind *mb_is_alive;
		godot_method_bind *mb_start;
		godot_method_bind *mb_wait_to_finish;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Thread"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Thread"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Priority {
		PRIORITY_LOW = 0,
		PRIORITY_NORMAL = 1,
		PRIORITY_HIGH = 2,
	};

	// constants


	static thread *_new();

	// methods
	string get_id() const;
	bool is_active() const;
	bool is_alive() const;
	error start(const object *instance, const string method, const variant userdata = variant(), const int64_t priority = 1);
	variant wait_to_finish();

};

}

#endif