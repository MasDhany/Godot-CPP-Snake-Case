#ifndef GODOT_CPP_VISUALSCRIPTINPUTACTION_HPP
#define GODOT_CPP_VISUALSCRIPTINPUTACTION_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "visual_script_input_action.hpp"

#include "visual_script_node.hpp"
namespace gd {


class visual_script_input_action : public visual_script_node {
	struct ___method_bindings {
		godot_method_bind *mb_get_action_mode;
		godot_method_bind *mb_get_action_name;
		godot_method_bind *mb_set_action_mode;
		godot_method_bind *mb_set_action_name;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "VisualScriptInputAction"; }
	static inline const char *___get_godot_class_name() { return (const char *) "VisualScriptInputAction"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Mode {
		MODE_PRESSED = 0,
		MODE_RELEASED = 1,
		MODE_JUST_PRESSED = 2,
		MODE_JUST_RELEASED = 3,
	};

	// constants


	static visual_script_input_action *_new();

	// methods
	visual_script_input_action::Mode get_action_mode() const;
	string get_action_name() const;
	void set_action_mode(const int64_t mode);
	void set_action_name(const string name);

};

}

#endif