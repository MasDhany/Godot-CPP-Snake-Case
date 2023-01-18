#ifndef GODOT_CPP_ROOM_HPP
#define GODOT_CPP_ROOM_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "spatial.hpp"
namespace gd {


class room : public spatial {
	struct ___method_bindings {
		godot_method_bind *mb_get_points;
		godot_method_bind *mb_get_room_simplify;
		godot_method_bind *mb_get_use_default_simplify;
		godot_method_bind *mb_set_point;
		godot_method_bind *mb_set_points;
		godot_method_bind *mb_set_room_simplify;
		godot_method_bind *mb_set_use_default_simplify;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Room"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Room"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static room *_new();

	// methods
	pool_vector3_array get_points() const;
	real_t get_room_simplify() const;
	bool get_use_default_simplify() const;
	void set_point(const int64_t index, const vector3 position);
	void set_points(const pool_vector3_array points);
	void set_room_simplify(const real_t p_value);
	void set_use_default_simplify(const bool p_use);

};

}

#endif