#ifndef GODOT_CPP_OCCLUDERPOLYGON2D_HPP
#define GODOT_CPP_OCCLUDERPOLYGON2D_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "occluder_polygon2d.hpp"

#include "resource.hpp"
namespace gd {


class occluder_polygon2d : public resource {
	struct ___method_bindings {
		godot_method_bind *mb_get_cull_mode;
		godot_method_bind *mb_get_polygon;
		godot_method_bind *mb_is_closed;
		godot_method_bind *mb_set_closed;
		godot_method_bind *mb_set_cull_mode;
		godot_method_bind *mb_set_polygon;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "OccluderPolygon2D"; }
	static inline const char *___get_godot_class_name() { return (const char *) "OccluderPolygon2D"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum CullMode {
		CULL_DISABLED = 0,
		CULL_CLOCKWISE = 1,
		CULL_COUNTER_CLOCKWISE = 2,
	};

	// constants


	static occluder_polygon2d *_new();

	// methods
	occluder_polygon2d::CullMode get_cull_mode() const;
	pool_vector2_array get_polygon() const;
	bool is_closed() const;
	void set_closed(const bool closed);
	void set_cull_mode(const int64_t cull_mode);
	void set_polygon(const pool_vector2_array polygon);

};

}

#endif