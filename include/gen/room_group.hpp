#ifndef GODOT_CPP_ROOMGROUP_HPP
#define GODOT_CPP_ROOMGROUP_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "spatial.hpp"
namespace gd {


class room_group : public spatial {
	struct ___method_bindings {
		godot_method_bind *mb_get_roomgroup_priority;
		godot_method_bind *mb_set_roomgroup_priority;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "RoomGroup"; }
	static inline const char *___get_godot_class_name() { return (const char *) "RoomGroup"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static room_group *_new();

	// methods
	int64_t get_roomgroup_priority() const;
	void set_roomgroup_priority(const int64_t p_priority);

};

}

#endif