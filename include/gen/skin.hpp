#ifndef GODOT_CPP_SKIN_HPP
#define GODOT_CPP_SKIN_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {


class skin : public resource {
	struct ___method_bindings {
		godot_method_bind *mb_add_bind;
		godot_method_bind *mb_clear_binds;
		godot_method_bind *mb_get_bind_bone;
		godot_method_bind *mb_get_bind_count;
		godot_method_bind *mb_get_bind_name;
		godot_method_bind *mb_get_bind_pose;
		godot_method_bind *mb_set_bind_bone;
		godot_method_bind *mb_set_bind_count;
		godot_method_bind *mb_set_bind_name;
		godot_method_bind *mb_set_bind_pose;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Skin"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Skin"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static skin *_new();

	// methods
	void add_bind(const int64_t bone, const transform pose);
	void clear_binds();
	int64_t get_bind_bone(const int64_t bind_index) const;
	int64_t get_bind_count() const;
	string get_bind_name(const int64_t bind_index) const;
	transform get_bind_pose(const int64_t bind_index) const;
	void set_bind_bone(const int64_t bind_index, const int64_t bone);
	void set_bind_count(const int64_t bind_count);
	void set_bind_name(const int64_t bind_index, const string name);
	void set_bind_pose(const int64_t bind_index, const transform pose);

};

}

#endif