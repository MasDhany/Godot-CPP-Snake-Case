#ifndef GODOT_CPP_UNDOREDO_HPP
#define GODOT_CPP_UNDOREDO_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "object.hpp"
namespace gd {

class object;

class undo_redo : public object {
	struct ___method_bindings {
		godot_method_bind *mb_add_do_method;
		godot_method_bind *mb_add_do_property;
		godot_method_bind *mb_add_do_reference;
		godot_method_bind *mb_add_undo_method;
		godot_method_bind *mb_add_undo_property;
		godot_method_bind *mb_add_undo_reference;
		godot_method_bind *mb_clear_history;
		godot_method_bind *mb_commit_action;
		godot_method_bind *mb_create_action;
		godot_method_bind *mb_get_current_action_name;
		godot_method_bind *mb_get_version;
		godot_method_bind *mb_has_redo;
		godot_method_bind *mb_has_undo;
		godot_method_bind *mb_is_commiting_action;
		godot_method_bind *mb_redo;
		godot_method_bind *mb_undo;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "UndoRedo"; }
	static inline const char *___get_godot_class_name() { return (const char *) "UndoRedo"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum MergeMode {
		MERGE_DISABLE = 0,
		MERGE_ENDS = 1,
		MERGE_ALL = 2,
	};

	// constants


	static undo_redo *_new();

	// methods
	void add_do_method(const object *object_, const string method, const array& __var_args = array());
	void add_do_property(const object *object_, const string property, const variant value);
	void add_do_reference(const object *object_);
	void add_undo_method(const object *object_, const string method, const array& __var_args = array());
	void add_undo_property(const object *object_, const string property, const variant value);
	void add_undo_reference(const object *object_);
	void clear_history(const bool increase_version = true);
	void commit_action();
	void create_action(const string name, const int64_t merge_mode = 0);
	string get_current_action_name() const;
	int64_t get_version() const;
	bool has_redo() const;
	bool has_undo() const;
	bool is_commiting_action() const;
	bool redo();
	bool undo();
	template <class... Args> void add_do_method(const object *object_, const string method, Args... args){
		return add_do_method(object_,method, array::make(args...));
	}
	template <class... Args> void add_undo_method(const object *object_, const string method, Args... args){
		return add_undo_method(object_,method, array::make(args...));
	}

};

}

#endif