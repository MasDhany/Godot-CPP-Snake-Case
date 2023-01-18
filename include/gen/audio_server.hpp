#ifndef GODOT_CPP_AUDIOSERVER_HPP
#define GODOT_CPP_AUDIOSERVER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "audio_server.hpp"

#include "object.hpp"
namespace gd {

class audio_bus_layout;
class audio_effect;
class audio_effect_instance;

class audio_server : public object {
	static audio_server *_singleton;

	audio_server();

	struct ___method_bindings {
		godot_method_bind *mb_add_bus;
		godot_method_bind *mb_add_bus_effect;
		godot_method_bind *mb_capture_get_device;
		godot_method_bind *mb_capture_get_device_list;
		godot_method_bind *mb_capture_set_device;
		godot_method_bind *mb_generate_bus_layout;
		godot_method_bind *mb_get_bus_channels;
		godot_method_bind *mb_get_bus_count;
		godot_method_bind *mb_get_bus_effect;
		godot_method_bind *mb_get_bus_effect_count;
		godot_method_bind *mb_get_bus_effect_instance;
		godot_method_bind *mb_get_bus_index;
		godot_method_bind *mb_get_bus_name;
		godot_method_bind *mb_get_bus_peak_volume_left_db;
		godot_method_bind *mb_get_bus_peak_volume_right_db;
		godot_method_bind *mb_get_bus_send;
		godot_method_bind *mb_get_bus_volume_db;
		godot_method_bind *mb_get_device;
		godot_method_bind *mb_get_device_list;
		godot_method_bind *mb_get_global_rate_scale;
		godot_method_bind *mb_get_mix_rate;
		godot_method_bind *mb_get_output_latency;
		godot_method_bind *mb_get_speaker_mode;
		godot_method_bind *mb_get_time_since_last_mix;
		godot_method_bind *mb_get_time_to_next_mix;
		godot_method_bind *mb_is_bus_bypassing_effects;
		godot_method_bind *mb_is_bus_effect_enabled;
		godot_method_bind *mb_is_bus_mute;
		godot_method_bind *mb_is_bus_solo;
		godot_method_bind *mb_lock;
		godot_method_bind *mb_move_bus;
		godot_method_bind *mb_remove_bus;
		godot_method_bind *mb_remove_bus_effect;
		godot_method_bind *mb_set_bus_bypass_effects;
		godot_method_bind *mb_set_bus_count;
		godot_method_bind *mb_set_bus_effect_enabled;
		godot_method_bind *mb_set_bus_layout;
		godot_method_bind *mb_set_bus_mute;
		godot_method_bind *mb_set_bus_name;
		godot_method_bind *mb_set_bus_send;
		godot_method_bind *mb_set_bus_solo;
		godot_method_bind *mb_set_bus_volume_db;
		godot_method_bind *mb_set_device;
		godot_method_bind *mb_set_global_rate_scale;
		godot_method_bind *mb_swap_bus_effects;
		godot_method_bind *mb_unlock;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline audio_server *get_singleton()
	{
		if (!audio_server::_singleton) {
			audio_server::_singleton = new audio_server;
		}
		return audio_server::_singleton;
	}

	static inline const char *___get_class_name() { return (const char *) "AudioServer"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AudioServer"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum SpeakerMode {
		SPEAKER_MODE_STEREO = 0,
		SPEAKER_SURROUND_31 = 1,
		SPEAKER_SURROUND_51 = 2,
		SPEAKER_SURROUND_71 = 3,
	};

	// constants

	// methods
	void add_bus(const int64_t at_position = -1);
	void add_bus_effect(const int64_t bus_idx, const ref<audio_effect> effect, const int64_t at_position = -1);
	string capture_get_device();
	array capture_get_device_list();
	void capture_set_device(const string name);
	ref<audio_bus_layout> generate_bus_layout() const;
	int64_t get_bus_channels(const int64_t bus_idx) const;
	int64_t get_bus_count() const;
	ref<audio_effect> get_bus_effect(const int64_t bus_idx, const int64_t effect_idx);
	int64_t get_bus_effect_count(const int64_t bus_idx);
	ref<audio_effect_instance> get_bus_effect_instance(const int64_t bus_idx, const int64_t effect_idx, const int64_t channel = 0);
	int64_t get_bus_index(const string bus_name) const;
	string get_bus_name(const int64_t bus_idx) const;
	real_t get_bus_peak_volume_left_db(const int64_t bus_idx, const int64_t channel) const;
	real_t get_bus_peak_volume_right_db(const int64_t bus_idx, const int64_t channel) const;
	string get_bus_send(const int64_t bus_idx) const;
	real_t get_bus_volume_db(const int64_t bus_idx) const;
	string get_device();
	array get_device_list();
	real_t get_global_rate_scale() const;
	real_t get_mix_rate() const;
	real_t get_output_latency() const;
	audio_server::SpeakerMode get_speaker_mode() const;
	real_t get_time_since_last_mix() const;
	real_t get_time_to_next_mix() const;
	bool is_bus_bypassing_effects(const int64_t bus_idx) const;
	bool is_bus_effect_enabled(const int64_t bus_idx, const int64_t effect_idx) const;
	bool is_bus_mute(const int64_t bus_idx) const;
	bool is_bus_solo(const int64_t bus_idx) const;
	void lock();
	void move_bus(const int64_t index, const int64_t to_index);
	void remove_bus(const int64_t index);
	void remove_bus_effect(const int64_t bus_idx, const int64_t effect_idx);
	void set_bus_bypass_effects(const int64_t bus_idx, const bool enable);
	void set_bus_count(const int64_t amount);
	void set_bus_effect_enabled(const int64_t bus_idx, const int64_t effect_idx, const bool enabled);
	void set_bus_layout(const ref<audio_bus_layout> bus_layout);
	void set_bus_mute(const int64_t bus_idx, const bool enable);
	void set_bus_name(const int64_t bus_idx, const string name);
	void set_bus_send(const int64_t bus_idx, const string send);
	void set_bus_solo(const int64_t bus_idx, const bool enable);
	void set_bus_volume_db(const int64_t bus_idx, const real_t volume_db);
	void set_device(const string device);
	void set_global_rate_scale(const real_t scale);
	void swap_bus_effects(const int64_t bus_idx, const int64_t effect_idx, const int64_t by_effect_idx);
	void unlock();

};

}

#endif