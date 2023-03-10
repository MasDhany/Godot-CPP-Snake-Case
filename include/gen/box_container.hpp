#ifndef GODOT_CPP_BOXCONTAINER_HPP
#define GODOT_CPP_BOXCONTAINER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "box_container.hpp"

#include "container.hpp"
namespace gd {


class box_container : public container {
	struct ___method_bindings {
		godot_method_bind *mb_add_spacer;
		godot_method_bind *mb_get_alignment;
		godot_method_bind *mb_set_alignment;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "BoxContainer"; }
	static inline const char *___get_godot_class_name() { return (const char *) "BoxContainer"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum AlignMode {
		ALIGN_BEGIN = 0,
		ALIGN_CENTER = 1,
		ALIGN_END = 2,
	};

	// constants

	// methods
	void add_spacer(const bool begin);
	box_container::AlignMode get_alignment() const;
	void set_alignment(const int64_t alignment);

};

}

#endif