#ifndef GODOT_CPP_FILEDIALOG_HPP
#define GODOT_CPP_FILEDIALOG_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "file_dialog.hpp"

#include "confirmation_dialog.hpp"
namespace gd {

class input_event;
class line_edit;
class object;
class vbox_container;

class file_dialog : public confirmation_dialog {
	struct ___method_bindings {
		godot_method_bind *mb__action_pressed;
		godot_method_bind *mb__cancel_pressed;
		godot_method_bind *mb__dir_entered;
		godot_method_bind *mb__file_entered;
		godot_method_bind *mb__filter_selected;
		godot_method_bind *mb__go_up;
		godot_method_bind *mb__make_dir;
		godot_method_bind *mb__make_dir_confirm;
		godot_method_bind *mb__save_confirm_pressed;
		godot_method_bind *mb__select_drive;
		godot_method_bind *mb__tree_item_activated;
		godot_method_bind *mb__tree_multi_selected;
		godot_method_bind *mb__tree_selected;
		godot_method_bind *mb__unhandled_input;
		godot_method_bind *mb__update_dir;
		godot_method_bind *mb__update_file_list;
		godot_method_bind *mb__update_file_name;
		godot_method_bind *mb_add_filter;
		godot_method_bind *mb_clear_filters;
		godot_method_bind *mb_deselect_items;
		godot_method_bind *mb_get_access;
		godot_method_bind *mb_get_current_dir;
		godot_method_bind *mb_get_current_file;
		godot_method_bind *mb_get_current_path;
		godot_method_bind *mb_get_filters;
		godot_method_bind *mb_get_line_edit;
		godot_method_bind *mb_get_mode;
		godot_method_bind *mb_get_vbox;
		godot_method_bind *mb_invalidate;
		godot_method_bind *mb_is_mode_overriding_title;
		godot_method_bind *mb_is_showing_hidden_files;
		godot_method_bind *mb_set_access;
		godot_method_bind *mb_set_current_dir;
		godot_method_bind *mb_set_current_file;
		godot_method_bind *mb_set_current_path;
		godot_method_bind *mb_set_filters;
		godot_method_bind *mb_set_mode;
		godot_method_bind *mb_set_mode_overrides_title;
		godot_method_bind *mb_set_show_hidden_files;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "FileDialog"; }
	static inline const char *___get_godot_class_name() { return (const char *) "FileDialog"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Mode {
		MODE_OPEN_FILE = 0,
		MODE_OPEN_FILES = 1,
		MODE_OPEN_DIR = 2,
		MODE_OPEN_ANY = 3,
		MODE_SAVE_FILE = 4,
	};
	enum Access {
		ACCESS_RESOURCES = 0,
		ACCESS_USERDATA = 1,
		ACCESS_FILESYSTEM = 2,
	};

	// constants


	static file_dialog *_new();

	// methods
	void _action_pressed();
	void _cancel_pressed();
	void _dir_entered(const string arg0);
	void _file_entered(const string arg0);
	void _filter_selected(const int64_t arg0);
	void _go_up();
	void _make_dir();
	void _make_dir_confirm();
	void _save_confirm_pressed();
	void _select_drive(const int64_t arg0);
	void _tree_item_activated();
	void _tree_multi_selected(const object *arg0, const int64_t arg1, const bool arg2);
	void _tree_selected();
	void _unhandled_input(const ref<input_event> arg0);
	void _update_dir();
	void _update_file_list();
	void _update_file_name();
	void add_filter(const string filter);
	void clear_filters();
	void deselect_items();
	file_dialog::Access get_access() const;
	string get_current_dir() const;
	string get_current_file() const;
	string get_current_path() const;
	pool_string_array get_filters() const;
	line_edit *get_line_edit();
	file_dialog::Mode get_mode() const;
	vbox_container *get_vbox();
	void invalidate();
	bool is_mode_overriding_title() const;
	bool is_showing_hidden_files() const;
	void set_access(const int64_t access);
	void set_current_dir(const string dir);
	void set_current_file(const string file_);
	void set_current_path(const string path_);
	void set_filters(const pool_string_array filters);
	void set_mode(const int64_t mode);
	void set_mode_overrides_title(const bool override);
	void set_show_hidden_files(const bool show);

};

}

#endif