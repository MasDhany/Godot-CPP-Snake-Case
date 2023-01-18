#ifndef GODOT_CPP_ANIMATIONNODETRANSITION_HPP
#define GODOT_CPP_ANIMATIONNODETRANSITION_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "animation_node.hpp"
namespace gd {


class animation_node_transition : public animation_node {
	struct ___method_bindings {
		godot_method_bind *mb_get_cross_fade_time;
		godot_method_bind *mb_get_enabled_inputs;
		godot_method_bind *mb_get_input_caption;
		godot_method_bind *mb_is_input_set_as_auto_advance;
		godot_method_bind *mb_set_cross_fade_time;
		godot_method_bind *mb_set_enabled_inputs;
		godot_method_bind *mb_set_input_as_auto_advance;
		godot_method_bind *mb_set_input_caption;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "AnimationNodeTransition"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AnimationNodeTransition"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static animation_node_transition *_new();

	// methods
	real_t get_cross_fade_time() const;
	int64_t get_enabled_inputs();
	string get_input_caption(const int64_t input_) const;
	bool is_input_set_as_auto_advance(const int64_t input_) const;
	void set_cross_fade_time(const real_t time_);
	void set_enabled_inputs(const int64_t amount);
	void set_input_as_auto_advance(const int64_t input_, const bool enable);
	void set_input_caption(const int64_t input_, const string caption);

};

}

#endif