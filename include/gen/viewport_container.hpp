#ifndef GODOT_CPP_VIEWPORTCONTAINER_HPP
#define GODOT_CPP_VIEWPORTCONTAINER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "container.hpp"
namespace gd {

class input_event;

class viewport_container : public container {
	struct ___method_bindings {
		godot_method_bind *mb__input;
		godot_method_bind *mb__unhandled_input;
		godot_method_bind *mb_get_stretch_shrink;
		godot_method_bind *mb_is_stretch_enabled;
		godot_method_bind *mb_set_stretch;
		godot_method_bind *mb_set_stretch_shrink;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "ViewportContainer"; }
	static inline const char *___get_godot_class_name() { return (const char *) "ViewportContainer"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static viewport_container *_new();

	// methods
	void _input(const ref<input_event> event);
	void _unhandled_input(const ref<input_event> event);
	int64_t get_stretch_shrink() const;
	bool is_stretch_enabled() const;
	void set_stretch(const bool enable);
	void set_stretch_shrink(const int64_t amount);

};

}

#endif