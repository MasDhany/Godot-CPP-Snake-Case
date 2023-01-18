#ifndef GODOT_CPP_SHORTCUT_HPP
#define GODOT_CPP_SHORTCUT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {

class input_event;

class short_cut : public resource {
	struct ___method_bindings {
		godot_method_bind *mb_get_as_text;
		godot_method_bind *mb_get_shortcut;
		godot_method_bind *mb_is_shortcut;
		godot_method_bind *mb_is_valid;
		godot_method_bind *mb_set_shortcut;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "ShortCut"; }
	static inline const char *___get_godot_class_name() { return (const char *) "ShortCut"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static short_cut *_new();

	// methods
	string get_as_text() const;
	ref<input_event> get_shortcut() const;
	bool is_shortcut(const ref<input_event> event) const;
	bool is_valid() const;
	void set_shortcut(const ref<input_event> event);

};

}

#endif