#ifndef GODOT_CPP_EDITORFILEDIALOG_HPP
#define GODOT_CPP_EDITORFILEDIALOG_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "editor_file_dialog.hpp"

#include "confirmation_dialog.hpp"
namespace gd {

class input_event;
class texture;
class vbox_container;

class editor_file_dialog : public confirmation_dialog {
	struct ___method_bindings {
		godot_method_bind *mb__action_pressed;
		godot_method_bind *mb__cancel_pressed;
		godot_method_bind *mb__dir_entered;
		godot_method_bind *mb__favorite_move_down;
		godot_method_bind *mb__favorite_move_up;
		godot_method_bind *mb__favorite_pressed;
		godot_method_bind *mb__favorite_selected;
		godot_method_bind *mb__file_entered;
		godot_method_bind *mb__filter_selected;
		godot_method_bind *mb__go_back;
		godot_method_bind *mb__go_forward;
		godot_method_bind *mb__go_up;
		godot_method_bind *mb__item_db_selected;
		godot_method_bind *mb__item_list_item_rmb_selected;
		godot_method_bind *mb__item_list_rmb_clicked;
		godot_method_bind *mb__item_menu_id_pressed;
		godot_method_bind *mb__item_selected;
		godot_method_bind *mb__items_clear_selection;
		godot_method_bind *mb__make_dir;
		godot_method_bind *mb__make_dir_confirm;
		godot_method_bind *mb__multi_selected;
		godot_method_bind *mb__recent_selected;
		godot_method_bind *mb__save_confirm_pressed;
		godot_method_bind *mb__select_drive;
		godot_method_bind *mb__thumbnail_done;
		godot_method_bind *mb__thumbnail_result;
		godot_method_bind *mb__unhandled_input;
		godot_method_bind *mb__update_dir;
		godot_method_bind *mb__update_file_list;
		godot_method_bind *mb__update_file_name;
		godot_method_bind *mb_add_filter;
		godot_method_bind *mb_clear_filters;
		godot_method_bind *mb_get_access;
		godot_method_bind *mb_get_current_dir;
		godot_method_bind *mb_get_current_file;
		godot_method_bind *mb_get_current_path;
		godot_method_bind *mb_get_display_mode;
		godot_method_bind *mb_get_mode;
		godot_method_bind *mb_get_vbox;
		godot_method_bind *mb_invalidate;
		godot_method_bind *mb_is_overwrite_warning_disabled;
		godot_method_bind *mb_is_showing_hidden_files;
		godot_method_bind *mb_set_access;
		godot_method_bind *mb_set_current_dir;
		godot_method_bind *mb_set_current_file;
		godot_method_bind *mb_set_current_path;
		godot_method_bind *mb_set_disable_overwrite_warning;
		godot_method_bind *mb_set_display_mode;
		godot_method_bind *mb_set_mode;
		godot_method_bind *mb_set_show_hidden_files;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "EditorFileDialog"; }
	static inline const char *___get_godot_class_name() { return (const char *) "EditorFileDialog"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum DisplayMode {
		DISPLAY_THUMBNAILS = 0,
		DISPLAY_LIST = 1,
	};
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

	// methods
	void _action_pressed();
	void _cancel_pressed();
	void _dir_entered(const string arg0);
	void _favorite_move_down();
	void _favorite_move_up();
	void _favorite_pressed();
	void _favorite_selected(const int64_t arg0);
	void _file_entered(const string arg0);
	void _filter_selected(const int64_t arg0);
	void _go_back();
	void _go_forward();
	void _go_up();
	void _item_db_selected(const int64_t arg0);
	void _item_list_item_rmb_selected(const int64_t arg0, const vector2 arg1);
	void _item_list_rmb_clicked(const vector2 arg0);
	void _item_menu_id_pressed(const int64_t arg0);
	void _item_selected(const int64_t arg0);
	void _items_clear_selection();
	void _make_dir();
	void _make_dir_confirm();
	void _multi_selected(const int64_t arg0, const bool arg1);
	void _recent_selected(const int64_t arg0);
	void _save_confirm_pressed();
	void _select_drive(const int64_t arg0);
	void _thumbnail_done(const string arg0, const ref<texture> arg1, const ref<texture> arg2, const variant arg3);
	void _thumbnail_result(const string arg0, const ref<texture> arg1, const ref<texture> arg2, const variant arg3);
	void _unhandled_input(const ref<input_event> arg0);
	void _update_dir();
	void _update_file_list();
	void _update_file_name();
	void add_filter(const string filter);
	void clear_filters();
	editor_file_dialog::Access get_access() const;
	string get_current_dir() const;
	string get_current_file() const;
	string get_current_path() const;
	editor_file_dialog::DisplayMode get_display_mode() const;
	editor_file_dialog::Mode get_mode() const;
	vbox_container *get_vbox();
	void invalidate();
	bool is_overwrite_warning_disabled() const;
	bool is_showing_hidden_files() const;
	void set_access(const int64_t access);
	void set_current_dir(const string dir);
	void set_current_file(const string file_);
	void set_current_path(const string path_);
	void set_disable_overwrite_warning(const bool disable);
	void set_display_mode(const int64_t mode);
	void set_mode(const int64_t mode);
	void set_show_hidden_files(const bool show);

};

}

#endif