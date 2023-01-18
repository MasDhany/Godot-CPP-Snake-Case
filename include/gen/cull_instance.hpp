#ifndef GODOT_CPP_CULLINSTANCE_HPP
#define GODOT_CPP_CULLINSTANCE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "cull_instance.hpp"

#include "spatial.hpp"
namespace gd {


class cull_instance : public spatial {
	struct ___method_bindings {
		godot_method_bind *mb_get_allow_merging;
		godot_method_bind *mb_get_include_in_bound;
		godot_method_bind *mb_get_portal_autoplace_priority;
		godot_method_bind *mb_get_portal_mode;
		godot_method_bind *mb_set_allow_merging;
		godot_method_bind *mb_set_include_in_bound;
		godot_method_bind *mb_set_portal_autoplace_priority;
		godot_method_bind *mb_set_portal_mode;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "CullInstance"; }
	static inline const char *___get_godot_class_name() { return (const char *) "CullInstance"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum PortalMode {
		PORTAL_MODE_STATIC = 0,
		PORTAL_MODE_DYNAMIC = 1,
		PORTAL_MODE_ROAMING = 2,
		PORTAL_MODE_GLOBAL = 3,
		PORTAL_MODE_IGNORE = 4,
	};

	// constants

	// methods
	bool get_allow_merging() const;
	bool get_include_in_bound() const;
	int64_t get_portal_autoplace_priority() const;
	cull_instance::PortalMode get_portal_mode() const;
	void set_allow_merging(const bool enabled);
	void set_include_in_bound(const bool enabled);
	void set_portal_autoplace_priority(const int64_t priority);
	void set_portal_mode(const int64_t mode);

};

}

#endif