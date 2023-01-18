#ifndef GODOT_CPP_YSORT_HPP
#define GODOT_CPP_YSORT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "node2d.hpp"
namespace gd {


class ysort : public node2d {
	struct ___method_bindings {
		godot_method_bind *mb_is_sort_enabled;
		godot_method_bind *mb_set_sort_enabled;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "YSort"; }
	static inline const char *___get_godot_class_name() { return (const char *) "YSort"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static ysort *_new();

	// methods
	bool is_sort_enabled() const;
	void set_sort_enabled(const bool enabled);

};

}

#endif