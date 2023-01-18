#ifndef GODOT_CPP_AUDIOEFFECTDELAY_HPP
#define GODOT_CPP_AUDIOEFFECTDELAY_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "audio_effect.hpp"
namespace gd {


class audio_effect_delay : public audio_effect {
	struct ___method_bindings {
		godot_method_bind *mb_get_dry;
		godot_method_bind *mb_get_feedback_delay_ms;
		godot_method_bind *mb_get_feedback_level_db;
		godot_method_bind *mb_get_feedback_lowpass;
		godot_method_bind *mb_get_tap1_delay_ms;
		godot_method_bind *mb_get_tap1_level_db;
		godot_method_bind *mb_get_tap1_pan;
		godot_method_bind *mb_get_tap2_delay_ms;
		godot_method_bind *mb_get_tap2_level_db;
		godot_method_bind *mb_get_tap2_pan;
		godot_method_bind *mb_is_feedback_active;
		godot_method_bind *mb_is_tap1_active;
		godot_method_bind *mb_is_tap2_active;
		godot_method_bind *mb_set_dry;
		godot_method_bind *mb_set_feedback_active;
		godot_method_bind *mb_set_feedback_delay_ms;
		godot_method_bind *mb_set_feedback_level_db;
		godot_method_bind *mb_set_feedback_lowpass;
		godot_method_bind *mb_set_tap1_active;
		godot_method_bind *mb_set_tap1_delay_ms;
		godot_method_bind *mb_set_tap1_level_db;
		godot_method_bind *mb_set_tap1_pan;
		godot_method_bind *mb_set_tap2_active;
		godot_method_bind *mb_set_tap2_delay_ms;
		godot_method_bind *mb_set_tap2_level_db;
		godot_method_bind *mb_set_tap2_pan;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "AudioEffectDelay"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AudioEffectDelay"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static audio_effect_delay *_new();

	// methods
	real_t get_dry();
	real_t get_feedback_delay_ms() const;
	real_t get_feedback_level_db() const;
	real_t get_feedback_lowpass() const;
	real_t get_tap1_delay_ms() const;
	real_t get_tap1_level_db() const;
	real_t get_tap1_pan() const;
	real_t get_tap2_delay_ms() const;
	real_t get_tap2_level_db() const;
	real_t get_tap2_pan() const;
	bool is_feedback_active() const;
	bool is_tap1_active() const;
	bool is_tap2_active() const;
	void set_dry(const real_t amount);
	void set_feedback_active(const bool amount);
	void set_feedback_delay_ms(const real_t amount);
	void set_feedback_level_db(const real_t amount);
	void set_feedback_lowpass(const real_t amount);
	void set_tap1_active(const bool amount);
	void set_tap1_delay_ms(const real_t amount);
	void set_tap1_level_db(const real_t amount);
	void set_tap1_pan(const real_t amount);
	void set_tap2_active(const bool amount);
	void set_tap2_delay_ms(const real_t amount);
	void set_tap2_level_db(const real_t amount);
	void set_tap2_pan(const real_t amount);

};

}

#endif