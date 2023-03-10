#ifndef GODOT_CPP_VISIBILITYENABLER_HPP
#define GODOT_CPP_VISIBILITYENABLER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "visibility_notifier.hpp"
namespace gd {

class node;

class visibility_enabler : public visibility_notifier {
	struct ___method_bindings {
		godot_method_bind *mb__node_removed;
		godot_method_bind *mb_is_enabler_enabled;
		godot_method_bind *mb_set_enabler;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "VisibilityEnabler"; }
	static inline const char *___get_godot_class_name() { return (const char *) "VisibilityEnabler"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Enabler {
		ENABLER_PAUSE_ANIMATIONS = 0,
		ENABLER_FREEZE_BODIES = 1,
		ENABLER_MAX = 2,
	};

	// constants


	static visibility_enabler *_new();

	// methods
	void _node_removed(const node *arg0);
	bool is_enabler_enabled(const int64_t enabler) const;
	void set_enabler(const int64_t enabler, const bool enabled);

};

}

#endif