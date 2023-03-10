#ifndef GODOT_CPP_ANIMATIONNODEONESHOT_HPP
#define GODOT_CPP_ANIMATIONNODEONESHOT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "animation_node_one_shot.hpp"

#include "animation_node.hpp"
namespace gd {


class animation_node_one_shot : public animation_node {
	struct ___method_bindings {
		godot_method_bind *mb_get_autorestart_delay;
		godot_method_bind *mb_get_autorestart_random_delay;
		godot_method_bind *mb_get_fadein_time;
		godot_method_bind *mb_get_fadeout_time;
		godot_method_bind *mb_get_mix_mode;
		godot_method_bind *mb_has_autorestart;
		godot_method_bind *mb_is_using_sync;
		godot_method_bind *mb_set_autorestart;
		godot_method_bind *mb_set_autorestart_delay;
		godot_method_bind *mb_set_autorestart_random_delay;
		godot_method_bind *mb_set_fadein_time;
		godot_method_bind *mb_set_fadeout_time;
		godot_method_bind *mb_set_mix_mode;
		godot_method_bind *mb_set_use_sync;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "AnimationNodeOneShot"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AnimationNodeOneShot"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum MixMode {
		MIX_MODE_BLEND = 0,
		MIX_MODE_ADD = 1,
	};

	// constants


	static animation_node_one_shot *_new();

	// methods
	real_t get_autorestart_delay() const;
	real_t get_autorestart_random_delay() const;
	real_t get_fadein_time() const;
	real_t get_fadeout_time() const;
	animation_node_one_shot::MixMode get_mix_mode() const;
	bool has_autorestart() const;
	bool is_using_sync() const;
	void set_autorestart(const bool enable);
	void set_autorestart_delay(const real_t enable);
	void set_autorestart_random_delay(const real_t enable);
	void set_fadein_time(const real_t time_);
	void set_fadeout_time(const real_t time_);
	void set_mix_mode(const int64_t mode);
	void set_use_sync(const bool enable);

};

}

#endif