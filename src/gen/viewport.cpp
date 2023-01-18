#include "viewport.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "camera.hpp"
#include "control.hpp"
#include "input_event.hpp"
#include "viewport_texture.hpp"
#include "world.hpp"
#include "world2d.hpp"


namespace gd {


viewport::___method_bindings viewport::___mb = {};

void *viewport::_detail_class_tag = nullptr;

void viewport::___init_method_bindings() {
	___mb.mb__gui_remove_focus = gd::api->godot_method_bind_get_method("Viewport", "_gui_remove_focus");
	___mb.mb__gui_show_tooltip = gd::api->godot_method_bind_get_method("Viewport", "_gui_show_tooltip");
	___mb.mb__own_world_changed = gd::api->godot_method_bind_get_method("Viewport", "_own_world_changed");
	___mb.mb__post_gui_grab_click_focus = gd::api->godot_method_bind_get_method("Viewport", "_post_gui_grab_click_focus");
	___mb.mb__process_picking = gd::api->godot_method_bind_get_method("Viewport", "_process_picking");
	___mb.mb__subwindow_visibility_changed = gd::api->godot_method_bind_get_method("Viewport", "_subwindow_visibility_changed");
	___mb.mb__vp_input = gd::api->godot_method_bind_get_method("Viewport", "_vp_input");
	___mb.mb__vp_input_text = gd::api->godot_method_bind_get_method("Viewport", "_vp_input_text");
	___mb.mb__vp_unhandled_input = gd::api->godot_method_bind_get_method("Viewport", "_vp_unhandled_input");
	___mb.mb_find_world = gd::api->godot_method_bind_get_method("Viewport", "find_world");
	___mb.mb_find_world_2d = gd::api->godot_method_bind_get_method("Viewport", "find_world_2d");
	___mb.mb_get_camera = gd::api->godot_method_bind_get_method("Viewport", "get_camera");
	___mb.mb_get_canvas_transform = gd::api->godot_method_bind_get_method("Viewport", "get_canvas_transform");
	___mb.mb_get_clear_mode = gd::api->godot_method_bind_get_method("Viewport", "get_clear_mode");
	___mb.mb_get_debug_draw = gd::api->godot_method_bind_get_method("Viewport", "get_debug_draw");
	___mb.mb_get_final_transform = gd::api->godot_method_bind_get_method("Viewport", "get_final_transform");
	___mb.mb_get_global_canvas_transform = gd::api->godot_method_bind_get_method("Viewport", "get_global_canvas_transform");
	___mb.mb_get_hdr = gd::api->godot_method_bind_get_method("Viewport", "get_hdr");
	___mb.mb_get_keep_3d_linear = gd::api->godot_method_bind_get_method("Viewport", "get_keep_3d_linear");
	___mb.mb_get_modal_stack_top = gd::api->godot_method_bind_get_method("Viewport", "get_modal_stack_top");
	___mb.mb_get_mouse_position = gd::api->godot_method_bind_get_method("Viewport", "get_mouse_position");
	___mb.mb_get_msaa = gd::api->godot_method_bind_get_method("Viewport", "get_msaa");
	___mb.mb_get_physics_object_picking = gd::api->godot_method_bind_get_method("Viewport", "get_physics_object_picking");
	___mb.mb_get_render_info = gd::api->godot_method_bind_get_method("Viewport", "get_render_info");
	___mb.mb_get_shadow_atlas_quadrant_subdiv = gd::api->godot_method_bind_get_method("Viewport", "get_shadow_atlas_quadrant_subdiv");
	___mb.mb_get_shadow_atlas_size = gd::api->godot_method_bind_get_method("Viewport", "get_shadow_atlas_size");
	___mb.mb_get_sharpen_intensity = gd::api->godot_method_bind_get_method("Viewport", "get_sharpen_intensity");
	___mb.mb_get_size = gd::api->godot_method_bind_get_method("Viewport", "get_size");
	___mb.mb_get_size_override = gd::api->godot_method_bind_get_method("Viewport", "get_size_override");
	___mb.mb_get_texture = gd::api->godot_method_bind_get_method("Viewport", "get_texture");
	___mb.mb_get_update_mode = gd::api->godot_method_bind_get_method("Viewport", "get_update_mode");
	___mb.mb_get_usage = gd::api->godot_method_bind_get_method("Viewport", "get_usage");
	___mb.mb_get_use_32_bpc_depth = gd::api->godot_method_bind_get_method("Viewport", "get_use_32_bpc_depth");
	___mb.mb_get_use_debanding = gd::api->godot_method_bind_get_method("Viewport", "get_use_debanding");
	___mb.mb_get_use_fxaa = gd::api->godot_method_bind_get_method("Viewport", "get_use_fxaa");
	___mb.mb_get_vflip = gd::api->godot_method_bind_get_method("Viewport", "get_vflip");
	___mb.mb_get_viewport_rid = gd::api->godot_method_bind_get_method("Viewport", "get_viewport_rid");
	___mb.mb_get_visible_rect = gd::api->godot_method_bind_get_method("Viewport", "get_visible_rect");
	___mb.mb_get_world = gd::api->godot_method_bind_get_method("Viewport", "get_world");
	___mb.mb_get_world_2d = gd::api->godot_method_bind_get_method("Viewport", "get_world_2d");
	___mb.mb_gui_get_drag_data = gd::api->godot_method_bind_get_method("Viewport", "gui_get_drag_data");
	___mb.mb_gui_has_modal_stack = gd::api->godot_method_bind_get_method("Viewport", "gui_has_modal_stack");
	___mb.mb_gui_is_drag_successful = gd::api->godot_method_bind_get_method("Viewport", "gui_is_drag_successful");
	___mb.mb_gui_is_dragging = gd::api->godot_method_bind_get_method("Viewport", "gui_is_dragging");
	___mb.mb_has_transparent_background = gd::api->godot_method_bind_get_method("Viewport", "has_transparent_background");
	___mb.mb_input = gd::api->godot_method_bind_get_method("Viewport", "input");
	___mb.mb_is_3d_disabled = gd::api->godot_method_bind_get_method("Viewport", "is_3d_disabled");
	___mb.mb_is_audio_listener = gd::api->godot_method_bind_get_method("Viewport", "is_audio_listener");
	___mb.mb_is_audio_listener_2d = gd::api->godot_method_bind_get_method("Viewport", "is_audio_listener_2d");
	___mb.mb_is_handling_input_locally = gd::api->godot_method_bind_get_method("Viewport", "is_handling_input_locally");
	___mb.mb_is_input_disabled = gd::api->godot_method_bind_get_method("Viewport", "is_input_disabled");
	___mb.mb_is_input_handled = gd::api->godot_method_bind_get_method("Viewport", "is_input_handled");
	___mb.mb_is_size_override_enabled = gd::api->godot_method_bind_get_method("Viewport", "is_size_override_enabled");
	___mb.mb_is_size_override_stretch_enabled = gd::api->godot_method_bind_get_method("Viewport", "is_size_override_stretch_enabled");
	___mb.mb_is_snap_controls_to_pixels_enabled = gd::api->godot_method_bind_get_method("Viewport", "is_snap_controls_to_pixels_enabled");
	___mb.mb_is_using_own_world = gd::api->godot_method_bind_get_method("Viewport", "is_using_own_world");
	___mb.mb_is_using_render_direct_to_screen = gd::api->godot_method_bind_get_method("Viewport", "is_using_render_direct_to_screen");
	___mb.mb_set_as_audio_listener = gd::api->godot_method_bind_get_method("Viewport", "set_as_audio_listener");
	___mb.mb_set_as_audio_listener_2d = gd::api->godot_method_bind_get_method("Viewport", "set_as_audio_listener_2d");
	___mb.mb_set_attach_to_screen_rect = gd::api->godot_method_bind_get_method("Viewport", "set_attach_to_screen_rect");
	___mb.mb_set_canvas_transform = gd::api->godot_method_bind_get_method("Viewport", "set_canvas_transform");
	___mb.mb_set_clear_mode = gd::api->godot_method_bind_get_method("Viewport", "set_clear_mode");
	___mb.mb_set_debug_draw = gd::api->godot_method_bind_get_method("Viewport", "set_debug_draw");
	___mb.mb_set_disable_3d = gd::api->godot_method_bind_get_method("Viewport", "set_disable_3d");
	___mb.mb_set_disable_input = gd::api->godot_method_bind_get_method("Viewport", "set_disable_input");
	___mb.mb_set_global_canvas_transform = gd::api->godot_method_bind_get_method("Viewport", "set_global_canvas_transform");
	___mb.mb_set_handle_input_locally = gd::api->godot_method_bind_get_method("Viewport", "set_handle_input_locally");
	___mb.mb_set_hdr = gd::api->godot_method_bind_get_method("Viewport", "set_hdr");
	___mb.mb_set_input_as_handled = gd::api->godot_method_bind_get_method("Viewport", "set_input_as_handled");
	___mb.mb_set_keep_3d_linear = gd::api->godot_method_bind_get_method("Viewport", "set_keep_3d_linear");
	___mb.mb_set_msaa = gd::api->godot_method_bind_get_method("Viewport", "set_msaa");
	___mb.mb_set_physics_object_picking = gd::api->godot_method_bind_get_method("Viewport", "set_physics_object_picking");
	___mb.mb_set_shadow_atlas_quadrant_subdiv = gd::api->godot_method_bind_get_method("Viewport", "set_shadow_atlas_quadrant_subdiv");
	___mb.mb_set_shadow_atlas_size = gd::api->godot_method_bind_get_method("Viewport", "set_shadow_atlas_size");
	___mb.mb_set_sharpen_intensity = gd::api->godot_method_bind_get_method("Viewport", "set_sharpen_intensity");
	___mb.mb_set_size = gd::api->godot_method_bind_get_method("Viewport", "set_size");
	___mb.mb_set_size_override = gd::api->godot_method_bind_get_method("Viewport", "set_size_override");
	___mb.mb_set_size_override_stretch = gd::api->godot_method_bind_get_method("Viewport", "set_size_override_stretch");
	___mb.mb_set_snap_controls_to_pixels = gd::api->godot_method_bind_get_method("Viewport", "set_snap_controls_to_pixels");
	___mb.mb_set_transparent_background = gd::api->godot_method_bind_get_method("Viewport", "set_transparent_background");
	___mb.mb_set_update_mode = gd::api->godot_method_bind_get_method("Viewport", "set_update_mode");
	___mb.mb_set_usage = gd::api->godot_method_bind_get_method("Viewport", "set_usage");
	___mb.mb_set_use_32_bpc_depth = gd::api->godot_method_bind_get_method("Viewport", "set_use_32_bpc_depth");
	___mb.mb_set_use_arvr = gd::api->godot_method_bind_get_method("Viewport", "set_use_arvr");
	___mb.mb_set_use_debanding = gd::api->godot_method_bind_get_method("Viewport", "set_use_debanding");
	___mb.mb_set_use_fxaa = gd::api->godot_method_bind_get_method("Viewport", "set_use_fxaa");
	___mb.mb_set_use_own_world = gd::api->godot_method_bind_get_method("Viewport", "set_use_own_world");
	___mb.mb_set_use_render_direct_to_screen = gd::api->godot_method_bind_get_method("Viewport", "set_use_render_direct_to_screen");
	___mb.mb_set_vflip = gd::api->godot_method_bind_get_method("Viewport", "set_vflip");
	___mb.mb_set_world = gd::api->godot_method_bind_get_method("Viewport", "set_world");
	___mb.mb_set_world_2d = gd::api->godot_method_bind_get_method("Viewport", "set_world_2d");
	___mb.mb_unhandled_input = gd::api->godot_method_bind_get_method("Viewport", "unhandled_input");
	___mb.mb_update_worlds = gd::api->godot_method_bind_get_method("Viewport", "update_worlds");
	___mb.mb_use_arvr = gd::api->godot_method_bind_get_method("Viewport", "use_arvr");
	___mb.mb_warp_mouse = gd::api->godot_method_bind_get_method("Viewport", "warp_mouse");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Viewport");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

viewport *viewport::_new()
{
	return (viewport *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Viewport")());
}
void viewport::_gui_remove_focus() {
	___godot_icall_void(___mb.mb__gui_remove_focus, (const object *) this);
}

void viewport::_gui_show_tooltip() {
	___godot_icall_void(___mb.mb__gui_show_tooltip, (const object *) this);
}

void viewport::_own_world_changed() {
	___godot_icall_void(___mb.mb__own_world_changed, (const object *) this);
}

void viewport::_post_gui_grab_click_focus() {
	___godot_icall_void(___mb.mb__post_gui_grab_click_focus, (const object *) this);
}

void viewport::_process_picking(const bool ignore_paused) {
	___godot_icall_void_bool(___mb.mb__process_picking, (const object *) this, ignore_paused);
}

void viewport::_subwindow_visibility_changed() {
	___godot_icall_void(___mb.mb__subwindow_visibility_changed, (const object *) this);
}

void viewport::_vp_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__vp_input, (const object *) this, arg0.ptr());
}

void viewport::_vp_input_text(const string text) {
	___godot_icall_void_String(___mb.mb__vp_input_text, (const object *) this, text);
}

void viewport::_vp_unhandled_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__vp_unhandled_input, (const object *) this, arg0.ptr());
}

ref<world> viewport::find_world() const {
	return ref<world>::__internal_constructor(___godot_icall_Object(___mb.mb_find_world, (const object *) this));
}

ref<world2d> viewport::find_world_2d() const {
	return ref<world2d>::__internal_constructor(___godot_icall_Object(___mb.mb_find_world_2d, (const object *) this));
}

camera *viewport::get_camera() const {
	return (camera *) ___godot_icall_Object(___mb.mb_get_camera, (const object *) this);
}

transform2d viewport::get_canvas_transform() const {
	return ___godot_icall_Transform2D(___mb.mb_get_canvas_transform, (const object *) this);
}

viewport::ClearMode viewport::get_clear_mode() const {
	return (viewport::ClearMode) ___godot_icall_int(___mb.mb_get_clear_mode, (const object *) this);
}

viewport::DebugDraw viewport::get_debug_draw() const {
	return (viewport::DebugDraw) ___godot_icall_int(___mb.mb_get_debug_draw, (const object *) this);
}

transform2d viewport::get_final_transform() const {
	return ___godot_icall_Transform2D(___mb.mb_get_final_transform, (const object *) this);
}

transform2d viewport::get_global_canvas_transform() const {
	return ___godot_icall_Transform2D(___mb.mb_get_global_canvas_transform, (const object *) this);
}

bool viewport::get_hdr() const {
	return ___godot_icall_bool(___mb.mb_get_hdr, (const object *) this);
}

bool viewport::get_keep_3d_linear() const {
	return ___godot_icall_bool(___mb.mb_get_keep_3d_linear, (const object *) this);
}

control *viewport::get_modal_stack_top() const {
	return (control *) ___godot_icall_Object(___mb.mb_get_modal_stack_top, (const object *) this);
}

vector2 viewport::get_mouse_position() const {
	return ___godot_icall_Vector2(___mb.mb_get_mouse_position, (const object *) this);
}

viewport::MSAA viewport::get_msaa() const {
	return (viewport::MSAA) ___godot_icall_int(___mb.mb_get_msaa, (const object *) this);
}

bool viewport::get_physics_object_picking() {
	return ___godot_icall_bool(___mb.mb_get_physics_object_picking, (const object *) this);
}

int64_t viewport::get_render_info(const int64_t info) {
	return ___godot_icall_int_int(___mb.mb_get_render_info, (const object *) this, info);
}

viewport::ShadowAtlasQuadrantSubdiv viewport::get_shadow_atlas_quadrant_subdiv(const int64_t quadrant) const {
	return (viewport::ShadowAtlasQuadrantSubdiv) ___godot_icall_int_int(___mb.mb_get_shadow_atlas_quadrant_subdiv, (const object *) this, quadrant);
}

int64_t viewport::get_shadow_atlas_size() const {
	return ___godot_icall_int(___mb.mb_get_shadow_atlas_size, (const object *) this);
}

real_t viewport::get_sharpen_intensity() const {
	return ___godot_icall_float(___mb.mb_get_sharpen_intensity, (const object *) this);
}

vector2 viewport::get_size() const {
	return ___godot_icall_Vector2(___mb.mb_get_size, (const object *) this);
}

vector2 viewport::get_size_override() const {
	return ___godot_icall_Vector2(___mb.mb_get_size_override, (const object *) this);
}

ref<viewport_texture> viewport::get_texture() const {
	return ref<viewport_texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_texture, (const object *) this));
}

viewport::UpdateMode viewport::get_update_mode() const {
	return (viewport::UpdateMode) ___godot_icall_int(___mb.mb_get_update_mode, (const object *) this);
}

viewport::Usage viewport::get_usage() const {
	return (viewport::Usage) ___godot_icall_int(___mb.mb_get_usage, (const object *) this);
}

bool viewport::get_use_32_bpc_depth() const {
	return ___godot_icall_bool(___mb.mb_get_use_32_bpc_depth, (const object *) this);
}

bool viewport::get_use_debanding() const {
	return ___godot_icall_bool(___mb.mb_get_use_debanding, (const object *) this);
}

bool viewport::get_use_fxaa() const {
	return ___godot_icall_bool(___mb.mb_get_use_fxaa, (const object *) this);
}

bool viewport::get_vflip() const {
	return ___godot_icall_bool(___mb.mb_get_vflip, (const object *) this);
}

rid viewport::get_viewport_rid() const {
	return ___godot_icall_RID(___mb.mb_get_viewport_rid, (const object *) this);
}

rect2 viewport::get_visible_rect() const {
	return ___godot_icall_Rect2(___mb.mb_get_visible_rect, (const object *) this);
}

ref<world> viewport::get_world() const {
	return ref<world>::__internal_constructor(___godot_icall_Object(___mb.mb_get_world, (const object *) this));
}

ref<world2d> viewport::get_world_2d() const {
	return ref<world2d>::__internal_constructor(___godot_icall_Object(___mb.mb_get_world_2d, (const object *) this));
}

variant viewport::gui_get_drag_data() const {
	return ___godot_icall_Variant(___mb.mb_gui_get_drag_data, (const object *) this);
}

bool viewport::gui_has_modal_stack() const {
	return ___godot_icall_bool(___mb.mb_gui_has_modal_stack, (const object *) this);
}

bool viewport::gui_is_drag_successful() const {
	return ___godot_icall_bool(___mb.mb_gui_is_drag_successful, (const object *) this);
}

bool viewport::gui_is_dragging() const {
	return ___godot_icall_bool(___mb.mb_gui_is_dragging, (const object *) this);
}

bool viewport::has_transparent_background() const {
	return ___godot_icall_bool(___mb.mb_has_transparent_background, (const object *) this);
}

void viewport::input_(const ref<input_event> local_event) {
	___godot_icall_void_Object(___mb.mb_input, (const object *) this, local_event.ptr());
}

bool viewport::is_3d_disabled() const {
	return ___godot_icall_bool(___mb.mb_is_3d_disabled, (const object *) this);
}

bool viewport::is_audio_listener() const {
	return ___godot_icall_bool(___mb.mb_is_audio_listener, (const object *) this);
}

bool viewport::is_audio_listener_2d() const {
	return ___godot_icall_bool(___mb.mb_is_audio_listener_2d, (const object *) this);
}

bool viewport::is_handling_input_locally() const {
	return ___godot_icall_bool(___mb.mb_is_handling_input_locally, (const object *) this);
}

bool viewport::is_input_disabled() const {
	return ___godot_icall_bool(___mb.mb_is_input_disabled, (const object *) this);
}

bool viewport::is_input_handled() const {
	return ___godot_icall_bool(___mb.mb_is_input_handled, (const object *) this);
}

bool viewport::is_size_override_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_size_override_enabled, (const object *) this);
}

bool viewport::is_size_override_stretch_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_size_override_stretch_enabled, (const object *) this);
}

bool viewport::is_snap_controls_to_pixels_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_snap_controls_to_pixels_enabled, (const object *) this);
}

bool viewport::is_using_own_world() const {
	return ___godot_icall_bool(___mb.mb_is_using_own_world, (const object *) this);
}

bool viewport::is_using_render_direct_to_screen() const {
	return ___godot_icall_bool(___mb.mb_is_using_render_direct_to_screen, (const object *) this);
}

void viewport::set_as_audio_listener(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_as_audio_listener, (const object *) this, enable);
}

void viewport::set_as_audio_listener_2d(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_as_audio_listener_2d, (const object *) this, enable);
}

void viewport::set_attach_to_screen_rect(const rect2 rect) {
	___godot_icall_void_Rect2(___mb.mb_set_attach_to_screen_rect, (const object *) this, rect);
}

void viewport::set_canvas_transform(const transform2d xform) {
	___godot_icall_void_Transform2D(___mb.mb_set_canvas_transform, (const object *) this, xform);
}

void viewport::set_clear_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_clear_mode, (const object *) this, mode);
}

void viewport::set_debug_draw(const int64_t debug_draw) {
	___godot_icall_void_int(___mb.mb_set_debug_draw, (const object *) this, debug_draw);
}

void viewport::set_disable_3d(const bool disable) {
	___godot_icall_void_bool(___mb.mb_set_disable_3d, (const object *) this, disable);
}

void viewport::set_disable_input(const bool disable) {
	___godot_icall_void_bool(___mb.mb_set_disable_input, (const object *) this, disable);
}

void viewport::set_global_canvas_transform(const transform2d xform) {
	___godot_icall_void_Transform2D(___mb.mb_set_global_canvas_transform, (const object *) this, xform);
}

void viewport::set_handle_input_locally(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_handle_input_locally, (const object *) this, enable);
}

void viewport::set_hdr(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_hdr, (const object *) this, enable);
}

void viewport::set_input_as_handled() {
	___godot_icall_void(___mb.mb_set_input_as_handled, (const object *) this);
}

void viewport::set_keep_3d_linear(const bool keep_3d_linear) {
	___godot_icall_void_bool(___mb.mb_set_keep_3d_linear, (const object *) this, keep_3d_linear);
}

void viewport::set_msaa(const int64_t msaa) {
	___godot_icall_void_int(___mb.mb_set_msaa, (const object *) this, msaa);
}

void viewport::set_physics_object_picking(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_physics_object_picking, (const object *) this, enable);
}

void viewport::set_shadow_atlas_quadrant_subdiv(const int64_t quadrant, const int64_t subdiv) {
	___godot_icall_void_int_int(___mb.mb_set_shadow_atlas_quadrant_subdiv, (const object *) this, quadrant, subdiv);
}

void viewport::set_shadow_atlas_size(const int64_t size) {
	___godot_icall_void_int(___mb.mb_set_shadow_atlas_size, (const object *) this, size);
}

void viewport::set_sharpen_intensity(const real_t intensity) {
	___godot_icall_void_float(___mb.mb_set_sharpen_intensity, (const object *) this, intensity);
}

void viewport::set_size(const vector2 size) {
	___godot_icall_void_Vector2(___mb.mb_set_size, (const object *) this, size);
}

void viewport::set_size_override(const bool enable, const vector2 size, const vector2 margin) {
	___godot_icall_void_bool_Vector2_Vector2(___mb.mb_set_size_override, (const object *) this, enable, size, margin);
}

void viewport::set_size_override_stretch(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_size_override_stretch, (const object *) this, enabled);
}

void viewport::set_snap_controls_to_pixels(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_snap_controls_to_pixels, (const object *) this, enabled);
}

void viewport::set_transparent_background(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_transparent_background, (const object *) this, enable);
}

void viewport::set_update_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_update_mode, (const object *) this, mode);
}

void viewport::set_usage(const int64_t usage) {
	___godot_icall_void_int(___mb.mb_set_usage, (const object *) this, usage);
}

void viewport::set_use_32_bpc_depth(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_use_32_bpc_depth, (const object *) this, enable);
}

void viewport::set_use_arvr(const bool use) {
	___godot_icall_void_bool(___mb.mb_set_use_arvr, (const object *) this, use);
}

void viewport::set_use_debanding(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_use_debanding, (const object *) this, enable);
}

void viewport::set_use_fxaa(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_use_fxaa, (const object *) this, enable);
}

void viewport::set_use_own_world(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_use_own_world, (const object *) this, enable);
}

void viewport::set_use_render_direct_to_screen(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_use_render_direct_to_screen, (const object *) this, enable);
}

void viewport::set_vflip(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_vflip, (const object *) this, enable);
}

void viewport::set_world(const ref<world> world_) {
	___godot_icall_void_Object(___mb.mb_set_world, (const object *) this, world_.ptr());
}

void viewport::set_world_2d(const ref<world2d> world_2d) {
	___godot_icall_void_Object(___mb.mb_set_world_2d, (const object *) this, world_2d.ptr());
}

void viewport::unhandled_input(const ref<input_event> local_event) {
	___godot_icall_void_Object(___mb.mb_unhandled_input, (const object *) this, local_event.ptr());
}

void viewport::update_worlds() {
	___godot_icall_void(___mb.mb_update_worlds, (const object *) this);
}

bool viewport::use_arvr() {
	return ___godot_icall_bool(___mb.mb_use_arvr, (const object *) this);
}

void viewport::warp_mouse(const vector2 to_position) {
	___godot_icall_void_Vector2(___mb.mb_warp_mouse, (const object *) this, to_position);
}

}