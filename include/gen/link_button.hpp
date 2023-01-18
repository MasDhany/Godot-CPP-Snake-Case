#ifndef GODOT_CPP_LINKBUTTON_HPP
#define GODOT_CPP_LINKBUTTON_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "link_button.hpp"

#include "base_button.hpp"
namespace gd {


class link_button : public base_button {
	struct ___method_bindings {
		godot_method_bind *mb_get_text;
		godot_method_bind *mb_get_underline_mode;
		godot_method_bind *mb_set_text;
		godot_method_bind *mb_set_underline_mode;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "LinkButton"; }
	static inline const char *___get_godot_class_name() { return (const char *) "LinkButton"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum UnderlineMode {
		UNDERLINE_MODE_ALWAYS = 0,
		UNDERLINE_MODE_ON_HOVER = 1,
		UNDERLINE_MODE_NEVER = 2,
	};

	// constants


	static link_button *_new();

	// methods
	string get_text() const;
	link_button::UnderlineMode get_underline_mode() const;
	void set_text(const string text);
	void set_underline_mode(const int64_t underline_mode);

};

}

#endif