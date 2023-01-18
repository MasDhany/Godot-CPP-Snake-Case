#ifndef GODOT_CPP_EDITORRESOURCEPICKER_HPP
#define GODOT_CPP_EDITORRESOURCEPICKER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "hbox_container.hpp"
namespace gd {

class control;
class input_event;
class object;
class resource;
class texture;

class editor_resource_picker : public hbox_container {
	struct ___method_bindings {
		godot_method_bind *mb__button_draw;
		godot_method_bind *mb__button_input;
		godot_method_bind *mb__edit_menu_cbk;
		godot_method_bind *mb__file_quick_selected;
		godot_method_bind *mb__file_selected;
		godot_method_bind *mb__resource_selected;
		godot_method_bind *mb__update_menu;
		godot_method_bind *mb__update_resource_preview;
		godot_method_bind *mb_can_drop_data_fw;
		godot_method_bind *mb_drop_data_fw;
		godot_method_bind *mb_get_allowed_types;
		godot_method_bind *mb_get_base_type;
		godot_method_bind *mb_get_drag_data_fw;
		godot_method_bind *mb_get_edited_resource;
		godot_method_bind *mb_handle_menu_selected;
		godot_method_bind *mb_is_editable;
		godot_method_bind *mb_is_toggle_mode;
		godot_method_bind *mb_set_base_type;
		godot_method_bind *mb_set_create_options;
		godot_method_bind *mb_set_editable;
		godot_method_bind *mb_set_edited_resource;
		godot_method_bind *mb_set_toggle_mode;
		godot_method_bind *mb_set_toggle_pressed;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "EditorResourcePicker"; }
	static inline const char *___get_godot_class_name() { return (const char *) "EditorResourcePicker"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	void _button_draw();
	void _button_input(const ref<input_event> arg0);
	void _edit_menu_cbk(const int64_t arg0);
	void _file_quick_selected();
	void _file_selected(const string arg0);
	void _resource_selected();
	void _update_menu();
	void _update_resource_preview(const string arg0, const ref<texture> arg1, const ref<texture> arg2, const int64_t arg3);
	bool can_drop_data_fw(const vector2 position, const variant data, const control *from) const;
	void drop_data_fw(const vector2 position, const variant data, const control *from);
	pool_string_array get_allowed_types() const;
	string get_base_type() const;
	variant get_drag_data_fw(const vector2 position, const control *from);
	ref<resource> get_edited_resource();
	bool handle_menu_selected(const int64_t id);
	bool is_editable() const;
	bool is_toggle_mode() const;
	void set_base_type(const string base_type);
	void set_create_options(const object *menu_node);
	void set_editable(const bool enable);
	void set_edited_resource(const ref<resource> resource_);
	void set_toggle_mode(const bool enable);
	void set_toggle_pressed(const bool pressed);

};

}

#endif