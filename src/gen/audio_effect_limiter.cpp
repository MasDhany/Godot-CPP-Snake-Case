#include "audio_effect_limiter.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


audio_effect_limiter::___method_bindings audio_effect_limiter::___mb = {};

void *audio_effect_limiter::_detail_class_tag = nullptr;

void audio_effect_limiter::___init_method_bindings() {
	___mb.mb_get_ceiling_db = gd::api->godot_method_bind_get_method("AudioEffectLimiter", "get_ceiling_db");
	___mb.mb_get_soft_clip_db = gd::api->godot_method_bind_get_method("AudioEffectLimiter", "get_soft_clip_db");
	___mb.mb_get_soft_clip_ratio = gd::api->godot_method_bind_get_method("AudioEffectLimiter", "get_soft_clip_ratio");
	___mb.mb_get_threshold_db = gd::api->godot_method_bind_get_method("AudioEffectLimiter", "get_threshold_db");
	___mb.mb_set_ceiling_db = gd::api->godot_method_bind_get_method("AudioEffectLimiter", "set_ceiling_db");
	___mb.mb_set_soft_clip_db = gd::api->godot_method_bind_get_method("AudioEffectLimiter", "set_soft_clip_db");
	___mb.mb_set_soft_clip_ratio = gd::api->godot_method_bind_get_method("AudioEffectLimiter", "set_soft_clip_ratio");
	___mb.mb_set_threshold_db = gd::api->godot_method_bind_get_method("AudioEffectLimiter", "set_threshold_db");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AudioEffectLimiter");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

audio_effect_limiter *audio_effect_limiter::_new()
{
	return (audio_effect_limiter *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AudioEffectLimiter")());
}
real_t audio_effect_limiter::get_ceiling_db() const {
	return ___godot_icall_float(___mb.mb_get_ceiling_db, (const object *) this);
}

real_t audio_effect_limiter::get_soft_clip_db() const {
	return ___godot_icall_float(___mb.mb_get_soft_clip_db, (const object *) this);
}

real_t audio_effect_limiter::get_soft_clip_ratio() const {
	return ___godot_icall_float(___mb.mb_get_soft_clip_ratio, (const object *) this);
}

real_t audio_effect_limiter::get_threshold_db() const {
	return ___godot_icall_float(___mb.mb_get_threshold_db, (const object *) this);
}

void audio_effect_limiter::set_ceiling_db(const real_t ceiling) {
	___godot_icall_void_float(___mb.mb_set_ceiling_db, (const object *) this, ceiling);
}

void audio_effect_limiter::set_soft_clip_db(const real_t soft_clip) {
	___godot_icall_void_float(___mb.mb_set_soft_clip_db, (const object *) this, soft_clip);
}

void audio_effect_limiter::set_soft_clip_ratio(const real_t soft_clip) {
	___godot_icall_void_float(___mb.mb_set_soft_clip_ratio, (const object *) this, soft_clip);
}

void audio_effect_limiter::set_threshold_db(const real_t threshold) {
	___godot_icall_void_float(___mb.mb_set_threshold_db, (const object *) this, threshold);
}

}